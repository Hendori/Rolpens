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
/* EditorHTTPServer::_clear_client() */void EditorHTTPServer::_clear_client(EditorHTTPServer *this) {
   Object *pOVar1;
   char cVar2;
   ulong uVar3;
   undefined8 *puVar4;
   byte bVar5;
   bVar5 = 0;
   for (int i = 0; i < 3; i++) {
      pOVar1 = *(Object**)( this + ( -8*i + 456 ) );
      if (pOVar1 != (Object*)0) {
         *(undefined8*)( this + ( -8*i + 456 ) ) = 0;
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 320 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

      }

   }

   *(undefined8*)( this + 0x1f0 ) = 0;
   *(undefined8*)( this + 0x11e8 ) = 0;
   puVar4 = (undefined8*)( ( ulong )(this + 0x1f8) & 0xfffffffffffffff8 );
   for (uVar3 = ( ulong )(( (int)this - (int)(undefined8*)( ( ulong )(this + 0x1f8) & 0xfffffffffffffff8 ) ) + 0x11f0U >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
   }

   *(undefined8*)( this + 0x1e8 ) = 0;
   *(undefined4*)( this + 0x11f0 ) = 0;
   return;
}
/* EditorHTTPServer::_set_internal_certs(Ref<Crypto>) */void EditorHTTPServer::_set_internal_certs(EditorHTTPServer *this, undefined8 *param_2) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   char cVar4;
   int iVar5;
   Object *pOVar6;
   Object *pOVar7;
   long in_FS_OFFSET;
   Object *local_a8;
   long local_90;
   long local_88;
   long local_80;
   Object *local_78;
   long local_70;
   long local_68;
   long local_60;
   Object *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   EditorPaths::get_cache_dir();
   local_58 = (Object*)0x103b65;
   local_60 = 0;
   local_50 = 0x10;
   String::parse_latin1((StrRange*)&local_60);
   String::path_join((String*)&local_88);
   lVar3 = local_60;
   if (local_60 != 0) {
      LOCK();
      plVar1 = (long*)( local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   local_60 = 0;
   local_58 = (Object*)0x103b76;
   local_50 = 0x10;
   String::parse_latin1((StrRange*)&local_60);
   String::path_join((String*)&local_80);
   lVar3 = local_60;
   if (local_60 == 0) {
      LAB_001002e2:cVar4 = FileAccess::exists((String*)&local_88);
   }
 else {
      LOCK();
      plVar1 = (long*)( local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_001002e2;
      local_60 = 0;
      Memory::free_static((void*)( lVar3 + -0x10 ), false);
      cVar4 = FileAccess::exists((String*)&local_88);
   }

   if (( cVar4 != '\0' ) && ( cVar4 = FileAccess::exists((String*)&local_80) ),cVar4 != '\0') {
      local_a8 = (Object*)CryptoKey::create(true);
      if (( local_a8 == (Object*)0x0 ) || ( cVar4 = cVar4 == '\0' )) {
         pOVar6 = *(Object**)( this + 0x1d0 );
         if (pOVar6 != (Object*)0x0) {
            *(undefined8*)( this + 0x1d0 ) = 0;
            cVar4 = RefCounted::unreference();
            if (cVar4 != '\0') {
               cVar4 = predelete_handler(pOVar6);
               local_a8 = (Object*)0x0;
               if (cVar4 != '\0') goto LAB_001009c2;
            }

         }

      }
 else {
         pOVar6 = *(Object**)( this + 0x1d0 );
         pOVar7 = pOVar6;
         if (local_a8 != pOVar6) {
            *(Object**)( this + 0x1d0 ) = local_a8;
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
               *(undefined8*)( this + 0x1d0 ) = 0;
            }

            pOVar7 = local_a8;
            if (( ( pOVar6 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) {
               LAB_001009c2:( **(code**)( *(long*)pOVar6 + 0x140 ) )();
               Memory::free_static(pOVar6, false);
               pOVar7 = local_a8;
               if (local_a8 == (Object*)0x0) goto LAB_001006c8;
            }

         }

         local_a8 = pOVar7;
         cVar4 = RefCounted::unreference();
         if (( cVar4 != '\0' ) && ( cVar4 = cVar4 != '\0' )) {
            ( **(code**)( *(long*)local_a8 + 0x140 ) )(local_a8);
            Memory::free_static(local_a8, false);
         }

      }

      LAB_001006c8:pOVar6 = (Object*)X509Certificate::create(true);
      if (( pOVar6 == (Object*)0x0 ) || ( cVar4 = cVar4 == '\0' )) {
         pOVar6 = *(Object**)( this + 0x1d8 );
         if (pOVar6 != (Object*)0x0) {
            *(undefined8*)( this + 0x1d8 ) = 0;
            cVar4 = RefCounted::unreference();
            goto joined_r0x00100a15;
         }

      }
 else {
         pOVar7 = *(Object**)( this + 0x1d8 );
         if (pOVar6 != pOVar7) {
            *(Object**)( this + 0x1d8 ) = pOVar6;
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
               *(undefined8*)( this + 0x1d8 ) = 0;
            }

            if (( ( pOVar7 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar7 + 0x140 ))(pOVar7);
            Memory::free_static(pOVar7, false);
         }

      }

      cVar4 = RefCounted::unreference();
      joined_r0x00100a15:if (( cVar4 != '\0' ) && ( cVar4 = cVar4 != '\0' )) {
         ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
         Memory::free_static(pOVar6, false);
      }

   }

   iVar5 = ( **(code**)( **(long**)( this + 0x1d0 ) + 0x1c8 ) )(*(long**)( this + 0x1d0 ), (String*)&local_88, 0);
   if (( iVar5 == 0 ) && ( iVar5 = iVar5 == 0 )) goto LAB_00100534;
}
( **(code**)( *(long*)*param_2 + 0x158 ) )(&local_58, (long*)*param_2, 0x800);pOVar6 = *(Object**)( this + 0x1d0 );pOVar7 = pOVar6;if (local_58 == pOVar6) {
   LAB_00100356:if (( ( pOVar7 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar6 = local_58,cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar6 + 0x140 ))(pOVar6);
   Memory::free_static(pOVar6, false);
}
pOVar6 = *(Object**)( this + 0x1d0 );}
  else{
   *(Object**)( this + 0x1d0 ) = local_58;
   if (local_58 != (Object*)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
         *(undefined8*)( this + 0x1d0 ) = 0;
      }

      pOVar7 = local_58;
      if (pOVar6 != (Object*)0x0) {
         cVar4 = RefCounted::unreference();
         goto joined_r0x0010034b;
      }

      goto LAB_00100356;
   }

   if (pOVar6 != (Object*)0x0) {
      cVar4 = RefCounted::unreference();
      joined_r0x0010034b:pOVar7 = local_58;
      if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler(pOVar6) ),pOVar7 = local_58,cVar4 != '\0') {
         ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
         Memory::free_static(pOVar6, false);
         pOVar7 = local_58;
      }

      goto LAB_00100356;
   }

}
( **(code**)( *(long*)pOVar6 + 0x1d0 ) )(pOVar6, (String*)&local_88, 0);plVar1 = (long*)*param_2;pcVar2 = *(code**)( *plVar1 + 0x160 );local_60 = 0;local_50 = 0xe;local_58 = (Object*)0x103b87;String::parse_latin1((StrRange*)&local_60);local_58 = (Object*)0x103b96;local_68 = 0;local_50 = 0xe;String::parse_latin1((StrRange*)&local_68);local_70 = 0;local_58 = (Object*)0x103d28;local_50 = 0x27;String::parse_latin1((StrRange*)&local_70);local_78 = (Object*)0x0;if (( *(Object**)( this + 0x1d0 ) != (Object*)0x0 ) && ( local_78 = *(Object**)( this + 0x1d0 ) ),cVar4 = RefCounted::reference(),cVar4 == '\0') {
   local_78 = (Object*)0x0;
}
( *pcVar2 )(&local_58, plVar1, &local_78, (StrRange*)&local_70, (StrRange*)&local_68, (StrRange*)&local_60);pOVar6 = *(Object**)( this + 0x1d8 );pOVar7 = pOVar6;if (local_58 == pOVar6) {
   LAB_001004b1:if (( ( pOVar7 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar6 = local_58,cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar6 + 0x140 ))(pOVar6);
   Memory::free_static(pOVar6, false);
}
 else {
   *(Object**)( this + 0x1d8 ) = local_58;
   if (local_58 != (Object*)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
         *(undefined8*)( this + 0x1d8 ) = 0;
      }

      pOVar7 = local_58;
      if (pOVar6 != (Object*)0x0) {
         cVar4 = RefCounted::unreference();
         goto joined_r0x001004a6;
      }

      goto LAB_001004b1;
   }

   if (pOVar6 != (Object*)0x0) {
      cVar4 = RefCounted::unreference();
      joined_r0x001004a6:pOVar7 = local_58;
      if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler(pOVar6) ),pOVar7 = local_58,cVar4 != '\0') {
         ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
         Memory::free_static(pOVar6, false);
         pOVar7 = local_58;
      }

      goto LAB_001004b1;
   }

}
if (( ( local_78 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar6 = local_78,cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar6 + 0x140 ))(pOVar6);Memory::free_static(pOVar6, false);}lVar3 = local_70;if (local_70 != 0) {
   LOCK();
   plVar1 = (long*)( local_70 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void*)( lVar3 + -0x10 ), false);
   }

}
lVar3 = local_68;if (local_68 != 0) {
   LOCK();
   plVar1 = (long*)( local_68 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void*)( lVar3 + -0x10 ), false);
   }

}
lVar3 = local_60;if (local_60 != 0) {
   LOCK();
   plVar1 = (long*)( local_60 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void*)( lVar3 + -0x10 ), false);
   }

}
( **(code**)( **(long**)( this + 0x1d8 ) + 0x1d8 ) )();LAB_00100534:lVar3 = local_80;if (local_80 != 0) {
   LOCK();
   plVar1 = (long*)( local_80 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void*)( lVar3 + -0x10 ), false);
   }

}
lVar3 = local_88;if (local_88 != 0) {
   LOCK();
   plVar1 = (long*)( local_88 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void*)( lVar3 + -0x10 ), false);
   }

}
if (local_90 != 0) {
   LOCK();
   plVar1 = (long*)( local_90 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      Memory::free_static((void*)( local_90 + -0x10 ), false);
   }

}
if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* EditorHTTPServer::stop() */void EditorHTTPServer::stop(EditorHTTPServer *this) {
   char cVar1;
   this[0x11f4] = (EditorHTTPServer)0x1;
   cVar1 = Thread::is_started();
   if (cVar1 != '\0') {
      Thread::wait_to_finish();
   }

   if (*(long*)( this + 0x180 ) != 0) {
      TCPServer::stop();
   }

   _clear_client(this);
   return;
}
/* EditorHTTPServer::~EditorHTTPServer() */void EditorHTTPServer::~EditorHTTPServer(EditorHTTPServer *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   Object *pOVar4;
   char cVar5;
   long lVar6;
   void *pvVar7;
   *(undefined***)this = &PTR__initialize_classv_00104b50;
   stop(this);
   Thread::~Thread((Thread*)( this + 0x1220 ));
   for (int i = 0; i < 5; i++) {
      if (*(long*)( this + ( -8*i + 472 ) ) != 0) {
         cVar5 = RefCounted::unreference();
         if (cVar5 != '\0') {
            pOVar4 = *(Object**)( this + ( -8*i + 472 ) );
            cVar5 = predelete_handler(pOVar4);
            if (cVar5 != '\0') {
               ( **(code**)( *(long*)pOVar4 + 320 ) )(pOVar4);
               Memory::free_static(pOVar4, false);
            }

         }

      }

   }

   pvVar7 = *(void**)( this + 400 );
   if (pvVar7 != (void*)0x0) {
      if (*(int*)( this + 0x1b4 ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1b0 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x1b4 ) = 0;
            *(undefined1(*) [16])( this + 0x1a0 ) = (undefined1[16])0x0;
         }
 else {
            lVar6 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x198 ) + lVar6 ) != 0) {
                  pvVar7 = *(void**)( (long)pvVar7 + lVar6 * 2 );
                  *(int*)( *(long*)( this + 0x198 ) + lVar6 ) = 0;
                  if (*(long*)( (long)pvVar7 + 0x18 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar7 + 0x18 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar7 + 0x18 );
                        *(undefined8*)( (long)pvVar7 + 0x18 ) = 0;
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
                  pvVar7 = *(void**)( this + 400 );
                  *(undefined8*)( (long)pvVar7 + lVar6 * 2 ) = 0;
               }

               lVar6 = lVar6 + 4;
            }
 while ( lVar6 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x1b4 ) = 0;
            *(undefined1(*) [16])( this + 0x1a0 ) = (undefined1[16])0x0;
            if (pvVar7 == (void*)0x0) goto LAB_00100c7d;
         }

      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x198 ), false);
   }

   LAB_00100c7d:if (*(long*)( this + 0x180 ) != 0) {
      cVar5 = RefCounted::unreference();
      if (cVar5 != '\0') {
         pOVar4 = *(Object**)( this + 0x180 );
         cVar5 = predelete_handler(pOVar4);
         if (cVar5 != '\0') {
            ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
            Memory::free_static(pOVar4, false);
         }

      }

   }

   *(undefined***)this = &PTR__initialize_classv_001049f0;
   Object::~Object((Object*)this);
   return;
}
/* EditorHTTPServer::~EditorHTTPServer() */void EditorHTTPServer::~EditorHTTPServer(EditorHTTPServer *this) {
   ~EditorHTTPServer(this)
   ;;
   operator_delete(this, 0x1230);
   return;
}
/* EditorHTTPServer::listen(int, IPAddress, bool, String, String) */int EditorHTTPServer::listen(Settings *param_1, ulong param_2, Settings param_3, long *param_4, long *param_5) {
   long lVar1;
   Object *pOVar2;
   char cVar3;
   int iVar4;
   Object *pOVar5;
   Object *pOVar6;
   long *plVar7;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = pthread_mutex_lock((pthread_mutex_t*)( param_1 + 0x11f8 ));
   if (iVar4 != 0) {
      std::__throw_system_error(iVar4);
      goto LAB_00101339;
   }

   iVar4 = 0x16;
   cVar3 = TCPServer::is_listening();
   if (cVar3 == '\0') {
      param_1[0x1e0] = param_3;
      if (param_3 == (Settings)0x0) {
         LAB_00100f60:iVar4 = TCPServer::listen(( ushort ) * (undefined8*)( param_1 + 0x180 ), (IPAddress*)( param_2 & 0xffff ));
         if (iVar4 == 0) {
            param_1[0x11f4] = (Settings)0x0;
            Thread::start((_func_void_void_ptr*)( param_1 + 0x1220 ), _server_thread_poll, param_1);
         }

      }
 else {
         pOVar5 = (Object*)Crypto::create(true);
         if (pOVar5 != (Object*)0x0) {
            cVar3 = RefCounted::init_ref();
            if (cVar3 != '\0') {
               if (( ( ( *param_4 != 0 ) && ( 1 < *(uint*)( *param_4 + -8 ) ) ) && ( *param_5 != 0 ) ) && ( 1 < *(uint*)( *param_5 + -8 ) )) {
                  pOVar6 = (Object*)CryptoKey::create(true);
                  if (pOVar6 == (Object*)0x0) {
                     LAB_0010102c:pOVar6 = *(Object**)( param_1 + 0x1d0 );
                     plVar7 = (long*)0x0;
                     if (pOVar6 != (Object*)0x0) {
                        *(undefined8*)( param_1 + 0x1d0 ) = 0;
                        goto LAB_00101045;
                     }

                  }
 else {
                     cVar3 = RefCounted::init_ref();
                     if (cVar3 == '\0') goto LAB_0010102c;
                     pOVar2 = *(Object**)( param_1 + 0x1d0 );
                     if (pOVar6 != pOVar2) {
                        *(Object**)( param_1 + 0x1d0 ) = pOVar6;
                        cVar3 = RefCounted::reference();
                        if (cVar3 == '\0') {
                           *(undefined8*)( param_1 + 0x1d0 ) = 0;
                        }

                        if (pOVar2 != (Object*)0x0) {
                           cVar3 = RefCounted::unreference();
                           if (cVar3 != '\0') {
                              cVar3 = predelete_handler(pOVar2);
                              if (cVar3 != '\0') {
                                 ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                                 Memory::free_static(pOVar2, false);
                              }

                           }

                        }

                     }

                     LAB_00101045:cVar3 = RefCounted::unreference();
                     if (cVar3 != '\0') {
                        cVar3 = predelete_handler(pOVar6);
                        if (cVar3 != '\0') {
                           ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
                           Memory::free_static(pOVar6, false);
                        }

                     }

                     plVar7 = *(long**)( param_1 + 0x1d0 );
                  }

                  iVar4 = ( **(code**)( *plVar7 + 0x1c8 ) )(plVar7, param_4, 0);
                  if (iVar4 == 0) {
                     pOVar6 = (Object*)X509Certificate::create(true);
                     if (pOVar6 == (Object*)0x0) {
                        LAB_00101258:pOVar6 = *(Object**)( param_1 + 0x1d8 );
                        plVar7 = (long*)0x0;
                        if (pOVar6 != (Object*)0x0) {
                           *(undefined8*)( param_1 + 0x1d8 ) = 0;
                           goto LAB_001010da;
                        }

                     }
 else {
                        cVar3 = RefCounted::init_ref();
                        if (cVar3 == '\0') goto LAB_00101258;
                        pOVar2 = *(Object**)( param_1 + 0x1d8 );
                        if (pOVar6 != pOVar2) {
                           *(Object**)( param_1 + 0x1d8 ) = pOVar6;
                           cVar3 = RefCounted::reference();
                           if (cVar3 == '\0') {
                              *(undefined8*)( param_1 + 0x1d8 ) = 0;
                           }

                           if (pOVar2 != (Object*)0x0) {
                              cVar3 = RefCounted::unreference();
                              if (cVar3 != '\0') {
                                 cVar3 = predelete_handler(pOVar2);
                                 if (cVar3 != '\0') {
                                    ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                                    Memory::free_static(pOVar2, false);
                                 }

                              }

                           }

                        }

                        LAB_001010da:cVar3 = RefCounted::unreference();
                        if (cVar3 != '\0') {
                           cVar3 = predelete_handler(pOVar6);
                           if (cVar3 != '\0') {
                              ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
                              Memory::free_static(pOVar6, false);
                           }

                        }

                        plVar7 = *(long**)( param_1 + 0x1d8 );
                     }

                     iVar4 = ( **(code**)( *plVar7 + 0x1c8 ) )();
                     if (iVar4 == 0) goto LAB_00100f2d;
                     _err_print_error("listen", "platform/web/export/editor_http_server.cpp", 0xdf, "Condition \"err != OK\" is true. Returning: err", 0, 0);
                  }
 else {
                     _err_print_error("listen", "platform/web/export/editor_http_server.cpp", 0xdc, "Condition \"err != OK\" is true. Returning: err", 0, 0);
                  }

                  cVar3 = RefCounted::unreference();
                  if (cVar3 != '\0') {
                     cVar3 = predelete_handler(pOVar5);
                     if (cVar3 != '\0') {
                        ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                        Memory::free_static(pOVar5, false);
                     }

                  }

                  goto LAB_00100f7b;
               }

               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  _set_internal_certs((EditorHTTPServer*)param_1);
               }
 else {
                  _set_internal_certs((EditorHTTPServer*)param_1);
                  cVar3 = RefCounted::unreference();
                  if (cVar3 != '\0') {
                     cVar3 = predelete_handler(pOVar5);
                     if (cVar3 != '\0') {
                        ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                        Memory::free_static(pOVar5, false);
                     }

                  }

               }

               LAB_00100f2d:cVar3 = RefCounted::unreference();
               if (cVar3 != '\0') {
                  cVar3 = predelete_handler(pOVar5);
                  if (cVar3 != '\0') {
                     ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                     Memory::free_static(pOVar5, false);
                  }

               }

               goto LAB_00100f60;
            }

         }

         iVar4 = 2;
      }

   }

   LAB_00100f7b:pthread_mutex_unlock((pthread_mutex_t*)( param_1 + 0x11f8 ));
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar4;
   }

   LAB_00101339:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* EditorHTTPServer::is_listening() const */ulong EditorHTTPServer::is_listening(EditorHTTPServer *this) {
   long *plVar1;
   pthread_mutex_t *__mutex;
   HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>> *this_00;
   long lVar2;
   char cVar3;
   uint uVar4;
   StrRange *pSVar5;
   TCPServer *this_01;
   ulong uVar6;
   RefCounted *this_02;
   Object *pOVar7;
   Object *pOVar8;
   long in_FS_OFFSET;
   long lStack_68;
   char *pcStack_60;
   undefined8 uStack_58;
   long lStack_48;
   EditorHTTPServer *pEStack_38;
   pthread_mutex_t *ppStack_30;
   __mutex = (pthread_mutex_t*)( this + 0x11f8 );
   uVar4 = pthread_mutex_lock(__mutex);
   if (uVar4 == 0) {
      uVar4 = TCPServer::is_listening();
      pthread_mutex_unlock(__mutex);
      return (ulong)uVar4;
   }

   this_02 = (RefCounted*)(ulong)uVar4;
   std::__throw_system_error(uVar4);
   this_00 = (HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)( this_02 + 0x188 );
   lStack_48 = *(long*)( in_FS_OFFSET + 0x28 );
   pEStack_38 = this;
   ppStack_30 = __mutex;
   RefCounted::RefCounted(this_02);
   *(undefined8*)( this_02 + 0x180 ) = 0;
   *(undefined***)this_02 = &PTR__initialize_classv_00104b50;
   *(undefined8*)( this_02 + 0x1b0 ) = 2;
   *(undefined8*)( this_02 + 0x1d8 ) = 0;
   this_02[0x1e0] = (RefCounted)0x0;
   *(undefined8*)( this_02 + 0x1e8 ) = 0;
   *(undefined4*)( this_02 + 0x11f0 ) = 0;
   *(undefined1(*) [16])( this_02 + 400 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_02 + 0x1a0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_02 + 0x1b8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_02 + 0x1c8 ) = (undefined1[16])0x0;
   this_02[0x11f4] = (RefCounted)0x0;
   *(undefined1(*) [16])( this_02 + 0x1208 ) = (undefined1[16])0x0;
   *(undefined8*)( this_02 + 0x1218 ) = 0;
   *(undefined4*)( this_02 + 0x1208 ) = 1;
   *(undefined1(*) [16])( this_02 + 0x11f8 ) = (undefined1[16])0x0;
   Thread::Thread((Thread*)( this_02 + 0x1220 ));
   pcStack_60 = "html";
   lStack_68 = 0;
   uStack_58 = 4;
   String::parse_latin1((StrRange*)&lStack_68);
   pSVar5 = (StrRange*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator [](this_00, (StrRange*)&lStack_68);
   uStack_58 = 9;
   pcStack_60 = "text/html";
   String::parse_latin1(pSVar5);
   lVar2 = lStack_68;
   if (lStack_68 != 0) {
      LOCK();
      plVar1 = (long*)( lStack_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lStack_68 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lStack_68 = 0;
   pcStack_60 = "js";
   uStack_58 = 2;
   String::parse_latin1((StrRange*)&lStack_68);
   pSVar5 = (StrRange*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator [](this_00, (StrRange*)&lStack_68);
   uStack_58 = 0x16;
   pcStack_60 = "application/javascript";
   String::parse_latin1(pSVar5);
   lVar2 = lStack_68;
   if (lStack_68 != 0) {
      LOCK();
      plVar1 = (long*)( lStack_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lStack_68 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lStack_68 = 0;
   pcStack_60 = "json";
   uStack_58 = 4;
   String::parse_latin1((StrRange*)&lStack_68);
   pSVar5 = (StrRange*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator [](this_00, (StrRange*)&lStack_68);
   uStack_58 = 0x10;
   pcStack_60 = "application/json";
   String::parse_latin1(pSVar5);
   lVar2 = lStack_68;
   if (lStack_68 != 0) {
      LOCK();
      plVar1 = (long*)( lStack_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lStack_68 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lStack_68 = 0;
   pcStack_60 = "pck";
   uStack_58 = 3;
   String::parse_latin1((StrRange*)&lStack_68);
   pSVar5 = (StrRange*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator [](this_00, (StrRange*)&lStack_68);
   uStack_58 = 0x18;
   pcStack_60 = "application/octet-stream";
   String::parse_latin1(pSVar5);
   lVar2 = lStack_68;
   if (lStack_68 != 0) {
      LOCK();
      plVar1 = (long*)( lStack_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lStack_68 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lStack_68 = 0;
   pcStack_60 = "png";
   uStack_58 = 3;
   String::parse_latin1((StrRange*)&lStack_68);
   pSVar5 = (StrRange*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator [](this_00, (StrRange*)&lStack_68);
   uStack_58 = 9;
   pcStack_60 = "image/png";
   String::parse_latin1(pSVar5);
   lVar2 = lStack_68;
   if (lStack_68 != 0) {
      LOCK();
      plVar1 = (long*)( lStack_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lStack_68 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lStack_68 = 0;
   pcStack_60 = "svg";
   uStack_58 = 3;
   String::parse_latin1((StrRange*)&lStack_68);
   pSVar5 = (StrRange*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator [](this_00, (StrRange*)&lStack_68);
   uStack_58 = 9;
   pcStack_60 = "image/svg";
   String::parse_latin1(pSVar5);
   lVar2 = lStack_68;
   if (lStack_68 != 0) {
      LOCK();
      plVar1 = (long*)( lStack_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lStack_68 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lStack_68 = 0;
   pcStack_60 = "wasm";
   uStack_58 = 4;
   String::parse_latin1((StrRange*)&lStack_68);
   pSVar5 = (StrRange*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator [](this_00, (StrRange*)&lStack_68);
   uStack_58 = 0x10;
   pcStack_60 = "application/wasm";
   String::parse_latin1(pSVar5);
   lVar2 = lStack_68;
   if (lStack_68 != 0) {
      LOCK();
      plVar1 = (long*)( lStack_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lStack_68 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   this_01 = (TCPServer*)operator_new(0x188, "");
   TCPServer::TCPServer(this_01);
   postinitialize_handler((Object*)this_01);
   cVar3 = RefCounted::init_ref();
   if (cVar3 == '\0') {
      pOVar8 = *(Object**)( this_02 + 0x180 );
      if (pOVar8 == (Object*)0x0) goto LAB_001017a5;
      *(undefined8*)( this_02 + 0x180 ) = 0;
      cVar3 = RefCounted::unreference();
      if (cVar3 == '\0') goto LAB_001017a5;
      this_01 = (TCPServer*)0x0;
      cVar3 = predelete_handler(pOVar8);
      if (cVar3 == '\0') goto LAB_001017a5;
      LAB_00101943:( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
      Memory::free_static(pOVar8, false);
      pOVar7 = (Object*)this_01;
      if (this_01 == (TCPServer*)0x0) goto LAB_001017a5;
   }
 else {
      pOVar8 = *(Object**)( this_02 + 0x180 );
      pOVar7 = pOVar8;
      if (this_01 != (TCPServer*)pOVar8) {
         *(TCPServer**)( this_02 + 0x180 ) = this_01;
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( this_02 + 0x180 ) = 0;
         }

         pOVar7 = (Object*)this_01;
         if (( ( pOVar8 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) goto LAB_00101943;
      }

   }

   cVar3 = RefCounted::unreference();
   if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
      ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
      Memory::free_static(pOVar7, false);
   }

   LAB_001017a5:if (lStack_48 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   uVar6 = stop((EditorHTTPServer*)this_02);
   return uVar6;
}
/* EditorHTTPServer::EditorHTTPServer() */void EditorHTTPServer::EditorHTTPServer(EditorHTTPServer *this) {
   long *plVar1;
   HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>> *this_00;
   long lVar2;
   char cVar3;
   StrRange *pSVar4;
   TCPServer *this_01;
   Object *pOVar5;
   Object *pOVar6;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   this_00 = (HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)( this + 0x188 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   RefCounted::RefCounted((RefCounted*)this);
   *(undefined8*)( this + 0x180 ) = 0;
   *(undefined***)this = &PTR__initialize_classv_00104b50;
   *(undefined8*)( this + 0x1b0 ) = 2;
   *(undefined8*)( this + 0x1d8 ) = 0;
   this[0x1e0] = (EditorHTTPServer)0x0;
   *(undefined8*)( this + 0x1e8 ) = 0;
   *(undefined4*)( this + 0x11f0 ) = 0;
   *(undefined1(*) [16])( this + 400 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1a0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1b8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1c8 ) = (undefined1[16])0x0;
   this[0x11f4] = (EditorHTTPServer)0x0;
   *(undefined1(*) [16])( this + 0x1208 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x1218 ) = 0;
   *(undefined4*)( this + 0x1208 ) = 1;
   *(undefined1(*) [16])( this + 0x11f8 ) = (undefined1[16])0x0;
   Thread::Thread((Thread*)( this + 0x1220 ));
   local_48 = "html";
   local_50 = 0;
   local_40 = 4;
   String::parse_latin1((StrRange*)&local_50);
   pSVar4 = (StrRange*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator [](this_00, (StrRange*)&local_50);
   local_40 = 9;
   local_48 = "text/html";
   String::parse_latin1(pSVar4);
   lVar2 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   local_50 = 0;
   local_48 = "js";
   local_40 = 2;
   String::parse_latin1((StrRange*)&local_50);
   pSVar4 = (StrRange*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator [](this_00, (StrRange*)&local_50);
   local_40 = 0x16;
   local_48 = "application/javascript";
   String::parse_latin1(pSVar4);
   lVar2 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   local_50 = 0;
   local_48 = "json";
   local_40 = 4;
   String::parse_latin1((StrRange*)&local_50);
   pSVar4 = (StrRange*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator [](this_00, (StrRange*)&local_50);
   local_40 = 0x10;
   local_48 = "application/json";
   String::parse_latin1(pSVar4);
   lVar2 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   local_50 = 0;
   local_48 = "pck";
   local_40 = 3;
   String::parse_latin1((StrRange*)&local_50);
   pSVar4 = (StrRange*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator [](this_00, (StrRange*)&local_50);
   local_40 = 0x18;
   local_48 = "application/octet-stream";
   String::parse_latin1(pSVar4);
   lVar2 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   local_50 = 0;
   local_48 = "png";
   local_40 = 3;
   String::parse_latin1((StrRange*)&local_50);
   pSVar4 = (StrRange*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator [](this_00, (StrRange*)&local_50);
   local_40 = 9;
   local_48 = "image/png";
   String::parse_latin1(pSVar4);
   lVar2 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   local_50 = 0;
   local_48 = "svg";
   local_40 = 3;
   String::parse_latin1((StrRange*)&local_50);
   pSVar4 = (StrRange*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator [](this_00, (StrRange*)&local_50);
   local_40 = 9;
   local_48 = "image/svg";
   String::parse_latin1(pSVar4);
   lVar2 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   local_50 = 0;
   local_48 = "wasm";
   local_40 = 4;
   String::parse_latin1((StrRange*)&local_50);
   pSVar4 = (StrRange*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator [](this_00, (StrRange*)&local_50);
   local_40 = 0x10;
   local_48 = "application/wasm";
   String::parse_latin1(pSVar4);
   lVar2 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   this_01 = (TCPServer*)operator_new(0x188, "");
   TCPServer::TCPServer(this_01);
   postinitialize_handler((Object*)this_01);
   cVar3 = RefCounted::init_ref();
   if (cVar3 == '\0') {
      pOVar6 = *(Object**)( this + 0x180 );
      if (pOVar6 == (Object*)0x0) goto LAB_001017a5;
      *(undefined8*)( this + 0x180 ) = 0;
      cVar3 = RefCounted::unreference();
      if (cVar3 == '\0') goto LAB_001017a5;
      this_01 = (TCPServer*)0x0;
      cVar3 = predelete_handler(pOVar6);
      if (cVar3 == '\0') goto LAB_001017a5;
      LAB_00101943:( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
      Memory::free_static(pOVar6, false);
      pOVar5 = (Object*)this_01;
      if (this_01 == (TCPServer*)0x0) goto LAB_001017a5;
   }
 else {
      pOVar6 = *(Object**)( this + 0x180 );
      pOVar5 = pOVar6;
      if (this_01 != (TCPServer*)pOVar6) {
         *(TCPServer**)( this + 0x180 ) = this_01;
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( this + 0x180 ) = 0;
         }

         pOVar5 = (Object*)this_01;
         if (( ( pOVar6 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) goto LAB_00101943;
      }

   }

   cVar3 = RefCounted::unreference();
   if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
      ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
      Memory::free_static(pOVar5, false);
   }

   LAB_001017a5:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   stop(this);
   return;
}
/* EditorHTTPServer::_send_response() */void EditorHTTPServer::_send_response(EditorHTTPServer *this) {
   long *plVar1;
   EditorHTTPServer *pEVar2;
   uint uVar3;
   code *pcVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   EditorHTTPServer *pEVar13;
   char cVar14;
   int iVar15;
   uint uVar16;
   undefined8 uVar17;
   long *plVar18;
   ulong uVar19;
   long lVar20;
   uint uVar21;
   long lVar22;
   long lVar23;
   uint uVar24;
   long in_FS_OFFSET;
   bool bVar25;
   long local_10c8;
   long local_10c0;
   long local_10b8;
   long local_10b0;
   long local_10a8;
   long local_10a0;
   Object *local_1098;
   long local_1090;
   long local_1088;
   long local_1080;
   char local_1078[8];
   long local_1070;
   long local_1068;
   String *local_1060;
   EditorHTTPServer *local_1058;
   size_t local_1050;
   undefined1 local_1048[4104];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_1068 = 0;
   local_1050 = strlen((char*)( this + 0x1f0 ));
   local_1058 = this + 0x1f0;
   String::parse_latin1((StrRange*)&local_1068);
   String::split(local_1078, SUB81((StrRange*)&local_1068, 0), 0x103c3a);
   lVar23 = local_1068;
   if (local_1068 != 0) {
      LOCK();
      plVar1 = (long*)( local_1068 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_1068 = 0;
         Memory::free_static((void*)( lVar23 + -0x10 ), false);
      }

   }

   if (( local_1070 == 0 ) || ( lVar23 = *(long*)( local_1070 + -8 ) ),(int)lVar23 < 4) {
      local_1058 = (EditorHTTPServer*)0x103c3d;
      local_1068 = 0;
      local_1050 = 0x10;
      String::parse_latin1((StrRange*)&local_1068);
      itos((long)&local_1088);
      operator+((char *)&
      local_1080,(String*)"Not enough response headers, got: ";
      String::operator +((String*)&local_1058, (String*)&local_1080);
      _err_print_error("_send_response", "platform/web/export/editor_http_server.cpp", 0x4c, "Condition \"len < 4\" is true.", (String*)&local_1058, 0, 0);
      pEVar13 = local_1058;
      if (local_1058 != (EditorHTTPServer*)0x0) {
         LOCK();
         pEVar2 = local_1058 + -0x10;
         *(long*)pEVar2 = *(long*)pEVar2 + -1;
         UNLOCK();
         if (*(long*)pEVar2 == 0) {
            local_1058 = (EditorHTTPServer*)0x0;
            Memory::free_static(pEVar13 + -0x10, false);
         }

      }

      lVar23 = local_1080;
      if (local_1080 != 0) {
         LOCK();
         plVar1 = (long*)( local_1080 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_1080 = 0;
            Memory::free_static((void*)( lVar23 + -0x10 ), false);
         }

      }

      lVar23 = local_1088;
      if (local_1088 != 0) {
         LOCK();
         plVar1 = (long*)( local_1088 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_1088 = 0;
            Memory::free_static((void*)( lVar23 + -0x10 ), false);
         }

      }

      lVar23 = local_1068;
      if (local_1068 != 0) {
         LOCK();
         plVar1 = (long*)( local_1068 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_1068 = 0;
            Memory::free_static((void*)( lVar23 + -0x10 ), false);
         }

      }

      goto LAB_00101d74;
   }

   if (lVar23 < 1) {
      lVar20 = 0;
      goto LAB_0010201b;
   }

   String::split((char*)&local_1068, SUB81(local_1070, 0), 0x103c7a);
   if (( local_1060 == (String*)0x0 ) || ( *(long*)( local_1060 + -8 ) < 2 )) {
      _err_print_error("_send_response", "platform/web/export/editor_http_server.cpp", 0x4f, "Condition \"req.size() < 2\" is true.", "Invalid protocol or status code.", 0, 0);
   }
 else {
      cVar14 = String::operator !=(local_1060, "GET");
      if (cVar14 == '\0') {
         if (local_1060 == (String*)0x0) {
            lVar23 = 0;
         }
 else {
            lVar23 = *(long*)( local_1060 + -8 );
            if (2 < lVar23) {
               cVar14 = String::operator !=(local_1060 + 0x10, (char*)( (long)&DAT_00103cab + 3 ));
               if (cVar14 != '\0') goto LAB_001023b0;
               if (local_1060 == (String*)0x0) goto LAB_00101ff8;
               lVar23 = *(long*)( local_1060 + -8 );
               if (1 < lVar23) {
                  iVar15 = String::find_char((int)local_1060 + L'\b', 0x3f);
                  if (iVar15 == -1) {
                     if (local_1060 == (String*)0x0) goto LAB_00101ff8;
                     lVar23 = *(long*)( local_1060 + -8 );
                     if (1 < lVar23) {
                        local_10c8 = 0;
                        if (*(long*)( local_1060 + 8 ) != 0) {
                           plVar1 = (long*)( *(long*)( local_1060 + 8 ) + -0x10 );
                           do {
                              lVar23 = *plVar1;
                              if (lVar23 == 0) goto LAB_00101b54;
                              LOCK();
                              lVar20 = *plVar1;
                              bVar25 = lVar23 == lVar20;
                              if (bVar25) {
                                 *plVar1 = lVar23 + 1;
                                 lVar20 = lVar23;
                              }

                              UNLOCK();
                           }
 while ( !bVar25 );
                           if (lVar20 != -1) {
                              local_10c8 = *(long*)( local_1060 + 8 );
                           }

                        }

                        goto LAB_00101b54;
                     }

                  }
 else if (local_1060 == (String*)0x0) {
                     LAB_00101ff8:lVar23 = 0;
                  }
 else {
                     lVar23 = *(long*)( local_1060 + -8 );
                     if (1 < lVar23) {
                        String::substr((int)&local_10c8, (int)local_1060 + 8);
                        LAB_00101b54:String::get_file();
                        String::get_extension();
                        EditorPaths::get_temp_dir();
                        local_1058 = (EditorHTTPServer*)( (long)&DAT_00103cb3 + 4 );
                        local_1080 = 0;
                        local_1050 = 3;
                        String::parse_latin1((StrRange*)&local_1080);
                        String::path_join((String*)&local_10b0);
                        lVar23 = local_1080;
                        if (local_1080 != 0) {
                           LOCK();
                           plVar1 = (long*)( local_1080 + -0x10 );
                           *plVar1 = *plVar1 + -1;
                           UNLOCK();
                           if (*plVar1 == 0) {
                              local_1080 = 0;
                              Memory::free_static((void*)( lVar23 + -0x10 ), false);
                           }

                        }

                        lVar23 = local_1088;
                        if (local_1088 != 0) {
                           LOCK();
                           plVar1 = (long*)( local_1088 + -0x10 );
                           *plVar1 = *plVar1 + -1;
                           UNLOCK();
                           if (*plVar1 == 0) {
                              local_1088 = 0;
                              Memory::free_static((void*)( lVar23 + -0x10 ), false);
                           }

                        }

                        String::path_join((String*)&local_10a8);
                        if (( *(long*)( this + 400 ) != 0 ) && ( *(int*)( this + 0x1b4 ) != 0 )) {
                           uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1b0 ) * 4 );
                           uVar19 = CONCAT44(0, uVar3);
                           lVar23 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1b0 ) * 8 );
                           uVar16 = String::hash();
                           lVar20 = *(long*)( this + 0x198 );
                           uVar21 = 1;
                           if (uVar16 != 0) {
                              uVar21 = uVar16;
                           }

                           auVar5._8_8_ = 0;
                           auVar5._0_8_ = (ulong)uVar21 * lVar23;
                           auVar9._8_8_ = 0;
                           auVar9._0_8_ = uVar19;
                           lVar22 = SUB168(auVar5 * auVar9, 8);
                           uVar16 = *(uint*)( lVar20 + lVar22 * 4 );
                           if (uVar16 != 0) {
                              uVar24 = 0;
                              iVar15 = SUB164(auVar5 * auVar9, 8);
                              do {
                                 if (uVar21 == uVar16) {
                                    cVar14 = String::operator ==((String*)( *(long*)( *(long*)( this + 400 ) + lVar22 * 8 ) + 0x10 ), (String*)&local_10b8);
                                    if (cVar14 != '\0') {
                                       cVar14 = FileAccess::exists((String*)&local_10a8);
                                       if (cVar14 != '\0') {
                                          plVar18 = (long*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator []((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)( this + 0x188 ), (String*)&local_10b8);
                                          local_10a0 = 0;
                                          plVar1 = (long*)( *plVar18 + -0x10 );
                                          if (*plVar18 == 0) goto LAB_001020a6;
                                          goto LAB_00102085;
                                       }

                                       break;
                                    }

                                    lVar20 = *(long*)( this + 0x198 );
                                 }

                                 uVar24 = uVar24 + 1;
                                 auVar6._8_8_ = 0;
                                 auVar6._0_8_ = ( ulong )(iVar15 + 1) * lVar23;
                                 auVar10._8_8_ = 0;
                                 auVar10._0_8_ = uVar19;
                                 lVar22 = SUB168(auVar6 * auVar10, 8);
                                 uVar16 = *(uint*)( lVar20 + lVar22 * 4 );
                                 iVar15 = SUB164(auVar6 * auVar10, 8);
                                 if (( uVar16 == 0 ) || ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar16 * lVar23,auVar11._8_8_ = 0,auVar11._0_8_ = uVar19,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar3 + iVar15 ) - SUB164(auVar7 * auVar11, 8)) * lVar23,auVar12._8_8_ = 0,auVar12._0_8_ = uVar19,SUB164(auVar8 * auVar12, 8) < uVar24) break;
                              }
 while ( true );
                           }

                        }

                        local_1080 = 0;
                        local_1058 = (EditorHTTPServer*)0x103cbb;
                        local_1050 = 0x18;
                        String::parse_latin1((StrRange*)&local_1080);
                        String::operator +=((String*)&local_1080, "Connection: Close\r\n");
                        String::operator +=((String*)&local_1080, "\r\n");
                        String::utf8();
                        if (local_1058 == (EditorHTTPServer*)0x0) {
                           iVar15 = -1;
                        }
 else {
                           iVar15 = (int)*(undefined8*)( local_1058 + -8 ) + -1;
                        }

                        plVar1 = *(long**)( this + 0x1c8 );
                        pcVar4 = *(code**)( *plVar1 + 0x150 );
                        uVar17 = CharString::get_data();
                        ( *pcVar4 )(plVar1, uVar17, iVar15);
                        pEVar13 = local_1058;
                        if (local_1058 != (EditorHTTPServer*)0x0) {
                           LOCK();
                           pEVar2 = local_1058 + -0x10;
                           *(long*)pEVar2 = *(long*)pEVar2 + -1;
                           UNLOCK();
                           if (*(long*)pEVar2 == 0) {
                              local_1058 = (EditorHTTPServer*)0x0;
                              Memory::free_static(pEVar13 + -0x10, false);
                           }

                        }

                        lVar23 = local_1080;
                        if (local_1080 != 0) {
                           LOCK();
                           plVar1 = (long*)( local_1080 + -0x10 );
                           *plVar1 = *plVar1 + -1;
                           UNLOCK();
                           if (*plVar1 == 0) {
                              local_1080 = 0;
                              Memory::free_static((void*)( lVar23 + -0x10 ), false);
                           }

                        }

                        goto LAB_00101cf9;
                     }

                  }

               }

               lVar20 = 1;
               goto LAB_0010201b;
            }

         }

         lVar20 = 2;
         LAB_0010201b:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar20, lVar23, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar4 = (code*)invalidInstructionException();
         ( *pcVar4 )();
      }

      LAB_001023b0:_err_print_error("_send_response", "platform/web/export/editor_http_server.cpp", 0x52, "Condition \"req[0] != \"GET\" || req[2] != \"HTTP/1.1\"\" is true.", "Invalid method or HTTP version.", 0, 0);
   }

   LAB_00101d67:CowData<String>::_unref((CowData<String>*)&local_1060);
   LAB_00101d74:CowData<String>::_unref((CowData<String>*)&local_1070);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
   LAB_00102085:do {
      lVar23 = *plVar1;
      if (lVar23 == 0) goto LAB_001020a6;
      LOCK();
      lVar20 = *plVar1;
      bVar25 = lVar23 == lVar20;
      if (bVar25) {
         *plVar1 = lVar23 + 1;
         lVar20 = lVar23;
      }

      UNLOCK();
   }
 while ( !bVar25 );
   if (lVar20 != -1) {
      local_10a0 = *plVar18;
   }

   LAB_001020a6:FileAccess::open((String*)&local_1098, (int)(String*)&local_10a8, (Error*)0x1);
   if (local_1098 == (Object*)0x0) {
      _err_print_error("_send_response", "platform/web/export/editor_http_server.cpp", 0x67, "Condition \"f.is_null()\" is true.", 0, 0);
   }
 else {
      local_1090 = 0;
      local_1058 = (EditorHTTPServer*)0x103ce8;
      local_1050 = 0x11;
      String::parse_latin1((StrRange*)&local_1090);
      String::operator +=((String*)&local_1090, "Connection: Close\r\n");
      local_1058 = (EditorHTTPServer*)&_LC33;
      local_1080 = 0;
      local_1050 = 2;
      String::parse_latin1((StrRange*)&local_1080);
      operator+((char *)&
      local_1088,(String*)"Content-Type: ";
      String::operator +((String*)&local_1058, (String*)&local_1088);
      String::operator +=((String*)&local_1090, (String*)&local_1058);
      pEVar13 = local_1058;
      if (local_1058 != (EditorHTTPServer*)0x0) {
         LOCK();
         pEVar2 = local_1058 + -0x10;
         *(long*)pEVar2 = *(long*)pEVar2 + -1;
         UNLOCK();
         if (*(long*)pEVar2 == 0) {
            local_1058 = (EditorHTTPServer*)0x0;
            Memory::free_static(pEVar13 + -0x10, false);
         }

      }

      lVar23 = local_1088;
      if (local_1088 != 0) {
         LOCK();
         plVar1 = (long*)( local_1088 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_1088 = 0;
            Memory::free_static((void*)( lVar23 + -0x10 ), false);
         }

      }

      lVar23 = local_1080;
      if (local_1080 != 0) {
         LOCK();
         plVar1 = (long*)( local_1080 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_1080 = 0;
            Memory::free_static((void*)( lVar23 + -0x10 ), false);
         }

      }

      String::operator +=((String*)&local_1090, "Access-Control-Allow-Origin: *\r\n");
      String::operator +=((String*)&local_1090, "Cross-Origin-Opener-Policy: same-origin\r\n");
      String::operator +=((String*)&local_1090, "Cross-Origin-Embedder-Policy: require-corp\r\n");
      String::operator +=((String*)&local_1090, "Cache-Control: no-store, max-age=0\r\n");
      String::operator +=((String*)&local_1090, "\r\n");
      String::utf8();
      plVar1 = *(long**)( this + 0x1c8 );
      pcVar4 = *(code**)( *plVar1 + 0x150 );
      if (local_1058 == (EditorHTTPServer*)0x0) {
         iVar15 = -1;
      }
 else {
         iVar15 = (int)*(undefined8*)( local_1058 + -8 ) + -1;
      }

      uVar17 = CharString::get_data();
      iVar15 = ( *pcVar4 )(plVar1, uVar17, iVar15);
      if (iVar15 == 0) {
         do {
            uVar19 = ( **(code**)( *(long*)local_1098 + 0x220 ) )(local_1098, local_1048, 0x1000);
            if (uVar19 == 0) goto LAB_00102298;
            iVar15 = ( **(code**)( **(long**)( this + 0x1c8 ) + 0x150 ) )(*(long**)( this + 0x1c8 ), local_1048, uVar19 & 0xffffffff);
         }
 while ( iVar15 == 0 );
         _err_print_error("_send_response", "platform/web/export/editor_http_server.cpp", 0x7e, "Method/function failed.", 0, 0);
      }
 else {
         _err_print_error("_send_response", "platform/web/export/editor_http_server.cpp", 0x73, "Method/function failed.", 0, 0);
      }

      LAB_00102298:pEVar13 = local_1058;
      if (local_1058 != (EditorHTTPServer*)0x0) {
         LOCK();
         pEVar2 = local_1058 + -0x10;
         *(long*)pEVar2 = *(long*)pEVar2 + -1;
         UNLOCK();
         if (*(long*)pEVar2 == 0) {
            local_1058 = (EditorHTTPServer*)0x0;
            Memory::free_static(pEVar13 + -0x10, false);
         }

      }

      lVar23 = local_1090;
      if (local_1090 != 0) {
         LOCK();
         plVar1 = (long*)( local_1090 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_1090 = 0;
            Memory::free_static((void*)( lVar23 + -0x10 ), false);
         }

      }

   }

   if (( ( local_1098 != (Object*)0x0 ) && ( cVar14 = RefCounted::unreference() ),cVar14 != '\0' )) &&( cVar14 = cVar14 != '\0' )(**(code**)( *(long*)local_1098 + 0x140 ))(local_1098);
   Memory::free_static(local_1098, false);
}
lVar23 = local_10a0;if (local_10a0 != 0) {
   LOCK();
   plVar1 = (long*)( local_10a0 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_10a0 = 0;
      Memory::free_static((void*)( lVar23 + -0x10 ), false);
   }

}
LAB_00101cf9:lVar23 = local_10a8;if (local_10a8 != 0) {
   LOCK();
   plVar1 = (long*)( local_10a8 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_10a8 = 0;
      Memory::free_static((void*)( lVar23 + -0x10 ), false);
   }

}
lVar23 = local_10b0;if (local_10b0 != 0) {
   LOCK();
   plVar1 = (long*)( local_10b0 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_10b0 = 0;
      Memory::free_static((void*)( lVar23 + -0x10 ), false);
   }

}
lVar23 = local_10b8;if (local_10b8 != 0) {
   LOCK();
   plVar1 = (long*)( local_10b8 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_10b8 = 0;
      Memory::free_static((void*)( lVar23 + -0x10 ), false);
   }

}
lVar23 = local_10c0;if (local_10c0 != 0) {
   LOCK();
   plVar1 = (long*)( local_10c0 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_10c0 = 0;
      Memory::free_static((void*)( lVar23 + -0x10 ), false);
   }

}
lVar23 = local_10c8;if (local_10c8 != 0) {
   LOCK();
   plVar1 = (long*)( local_10c8 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_10c8 = 0;
      Memory::free_static((void*)( lVar23 + -0x10 ), false);
   }

}
goto LAB_00101d67;}/* EditorHTTPServer::_poll() [clone .part.0] */void EditorHTTPServer::_poll(EditorHTTPServer *this) {
   int iVar1;
   code *pcVar2;
   char cVar3;
   int iVar4;
   long *plVar5;
   long lVar6;
   undefined8 uVar7;
   Object *pOVar8;
   Object *pOVar9;
   long in_FS_OFFSET;
   Object *local_50;
   Object *local_48;
   Object *local_40;
   int local_38;
   undefined4 uStack_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x1b8 ) == 0) {
      cVar3 = TCPServer::is_connection_available();
      if (cVar3 != '\0') {
         TCPServer::take_connection();
         pOVar9 = (Object*)CONCAT44(uStack_34, local_38);
         pOVar8 = *(Object**)( this + 0x1b8 );
         if (pOVar9 == pOVar8) {
            LAB_001029e4:if (( pOVar8 != (Object*)0x0 ) && ( cVar3 = cVar3 != '\0' )) {
               pOVar8 = (Object*)CONCAT44(uStack_34, local_38);
               cVar3 = predelete_handler(pOVar8);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
                  Memory::free_static(pOVar8, false);
               }

            }

            pOVar8 = *(Object**)( this + 0x1c8 );
            if (*(long*)( this + 0x1b8 ) == 0) goto LAB_00102ae0;
            pOVar9 = (Object*)__dynamic_cast(*(long*)( this + 0x1b8 ), &Object::typeinfo, &StreamPeer::typeinfo, 0);
            if (pOVar9 != pOVar8) {
               *(Object**)( this + 0x1c8 ) = pOVar9;
               if (( pOVar9 != (Object*)0x0 ) && ( cVar3 = cVar3 == '\0' )) {
                  *(undefined8*)( this + 0x1c8 ) = 0;
               }

               if (pOVar8 == (Object*)0x0) goto LAB_00102a4f;
               goto LAB_00102af4;
            }

         }
 else {
            *(Object**)( this + 0x1b8 ) = pOVar9;
            if (pOVar9 != (Object*)0x0) {
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  *(undefined8*)( this + 0x1b8 ) = 0;
               }

               if (pOVar8 != (Object*)0x0) goto LAB_001029cf;
               LAB_001029df:pOVar8 = (Object*)CONCAT44(uStack_34, local_38);
               goto LAB_001029e4;
            }

            if (pOVar8 != (Object*)0x0) {
               LAB_001029cf:cVar3 = RefCounted::unreference();
               if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
                  ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
                  Memory::free_static(pOVar8, false);
               }

               goto LAB_001029df;
            }

            pOVar8 = *(Object**)( this + 0x1c8 );
            LAB_00102ae0:if (pOVar8 != (Object*)0x0) {
               *(undefined8*)( this + 0x1c8 ) = 0;
               LAB_00102af4:cVar3 = RefCounted::unreference();
               if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
                  ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
                  Memory::free_static(pOVar8, false);
               }

            }

         }

         LAB_00102a4f:plVar5 = (long*)OS::get_singleton();
         uVar7 = ( **(code**)( *plVar5 + 0x208 ) )(plVar5);
         *(undefined8*)( this + 0x1e8 ) = uVar7;
         goto LAB_001027fb;
      }

      LAB_00102830:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      LAB_001027fb:plVar5 = (long*)OS::get_singleton();
      lVar6 = ( **(code**)( *plVar5 + 0x208 ) )(plVar5);
      if (( ulong )(lVar6 - *(long*)( this + 0x1e8 )) < 0xf4241) {
         iVar4 = StreamPeerTCP::get_status();
         if (iVar4 != 2) goto LAB_00102830;
         if (this[0x1e0] == (EditorHTTPServer)0x0) goto LAB_0010285d;
         plVar5 = *(long**)( this + 0x1c0 );
         if (plVar5 == (long*)0x0) {
            pOVar8 = (Object*)StreamPeerTLS::create(true);
            if (( pOVar8 == (Object*)0x0 ) || ( cVar3 = cVar3 == '\0' )) {
               pOVar8 = *(Object**)( this + 0x1c0 );
               if (pOVar8 != (Object*)0x0) {
                  *(undefined8*)( this + 0x1c0 ) = 0;
                  cVar3 = RefCounted::unreference();
                  goto joined_r0x00102e01;
               }

               pOVar8 = *(Object**)( this + 0x1c8 );
               LAB_00102e3a:if (pOVar8 != (Object*)0x0) {
                  *(undefined8*)( this + 0x1c8 ) = 0;
                  LAB_00102e4e:cVar3 = RefCounted::unreference();
                  if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
                     ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
                     Memory::free_static(pOVar8, false);
                  }

               }

               LAB_00102c8d:plVar5 = *(long**)( this + 0x1c0 );
            }
 else {
               pOVar9 = *(Object**)( this + 0x1c0 );
               if (pOVar8 != pOVar9) {
                  *(Object**)( this + 0x1c0 ) = pOVar8;
                  cVar3 = RefCounted::reference();
                  if (cVar3 == '\0') {
                     *(undefined8*)( this + 0x1c0 ) = 0;
                  }

                  if (( ( pOVar9 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar9 + 0x140 ))(pOVar9);
                  Memory::free_static(pOVar9, false);
               }

            }

            cVar3 = RefCounted::unreference();
            joined_r0x00102e01:if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
               ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
               Memory::free_static(pOVar8, false);
            }

            plVar5 = *(long**)( this + 0x1c0 );
            pOVar8 = *(Object**)( this + 0x1c8 );
            if (plVar5 == (long*)0x0) goto LAB_00102e3a;
            pOVar9 = (Object*)__dynamic_cast(plVar5, &Object::typeinfo, &StreamPeer::typeinfo, 0);
            if (pOVar9 != pOVar8) {
               *(Object**)( this + 0x1c8 ) = pOVar9;
               if (( pOVar9 != (Object*)0x0 ) && ( cVar3 = cVar3 == '\0' )) {
                  *(undefined8*)( this + 0x1c8 ) = 0;
               }

               if (pOVar8 != (Object*)0x0) goto LAB_00102e4e;
               goto LAB_00102c8d;
            }

         }

         local_40 = (Object*)0x0;
         pcVar2 = *(code**)( *plVar5 + 0x180 );
         if (( *(Object**)( this + 0x1d8 ) != (Object*)0x0 ) && ( local_40 = *(Object**)( this + 0x1d8 ) ),cVar3 = RefCounted::reference(),cVar3 == '\0') {
            local_40 = (Object*)0x0;
         }

         local_48 = (Object*)0x0;
         if (( *(Object**)( this + 0x1d0 ) != (Object*)0x0 ) && ( local_48 = *(Object**)( this + 0x1d0 ) ),cVar3 = RefCounted::reference(),cVar3 == '\0') {
            local_48 = (Object*)0x0;
         }

         TLSOptions::server(&local_38, &local_48, &local_40);
         local_50 = (Object*)0x0;
         if (( ( *(long*)( this + 0x1b8 ) != 0 ) && ( pOVar8 = (Object*)__dynamic_cast(*(long*)( this + 0x1b8 ), &Object::typeinfo, &StreamPeer::typeinfo, 0) ),pOVar8 != (Object*)0x0 )) {
            local_50 = (Object*)0x0;
         }

         iVar4 = ( *pcVar2 )(plVar5, &local_50, &local_38);
         if (( ( local_50 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),pOVar8 = local_50,cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar8 + 0x140 ))(pOVar8);
         Memory::free_static(pOVar8, false);
      }

      if (( CONCAT44(uStack_34, local_38) != 0 ) && ( cVar3 = cVar3 != '\0' )) {
         pOVar8 = (Object*)CONCAT44(uStack_34, local_38);
         cVar3 = predelete_handler(pOVar8);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
            Memory::free_static(pOVar8, false);
         }

      }

      if (( ( local_48 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),pOVar8 = local_48,cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar8 + 0x140 ))(pOVar8);
      Memory::free_static(pOVar8, false);
   }

   if (( ( local_40 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),pOVar8 = local_40,cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar8 + 0x140 ))(pOVar8);
   Memory::free_static(pOVar8, false);
}
if (iVar4 != 0) goto LAB_00102940;plVar5 = *(long**)( this + 0x1c0 );}( **(code**)( *plVar5 + 0x178 ) )();iVar4 = ( **(code**)( **(long**)( this + 0x1c0 ) + 400 ) )();if (iVar4 == 1) goto LAB_00102830;iVar4 = ( **(code**)( **(long**)( this + 0x1c0 ) + 400 ) )();if (iVar4 == 2) {
   LAB_0010285d:iVar4 = *(int*)( this + 0x11f0 );
   do {
      iVar1 = iVar4 + -1;
      if (3 < iVar1) {
         if (( ( this[(long)iVar1 + 0x1f0] == (EditorHTTPServer)0xa ) && ( this[(long)iVar1 + 0x1ef] == (EditorHTTPServer)0xd ) ) && ( ( this[(long)iVar1 + 0x1ee] == (EditorHTTPServer)0xa && ( this[(long)iVar1 + 0x1ed] == (EditorHTTPServer)0xd ) ) )) {
            _send_response(this);
            break;
         }

         local_38 = 0;
         if (0xfff < iVar4) {
            _err_print_error("_poll", "platform/web/export/editor_http_server.cpp", 0xb5, "Condition \"req_pos >= 4096\" is true.", 0, 0);
            goto LAB_00102830;
         }

      }

      local_38 = 0;
      iVar4 = ( **(code**)( **(long**)( this + 0x1c8 ) + 0x168 ) )(*(long**)( this + 0x1c8 ), this + (long)iVar4 + 0x1f0, 1, &local_38);
      if (iVar4 != 0) {
         _clear_client(this);
         goto LAB_00102830;
      }

      if (local_38 != 1) goto LAB_00102830;
      iVar4 = *(int*)( this + 0x11f0 ) + 1;
      *(int*)( this + 0x11f0 ) = iVar4;
   }
 while ( true );
}
}LAB_00102940:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
   _clear_client(this);
   return;
}
}/* WARNING: Subroutine does not return */__stack_chk_fail();}/* EditorHTTPServer::_poll() */void EditorHTTPServer::_poll(EditorHTTPServer *this) {
   char cVar1;
   cVar1 = TCPServer::is_listening();
   if (cVar1 != '\0') {
      _poll(this);
      return;
   }

   return;
}
/* WARNING: Control flow encountered bad instruction data *//* EditorHTTPServer::_server_thread_poll(void*) */void EditorHTTPServer::_server_thread_poll(void *param_1) {
   char cVar1;
   int iVar2;
   long *plVar3;
   while (true) {
      if (*(char*)( (long)param_1 + 0x11f4 ) != '\0') {
         return;
      }

      plVar3 = (long*)OS::get_singleton();
      ( **(code**)( *plVar3 + 0x1f8 ) )(plVar3, 0x1af4);
      iVar2 = pthread_mutex_lock((pthread_mutex_t*)( (long)param_1 + 0x11f8 ));
      if (iVar2 != 0) break;
      cVar1 = TCPServer::is_listening();
      if (cVar1 != '\0') {
         _poll((EditorHTTPServer*)param_1);
      }

      pthread_mutex_unlock((pthread_mutex_t*)( (long)param_1 + 0x11f8 ));
   }
;
   std::__throw_system_error(iVar2);
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   if (( configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }

   return;
}
/* Object::get_save_class() const */void Object::get_save_class(void) {
   long lVar1;
   long *in_RSI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *in_RSI + 0x48 ) )();
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::is_class_ptr(void*) const */uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
   return (uint)CONCAT71(0x104c, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x104c, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}
/* RefCounted::_getv(StringName const&, Variant&) const */undefined8 RefCounted::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_setv(StringName const&, Variant const&) */undefined8 RefCounted::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_validate_propertyv(PropertyInfo&) const */void RefCounted::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* RefCounted::_property_can_revertv(StringName const&) const */undefined8 RefCounted::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */undefined8 RefCounted::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_notificationv(int, bool) */void RefCounted::_notificationv(int param_1, bool param_2) {
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_001049f0;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_001049f0;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* RefCounted::_get_class_namev() const */undefined8 *RefCounted::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_001031c3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001031c3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_0010322e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_0010322e:return &_get_class_namev();
}
/* RefCounted::get_class() const */void RefCounted::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI);
   }
 else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      }
 else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }

         }
 else {
            strlen(__s);
            String::parse_latin1(in_RDI);
         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_001033bf;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_001033bf:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
      lVar4 = local_60;
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

      if (cVar6 != '\0') goto LAB_00103473;
   }

   cVar6 = String::operator ==((String*)param_1, "RefCounted");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_00103523;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_00103523:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
         lVar4 = local_60;
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

         if (cVar6 != '\0') goto LAB_00103473;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==((String*)param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_00103473:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::_initialize_classv() */void RefCounted::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      Object::initialize_class();
      local_48 = 0;
      local_38 = "Object";
      local_30 = 6;
      String::parse_latin1((StrRange*)&local_48);
      StringName::StringName((StringName*)&local_40, (String*)&local_48, false);
      local_38 = "RefCounted";
      local_50 = 0;
      local_30 = 10;
      String::parse_latin1((StrRange*)&local_50);
      StringName::StringName((StringName*)&local_38, (String*)&local_50, false);
      ClassDB::_add_class2((StringName*)&local_38, (StringName*)&local_40);
      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }

      lVar2 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_40 != 0 )) {
         StringName::unref();
      }

      lVar2 = local_48;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
         RefCounted::_bind_methods();
      }

      initialize_class()::initialized =
      '\x01';
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
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
   pLVar6 = (List*)CONCAT71(in_register_00000031, param_2);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88 = 0;
   local_90 = 0;
   local_78 = "RefCounted";
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "RefCounted";
   local_98 = 0;
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_001038e8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001038e8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00103906;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x00103906:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])pLVar6 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   puVar5 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   *(undefined8*)( puVar5 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0xc ) = (undefined1[16])0x0;
   *puVar5 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_68);
   puVar5[6] = local_60;
   if (*(long*)( puVar5 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_58);
   }

   lVar3 = local_58;
   puVar5[10] = local_50;
   plVar1 = *(long**)pLVar6;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar5 + 0xc ) = 0;
   *(long**)( puVar5 + 0x10 ) = plVar1;
   *(long*)( puVar5 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar5;
   }

   plVar1[1] = (long)puVar5;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar5;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   lVar2 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "RefCounted", false);
   ClassDB::get_property_list((StringName*)&local_78, pLVar6, true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::operator[](String const&) */undefined1 * __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::operator[](HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
             *this,String *param_1){
   long *plVar1;
   void *pvVar2;
   void *__s;
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
   char cVar35;
   uint uVar36;
   uint uVar37;
   ulong uVar38;
   undefined8 uVar39;
   void *__s_00;
   undefined8 *puVar40;
   void *pvVar41;
   int iVar42;
   long lVar43;
   long lVar44;
   ulong uVar45;
   uint *puVar46;
   undefined8 uVar47;
   long lVar48;
   uint uVar49;
   uint uVar50;
   ulong uVar51;
   long lVar52;
   long lVar53;
   uint uVar54;
   uint uVar55;
   undefined1(*pauVar56)[16];
   undefined1(*pauVar57)[16];
   long in_FS_OFFSET;
   undefined1(*local_a0)[16];
   long local_70;
   undefined1 local_68[16];
   long local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   if (*(long*)( this + 8 ) == 0) {
      LAB_001046f4:local_70 = 0;
      uVar45 = (ulong)uVar55;
      uVar38 = uVar45 * 4;
      uVar51 = uVar45 * 8;
      uVar39 = Memory::alloc_static(uVar38, false);
      *(undefined8*)( this + 0x10 ) = uVar39;
      pvVar41 = (void*)Memory::alloc_static(uVar51, false);
      *(void**)( this + 8 ) = pvVar41;
      if (uVar55 != 0) {
         pvVar2 = *(void**)( this + 0x10 );
         if (( pvVar2 < (void*)( (long)pvVar41 + uVar51 ) ) && ( pvVar41 < (void*)( (long)pvVar2 + uVar38 ) )) {
            uVar38 = 0;
            do {
               *(undefined4*)( (long)pvVar2 + uVar38 * 4 ) = 0;
               *(undefined8*)( (long)pvVar41 + uVar38 * 8 ) = 0;
               uVar38 = uVar38 + 1;
            }
 while ( uVar45 != uVar38 );
         }
 else {
            memset(pvVar2, 0, uVar38);
            memset(pvVar41, 0, uVar51);
         }

         LAB_001045d4:iVar42 = *(int*)( this + 0x2c );
         if (iVar42 != 0) {
            LAB_001045e0:uVar36 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            lVar48 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            uVar50 = String::hash();
            uVar38 = CONCAT44(0, uVar36);
            lVar53 = *(long*)( this + 0x10 );
            uVar37 = 1;
            if (uVar50 != 0) {
               uVar37 = uVar50;
            }

            uVar54 = 0;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)uVar37 * lVar48;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar38;
            lVar43 = SUB168(auVar15 * auVar31, 8);
            uVar50 = *(uint*)( lVar53 + lVar43 * 4 );
            uVar49 = SUB164(auVar15 * auVar31, 8);
            if (uVar50 != 0) {
               do {
                  if (uVar50 == uVar37) {
                     cVar35 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar43 * 8 ) + 0x10 ), param_1);
                     if (cVar35 != '\0') {
                        local_a0 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar49 * 8 );
                        if (*(long*)( local_a0[1] + 8 ) != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)( local_a0[1] + 8 ), (CowData*)&local_70);
                           local_a0 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar49 * 8 );
                        }

                        goto LAB_001044a0;
                     }

                     lVar53 = *(long*)( this + 0x10 );
                  }

                  uVar54 = uVar54 + 1;
                  auVar16._8_8_ = 0;
                  auVar16._0_8_ = ( ulong )(uVar49 + 1) * lVar48;
                  auVar32._8_8_ = 0;
                  auVar32._0_8_ = uVar38;
                  lVar43 = SUB168(auVar16 * auVar32, 8);
                  uVar50 = *(uint*)( lVar53 + lVar43 * 4 );
                  uVar49 = SUB164(auVar16 * auVar32, 8);
               }
 while ( ( uVar50 != 0 ) && ( auVar17._8_8_ = 0 ),auVar17._0_8_ = (ulong)uVar50 * lVar48,auVar33._8_8_ = 0,auVar33._0_8_ = uVar38,auVar18._8_8_ = 0,auVar18._0_8_ = ( ulong )(( uVar36 + uVar49 ) - SUB164(auVar17 * auVar33, 8)) * lVar48,auVar34._8_8_ = 0,auVar34._0_8_ = uVar38,uVar54 <= SUB164(auVar18 * auVar34, 8) );
            }

            iVar42 = *(int*)( this + 0x2c );
         }

         uVar45 = (ulong)uVar55;
         goto LAB_001040a0;
      }

      iVar42 = *(int*)( this + 0x2c );
      if (pvVar41 == (void*)0x0) goto LAB_001040a0;
      if (*(int*)( this + 0x2c ) != 0) goto LAB_001045e0;
      LAB_001040c6:uVar55 = *(uint*)( this + 0x28 );
      if (uVar55 == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         local_a0 = (undefined1(*) [16])0x0;
         goto LAB_001044a0;
      }

      uVar38 = ( ulong )(uVar55 + 1);
      *(undefined4*)( this + 0x2c ) = 0;
      uVar36 = *(uint*)( hash_table_size_primes + (ulong)uVar55 * 4 );
      if (uVar55 + 1 < 2) {
         uVar38 = 2;
      }

      uVar55 = *(uint*)( hash_table_size_primes + uVar38 * 4 );
      uVar45 = (ulong)uVar55;
      *(int*)( this + 0x28 ) = (int)uVar38;
      pvVar41 = *(void**)( this + 8 );
      uVar38 = uVar45 * 4;
      uVar51 = uVar45 * 8;
      pvVar2 = *(void**)( this + 0x10 );
      uVar39 = Memory::alloc_static(uVar38, false);
      *(undefined8*)( this + 0x10 ) = uVar39;
      __s_00 = (void*)Memory::alloc_static(uVar51, false);
      *(void**)( this + 8 ) = __s_00;
      if (uVar55 != 0) {
         __s = *(void**)( this + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar51 ) ) && ( __s_00 < (void*)( (long)__s + uVar38 ) )) {
            uVar38 = 0;
            do {
               *(undefined4*)( (long)__s + uVar38 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar38 * 8 ) = 0;
               uVar38 = uVar38 + 1;
            }
 while ( uVar38 != uVar45 );
         }
 else {
            memset(__s, 0, uVar38);
            memset(__s_00, 0, uVar51);
         }

      }

      if (uVar36 != 0) {
         uVar38 = 0;
         do {
            uVar55 = *(uint*)( (long)pvVar2 + uVar38 * 4 );
            if (uVar55 != 0) {
               lVar48 = *(long*)( this + 0x10 );
               uVar49 = 0;
               uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
               uVar51 = CONCAT44(0, uVar37);
               lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               auVar3._8_8_ = 0;
               auVar3._0_8_ = (ulong)uVar55 * lVar53;
               auVar19._8_8_ = 0;
               auVar19._0_8_ = uVar51;
               lVar43 = SUB168(auVar3 * auVar19, 8);
               puVar46 = (uint*)( lVar48 + lVar43 * 4 );
               iVar42 = SUB164(auVar3 * auVar19, 8);
               uVar50 = *puVar46;
               uVar39 = *(undefined8*)( (long)pvVar41 + uVar38 * 8 );
               while (uVar50 != 0) {
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = (ulong)uVar50 * lVar53;
                  auVar20._8_8_ = 0;
                  auVar20._0_8_ = uVar51;
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = ( ulong )(( iVar42 + uVar37 ) - SUB164(auVar4 * auVar20, 8)) * lVar53;
                  auVar21._8_8_ = 0;
                  auVar21._0_8_ = uVar51;
                  uVar54 = SUB164(auVar5 * auVar21, 8);
                  uVar47 = uVar39;
                  if (uVar54 < uVar49) {
                     *puVar46 = uVar55;
                     puVar40 = (undefined8*)( (long)__s_00 + lVar43 * 8 );
                     uVar47 = *puVar40;
                     *puVar40 = uVar39;
                     uVar55 = uVar50;
                     uVar49 = uVar54;
                  }

                  uVar49 = uVar49 + 1;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = ( ulong )(iVar42 + 1) * lVar53;
                  auVar22._8_8_ = 0;
                  auVar22._0_8_ = uVar51;
                  lVar43 = SUB168(auVar6 * auVar22, 8);
                  puVar46 = (uint*)( lVar48 + lVar43 * 4 );
                  iVar42 = SUB164(auVar6 * auVar22, 8);
                  uVar39 = uVar47;
                  uVar50 = *puVar46;
               }
;
               *(undefined8*)( (long)__s_00 + lVar43 * 8 ) = uVar39;
               *puVar46 = uVar55;
               *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
            }

            uVar38 = uVar38 + 1;
         }
 while ( uVar36 != uVar38 );
         Memory::free_static(pvVar41, false);
         Memory::free_static(pvVar2, false);
      }

   }
 else {
      if (*(int*)( this + 0x2c ) != 0) {
         uVar38 = CONCAT44(0, uVar55);
         lVar48 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         uVar37 = String::hash();
         lVar53 = *(long*)( this + 0x10 );
         uVar36 = 1;
         if (uVar37 != 0) {
            uVar36 = uVar37;
         }

         auVar11._8_8_ = 0;
         auVar11._0_8_ = (ulong)uVar36 * lVar48;
         auVar27._8_8_ = 0;
         auVar27._0_8_ = uVar38;
         lVar43 = SUB168(auVar11 * auVar27, 8);
         uVar37 = *(uint*)( lVar53 + lVar43 * 4 );
         uVar50 = SUB164(auVar11 * auVar27, 8);
         if (uVar37 == 0) {
            lVar52 = *(long*)( this + 8 );
         }
 else {
            lVar52 = *(long*)( this + 8 );
            uVar49 = 0;
            do {
               if (uVar36 == uVar37) {
                  cVar35 = String::operator ==((String*)( *(long*)( lVar52 + lVar43 * 8 ) + 0x10 ), param_1);
                  if (cVar35 != '\0') {
                     local_a0 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar50 * 8 );
                     goto LAB_001044a0;
                  }

                  lVar53 = *(long*)( this + 0x10 );
                  lVar52 = *(long*)( this + 8 );
               }

               uVar49 = uVar49 + 1;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(uVar50 + 1) * lVar48;
               auVar28._8_8_ = 0;
               auVar28._0_8_ = uVar38;
               lVar43 = SUB168(auVar12 * auVar28, 8);
               uVar37 = *(uint*)( lVar53 + lVar43 * 4 );
               uVar50 = SUB164(auVar12 * auVar28, 8);
            }
 while ( ( uVar37 != 0 ) && ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar37 * lVar48,auVar29._8_8_ = 0,auVar29._0_8_ = uVar38,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar50 + uVar55 ) - SUB164(auVar13 * auVar29, 8)) * lVar48,auVar30._8_8_ = 0,auVar30._0_8_ = uVar38,uVar49 <= SUB164(auVar14 * auVar30, 8) );
         }

         local_70 = 0;
         uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         if (lVar52 == 0) goto LAB_001046f4;
         goto LAB_001045d4;
      }

      local_70 = 0;
      uVar45 = (ulong)uVar55;
      iVar42 = 0;
      LAB_001040a0:if ((float)uVar45 * __LC10 < (float)( iVar42 + 1 )) goto LAB_001040c6;
   }

   local_58[0] = 0;
   local_68 = (undefined1[16])0x0;
   if (*(long*)param_1 == 0) {
      local_a0 = (undefined1(*) [16])operator_new(0x20, "");
      *(undefined8*)local_a0[1] = 0;
      *local_a0 = (undefined1[16])0x0;
      LAB_001047a5:lVar48 = 0;
      *(undefined8*)( local_a0[1] + 8 ) = 0;
      puVar40 = *(undefined8**)( this + 0x20 );
      if (puVar40 != (undefined8*)0x0) goto LAB_0010436a;
      LAB_001047c1:*(undefined1(**) [16])( this + 0x18 ) = local_a0;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_58, (CowData*)param_1);
      lVar48 = local_58[0];
      uVar39 = local_68._0_8_;
      uVar47 = local_68._8_8_;
      local_58[1] = 0;
      local_a0 = (undefined1(*) [16])operator_new(0x20, "");
      *(undefined8*)local_a0[1] = 0;
      *(undefined8*)*local_a0 = uVar39;
      *(undefined8*)( *local_a0 + 8 ) = uVar47;
      if (lVar48 == 0) goto LAB_001047a5;
      CowData<char32_t>::_ref((CowData<char32_t>*)( local_a0 + 1 ), (CowData*)local_58);
      *(undefined8*)( local_a0[1] + 8 ) = 0;
      LOCK();
      plVar1 = (long*)( lVar48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_58[0] + -0x10 ), false);
      }

      puVar40 = *(undefined8**)( this + 0x20 );
      lVar48 = local_70;
      if (puVar40 == (undefined8*)0x0) goto LAB_001047c1;
      LAB_0010436a:*puVar40 = local_a0;
      *(undefined8**)( *local_a0 + 8 ) = puVar40;
   }

   *(undefined1(**) [16])( this + 0x20 ) = local_a0;
   uVar36 = String::hash();
   lVar53 = *(long*)( this + 0x10 );
   uVar55 = 1;
   if (uVar36 != 0) {
      uVar55 = uVar36;
   }

   uVar36 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   uVar38 = CONCAT44(0, uVar36);
   lVar43 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   auVar7._8_8_ = 0;
   auVar7._0_8_ = (ulong)uVar55 * lVar43;
   auVar23._8_8_ = 0;
   auVar23._0_8_ = uVar38;
   lVar44 = SUB168(auVar7 * auVar23, 8);
   lVar52 = *(long*)( this + 8 );
   puVar46 = (uint*)( lVar53 + lVar44 * 4 );
   iVar42 = SUB164(auVar7 * auVar23, 8);
   uVar37 = *puVar46;
   pauVar57 = local_a0;
   if (uVar37 != 0) {
      uVar50 = 0;
      pauVar56 = local_a0;
      do {
         auVar8._8_8_ = 0;
         auVar8._0_8_ = (ulong)uVar37 * lVar43;
         auVar24._8_8_ = 0;
         auVar24._0_8_ = uVar38;
         auVar9._8_8_ = 0;
         auVar9._0_8_ = ( ulong )(( uVar36 + iVar42 ) - SUB164(auVar8 * auVar24, 8)) * lVar43;
         auVar25._8_8_ = 0;
         auVar25._0_8_ = uVar38;
         uVar49 = SUB164(auVar9 * auVar25, 8);
         pauVar57 = pauVar56;
         if (uVar49 < uVar50) {
            *puVar46 = uVar55;
            puVar40 = (undefined8*)( lVar52 + lVar44 * 8 );
            pauVar57 = (undefined1(*) [16])*puVar40;
            *puVar40 = pauVar56;
            uVar50 = uVar49;
            uVar55 = uVar37;
         }

         uVar50 = uVar50 + 1;
         auVar10._8_8_ = 0;
         auVar10._0_8_ = ( ulong )(iVar42 + 1) * lVar43;
         auVar26._8_8_ = 0;
         auVar26._0_8_ = uVar38;
         lVar44 = SUB168(auVar10 * auVar26, 8);
         puVar46 = (uint*)( lVar53 + lVar44 * 4 );
         iVar42 = SUB164(auVar10 * auVar26, 8);
         uVar37 = *puVar46;
         pauVar56 = pauVar57;
      }
 while ( uVar37 != 0 );
   }

   *(undefined1(**) [16])( lVar52 + lVar44 * 8 ) = pauVar57;
   *puVar46 = uVar55;
   *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
   if (lVar48 != 0) {
      LOCK();
      plVar1 = (long*)( lVar48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_70 + -0x10 ), false);
      }

   }

   LAB_001044a0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_a0[1] + 8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<String>::_unref() */void CowData<String>::_unref(CowData<String> *this) {
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
/* WARNING: Control flow encountered bad instruction data *//* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

