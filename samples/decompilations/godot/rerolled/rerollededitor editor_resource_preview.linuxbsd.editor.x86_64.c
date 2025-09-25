/* CowData<int>::_copy_on_write() [clone .isra.0] */void CowData<int>::_copy_on_write(CowData<int> *this) {
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
   __n = lVar2 * 4;
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
/* EditorResourcePreviewGenerator::DrawRequester::_post_semaphore() */void EditorResourcePreviewGenerator::DrawRequester::_post_semaphore(void) {
   int iVar1;
   long in_RSI;
   undefined4 *in_RDI;
   iVar1 = pthread_mutex_lock((pthread_mutex_t*)( in_RSI + 0x178 ));
   if (iVar1 == 0) {
      *(int*)( in_RSI + 0x1d0 ) = *(int*)( in_RSI + 0x1d0 ) + 1;
      std::condition_variable::notify_one();
      pthread_mutex_unlock((pthread_mutex_t*)( in_RSI + 0x178 ));
      *in_RDI = 0;
      *(undefined1(*) [16])( in_RDI + 2 ) = (undefined1[16])0x0;
      return;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar1);
}
/* Ref<FileAccess>::TEMPNAMEPLACEHOLDERVALUE(Ref<FileAccess> const&) [clone .isra.0] */void Ref<FileAccess>::operator =(Ref<FileAccess> *this, Ref *param_1) {
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
/* Ref<Texture2D>::TEMPNAMEPLACEHOLDERVALUE(Ref<Texture2D> const&) [clone .isra.0] */void Ref<Texture2D>::operator =(Ref<Texture2D> *this, Ref *param_1) {
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
/* EditorResourcePreview::_update_thumbnail_sizes() [clone .part.0] */void EditorResourcePreview::_update_thumbnail_sizes(EditorResourcePreview *this) {
   long lVar1;
   code *pcVar2;
   char cVar3;
   undefined4 uVar4;
   int iVar5;
   Object *pOVar6;
   long in_FS_OFFSET;
   Object *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pOVar6 = *(Object**)( EditorNode::singleton + 0x838 );
   if (pOVar6 == (Object*)0x0) {
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   cVar3 = RefCounted::reference();
   if (cVar3 == '\0') {
      pOVar6 = (Object*)0x0;
   }

   pcVar2 = *(code**)( *(long*)pOVar6 + 0x1c8 );
   lVar1 = EditorStringNames::singleton + 0x10;
   if ((_update_thumbnail_sizes()::{lambda()
   #1
   ( iVar5 = __cxa_guard_acquire(&_update_thumbnail_sizes()::{lambda()#1}::operator()()::sname),
     iVar5 != 0) );
   {
      _scs_create((char *)&_update_thumbnail_sizes()::{lambda()
      #1
      __cxa_atexit(StringName::~StringName, &_update_thumbnail_sizes()::, {
            lambda()
            #1
            __cxa_guard_release(&_update_thumbnail_sizes()::{lambda()#1}::operator()()::sname);
  }, ( *pcVar2 )(&local_48, pOVar6, &_update_thumbnail_sizes()::, {
                     lambda()
                     #1
                     uVar4 = ( **(code**)( *(long*)local_48 + 0x1c8 ) )();
                     *(undefined4*)( this + 0x4e0 ) = uVar4;
                     if (( ( local_48 == (Object*)0x0 ) || ( cVar3 = RefCounted::unreference() ),cVar3 == '\0' )) {
                        cVar3 = RefCounted::unreference();
                     }
 else {
                        ( **(code**)( *(long*)local_48 + 0x140 ) )(local_48);
                        Memory::free_static(local_48, false);
                        cVar3 = RefCounted::unreference();
                     }

                     if (( cVar3 == '\0' ) || ( cVar3 = cVar3 == '\0' )) {
                        if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                           return;
                        }

                     }
 else {
                        ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
                        if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                           Memory::free_static(pOVar6, false);
                           return;
                        }

                     }

                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }
, /* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */, void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this, CowData * param_1) * plVar1);
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
, /* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */, void __thiscall
List<PropertyInfo, DefaultAllocator>::push_back
          (List<PropertyInfo,DefaultAllocator> *this,PropertyInfo *param_1), {
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
, /* List<EditorResourcePreview::QueueItem,
   DefaultAllocator>::push_back(EditorResourcePreview::QueueItem const&) [clone .isra.0] */, void __thiscall
List<EditorResourcePreview::QueueItem, DefaultAllocator>::push_back
          (List<EditorResourcePreview::QueueItem,DefaultAllocator> *this,QueueItem *param_1), {
            undefined8 uVar1;
            long *plVar2;
            char cVar3;
            undefined1(*pauVar4)[16];
            long lVar5;
            if (*(long*)this == 0) {
               pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])this = pauVar4;
               *(undefined4*)pauVar4[1] = 0;
               *pauVar4 = (undefined1[16])0x0;
            }

            pauVar4 = (undefined1(*) [16])operator_new(0x50, DefaultAllocator::alloc);
            *pauVar4 = (undefined1[16])0x0;
            *(undefined1(*) [16])( pauVar4[2] + 8 ) = (undefined1[16])0x0;
            lVar5 = *(long*)param_1;
            *(undefined8*)pauVar4[1] = 0;
            *(undefined8*)( pauVar4[1] + 8 ) = 0;
            *(undefined4*)pauVar4[2] = 0;
            *(undefined8*)( pauVar4[4] + 8 ) = 0;
            *(undefined1(*) [16])( pauVar4[3] + 8 ) = (undefined1[16])0x0;
            if (lVar5 != 0) {
               *(long*)*pauVar4 = lVar5;
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  *(undefined8*)*pauVar4 = 0;
               }

               lVar5 = *(long*)( *pauVar4 + 8 );
            }

            if (*(long*)( param_1 + 8 ) != lVar5) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( *pauVar4 + 8 ), (CowData*)( param_1 + 8 ));
            }

            *(undefined8*)pauVar4[1] = *(undefined8*)( param_1 + 0x10 );
            StringName::operator =((StringName*)( pauVar4[1] + 8 ), (StringName*)( param_1 + 0x18 ));
            Variant::operator =((Variant*)( pauVar4 + 2 ), (Variant*)( param_1 + 0x20 ));
            uVar1 = *(undefined8*)( *(long*)this + 8 );
            *(long*)( pauVar4[4] + 8 ) = *(long*)this;
            plVar2 = *(long**)this;
            *(undefined8*)( pauVar4[3] + 8 ) = 0;
            *(undefined8*)pauVar4[4] = uVar1;
            if (plVar2[1] != 0) {
               *(undefined1(**) [16])( plVar2[1] + 0x38 ) = pauVar4;
            }

            plVar2[1] = (long)pauVar4;
            if (*plVar2 != 0) {
               *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
               return;
            }

            *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
            *plVar2 = (long)pauVar4;
            return;
         }
, /* EditorResourcePreviewGenerator::EditorResourcePreviewGenerator() */, void __thiscall
EditorResourcePreviewGenerator::EditorResourcePreviewGenerator(EditorResourcePreviewGenerator *this);
      {
         RefCounted::RefCounted((RefCounted*)this);
         *(undefined***)this = &PTR__initialize_classv_00113828;
         StringName::StringName((StringName*)( this + 0x180 ), "_handles", false);
         this[0x188] = (EditorResourcePreviewGenerator)0x0;
         *(undefined8*)( this + 400 ) = 0;
         StringName::StringName((StringName*)( this + 0x198 ), "_generate", false);
         this[0x1a0] = (EditorResourcePreviewGenerator)0x0;
         *(undefined8*)( this + 0x1a8 ) = 0;
         StringName::StringName((StringName*)( this + 0x1b0 ), "_generate_from_path", false);
         this[0x1b8] = (EditorResourcePreviewGenerator)0x0;
         *(undefined8*)( this + 0x1c0 ) = 0;
         StringName::StringName((StringName*)( this + 0x1c8 ), "_generate_small_preview_automatically", false);
         this[0x1d0] = (EditorResourcePreviewGenerator)0x0;
         *(undefined8*)( this + 0x1d8 ) = 0;
         StringName::StringName((StringName*)( this + 0x1e0 ), "_can_generate_small_preview", false);
         this[0x1e8] = (EditorResourcePreviewGenerator)0x0;
         *(undefined8*)( this + 0x1f0 ) = 0;
         return;
      }

      /* EditorResourcePreviewGenerator::DrawRequester::request_and_wait(RID) */
      void EditorResourcePreviewGenerator::DrawRequester::request_and_wait(DrawRequester *this, undefined8 param_2) {
         Variant *pVVar1;
         code *pcVar2;
         char cVar3;
         int iVar4;
         long lVar5;
         CallableCustom *pCVar6;
         long *plVar7;
         undefined8 uVar8;
         Variant *this_00;
         long in_FS_OFFSET;
         undefined8 local_d0;
         Callable local_c8[16];
         undefined8 local_b8;
         uint local_b0;
         Variant *local_a8;
         undefined1 auStack_a0[16];
         int local_88[6];
         Variant local_70[24];
         undefined8 local_58;
         undefined1 local_50[16];
         long local_40[2];
         auStack_a0._8_8_ = auStack_a0._0_8_;
         local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
         lVar5 = RenderingServer::get_singleton();
         pCVar6 = (CallableCustom*)operator_new(0x48, "");
         CallableCustom::CallableCustom(pCVar6);
         *(long*)( pCVar6 + 0x28 ) = lVar5;
         *(undefined1(*) [16])( pCVar6 + 0x30 ) = (undefined1[16])0x0;
         *(undefined**)( pCVar6 + 0x20 ) = &_LC17;
         *(undefined***)pCVar6 = &PTR_hash_00113b80;
         *(undefined8*)( pCVar6 + 0x40 ) = 0;
         uVar8 = *(undefined8*)( lVar5 + 0x60 );
         *(undefined8*)( pCVar6 + 0x10 ) = 0;
         *(undefined8*)( pCVar6 + 0x30 ) = uVar8;
         *(undefined8*)( pCVar6 + 0x38 ) = 0x9f9;
         CallableCustomMethodPointerBase::_setup((uint*)pCVar6, (int)pCVar6 + 0x28);
         *(char**)( pCVar6 + 0x20 ) = "RS::viewport_set_update_mode";
         Callable::Callable((Callable*)&local_b8, pCVar6);
         local_d0 = param_2;
         Variant::Variant((Variant*)local_88, (RID*)&local_d0);
         Variant::Variant(local_70, 1);
         local_58 = 0;
         this_00 = (Variant*)local_40;
         local_50 = (undefined1[16])0x0;
         auStack_a0._0_8_ = local_70;
         local_a8 = (Variant*)local_88;
         Callable::bindp((Variant**)local_c8, (int)(Callable*)&local_b8);
         do {
            pVVar1 = this_00 + -0x18;
            this_00 = this_00 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( this_00 != (Variant*)local_88 );
         Callable::~Callable((Callable*)&local_b8);
         cVar3 = ( **(code**)( *RenderingServerGlobals::rasterizer + 0xa0 ) )();
         if (cVar3 == '\0') {
            plVar7 = (long*)OS::get_singleton();
            lVar5 = ( **(code**)( *plVar7 + 0x1d0 ) )(plVar7);
            if (lVar5 != 0) {
               lVar5 = __dynamic_cast(lVar5, &Object::typeinfo, &SceneTree::typeinfo, 0);
               if (lVar5 != 0) {
                  uVar8 = Viewport::get_viewport_rid();
                  plVar7 = (long*)RenderingServer::get_singleton();
                  ( **(code**)( *plVar7 + 0x9a8 ) )(plVar7, uVar8, 0);
                  Variant::Variant(this_00, 0);
                  local_a8 = (Variant*)( (ulong)local_a8 & 0xffffffff00000000 );
                  local_b8._0_4_ = 0;
                  local_b8._4_4_ = 0;
                  local_b0 = 0;
                  auStack_a0 = (undefined1[16])0x0;
                  Callable::callp((Variant**)local_c8, 0, (Variant*)0x0, (CallError*)&local_a8);
                  if (Variant::needs_deinit[local_88[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (Variant::needs_deinit[(int)local_a8] != '\0') {
                     Variant::_clear_internal();
                  }

                  plVar7 = (long*)RenderingServer::get_singleton();
                  ( **(code**)( *plVar7 + 0x11c8 ) )(0, plVar7, 0);
                  plVar7 = (long*)RenderingServer::get_singleton();
                  ( **(code**)( *plVar7 + 0x9a8 ) )(plVar7, uVar8, 1);
                  goto LAB_00100ad8;
               }

            }

            _err_print_error("request_and_wait", "editor/editor_resource_preview.cpp", 0x6e, "Parameter \"st\" is null.", "Editor\'s MainLoop is not a SceneTree. This is a bug.", 0, 0);
            Callable::~Callable(local_c8);
            goto LAB_00100ae0;
         }

         plVar7 = (long*)RenderingServer::get_singleton();
         pcVar2 = *(code**)( *plVar7 + 0x108 );
         if (request_and_wait(RID)::{lambda()
         #1
         iVar4 = __cxa_guard_acquire(&request_and_wait(RID)::, {
               lambda()
               #1
               if (iVar4 != 0) {
                  _scs_create((char *)&request_and_wait(RID)::{lambda()
                  #1
                  __cxa_atexit(StringName::~StringName, &request_and_wait(RID)::, {
                        lambda()
                        #1
                        ,
                        &__dso_handle;
                        __cxa_guard_release(&request_and_wait(RID)::{lambda()#1}::operator()()::sname);
    }
  }, ( *pcVar2 )(plVar7, &request_and_wait(RID)::, {
                                 lambda()
                                 #1
                                 plVar7 = (long*)RenderingServer::get_singleton();
                                 pcVar2 = *(code**)( *plVar7 + 0x11c0 );
                                 pCVar6 = (CallableCustom*)operator_new(0x48, "");
                                 CallableCustom::CallableCustom(pCVar6);
                                 *(DrawRequester**)( pCVar6 + 0x28 ) = this;
                                 *(undefined1(*) [16])( pCVar6 + 0x30 ) = (undefined1[16])0x0;
                                 *(undefined**)( pCVar6 + 0x20 ) = &_LC17;
                                 *(undefined***)pCVar6 = &PTR_hash_00113c10;
                                 *(undefined8*)( pCVar6 + 0x40 ) = 0;
                                 uVar8 = *(undefined8*)( this + 0x60 );
                                 *(undefined8*)( pCVar6 + 0x10 ) = 0;
                                 *(undefined8*)( pCVar6 + 0x30 ) = uVar8;
                                 *(code**)( pCVar6 + 0x38 ) = _post_semaphore;
                                 CallableCustomMethodPointerBase::_setup((uint*)pCVar6, (int)pCVar6 + 0x28);
                                 *(char**)( pCVar6 + 0x20 ) = "EditorResourcePreviewGenerator::DrawRequester::_post_semaphore";
                                 Callable::Callable((Callable*)&local_b8, pCVar6);
                                 ( *pcVar2 )(plVar7, (Callable*)&local_b8);
                                 Callable::~Callable((Callable*)&local_b8);
                                 local_b8 = (pthread_mutex_t*)( this + 0x178 );
                                 local_b0 = local_b0 & 0xffffff00;
                                 iVar4 = pthread_mutex_lock(local_b8);
                                 if (iVar4 != 0) {
                                    /* WARNING: Subroutine does not return */
                                    std::__throw_system_error(iVar4);
                                 }

                                 iVar4 = *(int*)( this + 0x1d4 );
                                 local_b0 = CONCAT31(local_b0._1_3_, 1);
                                 *(int*)( this + 0x1d4 ) = iVar4 + 1;
                                 if (*(int*)( this + 0x1d0 ) == 0) {
                                    do {
                                       std::condition_variable::wait((unique_lock*)( this + 0x1a0 ));
                                    }
 while ( *(int*)( this + 0x1d0 ) == 0 );
                                    *(int*)( this + 0x1d4 ) = *(int*)( this + 0x1d4 ) + -1;
                                    *(int*)( this + 0x1d0 ) = *(int*)( this + 0x1d0 ) + -1;
                                    if ((char)local_b0 != '\0') goto LAB_00100ccf;
                                 }
 else {
                                    *(int*)( this + 0x1d4 ) = iVar4;
                                    *(int*)( this + 0x1d0 ) = *(int*)( this + 0x1d0 ) + -1;
                                    LAB_00100ccf:if (local_b8 != (pthread_mutex_t*)0x0) {
                                       pthread_mutex_unlock(local_b8);
                                    }

                                 }

                                 LAB_00100ad8:Callable::~Callable(local_c8);
                                 LAB_00100ae0:if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
                                    return;
                                 }

                                 /* WARNING: Subroutine does not return */
                                 __stack_chk_fail();
                              }
, /* EditorResourcePreviewGenerator::DrawRequester::abort() */, void __thiscall EditorResourcePreviewGenerator::DrawRequester::abort(DrawRequester *this) = ( **(code**)( *RenderingServerGlobals::rasterizer + 0xa0 ) )());
                        if (cVar1 == '\0') {
                           return;
                        }

                        iVar2 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x178 ));
                        if (iVar2 == 0) {
                           *(int*)( this + 0x1d0 ) = *(int*)( this + 0x1d0 ) + 1;
                           std::condition_variable::notify_one();
                           pthread_mutex_unlock((pthread_mutex_t*)( this + 0x178 ));
                           return;
                        }

                        /* WARNING: Subroutine does not return */
                        std::__throw_system_error(iVar2);
                     }
, /* EditorResourcePreview::is_threaded() const */, void EditorResourcePreview::is_threaded(void);
                  {
                     /* WARNING: Could not recover jumptable at 0x00100d8e. Too many branches */
                     /* WARNING: Treating indirect jump as call */
                     ( **(code**)( *RenderingServerGlobals::rasterizer + 0xa0 ) )();
                     return;
                  }

                  /* EditorResourcePreview::get_preview_metadata(String const&) const */
                  String *EditorResourcePreview::get_preview_metadata(String *param_1) {
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
                     ulong uVar20;
                     char cVar21;
                     uint uVar22;
                     uint uVar23;
                     int iVar24;
                     String *in_RDX;
                     long lVar25;
                     long in_RSI;
                     long lVar26;
                     uint uVar27;
                     uint uVar28;
                     if (( *(long*)( in_RSI + 0x4b8 ) != 0 ) && ( *(int*)( in_RSI + 0x4dc ) != 0 )) {
                        uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x4d8 ) * 4 );
                        lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 0x4d8 ) * 8 );
                        uVar22 = String::hash();
                        uVar20 = CONCAT44(0, uVar1);
                        lVar26 = *(long*)( in_RSI + 0x4c0 );
                        uVar23 = 1;
                        if (uVar22 != 0) {
                           uVar23 = uVar22;
                        }

                        auVar3._8_8_ = 0;
                        auVar3._0_8_ = (ulong)uVar23 * lVar2;
                        auVar11._8_8_ = 0;
                        auVar11._0_8_ = uVar20;
                        lVar25 = SUB168(auVar3 * auVar11, 8);
                        uVar22 = *(uint*)( lVar26 + lVar25 * 4 );
                        iVar24 = SUB164(auVar3 * auVar11, 8);
                        if (uVar22 != 0) {
                           uVar27 = 0;
                           do {
                              if (uVar23 == uVar22) {
                                 cVar21 = String::operator ==((String*)( *(long*)( *(long*)( in_RSI + 0x4b8 ) + lVar25 * 8 ) + 0x10 ), in_RDX);
                                 if (cVar21 != '\0') {
                                    if (( *(long*)( in_RSI + 0x4b8 ) != 0 ) && ( *(int*)( in_RSI + 0x4dc ) != 0 )) {
                                       uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x4d8 ) * 4 );
                                       lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 0x4d8 ) * 8 );
                                       uVar22 = String::hash();
                                       uVar20 = CONCAT44(0, uVar1);
                                       lVar26 = *(long*)( in_RSI + 0x4c0 );
                                       uVar23 = 1;
                                       if (uVar22 != 0) {
                                          uVar23 = uVar22;
                                       }

                                       auVar7._8_8_ = 0;
                                       auVar7._0_8_ = (ulong)uVar23 * lVar2;
                                       auVar15._8_8_ = 0;
                                       auVar15._0_8_ = uVar20;
                                       lVar25 = SUB168(auVar7 * auVar15, 8);
                                       uVar22 = *(uint*)( lVar26 + lVar25 * 4 );
                                       uVar27 = SUB164(auVar7 * auVar15, 8);
                                       if (uVar22 != 0) {
                                          uVar28 = 0;
                                          do {
                                             if (uVar23 == uVar22) {
                                                cVar21 = String::operator ==((String*)( *(long*)( *(long*)( in_RSI + 0x4b8 ) + lVar25 * 8 ) + 0x10 ), in_RDX);
                                                if (cVar21 != '\0') {
                                                   Dictionary::Dictionary((Dictionary*)param_1, (Dictionary*)( *(long*)( *(long*)( in_RSI + 0x4b8 ) + (ulong)uVar27 * 8 ) + 0x28 ));
                                                   return param_1;
                                                }

                                                lVar26 = *(long*)( in_RSI + 0x4c0 );
                                             }

                                             uVar28 = uVar28 + 1;
                                             auVar8._8_8_ = 0;
                                             auVar8._0_8_ = ( ulong )(uVar27 + 1) * lVar2;
                                             auVar16._8_8_ = 0;
                                             auVar16._0_8_ = uVar20;
                                             lVar25 = SUB168(auVar8 * auVar16, 8);
                                             uVar22 = *(uint*)( lVar26 + lVar25 * 4 );
                                             uVar27 = SUB164(auVar8 * auVar16, 8);
                                          }
 while ( ( uVar22 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar22 * lVar2,auVar17._8_8_ = 0,auVar17._0_8_ = uVar20,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar1 + uVar27 ) - SUB164(auVar9 * auVar17, 8)) * lVar2,auVar18._8_8_ = 0,auVar18._0_8_ = uVar20,uVar28 <= SUB164(auVar10 * auVar18, 8) );
                                       }

                                    }

                                    _err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
                                    _err_flush_stdout();
                                    /* WARNING: Does not return */
                                    pcVar19 = (code*)invalidInstructionException();
                                    ( *pcVar19 )();
                                 }

                                 lVar26 = *(long*)( in_RSI + 0x4c0 );
                              }

                              uVar27 = uVar27 + 1;
                              auVar4._8_8_ = 0;
                              auVar4._0_8_ = ( ulong )(iVar24 + 1) * lVar2;
                              auVar12._8_8_ = 0;
                              auVar12._0_8_ = uVar20;
                              lVar25 = SUB168(auVar4 * auVar12, 8);
                              uVar22 = *(uint*)( lVar26 + lVar25 * 4 );
                              iVar24 = SUB164(auVar4 * auVar12, 8);
                           }
 while ( ( uVar22 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar22 * lVar2,auVar13._8_8_ = 0,auVar13._0_8_ = uVar20,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar24 ) - SUB164(auVar5 * auVar13, 8)) * lVar2,auVar14._8_8_ = 0,auVar14._0_8_ = uVar20,uVar27 <= SUB164(auVar6 * auVar14, 8) );
                        }

                     }

                     _err_print_error("get_preview_metadata", "editor/editor_resource_preview.cpp", 0x105, "Condition \"!cache.has(p_path)\" is true. Returning: Dictionary()", 0, 0);
                     Dictionary::Dictionary((Dictionary*)param_1);
                     return param_1;
                  }

                  /* EditorResourcePreview::_update_thumbnail_sizes() */
                  void EditorResourcePreview::_update_thumbnail_sizes(EditorResourcePreview *this) {
                     if (*(int*)( this + 0x4e0 ) != -1) {
                        return;
                     }

                     _update_thumbnail_sizes(this);
                     return;
                  }

                  /* EditorResourcePreview::get_resource_preview_if_available(String const&) */
                  String *EditorResourcePreview::get_resource_preview_if_available(String *param_1) {
                     pthread_mutex_t *__mutex;
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
                     ulong uVar11;
                     char cVar12;
                     int iVar13;
                     uint uVar14;
                     uint uVar15;
                     uint uVar16;
                     String *in_RDX;
                     long lVar17;
                     long in_RSI;
                     long lVar18;
                     uint uVar19;
                     __mutex = (pthread_mutex_t*)( in_RSI + 0x410 );
                     *(undefined1(*) [16])param_1 = (undefined1[16])0x0;
                     iVar13 = pthread_mutex_lock(__mutex);
                     if (iVar13 != 0) {
                        LAB_0010128a:/* WARNING: Subroutine does not return */std::__throw_system_error(iVar13);
                     }

                     if (( *(long*)( in_RSI + 0x4b8 ) != 0 ) && ( *(int*)( in_RSI + 0x4dc ) != 0 )) {
                        uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x4d8 ) * 4 );
                        lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 0x4d8 ) * 8 );
                        uVar14 = String::hash();
                        uVar11 = CONCAT44(0, uVar1);
                        lVar18 = *(long*)( in_RSI + 0x4c0 );
                        uVar15 = 1;
                        if (uVar14 != 0) {
                           uVar15 = uVar14;
                        }

                        auVar3._8_8_ = 0;
                        auVar3._0_8_ = (ulong)uVar15 * lVar2;
                        auVar7._8_8_ = 0;
                        auVar7._0_8_ = uVar11;
                        lVar17 = SUB168(auVar3 * auVar7, 8);
                        uVar14 = *(uint*)( lVar18 + lVar17 * 4 );
                        uVar16 = SUB164(auVar3 * auVar7, 8);
                        if (uVar14 != 0) {
                           uVar19 = 0;
                           do {
                              if (uVar15 == uVar14) {
                                 cVar12 = String::operator ==((String*)( *(long*)( *(long*)( in_RSI + 0x4b8 ) + lVar17 * 8 ) + 0x10 ), in_RDX);
                                 if (cVar12 != '\0') {
                                    lVar2 = *(long*)( *(long*)( in_RSI + 0x4b8 ) + (ulong)uVar16 * 8 );
                                    if (lVar2 != 0) {
                                       Ref<Texture2D>::operator =((Ref<Texture2D>*)param_1, *(Ref**)( lVar2 + 0x18 ));
                                       Ref<Texture2D>::operator =((Ref<Texture2D>*)( param_1 + 8 ), *(Ref**)( lVar2 + 0x20 ));
                                       pthread_mutex_unlock(__mutex);
                                       iVar13 = pthread_mutex_lock((pthread_mutex_t*)( in_RSI + 0x438 ));
                                       if (iVar13 == 0) {
                                          *(int*)( in_RSI + 0x490 ) = *(int*)( in_RSI + 0x490 ) + 1;
                                          std::condition_variable::notify_one();
                                          pthread_mutex_unlock((pthread_mutex_t*)( in_RSI + 0x438 ));
                                          return param_1;
                                       }

                                       goto LAB_0010128a;
                                    }

                                    break;
                                 }

                                 lVar18 = *(long*)( in_RSI + 0x4c0 );
                              }

                              uVar19 = uVar19 + 1;
                              auVar4._8_8_ = 0;
                              auVar4._0_8_ = ( ulong )(uVar16 + 1) * lVar2;
                              auVar8._8_8_ = 0;
                              auVar8._0_8_ = uVar11;
                              lVar17 = SUB168(auVar4 * auVar8, 8);
                              uVar14 = *(uint*)( lVar18 + lVar17 * 4 );
                              uVar16 = SUB164(auVar4 * auVar8, 8);
                              if (( uVar14 == 0 ) || ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar11,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar16 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar11,SUB164(auVar6 * auVar10, 8) < uVar19) break;
                           }
 while ( true );
                        }

                     }

                     pthread_mutex_unlock(__mutex);
                     return param_1;
                  }

                  /* EditorResourcePreview::get_singleton() */
                  undefined8 EditorResourcePreview::get_singleton(void) {
                     return singleton;
                  }

                  /* EditorResourcePreview::EditorResourcePreview() */
                  void EditorResourcePreview::EditorResourcePreview(EditorResourcePreview *this) {
                     Node::Node((Node*)this);
                     *(undefined8*)( this + 0x408 ) = 0;
                     *(undefined1(*) [16])( this + 0x420 ) = (undefined1[16])0x0;
                     *(undefined***)this = &PTR__initialize_classv_001139b8;
                     *(undefined8*)( this + 0x430 ) = 0;
                     *(undefined4*)( this + 0x420 ) = 1;
                     *(undefined8*)( this + 0x458 ) = 0;
                     *(undefined1(*) [16])( this + 0x410 ) = (undefined1[16])0x0;
                     *(undefined1(*) [16])( this + 0x438 ) = (undefined1[16])0x0;
                     *(undefined1(*) [16])( this + 0x448 ) = (undefined1[16])0x0;
                     std::condition_variable::condition_variable((condition_variable*)( this + 0x460 ));
                     *(undefined8*)( this + 0x490 ) = 0;
                     Thread::Thread((Thread*)( this + 0x498 ));
                     this[0x4a8] = (EditorResourcePreview)0x0;
                     this[0x4a9] = (EditorResourcePreview)0x0;
                     singleton = this;
                     *(undefined8*)( this + 0x4d8 ) = 2;
                     *(undefined4*)( this + 0x4e0 ) = 0xffffffff;
                     *(undefined8*)( this + 0x4f0 ) = 0;
                     *(undefined1(*) [16])( this + 0x4b8 ) = (undefined1[16])0x0;
                     *(undefined1(*) [16])( this + 0x4c8 ) = (undefined1[16])0x0;
                     return;
                  }

                  /* EditorResourcePreview::start() */
                  void EditorResourcePreview::start(EditorResourcePreview *this) {
                     char cVar1;
                     long *plVar2;
                     long lVar3;
                     long in_FS_OFFSET;
                     undefined4 local_28[2];
                     long local_20;
                     local_20 = *(long*)( in_FS_OFFSET + 0x28 );
                     ( **(code**)( *DisplayServer::singleton + 0x158 ) )(local_28);
                     cVar1 = String::operator ==((String*)local_28, "headless");
                     CowData<char32_t>::_unref((CowData<char32_t>*)local_28);
                     if (cVar1 == '\0') {
                        cVar1 = ( **(code**)( *RenderingServerGlobals::rasterizer + 0xa0 ) )();
                        if (cVar1 == '\0') {
                           plVar2 = (long*)OS::get_singleton();
                           lVar3 = ( **(code**)( *plVar2 + 0x1d0 ) )(plVar2);
                           if (lVar3 != 0) {
                              lVar3 = __dynamic_cast(lVar3, &Object::typeinfo, &SceneTree::typeinfo, 0);
                              if (lVar3 != 0) {
                                 if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                                    SceneTree::add_idle_callback(_idle_callback);
                                    return;
                                 }

                                 goto LAB_0010150f;
                              }

                           }

                           _err_print_error("start", "editor/editor_resource_preview.cpp", 0x237, "Parameter \"st\" is null.", "Editor\'s MainLoop is not a SceneTree. This is a bug.", 0, 0);
                        }
 else {
                           cVar1 = Thread::is_started();
                           if (cVar1 == '\0') {
                              local_28[0] = 1;
                              Thread::start((_func_void_void_ptr*)( this + 0x498 ), _thread_func, (Settings*)this);
                           }
 else {
                              _err_print_error("start", "editor/editor_resource_preview.cpp", 0x233, "Condition \"thread.is_started()\" is true.", "Thread already started.", 0, 0);
                           }

                        }

                     }

                     if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                        return;
                     }

                     LAB_0010150f:/* WARNING: Subroutine does not return */__stack_chk_fail();
                  }

                  /* EditorResourcePreview::_write_preview_cache(Ref<FileAccess>, int, bool, unsigned long, String
   const&, Dictionary const&) */
                  void EditorResourcePreview::_write_preview_cache(undefined8 param_1, undefined8 *param_2) {
                     long *plVar1;
                     code *pcVar2;
                     undefined8 in_R9;
                     long in_FS_OFFSET;
                     Dictionary *in_stack_00000008;
                     Variant local_68[8];
                     CowData<char32_t> local_60[8];
                     int local_58[6];
                     long local_40;
                     plVar1 = (long*)*param_2;
                     pcVar2 = *(code**)( *plVar1 + 0x2b0 );
                     local_40 = *(long*)( in_FS_OFFSET + 0x28 );
                     itos((long)local_60);
                     ( *pcVar2 )(plVar1, local_60);
                     CowData<char32_t>::_unref(local_60);
                     plVar1 = (long*)*param_2;
                     pcVar2 = *(code**)( *plVar1 + 0x2b0 );
                     itos((long)local_60);
                     ( *pcVar2 )(plVar1, local_60);
                     CowData<char32_t>::_unref(local_60);
                     plVar1 = (long*)*param_2;
                     pcVar2 = *(code**)( *plVar1 + 0x2b0 );
                     itos((long)local_60);
                     ( *pcVar2 )(plVar1, local_60);
                     CowData<char32_t>::_unref(local_60);
                     ( **(code**)( *(long*)*param_2 + 0x2b0 ) )((long*)*param_2, in_R9);
                     plVar1 = (long*)*param_2;
                     pcVar2 = *(code**)( *plVar1 + 0x2b0 );
                     Variant::Variant((Variant*)local_58, in_stack_00000008);
                     VariantUtilityFunctions::var_to_str(local_68);
                     String::replace((char*)local_60, (char*)local_68);
                     ( *pcVar2 )(plVar1, local_60);
                     CowData<char32_t>::_unref(local_60);
                     CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     plVar1 = (long*)*param_2;
                     pcVar2 = *(code**)( *plVar1 + 0x2b0 );
                     itos((long)local_60);
                     ( *pcVar2 )(plVar1, local_60);
                     CowData<char32_t>::_unref(local_60);
                     if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                        return;
                     }

                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }

                  /* EditorResourcePreview::_read_preview_cache(Ref<FileAccess>, int*, bool*, unsigned long*, String*,
   Dictionary*, bool*) */
                  void EditorResourcePreview::_read_preview_cache(undefined8 param_1, undefined8 *param_2, undefined4 *param_3, undefined8 param_4, undefined8 *param_5, CowData<char32_t> *param_6, Dictionary *param_7, undefined8 param_8) {
                     undefined4 uVar1;
                     long lVar2;
                     undefined8 uVar3;
                     long in_FS_OFFSET;
                     CowData<char32_t> local_68[8];
                     long local_60;
                     int local_58[6];
                     long local_40;
                     local_40 = *(long*)( in_FS_OFFSET + 0x28 );
                     ( **(code**)( *(long*)*param_2 + 0x228 ) )((CowData<char32_t>*)&local_60);
                     uVar1 = String::to_int();
                     *param_3 = uVar1;
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     ( **(code**)( *(long*)*param_2 + 0x228 ) )((CowData<char32_t>*)&local_60);
                     lVar2 = String::to_int();
                     *(bool*)param_4 = lVar2 != 0;
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     ( **(code**)( *(long*)*param_2 + 0x228 ) )((CowData<char32_t>*)&local_60);
                     uVar3 = String::to_int();
                     *param_5 = uVar3;
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     ( **(code**)( *(long*)*param_2 + 0x228 ) )((CowData<char32_t>*)&local_60);
                     if (*(long*)param_6 != local_60) {
                        CowData<char32_t>::_unref(param_6);
                        lVar2 = local_60;
                        local_60 = 0;
                        *(long*)param_6 = lVar2;
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     ( **(code**)( *(long*)*param_2 + 0x228 ) )(local_68);
                     VariantUtilityFunctions::str_to_var((String*)local_58);
                     Variant::operator_cast_to_Dictionary((Variant*)&local_60);
                     Dictionary::operator =(param_7, (Dictionary*)&local_60);
                     Dictionary::~Dictionary((Dictionary*)&local_60);
                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     CowData<char32_t>::_unref(local_68);
                     ( **(code**)( *(long*)*param_2 + 0x228 ) )((CowData<char32_t>*)&local_60);
                     lVar2 = String::to_int();
                     *(bool*)param_8 = lVar2 < 1;
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                        return;
                     }

                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }

                  /* PropertyInfo::TEMPNAMEPLACEHOLDERVALUE(PropertyInfo&&) [clone .isra.0] */
                  void PropertyInfo::operator =(PropertyInfo *this, PropertyInfo *param_1) {
                     *(undefined4*)this = *(undefined4*)param_1;
                     if (*(long*)( this + 8 ) != *(long*)( param_1 + 8 )) {
                        CowData<char32_t>::_unref((CowData<char32_t>*)( this + 8 ));
                        *(undefined8*)( this + 8 ) = *(undefined8*)( param_1 + 8 );
                        *(undefined8*)( param_1 + 8 ) = 0;
                     }

                     if (*(long*)( this + 0x10 ) != *(long*)( param_1 + 0x10 )) {
                        StringName::unref();
                        *(undefined8*)( this + 0x10 ) = *(undefined8*)( param_1 + 0x10 );
                        *(undefined8*)( param_1 + 0x10 ) = 0;
                     }

                     *(undefined4*)( this + 0x18 ) = *(undefined4*)( param_1 + 0x18 );
                     if (*(long*)( this + 0x20 ) != *(long*)( param_1 + 0x20 )) {
                        CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x20 ));
                        *(undefined8*)( this + 0x20 ) = *(undefined8*)( param_1 + 0x20 );
                        *(undefined8*)( param_1 + 0x20 ) = 0;
                     }

                     *(undefined4*)( this + 0x28 ) = *(undefined4*)( param_1 + 0x28 );
                     return;
                  }

                  /* EditorResourcePreview::_preview_ready(String const&, int, Ref<Texture2D> const&, Ref<Texture2D>
   const&, ObjectID, StringName const&, Variant const&, Dictionary const&) */
                  void EditorResourcePreview::_preview_ready(EditorResourcePreview *this, String *param_1, undefined4 param_2, undefined8 *param_3, undefined8 *param_4, undefined8 param_6, undefined8 param_7, Variant *param_8, Dictionary *param_9) {
                     Variant *pVVar1;
                     Object *pOVar2;
                     Object *pOVar3;
                     undefined8 uVar4;
                     char cVar5;
                     int iVar6;
                     Ref<Texture2D> *this_00;
                     ulong uVar7;
                     Variant *pVVar8;
                     long in_FS_OFFSET;
                     Ref<Texture2D> *local_1c0;
                     ulong local_1a8;
                     undefined8 local_150;
                     Object *local_148;
                     Object *local_140;
                     undefined1 local_138[16];
                     Dictionary local_128[8];
                     undefined4 local_120;
                     ulong local_118;
                     int local_108[8];
                     Variant *local_e8;
                     Variant *pVStack_e0;
                     Variant *local_d8;
                     Variant *pVStack_d0;
                     Variant local_b8[24];
                     Variant local_a0[24];
                     Variant local_88[24];
                     Variant local_70[24];
                     Variant local_58[24];
                     long local_40[2];
                     local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
                     iVar6 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x410 ));
                     if (iVar6 != 0) {
                        /* WARNING: Subroutine does not return */
                        std::__throw_system_error(iVar6);
                     }

                     cVar5 = String::begins_with((char*)param_1);
                     if (cVar5 == '\0') {
                        uVar7 = FileAccess::get_modified_time(param_1);
                        local_140 = (Object*)0x0;
                        local_138._8_8_ = 7;
                        local_138._0_8_ = ".import";
                        String::parse_latin1((StrRange*)&local_140);
                        String::operator +((String*)local_138, param_1);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
                        cVar5 = FileAccess::exists((String*)local_138);
                        local_1a8 = uVar7;
                        if (( cVar5 != '\0' ) && ( local_1a8 = local_1a8 <= uVar7 )) {
                           local_1a8 = uVar7;
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)local_138);
                     }
 else {
                        local_1a8 = 0;
                     }

                     local_1c0 = (Ref<Texture2D>*)&local_140;
                     local_138 = (undefined1[16])0x0;
                     Dictionary::Dictionary(local_128);
                     local_120 = 0;
                     local_118 = 0;
                     Ref<Texture2D>::operator =((Ref<Texture2D>*)local_138, (Ref*)*param_3);
                     Ref<Texture2D>::operator =((Ref<Texture2D>*)( local_138 + 8 ), (Ref*)*param_4);
                     local_118 = local_1a8;
                     local_120 = param_2;
                     Dictionary::operator =(local_128, param_9);
                     this_00 = (Ref<Texture2D>*)HashMap<String,EditorResourcePreview::Item,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorResourcePreview::Item>>>::operator []((HashMap<String,EditorResourcePreview::Item,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorResourcePreview::Item>>>*)( this + 0x4b0 ), param_1);
                     Ref<Texture2D>::operator =(this_00, (Ref*)local_138._0_8_);
                     Ref<Texture2D>::operator =(this_00 + 8, (Ref*)local_138._8_8_);
                     Dictionary::operator =((Dictionary*)( this_00 + 0x10 ), local_128);
                     *(undefined4*)( this_00 + 0x18 ) = local_120;
                     *(ulong*)( this_00 + 0x20 ) = local_118;
                     Dictionary::~Dictionary(local_128);
                     if (( local_138._8_8_ != 0 ) && ( cVar5 = cVar5 != '\0' )) {
                        uVar4 = local_138._8_8_;
                        cVar5 = predelete_handler((Object*)local_138._8_8_);
                        if (cVar5 != '\0') {
                           ( **(code**)( *(long*)uVar4 + 0x140 ) )(uVar4);
                           Memory::free_static((void*)uVar4, false);
                        }

                     }

                     if (( local_138._0_8_ != 0 ) && ( cVar5 = cVar5 != '\0' )) {
                        uVar4 = local_138._0_8_;
                        cVar5 = predelete_handler((Object*)local_138._0_8_);
                        if (cVar5 != '\0') {
                           ( **(code**)( *(long*)uVar4 + 0x140 ) )(uVar4);
                           Memory::free_static((void*)uVar4, false);
                        }

                     }

                     pthread_mutex_unlock((pthread_mutex_t*)( this + 0x410 ));
                     Callable::Callable((Callable*)local_138, param_6, param_7);
                     Variant::Variant((Variant*)local_108, param_8);
                     local_140 = (Object*)0x0;
                     Ref<Texture2D>::operator =(local_1c0, (Ref*)*param_4);
                     local_148 = (Object*)0x0;
                     Ref<Texture2D>::operator =((Ref<Texture2D>*)&local_148, (Ref*)*param_3);
                     local_150 = 0;
                     if (*(long*)param_1 != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_150, (CowData*)param_1);
                     }

                     Variant::Variant(local_b8, (String*)&local_150);
                     pOVar2 = local_148;
                     Variant::Variant(local_a0, local_148);
                     pOVar3 = local_140;
                     Variant::Variant(local_88, local_140);
                     Variant::Variant(local_70, (Variant*)local_108);
                     Variant::Variant(local_58, 0);
                     local_e8 = local_b8;
                     pVStack_e0 = local_a0;
                     local_d8 = local_88;
                     pVStack_d0 = local_70;
                     Callable::call_deferredp((Variant**)local_138, (int)&local_e8);
                     pVVar8 = (Variant*)local_40;
                     do {
                        pVVar1 = pVVar8 + -0x18;
                        pVVar8 = pVVar8 + -0x18;
                        if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                           Variant::_clear_internal();
                        }

                     }
 while ( pVVar8 != local_b8 );
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
                     if (( ( pOVar2 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
                     Memory::free_static(pOVar2, false);
                  }

                  if (( ( pOVar3 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
                  Memory::free_static(pOVar3, false);
               }

               if (Variant::needs_deinit[local_108[0]] != '\0') {
                  Variant::_clear_internal();
               }

               Callable::~Callable((Callable*)local_138);
               if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               return;
            }
, /* EditorResourcePreview::queue_resource_preview(String const&, Object*, StringName const&, Variant
   const&) */, void __thiscall
EditorResourcePreview::queue_resource_preview
          (EditorResourcePreview *this, String * param_1, Object * param_2, StringName * param_3, Variant * param_4);
         {
            Variant *pVVar1;
            pthread_mutex_t *__mutex;
            HashMap<String,EditorResourcePreview::Item,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorResourcePreview::Item>>> *this_00;
            undefined8 uVar2;
            char cVar3;
            int iVar4;
            long lVar5;
            undefined8 *puVar6;
            Variant *pVVar7;
            pthread_mutex_t *__mutex_00;
            long in_FS_OFFSET;
            undefined8 local_170;
            Object *local_168;
            Object *local_160;
            uint local_158[4];
            int local_148[8];
            int local_128[2];
            undefined1 local_120[16];
            int local_108[8];
            Variant *local_e8;
            Variant *pVStack_e0;
            Variant *local_d8;
            Variant *pVStack_d0;
            undefined1 local_b8[16];
            undefined8 local_a8;
            long local_a0;
            int local_98[2];
            undefined1 local_90[16];
            Variant local_70[24];
            undefined8 local_58;
            undefined1 local_50[16];
            long local_40[2];
            local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
            if (param_2 == (Object*)0x0) {
               if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
                  _err_print_error("queue_resource_preview", "editor/editor_resource_preview.cpp", 0x1e1, "Parameter \"p_receiver\" is null.", 0, 0);
                  return;
               }

               LAB_001023c2:/* WARNING: Subroutine does not return */__stack_chk_fail();
            }

            if (*(int*)( this + 0x4e0 ) == -1) {
               _update_thumbnail_sizes(this);
            }

            __mutex = (pthread_mutex_t*)( this + 0x410 );
            iVar4 = pthread_mutex_lock(__mutex);
            if (iVar4 != 0) {
               LAB_001023bb:/* WARNING: Subroutine does not return */std::__throw_system_error(iVar4);
            }

            this_00 = (HashMap<String,EditorResourcePreview::Item,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorResourcePreview::Item>>>*)( this + 0x4b0 );
            local_158[0] = 0;
            cVar3 = HashMap<String,EditorResourcePreview::Item,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorResourcePreview::Item>>>::_lookup_pos(this_00, param_1, local_158);
            if (cVar3 == '\0') {
               local_a8 = 0;
               local_b8 = (undefined1[16])0x0;
               local_a0 = 0;
               local_98[0] = 0;
               local_90 = (undefined1[16])0x0;
               StringName::operator =((StringName*)&local_a0, param_3);
               local_a8 = *(undefined8*)( param_2 + 0x60 );
               if (local_b8._8_8_ != *(long*)param_1) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( local_b8 + 8 ), (CowData*)param_1);
               }

               Variant::operator =((Variant*)local_98, param_4);
               List<EditorResourcePreview::QueueItem,DefaultAllocator>::push_back((List<EditorResourcePreview::QueueItem,DefaultAllocator>*)( this + 0x408 ), (QueueItem*)local_b8);
               if (Variant::needs_deinit[local_98[0]] != '\0') {
                  Variant::_clear_internal();
               }

               if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( local_b8 + 8 ));
               if (( local_b8._0_8_ != 0 ) && ( cVar3 = cVar3 != '\0' )) {
                  uVar2 = local_b8._0_8_;
                  cVar3 = predelete_handler((Object*)local_b8._0_8_);
                  if (cVar3 != '\0') {
                     ( **(code**)( *(long*)uVar2 + 0x140 ) )(uVar2);
                     Memory::free_static((void*)uVar2, false);
                  }

               }

               __mutex_00 = (pthread_mutex_t*)( this + 0x438 );
               pthread_mutex_unlock(__mutex);
               iVar4 = pthread_mutex_lock(__mutex_00);
               if (iVar4 != 0) goto LAB_001023bb;
               *(int*)( this + 0x490 ) = *(int*)( this + 0x490 ) + 1;
               std::condition_variable::notify_one();
               if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_001023c2;
            }
 else {
               Variant::Variant((Variant*)local_148, param_4);
               lVar5 = HashMap<String,EditorResourcePreview::Item,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorResourcePreview::Item>>>::operator [](this_00, param_1);
               local_160 = (Object*)0x0;
               Ref<Texture2D>::operator =((Ref<Texture2D>*)&local_160, *(Ref**)( lVar5 + 8 ));
               puVar6 = (undefined8*)HashMap<String,EditorResourcePreview::Item,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorResourcePreview::Item>>>::operator [](this_00, param_1);
               local_168 = (Object*)0x0;
               Ref<Texture2D>::operator =((Ref<Texture2D>*)&local_168, (Ref*)*puVar6);
               local_170 = 0;
               if (*(long*)param_1 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_170, (CowData*)param_1);
               }

               Variant::Variant((Variant*)local_b8, (String*)&local_170);
               Variant::Variant((Variant*)&local_a0, local_168);
               Variant::Variant((Variant*)( local_90 + 8 ), local_160);
               Variant::Variant(local_70, (Variant*)local_148);
               local_58 = 0;
               local_50 = (undefined1[16])0x0;
               for (int i = 0; i < 3; i++) {
                  local_158[i] = 0;
               }

               local_e8 = (Variant*)local_b8;
               pVStack_e0 = (Variant*)&local_a0;
               local_d8 = (Variant*)( local_90 + 8 );
               pVStack_d0 = local_70;
               ( **(code**)( *(long*)param_2 + 0x68 ) )((Variant*)local_108, param_2, param_3, &local_e8, 4, local_158);
               if (local_158[0] == 0) {
                  Variant::Variant((Variant*)local_128, (Variant*)local_108);
               }
 else {
                  local_128[0] = 0;
                  local_120 = (undefined1[16])0x0;
               }

               if (Variant::needs_deinit[local_108[0]] != '\0') {
                  Variant::_clear_internal();
               }

               pVVar7 = (Variant*)local_40;
               do {
                  pVVar1 = pVVar7 + -0x18;
                  pVVar7 = pVVar7 + -0x18;
                  if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                     Variant::_clear_internal();
                  }

               }
 while ( pVVar7 != (Variant*)local_b8 );
               if (Variant::needs_deinit[local_128[0]] != '\0') {
                  Variant::_clear_internal();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
               Ref<Texture2D>::unref((Ref<Texture2D>*)&local_168);
               Ref<Texture2D>::unref((Ref<Texture2D>*)&local_160);
               if (Variant::needs_deinit[local_148[0]] != '\0') {
                  Variant::_clear_internal();
               }

               __mutex_00 = __mutex;
               if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_001023c2;
            }

            pthread_mutex_unlock(__mutex_00);
            return;
         }

         /* HashMap<String, EditorResourcePreview::Item, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   EditorResourcePreview::Item> > >::erase(String const&) [clone .isra.0] */
         void HashMap<String,EditorResourcePreview::Item,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorResourcePreview::Item>>>::erase(HashMap<String,EditorResourcePreview::Item,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorResourcePreview::Item>>> *this, String *param_1) {
            uint *puVar1;
            uint *puVar2;
            undefined8 *puVar3;
            undefined8 *puVar4;
            long *plVar5;
            uint uVar6;
            uint uVar7;
            long lVar8;
            long lVar9;
            long lVar10;
            undefined8 uVar11;
            long *plVar12;
            Object *pOVar13;
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
            uint uVar26;
            char cVar27;
            uint uVar28;
            int iVar29;
            long lVar30;
            ulong uVar31;
            long *plVar32;
            long in_FS_OFFSET;
            uint local_44;
            long local_40;
            local_40 = *(long*)( in_FS_OFFSET + 0x28 );
            local_44 = 0;
            cVar27 = _lookup_pos(this, param_1, &local_44);
            if (cVar27 == '\0') goto LAB_001025a0;
            lVar8 = *(long*)( this + 0x10 );
            lVar9 = *(long*)( this + 8 );
            uVar6 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar31 = CONCAT44(0, uVar6);
            lVar10 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar14._8_8_ = 0;
            auVar14._0_8_ = ( ulong )(local_44 + 1) * lVar10;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar31;
            lVar30 = SUB168(auVar14 * auVar20, 8);
            puVar1 = (uint*)( lVar8 + lVar30 * 4 );
            uVar28 = SUB164(auVar14 * auVar20, 8);
            uVar7 = *puVar1;
            if (uVar7 != 0) {
               auVar15._8_8_ = 0;
               auVar15._0_8_ = (ulong)uVar7 * lVar10;
               auVar21._8_8_ = 0;
               auVar21._0_8_ = uVar31;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = ( ulong )(( uVar6 + uVar28 ) - SUB164(auVar15 * auVar21, 8)) * lVar10;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = uVar31;
               iVar29 = SUB164(auVar16 * auVar22, 8);
               while (uVar26 = uVar28,iVar29 != 0) {
                  puVar2 = (uint*)( lVar8 + (ulong)local_44 * 4 );
                  *puVar1 = *puVar2;
                  puVar3 = (undefined8*)( lVar9 + lVar30 * 8 );
                  *puVar2 = uVar7;
                  puVar4 = (undefined8*)( lVar9 + (ulong)local_44 * 8 );
                  uVar11 = *puVar3;
                  *puVar3 = *puVar4;
                  *puVar4 = uVar11;
                  auVar19._8_8_ = 0;
                  auVar19._0_8_ = ( ulong )(uVar26 + 1) * lVar10;
                  auVar25._8_8_ = 0;
                  auVar25._0_8_ = uVar31;
                  lVar30 = SUB168(auVar19 * auVar25, 8);
                  puVar1 = (uint*)( lVar8 + lVar30 * 4 );
                  uVar28 = SUB164(auVar19 * auVar25, 8);
                  uVar7 = *puVar1;
                  local_44 = uVar26;
                  if (uVar7 == 0) break;
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = (ulong)uVar7 * lVar10;
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = uVar31;
                  auVar18._8_8_ = 0;
                  auVar18._0_8_ = ( ulong )(( uVar28 + uVar6 ) - SUB164(auVar17 * auVar23, 8)) * lVar10;
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = uVar31;
                  iVar29 = SUB164(auVar18 * auVar24, 8);
               }
;
            }

            uVar31 = (ulong)local_44;
            plVar5 = (long*)( lVar9 + uVar31 * 8 );
            *(undefined4*)( lVar8 + uVar31 * 4 ) = 0;
            plVar32 = (long*)*plVar5;
            if (*(long**)( this + 0x18 ) == plVar32) {
               *(long*)( this + 0x18 ) = *plVar32;
               plVar32 = (long*)*plVar5;
               if (*(long**)( this + 0x20 ) != plVar32) goto LAB_00102522;
               LAB_001025c8:*(long*)( this + 0x20 ) = plVar32[1];
               plVar32 = (long*)*plVar5;
               plVar12 = (long*)plVar32[1];
            }
 else {
               if (*(long**)( this + 0x20 ) == plVar32) goto LAB_001025c8;
               LAB_00102522:plVar12 = (long*)plVar32[1];
            }

            if (plVar12 != (long*)0x0) {
               *plVar12 = *plVar32;
               plVar32 = (long*)*plVar5;
            }

            if (*plVar32 != 0) {
               *(long*)( *plVar32 + 8 ) = plVar32[1];
               plVar32 = (long*)*plVar5;
            }

            Dictionary::~Dictionary((Dictionary*)( plVar32 + 5 ));
            if (( plVar32[4] != 0 ) && ( cVar27 = cVar27 != '\0' )) {
               pOVar13 = (Object*)plVar32[4];
               cVar27 = predelete_handler(pOVar13);
               if (cVar27 != '\0') {
                  ( **(code**)( *(long*)pOVar13 + 0x140 ) )(pOVar13);
                  Memory::free_static(pOVar13, false);
               }

            }

            if (( plVar32[3] != 0 ) && ( cVar27 = cVar27 != '\0' )) {
               pOVar13 = (Object*)plVar32[3];
               cVar27 = predelete_handler(pOVar13);
               if (cVar27 != '\0') {
                  ( **(code**)( *(long*)pOVar13 + 0x140 ) )(pOVar13);
                  Memory::free_static(pOVar13, false);
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( plVar32 + 2 ));
            Memory::free_static(plVar32, false);
            *(undefined8*)( *(long*)( this + 8 ) + uVar31 * 8 ) = 0;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + -1;
            LAB_001025a0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            return;
         }

         /* WARNING: Removing unreachable block (ram,0x001027f4) */
         /* WARNING: Removing unreachable block (ram,0x00102900) */
         /* WARNING: Removing unreachable block (ram,0x0010281d) */
         /* WARNING: Removing unreachable block (ram,0x001028ac) */
         /* WARNING: Removing unreachable block (ram,0x00102968) */
         /* WARNING: Removing unreachable block (ram,0x001028bf) */
         /* WARNING: Removing unreachable block (ram,0x001028c4) */
         /* WARNING: Removing unreachable block (ram,0x001028eb) */
         /* WARNING: Removing unreachable block (ram,0x00102808) */
         /* WARNING: Removing unreachable block (ram,0x0010280d) */
         /* EditorResourcePreview::check_for_invalidation(String const&) */
         void EditorResourcePreview::check_for_invalidation(EditorResourcePreview *this, String *param_1) {
            pthread_mutex_t *__mutex;
            HashMap<String,EditorResourcePreview::Item,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorResourcePreview::Item>>> *this_00;
            char cVar1;
            int iVar2;
            ulong uVar3;
            long lVar4;
            long in_FS_OFFSET;
            ulong local_d0;
            undefined8 local_c0;
            undefined8 local_b8;
            undefined8 local_b0;
            long local_40;
            __mutex = (pthread_mutex_t*)( this + 0x410 );
            local_40 = *(long*)( in_FS_OFFSET + 0x28 );
            iVar2 = pthread_mutex_lock(__mutex);
            if (iVar2 != 0) {
               /* WARNING: Subroutine does not return */
               std::__throw_system_error(iVar2);
            }

            this_00 = (HashMap<String,EditorResourcePreview::Item,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorResourcePreview::Item>>>*)( this + 0x4b0 );
            local_b8 = (char*)( (ulong)local_b8._4_4_ << 0x20 );
            cVar1 = HashMap<String,EditorResourcePreview::Item,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorResourcePreview::Item>>>::_lookup_pos(this_00, param_1, (uint*)&local_b8);
            if (cVar1 != '\0') {
               uVar3 = FileAccess::get_modified_time(param_1);
               local_c0 = 0;
               local_b8 = ".import";
               local_b0 = 7;
               String::parse_latin1((StrRange*)&local_c0);
               String::operator +((String*)&local_b8, param_1);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
               cVar1 = FileAccess::exists((String*)&local_b8);
               local_d0 = uVar3;
               if (( cVar1 != '\0' ) && ( local_d0 = local_d0 <= uVar3 )) {
                  local_d0 = uVar3;
               }

               lVar4 = HashMap<String,EditorResourcePreview::Item,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorResourcePreview::Item>>>::operator [](this_00, param_1);
               if (*(ulong*)( lVar4 + 0x20 ) != local_d0) {
                  HashMap<String,EditorResourcePreview::Item,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorResourcePreview::Item>>>::erase(this_00, param_1);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                  pthread_mutex_unlock(__mutex);
                  local_c0 = 0;
                  if (*(long*)param_1 != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_c0, (CowData*)param_1);
                  }

                  if ((check_for_invalidation(String_const&)::{lambda()
                  #1
                  ( iVar2 = __cxa_guard_acquire(&check_for_invalidation(String_const & sname), iVar2 != 0) );
                  {
                     _scs_create((char*)&check_for_invalidation(String_const & ::sname, true));
                     __cxa_atexit(StringName::~StringName, &check_for_invalidation(String_const & ::sname, &__dso_handle));
                     __cxa_guard_release(&check_for_invalidation(String_const&)::{lambda()
                     #1
                     sname;
                  }

                  /* WARNING: Subroutine does not return */
                  MessageQueue::thread_singleton();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
            }

            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               pthread_mutex_unlock(__mutex);
               return;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         /* EditorResourcePreview::queue_edited_resource_preview(Ref<Resource> const&, Object*, StringName
   const&, Variant const&) */
         void EditorResourcePreview::queue_edited_resource_preview(EditorResourcePreview *this, Ref *param_1, Object *param_2, StringName *param_3, Variant *param_4) {
            Variant *pVVar1;
            pthread_mutex_t *__mutex;
            HashMap<String,EditorResourcePreview::Item,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorResourcePreview::Item>>> *this_00;
            Object *pOVar2;
            undefined1 auVar3[16];
            char cVar4;
            int iVar5;
            int iVar6;
            long lVar7;
            undefined8 *puVar8;
            char *pcVar9;
            undefined8 uVar10;
            Variant *pVVar11;
            pthread_mutex_t *__mutex_00;
            long in_FS_OFFSET;
            long local_178;
            undefined8 local_170;
            Object *local_168;
            Object *local_160;
            int local_158[4];
            int local_148[8];
            int local_128[2];
            undefined1 local_120[16];
            int local_108[8];
            Variant *local_e8;
            Variant *pVStack_e0;
            Variant *local_d8;
            Variant *pVStack_d0;
            undefined1 local_b8[16];
            undefined8 local_a8;
            long local_a0;
            int local_98[2];
            undefined1 local_90[16];
            Variant local_70[24];
            undefined8 local_58;
            undefined1 local_50[16];
            long local_40[2];
            local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
            if (param_2 == (Object*)0x0) {
               if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar10 = 0x1c4;
                  pcVar9 = "Parameter \"p_receiver\" is null.";
                  LAB_00102f49:_err_print_error("queue_edited_resource_preview", "editor/editor_resource_preview.cpp", uVar10, pcVar9, 0, 0);
                  return;
               }

               LAB_00102ffd:/* WARNING: Subroutine does not return */__stack_chk_fail();
            }

            if (*(long*)param_1 == 0) {
               if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar10 = 0x1c5;
                  pcVar9 = "Condition \"p_res.is_null()\" is true.";
                  goto LAB_00102f49;
               }

               goto LAB_00102ffd;
            }

            if (*(int*)( this + 0x4e0 ) == -1) {
               _update_thumbnail_sizes(this);
            }

            __mutex = (pthread_mutex_t*)( this + 0x410 );
            iVar5 = pthread_mutex_lock(__mutex);
            if (iVar5 == 0) {
               this_00 = (HashMap<String,EditorResourcePreview::Item,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorResourcePreview::Item>>>*)( this + 0x4b0 );
               itos((long)local_158);
               operator+((char *)&
               local_178,(String*)&_LC66;
               CowData<char32_t>::_unref((CowData<char32_t>*)local_158);
               local_158[0] = 0;
               cVar4 = HashMap<String,EditorResourcePreview::Item,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorResourcePreview::Item>>>::_lookup_pos(this_00, (String*)&local_178, (uint*)local_158);
               if (cVar4 != '\0') {
                  lVar7 = HashMap<String,EditorResourcePreview::Item,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorResourcePreview::Item>>>::operator [](this_00, (String*)&local_178);
                  iVar5 = *(int*)( lVar7 + 0x18 );
                  iVar6 = ( **(code**)( **(long**)param_1 + 0x1a8 ) )();
                  if (iVar5 == iVar6) {
                     Variant::Variant((Variant*)local_148, param_4);
                     lVar7 = HashMap<String,EditorResourcePreview::Item,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorResourcePreview::Item>>>::operator [](this_00, (String*)&local_178);
                     local_160 = (Object*)0x0;
                     Ref<Texture2D>::operator =((Ref<Texture2D>*)&local_160, *(Ref**)( lVar7 + 8 ));
                     puVar8 = (undefined8*)HashMap<String,EditorResourcePreview::Item,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorResourcePreview::Item>>>::operator [](this_00, (String*)&local_178);
                     local_168 = (Object*)0x0;
                     Ref<Texture2D>::operator =((Ref<Texture2D>*)&local_168, (Ref*)*puVar8);
                     local_170 = 0;
                     if (local_178 != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_170, (CowData*)&local_178);
                     }

                     Variant::Variant((Variant*)local_b8, (String*)&local_170);
                     Variant::Variant((Variant*)&local_a0, local_168);
                     Variant::Variant((Variant*)( local_90 + 8 ), local_160);
                     Variant::Variant(local_70, (Variant*)local_148);
                     local_58 = 0;
                     local_50 = (undefined1[16])0x0;
                     for (int i = 0; i < 3; i++) {
                        local_158[i] = 0;
                     }

                     local_e8 = (Variant*)local_b8;
                     pVStack_e0 = (Variant*)&local_a0;
                     local_d8 = (Variant*)( local_90 + 8 );
                     pVStack_d0 = local_70;
                     ( **(code**)( *(long*)param_2 + 0x68 ) )((Variant*)local_108, param_2, param_3, &local_e8, 4, (CowData<char32_t>*)local_158);
                     if (local_158[0] == 0) {
                        Variant::Variant((Variant*)local_128, (Variant*)local_108);
                     }
 else {
                        local_128[0] = 0;
                        local_120 = (undefined1[16])0x0;
                     }

                     if (Variant::needs_deinit[local_108[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     pVVar11 = (Variant*)local_40;
                     do {
                        pVVar1 = pVVar11 + -0x18;
                        pVVar11 = pVVar11 + -0x18;
                        if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                           Variant::_clear_internal();
                        }

                     }
 while ( pVVar11 != (Variant*)local_b8 );
                     if (Variant::needs_deinit[local_128[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
                     Ref<Texture2D>::unref((Ref<Texture2D>*)&local_168);
                     Ref<Texture2D>::unref((Ref<Texture2D>*)&local_160);
                     if (Variant::needs_deinit[local_148[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
                     __mutex_00 = __mutex;
                     if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_00102ffd;
                     goto LAB_00102c2c;
                  }

               }

               HashMap<String,EditorResourcePreview::Item,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorResourcePreview::Item>>>::erase(this_00, (String*)&local_178);
               local_b8 = (undefined1[16])0x0;
               local_a8 = 0;
               local_a0 = 0;
               local_98[0] = 0;
               local_90 = (undefined1[16])0x0;
               StringName::operator =((StringName*)&local_a0, param_3);
               local_a8 = *(undefined8*)( param_2 + 0x60 );
               pOVar2 = *(Object**)param_1;
               uVar10 = local_b8._0_8_;
               if (pOVar2 != (Object*)local_b8._0_8_) {
                  local_b8._0_8_ = pOVar2;
                  if (( pOVar2 != (Object*)0x0 ) && ( cVar4 = cVar4 == '\0' )) {
                     auVar3._8_8_ = 0;
                     auVar3._0_8_ = local_b8._8_8_;
                     local_b8 = auVar3 << 0x40;
                  }

                  if (( ( (Object*)uVar10 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)uVar10 + 0x140 ))(uVar10);
                  Memory::free_static((void*)uVar10, false);
               }

            }

            if (local_b8._8_8_ != local_178) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( local_b8 + 8 ), (CowData*)&local_178);
            }

            Variant::operator =((Variant*)local_98, param_4);
            List<EditorResourcePreview::QueueItem,DefaultAllocator>::push_back((List<EditorResourcePreview::QueueItem,DefaultAllocator>*)( this + 0x408 ), (QueueItem*)local_b8);
            if (Variant::needs_deinit[local_98[0]] != '\0') {
               Variant::_clear_internal();
            }

            if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( local_b8 + 8 ));
            if (( local_b8._0_8_ != 0 ) && ( cVar4 = cVar4 != '\0' )) {
               uVar10 = local_b8._0_8_;
               cVar4 = predelete_handler((Object*)local_b8._0_8_);
               if (cVar4 != '\0') {
                  ( **(code**)( *(long*)uVar10 + 0x140 ) )(uVar10);
                  Memory::free_static((void*)uVar10, false);
               }

            }

            __mutex_00 = (pthread_mutex_t*)( this + 0x438 );
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
            pthread_mutex_unlock(__mutex);
            iVar5 = pthread_mutex_lock(__mutex_00);
            if (iVar5 == 0) {
               *(int*)( this + 0x490 ) = *(int*)( this + 0x490 ) + 1;
               std::condition_variable::notify_one();
               if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
                  LAB_00102c2c:pthread_mutex_unlock(__mutex_00);
                  return;
               }

               goto LAB_00102ffd;
            }

         }

         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar5);
      }

      /* EditorResourcePreview::_bind_methods() */
      void EditorResourcePreview::_bind_methods(void) {
         long lVar1;
         code *pcVar2;
         undefined1 auVar3[16];
         undefined1 auVar4[16];
         undefined1 auVar5[16];
         undefined1 auVar6[16];
         undefined1 auVar7[16];
         undefined8 uVar8;
         int *piVar9;
         MethodBind *pMVar10;
         uint uVar11;
         long *plVar12;
         int *piVar13;
         long lVar14;
         long in_FS_OFFSET;
         undefined8 local_1a0;
         undefined8 local_198;
         undefined8 local_190;
         long local_188;
         undefined8 local_180;
         char *local_178;
         undefined8 local_170;
         PropertyInfo local_168[48];
         char *local_138;
         undefined8 local_130;
         undefined1 local_128[16];
         undefined8 local_118;
         undefined8 local_110;
         undefined8 local_108;
         undefined8 local_100;
         undefined8 local_f8[2];
         int *local_e8;
         undefined8 local_e0;
         long local_d0;
         char *local_c8;
         char *pcStack_c0;
         char *local_b8;
         char *pcStack_b0;
         undefined8 local_a8;
         char *local_98;
         char *pcStack_90;
         char *local_88;
         char *pcStack_80;
         undefined8 local_78;
         char **local_68;
         undefined1 auStack_60[16];
         char **ppcStack_50;
         long local_40;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         local_78 = 0;
         local_98 = PTR__LC78_00114070;
         pcStack_90 = "receiver";
         ppcStack_50 = &pcStack_80;
         local_88 = "receiver_func";
         pcStack_80 = "userdata";
         auStack_60._8_8_ = &local_88;
         auStack_60._0_8_ = &pcStack_90;
         uVar11 = ( uint ) & local_68;
         local_68 = &local_98;
         D_METHODP((char*)&local_138, (char***)"queue_resource_preview", uVar11);
         auStack_60 = (undefined1[16])0x0;
         local_68 = (char**)0x0;
         pMVar10 = create_method_bind<EditorResourcePreview,String_const&,Object*,StringName_const&,Variant_const&>(queue_resource_preview);
         ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_138, (Variant**)0x0, 0);
         if (Variant::needs_deinit[(int)local_68] != '\0') {
            Variant::_clear_internal();
         }

         uVar8 = local_128._0_8_;
         if ((long*)local_128._0_8_ != (long*)0x0) {
            LOCK();
            plVar12 = (long*)( local_128._0_8_ + -0x10 );
            *plVar12 = *plVar12 + -1;
            UNLOCK();
            if (*plVar12 == 0) {
               if ((long*)local_128._0_8_ == (long*)0x0) {
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

               lVar1 = *(long*)( local_128._0_8_ + -8 );
               auVar3._8_8_ = 0;
               auVar3._0_8_ = local_128._8_8_;
               local_128 = auVar3 << 0x40;
               if (lVar1 != 0) {
                  lVar14 = 0;
                  plVar12 = (long*)uVar8;
                  do {
                     if (( StringName::configured != '\0' ) && ( *plVar12 != 0 )) {
                        StringName::unref();
                     }

                     lVar14 = lVar14 + 1;
                     plVar12 = plVar12 + 1;
                  }
 while ( lVar1 != lVar14 );
               }

               Memory::free_static((long*)( uVar8 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_138 != (char*)0x0 )) {
            StringName::unref();
         }

         local_a8 = 0;
         local_c8 = "resource";
         pcStack_c0 = "receiver";
         local_b8 = "receiver_func";
         pcStack_b0 = "userdata";
         auStack_60._8_8_ = &local_b8;
         auStack_60._0_8_ = &pcStack_c0;
         local_68 = &local_c8;
         ppcStack_50 = &pcStack_b0;
         D_METHODP((char*)&local_138, (char***)"queue_edited_resource_preview", uVar11);
         auStack_60 = (undefined1[16])0x0;
         local_68 = (char**)0x0;
         pMVar10 = create_method_bind<EditorResourcePreview,Ref<Resource>const&,Object*,StringName_const&,Variant_const&>(queue_edited_resource_preview);
         ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_138, (Variant**)0x0, 0);
         if (Variant::needs_deinit[(int)local_68] != '\0') {
            Variant::_clear_internal();
         }

         uVar8 = local_128._0_8_;
         if ((long*)local_128._0_8_ != (long*)0x0) {
            LOCK();
            plVar12 = (long*)( local_128._0_8_ + -0x10 );
            *plVar12 = *plVar12 + -1;
            UNLOCK();
            if (*plVar12 == 0) {
               if ((long*)local_128._0_8_ == (long*)0x0) {
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

               lVar1 = *(long*)( local_128._0_8_ + -8 );
               auVar4._8_8_ = 0;
               auVar4._0_8_ = local_128._8_8_;
               local_128 = auVar4 << 0x40;
               if (lVar1 != 0) {
                  lVar14 = 0;
                  plVar12 = (long*)uVar8;
                  do {
                     if (( StringName::configured != '\0' ) && ( *plVar12 != 0 )) {
                        StringName::unref();
                     }

                     lVar14 = lVar14 + 1;
                     plVar12 = plVar12 + 1;
                  }
 while ( lVar1 != lVar14 );
               }

               Memory::free_static((long*)( uVar8 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_138 != (char*)0x0 )) {
            StringName::unref();
         }

         local_98 = "generator";
         pcStack_90 = (char*)0x0;
         local_68 = &local_98;
         D_METHODP((char*)&local_138, (char***)"add_preview_generator", uVar11);
         auStack_60 = (undefined1[16])0x0;
         local_68 = (char**)0x0;
         pMVar10 = create_method_bind<EditorResourcePreview,Ref<EditorResourcePreviewGenerator>const&>(add_preview_generator);
         ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_138, (Variant**)0x0, 0);
         if (Variant::needs_deinit[(int)local_68] != '\0') {
            Variant::_clear_internal();
         }

         uVar8 = local_128._0_8_;
         if ((long*)local_128._0_8_ != (long*)0x0) {
            LOCK();
            plVar12 = (long*)( local_128._0_8_ + -0x10 );
            *plVar12 = *plVar12 + -1;
            UNLOCK();
            if (*plVar12 == 0) {
               if ((long*)local_128._0_8_ == (long*)0x0) {
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

               lVar1 = *(long*)( local_128._0_8_ + -8 );
               auVar5._8_8_ = 0;
               auVar5._0_8_ = local_128._8_8_;
               local_128 = auVar5 << 0x40;
               if (lVar1 != 0) {
                  lVar14 = 0;
                  plVar12 = (long*)uVar8;
                  do {
                     if (( StringName::configured != '\0' ) && ( *plVar12 != 0 )) {
                        StringName::unref();
                     }

                     lVar14 = lVar14 + 1;
                     plVar12 = plVar12 + 1;
                  }
 while ( lVar1 != lVar14 );
               }

               Memory::free_static((long*)( uVar8 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_138 != (char*)0x0 )) {
            StringName::unref();
         }

         local_98 = "generator";
         pcStack_90 = (char*)0x0;
         local_68 = &local_98;
         D_METHODP((char*)&local_138, (char***)"remove_preview_generator", uVar11);
         auStack_60 = (undefined1[16])0x0;
         local_68 = (char**)0x0;
         pMVar10 = create_method_bind<EditorResourcePreview,Ref<EditorResourcePreviewGenerator>const&>(remove_preview_generator);
         ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_138, (Variant**)0x0, 0);
         if (Variant::needs_deinit[(int)local_68] != '\0') {
            Variant::_clear_internal();
         }

         uVar8 = local_128._0_8_;
         if ((long*)local_128._0_8_ != (long*)0x0) {
            LOCK();
            plVar12 = (long*)( local_128._0_8_ + -0x10 );
            *plVar12 = *plVar12 + -1;
            UNLOCK();
            if (*plVar12 == 0) {
               if ((long*)local_128._0_8_ == (long*)0x0) {
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

               lVar1 = *(long*)( local_128._0_8_ + -8 );
               auVar6._8_8_ = 0;
               auVar6._0_8_ = local_128._8_8_;
               local_128 = auVar6 << 0x40;
               if (lVar1 != 0) {
                  lVar14 = 0;
                  plVar12 = (long*)uVar8;
                  do {
                     if (( StringName::configured != '\0' ) && ( *plVar12 != 0 )) {
                        StringName::unref();
                     }

                     lVar14 = lVar14 + 1;
                     plVar12 = plVar12 + 1;
                  }
 while ( lVar1 != lVar14 );
               }

               Memory::free_static((long*)( uVar8 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_138 != (char*)0x0 )) {
            StringName::unref();
         }

         local_98 = "path";
         pcStack_90 = (char*)0x0;
         local_68 = &local_98;
         D_METHODP((char*)&local_138, (char***)"check_for_invalidation", uVar11);
         auStack_60 = (undefined1[16])0x0;
         local_68 = (char**)0x0;
         pMVar10 = create_method_bind<EditorResourcePreview,String_const&>(check_for_invalidation);
         ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_138, (Variant**)0x0, 0);
         if (Variant::needs_deinit[(int)local_68] != '\0') {
            Variant::_clear_internal();
         }

         uVar8 = local_128._0_8_;
         if ((long*)local_128._0_8_ != (long*)0x0) {
            LOCK();
            plVar12 = (long*)( local_128._0_8_ + -0x10 );
            *plVar12 = *plVar12 + -1;
            UNLOCK();
            if (*plVar12 == 0) {
               if ((long*)local_128._0_8_ == (long*)0x0) {
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

               lVar1 = *(long*)( local_128._0_8_ + -8 );
               auVar7._8_8_ = 0;
               auVar7._0_8_ = local_128._8_8_;
               local_128 = auVar7 << 0x40;
               if (lVar1 != 0) {
                  lVar14 = 0;
                  plVar12 = (long*)uVar8;
                  do {
                     if (( StringName::configured != '\0' ) && ( *plVar12 != 0 )) {
                        StringName::unref();
                     }

                     lVar14 = lVar14 + 1;
                     plVar12 = plVar12 + 1;
                  }
 while ( lVar1 != lVar14 );
               }

               Memory::free_static((long*)( uVar8 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_138 != (char*)0x0 )) {
            StringName::unref();
         }

         local_188 = 0;
         local_190 = 0;
         local_138 = "";
         local_130 = 0;
         String::parse_latin1((StrRange*)&local_190);
         local_198 = 0;
         local_138 = "path";
         local_130 = 4;
         String::parse_latin1((StrRange*)&local_198);
         PropertyInfo::PropertyInfo(local_168, 4, (StrRange*)&local_198, 0, (StrRange*)&local_190, 6, &local_188);
         local_180 = 0;
         local_138 = "preview_invalidated";
         local_130 = 0x13;
         String::parse_latin1((StrRange*)&local_180);
         local_128 = (undefined1[16])0x0;
         local_138 = (char*)0x0;
         local_130 = 0;
         local_118 = 0;
         local_110 = 0;
         local_108 = 6;
         local_100 = 1;
         local_f8[0] = 0;
         local_e8 = (int*)0x0;
         local_e0 = 0;
         local_d0 = 0;
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_138, (CowData*)&local_180);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_f8, local_168);
         local_178 = "EditorResourcePreview";
         local_1a0 = 0;
         local_170 = 0x15;
         String::parse_latin1((StrRange*)&local_1a0);
         StringName::StringName((StringName*)&local_178, (String*)&local_1a0, false);
         ClassDB::add_signal((StringName*)&local_178, (MethodInfo*)&local_138);
         if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
         lVar1 = local_d0;
         if (local_d0 != 0) {
            LOCK();
            plVar12 = (long*)( local_d0 + -0x10 );
            *plVar12 = *plVar12 + -1;
            UNLOCK();
            if (*plVar12 == 0) {
               local_d0 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         piVar9 = local_e8;
         if (local_e8 != (int*)0x0) {
            LOCK();
            plVar12 = (long*)( local_e8 + -4 );
            *plVar12 = *plVar12 + -1;
            UNLOCK();
            if (*plVar12 == 0) {
               if (local_e8 == (int*)0x0) {
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

               lVar1 = *(long*)( local_e8 + -2 );
               local_e8 = (int*)0x0;
               if (lVar1 != 0) {
                  lVar14 = 0;
                  piVar13 = piVar9;
                  do {
                     if (Variant::needs_deinit[*piVar13] != '\0') {
                        Variant::_clear_internal();
                     }

                     lVar14 = lVar14 + 1;
                     piVar13 = piVar13 + 6;
                  }
 while ( lVar1 != lVar14 );
               }

               Memory::free_static(piVar9 + -4, false);
            }

         }

         List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_f8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
         if (( StringName::configured != '\0' ) && ( local_128._8_8_ != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)local_128);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
         PropertyInfo::~PropertyInfo(local_168);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
         if (( StringName::configured != '\0' ) && ( local_188 != 0 )) {
            StringName::unref();
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* CowData<String>::_copy_on_write() [clone .isra.0] */
      void CowData<String>::_copy_on_write(CowData<String> *this) {
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

      /* Vector<String>::push_back(String) [clone .isra.0] */
      void Vector<String>::push_back(Vector<String> *this, CowData *param_2) {
         CowData<char32_t> *this_00;
         int iVar1;
         long lVar2;
         long lVar3;
         if (*(long*)( this + 8 ) == 0) {
            lVar2 = 1;
         }
 else {
            lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
         }

         iVar1 = CowData<String>::resize<false>((CowData<String>*)( this + 8 ), lVar2);
         if (iVar1 == 0) {
            if (*(long*)( this + 8 ) == 0) {
               lVar3 = -1;
               lVar2 = 0;
            }
 else {
               lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
               lVar3 = lVar2 + -1;
               if (-1 < lVar3) {
                  CowData<String>::_copy_on_write((CowData<String>*)( this + 8 ));
                  this_00 = (CowData<char32_t>*)( *(long*)( this + 8 ) + lVar3 * 8 );
                  if (*(long*)this_00 == *(long*)param_2) {
                     return;
                  }

                  CowData<char32_t>::_ref(this_00, param_2);
                  return;
               }

            }

            _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
            return;
         }

         _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
         return;
      }

      /* EditorResourcePreviewGenerator::generate_small_preview_automatically() const */
      bool EditorResourcePreviewGenerator::generate_small_preview_automatically(EditorResourcePreviewGenerator *this) {
         undefined4 uVar1;
         undefined8 uVar2;
         long lVar3;
         long *plVar4;
         code *pcVar5;
         long in_FS_OFFSET;
         bool bVar6;
         undefined8 local_108;
         long local_100;
         GetTypeInfo<bool,void> local_f8[8];
         long local_f0[5];
         int local_c8[2];
         undefined4 uStack_c0;
         undefined4 uStack_bc;
         undefined1 local_b8[16];
         undefined8 local_a8;
         undefined8 local_a0;
         undefined8 local_98;
         undefined8 local_90;
         undefined8 local_88;
         undefined8 local_78;
         ulong local_70;
         undefined8 local_60;
         int local_58[6];
         long local_40;
         plVar4 = *(long**)( this + 0x98 );
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         if (plVar4 != (long*)0x0) {
            local_c8[0] = 0;
            local_c8[1] = 0;
            uStack_c0 = 0;
            ( **(code**)( *plVar4 + 0x60 ) )((Variant*)local_58, plVar4, this + 0x1c8, 0, 0, local_c8);
            if (local_c8[0] == 0) {
               bVar6 = Variant::operator_cast_to_bool((Variant*)local_58);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               goto LAB_00103e07;
            }

            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

         }

         if (( *(long*)( this + 8 ) != 0 ) && ( this[0x1d0] == (EditorResourcePreviewGenerator)0x0 )) {
            local_c8[0] = 0;
            local_c8[1] = 0;
            local_b8 = (undefined1[16])0x0;
            uStack_c0 = 0;
            uStack_bc = 0;
            local_a8 = 0;
            local_a0 = 0;
            local_98 = 6;
            local_90 = 1;
            local_88 = 0;
            local_78 = 0;
            local_70 = 0;
            local_60 = 0;
            String::parse_latin1((String*)local_c8, "_generate_small_preview_automatically");
            local_90 = CONCAT44(local_90._4_4_, 0xc);
            GetTypeInfo<bool,void>::get_class_info(local_f8);
            PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)local_f8);
            PropertyInfo::~PropertyInfo((PropertyInfo*)local_f8);
            local_70 = local_70 & 0xffffffff00000000;
            uVar1 = MethodInfo::get_compatibility_hash();
            lVar3 = *(long*)( this + 8 );
            *(undefined8*)( this + 0x1d8 ) = 0;
            pcVar5 = *(code**)( lVar3 + 0xd8 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xd0 ) ),pcVar5 == (code*)0x0) {
               local_108 = 0;
               String::parse_latin1((String*)&local_108, "EditorResourcePreviewGenerator");
               StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
               ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_f8, (StringName*)&local_100);
               if (local_f0[0] == 0) {
                  CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
                  if (( StringName::configured != '\0' ) && ( lVar3 = local_100 != 0 )) goto LAB_00104038;
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
                  LAB_0010404d:lVar3 = *(long*)( this + 8 );
                  pcVar5 = *(code**)( lVar3 + 200 );
                  if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_00103f90;
                  uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x1c8);
                  *(undefined8*)( this + 0x1d8 ) = uVar2;
               }
 else {
                  lVar3 = *(long*)( local_f0[0] + -8 );
                  CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
                  if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
                     LAB_00104038:StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
                  if (lVar3 == 0) goto LAB_0010404d;
               }

               lVar3 = *(long*)( this + 8 );
            }
 else {
               uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x1c8, uVar1);
               *(undefined8*)( this + 0x1d8 ) = uVar2;
               lVar3 = *(long*)( this + 8 );
            }

            LAB_00103f90:if (*(char*)( lVar3 + 0x29 ) != '\0') {
               plVar4 = (long*)operator_new(0x18, "");
               *plVar4 = (long)( this + 0x1d8 );
               plVar4[1] = (long)( this + 0x1d0 );
               plVar4[2] = *(long*)( this + 0x168 );
               *(long**)( this + 0x168 ) = plVar4;
            }

            this[0x1d0] = (EditorResourcePreviewGenerator)0x1;
            MethodInfo::~MethodInfo((MethodInfo*)local_c8);
         }

         pcVar5 = *(code**)( this + 0x1d8 );
         bVar6 = false;
         if (pcVar5 != (code*)0x0) {
            if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
               ( *pcVar5 )(*(undefined8*)( this + 0x10 ), 0, local_c8);
               bVar6 = local_c8[0]._0_1_ != (String)0x0;
            }
 else {
               ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x1c8, pcVar5, 0, local_c8);
               bVar6 = local_c8[0]._0_1_ != (String)0x0;
            }

         }

         LAB_00103e07:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return bVar6;
      }

      /* EditorResourcePreviewGenerator::can_generate_small_preview() const */
      bool EditorResourcePreviewGenerator::can_generate_small_preview(EditorResourcePreviewGenerator *this) {
         undefined4 uVar1;
         undefined8 uVar2;
         long lVar3;
         long *plVar4;
         code *pcVar5;
         long in_FS_OFFSET;
         bool bVar6;
         undefined8 local_108;
         long local_100;
         GetTypeInfo<bool,void> local_f8[8];
         long local_f0[5];
         int local_c8[2];
         undefined4 uStack_c0;
         undefined4 uStack_bc;
         undefined1 local_b8[16];
         undefined8 local_a8;
         undefined8 local_a0;
         undefined8 local_98;
         undefined8 local_90;
         undefined8 local_88;
         undefined8 local_78;
         ulong local_70;
         undefined8 local_60;
         int local_58[6];
         long local_40;
         plVar4 = *(long**)( this + 0x98 );
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         if (plVar4 != (long*)0x0) {
            local_c8[0] = 0;
            local_c8[1] = 0;
            uStack_c0 = 0;
            ( **(code**)( *plVar4 + 0x60 ) )((Variant*)local_58, plVar4, this + 0x1e0, 0, 0, local_c8);
            if (local_c8[0] == 0) {
               bVar6 = Variant::operator_cast_to_bool((Variant*)local_58);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               goto LAB_001041e7;
            }

            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

         }

         if (( *(long*)( this + 8 ) != 0 ) && ( this[0x1e8] == (EditorResourcePreviewGenerator)0x0 )) {
            local_c8[0] = 0;
            local_c8[1] = 0;
            local_b8 = (undefined1[16])0x0;
            uStack_c0 = 0;
            uStack_bc = 0;
            local_a8 = 0;
            local_a0 = 0;
            local_98 = 6;
            local_90 = 1;
            local_88 = 0;
            local_78 = 0;
            local_70 = 0;
            local_60 = 0;
            String::parse_latin1((String*)local_c8, "_can_generate_small_preview");
            local_90 = CONCAT44(local_90._4_4_, 0xc);
            GetTypeInfo<bool,void>::get_class_info(local_f8);
            PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)local_f8);
            PropertyInfo::~PropertyInfo((PropertyInfo*)local_f8);
            local_70 = local_70 & 0xffffffff00000000;
            uVar1 = MethodInfo::get_compatibility_hash();
            lVar3 = *(long*)( this + 8 );
            *(undefined8*)( this + 0x1f0 ) = 0;
            pcVar5 = *(code**)( lVar3 + 0xd8 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xd0 ) ),pcVar5 == (code*)0x0) {
               local_108 = 0;
               String::parse_latin1((String*)&local_108, "EditorResourcePreviewGenerator");
               StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
               ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_f8, (StringName*)&local_100);
               if (local_f0[0] == 0) {
                  CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
                  if (( StringName::configured != '\0' ) && ( lVar3 = local_100 != 0 )) goto LAB_00104418;
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
                  LAB_0010442d:lVar3 = *(long*)( this + 8 );
                  pcVar5 = *(code**)( lVar3 + 200 );
                  if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_00104370;
                  uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x1e0);
                  *(undefined8*)( this + 0x1f0 ) = uVar2;
               }
 else {
                  lVar3 = *(long*)( local_f0[0] + -8 );
                  CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
                  if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
                     LAB_00104418:StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
                  if (lVar3 == 0) goto LAB_0010442d;
               }

               lVar3 = *(long*)( this + 8 );
            }
 else {
               uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x1e0, uVar1);
               *(undefined8*)( this + 0x1f0 ) = uVar2;
               lVar3 = *(long*)( this + 8 );
            }

            LAB_00104370:if (*(char*)( lVar3 + 0x29 ) != '\0') {
               plVar4 = (long*)operator_new(0x18, "");
               *plVar4 = (long)( this + 0x1f0 );
               plVar4[1] = (long)( this + 0x1e8 );
               plVar4[2] = *(long*)( this + 0x168 );
               *(long**)( this + 0x168 ) = plVar4;
            }

            this[0x1e8] = (EditorResourcePreviewGenerator)0x1;
            MethodInfo::~MethodInfo((MethodInfo*)local_c8);
         }

         pcVar5 = *(code**)( this + 0x1f0 );
         bVar6 = false;
         if (pcVar5 != (code*)0x0) {
            if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
               ( *pcVar5 )(*(undefined8*)( this + 0x10 ), 0, local_c8);
               bVar6 = local_c8[0]._0_1_ != (String)0x0;
            }
 else {
               ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x1e0, pcVar5, 0, local_c8);
               bVar6 = local_c8[0]._0_1_ != (String)0x0;
            }

         }

         LAB_001041e7:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return bVar6;
      }

      /* Vector<int>::push_back(int) [clone .isra.0] */
      void Vector<int>::push_back(Vector<int> *this, int param_1) {
         int iVar1;
         long lVar2;
         long lVar3;
         if (*(long*)( this + 8 ) == 0) {
            lVar2 = 1;
         }
 else {
            lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
         }

         iVar1 = CowData<int>::resize<false>((CowData<int>*)( this + 8 ), lVar2);
         if (iVar1 == 0) {
            if (*(long*)( this + 8 ) == 0) {
               lVar3 = -1;
               lVar2 = 0;
            }
 else {
               lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
               lVar3 = lVar2 + -1;
               if (-1 < lVar3) {
                  CowData<int>::_copy_on_write((CowData<int>*)( this + 8 ));
                  *(int*)( *(long*)( this + 8 ) + lVar3 * 4 ) = param_1;
                  return;
               }

            }

            _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
            return;
         }

         _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
         return;
      }

      /* EditorResourcePreviewGenerator::_bind_methods() */
      void EditorResourcePreviewGenerator::_bind_methods(void) {
         undefined1 auVar1[16];
         undefined1 auVar2[16];
         undefined1 auVar3[16];
         undefined1 auVar4[16];
         undefined1 auVar5[16];
         undefined1 auVar6[16];
         long in_FS_OFFSET;
         CowData<char32_t> *local_140;
         long local_118;
         long local_110;
         long local_108;
         long local_100;
         Vector local_f8[8];
         undefined8 local_f0;
         char *local_e8;
         undefined1 local_e0[16];
         int local_d0;
         undefined8 local_c8;
         undefined4 local_c0;
         char *local_b8;
         undefined8 local_b0;
         undefined1 local_a8[16];
         undefined8 local_98;
         undefined8 local_90;
         undefined8 local_88;
         undefined8 local_80;
         undefined8 local_78[2];
         undefined8 local_68;
         ulong local_60;
         Vector<int> local_58[8];
         undefined8 local_50;
         long local_40;
         local_e0._8_8_ = local_e0._0_8_;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         local_f0 = 0;
         local_e8 = (char*)0x0;
         local_b8 = "type";
         local_b0 = 4;
         String::parse_latin1((StrRange*)&local_e8);
         local_b8 = (char*)0x0;
         if (local_e8 != (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_e8);
         }

         Vector<String>::push_back((Vector<String>*)local_f8, (CowData<char32_t>*)&local_b8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
         local_a8 = (undefined1[16])0x0;
         local_e8 = "_handles";
         local_b8 = (char*)0x0;
         local_b0 = 0;
         local_98 = 0;
         local_90 = 0;
         local_88 = 6;
         local_80 = 1;
         local_78[0] = 0;
         local_68 = 0;
         local_60 = 0;
         local_50 = 0;
         local_e0._0_8_ = 8;
         String::parse_latin1((StrRange*)&local_b8);
         local_80 = CONCAT44(local_80._4_4_, 0xc);
         GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_e8);
         PropertyInfo::operator =((PropertyInfo*)&local_b0, (PropertyInfo*)&local_e8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
         local_60 = local_60 & 0xffffffff00000000;
         local_118 = 0;
         local_110 = 0;
         local_e8 = "";
         auVar6._8_8_ = 0;
         auVar6._0_8_ = local_e0._8_8_;
         local_e0 = auVar6 << 0x40;
         String::parse_latin1((StrRange*)&local_110);
         local_108 = 0;
         local_e8 = (char*)CONCAT44(local_e8._4_4_, 4);
         local_d0 = 0;
         local_c8 = 0;
         local_e0 = (undefined1[16])0x0;
         if (local_110 == 0) {
            LAB_00104868:local_c0 = 6;
            StringName::operator =((StringName*)( local_e0 + 8 ), (StringName*)&local_118);
         }
 else {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_110);
            local_c0 = 6;
            if (local_d0 != 0x11) goto LAB_00104868;
            StringName::StringName((StringName*)&local_100, (String*)&local_c8, false);
            if (local_e0._8_8_ == local_100) {
               if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
                  StringName::unref();
               }

            }
 else {
               StringName::unref();
               local_e0._8_8_ = local_100;
            }

         }

         local_140 = (CowData<char32_t>*)&local_c8;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
         if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
            StringName::unref();
         }

         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_78, (PropertyInfo*)&local_e8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
         Vector<int>::push_back(local_58, 0);
         local_e8 = "EditorResourcePreviewGenerator";
         local_100 = 0;
         local_e0._0_8_ = 0x1e;
         String::parse_latin1((StrRange*)&local_100);
         StringName::StringName((StringName*)&local_e8, (String*)&local_100, false);
         ClassDB::add_virtual_method((StringName*)&local_e8, (MethodInfo*)&local_b8, true, local_f8, false);
         if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         MethodInfo::~MethodInfo((MethodInfo*)&local_b8);
         CowData<String>::_unref((CowData<String>*)&local_f0);
         local_f0 = 0;
         local_e8 = (char*)0x0;
         local_b8 = "resource";
         local_b0 = 8;
         String::parse_latin1((StrRange*)&local_e8);
         local_b8 = (char*)0x0;
         if (local_e8 != (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_e8);
         }

         Vector<String>::push_back((Vector<String>*)local_f8, (CowData<char32_t>*)&local_b8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
         local_108 = 0;
         local_b8 = "size";
         local_b0 = 4;
         String::parse_latin1((StrRange*)&local_108);
         local_b8 = (char*)0x0;
         if (local_108 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_108);
         }

         Vector<String>::push_back((Vector<String>*)local_f8, (CowData<char32_t>*)&local_b8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
         local_100 = 0;
         local_b8 = "metadata";
         local_b0 = 8;
         String::parse_latin1((StrRange*)&local_100);
         local_b8 = (char*)0x0;
         if (local_100 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_100);
         }

         Vector<String>::push_back((Vector<String>*)local_f8, (CowData<char32_t>*)&local_b8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
         local_a8 = (undefined1[16])0x0;
         local_e8 = "_generate";
         local_b8 = (char*)0x0;
         local_b0 = 0;
         local_98 = 0;
         local_90 = 0;
         local_88 = 6;
         local_80 = 1;
         local_78[0] = 0;
         local_68 = 0;
         local_60 = 0;
         local_50 = 0;
         local_e0._0_8_ = 9;
         String::parse_latin1((StrRange*)&local_b8);
         local_80 = CONCAT44(local_80._4_4_, 0xc);
         local_118 = 0;
         local_110 = 0;
         local_e8 = "Texture2D";
         local_e0._0_8_ = 9;
         String::parse_latin1((StrRange*)&local_110);
         local_108 = 0;
         local_e8 = (char*)CONCAT44(local_e8._4_4_, 0x18);
         local_d0 = 0x11;
         local_c8 = 0;
         local_e0 = (undefined1[16])0x0;
         if (local_110 == 0) {
            LAB_00105983:local_c0 = 6;
            StringName::StringName((StringName*)&local_100, (String*)local_140, false);
            if (local_e0._8_8_ == local_100) {
               if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
                  StringName::unref();
               }

            }
 else {
               StringName::unref();
               local_e0._8_8_ = local_100;
            }

         }
 else {
            CowData<char32_t>::_ref(local_140, (CowData*)&local_110);
            local_c0 = 6;
            if (local_d0 == 0x11) goto LAB_00105983;
            StringName::operator =((StringName*)( local_e0 + 8 ), (StringName*)&local_118);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
         if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
            StringName::unref();
         }

         PropertyInfo::operator =((PropertyInfo*)&local_b0, (PropertyInfo*)&local_e8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
         local_60 = local_60 & 0xffffffff00000000;
         local_110 = 0;
         local_108 = 0;
         local_e8 = "Resource";
         local_e0._0_8_ = 8;
         String::parse_latin1((StrRange*)&local_108);
         local_100 = 0;
         PropertyInfo::PropertyInfo((PropertyInfo*)&local_e8, 0x18, (StrRange*)&local_100, 0x11, (CowData<char32_t>*)&local_108, 6, (StrRange*)&local_110);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         if (( StringName::configured != '\0' ) && ( local_110 != 0 )) {
            StringName::unref();
         }

         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_78, (PropertyInfo*)&local_e8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
         Vector<int>::push_back(local_58, 0);
         local_118 = 0;
         local_110 = 0;
         local_e8 = "";
         auVar1._8_8_ = 0;
         auVar1._0_8_ = local_e0._8_8_;
         local_e0 = auVar1 << 0x40;
         String::parse_latin1((StrRange*)&local_110);
         local_108 = 0;
         local_e8 = (char*)CONCAT44(local_e8._4_4_, 6);
         local_d0 = 0;
         local_c8 = 0;
         local_e0 = (undefined1[16])0x0;
         if (local_110 == 0) {
            LAB_00104dbb:local_c0 = 6;
            StringName::operator =((StringName*)( local_e0 + 8 ), (StringName*)&local_118);
         }
 else {
            CowData<char32_t>::_ref(local_140, (CowData*)&local_110);
            local_c0 = 6;
            if (local_d0 != 0x11) goto LAB_00104dbb;
            StringName::StringName((StringName*)&local_100, (String*)local_140, false);
            if (local_e0._8_8_ == local_100) {
               if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
                  StringName::unref();
               }

            }
 else {
               StringName::unref();
               local_e0._8_8_ = local_100;
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
         if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
            StringName::unref();
         }

         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_78, (PropertyInfo*)&local_e8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
         Vector<int>::push_back(local_58, 0);
         local_118 = 0;
         local_110 = 0;
         local_e8 = "";
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_e0._8_8_;
         local_e0 = auVar2 << 0x40;
         String::parse_latin1((StrRange*)&local_110);
         local_108 = 0;
         local_e8 = (char*)CONCAT44(local_e8._4_4_, 0x1b);
         local_d0 = 0;
         local_c8 = 0;
         local_e0 = (undefined1[16])0x0;
         if (local_110 == 0) {
            LAB_00104ee3:local_c0 = 6;
            StringName::operator =((StringName*)( local_e0 + 8 ), (StringName*)&local_118);
         }
 else {
            CowData<char32_t>::_ref(local_140, (CowData*)&local_110);
            local_c0 = 6;
            if (local_d0 != 0x11) goto LAB_00104ee3;
            StringName::StringName((StringName*)&local_100, (String*)local_140, false);
            if (local_e0._8_8_ == local_100) {
               if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
                  StringName::unref();
               }

            }
 else {
               StringName::unref();
               local_e0._8_8_ = local_100;
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
         if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
            StringName::unref();
         }

         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_78, (PropertyInfo*)&local_e8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
         Vector<int>::push_back(local_58, 0);
         local_e8 = "EditorResourcePreviewGenerator";
         local_100 = 0;
         local_e0._0_8_ = 0x1e;
         String::parse_latin1((StrRange*)&local_100);
         StringName::StringName((StringName*)&local_e8, (String*)&local_100, false);
         ClassDB::add_virtual_method((StringName*)&local_e8, (MethodInfo*)&local_b8, true, local_f8, false);
         if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         MethodInfo::~MethodInfo((MethodInfo*)&local_b8);
         CowData<String>::_unref((CowData<String>*)&local_f0);
         local_f0 = 0;
         local_e8 = (char*)0x0;
         local_b8 = "path";
         local_b0 = 4;
         String::parse_latin1((StrRange*)&local_e8);
         local_b8 = (char*)0x0;
         if (local_e8 != (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_e8);
         }

         Vector<String>::push_back((Vector<String>*)local_f8, (CowData<char32_t>*)&local_b8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
         local_108 = 0;
         local_b8 = "size";
         local_b0 = 4;
         String::parse_latin1((StrRange*)&local_108);
         local_b8 = (char*)0x0;
         if (local_108 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_108);
         }

         Vector<String>::push_back((Vector<String>*)local_f8, (CowData<char32_t>*)&local_b8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
         local_100 = 0;
         local_b8 = "metadata";
         local_b0 = 8;
         String::parse_latin1((StrRange*)&local_100);
         local_b8 = (char*)0x0;
         if (local_100 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_100);
         }

         Vector<String>::push_back((Vector<String>*)local_f8, (CowData<char32_t>*)&local_b8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
         local_a8 = (undefined1[16])0x0;
         local_e8 = "_generate_from_path";
         local_b8 = (char*)0x0;
         local_b0 = 0;
         local_98 = 0;
         local_90 = 0;
         local_88 = 6;
         local_80 = 1;
         local_78[0] = 0;
         local_68 = 0;
         local_60 = 0;
         local_50 = 0;
         local_e0._0_8_ = 0x13;
         String::parse_latin1((StrRange*)&local_b8);
         local_80 = CONCAT44(local_80._4_4_, 0xc);
         local_118 = 0;
         local_110 = 0;
         local_e8 = "Texture2D";
         local_e0._0_8_ = 9;
         String::parse_latin1((StrRange*)&local_110);
         local_108 = 0;
         local_e8 = (char*)CONCAT44(local_e8._4_4_, 0x18);
         local_d0 = 0x11;
         local_c8 = 0;
         local_e0 = (undefined1[16])0x0;
         if (local_110 == 0) {
            LAB_001059cb:local_c0 = 6;
            StringName::StringName((StringName*)&local_100, (String*)local_140, false);
            if (local_e0._8_8_ == local_100) {
               if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
                  StringName::unref();
               }

            }
 else {
               StringName::unref();
               local_e0._8_8_ = local_100;
            }

         }
 else {
            CowData<char32_t>::_ref(local_140, (CowData*)&local_110);
            local_c0 = 6;
            if (local_d0 == 0x11) goto LAB_001059cb;
            StringName::operator =((StringName*)( local_e0 + 8 ), (StringName*)&local_118);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
         if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
            StringName::unref();
         }

         PropertyInfo::operator =((PropertyInfo*)&local_b0, (PropertyInfo*)&local_e8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
         local_60 = local_60 & 0xffffffff00000000;
         local_118 = 0;
         local_110 = 0;
         local_e8 = "";
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_e0._8_8_;
         local_e0 = auVar3 << 0x40;
         String::parse_latin1((StrRange*)&local_110);
         local_108 = 0;
         local_e8 = (char*)CONCAT44(local_e8._4_4_, 4);
         local_d0 = 0;
         local_c8 = 0;
         local_e0 = (undefined1[16])0x0;
         if (local_110 == 0) {
            LAB_00105363:local_c0 = 6;
            StringName::operator =((StringName*)( local_e0 + 8 ), (StringName*)&local_118);
         }
 else {
            CowData<char32_t>::_ref(local_140, (CowData*)&local_110);
            local_c0 = 6;
            if (local_d0 != 0x11) goto LAB_00105363;
            StringName::StringName((StringName*)&local_100, (String*)local_140, false);
            if (local_e0._8_8_ == local_100) {
               if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
                  StringName::unref();
               }

            }
 else {
               StringName::unref();
               local_e0._8_8_ = local_100;
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
         if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
            StringName::unref();
         }

         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_78, (PropertyInfo*)&local_e8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
         Vector<int>::push_back(local_58, 0);
         local_118 = 0;
         local_110 = 0;
         local_e8 = "";
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_e0._8_8_;
         local_e0 = auVar4 << 0x40;
         String::parse_latin1((StrRange*)&local_110);
         local_108 = 0;
         local_e8 = (char*)CONCAT44(local_e8._4_4_, 6);
         local_d0 = 0;
         local_c8 = 0;
         local_e0 = (undefined1[16])0x0;
         if (local_110 == 0) {
            LAB_0010548b:local_c0 = 6;
            StringName::operator =((StringName*)( local_e0 + 8 ), (StringName*)&local_118);
         }
 else {
            CowData<char32_t>::_ref(local_140, (CowData*)&local_110);
            local_c0 = 6;
            if (local_d0 != 0x11) goto LAB_0010548b;
            StringName::StringName((StringName*)&local_100, (String*)local_140, false);
            if (local_e0._8_8_ == local_100) {
               if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
                  StringName::unref();
               }

            }
 else {
               StringName::unref();
               local_e0._8_8_ = local_100;
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
         if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
            StringName::unref();
         }

         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_78, (PropertyInfo*)&local_e8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
         Vector<int>::push_back(local_58, 0);
         local_118 = 0;
         local_110 = 0;
         local_e8 = "";
         auVar5._8_8_ = 0;
         auVar5._0_8_ = local_e0._8_8_;
         local_e0 = auVar5 << 0x40;
         String::parse_latin1((StrRange*)&local_110);
         local_108 = 0;
         local_e8 = (char*)CONCAT44(local_e8._4_4_, 0x1b);
         local_d0 = 0;
         local_c8 = 0;
         local_e0 = (undefined1[16])0x0;
         if (local_110 != 0) {
            CowData<char32_t>::_ref(local_140, (CowData*)&local_110);
            local_c0 = 6;
            if (local_d0 == 0x11) {
               StringName::StringName((StringName*)&local_100, (String*)local_140, false);
               if (local_e0._8_8_ == local_100) {
                  if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
                     StringName::unref();
                  }

               }
 else {
                  StringName::unref();
                  local_e0._8_8_ = local_100;
               }

               goto LAB_001055c2;
            }

         }

         local_c0 = 6;
         StringName::operator =((StringName*)( local_e0 + 8 ), (StringName*)&local_118);
         LAB_001055c2:CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
         if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
            StringName::unref();
         }

         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_78, (PropertyInfo*)&local_e8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
         Vector<int>::push_back(local_58, 0);
         local_e8 = "EditorResourcePreviewGenerator";
         local_100 = 0;
         local_e0._0_8_ = 0x1e;
         String::parse_latin1((StrRange*)&local_100);
         StringName::StringName((StringName*)&local_e8, (String*)&local_100, false);
         ClassDB::add_virtual_method((StringName*)&local_e8, (MethodInfo*)&local_b8, true, local_f8, false);
         if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         MethodInfo::~MethodInfo((MethodInfo*)&local_b8);
         CowData<String>::_unref((CowData<String>*)&local_f0);
         local_a8 = (undefined1[16])0x0;
         local_e8 = "_generate_small_preview_automatically";
         local_f0 = 0;
         local_b8 = (char*)0x0;
         local_b0 = 0;
         local_98 = 0;
         local_90 = 0;
         local_88 = 6;
         local_80 = 1;
         local_78[0] = 0;
         local_68 = 0;
         local_60 = 0;
         local_50 = 0;
         local_e0._0_8_ = 0x25;
         String::parse_latin1((StrRange*)&local_b8);
         local_80 = CONCAT44(local_80._4_4_, 0xc);
         GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_e8);
         PropertyInfo::operator =((PropertyInfo*)&local_b0, (PropertyInfo*)&local_e8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
         local_e8 = "EditorResourcePreviewGenerator";
         local_60 = local_60 & 0xffffffff00000000;
         local_100 = 0;
         local_e0._0_8_ = 0x1e;
         String::parse_latin1((StrRange*)&local_100);
         StringName::StringName((StringName*)&local_e8, (String*)&local_100, false);
         ClassDB::add_virtual_method((StringName*)&local_e8, (MethodInfo*)&local_b8, true, local_f8, false);
         if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         MethodInfo::~MethodInfo((MethodInfo*)&local_b8);
         CowData<String>::_unref((CowData<String>*)&local_f0);
         local_a8 = (undefined1[16])0x0;
         local_e8 = "_can_generate_small_preview";
         local_f0 = 0;
         local_b8 = (char*)0x0;
         local_b0 = 0;
         local_98 = 0;
         local_90 = 0;
         local_88 = 6;
         local_80 = 1;
         local_78[0] = 0;
         local_68 = 0;
         local_60 = 0;
         local_50 = 0;
         local_e0._0_8_ = 0x1b;
         String::parse_latin1((StrRange*)&local_b8);
         local_80 = CONCAT44(local_80._4_4_, 0xc);
         GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_e8);
         PropertyInfo::operator =((PropertyInfo*)&local_b0, (PropertyInfo*)&local_e8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
         local_e8 = "EditorResourcePreviewGenerator";
         local_60 = local_60 & 0xffffffff00000000;
         local_100 = 0;
         local_e0._0_8_ = 0x1e;
         String::parse_latin1((StrRange*)&local_100);
         StringName::StringName((StringName*)&local_e8, (String*)&local_100, false);
         ClassDB::add_virtual_method((StringName*)&local_e8, (MethodInfo*)&local_b8, true, local_f8, false);
         if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         MethodInfo::~MethodInfo((MethodInfo*)&local_b8);
         CowData<String>::_unref((CowData<String>*)&local_f0);
         if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return;
      }

      /* EditorResourcePreviewGenerator::generate_from_path(String const&, Vector2 const&, Dictionary&)
   const */
      String *EditorResourcePreviewGenerator::generate_from_path(String *param_1, Vector2 *param_2, Dictionary *param_3) {
         Variant *pVVar1;
         Object *pOVar2;
         char cVar3;
         undefined8 uVar4;
         long lVar5;
         Ref *pRVar6;
         long *plVar7;
         Vector2 *in_RCX;
         code *pcVar8;
         Dictionary *in_R8;
         Variant *pVVar9;
         long in_FS_OFFSET;
         String *local_1d8;
         long local_1b0;
         Ref *local_1a0;
         undefined8 local_198;
         Dictionary local_190[8];
         undefined8 local_188;
         Ref *local_180;
         Ref *local_178;
         long local_170[5];
         int local_148;
         undefined4 uStack_144;
         undefined4 uStack_140;
         undefined4 uStack_13c;
         undefined1 local_138[16];
         undefined8 local_128;
         undefined8 local_120;
         undefined8 local_118;
         undefined8 local_110;
         undefined8 local_108[2];
         undefined8 local_f8;
         ulong local_f0;
         Vector<int> local_e8[8];
         undefined8 local_e0;
         undefined8 local_d0;
         Variant *local_c8;
         Variant *pVStack_c0;
         Variant *local_b8;
         undefined8 local_a8[4];
         CowData<char32_t> *local_88;
         undefined8 *puStack_80;
         Dictionary *local_78;
         Variant local_70[24];
         Variant local_58[24];
         long local_40[2];
         local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
         local_1a0 = (Ref*)0x0;
         Dictionary::Dictionary(local_190, in_R8);
         uVar4 = Vector2::operator_cast_to_Vector2i(in_RCX);
         local_198 = 0;
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_198, (CowData*)param_3);
         plVar7 = *(long**)( param_2 + 0x98 );
         local_d0 = uVar4;
         if (plVar7 == (long*)0x0) {
            LAB_00105cd5:local_1d8 = (String*)&local_148;
            if (( *(long*)( param_2 + 8 ) != 0 ) && ( param_2[0x1b8] == (Vector2)0x0 )) {
               local_148 = 0;
               uStack_144 = 0;
               local_138 = (undefined1[16])0x0;
               uStack_140 = 0;
               uStack_13c = 0;
               local_128 = 0;
               local_120 = 0;
               local_118 = 6;
               local_110 = 1;
               local_108[0] = 0;
               local_f8 = 0;
               local_f0 = 0;
               local_e0 = 0;
               String::parse_latin1(local_1d8, "_generate_from_path");
               local_110 = CONCAT44(local_110._4_4_, 0xc);
               GetTypeInfo<Ref<Texture2D>,void>::get_class_info((GetTypeInfo<Ref<Texture2D>,void>*)&local_178);
               PropertyInfo::operator =((PropertyInfo*)&uStack_140, (PropertyInfo*)&local_178);
               PropertyInfo::~PropertyInfo((PropertyInfo*)&local_178);
               local_f0 = local_f0 & 0xffffffff00000000;
               GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_178);
               List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_108, (PropertyInfo*)&local_178);
               PropertyInfo::~PropertyInfo((PropertyInfo*)&local_178);
               Vector<int>::push_back(local_e8, 0);
               GetTypeInfo<Vector2i,void>::get_class_info((GetTypeInfo<Vector2i,void>*)&local_178);
               List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_108, (PropertyInfo*)&local_178);
               PropertyInfo::~PropertyInfo((PropertyInfo*)&local_178);
               Vector<int>::push_back(local_e8, 0);
               GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void>*)&local_178);
               List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_108, (PropertyInfo*)&local_178);
               PropertyInfo::~PropertyInfo((PropertyInfo*)&local_178);
               Vector<int>::push_back(local_e8, 0);
               MethodInfo::get_compatibility_hash();
               *(undefined8*)( param_2 + 0x1c0 ) = 0;
               lVar5 = *(long*)( param_2 + 8 );
               pcVar8 = *(code**)( lVar5 + 0xd8 );
               if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar5 + 0xd0 ) ),pcVar8 == (code*)0x0) {
                  local_188 = 0;
                  String::parse_latin1((String*)&local_188, "EditorResourcePreviewGenerator");
                  StringName::StringName((StringName*)&local_180, (String*)&local_188, false);
                  ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_178, (StringName*)&local_180);
                  if (local_170[0] == 0) {
                     CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_170);
                     local_1b0 = 0;
                     if (StringName::configured != '\0') goto LAB_00106310;
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
                     LAB_00106330:lVar5 = *(long*)( param_2 + 8 );
                     pcVar8 = *(code**)( lVar5 + 200 );
                     if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar5 + 0xc0 ) ),pcVar8 == (code*)0x0) goto LAB_0010620b;
                     uVar4 = ( *pcVar8 )(*(undefined8*)( lVar5 + 0xa0 ), param_2 + 0x1b0);
                     *(undefined8*)( param_2 + 0x1c0 ) = uVar4;
                  }
 else {
                     local_1b0 = *(long*)( local_170[0] + -8 );
                     CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_170);
                     if (StringName::configured != '\0') {
                        LAB_00106310:if (local_180 != (Ref*)0x0) {
                           StringName::unref();
                        }

                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
                     if (local_1b0 == 0) goto LAB_00106330;
                  }

                  lVar5 = *(long*)( param_2 + 8 );
               }
 else {
                  uVar4 = ( *pcVar8 )(*(undefined8*)( lVar5 + 0xa0 ), param_2 + 0x1b0);
                  *(undefined8*)( param_2 + 0x1c0 ) = uVar4;
                  lVar5 = *(long*)( param_2 + 8 );
               }

               LAB_0010620b:if (*(char*)( lVar5 + 0x29 ) != '\0') {
                  plVar7 = (long*)operator_new(0x18, "");
                  *plVar7 = (long)( param_2 + 0x1c0 );
                  plVar7[1] = (long)( param_2 + 0x1b8 );
                  plVar7[2] = *(long*)( param_2 + 0x168 );
                  *(long**)( param_2 + 0x168 ) = plVar7;
               }

               param_2[0x1b8] = (Vector2)0x1;
               MethodInfo::~MethodInfo((MethodInfo*)local_1d8);
            }

            if (*(long*)( param_2 + 0x1c0 ) != 0) {
               local_188 = 0;
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_188, (CowData*)&local_198);
               local_a8[0] = local_d0;
               Dictionary::Dictionary((Dictionary*)&local_180, local_190);
               puStack_80 = local_a8;
               local_178 = (Ref*)0x0;
               local_88 = (CowData<char32_t>*)&local_188;
               local_78 = (Dictionary*)&local_180;
               if (*(code**)( *(long*)( param_2 + 8 ) + 0xe0 ) == (code*)0x0) {
                  ( **(code**)( param_2 + 0x1c0 ) )(*(undefined8*)( param_2 + 0x10 ), &local_88, (StrRange*)&local_178);
               }
 else {
                  ( **(code**)( *(long*)( param_2 + 8 ) + 0xe0 ) )(*(undefined8*)( param_2 + 0x10 ), param_2 + 0x1b0, *(undefined8*)( param_2 + 0x1c0 ), &local_88, (StrRange*)&local_178);
               }

               local_148 = 0;
               uStack_144 = 0;
               Ref<Texture2D>::operator =((Ref<Texture2D>*)local_1d8, local_178);
               Ref<Texture2D>::operator =((Ref<Texture2D>*)&local_1a0, (Ref*)CONCAT44(uStack_144, local_148));
               Ref<Texture2D>::unref((Ref<Texture2D>*)local_1d8);
               Ref<Texture2D>::unref((Ref<Texture2D>*)&local_178);
               Dictionary::~Dictionary((Dictionary*)&local_180);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
               goto LAB_00105edd;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
            Dictionary::~Dictionary(local_190);
            local_148 = 0x10a247;
            uStack_144 = 0;
            local_178 = (Ref*)0x0;
            uStack_140 = 0;
            uStack_13c = 0;
            String::parse_latin1((StrRange*)&local_178);
            ResourceLoader::load(local_1d8, param_3, (StrRange*)&local_178, 1, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
            if (CONCAT44(uStack_144, local_148) == 0) {
               *(undefined8*)param_1 = 0;
               goto LAB_00105da8;
            }

            ( **(code**)( *(long*)param_2 + 0x158 ) )(param_1, param_2, local_1d8, in_RCX, in_R8);
            if (( CONCAT44(uStack_144, local_148) == 0 ) || ( cVar3 = cVar3 == '\0' )) goto LAB_00105da8;
            pOVar2 = (Object*)CONCAT44(uStack_144, local_148);
            cVar3 = predelete_handler(pOVar2);
         }
 else {
            local_148 = 0;
            uStack_144 = 0;
            uStack_140 = 0;
            Variant::Variant((Variant*)&local_88, (String*)&local_198);
            Variant::Variant(local_70, (Vector2i*)&local_d0);
            Variant::Variant(local_58, local_190);
            local_c8 = (Variant*)&local_88;
            pVStack_c0 = local_70;
            local_b8 = local_58;
            ( **(code**)( *plVar7 + 0x60 ) )(local_a8, plVar7, param_2 + 0x1b0, &local_c8, 3, &local_148);
            if (local_148 != 0) {
               if (Variant::needs_deinit[(int)local_a8[0]] != '\0') {
                  Variant::_clear_internal();
               }

               pVVar9 = (Variant*)local_40;
               do {
                  pVVar1 = pVVar9 + -0x18;
                  pVVar9 = pVVar9 + -0x18;
                  if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                     Variant::_clear_internal();
                  }

               }
 while ( pVVar9 != (Variant*)&local_88 );
               goto LAB_00105cd5;
            }

            local_180 = (Ref*)0x0;
            lVar5 = Variant::get_validated_object();
            if (( lVar5 == 0 ) || ( pRVar6 = (Ref*)__dynamic_cast(lVar5, &Object::typeinfo, &Texture2D::typeinfo, 0) ),pRVar6 == (Ref*)0x0) {
               pRVar6 = (Ref*)0x0;
            }
 else {
               local_178 = (Ref*)0x0;
               local_180 = pRVar6;
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  local_180 = (Ref*)0x0;
                  pRVar6 = (Ref*)0x0;
               }

               Ref<Texture2D>::unref((Ref<Texture2D>*)&local_178);
            }

            Ref<Texture2D>::operator =((Ref<Texture2D>*)&local_1a0, pRVar6);
            Ref<Texture2D>::unref((Ref<Texture2D>*)&local_180);
            if (Variant::needs_deinit[(int)local_a8[0]] != '\0') {
               Variant::_clear_internal();
            }

            pVVar9 = (Variant*)local_40;
            do {
               pVVar1 = pVVar9 + -0x18;
               pVVar9 = pVVar9 + -0x18;
               if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                  Variant::_clear_internal();
               }

            }
 while ( pVVar9 != (Variant*)&local_88 );
            LAB_00105edd:CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
            Dictionary::~Dictionary(local_190);
            pOVar2 = (Object*)local_1a0;
            *(undefined8*)param_1 = 0;
            Ref<Texture2D>::operator =((Ref<Texture2D>*)param_1, local_1a0);
            if (( pOVar2 == (Object*)0x0 ) || ( cVar3 = cVar3 == '\0' )) goto LAB_00105da8;
            cVar3 = predelete_handler(pOVar2);
         }

         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

         LAB_00105da8:if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
            return param_1;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* EditorResourcePreviewGenerator::generate(Ref<Resource> const&, Vector2 const&, Dictionary&) const
    */
      Ref *EditorResourcePreviewGenerator::generate(Ref *param_1, Vector2 *param_2, Dictionary *param_3) {
         Variant *pVVar1;
         char cVar2;
         undefined4 uVar3;
         long lVar4;
         Ref *pRVar5;
         undefined8 uVar6;
         long *plVar7;
         Vector2 *in_RCX;
         code *pcVar8;
         Object *pOVar9;
         Dictionary *in_R8;
         Variant *pVVar10;
         long in_FS_OFFSET;
         Object *local_198;
         Dictionary local_190[8];
         Object *local_188;
         Ref *local_180;
         Ref *local_178;
         long local_170[5];
         int local_148;
         undefined4 uStack_144;
         undefined4 uStack_140;
         undefined4 uStack_13c;
         undefined1 local_138[16];
         undefined8 local_128;
         undefined8 local_120;
         undefined8 local_118;
         undefined8 local_110;
         undefined8 local_108[2];
         undefined8 local_f8;
         ulong local_f0;
         Vector<int> local_e8[8];
         undefined8 local_e0;
         undefined8 local_d0;
         Variant *local_c8;
         Variant *pVStack_c0;
         Variant *local_b8;
         undefined8 local_a8[4];
         Ref<Resource> *local_88;
         undefined8 *puStack_80;
         Dictionary *local_78;
         Variant local_70[24];
         Variant local_58[24];
         long local_40[2];
         local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
         local_198 = (Object*)0x0;
         Dictionary::Dictionary(local_190, in_R8);
         local_d0 = Vector2::operator_cast_to_Vector2i(in_RCX);
         pOVar9 = *(Object**)param_3;
         if (( pOVar9 != (Object*)0x0 ) && ( cVar2 = cVar2 == '\0' )) {
            pOVar9 = (Object*)0x0;
         }

         plVar7 = *(long**)( param_2 + 0x98 );
         if (plVar7 == (long*)0x0) {
            LAB_00106567:if (( *(long*)( param_2 + 8 ) != 0 ) && ( param_2[0x1a0] == (Vector2)0x0 )) {
               local_148 = 0;
               uStack_144 = 0;
               local_138 = (undefined1[16])0x0;
               uStack_140 = 0;
               uStack_13c = 0;
               local_128 = 0;
               local_120 = 0;
               local_118 = 6;
               local_110 = 1;
               local_108[0] = 0;
               local_f8 = 0;
               local_f0 = 0;
               local_e0 = 0;
               String::parse_latin1((String*)&local_148, "_generate");
               local_110 = CONCAT44(local_110._4_4_, 0xc);
               GetTypeInfo<Ref<Texture2D>,void>::get_class_info((GetTypeInfo<Ref<Texture2D>,void>*)&local_178);
               PropertyInfo::operator =((PropertyInfo*)&uStack_140, (PropertyInfo*)&local_178);
               PropertyInfo::~PropertyInfo((PropertyInfo*)&local_178);
               local_f0 = local_f0 & 0xffffffff00000000;
               GetTypeInfo<Ref<Resource>,void>::get_class_info((GetTypeInfo<Ref<Resource>,void>*)&local_178);
               List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_108, (PropertyInfo*)&local_178);
               PropertyInfo::~PropertyInfo((PropertyInfo*)&local_178);
               Vector<int>::push_back(local_e8, 0);
               GetTypeInfo<Vector2i,void>::get_class_info((GetTypeInfo<Vector2i,void>*)&local_178);
               List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_108, (PropertyInfo*)&local_178);
               PropertyInfo::~PropertyInfo((PropertyInfo*)&local_178);
               Vector<int>::push_back(local_e8, 0);
               GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void>*)&local_178);
               List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_108, (PropertyInfo*)&local_178);
               PropertyInfo::~PropertyInfo((PropertyInfo*)&local_178);
               Vector<int>::push_back(local_e8, 0);
               uVar3 = MethodInfo::get_compatibility_hash();
               *(undefined8*)( param_2 + 0x1a8 ) = 0;
               lVar4 = *(long*)( param_2 + 8 );
               pcVar8 = *(code**)( lVar4 + 0xd8 );
               if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar4 + 0xd0 ) ),pcVar8 == (code*)0x0) {
                  local_188 = (Object*)0x0;
                  String::parse_latin1((String*)&local_188, "EditorResourcePreviewGenerator");
                  StringName::StringName((StringName*)&local_180, (String*)&local_188, false);
                  ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_178, (StringName*)&local_180);
                  if (local_170[0] == 0) {
                     lVar4 = 0;
                     CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_170);
                     if (StringName::configured != '\0') goto LAB_00106bd3;
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
                     LAB_00106bf2:lVar4 = *(long*)( param_2 + 8 );
                     pcVar8 = *(code**)( lVar4 + 200 );
                     if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar4 + 0xc0 ) ),pcVar8 == (code*)0x0) goto LAB_00106ab8;
                     uVar6 = ( *pcVar8 )(*(undefined8*)( lVar4 + 0xa0 ));
                     *(undefined8*)( param_2 + 0x1a8 ) = uVar6;
                  }
 else {
                     lVar4 = *(long*)( local_170[0] + -8 );
                     CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_170);
                     if (StringName::configured != '\0') {
                        LAB_00106bd3:if (local_180 != (Ref*)0x0) {
                           StringName::unref();
                        }

                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
                     if (lVar4 == 0) goto LAB_00106bf2;
                  }

                  lVar4 = *(long*)( param_2 + 8 );
               }
 else {
                  uVar6 = ( *pcVar8 )(*(undefined8*)( lVar4 + 0xa0 ), param_2 + 0x198, uVar3);
                  *(undefined8*)( param_2 + 0x1a8 ) = uVar6;
                  lVar4 = *(long*)( param_2 + 8 );
               }

               LAB_00106ab8:if (*(char*)( lVar4 + 0x29 ) != '\0') {
                  plVar7 = (long*)operator_new(0x18, "");
                  *plVar7 = (long)( param_2 + 0x1a8 );
                  plVar7[1] = (long)( param_2 + 0x1a0 );
                  plVar7[2] = *(long*)( param_2 + 0x168 );
                  *(long**)( param_2 + 0x168 ) = plVar7;
               }

               param_2[0x1a0] = (Vector2)0x1;
               MethodInfo::~MethodInfo((MethodInfo*)&local_148);
            }

            if (*(long*)( param_2 + 0x1a8 ) == 0) {
               if (( ( pOVar9 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar9 + 0x140 ))(pOVar9);
               Memory::free_static(pOVar9, false);
            }

            Dictionary::~Dictionary(local_190);
            _err_print_error("generate", "editor/editor_resource_preview.cpp", 0x3c, "Method/function failed. Returning: Ref<Texture2D>()", "EditorResourcePreviewGenerator::_generate needs to be overridden.", 0, 0);
            *(undefined8*)param_1 = 0;
            pOVar9 = local_198;
            goto LAB_001065db;
         }

         if (( pOVar9 == (Object*)0x0 ) || ( local_188 = pOVar9 ),cVar2 = RefCounted::reference(),cVar2 == '\0') {
            local_188 = (Object*)0x0;
         }

         local_a8[0] = local_d0;
         Dictionary::Dictionary((Dictionary*)&local_180, local_190);
         puStack_80 = local_a8;
         local_178 = (Ref*)0x0;
         local_88 = (Ref<Resource>*)&local_188;
         local_78 = (Dictionary*)&local_180;
         if (*(code**)( *(long*)( param_2 + 8 ) + 0xe0 ) == (code*)0x0) {
            ( **(code**)( param_2 + 0x1a8 ) )(*(undefined8*)( param_2 + 0x10 ), &local_88, (Ref<Texture2D>*)&local_178);
         }
 else {
            ( **(code**)( *(long*)( param_2 + 8 ) + 0xe0 ) )(*(undefined8*)( param_2 + 0x10 ), param_2 + 0x198, *(undefined8*)( param_2 + 0x1a8 ), &local_88, (Ref<Texture2D>*)&local_178);
         }

         local_148 = 0;
         uStack_144 = 0;
         Ref<Texture2D>::operator =((Ref<Texture2D>*)&local_148, local_178);
         Ref<Texture2D>::operator =((Ref<Texture2D>*)&local_198, (Ref*)CONCAT44(uStack_144, local_148));
         Ref<Texture2D>::unref((Ref<Texture2D>*)&local_148);
         Ref<Texture2D>::unref((Ref<Texture2D>*)&local_178);
         Dictionary::~Dictionary((Dictionary*)&local_180);
         Ref<Resource>::unref((Ref<Resource>*)&local_188);
      }

      else{local_148 = 0;
      uStack_144 = 0;
      uStack_140 = 0;
      Variant::Variant((Variant*)&local_88, pOVar9);
      Variant::Variant(local_70, (Vector2i*)&local_d0);
      Variant::Variant(local_58, local_190);
      local_c8 = (Variant*)&local_88;
      pVStack_c0 = local_70;
      local_b8 = local_58;
      ( **(code**)( *plVar7 + 0x60 ) )(local_a8, plVar7, param_2 + 0x198, &local_c8, 3, &local_148);
      if (local_148 != 0) {
         if (Variant::needs_deinit[(int)local_a8[0]] != '\0') {
            Variant::_clear_internal();
         }

         pVVar10 = (Variant*)local_40;
         do {
            pVVar1 = pVVar10 + -0x18;
            pVVar10 = pVVar10 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar10 != (Variant*)&local_88 );
         goto LAB_00106567;
      }

      local_180 = (Ref*)0x0;
      lVar4 = Variant::get_validated_object();
      if (( lVar4 == 0 ) || ( pRVar5 = (Ref*)__dynamic_cast(lVar4, &Object::typeinfo, &Texture2D::typeinfo, 0) ),pRVar5 == (Ref*)0x0) {
         pRVar5 = (Ref*)0x0;
      }
 else {
         local_178 = (Ref*)0x0;
         local_180 = pRVar5;
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            local_180 = (Ref*)0x0;
            pRVar5 = (Ref*)0x0;
         }

         Ref<Texture2D>::unref((Ref<Texture2D>*)&local_178);
      }

      Ref<Texture2D>::operator =((Ref<Texture2D>*)&local_198, pRVar5);
      Ref<Texture2D>::unref((Ref<Texture2D>*)&local_180);
      if (Variant::needs_deinit[(int)local_a8[0]] != '\0') {
         Variant::_clear_internal();
      }

      pVVar10 = (Variant*)local_40;
      do {
         pVVar1 = pVVar10 + -0x18;
         pVVar10 = pVVar10 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar10 != (Variant*)&local_88 );
   }

   if (( ( pOVar9 == (Object*)0x0 ) || ( cVar2 = RefCounted::unreference() ),cVar2 == '\0' )) {
      Dictionary::~Dictionary(local_190);
   }
 else {
      ( **(code**)( *(long*)pOVar9 + 0x140 ) )(pOVar9);
      Memory::free_static(pOVar9, false);
      Dictionary::~Dictionary(local_190);
   }

   pOVar9 = local_198;
   *(undefined8*)param_1 = 0;
   Ref<Texture2D>::operator =((Ref<Texture2D>*)param_1, (Ref*)local_198);
   LAB_001065db:if (( ( pOVar9 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar9 + 0x140 ))(pOVar9);
   Memory::free_static(pOVar9, false);
}
if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_1;}/* EditorResourcePreviewGenerator::handles(String const&) const */ulong EditorResourcePreviewGenerator::handles(EditorResourcePreviewGenerator *this, String *param_1) {
   bool bVar1;
   undefined4 uVar2;
   undefined7 extraout_var;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   GetTypeInfo<bool,void> *unaff_R12;
   ulong uVar7;
   long in_FS_OFFSET;
   undefined8 local_140;
   undefined8 local_138;
   long local_130;
   GetTypeInfo<bool,void> local_128[8];
   long local_120[5];
   int local_f8[2];
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   undefined1 local_e8[16];
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8[2];
   undefined8 local_a8;
   ulong local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   CowData<char32_t> *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_140 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_140, (CowData*)param_1);
   plVar5 = *(long**)( this + 0x98 );
   if (plVar5 == (long*)0x0) {
      LAB_00106d95:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x188] == (EditorResourcePreviewGenerator)0x0 )) {
         unaff_R12 = local_128;
         local_f8[0] = 0;
         local_f8[1] = 0;
         local_e8 = (undefined1[16])0x0;
         uStack_f0 = 0;
         uStack_ec = 0;
         local_d8 = 0;
         local_d0 = 0;
         local_c8 = 6;
         local_c0 = 1;
         local_b8[0] = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_90 = 0;
         String::parse_latin1((String*)local_f8, "_handles");
         local_c0 = CONCAT44(local_c0._4_4_, 0xc);
         GetTypeInfo<bool,void>::get_class_info(unaff_R12);
         PropertyInfo::operator =((PropertyInfo*)&uStack_f0, (PropertyInfo*)unaff_R12);
         PropertyInfo::~PropertyInfo((PropertyInfo*)unaff_R12);
         local_a0 = local_a0 & 0xffffffff00000000;
         GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)unaff_R12);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)unaff_R12);
         PropertyInfo::~PropertyInfo((PropertyInfo*)unaff_R12);
         Vector<int>::push_back(local_98, 0);
         uVar2 = MethodInfo::get_compatibility_hash();
         lVar4 = *(long*)( this + 8 );
         *(undefined8*)( this + 400 ) = 0;
         pcVar6 = *(code**)( lVar4 + 0xd8 );
         if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
            local_138 = 0;
            String::parse_latin1((String*)&local_138, "EditorResourcePreviewGenerator");
            StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)unaff_R12, (StringName*)&local_130);
            if (local_120[0] == 0) {
               unaff_R12 = (GetTypeInfo<bool,void>*)0x0;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
               if (StringName::configured != '\0') goto LAB_0010710f;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
               LAB_0010712e:lVar4 = *(long*)( this + 8 );
               pcVar6 = *(code**)( lVar4 + 200 );
               if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_00107046;
               uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x180);
               *(undefined8*)( this + 400 ) = uVar3;
            }
 else {
               unaff_R12 = *(GetTypeInfo<bool,void>**)( local_120[0] + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
               if (StringName::configured != '\0') {
                  LAB_0010710f:if (local_130 != 0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
               if (unaff_R12 == (GetTypeInfo<bool,void>*)0x0) goto LAB_0010712e;
            }

            lVar4 = *(long*)( this + 8 );
         }
 else {
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x180, uVar2);
            *(undefined8*)( this + 400 ) = uVar3;
            lVar4 = *(long*)( this + 8 );
         }

         LAB_00107046:if (*(char*)( lVar4 + 0x29 ) != '\0') {
            plVar5 = (long*)operator_new(0x18, "");
            *plVar5 = (long)( this + 400 );
            plVar5[1] = (long)( this + 0x188 );
            plVar5[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar5;
         }

         this[0x188] = (EditorResourcePreviewGenerator)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)local_f8);
      }

      if (*(long*)( this + 400 ) == 0) {
         uVar7 = 0;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
         _err_print_error("handles", "editor/editor_resource_preview.cpp", 0x34, "Method/function failed. Returning: false", "EditorResourcePreviewGenerator::_handles needs to be overridden.", 0, 0);
         goto LAB_00106de6;
      }

      local_f8[0] = 0;
      local_f8[1] = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)local_f8, (CowData*)&local_140);
      local_58[0] = (CowData<char32_t>*)local_f8;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( this + 400 ) )(*(undefined8*)( this + 0x10 ), local_58, local_128);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x180, *(undefined8*)( this + 400 ), local_58, local_128);
      }

      uVar7 = CONCAT71(( int7 )((ulong)unaff_R12 >> 8), local_128[0] != (GetTypeInfo<bool,void>)0x0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_f8);
   }
 else {
      local_f8[0] = 0;
      local_f8[1] = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, (String*)&local_140);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_58, plVar5, this + 0x180, &local_80, 1, local_f8);
      if (local_f8[0] != 0) {
         if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00106d95;
      }

      bVar1 = Variant::operator_cast_to_bool((Variant*)local_58);
      uVar7 = CONCAT71(extraout_var, bVar1) & 0xffffffff;
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   LAB_00106de6:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar7 & 0xffffffff;
}
/* CowData<Ref<EditorResourcePreviewGenerator> >::_copy_on_write() [clone .isra.0] */void CowData<Ref<EditorResourcePreviewGenerator>>::_copy_on_write(CowData<Ref<EditorResourcePreviewGenerator>> *this) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   char cVar4;
   undefined8 *puVar5;
   long *plVar6;
   ulong uVar7;
   long lVar8;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar7 = 0x10;
   if (lVar1 * 8 != 0) {
      uVar7 = lVar1 * 8 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
   }

   puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
   if (puVar5 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   lVar8 = 0;
   *puVar5 = 1;
   puVar5[1] = lVar1;
   plVar6 = puVar5 + 2;
   if (lVar1 != 0) {
      do {
         lVar2 = *(long*)this;
         *plVar6 = 0;
         lVar2 = *(long*)( lVar2 + lVar8 * 8 );
         if (lVar2 != 0) {
            *plVar6 = lVar2;
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
               *plVar6 = 0;
            }

         }

         lVar8 = lVar8 + 1;
         plVar6 = plVar6 + 1;
      }
 while ( lVar1 != lVar8 );
   }

   _unref(this);
   *(undefined8**)this = puVar5 + 2;
   return;
}
/* EditorResourcePreview::_generate_preview(Ref<ImageTexture>&, Ref<ImageTexture>&,
   EditorResourcePreview::QueueItem const&, String const&, Dictionary&) */void EditorResourcePreview::_generate_preview(EditorResourcePreview *this, Ref *param_1, Ref *param_2, QueueItem *param_3, String *param_4, Dictionary *param_5) {
   CowData<Ref<EditorResourcePreviewGenerator>> *this_00;
   Object *pOVar1;
   Ref *pRVar2;
   char cVar3;
   int iVar4;
   long *plVar5;
   long lVar6;
   long lVar7;
   Object *pOVar8;
   code *pcVar9;
   Image *pIVar10;
   ulong uVar11;
   QueueItem *pQVar12;
   String *pSVar13;
   long lVar14;
   long lVar15;
   long lVar16;
   long in_FS_OFFSET;
   float fVar17;
   ulong local_f0;
   CowData<char32_t> *local_e0;
   CowData<char32_t> *local_d8;
   Image *local_80;
   Ref *local_78;
   Image *local_70;
   long local_68;
   Image *local_60;
   undefined8 local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_80 = (Image*)0x0;
   plVar5 = (long*)OS::get_singleton();
   lVar6 = ( **(code**)( *plVar5 + 0x208 ) )(plVar5);
   if (*(long**)param_3 == (long*)0x0) {
      ResourceLoader::get_resource_type((String*)&local_60);
   }
 else {
      ( **(code**)( **(long**)param_3 + 0x48 ) )((CowData<char32_t>*)&local_60);
   }

   if (local_80 != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      local_80 = local_60;
      local_60 = (Image*)0x0;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   if (( local_80 == (Image*)0x0 ) || ( *(uint*)( local_80 + -8 ) < 2 )) {
      pOVar1 = *(Object**)param_1;
      if (pOVar1 != (Object*)0x0) {
         *(undefined8*)param_1 = 0;
         cVar3 = RefCounted::unreference();
         if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

      pOVar1 = *(Object**)param_2;
      if (pOVar1 != (Object*)0x0) {
         *(undefined8*)param_2 = 0;
         cVar3 = RefCounted::unreference();
         if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

      cVar3 = is_print_verbose_enabled();
      if (cVar3 == '\0') goto LAB_0010742f;
      plVar5 = (long*)OS::get_singleton();
      lVar7 = ( **(code**)( *plVar5 + 0x208 ) )(plVar5);
      local_70 = (Image*)0x0;
      if (*(long*)( param_3 + 8 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)( param_3 + 8 ));
      }

      local_78 = (Ref*)0x0;
      String::parse_latin1((String*)&local_78, "Generated \'%s\' preview in %d usec");
      vformat<String,unsigned_long>((String*)&local_68, (String*)&local_78, (CowData<char32_t>*)&local_70, lVar7 - lVar6);
      Variant::Variant((Variant*)local_58, (String*)&local_68);
      stringify_variants((Variant*)&local_60);
      __print_line((String*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }
 else {
      local_60 = (Image*)0x0;
      String::parse_latin1((String*)&local_60, "filesystem/file_dialog/thumbnail_size");
      _EDITOR_GET((String*)local_58);
      iVar4 = Variant::operator_cast_to_int((Variant*)local_58);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      fVar17 = (float)EditorScale::get_scale();
      pOVar1 = *(Object**)param_1;
      iVar4 = (int)( (float)iVar4 * fVar17 );
      if (pOVar1 != (Object*)0x0) {
         *(undefined8*)param_1 = 0;
         cVar3 = RefCounted::unreference();
         if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

      pOVar1 = *(Object**)param_2;
      if (pOVar1 != (Object*)0x0) {
         *(undefined8*)param_2 = 0;
         cVar3 = RefCounted::unreference();
         if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

      lVar7 = *(long*)( this + 0x4f0 );
      lVar16 = 0;
      this_00 = (CowData<Ref<EditorResourcePreviewGenerator>>*)( this + 0x4f0 );
      while (true) {
         if (( lVar7 == 0 ) || ( *(long*)( lVar7 + -8 ) <= lVar16 )) goto LAB_00107c27;
         plVar5 = *(long**)( lVar7 + lVar16 * 8 );
         lVar7 = lVar16 * 8;
         cVar3 = ( **(code**)( *plVar5 + 0x150 ) )(plVar5, (CowData<char32_t>*)&local_80);
         if (cVar3 != '\0') break;
         LAB_001077bd:lVar7 = *(long*)( this + 0x4f0 );
         lVar16 = lVar16 + 1;
      }
;
      lVar14 = *(long*)( this + 0x4f0 );
      local_78 = (Ref*)0x0;
      if (*(long*)param_3 != 0) {
         if (lVar14 != 0) {
            lVar14 = *(long*)( lVar14 + -8 );
            if (lVar14 <= lVar16) goto LAB_00107bd3;
            CowData<Ref<EditorResourcePreviewGenerator>>::_copy_on_write(this_00);
            plVar5 = *(long**)( *(long*)( this + 0x4f0 ) + lVar7 );
            local_58[0] = CONCAT44((float)iVar4, (float)iVar4);
            pcVar9 = *(code**)( *plVar5 + 0x158 );
            pQVar12 = param_3;
            goto LAB_001076e2;
         }

         LAB_00107bd0:lVar14 = 0;
         LAB_00107bd3:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar16, lVar14, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar9 = (code*)invalidInstructionException();
         ( *pcVar9 )();
      }

      if (lVar14 == 0) goto LAB_00107bd0;
      lVar14 = *(long*)( lVar14 + -8 );
      if (lVar14 <= lVar16) goto LAB_00107bd3;
      CowData<Ref<EditorResourcePreviewGenerator>>::_copy_on_write(this_00);
      plVar5 = *(long**)( *(long*)( this + 0x4f0 ) + lVar7 );
      local_58[0] = CONCAT44((float)iVar4, (float)iVar4);
      pcVar9 = *(code**)( *plVar5 + 0x160 );
      pQVar12 = param_3 + 8;
      LAB_001076e2:( *pcVar9 )((CowData<char32_t>*)&local_60, plVar5, pQVar12);
      Ref<Texture2D>::operator =((Ref<Texture2D>*)&local_78, (Ref*)local_60);
      Ref<Texture2D>::unref((Ref<Texture2D>*)&local_60);
      pRVar2 = local_78;
      pOVar1 = *(Object**)param_1;
      if (local_78 == (Ref*)0x0) {
         if (pOVar1 != (Object*)0x0) {
            *(undefined8*)param_1 = 0;
            LAB_001078f1:cVar3 = RefCounted::unreference();
            if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

      }
 else {
         pOVar8 = (Object*)__dynamic_cast(local_78, &Object::typeinfo, &ImageTexture::typeinfo);
         if (pOVar1 != pOVar8) {
            *(Object**)param_1 = pOVar8;
            if (( pOVar8 != (Object*)0x0 ) && ( cVar3 = cVar3 == '\0' )) {
               *(undefined8*)param_1 = 0;
            }

            if (pOVar1 != (Object*)0x0) goto LAB_001078f1;
         }

      }

      lVar14 = *(long*)( this + 0x4f0 );
      if (lVar14 == 0) {
         LAB_00107d20:lVar15 = 0;
         LAB_00107d23:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar16, lVar15, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar9 = (code*)invalidInstructionException();
         ( *pcVar9 )();
      }

      lVar15 = *(long*)( lVar14 + -8 );
      if (lVar15 <= lVar16) goto LAB_00107d23;
      cVar3 = ( **(code**)( **(long**)( lVar14 + lVar7 ) + 0x178 ) )();
      if (cVar3 != '\0') {
         local_70 = (Image*)0x0;
         Dictionary::Dictionary((Dictionary*)&local_68);
         lVar14 = *(long*)( this + 0x4f0 );
         if (*(long*)param_3 == 0) {
            if (lVar14 != 0) {
               lVar14 = *(long*)( lVar14 + -8 );
               if (lVar14 <= lVar16) goto LAB_00107bd3;
               CowData<Ref<EditorResourcePreviewGenerator>>::_copy_on_write(this_00);
               plVar5 = *(long**)( *(long*)( this + 0x4f0 ) + lVar7 );
               pQVar12 = param_3 + 8;
               local_58[0] = CONCAT44((float)*(int*)( this + 0x4e0 ), (float)*(int*)( this + 0x4e0 ));
               pcVar9 = *(code**)( *plVar5 + 0x160 );
               goto LAB_001079b8;
            }

         }
 else if (lVar14 != 0) {
            lVar14 = *(long*)( lVar14 + -8 );
            if (lVar14 <= lVar16) goto LAB_00107bd3;
            CowData<Ref<EditorResourcePreviewGenerator>>::_copy_on_write(this_00);
            plVar5 = *(long**)( *(long*)( this + 0x4f0 ) + lVar7 );
            local_58[0] = CONCAT44((float)*(int*)( this + 0x4e0 ), (float)*(int*)( this + 0x4e0 ));
            pcVar9 = *(code**)( *plVar5 + 0x158 );
            pQVar12 = param_3;
            LAB_001079b8:( *pcVar9 )((CowData<char32_t>*)&local_60, plVar5, pQVar12);
            Ref<Texture2D>::operator =((Ref<Texture2D>*)&local_70, (Ref*)local_60);
            Ref<Texture2D>::unref((Ref<Texture2D>*)&local_60);
            pOVar1 = *(Object**)param_2;
            if (local_70 == (Image*)0x0) {
               if (pOVar1 != (Object*)0x0) {
                  *(undefined8*)param_2 = 0;
                  LAB_00107d78:cVar3 = RefCounted::unreference();
                  if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
                     ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
                     Memory::free_static(pOVar1, false);
                  }

               }

            }
 else {
               pOVar8 = (Object*)__dynamic_cast(local_70, &Object::typeinfo, &ImageTexture::typeinfo);
               if (pOVar1 != pOVar8) {
                  *(Object**)param_2 = pOVar8;
                  if (( pOVar8 != (Object*)0x0 ) && ( cVar3 = cVar3 == '\0' )) {
                     *(undefined8*)param_2 = 0;
                  }

                  if (pOVar1 != (Object*)0x0) goto LAB_00107d78;
               }

            }

            Dictionary::~Dictionary((Dictionary*)&local_68);
            Ref<Texture2D>::unref((Ref<Texture2D>*)&local_70);
            lVar14 = *(long*)param_2;
            goto joined_r0x00107a5d;
         }

         goto LAB_00107bd0;
      }

      lVar14 = *(long*)param_2;
      joined_r0x00107a5d:if (( lVar14 == 0 ) && ( *(long*)param_1 != 0 )) {
         lVar14 = *(long*)( this + 0x4f0 );
         if (lVar14 == 0) goto LAB_00107d20;
         lVar15 = *(long*)( lVar14 + -8 );
         if (lVar15 <= lVar16) goto LAB_00107d23;
         cVar3 = ( **(code**)( **(long**)( lVar14 + lVar7 ) + 0x170 ) )();
         if (cVar3 == '\0') goto LAB_001077aa;
         ( **(code**)( **(long**)param_1 + 0x210 ) )(&local_70);
         ( **(code**)( *(long*)local_70 + 0x198 ) )((Ref<Resource>*)&local_68, local_70, 0);
         if (local_68 == 0) {
            pIVar10 = local_70;
            if (local_70 != (Image*)0x0) {
               local_70 = (Image*)0x0;
               local_60 = pIVar10;
               goto LAB_00107b3b;
            }

         }
 else {
            pIVar10 = (Image*)__dynamic_cast(local_68, &Object::typeinfo, &Image::typeinfo, 0);
            if (local_70 != pIVar10) {
               local_60 = local_70;
               local_70 = pIVar10;
               if (( pIVar10 != (Image*)0x0 ) && ( cVar3 = cVar3 == '\0' )) {
                  local_70 = (Image*)0x0;
               }

               LAB_00107b3b:Ref<Image>::unref((Ref<Image>*)&local_60);
            }

         }

         Ref<Resource>::unref((Ref<Resource>*)&local_68);
         Image::resize(local_70, *(undefined4*)( this + 0x4e0 ), *(undefined4*)( this + 0x4e0 ));
         Ref<ImageTexture>::instantiate<>((Ref<ImageTexture>*)param_2);
         ImageTexture::set_image(*(Ref**)param_2);
         if (( local_70 != (Image*)0x0 ) && ( cVar3 = cVar3 != '\0' )) {
            memdelete<Image>(local_70);
         }

      }

      LAB_001077aa:if (pRVar2 == (Ref*)0x0) {
         Ref<Texture2D>::unref((Ref<Texture2D>*)&local_78);
         goto LAB_001077bd;
      }

      Ref<Texture2D>::unref((Ref<Texture2D>*)&local_78);
      LAB_00107c27:if (( *(long*)param_3 == 0 ) && ( *(long*)param_1 != 0 )) {
         local_70 = (Image*)0x0;
         lVar7 = *(long*)param_2;
         String::parse_latin1((String*)&local_70, ".png");
         String::operator +((String*)&local_68, param_4);
         local_60 = (Image*)0x0;
         if (( *(long*)param_1 != 0 ) && ( ( pIVar10 = (Image*)__dynamic_cast(*(long*)param_1, &Object::typeinfo, &Resource::typeinfo) ),pIVar10 != (Image*)0x0 && ( local_60 = pIVar10 ),cVar3 = RefCounted::reference(),cVar3 == '\0' )) {
            local_60 = (Image*)0x0;
         }

         ResourceSaver::save((Ref*)&local_60, (String*)&local_68, 0);
         Ref<Resource>::unref((Ref<Resource>*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (lVar7 != 0) {
            local_70 = (Image*)0x0;
            String::parse_latin1((String*)&local_70, "_small.png");
            String::operator +((String*)&local_68, param_4);
            local_60 = (Image*)0x0;
            if (( ( *(long*)param_2 != 0 ) && ( pIVar10 = (Image*)__dynamic_cast(*(long*)param_2, &Object::typeinfo, &Resource::typeinfo) ),pIVar10 != (Image*)0x0 )) {
               local_60 = (Image*)0x0;
            }

            ResourceSaver::save((Ref*)&local_60, (String*)&local_68, 0);
            Ref<Resource>::unref((Ref<Resource>*)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         }

         local_68 = 0;
         String::parse_latin1((String*)&local_68, ".txt");
         String::operator +((String*)&local_60, param_4);
         FileAccess::open((String*)&local_78, (int)(CowData<char32_t>*)&local_60, (Error*)0x2);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         if (local_78 == (Ref*)0x0) {
            local_68 = 0;
            String::parse_latin1((String*)&local_68, ".txt\'. Check user write permissions.");
            operator+((char *)&
            local_70,(String*)"Cannot create file \'";
            pSVar13 = (String*)&local_70;
            String::operator +((String*)&local_60, (String*)&local_70);
            _err_print_error("_generate_preview", "editor/editor_resource_preview.cpp", 0xf3, "Condition \"f.is_null()\" is true.", (CowData<char32_t>*)&local_60, 0, 0, pSVar13);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            Ref<FileAccess>::unref((Ref<FileAccess>*)&local_78);
            goto LAB_0010742f;
         }

         uVar11 = FileAccess::get_modified_time((String*)( param_3 + 8 ));
         local_60 = (Image*)0x0;
         String::parse_latin1((String*)&local_60, ".import");
         String::operator +((String*)&local_70, (String*)( param_3 + 8 ));
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         cVar3 = FileAccess::exists((String*)&local_70);
         local_f0 = uVar11;
         if (( cVar3 != '\0' ) && ( local_f0 = local_f0 <= uVar11 )) {
            local_f0 = uVar11;
         }

         FileAccess::get_md5((String*)&local_68);
         local_60 = (Image*)0x0;
         Ref<FileAccess>::operator =((Ref<FileAccess>*)&local_60, local_78);
         _write_preview_cache(this, (CowData<char32_t>*)&local_60, iVar4, lVar7 != 0, local_f0, (String*)&local_68, param_5);
         Ref<FileAccess>::unref((Ref<FileAccess>*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         Ref<FileAccess>::unref((Ref<FileAccess>*)&local_78);
      }

      cVar3 = is_print_verbose_enabled();
      if (cVar3 == '\0') goto LAB_0010742f;
      plVar5 = (long*)OS::get_singleton();
      lVar7 = ( **(code**)( *plVar5 + 0x208 ) )(plVar5);
      local_70 = (Image*)0x0;
      if (*(long*)( param_3 + 8 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)( param_3 + 8 ));
      }

      local_78 = (Ref*)0x0;
      String::parse_latin1((String*)&local_78, "Generated \'%s\' preview in %d usec");
      vformat<String,unsigned_long>((String*)&local_68, (String*)&local_78, (CowData<char32_t>*)&local_70, lVar7 - lVar6);
      Variant::Variant((Variant*)local_58, (String*)&local_68);
      stringify_variants((Variant*)&local_60);
      __print_line((String*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   local_d8 = (CowData<char32_t>*)&local_78;
   local_e0 = (CowData<char32_t>*)&local_70;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref(local_d8);
   CowData<char32_t>::_unref(local_e0);
   LAB_0010742f:CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorResourcePreview::_iterate() */void EditorResourcePreview::_iterate(EditorResourcePreview *this) {
   pthread_mutex_t *__mutex;
   long *plVar1;
   QueueItem *this_00;
   String *pSVar2;
   char cVar3;
   int iVar4;
   undefined4 uVar5;
   long lVar6;
   ulong uVar7;
   Object *pOVar8;
   undefined8 *puVar9;
   ulong uVar10;
   int iVar11;
   long in_FS_OFFSET;
   float fVar12;
   Ref<Image> *local_190;
   Ref *local_170;
   Ref<ImageTexture> *local_168;
   Ref<FileAccess> *local_150;
   char local_146;
   char local_145;
   int local_144;
   Ref *local_140;
   Object *local_138;
   Dictionary local_130[8];
   CowData<char32_t> local_128[8];
   long local_120;
   String local_118[8];
   long *local_110;
   String local_108[8];
   ulong local_100;
   undefined8 local_f8;
   String local_f0[8];
   String local_e8[8];
   String *local_e0;
   String *local_d8;
   long local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   Dictionary local_b8[8];
   undefined4 local_b0;
   undefined8 local_a8;
   int local_98[8];
   long *local_78;
   undefined8 local_70;
   long local_68;
   StringName local_60[8];
   Variant local_58[24];
   long local_40;
   __mutex = (pthread_mutex_t*)( this + 0x410 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = pthread_mutex_lock(__mutex);
   if (iVar4 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar4);
   }

   plVar1 = *(long**)( this + 0x408 );
   if (( plVar1 == (long*)0x0 ) || ( (int)plVar1[2] == 0 )) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         pthread_mutex_unlock(__mutex);
         return;
      }

      goto LAB_00109015;
   }

   plVar1 = (long*)*plVar1;
   local_78 = (long*)0x0;
   if (( (long*)*plVar1 != (long*)0x0 ) && ( local_78 = (long*)*plVar1 ),cVar3 = RefCounted::reference(),cVar3 == '\0') {
      local_78 = (long*)0x0;
   }

   local_70 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)( plVar1 + 1 ));
   local_68 = plVar1[2];
   StringName::StringName(local_60, (StringName*)( plVar1 + 3 ));
   Variant::Variant(local_58, (Variant*)( plVar1 + 4 ));
   puVar9 = *(undefined8**)( this + 0x408 );
   if (( puVar9 != (undefined8*)0x0 ) && ( this_00 = (QueueItem*)*puVar9 ),this_00 != (QueueItem*)0x0) {
      if (puVar9 == *(undefined8**)( this_00 + 0x48 )) {
         *puVar9 = *(undefined8*)( this_00 + 0x38 );
         if (this_00 == (QueueItem*)puVar9[1]) {
            puVar9[1] = *(undefined8*)( this_00 + 0x40 );
         }

         if (*(long*)( this_00 + 0x40 ) != 0) {
            *(undefined8*)( *(long*)( this_00 + 0x40 ) + 0x38 ) = *(undefined8*)( this_00 + 0x38 );
         }

         if (*(long*)( this_00 + 0x38 ) != 0) {
            *(undefined8*)( *(long*)( this_00 + 0x38 ) + 0x40 ) = *(undefined8*)( this_00 + 0x40 );
         }

         QueueItem::~QueueItem(this_00);
         Memory::free_static(this_00, false);
         *(int*)( puVar9 + 2 ) = *(int*)( puVar9 + 2 ) + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      if (*(int*)( (long)*(void**)( this + 0x408 ) + 0x10 ) == 0) {
         Memory::free_static(*(void**)( this + 0x408 ), false);
         *(undefined8*)( this + 0x408 ) = 0;
      }

   }

   local_c8 = (long*)( (ulong)local_c8._4_4_ << 0x20 );
   cVar3 = HashMap<String,EditorResourcePreview::Item,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorResourcePreview::Item>>>::_lookup_pos((HashMap<String,EditorResourcePreview::Item,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorResourcePreview::Item>>>*)( this + 0x4b0 ), (String*)&local_70, (uint*)&local_c8);
   if (cVar3 == '\0') {
      pthread_mutex_unlock(__mutex);
      local_140 = (Ref*)0x0;
      local_138 = (Object*)0x0;
      local_c8 = (long*)0x0;
      String::parse_latin1((String*)&local_c8, "filesystem/file_dialog/thumbnail_size");
      _EDITOR_GET((String*)local_98);
      iVar4 = Variant::operator_cast_to_int((Variant*)local_98);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
         Variant::_clear_internal();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      fVar12 = (float)EditorScale::get_scale();
      if (local_78 != (long*)0x0) {
         Dictionary::Dictionary((Dictionary*)&local_d8);
         local_c8 = (long*)0x0;
         _generate_preview(this, (Ref*)&local_140, (Ref*)&local_138, (QueueItem*)&local_78, (String*)&local_c8, (Dictionary*)&local_d8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         pOVar8 = local_138;
         local_c8 = (long*)0x0;
         if (( ( local_138 != (Object*)0x0 ) && ( lVar6 = __dynamic_cast(local_138, &Object::typeinfo, &Texture2D::typeinfo, 0) ),lVar6 != 0 )) {
            local_c8 = (long*)0x0;
         }

         local_d0 = 0;
         if (( ( local_140 != (Ref*)0x0 ) && ( lVar6 = __dynamic_cast(local_140, &Object::typeinfo, &Texture2D::typeinfo, 0) ),lVar6 != 0 )) {
            local_d0 = 0;
         }

         uVar5 = ( **(code**)( *local_78 + 0x1a8 ) )();
         _preview_ready(this, (CowData<char32_t>*)&local_70, uVar5, (Ref<Texture2D>*)&local_d0, (String*)&local_c8, local_68, local_60, local_58, (Dictionary*)&local_d8);
         Ref<Texture2D>::unref((Ref<Texture2D>*)&local_d0);
         Ref<Texture2D>::unref((Ref<Texture2D>*)&local_c8);
         Dictionary::~Dictionary((Dictionary*)&local_d8);
         if (( ( pOVar8 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar8 + 0x140 ))(pOVar8);
         Memory::free_static(pOVar8, false);
      }

      Ref<ImageTexture>::unref((Ref<ImageTexture>*)&local_140);
      goto LAB_00108642;
   }

   Dictionary::Dictionary(local_130);
   EditorPaths::get_cache_dir();
   ProjectSettings::get_singleton();
   ProjectSettings::globalize_path((String*)&local_c8);
   String::md5_text();
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   operator+((char *)&
   local_d0,(String*)"resthumb-";
   String::path_join((String*)&local_c8);
   if ((long*)local_120 != local_c8) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
      local_120 = (long)local_c8;
      local_c8 = (long*)0x0;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   local_c8 = (long*)0x0;
   String::parse_latin1((String*)&local_c8, ".txt");
   String::operator +(local_118, (String*)&local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   iVar11 = (int)local_118;
   FileAccess::open((String*)&local_110, iVar11, (Error*)0x1);
   if (local_110 == (long*)0x0) {
      _generate_preview(this, (Ref*)&local_140, (Ref*)&local_138, (QueueItem*)&local_78, (String*)&local_120, local_130);
      local_170 = local_140;
      pOVar8 = local_138;
      LAB_001089be:local_c8 = (long*)0x0;
      if (pOVar8 != (Object*)0x0) {
         LAB_001089cf:local_c8 = (long*)0x0;
         lVar6 = __dynamic_cast(pOVar8, &Object::typeinfo, &Texture2D::typeinfo, 0);
         if (( lVar6 != 0 ) && ( local_c8 = (long*)lVar6 ),cVar3 = RefCounted::reference(),cVar3 == '\0') {
            local_c8 = (long*)0x0;
         }

      }

   }
 else {
      uVar7 = FileAccess::get_modified_time((String*)&local_70);
      local_c8 = (long*)0x0;
      String::parse_latin1((String*)&local_c8, ".import");
      String::operator +(local_108, (String*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      cVar3 = FileAccess::exists(local_108);
      if (( cVar3 != '\0' ) && ( uVar10 = uVar7 < uVar10 )) {
         uVar7 = uVar10;
      }

      local_f8 = 0;
      local_c8 = (long*)0x0;
      if (local_110 != (long*)0x0) {
         local_c8 = local_110;
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            local_c8 = (long*)0x0;
         }

      }

      _read_preview_cache(this, (String*)&local_c8, &local_144, &local_146, &local_100, (CowData<char32_t>*)&local_f8, local_130, &local_145);
      Ref<FileAccess>::unref((Ref<FileAccess>*)&local_c8);
      if (( local_144 != (int)( (float)iVar4 * fVar12 ) ) || ( local_145 != '\0' )) {
         Ref<FileAccess>::unref((Ref<FileAccess>*)&local_110);
         LAB_00108960:_generate_preview(this, (Ref*)&local_140, (Ref*)&local_138, (QueueItem*)&local_78, (String*)&local_120, local_130);
         pOVar8 = local_138;
         local_170 = local_140;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_108);
         goto LAB_001089be;
      }

      if (local_100 == uVar7) {
         Ref<FileAccess>::unref((Ref<FileAccess>*)&local_110);
      }
 else {
         ( **(code**)( *local_110 + 0x228 ) )(local_f0);
         FileAccess::get_md5(local_e8);
         Ref<FileAccess>::unref((Ref<FileAccess>*)&local_110);
         cVar3 = String::operator !=(local_f0, local_e8);
         if (cVar3 != '\0') {
            CowData<char32_t>::_unref((CowData<char32_t>*)local_e8);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_f0);
            goto LAB_00108960;
         }

         FileAccess::open((String*)&local_e0, iVar11, (Error*)0x2);
         cVar3 = local_146;
         if (local_e0 == (String*)0x0) {
            local_d0 = 0;
            String::parse_latin1((String*)&local_d0, "\'. Check user write permissions.");
            operator+((char *)&
            local_d8,(String*)"Cannot create file \'";
            String::operator +((String*)&local_c8, (String*)&local_d8);
            _err_print_error("_iterate", "editor/editor_resource_preview.cpp", 0x15a, (String*)&local_c8, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
         }
 else {
            local_c8 = (long*)0x0;
            Ref<FileAccess>::operator =((Ref<FileAccess>*)&local_c8, (Ref*)local_e0);
            _write_preview_cache(this, (String*)&local_c8, (int)( (float)iVar4 * fVar12 ), cVar3, uVar7, local_e8, local_130);
            Ref<FileAccess>::unref((Ref<FileAccess>*)&local_c8);
         }

         local_150 = (Ref<FileAccess>*)&local_e0;
         Ref<FileAccess>::unref(local_150);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_e8);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_f0);
      }

      local_150 = (Ref<FileAccess>*)&local_e0;
      local_190 = (Ref<Image>*)&local_d8;
      local_e0 = (String*)0x0;
      Ref<Image>::instantiate<>((Ref<Image>*)local_150);
      local_d8 = (String*)0x0;
      Ref<Image>::instantiate<>(local_190);
      pSVar2 = local_e0;
      local_d0 = 0;
      String::parse_latin1((String*)&local_d0, ".png");
      String::operator +((String*)&local_c8, (String*)&local_120);
      iVar4 = Image::load(pSVar2);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
      if (iVar4 != 0) {
         LAB_00108dca:Ref<Image>::unref(local_190);
         Ref<Image>::unref((Ref<Image>*)local_150);
         goto LAB_00108960;
      }

      Ref<ImageTexture>::instantiate<>((Ref<ImageTexture>*)&local_140);
      local_170 = local_140;
      ImageTexture::set_image(local_140);
      pSVar2 = local_d8;
      if (local_146 != '\0') {
         local_d0 = 0;
         String::parse_latin1((String*)&local_d0, "_small.png");
         String::operator +((String*)&local_c8, (String*)&local_120);
         iVar4 = Image::load(pSVar2);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
         if (iVar4 != 0) goto LAB_00108dca;
         Ref<ImageTexture>::instantiate<>((Ref<ImageTexture>*)&local_138);
         pOVar8 = local_138;
         ImageTexture::set_image((Ref*)local_138);
         Ref<Image>::unref(local_190);
         Ref<Image>::unref((Ref<Image>*)local_150);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_108);
         goto LAB_001089cf;
      }

      Ref<Image>::unref(local_190);
      Ref<Image>::unref((Ref<Image>*)local_150);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_108);
      local_c8 = (long*)0x0;
   }

   local_168 = (Ref<ImageTexture>*)&local_138;
   local_d0 = 0;
   if (( ( local_170 != (Ref*)0x0 ) && ( lVar6 = __dynamic_cast(local_170, &Object::typeinfo, &Texture2D::typeinfo, 0) ),lVar6 != 0 )) {
      local_d0 = 0;
   }

   _preview_ready(this, (CowData<char32_t>*)&local_70, 0, (CowData<char32_t>*)&local_d0, (String*)&local_c8, local_68, local_60, local_58, local_130);
   Ref<Texture2D>::unref((Ref<Texture2D>*)&local_d0);
   Ref<Texture2D>::unref((Ref<Texture2D>*)&local_c8);
   Ref<FileAccess>::unref((Ref<FileAccess>*)&local_110);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   CowData<char32_t>::_unref(local_128);
   Dictionary::~Dictionary(local_130);
   Ref<ImageTexture>::unref(local_168);
   Ref<ImageTexture>::unref((Ref<ImageTexture>*)&local_140);
   QueueItem::~QueueItem((QueueItem*)&local_78);
}
else{puVar9 = (undefined8*)HashMap<String,EditorResourcePreview::Item,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorResourcePreview::Item>>>::operator []((HashMap<String,EditorResourcePreview::Item,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorResourcePreview::Item>>>*)( this + 0x4b0 ), (String*)&local_70);local_c8 = (long*)0x0;Ref<Texture2D>::operator =((Ref<Texture2D>*)&local_c8, (Ref*)*puVar9);local_c0 = 0;Ref<Texture2D>::operator =((Ref<Texture2D>*)&local_c0, (Ref*)puVar9[1]);Dictionary::Dictionary(local_b8, (Dictionary*)( puVar9 + 2 ));local_b0 = *(undefined4*)( puVar9 + 3 );local_a8 = puVar9[4];_preview_ready(this, (CowData<char32_t>*)&local_70, local_b0, (String*)&local_c8, (Ref<Texture2D>*)&local_c0, local_68, local_60, local_58, local_b8);pthread_mutex_unlock(__mutex);Dictionary::~Dictionary(local_b8);Ref<Texture2D>::unref((Ref<Texture2D>*)&local_c0);Ref<Texture2D>::unref((Ref<Texture2D>*)&local_c8);LAB_00108642:QueueItem::~QueueItem((QueueItem*)&local_78);}if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
LAB_00109015:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* EditorResourcePreview::_thread() */void EditorResourcePreview::_thread(EditorResourcePreview *this) {
   pthread_mutex_t *__mutex;
   EditorResourcePreview EVar1;
   long lVar2;
   int iVar3;
   long in_FS_OFFSET;
   __mutex = (pthread_mutex_t*)( this + 0x438 );
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   this[0x4a9] = (EditorResourcePreview)0x0;
   EVar1 = this[0x4a8];
   while (EVar1 == (EditorResourcePreview)0x0) {
      iVar3 = pthread_mutex_lock(__mutex);
      if (iVar3 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar3);
      }

      iVar3 = *(int*)( this + 0x494 );
      *(int*)( this + 0x494 ) = iVar3 + 1;
      if (*(int*)( this + 0x490 ) == 0) {
         do {
            std::condition_variable::wait((unique_lock*)( this + 0x460 ));
         }
 while ( *(int*)( this + 0x490 ) == 0 );
         *(int*)( this + 0x494 ) = *(int*)( this + 0x494 ) + -1;
         *(int*)( this + 0x490 ) = *(int*)( this + 0x490 ) + -1;
      }
 else {
         *(int*)( this + 0x494 ) = iVar3;
         *(int*)( this + 0x490 ) = *(int*)( this + 0x490 ) + -1;
      }

      if (__mutex != (pthread_mutex_t*)0x0) {
         pthread_mutex_unlock(__mutex);
      }

      _iterate(this);
      EVar1 = this[0x4a8];
   }
;
   this[0x4a9] = (EditorResourcePreview)0x1;
   if (lVar2 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorResourcePreview::_thread_func(void*) */void EditorResourcePreview::_thread_func(void *param_1) {
   _thread((EditorResourcePreview*)param_1);
   return;
}
/* EditorResourcePreview::_idle_callback() */void EditorResourcePreview::_idle_callback(void) {
   long lVar1;
   long lVar2;
   if (singleton == (EditorResourcePreview*)0x0) {
      return;
   }

   OS::get_singleton();
   lVar1 = OS::get_ticks_msec();
   lVar2 = *(long*)( singleton + 0x408 );
   while (( lVar2 != 0 && ( *(int*)( lVar2 + 0x10 ) != 0 ) )) {
      OS::get_singleton();
      lVar2 = OS::get_ticks_msec();
      if (99 < ( ulong )(lVar2 - lVar1)) {
         return;
      }

      _iterate(singleton);
      lVar2 = *(long*)( singleton + 0x408 );
   }
;
   return;
}
/* WARNING: Removing unreachable block (ram,0x00109307) *//* WARNING: Removing unreachable block (ram,0x001092b0) *//* WARNING: Removing unreachable block (ram,0x001092b5) *//* WARNING: Removing unreachable block (ram,0x00109318) *//* WARNING: Removing unreachable block (ram,0x001092bf) *//* EditorResourcePreview::stop() */void EditorResourcePreview::stop(EditorResourcePreview *this) {
   code *pcVar1;
   char cVar2;
   int iVar3;
   long lVar4;
   long *plVar5;
   long lVar6;
   cVar2 = ( **(code**)( *RenderingServerGlobals::rasterizer + 0xa0 ) )();
   if (( cVar2 == '\0' ) || ( cVar2 = cVar2 == '\0' )) {
      return;
   }

   this[0x4a8] = (EditorResourcePreview)0x1;
   iVar3 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x438 ));
   if (iVar3 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar3);
   }

   *(int*)( this + 0x490 ) = *(int*)( this + 0x490 ) + 1;
   std::condition_variable::notify_one();
   pthread_mutex_unlock((pthread_mutex_t*)( this + 0x438 ));
   lVar4 = *(long*)( this + 0x4f0 );
   for (lVar6 = 0; ( lVar4 != 0 && ( lVar6 < *(long*)( lVar4 + -8 ) ) ); lVar6 = lVar6 + 1) {
      CowData<Ref<EditorResourcePreviewGenerator>>::_copy_on_write((CowData<Ref<EditorResourcePreviewGenerator>>*)( this + 0x4f0 ));
      lVar4 = *(long*)( this + 0x4f0 );
      pcVar1 = *(code**)( **(long**)( lVar4 + lVar6 * 8 ) + 0x168 );
      if (pcVar1 != EditorResourcePreviewGenerator::abort) {
         ( *pcVar1 )();
         lVar4 = *(long*)( this + 0x4f0 );
      }

   }

   if (this[0x4a9] == (EditorResourcePreview)0x0) {
      plVar5 = (long*)OS::get_singleton();
      ( **(code**)( *plVar5 + 0x1f8 ) )(plVar5, 10000);
      plVar5 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar5 + 0x11d0 ) )(plVar5);
      /* WARNING: Subroutine does not return */
      MessageQueue::thread_singleton();
   }

   Thread::wait_to_finish();
   return;
}
/* EditorResourcePreview::_notification(int) */void EditorResourcePreview::_notification(EditorResourcePreview *this, int param_1) {
   if (param_1 != 0xb) {
      return;
   }

   stop(this);
   return;
}
/* EditorResourcePreview::~EditorResourcePreview() */void EditorResourcePreview::~EditorResourcePreview(EditorResourcePreview *this) {
   uint uVar1;
   long *plVar2;
   Object *pOVar3;
   char cVar4;
   int iVar5;
   long lVar6;
   void *pvVar7;
   long *plVar8;
   *(undefined***)this = &PTR__initialize_classv_001139b8;
   stop(this);
   CowData<Ref<EditorResourcePreviewGenerator>>::_unref((CowData<Ref<EditorResourcePreviewGenerator>>*)( this + 0x4f0 ));
   pvVar7 = *(void**)( this + 0x4b8 );
   if (pvVar7 != (void*)0x0) {
      if (*(int*)( this + 0x4dc ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x4d8 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x4dc ) = 0;
            *(undefined1(*) [16])( this + 0x4c8 ) = (undefined1[16])0x0;
         }
 else {
            lVar6 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x4c0 ) + lVar6 ) != 0) {
                  pvVar7 = *(void**)( (long)pvVar7 + lVar6 * 2 );
                  *(int*)( *(long*)( this + 0x4c0 ) + lVar6 ) = 0;
                  Dictionary::~Dictionary((Dictionary*)( (long)pvVar7 + 0x28 ));
                  if (*(long*)( (long)pvVar7 + 0x20 ) != 0) {
                     cVar4 = RefCounted::unreference();
                     if (cVar4 != '\0') {
                        pOVar3 = *(Object**)( (long)pvVar7 + 0x20 );
                        cVar4 = predelete_handler(pOVar3);
                        if (cVar4 != '\0') {
                           ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                           Memory::free_static(pOVar3, false);
                        }

                     }

                  }

                  if (*(long*)( (long)pvVar7 + 0x18 ) != 0) {
                     cVar4 = RefCounted::unreference();
                     if (cVar4 != '\0') {
                        pOVar3 = *(Object**)( (long)pvVar7 + 0x18 );
                        cVar4 = predelete_handler(pOVar3);
                        if (cVar4 != '\0') {
                           ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                           Memory::free_static(pOVar3, false);
                        }

                     }

                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar7 + 0x10 ));
                  Memory::free_static(pvVar7, false);
                  pvVar7 = *(void**)( this + 0x4b8 );
                  *(undefined8*)( (long)pvVar7 + lVar6 * 2 ) = 0;
               }

               lVar6 = lVar6 + 4;
            }
 while ( lVar6 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0x4dc ) = 0;
            *(undefined1(*) [16])( this + 0x4c8 ) = (undefined1[16])0x0;
            if (pvVar7 == (void*)0x0) goto LAB_00109485;
         }

      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x4c0 ), false);
   }

   LAB_00109485:Thread::~Thread((Thread*)( this + 0x498 ));
   iVar5 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x438 ));
   if (iVar5 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar5);
   }

   if (*(int*)( this + 0x494 ) != 0) {
      _err_print_error("~Semaphore", "./core/os/semaphore.h", 0x81, "A Semaphore object is being destroyed while one or more threads are still waiting on it.\nPlease call post() on it as necessary to prevent such a situation and so ensure correct cleanup.", 0, 1);
      std::condition_variable::condition_variable((condition_variable*)( this + 0x460 ));
   }

   pthread_mutex_unlock((pthread_mutex_t*)( this + 0x438 ));
   std::condition_variable::~condition_variable((condition_variable*)( this + 0x460 ));
   plVar8 = *(long**)( this + 0x408 );
   if (plVar8 != (long*)0x0) {
      do {
         plVar2 = (long*)*plVar8;
         if (plVar2 == (long*)0x0) {
            if ((int)plVar8[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_001095a4;
            }

            break;
         }

         if ((long*)plVar2[9] == plVar8) {
            *plVar8 = plVar2[7];
            if (plVar2 == (long*)plVar8[1]) {
               plVar8[1] = plVar2[8];
            }

            if (plVar2[8] != 0) {
               *(long*)( plVar2[8] + 0x38 ) = plVar2[7];
            }

            if (plVar2[7] != 0) {
               *(long*)( plVar2[7] + 0x40 ) = plVar2[8];
            }

            if (Variant::needs_deinit[(int)plVar2[4]] != '\0') {
               Variant::_clear_internal();
            }

            if (( StringName::configured != '\0' ) && ( plVar2[3] != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( plVar2 + 1 ));
            if (*plVar2 != 0) {
               cVar4 = RefCounted::unreference();
               if (cVar4 != '\0') {
                  pOVar3 = (Object*)*plVar2;
                  cVar4 = predelete_handler(pOVar3);
                  if (cVar4 != '\0') {
                     ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                     Memory::free_static(pOVar3, false);
                  }

               }

            }

            Memory::free_static(plVar2, false);
            *(int*)( plVar8 + 2 ) = (int)plVar8[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar8 = *(long**)( this + 0x408 );
      }
 while ( (int)plVar8[2] != 0 );
      Memory::free_static(plVar8, false);
   }

   LAB_001095a4:Node::~Node((Node*)this);
   return;
}
/* EditorResourcePreview::~EditorResourcePreview() */void EditorResourcePreview::~EditorResourcePreview(EditorResourcePreview *this) {
   ~EditorResourcePreview(this)
   ;;
   operator_delete(this, 0x4f8);
   return;
}
/* EditorResourcePreview::remove_preview_generator(Ref<EditorResourcePreviewGenerator> const&) */void EditorResourcePreview::remove_preview_generator(EditorResourcePreview *this, Ref *param_1) {
   long lVar1;
   Object *pOVar2;
   Object *pOVar3;
   char cVar4;
   long lVar5;
   long lVar6;
   lVar1 = *(long*)( this + 0x4f0 );
   if (( lVar1 != 0 ) && ( lVar6= *(long *)(lVar1 + -8),0 < lVar6 )) {
      lVar5 = 0;
      do {
         if (*(long*)param_1 == *(long*)( lVar1 + lVar5 * 8 )) {
            if (lVar6 <= lVar5) {
               _err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, lVar5, lVar6, "p_index", "size()", "", false, false);
               return;
            }

            CowData<Ref<EditorResourcePreviewGenerator>>::_copy_on_write((CowData<Ref<EditorResourcePreviewGenerator>>*)( this + 0x4f0 ));
            lVar1 = *(long*)( this + 0x4f0 );
            if (lVar1 == 0) {
               lVar6 = -1;
            }
 else {
               lVar6 = *(long*)( lVar1 + -8 ) + -1;
               if (lVar5 < lVar6) {
                  do {
                     pOVar2 = *(Object**)( lVar1 + 8 + lVar5 * 8 );
                     pOVar3 = *(Object**)( lVar1 + lVar5 * 8 );
                     if (pOVar2 != pOVar3) {
                        *(Object**)( lVar1 + lVar5 * 8 ) = pOVar2;
                        if (( pOVar2 != (Object*)0x0 ) && ( cVar4 = cVar4 == '\0' )) {
                           *(undefined8*)( lVar1 + lVar5 * 8 ) = 0;
                        }

                        if (( ( pOVar3 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
                        Memory::free_static(pOVar3, false);
                     }

                  }
 while ( lVar6 != lVar5 );
               }

            }

            CowData<Ref<EditorResourcePreviewGenerator>>::resize<false>((CowData<Ref<EditorResourcePreviewGenerator>>*)( this + 0x4f0 ), lVar6);
            return;
         }

         lVar5 = lVar5 + 1;
      }
 while ( lVar6 != lVar5 );
      return;
   }

   return;
}
/* EditorResourcePreview::add_preview_generator(Ref<EditorResourcePreviewGenerator> const&) */void EditorResourcePreview::add_preview_generator(EditorResourcePreview *this, Ref *param_1) {
   undefined8 *puVar1;
   Object *pOVar2;
   char cVar3;
   int iVar4;
   Object *pOVar5;
   long lVar6;
   long lVar7;
   pOVar5 = *(Object**)param_1;
   if (( pOVar5 != (Object*)0x0 ) && ( cVar3 = cVar3 == '\0' )) {
      pOVar5 = (Object*)0x0;
   }

   if (*(long*)( this + 0x4f0 ) == 0) {
      lVar6 = 1;
   }
 else {
      lVar6 = *(long*)( *(long*)( this + 0x4f0 ) + -8 ) + 1;
   }

   iVar4 = CowData<Ref<EditorResourcePreviewGenerator>>::resize<false>((CowData<Ref<EditorResourcePreviewGenerator>>*)( this + 0x4f0 ), lVar6);
   if (iVar4 == 0) {
      if (*(long*)( this + 0x4f0 ) == 0) {
         lVar7 = -1;
         lVar6 = 0;
      }
 else {
         lVar6 = *(long*)( *(long*)( this + 0x4f0 ) + -8 );
         lVar7 = lVar6 + -1;
         if (-1 < lVar7) {
            CowData<Ref<EditorResourcePreviewGenerator>>::_copy_on_write((CowData<Ref<EditorResourcePreviewGenerator>>*)( this + 0x4f0 ));
            puVar1 = (undefined8*)( *(long*)( this + 0x4f0 ) + lVar7 * 8 );
            pOVar2 = (Object*)*puVar1;
            if (pOVar2 != pOVar5) {
               *puVar1 = pOVar5;
               if (pOVar5 == (Object*)0x0) {
                  if (pOVar2 == (Object*)0x0) {
                     return;
                  }

                  cVar3 = RefCounted::unreference();
                  if (cVar3 == '\0') {
                     return;
                  }

                  cVar3 = predelete_handler(pOVar2);
                  if (cVar3 == '\0') {
                     return;
                  }

               }
 else {
                  cVar3 = RefCounted::reference();
                  if (cVar3 == '\0') {
                     *puVar1 = 0;
                  }

                  if (( ( pOVar2 == (Object*)0x0 ) || ( cVar3 = RefCounted::unreference() ),cVar3 == '\0' )) goto LAB_001099cd;
               }

               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }

            goto LAB_001099c8;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar7, lVar6, "p_index", "size()", "", false, false);
   }
 else {
      _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   }

   LAB_001099c8:if (pOVar5 == (Object*)0x0) {
      return;
   }

   LAB_001099cd:cVar3 = RefCounted::unreference();
   if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
      ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
      Memory::free_static(pOVar5, false);
      return;
   }

   return;
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
/* Object::_validate_property(PropertyInfo&) const */void Object::_validate_property(PropertyInfo *param_1) {
   return;
}
/* Object::_notification(int) */void Object::_notification(int param_1) {
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
/* MethodBind::is_valid() const */undefined8 MethodBind::is_valid(void) {
   return 1;
}
/* MethodBind::is_vararg() const */undefined8 MethodBind::is_vararg(void) {
   return 0;
}
/* RefCounted::is_class_ptr(void*) const */uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
   return (uint)CONCAT71(0x113e, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x113e, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
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
/* EditorResourcePreviewGenerator::is_class_ptr(void*) const */uint EditorResourcePreviewGenerator::is_class_ptr(EditorResourcePreviewGenerator *this, void *param_1) {
   return (uint)CONCAT71(0x113e, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x113e, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x113e, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* EditorResourcePreviewGenerator::_getv(StringName const&, Variant&) const */undefined8 EditorResourcePreviewGenerator::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorResourcePreviewGenerator::_setv(StringName const&, Variant const&) */undefined8 EditorResourcePreviewGenerator::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorResourcePreviewGenerator::_validate_propertyv(PropertyInfo&) const */void EditorResourcePreviewGenerator::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* EditorResourcePreviewGenerator::_property_can_revertv(StringName const&) const */undefined8 EditorResourcePreviewGenerator::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* EditorResourcePreviewGenerator::_property_get_revertv(StringName const&, Variant&) const */undefined8 EditorResourcePreviewGenerator::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorResourcePreviewGenerator::_notificationv(int, bool) */void EditorResourcePreviewGenerator::_notificationv(int param_1, bool param_2) {
   return;
}
/* EditorResourcePreviewGenerator::abort() */void EditorResourcePreviewGenerator::abort(void) {
   return;
}
/* EditorResourcePreview::is_class_ptr(void*) const */uint EditorResourcePreview::is_class_ptr(EditorResourcePreview *this, void *param_1) {
   return (uint)CONCAT71(0x113e, (undefined4*)param_1 == &Node::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x113e, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x113e, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* EditorResourcePreview::_getv(StringName const&, Variant&) const */undefined8 EditorResourcePreview::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorResourcePreview::_setv(StringName const&, Variant const&) */undefined8 EditorResourcePreview::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorResourcePreview::_property_can_revertv(StringName const&) const */undefined8 EditorResourcePreview::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* EditorResourcePreview::_property_get_revertv(StringName const&, Variant&) const */undefined8 EditorResourcePreview::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* CallableCustomMethodPointer<EditorResourcePreviewGenerator::DrawRequester,
   Variant>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorResourcePreviewGenerator::DrawRequester,Variant>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorResourcePreviewGenerator::DrawRequester,Variant> *this) {
   return;
}
/* CallableCustomMethodPointer<RenderingServer, void, RID,
   RenderingServer::ViewportUpdateMode>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RenderingServer,void,RID,RenderingServer::ViewportUpdateMode>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RenderingServer,void,RID,RenderingServer::ViewportUpdateMode> *this) {
   return;
}
/* MethodBindT<String const&>::_gen_argument_type(int) const */long MethodBindT<String_const&>::_gen_argument_type(MethodBindT<String_const&> *this, int param_1) {
   return ( ulong )(param_1 == 0) << 2;
}
/* MethodBindT<String const&>::get_argument_meta(int) const */undefined8 MethodBindT<String_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Ref<EditorResourcePreviewGenerator> const&>::_gen_argument_type(int) const */byte MethodBindT<Ref<EditorResourcePreviewGenerator>const&>::_gen_argument_type(MethodBindT<Ref<EditorResourcePreviewGenerator>const&> *this, int param_1) {
   return -(param_1 == 0) & 0x18;
}
/* MethodBindT<Ref<EditorResourcePreviewGenerator> const&>::get_argument_meta(int) const */undefined8 MethodBindT<Ref<EditorResourcePreviewGenerator>const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Ref<Resource> const&, Object*, StringName const&, Variant
   const&>::_gen_argument_type(int) const */undefined8 MethodBindT<Ref<Resource>const&,Object*,StringName_const&,Variant_const&>::_gen_argument_type(MethodBindT<Ref<Resource>const&,Object*,StringName_const&,Variant_const&> *this, int param_1) {
   undefined8 uVar1;
   uVar1 = 0;
   if (( (uint)param_1 < 4 ) && ( uVar1 = 1 < (uint)param_1 )) {
      uVar1 = 0x15;
      if (param_1 != 2) {
         uVar1 = 0;
      }

      return uVar1;
   }

   return uVar1;
}
/* MethodBindT<Ref<Resource> const&, Object*, StringName const&, Variant
   const&>::get_argument_meta(int) const */undefined8 MethodBindT<Ref<Resource>const&,Object*,StringName_const&,Variant_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<String const&, Object*, StringName const&, Variant const&>::_gen_argument_type(int)
   const */undefined8 MethodBindT<String_const&,Object*,StringName_const&,Variant_const&>::_gen_argument_type(MethodBindT<String_const&,Object*,StringName_const&,Variant_const&> *this, int param_1) {
   undefined8 uVar1;
   uVar1 = 0;
   if (( ( ( (uint)param_1 < 4 ) && ( uVar1 = 4 ),param_1 != 0 ) ) && ( uVar1 = param_1 != 1 )) {
      uVar1 = 0;
   }

   return uVar1;
}
/* MethodBindT<String const&, Object*, StringName const&, Variant const&>::get_argument_meta(int)
   const */undefined8 MethodBindT<String_const&,Object*,StringName_const&,Variant_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* CallableCustomMethodPointer<EditorResourcePreviewGenerator::DrawRequester,
   Variant>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<EditorResourcePreviewGenerator::DrawRequester,Variant>::get_argument_count(CallableCustomMethodPointer<EditorResourcePreviewGenerator::DrawRequester,Variant> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* CallableCustomMethodPointer<RenderingServer, void, RID,
   RenderingServer::ViewportUpdateMode>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<RenderingServer,void,RID,RenderingServer::ViewportUpdateMode>::get_argument_count(CallableCustomMethodPointer<RenderingServer,void,RID,RenderingServer::ViewportUpdateMode> *this, bool *param_1) {
   *param_1 = true;
   return 2;
}
/* CallableCustomMethodPointer<RenderingServer, void, RID,
   RenderingServer::ViewportUpdateMode>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RenderingServer,void,RID,RenderingServer::ViewportUpdateMode>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RenderingServer,void,RID,RenderingServer::ViewportUpdateMode> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<EditorResourcePreviewGenerator::DrawRequester,
   Variant>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorResourcePreviewGenerator::DrawRequester,Variant>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorResourcePreviewGenerator::DrawRequester,Variant> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_001136c8;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_001136c8;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* EditorResourcePreviewGenerator::~EditorResourcePreviewGenerator() */void EditorResourcePreviewGenerator::~EditorResourcePreviewGenerator(EditorResourcePreviewGenerator *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_00113828;
   if (bVar1) {
      if (*(long*)( this + 0x1e0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00109fd1;
      }

      if (*(long*)( this + 0x1c8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00109fd1;
      }

      if (*(long*)( this + 0x1b0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00109fd1;
      }

      if (*(long*)( this + 0x198 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00109fd1;
      }

      if (*(long*)( this + 0x180 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00109fd1:*(undefined***)this = &PTR__initialize_classv_001136c8;
   Object::~Object((Object*)this);
   return;
}
/* MethodBindT<String const&, Object*, StringName const&, Variant const&>::~MethodBindT() */void MethodBindT<String_const&,Object*,StringName_const&,Variant_const&>::~MethodBindT(MethodBindT<String_const&,Object*,StringName_const&,Variant_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113ca0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<String const&, Object*, StringName const&, Variant const&>::~MethodBindT() */void MethodBindT<String_const&,Object*,StringName_const&,Variant_const&>::~MethodBindT(MethodBindT<String_const&,Object*,StringName_const&,Variant_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113ca0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Ref<Resource> const&, Object*, StringName const&, Variant const&>::~MethodBindT() */void MethodBindT<Ref<Resource>const&,Object*,StringName_const&,Variant_const&>::~MethodBindT(MethodBindT<Ref<Resource>const&,Object*,StringName_const&,Variant_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113d00;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Ref<Resource> const&, Object*, StringName const&, Variant const&>::~MethodBindT() */void MethodBindT<Ref<Resource>const&,Object*,StringName_const&,Variant_const&>::~MethodBindT(MethodBindT<Ref<Resource>const&,Object*,StringName_const&,Variant_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113d00;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Ref<EditorResourcePreviewGenerator> const&>::~MethodBindT() */void MethodBindT<Ref<EditorResourcePreviewGenerator>const&>::~MethodBindT(MethodBindT<Ref<EditorResourcePreviewGenerator>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113d60;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Ref<EditorResourcePreviewGenerator> const&>::~MethodBindT() */void MethodBindT<Ref<EditorResourcePreviewGenerator>const&>::~MethodBindT(MethodBindT<Ref<EditorResourcePreviewGenerator>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113d60;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<String const&>::~MethodBindT() */void MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113dc0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<String const&>::~MethodBindT() */void MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113dc0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* EditorResourcePreview::_validate_propertyv(PropertyInfo&) const */void EditorResourcePreview::_validate_propertyv(PropertyInfo *param_1) {
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_validate_property) {
      Node::_validate_property(param_1);
      return;
   }

   return;
}
/* Image::~Image() */void Image::~Image(Image *this) {
   long *plVar1;
   long lVar2;
   *(code**)this = Memory::free_static;
   if (*(long*)( this + 0x250 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x250 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x250 );
         *(undefined8*)( this + 0x250 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         Resource::~Resource((Resource*)this);
         return;
      }

   }

   Resource::~Resource((Resource*)this);
   return;
}
/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<int>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* EditorResourcePreview::_update_thumbnail_sizes() [clone .part.0] [clone .cold] */void EditorResourcePreview::_update_thumbnail_sizes(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* EditorResourcePreview::_bind_methods() [clone .cold] */void EditorResourcePreview::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<String>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Ref<EditorResourcePreviewGenerator> >::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Ref<EditorResourcePreviewGenerator>>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CallableCustomMethodPointer<EditorResourcePreviewGenerator::DrawRequester, Variant>::get_object()
   const */undefined8 CallableCustomMethodPointer<EditorResourcePreviewGenerator::DrawRequester,Variant>::get_object(CallableCustomMethodPointer<EditorResourcePreviewGenerator::DrawRequester,Variant> *this) {
   long lVar1;
   undefined8 uVar2;
   uint uVar3;
   ulong *puVar4;
   long in_FS_OFFSET;
   bool bVar5;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         LOCK();
         bVar5 = (char)ObjectDB::spin_lock == '\0';
         if (bVar5) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar5) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010a61d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010a61d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010a61d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<RenderingServer, void, RID,
   RenderingServer::ViewportUpdateMode>::get_object() const */undefined8 CallableCustomMethodPointer<RenderingServer,void,RID,RenderingServer::ViewportUpdateMode>::get_object(CallableCustomMethodPointer<RenderingServer,void,RID,RenderingServer::ViewportUpdateMode> *this) {
   long lVar1;
   undefined8 uVar2;
   uint uVar3;
   ulong *puVar4;
   long in_FS_OFFSET;
   bool bVar5;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         LOCK();
         bVar5 = (char)ObjectDB::spin_lock == '\0';
         if (bVar5) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar5) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010a71d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010a71d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010a71d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* EditorResourcePreviewGenerator::~EditorResourcePreviewGenerator() */void EditorResourcePreviewGenerator::~EditorResourcePreviewGenerator(EditorResourcePreviewGenerator *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_00113828;
   if (bVar1) {
      if (*(long*)( this + 0x1e0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a841;
      }

      if (*(long*)( this + 0x1c8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a841;
      }

      if (*(long*)( this + 0x1b0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a841;
      }

      if (*(long*)( this + 0x198 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a841;
      }

      if (*(long*)( this + 0x180 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010a841:*(undefined***)this = &PTR__initialize_classv_001136c8;
   Object::~Object((Object*)this);
   operator_delete(this, 0x1f8);
   return;
}
/* CallableCustomMethodPointerBase::get_as_text() const */void CallableCustomMethodPointerBase::get_as_text(void) {
   char *__s;
   long lVar1;
   long in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   __s = *(char**)( in_RSI + 0x20 );
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)in_RDI = 0;
   if (__s != (char*)0x0) {
      strlen(__s);
   }

   String::parse_latin1(in_RDI);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorResourcePreviewGenerator::_get_class_namev() const */undefined8 *EditorResourcePreviewGenerator::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010a933:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010a933;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorResourcePreviewGenerator");
         goto LAB_0010a99e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorResourcePreviewGenerator");
   LAB_0010a99e:return &_get_class_namev();
}
/* EditorResourcePreview::_get_class_namev() const */undefined8 *EditorResourcePreview::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010aa23:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010aa23;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorResourcePreview");
         goto LAB_0010aa8e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorResourcePreview");
   LAB_0010aa8e:return &_get_class_namev();
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
         LAB_0010ab03:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010ab03;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_0010ab6e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_0010ab6e:return &_get_class_namev();
}
/* String::parse_latin1(char const*) */void String::parse_latin1(String *this, char *param_1) {
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
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */void PropertyInfo::PropertyInfo(PropertyInfo *this, undefined4 param_2, CowData *param_3, int param_4, CowData *param_5, undefined4 param_6, StringName *param_7) {
   long lVar1;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 8 ) = 0;
   lVar1 = *(long*)param_3;
   *(undefined4*)this = param_2;
   if (lVar1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 8 ), param_3);
   }

   *(undefined8*)( this + 0x20 ) = 0;
   lVar1 = *(long*)param_5;
   *(undefined8*)( this + 0x10 ) = 0;
   *(int*)( this + 0x18 ) = param_4;
   if (lVar1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), param_5);
      param_4 = *(int*)( this + 0x18 );
   }

   *(undefined4*)( this + 0x28 ) = param_6;
   if (param_4 == 0x11) {
      StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
      if (*(long*)( this + 0x10 ) == local_48) {
         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(long*)( this + 0x10 ) = local_48;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      StringName::operator =((StringName*)( this + 0x10 ), param_7);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Image::~Image() */void Image::~Image(Image *this) {
   long *plVar1;
   long lVar2;
   *(code**)this = Memory::free_static;
   if (*(long*)( this + 0x250 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x250 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x250 );
         *(undefined8*)( this + 0x250 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x268);
   return;
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

   return;
}
/* EditorResourcePreview::get_class() const */void EditorResourcePreview::get_class(void) {
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
            CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
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
/* EditorResourcePreviewGenerator::get_class() const */void EditorResourcePreviewGenerator::get_class(void) {
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
            CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
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
            CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
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
/* void Ref<ImageTexture>::instantiate<>() */void Ref<ImageTexture>::instantiate<>(Ref<ImageTexture> *this) {
   char cVar1;
   ImageTexture *this_00;
   Object *pOVar2;
   Object *pOVar3;
   this_00 = (ImageTexture*)operator_new(0x318, "");
   ImageTexture::ImageTexture(this_00);
   postinitialize_handler((Object*)this_00);
   cVar1 = RefCounted::init_ref();
   if (cVar1 == '\0') {
      pOVar3 = *(Object**)this;
      if (pOVar3 == (Object*)0x0) {
         return;
      }

      *(undefined8*)this = 0;
      cVar1 = RefCounted::unreference();
      if (cVar1 == '\0') {
         return;
      }

      this_00 = (ImageTexture*)0x0;
      cVar1 = predelete_handler(pOVar3);
      if (cVar1 == '\0') {
         return;
      }

   }
 else {
      pOVar3 = *(Object**)this;
      pOVar2 = pOVar3;
      if (this_00 == (ImageTexture*)pOVar3) goto LAB_0010b555;
      *(ImageTexture**)this = this_00;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *(undefined8*)this = 0;
      }

      pOVar2 = (Object*)this_00;
      if (( ( pOVar3 == (Object*)0x0 ) || ( cVar1 = RefCounted::unreference() ),cVar1 == '\0' )) goto LAB_0010b555;
   }

   ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
   Memory::free_static(pOVar3, false);
   pOVar2 = (Object*)this_00;
   if (this_00 == (ImageTexture*)0x0) {
      return;
   }

   LAB_0010b555:cVar1 = RefCounted::unreference();
   if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
      ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
      Memory::free_static(pOVar2, false);
      return;
   }

   return;
}
/* Ref<FileAccess>::unref() */void Ref<FileAccess>::unref(Ref<FileAccess> *this) {
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
/* CowData<char32_t>::_unref() */void CowData<char32_t>::_unref(CowData<char32_t> *this) {
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
/* GetTypeInfo<bool, void>::get_class_info() */GetTypeInfo<bool,void> * __thiscall
GetTypeInfo<bool,void>::get_class_info(GetTypeInfo<bool,void> *this){
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC17;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *(undefined4*)this = 1;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_58);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
         if (*(undefined**)( this + 0x10 ) == local_48) {
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
         }

         goto LAB_0010b785;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   LAB_0010b785:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<String, void>::get_class_info() */GetTypeInfo<String,void> * __thiscall
GetTypeInfo<String,void>::get_class_info(GetTypeInfo<String,void> *this){
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC17;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *(undefined4*)this = 4;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_58);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
         if (*(undefined**)( this + 0x10 ) == local_48) {
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
         }

         goto LAB_0010b8e5;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   LAB_0010b8e5:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   long *plVar1;
   long lVar2;
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x20 ));
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
/* GetTypeInfo<Vector2i, void>::get_class_info() */GetTypeInfo<Vector2i,void> * __thiscall
GetTypeInfo<Vector2i,void>::get_class_info(GetTypeInfo<Vector2i,void> *this){
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC17;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *(undefined4*)this = 6;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_58);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
         if (*(undefined**)( this + 0x10 ) == local_48) {
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
         }

         goto LAB_0010baa5;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   LAB_0010baa5:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<Dictionary, void>::get_class_info() */GetTypeInfo<Dictionary,void> * __thiscall
GetTypeInfo<Dictionary,void>::get_class_info(GetTypeInfo<Dictionary,void> *this){
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC17;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *(undefined4*)this = 0x1b;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_58);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
         if (*(undefined**)( this + 0x10 ) == local_48) {
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
         }

         goto LAB_0010bc05;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   LAB_0010bc05:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<Ref<Resource>, void>::get_class_info() */GetTypeInfo<Ref<Resource>,void> * __thiscall
GetTypeInfo<Ref<Resource>,void>::get_class_info(GetTypeInfo<Ref<Resource>,void> *this){
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = "Resource";
   local_40 = 8;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *(undefined4*)this = 0x18;
   *(undefined4*)( this + 0x18 ) = 0x11;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_58);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) != 0x11) {
         StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
         goto LAB_0010bd35;
      }

   }

   StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
   if (*(char**)( this + 0x10 ) == local_48) {
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      *(char**)( this + 0x10 ) = local_48;
   }

   LAB_0010bd35:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<Ref<Texture2D>, void>::get_class_info() */GetTypeInfo<Ref<Texture2D>,void> * __thiscall
GetTypeInfo<Ref<Texture2D>,void>::get_class_info(GetTypeInfo<Ref<Texture2D>,void> *this){
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = "Texture2D";
   local_40 = 9;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *(undefined4*)this = 0x18;
   *(undefined4*)( this + 0x18 ) = 0x11;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_58);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) != 0x11) {
         StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
         goto LAB_0010bea5;
      }

   }

   StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
   if (*(char**)( this + 0x10 ) == local_48) {
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      *(char**)( this + 0x10 ) = local_48;
   }

   LAB_0010bea5:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x0010c130) *//* String vformat<String, unsigned long>(String const&, String const, unsigned long const) */undefined8 *vformat<String,unsigned_long>(undefined8 *param_1, bool *param_2, String *param_3, ulong param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   int iVar3;
   long in_FS_OFFSET;
   Array local_d8[8];
   undefined8 local_d0[9];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_88, param_3);
   Variant::Variant(local_70, param_4);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, param_2);
   *param_1 = local_d0[0];
   local_d0[0] = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_d0);
   pVVar2 = (Variant*)local_40;
   Array::~Array(local_d8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_88 );
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* EditorResourcePreview::QueueItem::~QueueItem() */void EditorResourcePreview::QueueItem::~QueueItem(QueueItem *this) {
   Object *pOVar1;
   char cVar2;
   if (Variant::needs_deinit[*(int*)( this + 0x20 )] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x18 ) != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 8 ));
   if (*(long*)this != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)this;
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            return;
         }

      }

   }

   return;
}
/* CallableCustomMethodPointer<EditorResourcePreviewGenerator::DrawRequester, Variant>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<EditorResourcePreviewGenerator::DrawRequester,Variant>::call(CallableCustomMethodPointer<EditorResourcePreviewGenerator::DrawRequester,Variant> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   uint uVar3;
   ulong *puVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   bool bVar6;
   CowData<char32_t> aCStack_68[8];
   CowData<char32_t> local_60[8];
   undefined8 local_58;
   String local_50[8];
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_50[0] = (String)0x0;
         LOCK();
         bVar6 = (char)ObjectDB::spin_lock == '\0';
         if (bVar6) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar6) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) == ( *puVar4 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar4[1] != 0) {
            lVar1 = *(long*)( this + 0x28 );
            pcVar5 = *(code**)( this + 0x38 );
            lVar2 = *(long*)( this + 0x40 );
            if (param_2 == 0) {
               *(undefined4*)param_4 = 0;
               if (( (ulong)pcVar5 & 1 ) != 0) {
                  pcVar5 = *(code**)( pcVar5 + *(long*)( lVar1 + lVar2 ) + -1 );
               }

               ( *pcVar5 )(local_48);
               if (Variant::needs_deinit[*(int*)param_3] != '\0') {
                  Variant::_clear_internal();
               }

               *(undefined4*)param_3 = local_48[0];
               *(undefined8*)( param_3 + 8 ) = local_40;
               *(undefined8*)( param_3 + 0x10 ) = uStack_38;
            }
 else {
               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 0;
            }

            goto LAB_0010c49c;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   local_58 = 0;
   String::parse_latin1((String*)&local_58, "\', can\'t call method.");
   uitos((ulong)aCStack_68);
   operator+((char *)
   local_60,(String*)"Invalid Object id \'";
   String::operator +(local_50, (String*)local_60);
   _err_print_error(&_LC53, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_50, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
   CowData<char32_t>::_unref(local_60);
   CowData<char32_t>::_unref(aCStack_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   LAB_0010c49c:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CallableCustomMethodPointer<RenderingServer, void, RID,
   RenderingServer::ViewportUpdateMode>::call(Variant const**, int, Variant&, Callable::CallError&)
   const */void CallableCustomMethodPointer<RenderingServer,void,RID,RenderingServer::ViewportUpdateMode>::call(CallableCustomMethodPointer<RenderingServer,void,RID,RenderingServer::ViewportUpdateMode> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   char cVar3;
   ulong uVar4;
   undefined8 uVar5;
   uint uVar6;
   ulong *puVar7;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   bool bVar8;
   CowData<char32_t> local_50[8];
   CowData<char32_t> local_48[8];
   undefined8 local_40;
   String local_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar6 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_38[0] = (String)0x0;
         LOCK();
         bVar8 = (char)ObjectDB::spin_lock == '\0';
         if (bVar8) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar8) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar7 = (ulong*)( (ulong)uVar6 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar7 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010c7fe;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] == 0) goto LAB_0010c7fe;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 3) {
         if (param_2 == 2) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar3 = Variant::can_convert_strict(*(undefined4*)param_1[1], 2);
            uVar5 = _LC54;
            if (cVar3 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar5;
            }

            uVar4 = Variant::operator_cast_to_long(param_1[1]);
            cVar3 = Variant::can_convert_strict(*(undefined4*)*param_1, 0x17);
            uVar5 = _LC55;
            if (cVar3 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar5;
            }

            uVar5 = Variant::operator_cast_to_RID(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010c7d7. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, uVar4 & 0xffffffff);
               return;
            }

            goto LAB_0010c8af;
         }

         *(undefined4*)param_4 = 4;
         *(undefined4*)( param_4 + 8 ) = 2;
      }
 else {
         *(undefined4*)param_4 = 3;
         *(undefined4*)( param_4 + 8 ) = 2;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0010c7fe:local_40 = 0;
      String::parse_latin1((String*)&local_40, "\', can\'t call method.");
      uitos((ulong)local_50);
      operator+((char *)
      local_48,(String*)"Invalid Object id \'";
      String::operator +(local_38, (String*)local_48);
      _err_print_error(&_LC53, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
      CowData<char32_t>::_unref(local_48);
      CowData<char32_t>::_unref(local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010c8af:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* EditorResourcePreview::is_class(String const&) const */undefined8 EditorResourcePreview::is_class(EditorResourcePreview *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long lVar4;
   char cVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
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
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0010c9bb;
   }

   cVar5 = String::operator ==(param_1, "EditorResourcePreview");
   if (cVar5 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar5 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_0010c9bb;
      }

      cVar5 = String::operator ==(param_1, "Node");
      if (cVar5 == '\0') {
         for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            lVar4 = *(long*)( lVar2 + 0x20 );
            if (lVar4 == 0) {
               local_60 = 0;
            }
 else {
               pcVar3 = *(char**)( lVar4 + 8 );
               local_60 = 0;
               if (pcVar3 == (char*)0x0) {
                  if (*(long*)( lVar4 + 0x10 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
                  }

               }
 else {
                  local_50 = strlen(pcVar3);
                  local_58 = pcVar3;
                  String::parse_latin1((StrRange*)&local_60);
               }

            }

            cVar5 = String::operator ==(param_1, (String*)&local_60);
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

            if (cVar5 != '\0') goto LAB_0010c9bb;
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = String::operator ==(param_1, "Object");
            return uVar6;
         }

         goto LAB_0010cb98;
      }

   }

   LAB_0010c9bb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010cb98:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* RefCounted::_initialize_classv() */void RefCounted::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      Object::initialize_class();
      local_58 = 0;
      local_40 = 6;
      local_48 = "Object";
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "RefCounted";
      local_60 = 0;
      local_40 = 10;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if ((code*)PTR__bind_methods_00118008 != Object::_bind_methods) {
         RefCounted::_bind_methods();
      }

      initialize_class()::initialized =
      '\x01';
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
   char cVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
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
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0010cdeb;
   }

   cVar5 = String::operator ==(param_1, "RefCounted");
   if (cVar5 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar5 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_0010cdeb;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar6 = String::operator ==(param_1, "Object");
         return uVar6;
      }

   }
 else {
      LAB_0010cdeb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorResourcePreviewGenerator::is_class(String const&) const */undefined8 EditorResourcePreviewGenerator::is_class(EditorResourcePreviewGenerator *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *__s;
   long lVar3;
   char cVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar3 = *(long*)( lVar2 + 0x20 );
      if (lVar3 == 0) {
         local_60 = 0;
      }
 else {
         __s = *(char**)( lVar3 + 8 );
         local_60 = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar4 != '\0') goto LAB_0010cfeb;
   }

   cVar4 = String::operator ==(param_1, "EditorResourcePreviewGenerator");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_0010cfeb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
   undefined7 in_register_00000031;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = "RefCounted";
   local_88 = 0;
   local_90 = 0;
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
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_0010d19c;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010d19c:List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "RefCounted", false);
   ClassDB::get_property_list((StringName*)&local_78, (List*)CONCAT71(in_register_00000031, param_2), true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Node::_get_property_listv(List *param_1, bool param_2) {
   undefined7 in_register_00000031;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   undefined *local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = &_LC56;
   local_88 = 0;
   local_90 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC56;
   local_98 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (undefined*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_0010d3ec;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010d3ec:List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Node", false);
   ClassDB::get_property_list((StringName*)&local_78, (List*)CONCAT71(in_register_00000031, param_2), true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
      StringName::unref();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorResourcePreviewGenerator::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */void EditorResourcePreviewGenerator::_get_property_listv(EditorResourcePreviewGenerator *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   CowData<char32_t> *local_b0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "EditorResourcePreviewGenerator";
   local_70 = 0x1e;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "EditorResourcePreviewGenerator";
   local_98 = 0;
   local_70 = 0x1e;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_0010d651;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010d651:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "EditorResourcePreviewGenerator", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   void *pvVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   plVar4 = *(long**)this;
   if (plVar4 == (long*)0x0) {
      return;
   }

   do {
      pvVar1 = (void*)*plVar4;
      if (pvVar1 == (void*)0x0) {
         if ((int)plVar4[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(long**)( (long)pvVar1 + 0x40 ) == plVar4) {
         lVar3 = *(long*)( (long)pvVar1 + 0x30 );
         lVar2 = *(long*)( (long)pvVar1 + 0x38 );
         *plVar4 = lVar3;
         if (pvVar1 == (void*)plVar4[1]) {
            plVar4[1] = lVar2;
         }

         if (lVar2 != 0) {
            *(long*)( lVar2 + 0x30 ) = lVar3;
            lVar3 = *(long*)( (long)pvVar1 + 0x30 );
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x38 ) = lVar2;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar1 + 0x20 ));
         if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar1 + 0x10 ) != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar1 + 8 ));
         Memory::free_static(pvVar1, false);
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
/* MethodInfo::~MethodInfo() */void MethodInfo::~MethodInfo(MethodInfo *this) {
   long *plVar1;
   int *piVar2;
   long lVar3;
   code *pcVar4;
   int *piVar5;
   long lVar6;
   if (*(long*)( this + 0x68 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x68 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0x68 );
         *(undefined8*)( this + 0x68 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x50 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x50 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         piVar2 = *(int**)( this + 0x50 );
         if (piVar2 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar3 = *(long*)( piVar2 + -2 );
         *(undefined8*)( this + 0x50 ) = 0;
         if (lVar3 != 0) {
            lVar6 = 0;
            piVar5 = piVar2;
            do {
               if (Variant::needs_deinit[*piVar5] != '\0') {
                  Variant::_clear_internal();
               }

               lVar6 = lVar6 + 1;
               piVar5 = piVar5 + 6;
            }
 while ( lVar3 != lVar6 );
         }

         Memory::free_static(piVar2 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)( this + 0x40 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x28 ));
   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x18 ) != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x10 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* EditorResourcePreview::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void EditorResourcePreview::_get_property_listv(EditorResourcePreview *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   CowData<char32_t> *local_b8;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Node::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "EditorResourcePreview";
   local_70 = 0x15;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "EditorResourcePreview";
   local_98 = 0;
   local_70 = 0x15;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_0010dbd0;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010dbd0:local_b8 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b8);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "EditorResourcePreview", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      local_90 = 0;
      local_88 = 0;
      local_78 = "Node";
      local_70 = 4;
      String::parse_latin1((StrRange*)&local_88);
      local_78 = "Node";
      local_80 = 0;
      local_70 = 4;
      String::parse_latin1((StrRange*)&local_80);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_80, 0, (StrRange*)&local_88, 0x80, (StrRange*)&local_90);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
      CowData<char32_t>::_unref(local_b8);
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_90 != 0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_78, "Node", false);
      ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
      if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
         StringName::unref();
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindT<Ref<EditorResourcePreviewGenerator> const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Ref<EditorResourcePreviewGenerator>const&>::_gen_argument_type_info(int param_1) {
   long lVar1;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar2;
   long in_FS_OFFSET;
   undefined8 local_80;
   undefined8 local_78;
   long local_70;
   char *local_68;
   long local_60;
   long local_58;
   undefined4 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar2 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar2 = 0;
   puVar2[6] = 0;
   *(undefined8*)( puVar2 + 8 ) = 0;
   puVar2[10] = 6;
   *(undefined1(*) [16])( puVar2 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_70 = 0;
      local_78 = 0;
      local_68 = "EditorResourcePreviewGenerator";
      local_60 = 0x1e;
      String::parse_latin1((StrRange*)&local_78);
      local_80 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 0x18, (CowData<char32_t>*)&local_80, 0x11, (StrRange*)&local_78, 6, &local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }

      *puVar2 = local_68._0_4_;
      if (*(long*)( puVar2 + 2 ) != local_60) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 2 ));
         lVar1 = local_60;
         local_60 = 0;
         *(long*)( puVar2 + 2 ) = lVar1;
      }

      if (*(long*)( puVar2 + 4 ) != local_58) {
         StringName::unref();
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( puVar2 + 4 ) = lVar1;
      }

      puVar2[6] = local_50;
      if (*(long*)( puVar2 + 8 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 8 ));
         lVar1 = local_48;
         local_48 = 0;
         *(long*)( puVar2 + 8 ) = lVar1;
      }

      puVar2[10] = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Ref<Resource>::unref() */void Ref<Resource>::unref(Ref<Resource> *this) {
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
/* Ref<Texture2D>::unref() */void Ref<Texture2D>::unref(Ref<Texture2D> *this) {
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
/* HashMap<String, EditorResourcePreview::Item, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   EditorResourcePreview::Item> > >::_lookup_pos(String const&, unsigned int&) const */undefined8 HashMap<String,EditorResourcePreview::Item,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorResourcePreview::Item>>>::_lookup_pos(HashMap<String,EditorResourcePreview::Item,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorResourcePreview::Item>>> *this, String *param_1, uint *param_2) {
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
   undefined8 uVar12;
   uint uVar13;
   uint uVar14;
   long lVar15;
   ulong uVar16;
   long lVar17;
   uint uVar18;
   if (( *(long*)( this + 8 ) != 0 ) && ( *(int*)( this + 0x2c ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar16 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar11 = String::hash();
      uVar13 = 1;
      if (uVar11 != 0) {
         uVar13 = uVar11;
      }

      lVar17 = *(long*)( this + 0x10 );
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar13 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar16;
      lVar15 = SUB168(auVar3 * auVar7, 8);
      uVar11 = *(uint*)( lVar17 + lVar15 * 4 );
      uVar14 = SUB164(auVar3 * auVar7, 8);
      if (uVar11 != 0) {
         uVar18 = 0;
         do {
            if (uVar13 == uVar11) {
               uVar12 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar15 * 8 ) + 0x10 ), param_1);
               if ((char)uVar12 != '\0') {
                  *param_2 = uVar14;
                  return uVar12;
               }

               lVar17 = *(long*)( this + 0x10 );
            }

            uVar18 = uVar18 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar14 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar16;
            lVar15 = SUB168(auVar4 * auVar8, 8);
            uVar11 = *(uint*)( lVar17 + lVar15 * 4 );
            uVar14 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar11 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar11 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar16,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar14 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar16,uVar18 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, EditorResourcePreview::Item, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   EditorResourcePreview::Item> > >::operator[](String const&) */Ref<Texture2D> * __thiscallHashMap<String,EditorResourcePreview::Item,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorResourcePreview::Item>>>::operator [](HashMap<String,EditorResourcePreview::Item,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorResourcePreview::Item>>> * this, String * param_1) * puVar1 ;undefined8 *puVar2uint uVar3void *pvVar4void *__slong lVar5long lVar6undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]char cVar23uint uVar24uint uVar25ulong uVar26undefined8 uVar27void *__s_00undefined8 *puVar28void *pvVar29int iVar30long lVar31long lVar32uint uVar33ulong uVar34undefined8 uVar35uint uVar36uint uVar37ulong uVar38undefined8 *puVar39long in_FS_OFFSETRef<Texture2D> *local_100uint local_c0uint local_bcundefined1 local_b8[16]undefined8 local_a8undefined4 local_a0undefined8 local_98undefined1 local_88[16]long local_78Ref *local_70Ref *local_68Dictionary local_60[8]undefined4 local_58undefined8 local_50long local_40local_40 = *(long*)( in_FS_OFFSET + 0x28 );local_c0 = 0;cVar23 = _lookup_pos(this, param_1, &local_c0);if (cVar23 != '\0') {
   local_100 = (Ref<Texture2D>*)( *(long*)( *(long*)( this + 8 ) + (ulong)local_c0 * 8 ) + 0x18 );
   goto LAB_0010e2c4;
}
local_a8 = 0;local_a0 = 0;local_98 = 0;local_b8 = (undefined1[16])0x0;Dictionary::Dictionary((Dictionary*)&local_a8);local_a0 = 0;local_98 = 0;uVar33 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );if (*(long*)( this + 8 ) == 0) {
   uVar34 = (ulong)uVar33;
   uVar26 = uVar34 * 4;
   uVar38 = uVar34 * 8;
   uVar27 = Memory::alloc_static(uVar26, false);
   *(undefined8*)( this + 0x10 ) = uVar27;
   pvVar29 = (void*)Memory::alloc_static(uVar38, false);
   *(void**)( this + 8 ) = pvVar29;
   if (uVar33 != 0) {
      pvVar4 = *(void**)( this + 0x10 );
      if (( pvVar4 < (void*)( (long)pvVar29 + uVar38 ) ) && ( pvVar29 < (void*)( (long)pvVar4 + uVar26 ) )) {
         uVar26 = 0;
         do {
            *(undefined4*)( (long)pvVar4 + uVar26 * 4 ) = 0;
            *(undefined8*)( (long)pvVar29 + uVar26 * 8 ) = 0;
            uVar26 = uVar26 + 1;
         }
 while ( uVar34 != uVar26 );
      }
 else {
         memset(pvVar4, 0, uVar26);
         memset(pvVar29, 0, uVar38);
      }

   }

}
local_bc = 0;cVar23 = _lookup_pos(this, param_1, &local_bc);if (cVar23 == '\0') {
   if ((float)uVar33 * __LC62 < (float)( *(int*)( this + 0x2c ) + 1 )) {
      uVar33 = *(uint*)( this + 0x28 );
      if (uVar33 == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         local_100 = (Ref<Texture2D>*)0x18;
         goto LAB_0010e81f;
      }

      uVar26 = ( ulong )(uVar33 + 1);
      *(undefined4*)( this + 0x2c ) = 0;
      uVar25 = *(uint*)( hash_table_size_primes + (ulong)uVar33 * 4 );
      if (uVar33 + 1 < 2) {
         uVar26 = 2;
      }

      uVar33 = *(uint*)( hash_table_size_primes + uVar26 * 4 );
      uVar34 = (ulong)uVar33;
      *(int*)( this + 0x28 ) = (int)uVar26;
      pvVar29 = *(void**)( this + 8 );
      uVar26 = uVar34 * 4;
      uVar38 = uVar34 * 8;
      pvVar4 = *(void**)( this + 0x10 );
      uVar27 = Memory::alloc_static(uVar26, false);
      *(undefined8*)( this + 0x10 ) = uVar27;
      __s_00 = (void*)Memory::alloc_static(uVar38, false);
      *(void**)( this + 8 ) = __s_00;
      if (uVar33 != 0) {
         __s = *(void**)( this + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar38 ) ) && ( __s_00 < (void*)( (long)__s + uVar26 ) )) {
            uVar26 = 0;
            do {
               *(undefined4*)( (long)__s + uVar26 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar26 * 8 ) = 0;
               uVar26 = uVar26 + 1;
            }
 while ( uVar34 != uVar26 );
         }
 else {
            memset(__s, 0, uVar26);
            memset(__s_00, 0, uVar38);
         }

      }

      if (uVar25 != 0) {
         uVar26 = 0;
         do {
            uVar33 = *(uint*)( (long)pvVar4 + uVar26 * 4 );
            if (uVar33 != 0) {
               lVar5 = *(long*)( this + 0x10 );
               uVar36 = 0;
               uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
               uVar38 = CONCAT44(0, uVar3);
               lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               auVar7._8_8_ = 0;
               auVar7._0_8_ = (ulong)uVar33 * lVar6;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = uVar38;
               lVar31 = SUB168(auVar7 * auVar15, 8);
               puVar1 = (uint*)( lVar5 + lVar31 * 4 );
               iVar30 = SUB164(auVar7 * auVar15, 8);
               uVar37 = *puVar1;
               uVar27 = *(undefined8*)( (long)pvVar29 + uVar26 * 8 );
               while (uVar37 != 0) {
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = (ulong)uVar37 * lVar6;
                  auVar16._8_8_ = 0;
                  auVar16._0_8_ = uVar38;
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = ( ulong )(( uVar3 + iVar30 ) - SUB164(auVar8 * auVar16, 8)) * lVar6;
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = uVar38;
                  uVar24 = SUB164(auVar9 * auVar17, 8);
                  uVar35 = uVar27;
                  if (uVar24 < uVar36) {
                     *puVar1 = uVar33;
                     puVar28 = (undefined8*)( (long)__s_00 + lVar31 * 8 );
                     uVar35 = *puVar28;
                     *puVar28 = uVar27;
                     uVar33 = uVar37;
                     uVar36 = uVar24;
                  }

                  uVar36 = uVar36 + 1;
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = ( ulong )(iVar30 + 1) * lVar6;
                  auVar18._8_8_ = 0;
                  auVar18._0_8_ = uVar38;
                  lVar31 = SUB168(auVar10 * auVar18, 8);
                  puVar1 = (uint*)( lVar5 + lVar31 * 4 );
                  iVar30 = SUB164(auVar10 * auVar18, 8);
                  uVar27 = uVar35;
                  uVar37 = *puVar1;
               }
;
               *(undefined8*)( (long)__s_00 + lVar31 * 8 ) = uVar27;
               *puVar1 = uVar33;
               *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
            }

            uVar26 = uVar26 + 1;
         }
 while ( uVar25 != uVar26 );
         Memory::free_static(pvVar29, false);
         Memory::free_static(pvVar4, false);
      }

   }

   local_78 = 0;
   local_88 = (undefined1[16])0x0;
   if (*(long*)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)param_1);
   }

   local_70 = (Ref*)0x0;
   Ref<Texture2D>::operator =((Ref<Texture2D>*)&local_70, (Ref*)local_b8._0_8_);
   local_68 = (Ref*)0x0;
   Ref<Texture2D>::operator =((Ref<Texture2D>*)&local_68, (Ref*)local_b8._8_8_);
   Dictionary::Dictionary(local_60, (Dictionary*)&local_a8);
   local_58 = local_a0;
   local_50 = local_98;
   puVar28 = (undefined8*)operator_new(0x40, "");
   puVar28[2] = 0;
   *puVar28 = local_88._0_8_;
   puVar28[1] = local_88._8_8_;
   if (local_78 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar28 + 2 ), (CowData*)&local_78);
   }

   puVar28[3] = 0;
   local_100 = (Ref<Texture2D>*)( puVar28 + 3 );
   Ref<Texture2D>::operator =(local_100, local_70);
   puVar28[4] = 0;
   Ref<Texture2D>::operator =((Ref<Texture2D>*)( puVar28 + 4 ), local_68);
   Dictionary::Dictionary((Dictionary*)( puVar28 + 5 ), local_60);
   *(undefined4*)( puVar28 + 6 ) = local_58;
   puVar28[7] = local_50;
   Dictionary::~Dictionary(local_60);
   Ref<Texture2D>::unref((Ref<Texture2D>*)&local_68);
   Ref<Texture2D>::unref((Ref<Texture2D>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   puVar39 = *(undefined8**)( this + 0x20 );
   if (puVar39 == (undefined8*)0x0) {
      *(undefined8**)( this + 0x18 ) = puVar28;
   }
 else {
      *puVar39 = puVar28;
      puVar28[1] = puVar39;
   }

   *(undefined8**)( this + 0x20 ) = puVar28;
   uVar25 = String::hash();
   lVar5 = *(long*)( this + 0x10 );
   uVar33 = 1;
   if (uVar25 != 0) {
      uVar33 = uVar25;
   }

   uVar37 = 0;
   uVar25 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   uVar26 = CONCAT44(0, uVar25);
   lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   auVar11._8_8_ = 0;
   auVar11._0_8_ = (ulong)uVar33 * lVar6;
   auVar19._8_8_ = 0;
   auVar19._0_8_ = uVar26;
   lVar32 = SUB168(auVar11 * auVar19, 8);
   lVar31 = *(long*)( this + 8 );
   puVar1 = (uint*)( lVar5 + lVar32 * 4 );
   iVar30 = SUB164(auVar11 * auVar19, 8);
   uVar3 = *puVar1;
   while (uVar3 != 0) {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar3 * lVar6;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar26;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = ( ulong )(( iVar30 + uVar25 ) - SUB164(auVar12 * auVar20, 8)) * lVar6;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar26;
      uVar36 = SUB164(auVar13 * auVar21, 8);
      puVar39 = puVar28;
      if (uVar36 < uVar37) {
         *puVar1 = uVar33;
         puVar2 = (undefined8*)( lVar31 + lVar32 * 8 );
         puVar39 = (undefined8*)*puVar2;
         *puVar2 = puVar28;
         uVar37 = uVar36;
         uVar33 = uVar3;
      }

      uVar37 = uVar37 + 1;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = ( ulong )(iVar30 + 1) * lVar6;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar26;
      lVar32 = SUB168(auVar14 * auVar22, 8);
      puVar1 = (uint*)( lVar5 + lVar32 * 4 );
      iVar30 = SUB164(auVar14 * auVar22, 8);
      puVar28 = puVar39;
      uVar3 = *puVar1;
   }
;
   *(undefined8**)( lVar31 + lVar32 * 8 ) = puVar28;
   *puVar1 = uVar33;
   *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
}
 else {
   uVar26 = (ulong)local_bc;
   lVar5 = *(long*)( *(long*)( this + 8 ) + uVar26 * 8 );
   Ref<Texture2D>::operator =((Ref<Texture2D>*)( lVar5 + 0x18 ), (Ref*)local_b8._0_8_);
   Ref<Texture2D>::operator =((Ref<Texture2D>*)( lVar5 + 0x20 ), (Ref*)local_b8._8_8_);
   Dictionary::operator =((Dictionary*)( lVar5 + 0x28 ), (Dictionary*)&local_a8);
   *(undefined4*)( lVar5 + 0x30 ) = local_a0;
   *(undefined8*)( lVar5 + 0x38 ) = local_98;
   local_100 = (Ref<Texture2D>*)( *(long*)( *(long*)( this + 8 ) + uVar26 * 8 ) + 0x18 );
}
LAB_0010e81f:Dictionary::~Dictionary((Dictionary*)&local_a8);Ref<Texture2D>::unref((Ref<Texture2D>*)( local_b8 + 8 ));Ref<Texture2D>::unref((Ref<Texture2D>*)local_b8);LAB_0010e2c4:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return local_100;}/* Ref<ImageTexture>::unref() */void Ref<ImageTexture>::unref(Ref<ImageTexture> *this) {
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
/* MethodBind* create_method_bind<EditorResourcePreview, String const&, Object*, StringName const&,
   Variant const&>(void (EditorResourcePreview::*)(String const&, Object*, StringName const&,
   Variant const&)) */MethodBind *create_method_bind<EditorResourcePreview,String_const&,Object*,StringName_const&,Variant_const&>(_func_void_String_ptr_Object_ptr_StringName_ptr_Variant_ptr *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_String_ptr_Object_ptr_StringName_ptr_Variant_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00113ca0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 4;
   local_40 = 0;
   local_38 = "EditorResourcePreview";
   local_30 = 0x15;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<EditorResourcePreview, Ref<Resource> const&, Object*, StringName
   const&, Variant const&>(void (EditorResourcePreview::*)(Ref<Resource> const&, Object*, StringName
   const&, Variant const&)) */MethodBind *create_method_bind<EditorResourcePreview,Ref<Resource>const&,Object*,StringName_const&,Variant_const&>(_func_void_Ref_ptr_Object_ptr_StringName_ptr_Variant_ptr *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_Ref_ptr_Object_ptr_StringName_ptr_Variant_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00113d00;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 4;
   local_40 = 0;
   local_38 = "EditorResourcePreview";
   local_30 = 0x15;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<EditorResourcePreview, Ref<EditorResourcePreviewGenerator>
   const&>(void (EditorResourcePreview::*)(Ref<EditorResourcePreviewGenerator> const&)) */MethodBind *create_method_bind<EditorResourcePreview,Ref<EditorResourcePreviewGenerator>const&>(_func_void_Ref_ptr *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_Ref_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00113d60;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "EditorResourcePreview";
   local_30 = 0x15;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<EditorResourcePreview, String const&>(void
   (EditorResourcePreview::*)(String const&)) */MethodBind *create_method_bind<EditorResourcePreview,String_const&>(_func_void_String_ptr *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_String_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00113dc0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "EditorResourcePreview";
   local_30 = 0x15;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorResourcePreview::_initialize_classv() */void EditorResourcePreview::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (Node::initialize_class() == '\0') {
         Object::initialize_class();
         local_58 = 0;
         local_40 = 6;
         local_48 = "Object";
         String::parse_latin1((StrRange*)&local_58);
         StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
         local_48 = "Node";
         local_60 = 0;
         local_40 = 4;
         String::parse_latin1((StrRange*)&local_60);
         StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
         ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if ((code*)PTR__bind_methods_00118010 != Object::_bind_methods) {
            Node::_bind_methods();
         }

         Node::initialize_class()::initialized =
         '\x01';
      }

      local_48 = "Node";
      local_58 = 0;
      local_40 = 4;
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "EditorResourcePreview";
      local_60 = 0;
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      _bind_methods();
      initialize_class()::initialized =
      '\x01';
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
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
/* CowData<String>::_realloc(long) */undefined8 CowData<String>::_realloc(CowData<String> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<String>::resize<false>(long) */undefined8 CowData<String>::resize<false>(CowData<String> *this, long param_1) {
   code *pcVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   long lVar4;
   long lVar5;
   ulong uVar6;
   undefined8 *puVar7;
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
      lVar4 = 0;
      lVar5 = 0;
   }
 else {
      lVar4 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar4) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar5 = lVar4 * 8;
      if (lVar5 != 0) {
         uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
         uVar6 = uVar6 | uVar6 >> 2;
         uVar6 = uVar6 | uVar6 >> 4;
         uVar6 = uVar6 | uVar6 >> 8;
         uVar6 = uVar6 | uVar6 >> 0x10;
         lVar5 = ( uVar6 | uVar6 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_0010f4b0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar6 = param_1 * 8 - 1;
   uVar6 = uVar6 >> 1 | uVar6;
   uVar6 = uVar6 | uVar6 >> 2;
   uVar6 = uVar6 | uVar6 >> 4;
   uVar6 = uVar6 | uVar6 >> 8;
   uVar6 = uVar6 | uVar6 >> 0x10;
   uVar6 = uVar6 | uVar6 >> 0x20;
   lVar9 = uVar6 + 1;
   if (lVar9 == 0) goto LAB_0010f4b0;
   uVar8 = param_1;
   if (param_1 <= lVar4) {
      while (lVar4 = *(long*)this,lVar4 != 0) {
         if (*(ulong*)( lVar4 + -8 ) <= uVar8) {
            if (lVar9 != lVar5) {
               uVar3 = _realloc(this, lVar9);
               if ((int)uVar3 != 0) {
                  return uVar3;
               }

               lVar4 = *(long*)this;
               if (lVar4 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar1 = (code*)invalidInstructionException();
                  ( *pcVar1 )();
               }

            }

            *(long*)( lVar4 + -8 ) = param_1;
            return 0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( lVar4 + uVar8 * 8 ));
         uVar8 = uVar8 + 1;
      }
;
      goto LAB_0010f506;
   }

   if (lVar9 == lVar5) {
      LAB_0010f42b:puVar7 = *(undefined8**)this;
      if (puVar7 == (undefined8*)0x0) {
         LAB_0010f506:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      lVar4 = puVar7[-1];
      if (param_1 <= lVar4) goto LAB_0010f39f;
   }
 else {
      if (lVar4 != 0) {
         uVar3 = _realloc(this, lVar9);
         if ((int)uVar3 != 0) {
            return uVar3;
         }

         goto LAB_0010f42b;
      }

      puVar2 = (undefined8*)Memory::alloc_static(uVar6 + 0x11, false);
      if (puVar2 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar7 = puVar2 + 2;
      *puVar2 = 1;
      puVar2[1] = 0;
      *(undefined8**)this = puVar7;
      lVar4 = 0;
   }

   memset(puVar7 + lVar4, 0, ( param_1 - lVar4 ) * 8);
   LAB_0010f39f:puVar7[-1] = param_1;
   return 0;
}
/* CowData<unsigned int>::_unref() */void CowData<unsigned_int>::_unref(CowData<unsigned_int> *this) {
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
/* CowData<int>::_realloc(long) */undefined8 CowData<int>::_realloc(CowData<int> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<int>::resize<false>(long) */undefined8 CowData<int>::resize<false>(CowData<int> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   long lVar8;
   long lVar9;
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
      lVar9 = 0;
      lVar3 = 0;
   }
 else {
      lVar9 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar9) {
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
      lVar3 = lVar9 * 4;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 4 == 0) {
      LAB_0010f7d0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 4 - 1;
   uVar4 = uVar4 | uVar4 >> 1;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar8 = uVar4 + 1;
   if (lVar8 == 0) goto LAB_0010f7d0;
   if (lVar9 < param_1) {
      if (lVar8 != lVar3) {
         if (lVar9 == 0) {
            puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
            if (puVar5 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               return 6;
            }

            puVar7 = puVar5 + 2;
            *puVar5 = 1;
            puVar5[1] = 0;
            *(undefined8**)this = puVar7;
            goto LAB_0010f6e1;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_0010f6e1:puVar7[-1] = param_1;
         return 0;
      }

   }
 else {
      if (( lVar8 != lVar3 ) && ( uVar6 = _realloc(this, lVar8) ),(int)uVar6 != 0) {
         return uVar6;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

   }

   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* EditorResourcePreviewGenerator::_initialize_classv() */void EditorResourcePreviewGenerator::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (RefCounted::initialize_class() == '\0') {
         Object::initialize_class();
         local_58 = 0;
         local_40 = 6;
         local_48 = "Object";
         String::parse_latin1((StrRange*)&local_58);
         StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
         local_48 = "RefCounted";
         local_60 = 0;
         local_40 = 10;
         String::parse_latin1((StrRange*)&local_60);
         StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
         ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if ((code*)PTR__bind_methods_00118008 != Object::_bind_methods) {
            RefCounted::_bind_methods();
         }

         RefCounted::initialize_class()::initialized =
         '\x01';
      }

      local_48 = "RefCounted";
      local_58 = 0;
      local_40 = 10;
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "EditorResourcePreviewGenerator";
      local_60 = 0;
      local_40 = 0x1e;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      _bind_methods();
      initialize_class()::initialized =
      '\x01';
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void memdelete<Image>(Image*) */void memdelete<Image>(Image *param_1) {
   long *plVar1;
   long lVar2;
   char cVar3;
   cVar3 = predelete_handler((Object*)param_1);
   if (cVar3 == '\0') {
      return;
   }

   if (*(code**)( *(long*)param_1 + 0x140 ) == Image::~Image) {
      *(code**)param_1 = Memory::free_static;
      if (*(long*)( param_1 + 0x250 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( param_1 + 0x250 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( param_1 + 0x250 );
            *(undefined8*)( param_1 + 0x250 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      Resource::~Resource((Resource*)param_1);
      Memory::free_static(param_1, false);
      return;
   }

   ( **(code**)( *(long*)param_1 + 0x140 ) )(param_1);
   Memory::free_static(param_1, false);
   return;
}
/* Ref<Image>::unref() */void Ref<Image>::unref(Ref<Image> *this) {
   char cVar1;
   if (*(long*)this != 0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
         memdelete<Image>(*(Image**)this);
         *(undefined8*)this = 0;
         return;
      }

   }

   *(undefined8*)this = 0;
   return;
}
/* void Ref<Image>::instantiate<>() */void Ref<Image>::instantiate<>(Ref<Image> *this) {
   Image *pIVar1;
   char cVar2;
   Resource *this_00;
   long lVar3;
   Resource *pRVar4;
   Image *pIVar5;
   byte bVar6;
   bVar6 = 0;
   this_00 = (Resource*)operator_new(0x268, "");
   pRVar4 = this_00;
   for (lVar3 = 0x4d; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(undefined8*)pRVar4 = 0;
      pRVar4 = pRVar4 + (ulong)bVar6 * -0x10 + 8;
   }

   Resource::Resource(this_00);
   this_00[0x260] = (Resource)0x0;
   *(code**)this_00 = Memory::free_static;
   *(undefined4*)( this_00 + 0x240 ) = 0;
   *(undefined8*)( this_00 + 0x250 ) = 0;
   *(undefined8*)( this_00 + 600 ) = 0;
   postinitialize_handler((Object*)this_00);
   cVar2 = RefCounted::init_ref();
   if (cVar2 == '\0') {
      pIVar1 = *(Image**)this;
      if (pIVar1 == (Image*)0x0) {
         return;
      }

      *(undefined8*)this = 0;
      cVar2 = RefCounted::unreference();
      if (cVar2 == '\0') {
         return;
      }

      memdelete<Image>(pIVar1);
      return;
   }

   pIVar1 = *(Image**)this;
   pIVar5 = pIVar1;
   if (this_00 != (Resource*)pIVar1) {
      *(Resource**)this = this_00;
      cVar2 = RefCounted::reference();
      pIVar5 = (Image*)this_00;
      if (cVar2 == '\0') {
         *(undefined8*)this = 0;
         if (pIVar1 == (Image*)0x0) goto LAB_0010fc18;
         cVar2 = RefCounted::unreference();
      }
 else {
         if (pIVar1 == (Image*)0x0) goto LAB_0010fc18;
         cVar2 = RefCounted::unreference();
      }

      if (cVar2 != '\0') {
         memdelete<Image>(pIVar1);
      }

   }

   LAB_0010fc18:cVar2 = RefCounted::unreference();
   if (cVar2 == '\0') {
      return;
   }

   memdelete<Image>(pIVar5);
   return;
}
/* CowData<Ref<EditorResourcePreviewGenerator> >::_unref() */void CowData<Ref<EditorResourcePreviewGenerator>>::_unref(CowData<Ref<EditorResourcePreviewGenerator>> *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   code *pcVar4;
   char cVar5;
   long *plVar6;
   long lVar7;
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

   plVar1 = *(long**)this;
   if (plVar1 == (long*)0x0) {
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   lVar2 = plVar1[-1];
   *(undefined8*)this = 0;
   if (lVar2 != 0) {
      lVar7 = 0;
      plVar6 = plVar1;
      LAB_0010fccd:do {
         if (*plVar6 != 0) {
            cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') {
               pOVar3 = (Object*)*plVar6;
               cVar5 = predelete_handler(pOVar3);
               if (cVar5 != '\0') {
                  lVar7 = lVar7 + 1;
                  plVar6 = plVar6 + 1;
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
                  if (lVar2 == lVar7) break;
                  goto LAB_0010fccd;
               }

            }

         }

         lVar7 = lVar7 + 1;
         plVar6 = plVar6 + 1;
      }
 while ( lVar2 != lVar7 );
   }

   Memory::free_static(plVar1 + -2, false);
   return;
}
/* EditorResourcePreview::_notificationv(int, bool) */void EditorResourcePreview::_notificationv(EditorResourcePreview *this, int param_1, bool param_2) {
   if (param_2) {
      if (param_1 == 0xb) {
         stop(this);
         if ((code*)PTR__notification_00118018 != Object::_notification) goto LAB_0010fd78;
      }
 else if ((code*)PTR__notification_00118018 != Object::_notification) {
         LAB_0010fd78:Node::_notification((int)this);
         return;
      }

   }
 else {
      if ((code*)PTR__notification_00118018 != Object::_notification) {
         Node::_notification((int)this);
      }

      if (param_1 == 0xb) {
         stop(this);
         return;
      }

   }

   return;
}
/* CowData<Ref<EditorResourcePreviewGenerator> >::_realloc(long) */undefined8 CowData<Ref<EditorResourcePreviewGenerator>>::_realloc(CowData<Ref<EditorResourcePreviewGenerator>> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Ref<EditorResourcePreviewGenerator> >::resize<false>(long) */undefined8 CowData<Ref<EditorResourcePreviewGenerator>>::resize<false>(CowData<Ref<EditorResourcePreviewGenerator>> *this, long param_1) {
   long *plVar1;
   Object *pOVar2;
   code *pcVar3;
   char cVar4;
   undefined8 uVar5;
   undefined8 *puVar6;
   long lVar7;
   long lVar8;
   ulong uVar9;
   undefined8 *puVar10;
   long lVar11;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar7 = 0;
      lVar8 = 0;
   }
 else {
      lVar7 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar7) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar8 = lVar7 * 8;
      if (lVar8 != 0) {
         uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
         uVar9 = uVar9 | uVar9 >> 2;
         uVar9 = uVar9 | uVar9 >> 4;
         uVar9 = uVar9 | uVar9 >> 8;
         uVar9 = uVar9 | uVar9 >> 0x10;
         lVar8 = ( uVar9 | uVar9 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_00110110:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar9 = param_1 * 8 - 1;
   uVar9 = uVar9 >> 1 | uVar9;
   uVar9 = uVar9 | uVar9 >> 2;
   uVar9 = uVar9 | uVar9 >> 4;
   uVar9 = uVar9 | uVar9 >> 8;
   uVar9 = uVar9 | uVar9 >> 0x10;
   uVar9 = uVar9 | uVar9 >> 0x20;
   lVar11 = uVar9 + 1;
   if (lVar11 == 0) goto LAB_00110110;
   if (param_1 <= lVar7) {
      lVar7 = *(long*)this;
      uVar9 = param_1;
      while (lVar7 != 0) {
         if (*(ulong*)( lVar7 + -8 ) <= uVar9) {
            LAB_0010ffba:if (lVar11 != lVar8) {
               uVar5 = _realloc(this, lVar11);
               if ((int)uVar5 != 0) {
                  return uVar5;
               }

               lVar7 = *(long*)this;
               if (lVar7 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

            }

            *(long*)( lVar7 + -8 ) = param_1;
            return 0;
         }

         while (plVar1 = (long*)( lVar7 + uVar9 * 8 ),*plVar1 == 0) {
            uVar9 = uVar9 + 1;
            if (*(ulong*)( lVar7 + -8 ) <= uVar9) goto LAB_0010ffba;
         }
;
         cVar4 = RefCounted::unreference();
         if (cVar4 != '\0') {
            pOVar2 = (Object*)*plVar1;
            cVar4 = predelete_handler(pOVar2);
            if (cVar4 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }

         }

         uVar9 = uVar9 + 1;
         lVar7 = *(long*)this;
      }
;
      goto LAB_0010ff80;
   }

   if (lVar11 == lVar8) {
      LAB_0011008b:puVar10 = *(undefined8**)this;
      if (puVar10 == (undefined8*)0x0) {
         LAB_0010ff80:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar7 = puVar10[-1];
      if (param_1 <= lVar7) goto LAB_0011006b;
   }
 else {
      if (lVar7 != 0) {
         uVar5 = _realloc(this, lVar11);
         if ((int)uVar5 != 0) {
            return uVar5;
         }

         goto LAB_0011008b;
      }

      puVar6 = (undefined8*)Memory::alloc_static(uVar9 + 0x11, false);
      if (puVar6 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar10 = puVar6 + 2;
      *puVar6 = 1;
      puVar6[1] = 0;
      *(undefined8**)this = puVar10;
      lVar7 = 0;
   }

   memset(puVar10 + lVar7, 0, ( param_1 - lVar7 ) * 8);
   LAB_0011006b:puVar10[-1] = param_1;
   return 0;
}
/* WARNING: Removing unreachable block (ram,0x00110298) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
   char cVar1;
   Variant *this;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_3);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar2 = (int)local_c8;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, param_2);
   *param_1 = local_c0[0];
   local_c0[0] = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_c0);
   Array::~Array(local_c8);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar1 = Variant::needs_deinit[local_78[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_78[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindT<String const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<String_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00110721;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x001105ad. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
      return;
   }

   LAB_00110721:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<String const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<String_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00110901;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00110789. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }

   LAB_00110901:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<String const&, Object*, StringName const&, Variant const&>::validated_call(Object*,
   Variant const**, Variant*) const */void MethodBindT<String_const&,Object*,StringName_const&,Variant_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00110b01;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00110984. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8, *(undefined8*)( *(long*)( param_3 + 8 ) + 0x10 ), *(long*)( param_3 + 0x10 ) + 8, *(undefined8*)( param_3 + 0x18 ));
      return;
   }

   LAB_00110b01:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Ref<EditorResourcePreviewGenerator> const&>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindT<Ref<EditorResourcePreviewGenerator>const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   Object *pOVar2;
   char cVar3;
   Object *pOVar4;
   Variant *pVVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   Object *local_58;
   undefined8 local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar5 = param_2[0x23];
         if (pVVar5 == (Variant*)0x0) {
            pVVar5 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar5 = param_2[1] + 0x20;
      }

      if (local_58 == (Object*)*(long*)pVVar5) {
         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = (Object*)0x110468;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00110c08;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar6 = *(code**)( param_1 + 0x58 );
   lVar1 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar6 & 1 ) != 0) {
      pcVar6 = *(code**)( pcVar6 + *(long*)( (long)param_2 + lVar1 ) + -1 );
   }

   Variant::Variant((Variant*)local_48, *(Object**)( *(long*)param_3 + 0x10 ));
   local_58 = (Object*)0x0;
   pOVar4 = (Object*)Variant::get_validated_object();
   pOVar2 = local_58;
   if (pOVar4 != local_58) {
      if (pOVar4 == (Object*)0x0) {
         if (local_58 != (Object*)0x0) {
            local_58 = (Object*)0x0;
            LAB_00110bc6:cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(pOVar2);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

         }

      }
 else {
         pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &EditorResourcePreviewGenerator::typeinfo, 0);
         if (pOVar2 != pOVar4) {
            local_58 = pOVar4;
            if (pOVar4 != (Object*)0x0) {
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  local_58 = (Object*)0x0;
               }

            }

            if (pOVar2 != (Object*)0x0) goto LAB_00110bc6;
         }

      }

   }

   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   ( *pcVar6 )((long*)( (long)param_2 + lVar1 ));
   if (local_58 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_58;
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_58);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   LAB_00110c08:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<EditorResourcePreviewGenerator> const&>::ptrcall(Object*, void const**, void*)
   const */void MethodBindT<Ref<EditorResourcePreviewGenerator>const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   Object *pOVar2;
   char cVar3;
   long *plVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Object *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar4 = (long*)param_2[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar4 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (Object*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Object*)0x110468;
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00110ecc;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar5 = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   lVar1 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar5 & 1 ) != 0) {
      pcVar5 = *(code**)( pcVar5 + *(long*)( (long)param_2 + lVar1 ) + -1 );
   }

   if (( *param_3 == (long*)0x0 ) || ( local_48 = (Object*)**param_3 ),local_48 == (Object*)0x0) {
      LAB_00110ea8:local_48 = (Object*)0x0;
   }
 else {
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') goto LAB_00110ea8;
   }

   ( *pcVar5 )((long*)( (long)param_2 + lVar1 ));
   if (local_48 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_48;
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_48);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   LAB_00110ecc:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<Resource> const&, Object*, StringName const&, Variant
   const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Ref<Resource>const&,Object*,StringName_const&,Variant_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   Object *pOVar5;
   char cVar6;
   Object *pOVar7;
   Variant *pVVar8;
   code *pcVar9;
   long in_FS_OFFSET;
   long local_78;
   undefined8 local_70;
   Object *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar8 = param_2[0x23];
         if (pVVar8 == (Variant*)0x0) {
            pVVar8 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar8 = param_2[1] + 0x20;
      }

      if (local_68 == (Object*)*(long*)pVVar8) {
         if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = (Object*)0x110468;
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_001111a7;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar9 = *(code**)( param_1 + 0x58 );
   lVar1 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar9 & 1 ) != 0) {
      pcVar9 = *(code**)( pcVar9 + *(long*)( (long)param_2 + lVar1 ) + -1 );
   }

   lVar2 = *(long*)( param_3 + 0x10 );
   uVar3 = *(undefined8*)( param_3 + 0x18 );
   uVar4 = *(undefined8*)( *(long*)( param_3 + 8 ) + 0x10 );
   Variant::Variant((Variant*)local_58, *(Object**)( *(long*)param_3 + 0x10 ));
   local_68 = (Object*)0x0;
   pOVar7 = (Object*)Variant::get_validated_object();
   pOVar5 = local_68;
   if (pOVar7 != local_68) {
      if (pOVar7 == (Object*)0x0) {
         if (local_68 != (Object*)0x0) {
            local_68 = (Object*)0x0;
            LAB_00111159:cVar6 = RefCounted::unreference();
            if (cVar6 != '\0') {
               cVar6 = predelete_handler(pOVar5);
               if (cVar6 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

      }
 else {
         pOVar7 = (Object*)__dynamic_cast(pOVar7, &Object::typeinfo, &Resource::typeinfo, 0);
         if (pOVar5 != pOVar7) {
            local_68 = pOVar7;
            if (pOVar7 != (Object*)0x0) {
               cVar6 = RefCounted::reference();
               if (cVar6 == '\0') {
                  local_68 = (Object*)0x0;
               }

            }

            if (pOVar5 != (Object*)0x0) goto LAB_00111159;
         }

      }

   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   ( *pcVar9 )((long*)( (long)param_2 + lVar1 ), (StringName*)&local_68, uVar4, lVar2 + 8, uVar3);
   if (local_68 != (Object*)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar5 = local_68;
      if (cVar6 != '\0') {
         cVar6 = predelete_handler(local_68);
         if (cVar6 != '\0') {
            ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
            Memory::free_static(pOVar5, false);
         }

      }

   }

   LAB_001111a7:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<String const&, Object*, StringName const&, Variant const&>::ptrcall(Object*, void
   const**, void*) const */void MethodBindT<String_const&,Object*,StringName_const&,Variant_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_001115a7;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   plVar1 = *(long**)( (long)param_3 + 8 );
   if (plVar1 != (long*)0x0) {
      plVar1 = (long*)*plVar1;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Load size is inaccurate */
      /* WARNING: Could not recover jumptable at 0x00111453. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3, plVar1, *(undefined8*)( (long)param_3 + 0x10 ), *(undefined8*)( (long)param_3 + 0x18 ));
      return;
   }

   LAB_001115a7:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Ref<Resource> const&, Object*, StringName const&, Variant const&>::ptrcall(Object*,
   void const**, void*) const */void MethodBindT<Ref<Resource>const&,Object*,StringName_const&,Variant_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   Object *pOVar4;
   char cVar5;
   long *plVar6;
   code *pcVar7;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   Object *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar6 = (long*)param_2[0x23];
         if (plVar6 == (long*)0x0) {
            plVar6 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar6 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_58 == (Object*)*plVar6) {
         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = (Object*)0x110468;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00111662;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar7 = *(code**)( param_1 + 0x58 );
   lVar1 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar7 & 1 ) != 0) {
      pcVar7 = *(code**)( pcVar7 + *(long*)( (long)param_2 + lVar1 ) + -1 );
   }

   plVar6 = *(long**)( (long)param_3 + 8 );
   uVar2 = *(undefined8*)( (long)param_3 + 0x18 );
   uVar3 = *(undefined8*)( (long)param_3 + 0x10 );
   if (plVar6 != (long*)0x0) {
      plVar6 = (long*)*plVar6;
   }

   /* WARNING: Load size is inaccurate */
   if (( *param_3 == (long*)0x0 ) || ( local_58 = (Object*)**param_3 ),local_58 == (Object*)0x0) {
      LAB_00111637:local_58 = (Object*)0x0;
   }
 else {
      cVar5 = RefCounted::init_ref();
      if (cVar5 == '\0') goto LAB_00111637;
   }

   ( *pcVar7 )((long*)( (long)param_2 + lVar1 ), (StringName*)&local_58, plVar6, uVar3, uVar2);
   if (local_58 != (Object*)0x0) {
      cVar5 = RefCounted::unreference();
      pOVar4 = local_58;
      if (cVar5 != '\0') {
         cVar5 = predelete_handler(local_58);
         if (cVar5 != '\0') {
            ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
            Memory::free_static(pOVar4, false);
         }

      }

   }

   LAB_00111662:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<String const&>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   long *plVar7;
   long lVar8;
   undefined4 in_register_00000014;
   long *plVar9;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar10;
   Variant *pVVar11;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   plVar9 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar9 != (long*)0x0 ) && ( plVar9[1] != 0 ) ) && ( *(char*)( plVar9[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar9[1] == 0) {
         plVar7 = (long*)plVar9[0x23];
         if (plVar7 == (long*)0x0) {
            plVar7 = (long*)( **(code**)( *plVar9 + 0x40 ) )(plVar9);
         }

      }
 else {
         plVar7 = (long*)( plVar9[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar7) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC53, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001119e0;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar11 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar10 = param_2[5];
      if (pVVar10 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_00111a30;
         LAB_00111a20:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00111a30:uVar6 = 4;
            goto LAB_001119d5;
         }

         if (in_R8D == 1) goto LAB_00111a20;
         lVar8 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar8) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar10 = pVVar10 + lVar8 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar11 & 1 ) != 0) {
         pVVar11 = *(Variant**)( pVVar11 + *(long*)( (long)plVar9 + (long)pVVar1 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 4);
      uVar4 = _LC130;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_String((Variant*)&local_48);
      ( *(code*)pVVar11 )((Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   }
 else {
      uVar6 = 3;
      LAB_001119d5:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_001119e0:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<EditorResourcePreviewGenerator> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindT<Ref<EditorResourcePreviewGenerator>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   Object *pOVar5;
   char cVar6;
   undefined4 uVar7;
   Object *pOVar8;
   long *plVar9;
   long lVar10;
   undefined4 in_register_00000014;
   long *plVar11;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar12;
   Variant *pVVar13;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Object *local_48;
   undefined8 local_40;
   long local_30;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar9 = (long*)plVar11[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar9 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_48 == (Object*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Object*)0x110468;
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC53, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00111d90;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (1 < in_R8D) {
      uVar7 = 3;
      LAB_00111d85:*in_R9 = uVar7;
      in_R9[2] = 1;
      goto LAB_00111d90;
   }

   pVVar12 = param_2[5];
   if (pVVar12 == (Variant*)0x0) {
      if (in_R8D != 1) goto LAB_00111de0;
      LAB_00111dd0:pVVar12 = *(Variant**)param_4;
   }
 else {
      lVar2 = *(long*)( pVVar12 + -8 );
      if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
         LAB_00111de0:uVar7 = 4;
         goto LAB_00111d85;
      }

      if (in_R8D == 1) goto LAB_00111dd0;
      lVar10 = (long)( (int)lVar2 + -1 );
      if (lVar2 <= lVar10) {
         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      pVVar12 = pVVar12 + lVar10 * 0x18;
   }

   *in_R9 = 0;
   if (( (ulong)pVVar13 & 1 ) != 0) {
      pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
   }

   cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar12);
   uVar4 = _LC131;
   if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8*)( in_R9 + 1 ) = uVar4;
   }

   local_48 = (Object*)0x0;
   pOVar8 = (Object*)Variant::get_validated_object();
   pOVar5 = local_48;
   if (pOVar8 != local_48) {
      if (pOVar8 == (Object*)0x0) {
         if (local_48 != (Object*)0x0) {
            local_48 = (Object*)0x0;
            LAB_00111efd:cVar6 = RefCounted::unreference();
            if (cVar6 != '\0') {
               cVar6 = predelete_handler(pOVar5);
               if (cVar6 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

      }
 else {
         pOVar8 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &EditorResourcePreviewGenerator::typeinfo, 0);
         if (pOVar5 != pOVar8) {
            local_48 = pOVar8;
            if (pOVar8 != (Object*)0x0) {
               cVar6 = RefCounted::reference();
               if (cVar6 == '\0') {
                  local_48 = (Object*)0x0;
               }

            }

            if (pOVar5 != (Object*)0x0) goto LAB_00111efd;
         }

      }

   }

   ( *(code*)pVVar13 )((Variant*)( (long)plVar11 + (long)pVVar1 ));
   if (local_48 != (Object*)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar5 = local_48;
      if (cVar6 != '\0') {
         cVar6 = predelete_handler(local_48);
         if (cVar6 != '\0') {
            ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
            Memory::free_static(pOVar5, false);
         }

      }

   }

   LAB_00111d90:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<String const&, Object*, StringName const&, Variant const&>::call(Object*, Variant
   const**, int, Callable::CallError&) const */Object *MethodBindT<String_const&,Object*,StringName_const&,Variant_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   long lVar7;
   Object *pOVar8;
   long *plVar9;
   Object *pOVar10;
   uint uVar11;
   int iVar12;
   undefined4 in_register_00000014;
   long *plVar13;
   Variant *pVVar14;
   long lVar15;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar16;
   long in_FS_OFFSET;
   long local_a8;
   long local_a0;
   char *local_98;
   undefined8 local_90;
   int local_88[8];
   Variant *local_68[5];
   long local_40;
   plVar13 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar13 != (long*)0x0 ) && ( plVar13[1] != 0 ) ) && ( *(char*)( plVar13[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_98, (StringName*)( param_2 + 3 ));
      if (plVar13[1] == 0) {
         plVar9 = (long*)plVar13[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar13 + 0x40 ) )(plVar13);
         }

      }
 else {
         plVar9 = (long*)( plVar13[1] + 0x20 );
      }

      if (local_98 == (char*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_a0 = 0;
         local_90 = 0x35;
         String::parse_latin1((StrRange*)&local_a0);
         vformat<StringName>((StringName*)&local_98, (StrRange*)&local_a0, &local_a8);
         _err_print_error(&_LC53, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_98, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
            StringName::unref();
         }

         goto LAB_00112260;
      }

      if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar16 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 5) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant*)0x0) {
         iVar12 = 0;
         lVar15 = 0;
      }
 else {
         lVar15 = *(long*)( pVVar2 + -8 );
         iVar12 = (int)lVar15;
      }

      if ((int)( 4 - in_R8D ) <= iVar12) {
         lVar7 = 0;
         do {
            if ((int)lVar7 < (int)in_R8D) {
               pVVar14 = *(Variant**)( param_4 + lVar7 * 8 );
            }
 else {
               uVar11 = iVar12 + -4 + (int)lVar7;
               if (lVar15 <= (int)uVar11) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar11, lVar15, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               pVVar14 = pVVar2 + (ulong)uVar11 * 0x18;
            }

            local_68[lVar7] = pVVar14;
            lVar7 = lVar7 + 1;
         }
 while ( lVar7 != 4 );
         *in_R9 = 0;
         if (( (ulong)pVVar16 & 1 ) != 0) {
            pVVar16 = *(Variant**)( pVVar16 + *(long*)( (long)plVar13 + (long)pVVar1 ) + -1 );
         }

         cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[3], 0);
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = 3;
         }

         Variant::Variant((Variant*)local_88, local_68[3]);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[2], 0x15);
         uVar4 = _LC133;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_StringName((Variant*)&local_a0);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[1], 0x18);
         if (cVar5 == '\0') {
            LAB_0011216f:uVar4 = _LC134;
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
 else {
            pOVar8 = Variant::operator_cast_to_Object_(local_68[1]);
            pOVar10 = Variant::operator_cast_to_Object_(local_68[1]);
            if (( pOVar8 != (Object*)0x0 ) && ( pOVar10 == (Object*)0x0 )) goto LAB_0011216f;
         }

         pOVar8 = Variant::operator_cast_to_Object_(local_68[1]);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[0], 4);
         uVar4 = _LC130;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_String((Variant*)&local_98);
         ( *(code*)pVVar16 )((Variant*)( (long)plVar13 + (long)pVVar1 ), (Variant*)&local_98, pOVar8, (Variant*)&local_a0, (Variant*)local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
            StringName::unref();
         }

         if (Variant::needs_deinit[local_88[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00112260;
      }

      uVar6 = 4;
   }
 else {
      uVar6 = 3;
   }

   *in_R9 = uVar6;
   in_R9[2] = 4;
   LAB_00112260:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindT<Ref<Resource> const&, Object*, StringName const&, Variant const&>::call(Object*,
   Variant const**, int, Callable::CallError&) const */Object *MethodBindT<Ref<Resource>const&,Object*,StringName_const&,Variant_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   long lVar7;
   Object *pOVar8;
   Object *pOVar9;
   long *plVar10;
   Object *pOVar11;
   uint uVar12;
   int iVar13;
   undefined4 in_register_00000014;
   long *plVar14;
   Variant *pVVar15;
   long lVar16;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar17;
   long in_FS_OFFSET;
   long local_a8;
   long local_a0;
   Object *local_98;
   undefined8 local_90;
   int local_88[8];
   Variant *local_68[5];
   long local_40;
   plVar14 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar14 != (long*)0x0 ) && ( plVar14[1] != 0 ) ) && ( *(char*)( plVar14[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_98, (StringName*)( param_2 + 3 ));
      if (plVar14[1] == 0) {
         plVar10 = (long*)plVar14[0x23];
         if (plVar10 == (long*)0x0) {
            plVar10 = (long*)( **(code**)( *plVar14 + 0x40 ) )(plVar14);
         }

      }
 else {
         plVar10 = (long*)( plVar14[1] + 0x20 );
      }

      if (local_98 == (Object*)*plVar10) {
         if (( StringName::configured != '\0' ) && ( local_98 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_98 = (Object*)0x110468;
         local_a0 = 0;
         local_90 = 0x35;
         String::parse_latin1((StrRange*)&local_a0);
         vformat<StringName>((StringName*)&local_98, (StrRange*)&local_a0, &local_a8);
         _err_print_error(&_LC53, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_98, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
            StringName::unref();
         }

         goto LAB_00112740;
      }

      if (( StringName::configured != '\0' ) && ( local_98 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar17 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 5) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant*)0x0) {
         iVar13 = 0;
         lVar16 = 0;
      }
 else {
         lVar16 = *(long*)( pVVar2 + -8 );
         iVar13 = (int)lVar16;
      }

      if ((int)( 4 - in_R8D ) <= iVar13) {
         lVar7 = 0;
         do {
            if ((int)lVar7 < (int)in_R8D) {
               pVVar15 = *(Variant**)( param_4 + lVar7 * 8 );
            }
 else {
               uVar12 = iVar13 + -4 + (int)lVar7;
               if (lVar16 <= (int)uVar12) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar12, lVar16, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               pVVar15 = pVVar2 + (ulong)uVar12 * 0x18;
            }

            local_68[lVar7] = pVVar15;
            lVar7 = lVar7 + 1;
         }
 while ( lVar7 != 4 );
         *in_R9 = 0;
         if (( (ulong)pVVar17 & 1 ) != 0) {
            pVVar17 = *(Variant**)( pVVar17 + *(long*)( (long)plVar14 + (long)pVVar1 ) + -1 );
         }

         cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[3], 0);
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = 3;
         }

         Variant::Variant((Variant*)local_88, local_68[3]);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[2], 0x15);
         uVar4 = _LC133;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_StringName((Variant*)&local_a0);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[1], 0x18);
         if (cVar5 == '\0') {
            LAB_001125ed:uVar4 = _LC134;
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
 else {
            pOVar8 = Variant::operator_cast_to_Object_(local_68[1]);
            pOVar11 = Variant::operator_cast_to_Object_(local_68[1]);
            if (( pOVar11 == (Object*)0x0 ) && ( pOVar8 != (Object*)0x0 )) goto LAB_001125ed;
         }

         pOVar8 = Variant::operator_cast_to_Object_(local_68[1]);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[0]);
         uVar4 = _LC131;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         local_98 = (Object*)0x0;
         pOVar9 = (Object*)Variant::get_validated_object();
         pOVar11 = local_98;
         if (pOVar9 != local_98) {
            if (pOVar9 == (Object*)0x0) {
               if (local_98 != (Object*)0x0) {
                  local_98 = (Object*)0x0;
                  LAB_00112695:cVar5 = RefCounted::unreference();
                  if (( cVar5 != '\0' ) && ( cVar5 = cVar5 != '\0' )) {
                     ( **(code**)( *(long*)pOVar11 + 0x140 ) )(pOVar11);
                     Memory::free_static(pOVar11, false);
                  }

               }

            }
 else {
               pOVar9 = (Object*)__dynamic_cast(pOVar9, &Object::typeinfo, &Resource::typeinfo, 0);
               if (pOVar11 != pOVar9) {
                  local_98 = pOVar9;
                  if (( pOVar9 != (Object*)0x0 ) && ( cVar5 = cVar5 == '\0' )) {
                     local_98 = (Object*)0x0;
                  }

                  if (pOVar11 != (Object*)0x0) goto LAB_00112695;
               }

            }

         }

         ( *(code*)pVVar17 )((Variant*)( (long)plVar14 + (long)pVVar1 ), &local_98, pOVar8, (Variant*)&local_a0, (Variant*)local_88);
         if (( ( local_98 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar8 = local_98,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar8 + 0x140 ))(pOVar8);
         Memory::free_static(pOVar8, false);
      }

      if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
         StringName::unref();
      }

      if (Variant::needs_deinit[local_88[0]] != '\0') {
         Variant::_clear_internal();
      }

      goto LAB_00112740;
   }

   uVar6 = 4;
}
else{uVar6 = 3;} * in_R9 = uVar6 ;in_R9[2] = 4;LAB_00112740:*(undefined4*)param_1 = 0;*(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_1;}/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<String_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   undefined *local_78;
   long local_70;
   long local_68;
   undefined4 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = *param_2;
   if (iVar2 == param_1) {
      local_80 = 0;
      local_88 = 0;
      local_78 = &_LC17;
      local_70 = 0;
      String::parse_latin1((StrRange*)&local_88);
      local_90 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 4, (CowData<char32_t>*)&local_90, 0, (StrRange*)&local_88, 6, &local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      *(undefined4*)param_3 = local_78._0_4_;
      if (*(long*)( param_3 + 8 ) != local_70) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
         lVar1 = local_70;
         local_70 = 0;
         *(long*)( param_3 + 8 ) = lVar1;
      }

      if (*(long*)( param_3 + 0x10 ) != local_68) {
         StringName::unref();
         lVar1 = local_68;
         local_68 = 0;
         *(long*)( param_3 + 0x10 ) = lVar1;
      }

      *(undefined4*)( param_3 + 0x18 ) = local_60;
      if (*(long*)( param_3 + 0x20 ) != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( param_3 + 0x20 ) = lVar1;
      }

      *(undefined4*)( param_3 + 0x28 ) = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
      iVar2 = *param_2;
   }

   *param_2 = iVar2 + 1;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<String const&>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<String_const&>::_gen_argument_type_info(int param_1) {
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar1;
   long in_FS_OFFSET;
   int local_14;
   long local_10;
   pPVar1 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)pPVar1 = 0;
   *(undefined4*)( pPVar1 + 0x18 ) = 0;
   *(undefined8*)( pPVar1 + 0x20 ) = 0;
   *(undefined4*)( pPVar1 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar1 + 8 ) = (undefined1[16])0x0;
   local_14 = 0;
   call_get_argument_type_info_helper<String_const&>(in_EDX, &local_14, pPVar1);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pPVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<Object*>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<Object*>(int param_1, int *param_2, PropertyInfo *param_3) {
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   undefined8 local_78;
   long local_70;
   char *local_68;
   long local_60;
   long local_58;
   undefined4 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = *param_2;
   if (iVar2 == param_1) {
      local_78 = 0;
      local_68 = "Object";
      local_60 = 6;
      String::parse_latin1((StrRange*)&local_78);
      StringName::StringName((StringName*)&local_70, (String*)&local_78, false);
      local_68 = (char*)CONCAT44(local_68._4_4_, 0x18);
      local_60 = 0;
      StringName::StringName((StringName*)&local_58, (StringName*)&local_70);
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      *(undefined4*)param_3 = local_68._0_4_;
      if (*(long*)( param_3 + 8 ) != local_60) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
         lVar1 = local_60;
         local_60 = 0;
         *(long*)( param_3 + 8 ) = lVar1;
      }

      if (*(long*)( param_3 + 0x10 ) != local_58) {
         StringName::unref();
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( param_3 + 0x10 ) = lVar1;
      }

      *(undefined4*)( param_3 + 0x18 ) = local_50;
      if (*(long*)( param_3 + 0x20 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
         lVar1 = local_48;
         local_48 = 0;
         *(long*)( param_3 + 0x20 ) = lVar1;
      }

      *(undefined4*)( param_3 + 0x28 ) = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
      iVar2 = *param_2;
   }

   *param_2 = iVar2 + 1;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<StringName const&>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<StringName_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   undefined *local_78;
   long local_70;
   long local_68;
   undefined4 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = *param_2;
   if (iVar2 == param_1) {
      local_80 = 0;
      local_88 = 0;
      local_78 = &_LC17;
      local_70 = 0;
      String::parse_latin1((StrRange*)&local_88);
      local_90 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0x15, (CowData<char32_t>*)&local_90, 0, (StrRange*)&local_88, 6, &local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      *(undefined4*)param_3 = local_78._0_4_;
      if (*(long*)( param_3 + 8 ) != local_70) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
         lVar1 = local_70;
         local_70 = 0;
         *(long*)( param_3 + 8 ) = lVar1;
      }

      if (*(long*)( param_3 + 0x10 ) != local_68) {
         StringName::unref();
         lVar1 = local_68;
         local_68 = 0;
         *(long*)( param_3 + 0x10 ) = lVar1;
      }

      *(undefined4*)( param_3 + 0x18 ) = local_60;
      if (*(long*)( param_3 + 0x20 ) != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( param_3 + 0x20 ) = lVar1;
      }

      *(undefined4*)( param_3 + 0x28 ) = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
      iVar2 = *param_2;
   }

   *param_2 = iVar2 + 1;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<Variant const&>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<Variant_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   undefined4 local_78[2];
   long local_70;
   long local_68;
   undefined4 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = *param_2;
   if (iVar2 == param_1) {
      local_80 = 0;
      local_88 = 0;
      local_90 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)local_78, 0, (CowData<char32_t>*)&local_90, 0, (CowData<char32_t>*)&local_88, 0x20006, &local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      *(undefined4*)param_3 = local_78[0];
      if (*(long*)( param_3 + 8 ) != local_70) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
         lVar1 = local_70;
         local_70 = 0;
         *(long*)( param_3 + 8 ) = lVar1;
      }

      if (*(long*)( param_3 + 0x10 ) != local_68) {
         StringName::unref();
         lVar1 = local_68;
         local_68 = 0;
         *(long*)( param_3 + 0x10 ) = lVar1;
      }

      *(undefined4*)( param_3 + 0x18 ) = local_60;
      if (*(long*)( param_3 + 0x20 ) != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( param_3 + 0x20 ) = lVar1;
      }

      *(undefined4*)( param_3 + 0x28 ) = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_78);
      iVar2 = *param_2;
   }

   *param_2 = iVar2 + 1;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<String const&, Object*, StringName const&, Variant
   const&>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<String_const&,Object*,StringName_const&,Variant_const&>::_gen_argument_type_info(int param_1) {
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar1;
   long in_FS_OFFSET;
   int local_24;
   long local_20;
   pPVar1 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)pPVar1 = 0;
   *(undefined4*)( pPVar1 + 0x18 ) = 0;
   *(undefined8*)( pPVar1 + 0x20 ) = 0;
   *(undefined4*)( pPVar1 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar1 + 8 ) = (undefined1[16])0x0;
   local_24 = 0;
   call_get_argument_type_info_helper<String_const&>(in_EDX, &local_24, pPVar1);
   call_get_argument_type_info_helper<Object*>(in_EDX, &local_24, pPVar1);
   call_get_argument_type_info_helper<StringName_const&>(in_EDX, &local_24, pPVar1);
   call_get_argument_type_info_helper<Variant_const&>(in_EDX, &local_24, pPVar1);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pPVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info<Ref<Resource> const&, Object*, StringName const&, Variant
   const&>(int, PropertyInfo&) */void call_get_argument_type_info<Ref<Resource>const&,Object*,StringName_const&,Variant_const&>(int param_1, PropertyInfo *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   int local_94;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   long local_70;
   long local_68;
   undefined4 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_94 = 0;
   if (param_1 == 0) {
      local_80 = 0;
      local_88 = 0;
      local_78 = "Resource";
      local_70 = 8;
      String::parse_latin1((StrRange*)&local_88);
      local_90 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0x18, (CowData<char32_t>*)&local_90, 0x11, (StrRange*)&local_88, 6, &local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      *(undefined4*)param_2 = local_78._0_4_;
      if (*(long*)( param_2 + 8 ) != local_70) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 8 ));
         lVar1 = local_70;
         local_70 = 0;
         *(long*)( param_2 + 8 ) = lVar1;
      }

      if (*(long*)( param_2 + 0x10 ) != local_68) {
         StringName::unref();
         lVar1 = local_68;
         local_68 = 0;
         *(long*)( param_2 + 0x10 ) = lVar1;
      }

      *(undefined4*)( param_2 + 0x18 ) = local_60;
      if (*(long*)( param_2 + 0x20 ) != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 0x20 ));
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( param_2 + 0x20 ) = lVar1;
      }

      *(undefined4*)( param_2 + 0x28 ) = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   }

   local_94 = 1;
   call_get_argument_type_info_helper<Object*>(param_1, &local_94, param_2);
   call_get_argument_type_info_helper<StringName_const&>(param_1, &local_94, param_2);
   call_get_argument_type_info_helper<Variant_const&>(param_1, &local_94, param_2);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<Resource> const&, Object*, StringName const&, Variant
   const&>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<Ref<Resource>const&,Object*,StringName_const&,Variant_const&>::_gen_argument_type_info(int param_1) {
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar1;
   pPVar1 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   *(undefined4*)pPVar1 = 0;
   *(undefined4*)( pPVar1 + 0x18 ) = 0;
   *(undefined8*)( pPVar1 + 0x20 ) = 0;
   *(undefined4*)( pPVar1 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar1 + 8 ) = (undefined1[16])0x0;
   call_get_argument_type_info<Ref<Resource>const&,Object*,StringName_const&,Variant_const&>(in_EDX, pPVar1);
   return pPVar1;
}
/* WARNING: Control flow encountered bad instruction data *//* EditorResourcePreview::QueueItem::~QueueItem() */void EditorResourcePreview::QueueItem::~QueueItem(QueueItem *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */void PropertyInfo::PropertyInfo(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* Image::~Image() */void Image::~Image(Image *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<String const&>::~MethodBindT() */void MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Ref<EditorResourcePreviewGenerator> const&>::~MethodBindT() */void MethodBindT<Ref<EditorResourcePreviewGenerator>const&>::~MethodBindT(MethodBindT<Ref<EditorResourcePreviewGenerator>const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Ref<Resource> const&, Object*, StringName const&, Variant const&>::~MethodBindT() */void MethodBindT<Ref<Resource>const&,Object*,StringName_const&,Variant_const&>::~MethodBindT(MethodBindT<Ref<Resource>const&,Object*,StringName_const&,Variant_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<String const&, Object*, StringName const&, Variant const&>::~MethodBindT() */void MethodBindT<String_const&,Object*,StringName_const&,Variant_const&>::~MethodBindT(MethodBindT<String_const&,Object*,StringName_const&,Variant_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* EditorResourcePreviewGenerator::~EditorResourcePreviewGenerator() */void EditorResourcePreviewGenerator::~EditorResourcePreviewGenerator(EditorResourcePreviewGenerator *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<RenderingServer, void, RID,
   RenderingServer::ViewportUpdateMode>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RenderingServer,void,RID,RenderingServer::ViewportUpdateMode>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RenderingServer,void,RID,RenderingServer::ViewportUpdateMode> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<EditorResourcePreviewGenerator::DrawRequester,
   Variant>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorResourcePreviewGenerator::DrawRequester,Variant>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorResourcePreviewGenerator::DrawRequester,Variant> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodInfo::~MethodInfo() */void MethodInfo::~MethodInfo(MethodInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

