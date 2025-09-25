/* OpenXRAPI::_set_render_session_running(bool) */void OpenXRAPI::_set_render_session_running(bool param_1) {
   char cVar1;
   long *plVar2;
   char *pcVar3;
   plVar2 = (long*)RenderingServer::get_singleton();
   pcVar3 = "Parameter \"rendering_server\" is null.";
   if (plVar2 != (long*)0x0) {
      cVar1 = ( **(code**)( *plVar2 + 0x12d8 ) )(plVar2);
      if (cVar1 != '\0') {
         if (singleton != 0) {
            *(bool*)( singleton + 0x4a8 ) = param_1;
            return;
         }

         _err_print_error("_set_render_session_running", "modules/openxr/openxr_api.cpp", 0x80a, "Parameter \"openxr_api\" is null.", 0, 0);
         return;
      }

      pcVar3 = "Condition \"!rendering_server->is_on_render_thread()\" is true.";
   }

   _err_print_error("_set_render_session_running", "modules/openxr/openxr_api.cpp", 0x807, pcVar3, 0, 0);
   return;
}
/* OpenXRAPI::_set_render_display_info(long, bool) */void OpenXRAPI::_set_render_display_info(long param_1, bool param_2) {
   long lVar1;
   char cVar2;
   long *plVar3;
   char *pcVar4;
   undefined8 uVar5;
   plVar3 = (long*)RenderingServer::get_singleton();
   if (plVar3 == (long*)0x0) {
      uVar5 = 0x810;
      pcVar4 = "Parameter \"rendering_server\" is null.";
   }
 else {
      cVar2 = ( **(code**)( *plVar3 + 0x12d8 ) )(plVar3);
      lVar1 = singleton;
      if (cVar2 == '\0') {
         uVar5 = 0x810;
         pcVar4 = "Condition \"!rendering_server->is_on_render_thread()\" is true.";
      }
 else {
         if (singleton != 0) {
            *(long*)( singleton + 0x4b0 ) = param_1;
            *(bool*)( lVar1 + 0x4a9 ) = param_2;
            return;
         }

         uVar5 = 0x813;
         pcVar4 = "Parameter \"openxr_api\" is null.";
      }

   }

   _err_print_error("_set_render_display_info", "modules/openxr/openxr_api.cpp", uVar5, pcVar4, 0, 0);
   return;
}
/* OpenXRAPI::_set_render_play_space(unsigned long) */void OpenXRAPI::_set_render_play_space(ulong param_1) {
   char cVar1;
   long *plVar2;
   char *pcVar3;
   plVar2 = (long*)RenderingServer::get_singleton();
   pcVar3 = "Parameter \"rendering_server\" is null.";
   if (plVar2 != (long*)0x0) {
      cVar1 = ( **(code**)( *plVar2 + 0x12d8 ) )(plVar2);
      if (cVar1 != '\0') {
         if (singleton != 0) {
            *(ulong*)( singleton + 0x4b8 ) = param_1;
            return;
         }

         _err_print_error("_set_render_play_space", "modules/openxr/openxr_api.cpp", 0x81d, "Parameter \"openxr_api\" is null.", 0, 0);
         return;
      }

      pcVar3 = "Condition \"!rendering_server->is_on_render_thread()\" is true.";
   }

   _err_print_error("_set_render_play_space", "modules/openxr/openxr_api.cpp", 0x81a, pcVar3, 0, 0);
   return;
}
/* OpenXRAPI::_set_render_state_multiplier(double) */void OpenXRAPI::_set_render_state_multiplier(double param_1) {
   char cVar1;
   long *plVar2;
   char *pcVar3;
   plVar2 = (long*)RenderingServer::get_singleton();
   pcVar3 = "Parameter \"rendering_server\" is null.";
   if (plVar2 != (long*)0x0) {
      cVar1 = ( **(code**)( *plVar2 + 0x12d8 ) )(plVar2);
      if (cVar1 != '\0') {
         if (singleton != 0) {
            *(double*)( singleton + 0x4c0 ) = param_1;
            return;
         }

         _err_print_error("_set_render_state_multiplier", "modules/openxr/openxr_api.cpp", 0x826, "Parameter \"openxr_api\" is null.", 0, 0);
         return;
      }

      pcVar3 = "Condition \"!rendering_server->is_on_render_thread()\" is true.";
   }

   _err_print_error("_set_render_state_multiplier", "modules/openxr/openxr_api.cpp", 0x823, pcVar3, 0, 0);
   return;
}
/* OpenXRAPI::_set_render_state_render_region(Rect2i const&) */void OpenXRAPI::_set_render_state_render_region(Rect2i *param_1) {
   undefined8 uVar1;
   long lVar2;
   char cVar3;
   long *plVar4;
   char *pcVar5;
   plVar4 = (long*)RenderingServer::get_singleton();
   pcVar5 = "Parameter \"rendering_server\" is null.";
   if (plVar4 != (long*)0x0) {
      cVar3 = ( **(code**)( *plVar4 + 0x12d8 ) )(plVar4);
      lVar2 = singleton;
      if (cVar3 != '\0') {
         if (singleton != 0) {
            uVar1 = *(undefined8*)( param_1 + 8 );
            *(undefined8*)( singleton + 0x4d0 ) = *(undefined8*)param_1;
            *(undefined8*)( lVar2 + 0x4d8 ) = uVar1;
            return;
         }

         _err_print_error("_set_render_state_render_region", "modules/openxr/openxr_api.cpp", 0x82e, "Parameter \"openxr_api\" is null.", 0, 0);
         return;
      }

      pcVar5 = "Condition \"!rendering_server->is_on_render_thread()\" is true.";
   }

   _err_print_error("_set_render_state_render_region", "modules/openxr/openxr_api.cpp", 0x82b, pcVar5, 0, 0);
   return;
}
/* LocalVector<XrViewConfigurationView, unsigned int, false, false>::resize(unsigned int) [clone
   .part.0] */void LocalVector<XrViewConfigurationView,unsigned_int,false,false>::resize(uint param_1) {
   code *pcVar1;
   _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<XrActiveActionSet>::_copy_on_write() [clone .isra.0] */void CowData<XrActiveActionSet>::_copy_on_write(CowData<XrActiveActionSet> *this) {
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
   __n = lVar2 * 0x10;
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
/* CowData<XrBindingModificationBaseHeaderKHR const*>::_copy_on_write() [clone .isra.0] */void CowData<XrBindingModificationBaseHeaderKHR_const*>::_copy_on_write(CowData<XrBindingModificationBaseHeaderKHR_const*> *this) {
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
/* CowData<XrActionSuggestedBinding>::_copy_on_write() [clone .isra.0] */void CowData<XrActionSuggestedBinding>::_copy_on_write(CowData<XrActionSuggestedBinding> *this) {
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
   __n = lVar2 * 0x10;
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
/* CowData<unsigned long>::_copy_on_write() [clone .isra.0] */void CowData<unsigned_long>::_copy_on_write(CowData<unsigned_long> *this) {
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
/* CowData<OpenXRCompositionLayerProvider*>::_copy_on_write() [clone .isra.0] */void CowData<OpenXRCompositionLayerProvider*>::_copy_on_write(CowData<OpenXRCompositionLayerProvider*> *this) {
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
/* CowData<OpenXRExtensionWrapper*>::_copy_on_write() [clone .isra.0] */void CowData<OpenXRExtensionWrapper*>::_copy_on_write(CowData<OpenXRExtensionWrapper*> *this) {
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
/* CowData<OpenXRAPI::OpenXRSwapChainInfo>::_copy_on_write() [clone .isra.0] */void CowData<OpenXRAPI::OpenXRSwapChainInfo>::_copy_on_write(CowData<OpenXRAPI::OpenXRSwapChainInfo> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   size_t __n;
   ulong uVar5;
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
   __n = lVar2 * 0x18;
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
/* CowData<OpenXRAPI::ActionTracker>::_copy_on_write() [clone .isra.0] */void CowData<OpenXRAPI::ActionTracker>::_copy_on_write(CowData<OpenXRAPI::ActionTracker> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   size_t __n;
   ulong uVar5;
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
   __n = lVar2 * 0x18;
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
/* CowData<XrEnvironmentBlendMode>::_copy_on_write() [clone .isra.0] */void CowData<XrEnvironmentBlendMode>::_copy_on_write(CowData<XrEnvironmentBlendMode> *this) {
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
/* CowData<unsigned char>::_ref(CowData<unsigned char> const&) [clone .part.0] */void CowData<unsigned_char>::_ref(CowData<unsigned_char> *this, CowData *param_1) {
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
/* CowData<char const*>::_copy_on_write() [clone .isra.0] */void CowData<char_const*>::_copy_on_write(CowData<char_const*> *this) {
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
/* CowData<char>::_ref(CowData<char> const&) [clone .part.0] */void CowData<char>::_ref(CowData<char> *this, CowData *param_1) {
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
/* CowData<OpenXRAPI::create_instance()::RequestExtension>::_unref() */void CowData<OpenXRAPI::create_instance()::RequestExtension>::_unref(CowData<OpenXRAPI::create_instance()::RequestExtension> *this) {
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
               plVar6 = plVar6 + 2;
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
/* CowData<OpenXRAPI::OrderedCompositionLayer>::_copy_on_write() [clone .isra.0] */void CowData<OpenXRAPI::OrderedCompositionLayer>::_copy_on_write(CowData<OpenXRAPI::OrderedCompositionLayer> *this) {
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
   __n = lVar2 * 0x10;
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
/* CowData<XrCompositionLayerBaseHeader const*>::_copy_on_write() [clone .isra.0] */void CowData<XrCompositionLayerBaseHeader_const*>::_copy_on_write(CowData<XrCompositionLayerBaseHeader_const*> *this) {
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
/* CowData<OpenXRAPI::create_instance()::RequestExtension>::_copy_on_write() [clone .isra.0] */void CowData<OpenXRAPI::create_instance()::RequestExtension>::_copy_on_write(CowData<OpenXRAPI::create_instance()::RequestExtension> *this) {
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   CowData *pCVar4;
   ulong uVar5;
   CowData<char32_t> *this_00;
   long lVar6;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   if (lVar1 * 0x10 != 0) {
      uVar5 = lVar1 * 0x10 - 1;
      uVar5 = uVar5 | uVar5 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar3 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar3 != (undefined8*)0x0) {
      lVar6 = 0;
      *puVar3 = 1;
      puVar3[1] = lVar1;
      this_00 = (CowData<char32_t>*)( puVar3 + 2 );
      if (lVar1 != 0) {
         do {
            pCVar4 = (CowData*)( lVar6 * 0x10 + *(long*)this );
            *(undefined8*)this_00 = 0;
            if (*(long*)pCVar4 != 0) {
               CowData<char32_t>::_ref(this_00, pCVar4);
            }

            lVar6 = lVar6 + 1;
            *(undefined8*)( this_00 + 8 ) = *(undefined8*)( pCVar4 + 8 );
            this_00 = this_00 + 0x10;
         }
 while ( lVar1 != lVar6 );
      }

      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar3 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* CowData<long>::_copy_on_write() [clone .isra.0] */void CowData<long>::_copy_on_write(CowData<long> *this) {
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
/* OpenXRAPI::get_instance_proc_addr(char const*, void (**)()) [clone .part.0] */void OpenXRAPI::get_instance_proc_addr(char *param_1, _func_void *param_2) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   size_t sVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   long local_58;
   long local_50;
   char *local_48;
   size_t local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_40 = 0x1e;
   local_48 = " not found in OpenXR instance.";
   String::parse_latin1((StrRange*)&local_50);
   sVar4 = 0;
   local_58 = 0;
   if (param_1 != (char*)0x0) {
      sVar4 = strlen(param_1);
   }

   local_48 = param_1;
   local_40 = sVar4;
   String::parse_latin1((StrRange*)&local_58);
   local_48 = "Symbol ";
   local_60 = 0;
   local_40 = 7;
   String::parse_latin1((StrRange*)&local_60);
   String::operator +((String*)&local_48, (String*)&local_60);
   String::operator +((String*)&local_68, (String*)&local_48);
   pcVar3 = local_48;
   if (local_48 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = (char*)0x0;
         Memory::free_static(pcVar3 + -0x10, false);
      }

   }

   lVar2 = local_60;
   if (local_60 != 0) {
      LOCK();
      plVar1 = (long*)( local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_58;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

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

   String::utf8();
   uVar5 = CharString::get_data();
   _err_print_error("get_instance_proc_addr", "modules/openxr/openxr_api.cpp", 0x635, "Method/function failed. Returning: result", uVar5, 0);
   pcVar3 = local_48;
   if (local_48 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = (char*)0x0;
         Memory::free_static(pcVar3 + -0x10, false);
      }

   }

   lVar2 = local_68;
   if (local_68 != 0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::_allocate_view_buffers(unsigned int, bool) */void OpenXRAPI::_allocate_view_buffers(uint param_1, bool param_2) {
   uint *puVar1;
   code *pcVar2;
   long lVar3;
   char cVar4;
   uint uVar5;
   long *plVar6;
   long lVar7;
   char *pcVar8;
   undefined8 uVar9;
   void *pvVar10;
   plVar6 = (long*)RenderingServer::get_singleton();
   if (plVar6 == (long*)0x0) {
      uVar9 = 0x7f5;
      pcVar8 = "Parameter \"rendering_server\" is null.";
      LAB_00101a32:_err_print_error("_allocate_view_buffers", "modules/openxr/openxr_api.cpp", uVar9, pcVar8, 0, 0);
      return;
   }

   cVar4 = ( **(code**)( *plVar6 + 0x12d8 ) )(plVar6);
   lVar3 = singleton;
   if (cVar4 == '\0') {
      uVar9 = 0x7f5;
      pcVar8 = "Condition \"!rendering_server->is_on_render_thread()\" is true.";
      goto LAB_00101a32;
   }

   if (singleton == 0) {
      uVar9 = 0x7f8;
      pcVar8 = "Parameter \"openxr_api\" is null.";
      goto LAB_00101a32;
   }

   puVar1 = (uint*)( singleton + 0x4e0 );
   *(bool*)( singleton + 0x510 ) = param_2;
   if (param_1 < *puVar1) {
      LAB_00101860:*(uint*)( lVar3 + 0x4e0 ) = param_1;
   }
 else if (*puVar1 < param_1) {
      if (*(uint*)( lVar3 + 0x4e4 ) < param_1) {
         uVar5 = param_1 - 1 | param_1 - 1 >> 1;
         uVar5 = uVar5 | uVar5 >> 2;
         uVar5 = uVar5 | uVar5 >> 4;
         uVar5 = uVar5 | uVar5 >> 8;
         uVar5 = ( uVar5 | uVar5 >> 0x10 ) + 1;
         *(uint*)( lVar3 + 0x4e4 ) = uVar5;
         lVar7 = Memory::realloc_static(*(void**)( lVar3 + 0x4e8 ), (ulong)uVar5 << 6, false);
         *(long*)( lVar3 + 0x4e8 ) = lVar7;
         if (lVar7 == 0) goto LAB_0010194c;
      }

      goto LAB_00101860;
   }

   if (*(uint*)( lVar3 + 0x4f0 ) <= param_1) {
      if (param_1 <= *(uint*)( lVar3 + 0x4f0 )) goto LAB_00101876;
      if (*(uint*)( lVar3 + 0x4f4 ) < param_1) {
         uVar5 = param_1 - 1 | param_1 - 1 >> 1;
         uVar5 = uVar5 | uVar5 >> 2;
         uVar5 = uVar5 | uVar5 >> 4;
         uVar5 = uVar5 | uVar5 >> 8;
         uVar5 = ( uVar5 | uVar5 >> 0x10 ) + 1;
         *(uint*)( lVar3 + 0x4f4 ) = uVar5;
         lVar7 = Memory::realloc_static(*(void**)( lVar3 + 0x4f8 ), (ulong)uVar5 * 0x60, false);
         *(long*)( lVar3 + 0x4f8 ) = lVar7;
         if (lVar7 == 0) {
            LAB_0010194c:_err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

      }

   }

   *(uint*)( lVar3 + 0x4f0 ) = param_1;
   LAB_00101876:if (param_2) {
      OpenXRCompositionLayerDepthExtension::get_singleton();
      cVar4 = OpenXRCompositionLayerDepthExtension::is_available();
      if (cVar4 != '\0') {
         if (*(uint*)( lVar3 + 0x500 ) <= param_1) {
            if (param_1 <= *(uint*)( lVar3 + 0x500 )) {
               return;
            }

            if (*(uint*)( lVar3 + 0x504 ) < param_1) {
               pvVar10 = *(void**)( lVar3 + 0x508 );
               uVar5 = param_1 - 1 >> 1 | param_1 - 1;
               uVar5 = uVar5 | uVar5 >> 2;
               uVar5 = uVar5 | uVar5 >> 4;
               uVar5 = uVar5 | uVar5 >> 8;
               uVar5 = ( uVar5 | uVar5 >> 0x10 ) + 1;
               *(uint*)( lVar3 + 0x504 ) = uVar5;
               lVar7 = Memory::realloc_static(pvVar10, (ulong)uVar5 << 6, false);
               *(long*)( lVar3 + 0x508 ) = lVar7;
               if (lVar7 == 0) {
                  LocalVector<XrViewConfigurationView,unsigned_int,false,false>::resize((uint)pvVar10);
               }

            }

         }

         *(uint*)( lVar3 + 0x500 ) = param_1;
      }

   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<XrEnvironmentBlendMode>::resize<false>(long) [clone .isra.0] */void CowData<XrEnvironmentBlendMode>::resize<false>(CowData<XrEnvironmentBlendMode> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   char *pcVar7;
   undefined8 uVar8;
   CowData<XrEnvironmentBlendMode> *pCVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar3 = *(long*)this;
   pCVar9 = this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      lVar10 = 0;
      lVar3 = 0;
   }
 else {
      lVar10 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar10) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }

      _copy_on_write(this);
      lVar3 = lVar10 * 4;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 4 != 0) {
      uVar4 = param_1 * 4 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = uVar4 | uVar4 >> 0x20;
      if (uVar4 != 0xffffffffffffffff) {
         if (param_1 <= lVar10) {
            puVar5 = *(undefined8**)this;
            if (uVar4 + 1 == lVar3) {
               if (puVar5 == (undefined8*)0x0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

            }
 else {
               puVar6 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar4 + 0x11, false);
               if (puVar6 == (undefined8*)0x0) {
                  LAB_00101cf0:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
                  return;
               }

               puVar5 = puVar6 + 2;
               *puVar6 = 1;
               *(undefined8**)this = puVar5;
            }

            puVar5[-1] = param_1;
            return;
         }

         if (uVar4 + 1 == lVar3) {
            puVar5 = *(undefined8**)this;
            if (puVar5 == (undefined8*)0x0) {
               resize<false>((long)pCVar9);
               return;
            }

         }
 else {
            if (lVar10 == 0) {
               puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
               if (puVar5 == (undefined8*)0x0) {
                  uVar8 = 0x171;
                  pcVar7 = "Parameter \"mem_new\" is null.";
                  goto LAB_00101cd2;
               }

               *puVar5 = 1;
               puVar5[1] = 0;
            }
 else {
               puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar4 + 0x11, false);
               if (puVar5 == (undefined8*)0x0) goto LAB_00101cf0;
               *puVar5 = 1;
            }

            puVar5 = puVar5 + 2;
            *(undefined8**)this = puVar5;
         }

         puVar5[-1] = param_1;
         return;
      }

   }

   uVar8 = 0x16a;
   pcVar7 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_00101cd2:_err_print_error("resize", "./core/templates/cowdata.h", uVar8, pcVar7, 0, 0);
   return;
}
/* OpenXRAPI::OpenXRSwapChainInfo::get_image() */undefined8 OpenXRAPI::OpenXRSwapChainInfo::get_image(OpenXRSwapChainInfo *this) {
   long *plVar1;
   undefined8 uVar2;
   if (( ( this[0x14] != (OpenXRSwapChainInfo)0x0 ) && ( singleton != 0 ) ) && ( plVar1 = *(long**)( singleton + 0x148 ) ),plVar1 != (long*)0x0) {
      /* WARNING: Could not recover jumptable at 0x00101d66. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar2 = ( **(code**)( *plVar1 + 0x148 ) )(plVar1, *(undefined8*)( this + 8 ), *(undefined4*)( this + 0x10 ), *(code**)( *plVar1 + 0x148 ));
      return uVar2;
   }

   return 0;
}
/* OpenXRAPI::openxr_is_enabled(bool) */bool OpenXRAPI::openxr_is_enabled(bool param_1) {
   bool bVar1;
   int iVar2;
   long lVar3;
   long in_FS_OFFSET;
   long local_40;
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = XRServer::get_xr_mode();
   if (iVar2 == 0) {
      lVar3 = Engine::get_singleton();
      if (( *(char*)( lVar3 + 0xc0 ) == '\0' ) || ( bVar1 = !param_1 )) {
         ProjectSettings::get_singleton();
         StringName::StringName((StringName*)&local_40, "xr/openxr/enabled", false);
         ProjectSettings::get_setting_with_override((StringName*)local_38);
         bVar1 = Variant::operator_cast_to_bool((Variant*)local_38);
         if (Variant::needs_deinit[local_38[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (( StringName::configured != '\0' ) && ( local_40 != 0 )) {
            StringName::unref();
         }

      }

   }
 else {
      iVar2 = XRServer::get_xr_mode();
      bVar1 = iVar2 == 2;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::get_default_action_map_resource_name() */OpenXRAPI * __thiscall OpenXRAPI::get_default_action_map_resource_name(OpenXRAPI *this){
   long in_FS_OFFSET;
   long local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_50, "xr/openxr/default_action_map", false);
   ProjectSettings::get_setting_with_override((StringName*)local_48);
   Variant::operator_cast_to_String((Variant*)this);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::get_error_string(XrResult) const */StrRange *OpenXRAPI::get_error_string(StrRange *param_1, long param_2, int param_3) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   Array local_d0[8];
   long local_c8;
   long local_c0;
   char *local_b8;
   size_t local_b0;
   int local_a8[8];
   char local_88[72];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 < 0) {
      if (*(long*)( param_2 + 0xd0 ) == 0) {
         Array::Array(local_d0);
         Variant::Variant((Variant*)local_a8, param_3);
         Array::push_back((Variant*)local_d0);
         if (Variant::needs_deinit[local_a8[0]] != '\0') {
            Variant::_clear_internal();
         }

         local_c8 = 0;
         local_b8 = "Error code {0}";
         local_b0 = 0xe;
         String::parse_latin1((StrRange*)&local_c8);
         local_b8 = "{_}";
         local_c0 = 0;
         local_b0 = 3;
         String::parse_latin1((StrRange*)&local_c0);
         Variant::Variant((Variant*)local_a8, local_d0);
         String::format((Variant*)param_1, (String*)&local_c8);
         if (Variant::needs_deinit[local_a8[0]] != '\0') {
            Variant::_clear_internal();
         }

         lVar2 = local_c0;
         if (local_c0 != 0) {
            LOCK();
            plVar1 = (long*)( local_c0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_c0 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         lVar2 = local_c8;
         if (local_c8 != 0) {
            LOCK();
            plVar1 = (long*)( local_c8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_c8 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         Array::~Array(local_d0);
      }
 else {
         if (*(code**)( param_2 + 0x318 ) != (code*)0x0) {
            ( **(code**)( param_2 + 0x318 ) )(*(long*)( param_2 + 0xd0 ), param_3, local_88);
         }

         *(undefined8*)param_1 = 0;
         local_b0 = strlen(local_88);
         local_b8 = local_88;
         String::parse_latin1(param_1);
      }

   }
 else {
      *(undefined8*)param_1 = 0;
      local_b8 = "Succeeded";
      local_b0 = 9;
      String::parse_latin1(param_1);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::get_swapchain_format_name(long) const */long OpenXRAPI::get_swapchain_format_name(long param_1) {
   long *plVar1;
   long lVar2;
   int in_EDX;
   long in_RSI;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   plVar1 = *(long**)( in_RSI + 0x148 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar1 == (long*)0x0) {
      String::num_int64((long)&local_40, in_EDX, true);
      local_38 = "Swapchain format ";
      local_48 = 0;
      local_30 = 0x11;
      String::parse_latin1((StrRange*)&local_48);
      String::operator +((String*)param_1, (String*)&local_48);
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

      lVar2 = local_40;
      if (local_40 != 0) {
         LOCK();
         plVar1 = (long*)( local_40 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_40 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

   }
 else {
      ( **(code**)( *plVar1 + 0x128 ) )(param_1, plVar1);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::set_object_name(XrObjectType, unsigned long, String const&) */void OpenXRAPI::set_object_name(undefined8 param_1, undefined4 param_2, undefined8 param_3) {
   long *plVar1;
   long lVar2;
   char cVar3;
   long lVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   undefined8 local_38;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar4 = OpenXRDebugUtilsExtension::get_singleton();
   if (lVar4 != 0) {
      cVar3 = OpenXRDebugUtilsExtension::get_active();
      if (cVar3 != '\0') {
         String::utf8();
         uVar5 = CharString::get_data();
         OpenXRDebugUtilsExtension::set_object_name(lVar4, param_2, param_3, uVar5);
         if (local_38 != 0) {
            LOCK();
            plVar1 = (long*)( local_38 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_38 + -0x10 ), false);
            }

         }

      }

   }

   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::begin_debug_label_region(String const&) */void OpenXRAPI::begin_debug_label_region(String *param_1) {
   long *plVar1;
   long lVar2;
   char cVar3;
   char *pcVar4;
   long in_FS_OFFSET;
   undefined8 local_28;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar4 = (char*)OpenXRDebugUtilsExtension::get_singleton();
   if (pcVar4 != (char*)0x0) {
      cVar3 = OpenXRDebugUtilsExtension::get_active();
      if (cVar3 != '\0') {
         String::utf8();
         CharString::get_data();
         OpenXRDebugUtilsExtension::begin_debug_label_region(pcVar4);
         if (local_28 != 0) {
            LOCK();
            plVar1 = (long*)( local_28 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_28 + -0x10 ), false);
            }

         }

      }

   }

   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::end_debug_label_region() */void OpenXRAPI::end_debug_label_region(void) {
   long lVar1;
   char cVar2;
   lVar1 = OpenXRDebugUtilsExtension::get_singleton();
   if (lVar1 != 0) {
      cVar2 = OpenXRDebugUtilsExtension::get_active();
      if (cVar2 != '\0') {
         OpenXRDebugUtilsExtension::end_debug_label_region();
         return;
      }

   }

   return;
}
/* OpenXRAPI::insert_debug_label(String const&) */void OpenXRAPI::insert_debug_label(String *param_1) {
   long *plVar1;
   long lVar2;
   char cVar3;
   char *pcVar4;
   long in_FS_OFFSET;
   undefined8 local_28;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar4 = (char*)OpenXRDebugUtilsExtension::get_singleton();
   if (pcVar4 != (char*)0x0) {
      cVar3 = OpenXRDebugUtilsExtension::get_active();
      if (cVar3 != '\0') {
         String::utf8();
         CharString::get_data();
         OpenXRDebugUtilsExtension::insert_debug_label(pcVar4);
         if (local_28 != 0) {
            LOCK();
            plVar1 = (long*)( local_28 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_28 + -0x10 ), false);
            }

         }

      }

   }

   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::is_extension_supported(String const&) const */undefined8 OpenXRAPI::is_extension_supported(OpenXRAPI *this, String *param_1) {
   long lVar1;
   undefined8 uVar2;
   long lVar3;
   lVar3 = *(long*)( this + 0x20 );
   lVar1 = lVar3 + ( ulong ) * (uint*)( this + 0x18 ) * 0x98;
   while (true) {
      if (lVar1 == lVar3) {
         return 0;
      }

      uVar2 = operator == ( (char*)( lVar3 + 0x10 ),param_1 );
      if ((char)uVar2 != '\0') break;
      lVar3 = lVar3 + 0x98;
   }
;
   return uVar2;
}
/* OpenXRAPI::is_extension_enabled(String const&) const */undefined8 OpenXRAPI::is_extension_enabled(String *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   int iVar6;
   long lVar7;
   undefined8 uVar8;
   long in_FS_OFFSET;
   char *local_38;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   String::ascii(true);
   lVar4 = *(long*)( param_1 + 0x30 );
   if (lVar4 == 0) {
      LAB_001025f0:uVar8 = 0;
      if (local_38 == (char*)0x0) goto LAB_001025ce;
   }
 else {
      lVar5 = *(long*)( lVar4 + -8 );
      lVar7 = 0;
      do {
         if (lVar5 <= lVar7) goto LAB_001025f0;
         lVar2 = lVar7 * 8;
         lVar7 = lVar7 + 1;
         iVar6 = strcmp(*(char**)( lVar4 + lVar2 ), local_38);
      }
 while ( iVar6 != 0 );
      uVar8 = 1;
   }

   LOCK();
   plVar1 = (long*)( local_38 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      Memory::free_static(local_38 + -0x10, false);
   }

   LAB_001025ce:if (lVar3 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar8;
}
/* OpenXRAPI::copy_string_to_char_buffer(String, char*, int) */void OpenXRAPI::copy_string_to_char_buffer(undefined8 param_1, undefined8 param_2, void *param_3, int param_4) {
   long *plVar1;
   long lVar2;
   int iVar3;
   void *pvVar4;
   long in_FS_OFFSET;
   long local_38;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   String::utf8();
   if (local_38 == 0) {
      iVar3 = 0;
   }
 else {
      iVar3 = (int)*(undefined8*)( local_38 + -8 );
      iVar3 = iVar3 + -1 + ( uint )(iVar3 == 0);
   }

   if (iVar3 < param_4 + -1) {
      pvVar4 = (void*)CharString::get_data();
      memcpy(param_3, pvVar4, (long)iVar3);
      *(undefined1*)( (long)param_3 + (long)iVar3 ) = 0;
   }
 else {
      pvVar4 = (void*)CharString::get_data();
      memcpy(param_3, pvVar4, (long)( param_4 + -1 ));
      *(undefined1*)( (long)param_3 + (long)param_4 + -1 ) = 0;
   }

   if (local_38 != 0) {
      LOCK();
      plVar1 = (long*)( local_38 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_38 + -0x10 ), false);
      }

   }

   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::is_view_configuration_supported(XrViewConfigurationType) const */undefined8 OpenXRAPI::is_view_configuration_supported(OpenXRAPI *this, int param_2) {
   int *piVar1;
   int *piVar2;
   piVar2 = *(int**)( this + 0x60 );
   if (*(uint*)( this + 0x58 ) != 0) {
      piVar1 = piVar2 + *(uint*)( this + 0x58 );
      do {
         if (*piVar2 == param_2) {
            return 1;
         }

         piVar2 = piVar2 + 1;
      }
 while ( piVar1 != piVar2 );
   }

   return 0;
}
/* OpenXRAPI::is_reference_space_supported(XrReferenceSpaceType) */undefined8 OpenXRAPI::is_reference_space_supported(OpenXRAPI *this, int param_2) {
   int *piVar1;
   int *piVar2;
   piVar2 = *(int**)( this + 0x70 );
   if (*(uint*)( this + 0x68 ) != 0) {
      piVar1 = piVar2 + *(uint*)( this + 0x68 );
      do {
         if (*piVar2 == param_2) {
            return 1;
         }

         piVar2 = piVar2 + 1;
      }
 while ( piVar1 != piVar2 );
   }

   return 0;
}
/* OpenXRAPI::is_swapchain_format_supported(long) */undefined8 OpenXRAPI::is_swapchain_format_supported(OpenXRAPI *this, long param_1) {
   long lVar1;
   long lVar2;
   lVar1 = *(long*)( this + 0x80 );
   if (( lVar1 != 0 ) && ( 0 < *(long*)( lVar1 + -8 ) )) {
      lVar2 = 0;
      do {
         if (*(long*)( lVar1 + lVar2 * 8 ) == param_1) {
            return 1;
         }

         lVar2 = lVar2 + 1;
      }
 while ( *(long*)( lVar1 + -8 ) != lVar2 );
   }

   return 0;
}
/* OpenXRAPI::on_state_idle() */undefined8 OpenXRAPI::on_state_idle(void) {
   long *plVar1;
   long lVar2;
   char cVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   long in_FS_OFFSET;
   long local_40;
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar3 = is_print_verbose_enabled();
   if (cVar3 != '\0') {
      Variant::Variant((Variant*)local_38, "On state idle");
      stringify_variants((Variant*)&local_40);
      __print_line((String*)&local_40);
      lVar2 = local_40;
      if (local_40 != 0) {
         LOCK();
         plVar1 = (long*)( local_40 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_40 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (Variant::needs_deinit[local_38[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
   puVar4 = (undefined8*)registered_extension_wrappers._8_8_;
   CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
   puVar5 = (undefined8*)registered_extension_wrappers._8_8_;
   if (registered_extension_wrappers._8_8_ != 0) {
      puVar5 = (undefined8*)( registered_extension_wrappers._8_8_ + *(long*)( registered_extension_wrappers._8_8_ + -8 ) * 8 );
   }

   for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      ( **(code**)( *(long*)*puVar4 + 0x98 ) )();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return 1;
}
/* OpenXRAPI::on_state_visible() */undefined8 OpenXRAPI::on_state_visible(OpenXRAPI *this) {
   long *plVar1;
   long lVar2;
   char cVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   long in_FS_OFFSET;
   long local_40;
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar3 = is_print_verbose_enabled();
   if (cVar3 != '\0') {
      Variant::Variant((Variant*)local_38, "On state visible");
      stringify_variants((Variant*)&local_40);
      __print_line((String*)&local_40);
      lVar2 = local_40;
      if (local_40 != 0) {
         LOCK();
         plVar1 = (long*)( local_40 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_40 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (Variant::needs_deinit[local_38[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
   puVar4 = (undefined8*)registered_extension_wrappers._8_8_;
   CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
   puVar5 = (undefined8*)registered_extension_wrappers._8_8_;
   if (registered_extension_wrappers._8_8_ != 0) {
      puVar5 = (undefined8*)( registered_extension_wrappers._8_8_ + *(long*)( registered_extension_wrappers._8_8_ + -8 ) * 8 );
   }

   for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      ( **(code**)( *(long*)*puVar4 + 0xb0 ) )();
   }

   if (*(long*)this != 0) {
      OpenXRInterface::on_state_visible();
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::on_state_focused() */undefined8 OpenXRAPI::on_state_focused(OpenXRAPI *this) {
   long *plVar1;
   long lVar2;
   char cVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   long in_FS_OFFSET;
   long local_40;
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar3 = is_print_verbose_enabled();
   if (cVar3 != '\0') {
      Variant::Variant((Variant*)local_38, "On state focused");
      stringify_variants((Variant*)&local_40);
      __print_line((String*)&local_40);
      lVar2 = local_40;
      if (local_40 != 0) {
         LOCK();
         plVar1 = (long*)( local_40 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_40 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (Variant::needs_deinit[local_38[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
   puVar4 = (undefined8*)registered_extension_wrappers._8_8_;
   CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
   puVar5 = (undefined8*)registered_extension_wrappers._8_8_;
   if (registered_extension_wrappers._8_8_ != 0) {
      puVar5 = (undefined8*)( registered_extension_wrappers._8_8_ + *(long*)( registered_extension_wrappers._8_8_ + -8 ) * 8 );
   }

   for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      ( **(code**)( *(long*)*puVar4 + 0xb8 ) )();
   }

   if (*(long*)this != 0) {
      OpenXRInterface::on_state_focused();
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::on_state_loss_pending() */undefined8 OpenXRAPI::on_state_loss_pending(OpenXRAPI *this) {
   long *plVar1;
   long lVar2;
   char cVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   long in_FS_OFFSET;
   long local_40;
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar3 = is_print_verbose_enabled();
   if (cVar3 != '\0') {
      Variant::Variant((Variant*)local_38, "On state loss pending");
      stringify_variants((Variant*)&local_40);
      __print_line((String*)&local_40);
      lVar2 = local_40;
      if (local_40 != 0) {
         LOCK();
         plVar1 = (long*)( local_40 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_40 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (Variant::needs_deinit[local_38[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (*(long*)this != 0) {
      OpenXRInterface::on_state_loss_pending();
   }

   CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
   puVar4 = (undefined8*)registered_extension_wrappers._8_8_;
   CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
   puVar5 = (undefined8*)registered_extension_wrappers._8_8_;
   if (registered_extension_wrappers._8_8_ != 0) {
      puVar5 = (undefined8*)( registered_extension_wrappers._8_8_ + *(long*)( registered_extension_wrappers._8_8_ + -8 ) * 8 );
   }

   for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      ( **(code**)( *(long*)*puVar4 + 200 ) )();
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::on_state_exiting() */undefined8 OpenXRAPI::on_state_exiting(OpenXRAPI *this) {
   long *plVar1;
   long lVar2;
   char cVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   long in_FS_OFFSET;
   long local_40;
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar3 = is_print_verbose_enabled();
   if (cVar3 != '\0') {
      Variant::Variant((Variant*)local_38, "On state existing");
      stringify_variants((Variant*)&local_40);
      __print_line((String*)&local_40);
      lVar2 = local_40;
      if (local_40 != 0) {
         LOCK();
         plVar1 = (long*)( local_40 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_40 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (Variant::needs_deinit[local_38[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (*(long*)this != 0) {
      OpenXRInterface::on_state_exiting();
   }

   CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
   puVar4 = (undefined8*)registered_extension_wrappers._8_8_;
   CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
   puVar5 = (undefined8*)registered_extension_wrappers._8_8_;
   if (registered_extension_wrappers._8_8_ != 0) {
      puVar5 = (undefined8*)( registered_extension_wrappers._8_8_ + *(long*)( registered_extension_wrappers._8_8_ + -8 ) * 8 );
   }

   for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      ( **(code**)( *(long*)*puVar4 + 0xd0 ) )();
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::set_form_factor(XrFormFactor) */void OpenXRAPI::set_form_factor(OpenXRAPI *this, undefined4 param_2) {
   if (*(long*)( this + 0xd0 ) == 0) {
      *(undefined4*)( this + 0x98 ) = param_2;
      return;
   }

   _err_print_error("set_form_factor", "modules/openxr/openxr_api.cpp", 0x5b9, "Condition \"is_initialized()\" is true.", 0, 0);
   return;
}
/* OpenXRAPI::get_view_count() */undefined4 OpenXRAPI::get_view_count(OpenXRAPI *this) {
   return *(undefined4*)( this + 0x160 );
}
/* OpenXRAPI::set_view_configuration(XrViewConfigurationType) */void OpenXRAPI::set_view_configuration(OpenXRAPI *this, undefined4 param_2) {
   if (*(long*)( this + 0xd0 ) == 0) {
      *(undefined4*)( this + 0x9c ) = param_2;
      return;
   }

   _err_print_error("set_view_configuration", "modules/openxr/openxr_api.cpp", 0x5c3, "Condition \"is_initialized()\" is true.", 0, 0);
   return;
}
/* OpenXRAPI::set_requested_reference_space(XrReferenceSpaceType) */undefined8 OpenXRAPI::set_requested_reference_space(OpenXRAPI *this, undefined4 param_2) {
   *(undefined4*)( this + 0xa0 ) = param_2;
   this[0x180] = (OpenXRAPI)0x1;
   return 1;
}
/* OpenXRAPI::set_submit_depth_buffer(bool) */void OpenXRAPI::set_submit_depth_buffer(OpenXRAPI *this, bool param_1) {
   if (*(long*)( this + 0xd0 ) == 0) {
      this[0xa8] = (OpenXRAPI)param_1;
      return;
   }

   _err_print_error("set_submit_depth_buffer", "modules/openxr/openxr_api.cpp", 0x5d0, "Condition \"is_initialized()\" is true.", 0, 0);
   return;
}
/* OpenXRAPI::is_initialized() */bool OpenXRAPI::is_initialized(OpenXRAPI *this) {
   return *(long*)( this + 0xd0 ) != 0;
}
/* OpenXRAPI::is_running() */OpenXRAPI OpenXRAPI::is_running(OpenXRAPI *this) {
   if (( *(long*)( this + 0xd0 ) != 0 ) && ( *(long*)( this + 0xf8 ) != 0 )) {
      return this[0x104];
   }

   return (OpenXRAPI)0x0;
}
/* OpenXRAPI::openxr_loader_init() */undefined8 OpenXRAPI::openxr_loader_init(OpenXRAPI *this) {
   int iVar1;
   char *pcVar2;
   pcVar2 = "xrCreateInstance";
   iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrCreateInstance", this + 0x218);
   if (( iVar1 != 0 ) && ( get_instance_proc_addr("xrCreateInstance", (_func_void*)pcVar2),iVar1 < 0 )) {
      _err_print_error("openxr_loader_init", "modules/openxr/openxr_api.cpp", 0x5f4, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
      return 0;
   }

   pcVar2 = "xrEnumerateApiLayerProperties";
   iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrEnumerateApiLayerProperties", this + 0x278);
   if (( iVar1 != 0 ) && ( get_instance_proc_addr("xrEnumerateApiLayerProperties", (_func_void*)pcVar2),iVar1 < 0 )) {
      _err_print_error("openxr_loader_init", "modules/openxr/openxr_api.cpp", 0x5f5, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
      return 0;
   }

   pcVar2 = "xrEnumerateInstanceExtensionProperties";
   iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrEnumerateInstanceExtensionProperties", this + 0x288);
   if (( iVar1 != 0 ) && ( get_instance_proc_addr("xrEnumerateInstanceExtensionProperties", (_func_void*)pcVar2),iVar1 < 0 )) {
      _err_print_error("openxr_loader_init", "modules/openxr/openxr_api.cpp", 0x5f6, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
      return 0;
   }

   return 1;
}
/* OpenXRAPI::try_get_instance_proc_addr(char const*, void (**)()) */void OpenXRAPI::try_get_instance_proc_addr(char *param_1, _func_void *param_2) {
   xrGetInstanceProcAddr(*(undefined8*)( param_1 + 0xd0 ));
   return;
}
/* OpenXRAPI::get_instance_proc_addr(char const*, void (**)()) */ulong OpenXRAPI::get_instance_proc_addr(char *param_1, _func_void *param_2) {
   ulong uVar1;
   _func_void *p_Var2;
   p_Var2 = param_2;
   uVar1 = xrGetInstanceProcAddr(*(undefined8*)( param_1 + 0xd0 ));
   if ((int)uVar1 == 0) {
      return uVar1;
   }

   get_instance_proc_addr((char*)param_2, p_Var2);
   return uVar1 & 0xffffffff;
}
/* OpenXRAPI::resolve_instance_openxr_symbols() */undefined8 OpenXRAPI::resolve_instance_openxr_symbols(OpenXRAPI *this) {
   int iVar1;
   char *pcVar2;
   if (*(long*)( this + 0xd0 ) == 0) {
      _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x5fc, "Condition \"instance == nullptr\" is true. Returning: false", 0, 0);
   }
 else {
      pcVar2 = "xrAcquireSwapchainImage";
      iVar1 = xrGetInstanceProcAddr(*(long*)( this + 0xd0 ), "xrAcquireSwapchainImage", this + 0x1d8);
      if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrAcquireSwapchainImage", (_func_void*)pcVar2),-1 < iVar1 )) {
         pcVar2 = "xrApplyHapticFeedback";
         iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrApplyHapticFeedback", this + 0x1e0);
         if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrApplyHapticFeedback", (_func_void*)pcVar2),-1 < iVar1 )) {
            pcVar2 = "xrAttachSessionActionSets";
            iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrAttachSessionActionSets", this + 0x1e8);
            if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrAttachSessionActionSets", (_func_void*)pcVar2),-1 < iVar1 )) {
               pcVar2 = "xrBeginFrame";
               iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrBeginFrame", this + 0x1f0);
               if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrBeginFrame", (_func_void*)pcVar2),-1 < iVar1 )) {
                  pcVar2 = "xrBeginSession";
                  iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrBeginSession", this + 0x1f8);
                  if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrBeginSession", (_func_void*)pcVar2),-1 < iVar1 )) {
                     pcVar2 = "xrCreateAction";
                     iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrCreateAction", this + 0x200);
                     if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrCreateAction", (_func_void*)pcVar2),-1 < iVar1 )) {
                        pcVar2 = "xrCreateActionSet";
                        iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrCreateActionSet", this + 0x208);
                        if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrCreateActionSet", (_func_void*)pcVar2),-1 < iVar1 )) {
                           pcVar2 = "xrCreateActionSpace";
                           iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrCreateActionSpace", this + 0x210);
                           if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrCreateActionSpace", (_func_void*)pcVar2),-1 < iVar1 )) {
                              pcVar2 = "xrCreateReferenceSpace";
                              iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrCreateReferenceSpace", this + 0x220);
                              if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrCreateReferenceSpace", (_func_void*)pcVar2),-1 < iVar1 )) {
                                 pcVar2 = "xrCreateSession";
                                 iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrCreateSession", this + 0x228);
                                 if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrCreateSession", (_func_void*)pcVar2),-1 < iVar1 )) {
                                    pcVar2 = "xrCreateSwapchain";
                                    iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrCreateSwapchain", this + 0x230);
                                    if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrCreateSwapchain", (_func_void*)pcVar2),-1 < iVar1 )) {
                                       pcVar2 = "xrDestroyAction";
                                       iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrDestroyAction", this + 0x238);
                                       if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrDestroyAction", (_func_void*)pcVar2),-1 < iVar1 )) {
                                          pcVar2 = "xrDestroyActionSet";
                                          iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrDestroyActionSet", this + 0x240);
                                          if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrDestroyActionSet", (_func_void*)pcVar2),-1 < iVar1 )) {
                                             pcVar2 = "xrDestroyInstance";
                                             iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrDestroyInstance", this + 0x248);
                                             if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrDestroyInstance", (_func_void*)pcVar2),-1 < iVar1 )) {
                                                pcVar2 = "xrDestroySession";
                                                iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrDestroySession", this + 0x250);
                                                if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrDestroySession", (_func_void*)pcVar2),-1 < iVar1 )) {
                                                   pcVar2 = "xrDestroySpace";
                                                   iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrDestroySpace", this + 600);
                                                   if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrDestroySpace", (_func_void*)pcVar2),-1 < iVar1 )) {
                                                      pcVar2 = "xrDestroySwapchain";
                                                      iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrDestroySwapchain", this + 0x260);
                                                      if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrDestroySwapchain", (_func_void*)pcVar2),-1 < iVar1 )) {
                                                         pcVar2 = "xrEndFrame";
                                                         iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrEndFrame", this + 0x268);
                                                         if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrEndFrame", (_func_void*)pcVar2),-1 < iVar1 )) {
                                                            pcVar2 = "xrEndSession";
                                                            iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrEndSession", this + 0x270);
                                                            if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrEndSession", (_func_void*)pcVar2),-1 < iVar1 )) {
                                                               pcVar2 = "xrEnumerateEnvironmentBlendModes";
                                                               iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrEnumerateEnvironmentBlendModes", this + 0x280);
                                                               if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrEnumerateEnvironmentBlendModes", (_func_void*)pcVar2),-1 < iVar1 )) {
                                                                  pcVar2 = "xrEnumerateReferenceSpaces";
                                                                  iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrEnumerateReferenceSpaces", this + 0x290);
                                                                  if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrEnumerateReferenceSpaces", (_func_void*)pcVar2),-1 < iVar1 )) {
                                                                     pcVar2 = "xrEnumerateSwapchainFormats";
                                                                     iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrEnumerateSwapchainFormats", this + 0x298);
                                                                     if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrEnumerateSwapchainFormats", (_func_void*)pcVar2),-1 < iVar1 )) {
                                                                        pcVar2 = "xrEnumerateViewConfigurations";
                                                                        iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrEnumerateViewConfigurations", this + 0x2a0);
                                                                        if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrEnumerateViewConfigurations", (_func_void*)pcVar2),-1 < iVar1 )) {
                                                                           pcVar2 = "xrEnumerateViewConfigurationViews";
                                                                           iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrEnumerateViewConfigurationViews", this + 0x2a8);
                                                                           if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrEnumerateViewConfigurationViews", (_func_void*)pcVar2),-1 < iVar1 )) {
                                                                              pcVar2 = "xrGetActionStateBoolean";
                                                                              iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrGetActionStateBoolean", this + 0x2b0);
                                                                              if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrGetActionStateBoolean", (_func_void*)pcVar2),-1 < iVar1 )) {
                                                                                 pcVar2 = "xrGetActionStateFloat";
                                                                                 iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrGetActionStateFloat", this + 0x2b8);
                                                                                 if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrGetActionStateFloat", (_func_void*)pcVar2),-1 < iVar1 )) {
                                                                                    pcVar2 = "xrGetActionStateVector2f";
                                                                                    iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrGetActionStateVector2f", this + 0x2c0);
                                                                                    if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrGetActionStateVector2f", (_func_void*)pcVar2),-1 < iVar1 )) {
                                                                                       pcVar2 = "xrGetCurrentInteractionProfile";
                                                                                       iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrGetCurrentInteractionProfile", this + 0x2c8);
                                                                                       if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrGetCurrentInteractionProfile", (_func_void*)pcVar2),-1 < iVar1 )) {
                                                                                          pcVar2 = "xrGetReferenceSpaceBoundsRect";
                                                                                          iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrGetReferenceSpaceBoundsRect", this + 0x2d8);
                                                                                          if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrGetReferenceSpaceBoundsRect", (_func_void*)pcVar2),-1 < iVar1 )) {
                                                                                             pcVar2 = "xrGetSystem";
                                                                                             iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrGetSystem", this + 0x2e0);
                                                                                             if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrGetSystem", (_func_void*)pcVar2),-1 < iVar1 )) {
                                                                                                pcVar2 = "xrGetSystemProperties";
                                                                                                iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrGetSystemProperties", this + 0x2e8);
                                                                                                if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrGetSystemProperties", (_func_void*)pcVar2),-1 < iVar1 )) {
                                                                                                   pcVar2 = "xrLocateViews";
                                                                                                   iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrLocateViews", this + 0x2f8);
                                                                                                   if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrLocateViews", (_func_void*)pcVar2),-1 < iVar1 )) {
                                                                                                      pcVar2 = "xrLocateSpace";
                                                                                                      iVar1 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrLocateSpace", this + 0x2f0);
                                                                                                      if (( iVar1 == 0 ) || ( get_instance_proc_addr("xrLocateSpace", (_func_void*)pcVar2),-1 < iVar1 )) {
                                                                                                         iVar1 = get_instance_proc_addr((char*)this, (_func_void*)"xrPathToString");
                                                                                                         if (iVar1 < 0) {
                                                                                                            _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x61f, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                                                                                         }
 else {
                                                                                                            iVar1 = get_instance_proc_addr((char*)this, (_func_void*)"xrPollEvent");
                                                                                                            if (iVar1 < 0) {
                                                                                                               _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x620, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                                                                                            }
 else {
                                                                                                               iVar1 = get_instance_proc_addr((char*)this, (_func_void*)"xrReleaseSwapchainImage");
                                                                                                               if (iVar1 < 0) {
                                                                                                                  _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x621, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                                                                                               }
 else {
                                                                                                                  iVar1 = get_instance_proc_addr((char*)this, (_func_void*)"xrResultToString");
                                                                                                                  if (iVar1 < 0) {
                                                                                                                     _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x622, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                                                                                                  }
 else {
                                                                                                                     iVar1 = get_instance_proc_addr((char*)this, (_func_void*)"xrStringToPath");
                                                                                                                     if (iVar1 < 0) {
                                                                                                                        _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x623, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                                                                                                     }
 else {
                                                                                                                        iVar1 = get_instance_proc_addr((char*)this, (_func_void*)"xrSuggestInteractionProfileBindings");
                                                                                                                        if (iVar1 < 0) {
                                                                                                                           _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x624, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                                                                                                        }
 else {
                                                                                                                           iVar1 = get_instance_proc_addr((char*)this, (_func_void*)"xrSyncActions");
                                                                                                                           if (iVar1 < 0) {
                                                                                                                              _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x625, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                                                                                                           }
 else {
                                                                                                                              iVar1 = get_instance_proc_addr((char*)this, (_func_void*)"xrWaitFrame");
                                                                                                                              if (iVar1 < 0) {
                                                                                                                                 _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x626, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                                                                                                              }
 else {
                                                                                                                                 iVar1 = get_instance_proc_addr((char*)this, (_func_void*)"xrWaitSwapchainImage");
                                                                                                                                 if (-1 < iVar1) {
                                                                                                                                    return 1;
                                                                                                                                 }

                                                                                                                                 _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x627, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                                                                                                              }

                                                                                                                           }

                                                                                                                        }

                                                                                                                     }

                                                                                                                  }

                                                                                                               }

                                                                                                            }

                                                                                                         }

                                                                                                      }
 else {
                                                                                                         _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x61e, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                                                                                      }

                                                                                                   }
 else {
                                                                                                      _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x61d, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                                                                                   }

                                                                                                }
 else {
                                                                                                   _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x61c, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                                                                                }

                                                                                             }
 else {
                                                                                                _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x61b, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                                                                             }

                                                                                          }
 else {
                                                                                             _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x61a, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                                                                          }

                                                                                       }
 else {
                                                                                          _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x619, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                                                                       }

                                                                                    }
 else {
                                                                                       _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x618, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                                                                    }

                                                                                 }
 else {
                                                                                    _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x617, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                                                                 }

                                                                              }
 else {
                                                                                 _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x616, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                                                              }

                                                                           }
 else {
                                                                              _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x615, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                                                           }

                                                                        }
 else {
                                                                           _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x614, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                                                        }

                                                                     }
 else {
                                                                        _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x613, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                                                     }

                                                                  }
 else {
                                                                     _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x612, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                                                  }

                                                               }
 else {
                                                                  _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x611, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                                               }

                                                            }
 else {
                                                               _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x610, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                                            }

                                                         }
 else {
                                                            _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x60f, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                                         }

                                                      }
 else {
                                                         _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x60e, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                                      }

                                                   }
 else {
                                                      _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x60d, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                                   }

                                                }
 else {
                                                   _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x60c, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                                }

                                             }
 else {
                                                _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x60b, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                             }

                                          }
 else {
                                             _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x60a, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                          }

                                       }
 else {
                                          _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x609, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                       }

                                    }
 else {
                                       _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x608, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                    }

                                 }
 else {
                                    _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x607, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                                 }

                              }
 else {
                                 _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x606, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                              }

                           }
 else {
                              _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x605, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                           }

                        }
 else {
                           _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x604, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                        }

                     }
 else {
                        _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x603, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                     }

                  }
 else {
                     _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x602, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
                  }

               }
 else {
                  _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x601, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
               }

            }
 else {
               _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x600, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
            }

         }
 else {
            _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x5ff, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
         }

      }
 else {
         _err_print_error("resolve_instance_openxr_symbols", "modules/openxr/openxr_api.cpp", 0x5fe, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
      }

   }

   return 0;
}
/* OpenXRAPI::set_xr_interface(OpenXRInterface*) */void OpenXRAPI::set_xr_interface(OpenXRAPI *this, OpenXRInterface *param_1) {
   *(OpenXRInterface**)this = param_1;
   return;
}
/* OpenXRAPI::get_registered_extension_wrappers() */undefined1 *OpenXRAPI::get_registered_extension_wrappers(void) {
   return registered_extension_wrappers;
}
/* OpenXRAPI::register_extension_metadata() */void OpenXRAPI::register_extension_metadata(void) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
   puVar1 = (undefined8*)registered_extension_wrappers._8_8_;
   CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
   puVar2 = (undefined8*)registered_extension_wrappers._8_8_;
   if (registered_extension_wrappers._8_8_ != 0) {
      puVar2 = (undefined8*)( registered_extension_wrappers._8_8_ + *(long*)( registered_extension_wrappers._8_8_ + -8 ) * 8 );
   }

   for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
      ( **(code**)( *(long*)*puVar1 + 0x40 ) )();
   }

   return;
}
/* OpenXRAPI::get_hand_tracker(int) */undefined8 OpenXRAPI::get_hand_tracker(OpenXRAPI *this, int param_1) {
   long lVar1;
   if ((uint)param_1 < 2) {
      lVar1 = OpenXRHandTrackingExtension::get_singleton();
      if (lVar1 != 0) {
         lVar1 = OpenXRHandTrackingExtension::get_hand_tracker(lVar1, param_1);
         return *(undefined8*)( lVar1 + 0x18 );
      }

      _err_print_error("get_hand_tracker", "modules/openxr/openxr_api.cpp", 0x6de, "Parameter \"hand_tracking\" is null.", 0, 0);
   }
 else {
      _err_print_index_error("get_hand_tracker", "modules/openxr/openxr_api.cpp", 0x6db, (long)param_1, 2, "p_hand_index", "OpenXRHandTrackingExtension::HandTrackedHands::OPENXR_MAX_TRACKED_HANDS", "", false, false);
   }

   return 0;
}
/* OpenXRAPI::get_recommended_target_size() */void OpenXRAPI::get_recommended_target_size(OpenXRAPI *this) {
   code *pcVar1;
   char cVar2;
   long *plVar3;
   plVar3 = (long*)RenderingServer::get_singleton();
   if (*(int*)( this + 0x160 ) == 0) {
      _err_print_error("get_recommended_target_size", "modules/openxr/openxr_api.cpp", 0x6e6, "Condition \"view_configuration_views.is_empty()\" is true. Returning: Size2()", 0, 0);
      return;
   }

   if (plVar3 == (long*)0x0) {
      return;
   }

   cVar2 = ( **(code**)( *plVar3 + 0x12d8 ) )(plVar3);
   if (cVar2 == '\0') {
      if (*(int*)( this + 0x160 ) != 0) {
         return;
      }

   }
 else if (*(int*)( this + 0x160 ) != 0) {
      return;
   }

   _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, 0, 0, "p_index", "count", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* OpenXRAPI::get_view_projection(unsigned int, double, double, Projection&) */undefined8 OpenXRAPI::get_view_projection(OpenXRAPI *this, uint param_1, double param_2, double param_3, Projection *param_4) {
   uint uVar1;
   code *UNRECOVERED_JUMPTABLE;
   char cVar2;
   long *plVar3;
   long lVar4;
   long lVar5;
   undefined8 uVar6;
   ulong uVar7;
   long lVar8;
   plVar3 = (long*)RenderingServer::get_singleton();
   if (plVar3 == (long*)0x0) {
      _err_print_error("get_view_projection", "modules/openxr/openxr_api.cpp", 0x73f, "Parameter \"rendering_server\" is null.", 0, 0);
   }
 else {
      cVar2 = ( **(code**)( *plVar3 + 0x12d8 ) )(plVar3);
      if (cVar2 == '\0') {
         _err_print_error("get_view_projection", "modules/openxr/openxr_api.cpp", 0x73f, "Condition \"!rendering_server->is_on_render_thread()\" is true. Returning: false", 0, 0);
      }
 else {
         plVar3 = *(long**)( this + 0x148 );
         if (plVar3 == (long*)0x0) {
            _err_print_error("get_view_projection", "modules/openxr/openxr_api.cpp", 0x740, "Parameter \"graphics_extension\" is null.", 0, 0);
         }
 else if (( ( this[0x4a8] != (OpenXRAPI)0x0 ) && ( uVar1 = *(uint*)( this + 0x4e0 ) ),uVar1 != 0 )) {
            if (*(uint*)( this + 0x500 ) != 0) {
               lVar4 = *(long*)( this + 0x508 );
               uVar7 = ( ulong ) * (uint*)( this + 0x500 ) * 0x40;
               lVar8 = lVar4 + uVar7;
               uVar6 = CONCAT44((float)param_2, (float)param_3);
               if (( uVar7 & 0x40 ) != 0) {
                  *(undefined8*)( lVar4 + 0x38 ) = uVar6;
                  lVar4 = lVar4 + 0x40;
                  if (lVar4 == lVar8) goto LAB_00104411;
               }

               do {
                  *(undefined8*)( lVar4 + 0x38 ) = uVar6;
                  lVar5 = lVar4 + 0x80;
                  *(undefined8*)( lVar4 + 0x78 ) = uVar6;
                  lVar4 = lVar5;
               }
 while ( lVar5 != lVar8 );
            }

            LAB_00104411:UNRECOVERED_JUMPTABLE = *(code**)( *plVar3 + 0x140 );
            *(double*)( this + 0x518 ) = param_2;
            *(double*)( this + 0x520 ) = param_3;
            if (uVar1 <= param_1) {
               _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)param_1, (ulong)uVar1, "p_index", "count", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               UNRECOVERED_JUMPTABLE = (code*)invalidInstructionException();
               ( *UNRECOVERED_JUMPTABLE )();
            }

            lVar8 = (ulong)param_1 * 0x40 + *(long*)( this + 0x4e8 );
            /* WARNING: Could not recover jumptable at 0x00104465. Too many branches */
            /* WARNING: Treating indirect jump as call */
            uVar6 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar8 + 0x2c ), *(undefined8*)( lVar8 + 0x34 ), param_2, param_3, plVar3, param_4);
            return uVar6;
         }

      }

   }

   return 0;
}
/* OpenXRAPI::get_color_swapchain() */undefined8 OpenXRAPI::get_color_swapchain(OpenXRAPI *this) {
   char cVar1;
   long *plVar2;
   plVar2 = (long*)RenderingServer::get_singleton();
   if (plVar2 == (long*)0x0) {
      _err_print_error("get_color_swapchain", "modules/openxr/openxr_api.cpp", 0x8ec, "Parameter \"rendering_server\" is null.", 0, 0);
   }
 else {
      cVar1 = ( **(code**)( *plVar2 + 0x12d8 ) )(plVar2);
      if (cVar1 != '\0') {
         return *(undefined8*)( this + 0x560 );
      }

      _err_print_error("get_color_swapchain", "modules/openxr/openxr_api.cpp", 0x8ec, "Condition \"!rendering_server->is_on_render_thread()\" is true. Returning: nullptr", 0, 0);
   }

   return 0;
}
/* OpenXRAPI::get_color_texture() */undefined8 OpenXRAPI::get_color_texture(OpenXRAPI *this) {
   char cVar1;
   long *plVar2;
   undefined8 uVar3;
   plVar2 = (long*)RenderingServer::get_singleton();
   if (plVar2 == (long*)0x0) {
      _err_print_error("get_color_texture", "modules/openxr/openxr_api.cpp", 0x8f2, "Parameter \"rendering_server\" is null.", 0, 0);
   }
 else {
      cVar1 = ( **(code**)( *plVar2 + 0x12d8 ) )(plVar2);
      if (cVar1 != '\0') {
         uVar3 = OpenXRSwapChainInfo::get_image((OpenXRSwapChainInfo*)( this + 0x560 ));
         return uVar3;
      }

      _err_print_error("get_color_texture", "modules/openxr/openxr_api.cpp", 0x8f2, "Condition \"!rendering_server->is_on_render_thread()\" is true. Returning: RID()", 0, 0);
   }

   return 0;
}
/* OpenXRAPI::get_depth_texture() */undefined8 OpenXRAPI::get_depth_texture(OpenXRAPI *this) {
   char cVar1;
   long *plVar2;
   undefined8 uVar3;
   plVar2 = (long*)RenderingServer::get_singleton();
   if (plVar2 == (long*)0x0) {
      _err_print_error("get_depth_texture", "modules/openxr/openxr_api.cpp", 0x8f8, "Parameter \"rendering_server\" is null.", 0, 0);
      return 0;
   }

   cVar1 = ( **(code**)( *plVar2 + 0x12d8 ) )(plVar2);
   if (cVar1 == '\0') {
      _err_print_error("get_depth_texture", "modules/openxr/openxr_api.cpp", 0x8f8, "Condition \"!rendering_server->is_on_render_thread()\" is true. Returning: RID()", 0, 0);
   }
 else if (( this[0x510] != (OpenXRAPI)0x0 ) && ( this[0x58c] != (OpenXRAPI)0x0 )) {
      uVar3 = OpenXRSwapChainInfo::get_image((OpenXRSwapChainInfo*)( this + 0x578 ));
      return uVar3;
   }

   return 0;
}
/* OpenXRAPI::set_velocity_texture(RID) */void OpenXRAPI::set_velocity_texture(OpenXRAPI *this, undefined8 param_2) {
   *(undefined8*)( this + 0x1a0 ) = param_2;
   return;
}
/* OpenXRAPI::get_velocity_texture() */undefined8 OpenXRAPI::get_velocity_texture(OpenXRAPI *this) {
   return *(undefined8*)( this + 0x1a0 );
}
/* OpenXRAPI::set_velocity_depth_texture(RID) */void OpenXRAPI::set_velocity_depth_texture(OpenXRAPI *this, undefined8 param_2) {
   *(undefined8*)( this + 0x1a8 ) = param_2;
   return;
}
/* OpenXRAPI::get_velocity_depth_texture() */undefined8 OpenXRAPI::get_velocity_depth_texture(OpenXRAPI *this) {
   return *(undefined8*)( this + 0x1a8 );
}
/* OpenXRAPI::set_velocity_target_size(Vector2i const&) */void OpenXRAPI::set_velocity_target_size(OpenXRAPI *this, Vector2i *param_1) {
   *(undefined8*)( this + 0x1b0 ) = *(undefined8*)param_1;
   return;
}
/* OpenXRAPI::get_velocity_target_size() */undefined8 OpenXRAPI::get_velocity_target_size(OpenXRAPI *this) {
   return *(undefined8*)( this + 0x1b0 );
}
/* OpenXRAPI::get_projection_layer() const */OpenXRAPI * __thiscall OpenXRAPI::get_projection_layer(OpenXRAPI *this){
   char cVar1;
   long *plVar2;
   plVar2 = (long*)RenderingServer::get_singleton();
   if (plVar2 == (long*)0x0) {
      _err_print_error("get_projection_layer", "modules/openxr/openxr_api.cpp", 0x91b, "Parameter \"rendering_server\" is null.", 0, 0);
   }
 else {
      cVar1 = ( **(code**)( *plVar2 + 0x12d8 ) )(plVar2);
      if (cVar1 != '\0') {
         return this + 0x528;
      }

      _err_print_error("get_projection_layer", "modules/openxr/openxr_api.cpp", 0x91b, "Condition \"!rendering_server->is_on_render_thread()\" is true. Returning: nullptr", 0, 0);
   }

   return (OpenXRAPI*)0x0;
}
/* OpenXRAPI::post_draw_viewport(RID) */void OpenXRAPI::post_draw_viewport(OpenXRAPI *this, undefined8 param_2) {
   char cVar1;
   long *plVar2;
   char *pcVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   plVar2 = (long*)RenderingServer::get_singleton();
   pcVar3 = "Parameter \"rendering_server\" is null.";
   if (plVar2 != (long*)0x0) {
      cVar1 = ( **(code**)( *plVar2 + 0x12d8 ) )(plVar2);
      if (cVar1 != '\0') {
         if (( ( ( *(long*)( this + 0xd0 ) != 0 ) && ( *(long*)( this + 0xf8 ) != 0 ) ) && ( this[0x4a8] != (OpenXRAPI)0x0 ) ) && ( ( this[0x511] != (OpenXRAPI)0x0 && ( this[0x4a9] != (OpenXRAPI)0x0 ) ) )) {
            CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
            puVar4 = (undefined8*)registered_extension_wrappers._8_8_;
            CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
            puVar5 = (undefined8*)registered_extension_wrappers._8_8_;
            if (registered_extension_wrappers._8_8_ != 0) {
               puVar5 = (undefined8*)( registered_extension_wrappers._8_8_ + *(long*)( registered_extension_wrappers._8_8_ + -8 ) * 8 );
            }

            if (puVar4 != puVar5) {
               do {
                  plVar2 = (long*)*puVar4;
                  puVar4 = puVar4 + 1;
                  ( **(code**)( *plVar2 + 0x90 ) )(plVar2, param_2);
               }
 while ( puVar5 != puVar4 );
               return;
            }

         }

         return;
      }

      pcVar3 = "Condition \"!rendering_server->is_on_render_thread()\" is true.";
   }

   _err_print_error("post_draw_viewport", "modules/openxr/openxr_api.cpp", 0x922, pcVar3, 0, 0);
   return;
}
/* OpenXRAPI::get_display_refresh_rate() const */undefined8 OpenXRAPI::get_display_refresh_rate(void) {
   long lVar1;
   undefined8 uVar2;
   lVar1 = OpenXRDisplayRefreshRateExtension::get_singleton();
   if (lVar1 != 0) {
      uVar2 = OpenXRDisplayRefreshRateExtension::get_refresh_rate();
      return uVar2;
   }

   return 0;
}
/* OpenXRAPI::set_display_refresh_rate(float) */void OpenXRAPI::set_display_refresh_rate(float param_1) {
   long lVar1;
   lVar1 = OpenXRDisplayRefreshRateExtension::get_singleton();
   if (lVar1 != 0) {
      OpenXRDisplayRefreshRateExtension::set_refresh_rate(param_1);
      return;
   }

   return;
}
/* OpenXRAPI::get_available_display_refresh_rates() const */OpenXRAPI * __thiscall OpenXRAPI::get_available_display_refresh_rates(OpenXRAPI *this){
   long lVar1;
   long lVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = OpenXRDisplayRefreshRateExtension::get_singleton();
   if (lVar2 == 0) {
      Array::Array((Array*)this);
   }
 else {
      OpenXRDisplayRefreshRateExtension::get_available_refresh_rates();
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::get_render_target_size_multiplier() const */undefined8 OpenXRAPI::get_render_target_size_multiplier(OpenXRAPI *this) {
   return *(undefined8*)( this + 0x130 );
}
/* OpenXRAPI::set_render_target_size_multiplier(double) */void OpenXRAPI::set_render_target_size_multiplier(OpenXRAPI *this, double param_1) {
   code *pcVar1;
   long *plVar2;
   CallableCustom *this_00;
   long in_FS_OFFSET;
   Callable aCStack_a8[16];
   Callable local_98[16];
   Variant *local_88;
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(double*)( this + 0x130 ) = param_1;
   plVar2 = (long*)RenderingServer::get_singleton();
   if (plVar2 == (long*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("set_render_state_multiplier", "modules/openxr/openxr_api.h", 0x194, "Parameter \"rendering_server\" is null.", 0, 0);
         return;
      }

   }
 else {
      pcVar1 = *(code**)( *plVar2 + 0x12e0 );
      this_00 = (CallableCustom*)operator_new(0x30, "");
      CallableCustom::CallableCustom(this_00);
      *(undefined**)( this_00 + 0x20 ) = &_LC115;
      *(undefined8*)( this_00 + 0x10 ) = 0;
      *(undefined***)this_00 = &PTR_hash_00126718;
      *(code**)( this_00 + 0x28 ) = _set_render_state_multiplier;
      CallableCustomMethodPointerBase::_setup((uint*)this_00, (int)this_00 + 0x28);
      *(char**)( this_00 + 0x20 ) = "OpenXRAPI::_set_render_state_multiplier";
      Callable::Callable(aCStack_a8, this_00);
      Variant::Variant((Variant*)local_78, param_1);
      local_60 = 0;
      local_58 = (undefined1[16])0x0;
      local_88 = (Variant*)local_78;
      Callable::bindp((Variant**)local_98, (int)aCStack_a8);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      ( *pcVar1 )(plVar2, local_98);
      Callable::~Callable(local_98);
      Callable::~Callable(aCStack_a8);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::get_render_region() const */undefined1  [16] __thiscallOpenXRAPI::get_render_region(OpenXRAPI *this) {
   return *(undefined1(*) [16])( this + 0x138 );
}
/* OpenXRAPI::set_render_region(Rect2i const&) */void OpenXRAPI::set_render_region(OpenXRAPI *this, Rect2i *param_1) {
   code *pcVar1;
   undefined8 uVar2;
   long *plVar3;
   CallableCustom *this_00;
   long in_FS_OFFSET;
   Callable aCStack_b8[16];
   Callable local_a8[16];
   undefined8 local_98;
   undefined8 uStack_90;
   Variant *local_88;
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   uVar2 = *(undefined8*)( param_1 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 0x138 ) = *(undefined8*)param_1;
   *(undefined8*)( this + 0x140 ) = uVar2;
   plVar3 = (long*)RenderingServer::get_singleton();
   if (plVar3 == (long*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("set_render_state_render_region", "modules/openxr/openxr_api.h", 0x19b, "Parameter \"rendering_server\" is null.", 0, 0);
         return;
      }

   }
 else {
      pcVar1 = *(code**)( *plVar3 + 0x12e0 );
      this_00 = (CallableCustom*)operator_new(0x30, "");
      CallableCustom::CallableCustom(this_00);
      *(undefined**)( this_00 + 0x20 ) = &_LC115;
      *(undefined8*)( this_00 + 0x10 ) = 0;
      *(undefined***)this_00 = &PTR_hash_001267a8;
      *(code**)( this_00 + 0x28 ) = _set_render_state_render_region;
      CallableCustomMethodPointerBase::_setup((uint*)this_00, (int)this_00 + 0x28);
      *(char**)( this_00 + 0x20 ) = "OpenXRAPI::_set_render_state_render_region";
      Callable::Callable(aCStack_b8, this_00);
      local_98 = *(undefined8*)param_1;
      uStack_90 = *(undefined8*)( param_1 + 8 );
      Variant::Variant((Variant*)local_78, (Rect2i*)&local_98);
      local_60 = 0;
      local_58 = (undefined1[16])0x0;
      local_88 = (Variant*)local_78;
      Callable::bindp((Variant**)local_a8, (int)aCStack_b8);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      ( *pcVar1 )(plVar3, local_a8);
      Callable::~Callable(local_a8);
      Callable::~Callable(aCStack_b8);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::is_foveation_supported() const */undefined8 OpenXRAPI::is_foveation_supported(void) {
   long lVar1;
   undefined8 uVar2;
   lVar1 = OpenXRFBFoveationExtension::get_singleton();
   if (lVar1 != 0) {
      uVar2 = OpenXRFBFoveationExtension::is_enabled();
      return uVar2;
   }

   return 0;
}
/* OpenXRAPI::get_foveation_level() const */bool OpenXRAPI::get_foveation_level(void) {
   char cVar1;
   int iVar2;
   long lVar3;
   lVar3 = OpenXRFBFoveationExtension::get_singleton();
   if (( lVar3 == 0 ) || ( cVar1 = OpenXRFBFoveationExtension::is_enabled() ),cVar1 == '\0') {
      return false;
   }

   iVar2 = OpenXRFBFoveationExtension::get_foveation_level();
   if (iVar2 == 2) {
      return (bool)2;
   }

   if (iVar2 == 3) {
      return (bool)3;
   }

   return iVar2 == 1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OpenXRAPI::set_foveation_level(int) */void OpenXRAPI::set_foveation_level(OpenXRAPI *this, int param_1) {
   char cVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined8 local_38;
   undefined8 uStack_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 < 4) {
      lVar2 = OpenXRFBFoveationExtension::get_singleton();
      if (lVar2 != 0) {
         cVar1 = OpenXRFBFoveationExtension::is_enabled();
         if (cVar1 != '\0') {
            local_38 = _LC16;
            uStack_30 = _UNK_00126958;
            if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
               OpenXRFBFoveationExtension::set_foveation_level(lVar2, *(undefined4*)( (long)&local_38 + (long)param_1 * 4 ));
               return;
            }

            goto LAB_00104f35;
         }

      }

   }
 else {
      _err_print_index_error("set_foveation_level", "modules/openxr/openxr_api.cpp", 0xa05, (long)param_1, 4, "p_foveation_level", "4", "", false, false);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00104f35:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* OpenXRAPI::get_foveation_dynamic() const */bool OpenXRAPI::get_foveation_dynamic(void) {
   char cVar1;
   int iVar2;
   long lVar3;
   lVar3 = OpenXRFBFoveationExtension::get_singleton();
   if (lVar3 != 0) {
      cVar1 = OpenXRFBFoveationExtension::is_enabled();
      if (cVar1 != '\0') {
         iVar2 = OpenXRFBFoveationExtension::get_foveation_dynamic();
         return iVar2 == 1;
      }

   }

   return false;
}
/* OpenXRAPI::set_foveation_dynamic(bool) */void OpenXRAPI::set_foveation_dynamic(OpenXRAPI *this, bool param_1) {
   char cVar1;
   long lVar2;
   lVar2 = OpenXRFBFoveationExtension::get_singleton();
   if (lVar2 != 0) {
      cVar1 = OpenXRFBFoveationExtension::is_enabled();
      if (cVar1 != '\0') {
         OpenXRFBFoveationExtension::set_foveation_dynamic(lVar2, param_1);
         return;
      }

   }

   return;
}
/* OpenXRAPI::get_supported_swapchain_formats() */void OpenXRAPI::get_supported_swapchain_formats(void) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long in_RSI;
   long in_RDI;
   bool bVar4;
   *(undefined8*)( in_RDI + 8 ) = 0;
   plVar1 = (long*)( *(long*)( in_RSI + 0x80 ) + -0x10 );
   if (*(long*)( in_RSI + 0x80 ) != 0) {
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
         *(undefined8*)( in_RDI + 8 ) = *(undefined8*)( in_RSI + 0x80 );
      }

   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OpenXRAPI::OpenXRAPI() */void OpenXRAPI::OpenXRAPI(OpenXRAPI *this) {
   undefined8 uVar1;
   undefined8 uVar2;
   OpenXRAPI OVar3;
   int iVar4;
   undefined8 uVar5;
   long lVar6;
   long in_FS_OFFSET;
   long local_50;
   int local_48[6];
   long local_30;
   uVar2 = _UNK_00126968;
   uVar1 = __LC143;
   uVar5 = _LC14;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( this + 0x80 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x98 ) = uVar1;
   *(undefined8*)( this + 0xa0 ) = uVar2;
   *(undefined8*)this = 0;
   *(undefined8*)( this + 8 ) = 0;
   *(undefined8*)( this + 0x10 ) = 0;
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined8*)( this + 0x30 ) = 0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined8*)( this + 0x50 ) = 0;
   *(undefined8*)( this + 0x58 ) = 0;
   *(undefined8*)( this + 0x60 ) = 0;
   *(undefined8*)( this + 0x68 ) = 0;
   *(undefined8*)( this + 0x70 ) = 0;
   *(undefined8*)( this + 0x90 ) = 0;
   this[0xa8] = (OpenXRAPI)0x0;
   *(undefined8*)( this + 0xac ) = uVar5;
   uVar5 = _LC144;
   *(undefined1(*) [16])( this + 0x118 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x130 ) = uVar5;
   *(undefined1(*) [16])( this + 0x170 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x188 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1a0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1c0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1d8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1e8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1f8 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0xc0 ) = 0;
   this[200] = (OpenXRAPI)0x0;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 8*i + 208 ) ) = 0;
   }

   *(undefined4*)( this + 0xe8 ) = 0;
   *(undefined8*)( this + 0xf8 ) = 0;
   *(undefined4*)( this + 0x100 ) = 0;
   this[0x104] = (OpenXRAPI)0x0;
   *(undefined4*)( this + 0x108 ) = 0x2c;
   *(undefined8*)( this + 0x110 ) = 0;
   *(undefined4*)( this + 0x128 ) = 0;
   *(undefined8*)( this + 0x138 ) = 0;
   *(undefined8*)( this + 0x140 ) = 0;
   *(undefined8*)( this + 0x148 ) = 0;
   *(undefined8*)( this + 0x160 ) = 0;
   *(undefined8*)( this + 0x168 ) = 0;
   this[0x180] = (OpenXRAPI)0x1;
   *(undefined4*)( this + 0x198 ) = 0;
   *(undefined8*)( this + 0x1b0 ) = 0;
   this[0x1b8] = (OpenXRAPI)0x0;
   this[0x1d0] = (OpenXRAPI)0x0;
   *(undefined1(*) [16])( this + 0x208 ) = (undefined1[16])0x0;
   uVar1 = _UNK_00126978;
   uVar5 = __LC145;
   *(undefined1(*) [16])( this + 0x218 ) = (undefined1[16])0x0;
   for (int i = 0; i < 9; i++) {
      *(undefined1(*) [16])( this + ( 32*i + 552 ) ) = (undefined1[16])0;
      *(undefined1(*) [16])( this + ( 32*i + 568 ) ) = (undefined1[16])0;
   }

   *(undefined1(*) [16])( this + 0x388 ) = (undefined1[16])0x0;
   *(undefined***)( this + 0x348 ) = &PTR__RID_Alloc_00126458;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 848 ) ) = 0;
   }

   *(undefined4*)( this + 0x388 ) = 1;
   *(undefined1(*) [16])( this + 0x378 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x360 ) = uVar5;
   *(undefined8*)( this + 0x368 ) = uVar1;
   uVar5 = Memory::alloc_static(0x308, false);
   *(undefined8*)( this + 0x350 ) = uVar5;
   uVar5 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x36c ) << 3, false);
   *(undefined8*)( this + 0x358 ) = uVar5;
   *(undefined1(*) [16])( this + 0x3e0 ) = (undefined1[16])0x0;
   *(undefined***)( this + 0x3a0 ) = &PTR__RID_Alloc_00126478;
   uVar1 = _UNK_00126978;
   uVar5 = __LC145;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 936 ) ) = 0;
   }

   *(undefined4*)( this + 0x3e0 ) = 1;
   *(undefined1(*) [16])( this + 0x3d0 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x3b8 ) = uVar5;
   *(undefined8*)( this + 0x3c0 ) = uVar1;
   uVar5 = Memory::alloc_static(0x308, false);
   *(undefined8*)( this + 0x3a8 ) = uVar5;
   uVar5 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x3c4 ) << 3, false);
   *(undefined8*)( this + 0x3b0 ) = uVar5;
   *(undefined1(*) [16])( this + 0x438 ) = (undefined1[16])0x0;
   *(undefined***)( this + 0x3f8 ) = &PTR__RID_Alloc_00126498;
   uVar1 = _UNK_00126988;
   uVar5 = __LC146;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 1024 ) ) = 0;
   }

   *(undefined4*)( this + 0x438 ) = 1;
   *(undefined1(*) [16])( this + 0x428 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x410 ) = uVar5;
   *(undefined8*)( this + 0x418 ) = uVar1;
   uVar5 = Memory::alloc_static(0x608, false);
   *(undefined8*)( this + 0x400 ) = uVar5;
   uVar5 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x41c ) << 3, false);
   *(undefined8*)( this + 0x408 ) = uVar5;
   *(undefined1(*) [16])( this + 0x490 ) = (undefined1[16])0x0;
   *(undefined***)( this + 0x450 ) = &PTR__RID_Alloc_001264b8;
   uVar1 = _UNK_00126988;
   uVar5 = __LC146;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 1112 ) ) = 0;
   }

   *(undefined4*)( this + 0x490 ) = 1;
   *(undefined1(*) [16])( this + 0x480 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x468 ) = uVar5;
   *(undefined8*)( this + 0x470 ) = uVar1;
   uVar5 = Memory::alloc_static(0x608, false);
   *(undefined8*)( this + 0x458 ) = uVar5;
   uVar5 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x474 ) << 3, false);
   *(undefined8*)( this + 0x460 ) = uVar5;
   *(undefined2*)( this + 0x4a8 ) = 0;
   this[0x4aa] = (OpenXRAPI)0x0;
   uVar5 = _LC144;
   *(undefined8*)( this + 0x4b0 ) = 0;
   *(undefined8*)( this + 0x4b8 ) = 0;
   *(undefined8*)( this + 0x4c0 ) = uVar5;
   for (int i = 0; i < 9; i++) {
      *(undefined8*)( this + ( 8*i + 1224 ) ) = 0;
   }

   *(undefined2*)( this + 0x510 ) = 0;
   *(undefined4*)( this + 0x528 ) = 0x23;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 8*i + 1328 ) ) = 0;
   }

   *(undefined4*)( this + 0x548 ) = 0;
   *(undefined8*)( this + 0x550 ) = 0;
   *(undefined8*)( this + 0x558 ) = 0;
   *(undefined1(*) [16])( this + 0x518 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x560 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x570 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x580 ) = (undefined1[16])0x0;
   singleton = this;
   lVar6 = Engine::get_singleton();
   if (*(char*)( lVar6 + 0xc0 ) == '\0') {
      ProjectSettings::get_singleton();
      StringName::StringName((StringName*)&local_50, "xr/openxr/form_factor", false);
      ProjectSettings::get_setting_with_override((StringName*)local_48);
      iVar4 = Variant::operator_cast_to_int((Variant*)local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      if (iVar4 == 0) {
         *(undefined4*)( this + 0x98 ) = 1;
      }
 else if (iVar4 == 1) {
         *(undefined4*)( this + 0x98 ) = 2;
      }

      ProjectSettings::get_singleton();
      StringName::StringName((StringName*)&local_50, "xr/openxr/view_configuration", false);
      ProjectSettings::get_setting_with_override((StringName*)local_48);
      iVar4 = Variant::operator_cast_to_int((Variant*)local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      if (iVar4 == 0) {
         *(undefined4*)( this + 0x9c ) = 1;
      }
 else if (iVar4 == 1) {
         *(undefined4*)( this + 0x9c ) = 2;
      }

      ProjectSettings::get_singleton();
      StringName::StringName((StringName*)&local_50, "xr/openxr/reference_space", false);
      ProjectSettings::get_setting_with_override((StringName*)local_48);
      iVar4 = Variant::operator_cast_to_int((Variant*)local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      if (iVar4 == 1) {
         *(undefined4*)( this + 0xa0 ) = 3;
      }
 else if (iVar4 == 2) {
         *(undefined4*)( this + 0xa0 ) = 0x3ba14a10;
      }
 else if (iVar4 == 0) {
         *(undefined4*)( this + 0xa0 ) = 2;
      }

      ProjectSettings::get_singleton();
      StringName::StringName((StringName*)&local_50, "xr/openxr/environment_blend_mode", false);
      ProjectSettings::get_setting_with_override((StringName*)local_48);
      iVar4 = Variant::operator_cast_to_int((Variant*)local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      if (iVar4 == 1) {
         *(undefined4*)( this + 0xac ) = 2;
      }
 else if (iVar4 == 2) {
         *(undefined4*)( this + 0xac ) = 3;
      }
 else if (iVar4 == 0) {
         *(undefined4*)( this + 0xac ) = 1;
      }

      ProjectSettings::get_singleton();
      StringName::StringName((StringName*)&local_50, "xr/openxr/submit_depth_buffer", false);
      ProjectSettings::get_setting_with_override((StringName*)local_48);
      OVar3 = (OpenXRAPI)Variant::operator_cast_to_bool((Variant*)local_48);
      this[0xa8] = OVar3;
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::transform_from_pose(XrPosef const&) */XrPosef *OpenXRAPI::transform_from_pose(XrPosef *param_1) {
   undefined8 *in_RDX;
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined4 local_60;
   undefined8 local_58;
   undefined8 uStack_50;
   Quaternion local_48[16];
   undefined1 local_38[16];
   undefined4 local_28;
   long local_20;
   local_58 = *in_RDX;
   uStack_50 = in_RDX[1];
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = (Quaternion[16])ZEXT416(_LC156);
   local_38 = ZEXT416(_LC156);
   local_28 = 0x3f800000;
   Basis::set_quaternion(local_48);
   local_68 = in_RDX[2];
   local_60 = *(undefined4*)( in_RDX + 3 );
   Transform3D::Transform3D((Transform3D*)param_1, (Basis*)local_48, (Vector3*)&local_68);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::get_view_transform(unsigned int, Transform3D&) */OpenXRAPI OpenXRAPI::get_view_transform(OpenXRAPI *this, uint param_1, Transform3D *param_2) {
   uint uVar1;
   code *pcVar2;
   char cVar3;
   OpenXRAPI OVar4;
   long *plVar5;
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   undefined8 uStack_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar5 = (long*)RenderingServer::get_singleton();
   if (plVar5 == (long*)0x0) {
      _err_print_error("get_view_transform", "modules/openxr/openxr_api.cpp", 0x72d, "Parameter \"rendering_server\" is null.", 0, 0);
   }
 else {
      cVar3 = ( **(code**)( *plVar5 + 0x12d8 ) )(plVar5);
      if (cVar3 == '\0') {
         _err_print_error("get_view_transform", "modules/openxr/openxr_api.cpp", 0x72d, "Condition \"!rendering_server->is_on_render_thread()\" is true. Returning: false", 0, 0);
         OVar4 = (OpenXRAPI)0x0;
         goto LAB_00105ab2;
      }

      if (this[0x4a8] != (OpenXRAPI)0x0) {
         uVar1 = *(uint*)( this + 0x4e0 );
         if (( uVar1 != 0 ) && ( OVar4 = OVar4 != (OpenXRAPI)0x0 )) {
            if (uVar1 <= param_1) {
               _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)param_1, (ulong)uVar1, "p_index", "count", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            transform_from_pose((XrPosef*)&local_58);
            *(undefined8*)param_2 = local_58;
            *(undefined8*)( param_2 + 8 ) = uStack_50;
            *(undefined8*)( param_2 + 0x10 ) = local_48;
            *(undefined8*)( param_2 + 0x18 ) = uStack_40;
            *(undefined8*)( param_2 + 0x20 ) = local_38;
            *(undefined8*)( param_2 + 0x28 ) = uStack_30;
            goto LAB_00105ab2;
         }

      }

   }

   OVar4 = (OpenXRAPI)0x0;
   LAB_00105ab2:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return OVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::get_eye_focus(unsigned int, float) */undefined8 OpenXRAPI::get_eye_focus(uint param_1, float param_2) {
   uint uVar1;
   code *pcVar2;
   char cVar3;
   Vector3 *pVVar4;
   undefined8 uVar5;
   uint in_ESI;
   undefined4 in_register_0000003c;
   long lVar6;
   long in_FS_OFFSET;
   float fVar7;
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   float fVar12;
   float fVar13;
   float local_b8;
   float local_b4;
   float local_b0;
   float local_ac;
   float local_a8;
   float local_a4;
   float local_a0;
   float local_9c;
   float local_98;
   float local_94;
   float local_90;
   float local_8c;
   Projection local_88[12];
   float local_7c;
   undefined8 local_78;
   float local_6c;
   undefined8 local_68;
   float local_5c;
   undefined8 local_58;
   float local_4c;
   long local_40;
   lVar6 = CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( lVar6 + 0x148 ) == 0) {
      _err_print_error("get_eye_focus", "modules/openxr/openxr_api.cpp", 0x75c, "Parameter \"graphics_extension\" is null.", 0, 0);
      uVar5 = 0;
   }
 else if (( ( ( *(char*)( lVar6 + 0x4a8 ) == '\0' ) || ( *(long*)( lVar6 + 0x4b0 ) == 0 ) ) || ( *(int*)( lVar6 + 0x4e0 ) == 0 ) ) || ( *(char*)( lVar6 + 0x511 ) == '\0' )) {
      uVar5 = 0;
   }
 else {
      Projection::Projection(local_88);
      uVar1 = *(uint*)( lVar6 + 0x4e0 );
      if (uVar1 <= in_ESI) {
         LAB_00105d96:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)in_ESI, (ulong)uVar1, "p_index", "count", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      cVar3 = ( **(code**)( **(long**)( lVar6 + 0x148 ) + 0x140 ) )(*(undefined8*)( *(long*)( lVar6 + 0x4e8 ) + 0x2c + (ulong)in_ESI * 0x40 ), *(undefined8*)( *(long*)( lVar6 + 0x4e8 ) + 0x34 + (ulong)in_ESI * 0x40 ), _LC160, *(long**)( lVar6 + 0x148 ), local_88);
      uVar5 = 0;
      if (cVar3 != '\0') {
         auVar10._0_4_ = (float)_LC161 * local_5c + local_7c * 0.0 + local_6c * 0.0 + local_4c;
         auVar10._4_4_ = auVar10._0_4_;
         auVar10._8_8_ = _LC163;
         auVar8._0_4_ = (float)local_88._0_8_ * 0.0 + (float)local_78 * 0.0 + (float)local_68 * (float)_LC161 + (float)local_58;
         auVar8._4_4_ = SUB84(local_88._0_8_, 4) * 0.0 + (float)( (ulong)local_78 >> 0x20 ) * 0.0 + (float)( (ulong)local_68 >> 0x20 ) * _LC161._4_4_ + (float)( (ulong)local_58 >> 0x20 );
         auVar8._8_8_ = 0;
         auVar8 = divps(auVar8, auVar10);
         uVar5 = auVar8._0_8_;
         pVVar4 = (Vector3*)OpenXREyeGazeInteractionExtension::get_singleton();
         if (( ( pVVar4 != (Vector3*)0x0 ) && ( cVar3 = OpenXREyeGazeInteractionExtension::supports_eye_gaze_interaction() ),cVar3 != '\0' )) {
            uVar1 = *(uint*)( lVar6 + 0x4e0 );
            if (uVar1 <= in_ESI) goto LAB_00105d96;
            transform_from_pose((XrPosef*)&local_b8);
            local_90 = 0.0 - local_90;
            local_94 = 0.0 - local_94;
            local_8c = 0.0 - local_8c;
            fVar12 = local_b0 * local_94 + local_a4 * local_90 + local_98 * local_8c;
            fVar13 = local_b4 * local_94 + local_a8 * local_90 + local_9c * local_8c;
            fVar7 = local_94 * local_b8 + local_90 * local_ac + local_8c * local_a0;
            auVar11._0_4_ = local_7c * fVar7 + local_6c * fVar13 + local_5c * fVar12 + local_4c;
            auVar11._4_4_ = auVar11._0_4_;
            auVar11._8_8_ = _LC163;
            auVar9._0_4_ = fVar7 * (float)local_88._0_8_ + fVar13 * (float)local_78 + fVar12 * (float)local_68 + (float)local_58;
            auVar9._4_4_ = fVar7 * SUB84(local_88._0_8_, 4) + fVar13 * (float)( (ulong)local_78 >> 0x20 ) + fVar12 * (float)( (ulong)local_68 >> 0x20 ) + (float)( (ulong)local_58 >> 0x20 );
            auVar9._8_8_ = 0;
            auVar8 = divps(auVar9, auVar11);
            uVar5 = auVar8._0_8_;
         }

      }

      Projection::~Projection(local_88);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar5;
}
/* OpenXRAPI::transform_from_location(XrHandJointLocationEXT const&, Transform3D&) */char OpenXRAPI::transform_from_location(OpenXRAPI *this, XrHandJointLocationEXT *param_1, Transform3D *param_2) {
   undefined8 uVar1;
   uint uVar2;
   ulong uVar3;
   char cVar4;
   long in_FS_OFFSET;
   undefined1 local_48[16];
   undefined1 local_38[16];
   undefined4 local_28;
   long local_20;
   uVar2 = _LC156;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = *(ulong*)param_1;
   if (( uVar3 & 1 ) == 0) {
      *(undefined4*)( param_2 + 0x20 ) = 0x3f800000;
      *(undefined1(*) [16])param_2 = ZEXT416(uVar2);
      *(undefined1(*) [16])( param_2 + 0x10 ) = ZEXT416(uVar2);
      cVar4 = '\0';
   }
 else {
      local_28 = 0x3f800000;
      local_48 = ZEXT416(_LC156);
      local_38 = ZEXT416(_LC156);
      Basis::set_quaternion((Quaternion*)local_48);
      *(undefined4*)( param_2 + 0x20 ) = local_28;
      uVar3 = *(ulong*)param_1;
      *(undefined8*)param_2 = local_48._0_8_;
      *(undefined8*)( param_2 + 8 ) = local_48._8_8_;
      *(undefined8*)( param_2 + 0x10 ) = local_38._0_8_;
      *(undefined8*)( param_2 + 0x18 ) = local_38._8_8_;
      cVar4 = ( ( uVar3 & 4 ) != 0 ) + '\x01';
   }

   if (( uVar3 & 2 ) == 0) {
      *(undefined8*)( param_2 + 0x24 ) = 0;
      *(undefined4*)( param_2 + 0x2c ) = 0;
   }
 else {
      uVar1 = *(undefined8*)( param_1 + 0x18 );
      *(undefined4*)( param_2 + 0x2c ) = *(undefined4*)( param_1 + 0x20 );
      *(undefined8*)( param_2 + 0x24 ) = uVar1;
      if (( uVar3 & 4 ) == 0) {
         cVar4 = '\x01';
      }
 else if (cVar4 == '\0') {
         cVar4 = '\x02';
      }

   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return cVar4;
}
/* OpenXRAPI::parse_velocities(XrSpaceVelocity const&, Vector3&, Vector3&) */void OpenXRAPI::parse_velocities(OpenXRAPI *this, XrSpaceVelocity *param_1, Vector3 *param_2, Vector3 *param_3) {
   undefined4 uVar1;
   ulong uVar2;
   uVar2 = *(ulong*)( param_1 + 0x10 );
   if (( uVar2 & 1 ) == 0) {
      *(undefined8*)param_2 = 0;
      *(undefined4*)( param_2 + 8 ) = 0;
   }
 else {
      uVar1 = *(undefined4*)( param_1 + 0x20 );
      *(undefined8*)param_2 = *(undefined8*)( param_1 + 0x18 );
      *(undefined4*)( param_2 + 8 ) = uVar1;
   }

   if (( uVar2 & 2 ) != 0) {
      uVar1 = *(undefined4*)( param_1 + 0x2c );
      *(undefined8*)param_3 = *(undefined8*)( param_1 + 0x24 );
      *(undefined4*)( param_3 + 8 ) = uVar1;
      return;
   }

   *(undefined8*)param_3 = 0;
   *(undefined4*)( param_3 + 8 ) = 0;
   return;
}
/* WARNING: Type propagation algorithm not settling *//* OpenXRAPI::xr_result(XrResult, char const*, Array) const */undefined8 OpenXRAPI::xr_result(OpenXRAPI *this, undefined8 param_2, char *param_3, Array *param_4) {
   long *plVar1;
   long lVar2;
   long lVar3;
   char *pcVar4;
   undefined8 uVar5;
   size_t sVar6;
   long in_FS_OFFSET;
   long local_108;
   long local_100;
   long local_f8;
   long local_f0;
   long local_e8;
   long local_e0;
   long local_d8;
   long local_d0;
   long local_c8;
   long local_c0;
   char *local_b8;
   size_t local_b0;
   int local_a8[8];
   char local_88[72];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = 1;
   if ((int)param_2 < 0) {
      if (*(code**)( this + 0x318 ) != (code*)0x0) {
         ( **(code**)( this + 0x318 ) )(*(undefined8*)( this + 0xd0 ), param_2, local_88);
      }

      local_c0 = 0;
      local_b0 = 1;
      local_b8 = "]";
      String::parse_latin1((StrRange*)&local_c0);
      local_d0 = 0;
      local_b0 = strlen(local_88);
      local_b8 = local_88;
      String::parse_latin1((StrRange*)&local_d0);
      local_b8 = " [";
      local_e0 = 0;
      local_b0 = 2;
      String::parse_latin1((StrRange*)&local_e0);
      sVar6 = 0;
      local_100 = 0;
      if (param_3 != (char*)0x0) {
         sVar6 = strlen(param_3);
      }

      local_b8 = param_3;
      local_b0 = sVar6;
      String::parse_latin1((StrRange*)&local_100);
      local_b8 = "{_}";
      local_f8 = 0;
      local_b0 = 3;
      String::parse_latin1((StrRange*)&local_f8);
      Variant::Variant((Variant*)local_a8, param_4);
      String::format((Variant*)&local_f0, (String*)&local_100);
      local_108 = 0;
      local_b8 = "OpenXR ";
      local_b0 = 7;
      String::parse_latin1((StrRange*)&local_108);
      String::operator +((String*)&local_e8, (String*)&local_108);
      String::operator +((String*)&local_d8, (String*)&local_e8);
      String::operator +((String*)&local_c8, (String*)&local_d8);
      String::operator +((String*)&local_b8, (String*)&local_c8);
      print_error((String*)&local_b8);
      pcVar4 = local_b8;
      lVar2 = local_c8;
      if (local_b8 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_b8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_b8 = (char*)0x0;
            Memory::free_static(pcVar4 + -0x10, false);
            lVar2 = local_c8;
         }

      }

      lVar3 = local_d8;
      local_c8 = lVar2;
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_c8 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
            lVar3 = local_d8;
         }

      }

      lVar2 = local_e8;
      local_d8 = lVar3;
      if (lVar3 != 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_d8 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            lVar2 = local_e8;
         }

      }

      lVar3 = local_108;
      local_e8 = lVar2;
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_e8 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
            lVar3 = local_108;
         }

      }

      local_108 = lVar3;
      lVar2 = local_f0;
      if (lVar3 != 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_108 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            lVar2 = local_f0;
         }

      }

      local_f0 = lVar2;
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_f0 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (Variant::needs_deinit[local_a8[0]] != '\0') {
         Variant::_clear_internal();
      }

      lVar3 = local_f8;
      lVar2 = local_100;
      if (local_f8 != 0) {
         LOCK();
         plVar1 = (long*)( local_f8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_f8 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            lVar2 = local_100;
         }

      }

      local_100 = lVar2;
      lVar3 = local_e0;
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_100 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
            lVar3 = local_e0;
         }

      }

      local_e0 = lVar3;
      lVar2 = local_d0;
      if (lVar3 != 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_e0 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            lVar2 = local_d0;
         }

      }

      local_d0 = lVar2;
      lVar3 = local_c0;
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_d0 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
            lVar3 = local_c0;
         }

      }

      local_c0 = lVar3;
      if (lVar3 != 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_c0 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      uVar5 = 0;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar5;
}
/* OpenXRAPI::get_tracker_rid(unsigned long) */ulong OpenXRAPI::get_tracker_rid(OpenXRAPI *this, ulong param_1) {
   undefined1(*pauVar1)[16];
   pthread_mutex_t *__mutex;
   uint uVar2;
   ulong uVar3;
   void *pvVar4;
   long lVar5;
   int iVar6;
   ulong *puVar7;
   undefined1(*pauVar8)[16];
   long lVar9;
   ulong uVar10;
   __mutex = (pthread_mutex_t*)( this + 0x378 );
   iVar6 = pthread_mutex_lock(__mutex);
   if (iVar6 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar6);
   }

   pauVar8 = (undefined1(*) [16])0x0;
   uVar10 = 0;
   if (*(int*)( this + 0x364 ) == 0) {
      pthread_mutex_unlock(__mutex);
   }
 else {
      do {
         uVar2 = *(uint*)( ( uVar10 % ( ulong ) * (uint*)( this + 0x360 ) ) * 0x20 + *(long*)( *(long*)( this + 0x350 ) + ( uVar10 / *(uint*)( this + 0x360 ) ) * 8 ) + 0x18 );
         if (uVar2 != 0xffffffff) {
            if (pauVar8 == (undefined1(*) [16])0x0) {
               pauVar8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined4*)pauVar8[1] = 0;
               *pauVar8 = (undefined1[16])0x0;
            }

            puVar7 = (ulong*)operator_new(0x20, DefaultAllocator::alloc);
            uVar3 = *(ulong*)( *pauVar8 + 8 );
            puVar7[1] = 0;
            *puVar7 = (ulong)uVar2 << 0x20 | uVar10;
            puVar7[2] = uVar3;
            puVar7[3] = (ulong)pauVar8;
            if (uVar3 != 0) {
               *(ulong**)( uVar3 + 8 ) = puVar7;
            }

            lVar9 = *(long*)*pauVar8;
            *(ulong**)( *pauVar8 + 8 ) = puVar7;
            if (lVar9 == 0) {
               *(ulong**)*pauVar8 = puVar7;
            }

            *(int*)pauVar8[1] = *(int*)pauVar8[1] + 1;
         }

         uVar10 = uVar10 + 1;
      }
 while ( uVar10 < *(uint*)( this + 0x364 ) );
      pthread_mutex_unlock(__mutex);
      if (pauVar8 != (undefined1(*) [16])0x0) {
         puVar7 = *(ulong**)*pauVar8;
         joined_r0x001066f8:if (puVar7 != (ulong*)0x0) {
            do {
               if (*puVar7 != 0) {
                  uVar10 = *puVar7;
                  if ((uint)uVar10 < *(uint*)( this + 0x364 )) {
                     lVar9 = ( ( uVar10 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x360 ) ) * 0x20 + *(long*)( *(long*)( this + 0x350 ) + ( ( uVar10 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x360 ) ) * 8 );
                     iVar6 = *(int*)( lVar9 + 0x18 );
                     if (iVar6 == (int)( uVar10 >> 0x20 )) {
                        if (*(ulong*)( lVar9 + 8 ) == param_1) goto LAB_001067a2;
                     }
 else if (iVar6 + 0x80000000U < 0x7fffffff) goto code_r0x00106761;
                  }

               }

               puVar7 = (ulong*)puVar7[1];
               if (puVar7 == (ulong*)0x0) break;
            }
 while ( true );
         }

      }

   }

   uVar10 = 0;
   LAB_001067a2:if (pauVar8 != (undefined1(*) [16])0x0) {
      do {
         while (true) {
            pvVar4 = *(void**)*pauVar8;
            if (pvVar4 == (void*)0x0) {
               if (*(int*)pauVar8[1] != 0) {
                  _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                  return uVar10;
               }

               goto LAB_001067f6;
            }

            if (pauVar8 != *(undefined1(**) [16])( (long)pvVar4 + 0x18 )) break;
            lVar9 = *(long*)( (long)pvVar4 + 8 );
            lVar5 = *(long*)( (long)pvVar4 + 0x10 );
            *(long*)*pauVar8 = lVar9;
            if (pvVar4 == *(void**)( *pauVar8 + 8 )) {
               *(long*)( *pauVar8 + 8 ) = lVar5;
            }

            if (lVar5 != 0) {
               *(long*)( lVar5 + 8 ) = lVar9;
               lVar9 = *(long*)( (long)pvVar4 + 8 );
            }

            if (lVar9 != 0) {
               *(long*)( lVar9 + 0x10 ) = lVar5;
            }

            Memory::free_static(pvVar4, false);
            pauVar1 = pauVar8 + 1;
            *(int*)*pauVar1 = *(int*)*pauVar1 + -1;
            if (*(int*)*pauVar1 == 0) goto LAB_001067f6;
         }
;
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }
 while ( *(int*)pauVar8[1] != 0 );
      LAB_001067f6:Memory::free_static(pauVar8, false);
   }

   return uVar10;
   code_r0x00106761:_err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
   puVar7 = (ulong*)puVar7[1];
   goto joined_r0x001066f8;
}
/* OpenXRAPI::find_tracker(String const&) */ulong OpenXRAPI::find_tracker(OpenXRAPI *this, String *param_1) {
   undefined1(*pauVar1)[16];
   pthread_mutex_t *__mutex;
   uint uVar2;
   ulong uVar3;
   void *pvVar4;
   long lVar5;
   char cVar6;
   int iVar7;
   ulong *puVar8;
   long lVar9;
   undefined1(*pauVar10)[16];
   String *this_00;
   ulong uVar11;
   __mutex = (pthread_mutex_t*)( this + 0x378 );
   iVar7 = pthread_mutex_lock(__mutex);
   if (iVar7 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar7);
   }

   pauVar10 = (undefined1(*) [16])0x0;
   uVar11 = 0;
   if (*(int*)( this + 0x364 ) == 0) {
      pthread_mutex_unlock(__mutex);
   }
 else {
      do {
         uVar2 = *(uint*)( ( uVar11 % ( ulong ) * (uint*)( this + 0x360 ) ) * 0x20 + *(long*)( *(long*)( this + 0x350 ) + ( uVar11 / *(uint*)( this + 0x360 ) ) * 8 ) + 0x18 );
         if (uVar2 != 0xffffffff) {
            if (pauVar10 == (undefined1(*) [16])0x0) {
               pauVar10 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined4*)pauVar10[1] = 0;
               *pauVar10 = (undefined1[16])0x0;
            }

            puVar8 = (ulong*)operator_new(0x20, DefaultAllocator::alloc);
            uVar3 = *(ulong*)( *pauVar10 + 8 );
            puVar8[1] = 0;
            *puVar8 = (ulong)uVar2 << 0x20 | uVar11;
            puVar8[2] = uVar3;
            puVar8[3] = (ulong)pauVar10;
            if (uVar3 != 0) {
               *(ulong**)( uVar3 + 8 ) = puVar8;
            }

            lVar9 = *(long*)*pauVar10;
            *(ulong**)( *pauVar10 + 8 ) = puVar8;
            if (lVar9 == 0) {
               *(ulong**)*pauVar10 = puVar8;
            }

            *(int*)pauVar10[1] = *(int*)pauVar10[1] + 1;
         }

         uVar11 = uVar11 + 1;
      }
 while ( uVar11 < *(uint*)( this + 0x364 ) );
      pthread_mutex_unlock(__mutex);
      if (pauVar10 != (undefined1(*) [16])0x0) {
         puVar8 = *(ulong**)*pauVar10;
         joined_r0x001069e8:if (puVar8 != (ulong*)0x0) {
            do {
               if (*puVar8 != 0) {
                  uVar11 = *puVar8;
                  if ((uint)uVar11 < *(uint*)( this + 0x364 )) {
                     this_00 = (String*)( ( ( uVar11 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x360 ) ) * 0x20 + *(long*)( *(long*)( this + 0x350 ) + ( ( uVar11 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x360 ) ) * 8 ) );
                     iVar7 = *(int*)( this_00 + 0x18 );
                     if (iVar7 == (int)( uVar11 >> 0x20 )) {
                        cVar6 = String::operator ==(this_00, param_1);
                        if (cVar6 != '\0') {
                           uVar11 = *puVar8;
                           goto LAB_00106a9a;
                        }

                     }
 else if (iVar7 + 0x80000000U < 0x7fffffff) goto code_r0x00106a54;
                  }

               }

               puVar8 = (ulong*)puVar8[1];
               if (puVar8 == (ulong*)0x0) break;
            }
 while ( true );
         }

      }

   }

   uVar11 = 0;
   LAB_00106a9a:if (pauVar10 != (undefined1(*) [16])0x0) {
      do {
         while (true) {
            pvVar4 = *(void**)*pauVar10;
            if (pvVar4 == (void*)0x0) {
               if (*(int*)pauVar10[1] != 0) {
                  _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                  return uVar11;
               }

               goto LAB_00106aee;
            }

            if (pauVar10 != *(undefined1(**) [16])( (long)pvVar4 + 0x18 )) break;
            lVar9 = *(long*)( (long)pvVar4 + 8 );
            lVar5 = *(long*)( (long)pvVar4 + 0x10 );
            *(long*)*pauVar10 = lVar9;
            if (pvVar4 == *(void**)( *pauVar10 + 8 )) {
               *(long*)( *pauVar10 + 8 ) = lVar5;
            }

            if (lVar5 != 0) {
               *(long*)( lVar5 + 8 ) = lVar9;
               lVar9 = *(long*)( (long)pvVar4 + 8 );
            }

            if (lVar9 != 0) {
               *(long*)( lVar9 + 0x10 ) = lVar5;
            }

            Memory::free_static(pvVar4, false);
            pauVar1 = pauVar10 + 1;
            *(int*)*pauVar1 = *(int*)*pauVar1 + -1;
            if (*(int*)*pauVar1 == 0) goto LAB_00106aee;
         }
;
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }
 while ( *(int*)pauVar10[1] != 0 );
      LAB_00106aee:Memory::free_static(pauVar10, false);
   }

   return uVar11;
   code_r0x00106a54:_err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
   puVar8 = (ulong*)puVar8[1];
   goto joined_r0x001069e8;
}
/* OpenXRAPI::tracker_get_name(RID) */StrRange *OpenXRAPI::tracker_get_name(StrRange *param_1, long param_2, ulong param_3) {
   long lVar1;
   CowData *pCVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 == 0) {
      *(undefined8*)param_1 = 0;
      String::parse_latin1(param_1);
   }
 else {
      if ((uint)param_3 < *(uint*)( param_2 + 0x364 )) {
         pCVar2 = (CowData*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x360 ) ) * 0x20 + *(long*)( *(long*)( param_2 + 0x350 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x360 ) ) * 8 ) );
         if (*(int*)( pCVar2 + 0x18 ) == (int)( param_3 >> 0x20 )) {
            *(undefined8*)param_1 = 0;
            if (*(long*)pCVar2 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)param_1, pCVar2);
            }

            goto LAB_00106c24;
         }

         if (*(int*)( pCVar2 + 0x18 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

      _err_print_error("tracker_get_name", "modules/openxr/openxr_api.cpp", 0xb28, "Parameter \"tracker\" is null.", 0, 0);
      *(undefined8*)param_1 = 0;
   }

   LAB_00106c24:if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::tracker_free(RID) */void OpenXRAPI::tracker_free(OpenXRAPI *this, ulong param_2) {
   long *plVar1;
   pthread_mutex_t *__mutex;
   int iVar2;
   long lVar3;
   ulong uVar4;
   int iVar5;
   uint uVar6;
   char *pcVar7;
   long *plVar8;
   undefined8 uVar9;
   uint uVar10;
   char *pcVar11;
   char *pcVar12;
   long lVar13;
   if (( param_2 != 0 ) && ( uVar10 = (uint)param_2 ),uVar10 < *(uint*)( this + 0x364 )) {
      iVar2 = *(int*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x360 ) ) * 0x20 + *(long*)( *(long*)( this + 0x350 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x360 ) ) * 8 ) + 0x18 );
      if (iVar2 == (int)( param_2 >> 0x20 )) {
         __mutex = (pthread_mutex_t*)( this + 0x378 );
         iVar5 = pthread_mutex_lock(__mutex);
         if (iVar5 != 0) {
            /* WARNING: Subroutine does not return */
            std::__throw_system_error(iVar5);
         }

         if (uVar10 < *(uint*)( this + 0x364 )) {
            uVar4 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x360 );
            lVar13 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x360 ) ) * 0x20;
            plVar8 = (long*)( *(long*)( *(long*)( this + 0x350 ) + uVar4 * 8 ) + lVar13 );
            if ((int)plVar8[3] < 0) {
               pthread_mutex_unlock(__mutex);
               _err_print_error(&_LC181, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0, 0);
               return;
            }

            if (iVar2 == (int)plVar8[3]) {
               if (*plVar8 != 0) {
                  LOCK();
                  plVar1 = (long*)( *plVar8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *plVar8;
                     *plVar8 = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

                  plVar8 = (long*)( *(long*)( *(long*)( this + 0x350 ) + uVar4 * 8 ) + lVar13 );
               }

               *(undefined4*)( plVar8 + 3 ) = 0xffffffff;
               uVar6 = *(int*)( this + 0x368 ) - 1;
               *(uint*)( this + 0x368 ) = uVar6;
               *(uint*)( *(long*)( *(long*)( this + 0x358 ) + ( (ulong)uVar6 / ( ulong ) * (uint*)( this + 0x360 ) ) * 8 ) + ( (ulong)uVar6 % ( ulong ) * (uint*)( this + 0x360 ) ) * 4 ) = uVar10;
               pthread_mutex_unlock(__mutex);
               return;
            }

            pthread_mutex_unlock(__mutex);
            uVar9 = 0x171;
         }
 else {
            pthread_mutex_unlock(__mutex);
            uVar9 = 0x161;
         }

         pcVar7 = "Method/function failed.";
         pcVar11 = "./core/templates/rid_owner.h";
         pcVar12 = "free";
         goto LAB_00106e88;
      }

      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   pcVar7 = "Parameter \"tracker\" is null.";
   uVar9 = 0xb53;
   pcVar11 = "modules/openxr/openxr_api.cpp";
   pcVar12 = "tracker_free";
   LAB_00106e88:_err_print_error(pcVar12, pcVar11, uVar9, pcVar7, 0, 0);
   return;
}
/* OpenXRAPI::find_action_set(String) */ulong OpenXRAPI::find_action_set(OpenXRAPI *this, String *param_2) {
   undefined1(*pauVar1)[16];
   pthread_mutex_t *__mutex;
   uint uVar2;
   ulong uVar3;
   void *pvVar4;
   long lVar5;
   char cVar6;
   int iVar7;
   ulong *puVar8;
   long lVar9;
   undefined1(*pauVar10)[16];
   String *this_00;
   ulong uVar11;
   __mutex = (pthread_mutex_t*)( this + 0x3d0 );
   iVar7 = pthread_mutex_lock(__mutex);
   if (iVar7 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar7);
   }

   pauVar10 = (undefined1(*) [16])0x0;
   uVar11 = 0;
   if (*(int*)( this + 0x3bc ) == 0) {
      pthread_mutex_unlock(__mutex);
   }
 else {
      do {
         uVar2 = *(uint*)( ( uVar11 % ( ulong ) * (uint*)( this + 0x3b8 ) ) * 0x20 + *(long*)( *(long*)( this + 0x3a8 ) + ( uVar11 / *(uint*)( this + 0x3b8 ) ) * 8 ) + 0x18 );
         if (uVar2 != 0xffffffff) {
            if (pauVar10 == (undefined1(*) [16])0x0) {
               pauVar10 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined4*)pauVar10[1] = 0;
               *pauVar10 = (undefined1[16])0x0;
            }

            puVar8 = (ulong*)operator_new(0x20, DefaultAllocator::alloc);
            uVar3 = *(ulong*)( *pauVar10 + 8 );
            puVar8[1] = 0;
            *puVar8 = (ulong)uVar2 << 0x20 | uVar11;
            puVar8[2] = uVar3;
            puVar8[3] = (ulong)pauVar10;
            if (uVar3 != 0) {
               *(ulong**)( uVar3 + 8 ) = puVar8;
            }

            lVar9 = *(long*)*pauVar10;
            *(ulong**)( *pauVar10 + 8 ) = puVar8;
            if (lVar9 == 0) {
               *(ulong**)*pauVar10 = puVar8;
            }

            *(int*)pauVar10[1] = *(int*)pauVar10[1] + 1;
         }

         uVar11 = uVar11 + 1;
      }
 while ( uVar11 < *(uint*)( this + 0x3bc ) );
      pthread_mutex_unlock(__mutex);
      if (pauVar10 != (undefined1(*) [16])0x0) {
         puVar8 = *(ulong**)*pauVar10;
         joined_r0x00107078:if (puVar8 != (ulong*)0x0) {
            do {
               if (*puVar8 != 0) {
                  uVar11 = *puVar8;
                  if ((uint)uVar11 < *(uint*)( this + 0x3bc )) {
                     this_00 = (String*)( ( ( uVar11 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x3b8 ) ) * 0x20 + *(long*)( *(long*)( this + 0x3a8 ) + ( ( uVar11 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x3b8 ) ) * 8 ) );
                     iVar7 = *(int*)( this_00 + 0x18 );
                     if (iVar7 == (int)( uVar11 >> 0x20 )) {
                        cVar6 = String::operator ==(this_00, param_2);
                        if (cVar6 != '\0') {
                           uVar11 = *puVar8;
                           goto LAB_0010712a;
                        }

                     }
 else if (iVar7 + 0x80000000U < 0x7fffffff) goto code_r0x001070e4;
                  }

               }

               puVar8 = (ulong*)puVar8[1];
               if (puVar8 == (ulong*)0x0) break;
            }
 while ( true );
         }

      }

   }

   uVar11 = 0;
   LAB_0010712a:if (pauVar10 != (undefined1(*) [16])0x0) {
      do {
         while (true) {
            pvVar4 = *(void**)*pauVar10;
            if (pvVar4 == (void*)0x0) {
               if (*(int*)pauVar10[1] != 0) {
                  _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                  return uVar11;
               }

               goto LAB_0010717e;
            }

            if (pauVar10 != *(undefined1(**) [16])( (long)pvVar4 + 0x18 )) break;
            lVar9 = *(long*)( (long)pvVar4 + 8 );
            lVar5 = *(long*)( (long)pvVar4 + 0x10 );
            *(long*)*pauVar10 = lVar9;
            if (pvVar4 == *(void**)( *pauVar10 + 8 )) {
               *(long*)( *pauVar10 + 8 ) = lVar5;
            }

            if (lVar5 != 0) {
               *(long*)( lVar5 + 8 ) = lVar9;
               lVar9 = *(long*)( (long)pvVar4 + 8 );
            }

            if (lVar9 != 0) {
               *(long*)( lVar9 + 0x10 ) = lVar5;
            }

            Memory::free_static(pvVar4, false);
            pauVar1 = pauVar10 + 1;
            *(int*)*pauVar1 = *(int*)*pauVar1 + -1;
            if (*(int*)*pauVar1 == 0) goto LAB_0010717e;
         }
;
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }
 while ( *(int*)pauVar10[1] != 0 );
      LAB_0010717e:Memory::free_static(pauVar10, false);
   }

   return uVar11;
   code_r0x001070e4:_err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
   puVar8 = (ulong*)puVar8[1];
   goto joined_r0x00107078;
}
/* OpenXRAPI::action_set_get_name(RID) */StrRange *OpenXRAPI::action_set_get_name(StrRange *param_1, long param_2, ulong param_3) {
   long lVar1;
   CowData *pCVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 == 0) {
      *(undefined8*)param_1 = 0;
      String::parse_latin1(param_1);
   }
 else {
      if ((uint)param_3 < *(uint*)( param_2 + 0x3bc )) {
         pCVar2 = (CowData*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x3b8 ) ) * 0x20 + *(long*)( *(long*)( param_2 + 0x3a8 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x3b8 ) ) * 8 ) );
         if (*(int*)( pCVar2 + 0x18 ) == (int)( param_3 >> 0x20 )) {
            *(undefined8*)param_1 = 0;
            if (*(long*)pCVar2 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)param_1, pCVar2);
            }

            goto LAB_001072b4;
         }

         if (*(int*)( pCVar2 + 0x18 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

      _err_print_error("action_set_get_name", "modules/openxr/openxr_api.cpp", 0xb8b, "Parameter \"action_set\" is null.", 0, 0);
      *(undefined8*)param_1 = 0;
   }

   LAB_001072b4:if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::action_set_get_handle(RID) */undefined8 OpenXRAPI::action_set_get_handle(OpenXRAPI *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (param_2 == 0) {
      return 0;
   }

   if ((uint)param_2 < *(uint*)( this + 0x3bc )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x3b8 ) ) * 0x20 + *(long*)( *(long*)( this + 0x3a8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x3b8 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x18 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined8*)( lVar2 + 0x10 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("action_set_get_handle", "modules/openxr/openxr_api.cpp", 0xb96, "Parameter \"action_set\" is null.", 0, 0);
   return 0;
}
/* OpenXRAPI::action_set_free(RID) */void OpenXRAPI::action_set_free(OpenXRAPI *this, ulong param_2) {
   long *plVar1;
   pthread_mutex_t *__mutex;
   int iVar2;
   long lVar3;
   ulong uVar4;
   int iVar5;
   uint uVar6;
   char *pcVar7;
   long lVar8;
   long *plVar9;
   undefined8 uVar10;
   uint uVar11;
   char *pcVar12;
   char *pcVar13;
   if (param_2 != 0) {
      uVar11 = (uint)param_2;
      if (uVar11 < *(uint*)( this + 0x3bc )) {
         lVar8 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x3b8 ) ) * 0x20 + *(long*)( *(long*)( this + 0x3a8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x3b8 ) ) * 8 );
         iVar2 = *(int*)( lVar8 + 0x18 );
         if (iVar2 == (int)( param_2 >> 0x20 )) {
            if (( *(long*)( lVar8 + 0x10 ) != 0 ) && ( *(code**)( this + 0x240 ) != (code*)0x0 )) {
               ( **(code**)( this + 0x240 ) )();
            }

            __mutex = (pthread_mutex_t*)( this + 0x3d0 );
            iVar5 = pthread_mutex_lock(__mutex);
            if (iVar5 != 0) {
               /* WARNING: Subroutine does not return */
               std::__throw_system_error(iVar5);
            }

            if (uVar11 < *(uint*)( this + 0x3bc )) {
               uVar4 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x3b8 );
               lVar8 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x3b8 ) ) * 0x20;
               plVar9 = (long*)( *(long*)( *(long*)( this + 0x3a8 ) + uVar4 * 8 ) + lVar8 );
               if ((int)plVar9[3] < 0) {
                  pthread_mutex_unlock(__mutex);
                  _err_print_error(&_LC181, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0, 0);
                  return;
               }

               if (iVar2 == (int)plVar9[3]) {
                  if (*plVar9 != 0) {
                     LOCK();
                     plVar1 = (long*)( *plVar9 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *plVar9;
                        *plVar9 = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                     plVar9 = (long*)( *(long*)( *(long*)( this + 0x3a8 ) + uVar4 * 8 ) + lVar8 );
                  }

                  *(undefined4*)( plVar9 + 3 ) = 0xffffffff;
                  uVar6 = *(int*)( this + 0x3c0 ) - 1;
                  *(uint*)( this + 0x3c0 ) = uVar6;
                  *(uint*)( *(long*)( *(long*)( this + 0x3b0 ) + ( (ulong)uVar6 / ( ulong ) * (uint*)( this + 0x3b8 ) ) * 8 ) + ( (ulong)uVar6 % ( ulong ) * (uint*)( this + 0x3b8 ) ) * 4 ) = uVar11;
                  pthread_mutex_unlock(__mutex);
                  return;
               }

               pthread_mutex_unlock(__mutex);
               uVar10 = 0x171;
            }
 else {
               pthread_mutex_unlock(__mutex);
               uVar10 = 0x161;
            }

            pcVar7 = "Method/function failed.";
            pcVar12 = "./core/templates/rid_owner.h";
            pcVar13 = "free";
            goto LAB_00107608;
         }

         if (iVar2 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   pcVar7 = "Parameter \"action_set\" is null.";
   uVar10 = 0xbd7;
   pcVar12 = "modules/openxr/openxr_api.cpp";
   pcVar13 = "action_set_free";
   LAB_00107608:_err_print_error(pcVar13, pcVar12, uVar10, pcVar7, 0, 0);
   return;
}
/* OpenXRAPI::get_action_rid(XrAction_T*) */ulong OpenXRAPI::get_action_rid(OpenXRAPI *this, XrAction_T *param_1) {
   undefined1(*pauVar1)[16];
   pthread_mutex_t *__mutex;
   uint uVar2;
   ulong uVar3;
   void *pvVar4;
   long lVar5;
   int iVar6;
   ulong *puVar7;
   long lVar8;
   undefined1(*pauVar9)[16];
   ulong uVar10;
   __mutex = (pthread_mutex_t*)( this + 0x428 );
   iVar6 = pthread_mutex_lock(__mutex);
   if (iVar6 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar6);
   }

   pauVar9 = (undefined1(*) [16])0x0;
   uVar10 = 0;
   if (*(int*)( this + 0x414 ) == 0) {
      pthread_mutex_unlock(__mutex);
   }
 else {
      do {
         uVar2 = *(uint*)( *(long*)( *(long*)( this + 0x400 ) + ( uVar10 / *(uint*)( this + 0x410 ) ) * 8 ) + ( uVar10 % ( ulong ) * (uint*)( this + 0x410 ) ) * 0x38 + 0x30 );
         if (uVar2 != 0xffffffff) {
            if (pauVar9 == (undefined1(*) [16])0x0) {
               pauVar9 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined4*)pauVar9[1] = 0;
               *pauVar9 = (undefined1[16])0x0;
            }

            puVar7 = (ulong*)operator_new(0x20, DefaultAllocator::alloc);
            uVar3 = *(ulong*)( *pauVar9 + 8 );
            puVar7[1] = 0;
            *puVar7 = (ulong)uVar2 << 0x20 | uVar10;
            puVar7[2] = uVar3;
            puVar7[3] = (ulong)pauVar9;
            if (uVar3 != 0) {
               *(ulong**)( uVar3 + 8 ) = puVar7;
            }

            lVar8 = *(long*)*pauVar9;
            *(ulong**)( *pauVar9 + 8 ) = puVar7;
            if (lVar8 == 0) {
               *(ulong**)*pauVar9 = puVar7;
            }

            *(int*)pauVar9[1] = *(int*)pauVar9[1] + 1;
         }

         uVar10 = uVar10 + 1;
      }
 while ( uVar10 < *(uint*)( this + 0x414 ) );
      pthread_mutex_unlock(__mutex);
      if (pauVar9 != (undefined1(*) [16])0x0) {
         puVar7 = *(ulong**)*pauVar9;
         joined_r0x00107808:if (puVar7 != (ulong*)0x0) {
            do {
               if (*puVar7 != 0) {
                  uVar10 = *puVar7;
                  if ((uint)uVar10 < *(uint*)( this + 0x414 )) {
                     lVar8 = *(long*)( *(long*)( this + 0x400 ) + ( ( uVar10 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x410 ) ) * 8 ) + ( ( uVar10 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x410 ) ) * 0x38;
                     iVar6 = *(int*)( lVar8 + 0x30 );
                     if (iVar6 == (int)( uVar10 >> 0x20 )) {
                        if (*(XrAction_T**)( lVar8 + 0x28 ) == param_1) goto LAB_001078c2;
                     }
 else if (iVar6 + 0x80000000U < 0x7fffffff) goto code_r0x0010787f;
                  }

               }

               puVar7 = (ulong*)puVar7[1];
               if (puVar7 == (ulong*)0x0) break;
            }
 while ( true );
         }

      }

   }

   uVar10 = 0;
   LAB_001078c2:if (pauVar9 != (undefined1(*) [16])0x0) {
      do {
         while (true) {
            pvVar4 = *(void**)*pauVar9;
            if (pvVar4 == (void*)0x0) {
               if (*(int*)pauVar9[1] != 0) {
                  _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                  return uVar10;
               }

               goto LAB_00107916;
            }

            if (pauVar9 != *(undefined1(**) [16])( (long)pvVar4 + 0x18 )) break;
            lVar8 = *(long*)( (long)pvVar4 + 8 );
            lVar5 = *(long*)( (long)pvVar4 + 0x10 );
            *(long*)*pauVar9 = lVar8;
            if (pvVar4 == *(void**)( *pauVar9 + 8 )) {
               *(long*)( *pauVar9 + 8 ) = lVar5;
            }

            if (lVar5 != 0) {
               *(long*)( lVar5 + 8 ) = lVar8;
               lVar8 = *(long*)( (long)pvVar4 + 8 );
            }

            if (lVar8 != 0) {
               *(long*)( lVar8 + 0x10 ) = lVar5;
            }

            Memory::free_static(pvVar4, false);
            pauVar1 = pauVar9 + 1;
            *(int*)*pauVar1 = *(int*)*pauVar1 + -1;
            if (*(int*)*pauVar1 == 0) goto LAB_00107916;
         }
;
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }
 while ( *(int*)pauVar9[1] != 0 );
      LAB_00107916:Memory::free_static(pauVar9, false);
   }

   return uVar10;
   code_r0x0010787f:_err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
   puVar7 = (ulong*)puVar7[1];
   goto joined_r0x00107808;
}
/* OpenXRAPI::find_action(String const&, RID const&) */ulong OpenXRAPI::find_action(OpenXRAPI *this, String *param_1, RID *param_2) {
   undefined1(*pauVar1)[16];
   pthread_mutex_t *__mutex;
   long *plVar2;
   uint uVar3;
   ulong uVar4;
   void *pvVar5;
   long lVar6;
   char cVar7;
   int iVar8;
   ulong *puVar9;
   long lVar10;
   undefined1(*pauVar11)[16];
   ulong uVar12;
   __mutex = (pthread_mutex_t*)( this + 0x428 );
   iVar8 = pthread_mutex_lock(__mutex);
   if (iVar8 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar8);
   }

   pauVar11 = (undefined1(*) [16])0x0;
   uVar12 = 0;
   if (*(int*)( this + 0x414 ) == 0) {
      pthread_mutex_unlock(__mutex);
   }
 else {
      do {
         uVar3 = *(uint*)( *(long*)( *(long*)( this + 0x400 ) + ( uVar12 / *(uint*)( this + 0x410 ) ) * 8 ) + ( uVar12 % ( ulong ) * (uint*)( this + 0x410 ) ) * 0x38 + 0x30 );
         if (uVar3 != 0xffffffff) {
            if (pauVar11 == (undefined1(*) [16])0x0) {
               pauVar11 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined4*)pauVar11[1] = 0;
               *pauVar11 = (undefined1[16])0x0;
            }

            puVar9 = (ulong*)operator_new(0x20, DefaultAllocator::alloc);
            uVar4 = *(ulong*)( *pauVar11 + 8 );
            puVar9[1] = 0;
            *puVar9 = (ulong)uVar3 << 0x20 | uVar12;
            puVar9[2] = uVar4;
            puVar9[3] = (ulong)pauVar11;
            if (uVar4 != 0) {
               *(ulong**)( uVar4 + 8 ) = puVar9;
            }

            lVar10 = *(long*)*pauVar11;
            *(ulong**)( *pauVar11 + 8 ) = puVar9;
            if (lVar10 == 0) {
               *(ulong**)*pauVar11 = puVar9;
            }

            *(int*)pauVar11[1] = *(int*)pauVar11[1] + 1;
         }

         uVar12 = uVar12 + 1;
      }
 while ( uVar12 < *(uint*)( this + 0x414 ) );
      pthread_mutex_unlock(__mutex);
      if (pauVar11 != (undefined1(*) [16])0x0) {
         puVar9 = *(ulong**)*pauVar11;
         joined_r0x00107b31:if (puVar9 != (ulong*)0x0) {
            do {
               if (*puVar9 != 0) {
                  uVar12 = *puVar9;
                  if ((uint)uVar12 < *(uint*)( this + 0x414 )) {
                     plVar2 = (long*)( *(long*)( *(long*)( this + 0x400 ) + ( ( uVar12 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x410 ) ) * 8 ) + ( ( uVar12 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x410 ) ) * 0x38 );
                     if ((int)plVar2[6] == (int)( uVar12 >> 0x20 )) {
                        cVar7 = String::operator ==((String*)( plVar2 + 1 ), param_1);
                        if (( cVar7 != '\0' ) && ( ( *(long*)param_2 == 0 || ( *(long*)param_2 == *plVar2 ) ) )) {
                           uVar12 = *puVar9;
                           goto LAB_00107c12;
                        }

                     }
 else if ((int)plVar2[6] + 0x80000000U < 0x7fffffff) goto code_r0x00107bd1;
                  }

               }

               puVar9 = (ulong*)puVar9[1];
               if (puVar9 == (ulong*)0x0) break;
            }
 while ( true );
         }

      }

   }

   uVar12 = 0;
   LAB_00107c12:if (pauVar11 != (undefined1(*) [16])0x0) {
      do {
         while (true) {
            pvVar5 = *(void**)*pauVar11;
            if (pvVar5 == (void*)0x0) {
               if (*(int*)pauVar11[1] != 0) {
                  _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                  return uVar12;
               }

               goto LAB_00107c66;
            }

            if (pauVar11 != *(undefined1(**) [16])( (long)pvVar5 + 0x18 )) break;
            lVar10 = *(long*)( (long)pvVar5 + 8 );
            lVar6 = *(long*)( (long)pvVar5 + 0x10 );
            *(long*)*pauVar11 = lVar10;
            if (pvVar5 == *(void**)( *pauVar11 + 8 )) {
               *(long*)( *pauVar11 + 8 ) = lVar6;
            }

            if (lVar6 != 0) {
               *(long*)( lVar6 + 8 ) = lVar10;
               lVar10 = *(long*)( (long)pvVar5 + 8 );
            }

            if (lVar10 != 0) {
               *(long*)( lVar10 + 0x10 ) = lVar6;
            }

            Memory::free_static(pvVar5, false);
            pauVar1 = pauVar11 + 1;
            *(int*)*pauVar1 = *(int*)*pauVar1 + -1;
            if (*(int*)*pauVar1 == 0) goto LAB_00107c66;
         }
;
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }
 while ( *(int*)pauVar11[1] != 0 );
      LAB_00107c66:Memory::free_static(pauVar11, false);
   }

   return uVar12;
   code_r0x00107bd1:_err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
   puVar9 = (ulong*)puVar9[1];
   goto joined_r0x00107b31;
}
/* OpenXRAPI::action_get_name(RID) */StrRange *OpenXRAPI::action_get_name(StrRange *param_1, long param_2, ulong param_3) {
   long lVar1;
   long lVar2;
   long in_FS_OFFSET;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 == 0) {
      *(undefined8*)param_1 = 0;
      String::parse_latin1(param_1);
   }
 else {
      if ((uint)param_3 < *(uint*)( param_2 + 0x414 )) {
         lVar1 = *(long*)( *(long*)( param_2 + 0x400 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x410 ) ) * 8 ) + ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x410 ) ) * 0x38;
         if (*(int*)( lVar1 + 0x30 ) == (int)( param_3 >> 0x20 )) {
            *(undefined8*)param_1 = 0;
            if (*(long*)( lVar1 + 8 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)param_1, (CowData*)( lVar1 + 8 ));
            }

            goto LAB_00107da4;
         }

         if (*(int*)( lVar1 + 0x30 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

      _err_print_error("action_get_name", "modules/openxr/openxr_api.cpp", 0xc47, "Parameter \"action\" is null.", 0, 0);
      *(undefined8*)param_1 = 0;
   }

   LAB_00107da4:if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::action_get_handle(RID) */undefined8 OpenXRAPI::action_get_handle(OpenXRAPI *this, ulong param_2) {
   long lVar1;
   int iVar2;
   if (param_2 == 0) {
      return 0;
   }

   if ((uint)param_2 < *(uint*)( this + 0x414 )) {
      lVar1 = *(long*)( *(long*)( this + 0x400 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x410 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x410 ) ) * 0x38;
      iVar2 = *(int*)( lVar1 + 0x30 );
      if (iVar2 == (int)( param_2 >> 0x20 )) {
         return *(undefined8*)( lVar1 + 0x28 );
      }

      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("action_get_handle", "modules/openxr/openxr_api.cpp", 0xc52, "Parameter \"action\" is null.", 0, 0);
   return 0;
}
/* OpenXRAPI::action_free(RID) */void OpenXRAPI::action_free(OpenXRAPI *this, ulong param_2) {
   long *plVar1;
   pthread_mutex_t *__mutex;
   int iVar2;
   long lVar3;
   ulong uVar4;
   int iVar5;
   uint uVar6;
   char *pcVar7;
   undefined8 uVar8;
   uint uVar9;
   char *pcVar10;
   char *pcVar11;
   long lVar12;
   long lVar13;
   if (param_2 != 0) {
      uVar9 = (uint)param_2;
      if (uVar9 < *(uint*)( this + 0x414 )) {
         lVar12 = *(long*)( *(long*)( this + 0x400 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x410 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x410 ) ) * 0x38;
         iVar2 = *(int*)( lVar12 + 0x30 );
         if (iVar2 == (int)( param_2 >> 0x20 )) {
            if (( *(long*)( lVar12 + 0x28 ) != 0 ) && ( *(code**)( this + 0x238 ) != (code*)0x0 )) {
               ( **(code**)( this + 0x238 ) )();
            }

            __mutex = (pthread_mutex_t*)( this + 0x428 );
            iVar5 = pthread_mutex_lock(__mutex);
            if (iVar5 != 0) {
               /* WARNING: Subroutine does not return */
               std::__throw_system_error(iVar5);
            }

            if (uVar9 < *(uint*)( this + 0x414 )) {
               uVar4 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x410 );
               lVar13 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x410 ) ) * 0x38;
               lVar12 = *(long*)( *(long*)( this + 0x400 ) + uVar4 * 8 ) + lVar13;
               if (*(int*)( lVar12 + 0x30 ) < 0) {
                  pthread_mutex_unlock(__mutex);
                  _err_print_error(&_LC181, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0, 0);
                  return;
               }

               if (iVar2 == *(int*)( lVar12 + 0x30 )) {
                  if (*(long*)( lVar12 + 0x20 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( lVar12 + 0x20 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( lVar12 + 0x20 );
                        *(undefined8*)( lVar12 + 0x20 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (*(long*)( lVar12 + 8 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( lVar12 + 8 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( lVar12 + 8 );
                        *(undefined8*)( lVar12 + 8 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  lVar12 = *(long*)( this + 0x408 );
                  *(undefined4*)( *(long*)( *(long*)( this + 0x400 ) + uVar4 * 8 ) + 0x30 + lVar13 ) = 0xffffffff;
                  uVar6 = *(int*)( this + 0x418 ) - 1;
                  *(uint*)( this + 0x418 ) = uVar6;
                  *(uint*)( *(long*)( lVar12 + ( (ulong)uVar6 / ( ulong ) * (uint*)( this + 0x410 ) ) * 8 ) + ( (ulong)uVar6 % ( ulong ) * (uint*)( this + 0x410 ) ) * 4 ) = uVar9;
                  pthread_mutex_unlock(__mutex);
                  return;
               }

               pthread_mutex_unlock(__mutex);
               uVar8 = 0x171;
            }
 else {
               pthread_mutex_unlock(__mutex);
               uVar8 = 0x161;
            }

            pcVar7 = "Method/function failed.";
            pcVar10 = "./core/templates/rid_owner.h";
            pcVar11 = "free";
            goto LAB_00108160;
         }

         if (iVar2 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   pcVar7 = "Parameter \"action\" is null.";
   uVar8 = 0xc59;
   pcVar10 = "modules/openxr/openxr_api.cpp";
   pcVar11 = "action_free";
   LAB_00108160:_err_print_error(pcVar11, pcVar10, uVar8, pcVar7, 0, 0);
   return;
}
/* OpenXRAPI::get_interaction_profile_rid(unsigned long) */ulong OpenXRAPI::get_interaction_profile_rid(OpenXRAPI *this, ulong param_1) {
   undefined1(*pauVar1)[16];
   pthread_mutex_t *__mutex;
   uint uVar2;
   ulong uVar3;
   void *pvVar4;
   long lVar5;
   int iVar6;
   ulong *puVar7;
   long lVar8;
   undefined1(*pauVar9)[16];
   ulong uVar10;
   __mutex = (pthread_mutex_t*)( this + 0x480 );
   iVar6 = pthread_mutex_lock(__mutex);
   if (iVar6 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar6);
   }

   pauVar9 = (undefined1(*) [16])0x0;
   uVar10 = 0;
   if (*(int*)( this + 0x46c ) == 0) {
      pthread_mutex_unlock(__mutex);
   }
 else {
      do {
         uVar2 = *(uint*)( *(long*)( *(long*)( this + 0x458 ) + ( uVar10 / *(uint*)( this + 0x468 ) ) * 8 ) + ( uVar10 % ( ulong ) * (uint*)( this + 0x468 ) ) * 0x38 + 0x30 );
         if (uVar2 != 0xffffffff) {
            if (pauVar9 == (undefined1(*) [16])0x0) {
               pauVar9 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined4*)pauVar9[1] = 0;
               *pauVar9 = (undefined1[16])0x0;
            }

            puVar7 = (ulong*)operator_new(0x20, DefaultAllocator::alloc);
            uVar3 = *(ulong*)( *pauVar9 + 8 );
            puVar7[1] = 0;
            *puVar7 = (ulong)uVar2 << 0x20 | uVar10;
            puVar7[2] = uVar3;
            puVar7[3] = (ulong)pauVar9;
            if (uVar3 != 0) {
               *(ulong**)( uVar3 + 8 ) = puVar7;
            }

            lVar8 = *(long*)*pauVar9;
            *(ulong**)( *pauVar9 + 8 ) = puVar7;
            if (lVar8 == 0) {
               *(ulong**)*pauVar9 = puVar7;
            }

            *(int*)pauVar9[1] = *(int*)pauVar9[1] + 1;
         }

         uVar10 = uVar10 + 1;
      }
 while ( uVar10 < *(uint*)( this + 0x46c ) );
      pthread_mutex_unlock(__mutex);
      if (pauVar9 != (undefined1(*) [16])0x0) {
         puVar7 = *(ulong**)*pauVar9;
         joined_r0x00108358:if (puVar7 != (ulong*)0x0) {
            do {
               if (*puVar7 != 0) {
                  uVar10 = *puVar7;
                  if ((uint)uVar10 < *(uint*)( this + 0x46c )) {
                     lVar8 = *(long*)( *(long*)( this + 0x458 ) + ( ( uVar10 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x468 ) ) * 8 ) + ( ( uVar10 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x468 ) ) * 0x38;
                     iVar6 = *(int*)( lVar8 + 0x30 );
                     if (iVar6 == (int)( uVar10 >> 0x20 )) {
                        if (*(ulong*)( lVar8 + 8 ) == param_1) goto LAB_00108412;
                     }
 else if (iVar6 + 0x80000000U < 0x7fffffff) goto code_r0x001083cf;
                  }

               }

               puVar7 = (ulong*)puVar7[1];
               if (puVar7 == (ulong*)0x0) break;
            }
 while ( true );
         }

      }

   }

   uVar10 = 0;
   LAB_00108412:if (pauVar9 != (undefined1(*) [16])0x0) {
      do {
         while (true) {
            pvVar4 = *(void**)*pauVar9;
            if (pvVar4 == (void*)0x0) {
               if (*(int*)pauVar9[1] != 0) {
                  _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                  return uVar10;
               }

               goto LAB_00108466;
            }

            if (pauVar9 != *(undefined1(**) [16])( (long)pvVar4 + 0x18 )) break;
            lVar8 = *(long*)( (long)pvVar4 + 8 );
            lVar5 = *(long*)( (long)pvVar4 + 0x10 );
            *(long*)*pauVar9 = lVar8;
            if (pvVar4 == *(void**)( *pauVar9 + 8 )) {
               *(long*)( *pauVar9 + 8 ) = lVar5;
            }

            if (lVar5 != 0) {
               *(long*)( lVar5 + 8 ) = lVar8;
               lVar8 = *(long*)( (long)pvVar4 + 8 );
            }

            if (lVar8 != 0) {
               *(long*)( lVar8 + 0x10 ) = lVar5;
            }

            Memory::free_static(pvVar4, false);
            pauVar1 = pauVar9 + 1;
            *(int*)*pauVar1 = *(int*)*pauVar1 + -1;
            if (*(int*)*pauVar1 == 0) goto LAB_00108466;
         }
;
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }
 while ( *(int*)pauVar9[1] != 0 );
      LAB_00108466:Memory::free_static(pauVar9, false);
   }

   return uVar10;
   code_r0x001083cf:_err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
   puVar7 = (ulong*)puVar7[1];
   goto joined_r0x00108358;
}
/* OpenXRAPI::get_interaction_profile_path(RID) */undefined8 OpenXRAPI::get_interaction_profile_path(OpenXRAPI *this, ulong param_2) {
   long lVar1;
   int iVar2;
   if (param_2 == 0) {
      return 0;
   }

   if ((uint)param_2 < *(uint*)( this + 0x46c )) {
      lVar1 = *(long*)( *(long*)( this + 0x458 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x468 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x468 ) ) * 0x38;
      iVar2 = *(int*)( lVar1 + 0x30 );
      if (iVar2 == (int)( param_2 >> 0x20 )) {
         return *(undefined8*)( lVar1 + 8 );
      }

      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("get_interaction_profile_path", "modules/openxr/openxr_api.cpp", 0xc75, "Parameter \"ip\" is null.", 0, 0);
   return 0;
}
/* OpenXRAPI::interaction_profile_get_name(RID) */StrRange *OpenXRAPI::interaction_profile_get_name(StrRange *param_1, long param_2, ulong param_3) {
   CowData *pCVar1;
   long lVar2;
   long in_FS_OFFSET;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 == 0) {
      *(undefined8*)param_1 = 0;
      String::parse_latin1(param_1);
   }
 else {
      if ((uint)param_3 < *(uint*)( param_2 + 0x46c )) {
         pCVar1 = (CowData*)( *(long*)( *(long*)( param_2 + 0x458 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x468 ) ) * 8 ) + ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x468 ) ) * 0x38 );
         if (*(int*)( pCVar1 + 0x30 ) == (int)( param_3 >> 0x20 )) {
            *(undefined8*)param_1 = 0;
            if (*(long*)pCVar1 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)param_1, pCVar1);
            }

            goto LAB_00108674;
         }

         if (*(int*)( pCVar1 + 0x30 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

      _err_print_error("interaction_profile_get_name", "modules/openxr/openxr_api.cpp", 0xc97, "Parameter \"ip\" is null.", 0, 0);
      *(undefined8*)param_1 = 0;
   }

   LAB_00108674:if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::get_supported_environment_blend_modes() */void OpenXRAPI::get_supported_environment_blend_modes(void) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long in_RSI;
   long in_RDI;
   bool bVar4;
   *(undefined8*)( in_RDI + 8 ) = 0;
   plVar1 = (long*)( *(long*)( in_RSI + 0xc0 ) + -0x10 );
   if (*(long*)( in_RSI + 0xc0 ) != 0) {
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
         *(undefined8*)( in_RDI + 8 ) = *(undefined8*)( in_RSI + 0xc0 );
      }

   }

   return;
}
/* OpenXRAPI::is_environment_blend_mode_supported(XrEnvironmentBlendMode) const */undefined8 OpenXRAPI::is_environment_blend_mode_supported(OpenXRAPI *this, int param_2) {
   long lVar1;
   long lVar2;
   lVar1 = *(long*)( this + 0xc0 );
   if (( lVar1 != 0 ) && ( 0 < *(long*)( lVar1 + -8 ) )) {
      lVar2 = 0;
      do {
         if (*(int*)( lVar1 + lVar2 * 4 ) == param_2) {
            return 1;
         }

         lVar2 = lVar2 + 1;
      }
 while ( *(long*)( lVar1 + -8 ) != lVar2 );
   }

   return 0;
}
/* OpenXRAPI::set_environment_blend_mode(XrEnvironmentBlendMode) */byte OpenXRAPI::set_environment_blend_mode(OpenXRAPI *this, int param_2) {
   long lVar1;
   byte bVar2;
   long lVar3;
   undefined8 uVar4;
   bVar2 = param_2 == 3 & (byte)this[200];
   uVar4 = _LC194;
   if (bVar2 == 0) {
      if (*(long*)( this + 0xd0 ) != 0) {
         lVar1 = *(long*)( this + 0xc0 );
         if (lVar1 == 0) {
            return 0;
         }

         if (*(long*)( lVar1 + -8 ) < 1) {
            return 0;
         }

         lVar3 = 0;
         while (param_2 != *(int*)( lVar1 + lVar3 * 4 )) {
            lVar3 = lVar3 + 1;
            if (*(long*)( lVar1 + -8 ) == lVar3) {
               return bVar2;
            }

         }
;
      }

      uVar4 = CONCAT44(param_2, param_2);
   }

   *(undefined8*)( this + 0xac ) = uVar4;
   return 1;
}
/* OpenXRAPI::set_emulate_environment_blend_mode_alpha_blend(bool) */void OpenXRAPI::set_emulate_environment_blend_mode_alpha_blend(OpenXRAPI *this, bool param_1) {
   this[200] = (OpenXRAPI)param_1;
   return;
}
/* OpenXRAPI::is_environment_blend_mode_alpha_blend_supported() */undefined8 OpenXRAPI::is_environment_blend_mode_alpha_blend_supported(OpenXRAPI *this) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   long lVar4;
   uVar3 = 2;
   if (this[200] == (OpenXRAPI)0x0) {
      lVar1 = *(long*)( this + 0xc0 );
      if (( ( lVar1 != 0 ) && ( lVar2 = *(long*)( lVar1 + -8 ) ),lVar2 != 0 )) {
         lVar4 = 0;
         do {
            if (*(int*)( lVar1 + lVar4 * 4 ) == 3) {
               return 1;
            }

            lVar4 = lVar4 + 1;
         }
 while ( lVar2 != lVar4 );
      }

      uVar3 = 0;
   }

   return uVar3;
}
/* OpenXRAPI::load_layer_properties() */undefined8 OpenXRAPI::load_layer_properties(OpenXRAPI *this) {
   long *plVar1;
   code *pcVar2;
   uint uVar3;
   long lVar4;
   char *pcVar5;
   char cVar6;
   int iVar7;
   undefined4 *puVar8;
   undefined8 uVar9;
   undefined4 *puVar10;
   uint uVar11;
   undefined4 *puVar12;
   long lVar13;
   long lVar14;
   long in_FS_OFFSET;
   uint local_7c;
   long local_78;
   long local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 8 ) == 0) {
      local_7c = 0;
      if (*(code**)( this + 0x278 ) != (code*)0x0) {
         iVar7 = ( **(code**)( this + 0x278 ) )(0, &local_7c, 0);
         uVar3 = local_7c;
         if (-1 < iVar7) {
            uVar11 = *(uint*)( this + 8 );
            puVar10 = *(undefined4**)( this + 0x10 );
            if (local_7c < uVar11) {
               *(uint*)( this + 8 ) = local_7c;
               uVar11 = uVar3;
            }
 else if (uVar11 < local_7c) {
               if (*(uint*)( this + 0xc ) < local_7c) {
                  uVar11 = local_7c - 1 >> 1 | local_7c - 1;
                  uVar11 = uVar11 | uVar11 >> 2;
                  uVar11 = uVar11 | uVar11 >> 4;
                  uVar11 = uVar11 | uVar11 >> 8;
                  uVar11 = ( uVar11 | uVar11 >> 0x10 ) + 1;
                  *(uint*)( this + 0xc ) = uVar11;
                  puVar10 = (undefined4*)Memory::realloc_static(puVar10, (ulong)uVar11 * 0x220, false);
                  *(undefined4**)( this + 0x10 ) = puVar10;
                  if (puVar10 == (undefined4*)0x0) {
                     _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar2 = (code*)invalidInstructionException();
                     ( *pcVar2 )();
                  }

               }

               *(uint*)( this + 8 ) = uVar3;
               uVar11 = uVar3;
            }

            puVar12 = puVar10 + (ulong)uVar11 * 0x88;
            if (puVar10 != puVar12) {
               do {
                  *puVar10 = 1;
                  puVar8 = puVar10 + 0x88;
                  *(undefined8*)( puVar10 + 2 ) = 0;
                  puVar10 = puVar8;
               }
 while ( puVar12 != puVar8 );
               puVar12 = *(undefined4**)( this + 0x10 );
            }

            if (( *(code**)( this + 0x278 ) == (code*)0x0 ) || ( iVar7 = iVar7 < 0 )) {
               _err_print_error("load_layer_properties", "modules/openxr/openxr_api.cpp", 0x17a, "Condition \"((result) < 0)\" is true. Returning: false", "OpenXR: Failed to enumerate api layer properties", 0, 0);
               uVar9 = 0;
               goto LAB_00108b15;
            }

            lVar13 = *(long*)( this + 0x10 );
            lVar14 = ( ulong ) * (uint*)( this + 8 ) * 0x220 + lVar13;
            if (lVar14 != lVar13) {
               do {
                  while (cVar6 = is_print_verbose_enabled(),cVar6 == '\0') {
                     LAB_001089e0:lVar13 = lVar13 + 0x220;
                     if (lVar14 == lVar13) goto LAB_00108b10;
                  }
;
                  local_78 = 0;
                  local_68 = "OpenXR: Found OpenXR layer %s.";
                  local_60 = 0x1e;
                  String::parse_latin1((StrRange*)&local_78);
                  vformat<char_const*>((String*)&local_70, (char*)&local_78);
                  Variant::Variant((Variant*)local_58, (String*)&local_70);
                  stringify_variants((Variant*)&local_68);
                  __print_line((String*)&local_68);
                  pcVar5 = local_68;
                  if (local_68 != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_68 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_68 = (char*)0x0;
                        Memory::free_static(pcVar5 + -0x10, false);
                     }

                  }

                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  lVar4 = local_70;
                  if (local_70 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_70 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_70 = 0;
                        Memory::free_static((void*)( lVar4 + -0x10 ), false);
                     }

                  }

                  lVar4 = local_78;
                  if (local_78 == 0) goto LAB_001089e0;
                  LOCK();
                  plVar1 = (long*)( local_78 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 != 0) goto LAB_001089e0;
                  lVar13 = lVar13 + 0x220;
                  local_78 = 0;
                  Memory::free_static((void*)( lVar4 + -0x10 ), false);
               }
 while ( lVar14 != lVar13 );
            }

            goto LAB_00108b10;
         }

      }

      _err_print_error("load_layer_properties", "modules/openxr/openxr_api.cpp", 0x171, "Condition \"((result) < 0)\" is true. Returning: false", "OpenXR: Failed to enumerate number of api layer properties", 0, 0);
      uVar9 = 0;
   }
 else {
      LAB_00108b10:uVar9 = 1;
   }

   LAB_00108b15:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar9;
}
/* OpenXRAPI::load_supported_extensions() */undefined8 OpenXRAPI::load_supported_extensions(OpenXRAPI *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   uint uVar4;
   long lVar5;
   char *pcVar6;
   char cVar7;
   int iVar8;
   undefined4 *puVar9;
   undefined8 uVar10;
   undefined4 *puVar11;
   undefined4 *puVar12;
   uint uVar13;
   ulong uVar14;
   long lVar15;
   long in_FS_OFFSET;
   uint local_7c;
   long local_78;
   long local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0x18 ) == 0) {
      local_7c = 0;
      if (*(code**)( this + 0x288 ) != (code*)0x0) {
         iVar8 = ( **(code**)( this + 0x288 ) )(0, 0, &local_7c, 0);
         uVar4 = local_7c;
         if (-1 < iVar8) {
            uVar13 = *(uint*)( this + 0x18 );
            uVar14 = (ulong)uVar13;
            puVar11 = *(undefined4**)( this + 0x20 );
            if (local_7c < uVar13) {
               *(uint*)( this + 0x18 ) = local_7c;
               uVar14 = (ulong)local_7c;
            }
 else if (uVar13 < local_7c) {
               if (*(uint*)( this + 0x1c ) < local_7c) {
                  uVar13 = local_7c - 1 >> 1 | local_7c - 1;
                  uVar13 = uVar13 | uVar13 >> 2;
                  uVar13 = uVar13 | uVar13 >> 4;
                  uVar13 = uVar13 | uVar13 >> 8;
                  uVar13 = ( uVar13 | uVar13 >> 0x10 ) + 1;
                  *(uint*)( this + 0x1c ) = uVar13;
                  puVar11 = (undefined4*)Memory::realloc_static(puVar11, (ulong)uVar13 * 0x98, false);
                  *(undefined4**)( this + 0x20 ) = puVar11;
                  if (puVar11 == (undefined4*)0x0) {
                     _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar3 = (code*)invalidInstructionException();
                     ( *pcVar3 )();
                  }

               }

               *(uint*)( this + 0x18 ) = uVar4;
               uVar14 = (ulong)uVar4;
            }

            puVar12 = puVar11 + uVar14 * 0x26;
            if (puVar11 != puVar12) {
               do {
                  *puVar11 = 2;
                  puVar9 = puVar11 + 0x26;
                  *(undefined8*)( puVar11 + 2 ) = 0;
                  puVar11 = puVar9;
               }
 while ( puVar12 != puVar9 );
               puVar12 = *(undefined4**)( this + 0x20 );
            }

            if (( *(code**)( this + 0x288 ) == (code*)0x0 ) || ( iVar8 = iVar8 < 0 )) {
               _err_print_error("load_supported_extensions", "modules/openxr/openxr_api.cpp", 0x198, "Condition \"((result) < 0)\" is true. Returning: false", "OpenXR: Failed to enumerate extension properties", 0, 0);
               uVar10 = 0;
               goto LAB_00108eb5;
            }

            lVar15 = *(long*)( this + 0x20 );
            lVar2 = lVar15 + ( ulong ) * (uint*)( this + 0x18 ) * 0x98;
            if (lVar2 != lVar15) {
               do {
                  while (cVar7 = is_print_verbose_enabled(),cVar7 == '\0') {
                     LAB_00108d80:lVar15 = lVar15 + 0x98;
                     if (lVar2 == lVar15) goto LAB_00108eb0;
                  }
;
                  local_78 = 0;
                  local_68 = "OpenXR: Found OpenXR extension %s.";
                  local_60 = 0x22;
                  String::parse_latin1((StrRange*)&local_78);
                  vformat<char_const*>((String*)&local_70, (char*)&local_78);
                  Variant::Variant((Variant*)local_58, (String*)&local_70);
                  stringify_variants((Variant*)&local_68);
                  __print_line((String*)&local_68);
                  pcVar6 = local_68;
                  if (local_68 != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_68 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_68 = (char*)0x0;
                        Memory::free_static(pcVar6 + -0x10, false);
                     }

                  }

                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  lVar5 = local_70;
                  if (local_70 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_70 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_70 = 0;
                        Memory::free_static((void*)( lVar5 + -0x10 ), false);
                     }

                  }

                  lVar5 = local_78;
                  if (local_78 == 0) goto LAB_00108d80;
                  LOCK();
                  plVar1 = (long*)( local_78 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 != 0) goto LAB_00108d80;
                  lVar15 = lVar15 + 0x98;
                  local_78 = 0;
                  Memory::free_static((void*)( lVar5 + -0x10 ), false);
               }
 while ( lVar2 != lVar15 );
            }

            goto LAB_00108eb0;
         }

      }

      _err_print_error("load_supported_extensions", "modules/openxr/openxr_api.cpp", 0x18e, "Condition \"((result) < 0)\" is true. Returning: false", "OpenXR: Failed to enumerate number of extension properties", 0, 0);
      uVar10 = 0;
   }
 else {
      LAB_00108eb0:uVar10 = 1;
   }

   LAB_00108eb5:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar10;
}
/* OpenXRAPI::transform_from_location(XrSpaceLocation const&, Transform3D&) */void OpenXRAPI::transform_from_location(OpenXRAPI *this, XrSpaceLocation *param_1, Transform3D *param_2) {
   _transform_from_location<XrSpaceLocation>(param_1, param_2);
   return;
}
/* OpenXRAPI::is_top_level_path_supported(String const&) */undefined8 OpenXRAPI::is_top_level_path_supported(OpenXRAPI *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   char cVar4;
   long lVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   bool bVar7;
   long local_90;
   CowData<char32_t> local_88[8];
   undefined8 local_80;
   String local_78[8];
   String local_70[8];
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   uVar6 = OpenXRInteractionProfileMetadata::singleton;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = (char*)0x0;
   if (*(long*)param_1 != 0) {
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_00109095;
         LOCK();
         lVar5 = *plVar1;
         bVar7 = lVar2 == lVar5;
         if (bVar7) {
            *plVar1 = lVar2 + 1;
            lVar5 = lVar2;
         }

         UNLOCK();
      }
 while ( !bVar7 );
      if (lVar5 != -1) {
         local_68 = *(char**)param_1;
      }

   }

   LAB_00109095:OpenXRInteractionProfileMetadata::get_top_level_extension((String*)&local_90, uVar6, (Variant*)&local_68);
   pcVar3 = local_68;
   if (local_68 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (char*)0x0;
         Memory::free_static(pcVar3 + -0x10, false);
      }

   }

   cVar4 = String::operator ==((String*)&local_90, "unsupported");
   if (cVar4 == '\0') {
      cVar4 = String::operator ==((String*)&local_90, "");
      if (( cVar4 != '\0' ) || ( cVar4 = is_extension_enabled((String*)this) ),cVar4 != '\0') {
         uVar6 = 1;
         goto LAB_001090ef;
      }

      cVar4 = is_print_verbose_enabled();
      if (cVar4 != '\0') {
         local_80 = 0;
         local_68 = " requires extension ";
         local_60 = 0x14;
         String::parse_latin1((StrRange*)&local_80);
         operator+((char *)
         local_88,(String*)"OpenXR: Top level path ";
         String::operator +(local_78, (String*)local_88);
         String::operator +(local_70, local_78);
         Variant::Variant((Variant*)local_58, local_70);
         stringify_variants((Variant*)&local_68);
         __print_line((String*)&local_68);
         pcVar3 = local_68;
         if (local_68 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_68 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_68 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }

         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)local_70);
         uVar6 = 0;
         CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
         CowData<char32_t>::_unref(local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
         goto LAB_001090ef;
      }

   }
 else {
      operator+((char *)&
      local_68,(String*)"OpenXR: Unsupported toplevel path ";
      _err_print_error("is_top_level_path_supported", "modules/openxr/openxr_api.cpp", 0x1bb, "Condition \"required_extension == \"unsupported\"\" is true. Returning: false", (Variant*)&local_68, 0);
      pcVar3 = local_68;
      if (local_68 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            uVar6 = 0;
            local_68 = (char*)0x0;
            Memory::free_static(pcVar3 + -0x10, false);
            goto LAB_001090ef;
         }

      }

   }

   uVar6 = 0;
   LAB_001090ef:lVar2 = local_90;
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

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar6;
}
/* OpenXRAPI::is_interaction_profile_supported(String const&) */undefined8 OpenXRAPI::is_interaction_profile_supported(OpenXRAPI *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   char cVar4;
   long lVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   bool bVar7;
   long local_90;
   CowData<char32_t> local_88[8];
   undefined8 local_80;
   String local_78[8];
   String local_70[8];
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   uVar6 = OpenXRInteractionProfileMetadata::singleton;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = (char*)0x0;
   if (*(long*)param_1 != 0) {
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_00109385;
         LOCK();
         lVar5 = *plVar1;
         bVar7 = lVar2 == lVar5;
         if (bVar7) {
            *plVar1 = lVar2 + 1;
            lVar5 = lVar2;
         }

         UNLOCK();
      }
 while ( !bVar7 );
      if (lVar5 != -1) {
         local_68 = *(char**)param_1;
      }

   }

   LAB_00109385:OpenXRInteractionProfileMetadata::get_interaction_profile_extension((String*)&local_90, uVar6, (Variant*)&local_68);
   pcVar3 = local_68;
   if (local_68 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (char*)0x0;
         Memory::free_static(pcVar3 + -0x10, false);
      }

   }

   cVar4 = String::operator ==((String*)&local_90, "unsupported");
   if (cVar4 == '\0') {
      cVar4 = String::operator ==((String*)&local_90, "");
      if (( cVar4 != '\0' ) || ( cVar4 = is_extension_enabled((String*)this) ),cVar4 != '\0') {
         uVar6 = 1;
         goto LAB_001093df;
      }

      cVar4 = is_print_verbose_enabled();
      if (cVar4 != '\0') {
         local_80 = 0;
         local_68 = " requires extension ";
         local_60 = 0x14;
         String::parse_latin1((StrRange*)&local_80);
         operator+((char *)
         local_88,(String*)"OpenXR: Interaction profile ";
         String::operator +(local_78, (String*)local_88);
         String::operator +(local_70, local_78);
         Variant::Variant((Variant*)local_58, local_70);
         stringify_variants((Variant*)&local_68);
         __print_line((String*)&local_68);
         pcVar3 = local_68;
         if (local_68 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_68 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_68 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }

         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)local_70);
         uVar6 = 0;
         CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
         CowData<char32_t>::_unref(local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
         goto LAB_001093df;
      }

   }
 else {
      operator+((char *)&
      local_68,(String*)"OpenXR: Unsupported interaction profile ";
      _err_print_error("is_interaction_profile_supported", "modules/openxr/openxr_api.cpp", 0x1cf, "Condition \"required_extension == \"unsupported\"\" is true. Returning: false", (Variant*)&local_68, 0);
      pcVar3 = local_68;
      if (local_68 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            uVar6 = 0;
            local_68 = (char*)0x0;
            Memory::free_static(pcVar3 + -0x10, false);
            goto LAB_001093df;
         }

      }

   }

   uVar6 = 0;
   LAB_001093df:lVar2 = local_90;
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

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar6;
}
/* OpenXRAPI::interaction_profile_supports_io_path(String const&, String const&) */undefined4 OpenXRAPI::interaction_profile_supports_io_path(OpenXRAPI *this, String *param_1, String *param_2) {
   long *plVar1;
   long lVar2;
   undefined8 uVar3;
   char *pcVar4;
   char cVar5;
   undefined4 uVar6;
   long lVar7;
   long in_FS_OFFSET;
   bool bVar8;
   undefined8 local_a0;
   CowData<char32_t> local_98[8];
   undefined8 local_90;
   String local_88[8];
   long local_80;
   long local_78;
   long local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = is_interaction_profile_supported(this, param_1);
   uVar3 = OpenXRInteractionProfileMetadata::singleton;
   if ((char)uVar6 != '\0') {
      local_68 = (char*)0x0;
      plVar1 = (long*)( *(long*)param_2 + -0x10 );
      if (*(long*)param_2 != 0) {
         do {
            lVar2 = *plVar1;
            if (lVar2 == 0) goto LAB_001096c1;
            LOCK();
            lVar7 = *plVar1;
            bVar8 = lVar2 == lVar7;
            if (bVar8) {
               *plVar1 = lVar2 + 1;
               lVar7 = lVar2;
            }

            UNLOCK();
         }
 while ( !bVar8 );
         if (lVar7 != -1) {
            local_68 = *(char**)param_2;
         }

      }

      LAB_001096c1:local_70 = 0;
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
      if (*(long*)param_1 != 0) {
         do {
            lVar2 = *plVar1;
            if (lVar2 == 0) goto LAB_001096f9;
            LOCK();
            lVar7 = *plVar1;
            bVar8 = lVar2 == lVar7;
            if (bVar8) {
               *plVar1 = lVar2 + 1;
               lVar7 = lVar2;
            }

            UNLOCK();
         }
 while ( !bVar8 );
         if (lVar7 != -1) {
            local_70 = *(long*)param_1;
         }

      }

      LAB_001096f9:lVar7 = OpenXRInteractionProfileMetadata::get_io_path(uVar3, (String*)&local_70, (Variant*)&local_68);
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

      pcVar4 = local_68;
      if (local_68 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = (char*)0x0;
            Memory::free_static(pcVar4 + -0x10, false);
         }

      }

      if (lVar7 == 0) {
         local_70 = 0;
         if (*(long*)param_2 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)param_2);
         }

         local_80 = 0;
         if (*(long*)param_1 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)param_1);
         }

         operator+((char *)&
         local_78,(String*)"OpenXR: Unsupported io path ";
         String::operator +((String*)&local_68, (String*)&local_78);
         _err_print_error("interaction_profile_supports_io_path", "modules/openxr/openxr_api.cpp", 0x1e7, "Parameter \"io_path\" is null.", (Variant*)&local_68, 0, 0);
         pcVar4 = local_68;
         if (local_68 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_68 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_68 = (char*)0x0;
               Memory::free_static(pcVar4 + -0x10, false);
            }

         }

         lVar2 = local_78;
         if (local_78 != 0) {
            LOCK();
            plVar1 = (long*)( local_78 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_78 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         lVar2 = local_80;
         if (local_80 != 0) {
            LOCK();
            plVar1 = (long*)( local_80 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_80 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         lVar2 = local_70;
         if (local_70 != 0) {
            LOCK();
            plVar1 = (long*)( local_70 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               uVar6 = 0;
               local_70 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
               goto LAB_00109650;
            }

         }

      }
 else {
         cVar5 = String::operator ==((String*)( lVar7 + 0x18 ), "");
         if (( cVar5 != '\0' ) || ( cVar5 = is_extension_enabled((String*)this) ),cVar5 != '\0') goto LAB_00109650;
         cVar5 = is_print_verbose_enabled();
         if (cVar5 != '\0') {
            local_80 = 0;
            local_68 = " requires extension ";
            local_60 = 0x14;
            String::parse_latin1((StrRange*)&local_80);
            local_90 = 0;
            if (*(long*)param_2 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_90, (CowData*)param_2);
            }

            local_a0 = 0;
            if (*(long*)param_1 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_a0, (CowData*)param_1);
            }

            operator+((char *)
            local_98,(String*)"OpenXR: IO path ";
            String::operator +(local_88, (String*)local_98);
            String::operator +((String*)&local_78, local_88);
            String::operator +((String*)&local_70, (String*)&local_78);
            Variant::Variant((Variant*)local_58, (String*)&local_70);
            stringify_variants((Variant*)&local_68);
            __print_line((String*)&local_68);
            pcVar4 = local_68;
            if (local_68 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_68 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_68 = (char*)0x0;
                  Memory::free_static(pcVar4 + -0x10, false);
               }

            }

            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
            CowData<char32_t>::_unref(local_98);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
            uVar6 = 0;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
            goto LAB_00109650;
         }

      }

   }

   uVar6 = 0;
   LAB_00109650:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar6;
}
/* OpenXRAPI::obtain_swapchain_formats() */undefined8 OpenXRAPI::obtain_swapchain_formats(OpenXRAPI *this) {
   long *plVar1;
   long lVar2;
   char cVar3;
   long lVar4;
   char *pcVar5;
   long lVar6;
   undefined8 uVar7;
   long lVar8;
   char *pcVar9;
   long lVar10;
   long in_FS_OFFSET;
   long local_90;
   long local_88;
   long local_80[2];
   long local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long**)( this + 0x148 ) == (long*)0x0) {
      _err_print_error("obtain_swapchain_formats", "modules/openxr/openxr_api.cpp", 0x46c, "Parameter \"graphics_extension\" is null.", 0, 0);
      uVar7 = 0;
   }
 else if (*(long*)( this + 0xf8 ) == 0) {
      _err_print_error("obtain_swapchain_formats", "modules/openxr/openxr_api.cpp", 0x46d, "Condition \"session == nullptr\" is true. Returning: false", 0, 0);
      uVar7 = 0;
   }
 else {
      lVar6 = **(long**)( this + 0x148 );
      local_70 = 0;
      *(undefined8*)( this + 0x170 ) = 0;
      ( **(code**)( lVar6 + 0x118 ) )();
      lVar6 = *(long*)( this + 0x170 );
      if (local_70 != 0) {
         lVar10 = *(long*)( local_70 + -8 );
         lVar8 = 0;
         LAB_00109b48:if (lVar8 < lVar10) {
            if (lVar6 == 0) {
               lVar2 = *(long*)( this + 0x80 );
               do {
                  lVar6 = *(long*)( local_70 + lVar8 * 8 );
                  if (( lVar2 != 0 ) && ( 0 < *(long*)( lVar2 + -8 ) )) {
                     lVar4 = 0;
                     do {
                        if (lVar6 == *(long*)( lVar2 + lVar4 * 8 )) {
                           *(long*)( this + 0x170 ) = lVar6;
                           lVar8 = lVar8 + 1;
                           lVar10 = *(long*)( local_70 + -8 );
                           goto LAB_00109b48;
                        }

                        lVar4 = lVar4 + 1;
                     }
 while ( *(long*)( lVar2 + -8 ) != lVar4 );
                  }

                  lVar8 = lVar8 + 1;
               }
 while ( lVar8 < lVar10 );
               goto LAB_00109ba9;
            }

            goto LAB_00109c15;
         }

      }

      if (lVar6 == 0) {
         LAB_00109ba9:pcVar9 = "OpenXR: No usable color swap chain format available!";
         uVar7 = 0x47d;
         pcVar5 = "Condition \"color_swapchain_format == 0\" is true. Returning: false";
      }
 else {
         LAB_00109c15:cVar3 = is_print_verbose_enabled();
         if (cVar3 != '\0') {
            get_swapchain_format_name((long)&local_88);
            local_68 = "Using color swap chain format:";
            local_90 = 0;
            local_60 = 0x1e;
            String::parse_latin1((StrRange*)&local_90);
            String::operator +((String*)local_80, (String*)&local_90);
            Variant::Variant((Variant*)local_58, (String*)local_80);
            stringify_variants((Variant*)&local_68);
            __print_line((String*)&local_68);
            pcVar5 = local_68;
            if (local_68 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_68 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_68 = (char*)0x0;
                  Memory::free_static(pcVar5 + -0x10, false);
               }

            }

            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            lVar6 = local_80[0];
            if (local_80[0] != 0) {
               LOCK();
               plVar1 = (long*)( local_80[0] + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_80[0] = 0;
                  Memory::free_static((void*)( lVar6 + -0x10 ), false);
               }

            }

            lVar6 = local_90;
            if (local_90 != 0) {
               LOCK();
               plVar1 = (long*)( local_90 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_90 = 0;
                  Memory::free_static((void*)( lVar6 + -0x10 ), false);
               }

            }

            lVar6 = local_88;
            if (local_88 != 0) {
               LOCK();
               plVar1 = (long*)( local_88 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_88 = 0;
                  Memory::free_static((void*)( lVar6 + -0x10 ), false);
               }

            }

         }

         lVar6 = local_70;
         if (local_70 != 0) {
            LOCK();
            plVar1 = (long*)( local_70 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_70 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

         local_70 = 0;
         *(undefined8*)( this + 0x178 ) = 0;
         ( **(code**)( **(long**)( this + 0x148 ) + 0x120 ) )();
         lVar6 = *(long*)( this + 0x178 );
         if (local_70 != 0) {
            lVar10 = *(long*)( local_70 + -8 );
            lVar8 = 0;
            LAB_00109c80:if (lVar8 < lVar10) {
               if (lVar6 == 0) {
                  lVar2 = *(long*)( this + 0x80 );
                  do {
                     while (lVar6 = *(long*)( local_70 + lVar8 * 8 ),lVar2 != 0) {
                        if (0 < *(long*)( lVar2 + -8 )) {
                           lVar4 = 0;
                           do {
                              if (lVar6 == *(long*)( lVar2 + lVar4 * 8 )) {
                                 *(long*)( this + 0x178 ) = lVar6;
                                 lVar8 = lVar8 + 1;
                                 lVar10 = *(long*)( local_70 + -8 );
                                 goto LAB_00109c80;
                              }

                              lVar4 = lVar4 + 1;
                           }
 while ( *(long*)( lVar2 + -8 ) != lVar4 );
                        }

                        lVar8 = lVar8 + 1;
                        if (lVar10 <= lVar8) goto LAB_00109cd9;
                     }
;
                     lVar8 = lVar8 + 1;
                  }
 while ( lVar8 < lVar10 );
                  goto LAB_00109cd9;
               }

               goto LAB_00109d33;
            }

         }

         if (lVar6 != 0) {
            LAB_00109d33:cVar3 = is_print_verbose_enabled();
            if (cVar3 != '\0') {
               get_swapchain_format_name((long)&local_88);
               local_90 = 0;
               local_68 = "Using depth swap chain format:";
               local_60 = 0x1e;
               String::parse_latin1((StrRange*)&local_90);
               String::operator +((String*)local_80, (String*)&local_90);
               Variant::Variant((Variant*)local_58, (String*)local_80);
               stringify_variants((Variant*)&local_68);
               __print_line((String*)&local_68);
               pcVar5 = local_68;
               if (local_68 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_68 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_68 = (char*)0x0;
                     Memory::free_static(pcVar5 + -0x10, false);
                  }

               }

               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            }

            lVar6 = local_70;
            if (local_70 != 0) {
               LOCK();
               plVar1 = (long*)( local_70 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_70 = 0;
                  Memory::free_static((void*)( lVar6 + -0x10 ), false);
               }

            }

            uVar7 = 1;
            goto LAB_00109d70;
         }

         LAB_00109cd9:pcVar9 = "OpenXR: No usable depth swap chain format available!";
         uVar7 = 0x490;
         pcVar5 = "Condition \"depth_swapchain_format == 0\" is true. Returning: false";
      }

      _err_print_error("obtain_swapchain_formats", "modules/openxr/openxr_api.cpp", uVar7, pcVar5, pcVar9, 0, 0);
      lVar6 = local_70;
      if (local_70 != 0) {
         LOCK();
         plVar1 = (long*)( local_70 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

      uVar7 = 0;
   }

   LAB_00109d70:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar7;
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
/* OpenXRAPI::get_all_requested_extensions() */OpenXRAPI * __thiscall OpenXRAPI::get_all_requested_extensions(OpenXRAPI *this){
   CowData<String> *this_00;
   long *plVar1;
   CowData<char32_t> *this_01;
   uint uVar2;
   undefined8 *puVar3;
   char cVar4;
   int iVar5;
   long lVar6;
   void *pvVar7;
   undefined8 *puVar8;
   long lVar9;
   long lVar10;
   long in_FS_OFFSET;
   bool bVar11;
   undefined8 *local_98;
   long local_80;
   undefined1 local_78[8];
   void *local_70;
   void *local_68;
   undefined1 local_60[16];
   uint local_50;
   int local_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 8 ) = 0;
   CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
   puVar8 = (undefined8*)registered_extension_wrappers._8_8_;
   CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
   local_98 = (undefined8*)registered_extension_wrappers._8_8_;
   if (registered_extension_wrappers._8_8_ != 0) {
      local_98 = (undefined8*)( registered_extension_wrappers._8_8_ + *(long*)( registered_extension_wrappers._8_8_ + -8 ) * 8 );
   }

   this_00 = (CowData<String>*)( this + 8 );
   do {
      if (puVar8 == local_98) {
         if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return this;
      }

      ( *(code*)**(undefined8**)*puVar8 )(local_78);
      pvVar7 = local_70;
      for (puVar3 = (undefined8*)local_60._0_8_; local_70 = pvVar7,puVar3 != (undefined8*)0x0; puVar3 = (undefined8*)*puVar3) {
         lVar10 = *(long*)( this + 8 );
         if (( lVar10 != 0 ) && ( lVar6 = lVar6 != 0 )) {
            lVar9 = 0;
            while (lVar9 < lVar6) {
               cVar4 = String::operator ==((String*)( lVar10 + lVar9 * 8 ), (String*)( puVar3 + 2 ));
               if (cVar4 != '\0') goto LAB_0010a338;
               lVar10 = *(long*)( this + 8 );
               lVar9 = lVar9 + 1;
               if (lVar10 == 0) break;
               lVar6 = *(long*)( lVar10 + -8 );
            }
;
         }

         local_80 = 0;
         lVar6 = puVar3[2];
         plVar1 = (long*)( lVar6 + -0x10 );
         if (lVar6 == 0) {
            LAB_0010a2b8:lVar9 = lVar6;
            if (lVar10 != 0) goto LAB_0010a2c1;
            LAB_0010a452:iVar5 = CowData<String>::resize<false>(this_00, 1);
            if (iVar5 == 0) goto LAB_0010a2d9;
            LAB_0010a467:_err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
         }
 else {
            do {
               lVar10 = *plVar1;
               if (lVar10 == 0) goto LAB_0010a440;
               LOCK();
               lVar6 = *plVar1;
               bVar11 = lVar10 == lVar6;
               if (bVar11) {
                  *plVar1 = lVar10 + 1;
                  lVar6 = lVar10;
               }

               UNLOCK();
            }
 while ( !bVar11 );
            if (lVar6 != -1) {
               lVar6 = puVar3[2];
               lVar10 = *(long*)( this + 8 );
               local_80 = lVar6;
               goto LAB_0010a2b8;
            }

            LAB_0010a440:lVar10 = *(long*)( this + 8 );
            lVar6 = 0;
            lVar9 = local_80;
            if (lVar10 == 0) goto LAB_0010a452;
            LAB_0010a2c1:iVar5 = CowData<String>::resize<false>(this_00, *(long*)( lVar10 + -8 ) + 1);
            lVar6 = lVar9;
            if (iVar5 != 0) goto LAB_0010a467;
            LAB_0010a2d9:if (*(long*)( this + 8 ) == 0) {
               lVar9 = -1;
               lVar10 = 0;
               LAB_0010a4c4:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar9, lVar10, "p_index", "size()", "", false, false);
            }
 else {
               lVar10 = *(long*)( *(long*)( this + 8 ) + -8 );
               lVar9 = lVar10 + -1;
               if (lVar9 < 0) goto LAB_0010a4c4;
               CowData<String>::_copy_on_write(this_00);
               this_01 = (CowData<char32_t>*)( *(long*)( this + 8 ) + lVar9 * 8 );
               if (lVar6 != *(long*)this_01) {
                  CowData<char32_t>::_ref(this_01, (CowData*)&local_80);
               }

            }

         }

         if (lVar6 != 0) {
            LOCK();
            plVar1 = (long*)( lVar6 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_80 + -0x10 ), false);
            }

         }

         LAB_0010a338:pvVar7 = local_70;
      }

      if (pvVar7 != (void*)0x0) {
         if (local_4c != 0) {
            uVar2 = *(uint*)( hash_table_size_primes + (ulong)local_50 * 4 );
            if (uVar2 == 0) {
               local_4c = 0;
               local_60 = (undefined1[16])0x0;
            }
 else {
               lVar10 = 0;
               do {
                  if (*(int*)( (long)local_68 + lVar10 ) != 0) {
                     pvVar7 = *(void**)( (long)pvVar7 + lVar10 * 2 );
                     *(int*)( (long)local_68 + lVar10 ) = 0;
                     if (*(long*)( (long)pvVar7 + 0x10 ) != 0) {
                        LOCK();
                        plVar1 = (long*)( *(long*)( (long)pvVar7 + 0x10 ) + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           lVar6 = *(long*)( (long)pvVar7 + 0x10 );
                           *(undefined8*)( (long)pvVar7 + 0x10 ) = 0;
                           Memory::free_static((void*)( lVar6 + -0x10 ), false);
                        }

                     }

                     Memory::free_static(pvVar7, false);
                     *(undefined8*)( (long)local_70 + lVar10 * 2 ) = 0;
                     pvVar7 = local_70;
                  }

                  lVar10 = lVar10 + 4;
               }
 while ( lVar10 != (ulong)uVar2 * 4 );
               local_4c = 0;
               local_60 = (undefined1[16])0x0;
               if (pvVar7 == (void*)0x0) goto LAB_0010a408;
            }

         }

         Memory::free_static(pvVar7, false);
         Memory::free_static(local_68, false);
      }

      LAB_0010a408:puVar8 = puVar8 + 1;
   }
 while ( true );
}
/* CowData<Vector<unsigned char> >::_copy_on_write() [clone .isra.0] */void CowData<Vector<unsigned_char>>::_copy_on_write(CowData<Vector<unsigned_char>> *this) {
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   long lVar4;
   ulong uVar5;
   CowData<unsigned_char> *this_00;
   long lVar6;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   if (lVar1 * 0x10 != 0) {
      uVar5 = lVar1 * 0x10 - 1;
      uVar5 = uVar5 | uVar5 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar3 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar3 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   this_00 = (CowData<unsigned_char>*)( puVar3 + 3 );
   lVar6 = 0;
   *puVar3 = 1;
   puVar3[1] = lVar1;
   if (lVar1 != 0) {
      do {
         lVar4 = lVar6 * 0x10 + *(long*)this;
         *(undefined8*)this_00 = 0;
         if (*(long*)( lVar4 + 8 ) != 0) {
            CowData<unsigned_char>::_ref(this_00, (CowData*)( lVar4 + 8 ));
         }

         lVar6 = lVar6 + 1;
         this_00 = this_00 + 0x10;
      }
 while ( lVar1 != lVar6 );
   }

   _unref(this);
   *(undefined8**)this = puVar3 + 2;
   return;
}
/* OpenXRAPI::OpenXRSwapChainInfo::acquire(bool&) */undefined1 OpenXRAPI::OpenXRSwapChainInfo::acquire(OpenXRSwapChainInfo *this, bool *param_1) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   int iVar4;
   int iVar5;
   char *pcVar6;
   undefined8 uVar7;
   long in_FS_OFFSET;
   undefined1 local_b1;
   long local_a0;
   long local_98;
   long local_90;
   undefined *local_88;
   undefined8 local_80;
   undefined4 local_78[2];
   undefined8 local_70;
   undefined8 local_68;
   int local_58[6];
   long local_40;
   lVar2 = singleton;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0x14] != (OpenXRSwapChainInfo)0x0) {
      _err_print_error("acquire", "modules/openxr/openxr_api.cpp", 0xa6, "Condition \"image_acquired\" is true. Returning: true", 0, 0);
      LAB_0010a8d3:local_b1 = 1;
      goto LAB_0010a8d8;
   }

   local_b1 = 0;
   if (singleton == 0) {
      _err_print_error("acquire", "modules/openxr/openxr_api.cpp", 0xa9, "Parameter \"openxr_api\" is null.", 0, 0);
      goto LAB_0010a8d8;
   }

   uVar7 = *(undefined8*)this;
   if (this[0x15] == (OpenXRSwapChainInfo)0x0) {
      local_70 = 0;
      local_78[0] = 0x37;
      if (*(code**)( singleton + 0x1d8 ) == (code*)0x0) {
         *param_1 = false;
         iVar5 = -0xc;
      }
 else {
         iVar5 = ( **(code**)( singleton + 0x1d8 ) )(uVar7, local_78, this + 0x10);
         if (iVar5 == 0) {
            uVar7 = *(undefined8*)this;
            goto LAB_0010a69c;
         }

         *param_1 = false;
         if (-1 < iVar5) goto LAB_0010a8d8;
      }

      get_error_string(&local_88, lVar2, iVar5);
      pcVar6 = "OpenXR: failed to acquire swapchain image [";
   }
 else {
      LAB_0010a69c:local_78[0] = 0x38;
      iVar5 = 10;
      local_70 = 0;
      local_68 = 1000000000;
      while (*(code**)( lVar2 + 0x340 ) != (code*)0x0) {
         iVar4 = ( **(code**)( lVar2 + 0x340 ) )(uVar7, local_78);
         if (iVar4 != 1) {
            if (iVar4 != 0) goto LAB_0010a71e;
            *(undefined2*)( this + 0x14 ) = 1;
            goto LAB_0010a8d3;
         }

         _err_print_error("acquire", "modules/openxr/openxr_api.cpp", 0xcf, "OpenXR: timed out waiting for swapchain image.", 0, 1);
         iVar5 = iVar5 + -1;
         if (iVar5 == 0) goto LAB_0010a71e;
         uVar7 = *(undefined8*)this;
      }
;
      iVar4 = -0xc;
      LAB_0010a71e:*param_1 = false;
      if (-1 < iVar4) {
         local_90 = 0;
         local_88 = &_LC164;
         local_80 = 1;
         String::parse_latin1((StrRange*)&local_90);
         get_error_string(&local_a0, lVar2, iVar4);
         operator+((char *)&
         local_98,(String*)"OpenXR: couldn\'t to wait for swapchain but not a complete error [";
         String::operator +((String*)&local_88, (String*)&local_98);
         _err_print_error("acquire", "modules/openxr/openxr_api.cpp", 0xdb, (String*)&local_88, 0, 1);
         puVar3 = local_88;
         if (local_88 != (undefined*)0x0) {
            LOCK();
            plVar1 = (long*)( local_88 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_88 = (undefined*)0x0;
               Memory::free_static(puVar3 + -0x10, false);
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

         lVar2 = local_a0;
         if (local_a0 != 0) {
            LOCK();
            plVar1 = (long*)( local_a0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a0 = 0;
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

         this[0x15] = (OpenXRSwapChainInfo)0x1;
         goto LAB_0010a8d8;
      }

      get_error_string(&local_88, lVar2, iVar4);
      pcVar6 = "OpenXR: failed to wait for swapchain image [";
   }

   Variant::Variant((Variant*)local_58, pcVar6);
   print_line<String,char_const*>((Variant*)local_58, &local_88, &_LC164);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   puVar3 = local_88;
   if (local_88 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = (undefined*)0x0;
         Memory::free_static(puVar3 + -0x10, false);
      }

   }

   LAB_0010a8d8:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_b1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::pre_draw_viewport(RID) */OpenXRAPI OpenXRAPI::pre_draw_viewport(OpenXRAPI *this, undefined8 param_2) {
   OpenXRAPI OVar1;
   char cVar2;
   long *plVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   plVar3 = (long*)RenderingServer::get_singleton();
   if (plVar3 == (long*)0x0) {
      _err_print_error("pre_draw_viewport", "modules/openxr/openxr_api.cpp", 0x8d2, "Parameter \"rendering_server\" is null.", 0, 0);
   }
 else {
      cVar2 = ( **(code**)( *plVar3 + 0x12d8 ) )(plVar3);
      if (cVar2 == '\0') {
         _err_print_error("pre_draw_viewport", "modules/openxr/openxr_api.cpp", 0x8d2, "Condition \"!rendering_server->is_on_render_thread()\" is true. Returning: false", 0, 0);
      }
 else {
         this[0x4aa] = (OpenXRAPI)0x1;
         if (( ( ( ( ( *(long*)( this + 0xd0 ) != 0 ) && ( *(long*)( this + 0xf8 ) != 0 ) ) && ( this[0x4a8] != (OpenXRAPI)0x0 ) ) && ( ( this[0x511] != (OpenXRAPI)0x0 && ( OVar1 = this[0x4a9] ),OVar1 != (OpenXRAPI)0x0 ) ) ) ) && ( ( this[0x574] != (OpenXRAPI)0x0 || ( ( *(long*)( this + 0x560 ) == 0 || ( cVar2 = OpenXRSwapChainInfo::acquire((OpenXRSwapChainInfo*)( this + 0x560 ), (bool*)( this + 0x4a9 )) ),cVar2 != '\0' ) ) ) )) {
            CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
            puVar4 = (undefined8*)registered_extension_wrappers._8_8_;
            CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
            puVar5 = (undefined8*)registered_extension_wrappers._8_8_;
            if (registered_extension_wrappers._8_8_ != 0) {
               puVar5 = (undefined8*)( registered_extension_wrappers._8_8_ + *(long*)( registered_extension_wrappers._8_8_ + -8 ) * 8 );
            }

            if (puVar4 == puVar5) {
               return OVar1;
            }

            do {
               plVar3 = (long*)*puVar4;
               puVar4 = puVar4 + 1;
               ( **(code**)( *plVar3 + 0x88 ) )(plVar3, param_2);
            }
 while ( puVar5 != puVar4 );
            return OVar1;
         }

      }

   }

   return (OpenXRAPI)0x0;
}
/* OpenXRAPI::OpenXRSwapChainInfo::release() */undefined8 OpenXRAPI::OpenXRSwapChainInfo::release(OpenXRSwapChainInfo *this) {
   long *plVar1;
   long lVar2;
   int iVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   long local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   int local_38[6];
   long local_20;
   lVar2 = singleton;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0x14] == (OpenXRSwapChainInfo)0x0) {
      LAB_0010ac6f:uVar4 = 1;
   }
 else {
      this[0x14] = (OpenXRSwapChainInfo)0x0;
      if (lVar2 == 0) {
         _err_print_error("release", "modules/openxr/openxr_api.cpp", 0xf2, "Parameter \"openxr_api\" is null.", 0, 0);
         uVar4 = 0;
         goto LAB_0010ac74;
      }

      local_48[0] = 0x39;
      local_40 = 0;
      if (*(code**)( lVar2 + 0x310 ) == (code*)0x0) {
         iVar3 = -0xc;
      }
 else {
         iVar3 = ( **(code**)( lVar2 + 0x310 ) )(*(undefined8*)this, local_48);
         if (-1 < iVar3) goto LAB_0010ac6f;
      }

      get_error_string(&local_50, lVar2, iVar3);
      Variant::Variant((Variant*)local_38, "OpenXR: failed to release swapchain image! [");
      print_line<String,char_const*>((Variant*)local_38, &local_50, &_LC164);
      if (Variant::needs_deinit[local_38[0]] != '\0') {
         Variant::_clear_internal();
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

      uVar4 = 0;
   }

   LAB_0010ac74:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::OpenXRSwapChainInfo::free() */void OpenXRAPI::OpenXRSwapChainInfo::free(OpenXRSwapChainInfo *this) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   lVar3 = singleton;
   if (singleton != 0) {
      if (this[0x14] != (OpenXRSwapChainInfo)0x0) {
         release(this);
      }

      plVar1 = *(long**)( lVar3 + 0x148 );
      if (( plVar1 != (long*)0x0 ) && ( *(long*)( this + 8 ) != 0 )) {
         ( **(code**)( *plVar1 + 0x138 ) )(plVar1, this + 8);
      }

      if (*(long*)this != 0) {
         pcVar2 = *(code**)( lVar3 + 0x260 );
         if (pcVar2 != (code*)0x0) {
            ( *pcVar2 )();
         }

         *(undefined8*)this = 0;
      }

      return;
   }

   _err_print_error(&_LC181, "modules/openxr/openxr_api.cpp", 0x95, "Parameter \"openxr_api\" is null.", 0, 0);
   return;
}
/* OpenXRAPI::load_supported_view_configuration_types() */undefined8 OpenXRAPI::load_supported_view_configuration_types(OpenXRAPI *this) {
   long *plVar1;
   int *piVar2;
   code *pcVar3;
   uint uVar4;
   char *pcVar5;
   char cVar6;
   int iVar7;
   ulong uVar8;
   undefined8 uVar9;
   long lVar10;
   uint uVar11;
   int *piVar12;
   long in_FS_OFFSET;
   uint local_8c;
   CowData<char32_t> local_88[8];
   long local_80;
   long local_78;
   long local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0xd0 ) == 0) {
      _err_print_error("load_supported_view_configuration_types", "modules/openxr/openxr_api.cpp", 0x2c9, "Condition \"instance == nullptr\" is true. Returning: false", 0, 0);
      uVar9 = 0;
      goto LAB_0010b086;
   }

   if (*(int*)( this + 0x58 ) != 0) {
      *(undefined4*)( this + 0x58 ) = 0;
   }

   local_8c = 0;
   if (*(code**)( this + 0x2a0 ) == (code*)0x0) {
      iVar7 = -0xc;
   }
 else {
      iVar7 = ( **(code**)( this + 0x2a0 ) )(*(long*)( this + 0xd0 ), *(undefined8*)( this + 0xd8 ), 0, &local_8c, 0);
      uVar4 = local_8c;
      if (-1 < iVar7) {
         if (local_8c < *(uint*)( this + 0x58 )) {
            *(uint*)( this + 0x58 ) = local_8c;
         }
 else if (*(uint*)( this + 0x58 ) < local_8c) {
            if (*(uint*)( this + 0x5c ) < local_8c) {
               uVar11 = local_8c - 1 | local_8c - 1 >> 1;
               uVar11 = uVar11 >> 2 | uVar11;
               uVar11 = uVar11 | uVar11 >> 4;
               uVar11 = uVar11 >> 8 | uVar11;
               uVar11 = ( uVar11 >> 0x10 | uVar11 ) + 1;
               *(uint*)( this + 0x5c ) = uVar11;
               lVar10 = Memory::realloc_static(*(void**)( this + 0x60 ), (ulong)uVar11 * 4, false);
               *(long*)( this + 0x60 ) = lVar10;
               if (lVar10 == 0) {
                  _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

            }

            *(uint*)( this + 0x58 ) = uVar4;
         }

         if (( *(code**)( this + 0x2a0 ) == (code*)0x0 ) || ( iVar7 = ( **(code**)( this + 0x2a0 ) )(*(undefined8*)( this + 0xd0 ), *(undefined8*)( this + 0xd8 ), local_8c) ),iVar7 < 0) {
            _err_print_error("load_supported_view_configuration_types", "modules/openxr/openxr_api.cpp", 0x2d7, "Condition \"((result) < 0)\" is true. Returning: false", "OpenXR: Failed to enumerateview configurations", 0, 0);
            uVar9 = 0;
         }
 else {
            if (local_8c == 0) {
               _err_print_error("load_supported_view_configuration_types", "modules/openxr/openxr_api.cpp", 0x2d8, "Condition \"num_view_configuration_types == 0\" is true. Returning: false", "OpenXR: Failed to enumerateview configurations", 0, 0);
               uVar9 = 0;
               goto LAB_0010b086;
            }

            uVar8 = ( ulong ) * (uint*)( this + 0x58 );
            piVar12 = *(int**)( this + 0x60 );
            piVar2 = piVar12 + uVar8;
            if (piVar2 != piVar12) {
               do {
                  while (cVar6 = is_print_verbose_enabled(),cVar6 == '\0') {
                     LAB_0010aef0:piVar12 = piVar12 + 1;
                     if (piVar2 == piVar12) goto LAB_0010b050;
                  }
;
                  OpenXRUtil::get_view_configuration_name(&local_80, *piVar12);
                  local_68 = "OpenXR: Found supported view configuration %s.";
                  local_78 = 0;
                  local_60 = 0x2e;
                  String::parse_latin1((StrRange*)&local_78);
                  vformat<String>((String*)&local_70, (StrRange*)&local_78, &local_80);
                  Variant::Variant((Variant*)local_58, (String*)&local_70);
                  stringify_variants((Variant*)&local_68);
                  __print_line((String*)&local_68);
                  pcVar5 = local_68;
                  if (local_68 != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_68 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_68 = (char*)0x0;
                        Memory::free_static(pcVar5 + -0x10, false);
                     }

                  }

                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  lVar10 = local_70;
                  if (local_70 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_70 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_70 = 0;
                        Memory::free_static((void*)( lVar10 + -0x10 ), false);
                     }

                  }

                  lVar10 = local_78;
                  if (local_78 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_78 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_78 = 0;
                        Memory::free_static((void*)( lVar10 + -0x10 ), false);
                     }

                  }

                  lVar10 = local_80;
                  if (local_80 == 0) goto LAB_0010aef0;
                  LOCK();
                  plVar1 = (long*)( local_80 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 != 0) goto LAB_0010aef0;
                  piVar12 = piVar12 + 1;
                  local_80 = 0;
                  Memory::free_static((void*)( lVar10 + -0x10 ), false);
               }
 while ( piVar2 != piVar12 );
               LAB_0010b050:uVar8 = ( ulong ) * (uint*)( this + 0x58 );
               piVar12 = *(int**)( this + 0x60 );
            }

            if ((int)uVar8 != 0) {
               piVar2 = piVar12 + uVar8;
               do {
                  if (*(int*)( this + 0x9c ) == *piVar12) goto LAB_0010b081;
                  piVar12 = piVar12 + 1;
               }
 while ( piVar2 != piVar12 );
            }

            cVar6 = is_print_verbose_enabled();
            if (cVar6 != '\0') {
               if (*(int*)( this + 0x58 ) == 0) goto LAB_0010b365;
               OpenXRUtil::get_view_configuration_name((CowData<char32_t>*)&local_80, **(undefined4**)( this + 0x60 ));
               OpenXRUtil::get_view_configuration_name(local_88, *(undefined4*)( this + 0x9c ));
               local_68 = "OpenXR: %s isn\'t supported, defaulting to %s.";
               local_78 = 0;
               local_60 = 0x2d;
               String::parse_latin1((StrRange*)&local_78);
               vformat<String,String>((CowData<char32_t>*)&local_70, (StrRange*)&local_78, local_88);
               Variant::Variant((Variant*)local_58, (String*)&local_70);
               stringify_variants((Variant*)&local_68);
               __print_line((String*)&local_68);
               pcVar5 = local_68;
               if (local_68 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_68 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_68 = (char*)0x0;
                     Memory::free_static(pcVar5 + -0x10, false);
                  }

               }

               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               CowData<char32_t>::_unref(local_88);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
            }

            if (*(int*)( this + 0x58 ) == 0) {
               LAB_0010b365:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, 0, 0, "p_index", "count", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            *(undefined4*)( this + 0x9c ) = **(undefined4**)( this + 0x60 );
            LAB_0010b081:uVar9 = 1;
         }

         goto LAB_0010b086;
      }

   }

   get_error_string(&local_68, this, iVar7);
   Variant::Variant((Variant*)local_58, "OpenXR: Failed to get view configuration count [");
   print_line<String,char_const*>((Variant*)local_58, &local_68, &_LC164);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   pcVar5 = local_68;
   if (local_68 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (char*)0x0;
         Memory::free_static(pcVar5 + -0x10, false);
         uVar9 = 0;
         goto LAB_0010b086;
      }

   }

   uVar9 = 0;
   LAB_0010b086:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar9;
}
/* OpenXRAPI::load_supported_view_configuration_views(XrViewConfigurationType) */undefined8 OpenXRAPI::load_supported_view_configuration_views(OpenXRAPI *this, int param_2) {
   long *plVar1;
   int *piVar2;
   undefined4 *puVar3;
   long lVar4;
   long lVar5;
   code *pcVar6;
   uint uVar7;
   long lVar8;
   char cVar9;
   int iVar10;
   uint uVar11;
   int *piVar12;
   ulong uVar13;
   undefined8 uVar14;
   undefined4 *puVar15;
   char *pcVar16;
   long in_FS_OFFSET;
   uint local_84;
   long local_80;
   long local_78;
   long local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   piVar12 = *(int**)( this + 0x60 );
   if (*(uint*)( this + 0x58 ) == 0) {
      LAB_0010bf88:OpenXRUtil::get_view_configuration_name(&local_68, *(undefined4*)( this + 0x9c ));
      Variant::Variant((Variant*)local_58, "OpenXR: View configuration ");
      pcVar16 = " is not supported.";
      LAB_0010bedd:print_line<String,char_const*>(local_58, &local_68, pcVar16);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      pcVar16 = local_68;
      if (local_68 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = (char*)0x0;
            Memory::free_static(pcVar16 + -0x10, false);
         }

      }

      LAB_0010bf14:uVar14 = 0;
      LAB_0010bf16:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return uVar14;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   piVar2 = piVar12 + *(uint*)( this + 0x58 );
   LAB_0010b49d:if (param_2 != *piVar12) goto LAB_0010b490;
   if (*(int*)( this + 0x160 ) != 0) {
      *(undefined4*)( this + 0x160 ) = 0;
   }

   local_84 = 0;
   if (*(code**)( this + 0x2a8 ) != (code*)0x0) {
      iVar10 = ( **(code**)( this + 0x2a8 ) )(*(undefined8*)( this + 0xd0 ), *(undefined8*)( this + 0xd8 ), param_2, 0, &local_84, 0);
      uVar7 = local_84;
      if (iVar10 < 0) goto LAB_0010beb0;
      uVar11 = *(uint*)( this + 0x160 );
      uVar13 = (ulong)uVar11;
      puVar15 = *(undefined4**)( this + 0x168 );
      if (local_84 < uVar11) {
         *(uint*)( this + 0x160 ) = local_84;
         uVar13 = (ulong)local_84;
      }
 else if (uVar11 < local_84) {
         if (*(uint*)( this + 0x164 ) < local_84) {
            uVar11 = local_84 - 1 >> 1 | local_84 - 1;
            uVar11 = uVar11 | uVar11 >> 2;
            uVar11 = uVar11 | uVar11 >> 4;
            uVar11 = uVar11 >> 8 | uVar11;
            uVar11 = ( uVar11 >> 0x10 | uVar11 ) + 1;
            *(uint*)( this + 0x164 ) = uVar11;
            puVar15 = (undefined4*)Memory::realloc_static(puVar15, (ulong)uVar11 * 0x28, false);
            *(undefined4**)( this + 0x168 ) = puVar15;
            if (puVar15 == (undefined4*)0x0) {
               _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar6 = (code*)invalidInstructionException();
               ( *pcVar6 )();
            }

         }

         uVar13 = (ulong)uVar7;
         *(uint*)( this + 0x160 ) = uVar7;
      }

      puVar3 = puVar15 + uVar13 * 10;
      for (; puVar3 != puVar15; puVar15 = puVar15 + 10) {
         *puVar15 = 0x29;
         *(undefined8*)( puVar15 + 2 ) = 0;
      }

      if (( *(code**)( this + 0x2a8 ) != (code*)0x0 ) && ( iVar10 = ( **(code**)( this + 0x2a8 ) )(*(undefined8*)( this + 0xd0 ), *(undefined8*)( this + 0xd8 ), param_2, local_84, &local_84) ),-1 < iVar10) {
         lVar5 = *(long*)( this + 0x168 );
         lVar4 = lVar5 + ( ulong ) * (uint*)( this + 0x160 ) * 0x28;
         do {
            if (lVar4 == lVar5) {
               uVar14 = 1;
               goto LAB_0010bf16;
            }

            cVar9 = is_print_verbose_enabled();
            if (cVar9 == '\0') {
               LAB_0010b5a8:cVar9 = is_print_verbose_enabled();
               if (cVar9 == '\0') goto LAB_0010b5b5;
               LAB_0010b690:itos((long)&local_78);
               local_68 = " - width: ";
               local_80 = 0;
               local_60 = 10;
               String::parse_latin1((StrRange*)&local_80);
               String::operator +((String*)&local_70, (String*)&local_80);
               Variant::Variant((Variant*)local_58, (String*)&local_70);
               stringify_variants((Variant*)&local_68);
               __print_line((String*)&local_68);
               pcVar16 = local_68;
               if (local_68 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_68 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_68 = (char*)0x0;
                     Memory::free_static(pcVar16 + -0x10, false);
                  }

               }

               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               lVar8 = local_70;
               if (local_70 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_70 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_70 = 0;
                     Memory::free_static((void*)( lVar8 + -0x10 ), false);
                  }

               }

               lVar8 = local_80;
               if (local_80 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_80 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_80 = 0;
                     Memory::free_static((void*)( lVar8 + -0x10 ), false);
                  }

               }

               lVar8 = local_78;
               if (local_78 == 0) goto LAB_0010b5b5;
               LOCK();
               plVar1 = (long*)( local_78 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 != 0) goto LAB_0010b5b5;
               local_78 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
               cVar9 = is_print_verbose_enabled();
               if (cVar9 != '\0') goto LAB_0010b7e8;
               LAB_0010b5c2:cVar9 = is_print_verbose_enabled();
               if (cVar9 == '\0') goto LAB_0010b5cf;
               LAB_0010b940:itos((long)&local_78);
               local_68 = " - sample count: ";
               local_80 = 0;
               local_60 = 0x11;
               String::parse_latin1((StrRange*)&local_80);
               String::operator +((String*)&local_70, (String*)&local_80);
               Variant::Variant((Variant*)local_58, (String*)&local_70);
               stringify_variants((Variant*)&local_68);
               __print_line((String*)&local_68);
               pcVar16 = local_68;
               if (local_68 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_68 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_68 = (char*)0x0;
                     Memory::free_static(pcVar16 + -0x10, false);
                  }

               }

               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               lVar8 = local_70;
               if (local_70 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_70 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_70 = 0;
                     Memory::free_static((void*)( lVar8 + -0x10 ), false);
                  }

               }

               lVar8 = local_80;
               if (local_80 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_80 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_80 = 0;
                     Memory::free_static((void*)( lVar8 + -0x10 ), false);
                  }

               }

               lVar8 = local_78;
               if (local_78 == 0) goto LAB_0010b5cf;
               LOCK();
               plVar1 = (long*)( local_78 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 != 0) goto LAB_0010b5cf;
               local_78 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
               cVar9 = is_print_verbose_enabled();
               if (cVar9 != '\0') goto LAB_0010ba98;
               LAB_0010b5dc:cVar9 = is_print_verbose_enabled();
               if (cVar9 == '\0') goto LAB_0010b5e9;
               LAB_0010bbf0:itos((long)&local_78);
               local_68 = " - recommended render height: ";
               local_80 = 0;
               local_60 = 0x1e;
               String::parse_latin1((StrRange*)&local_80);
               String::operator +((String*)&local_70, (String*)&local_80);
               Variant::Variant((Variant*)local_58, (String*)&local_70);
               stringify_variants((Variant*)&local_68);
               __print_line((String*)&local_68);
               pcVar16 = local_68;
               if (local_68 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_68 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_68 = (char*)0x0;
                     Memory::free_static(pcVar16 + -0x10, false);
                  }

               }

               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               lVar8 = local_70;
               if (local_70 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_70 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_70 = 0;
                     Memory::free_static((void*)( lVar8 + -0x10 ), false);
                  }

               }

               lVar8 = local_80;
               if (local_80 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_80 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_80 = 0;
                     Memory::free_static((void*)( lVar8 + -0x10 ), false);
                  }

               }

               lVar8 = local_78;
               if (local_78 == 0) goto LAB_0010b5e9;
               LOCK();
               plVar1 = (long*)( local_78 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 != 0) goto LAB_0010b5e9;
               local_78 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
               cVar9 = is_print_verbose_enabled();
            }
 else {
               Variant::Variant((Variant*)local_58, "OpenXR: Found supported view configuration view");
               stringify_variants((Variant*)&local_68);
               __print_line((String*)&local_68);
               pcVar16 = local_68;
               if (local_68 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_68 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_68 = (char*)0x0;
                     Memory::free_static(pcVar16 + -0x10, false);
                  }

               }

               if (Variant::needs_deinit[local_58[0]] == '\0') goto LAB_0010b5a8;
               Variant::_clear_internal();
               cVar9 = is_print_verbose_enabled();
               if (cVar9 != '\0') goto LAB_0010b690;
               LAB_0010b5b5:cVar9 = is_print_verbose_enabled();
               if (cVar9 == '\0') goto LAB_0010b5c2;
               LAB_0010b7e8:itos((long)&local_78);
               local_68 = " - height: ";
               local_80 = 0;
               local_60 = 0xb;
               String::parse_latin1((StrRange*)&local_80);
               String::operator +((String*)&local_70, (String*)&local_80);
               Variant::Variant((Variant*)local_58, (String*)&local_70);
               stringify_variants((Variant*)&local_68);
               __print_line((String*)&local_68);
               pcVar16 = local_68;
               if (local_68 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_68 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_68 = (char*)0x0;
                     Memory::free_static(pcVar16 + -0x10, false);
                  }

               }

               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               lVar8 = local_70;
               if (local_70 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_70 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_70 = 0;
                     Memory::free_static((void*)( lVar8 + -0x10 ), false);
                  }

               }

               lVar8 = local_80;
               if (local_80 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_80 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_80 = 0;
                     Memory::free_static((void*)( lVar8 + -0x10 ), false);
                  }

               }

               lVar8 = local_78;
               if (local_78 == 0) goto LAB_0010b5c2;
               LOCK();
               plVar1 = (long*)( local_78 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 != 0) goto LAB_0010b5c2;
               local_78 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
               cVar9 = is_print_verbose_enabled();
               if (cVar9 != '\0') goto LAB_0010b940;
               LAB_0010b5cf:cVar9 = is_print_verbose_enabled();
               if (cVar9 == '\0') goto LAB_0010b5dc;
               LAB_0010ba98:itos((long)&local_78);
               local_68 = " - recommended render width: ";
               local_80 = 0;
               local_60 = 0x1d;
               String::parse_latin1((StrRange*)&local_80);
               String::operator +((String*)&local_70, (String*)&local_80);
               Variant::Variant((Variant*)local_58, (String*)&local_70);
               stringify_variants((Variant*)&local_68);
               __print_line((String*)&local_68);
               pcVar16 = local_68;
               if (local_68 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_68 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_68 = (char*)0x0;
                     Memory::free_static(pcVar16 + -0x10, false);
                  }

               }

               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               lVar8 = local_70;
               if (local_70 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_70 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_70 = 0;
                     Memory::free_static((void*)( lVar8 + -0x10 ), false);
                  }

               }

               lVar8 = local_80;
               if (local_80 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_80 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_80 = 0;
                     Memory::free_static((void*)( lVar8 + -0x10 ), false);
                  }

               }

               lVar8 = local_78;
               if (local_78 == 0) goto LAB_0010b5dc;
               LOCK();
               plVar1 = (long*)( local_78 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 != 0) goto LAB_0010b5dc;
               local_78 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
               cVar9 = is_print_verbose_enabled();
               if (cVar9 != '\0') goto LAB_0010bbf0;
               LAB_0010b5e9:cVar9 = is_print_verbose_enabled();
            }

            if (cVar9 != '\0') {
               itos((long)&local_78);
               local_68 = " - recommended render sample count: ";
               local_80 = 0;
               local_60 = 0x24;
               String::parse_latin1((StrRange*)&local_80);
               String::operator +((String*)&local_70, (String*)&local_80);
               Variant::Variant((Variant*)local_58, (String*)&local_70);
               stringify_variants((Variant*)&local_68);
               __print_line((String*)&local_68);
               pcVar16 = local_68;
               if (local_68 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_68 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_68 = (char*)0x0;
                     Memory::free_static(pcVar16 + -0x10, false);
                  }

               }

               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               lVar8 = local_70;
               if (local_70 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_70 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_70 = 0;
                     Memory::free_static((void*)( lVar8 + -0x10 ), false);
                  }

               }

               lVar8 = local_80;
               if (local_80 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_80 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_80 = 0;
                     Memory::free_static((void*)( lVar8 + -0x10 ), false);
                  }

               }

               lVar8 = local_78;
               if (local_78 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_78 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_78 = 0;
                     Memory::free_static((void*)( lVar8 + -0x10 ), false);
                  }

               }

            }

            lVar5 = lVar5 + 0x28;
         }
 while ( true );
      }

      _err_print_error("load_supported_view_configuration_views", "modules/openxr/openxr_api.cpp", 0x324, "Condition \"((result) < 0)\" is true. Returning: false", "OpenXR: Failed to enumerate view configurations", 0, 0);
      goto LAB_0010bf14;
   }

   iVar10 = -0xc;
   LAB_0010beb0:get_error_string(&local_68, this, iVar10);
   Variant::Variant((Variant*)local_58, "OpenXR: Failed to get view configuration count [");
   pcVar16 = "]";
   goto LAB_0010bedd;
   LAB_0010b490:piVar12 = piVar12 + 1;
   if (piVar2 == piVar12) goto LAB_0010bf88;
   goto LAB_0010b49d;
}
/* OpenXRAPI::load_supported_reference_spaces() */undefined8 OpenXRAPI::load_supported_reference_spaces(OpenXRAPI *this) {
   long *plVar1;
   undefined4 *puVar2;
   code *pcVar3;
   uint uVar4;
   long lVar5;
   char *pcVar6;
   char cVar7;
   int iVar8;
   undefined8 uVar9;
   void *pvVar10;
   uint uVar11;
   undefined4 *puVar12;
   long in_FS_OFFSET;
   uint local_84;
   long local_80;
   long local_78;
   long local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0xf8 ) == 0) {
      _err_print_error("load_supported_reference_spaces", "modules/openxr/openxr_api.cpp", 0x377, "Condition \"session == nullptr\" is true. Returning: false", 0, 0);
      uVar9 = 0;
   }
 else {
      if (*(int*)( this + 0x68 ) != 0) {
         *(undefined4*)( this + 0x68 ) = 0;
      }

      local_84 = 0;
      if (*(code**)( this + 0x290 ) == (code*)0x0) {
         iVar8 = -0xc;
      }
 else {
         iVar8 = ( **(code**)( this + 0x290 ) )(*(long*)( this + 0xf8 ), 0, &local_84, 0);
         uVar4 = local_84;
         if (-1 < iVar8) {
            pvVar10 = *(void**)( this + 0x70 );
            if (local_84 < *(uint*)( this + 0x68 )) {
               *(uint*)( this + 0x68 ) = local_84;
            }
 else if (*(uint*)( this + 0x68 ) < local_84) {
               if (*(uint*)( this + 0x6c ) < local_84) {
                  uVar11 = local_84 - 1 >> 1 | local_84 - 1;
                  uVar11 = uVar11 | uVar11 >> 2;
                  uVar11 = uVar11 | uVar11 >> 4;
                  uVar11 = uVar11 >> 8 | uVar11;
                  uVar11 = ( uVar11 | uVar11 >> 0x10 ) + 1;
                  *(uint*)( this + 0x6c ) = uVar11;
                  pvVar10 = (void*)Memory::realloc_static(pvVar10, (ulong)uVar11 * 4, false);
                  *(void**)( this + 0x70 ) = pvVar10;
                  if (pvVar10 == (void*)0x0) {
                     _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar3 = (code*)invalidInstructionException();
                     ( *pcVar3 )();
                  }

               }

               *(uint*)( this + 0x68 ) = uVar4;
            }

            if (( *(code**)( this + 0x290 ) == (code*)0x0 ) || ( iVar8 = ( **(code**)( this + 0x290 ) )(*(undefined8*)( this + 0xf8 ), local_84, &local_84, pvVar10) ),iVar8 < 0) {
               _err_print_error("load_supported_reference_spaces", "modules/openxr/openxr_api.cpp", 0x385, "Condition \"((result) < 0)\" is true. Returning: false", "OpenXR: Failed to enumerate reference spaces", 0, 0);
               uVar9 = 0;
            }
 else {
               if (local_84 != 0) {
                  puVar12 = *(undefined4**)( this + 0x70 );
                  puVar2 = puVar12 + *(uint*)( this + 0x68 );
                  joined_r0x0010c1f0:if (puVar2 != puVar12) {
                     do {
                        cVar7 = is_print_verbose_enabled();
                        if (cVar7 != '\0') {
                           OpenXRUtil::get_reference_space_name(&local_80, *puVar12);
                           local_68 = "OpenXR: Found supported reference space %s.";
                           local_78 = 0;
                           local_60 = 0x2b;
                           String::parse_latin1((StrRange*)&local_78);
                           vformat<String>((String*)&local_70, (StrRange*)&local_78, &local_80);
                           Variant::Variant((Variant*)local_58, (String*)&local_70);
                           stringify_variants((Variant*)&local_68);
                           __print_line((String*)&local_68);
                           pcVar6 = local_68;
                           if (local_68 != (char*)0x0) {
                              LOCK();
                              plVar1 = (long*)( local_68 + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 local_68 = (char*)0x0;
                                 Memory::free_static(pcVar6 + -0x10, false);
                              }

                           }

                           if (Variant::needs_deinit[local_58[0]] != '\0') {
                              Variant::_clear_internal();
                           }

                           lVar5 = local_70;
                           if (local_70 != 0) {
                              LOCK();
                              plVar1 = (long*)( local_70 + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 local_70 = 0;
                                 Memory::free_static((void*)( lVar5 + -0x10 ), false);
                              }

                           }

                           lVar5 = local_78;
                           if (local_78 != 0) {
                              LOCK();
                              plVar1 = (long*)( local_78 + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 local_78 = 0;
                                 Memory::free_static((void*)( lVar5 + -0x10 ), false);
                              }

                           }

                           lVar5 = local_80;
                           if (local_80 != 0) {
                              LOCK();
                              plVar1 = (long*)( local_80 + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) goto code_r0x0010c335;
                           }

                        }

                        puVar12 = puVar12 + 1;
                        if (puVar2 == puVar12) break;
                     }
 while ( true );
                  }

                  uVar9 = 1;
                  goto LAB_0010c365;
               }

               _err_print_error("load_supported_reference_spaces", "modules/openxr/openxr_api.cpp", 0x386, "Condition \"num_reference_spaces == 0\" is true. Returning: false", "OpenXR: Failed to enumerate reference spaces", 0, 0);
               uVar9 = 0;
            }

            goto LAB_0010c365;
         }

      }

      get_error_string(&local_68, this, iVar8);
      Variant::Variant((Variant*)local_58, "OpenXR: Failed to get reference space count [");
      print_line<String,char_const*>((Variant*)local_58, &local_68, &_LC164);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      pcVar6 = local_68;
      if (local_68 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = (char*)0x0;
            Memory::free_static(pcVar6 + -0x10, false);
            uVar9 = 0;
            goto LAB_0010c365;
         }

      }

      uVar9 = 0;
   }

   LAB_0010c365:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar9;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   code_r0x0010c335:puVar12 = puVar12 + 1;
   local_80 = 0;
   Memory::free_static((void*)( lVar5 + -0x10 ), false);
   goto joined_r0x0010c1f0;
}
/* OpenXRAPI::setup_play_space() */undefined8 OpenXRAPI::setup_play_space(OpenXRAPI *this) {
   int *piVar1;
   char *pcVar2;
   OpenXRAPI OVar3;
   char cVar4;
   int iVar5;
   int iVar6;
   int *piVar7;
   long *plVar8;
   CallableCustom *this_00;
   undefined8 uVar9;
   code *pcVar10;
   long lVar11;
   int *piVar12;
   OpenXRAPI OVar13;
   long in_FS_OFFSET;
   undefined4 uVar14;
   undefined8 local_c8;
   long local_c0;
   long local_b8;
   long local_b0;
   long local_a8[2];
   char *local_98;
   undefined8 local_90;
   undefined4 local_88;
   undefined4 uStack_84;
   undefined8 uStack_80;
   int iStack_78;
   undefined1 local_74[12];
   undefined4 uStack_68;
   undefined1 auStack_64[12];
   int local_58[6];
   long local_40;
   lVar11 = *(long*)( this + 0xf8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar11 == 0) {
      _err_print_error("setup_play_space", "modules/openxr/openxr_api.cpp", 0x394, "Condition \"session == nullptr\" is true. Returning: false", 0, 0);
      uVar9 = 0;
   }
 else {
      local_c8 = 0;
      piVar12 = *(int**)( this + 0x70 );
      if (*(uint*)( this + 0x68 ) != 0) {
         piVar1 = piVar12 + *(uint*)( this + 0x68 );
         piVar7 = piVar12;
         do {
            iVar6 = *piVar7;
            if (*(int*)( this + 0xa0 ) == iVar6) {
               pcVar10 = *(code**)( this + 0x220 );
               OVar13 = (OpenXRAPI)0x0;
               uVar14 = _LC156;
               goto LAB_0010c642;
            }

            piVar7 = piVar7 + 1;
         }
 while ( piVar7 != piVar1 );
         if (*(int*)( this + 0xa0 ) == 0x3ba14a10) {
            do {
               if (*piVar12 == 3) {
                  cVar4 = is_print_verbose_enabled();
                  if (cVar4 != '\0') {
                     Variant::Variant((Variant*)local_58, "OpenXR: LOCAL_FLOOR space isn\'t supported, emulating using STAGE and LOCAL spaces.");
                     stringify_variants((Variant*)&local_88);
                     __print_line((String*)&local_88);
                     if (CONCAT44(uStack_84, local_88) != 0) {
                        LOCK();
                        plVar8 = (long*)( CONCAT44(uStack_84, local_88) + -0x10 );
                        *plVar8 = *plVar8 + -1;
                        UNLOCK();
                        if (*plVar8 == 0) {
                           lVar11 = CONCAT44(uStack_84, local_88);
                           local_88 = 0;
                           uStack_84 = 0;
                           Memory::free_static((void*)( lVar11 + -0x10 ), false);
                        }

                     }

                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                  }

                  uVar14 = _LC156;
                  lVar11 = *(long*)( this + 0xf8 );
                  pcVar10 = *(code**)( this + 0x220 );
                  if (*(long*)( this + 0x1c0 ) == 0) {
                     local_88 = 0x25;
                     local_74 = SUB1612((undefined1[16])0x0, 0);
                     uStack_84 = 0;
                     uStack_80 = 0;
                     auStack_64 = SUB1612((undefined1[16])0x0, 4);
                     iStack_78 = 2;
                     uStack_68 = _LC156;
                     if (pcVar10 == (code*)0x0) {
                        iVar6 = -0xc;
                        LAB_0010ce9e:get_error_string((CowData<char32_t>*)&local_98, this, iVar6);
                        Variant::Variant((Variant*)local_58, "OpenXR: Failed to create LOCAL space in order to emulate LOCAL_FLOOR [");
                        print_line<String,char_const*>((Variant*)local_58, (CowData<char32_t>*)&local_98, &_LC164);
                        if (Variant::needs_deinit[local_58[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                        OVar13 = (OpenXRAPI)0x0;
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                     }
 else {
                        OVar13 = (OpenXRAPI)0x1;
                        iVar6 = ( *pcVar10 )(lVar11, &local_88, this + 0x1c0);
                        if (iVar6 < 0) goto LAB_0010ce9e;
                     }

                     local_98 = "Emulation local space";
                     local_a8[0] = 0;
                     local_90 = 0x15;
                     String::parse_latin1((StrRange*)local_a8);
                     set_object_name(this, 4, *(undefined8*)( this + 0x1c0 ), (StrRange*)local_a8);
                     CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
                     if (*(long*)( this + 0x1c8 ) == 0) {
                        lVar11 = *(long*)( this + 0xf8 );
                        pcVar10 = *(code**)( this + 0x220 );
                        OVar3 = OVar13;
                        goto LAB_0010cbf4;
                     }

                  }
 else {
                     OVar13 = (OpenXRAPI)0x1;
                     OVar3 = (OpenXRAPI)0x1;
                     if (*(long*)( this + 0x1c8 ) != 0) {
                        iVar6 = 2;
                        goto LAB_0010c642;
                     }

                     LAB_0010cbf4:OVar13 = OVar3;
                     local_88 = 0x25;
                     local_74 = SUB1612((undefined1[16])0x0, 0);
                     uStack_84 = 0;
                     uStack_80 = 0;
                     auStack_64 = SUB1612((undefined1[16])0x0, 4);
                     iStack_78 = 3;
                     uStack_68 = uVar14;
                     if (pcVar10 == (code*)0x0) {
                        iVar6 = -0xc;
                        LAB_0010cf1f:get_error_string((CowData<char32_t>*)&local_98, this, iVar6);
                        Variant::Variant((Variant*)local_58, "OpenXR: Failed to create STAGE space in order to emulate LOCAL_FLOOR [");
                        print_line<String,char_const*>((Variant*)local_58, (CowData<char32_t>*)&local_98, &_LC164);
                        if (Variant::needs_deinit[local_58[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                        OVar13 = (OpenXRAPI)0x0;
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                     }
 else {
                        iVar6 = ( *pcVar10 )(lVar11, &local_88, this + 0x1c8);
                        if (iVar6 < 0) goto LAB_0010cf1f;
                     }

                     local_98 = "Emulation stage space";
                     local_a8[0] = 0;
                     local_90 = 0x15;
                     String::parse_latin1((StrRange*)local_a8);
                     set_object_name(this, 4, *(undefined8*)( this + 0x1c8 ), (StrRange*)local_a8);
                     CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
                  }

                  if (OVar13 == (OpenXRAPI)0x0) {
                     if (*(long*)( this + 0x1c0 ) != 0) {
                        if (*(code**)( this + 600 ) != (code*)0x0) {
                           ( **(code**)( this + 600 ) )();
                        }

                        *(undefined8*)( this + 0x1c0 ) = 0;
                     }

                     if (*(long*)( this + 0x1c8 ) != 0) {
                        if (*(code**)( this + 600 ) != (code*)0x0) {
                           ( **(code**)( this + 600 ) )();
                        }

                        *(undefined8*)( this + 0x1c8 ) = 0;
                     }

                  }

                  lVar11 = *(long*)( this + 0xf8 );
                  pcVar10 = *(code**)( this + 0x220 );
                  iVar6 = 2;
                  goto LAB_0010c642;
               }

               piVar12 = piVar12 + 1;
            }
 while ( piVar12 != piVar1 );
         }

      }

      cVar4 = is_print_verbose_enabled();
      if (cVar4 == '\0') {
         lVar11 = *(long*)( this + 0xf8 );
         iVar6 = 2;
         pcVar10 = *(code**)( this + 0x220 );
         OVar13 = (OpenXRAPI)0x0;
         uVar14 = _LC156;
      }
 else {
         local_a8[0] = 0;
         uStack_80 = 0x2c;
         local_88 = 0x11b388;
         uStack_84 = 0;
         String::parse_latin1((StrRange*)local_a8);
         OpenXRUtil::get_reference_space_name(&local_b8, *(undefined4*)( this + 0xa0 ));
         local_88 = 0x11d1fe;
         uStack_84 = 0;
         local_c0 = 0;
         uStack_80 = 8;
         String::parse_latin1((StrRange*)&local_c0);
         String::operator +((String*)&local_b0, (String*)&local_c0);
         String::operator +((String*)&local_98, (String*)&local_b0);
         Variant::Variant((Variant*)local_58, (String*)&local_98);
         stringify_variants((Variant*)&local_88);
         __print_line((String*)&local_88);
         if (CONCAT44(uStack_84, local_88) != 0) {
            LOCK();
            plVar8 = (long*)( CONCAT44(uStack_84, local_88) + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               lVar11 = CONCAT44(uStack_84, local_88);
               local_88 = 0;
               uStack_84 = 0;
               Memory::free_static((void*)( lVar11 + -0x10 ), false);
            }

         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         pcVar2 = local_98;
         if (local_98 != (char*)0x0) {
            LOCK();
            plVar8 = (long*)( local_98 + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               local_98 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar11 = local_b0;
         if (local_b0 != 0) {
            LOCK();
            plVar8 = (long*)( local_b0 + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               local_b0 = 0;
               Memory::free_static((void*)( lVar11 + -0x10 ), false);
            }

         }

         lVar11 = local_c0;
         if (local_c0 != 0) {
            LOCK();
            plVar8 = (long*)( local_c0 + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               local_c0 = 0;
               Memory::free_static((void*)( lVar11 + -0x10 ), false);
            }

         }

         lVar11 = local_b8;
         if (local_b8 != 0) {
            LOCK();
            plVar8 = (long*)( local_b8 + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               local_b8 = 0;
               Memory::free_static((void*)( lVar11 + -0x10 ), false);
            }

         }

         lVar11 = local_a8[0];
         if (local_a8[0] != 0) {
            LOCK();
            plVar8 = (long*)( local_a8[0] + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               local_a8[0] = 0;
               Memory::free_static((void*)( lVar11 + -0x10 ), false);
            }

         }

         lVar11 = *(long*)( this + 0xf8 );
         pcVar10 = *(code**)( this + 0x220 );
         OVar13 = (OpenXRAPI)0x0;
         iVar6 = 2;
         uVar14 = _LC156;
      }

      LAB_0010c642:local_88 = 0x25;
      local_74 = SUB1612((undefined1[16])0x0, 0);
      uStack_84 = 0;
      uStack_80 = 0;
      auStack_64 = SUB1612((undefined1[16])0x0, 4);
      iStack_78 = iVar6;
      uStack_68 = uVar14;
      if (pcVar10 == (code*)0x0) {
         iVar5 = -0xc;
      }
 else {
         iVar5 = ( *pcVar10 )(lVar11, &local_88, &local_c8);
         if (-1 < iVar5) {
            if (( *(long*)( this + 0x188 ) != 0 ) && ( *(code**)( this + 600 ) != (code*)0x0 )) {
               ( **(code**)( this + 600 ) )();
            }

            *(int*)( this + 0xa4 ) = iVar6;
            local_a8[0] = 0;
            *(undefined8*)( this + 0x188 ) = local_c8;
            local_98 = "Play space";
            local_90 = 10;
            String::parse_latin1((StrRange*)local_a8);
            set_object_name(this, 4, *(undefined8*)( this + 0x188 ), (StrRange*)local_a8);
            lVar11 = local_a8[0];
            if (local_a8[0] != 0) {
               LOCK();
               plVar8 = (long*)( local_a8[0] + -0x10 );
               *plVar8 = *plVar8 + -1;
               UNLOCK();
               if (*plVar8 == 0) {
                  local_a8[0] = 0;
                  Memory::free_static((void*)( lVar11 + -0x10 ), false);
               }

            }

            this[0x1b8] = OVar13;
            this[0x1d0] = OVar13;
            plVar8 = (long*)RenderingServer::get_singleton();
            if (plVar8 == (long*)0x0) {
               _err_print_error("set_render_play_space", "modules/openxr/openxr_api.h", 0x18c, "Parameter \"rendering_server\" is null.", 0, 0);
            }
 else {
               pcVar10 = *(code**)( *plVar8 + 0x12e0 );
               this_00 = (CallableCustom*)operator_new(0x30, "");
               CallableCustom::CallableCustom(this_00);
               *(undefined**)( this_00 + 0x20 ) = &_LC115;
               *(undefined8*)( this_00 + 0x10 ) = 0;
               *(undefined***)this_00 = &PTR_hash_00126688;
               *(code**)( this_00 + 0x28 ) = _set_render_play_space;
               CallableCustomMethodPointerBase::_setup((uint*)this_00, (int)this_00 + 0x28);
               *(char**)( this_00 + 0x20 ) = "OpenXRAPI::_set_render_play_space";
               Callable::Callable((Callable*)local_a8, this_00);
               Callable::bind<unsigned_long>(( ulong ) & local_98);
               ( *pcVar10 )(plVar8, (Callable*)&local_98);
               Callable::~Callable((Callable*)&local_98);
               Callable::~Callable((Callable*)local_a8);
            }

            uVar9 = 1;
            goto LAB_0010c7ea;
         }

      }

      get_error_string((Callable*)&local_98, this, iVar5);
      Variant::Variant((Variant*)local_58, "OpenXR: Failed to create play space [");
      print_line<String,char_const*>((Variant*)local_58, (Callable*)&local_98, &_LC164);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      pcVar2 = local_98;
      if (local_98 != (char*)0x0) {
         LOCK();
         plVar8 = (long*)( local_98 + -0x10 );
         *plVar8 = *plVar8 + -1;
         UNLOCK();
         if (*plVar8 == 0) {
            local_98 = (char*)0x0;
            Memory::free_static(pcVar2 + -0x10, false);
         }

      }

      uVar9 = 0;
   }

   LAB_0010c7ea:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar9;
}
/* OpenXRAPI::setup_view_space() */undefined8 OpenXRAPI::setup_view_space(OpenXRAPI *this) {
   long *plVar1;
   int *piVar2;
   long lVar3;
   char *pcVar4;
   int iVar5;
   int *piVar6;
   undefined8 uVar7;
   long in_FS_OFFSET;
   long local_80;
   char *local_78;
   undefined8 local_70;
   undefined4 local_68;
   undefined4 uStack_64;
   undefined8 uStack_60;
   undefined4 uStack_58;
   undefined1 local_54[12];
   undefined4 uStack_48;
   undefined1 auStack_44[12];
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0xf8 ) == 0) {
      _err_print_error("setup_view_space", "modules/openxr/openxr_api.cpp", 0x3fc, "Condition \"session == nullptr\" is true. Returning: false", 0, 0);
      uVar7 = 0;
   }
 else {
      piVar6 = *(int**)( this + 0x70 );
      if (*(uint*)( this + 0x68 ) != 0) {
         piVar2 = piVar6 + *(uint*)( this + 0x68 );
         do {
            if (*piVar6 == 1) {
               local_68 = 0x25;
               local_54 = SUB1612((undefined1[16])0x0, 0);
               uStack_64 = 0;
               uStack_60 = 0;
               auStack_44 = SUB1612((undefined1[16])0x0, 4);
               uStack_58 = 1;
               uStack_48 = 0x3f800000;
               if (*(code**)( this + 0x220 ) == (code*)0x0) {
                  iVar5 = -0xc;
               }
 else {
                  iVar5 = ( **(code**)( this + 0x220 ) )(*(long*)( this + 0xf8 ), &local_68, this + 400);
                  if (-1 < iVar5) {
                     local_80 = 0;
                     local_78 = "View space";
                     local_70 = 10;
                     String::parse_latin1((StrRange*)&local_80);
                     set_object_name(this, 4, *(undefined8*)( this + 400 ), (StrRange*)&local_80);
                     lVar3 = local_80;
                     if (local_80 != 0) {
                        LOCK();
                        plVar1 = (long*)( local_80 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_80 = 0;
                           Memory::free_static((void*)( lVar3 + -0x10 ), false);
                        }

                     }

                     uVar7 = 1;
                     goto LAB_0010d0cd;
                  }

               }

               get_error_string(&local_78, this, iVar5);
               Variant::Variant((Variant*)local_38, "OpenXR: Failed to create view space [");
               print_line<String,char_const*>((Variant*)local_38, &local_78, &_LC164);
               if (Variant::needs_deinit[local_38[0]] != '\0') {
                  Variant::_clear_internal();
               }

               pcVar4 = local_78;
               if (local_78 == (char*)0x0) goto LAB_0010d150;
               LOCK();
               plVar1 = (long*)( local_78 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 != 0) goto LAB_0010d150;
               local_78 = (char*)0x0;
               Memory::free_static(pcVar4 + -0x10, false);
               uVar7 = 0;
               goto LAB_0010d0cd;
            }

            piVar6 = piVar6 + 1;
         }
 while ( piVar2 != piVar6 );
      }

      Variant::Variant((Variant*)local_38, "OpenXR: reference space XR_REFERENCE_SPACE_TYPE_VIEW is not supported.");
      stringify_variants((Variant*)&local_68);
      __print_line((String*)&local_68);
      if (CONCAT44(uStack_64, local_68) != 0) {
         LOCK();
         plVar1 = (long*)( CONCAT44(uStack_64, local_68) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = CONCAT44(uStack_64, local_68);
            local_68 = 0;
            uStack_64 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if (Variant::needs_deinit[local_38[0]] == '\0') {
         LAB_0010d150:uVar7 = 0;
      }
 else {
         Variant::_clear_internal();
         uVar7 = 0;
      }

   }

   LAB_0010d0cd:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar7;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OpenXRAPI::reset_emulated_floor_height() */OpenXRAPI OpenXRAPI::reset_emulated_floor_height(OpenXRAPI *this) {
   code *pcVar1;
   long lVar2;
   int iVar3;
   long *plVar4;
   CallableCustom *this_00;
   OpenXRAPI OVar5;
   long in_FS_OFFSET;
   undefined8 local_f0;
   Callable local_e8[16];
   long local_d8[2];
   undefined4 local_c8;
   undefined4 uStack_c4;
   undefined8 uStack_c0;
   undefined4 uStack_b8;
   undefined1 local_b4[12];
   undefined4 uStack_a8;
   undefined4 uStack_a4;
   undefined4 local_a0;
   undefined4 uStack_9c;
   undefined4 local_98[2];
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_80;
   undefined8 uStack_78;
   undefined8 local_70;
   undefined4 local_68;
   int local_58[6];
   long local_40;
   OVar5 = this[0x1b8];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (OVar5 == (OpenXRAPI)0x0) {
      OVar5 = (OpenXRAPI)0x0;
      _err_print_error("reset_emulated_floor_height", "modules/openxr/openxr_api.cpp", 0x41b, "Condition \"!local_floor_emulation.enabled\" is true. Returning: false", 0, 0);
      goto LAB_0010d461;
   }

   if (*(long*)( this + 0x1c0 ) == 0) {
      OVar5 = (OpenXRAPI)0x0;
      _err_print_error("reset_emulated_floor_height", "modules/openxr/openxr_api.cpp", 0x41c, "Condition \"local_floor_emulation.local_space == nullptr\" is true. Returning: false", 0, 0);
      goto LAB_0010d461;
   }

   if (*(long*)( this + 0x1c8 ) == 0) {
      OVar5 = (OpenXRAPI)0x0;
      _err_print_error("reset_emulated_floor_height", "modules/openxr/openxr_api.cpp", 0x41d, "Condition \"local_floor_emulation.stage_space == nullptr\" is true. Returning: false", 0, 0);
      goto LAB_0010d461;
   }

   local_98[0] = 0x2a;
   local_90 = 0;
   local_88 = 0;
   local_70 = 0;
   local_68 = 0;
   local_80 = __LC303;
   uStack_78 = _UNK_001269a8;
   if (*(code**)( this + 0x2f0 ) == (code*)0x0) {
      iVar3 = -0xc;
      LAB_0010d518:get_error_string(&local_c8, this, iVar3);
      Variant::Variant((Variant*)local_58, "OpenXR: Failed to locate STAGE space in LOCAL space, in order to emulate LOCAL_FLOOR [");
      print_line<String,char_const*>((Variant*)local_58, &local_c8, &_LC164);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (CONCAT44(uStack_c4, local_c8) != 0) {
         LOCK();
         plVar4 = (long*)( CONCAT44(uStack_c4, local_c8) + -0x10 );
         *plVar4 = *plVar4 + -1;
         UNLOCK();
         if (*plVar4 == 0) {
            lVar2 = CONCAT44(uStack_c4, local_c8);
            OVar5 = (OpenXRAPI)0x0;
            local_c8 = 0;
            uStack_c4 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
            goto LAB_0010d461;
         }

      }

   }
 else {
      iVar3 = ( **(code**)( this + 0x2f0 ) )(*(long*)( this + 0x1c8 ), *(long*)( this + 0x1c0 ), *(undefined8*)( this + 0x118 ), local_98);
      if (iVar3 < 0) goto LAB_0010d518;
      local_c8 = 0x25;
      local_b4 = SUB1612((undefined1[16])0x0, 0);
      uStack_a4 = 0;
      uStack_9c = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      uStack_b8 = 2;
      uStack_a8 = 0x3f800000;
      local_a0 = local_70._4_4_;
      if (*(code**)( this + 0x220 ) == (code*)0x0) {
         iVar3 = -0xc;
      }
 else {
         iVar3 = ( **(code**)( this + 0x220 ) )(*(undefined8*)( this + 0xf8 ), &local_c8, &local_f0);
         if (-1 < iVar3) {
            if (*(code**)( this + 600 ) != (code*)0x0) {
               ( **(code**)( this + 600 ) )(*(undefined8*)( this + 0x188 ));
            }

            *(undefined4*)( this + 0xa4 ) = 0x3ba14a10;
            *(undefined8*)( this + 0x188 ) = local_f0;
            plVar4 = (long*)RenderingServer::get_singleton();
            if (plVar4 == (long*)0x0) {
               _err_print_error("set_render_play_space", "modules/openxr/openxr_api.h", 0x18c, "Parameter \"rendering_server\" is null.", 0, 0);
            }
 else {
               pcVar1 = *(code**)( *plVar4 + 0x12e0 );
               this_00 = (CallableCustom*)operator_new(0x30, "");
               CallableCustom::CallableCustom(this_00);
               *(undefined**)( this_00 + 0x20 ) = &_LC115;
               *(undefined8*)( this_00 + 0x10 ) = 0;
               *(undefined***)this_00 = &PTR_hash_00126688;
               *(code**)( this_00 + 0x28 ) = _set_render_play_space;
               CallableCustomMethodPointerBase::_setup((uint*)this_00, (int)this_00 + 0x28);
               *(char**)( this_00 + 0x20 ) = "OpenXRAPI::_set_render_play_space";
               Callable::Callable(local_e8, this_00);
               Callable::bind<unsigned_long>((ulong)local_d8);
               ( *pcVar1 )(plVar4, (Callable*)local_d8);
               Callable::~Callable((Callable*)local_d8);
               Callable::~Callable(local_e8);
            }

            goto LAB_0010d461;
         }

      }

      get_error_string(local_d8, this, iVar3);
      Variant::Variant((Variant*)local_58, "OpenXR: Failed to recreate emulated LOCAL_FLOOR play space with latest floor estimate [");
      print_line<String,char_const*>((Variant*)local_58, local_d8, &_LC164);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      lVar2 = local_d8[0];
      if (local_d8[0] != 0) {
         LOCK();
         plVar4 = (long*)( local_d8[0] + -0x10 );
         *plVar4 = *plVar4 + -1;
         UNLOCK();
         if (*plVar4 == 0) {
            OVar5 = (OpenXRAPI)0x0;
            local_d8[0] = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
            goto LAB_0010d461;
         }

      }

   }

   OVar5 = (OpenXRAPI)0x0;
   LAB_0010d461:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return OVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::get_head_center(Transform3D&, Vector3&, Vector3&) */int OpenXRAPI::get_head_center(OpenXRAPI *this, Transform3D *param_1, Vector3 *param_2, Vector3 *param_3) {
   long *plVar1;
   long lVar2;
   char cVar3;
   int iVar4;
   char *pcVar5;
   long in_FS_OFFSET;
   long local_c0;
   undefined4 local_b8;
   undefined1 local_b4[12];
   uint uStack_a8;
   undefined4 uStack_a4;
   undefined8 uStack_a0;
   undefined4 uStack_98;
   undefined8 local_94;
   undefined4 local_8c;
   undefined4 local_88;
   undefined1 local_84[16];
   undefined1 local_74[16];
   undefined1 local_64[16];
   undefined4 local_54;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( this[0x104] != (OpenXRAPI)0x0 ) && ( *(long*)( this + 0x118 ) != 0 )) {
      local_b8 = 0x2b;
      local_84._8_8_ = 0;
      local_84._0_8_ = &local_b8;
      local_84 = local_84 << 0x20;
      uStack_a4 = 0;
      uStack_a0 = 0;
      local_54 = 0;
      local_88 = 0x2a;
      local_b4 = SUB1612((undefined1[16])0x0, 0);
      uStack_a8 = 0;
      uStack_98 = 0;
      local_94 = 0;
      local_8c = 0;
      local_74 = (undefined1[16])0x0;
      local_64 = (undefined1[16])0x0;
      if (*(code**)( this + 0x2f0 ) == (code*)0x0) {
         iVar4 = -0xc;
      }
 else {
         iVar4 = ( **(code**)( this + 0x2f0 ) )(*(undefined8*)( this + 400 ), *(undefined8*)( this + 0x188 ), *(long*)( this + 0x118 ), (XrSpaceLocation*)&local_88);
         if (-1 < iVar4) {
            iVar4 = _transform_from_location<XrSpaceLocation>((XrSpaceLocation*)&local_88, param_1);
            if (( uStack_a8 & 1 ) == 0) {
               *(undefined8*)param_2 = 0;
               *(undefined4*)( param_2 + 8 ) = 0;
               if (( uStack_a8 & 2 ) == 0) goto LAB_0010d93d;
               LAB_0010d7a5:*(undefined8*)param_3 = local_94;
               *(undefined4*)( param_3 + 8 ) = local_8c;
            }
 else {
               *(undefined8*)param_2 = uStack_a0;
               *(undefined4*)( param_2 + 8 ) = uStack_98;
               if (( uStack_a8 & 2 ) != 0) goto LAB_0010d7a5;
               LAB_0010d93d:*(undefined8*)param_3 = 0;
               *(undefined4*)( param_3 + 8 ) = 0;
            }

            if (*(int*)( this + 0x198 ) == iVar4) goto LAB_0010d8f2;
            *(int*)( this + 0x198 ) = iVar4;
            if (iVar4 != 0) {
               if (iVar4 == 1) {
                  cVar3 = is_print_verbose_enabled();
                  pcVar5 = "OpenVR Head pose now tracking with low confidence";
                  if (cVar3 == '\0') goto LAB_0010d8f2;
               }
 else {
                  cVar3 = is_print_verbose_enabled();
                  if (cVar3 == '\0') goto LAB_0010d8f2;
                  pcVar5 = "OpenVR Head pose now tracking with high confidence";
               }

               Variant::Variant((Variant*)local_48, pcVar5);
               stringify_variants((Variant*)&local_c0);
               __print_line((String*)&local_c0);
               lVar2 = local_c0;
               if (local_c0 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_c0 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_c0 = 0;
                     Memory::free_static((void*)( lVar2 + -0x10 ), false);
                  }

               }

               if (Variant::needs_deinit[local_48[0]] != '\0') {
                  Variant::_clear_internal();
               }

               goto LAB_0010d8f2;
            }

            Variant::Variant((Variant*)local_48, "OpenXR head space location not valid (check tracking?)");
            stringify_variants((Variant*)&local_c0);
            __print_line((String*)&local_c0);
            lVar2 = local_c0;
            if (local_c0 != 0) {
               LOCK();
               plVar1 = (long*)( local_c0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_c0 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }

            }

            if (Variant::needs_deinit[local_48[0]] != '\0') {
               Variant::_clear_internal();
            }

            goto LAB_0010d8f0;
         }

      }

      get_error_string(&local_c0, this, iVar4);
      Variant::Variant((Variant*)local_48, "OpenXR: Failed to locate view space in play space [");
      print_line<String,char_const*>((Variant*)local_48, &local_c0, &_LC164);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

      lVar2 = local_c0;
      if (local_c0 != 0) {
         LOCK();
         plVar1 = (long*)( local_c0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_c0 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

   }

   LAB_0010d8f0:iVar4 = 0;
   LAB_0010d8f2:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar4;
}
/* OpenXRAPI::get_play_space_bounds() const */undefined8 OpenXRAPI::get_play_space_bounds(OpenXRAPI *this) {
   long *plVar1;
   long lVar2;
   int iVar3;
   long in_FS_OFFSET;
   undefined8 local_48;
   long local_40;
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0xf8 ) == 0) {
      _err_print_error("get_play_space_bounds", "modules/openxr/openxr_api.cpp", 0xa1f, "Condition \"session == nullptr\" is true. Returning: Size2()", 0, 0);
      local_48 = 0;
   }
 else {
      if (*(code**)( this + 0x2d8 ) == (code*)0x0) {
         iVar3 = -0xc;
      }
 else {
         iVar3 = ( **(code**)( this + 0x2d8 ) )(*(long*)( this + 0xf8 ), *(undefined4*)( this + 0xa4 ), &local_48);
         if (-1 < iVar3) goto LAB_0010da6c;
      }

      get_error_string(&local_40, this, iVar3);
      Variant::Variant((Variant*)local_38, "OpenXR: failed to get play space bounds! [");
      print_line<String,char_const*>((Variant*)local_38, &local_40, &_LC164);
      if (Variant::needs_deinit[local_38[0]] != '\0') {
         Variant::_clear_internal();
      }

      lVar2 = local_40;
      if (local_40 != 0) {
         LOCK();
         plVar1 = (long*)( local_40 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_40 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
            local_48 = 0;
            goto LAB_0010da6c;
         }

      }

      local_48 = 0;
   }

   LAB_0010da6c:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_48;
}
/* OpenXRAPI::get_action_bool(RID, RID) */bool OpenXRAPI::get_action_bool(OpenXRAPI *this, ulong param_2, ulong param_3) {
   long *plVar1;
   long lVar2;
   int iVar3;
   long lVar4;
   long in_FS_OFFSET;
   bool bVar5;
   long local_90;
   undefined4 local_88;
   undefined8 local_84;
   undefined4 local_7c;
   undefined8 local_78;
   undefined8 local_70;
   undefined4 local_68[2];
   undefined8 local_60;
   int local_58;
   int local_48;
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0xf8 ) == 0) {
      _err_print_error("get_action_bool", "modules/openxr/openxr_api.cpp", 0xd34, "Condition \"session == nullptr\" is true. Returning: false", 0, 0);
      goto LAB_0010dca0;
   }

   if (( param_2 == 0 ) || ( *(uint*)( this + 0x414 ) <= (uint)param_2 )) {
      LAB_0010dde0:_err_print_error("get_action_bool", "modules/openxr/openxr_api.cpp", 0xd36, "Parameter \"action\" is null.", 0, 0);
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 0x400 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x410 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x410 ) ) * 0x38;
      if (*(int*)( lVar2 + 0x30 ) != (int)( param_2 >> 0x20 )) {
         if (*(int*)( lVar2 + 0x30 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

         goto LAB_0010dde0;
      }

      if (( param_3 == 0 ) || ( *(uint*)( this + 0x364 ) <= (uint)param_3 )) {
         LAB_0010dce0:_err_print_error("get_action_bool", "modules/openxr/openxr_api.cpp", 0xd38, "Parameter \"tracker\" is null.", 0, 0);
      }
 else {
         lVar4 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x360 ) ) * 0x20 + *(long*)( *(long*)( this + 0x350 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x360 ) ) * 8 );
         iVar3 = *(int*)( lVar4 + 0x18 );
         if (iVar3 != (int)( param_3 >> 0x20 )) {
            if (iVar3 + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            }

            goto LAB_0010dce0;
         }

         if (this[0x104] != (OpenXRAPI)0x0) {
            if (*(int*)( lVar2 + 0x10 ) == 1) {
               local_78 = *(undefined8*)( lVar2 + 0x28 );
               local_7c = 0;
               local_84 = 0;
               local_70 = *(undefined8*)( lVar4 + 8 );
               local_88 = 0x3a;
               local_68[0] = 0x17;
               local_60 = 0;
               if (*(code**)( this + 0x2b0 ) == (code*)0x0) {
                  iVar3 = -0xc;
               }
 else {
                  iVar3 = ( **(code**)( this + 0x2b0 ) )(*(undefined8*)( this + 0xf8 ), &local_88, local_68);
                  if (-1 < iVar3) {
                     if (local_48 != 0) {
                        bVar5 = local_58 != 0;
                        goto LAB_0010dca2;
                     }

                     goto LAB_0010dca0;
                  }

               }

               get_error_string(&local_90, this, iVar3);
               Variant::Variant((Variant*)local_38, "OpenXR: couldn\'t get action boolean! [");
               print_line<String,char_const*>((Variant*)local_38, &local_90, &_LC164);
               if (Variant::needs_deinit[local_38[0]] != '\0') {
                  Variant::_clear_internal();
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

            }
 else {
               _err_print_error("get_action_bool", "modules/openxr/openxr_api.cpp", 0xd3e, "Condition \"action->action_type != XR_ACTION_TYPE_BOOLEAN_INPUT\" is true. Returning: false", 0, 0);
            }

         }

      }

   }

   LAB_0010dca0:bVar5 = false;
   LAB_0010dca2:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::get_action_float(RID, RID) */void OpenXRAPI::get_action_float(OpenXRAPI *this, ulong param_2, ulong param_3) {
   long *plVar1;
   long lVar2;
   int iVar3;
   long lVar4;
   long in_FS_OFFSET;
   long local_90;
   undefined4 local_88;
   undefined8 local_84;
   undefined4 local_7c;
   undefined8 local_78;
   undefined8 local_70;
   undefined4 local_68[2];
   undefined8 local_60;
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0xf8 ) == 0) {
      _err_print_error("get_action_float", "modules/openxr/openxr_api.cpp", 0xd54, "Condition \"session == nullptr\" is true. Returning: 0.0", 0, 0);
      goto LAB_0010e014;
   }

   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x414 ) )) {
      lVar2 = *(long*)( *(long*)( this + 0x400 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x410 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x410 ) ) * 0x38;
      if (*(int*)( lVar2 + 0x30 ) == (int)( param_2 >> 0x20 )) {
         if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x364 ) )) {
            lVar4 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x360 ) ) * 0x20 + *(long*)( *(long*)( this + 0x350 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x360 ) ) * 8 );
            iVar3 = *(int*)( lVar4 + 0x18 );
            if (iVar3 == (int)( param_3 >> 0x20 )) {
               if (this[0x104] != (OpenXRAPI)0x0) {
                  if (*(int*)( lVar2 + 0x10 ) == 2) {
                     local_78 = *(undefined8*)( lVar2 + 0x28 );
                     local_7c = 0;
                     local_84 = 0;
                     local_70 = *(undefined8*)( lVar4 + 8 );
                     local_88 = 0x3a;
                     local_68[0] = 0x18;
                     local_60 = 0;
                     if (*(code**)( this + 0x2b8 ) == (code*)0x0) {
                        iVar3 = -0xc;
                     }
 else {
                        iVar3 = ( **(code**)( this + 0x2b8 ) )(*(undefined8*)( this + 0xf8 ), &local_88, local_68);
                        if (-1 < iVar3) goto LAB_0010e014;
                     }

                     get_error_string(&local_90, this, iVar3);
                     Variant::Variant((Variant*)local_38, "OpenXR: couldn\'t get action float! [");
                     print_line<String,char_const*>((Variant*)local_38, &local_90, &_LC164);
                     if (Variant::needs_deinit[local_38[0]] != '\0') {
                        Variant::_clear_internal();
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

                  }
 else {
                     _err_print_error("get_action_float", "modules/openxr/openxr_api.cpp", 0xd5e, "Condition \"action->action_type != XR_ACTION_TYPE_FLOAT_INPUT\" is true. Returning: 0.0", 0, 0);
                  }

               }

               goto LAB_0010e014;
            }

            if (iVar3 + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            }

         }

         _err_print_error("get_action_float", "modules/openxr/openxr_api.cpp", 0xd58, "Parameter \"tracker\" is null.", 0, 0);
         goto LAB_0010e014;
      }

      if (*(int*)( lVar2 + 0x30 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("get_action_float", "modules/openxr/openxr_api.cpp", 0xd56, "Parameter \"action\" is null.", 0, 0);
   LAB_0010e014:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::get_action_vector2(RID, RID) */undefined8 OpenXRAPI::get_action_vector2(OpenXRAPI *this, ulong param_2, ulong param_3) {
   long *plVar1;
   long lVar2;
   int iVar3;
   long lVar4;
   long in_FS_OFFSET;
   undefined8 uVar5;
   long local_90;
   undefined4 local_88;
   undefined8 local_84;
   undefined4 local_7c;
   undefined8 local_78;
   undefined8 local_70;
   undefined4 local_68[2];
   undefined8 local_60;
   undefined8 local_58;
   int local_40;
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0xf8 ) == 0) {
      _err_print_error("get_action_vector2", "modules/openxr/openxr_api.cpp", 0xd74, "Condition \"session == nullptr\" is true. Returning: Vector2()", 0, 0);
      uVar5 = 0;
   }
 else {
      if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x414 ) )) {
         lVar2 = *(long*)( *(long*)( this + 0x400 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x410 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x410 ) ) * 0x38;
         if (*(int*)( lVar2 + 0x30 ) == (int)( param_2 >> 0x20 )) {
            if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x364 ) )) {
               lVar4 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x360 ) ) * 0x20 + *(long*)( *(long*)( this + 0x350 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x360 ) ) * 8 );
               iVar3 = *(int*)( lVar4 + 0x18 );
               if (iVar3 == (int)( param_3 >> 0x20 )) {
                  if (this[0x104] != (OpenXRAPI)0x0) {
                     if (*(int*)( lVar2 + 0x10 ) == 3) {
                        local_78 = *(undefined8*)( lVar2 + 0x28 );
                        local_7c = 0;
                        local_84 = 0;
                        local_70 = *(undefined8*)( lVar4 + 8 );
                        local_88 = 0x3a;
                        local_68[0] = 0x19;
                        local_60 = 0;
                        if (*(code**)( this + 0x2c0 ) == (code*)0x0) {
                           iVar3 = -0xc;
                        }
 else {
                           iVar3 = ( **(code**)( this + 0x2c0 ) )(*(undefined8*)( this + 0xf8 ), &local_88, local_68);
                           if (-1 < iVar3) {
                              uVar5 = 0;
                              if (local_40 != 0) {
                                 uVar5 = local_58;
                              }

                              goto LAB_0010e30e;
                           }

                        }

                        get_error_string(&local_90, this, iVar3);
                        Variant::Variant((Variant*)local_38, "OpenXR: couldn\'t get action vector2! [");
                        print_line<String,char_const*>((Variant*)local_38, &local_90, &_LC164);
                        if (Variant::needs_deinit[local_38[0]] != '\0') {
                           Variant::_clear_internal();
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

                     }
 else {
                        _err_print_error("get_action_vector2", "modules/openxr/openxr_api.cpp", 0xd7e, "Condition \"action->action_type != XR_ACTION_TYPE_VECTOR2F_INPUT\" is true. Returning: Vector2()", 0, 0);
                     }

                  }

                  uVar5 = 0;
                  goto LAB_0010e30e;
               }

               if (iVar3 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

            }

            _err_print_error("get_action_vector2", "modules/openxr/openxr_api.cpp", 0xd78, "Parameter \"tracker\" is null.", 0, 0);
            uVar5 = 0;
            goto LAB_0010e30e;
         }

         if (*(int*)( lVar2 + 0x30 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

      _err_print_error("get_action_vector2", "modules/openxr/openxr_api.cpp", 0xd76, "Parameter \"action\" is null.", 0, 0);
      uVar5 = 0;
   }

   LAB_0010e30e:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::trigger_haptic_pulse(RID, RID, float, float, long) */OpenXRAPI OpenXRAPI::trigger_haptic_pulse(undefined4 param_1, undefined4 param_2, OpenXRAPI *this, ulong param_4, ulong param_5, undefined8 param_6) {
   long *plVar1;
   long lVar2;
   int iVar3;
   long lVar4;
   OpenXRAPI OVar5;
   long in_FS_OFFSET;
   long local_80;
   undefined4 local_78;
   undefined8 local_74;
   undefined4 local_6c;
   undefined8 local_68;
   undefined8 local_60;
   undefined4 local_58;
   undefined8 local_54;
   undefined4 local_4c;
   undefined8 local_48;
   undefined8 local_40;
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0xf8 ) == 0) {
      _err_print_error("trigger_haptic_pulse", "modules/openxr/openxr_api.cpp", 0xdeb, "Condition \"session == nullptr\" is true. Returning: false", 0, 0);
      LAB_0010e755:OVar5 = (OpenXRAPI)0x0;
   }
 else {
      if (( param_4 != 0 ) && ( (uint)param_4 < *(uint*)( this + 0x414 ) )) {
         lVar2 = *(long*)( *(long*)( this + 0x400 ) + ( ( param_4 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x410 ) ) * 8 ) + ( ( param_4 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x410 ) ) * 0x38;
         if (*(int*)( lVar2 + 0x30 ) == (int)( param_4 >> 0x20 )) {
            if (( param_5 != 0 ) && ( (uint)param_5 < *(uint*)( this + 0x364 ) )) {
               lVar4 = ( ( param_5 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x360 ) ) * 0x20 + *(long*)( *(long*)( this + 0x350 ) + ( ( param_5 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x360 ) ) * 8 );
               iVar3 = *(int*)( lVar4 + 0x18 );
               if (iVar3 == (int)( param_5 >> 0x20 )) {
                  OVar5 = this[0x104];
                  if (OVar5 != (OpenXRAPI)0x0) {
                     if (*(int*)( lVar2 + 0x10 ) != 100) {
                        OVar5 = (OpenXRAPI)0x0;
                        _err_print_error("trigger_haptic_pulse", "modules/openxr/openxr_api.cpp", 0xdf5, "Condition \"action->action_type != XR_ACTION_TYPE_VIBRATION_OUTPUT\" is true. Returning: false", 0, 0);
                        goto LAB_0010e713;
                     }

                     local_68 = *(undefined8*)( lVar2 + 0x28 );
                     local_74 = 0;
                     local_6c = 0;
                     local_60 = *(undefined8*)( lVar4 + 8 );
                     local_78 = 0x3b;
                     local_54 = 0;
                     local_4c = 0;
                     local_58 = 0xd;
                     local_40 = CONCAT44(param_2, param_1);
                     local_48 = param_6;
                     if (*(code**)( this + 0x1e0 ) == (code*)0x0) {
                        iVar3 = -0xc;
                     }
 else {
                        iVar3 = ( **(code**)( this + 0x1e0 ) )(*(undefined8*)( this + 0xf8 ), &local_78, &local_58);
                        if (-1 < iVar3) goto LAB_0010e713;
                     }

                     get_error_string(&local_80, this, iVar3);
                     Variant::Variant((Variant*)local_38, "OpenXR: failed to apply haptic feedback! [");
                     print_line<String,char_const*>((Variant*)local_38, &local_80, &_LC164);
                     if (Variant::needs_deinit[local_38[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     lVar2 = local_80;
                     if (local_80 != 0) {
                        LOCK();
                        plVar1 = (long*)( local_80 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           OVar5 = (OpenXRAPI)0x0;
                           local_80 = 0;
                           Memory::free_static((void*)( lVar2 + -0x10 ), false);
                           goto LAB_0010e713;
                        }

                     }

                  }

                  goto LAB_0010e755;
               }

               if (iVar3 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

            }

            OVar5 = (OpenXRAPI)0x0;
            _err_print_error("trigger_haptic_pulse", "modules/openxr/openxr_api.cpp", 0xdef, "Parameter \"tracker\" is null.", 0, 0);
            goto LAB_0010e713;
         }

         if (*(int*)( lVar2 + 0x30 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

      OVar5 = (OpenXRAPI)0x0;
      _err_print_error("trigger_haptic_pulse", "modules/openxr/openxr_api.cpp", 0xded, "Parameter \"action\" is null.", 0, 0);
   }

   LAB_0010e713:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return OVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Type propagation algorithm not settling *//* OpenXRAPI::OpenXRSwapChainInfo::create(unsigned long, unsigned long, long, unsigned int, unsigned
   int, unsigned int, unsigned int) */undefined8 OpenXRAPI::OpenXRSwapChainInfo::create(OpenXRSwapChainInfo *this, ulong param_1, ulong param_2, long param_3, uint param_4, uint param_5, uint param_6, uint param_7) {
   undefined8 *puVar1;
   long lVar2;
   long *plVar3;
   long lVar4;
   int iVar5;
   long lVar6;
   undefined8 uVar7;
   long lVar8;
   undefined8 *puVar9;
   long in_FS_OFFSET;
   undefined8 local_a8;
   long local_a0[3];
   ulong local_88;
   ulong local_80;
   long local_78;
   uint local_70;
   uint local_6c;
   uint local_68;
   undefined4 local_64;
   uint local_60;
   undefined4 local_5c;
   int local_58[6];
   long local_40;
   lVar4 = singleton;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (singleton == 0) {
      _err_print_error("create", "modules/openxr/openxr_api.cpp", 0x4b, "Parameter \"openxr_api\" is null.", 0, 0);
      uVar7 = 0;
      goto LAB_0010ead3;
   }

   lVar2 = *(long*)( singleton + 0xf8 );
   if (lVar2 == 0) {
      _err_print_error("create", "modules/openxr/openxr_api.cpp", 0x4e, "Condition \"xr_session == nullptr\" is true. Returning: false", 0, 0);
      uVar7 = 0;
      goto LAB_0010ead3;
   }

   plVar3 = *(long**)( singleton + 0x148 );
   if (plVar3 == (long*)0x0) {
      _err_print_error("create", "modules/openxr/openxr_api.cpp", 0x51, "Parameter \"xr_graphics_extension\" is null.", 0, 0);
      uVar7 = 0;
      goto LAB_0010ead3;
   }

   if (*(long*)this != 0) {
      _err_print_error("create", "modules/openxr/openxr_api.cpp", 0x54, "Condition \"swapchain != nullptr\" is true. Returning: false", 0, 0);
      uVar7 = 0;
      goto LAB_0010ead3;
   }

   lVar8 = 0;
   if (( registered_extension_wrappers._8_8_ != 0 ) && ( puVar1 = (undefined8*)( registered_extension_wrappers._8_8_ + *(long*)( registered_extension_wrappers._8_8_ + -8 ) * 8 ) ),puVar9 = (undefined8*)registered_extension_wrappers._8_8_,puVar1 != (undefined8*)registered_extension_wrappers._8_8_) {
      do {
         lVar6 = ( **(code**)( *(long*)*puVar9 + 0x20 ) )((long*)*puVar9, lVar8);
         if (lVar6 != 0) {
            lVar8 = lVar6;
         }

         puVar9 = puVar9 + 1;
      }
 while ( puVar1 != puVar9 );
   }

   local_64 = 1;
   local_a0[1] = 9;
   local_5c = 1;
   local_70 = param_6;
   local_60 = param_7;
   local_a0[2] = lVar8;
   local_88 = param_1;
   local_80 = param_2;
   local_78 = param_3;
   local_6c = param_4;
   local_68 = param_5;
   if (*(code**)( lVar4 + 0x230 ) == (code*)0x0) {
      iVar5 = -0xc;
      LAB_0010eb08:get_error_string(local_a0, lVar4, iVar5);
      Variant::Variant((Variant*)local_58, "OpenXR: Failed to get swapchain [");
      print_line<String,char_const*>((Variant*)local_58, local_a0, &_LC164);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      lVar4 = local_a0[0];
      if (local_a0[0] != 0) {
         LOCK();
         plVar3 = (long*)( local_a0[0] + -0x10 );
         *plVar3 = *plVar3 + -1;
         UNLOCK();
         if (*plVar3 == 0) {
            local_a0[0] = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

   }
 else {
      iVar5 = ( **(code**)( lVar4 + 0x230 ) )(lVar2, local_a0 + 1, &local_a8);
      if (iVar5 < 0) goto LAB_0010eb08;
      uVar7 = ( **(code**)( *plVar3 + 0x130 ) )(plVar3, local_a8, param_3, param_4, param_5, param_6);
      if ((char)uVar7 != '\0') {
         *(undefined8*)this = local_a8;
         goto LAB_0010ead3;
      }

      if (*(code**)( lVar4 + 0x260 ) != (code*)0x0) {
         ( **(code**)( lVar4 + 0x260 ) )(local_a8);
         uVar7 = 0;
         goto LAB_0010ead3;
      }

   }

   uVar7 = 0;
   LAB_0010ead3:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar7;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OpenXRAPI::create_main_swapchains(Vector2i) */undefined4 OpenXRAPI::create_main_swapchains(OpenXRAPI *this, undefined8 param_2) {
   OpenXRAPI OVar1;
   uint uVar2;
   undefined4 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   code *pcVar6;
   undefined8 uVar7;
   long lVar8;
   char cVar9;
   undefined4 uVar10;
   long *plVar11;
   undefined4 *puVar12;
   undefined8 *puVar13;
   uint uVar14;
   ulong uVar15;
   undefined8 *puVar16;
   ulong uVar17;
   long in_FS_OFFSET;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar11 = (long*)RenderingServer::get_singleton();
   if (plVar11 == (long*)0x0) {
      _err_print_error("create_main_swapchains", "modules/openxr/openxr_api.cpp", 0x499, "Parameter \"rendering_server\" is null.", 0, 0);
   }
 else {
      uVar10 = ( **(code**)( *plVar11 + 0x12d8 ) )(plVar11);
      if ((char)uVar10 == '\0') {
         _err_print_error("create_main_swapchains", "modules/openxr/openxr_api.cpp", 0x499, "Condition \"!rendering_server->is_on_render_thread()\" is true. Returning: false", 0, 0);
      }
 else if (*(long*)( this + 0x148 ) == 0) {
         _err_print_error("create_main_swapchains", "modules/openxr/openxr_api.cpp", 0x49a, "Parameter \"graphics_extension\" is null.", 0, 0);
      }
 else {
         if (*(long*)( this + 0xf8 ) != 0) {
            *(undefined8*)( this + 0x558 ) = param_2;
            if (*(long*)( this + 0x170 ) != 0) {
               cVar9 = OpenXRSwapChainInfo::create((OpenXRSwapChainInfo*)( this + 0x560 ), 0, 0x61, *(long*)( this + 0x170 ), *(uint*)( this + 0x558 ), *(uint*)( this + 0x55c ), 1, *(uint*)( this + 0x160 ));
               if (cVar9 == '\0') goto LAB_0010ef38;
               local_60 = 0;
               local_58 = "Main color swapchain";
               local_50 = 0x14;
               String::parse_latin1((StrRange*)&local_60);
               set_object_name(this, 3, *(undefined8*)( this + 0x560 ), (StrRange*)&local_60);
               lVar8 = local_60;
               if (local_60 != 0) {
                  LOCK();
                  plVar11 = (long*)( local_60 + -0x10 );
                  *plVar11 = *plVar11 + -1;
                  UNLOCK();
                  if (*plVar11 == 0) {
                     local_60 = 0;
                     Memory::free_static((void*)( lVar8 + -0x10 ), false);
                  }

               }

            }

            if (( *(long*)( this + 0x178 ) != 0 ) && ( this[0xa8] != (OpenXRAPI)0x0 )) {
               OpenXRCompositionLayerDepthExtension::get_singleton();
               cVar9 = OpenXRCompositionLayerDepthExtension::is_available();
               if (cVar9 != '\0') {
                  cVar9 = OpenXRSwapChainInfo::create((OpenXRSwapChainInfo*)( this + 0x578 ), 0, 0x22, *(long*)( this + 0x178 ), *(uint*)( this + 0x558 ), *(uint*)( this + 0x55c ), 1, *(uint*)( this + 0x160 ));
                  if (cVar9 == '\0') goto LAB_0010ef38;
                  local_60 = 0;
                  local_58 = "Main depth swapchain";
                  local_50 = 0x14;
                  String::parse_latin1((StrRange*)&local_60);
                  set_object_name(this, 3, *(undefined8*)( this + 0x578 ), (StrRange*)&local_60);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               }

            }

            uVar15 = 0;
            if (*(int*)( this + 0x4e0 ) != 0) {
               do {
                  uVar2 = *(uint*)( this + 0x4f0 );
                  uVar17 = (ulong)uVar2;
                  puVar12 = (undefined4*)( *(long*)( this + 0x4e8 ) + uVar15 * 0x40 );
                  *puVar12 = 7;
                  *(undefined8*)( puVar12 + 2 ) = 0;
                  uVar14 = (uint)uVar15;
                  if (uVar2 <= uVar14) goto LAB_0010ef68;
                  uVar4 = *(undefined8*)( this + 0x560 );
                  puVar12 = (undefined4*)( *(long*)( this + 0x4f8 ) + uVar15 * 0x60 );
                  OVar1 = this[0x510];
                  puVar12[0x16] = uVar14;
                  *(undefined8*)( puVar12 + 0x12 ) = 0;
                  *(undefined8*)( puVar12 + 0x10 ) = uVar4;
                  uVar3 = *(undefined4*)( this + 0x558 );
                  *puVar12 = 0x30;
                  puVar12[0x14] = uVar3;
                  uVar3 = *(undefined4*)( this + 0x55c );
                  *(undefined8*)( puVar12 + 2 ) = 0;
                  puVar12[0x15] = uVar3;
                  if (OVar1 != (OpenXRAPI)0x0) {
                     OpenXRCompositionLayerDepthExtension::get_singleton();
                     cVar9 = OpenXRCompositionLayerDepthExtension::is_available();
                     uVar7 = _UNK_001269b8;
                     uVar4 = __LC335;
                     if (cVar9 != '\0') {
                        uVar2 = *(uint*)( this + 0x500 );
                        uVar17 = (ulong)uVar2;
                        if (uVar2 != 0) {
                           if (uVar2 <= uVar14) {
                              LAB_0010ef68:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar15 & 0xffffffff, uVar17, "p_index", "count", "", false, true);
                              _err_flush_stdout();
                              /* WARNING: Does not return */
                              pcVar6 = (code*)invalidInstructionException();
                              ( *pcVar6 )();
                           }

                           uVar17 = ( ulong ) * (uint*)( this + 0x4f0 );
                           puVar12 = (undefined4*)( *(long*)( this + 0x508 ) + uVar15 * 0x40 );
                           if (*(uint*)( this + 0x4f0 ) <= uVar14) goto LAB_0010ef68;
                           *(undefined4**)( *(long*)( this + 0x4f8 ) + 8 + uVar15 * 0x60 ) = puVar12;
                           uVar5 = *(undefined8*)( this + 0x578 );
                           puVar12[10] = uVar14;
                           *(undefined8*)( puVar12 + 6 ) = 0;
                           *(undefined8*)( puVar12 + 4 ) = uVar5;
                           uVar3 = *(undefined4*)( this + 0x558 );
                           *puVar12 = 0x3b9af110;
                           puVar12[8] = uVar3;
                           uVar3 = *(undefined4*)( this + 0x55c );
                           *(undefined8*)( puVar12 + 2 ) = 0;
                           puVar12[9] = uVar3;
                           *(undefined8*)( puVar12 + 0xc ) = uVar4;
                           *(undefined8*)( puVar12 + 0xe ) = uVar7;
                        }

                     }

                  }

                  uVar15 = uVar15 + 1;
               }
 while ( (uint)uVar15 < *(uint*)( this + 0x4e0 ) );
            }

            CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
            puVar13 = (undefined8*)registered_extension_wrappers._8_8_;
            CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
            puVar16 = (undefined8*)registered_extension_wrappers._8_8_;
            if (registered_extension_wrappers._8_8_ != 0) {
               puVar16 = (undefined8*)( registered_extension_wrappers._8_8_ + *(long*)( registered_extension_wrappers._8_8_ + -8 ) * 8 );
            }

            for (; puVar13 != puVar16; puVar13 = puVar13 + 1) {
               ( **(code**)( *(long*)*puVar13 + 0x80 ) )();
            }

            goto LAB_0010ef3b;
         }

         _err_print_error("create_main_swapchains", "modules/openxr/openxr_api.cpp", 0x49b, "Condition \"session == nullptr\" is true. Returning: false", 0, 0);
      }

   }

   LAB_0010ef38:uVar10 = 0;
   LAB_0010ef3b:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar10;
}
/* OpenXRAPI::get_system_info() */undefined8 OpenXRAPI::get_system_info(OpenXRAPI *this) {
   long *plVar1;
   char cVar2;
   char *pcVar3;
   int iVar4;
   long lVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   int *piVar8;
   undefined8 *puVar9;
   long lVar10;
   long in_FS_OFFSET;
   byte bVar11;
   long local_1c0;
   char *local_1b8;
   size_t local_1b0;
   undefined4 local_1a8;
   undefined1 local_1a4[16];
   undefined4 local_194;
   int local_188[8];
   int local_168[2];
   long local_160;
   undefined4 local_150;
   char local_14c[256];
   undefined8 local_4c;
   undefined4 local_44;
   undefined8 local_40;
   long local_30;
   bVar11 = 0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_194 = 0;
   local_1a4._0_12_ = SUB1612((undefined1[16])0x0, 0);
   local_1a4._12_4_ = *(undefined4*)( this + 0x98 );
   local_1a8 = 4;
   if (*(code**)( this + 0x2e0 ) == (code*)0x0) {
      iVar4 = -0xc;
      LAB_0010f3d8:get_error_string(&local_1b8, this, iVar4);
      Variant::Variant((Variant*)local_168, "OpenXR: Failed to get system for our form factor [");
      print_line<String,char_const*>((Variant*)local_168, &local_1b8, &_LC164);
      cVar2 = Variant::needs_deinit[local_168[0]];
   }
 else {
      iVar4 = ( **(code**)( this + 0x2e0 ) )(*(undefined8*)( this + 0xd0 ), &local_1a8, this + 0xd8);
      if (iVar4 < 0) goto LAB_0010f3d8;
      CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
      puVar7 = (undefined8*)registered_extension_wrappers._8_8_;
      CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
      puVar9 = (undefined8*)registered_extension_wrappers._8_8_;
      if (registered_extension_wrappers._8_8_ != 0) {
         puVar9 = (undefined8*)( registered_extension_wrappers._8_8_ + *(long*)( registered_extension_wrappers._8_8_ + -8 ) * 8 );
      }

      lVar10 = 0;
      for (; puVar7 != puVar9; puVar7 = puVar7 + 1) {
         lVar5 = ( **(code**)( *(long*)*puVar7 + 8 ) )((long*)*puVar7, lVar10);
         if (lVar5 != 0) {
            lVar10 = lVar5;
         }

      }

      uVar6 = *(undefined8*)( this + 0xd8 );
      piVar8 = local_168;
      for (lVar5 = 0x26; lVar5 != 0; lVar5 = lVar5 + -1) {
         piVar8[0] = 0;
         piVar8[1] = 0;
         piVar8 = piVar8 + ( (ulong)bVar11 * -2 + 1 ) * 2;
      }

      local_168[0] = 5;
      local_160 = lVar10;
      if (*(code**)( this + 0x2e8 ) == (code*)0x0) {
         iVar4 = -0xc;
      }
 else {
         iVar4 = ( **(code**)( this + 0x2e8 ) )(*(undefined8*)( this + 0xd0 ), uVar6);
         if (-1 < iVar4) {
            local_1c0 = 0;
            local_1b0 = strlen(local_14c);
            local_1b8 = local_14c;
            String::parse_latin1((StrRange*)&local_1c0);
            lVar5 = local_1c0;
            lVar10 = *(long*)( this + 0xe0 );
            if (lVar10 == local_1c0) {
               if (lVar10 != 0) {
                  LOCK();
                  plVar1 = (long*)( lVar10 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_1c0 = 0;
                     Memory::free_static((void*)( lVar5 + -0x10 ), false);
                  }

               }

            }
 else {
               if (lVar10 != 0) {
                  LOCK();
                  plVar1 = (long*)( lVar10 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar10 = *(long*)( this + 0xe0 );
                     *(undefined8*)( this + 0xe0 ) = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }

               }

               *(long*)( this + 0xe0 ) = local_1c0;
            }

            *(undefined4*)( this + 0xe8 ) = local_150;
            *(undefined8*)( this + 0x150 ) = local_4c;
            *(undefined4*)( this + 0x158 ) = local_44;
            *(undefined8*)( this + 0xec ) = local_40;
            uVar6 = 1;
            goto LAB_0010f3ab;
         }

      }

      get_error_string(&local_1b8, this, iVar4);
      Variant::Variant((Variant*)local_188, "OpenXR: Failed to get System properties [");
      print_line<String,char_const*>((Variant*)local_188, &local_1b8, &_LC164);
      cVar2 = Variant::needs_deinit[local_188[0]];
   }

   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }

   pcVar3 = local_1b8;
   if (local_1b8 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_1b8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_1b8 = (char*)0x0;
         Memory::free_static(pcVar3 + -0x10, false);
      }

   }

   uVar6 = 0;
   LAB_0010f3ab:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar6;
}
/* OpenXRAPI::create_session() */undefined8 OpenXRAPI::create_session(OpenXRAPI *this) {
   long *plVar1;
   undefined4 *puVar2;
   code *pcVar3;
   char *pcVar4;
   char cVar5;
   int iVar6;
   ulong uVar7;
   undefined8 uVar8;
   undefined8 *puVar9;
   long lVar10;
   undefined8 *puVar11;
   ulong uVar12;
   long in_FS_OFFSET;
   undefined8 local_c0;
   CowData<char32_t> local_b8[8];
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   char *local_88;
   undefined8 local_80;
   undefined4 local_78;
   undefined1 local_74[16];
   undefined4 local_64;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0xd0 ) == 0) {
      _err_print_error("create_session", "modules/openxr/openxr_api.cpp", 0x34a, "Condition \"instance == nullptr\" is true. Returning: false", 0, 0);
      uVar8 = 0;
      goto LAB_0010f684;
   }

   if (*(long*)( this + 0xf8 ) != 0) {
      _err_print_error("create_session", "modules/openxr/openxr_api.cpp", 0x34b, "Condition \"session != nullptr\" is true. Returning: false", 0, 0);
      uVar8 = 0;
      goto LAB_0010f684;
   }

   CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
   puVar9 = (undefined8*)registered_extension_wrappers._8_8_;
   CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
   puVar11 = (undefined8*)registered_extension_wrappers._8_8_;
   if (registered_extension_wrappers._8_8_ != 0) {
      puVar11 = (undefined8*)( registered_extension_wrappers._8_8_ + *(long*)( registered_extension_wrappers._8_8_ + -8 ) * 8 );
   }

   uVar12 = 0;
   for (; puVar9 != puVar11; puVar9 = puVar9 + 1) {
      uVar7 = ( **(code**)( *(long*)*puVar9 + 0x18 ) )((long*)*puVar9, uVar12);
      if (uVar7 != 0) {
         uVar12 = uVar7;
      }

   }

   local_60 = *(undefined8*)( this + 0xd8 );
   local_64 = 0;
   local_78 = 8;
   local_74._8_8_ = 0;
   local_74._0_8_ = uVar12;
   local_74 = local_74 << 0x20;
   if (*(code**)( this + 0x228 ) == (code*)0x0) {
      iVar6 = -0xc;
   }
 else {
      iVar6 = ( **(code**)( this + 0x228 ) )(*(undefined8*)( this + 0xd0 ), &local_78, this + 0xf8);
      if (-1 < iVar6) {
         local_90 = 0;
         local_80 = 0x19;
         local_88 = "Main Godot OpenXR Session";
         String::parse_latin1((StrRange*)&local_90);
         set_object_name(this, 2, *(undefined8*)( this + 0xf8 ));
         lVar10 = local_90;
         if (local_90 != 0) {
            LOCK();
            plVar1 = (long*)( local_90 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_90 = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
            }

         }

         local_90 = 0;
         local_88 = "Godot session active";
         local_80 = 0x14;
         String::parse_latin1((StrRange*)&local_90);
         begin_debug_label_region((String*)this);
         lVar10 = local_90;
         if (local_90 != 0) {
            LOCK();
            plVar1 = (long*)( local_90 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_90 = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
            }

         }

         CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
         puVar9 = (undefined8*)registered_extension_wrappers._8_8_;
         CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
         puVar11 = (undefined8*)registered_extension_wrappers._8_8_;
         if (registered_extension_wrappers._8_8_ != 0) {
            puVar11 = (undefined8*)( registered_extension_wrappers._8_8_ + *(long*)( registered_extension_wrappers._8_8_ + -8 ) * 8 );
         }

         for (; puVar9 != puVar11; puVar9 = puVar9 + 1) {
            ( **(code**)( *(long*)*puVar9 + 0x60 ) )((long*)*puVar9, *(undefined8*)( this + 0xf8 ));
         }

         cVar5 = set_environment_blend_mode(this, *(undefined4*)( this + 0xac ));
         if (cVar5 == '\0') {
            cVar5 = is_print_verbose_enabled();
            if (cVar5 == '\0') {
               LAB_0010f9d8:puVar2 = *(undefined4**)( this + 0xc0 );
               if (puVar2 != (undefined4*)0x0) {
                  lVar10 = *(long*)( puVar2 + -2 );
                  if (lVar10 < 1) goto LAB_0010fa6c;
                  set_environment_blend_mode(this, *puVar2);
                  goto LAB_0010f67f;
               }

            }
 else {
               puVar2 = *(undefined4**)( this + 0xc0 );
               if (puVar2 != (undefined4*)0x0) {
                  lVar10 = *(long*)( puVar2 + -2 );
                  if (lVar10 < 1) goto LAB_0010fa6c;
                  OpenXRUtil::get_environment_blend_mode_name(&local_98, *puVar2);
                  local_88 = " isn\'t supported, defaulting to ";
                  local_a8 = 0;
                  local_80 = 0x20;
                  String::parse_latin1((StrRange*)&local_a8);
                  OpenXRUtil::get_environment_blend_mode_name(local_b8, *(undefined4*)( this + 0xac ));
                  local_88 = "OpenXR: ";
                  local_c0 = 0;
                  local_80 = 8;
                  String::parse_latin1((StrRange*)&local_c0);
                  String::operator +((String*)&local_b0, (String*)&local_c0);
                  String::operator +((String*)&local_a0, (String*)&local_b0);
                  String::operator +((String*)&local_90, (String*)&local_a0);
                  Variant::Variant((Variant*)local_58, (String*)&local_90);
                  stringify_variants((Variant*)&local_88);
                  __print_line((String*)&local_88);
                  pcVar4 = local_88;
                  if (local_88 != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_88 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_88 = (char*)0x0;
                        Memory::free_static(pcVar4 + -0x10, false);
                     }

                  }

                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  lVar10 = local_90;
                  if (local_90 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_90 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_90 = 0;
                        Memory::free_static((void*)( lVar10 + -0x10 ), false);
                     }

                  }

                  lVar10 = local_a0;
                  if (local_a0 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_a0 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_a0 = 0;
                        Memory::free_static((void*)( lVar10 + -0x10 ), false);
                     }

                  }

                  lVar10 = local_b0;
                  if (local_b0 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_b0 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_b0 = 0;
                        Memory::free_static((void*)( lVar10 + -0x10 ), false);
                     }

                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                  CowData<char32_t>::_unref(local_b8);
                  lVar10 = local_a8;
                  if (local_a8 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_a8 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_a8 = 0;
                        Memory::free_static((void*)( lVar10 + -0x10 ), false);
                     }

                  }

                  lVar10 = local_98;
                  if (local_98 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_98 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_98 = 0;
                        Memory::free_static((void*)( lVar10 + -0x10 ), false);
                     }

                  }

                  goto LAB_0010f9d8;
               }

            }

            lVar10 = 0;
            LAB_0010fa6c:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar10, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         LAB_0010f67f:uVar8 = 1;
         goto LAB_0010f684;
      }

   }

   get_error_string(&local_88, this, iVar6);
   Variant::Variant((Variant*)local_58, "OpenXR: Failed to create session [");
   print_line<String,char_const*>((Variant*)local_58, &local_88, &_LC164);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   pcVar4 = local_88;
   if (local_88 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = (char*)0x0;
         Memory::free_static(pcVar4 + -0x10, false);
         uVar8 = 0;
         goto LAB_0010f684;
      }

   }

   uVar8 = 0;
   LAB_0010f684:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::on_state_ready() */undefined8 OpenXRAPI::on_state_ready(OpenXRAPI *this) {
   code *pcVar1;
   long lVar2;
   char cVar3;
   int iVar4;
   long *plVar5;
   CallableCustom *this_00;
   undefined8 uVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   long in_FS_OFFSET;
   Callable aCStack_88[16];
   long local_78[2];
   undefined4 local_68;
   undefined4 uStack_64;
   undefined8 uStack_60;
   undefined4 uStack_58;
   undefined4 local_54;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar3 = is_print_verbose_enabled();
   if (cVar3 != '\0') {
      Variant::Variant((Variant*)local_48, "On state ready");
      stringify_variants((Variant*)&local_68);
      __print_line((String*)&local_68);
      if (CONCAT44(uStack_64, local_68) != 0) {
         LOCK();
         plVar5 = (long*)( CONCAT44(uStack_64, local_68) + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            lVar2 = CONCAT44(uStack_64, local_68);
            local_68 = 0;
            uStack_64 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   uStack_58 = *(undefined4*)( this + 0x9c );
   local_54 = 0;
   uStack_64 = 0;
   uStack_60 = 0;
   local_68 = 10;
   if (*(code**)( this + 0x1f8 ) == (code*)0x0) {
      iVar4 = -0xc;
   }
 else {
      iVar4 = ( **(code**)( this + 0x1f8 ) )(*(undefined8*)( this + 0xf8 ), &local_68);
      if (-1 < iVar4) {
         this[0x104] = (OpenXRAPI)0x1;
         plVar5 = (long*)RenderingServer::get_singleton();
         if (plVar5 == (long*)0x0) {
            _err_print_error("set_render_session_running", "modules/openxr/openxr_api.h", 0x17c, "Parameter \"rendering_server\" is null.", 0, 0);
         }
 else {
            pcVar1 = *(code**)( *plVar5 + 0x12e0 );
            this_00 = (CallableCustom*)operator_new(0x30, "");
            CallableCustom::CallableCustom(this_00);
            *(undefined**)( this_00 + 0x20 ) = &_LC115;
            *(undefined8*)( this_00 + 0x10 ) = 0;
            *(undefined***)this_00 = &PTR_hash_00126568;
            *(undefined8*)( this_00 + 0x28 ) = 0x100000;
            CallableCustomMethodPointerBase::_setup((uint*)this_00, (int)this_00 + 0x28);
            *(char**)( this_00 + 0x20 ) = "OpenXRAPI::_set_render_session_running";
            Callable::Callable(aCStack_88, this_00);
            Callable::bind<bool>(SUB81((Callable*)local_78, 0));
            ( *pcVar1 )(plVar5, (Callable*)local_78);
            Callable::~Callable((Callable*)local_78);
            Callable::~Callable(aCStack_88);
         }

         CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
         puVar7 = (undefined8*)registered_extension_wrappers._8_8_;
         CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
         puVar8 = (undefined8*)registered_extension_wrappers._8_8_;
         if (registered_extension_wrappers._8_8_ != 0) {
            puVar8 = (undefined8*)( registered_extension_wrappers._8_8_ + *(long*)( registered_extension_wrappers._8_8_ + -8 ) * 8 );
         }

         for (; puVar7 != puVar8; puVar7 = puVar7 + 1) {
            ( **(code**)( *(long*)*puVar7 + 0xa0 ) )();
         }

         if (*(long*)this != 0) {
            OpenXRInterface::on_state_ready();
         }

         uVar6 = 1;
         goto LAB_0010fc60;
      }

   }

   get_error_string(local_78, this, iVar4);
   Variant::Variant((Variant*)local_48, "OpenXR: Failed to begin session [");
   print_line<String,char_const*>((Variant*)local_48, local_78, &_LC164);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   lVar2 = local_78[0];
   if (local_78[0] != 0) {
      LOCK();
      plVar5 = (long*)( local_78[0] + -0x10 );
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         local_78[0] = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         uVar6 = 0;
         goto LAB_0010fc60;
      }

   }

   uVar6 = 0;
   LAB_0010fc60:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::on_state_stopping() */undefined8 OpenXRAPI::on_state_stopping(OpenXRAPI *this) {
   code *pcVar1;
   long lVar2;
   char cVar3;
   int iVar4;
   long *plVar5;
   CallableCustom *this_00;
   undefined8 *puVar6;
   undefined8 *puVar7;
   long in_FS_OFFSET;
   Callable aCStack_68[16];
   long local_58[2];
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar3 = is_print_verbose_enabled();
   if (cVar3 != '\0') {
      Variant::Variant((Variant*)local_48, "On state stopping");
      stringify_variants((Variant*)local_58);
      __print_line((String*)local_58);
      lVar2 = local_58[0];
      if (local_58[0] != 0) {
         LOCK();
         plVar5 = (long*)( local_58[0] + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_58[0] = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (*(long*)this != 0) {
      OpenXRInterface::on_state_stopping();
   }

   CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
   puVar6 = (undefined8*)registered_extension_wrappers._8_8_;
   CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
   puVar7 = (undefined8*)registered_extension_wrappers._8_8_;
   if (registered_extension_wrappers._8_8_ != 0) {
      puVar7 = (undefined8*)( registered_extension_wrappers._8_8_ + *(long*)( registered_extension_wrappers._8_8_ + -8 ) * 8 );
   }

   for (; puVar7 != puVar6; puVar6 = puVar6 + 1) {
      ( **(code**)( *(long*)*puVar6 + 0xc0 ) )();
   }

   if (this[0x104] == (OpenXRAPI)0x0) goto LAB_0010ff68;
   if (*(code**)( this + 0x270 ) == (code*)0x0) {
      iVar4 = -0xc;
      LAB_00110000:get_error_string(local_58, this, iVar4);
      Variant::Variant((Variant*)local_48, "OpenXR: Failed to end session [");
      print_line<String,char_const*>((Variant*)local_48, local_58, &_LC164);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

      lVar2 = local_58[0];
      if (local_58[0] != 0) {
         LOCK();
         plVar5 = (long*)( local_58[0] + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_58[0] = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

   }
 else {
      iVar4 = ( **(code**)( this + 0x270 ) )(*(undefined8*)( this + 0xf8 ));
      if (iVar4 < 0) goto LAB_00110000;
   }

   this[0x104] = (OpenXRAPI)0x0;
   plVar5 = (long*)RenderingServer::get_singleton();
   if (plVar5 == (long*)0x0) {
      _err_print_error("set_render_session_running", "modules/openxr/openxr_api.h", 0x17c, "Parameter \"rendering_server\" is null.", 0, 0);
   }
 else {
      pcVar1 = *(code**)( *plVar5 + 0x12e0 );
      this_00 = (CallableCustom*)operator_new(0x30, "");
      CallableCustom::CallableCustom(this_00);
      *(undefined**)( this_00 + 0x20 ) = &_LC115;
      *(undefined8*)( this_00 + 0x10 ) = 0;
      *(undefined***)this_00 = &PTR_hash_00126568;
      *(undefined8*)( this_00 + 0x28 ) = 0x100000;
      CallableCustomMethodPointerBase::_setup((uint*)this_00, (int)this_00 + 0x28);
      *(char**)( this_00 + 0x20 ) = "OpenXRAPI::_set_render_session_running";
      Callable::Callable(aCStack_68, this_00);
      Callable::bind<bool>(SUB81((Callable*)local_58, 0));
      ( *pcVar1 )(plVar5, (Callable*)local_58);
      Callable::~Callable((Callable*)local_58);
      Callable::~Callable(aCStack_68);
   }

   LAB_0010ff68:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::get_action_pose(RID, RID, Transform3D&, Vector3&, Vector3&) */undefined8 OpenXRAPI::get_action_pose(OpenXRAPI *this, ulong param_2, ulong param_3, Transform3D *param_4, undefined8 *param_5, undefined8 *param_6) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   int iVar4;
   ulong uVar5;
   undefined8 uVar6;
   ulong *puVar7;
   ulong uVar8;
   long lVar9;
   CowData<char32_t> *this_00;
   char *pcVar10;
   ulong uVar11;
   ulong *puVar12;
   long in_FS_OFFSET;
   OpenXRAPI OVar13;
   ulong local_d0;
   undefined4 local_c8;
   undefined1 local_c4[12];
   uint uStack_b8;
   undefined4 uStack_b4;
   undefined8 uStack_b0;
   undefined4 uStack_a8;
   undefined8 local_a4;
   undefined4 local_9c;
   undefined4 local_98;
   undefined4 local_94;
   undefined4 *puStack_90;
   undefined4 uStack_88;
   undefined4 uStack_84;
   undefined8 uStack_80;
   undefined4 uStack_78;
   undefined8 local_74;
   undefined4 uStack_6c;
   undefined4 uStack_68;
   undefined4 local_64;
   undefined8 uStack_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0xf8 ) == 0) {
      _err_print_error("get_action_pose", "modules/openxr/openxr_api.cpp", 0xd94, "Condition \"session == nullptr\" is true. Returning: XRPose::XR_TRACKING_CONFIDENCE_NONE", 0, 0);
      goto LAB_001103c8;
   }

   if (( param_2 == 0 ) || ( *(uint*)( this + 0x414 ) <= (uint)param_2 )) {
      LAB_00110450:_err_print_error("get_action_pose", "modules/openxr/openxr_api.cpp", 0xd96, "Parameter \"action\" is null.", 0, 0);
   }
 else {
      lVar1 = *(long*)( *(long*)( this + 0x400 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x410 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x410 ) ) * 0x38;
      if (*(int*)( lVar1 + 0x30 ) != (int)( param_2 >> 0x20 )) {
         if (*(int*)( lVar1 + 0x30 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

         goto LAB_00110450;
      }

      if (( param_3 == 0 ) || ( *(uint*)( this + 0x364 ) <= (uint)param_3 )) {
         LAB_00110410:_err_print_error("get_action_pose", "modules/openxr/openxr_api.cpp", 0xd98, "Parameter \"tracker\" is null.", 0, 0);
      }
 else {
         lVar9 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x360 ) ) * 0x20 + *(long*)( *(long*)( this + 0x350 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x360 ) ) * 8 );
         iVar4 = *(int*)( lVar9 + 0x18 );
         if (iVar4 != (int)( param_3 >> 0x20 )) {
            if (iVar4 + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            }

            goto LAB_00110410;
         }

         if (this[0x104] != (OpenXRAPI)0x0) {
            if (*(int*)( lVar1 + 0x10 ) == 4) {
               puVar12 = *(ulong**)( lVar1 + 0x20 );
               if (( puVar12 != (ulong*)0x0 ) && ( uVar11 = uVar11 != 0 )) {
                  if ((long)uVar11 < 1) {
                     uVar8 = 0;
                     goto LAB_00110375;
                  }

                  uVar5 = 0;
                  puVar7 = puVar12;
                  while (true) {
                     uVar8 = 0xffffffff;
                     OVar13 = this[0x104];
                     if (*puVar7 == param_3) {
                        OVar13 = ( OpenXRAPI )(uVar5 == 0xffffffff);
                        uVar8 = uVar5;
                     }

                     uVar5 = uVar5 + 1;
                     if (( uVar11 <= uVar5 ) || ( OVar13 == (OpenXRAPI)0x0 )) break;
                     puVar7 = puVar7 + 3;
                  }
;
                  if (( uVar8 != 0xffffffff ) && ( lVar2 = lVar2 != 0 )) {
                     if ((long)uVar11 <= (long)uVar8) goto LAB_00110375;
                     if (puVar12[uVar8 * 3 + 1] == 0) {
                        uStack_78 = 0;
                        local_94 = 0;
                        puStack_90 = (undefined4*)0x0;
                        uStack_88 = ( undefined4 ) * (undefined8*)( lVar1 + 0x28 );
                        uStack_84 = ( undefined4 )(( ulong ) * (undefined8*)( lVar1 + 0x28 ) >> 0x20);
                        uStack_80 = *(undefined8*)( lVar9 + 8 );
                        local_74 = 0;
                        local_98 = 0x26;
                        uStack_6c = 0x3f800000;
                        uStack_68 = 0;
                        local_64 = 0;
                        uStack_60 = 0;
                        if (*(code**)( this + 0x210 ) == (code*)0x0) {
                           iVar4 = -0xc;
                        }
 else {
                           iVar4 = ( **(code**)( this + 0x210 ) )(*(undefined8*)( this + 0xf8 ), &local_98, &local_d0);
                           if (-1 < iVar4) {
                              CowData<OpenXRAPI::ActionTracker>::_copy_on_write((CowData<OpenXRAPI::ActionTracker>*)( lVar1 + 0x20 ));
                              puVar12 = *(ulong**)( lVar1 + 0x20 );
                              puVar12[uVar8 * 3 + 1] = local_d0;
                              puStack_90 = &local_c8;
                              uVar6 = *(undefined8*)( this + 0x188 );
                              uStack_b4 = 0;
                              uStack_b0 = 0;
                              local_94 = 0;
                              uStack_88 = 0;
                              local_c8 = 0x2b;
                              local_64 = 0;
                              local_98 = 0x2a;
                              local_c4 = SUB1612((undefined1[16])0x0, 0);
                              uStack_b8 = 0;
                              uStack_a8 = 0;
                              local_a4 = 0;
                              local_9c = 0;
                              uStack_84 = 0;
                              uStack_80 = 0;
                              uStack_78 = 0;
                              local_74 = 0;
                              uStack_6c = 0;
                              uStack_68 = 0;
                              if (puVar12 == (ulong*)0x0) {
                                 uVar11 = 0;
                                 goto LAB_00110375;
                              }

                              goto LAB_001102d0;
                           }

                        }

                        this_00 = (CowData<char32_t>*)&local_c8;
                        get_error_string(this_00, this, iVar4);
                        pcVar10 = "OpenXR: couldn\'t create action space! [";
                     }
 else {
                        uVar6 = *(undefined8*)( this + 0x188 );
                        LAB_001102d0:uStack_68 = 0;
                        uStack_6c = 0;
                        local_74 = 0;
                        uStack_78 = 0;
                        uStack_80 = 0;
                        uStack_84 = 0;
                        uStack_88 = 0;
                        puStack_90 = &local_c8;
                        local_94 = 0;
                        local_9c = 0;
                        local_a4 = 0;
                        uStack_a8 = 0;
                        uStack_b0 = 0;
                        uStack_b4 = 0;
                        uStack_b8 = 0;
                        local_c4 = SUB1612((undefined1[16])0x0, 0);
                        local_64 = 0;
                        local_98 = 0x2a;
                        local_c8 = 0x2b;
                        uVar11 = puVar12[-1];
                        if ((long)uVar11 <= (long)uVar8) {
                           LAB_00110375:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar8, uVar11, "p_index", "size()", "", false, true);
                           _err_flush_stdout();
                           /* WARNING: Does not return */
                           pcVar3 = (code*)invalidInstructionException();
                           ( *pcVar3 )();
                        }

                        if (*(code**)( this + 0x2f0 ) == (code*)0x0) {
                           iVar4 = -0xc;
                        }
 else {
                           iVar4 = ( **(code**)( this + 0x2f0 ) )(puVar12[uVar8 * 3 + 1], uVar6, lVar2, (XrSpaceLocation*)&local_98);
                           if (-1 < iVar4) {
                              uVar6 = _transform_from_location<XrSpaceLocation>((XrSpaceLocation*)&local_98, param_4);
                              if (( uStack_b8 & 1 ) == 0) {
                                 *param_5 = 0;
                                 *(undefined4*)( param_5 + 1 ) = 0;
                              }
 else {
                                 *param_5 = uStack_b0;
                                 *(undefined4*)( param_5 + 1 ) = uStack_a8;
                              }

                              if (( uStack_b8 & 2 ) == 0) {
                                 *param_6 = 0;
                                 *(undefined4*)( param_6 + 1 ) = 0;
                              }
 else {
                                 *param_6 = local_a4;
                                 *(undefined4*)( param_6 + 1 ) = local_9c;
                              }

                              goto LAB_001103ca;
                           }

                        }

                        this_00 = (CowData<char32_t>*)&local_d0;
                        get_error_string(this_00, this, iVar4);
                        pcVar10 = "OpenXR: failed to locate space! [";
                     }

                     Variant::Variant((Variant*)local_58, pcVar10);
                     print_line<String,char_const*>((Variant*)local_58, this_00, &_LC164);
                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     CowData<char32_t>::_unref(this_00);
                  }

               }

            }
 else {
               _err_print_error("get_action_pose", "modules/openxr/openxr_api.cpp", 0xd9e, "Condition \"action->action_type != XR_ACTION_TYPE_POSE_INPUT\" is true. Returning: XRPose::XR_TRACKING_CONFIDENCE_NONE", 0, 0);
            }

         }

      }

   }

   LAB_001103c8:uVar6 = 0;
   LAB_001103ca:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar6;
}
/* OpenXRAPI::load_supported_environmental_blend_modes() */undefined8 OpenXRAPI::load_supported_environmental_blend_modes(OpenXRAPI *this) {
   long *plVar1;
   CowData<XrEnvironmentBlendMode> *this_00;
   long lVar2;
   char *pcVar3;
   char cVar4;
   int iVar5;
   undefined8 uVar6;
   undefined4 *puVar7;
   undefined4 *puVar8;
   long in_FS_OFFSET;
   uint local_84;
   long local_80;
   long local_78;
   long local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0xd0 ) == 0) {
      _err_print_error("load_supported_environmental_blend_modes", "modules/openxr/openxr_api.cpp", 0x2eb, "Condition \"instance == nullptr\" is true. Returning: false", 0, 0);
      uVar6 = 0;
   }
 else {
      this_00 = (CowData<XrEnvironmentBlendMode>*)( this + 0xc0 );
      CowData<XrEnvironmentBlendMode>::resize<false>(this_00, 0);
      local_84 = 0;
      if (*(code**)( this + 0x280 ) == (code*)0x0) {
         iVar5 = -0xc;
      }
 else {
         iVar5 = ( **(code**)( this + 0x280 ) )(*(undefined8*)( this + 0xd0 ), *(undefined8*)( this + 0xd8 ), *(undefined4*)( this + 0x9c ), 0, &local_84, 0);
         if (-1 < iVar5) {
            CowData<XrEnvironmentBlendMode>::resize<false>(this_00, (ulong)local_84);
            CowData<XrEnvironmentBlendMode>::_copy_on_write(this_00);
            if (( *(code**)( this + 0x280 ) == (code*)0x0 ) || ( iVar5 = ( **(code**)( this + 0x280 ) )(*(undefined8*)( this + 0xd0 ), *(undefined8*)( this + 0xd8 ), *(undefined4*)( this + 0x9c ), local_84, &local_84) ),iVar5 < 0) {
               _err_print_error("load_supported_environmental_blend_modes", "modules/openxr/openxr_api.cpp", 0x2f9, "Condition \"((result) < 0)\" is true. Returning: false", "OpenXR: Failed to enumerate environmental blend modes", 0, 0);
               uVar6 = 0;
            }
 else {
               if (local_84 != 0) {
                  CowData<XrEnvironmentBlendMode>::_copy_on_write(this_00);
                  puVar7 = *(undefined4**)( this + 0xc0 );
                  CowData<XrEnvironmentBlendMode>::_copy_on_write(this_00);
                  puVar8 = *(undefined4**)( this + 0xc0 );
                  if (puVar8 != (undefined4*)0x0) {
                     puVar8 = puVar8 + *(long*)( puVar8 + -2 );
                  }

                  joined_r0x0011083c:if (puVar7 != puVar8) {
                     do {
                        cVar4 = is_print_verbose_enabled();
                        if (cVar4 != '\0') {
                           OpenXRUtil::get_environment_blend_mode_name(&local_80, *puVar7);
                           local_68 = "OpenXR: Found environmental blend mode %s.";
                           local_78 = 0;
                           local_60 = 0x2a;
                           String::parse_latin1((StrRange*)&local_78);
                           vformat<String>((String*)&local_70, (StrRange*)&local_78, &local_80);
                           Variant::Variant((Variant*)local_58, (String*)&local_70);
                           stringify_variants((Variant*)&local_68);
                           __print_line((String*)&local_68);
                           pcVar3 = local_68;
                           if (local_68 != (char*)0x0) {
                              LOCK();
                              plVar1 = (long*)( local_68 + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 local_68 = (char*)0x0;
                                 Memory::free_static(pcVar3 + -0x10, false);
                              }

                           }

                           if (Variant::needs_deinit[local_58[0]] != '\0') {
                              Variant::_clear_internal();
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

                           lVar2 = local_78;
                           if (local_78 != 0) {
                              LOCK();
                              plVar1 = (long*)( local_78 + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 local_78 = 0;
                                 Memory::free_static((void*)( lVar2 + -0x10 ), false);
                              }

                           }

                           lVar2 = local_80;
                           if (local_80 != 0) {
                              LOCK();
                              plVar1 = (long*)( local_80 + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) goto code_r0x0011097d;
                           }

                        }

                        puVar7 = puVar7 + 1;
                        if (puVar8 == puVar7) break;
                     }
 while ( true );
                  }

                  uVar6 = 1;
                  goto LAB_001109ad;
               }

               _err_print_error("load_supported_environmental_blend_modes", "modules/openxr/openxr_api.cpp", 0x2fa, "Condition \"num_supported_environment_blend_modes == 0\" is true. Returning: false", "OpenXR: Failed to enumerate environmental blend modes", 0, 0);
               uVar6 = 0;
            }

            goto LAB_001109ad;
         }

      }

      get_error_string(&local_68, this, iVar5);
      Variant::Variant((Variant*)local_58, "OpenXR: Failed to get supported environmental blend mode count [");
      print_line<String,char_const*>((Variant*)local_58, &local_68, &_LC164);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      pcVar3 = local_68;
      if (local_68 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = (char*)0x0;
            Memory::free_static(pcVar3 + -0x10, false);
            uVar6 = 0;
            goto LAB_001109ad;
         }

      }

      uVar6 = 0;
   }

   LAB_001109ad:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   code_r0x0011097d:puVar7 = puVar7 + 1;
   local_80 = 0;
   Memory::free_static((void*)( lVar2 + -0x10 ), false);
   goto joined_r0x0011083c;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OpenXRAPI::load_supported_swapchain_formats() */undefined8 OpenXRAPI::load_supported_swapchain_formats(OpenXRAPI *this) {
   long *plVar1;
   CowData<long> *this_00;
   code *pcVar2;
   long lVar3;
   char *pcVar4;
   char cVar5;
   int iVar6;
   ulong uVar7;
   ulong uVar8;
   undefined8 uVar9;
   undefined8 *puVar10;
   undefined8 *puVar11;
   long lVar12;
   ulong uVar13;
   long lVar14;
   ulong uVar15;
   long in_FS_OFFSET;
   uint local_84;
   long local_80;
   long local_78;
   long local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   lVar12 = *(long*)( this + 0xf8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar12 == 0) {
      _err_print_error("load_supported_swapchain_formats", "modules/openxr/openxr_api.cpp", 0x450, "Condition \"session == nullptr\" is true. Returning: false", 0, 0);
      uVar9 = 0;
      goto LAB_00110eb5;
   }

   lVar14 = *(long*)( this + 0x80 );
   if (( lVar14 != 0 ) && ( *(long*)( lVar14 + -8 ) != 0 )) {
      LOCK();
      plVar1 = (long*)( lVar14 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar12 = *(long*)( this + 0x80 );
         *(undefined8*)( this + 0x80 ) = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
         lVar12 = *(long*)( this + 0xf8 );
      }
 else {
         *(undefined8*)( this + 0x80 ) = 0;
         lVar12 = *(long*)( this + 0xf8 );
      }

   }

   local_84 = 0;
   if (*(code**)( this + 0x298 ) == (code*)0x0) {
      iVar6 = -0xc;
   }
 else {
      iVar6 = ( **(code**)( this + 0x298 ) )(lVar12, 0, &local_84, 0);
      if (-1 < iVar6) {
         lVar12 = *(long*)( this + 0x80 );
         uVar13 = (ulong)local_84;
         this_00 = (CowData<long>*)( this + 0x80 );
         if (lVar12 == 0) {
            if (uVar13 != 0) {
               uVar15 = 0;
               CowData<long>::_copy_on_write(this_00);
               LAB_00110fb4:uVar7 = uVar13 * 8 - 1;
               uVar7 = uVar7 | uVar7 >> 1;
               uVar7 = uVar7 | uVar7 >> 2;
               uVar7 = uVar7 | uVar7 >> 4;
               uVar7 = uVar7 | uVar7 >> 8;
               uVar7 = uVar7 | uVar7 >> 0x10;
               lVar12 = ( uVar7 >> 0x20 | uVar7 ) + 1;
               if ((long)uVar15 < (long)uVar13) {
                  LAB_00111040:if (uVar15 == 0) {
                     puVar11 = (undefined8*)Memory::alloc_static(lVar12 + 0x10U, false);
                     if (puVar11 == (undefined8*)0x0) {
                        _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                        goto LAB_00110cba;
                     }

                     *puVar11 = 1;
                     puVar11[1] = 0;
                  }
 else {
                     puVar11 = (undefined8*)Memory::realloc_static((void*)( *(long*)( this + 0x80 ) + -0x10 ), lVar12 + 0x10U, false);
                     if (puVar11 == (undefined8*)0x0) goto LAB_0011117e;
                     *puVar11 = 1;
                  }

                  puVar11 = puVar11 + 2;
                  *(undefined8**)( this + 0x80 ) = puVar11;
                  LAB_00110cb6:puVar11[-1] = uVar13;
               }
 else {
                  puVar11 = *(undefined8**)( this + 0x80 );
                  LAB_00111007:puVar10 = (undefined8*)Memory::realloc_static(puVar11 + -2, lVar12 + 0x10, false);
                  if (puVar10 == (undefined8*)0x0) {
                     LAB_0011117e:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
                  }
 else {
                     puVar11 = puVar10 + 2;
                     *puVar10 = 1;
                     *(undefined8**)( this + 0x80 ) = puVar11;
                     LAB_00111031:puVar11[-1] = uVar13;
                  }

               }

            }

         }
 else {
            uVar15 = *(ulong*)( lVar12 + -8 );
            if (uVar13 != uVar15) {
               if (uVar13 != 0) {
                  CowData<long>::_copy_on_write(this_00);
                  uVar7 = uVar13 * 8 - 1;
                  uVar7 = uVar7 >> 1 | uVar7;
                  uVar7 = uVar7 >> 2 | uVar7;
                  uVar7 = uVar7 >> 4 | uVar7;
                  uVar7 = uVar7 >> 8 | uVar7;
                  uVar7 = uVar7 >> 0x10 | uVar7;
                  uVar7 = uVar7 >> 0x20 | uVar7;
                  lVar12 = uVar7 + 1;
                  if (uVar15 * 8 == 0) goto LAB_00110fb4;
                  uVar8 = uVar15 * 8 - 1;
                  uVar8 = uVar8 | uVar8 >> 1;
                  uVar8 = uVar8 | uVar8 >> 2;
                  uVar8 = uVar8 | uVar8 >> 4;
                  uVar8 = uVar8 | uVar8 >> 8;
                  uVar8 = uVar8 | uVar8 >> 0x10;
                  uVar8 = uVar8 | uVar8 >> 0x20;
                  if ((long)uVar13 <= (long)uVar15) {
                     puVar11 = *(undefined8**)( this + 0x80 );
                     if (uVar8 != uVar7) goto LAB_00111007;
                     if (puVar11 == (undefined8*)0x0) {
                        uVar9 = load_supported_swapchain_formats();
                        return uVar9;
                     }

                     goto LAB_00111031;
                  }

                  if (uVar8 != uVar7) goto LAB_00111040;
                  puVar11 = *(undefined8**)( this + 0x80 );
                  if (puVar11 == (undefined8*)0x0) {
                     _DAT_00000000 = 0;
                     /* WARNING: Does not return */
                     pcVar2 = (code*)invalidInstructionException();
                     ( *pcVar2 )();
                  }

                  goto LAB_00110cb6;
               }

               LOCK();
               plVar1 = (long*)( lVar12 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar12 = *(long*)( this + 0x80 );
                  *(undefined8*)( this + 0x80 ) = 0;
                  Memory::free_static((void*)( lVar12 + -0x10 ), false);
               }
 else {
                  *(undefined8*)( this + 0x80 ) = 0;
               }

            }

         }

         LAB_00110cba:CowData<long>::_copy_on_write(this_00);
         if (( *(code**)( this + 0x298 ) != (code*)0x0 ) && ( iVar6 = ( **(code**)( this + 0x298 ) )(*(undefined8*)( this + 0xf8 ), local_84, &local_84, *(undefined8*)( this + 0x80 )) ),-1 < iVar6) {
            CowData<long>::_copy_on_write(this_00);
            lVar14 = *(long*)( this + 0x80 );
            CowData<long>::_copy_on_write(this_00);
            lVar12 = *(long*)( this + 0x80 );
            if (lVar12 != 0) {
               lVar12 = lVar12 + *(long*)( lVar12 + -8 ) * 8;
            }

            joined_r0x00110d2f:if (lVar14 != lVar12) {
               do {
                  cVar5 = is_print_verbose_enabled();
                  if (cVar5 != '\0') {
                     get_swapchain_format_name((long)&local_78);
                     local_68 = "OpenXR: Found supported swapchain format ";
                     local_80 = 0;
                     local_60 = 0x29;
                     String::parse_latin1((StrRange*)&local_80);
                     String::operator +((String*)&local_70, (String*)&local_80);
                     Variant::Variant((Variant*)local_58, (String*)&local_70);
                     stringify_variants((Variant*)&local_68);
                     __print_line((String*)&local_68);
                     pcVar4 = local_68;
                     if (local_68 != (char*)0x0) {
                        LOCK();
                        plVar1 = (long*)( local_68 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_68 = (char*)0x0;
                           Memory::free_static(pcVar4 + -0x10, false);
                        }

                     }

                     if (Variant::needs_deinit[local_58[0]] != '\0') {
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

                     lVar3 = local_80;
                     if (local_80 != 0) {
                        LOCK();
                        plVar1 = (long*)( local_80 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_80 = 0;
                           Memory::free_static((void*)( lVar3 + -0x10 ), false);
                        }

                     }

                     lVar3 = local_78;
                     if (local_78 != 0) {
                        LOCK();
                        plVar1 = (long*)( local_78 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) goto code_r0x00110e80;
                     }

                  }

                  lVar14 = lVar14 + 8;
                  if (lVar12 == lVar14) break;
               }
 while ( true );
            }

            uVar9 = 1;
            goto LAB_00110eb5;
         }

         _err_print_error("load_supported_swapchain_formats", "modules/openxr/openxr_api.cpp", 0x45e, "Condition \"((result) < 0)\" is true. Returning: false", "OpenXR: Failed to enumerate swapchain formats", 0, 0);
         uVar9 = 0;
         goto LAB_00110eb5;
      }

   }

   get_error_string(&local_68, this, iVar6);
   Variant::Variant((Variant*)local_58, "OpenXR: Failed to get swapchain format count [");
   print_line<String,char_const*>((Variant*)local_58, &local_68, &_LC164);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   pcVar4 = local_68;
   if (local_68 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (char*)0x0;
         Memory::free_static(pcVar4 + -0x10, false);
         uVar9 = 0;
         goto LAB_00110eb5;
      }

   }

   uVar9 = 0;
   LAB_00110eb5:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar9;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   code_r0x00110e80:lVar14 = lVar14 + 8;
   local_78 = 0;
   Memory::free_static((void*)( lVar3 + -0x10 ), false);
   goto joined_r0x00110d2f;
}
/* OpenXRAPI::attach_action_sets(Vector<RID> const&) */undefined8 OpenXRAPI::attach_action_sets(OpenXRAPI *this, Vector *param_1) {
   long *plVar1;
   int iVar2;
   ulong uVar3;
   undefined8 *puVar4;
   ulong *puVar5;
   undefined8 *puVar6;
   char *pcVar7;
   long lVar8;
   undefined8 uVar9;
   undefined8 *__src;
   long lVar10;
   size_t __n;
   long lVar11;
   long in_FS_OFFSET;
   long local_80;
   undefined4 local_78;
   undefined1 local_74[12];
   undefined4 uStack_68;
   undefined4 local_64;
   undefined8 *local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar8 = *(long*)( this + 0xf8 );
   if (lVar8 == 0) {
      uVar9 = 0;
      _err_print_error("attach_action_sets", "modules/openxr/openxr_api.cpp", 0xb9c, "Condition \"session == nullptr\" is true. Returning: false", 0, 0);
      goto LAB_001113c1;
   }

   if (*(long*)( param_1 + 8 ) == 0) {
      uStack_68 = 0;
      __src = (undefined8*)0x0;
   }
 else {
      lVar10 = *(long*)( *(long*)( param_1 + 8 ) + -8 );
      if (lVar10 < 0) {
         uVar9 = 0x157;
         pcVar7 = "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER";
         goto LAB_00111692;
      }

      if (lVar10 == 0) {
         lVar10 = 0;
         __src = (undefined8*)0x0;
         LAB_001116b4:uStack_68 = (undefined4)lVar10;
         goto LAB_00111449;
      }

      if (( lVar10 * 8 == 0 ) || ( uVar3 = lVar10 * 8 - 1 ),uVar3 = uVar3 | uVar3 >> 1,uVar3 = uVar3 | uVar3 >> 2,uVar3 = uVar3 | uVar3 >> 4,uVar3 = uVar3 | uVar3 >> 8,uVar3 = uVar3 | uVar3 >> 0x10,uVar3 = uVar3 | uVar3 >> 0x20,uVar3 == 0xffffffffffffffff) {
         uVar9 = 0x16a;
         pcVar7 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
         LAB_00111692:__src = (undefined8*)0x0;
         _err_print_error("resize", "./core/templates/cowdata.h", uVar9, pcVar7, 0, 0);
         lVar8 = *(long*)( param_1 + 8 );
      }
 else {
         puVar4 = (undefined8*)Memory::alloc_static(uVar3 + 0x11, false);
         if (puVar4 == (undefined8*)0x0) {
            uVar9 = 0x171;
            pcVar7 = "Parameter \"mem_new\" is null.";
            goto LAB_00111692;
         }

         __src = puVar4 + 2;
         *puVar4 = 1;
         puVar4[1] = lVar10;
         lVar8 = *(long*)( param_1 + 8 );
      }

      if (lVar8 != 0) {
         lVar11 = 0;
         LAB_00111361:do {
            lVar10 = *(long*)( lVar8 + -8 );
            if (lVar10 <= lVar11) {
               lVar8 = *(long*)( this + 0xf8 );
               goto LAB_001116b4;
            }

            puVar5 = (ulong*)( lVar8 + lVar11 * 8 );
            if (*puVar5 == 0) {
               LAB_00111383:_err_print_error("attach_action_sets", "modules/openxr/openxr_api.cpp", 0xba2, "Parameter \"action_set\" is null.", 0, 0);
               goto LAB_001113a8;
            }

            uVar3 = *puVar5;
            if (*(uint*)( this + 0x3bc ) <= (uint)uVar3) goto LAB_00111383;
            lVar8 = ( ( uVar3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x3b8 ) ) * 0x20 + *(long*)( *(long*)( this + 0x3a8 ) + ( ( uVar3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x3b8 ) ) * 8 );
            if (*(int*)( lVar8 + 0x18 ) != (int)( uVar3 >> 0x20 )) {
               if (*(int*)( lVar8 + 0x18 ) + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

               goto LAB_00111383;
            }

            if (*(char*)( lVar8 + 8 ) != '\0') goto LAB_001113a8;
            if (__src == (undefined8*)0x0) {
               lVar10 = 0;
               LAB_001113f3:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar11, lVar10, "p_index", "size()", "", false, false);
               lVar8 = *(long*)( param_1 + 8 );
               lVar11 = lVar11 + 1;
               if (lVar8 == 0) break;
               goto LAB_00111361;
            }

            lVar10 = __src[-1];
            if (lVar10 <= lVar11) goto LAB_001113f3;
            plVar1 = __src + -2;
            puVar4 = __src;
            if (1 < (ulong)__src[-2]) {
               lVar10 = __src[-1];
               uVar3 = 0x10;
               __n = lVar10 * 8;
               if (__n != 0) {
                  uVar3 = __n - 1 | __n - 1 >> 1;
                  uVar3 = uVar3 | uVar3 >> 2;
                  uVar3 = uVar3 | uVar3 >> 4;
                  uVar3 = uVar3 | uVar3 >> 8;
                  uVar3 = uVar3 | uVar3 >> 0x10;
                  uVar3 = ( uVar3 | uVar3 >> 0x20 ) + 0x11;
               }

               puVar6 = (undefined8*)Memory::alloc_static(uVar3, false);
               if (puVar6 == (undefined8*)0x0) {
                  _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.");
               }
 else {
                  puVar4 = puVar6 + 2;
                  *puVar6 = 1;
                  puVar6[1] = lVar10;
                  memcpy(puVar4, __src, __n);
                  LOCK();
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static(plVar1, false);
                  }

               }

            }

            puVar4[lVar11] = *(undefined8*)( lVar8 + 0x10 );
            lVar8 = *(long*)( param_1 + 8 );
            __src = puVar4;
            lVar11 = lVar11 + 1;
         }
 while ( lVar8 != 0 );
      }

      lVar8 = *(long*)( this + 0xf8 );
      uStack_68 = 0;
   }

   LAB_00111449:local_64 = 0;
   local_78 = 0x3c;
   local_74 = SUB1612((undefined1[16])0x0, 0);
   local_60 = __src;
   if (*(code**)( this + 0x1e8 ) == (code*)0x0) {
      iVar2 = -0xc;
      LAB_0011171d:get_error_string(&local_80, this, iVar2);
      Variant::Variant((Variant*)local_58, "OpenXR: failed to attach action sets! [");
      print_line<String,char_const*>((Variant*)local_58, &local_80, &_LC164);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      lVar8 = local_80;
      if (local_80 != 0) {
         LOCK();
         plVar1 = (long*)( local_80 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_80 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      LAB_001113a8:uVar9 = 0;
   }
 else {
      iVar2 = ( **(code**)( this + 0x1e8 ) )(lVar8);
      if (iVar2 < 0) goto LAB_0011171d;
      lVar8 = *(long*)( param_1 + 8 );
      if (lVar8 != 0) {
         lVar10 = 0;
         do {
            if (*(long*)( lVar8 + -8 ) <= lVar10) break;
            puVar5 = (ulong*)( lVar8 + lVar10 * 8 );
            if (*puVar5 == 0) {
               LAB_00111505:_err_print_error("attach_action_sets", "modules/openxr/openxr_api.cpp", 0xbbc, "Parameter \"action_set\" is null.", 0, 0);
               goto LAB_001113a8;
            }

            uVar3 = *puVar5;
            if (*(uint*)( this + 0x3bc ) <= (uint)uVar3) goto LAB_00111505;
            lVar8 = ( ( uVar3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x3b8 ) ) * 0x20 + *(long*)( *(long*)( this + 0x3a8 ) + ( ( uVar3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x3b8 ) ) * 8 );
            iVar2 = *(int*)( lVar8 + 0x18 );
            if (iVar2 != (int)( uVar3 >> 0x20 )) {
               if (iVar2 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

               goto LAB_00111505;
            }

            *(undefined1*)( lVar8 + 8 ) = 1;
            lVar8 = *(long*)( param_1 + 8 );
            lVar10 = lVar10 + 1;
         }
 while ( lVar8 != 0 );
      }

      uVar9 = 1;
   }

   if (__src != (undefined8*)0x0) {
      plVar1 = __src + -2;
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static(plVar1, false);
      }

   }

   LAB_001113c1:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar9;
}
/* OpenXRAPI::get_xr_path(String const&) */undefined8 OpenXRAPI::get_xr_path(OpenXRAPI *this, String *param_1) {
   long *plVar1;
   long lVar2;
   int iVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0xd0 ) == 0) {
      _err_print_error("get_xr_path", "modules/openxr/openxr_api.cpp", 0xae8, "Condition \"instance == nullptr\" is true. Returning: 0", 0, 0);
   }
 else if (( *(long*)param_1 != 0 ) && ( 1 < *(uint*)( *(long*)param_1 + -8 ) )) {
      local_60 = 0;
      String::utf8();
      uVar4 = CharString::get_data();
      lVar2 = local_50;
      if (*(code**)( this + 800 ) == (code*)0x0) {
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

         iVar3 = -0xc;
      }
 else {
         iVar3 = ( **(code**)( this + 800 ) )(*(undefined8*)( this + 0xd0 ), uVar4, &local_60);
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

         uVar4 = local_60;
         if (-1 < iVar3) goto LAB_00111871;
      }

      get_error_string(&local_58, this, iVar3);
      local_50 = 0;
      if (*(long*)param_1 == 0) {
         Variant::Variant((Variant*)local_48, "OpenXR: failed to get path for ");
         print_line<String,char_const*,String,char_const*>((Variant*)local_48, (CowData<char32_t>*)&local_50, &_LC371, &local_58, &_LC164);
         if (Variant::needs_deinit[local_48[0]] != '\0') {
            Variant::_clear_internal();
         }

      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_50, (CowData*)param_1);
         lVar2 = local_50;
         Variant::Variant((Variant*)local_48, "OpenXR: failed to get path for ");
         print_line<String,char_const*,String,char_const*>((Variant*)local_48, (CowData<char32_t>*)&local_50, &_LC371, &local_58, &_LC164);
         if (Variant::needs_deinit[local_48[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_50 + -0x10 ), false);
            }

         }

      }

      lVar2 = local_58;
      if (local_58 != 0) {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_58 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

   }

   uVar4 = 0;
   LAB_00111871:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::tracker_create(String) */undefined8 OpenXRAPI::tracker_create(OpenXRAPI *this, String *param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined8 uVar4;
   long lVar5;
   long in_FS_OFFSET;
   bool bVar6;
   long local_38;
   long local_30;
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0xd0 ) == 0) {
      uVar4 = 0;
      _err_print_error("tracker_create", "modules/openxr/openxr_api.cpp", 0xb15, "Condition \"instance == nullptr\" is true. Returning: RID()", 0, 0);
   }
 else {
      lVar5 = *(long*)param_2;
      local_38 = 0;
      if (lVar5 != 0) {
         plVar1 = (long*)( lVar5 + -0x10 );
         do {
            lVar2 = *plVar1;
            lVar5 = local_38;
            if (lVar2 == 0) goto LAB_00111b30;
            LOCK();
            lVar3 = *plVar1;
            bVar6 = lVar2 == lVar3;
            if (bVar6) {
               *plVar1 = lVar2 + 1;
               lVar3 = lVar2;
            }

            UNLOCK();
         }
 while ( !bVar6 );
         if (lVar3 != -1) {
            local_38 = *(long*)param_2;
            lVar5 = local_38;
         }

      }

      LAB_00111b30:local_28 = 0;
      local_30 = get_xr_path(this, param_2);
      if (local_30 == 0) {
         uVar4 = 0;
         _err_print_error("tracker_create", "modules/openxr/openxr_api.cpp", 0xb1d, "Condition \"new_tracker.toplevel_path == 0\" is true. Returning: RID()", 0, 0);
      }
 else {
         uVar4 = RID_Alloc<OpenXRAPI::Tracker,true>::make_rid((RID_Alloc<OpenXRAPI::Tracker,true>*)( this + 0x348 ), (Tracker*)&local_38);
      }

      if (lVar5 != 0) {
         LOCK();
         plVar1 = (long*)( lVar5 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_38 + -0x10 ), false);
         }

      }

   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
}
/* OpenXRAPI::action_set_create(String, String, int) */undefined8 OpenXRAPI::action_set_create(OpenXRAPI *this, long *param_2, long *param_3, undefined4 param_4) {
   int iVar1;
   undefined8 uVar2;
   long lVar3;
   long lVar4;
   long *plVar5;
   undefined8 *puVar6;
   long in_FS_OFFSET;
   bool bVar7;
   long local_158;
   long local_150;
   long local_148;
   undefined1 local_140;
   undefined8 local_138[2];
   int local_128[8];
   undefined4 local_108;
   undefined1 local_104[4];
   undefined8 uStack_100;
   undefined1 local_f8[64];
   undefined1 local_b8[128];
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0xd0 ) == 0) {
      uVar2 = 0;
      _err_print_error("action_set_create", "modules/openxr/openxr_api.cpp", 0xb5b, "Condition \"instance == nullptr\" is true. Returning: RID()", 0, 0);
      goto LAB_00111f32;
   }

   local_148 = 0;
   if (*param_2 == 0) {
      local_38 = 0;
      puVar6 = (undefined8*)( local_104 + 4 );
      for (lVar4 = 0x1a; lVar4 != 0; lVar4 = lVar4 + -1) {
         *puVar6 = 0;
         puVar6 = puVar6 + 1;
      }

      local_38 = CONCAT44(local_38._4_4_, param_4);
      local_150 = 0;
   }
 else {
      plVar5 = (long*)( *param_2 + -0x10 );
      do {
         lVar4 = *plVar5;
         if (lVar4 == 0) {
            lVar4 = *param_2;
            goto LAB_00111c9d;
         }

         LOCK();
         lVar3 = *plVar5;
         bVar7 = lVar4 == lVar3;
         if (bVar7) {
            *plVar5 = lVar4 + 1;
            lVar3 = lVar4;
         }

         UNLOCK();
      }
 while ( !bVar7 );
      lVar4 = *param_2;
      if (lVar3 != -1) {
         local_148 = lVar4;
      }

      LAB_00111c9d:local_38 = 0;
      puVar6 = (undefined8*)( local_104 + 4 );
      for (lVar3 = 0x1a; lVar3 != 0; lVar3 = lVar3 + -1) {
         *puVar6 = 0;
         puVar6 = puVar6 + 1;
      }

      local_38 = CONCAT44(local_38._4_4_, param_4);
      local_150 = 0;
      if (lVar4 != 0) {
         plVar5 = (long*)( lVar4 + -0x10 );
         do {
            lVar4 = *plVar5;
            if (lVar4 == 0) goto LAB_00111d09;
            LOCK();
            lVar3 = *plVar5;
            bVar7 = lVar4 == lVar3;
            if (bVar7) {
               *plVar5 = lVar4 + 1;
               lVar3 = lVar4;
            }

            UNLOCK();
         }
 while ( !bVar7 );
         if (lVar3 != -1) {
            local_150 = *param_2;
         }

      }

   }

   LAB_00111d09:_local_104 = 0;
   local_140 = 0;
   local_108 = 0x1c;
   copy_string_to_char_buffer(this, &local_150, local_f8, 0x40);
   lVar4 = local_150;
   if (local_150 != 0) {
      LOCK();
      plVar5 = (long*)( local_150 + -0x10 );
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         local_150 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   local_150 = 0;
   plVar5 = (long*)( *param_3 + -0x10 );
   if (*param_3 != 0) {
      do {
         lVar4 = *plVar5;
         if (lVar4 == 0) goto LAB_00111d86;
         LOCK();
         lVar3 = *plVar5;
         bVar7 = lVar4 == lVar3;
         if (bVar7) {
            *plVar5 = lVar4 + 1;
            lVar3 = lVar4;
         }

         UNLOCK();
      }
 while ( !bVar7 );
      if (lVar3 != -1) {
         local_150 = *param_3;
      }

   }

   LAB_00111d86:copy_string_to_char_buffer(this, &local_150, local_b8, 0x80);
   lVar4 = local_150;
   if (local_150 != 0) {
      LOCK();
      plVar5 = (long*)( local_150 + -0x10 );
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         local_150 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   if (*(code**)( this + 0x208 ) == (code*)0x0) {
      iVar1 = -0xc;
      LAB_00111df9:get_error_string(&local_158, this, iVar1);
      local_150 = 0;
      if (*param_2 == 0) {
         Variant::Variant((Variant*)local_128, "OpenXR: failed to create action set ");
         print_line<String,char_const*,String,char_const*>((Variant*)local_128, &local_150, &_LC371, &local_158, &_LC164);
         if (Variant::needs_deinit[local_128[0]] != '\0') {
            Variant::_clear_internal();
         }

      }
 else {
         plVar5 = (long*)( *param_2 + -0x10 );
         do {
            lVar4 = *plVar5;
            if (lVar4 == 0) goto LAB_00111e4d;
            LOCK();
            lVar3 = *plVar5;
            bVar7 = lVar4 == lVar3;
            if (bVar7) {
               *plVar5 = lVar4 + 1;
               lVar3 = lVar4;
            }

            UNLOCK();
         }
 while ( !bVar7 );
         if (lVar3 != -1) {
            local_150 = *param_2;
         }

         LAB_00111e4d:lVar4 = local_150;
         Variant::Variant((Variant*)local_128, "OpenXR: failed to create action set ");
         print_line<String,char_const*,String,char_const*>((Variant*)local_128, &local_150, &_LC371, &local_158, &_LC164);
         if (Variant::needs_deinit[local_128[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (lVar4 != 0) {
            LOCK();
            plVar5 = (long*)( lVar4 + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
               Memory::free_static((void*)( local_150 + -0x10 ), false);
            }

         }

      }

      lVar4 = local_158;
      if (local_158 != 0) {
         LOCK();
         plVar5 = (long*)( local_158 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_158 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      uVar2 = 0;
   }
 else {
      iVar1 = ( **(code**)( this + 0x208 ) )(*(undefined8*)( this + 0xd0 ), &local_108, local_138);
      if (iVar1 < 0) goto LAB_00111df9;
      set_object_name(this, 5, local_138[0], param_2);
      uVar2 = RID_Alloc<OpenXRAPI::ActionSet,true>::make_rid((RID_Alloc<OpenXRAPI::ActionSet,true>*)( this + 0x3a0 ), (ActionSet*)&local_148);
   }

   lVar4 = local_148;
   if (local_148 != 0) {
      LOCK();
      plVar5 = (long*)( local_148 + -0x10 );
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         local_148 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   LAB_00111f32:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* OpenXRAPI::tracker_check_profile(RID, XrSession_T*) */void OpenXRAPI::tracker_check_profile(OpenXRAPI *this, ulong param_2, long param_3) {
   long *plVar1;
   long lVar2;
   ulong uVar3;
   int iVar4;
   ulong uVar5;
   undefined8 uVar6;
   long lVar7;
   long in_FS_OFFSET;
   long local_78;
   long local_70;
   undefined4 local_68[2];
   undefined8 local_60;
   ulong local_58;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 == 0) {
      param_3 = *(long*)( this + 0xf8 );
   }

   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x364 ) )) {
      lVar7 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x360 ) ) * 0x20 + *(long*)( *(long*)( this + 0x350 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x360 ) ) * 8 );
      if (*(int*)( lVar7 + 0x18 ) == (int)( param_2 >> 0x20 )) {
         if (*(long*)( lVar7 + 8 ) != 0) {
            local_68[0] = 0x35;
            local_60 = 0;
            local_58 = 0;
            if (*(code**)( this + 0x2c8 ) == (code*)0x0) {
               iVar4 = -0xc;
            }
 else {
               iVar4 = ( **(code**)( this + 0x2c8 ) )(param_3, *(long*)( lVar7 + 8 ), local_68);
               uVar3 = local_58;
               if (-1 < iVar4) {
                  uVar5 = get_interaction_profile_path(this, *(undefined8*)( lVar7 + 0x10 ));
                  if (uVar3 != uVar5) {
                     uVar6 = get_interaction_profile_rid(this, uVar3);
                     lVar2 = *(long*)this;
                     *(undefined8*)( lVar7 + 0x10 ) = uVar6;
                     if (lVar2 != 0) {
                        OpenXRInterface::tracker_profile_changed(lVar2, param_2, uVar6);
                     }

                  }

                  goto LAB_00112140;
               }

            }

            get_error_string(&local_70, this, iVar4);
            itos((long)&local_78);
            Variant::Variant((Variant*)local_48, "OpenXR: Failed to get interaction profile for");
            print_line<String,char_const*,String,char_const*>((Variant*)local_48, &local_78, &_LC379, &local_70, &_LC164);
            if (Variant::needs_deinit[local_48[0]] != '\0') {
               Variant::_clear_internal();
            }

            lVar7 = local_78;
            if (local_78 != 0) {
               LOCK();
               plVar1 = (long*)( local_78 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_78 = 0;
                  Memory::free_static((void*)( lVar7 + -0x10 ), false);
               }

            }

            lVar7 = local_70;
            if (local_70 != 0) {
               LOCK();
               plVar1 = (long*)( local_70 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_70 = 0;
                  Memory::free_static((void*)( lVar7 + -0x10 ), false);
               }

            }

         }

         LAB_00112140:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0011230d;
      }

      if (*(int*)( lVar7 + 0x18 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("tracker_check_profile", "modules/openxr/openxr_api.cpp", 0xb33, "Parameter \"tracker\" is null.", 0, 0);
      return;
   }

   LAB_0011230d:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* OpenXRAPI::on_state_synchronized() */undefined8 OpenXRAPI::on_state_synchronized(OpenXRAPI *this) {
   undefined1(*pauVar1)[16];
   long *plVar2;
   pthread_mutex_t *__mutex;
   uint uVar3;
   ulong uVar4;
   void *pvVar5;
   long lVar6;
   char cVar7;
   int iVar8;
   ulong *puVar9;
   long lVar10;
   undefined1(*pauVar11)[16];
   undefined8 *puVar12;
   undefined8 *puVar13;
   ulong uVar14;
   long in_FS_OFFSET;
   long local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar7 = is_print_verbose_enabled();
   if (cVar7 != '\0') {
      Variant::Variant((Variant*)local_58, "On state synchronized");
      stringify_variants((Variant*)&local_60);
      __print_line((String*)&local_60);
      lVar10 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar2 = (long*)( local_60 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar10 + -0x10 ), false);
         }

      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   __mutex = (pthread_mutex_t*)( this + 0x378 );
   iVar8 = pthread_mutex_lock(__mutex);
   if (iVar8 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar8);
   }

   pauVar11 = (undefined1(*) [16])0x0;
   uVar14 = 0;
   if (*(int*)( this + 0x364 ) == 0) {
      pthread_mutex_unlock(__mutex);
   }
 else {
      do {
         uVar3 = *(uint*)( ( uVar14 % ( ulong ) * (uint*)( this + 0x360 ) ) * 0x20 + *(long*)( *(long*)( this + 0x350 ) + ( uVar14 / *(uint*)( this + 0x360 ) ) * 8 ) + 0x18 );
         if (uVar3 != 0xffffffff) {
            if (pauVar11 == (undefined1(*) [16])0x0) {
               pauVar11 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined4*)pauVar11[1] = 0;
               *pauVar11 = (undefined1[16])0x0;
            }

            puVar9 = (ulong*)operator_new(0x20, DefaultAllocator::alloc);
            uVar4 = *(ulong*)( *pauVar11 + 8 );
            puVar9[1] = 0;
            *puVar9 = (ulong)uVar3 << 0x20 | uVar14;
            puVar9[2] = uVar4;
            puVar9[3] = (ulong)pauVar11;
            if (uVar4 != 0) {
               *(ulong**)( uVar4 + 8 ) = puVar9;
            }

            lVar10 = *(long*)*pauVar11;
            *(ulong**)( *pauVar11 + 8 ) = puVar9;
            if (lVar10 == 0) {
               *(ulong**)*pauVar11 = puVar9;
            }

            *(int*)pauVar11[1] = *(int*)pauVar11[1] + 1;
         }

         uVar14 = uVar14 + 1;
      }
 while ( uVar14 < *(uint*)( this + 0x364 ) );
      pthread_mutex_unlock(__mutex);
      if (pauVar11 != (undefined1(*) [16])0x0) {
         for (puVar13 = *(undefined8**)*pauVar11; puVar13 != (undefined8*)0x0; puVar13 = (undefined8*)puVar13[1]) {
            tracker_check_profile(this, *puVar13, 0);
         }

      }

   }

   CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
   puVar12 = (undefined8*)registered_extension_wrappers._8_8_;
   CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
   puVar13 = (undefined8*)registered_extension_wrappers._8_8_;
   if (registered_extension_wrappers._8_8_ != 0) {
      puVar13 = (undefined8*)( registered_extension_wrappers._8_8_ + *(long*)( registered_extension_wrappers._8_8_ + -8 ) * 8 );
   }

   for (; puVar12 != puVar13; puVar12 = puVar12 + 1) {
      ( **(code**)( *(long*)*puVar12 + 0xa8 ) )();
   }

   if (pauVar11 != (undefined1(*) [16])0x0) {
      do {
         while (true) {
            pvVar5 = *(void**)*pauVar11;
            if (pvVar5 == (void*)0x0) {
               if (*(int*)pauVar11[1] != 0) {
                  _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                  goto LAB_001124ff;
               }

               goto LAB_001124f5;
            }

            if (pauVar11 != *(undefined1(**) [16])( (long)pvVar5 + 0x18 )) break;
            lVar10 = *(long*)( (long)pvVar5 + 8 );
            lVar6 = *(long*)( (long)pvVar5 + 0x10 );
            *(long*)*pauVar11 = lVar10;
            if (pvVar5 == *(void**)( *pauVar11 + 8 )) {
               *(long*)( *pauVar11 + 8 ) = lVar6;
            }

            if (lVar6 != 0) {
               *(long*)( lVar6 + 8 ) = lVar10;
               lVar10 = *(long*)( (long)pvVar5 + 8 );
            }

            if (lVar10 != 0) {
               *(long*)( lVar10 + 0x10 ) = lVar6;
            }

            Memory::free_static(pvVar5, false);
            pauVar1 = pauVar11 + 1;
            *(int*)*pauVar1 = *(int*)*pauVar1 + -1;
            if (*(int*)*pauVar1 == 0) goto LAB_001124f5;
         }
;
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }
 while ( *(int*)pauVar11[1] != 0 );
      LAB_001124f5:Memory::free_static(pauVar11, false);
   }

   LAB_001124ff:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return 1;
}
/* OpenXRAPI::poll_events() */undefined8 OpenXRAPI::poll_events(OpenXRAPI *this) {
   undefined1(*pauVar1)[16];
   pthread_mutex_t *__mutex;
   uint uVar2;
   long *plVar3;
   ulong uVar4;
   void *pvVar5;
   long lVar6;
   char *pcVar7;
   byte bVar8;
   char cVar9;
   int iVar10;
   ulong *puVar11;
   long lVar12;
   undefined1(*pauVar13)[16];
   undefined8 uVar14;
   byte bVar15;
   undefined8 *puVar16;
   ulong uVar17;
   undefined8 *puVar18;
   long in_FS_OFFSET;
   CowData<char32_t> *local_1070;
   CowData<char32_t> *local_1068;
   long local_1050;
   long local_1048;
   long local_1040;
   long local_1038;
   long local_1030;
   char *local_1028;
   undefined8 local_1020;
   int local_1018[8];
   undefined4 local_ff8[2];
   undefined8 local_ff0;
   undefined8 local_fe8;
   int local_fe0;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0xd0 ) == 0) {
      _err_print_error("poll_events", "modules/openxr/openxr_api.cpp", 0x784, "Condition \"instance == nullptr\" is true. Returning: false", 0, 0);
   }
 else {
      local_ff8[0] = 0x10;
      local_ff0 = 0;
      if (*(code**)( this + 0x308 ) != (code*)0x0) {
         iVar10 = ( **(code**)( this + 0x308 ) )(*(long*)( this + 0xd0 ), local_ff8);
         while (iVar10 == 0) {
            CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
            puVar18 = (undefined8*)registered_extension_wrappers._8_8_;
            CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
            puVar16 = (undefined8*)registered_extension_wrappers._8_8_;
            if (registered_extension_wrappers._8_8_ != 0) {
               puVar16 = (undefined8*)( registered_extension_wrappers._8_8_ + *(long*)( registered_extension_wrappers._8_8_ + -8 ) * 8 );
            }

            if (puVar18 == puVar16) {
               switch (local_ff8[0]) {
                  case 0x11:
            goto switchD_00112798_caseD_11;
                  case 0x12:
            goto switchD_00112798_caseD_12;
                  default:
switchD_001131a1_caseD_13:
            cVar9 = is_print_verbose_enabled();
            if (cVar9 == '\0') goto switchD_00112ab4_caseD_0;
            OpenXRUtil::get_structure_type_name(&local_1038,local_ff8[0]);
            local_1040 = 0;
            local_1028 = "OpenXR Unhandled event type ";
            local_1020 = 0x1c;
            String::parse_latin1((StrRange *)&local_1040);
            String::operator+((String *)&local_1030,(String *)&local_1040);
            Variant::Variant((Variant *)local_1018,(String *)&local_1030);
LAB_00112d9f:
            local_1068 = (CowData<char32_t> *)&local_1038;
            local_1070 = (CowData<char32_t> *)&local_1040;
            stringify_variants((Variant *)&local_1028);
            __print_line((String *)&local_1028);
            pcVar7 = local_1028;
            if (local_1028 != (char *)0x0) {
              LOCK();
              plVar3 = (long *)(local_1028 + -0x10);
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              if (*plVar3 == 0) {
                local_1028 = (char *)0x0;
                Memory::free_static(pcVar7 + -0x10,false);
              }
            }
            if (Variant::needs_deinit[local_1018[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_1030);
            CowData<char32_t>::_unref(local_1070);
            CowData<char32_t>::_unref(local_1068);
            goto switchD_00112ab4_caseD_0;
                  case 0x28:
            goto switchD_00112798_caseD_28;
                  case 0x31:
            goto switchD_00112798_caseD_31;
                  case 0x34:
            goto switchD_00112798_caseD_34;
               }

            }

            bVar15 = 0;
            do {
               plVar3 = (long*)*puVar18;
               puVar18 = puVar18 + 1;
               bVar8 = ( **(code**)( *plVar3 + 0x100 ) )(plVar3, local_ff8);
               bVar15 = bVar15 | bVar8;
            }
 while ( puVar16 != puVar18 );
            switch (local_ff8[0]) {
               case 0x11:
          goto switchD_00112798_caseD_11;
               case 0x12:
switchD_00112798_caseD_12:
          *(int *)(this + 0x100) = local_fe0;
          if (local_fe0 == 0x7fffffff) {
            cVar9 = is_print_verbose_enabled();
            if (cVar9 != '\0') {
              itos((long)&local_1038);
              local_1040 = 0;
              local_1028 = "OpenXR EVENT: session state changed to UNKNOWN - ";
              local_1020 = 0x31;
              String::parse_latin1((StrRange *)&local_1040);
              String::operator+((String *)&local_1030,(String *)&local_1040);
              Variant::Variant((Variant *)local_1018,(String *)&local_1030);
              goto LAB_00112d9f;
            }
          }
          else {
            cVar9 = is_print_verbose_enabled();
            if (cVar9 != '\0') {
              OpenXRUtil::get_session_state_name(&local_1038,*(undefined4 *)(this + 0x100));
              local_1028 = "OpenXR EVENT: session state changed to ";
              local_1040 = 0;
              local_1020 = 0x27;
              String::parse_latin1((StrRange *)&local_1040);
              String::operator+((String *)&local_1030,(String *)&local_1040);
              Variant::Variant((Variant *)local_1018,(String *)&local_1030);
              stringify_variants((Variant *)&local_1028);
              __print_line((String *)&local_1028);
              pcVar7 = local_1028;
              if (local_1028 != (char *)0x0) {
                LOCK();
                plVar3 = (long *)(local_1028 + -0x10);
                *plVar3 = *plVar3 + -1;
                UNLOCK();
                if (*plVar3 == 0) {
                  local_1028 = (char *)0x0;
                  Memory::free_static(pcVar7 + -0x10,false);
                }
              }
              if (Variant::needs_deinit[local_1018[0]] != '\0') {
                Variant::_clear_internal();
              }
              lVar12 = local_1030;
              if (local_1030 != 0) {
                LOCK();
                plVar3 = (long *)(local_1030 + -0x10);
                *plVar3 = *plVar3 + -1;
                UNLOCK();
                if (*plVar3 == 0) {
                  local_1030 = 0;
                  Memory::free_static((void *)(lVar12 + -0x10),false);
                }
              }
              lVar12 = local_1040;
              if (local_1040 != 0) {
                LOCK();
                plVar3 = (long *)(local_1040 + -0x10);
                *plVar3 = *plVar3 + -1;
                UNLOCK();
                if (*plVar3 == 0) {
                  local_1040 = 0;
                  Memory::free_static((void *)(lVar12 + -0x10),false);
                }
              }
              lVar12 = local_1038;
              if (local_1038 != 0) {
                LOCK();
                plVar3 = (long *)(local_1038 + -0x10);
                *plVar3 = *plVar3 + -1;
                UNLOCK();
                if (*plVar3 == 0) {
                  local_1038 = 0;
                  Memory::free_static((void *)(lVar12 + -0x10),false);
                }
              }
            }
            switch(*(undefined4 *)(this + 0x100)) {
            case 1:
              on_state_idle();
              break;
            case 2:
              on_state_ready(this);
              break;
            case 3:
              on_state_synchronized(this);
              break;
            case 4:
              on_state_visible(this);
              break;
            case 5:
              on_state_focused(this);
              break;
            case 6:
              on_state_stopping(this);
              break;
            case 7:
              on_state_loss_pending(this);
              break;
            case 8:
              on_state_exiting(this);
            }
          }
          break;
               default:
          if (bVar15 == 0) goto switchD_001131a1_caseD_13;
          break;
               case 0x28:
switchD_00112798_caseD_28:
          cVar9 = is_print_verbose_enabled();
          if (cVar9 != '\0') {
            local_1038 = 0;
            local_1020 = 0x10;
            local_1028 = " change pending!";
            String::parse_latin1((StrRange *)&local_1038);
            OpenXRUtil::get_reference_space_name(&local_1048,local_fe0);
            local_1028 = "OpenXR EVENT: reference space type ";
            local_1050 = 0;
            local_1020 = 0x23;
            String::parse_latin1((StrRange *)&local_1050);
            String::operator+((String *)&local_1040,(String *)&local_1050);
            String::operator+((String *)&local_1030,(String *)&local_1040);
            Variant::Variant((Variant *)local_1018,(String *)&local_1030);
            stringify_variants((Variant *)&local_1028);
            __print_line((String *)&local_1028);
            pcVar7 = local_1028;
            if (local_1028 != (char *)0x0) {
              LOCK();
              plVar3 = (long *)(local_1028 + -0x10);
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              if (*plVar3 == 0) {
                local_1028 = (char *)0x0;
                Memory::free_static(pcVar7 + -0x10,false);
              }
            }
            if (Variant::needs_deinit[local_1018[0]] != '\0') {
              Variant::_clear_internal();
            }
            lVar12 = local_1030;
            if (local_1030 != 0) {
              LOCK();
              plVar3 = (long *)(local_1030 + -0x10);
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              if (*plVar3 == 0) {
                local_1030 = 0;
                Memory::free_static((void *)(lVar12 + -0x10),false);
              }
            }
            lVar12 = local_1040;
            if (local_1040 != 0) {
              LOCK();
              plVar3 = (long *)(local_1040 + -0x10);
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              if (*plVar3 == 0) {
                local_1040 = 0;
                Memory::free_static((void *)(lVar12 + -0x10),false);
              }
            }
            lVar12 = local_1050;
            if (local_1050 != 0) {
              LOCK();
              plVar3 = (long *)(local_1050 + -0x10);
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              if (*plVar3 == 0) {
                local_1050 = 0;
                Memory::free_static((void *)(lVar12 + -0x10),false);
              }
            }
            lVar12 = local_1048;
            if (local_1048 != 0) {
              LOCK();
              plVar3 = (long *)(local_1048 + -0x10);
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              if (*plVar3 == 0) {
                local_1048 = 0;
                Memory::free_static((void *)(lVar12 + -0x10),false);
              }
            }
            lVar12 = local_1038;
            if (local_1038 != 0) {
              LOCK();
              plVar3 = (long *)(local_1038 + -0x10);
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              if (*plVar3 == 0) {
                local_1038 = 0;
                Memory::free_static((void *)(lVar12 + -0x10),false);
              }
            }
          }
          if (this[0x1b8] != (OpenXRAPI)0x0) {
            this[0x1d0] = (OpenXRAPI)0x1;
          }
          if (*(long *)this != 0) {
            OpenXRInterface::on_reference_space_change_pending();
          }
          break;
               case 0x31:
switchD_00112798_caseD_31:
          local_1030 = 0;
          local_1020 = 0x11;
          local_1028 = " event data lost!";
          String::parse_latin1((StrRange *)&local_1030);
          itos((long)&local_1040);
               operator+((char *)&
               local_1038,(String*)"OpenXR EVENT: ";
               String::operator +((String*)&local_1028, (String*)&local_1038);
               _err_print_error("poll_events", "modules/openxr/openxr_api.cpp", 0x796, (String*)&local_1028);
               pcVar7 = local_1028;
               if (local_1028 != (char*)0x0) {
                  LOCK();
                  plVar3 = (long*)( local_1028 + -0x10 );
                  *plVar3 = *plVar3 + -1;
                  UNLOCK();
                  if (*plVar3 == 0) {
                     local_1028 = (char*)0x0;
                     Memory::free_static(pcVar7 + -0x10, false);
                  }

               }

               lVar12 = local_1038;
               if (local_1038 != 0) {
                  LOCK();
                  plVar3 = (long*)( local_1038 + -0x10 );
                  *plVar3 = *plVar3 + -1;
                  UNLOCK();
                  if (*plVar3 == 0) {
                     local_1038 = 0;
                     Memory::free_static((void*)( lVar12 + -0x10 ), false);
                  }

               }

               lVar12 = local_1040;
               if (local_1040 != 0) {
                  LOCK();
                  plVar3 = (long*)( local_1040 + -0x10 );
                  *plVar3 = *plVar3 + -1;
                  UNLOCK();
                  if (*plVar3 == 0) {
                     local_1040 = 0;
                     Memory::free_static((void*)( lVar12 + -0x10 ), false);
                  }

               }

               lVar12 = local_1030;
               if (local_1030 != 0) {
                  LOCK();
                  plVar3 = (long*)( local_1030 + -0x10 );
                  *plVar3 = *plVar3 + -1;
                  UNLOCK();
                  if (*plVar3 == 0) {
                     local_1030 = 0;
                     Memory::free_static((void*)( lVar12 + -0x10 ), false);
                  }

               }

               break;
               case 0x34:
switchD_00112798_caseD_34:
          cVar9 = is_print_verbose_enabled();
          if (cVar9 != '\0') {
            Variant::Variant((Variant *)local_1018,"OpenXR EVENT: interaction profile changed!");
            stringify_variants((Variant *)&local_1028);
            __print_line((String *)&local_1028);
            pcVar7 = local_1028;
            if (local_1028 != (char *)0x0) {
              LOCK();
              plVar3 = (long *)(local_1028 + -0x10);
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              if (*plVar3 == 0) {
                local_1028 = (char *)0x0;
                Memory::free_static(pcVar7 + -0x10,false);
              }
            }
            if (Variant::needs_deinit[local_1018[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
          __mutex = (pthread_mutex_t *)(this + 0x378);
          iVar10 = pthread_mutex_lock(__mutex);
          if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
            std::__throw_system_error(iVar10);
          }
          pauVar13 = (undefined1 (*) [16])0x0;
          uVar17 = 0;
          if (*(int *)(this + 0x364) == 0) {
            pthread_mutex_unlock(__mutex);
          }
          else {
            do {
              uVar2 = *(uint *)((uVar17 % (ulong)*(uint *)(this + 0x360)) * 0x20 +
                                *(long *)(*(long *)(this + 0x350) +
                                         (uVar17 / *(uint *)(this + 0x360)) * 8) + 0x18);
              if (uVar2 != 0xffffffff) {
                if (pauVar13 == (undefined1 (*) [16])0x0) {
                  pauVar13 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
                  *(undefined4 *)pauVar13[1] = 0;
                  *pauVar13 = (undefined1  [16])0x0;
                }
                puVar11 = (ulong *)operator_new(0x20,DefaultAllocator::alloc);
                uVar4 = *(ulong *)(*pauVar13 + 8);
                puVar11[1] = 0;
                *puVar11 = (ulong)uVar2 << 0x20 | uVar17;
                puVar11[2] = uVar4;
                puVar11[3] = (ulong)pauVar13;
                if (uVar4 != 0) {
                  *(ulong **)(uVar4 + 8) = puVar11;
                }
                lVar12 = *(long *)*pauVar13;
                *(ulong **)(*pauVar13 + 8) = puVar11;
                if (lVar12 == 0) {
                  *(ulong **)*pauVar13 = puVar11;
                }
                *(int *)pauVar13[1] = *(int *)pauVar13[1] + 1;
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 < *(uint *)(this + 0x364));
            pthread_mutex_unlock(__mutex);
            if (pauVar13 != (undefined1 (*) [16])0x0) {
              for (puVar16 = *(undefined8 **)*pauVar13; puVar16 != (undefined8 *)0x0;
                  puVar16 = (undefined8 *)puVar16[1]) {
                tracker_check_profile(this,*puVar16,local_fe8);
              }
              if (pauVar13 != (undefined1 (*) [16])0x0) {
                do {
                  while( true ) {
                    pvVar5 = *(void **)*pauVar13;
                    if (pvVar5 == (void *)0x0) {
                      if (*(int *)pauVar13[1] != 0) {
                        _err_print_error("~List","./core/templates/list.h",0x316,
                                         "Condition \"_data->size_cache\" is true.",0,0);
                        goto switchD_00112ab4_caseD_0;
                      }
                      goto LAB_00112caa;
                    }
                    if (pauVar13 != *(undefined1 (**) [16])((long)pvVar5 + 0x18)) break;
                    lVar12 = *(long *)((long)pvVar5 + 8);
                    lVar6 = *(long *)((long)pvVar5 + 0x10);
                    *(long *)*pauVar13 = lVar12;
                    if (pvVar5 == *(void **)(*pauVar13 + 8)) {
                      *(long *)(*pauVar13 + 8) = lVar6;
                    }
                    if (lVar6 != 0) {
                      *(long *)(lVar6 + 8) = lVar12;
                      lVar12 = *(long *)((long)pvVar5 + 8);
                    }
                    if (lVar12 != 0) {
                      *(long *)(lVar12 + 0x10) = lVar6;
                    }
                    Memory::free_static(pvVar5,false);
                    pauVar1 = pauVar13 + 1;
                    *(int *)*pauVar1 = *(int *)*pauVar1 + -1;
                    if (*(int *)*pauVar1 == 0) goto LAB_00112caa;
                  }
                  _err_print_error("erase","./core/templates/list.h",0xe7,
                                   "Condition \"p_I->data != this\" is true. Returning: false",0,0);
                } while (*(int *)pauVar13[1] != 0);
LAB_00112caa:
                Memory::free_static(pauVar13,false);
              }
            }
          }
            }

            switchD_00112ab4_caseD_0:local_ff8[0] = 0x10;
            if (*(code**)( this + 0x308 ) == (code*)0x0) goto LAB_001127e5;
            iVar10 = ( **(code**)( this + 0x308 ) )(*(undefined8*)( this + 0xd0 ), local_ff8);
         }
;
         uVar14 = 1;
         if (iVar10 == 4) goto LAB_00112822;
      }

      LAB_001127e5:_err_print_error("poll_events", "modules/openxr/openxr_api.cpp", 0x7ef, "Method/function failed. Returning: false", "OpenXR: Failed to poll events!", 0, 0);
   }

   goto LAB_00112820;
   switchD_00112798_caseD_11:cVar9 = is_print_verbose_enabled();
   if (cVar9 != '\0') {
      itos((long)&local_1038);
      local_1028 = "OpenXR EVENT: instance loss pending at ";
      local_1040 = 0;
      local_1020 = 0x27;
      String::parse_latin1((StrRange*)&local_1040);
      String::operator +((String*)&local_1030, (String*)&local_1040);
      Variant::Variant((Variant*)local_1018, (String*)&local_1030);
      stringify_variants((Variant*)&local_1028);
      __print_line((String*)&local_1028);
      pcVar7 = local_1028;
      if (local_1028 != (char*)0x0) {
         LOCK();
         plVar3 = (long*)( local_1028 + -0x10 );
         *plVar3 = *plVar3 + -1;
         UNLOCK();
         if (*plVar3 == 0) {
            local_1028 = (char*)0x0;
            Memory::free_static(pcVar7 + -0x10, false);
         }

      }

      if (Variant::needs_deinit[local_1018[0]] != '\0') {
         Variant::_clear_internal();
      }

      lVar12 = local_1030;
      if (local_1030 != 0) {
         LOCK();
         plVar3 = (long*)( local_1030 + -0x10 );
         *plVar3 = *plVar3 + -1;
         UNLOCK();
         if (*plVar3 == 0) {
            local_1030 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }

      }

      lVar12 = local_1040;
      if (local_1040 != 0) {
         LOCK();
         plVar3 = (long*)( local_1040 + -0x10 );
         *plVar3 = *plVar3 + -1;
         UNLOCK();
         if (*plVar3 == 0) {
            local_1040 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }

      }

      lVar12 = local_1038;
      if (local_1038 != 0) {
         LOCK();
         plVar3 = (long*)( local_1038 + -0x10 );
         *plVar3 = *plVar3 + -1;
         UNLOCK();
         if (*plVar3 == 0) {
            local_1038 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }

      }

   }

   LAB_00112820:uVar14 = 0;
   LAB_00112822:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar14;
}
/* OpenXRAPI::process() */OpenXRAPI OpenXRAPI::process(OpenXRAPI *this) {
   code *pcVar1;
   char *pcVar2;
   char cVar3;
   int iVar4;
   long *plVar5;
   CallableCustom *pCVar6;
   undefined8 *puVar7;
   OpenXRAPI OVar8;
   undefined8 *puVar9;
   long in_FS_OFFSET;
   undefined8 uVar10;
   undefined8 local_98;
   CowData<char32_t> local_90[8];
   undefined4 local_88[2];
   undefined8 local_80;
   Callable local_78[16];
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0xd0 ) == 0) {
      _err_print_error("process", "modules/openxr/openxr_api.cpp", 0x833, "Condition \"instance == nullptr\" is true. Returning: false", 0, 0);
   }
 else {
      cVar3 = poll_events(this);
      if (( cVar3 != '\0' ) && ( OVar8 = OVar8 != (OpenXRAPI)0x0 )) {
         local_88[0] = 0x21;
         local_80 = 0;
         *(undefined4*)( this + 0x128 ) = 0;
         *(undefined1(*) [16])( this + 0x118 ) = (undefined1[16])0x0;
         if (*(code**)( this + 0x338 ) == (code*)0x0) {
            iVar4 = -0xc;
         }
 else {
            iVar4 = ( **(code**)( this + 0x338 ) )(*(undefined8*)( this + 0xf8 ), local_88, this + 0x108);
            if (-1 < iVar4) {
               if (500000000 < *(long*)( this + 0x120 )) {
                  cVar3 = is_print_verbose_enabled();
                  if (cVar3 != '\0') {
                     rtos((double)*(long*)( this + 0x120 ));
                     local_68 = "OpenXR resetting invalid display period ";
                     local_98 = 0;
                     local_60 = 0x28;
                     String::parse_latin1((StrRange*)&local_98);
                     String::operator +((String*)local_78, (String*)&local_98);
                     Variant::Variant((Variant*)local_58, (String*)local_78);
                     stringify_variants((Variant*)&local_68);
                     __print_line((String*)&local_68);
                     pcVar2 = local_68;
                     if (local_68 != (char*)0x0) {
                        LOCK();
                        plVar5 = (long*)( local_68 + -0x10 );
                        *plVar5 = *plVar5 + -1;
                        UNLOCK();
                        if (*plVar5 == 0) {
                           local_68 = (char*)0x0;
                           Memory::free_static(pcVar2 + -0x10, false);
                        }

                     }

                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                     CowData<char32_t>::_unref(local_90);
                  }

                  *(undefined8*)( this + 0x120 ) = 0;
               }

               uVar10 = *(undefined8*)( this + 0x118 );
               plVar5 = (long*)RenderingServer::get_singleton();
               if (plVar5 == (long*)0x0) {
                  _err_print_error("set_render_display_info", "modules/openxr/openxr_api.h", 0x184, "Parameter \"rendering_server\" is null.", 0, 0, uVar10);
               }
 else {
                  pcVar1 = *(code**)( *plVar5 + 0x12e0 );
                  pCVar6 = (CallableCustom*)operator_new(0x30, "");
                  CallableCustom::CallableCustom(pCVar6);
                  *(undefined**)( pCVar6 + 0x20 ) = &_LC115;
                  *(undefined8*)( pCVar6 + 0x10 ) = 0;
                  *(undefined***)pCVar6 = &PTR_hash_001265f8;
                  *(code**)( pCVar6 + 0x28 ) = _set_render_display_info;
                  CallableCustomMethodPointerBase::_setup((uint*)pCVar6, (int)pCVar6 + 0x28);
                  *(char**)( pCVar6 + 0x20 ) = "OpenXRAPI::_set_render_display_info";
                  Callable::Callable(local_78, pCVar6);
                  Callable::bind<long,bool>((long)&local_68, SUB81(local_78, 0));
                  ( *pcVar1 )(plVar5, (Callable*)&local_68);
                  Callable::~Callable((Callable*)&local_68);
                  Callable::~Callable(local_78);
               }

               if (this[0x1d0] == (OpenXRAPI)0x0) {
                  LAB_001135bf:if (this[0x180] != (OpenXRAPI)0x0) goto LAB_00113910;
               }
 else {
                  if (this[0x180] == (OpenXRAPI)0x0) {
                     reset_emulated_floor_height(this);
                     this[0x1d0] = (OpenXRAPI)0x0;
                     goto LAB_001135bf;
                  }

                  LAB_00113910:setup_play_space(this);
                  this[0x180] = (OpenXRAPI)0x0;
               }

               CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
               puVar7 = (undefined8*)registered_extension_wrappers._8_8_;
               CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
               puVar9 = (undefined8*)registered_extension_wrappers._8_8_;
               if (registered_extension_wrappers._8_8_ != 0) {
                  puVar9 = (undefined8*)( registered_extension_wrappers._8_8_ + *(long*)( registered_extension_wrappers._8_8_ + -8 ) * 8 );
               }

               for (; puVar9 != puVar7; puVar7 = puVar7 + 1) {
                  ( **(code**)( *(long*)*puVar7 + 0x70 ) )();
               }

               goto LAB_0011364a;
            }

         }

         get_error_string((Callable*)&local_68, this, iVar4);
         Variant::Variant((Variant*)local_58, "OpenXR: xrWaitFrame() was not successful [");
         print_line<String,char_const*>((Variant*)local_58, (Callable*)&local_68, &_LC164);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         pcVar2 = local_68;
         if (local_68 != (char*)0x0) {
            LOCK();
            plVar5 = (long*)( local_68 + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
               local_68 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         *(undefined4*)( this + 0x128 ) = 0;
         *(undefined1(*) [16])( this + 0x118 ) = (undefined1[16])0x0;
         plVar5 = (long*)RenderingServer::get_singleton();
         if (plVar5 == (long*)0x0) {
            _err_print_error("set_render_display_info", "modules/openxr/openxr_api.h", 0x184, "Parameter \"rendering_server\" is null.", 0, 0);
         }
 else {
            pcVar1 = *(code**)( *plVar5 + 0x12e0 );
            pCVar6 = (CallableCustom*)operator_new(0x30, "");
            CallableCustom::CallableCustom(pCVar6);
            *(undefined**)( pCVar6 + 0x20 ) = &_LC115;
            *(undefined8*)( pCVar6 + 0x10 ) = 0;
            *(undefined***)pCVar6 = &PTR_hash_001265f8;
            *(code**)( pCVar6 + 0x28 ) = _set_render_display_info;
            CallableCustomMethodPointerBase::_setup((uint*)pCVar6, (int)pCVar6 + 0x28);
            *(char**)( pCVar6 + 0x20 ) = "OpenXRAPI::_set_render_display_info";
            Callable::Callable(local_78, pCVar6);
            Callable::bind<long,bool>((long)&local_68, SUB81(local_78, 0));
            ( *pcVar1 )(plVar5, (Callable*)&local_68);
            Callable::~Callable((Callable*)&local_68);
            Callable::~Callable(local_78);
         }

      }

   }

   OVar8 = (OpenXRAPI)0x0;
   LAB_0011364a:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return OVar8;
}
/* OpenXRAPI::OpenXRSwapChainInfo::free_queued() */void OpenXRAPI::OpenXRSwapChainInfo::free_queued(void) {
   OpenXRSwapChainInfo *this;
   OpenXRSwapChainInfo *pOVar1;
   CowData<OpenXRAPI::OpenXRSwapChainInfo>::_copy_on_write((CowData<OpenXRAPI::OpenXRSwapChainInfo>*)( free_queue + 8 ));
   this(OpenXRSwapChainInfo * free_queue._8_8_);
   CowData<OpenXRAPI::OpenXRSwapChainInfo>::_copy_on_write((CowData<OpenXRAPI::OpenXRSwapChainInfo>*)( free_queue + 8 ));
   pOVar1 = (OpenXRSwapChainInfo*)free_queue._8_8_;
   if (free_queue._8_8_ != 0) {
      pOVar1 = (OpenXRSwapChainInfo*)( free_queue._8_8_ + *(long*)( free_queue._8_8_ + -8 ) * 0x18 );
   }

   for (; this != pOVar1; this + 0x18) {
      free(this);
   }

   CowData<OpenXRAPI::OpenXRSwapChainInfo>::resize<false>((CowData<OpenXRAPI::OpenXRSwapChainInfo>*)( free_queue + 8 ), 0);
   return;
}
/* OpenXRAPI::OpenXRSwapChainInfo::queue_free() [clone .part.0] */void OpenXRAPI::OpenXRSwapChainInfo::queue_free(OpenXRSwapChainInfo *this) {
   undefined8 *puVar1;
   long lVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   int iVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   undefined6 uStack_30;
   undefined2 uStack_2a;
   uVar4 = *(undefined8*)this;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = *(undefined8*)( this + 0xe );
   uStack_30 = ( undefined6 ) * (undefined8*)( this + 8 );
   uStack_2a = (undefined2)uVar3;
   if (free_queue._8_8_ == 0) {
      lVar6 = 1;
   }
 else {
      lVar6 = *(long*)( free_queue._8_8_ + -8 ) + 1;
   }

   iVar5 = CowData<OpenXRAPI::OpenXRSwapChainInfo>::resize<false>((CowData<OpenXRAPI::OpenXRSwapChainInfo>*)( free_queue + 8 ), lVar6);
   if (iVar5 == 0) {
      if (free_queue._8_8_ == 0) {
         lVar7 = -1;
         lVar6 = 0;
      }
 else {
         lVar6 = *(long*)( free_queue._8_8_ + -8 );
         lVar7 = lVar6 + -1;
         if (-1 < lVar7) {
            CowData<OpenXRAPI::OpenXRSwapChainInfo>::_copy_on_write((CowData<OpenXRAPI::OpenXRSwapChainInfo>*)( free_queue + 8 ));
            puVar1 = (undefined8*)( free_queue._8_8_ + lVar7 * 0x18 );
            *puVar1 = uVar4;
            puVar1[1] = CONCAT26(uStack_2a, uStack_30);
            *(undefined8*)( (long)puVar1 + 0xe ) = uVar3;
            goto LAB_00113aa0;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar7, lVar6, "p_index", "size()", "", false, false);
   }
 else {
      _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   }

   LAB_00113aa0:*(undefined1(*) [16])this = (undefined1[16])0x0;
   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::OpenXRSwapChainInfo::queue_free() */void OpenXRAPI::OpenXRSwapChainInfo::queue_free(OpenXRSwapChainInfo *this) {
   if (this[0x14] != (OpenXRSwapChainInfo)0x0) {
      release(this);
   }

   if (*(long*)this != 0) {
      queue_free(this);
      return;
   }

   return;
}
/* OpenXRAPI::free_main_swapchains() */void OpenXRAPI::free_main_swapchains(OpenXRAPI *this) {
   if (this[0x574] != (OpenXRAPI)0x0) {
      OpenXRSwapChainInfo::release((OpenXRSwapChainInfo*)( this + 0x560 ));
   }

   if (*(long*)( this + 0x560 ) != 0) {
      OpenXRSwapChainInfo::queue_free((OpenXRSwapChainInfo*)( this + 0x560 ));
   }

   if (this[0x58c] != (OpenXRAPI)0x0) {
      OpenXRSwapChainInfo::release((OpenXRSwapChainInfo*)( this + 0x578 ));
   }

   if (*(long*)( this + 0x578 ) != 0) {
      OpenXRSwapChainInfo::queue_free((OpenXRSwapChainInfo*)( this + 0x578 ));
      return;
   }

   return;
}
/* OpenXRAPI::destroy_session() */void OpenXRAPI::destroy_session(OpenXRAPI *this) {
   long *plVar1;
   char cVar2;
   long lVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   if (this[0x104] != (OpenXRAPI)0x0) {
      if (( *(long*)( this + 0xf8 ) != 0 ) && ( *(code**)( this + 0x270 ) != (code*)0x0 )) {
         ( **(code**)( this + 0x270 ) )();
      }

      this[0x104] = (OpenXRAPI)0x0;
      this[0x4a8] = (OpenXRAPI)0x0;
   }

   if (*(int*)( this + 0x4e0 ) != 0) {
      *(undefined4*)( this + 0x4e0 ) = 0;
   }

   if (*(int*)( this + 0x4f0 ) != 0) {
      *(undefined4*)( this + 0x4f0 ) = 0;
   }

   if (*(int*)( this + 0x500 ) != 0) {
      *(undefined4*)( this + 0x500 ) = 0;
   }

   if (this[0x574] != (OpenXRAPI)0x0) {
      OpenXRSwapChainInfo::release((OpenXRSwapChainInfo*)( this + 0x560 ));
   }

   if (*(long*)( this + 0x560 ) != 0) {
      OpenXRSwapChainInfo::queue_free((OpenXRSwapChainInfo*)( this + 0x560 ));
   }

   if (this[0x58c] != (OpenXRAPI)0x0) {
      OpenXRSwapChainInfo::release((OpenXRSwapChainInfo*)( this + 0x578 ));
   }

   if (*(long*)( this + 0x578 ) != 0) {
      OpenXRSwapChainInfo::queue_free((OpenXRSwapChainInfo*)( this + 0x578 ));
   }

   OpenXRSwapChainInfo::free_queued();
   lVar3 = *(long*)( this + 0x80 );
   if (( lVar3 != 0 ) && ( *(long*)( lVar3 + -8 ) != 0 )) {
      LOCK();
      plVar1 = (long*)( lVar3 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0x80 );
         *(undefined8*)( this + 0x80 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
 else {
         *(undefined8*)( this + 0x80 ) = 0;
      }

   }

   if (*(long*)( this + 0x188 ) != 0) {
      if (*(code**)( this + 600 ) != (code*)0x0) {
         ( **(code**)( this + 600 ) )();
      }

      *(undefined8*)( this + 0x188 ) = 0;
      *(undefined8*)( this + 0x4b8 ) = 0;
   }

   if (*(long*)( this + 400 ) != 0) {
      if (*(code**)( this + 600 ) != (code*)0x0) {
         ( **(code**)( this + 600 ) )();
      }

      *(undefined8*)( this + 400 ) = 0;
   }

   if (*(long*)( this + 0x1c0 ) != 0) {
      if (*(code**)( this + 600 ) != (code*)0x0) {
         ( **(code**)( this + 600 ) )();
      }

      *(undefined8*)( this + 0x1c0 ) = 0;
   }

   if (*(long*)( this + 0x1c8 ) != 0) {
      if (*(code**)( this + 600 ) != (code*)0x0) {
         ( **(code**)( this + 600 ) )();
      }

      *(undefined8*)( this + 0x1c8 ) = 0;
   }

   this[0x1b8] = (OpenXRAPI)0x0;
   this[0x1d0] = (OpenXRAPI)0x0;
   if (*(int*)( this + 0x68 ) != 0) {
      *(undefined4*)( this + 0x68 ) = 0;
   }

   if (*(long*)( this + 0xf8 ) != 0) {
      CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
      puVar4 = (undefined8*)registered_extension_wrappers._8_8_;
      CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
      puVar5 = (undefined8*)registered_extension_wrappers._8_8_;
      if (registered_extension_wrappers._8_8_ != 0) {
         puVar5 = (undefined8*)( registered_extension_wrappers._8_8_ + *(long*)( registered_extension_wrappers._8_8_ + -8 ) * 8 );
      }

      for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
         ( **(code**)( *(long*)*puVar4 + 0x68 ) )();
      }

      lVar3 = OpenXRDebugUtilsExtension::get_singleton();
      if (( lVar3 != 0 ) && ( cVar2 = OpenXRDebugUtilsExtension::get_active() ),cVar2 != '\0') {
         OpenXRDebugUtilsExtension::end_debug_label_region();
      }

      if (*(code**)( this + 0x250 ) != (code*)0x0) {
         ( **(code**)( this + 0x250 ) )(*(undefined8*)( this + 0xf8 ));
      }

      *(undefined8*)( this + 0xf8 ) = 0;
   }

   return;
}
/* OpenXRAPI::initialize_session() */undefined4 OpenXRAPI::initialize_session(OpenXRAPI *this) {
   Variant *pVVar1;
   OpenXRAPI OVar2;
   uint uVar3;
   code *pcVar4;
   char cVar5;
   undefined4 uVar6;
   long *plVar7;
   CallableCustom *this_00;
   Variant *pVVar8;
   long in_FS_OFFSET;
   Callable local_c8[16];
   Callable local_b8[16];
   Variant *local_a8;
   Variant *pVStack_a0;
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   cVar5 = create_session(this);
   if (cVar5 != '\0') {
      cVar5 = load_supported_reference_spaces(this);
      if (cVar5 != '\0') {
         cVar5 = setup_view_space(this);
         if (cVar5 != '\0') {
            cVar5 = load_supported_swapchain_formats(this);
            if (cVar5 != '\0') {
               uVar6 = obtain_swapchain_formats(this);
               if ((char)uVar6 != '\0') {
                  OVar2 = this[0xa8];
                  uVar3 = *(uint*)( this + 0x160 );
                  plVar7 = (long*)RenderingServer::get_singleton();
                  if (plVar7 == (long*)0x0) {
                     _err_print_error("allocate_view_buffers", "modules/openxr/openxr_api.h", 0x174, "Parameter \"rendering_server\" is null.", 0, 0);
                  }
 else {
                     pcVar4 = *(code**)( *plVar7 + 0x12e0 );
                     this_00 = (CallableCustom*)operator_new(0x30, "");
                     CallableCustom::CallableCustom(this_00);
                     *(undefined**)( this_00 + 0x20 ) = &_LC115;
                     *(undefined8*)( this_00 + 0x10 ) = 0;
                     *(undefined***)this_00 = &PTR_hash_001264d8;
                     *(code**)( this_00 + 0x28 ) = _allocate_view_buffers;
                     CallableCustomMethodPointerBase::_setup((uint*)this_00, (int)this_00 + 0x28);
                     *(char**)( this_00 + 0x20 ) = "OpenXRAPI::_allocate_view_buffers";
                     Callable::Callable(local_c8, this_00);
                     Variant::Variant(local_88, uVar3);
                     Variant::Variant(local_70, (bool)OVar2);
                     local_50 = (undefined1[16])0x0;
                     local_58 = 0;
                     pVVar8 = (Variant*)local_40;
                     local_a8 = local_88;
                     pVStack_a0 = local_70;
                     Callable::bindp((Variant**)local_b8, (int)local_c8);
                     do {
                        pVVar1 = pVVar8 + -0x18;
                        pVVar8 = pVVar8 + -0x18;
                        if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                           Variant::_clear_internal();
                        }

                     }
 while ( pVVar8 != local_88 );
                     ( *pcVar4 )(plVar7, local_b8);
                     Callable::~Callable(local_b8);
                     Callable::~Callable(local_c8);
                  }

                  goto LAB_00114092;
               }

            }

         }

      }

   }

   uVar6 = 0;
   destroy_session(this);
   LAB_00114092:if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRAPI::pre_render() */void OpenXRAPI::pre_render(OpenXRAPI *this) {
   long lVar1;
   char cVar2;
   int iVar3;
   long *plVar4;
   ulong uVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   char *pcVar8;
   undefined8 *puVar9;
   OpenXRAPI OVar10;
   long in_FS_OFFSET;
   uint local_bc;
   long local_b8;
   long local_b0;
   char *local_a8;
   undefined8 local_a0;
   undefined4 local_98[2];
   undefined8 local_90;
   undefined8 local_88;
   undefined4 local_78;
   undefined1 local_74[12];
   undefined4 uStack_68;
   undefined4 local_64;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 local_48[3];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0xf8 ) == 0) {
      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_00114757;
      uVar6 = 0x877;
      pcVar8 = "Condition \"session == nullptr\" is true.";
      goto LAB_00114619;
   }

   plVar4 = (long*)RenderingServer::get_singleton();
   if (plVar4 == (long*)0x0) {
      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_00114757;
      pcVar8 = "Parameter \"rendering_server\" is null.";
   }
 else {
      cVar2 = ( **(code**)( *plVar4 + 0x12d8 ) )(plVar4);
      if (cVar2 != '\0') {
         OVar10 = this[0x4a8];
         if (OVar10 != (OpenXRAPI)0x0) {
            OpenXRSwapChainInfo::free_queued();
            local_48[0] = get_recommended_target_size(this);
            local_50 = Vector2::operator_cast_to_Vector2i((Vector2*)local_48);
            cVar2 = Vector2i::operator !=((Vector2i*)&local_50, (Vector2i*)( this + 0x558 ));
            if (cVar2 != '\0') {
               if (this[0x574] != (OpenXRAPI)0x0) {
                  OpenXRSwapChainInfo::release((OpenXRSwapChainInfo*)( this + 0x560 ));
               }

               if (*(long*)( this + 0x560 ) != 0) {
                  OpenXRSwapChainInfo::queue_free((OpenXRSwapChainInfo*)( this + 0x560 ));
               }

               if (this[0x58c] != (OpenXRAPI)0x0) {
                  OpenXRSwapChainInfo::release((OpenXRSwapChainInfo*)( this + 0x578 ));
               }

               if (*(long*)( this + 0x578 ) != 0) {
                  OpenXRSwapChainInfo::queue_free((OpenXRSwapChainInfo*)( this + 0x578 ));
               }

               create_main_swapchains(this, local_50);
            }

            CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
            puVar7 = (undefined8*)registered_extension_wrappers._8_8_;
            CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
            puVar9 = (undefined8*)registered_extension_wrappers._8_8_;
            if (registered_extension_wrappers._8_8_ != 0) {
               puVar9 = (undefined8*)( registered_extension_wrappers._8_8_ + *(long*)( registered_extension_wrappers._8_8_ + -8 ) * 8 );
            }

            for (; puVar7 != puVar9; puVar7 = puVar7 + 1) {
               ( **(code**)( *(long*)*puVar7 + 0x78 ) )();
            }

            local_64 = 0;
            local_74 = SUB1612((undefined1[16])0x0, 0);
            uStack_68 = *(undefined4*)( this + 0x9c );
            local_60 = *(undefined8*)( this + 0x4b0 );
            local_78 = 6;
            local_58 = *(undefined8*)( this + 0x4b8 );
            local_98[0] = 0xb;
            local_90 = 0;
            local_88 = 0;
            if (*(code**)( this + 0x2f8 ) == (code*)0x0) {
               iVar3 = -0xc;
            }
 else {
               iVar3 = ( **(code**)( this + 0x2f8 ) )(*(undefined8*)( this + 0xf8 ), &local_78, local_98, *(undefined4*)( this + 0x4e0 ), &local_bc, *(undefined8*)( this + 0x4e8 ));
               if (-1 < iVar3) {
                  if (local_bc != 0) {
                     uVar5 = 0;
                     LAB_0011433c:if (( (uint)local_88 & 3 ) != 3) goto LAB_00114330;
                     if (( local_bc - (int)uVar5 & 1 ) == 0) goto LAB_00114360;
                     for (uVar5 = uVar5 + 1; local_bc != uVar5; uVar5 = uVar5 + 2) {
                        LAB_00114360:}LAB_00114370:if (OVar10 != this[0x511]) {
                           this[0x511] = OVar10;
                           if (OVar10 != (OpenXRAPI)0x0) goto LAB_00114564;
                           cVar2 = is_print_verbose_enabled();
                           pcVar8 = "OpenXR View pose became invalid";
                           if (cVar2 == '\0') goto LAB_0011439e;
                           goto LAB_0011457d;
                        }

                        goto LAB_0011439e;
                     }

                     if (this[0x511] == (OpenXRAPI)0x0) {
                        this[0x511] = (OpenXRAPI)0x1;
                        LAB_00114564:cVar2 = is_print_verbose_enabled();
                        if (cVar2 != '\0') {
                           pcVar8 = "OpenXR View pose became valid";
                           LAB_0011457d:Variant::Variant((Variant*)local_48, pcVar8);
                           stringify_variants((Variant*)&local_a8);
                           __print_line((String*)&local_a8);
                           pcVar8 = local_a8;
                           if (local_a8 != (char*)0x0) {
                              LOCK();
                              plVar4 = (long*)( local_a8 + -0x10 );
                              *plVar4 = *plVar4 + -1;
                              UNLOCK();
                              if (*plVar4 == 0) {
                                 local_a8 = (char*)0x0;
                                 Memory::free_static(pcVar8 + -0x10, false);
                              }

                           }

                           if (Variant::needs_deinit[(int)local_48[0]] != '\0') {
                              Variant::_clear_internal();
                           }

                        }

                     }

                     LAB_0011439e:lVar1 = *(long*)( this + 0x4c8 );
                     *(long*)( this + 0x4c8 ) = lVar1 + 1;
                     String::num_uint64(( ulong ) & local_b0, (int)( lVar1 + 1 ), true);
                     local_a8 = "Session Frame ";
                     local_b8 = 0;
                     local_a0 = 0xe;
                     String::parse_latin1((StrRange*)&local_b8);
                     String::operator +((String*)&local_a8, (String*)&local_b8);
                     begin_debug_label_region((String*)this);
                     pcVar8 = local_a8;
                     if (local_a8 != (char*)0x0) {
                        LOCK();
                        plVar4 = (long*)( local_a8 + -0x10 );
                        *plVar4 = *plVar4 + -1;
                        UNLOCK();
                        if (*plVar4 == 0) {
                           local_a8 = (char*)0x0;
                           Memory::free_static(pcVar8 + -0x10, false);
                        }

                     }

                     lVar1 = local_b8;
                     if (local_b8 != 0) {
                        LOCK();
                        plVar4 = (long*)( local_b8 + -0x10 );
                        *plVar4 = *plVar4 + -1;
                        UNLOCK();
                        if (*plVar4 == 0) {
                           local_b8 = 0;
                           Memory::free_static((void*)( lVar1 + -0x10 ), false);
                        }

                     }

                     lVar1 = local_b0;
                     if (local_b0 != 0) {
                        LOCK();
                        plVar4 = (long*)( local_b0 + -0x10 );
                        *plVar4 = *plVar4 + -1;
                        UNLOCK();
                        if (*plVar4 == 0) {
                           local_b0 = 0;
                           Memory::free_static((void*)( lVar1 + -0x10 ), false);
                        }

                     }

                     local_a8 = (char*)CONCAT44(local_a8._4_4_, 0x2e);
                     local_a0 = 0;
                     if (*(code**)( this + 0x1f0 ) == (code*)0x0) {
                        iVar3 = -0xc;
                     }
 else {
                        iVar3 = ( **(code**)( this + 0x1f0 ) )(*(undefined8*)( this + 0xf8 ), (String*)&local_a8);
                        if (-1 < iVar3) {
                           this[0x4aa] = (OpenXRAPI)0x0;
                           goto LAB_00114166;
                        }

                     }

                     get_error_string(&local_b0, this, iVar3);
                     Variant::Variant((Variant*)local_48, "OpenXR: failed to being frame [");
                     print_line<String,char_const*>((Vector2*)local_48, &local_b0, &_LC164);
                     if (Variant::needs_deinit[(int)local_48[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     lVar1 = local_b0;
                     if (local_b0 != 0) {
                        LOCK();
                        plVar4 = (long*)( local_b0 + -0x10 );
                        *plVar4 = *plVar4 + -1;
                        UNLOCK();
                        if (*plVar4 == 0) {
                           local_b0 = 0;
                           Memory::free_static((void*)( lVar1 + -0x10 ), false);
                        }

                     }

                     goto LAB_00114166;
                  }

               }

               get_error_string(&local_a8, this, iVar3);
               Variant::Variant((Variant*)local_48, "OpenXR: Couldn\'t locate views [");
               print_line<String,char_const*>((Vector2*)local_48, &local_a8, &_LC164);
               if (Variant::needs_deinit[(int)local_48[0]] != '\0') {
                  Variant::_clear_internal();
               }

               pcVar8 = local_a8;
               if (local_a8 != (char*)0x0) {
                  LOCK();
                  plVar4 = (long*)( local_a8 + -0x10 );
                  *plVar4 = *plVar4 + -1;
                  UNLOCK();
                  if (*plVar4 == 0) {
                     local_a8 = (char*)0x0;
                     Memory::free_static(pcVar8 + -0x10, false);
                  }

               }

            }

            LAB_00114166:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            LAB_00114757:/* WARNING: Subroutine does not return */__stack_chk_fail();
         }

         if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_00114757;
         pcVar8 = "Condition \"!rendering_server->is_on_render_thread()\" is true.";
      }

      uVar6 = 0x87a;
      LAB_00114619:_err_print_error("pre_render", "modules/openxr/openxr_api.cpp", uVar6, pcVar8, 0, 0);
      return;
      LAB_00114330:uVar5 = uVar5 + 1;
      OVar10 = (OpenXRAPI)0x0;
      if (local_bc == uVar5) goto LAB_00114370;
      goto LAB_0011433c;
   }

   /* OpenXRAPI::unregister_projection_views_extension(OpenXRExtensionWrapper*) */
   void OpenXRAPI::unregister_projection_views_extension(OpenXRAPI *this, OpenXRExtensionWrapper *param_1) {
      long lVar1;
      long lVar2;
      long lVar3;
      lVar1 = *(long*)( this + 0x50 );
      if (( lVar1 != 0 ) && ( lVar3= *(long *)(lVar1 + -8),0 < lVar3 )) {
         lVar2 = 0;
         do {
            if (*(OpenXRExtensionWrapper**)( lVar1 + lVar2 * 8 ) == param_1) {
               if (lVar3 <= lVar2) {
                  _err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, lVar2, lVar3, "p_index", "size()", "", false, false);
                  return;
               }

               CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( this + 0x50 ));
               lVar1 = *(long*)( this + 0x50 );
               if (lVar1 == 0) {
                  lVar3 = -1;
               }
 else {
                  lVar3 = *(long*)( lVar1 + -8 ) + -1;
                  if (lVar2 < lVar3) {
                     memmove((void*)( lVar1 + lVar2 * 8 ), (void*)( lVar1 + 8 + lVar2 * 8 ), ( lVar3 - lVar2 ) * 8);
                  }

               }

               CowData<OpenXRExtensionWrapper*>::resize<false>((CowData<OpenXRExtensionWrapper*>*)( this + 0x50 ), lVar3);
               return;
            }

            lVar2 = lVar2 + 1;
         }
 while ( lVar3 != lVar2 );
         return;
      }

      return;
   }

   /* OpenXRAPI::cleanup_extension_wrappers() */
   void OpenXRAPI::cleanup_extension_wrappers(void) {
      long *plVar1;
      char cVar2;
      Object *pOVar3;
      undefined8 *puVar4;
      undefined8 *puVar5;
      CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
      puVar4 = (undefined8*)registered_extension_wrappers._8_8_;
      CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
      puVar5 = (undefined8*)registered_extension_wrappers._8_8_;
      if (registered_extension_wrappers._8_8_ != 0) {
         puVar5 = (undefined8*)( registered_extension_wrappers._8_8_ + *(long*)( registered_extension_wrappers._8_8_ + -8 ) * 8 );
      }

      for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
         while (( plVar1 = (long*)*puVar4 ),plVar1 != (long*)0x0 && ( pOVar3 = (Object*)__dynamic_cast(plVar1, &OpenXRExtensionWrapper::typeinfo, &OpenXRExtensionWrapperExtension::typeinfo, 0x178) ),pOVar3 != (Object*)0x0) {
            cVar2 = predelete_handler(pOVar3);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
               Memory::free_static(pOVar3, false);
            }

            puVar4 = puVar4 + 1;
            if (puVar5 == puVar4) goto LAB_0011491e;
         }
;
         ( **(code**)( *plVar1 + 0x108 ) )(plVar1);
         Memory::free_static(plVar1, false);
      }

      LAB_0011491e:CowData<OpenXRExtensionWrapper*>::resize<false>((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ), 0);
      return;
   }

   /* Vector<OpenXRExtensionWrapper*>::push_back(OpenXRExtensionWrapper*) [clone .isra.0] */
   void Vector<OpenXRExtensionWrapper*>::push_back(Vector<OpenXRExtensionWrapper*> *this, OpenXRExtensionWrapper *param_1) {
      int iVar1;
      long lVar2;
      long lVar3;
      if (*(long*)( this + 8 ) == 0) {
         lVar2 = 1;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
      }

      iVar1 = CowData<OpenXRExtensionWrapper*>::resize<false>((CowData<OpenXRExtensionWrapper*>*)( this + 8 ), lVar2);
      if (iVar1 == 0) {
         if (*(long*)( this + 8 ) == 0) {
            lVar3 = -1;
            lVar2 = 0;
         }
 else {
            lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
            lVar3 = lVar2 + -1;
            if (-1 < lVar3) {
               CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( this + 8 ));
               *(OpenXRExtensionWrapper**)( *(long*)( this + 8 ) + lVar3 * 8 ) = param_1;
               return;
            }

         }

         _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
         return;
      }

      _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
      return;
   }

   /* OpenXRAPI::register_extension_wrapper(OpenXRExtensionWrapper*) */
   void OpenXRAPI::register_extension_wrapper(OpenXRExtensionWrapper *param_1) {
      Vector<OpenXRExtensionWrapper*>::push_back((Vector<OpenXRExtensionWrapper*>*)registered_extension_wrappers, param_1);
      return;
   }

   /* OpenXRAPI::register_projection_views_extension(OpenXRExtensionWrapper*) */
   void OpenXRAPI::register_projection_views_extension(OpenXRAPI *this, OpenXRExtensionWrapper *param_1) {
      Vector<OpenXRExtensionWrapper*>::push_back((Vector<OpenXRExtensionWrapper*>*)( this + 0x48 ), param_1);
      return;
   }

   /* OpenXRAPI::unregister_extension_wrapper(OpenXRExtensionWrapper*) */
   void OpenXRAPI::unregister_extension_wrapper(OpenXRExtensionWrapper *param_1) {
      long lVar1;
      long lVar2;
      if (( registered_extension_wrappers._8_8_ != 0 ) && ( lVar2= *(long *)(registered_extension_wrappers._8_8_ + -8),0 < lVar2 )) {
         lVar1 = 0;
         do {
            if (*(OpenXRExtensionWrapper**)( registered_extension_wrappers._8_8_ + lVar1 * 8 ) == param_1) {
               if (lVar2 <= lVar1) {
                  _err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, lVar1, lVar2, "p_index", "size()", "", false, false);
                  return;
               }

               CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
               if (registered_extension_wrappers._8_8_ == 0) {
                  lVar2 = -1;
               }
 else {
                  lVar2 = *(long*)( registered_extension_wrappers._8_8_ + -8 ) + -1;
                  if (lVar1 < lVar2) {
                     memmove((void*)( registered_extension_wrappers._8_8_ + lVar1 * 8 ), (void*)( registered_extension_wrappers._8_8_ + 8 + lVar1 * 8 ), ( lVar2 - lVar1 ) * 8);
                  }

               }

               CowData<OpenXRExtensionWrapper*>::resize<false>((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ), lVar2);
               return;
            }

            lVar1 = lVar1 + 1;
         }
 while ( lVar2 != lVar1 );
         return;
      }

      return;
   }

   /* Vector<OpenXRAPI::OrderedCompositionLayer>::push_back(OpenXRAPI::OrderedCompositionLayer) [clone
   .isra.0] */
   void Vector<OpenXRAPI::OrderedCompositionLayer>::push_back(long param_1, undefined8 param_2, undefined8 param_3) {
      int iVar1;
      undefined8 *puVar2;
      long lVar3;
      long lVar4;
      if (*(long*)( param_1 + 8 ) == 0) {
         lVar4 = 1;
      }
 else {
         lVar4 = *(long*)( *(long*)( param_1 + 8 ) + -8 ) + 1;
      }

      iVar1 = CowData<OpenXRAPI::OrderedCompositionLayer>::resize<false>((CowData<OpenXRAPI::OrderedCompositionLayer>*)( param_1 + 8 ), lVar4);
      if (iVar1 == 0) {
         if (*(long*)( param_1 + 8 ) == 0) {
            lVar3 = -1;
            lVar4 = 0;
         }
 else {
            lVar4 = *(long*)( *(long*)( param_1 + 8 ) + -8 );
            lVar3 = lVar4 + -1;
            if (-1 < lVar3) {
               CowData<OpenXRAPI::OrderedCompositionLayer>::_copy_on_write((CowData<OpenXRAPI::OrderedCompositionLayer>*)( param_1 + 8 ));
               puVar2 = (undefined8*)( lVar3 * 0x10 + *(long*)( param_1 + 8 ) );
               *puVar2 = param_2;
               puVar2[1] = param_3;
               return;
            }

         }

         _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar4, "p_index", "size()", "", false, false);
         return;
      }

      _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
      return;
   }

   /* OpenXRAPI::end_frame() */
   void OpenXRAPI::end_frame(OpenXRAPI *this) {
      uint uVar1;
      uint uVar2;
      code *pcVar3;
      undefined8 uVar4;
      undefined8 uVar5;
      char cVar6;
      int iVar7;
      int iVar8;
      long *plVar9;
      long lVar10;
      undefined8 *puVar11;
      undefined8 *puVar12;
      undefined8 uVar13;
      ulong uVar14;
      long lVar15;
      long lVar16;
      uint uVar17;
      char *pcVar18;
      OpenXRAPI OVar19;
      ulong uVar20;
      undefined8 *puVar21;
      long in_FS_OFFSET;
      undefined8 uVar22;
      CowData<char32_t> local_b0[8];
      Vector<OpenXRAPI::OrderedCompositionLayer> local_a8[8];
      undefined8 *local_a0;
      long local_98;
      long local_90;
      undefined4 local_88;
      undefined4 uStack_84;
      undefined4 uStack_80;
      undefined4 uStack_7c;
      undefined4 uStack_78;
      undefined4 uStack_74;
      undefined4 uStack_70;
      undefined4 uStack_6c;
      undefined4 uStack_68;
      undefined4 local_64;
      undefined8 local_58;
      undefined8 local_50[2];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (*(long*)( this + 0xf8 ) == 0) {
         if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_001157c3;
         uVar13 = 0x930;
         pcVar18 = "Condition \"session == nullptr\" is true.";
         goto LAB_00115179;
      }

      plVar9 = (long*)RenderingServer::get_singleton();
      if (plVar9 == (long*)0x0) {
         if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_001157c3;
         pcVar18 = "Parameter \"rendering_server\" is null.";
      }
 else {
         cVar6 = ( **(code**)( *plVar9 + 0x12d8 ) )(plVar9);
         if (cVar6 != '\0') {
            if (this[0x4a8] != (OpenXRAPI)0x0) {
               if (( this[0x4a9] != (OpenXRAPI)0x0 ) && ( this[0x511] != (OpenXRAPI)0x0 )) {
                  if (this[0x4aa] == (OpenXRAPI)0x0) {
                     pcVar18 = "OpenXR: No viewport was marked with use_xr, there is no rendered output!";
                  }
 else {
                     if (this[0x574] != (OpenXRAPI)0x0) goto LAB_00114d07;
                     pcVar18 = "OpenXR: No swapchain could be acquired to render to!";
                  }

                  Variant::Variant((Variant*)&local_58, pcVar18);
                  stringify_variants((Variant*)&local_88);
                  __print_line((String*)&local_88);
                  if (CONCAT44(uStack_84, local_88) != 0) {
                     LOCK();
                     plVar9 = (long*)( CONCAT44(uStack_84, local_88) + -0x10 );
                     *plVar9 = *plVar9 + -1;
                     UNLOCK();
                     if (*plVar9 == 0) {
                        lVar10 = CONCAT44(uStack_84, local_88);
                        local_88 = 0;
                        uStack_84 = 0;
                        Memory::free_static((void*)( lVar10 + -0x10 ), false);
                     }

                  }

                  if (Variant::needs_deinit[(int)local_58] != '\0') {
                     Variant::_clear_internal();
                  }

               }

               LAB_00114d07:local_58 = 0;
               local_50[0] = 0;
               cVar6 = Vector2i::operator !=((Vector2i*)( this + 0x4d0 ), (Vector2i*)&local_58);
               if (( cVar6 == '\0' ) && ( cVar6 = Vector2i::operator !=((Vector2i*)( this + 0x4d8 ), (Vector2i*)local_50) ),cVar6 == '\0') {
                  uVar13 = *(undefined8*)( this + 0x558 );
                  uVar22 = 0;
               }
 else {
                  uVar22 = *(undefined8*)( this + 0x4d0 );
                  uVar13 = *(undefined8*)( this + 0x4d8 );
               }

               lVar10 = *(long*)( this + 0x4f8 );
               lVar15 = ( ulong ) * (uint*)( this + 0x4f0 ) * 0x60 + lVar10;
               if (lVar10 != lVar15) {
                  lVar16 = lVar10;
                  if (( (int)lVar15 - (int)lVar10 & 0x20U ) != 0) {
                     *(undefined8*)( lVar10 + 0x48 ) = uVar22;
                     *(undefined8*)( lVar10 + 0x50 ) = uVar13;
                     lVar16 = lVar10 + 0x60;
                     if (lVar10 + 0x60 == lVar15) goto LAB_00114d93;
                  }

                  do {
                     *(undefined8*)( lVar16 + 0x48 ) = uVar22;
                     *(undefined8*)( lVar16 + 0x50 ) = uVar13;
                     lVar10 = lVar16 + 0xc0;
                     *(undefined8*)( lVar16 + 0xa8 ) = uVar22;
                     *(undefined8*)( lVar16 + 0xb0 ) = uVar13;
                     lVar16 = lVar10;
                  }
 while ( lVar10 != lVar15 );
               }

               LAB_00114d93:if (this[0x510] != (OpenXRAPI)0x0) {
                  OpenXRCompositionLayerDepthExtension::get_singleton();
                  cVar6 = OpenXRCompositionLayerDepthExtension::is_available();
                  if (( cVar6 != '\0' ) && ( *(uint*)( this + 0x500 ) != 0 )) {
                     lVar15 = *(long*)( this + 0x508 );
                     uVar20 = ( ulong ) * (uint*)( this + 0x500 ) * 0x40;
                     lVar10 = lVar15 + uVar20;
                     if (( uVar20 & 0x40 ) != 0) {
                        *(undefined8*)( lVar15 + 0x18 ) = uVar22;
                        *(undefined8*)( lVar15 + 0x20 ) = uVar13;
                        lVar15 = lVar15 + 0x40;
                        if (lVar10 == lVar15) goto LAB_00114da0;
                     }

                     do {
                        *(undefined8*)( lVar15 + 0x18 ) = uVar22;
                        *(undefined8*)( lVar15 + 0x20 ) = uVar13;
                        lVar16 = lVar15 + 0x80;
                        *(undefined8*)( lVar15 + 0x58 ) = uVar22;
                        *(undefined8*)( lVar15 + 0x60 ) = uVar13;
                        lVar15 = lVar16;
                     }
 while ( lVar10 != lVar16 );
                  }

               }

               LAB_00114da0:if (( ( this[0x4a9] == (OpenXRAPI)0x0 ) || ( this[0x511] == (OpenXRAPI)0x0 ) ) || ( OVar19 = OVar19 == (OpenXRAPI)0x0 )) {
                  local_64 = 0;
                  uStack_6c = 0;
                  uStack_68 = 0;
                  uStack_84 = 0;
                  uStack_80 = 0;
                  uStack_7c = 0;
                  uStack_78 = ( undefined4 ) * (undefined8*)( this + 0x4b0 );
                  uStack_74 = ( undefined4 )(( ulong ) * (undefined8*)( this + 0x4b0 ) >> 0x20);
                  uStack_70 = *(undefined4*)( this + 0xac );
                  local_88 = 0xc;
                  if (*(code**)( this + 0x268 ) == (code*)0x0) {
                     iVar7 = -0xc;
                  }
 else {
                     iVar7 = ( **(code**)( this + 0x268 ) )(*(undefined8*)( this + 0xf8 ), &local_88);
                     if (-1 < iVar7) {
                        lVar10 = OpenXRDebugUtilsExtension::get_singleton();
                        if (( lVar10 != 0 ) && ( cVar6 = OpenXRDebugUtilsExtension::get_active() ),cVar6 != '\0') {
                           OpenXRDebugUtilsExtension::end_debug_label_region();
                        }

                        goto LAB_00114e98;
                     }

                  }

                  get_error_string(&local_98, this, iVar7);
                  Variant::Variant((Variant*)&local_58, "OpenXR: rendering skipped and failed to end frame! [");
                  print_line<String,char_const*>((Variant*)&local_58, &local_98, &_LC164);
                  if (Variant::needs_deinit[(int)local_58] != '\0') {
                     Variant::_clear_internal();
                  }

                  lVar10 = local_98;
                  if (local_98 != 0) {
                     LOCK();
                     plVar9 = (long*)( local_98 + -0x10 );
                     *plVar9 = *plVar9 + -1;
                     UNLOCK();
                     if (*plVar9 == 0) {
                        local_98 = 0;
                        Memory::free_static((void*)( lVar10 + -0x10 ), false);
                     }

                  }

               }
 else {
                  OpenXRSwapChainInfo::release((OpenXRSwapChainInfo*)( this + 0x560 ));
                  if (this[0x58c] != (OpenXRAPI)0x0) {
                     OpenXRSwapChainInfo::release((OpenXRSwapChainInfo*)( this + 0x578 ));
                  }

                  uVar1 = *(uint*)( this + 0x4e0 );
                  if (uVar1 != 0) {
                     uVar2 = *(uint*)( this + 0x4f0 );
                     lVar10 = 0;
                     uVar17 = 0;
                     puVar11 = (undefined8*)( *(long*)( this + 0x4e8 ) + 0x10 );
                     do {
                        if (uVar17 == uVar2) {
                           uVar14 = (ulong)uVar17;
                           uVar20 = uVar14;
                           goto LAB_00114f85;
                        }

                        uVar13 = puVar11[1];
                        uVar22 = *(undefined8*)( (long)puVar11 + 0x1c );
                        uVar4 = *(undefined8*)( (long)puVar11 + 0x24 );
                        uVar17 = uVar17 + 1;
                        lVar15 = *(long*)( this + 0x4f8 ) + lVar10;
                        lVar10 = lVar10 + 0x60;
                        *(undefined8*)( lVar15 + 0x10 ) = *puVar11;
                        *(undefined8*)( lVar15 + 0x18 ) = uVar13;
                        uVar13 = *(undefined8*)( (long)puVar11 + 0xc );
                        uVar5 = *(undefined8*)( (long)puVar11 + 0x14 );
                        *(undefined8*)( lVar15 + 0x2c ) = uVar22;
                        *(undefined8*)( lVar15 + 0x34 ) = uVar4;
                        *(undefined8*)( lVar15 + 0x1c ) = uVar13;
                        *(undefined8*)( lVar15 + 0x24 ) = uVar5;
                        puVar11 = puVar11 + 8;
                     }
 while ( uVar17 != uVar1 );
                  }

                  local_a0 = (undefined8*)0x0;
                  CowData<OpenXRCompositionLayerProvider*>::_copy_on_write((CowData<OpenXRCompositionLayerProvider*>*)( this + 0x40 ));
                  puVar12 = *(undefined8**)( this + 0x40 );
                  CowData<OpenXRCompositionLayerProvider*>::_copy_on_write((CowData<OpenXRCompositionLayerProvider*>*)( this + 0x40 ));
                  puVar11 = *(undefined8**)( this + 0x40 );
                  if (puVar11 != (undefined8*)0x0) {
                     puVar11 = puVar11 + puVar11[-1];
                  }

                  if (puVar12 == puVar11) {
                     LAB_00115676:uVar13 = 1;
                     if (*(int*)( this + 0xac ) != 1) goto LAB_0011532c;
                  }
 else {
                     do {
                        plVar9 = (long*)*puVar12;
                        for (iVar7 = 0; iVar8 = ( **(code**)*plVar9 )(plVar9),iVar7 < iVar8; iVar7 = iVar7 + 1) {
                           lVar10 = ( **(code**)( *plVar9 + 8 ) )(plVar9, iVar7);
                           iVar8 = ( **(code**)( *plVar9 + 0x10 ) )(plVar9, iVar7);
                           if (lVar10 != 0) {
                              Vector<OpenXRAPI::OrderedCompositionLayer>::push_back(local_a8, lVar10, iVar8);
                              if (iVar8 == 0) {
                                 if (end_frame()::first_print != '\0') {
                                    _err_print_error("end_frame", "modules/openxr/openxr_api.cpp", 0x985, "Composition layer returned sort order 0, it may be overwritten by projection layer.", 1, 1);
                                    end_frame()::first_print =
                                    '\0';
                                 }

                              }
 else if (iVar8 < 0) {
                                 OVar19 = (OpenXRAPI)0x0;
                              }

                           }

                        }

                        puVar12 = puVar12 + 1;
                     }
 while ( puVar11 != puVar12 );
                     if (OVar19 != (OpenXRAPI)0x0) goto LAB_00115676;
                     LAB_0011532c:uVar13 = 3;
                  }

                  *(undefined8*)( this + 0x538 ) = uVar13;
                  *(undefined8*)( this + 0x540 ) = *(undefined8*)( this + 0x4b8 );
                  *(int*)( this + 0x548 ) = *(int*)( this + 0x4f0 );
                  *(undefined8*)( this + 0x550 ) = *(undefined8*)( this + 0x4f8 );
                  if (( ( *(long*)( this + 0x50 ) != 0 ) && ( 0 < *(long*)( *(long*)( this + 0x50 ) + -8 ) ) ) && ( *(int*)( this + 0x4f0 ) != 0 )) {
                     uVar14 = 0;
                     do {
                        CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( this + 0x50 ));
                        puVar12 = *(undefined8**)( this + 0x50 );
                        CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( this + 0x50 ));
                        puVar11 = *(undefined8**)( this + 0x50 );
                        if (puVar11 != (undefined8*)0x0) {
                           puVar11 = puVar11 + puVar11[-1];
                        }

                        if (puVar11 == puVar12) {
                           lVar10 = 0;
                        }
 else {
                           lVar10 = 0;
                           do {
                              lVar15 = ( **(code**)( *(long*)*puVar12 + 0x30 ) )((long*)*puVar12, uVar14 & 0xffffffff, lVar10);
                              if (lVar15 != 0) {
                                 lVar10 = lVar15;
                              }

                              puVar12 = puVar12 + 1;
                           }
 while ( puVar11 != puVar12 );
                        }

                        uVar1 = *(uint*)( this + 0x4f0 );
                        uVar20 = (ulong)uVar1;
                        if (uVar1 <= (uint)uVar14) {
                           uVar14 = uVar14 & 0xffffffff;
                           LAB_00114f85:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar14, uVar20, "p_index", "count", "", false, true);
                           _err_flush_stdout();
                           /* WARNING: Does not return */
                           pcVar3 = (code*)invalidInstructionException();
                           ( *pcVar3 )();
                        }

                        uVar20 = uVar14 + 1;
                        *(long*)( uVar14 * 0x60 + *(long*)( this + 0x4f8 ) + 8 ) = lVar10;
                        uVar14 = uVar20;
                     }
 while ( (uint)uVar20 < uVar1 );
                  }

                  Vector<OpenXRAPI::OrderedCompositionLayer>::push_back(local_a8, this + 0x528, 0);
                  Vector<OpenXRAPI::OrderedCompositionLayer>::sort_custom<OpenXRAPI::OrderedCompositionLayer,true>(local_a8);
                  local_90 = 0;
                  CowData<OpenXRAPI::OrderedCompositionLayer>::_copy_on_write((CowData<OpenXRAPI::OrderedCompositionLayer>*)&local_a0);
                  puVar11 = local_a0;
                  CowData<OpenXRAPI::OrderedCompositionLayer>::_copy_on_write((CowData<OpenXRAPI::OrderedCompositionLayer>*)&local_a0);
                  puVar12 = local_a0;
                  if (local_a0 == (undefined8*)0x0) {
                     puVar21 = (undefined8*)0x0;
                  }
 else {
                     puVar21 = local_a0 + local_a0[-1] * 2;
                  }

                  if (puVar11 == puVar21) {
                     lVar10 = 0;
                     uStack_78 = ( undefined4 ) * (undefined8*)( this + 0x4b0 );
                     uStack_74 = ( undefined4 )(( ulong ) * (undefined8*)( this + 0x4b0 ) >> 0x20);
                     uStack_70 = *(undefined4*)( this + 0xac );
                     uStack_6c = 0;
                  }
 else {
                     lVar10 = 0;
                     do {
                        uVar13 = *puVar11;
                        if (lVar10 == 0) {
                           lVar10 = 1;
                        }
 else {
                           lVar10 = *(long*)( lVar10 + -8 ) + 1;
                        }

                        iVar7 = CowData<XrCompositionLayerBaseHeader_const*>::resize<false>((CowData<XrCompositionLayerBaseHeader_const*>*)&local_90, lVar10);
                        lVar10 = local_90;
                        if (iVar7 == 0) {
                           if (local_90 == 0) {
                              lVar16 = -1;
                              lVar15 = 0;
                           }
 else {
                              lVar15 = *(long*)( local_90 + -8 );
                              lVar16 = lVar15 + -1;
                              if (-1 < lVar16) {
                                 CowData<XrCompositionLayerBaseHeader_const*>::_copy_on_write((CowData<XrCompositionLayerBaseHeader_const*>*)&local_90);
                                 *(undefined8*)( local_90 + lVar16 * 8 ) = uVar13;
                                 lVar10 = local_90;
                                 goto LAB_00115515;
                              }

                           }

                           _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar16, lVar15, "p_index", "size()", "", false, false);
                        }
 else {
                           _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
                           lVar10 = local_90;
                        }

                        LAB_00115515:puVar11 = puVar11 + 2;
                     }
 while ( puVar21 != puVar11 );
                     uStack_78 = ( undefined4 ) * (undefined8*)( this + 0x4b0 );
                     uStack_74 = ( undefined4 )(( ulong ) * (undefined8*)( this + 0x4b0 ) >> 0x20);
                     uStack_70 = *(undefined4*)( this + 0xac );
                     if (lVar10 == 0) {
                        uStack_6c = 0;
                     }
 else {
                        uStack_6c = *(undefined4*)( lVar10 + -8 );
                     }

                  }

                  uStack_80 = 0;
                  uStack_84 = 0;
                  uStack_7c = 0;
                  local_88 = 0xc;
                  uStack_68 = (undefined4)lVar10;
                  local_64 = ( undefined4 )((ulong)lVar10 >> 0x20);
                  if (*(code**)( this + 0x268 ) == (code*)0x0) {
                     iVar7 = -0xc;
                     LAB_0011571a:get_error_string(local_b0, this, iVar7);
                     Variant::Variant((Variant*)&local_58, "OpenXR: failed to end frame! [");
                     print_line<String,char_const*>((Variant*)&local_58, local_b0, &_LC164);
                     if (Variant::needs_deinit[(int)local_58] != '\0') {
                        Variant::_clear_internal();
                     }

                     CowData<char32_t>::_unref(local_b0);
                  }
 else {
                     iVar7 = ( **(code**)( this + 0x268 ) )(*(undefined8*)( this + 0xf8 ));
                     if (iVar7 < 0) goto LAB_0011571a;
                     lVar15 = OpenXRDebugUtilsExtension::get_singleton();
                     if (( lVar15 != 0 ) && ( cVar6 = OpenXRDebugUtilsExtension::get_active() ),cVar6 != '\0') {
                        OpenXRDebugUtilsExtension::end_debug_label_region();
                     }

                  }

                  if (lVar10 != 0) {
                     LOCK();
                     plVar9 = (long*)( lVar10 + -0x10 );
                     *plVar9 = *plVar9 + -1;
                     UNLOCK();
                     puVar12 = local_a0;
                     if (*plVar9 == 0) {
                        Memory::free_static((void*)( local_90 + -0x10 ), false);
                        puVar12 = local_a0;
                     }

                  }

                  if (puVar12 != (undefined8*)0x0) {
                     LOCK();
                     plVar9 = puVar12 + -2;
                     *plVar9 = *plVar9 + -1;
                     UNLOCK();
                     if (*plVar9 == 0) {
                        Memory::free_static(local_a0 + -2, false);
                     }

                  }

               }

            }

            LAB_00114e98:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            LAB_001157c3:/* WARNING: Subroutine does not return */__stack_chk_fail();
         }

         if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_001157c3;
         pcVar18 = "Condition \"!rendering_server->is_on_render_thread()\" is true.";
      }

      uVar13 = 0x933;
      LAB_00115179:_err_print_error("end_frame", "modules/openxr/openxr_api.cpp", uVar13, pcVar18, 0, 0);
      return;
   }

   /* CowData<CharString>::_copy_on_write() [clone .isra.0] */
   void CowData<CharString>::_copy_on_write(CowData<CharString> *this) {
      CowData *pCVar1;
      long lVar2;
      long lVar3;
      code *pcVar4;
      undefined8 *puVar5;
      long lVar6;
      ulong uVar7;
      CowData<char> *this_00;
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
         this_00 = (CowData<char>*)( puVar5 + 2 );
         if (lVar2 != 0) {
            do {
               lVar3 = *(long*)this;
               *(undefined8*)this_00 = 0;
               pCVar1 = (CowData*)( lVar3 + lVar6 * 8 );
               if (*(long*)pCVar1 != 0) {
                  CowData<char>::_ref(this_00, pCVar1);
               }

               lVar6 = lVar6 + 1;
               this_00 = this_00 + 8;
            }
 while ( lVar2 != lVar6 );
         }

         _unref(this);
         *(CowData<char>**)this = (CowData<char>*)( puVar5 + 2 );
         return;
      }

      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   /* OpenXRAPI::destroy_instance() */
   void OpenXRAPI::destroy_instance(OpenXRAPI *this) {
      long *plVar1;
      undefined8 *puVar2;
      undefined8 *puVar3;
      if (*(int*)( this + 0x160 ) != 0) {
         *(undefined4*)( this + 0x160 ) = 0;
      }

      if (*(int*)( this + 0x58 ) != 0) {
         *(undefined4*)( this + 0x58 ) = 0;
      }

      CowData<XrEnvironmentBlendMode>::resize<false>((CowData<XrEnvironmentBlendMode>*)( this + 0xc0 ), 0);
      if (*(long*)( this + 0xd0 ) != 0) {
         CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
         puVar2 = (undefined8*)registered_extension_wrappers._8_8_;
         CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
         puVar3 = (undefined8*)registered_extension_wrappers._8_8_;
         if (registered_extension_wrappers._8_8_ != 0) {
            puVar3 = (undefined8*)( registered_extension_wrappers._8_8_ + *(long*)( registered_extension_wrappers._8_8_ + -8 ) * 8 );
         }

         for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
            ( **(code**)( *(long*)*puVar2 + 0x58 ) )();
         }

         if (*(code**)( this + 0x248 ) != (code*)0x0) {
            ( **(code**)( this + 0x248 ) )(*(undefined8*)( this + 0xd0 ));
         }

         *(undefined8*)( this + 0xd0 ) = 0;
      }

      if (( *(long*)( this + 0x30 ) != 0 ) && ( *(long*)( *(long*)( this + 0x30 ) + -8 ) != 0 )) {
         CowData<CharString>::_unref((CowData<CharString>*)( this + 0x30 ));
      }

      if (*(OpenXRExtensionWrapper**)( this + 0x148 ) != (OpenXRExtensionWrapper*)0x0) {
         unregister_extension_wrapper(*(OpenXRExtensionWrapper**)( this + 0x148 ));
         plVar1 = *(long**)( this + 0x148 );
         ( **(code**)( *plVar1 + 0x108 ) )(plVar1);
         Memory::free_static(plVar1, false);
         *(undefined8*)( this + 0x148 ) = 0;
      }

      return;
   }

   /* OpenXRAPI::finish() */
   void OpenXRAPI::finish(OpenXRAPI *this) {
      destroy_session(this);
      destroy_instance(this);
      return;
   }

   /* OpenXRAPI::unregister_composition_layer_provider(OpenXRCompositionLayerProvider*) */
   void OpenXRAPI::unregister_composition_layer_provider(OpenXRAPI *this, OpenXRCompositionLayerProvider *param_1) {
      long lVar1;
      long lVar2;
      long lVar3;
      lVar1 = *(long*)( this + 0x40 );
      if (( lVar1 != 0 ) && ( lVar3= *(long *)(lVar1 + -8),0 < lVar3 )) {
         lVar2 = 0;
         do {
            if (*(OpenXRCompositionLayerProvider**)( lVar1 + lVar2 * 8 ) == param_1) {
               if (lVar3 <= lVar2) {
                  _err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, lVar2, lVar3, "p_index", "size()", "", false, false);
                  return;
               }

               CowData<OpenXRCompositionLayerProvider*>::_copy_on_write((CowData<OpenXRCompositionLayerProvider*>*)( this + 0x40 ));
               lVar1 = *(long*)( this + 0x40 );
               if (lVar1 == 0) {
                  lVar3 = -1;
               }
 else {
                  lVar3 = *(long*)( lVar1 + -8 ) + -1;
                  if (lVar2 < lVar3) {
                     memmove((void*)( lVar1 + lVar2 * 8 ), (void*)( lVar1 + 8 + lVar2 * 8 ), ( lVar3 - lVar2 ) * 8);
                  }

               }

               CowData<OpenXRCompositionLayerProvider*>::resize<false>((CowData<OpenXRCompositionLayerProvider*>*)( this + 0x40 ), lVar3);
               return;
            }

            lVar2 = lVar2 + 1;
         }
 while ( lVar3 != lVar2 );
         return;
      }

      return;
   }

   /* OpenXRAPI::register_composition_layer_provider(OpenXRCompositionLayerProvider*) */
   void OpenXRAPI::register_composition_layer_provider(OpenXRAPI *this, OpenXRCompositionLayerProvider *param_1) {
      int iVar1;
      long lVar2;
      long lVar3;
      if (*(long*)( this + 0x40 ) == 0) {
         lVar2 = 1;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 0x40 ) + -8 ) + 1;
      }

      iVar1 = CowData<OpenXRCompositionLayerProvider*>::resize<false>((CowData<OpenXRCompositionLayerProvider*>*)( this + 0x40 ), lVar2);
      if (iVar1 == 0) {
         if (*(long*)( this + 0x40 ) == 0) {
            lVar3 = -1;
            lVar2 = 0;
         }
 else {
            lVar2 = *(long*)( *(long*)( this + 0x40 ) + -8 );
            lVar3 = lVar2 + -1;
            if (-1 < lVar3) {
               CowData<OpenXRCompositionLayerProvider*>::_copy_on_write((CowData<OpenXRCompositionLayerProvider*>*)( this + 0x40 ));
               *(OpenXRCompositionLayerProvider**)( *(long*)( this + 0x40 ) + lVar3 * 8 ) = param_1;
               return;
            }

         }

         _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
         return;
      }

      _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
      return;
   }

   /* OpenXRAPI::~OpenXRAPI() */
   void OpenXRAPI::~OpenXRAPI(OpenXRAPI *this) {
      CowData<OpenXRCompositionLayerProvider*> *this_00;
      long *plVar1;
      long lVar2;
      uint uVar3;
      char *pcVar4;
      ulong uVar5;
      long *plVar6;
      undefined8 *puVar7;
      ulong uVar8;
      long lVar9;
      ulong uVar10;
      undefined8 *puVar11;
      long in_FS_OFFSET;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      this_00 = (CowData<OpenXRCompositionLayerProvider*>*)( this + 0x40 );
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      CowData<OpenXRCompositionLayerProvider*>::_copy_on_write(this_00);
      puVar7 = *(undefined8**)( this + 0x40 );
      CowData<OpenXRCompositionLayerProvider*>::_copy_on_write(this_00);
      puVar11 = *(undefined8**)( this + 0x40 );
      if (puVar11 != (undefined8*)0x0) {
         puVar11 = puVar11 + puVar11[-1];
      }

      for (; puVar7 != puVar11; puVar7 = puVar7 + 1) {
         plVar6 = (long*)*puVar7;
         ( **(code**)( *plVar6 + 0x18 ) )(plVar6);
         Memory::free_static(plVar6, false);
      }

      CowData<OpenXRCompositionLayerProvider*>::resize<false>(this_00, 0);
      if (*(int*)( this + 0x18 ) != 0) {
         *(undefined4*)( this + 0x18 ) = 0;
      }

      if (*(int*)( this + 8 ) != 0) {
         *(undefined4*)( this + 8 ) = 0;
      }

      singleton = 0;
      for (int i = 0; i < 3; i++) {
         if (*(void**)( this + ( -16*i + 1288 ) ) != (void*)0) {
            if (*(int*)( this + ( -16*i + 1280 ) ) != 0) {
               *(undefined4*)( this + ( -16*i + 1280 ) ) = 0;
            }

            Memory::free_static(*(void**)( this + ( -16*i + 1288 ) ), false);
         }

      }

      RID_Alloc<OpenXRAPI::InteractionProfile,true>::~RID_Alloc((RID_Alloc<OpenXRAPI::InteractionProfile,true>*)( this + 0x450 ));
      RID_Alloc<OpenXRAPI::Action,true>::~RID_Alloc((RID_Alloc<OpenXRAPI::Action,true>*)( this + 0x3f8 ));
      *(undefined***)( this + 0x3a0 ) = &PTR__RID_Alloc_00126478;
      uVar3 = *(uint*)( this + 0x3c0 );
      if (uVar3 == 0) {
         uVar5 = ( ulong ) * (uint*)( this + 0x3bc );
         uVar10 = ( ulong ) * (uint*)( this + 0x3b8 );
         puVar11 = *(undefined8**)( this + 0x3a8 );
         LAB_00115e9b:if ((uint)uVar10 <= (uint)uVar5) {
            lVar9 = 0;
            while (true) {
               Memory::free_static((void*)puVar11[lVar9], false);
               lVar2 = lVar9 * 8;
               lVar9 = lVar9 + 1;
               Memory::free_static(*(void**)( *(long*)( this + 0x3b0 ) + lVar2 ), false);
               if (( uint )(uVar5 / uVar10) <= (uint)lVar9) break;
               puVar11 = *(undefined8**)( this + 0x3a8 );
            }
;
            LAB_00115edd:puVar11 = *(undefined8**)( this + 0x3a8 );
         }

      }
 else {
         local_50 = 0;
         local_40 = 0x3b;
         local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
         String::parse_latin1((StrRange*)&local_50);
         vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
         print_error((String*)&local_48);
         pcVar4 = local_48;
         lVar9 = local_50;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar6 = (long*)( local_48 + -0x10 );
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar4 + -0x10, false);
               lVar9 = local_50;
            }

         }

         local_50 = lVar9;
         if (lVar9 != 0) {
            LOCK();
            plVar6 = (long*)( lVar9 + -0x10 );
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar9 + -0x10 ), false);
            }

         }

         uVar10 = ( ulong ) * (uint*)( this + 0x3b8 );
         puVar11 = *(undefined8**)( this + 0x3a8 );
         if (*(int*)( this + 0x3bc ) != 0) {
            uVar8 = 0;
            do {
               plVar6 = (long*)( ( uVar8 % uVar10 ) * 0x20 + puVar11[uVar8 / uVar10] );
               if (( -1 < (int)plVar6[3] ) && ( *plVar6 != 0 )) {
                  LOCK();
                  plVar1 = (long*)( *plVar6 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar9 = *plVar6;
                     *plVar6 = 0;
                     Memory::free_static((void*)( lVar9 + -0x10 ), false);
                  }

                  uVar10 = ( ulong ) * (uint*)( this + 0x3b8 );
                  puVar11 = *(undefined8**)( this + 0x3a8 );
               }

               uVar5 = ( ulong ) * (uint*)( this + 0x3bc );
               uVar8 = uVar8 + 1;
            }
 while ( uVar8 < uVar5 );
            goto LAB_00115e9b;
         }

         if (*(uint*)( this + 0x3b8 ) == 0) {
            Memory::free_static((void*)*puVar11, false);
            Memory::free_static((void*)**(undefined8**)( this + 0x3b0 ), false);
            goto LAB_00115edd;
         }

      }

      if (puVar11 != (undefined8*)0x0) {
         Memory::free_static(puVar11, false);
         Memory::free_static(*(void**)( this + 0x3b0 ), false);
      }

      *(undefined***)( this + 0x348 ) = &PTR__RID_Alloc_00126458;
      uVar3 = *(uint*)( this + 0x368 );
      if (uVar3 == 0) {
         uVar5 = ( ulong ) * (uint*)( this + 0x364 );
         uVar10 = ( ulong ) * (uint*)( this + 0x360 );
         puVar11 = *(undefined8**)( this + 0x350 );
         LAB_00116043:if ((uint)uVar5 < (uint)uVar10) goto LAB_0011608c;
         lVar9 = 0;
         while (true) {
            Memory::free_static((void*)puVar11[lVar9], false);
            lVar2 = lVar9 * 8;
            lVar9 = lVar9 + 1;
            Memory::free_static(*(void**)( *(long*)( this + 0x358 ) + lVar2 ), false);
            if (( uint )(uVar5 / uVar10) <= (uint)lVar9) break;
            puVar11 = *(undefined8**)( this + 0x350 );
         }
;
      }
 else {
         local_50 = 0;
         local_40 = 0x3b;
         local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
         String::parse_latin1((StrRange*)&local_50);
         vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
         print_error((String*)&local_48);
         pcVar4 = local_48;
         lVar9 = local_50;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar6 = (long*)( local_48 + -0x10 );
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar4 + -0x10, false);
               lVar9 = local_50;
            }

         }

         local_50 = lVar9;
         if (lVar9 != 0) {
            LOCK();
            plVar6 = (long*)( lVar9 + -0x10 );
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar9 + -0x10 ), false);
            }

         }

         uVar10 = ( ulong ) * (uint*)( this + 0x360 );
         puVar11 = *(undefined8**)( this + 0x350 );
         if (*(int*)( this + 0x364 ) != 0) {
            uVar8 = 0;
            do {
               plVar6 = (long*)( ( uVar8 % uVar10 ) * 0x20 + puVar11[uVar8 / uVar10] );
               if (( -1 < (int)plVar6[3] ) && ( *plVar6 != 0 )) {
                  LOCK();
                  plVar1 = (long*)( *plVar6 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar9 = *plVar6;
                     *plVar6 = 0;
                     Memory::free_static((void*)( lVar9 + -0x10 ), false);
                  }

                  uVar10 = ( ulong ) * (uint*)( this + 0x360 );
                  puVar11 = *(undefined8**)( this + 0x350 );
               }

               uVar5 = ( ulong ) * (uint*)( this + 0x364 );
               uVar8 = uVar8 + 1;
            }
 while ( uVar8 < uVar5 );
            goto LAB_00116043;
         }

         if (*(uint*)( this + 0x360 ) != 0) goto LAB_0011608c;
         Memory::free_static((void*)*puVar11, false);
         Memory::free_static((void*)**(undefined8**)( this + 0x358 ), false);
      }

      puVar11 = *(undefined8**)( this + 0x350 );
      LAB_0011608c:if (puVar11 != (undefined8*)0x0) {
         Memory::free_static(puVar11, false);
         Memory::free_static(*(void**)( this + 0x358 ), false);
      }

      if (*(void**)( this + 0x168 ) != (void*)0x0) {
         if (*(int*)( this + 0x160 ) != 0) {
            *(undefined4*)( this + 0x160 ) = 0;
         }

         Memory::free_static(*(void**)( this + 0x168 ), false);
      }

      if (*(long*)( this + 0xe0 ) != 0) {
         LOCK();
         plVar6 = (long*)( *(long*)( this + 0xe0 ) + -0x10 );
         *plVar6 = *plVar6 + -1;
         UNLOCK();
         if (*plVar6 == 0) {
            lVar9 = *(long*)( this + 0xe0 );
            *(undefined8*)( this + 0xe0 ) = 0;
            Memory::free_static((void*)( lVar9 + -0x10 ), false);
         }

      }

      if (*(long*)( this + 0xc0 ) != 0) {
         LOCK();
         plVar6 = (long*)( *(long*)( this + 0xc0 ) + -0x10 );
         *plVar6 = *plVar6 + -1;
         UNLOCK();
         if (*plVar6 == 0) {
            lVar9 = *(long*)( this + 0xc0 );
            *(undefined8*)( this + 0xc0 ) = 0;
            Memory::free_static((void*)( lVar9 + -0x10 ), false);
         }

      }

      if (*(long*)( this + 0x90 ) != 0) {
         LOCK();
         plVar6 = (long*)( *(long*)( this + 0x90 ) + -0x10 );
         *plVar6 = *plVar6 + -1;
         UNLOCK();
         if (*plVar6 == 0) {
            lVar9 = *(long*)( this + 0x90 );
            *(undefined8*)( this + 0x90 ) = 0;
            Memory::free_static((void*)( lVar9 + -0x10 ), false);
         }

      }

      if (*(long*)( this + 0x88 ) != 0) {
         LOCK();
         plVar6 = (long*)( *(long*)( this + 0x88 ) + -0x10 );
         *plVar6 = *plVar6 + -1;
         UNLOCK();
         if (*plVar6 == 0) {
            lVar9 = *(long*)( this + 0x88 );
            *(undefined8*)( this + 0x88 ) = 0;
            Memory::free_static((void*)( lVar9 + -0x10 ), false);
         }

      }

      if (*(long*)( this + 0x80 ) != 0) {
         LOCK();
         plVar6 = (long*)( *(long*)( this + 0x80 ) + -0x10 );
         *plVar6 = *plVar6 + -1;
         UNLOCK();
         if (*plVar6 == 0) {
            lVar9 = *(long*)( this + 0x80 );
            *(undefined8*)( this + 0x80 ) = 0;
            Memory::free_static((void*)( lVar9 + -0x10 ), false);
         }

      }

      if (*(void**)( this + 0x70 ) != (void*)0x0) {
         if (*(int*)( this + 0x68 ) != 0) {
            *(undefined4*)( this + 0x68 ) = 0;
         }

         Memory::free_static(*(void**)( this + 0x70 ), false);
      }

      if (*(void**)( this + 0x60 ) != (void*)0x0) {
         if (*(int*)( this + 0x58 ) != 0) {
            *(undefined4*)( this + 0x58 ) = 0;
         }

         Memory::free_static(*(void**)( this + 0x60 ), false);
      }

      if (*(long*)( this + 0x50 ) != 0) {
         LOCK();
         plVar6 = (long*)( *(long*)( this + 0x50 ) + -0x10 );
         *plVar6 = *plVar6 + -1;
         UNLOCK();
         if (*plVar6 == 0) {
            lVar9 = *(long*)( this + 0x50 );
            *(undefined8*)( this + 0x50 ) = 0;
            Memory::free_static((void*)( lVar9 + -0x10 ), false);
         }

      }

      if (*(long*)( this + 0x40 ) != 0) {
         LOCK();
         plVar6 = (long*)( *(long*)( this + 0x40 ) + -0x10 );
         *plVar6 = *plVar6 + -1;
         UNLOCK();
         if (*plVar6 == 0) {
            lVar9 = *(long*)( this + 0x40 );
            *(undefined8*)( this + 0x40 ) = 0;
            Memory::free_static((void*)( lVar9 + -0x10 ), false);
         }

      }

      CowData<CharString>::_unref((CowData<CharString>*)( this + 0x30 ));
      if (*(void**)( this + 0x20 ) != (void*)0x0) {
         if (*(int*)( this + 0x18 ) != 0) {
            *(undefined4*)( this + 0x18 ) = 0;
         }

         Memory::free_static(*(void**)( this + 0x20 ), false);
      }

      if (*(void**)( this + 0x10 ) == (void*)0x0) {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

      }
 else {
         if (*(int*)( this + 8 ) != 0) {
            *(undefined4*)( this + 8 ) = 0;
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static(*(void**)( this + 0x10 ), false);
            return;
         }

      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* OpenXRAPI::action_create(RID, String, String, OpenXRAction::ActionType, Vector<RID> const&) */
   undefined8 OpenXRAPI::action_create(OpenXRAPI *this, ulong param_2, long *param_3, long *param_4, undefined4 param_5, long param_6) {
      long *plVar1;
      ulong *puVar2;
      ulong uVar3;
      code *pcVar4;
      undefined1 auVar5[16];
      undefined1 auVar6[16];
      undefined1 auVar7[16];
      int iVar8;
      undefined8 uVar9;
      long lVar10;
      long lVar11;
      long lVar12;
      undefined8 *puVar13;
      long lVar14;
      long lVar15;
      long in_FS_OFFSET;
      bool bVar16;
      byte bVar17;
      long local_1c0[2];
      long local_1b0;
      undefined1 local_1a8[16];
      undefined8 local_198;
      ulong local_188;
      long local_180;
      undefined4 local_178;
      long local_168;
      undefined8 local_160;
      int local_158[8];
      undefined4 local_138;
      undefined1 local_134[4];
      undefined8 uStack_130;
      undefined1 local_128[64];
      undefined4 local_e8;
      undefined4 local_e4;
      long local_e0;
      undefined1 local_d8[120];
      undefined8 local_60;
      ulong local_58;
      ulong uStack_50;
      undefined1 local_48;
      long local_40;
      bVar17 = 0;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (*(long*)( this + 0xd0 ) == 0) {
         uVar9 = 0;
         _err_print_error("action_create", "modules/openxr/openxr_api.cpp", 0xbfb, "Condition \"instance == nullptr\" is true. Returning: RID()", 0, 0);
         goto LAB_00116ab7;
      }

      local_188 = 0;
      local_180 = 0;
      plVar1 = (long*)( *param_3 + -0x10 );
      local_168 = 0;
      if (*param_3 != 0) {
         do {
            lVar14 = *plVar1;
            if (lVar14 == 0) goto LAB_0011654f;
            LOCK();
            lVar12 = *plVar1;
            bVar16 = lVar14 == lVar12;
            if (bVar16) {
               *plVar1 = lVar14 + 1;
               lVar12 = lVar14;
            }

            UNLOCK();
         }
 while ( !bVar16 );
         if (lVar12 != -1) {
            local_180 = *param_3;
         }

      }

      LAB_0011654f:if (( param_2 == 0 ) || ( *(uint*)( this + 0x3bc ) <= (uint)param_2 )) {
         LAB_00116d90:uVar9 = 0;
         _err_print_error("action_create", "modules/openxr/openxr_api.cpp", 0xc01, "Parameter \"action_set\" is null.", 0, 0);
      }
 else {
         lVar14 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x3b8 ) ) * 0x20 + *(long*)( *(long*)( this + 0x3a8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x3b8 ) ) * 8 );
         if (*(int*)( lVar14 + 0x18 ) != (int)( param_2 >> 0x20 )) {
            if (*(int*)( lVar14 + 0x18 ) + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            }

            goto LAB_00116d90;
         }

         if (*(long*)( lVar14 + 0x10 ) == 0) {
            uVar9 = 0;
            _err_print_error("action_create", "modules/openxr/openxr_api.cpp", 0xc02, "Condition \"action_set->handle == nullptr\" is true. Returning: RID()", 0, 0);
         }
 else {
            local_188 = param_2;
            switch (param_5) {
               case 0:
        local_178 = 1;
        break;
               case 1:
        local_178 = 2;
        break;
               case 2:
        local_178 = 3;
        break;
               case 3:
        local_178 = 4;
        break;
               case 4:
        local_178 = 100;
        break;
               default:
        uVar9 = 0;
        _err_print_error("action_create","modules/openxr/openxr_api.cpp",0xc16,
                         "Method/function failed. Returning: RID()",0,0);
        goto LAB_00116a58;
            }

            lVar12 = *(long*)( param_6 + 8 );
            lVar11 = 0;
            local_1b0 = 0;
            if (lVar12 == 0) {
               local_60 = 0;
               puVar13 = (undefined8*)( local_134 + 4 );
               for (lVar12 = 0x1b; lVar12 != 0; lVar12 = lVar12 + -1) {
                  *puVar13 = 0;
                  puVar13 = puVar13 + 1;
               }

               local_e4 = 0;
               local_e8 = local_178;
            }
 else {
               do {
                  if (*(long*)( lVar12 + -8 ) <= lVar11) break;
                  puVar2 = (ulong*)( lVar12 + lVar11 * 8 );
                  if (*puVar2 == 0) goto LAB_0011679f;
                  uVar3 = *puVar2;
                  if ((uint)uVar3 < *(uint*)( this + 0x364 )) {
                     lVar10 = ( ( uVar3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x360 ) ) * 0x20 + *(long*)( *(long*)( this + 0x350 ) + ( ( uVar3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x360 ) ) * 8 );
                     if (*(int*)( lVar10 + 0x18 ) == (int)( uVar3 >> 0x20 )) {
                        lVar12 = *(long*)( param_6 + 8 );
                        if (*(long*)( lVar10 + 8 ) != 0) {
                           local_198 = 0;
                           local_1a8 = (undefined1[16])0x0;
                           if (lVar12 == 0) {
                              lVar15 = 0;
                              LAB_00116bd3:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar11, lVar15, "p_index", "size()", "", false, true);
                              _err_flush_stdout();
                              /* WARNING: Does not return */
                              pcVar4 = (code*)invalidInstructionException();
                              ( *pcVar4 )();
                           }

                           lVar15 = *(long*)( lVar12 + -8 );
                           if (lVar15 <= lVar11) goto LAB_00116bd3;
                           local_58 = *(ulong*)( lVar12 + lVar11 * 8 );
                           local_1a8._8_8_ = 0;
                           local_1a8._0_8_ = local_58;
                           local_48 = 0;
                           uStack_50 = 0;
                           if (local_168 == 0) {
                              lVar12 = 1;
                           }
 else {
                              lVar12 = *(long*)( local_168 + -8 ) + 1;
                           }

                           iVar8 = CowData<OpenXRAPI::ActionTracker>::resize<false>((CowData<OpenXRAPI::ActionTracker>*)&local_168, lVar12);
                           if (iVar8 == 0) {
                              if (local_168 == 0) {
                                 lVar15 = -1;
                                 lVar12 = 0;
                                 LAB_00116cca:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar15, lVar12, "p_index", "size()", "", false, false);
                              }
 else {
                                 lVar12 = *(long*)( local_168 + -8 );
                                 lVar15 = lVar12 + -1;
                                 if (lVar15 < 0) goto LAB_00116cca;
                                 CowData<OpenXRAPI::ActionTracker>::_copy_on_write((CowData<OpenXRAPI::ActionTracker>*)&local_168);
                                 puVar2 = (ulong*)( local_168 + lVar15 * 0x18 );
                                 *puVar2 = local_58;
                                 puVar2[1] = uStack_50;
                                 *(undefined1*)( puVar2 + 2 ) = local_48;
                              }

                              uVar9 = *(undefined8*)( lVar10 + 8 );
                              if (local_1b0 == 0) goto LAB_00116c50;
                              LAB_00116749:lVar12 = *(long*)( local_1b0 + -8 ) + 1;
                           }
 else {
                              _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true");
                              uVar9 = *(undefined8*)( lVar10 + 8 );
                              if (local_1b0 != 0) goto LAB_00116749;
                              LAB_00116c50:lVar12 = 1;
                           }

                           iVar8 = CowData<unsigned_long>::resize<false>((CowData<unsigned_long>*)&local_1b0, lVar12);
                           if (iVar8 == 0) {
                              if (local_1b0 == 0) {
                                 lVar10 = -1;
                                 lVar12 = 0;
                              }
 else {
                                 lVar12 = *(long*)( local_1b0 + -8 );
                                 lVar10 = lVar12 + -1;
                                 if (-1 < lVar10) {
                                    CowData<unsigned_long>::_copy_on_write((CowData<unsigned_long>*)&local_1b0);
                                    *(undefined8*)( local_1b0 + lVar10 * 8 ) = uVar9;
                                    lVar12 = *(long*)( param_6 + 8 );
                                    goto LAB_0011679f;
                                 }

                              }

                              _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar10, lVar12, "p_index", "size()", "", false, false);
                              goto LAB_00116b70;
                           }

                           _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true");
                           lVar12 = *(long*)( param_6 + 8 );
                        }

                     }
 else {
                        if (0x7ffffffe < *(int*)( lVar10 + 0x18 ) + 0x80000000U) goto LAB_00116b70;
                        _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                        lVar12 = *(long*)( param_6 + 8 );
                     }

                  }
 else {
                     LAB_00116b70:lVar12 = *(long*)( param_6 + 8 );
                  }

                  LAB_0011679f:lVar11 = lVar11 + 1;
               }
 while ( lVar12 != 0 );
               local_60 = 0;
               puVar13 = (undefined8*)( local_134 + 4 );
               for (lVar12 = 0x1b; lVar12 != 0; lVar12 = lVar12 + -1) {
                  *puVar13 = 0;
                  puVar13 = puVar13 + (ulong)bVar17 * -2 + 1;
               }

               local_e8 = local_178;
               if (local_1b0 == 0) {
                  local_e4 = 0;
               }
 else {
                  local_e4 = *(undefined4*)( local_1b0 + -8 );
               }

            }

            _local_134 = 0;
            local_138 = 0x1d;
            local_1a8._0_8_ = 0;
            plVar1 = (long*)( *param_3 + -0x10 );
            if (*param_3 != 0) {
               do {
                  lVar12 = *plVar1;
                  if (lVar12 == 0) goto LAB_00116842;
                  LOCK();
                  lVar11 = *plVar1;
                  bVar16 = lVar12 == lVar11;
                  if (bVar16) {
                     *plVar1 = lVar12 + 1;
                     lVar11 = lVar12;
                  }

                  UNLOCK();
               }
 while ( !bVar16 );
               if (lVar11 != -1) {
                  local_1a8._0_8_ = *param_3;
               }

            }

            LAB_00116842:local_178 = local_e8;
            local_e0 = local_1b0;
            copy_string_to_char_buffer(this, local_1a8, local_128, 0x40);
            uVar9 = local_1a8._0_8_;
            if (local_1a8._0_8_ != 0) {
               LOCK();
               plVar1 = (long*)( local_1a8._0_8_ + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_1a8._0_8_ = 0;
                  Memory::free_static((void*)( uVar9 + -0x10 ), false);
               }

            }

            uVar9 = local_1a8._8_8_;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = local_1a8._8_8_;
            local_1a8 = auVar7 << 0x40;
            plVar1 = (long*)( *param_4 + -0x10 );
            if (*param_4 != 0) {
               do {
                  lVar12 = *plVar1;
                  if (lVar12 == 0) goto LAB_001168ca;
                  LOCK();
                  lVar11 = *plVar1;
                  bVar16 = lVar12 == lVar11;
                  if (bVar16) {
                     *plVar1 = lVar12 + 1;
                     lVar11 = lVar12;
                  }

                  UNLOCK();
               }
 while ( !bVar16 );
               if (lVar11 != -1) {
                  local_1a8._0_8_ = *param_4;
                  local_1a8 = CONCAT88(uVar9, local_1a8._0_8_);
               }

            }

            LAB_001168ca:copy_string_to_char_buffer(this, local_1a8, local_d8, 0x80);
            uVar9 = local_1a8._0_8_;
            if (local_1a8._0_8_ != 0) {
               LOCK();
               plVar1 = (long*)( local_1a8._0_8_ + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = local_1a8._8_8_;
                  local_1a8 = auVar5 << 0x40;
                  Memory::free_static((void*)( uVar9 + -0x10 ), false);
               }

            }

            if (*(code**)( this + 0x200 ) == (code*)0x0) {
               iVar8 = -0xc;
               LAB_00116945:get_error_string(local_1c0, this, iVar8);
               uVar9 = local_1a8._8_8_;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = local_1a8._8_8_;
               local_1a8 = auVar6 << 0x40;
               if (*param_3 == 0) {
                  Variant::Variant((Variant*)local_158, "OpenXR: failed to create action ");
                  print_line<String,char_const*,String,char_const*>((Variant*)local_158, local_1a8, &_LC371, local_1c0, &_LC164);
                  if (Variant::needs_deinit[local_158[0]] != '\0') {
                     Variant::_clear_internal();
                  }

               }
 else {
                  plVar1 = (long*)( *param_3 + -0x10 );
                  do {
                     lVar14 = *plVar1;
                     if (lVar14 == 0) goto LAB_00116e45;
                     LOCK();
                     lVar12 = *plVar1;
                     bVar16 = lVar14 == lVar12;
                     if (bVar16) {
                        *plVar1 = lVar14 + 1;
                        lVar12 = lVar14;
                     }

                     UNLOCK();
                  }
 while ( !bVar16 );
                  if (lVar12 == -1) {
                     LAB_00116e45:lVar14 = 0;
                  }
 else {
                     lVar14 = *param_3;
                     local_1a8._0_8_ = lVar14;
                     local_1a8 = CONCAT88(uVar9, local_1a8._0_8_);
                  }

                  Variant::Variant((Variant*)local_158, "OpenXR: failed to create action ");
                  print_line<String,char_const*,String,char_const*>((Variant*)local_158, local_1a8, &_LC371, local_1c0, &_LC164);
                  if (Variant::needs_deinit[local_158[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (lVar14 != 0) {
                     LOCK();
                     plVar1 = (long*)( lVar14 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        Memory::free_static((void*)( local_1a8._0_8_ + -0x10 ), false);
                     }

                  }

               }

               lVar14 = local_1c0[0];
               if (local_1c0[0] != 0) {
                  LOCK();
                  plVar1 = (long*)( local_1c0[0] + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_1c0[0] = 0;
                     Memory::free_static((void*)( lVar14 + -0x10 ), false);
                  }

               }

               uVar9 = 0;
            }
 else {
               iVar8 = ( **(code**)( this + 0x200 ) )(*(undefined8*)( lVar14 + 0x10 ), &local_138, &local_160);
               if (iVar8 < 0) goto LAB_00116945;
               set_object_name(this, 6, local_160, param_3);
               uVar9 = RID_Alloc<OpenXRAPI::Action,true>::make_rid((RID_Alloc<OpenXRAPI::Action,true>*)( this + 0x3f8 ), (Action*)&local_188);
            }

            if (local_1b0 != 0) {
               LOCK();
               plVar1 = (long*)( local_1b0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static((void*)( local_1b0 + -0x10 ), false);
               }

            }

         }

      }

      LAB_00116a58:lVar14 = local_168;
      if (local_168 != 0) {
         LOCK();
         plVar1 = (long*)( local_168 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_168 = 0;
            Memory::free_static((void*)( lVar14 + -0x10 ), false);
         }

      }

      lVar14 = local_180;
      if (local_180 != 0) {
         LOCK();
         plVar1 = (long*)( local_180 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_180 = 0;
            Memory::free_static((void*)( lVar14 + -0x10 ), false);
         }

      }

      LAB_00116ab7:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar9;
   }

   /* OpenXRAPI::interaction_profile_create(String) */
   long OpenXRAPI::interaction_profile_create(OpenXRAPI *this, String *param_2) {
      long *plVar1;
      char cVar2;
      int iVar3;
      undefined8 uVar4;
      long lVar5;
      long lVar6;
      long in_FS_OFFSET;
      bool bVar7;
      long local_88;
      long local_80;
      long local_78;
      ulong local_70[2];
      long local_60;
      undefined8 local_50;
      int local_48[6];
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      cVar2 = is_interaction_profile_supported(this, param_2);
      if (cVar2 == '\0') {
         lVar5 = 0;
         goto LAB_00116f21;
      }

      local_78 = 0;
      local_60 = 0;
      local_50 = 0;
      String::utf8();
      uVar4 = CharString::get_data();
      lVar5 = local_80;
      if (*(code**)( this + 800 ) == (code*)0x0) {
         if (local_80 != 0) {
            LOCK();
            plVar1 = (long*)( local_80 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_80 = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }

         }

         iVar3 = -0xc;
         LAB_001170a0:get_error_string(&local_88, this, iVar3);
         local_80 = 0;
         if (*(long*)param_2 == 0) {
            Variant::Variant((Variant*)local_48, "OpenXR: failed to get path for ");
            print_line<String,char_const*,String,char_const*>((Variant*)local_48, &local_80, &_LC371, &local_88, &_LC164);
            if (Variant::needs_deinit[local_48[0]] != '\0') {
               Variant::_clear_internal();
            }

         }
 else {
            plVar1 = (long*)( *(long*)param_2 + -0x10 );
            do {
               lVar5 = *plVar1;
               if (lVar5 == 0) goto LAB_001170f5;
               LOCK();
               lVar6 = *plVar1;
               bVar7 = lVar5 == lVar6;
               if (bVar7) {
                  *plVar1 = lVar5 + 1;
                  lVar6 = lVar5;
               }

               UNLOCK();
            }
 while ( !bVar7 );
            if (lVar6 != -1) {
               local_80 = *(long*)param_2;
            }

            LAB_001170f5:lVar5 = local_80;
            Variant::Variant((Variant*)local_48, "OpenXR: failed to get path for ");
            print_line<String,char_const*,String,char_const*>((Variant*)local_48, &local_80, &_LC371, &local_88, &_LC164);
            if (Variant::needs_deinit[local_48[0]] != '\0') {
               Variant::_clear_internal();
            }

            if (lVar5 != 0) {
               LOCK();
               plVar1 = (long*)( lVar5 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static((void*)( local_80 + -0x10 ), false);
               }

            }

         }

         lVar5 = local_88;
         if (local_88 != 0) {
            LOCK();
            plVar1 = (long*)( local_88 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_88 = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }

         }

         lVar5 = 0;
      }
 else {
         iVar3 = ( **(code**)( this + 800 ) )(*(undefined8*)( this + 0xd0 ), uVar4, local_70);
         lVar5 = local_80;
         if (local_80 != 0) {
            LOCK();
            plVar1 = (long*)( local_80 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_80 = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }

         }

         if (iVar3 < 0) goto LAB_001170a0;
         lVar5 = get_interaction_profile_rid(this, local_70[0]);
         if (lVar5 == 0) {
            if (local_78 != *(long*)param_2) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)param_2);
            }

            lVar5 = RID_Alloc<OpenXRAPI::InteractionProfile,true>::make_rid((RID_Alloc<OpenXRAPI::InteractionProfile,true>*)( this + 0x450 ), (InteractionProfile*)&local_78);
         }

      }

      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>>*)&local_50);
      lVar6 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

      lVar6 = local_78;
      if (local_78 != 0) {
         LOCK();
         plVar1 = (long*)( local_78 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_78 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

      LAB_00116f21:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return lVar5;
   }

   /* OpenXRAPI::interaction_profile_free(RID) */
   void OpenXRAPI::interaction_profile_free(OpenXRAPI *this, ulong param_2) {
      long *plVar1;
      pthread_mutex_t *__mutex;
      int iVar2;
      long lVar3;
      ulong uVar4;
      int iVar5;
      uint uVar6;
      char *pcVar7;
      undefined8 uVar8;
      uint uVar9;
      char *pcVar10;
      char *pcVar11;
      long *plVar12;
      long lVar13;
      if (param_2 != 0) {
         uVar9 = (uint)param_2;
         if (uVar9 < *(uint*)( this + 0x46c )) {
            lVar13 = *(long*)( *(long*)( this + 0x458 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x468 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x468 ) ) * 0x38;
            iVar2 = *(int*)( lVar13 + 0x30 );
            if (iVar2 == (int)( param_2 >> 0x20 )) {
               CowData<XrActionSuggestedBinding>::resize<false>((CowData<XrActionSuggestedBinding>*)( lVar13 + 0x18 ), 0);
               if (( *(long*)( lVar13 + 0x28 ) != 0 ) && ( *(long*)( *(long*)( lVar13 + 0x28 ) + -8 ) != 0 )) {
                  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>>*)( lVar13 + 0x28 ));
               }

               __mutex = (pthread_mutex_t*)( this + 0x480 );
               iVar5 = pthread_mutex_lock(__mutex);
               if (iVar5 != 0) {
                  /* WARNING: Subroutine does not return */
                  std::__throw_system_error(iVar5);
               }

               if (uVar9 < *(uint*)( this + 0x46c )) {
                  uVar4 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x468 );
                  lVar13 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x468 ) ) * 0x38;
                  plVar12 = (long*)( *(long*)( *(long*)( this + 0x458 ) + uVar4 * 8 ) + lVar13 );
                  if ((int)plVar12[6] < 0) {
                     pthread_mutex_unlock(__mutex);
                     _err_print_error(&_LC181, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0, 0);
                     return;
                  }

                  if (iVar2 == (int)plVar12[6]) {
                     CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>>*)( plVar12 + 5 ));
                     if (plVar12[3] != 0) {
                        LOCK();
                        plVar1 = (long*)( plVar12[3] + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           lVar3 = plVar12[3];
                           plVar12[3] = 0;
                           Memory::free_static((void*)( lVar3 + -0x10 ), false);
                        }

                     }

                     if (*plVar12 != 0) {
                        LOCK();
                        plVar1 = (long*)( *plVar12 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           lVar3 = *plVar12;
                           *plVar12 = 0;
                           Memory::free_static((void*)( lVar3 + -0x10 ), false);
                        }

                     }

                     lVar3 = *(long*)( this + 0x460 );
                     *(undefined4*)( *(long*)( *(long*)( this + 0x458 ) + uVar4 * 8 ) + 0x30 + lVar13 ) = 0xffffffff;
                     uVar6 = *(int*)( this + 0x470 ) - 1;
                     *(uint*)( this + 0x470 ) = uVar6;
                     *(uint*)( *(long*)( lVar3 + ( (ulong)uVar6 / ( ulong ) * (uint*)( this + 0x468 ) ) * 8 ) + ( (ulong)uVar6 % ( ulong ) * (uint*)( this + 0x468 ) ) * 4 ) = uVar9;
                     pthread_mutex_unlock(__mutex);
                     return;
                  }

                  pthread_mutex_unlock(__mutex);
                  uVar8 = 0x171;
               }
 else {
                  pthread_mutex_unlock(__mutex);
                  uVar8 = 0x161;
               }

               pcVar7 = "Method/function failed.";
               pcVar10 = "./core/templates/rid_owner.h";
               pcVar11 = "free";
               goto LAB_00117430;
            }

            if (iVar2 + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            }

         }

      }

      pcVar7 = "Parameter \"ip\" is null.";
      uVar8 = 0xd07;
      pcVar10 = "modules/openxr/openxr_api.cpp";
      pcVar11 = "interaction_profile_free";
      LAB_00117430:_err_print_error(pcVar11, pcVar10, uVar8, pcVar7, 0, 0);
      return;
   }

   /* OpenXRAPI::interaction_profile_add_binding(RID, RID, String) */
   int OpenXRAPI::interaction_profile_add_binding(OpenXRAPI *this, ulong param_2, ulong param_3, CowData *param_4) {
      long *plVar1;
      String *pSVar2;
      long lVar3;
      char cVar4;
      int iVar5;
      undefined8 uVar6;
      long lVar7;
      long lVar8;
      long in_FS_OFFSET;
      CowData<char32_t> aCStack_68[8];
      long local_60;
      long local_58;
      long local_50;
      int local_48[6];
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( param_2 == 0 ) || ( *(uint*)( this + 0x46c ) <= (uint)param_2 )) {
         LAB_00117780:_err_print_error("interaction_profile_add_binding", "modules/openxr/openxr_api.cpp", 0xca5, "Parameter \"ip\" is null.", 0, 0);
      }
 else {
         pSVar2 = (String*)( *(long*)( *(long*)( this + 0x458 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x468 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x468 ) ) * 0x38 );
         if (*(int*)( pSVar2 + 0x30 ) != (int)( param_2 >> 0x20 )) {
            if (*(int*)( pSVar2 + 0x30 ) + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            }

            goto LAB_00117780;
         }

         cVar4 = interaction_profile_supports_io_path(this, pSVar2, (String*)param_4);
         if (cVar4 != '\0') {
            if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x414 ) )) {
               lVar3 = *(long*)( *(long*)( this + 0x400 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x410 ) ) * 8 ) + ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x410 ) ) * 0x38;
               iVar5 = *(int*)( lVar3 + 0x30 );
               if (iVar5 == (int)( param_3 >> 0x20 )) {
                  lVar3 = *(long*)( lVar3 + 0x28 );
                  if (lVar3 != 0) {
                     local_58 = lVar3;
                     String::utf8();
                     uVar6 = CharString::get_data();
                     lVar3 = local_60;
                     if (*(code**)( this + 800 ) == (code*)0x0) {
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

                        iVar5 = -0xc;
                     }
 else {
                        iVar5 = ( **(code**)( this + 800 ) )(*(undefined8*)( this + 0xd0 ), uVar6, &local_50);
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

                        lVar3 = local_58;
                        if (-1 < iVar5) {
                           if (*(long*)( pSVar2 + 0x18 ) == 0) {
                              lVar8 = 1;
                           }
 else {
                              lVar8 = *(long*)( *(long*)( pSVar2 + 0x18 ) + -8 ) + 1;
                           }

                           iVar5 = CowData<XrActionSuggestedBinding>::resize<false>((CowData<XrActionSuggestedBinding>*)( pSVar2 + 0x18 ), lVar8);
                           if (iVar5 == 0) {
                              if (*(long*)( pSVar2 + 0x18 ) == 0) {
                                 lVar7 = -1;
                                 lVar8 = 0;
                              }
 else {
                                 lVar8 = *(long*)( *(long*)( pSVar2 + 0x18 ) + -8 );
                                 lVar7 = lVar8 + -1;
                                 if (-1 < lVar7) {
                                    CowData<XrActionSuggestedBinding>::_copy_on_write((CowData<XrActionSuggestedBinding>*)( pSVar2 + 0x18 ));
                                    lVar8 = *(long*)( pSVar2 + 0x18 );
                                    plVar1 = (long*)( lVar8 + lVar7 * 0x10 );
                                    *plVar1 = lVar3;
                                    plVar1[1] = local_50;
                                    goto LAB_001176eb;
                                 }

                              }

                              _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar7, lVar8, "p_index", "size()", "", false, false);
                              lVar8 = *(long*)( pSVar2 + 0x18 );
                           }
 else {
                              _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
                              lVar8 = *(long*)( pSVar2 + 0x18 );
                           }

                           LAB_001176eb:if (lVar8 != 0) {
                              iVar5 = (int)*(undefined8*)( lVar8 + -8 ) + -1;
                              goto LAB_001176f7;
                           }

                           goto LAB_0011775d;
                        }

                     }

                     get_error_string(aCStack_68, this, iVar5);
                     local_60 = 0;
                     if (*(long*)param_4 != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, param_4);
                     }

                     Variant::Variant((Variant*)local_48, "OpenXR: failed to get path for ");
                     print_line<String,char_const*,String,char_const*>((Variant*)local_48, (CowData<char32_t>*)&local_60, &_LC371, aCStack_68, &_LC164);
                     if (Variant::needs_deinit[local_48[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     CowData<char32_t>::_unref(aCStack_68);
                     goto LAB_0011775d;
                  }

               }
 else if (iVar5 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

            }

            _err_print_error("interaction_profile_add_binding", "modules/openxr/openxr_api.cpp", 0xcae, "Condition \"action == nullptr || action->handle == nullptr\" is true. Returning: -1", 0, 0);
         }

      }

      LAB_0011775d:iVar5 = -1;
      LAB_001176f7:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return iVar5;
   }

   /* OpenXRAPI::interaction_profile_clear_bindings(RID) */
   void OpenXRAPI::interaction_profile_clear_bindings(OpenXRAPI *this, ulong param_2) {
      long lVar1;
      int iVar2;
      if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x46c ) )) {
         lVar1 = *(long*)( *(long*)( this + 0x458 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x468 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x468 ) ) * 0x38;
         iVar2 = *(int*)( lVar1 + 0x30 );
         if (iVar2 == (int)( param_2 >> 0x20 )) {
            CowData<XrActionSuggestedBinding>::resize<false>((CowData<XrActionSuggestedBinding>*)( lVar1 + 0x18 ), 0);
            return;
         }

         if (iVar2 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

      _err_print_error("interaction_profile_clear_bindings", "modules/openxr/openxr_api.cpp", 0xc9e, "Parameter \"ip\" is null.", 0, 0);
      return;
   }

   /* OpenXRAPI::interaction_profile_add_modifier(RID, Vector<unsigned char> const&) */
   undefined8 OpenXRAPI::interaction_profile_add_modifier(OpenXRAPI *this, ulong param_2, long param_3) {
      long *plVar1;
      long lVar2;
      int iVar3;
      undefined8 uVar4;
      long lVar5;
      long lVar6;
      long lVar7;
      long in_FS_OFFSET;
      bool bVar8;
      long local_40[2];
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x46c ) )) {
         lVar7 = *(long*)( *(long*)( this + 0x458 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x468 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x468 ) ) * 0x38;
         if (*(int*)( lVar7 + 0x30 ) == (int)( param_2 >> 0x20 )) {
            if (*(long*)( param_3 + 8 ) != 0) {
               local_40[0] = 0;
               plVar1 = (long*)( *(long*)( param_3 + 8 ) + -0x10 );
               do {
                  lVar2 = *plVar1;
                  if (lVar2 == 0) goto LAB_00117b04;
                  LOCK();
                  lVar6 = *plVar1;
                  bVar8 = lVar2 == lVar6;
                  if (bVar8) {
                     *plVar1 = lVar2 + 1;
                     lVar6 = lVar2;
                  }

                  UNLOCK();
               }
 while ( !bVar8 );
               if (lVar6 != -1) {
                  local_40[0] = *(long*)( param_3 + 8 );
               }

               LAB_00117b04:lVar2 = local_40[0];
               if (*(long*)( lVar7 + 0x28 ) == 0) {
                  lVar6 = 1;
               }
 else {
                  lVar6 = *(long*)( *(long*)( lVar7 + 0x28 ) + -8 ) + 1;
               }

               iVar3 = CowData<Vector<unsigned_char>>::resize<false>((CowData<Vector<unsigned_char>>*)( lVar7 + 0x28 ), lVar6);
               if (iVar3 == 0) {
                  if (*(long*)( lVar7 + 0x28 ) == 0) {
                     lVar5 = -1;
                     lVar6 = 0;
                  }
 else {
                     lVar6 = *(long*)( *(long*)( lVar7 + 0x28 ) + -8 );
                     lVar5 = lVar6 + -1;
                     if (-1 < lVar5) {
                        CowData<Vector<unsigned_char>>::_copy_on_write((CowData<Vector<unsigned_char>>*)( lVar7 + 0x28 ));
                        lVar7 = *(long*)( lVar7 + 0x28 ) + lVar5 * 0x10;
                        if (lVar2 != *(long*)( lVar7 + 8 )) {
                           CowData<unsigned_char>::_ref((CowData<unsigned_char>*)( lVar7 + 8 ), (CowData*)local_40);
                        }

                        goto LAB_00117b72;
                     }

                  }

                  _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar5, lVar6, "p_index", "size()", "", false, false);
               }
 else {
                  _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
               }

               LAB_00117b72:if (lVar2 != 0) {
                  LOCK();
                  plVar1 = (long*)( lVar2 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static((void*)( local_40[0] + -0x10 ), false);
                  }

               }

            }

            uVar4 = 1;
            goto LAB_00117b95;
         }

         if (*(int*)( lVar7 + 0x30 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

      _err_print_error("interaction_profile_add_modifier", "modules/openxr/openxr_api.cpp", 0xcbf, "Parameter \"ip\" is null.", 0, 0);
      uVar4 = 0;
      LAB_00117b95:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar4;
   }

   /* OpenXRAPI::interaction_profile_suggest_bindings(RID) */
   undefined8 OpenXRAPI::interaction_profile_suggest_bindings(OpenXRAPI *this, ulong param_2) {
      long *plVar1;
      long *plVar2;
      char *pcVar3;
      char cVar4;
      int iVar5;
      undefined8 uVar6;
      long lVar7;
      long lVar8;
      long lVar9;
      long lVar10;
      long lVar11;
      long in_FS_OFFSET;
      bool bVar12;
      CowData<char32_t> local_e0[8];
      undefined8 local_d8;
      long local_d0[2];
      long local_c0;
      char *local_b8;
      undefined8 local_b0;
      undefined4 local_a8[2];
      undefined8 local_a0;
      undefined4 local_98;
      long local_90;
      undefined4 local_88;
      undefined4 local_84;
      undefined4 *puStack_80;
      undefined4 uStack_78;
      undefined4 uStack_74;
      undefined4 uStack_70;
      undefined4 uStack_6c;
      undefined4 uStack_68;
      undefined4 local_64;
      int local_58[6];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (*(long*)( this + 0xd0 ) == 0) {
         _err_print_error("interaction_profile_suggest_bindings", "modules/openxr/openxr_api.cpp", 0xcca, "Condition \"instance == nullptr\" is true. Returning: false", 0, 0);
         uVar6 = 0;
         goto LAB_00117ed5;
      }

      if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x46c ) )) {
         plVar2 = (long*)( *(long*)( *(long*)( this + 0x458 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x468 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x468 ) ) * 0x38 );
         if ((int)plVar2[6] == (int)( param_2 >> 0x20 )) {
            local_c0 = 0;
            puStack_80 = (undefined4*)plVar2[5];
            if (puStack_80 != (undefined4*)0x0) {
               CowData<Vector<unsigned_char>>::_copy_on_write((CowData<Vector<unsigned_char>>*)( plVar2 + 5 ));
               lVar7 = plVar2[5];
               CowData<Vector<unsigned_char>>::_copy_on_write((CowData<Vector<unsigned_char>>*)( plVar2 + 5 ));
               lVar11 = plVar2[5];
               if (lVar11 != 0) {
                  lVar11 = lVar11 + *(long*)( lVar11 + -8 ) * 0x10;
               }

               if (lVar11 == lVar7) {
                  local_90 = 0;
                  local_98 = 0;
               }
 else {
                  local_90 = 0;
                  do {
                     uVar6 = *(undefined8*)( lVar7 + 8 );
                     if (local_90 == 0) {
                        lVar8 = 1;
                     }
 else {
                        lVar8 = *(long*)( local_90 + -8 ) + 1;
                     }

                     iVar5 = CowData<XrBindingModificationBaseHeaderKHR_const*>::resize<false>((CowData<XrBindingModificationBaseHeaderKHR_const*>*)&local_c0, lVar8);
                     lVar8 = local_c0;
                     if (iVar5 == 0) {
                        if (local_c0 == 0) {
                           lVar10 = -1;
                           lVar9 = 0;
                        }
 else {
                           lVar9 = *(long*)( local_c0 + -8 );
                           lVar10 = lVar9 + -1;
                           if (-1 < lVar10) {
                              CowData<XrBindingModificationBaseHeaderKHR_const*>::_copy_on_write((CowData<XrBindingModificationBaseHeaderKHR_const*>*)&local_c0);
                              *(undefined8*)( local_c0 + lVar10 * 8 ) = uVar6;
                              local_90 = local_c0;
                              goto LAB_00117e07;
                           }

                        }

                        _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar10, lVar9, "p_index", "size()", "", false, false);
                        local_90 = lVar8;
                     }
 else {
                        _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
                        local_90 = local_c0;
                     }

                     LAB_00117e07:lVar7 = lVar7 + 0x10;
                  }
 while ( lVar11 != lVar7 );
                  if (local_90 == 0) {
                     local_98 = 0;
                  }
 else {
                     local_98 = *(undefined4*)( local_90 + -8 );
                  }

               }

               local_a0 = 0;
               local_a8[0] = 0x3b9c9ec0;
               puStack_80 = local_a8;
            }

            local_88 = 0x33;
            local_84 = 0;
            uStack_6c = 0;
            uStack_78 = (undefined4)plVar2[1];
            uStack_74 = ( undefined4 )((ulong)plVar2[1] >> 0x20);
            lVar7 = plVar2[3];
            if (lVar7 == 0) {
               uStack_70 = 0;
            }
 else {
               uStack_70 = *(undefined4*)( lVar7 + -8 );
            }

            uStack_68 = (undefined4)lVar7;
            local_64 = ( undefined4 )((ulong)lVar7 >> 0x20);
            if (*(code**)( this + 0x328 ) == (code*)0x0) {
               iVar5 = -0xc;
               LAB_00117fc0:get_error_string(local_d0, this, iVar5);
               local_b8 = (char*)0x0;
               if (*plVar2 == 0) {
                  Variant::Variant((Variant*)local_58, "OpenXR: failed to suggest bindings for ");
                  print_line<String,char_const*,String,char_const*>((Variant*)local_58, &local_b8, &_LC371, local_d0, &_LC164);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }

               }
 else {
                  plVar1 = (long*)( *plVar2 + -0x10 );
                  do {
                     lVar7 = *plVar1;
                     if (lVar7 == 0) goto LAB_00118014;
                     LOCK();
                     lVar11 = *plVar1;
                     bVar12 = lVar7 == lVar11;
                     if (bVar12) {
                        *plVar1 = lVar7 + 1;
                        lVar11 = lVar7;
                     }

                     UNLOCK();
                  }
 while ( !bVar12 );
                  if (lVar11 != -1) {
                     local_b8 = (char*)*plVar2;
                  }

                  LAB_00118014:pcVar3 = local_b8;
                  Variant::Variant((Variant*)local_58, "OpenXR: failed to suggest bindings for ");
                  print_line<String,char_const*,String,char_const*>((Variant*)local_58, &local_b8, &_LC371, local_d0, &_LC164);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (pcVar3 != (char*)0x0) {
                     LOCK();
                     plVar2 = (long*)( pcVar3 + -0x10 );
                     *plVar2 = *plVar2 + -1;
                     UNLOCK();
                     if (*plVar2 == 0) {
                        Memory::free_static(local_b8 + -0x10, false);
                     }

                  }

               }

               lVar7 = local_d0[0];
               if (local_d0[0] != 0) {
                  LOCK();
                  plVar2 = (long*)( local_d0[0] + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     local_d0[0] = 0;
                     Memory::free_static((void*)( lVar7 + -0x10 ), false);
                  }

               }

            }
 else {
               iVar5 = ( **(code**)( this + 0x328 ) )(*(undefined8*)( this + 0xd0 ));
               if (iVar5 == -0x16) {
                  cVar4 = is_print_verbose_enabled();
                  if (cVar4 != '\0') {
                     local_d8 = 0;
                     local_b0 = 0x21;
                     local_b8 = " is not supported on this runtime";
                     String::parse_latin1((StrRange*)&local_d8);
                     operator+((char *)
                     local_e0,(String*)"OpenXR Interaction profile ";
                     String::operator +((String*)local_d0, (String*)local_e0);
                     Variant::Variant((Variant*)local_58, (String*)local_d0);
                     stringify_variants((Variant*)&local_b8);
                     __print_line((String*)&local_b8);
                     pcVar3 = local_b8;
                     if (local_b8 != (char*)0x0) {
                        LOCK();
                        plVar2 = (long*)( local_b8 + -0x10 );
                        *plVar2 = *plVar2 + -1;
                        UNLOCK();
                        if (*plVar2 == 0) {
                           local_b8 = (char*)0x0;
                           Memory::free_static(pcVar3 + -0x10, false);
                        }

                     }

                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)local_d0);
                     CowData<char32_t>::_unref(local_e0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
                  }

               }
 else if (iVar5 < 0) goto LAB_00117fc0;
            }

            if (local_c0 != 0) {
               LOCK();
               plVar2 = (long*)( local_c0 + -0x10 );
               *plVar2 = *plVar2 + -1;
               UNLOCK();
               if (*plVar2 == 0) {
                  Memory::free_static((void*)( local_c0 + -0x10 ), false);
               }

            }

            uVar6 = 1;
            goto LAB_00117ed5;
         }

         if ((int)plVar2[6] + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

      _err_print_error("interaction_profile_suggest_bindings", "modules/openxr/openxr_api.cpp", 0xccd, "Parameter \"ip\" is null.", 0, 0);
      uVar6 = 0;
      LAB_00117ed5:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar6;
   }

   /* OpenXRAPI::sync_action_sets(Vector<RID>) */
   char OpenXRAPI::sync_action_sets(long param_1, long param_2, ulong *param_3) {
      long *plVar1;
      ulong uVar2;
      int iVar3;
      ulong *extraout_RDX;
      ulong *extraout_RDX_00;
      ulong *extraout_RDX_01;
      char cVar4;
      long lVar5;
      long lVar6;
      long lVar7;
      ulong *puVar8;
      long in_FS_OFFSET;
      ulong *in_stack_ffffffffffffff50;
      long local_90[2];
      long local_80;
      undefined4 local_78;
      undefined1 local_74[12];
      undefined4 uStack_68;
      undefined4 local_64;
      long local_60;
      int local_58[6];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (*(long*)( param_1 + 0xf8 ) == 0) {
         _err_print_error("sync_action_sets", "modules/openxr/openxr_api.cpp", 0xd10, "Condition \"session == nullptr\" is true. Returning: false", 0, 0);
      }
 else {
         cVar4 = *(char*)( param_1 + 0x104 );
         if (cVar4 != '\0') {
            lVar5 = *(long*)( param_2 + 8 );
            lVar6 = 0;
            local_80 = 0;
            if (lVar5 != 0) {
               do {
                  while (true) {
                     if (*(long*)( lVar5 + -8 ) <= lVar6) goto LAB_00118475;
                     param_3 = (ulong*)( lVar5 + lVar6 * 8 );
                     if (*param_3 == 0) goto LAB_00118409;
                     uVar2 = *param_3;
                     param_3 = (ulong*)( ulong ) * (uint*)( param_1 + 0x3bc );
                     if ((uint)uVar2 < *(uint*)( param_1 + 0x3bc )) break;
                     LAB_00118468:lVar5 = *(long*)( param_2 + 8 );
                     LAB_0011846c:lVar6 = lVar6 + 1;
                     if (lVar5 == 0) goto LAB_00118475;
                  }
;
                  param_3 = (ulong*)( ( ( uVar2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x3b8 ) ) * 0x20 + *(long*)( *(long*)( param_1 + 0x3a8 ) + ( ( uVar2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x3b8 ) ) * 8 ) );
                  if ((int)param_3[3] != (int)( uVar2 >> 0x20 )) {
                     if ((int)param_3[3] + 0x80000000U < 0x7fffffff) {
                        param_3 = in_stack_ffffffffffffff50;
                        _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                        lVar5 = *(long*)( param_2 + 8 );
                        in_stack_ffffffffffffff50 = param_3;
                        goto LAB_00118409;
                     }

                     goto LAB_00118468;
                  }

                  uVar2 = param_3[2];
                  if (uVar2 == 0) goto LAB_00118468;
                  if (local_80 == 0) {
                     lVar5 = 1;
                  }
 else {
                     lVar5 = *(long*)( local_80 + -8 ) + 1;
                  }

                  iVar3 = CowData<XrActiveActionSet>::resize<false>((CowData<XrActiveActionSet>*)&local_80, lVar5);
                  if (iVar3 == 0) {
                     if (local_80 == 0) {
                        lVar7 = -1;
                        lVar5 = 0;
                     }
 else {
                        lVar5 = *(long*)( local_80 + -8 );
                        lVar7 = lVar5 + -1;
                        if (-1 < lVar7) {
                           in_stack_ffffffffffffff50 = (ulong*)0x1183f5;
                           CowData<XrActiveActionSet>::_copy_on_write((CowData<XrActiveActionSet>*)&local_80);
                           puVar8 = (ulong*)( lVar7 * 0x10 + local_80 );
                           lVar5 = *(long*)( param_2 + 8 );
                           *puVar8 = uVar2;
                           puVar8[1] = 0;
                           param_3 = extraout_RDX;
                           goto LAB_00118409;
                        }

                     }

                     in_stack_ffffffffffffff50 = (ulong*)0x0;
                     _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar7, lVar5, "p_index", "size()", "", false, false);
                     lVar5 = *(long*)( param_2 + 8 );
                     param_3 = extraout_RDX_01;
                     goto LAB_0011846c;
                  }

                  in_stack_ffffffffffffff50 = (ulong*)0x118645;
                  _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true");
                  lVar5 = *(long*)( param_2 + 8 );
                  param_3 = extraout_RDX_00;
                  LAB_00118409:lVar6 = lVar6 + 1;
               }
 while ( lVar5 != 0 );
               LAB_00118475:lVar5 = local_80;
               if (local_80 != 0) {
                  local_64 = 0;
                  local_74 = SUB1612((undefined1[16])0x0, 0);
                  uStack_68 = (int)*(undefined8*)( local_80 + -8 );
                  local_78 = 0x3d;
                  local_60 = local_80;
                  if (*(code**)( param_1 + 0x330 ) == (code*)0x0) {
                     iVar3 = -0xc;
                     LAB_00118590:get_error_string(local_90, param_1, iVar3);
                     Variant::Variant((Variant*)local_58, "OpenXR: failed to sync active action sets! [");
                     print_line<String,char_const*>((Variant*)local_58, local_90, &_LC164);
                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     lVar6 = local_90[0];
                     if (local_90[0] != 0) {
                        LOCK();
                        plVar1 = (long*)( local_90[0] + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_90[0] = 0;
                           Memory::free_static((void*)( lVar6 + -0x10 ), false);
                        }

                        lVar5 = local_80;
                        if (local_80 == 0) goto LAB_00118538;
                     }

                     cVar4 = '\0';
                  }
 else {
                     iVar3 = ( **(code**)( param_1 + 0x330 ) )(*(undefined8*)( param_1 + 0xf8 ), &local_78, param_3);
                     if (iVar3 < 0) goto LAB_00118590;
                  }

                  LOCK();
                  plVar1 = (long*)( lVar5 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static((void*)( local_80 + -0x10 ), false);
                  }

                  goto LAB_001184e7;
               }

            }

            cVar4 = '\0';
            _err_print_error("sync_action_sets", "modules/openxr/openxr_api.cpp", 0xd21, "Condition \"active_sets.is_empty()\" is true. Returning: false", 0, 0);
            goto LAB_001184e7;
         }

      }

      LAB_00118538:cVar4 = '\0';
      LAB_001184e7:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return cVar4;
   }

   /* OpenXRAPI::create_instance() */
   undefined8 OpenXRAPI::create_instance(OpenXRAPI *this) {
      long *plVar1;
      CowData<CharString> *this_00;
      CowData<char> *this_01;
      uint uVar2;
      undefined8 *puVar3;
      code *pcVar4;
      char cVar5;
      int iVar6;
      long lVar7;
      ulong uVar8;
      String *pSVar9;
      char *pcVar10;
      size_t sVar11;
      undefined8 uVar12;
      undefined8 *puVar13;
      String *pSVar14;
      undefined8 *puVar15;
      long lVar16;
      CowData<char32_t> *this_02;
      void *pvVar17;
      int *piVar18;
      undefined8 *puVar19;
      long lVar20;
      long in_FS_OFFSET;
      bool bVar21;
      byte bVar22;
      CowData *local_400;
      CowData<char32_t> *local_3f0;
      long local_3d0;
      long local_3c8;
      long local_3c0;
      long local_3b8;
      long local_3b0[2];
      String *local_3a0;
      char *local_398;
      long local_390;
      char *local_388;
      void *local_380;
      void *local_378;
      undefined1 local_370[16];
      uint local_360;
      int local_35c;
      int local_358[8];
      int local_338[2];
      undefined8 local_330;
      undefined8 local_328;
      undefined1 local_320[16];
      undefined1 local_310[16];
      undefined1 local_300[16];
      undefined1 local_2f0[16];
      undefined1 local_2e0[16];
      undefined1 local_2d0[16];
      undefined1 local_2c0[16];
      undefined1 local_2b0[16];
      undefined8 local_298[34];
      int local_188[2];
      long local_180;
      undefined8 local_170[36];
      undefined4 local_50;
      long local_48;
      long local_40;
      bVar22 = 0;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      local_3a0 = (String*)0x0;
      CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
      puVar19 = (undefined8*)registered_extension_wrappers._8_8_;
      CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
      puVar15 = (undefined8*)registered_extension_wrappers._8_8_;
      if (registered_extension_wrappers._8_8_ != 0) {
         puVar15 = (undefined8*)( registered_extension_wrappers._8_8_ + *(long*)( registered_extension_wrappers._8_8_ + -8 ) * 8 );
      }

      for (; puVar19 != puVar15; puVar19 = puVar19 + 1) {
         ( *(code*)**(undefined8**)*puVar19 )(&local_388);
         pvVar17 = local_380;
         for (puVar3 = (undefined8*)local_370._0_8_; local_380 = pvVar17,puVar3 != (undefined8*)0x0; puVar3 = (undefined8*)*puVar3) {
            local_398 = (char*)0x0;
            plVar1 = (long*)( puVar3[2] + -0x10 );
            if (puVar3[2] != 0) {
               do {
                  lVar20 = *plVar1;
                  if (lVar20 == 0) goto LAB_001187e8;
                  LOCK();
                  lVar16 = *plVar1;
                  bVar21 = lVar20 == lVar16;
                  if (bVar21) {
                     *plVar1 = lVar20 + 1;
                     lVar16 = lVar20;
                  }

                  UNLOCK();
               }
 while ( !bVar21 );
               if (lVar16 != -1) {
                  local_398 = (char*)puVar3[2];
               }

            }

            LAB_001187e8:local_390 = puVar3[3];
            if (local_3a0 == (String*)0x0) {
               lVar20 = 1;
               CowData<OpenXRAPI::create_instance()::RequestExtension > ::_copy_on_write((CowData<OpenXRAPI::create_instance()::RequestExtension>*)&local_3a0);
               uVar8 = 0x20;
               LAB_00119450:puVar13 = (undefined8*)Memory::alloc_static(uVar8, false);
               if (puVar13 == (undefined8*)0x0) {
                  _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                  goto LAB_001193ed;
               }

               local_3a0 = (String*)( puVar13 + 2 );
               *puVar13 = 1;
               puVar13[1] = 0;
               lVar16 = 0;
               LAB_001188e9:pSVar9 = local_3a0 + lVar16 * 0x10;
               if (( (int)( local_3a0 + lVar20 * 0x10 ) - (int)pSVar9 & 0x10U ) == 0) goto LAB_00118918;
               *(undefined8*)pSVar9 = 0;
               for (pSVar9 = pSVar9 + 0x10; local_3a0 + lVar20 * 0x10 != pSVar9; pSVar9 = pSVar9 + 0x20) {
                  LAB_00118918:*(undefined8*)pSVar9 = 0;
                  *(undefined8*)( pSVar9 + 0x10 ) = 0;
               }

               LAB_00118930:*(long*)( local_3a0 + -8 ) = lVar20;
               LAB_00118939:pcVar10 = local_398;
               lVar20 = *(long*)( local_3a0 + -8 );
               lVar16 = lVar20 + -1;
               if (lVar16 < 0) {
                  LAB_0011937f:pcVar10 = local_398;
                  _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar16, lVar20, "p_index", "size()", "", false, false);
               }
 else {
                  CowData<OpenXRAPI::create_instance()::RequestExtension > ::_copy_on_write((CowData<OpenXRAPI::create_instance()::RequestExtension>*)&local_3a0);
                  this_02 = (CowData<char32_t>*)( local_3a0 + lVar16 * 0x10 );
                  if (pcVar10 != *(char**)this_02) {
                     CowData<char32_t>::_ref(this_02, (CowData*)&local_398);
                  }

                  *(long*)( this_02 + 8 ) = local_390;
               }

            }
 else {
               lVar16 = *(long*)( local_3a0 + -8 );
               lVar20 = lVar16 + 1;
               if (lVar20 < 0) {
                  _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
               }
 else {
                  if (lVar20 == 0) {
                     CowData<OpenXRAPI::create_instance()::RequestExtension > ::_unref((CowData<OpenXRAPI::create_instance()::RequestExtension>*)&local_3a0);
                     if (local_3a0 != (String*)0x0) goto LAB_00118939;
                     lVar16 = -1;
                     lVar20 = 0;
                     goto LAB_0011937f;
                  }

                  CowData<OpenXRAPI::create_instance()::RequestExtension > ::_copy_on_write((CowData<OpenXRAPI::create_instance()::RequestExtension>*)&local_3a0);
                  lVar7 = lVar16 * 0x10;
                  if (lVar7 != 0) {
                     uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
                     uVar8 = uVar8 | uVar8 >> 2;
                     uVar8 = uVar8 | uVar8 >> 4;
                     uVar8 = uVar8 | uVar8 >> 8;
                     uVar8 = uVar8 | uVar8 >> 0x10;
                     lVar7 = ( uVar8 | uVar8 >> 0x20 ) + 1;
                  }

                  if (lVar20 * 0x10 != 0) {
                     uVar8 = lVar20 * 0x10 - 1;
                     uVar8 = uVar8 | uVar8 >> 1;
                     uVar8 = uVar8 | uVar8 >> 2;
                     uVar8 = uVar8 | uVar8 >> 4;
                     uVar8 = uVar8 | uVar8 >> 8;
                     uVar8 = uVar8 | uVar8 >> 0x10;
                     uVar8 = uVar8 | uVar8 >> 0x20;
                     if (uVar8 != 0xffffffffffffffff) {
                        if (uVar8 + 1 == lVar7) {
                           if (local_3a0 == (String*)0x0) {
                              /* WARNING: Does not return */
                              pcVar4 = (code*)invalidInstructionException();
                              ( *pcVar4 )();
                           }

                           lVar16 = *(long*)( local_3a0 + -8 );
                        }
 else {
                           uVar8 = uVar8 + 0x11;
                           if (lVar16 == 0) goto LAB_00119450;
                           puVar13 = (undefined8*)Memory::realloc_static(local_3a0 + -0x10, uVar8, false);
                           if (puVar13 == (undefined8*)0x0) {
                              _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
                              goto LAB_001193ed;
                           }

                           local_3a0 = (String*)( puVar13 + 2 );
                           *puVar13 = 1;
                           lVar16 = puVar13[1];
                        }

                        if (lVar16 < lVar20) goto LAB_001188e9;
                        goto LAB_00118930;
                     }

                  }

                  _err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
               }

               LAB_001193ed:_err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
               pcVar10 = local_398;
            }

            if (pcVar10 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( pcVar10 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static(local_398 + -0x10, false);
               }

            }

            pvVar17 = local_380;
         }

         if (pvVar17 != (void*)0x0) {
            if (local_35c != 0) {
               uVar2 = *(uint*)( hash_table_size_primes + (ulong)local_360 * 4 );
               if (uVar2 == 0) {
                  local_35c = 0;
                  local_370 = (undefined1[16])0x0;
               }
 else {
                  lVar20 = 0;
                  do {
                     if (*(int*)( (long)local_378 + lVar20 ) != 0) {
                        pvVar17 = *(void**)( (long)pvVar17 + lVar20 * 2 );
                        *(int*)( (long)local_378 + lVar20 ) = 0;
                        if (*(long*)( (long)pvVar17 + 0x10 ) != 0) {
                           LOCK();
                           plVar1 = (long*)( *(long*)( (long)pvVar17 + 0x10 ) + -0x10 );
                           *plVar1 = *plVar1 + -1;
                           UNLOCK();
                           if (*plVar1 == 0) {
                              lVar16 = *(long*)( (long)pvVar17 + 0x10 );
                              *(undefined8*)( (long)pvVar17 + 0x10 ) = 0;
                              Memory::free_static((void*)( lVar16 + -0x10 ), false);
                           }

                        }

                        Memory::free_static(pvVar17, false);
                        *(undefined8*)( (long)local_380 + lVar20 * 2 ) = 0;
                        pvVar17 = local_380;
                     }

                     lVar20 = lVar20 + 4;
                  }
 while ( (ulong)uVar2 << 2 != lVar20 );
                  local_35c = 0;
                  local_370 = (undefined1[16])0x0;
                  if (pvVar17 == (void*)0x0) goto LAB_00118a81;
               }

            }

            Memory::free_static(pvVar17, false);
            Memory::free_static(local_378, false);
         }

         LAB_00118a81:}this_00 = (CowData<CharString>*)( this + 0x30 );
         if (( *(long*)( this + 0x30 ) != 0 ) && ( *(long*)( *(long*)( this + 0x30 ) + -8 ) != 0 )) {
            CowData<CharString>::_unref(this_00);
         }

         CowData<OpenXRAPI::create_instance()::RequestExtension > ::_copy_on_write((CowData<OpenXRAPI::create_instance()::RequestExtension>*)&local_3a0);
         pSVar9 = local_3a0;
         CowData<OpenXRAPI::create_instance()::RequestExtension > ::_copy_on_write((CowData<OpenXRAPI::create_instance()::RequestExtension>*)&local_3a0);
         pSVar14 = local_3a0;
         if (local_3a0 != (String*)0x0) {
            pSVar14 = local_3a0 + *(long*)( local_3a0 + -8 ) * 0x10;
         }

         if (pSVar9 != pSVar14) {
            LAB_00118b00:lVar16 = *(long*)( this + 0x20 );
            lVar20 = lVar16 + ( ulong ) * (uint*)( this + 0x18 ) * 0x98;
            for (; lVar20 != lVar16; lVar16 = lVar16 + 0x98) {
               cVar5 = operator == ( (char*)( lVar16 + 0x10 ),pSVar9 );
               if (cVar5 != '\0') {
                  if (*(undefined1**)( pSVar9 + 8 ) != (undefined1*)0x0) {
                     **(undefined1**)( pSVar9 + 8 ) = 1;
                  }

                  String::ascii(SUB81((CharString*)&local_398, 0));
                  lVar20 = *(long*)( this + 0x30 );
                  if (( lVar20 == 0 ) || ( lVar16 = lVar16 == 0 )) goto LAB_00118b9a;
                  lVar7 = 0;
                  goto LAB_00118b74;
               }

            }

            if (*(undefined1**)( pSVar9 + 8 ) != (undefined1*)0x0) {
               **(undefined1**)( pSVar9 + 8 ) = 0;
               goto LAB_00118ca8;
            }

            local_398 = (char*)0x0;
            local_380 = (void*)0xb;
            local_388 = " extension!";
            String::parse_latin1((StrRange*)&local_398);
            local_388 = "OpenXR: OpenXR Runtime does not support ";
            local_3b8 = 0;
            local_380 = (void*)0x28;
            String::parse_latin1((StrRange*)&local_3b8);
            String::operator +((String*)local_3b0, (String*)&local_3b8);
            String::operator +((String*)&local_388, (String*)local_3b0);
            _err_print_error(_LC432, "modules/openxr/openxr_api.cpp", 0x230, "Method/function failed. Returning: false", (String*)&local_388, 0, 0);
            pcVar10 = local_388;
            if (local_388 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_388 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_388 = (char*)0x0;
                  Memory::free_static(pcVar10 + -0x10, false);
               }

            }

            lVar20 = local_3b0[0];
            if (local_3b0[0] != 0) {
               LOCK();
               plVar1 = (long*)( local_3b0[0] + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_3b0[0] = 0;
                  Memory::free_static((void*)( lVar20 + -0x10 ), false);
               }

            }

            lVar20 = local_3b8;
            if (local_3b8 != 0) {
               LOCK();
               plVar1 = (long*)( local_3b8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_3b8 = 0;
                  Memory::free_static((void*)( lVar20 + -0x10 ), false);
               }

            }

            pcVar10 = local_398;
            if (local_398 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_398 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_398 = (char*)0x0;
                  Memory::free_static(pcVar10 + -0x10, false);
               }

            }

            uVar12 = 0;
            goto LAB_00119738;
         }

         LAB_00118cba:local_390 = 0;
         lVar20 = *(long*)( this + 0x30 );
         lVar16 = lVar20;
         if (lVar20 != 0) {
            lVar7 = 0;
            LAB_00118d4b:do {
               lVar16 = local_390;
               if (*(long*)( lVar20 + -8 ) <= lVar7) break;
               cVar5 = is_print_verbose_enabled();
               if (cVar5 != '\0') {
                  if (*(long*)( this + 0x30 ) != 0) {
                     lVar20 = *(long*)( *(long*)( this + 0x30 ) + -8 );
                     if (lVar20 <= lVar7) goto LAB_001195ad;
                     pcVar10 = (char*)CharString::get_data();
                     local_3b8 = 0;
                     sVar11 = 0;
                     if (pcVar10 != (char*)0x0) {
                        sVar11 = strlen(pcVar10);
                     }

                     local_388 = pcVar10;
                     local_380 = (void*)sVar11;
                     String::parse_latin1((StrRange*)&local_3b8);
                     local_388 = "OpenXR: Enabling extension ";
                     local_3c0 = 0;
                     local_380 = (void*)0x1b;
                     String::parse_latin1((StrRange*)&local_3c0);
                     String::operator +((String*)local_3b0, (String*)&local_3c0);
                     Variant::Variant((Variant*)local_188, (String*)local_3b0);
                     stringify_variants((Variant*)&local_388);
                     __print_line((String*)&local_388);
                     pcVar10 = local_388;
                     if (local_388 != (char*)0x0) {
                        LOCK();
                        plVar1 = (long*)( local_388 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_388 = (char*)0x0;
                           Memory::free_static(pcVar10 + -0x10, false);
                        }

                     }

                     if (Variant::needs_deinit[local_188[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     lVar20 = local_3b0[0];
                     if (local_3b0[0] != 0) {
                        LOCK();
                        plVar1 = (long*)( local_3b0[0] + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_3b0[0] = 0;
                           Memory::free_static((void*)( lVar20 + -0x10 ), false);
                        }

                     }

                     lVar20 = local_3c0;
                     if (local_3c0 != 0) {
                        LOCK();
                        plVar1 = (long*)( local_3c0 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_3c0 = 0;
                           Memory::free_static((void*)( lVar20 + -0x10 ), false);
                        }

                     }

                     lVar20 = local_3b8;
                     if (local_3b8 != 0) {
                        LOCK();
                        plVar1 = (long*)( local_3b8 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_3b8 = 0;
                           Memory::free_static((void*)( lVar20 + -0x10 ), false);
                        }

                     }

                     goto LAB_00118ef8;
                  }

                  LAB_001195aa:lVar20 = 0;
                  LAB_001195ad:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar20, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar4 = (code*)invalidInstructionException();
                  ( *pcVar4 )();
               }

               LAB_00118ef8:if (*(long*)( this + 0x30 ) == 0) goto LAB_001195aa;
               lVar20 = *(long*)( *(long*)( this + 0x30 ) + -8 );
               if (lVar20 <= lVar7) goto LAB_001195ad;
               uVar12 = CharString::get_data();
               if (local_390 == 0) {
                  lVar20 = 1;
               }
 else {
                  lVar20 = *(long*)( local_390 + -8 ) + 1;
               }

               iVar6 = CowData<char_const*>::resize<false>((CowData<char_const*>*)&local_390, lVar20);
               if (iVar6 == 0) {
                  if (local_390 == 0) {
                     lVar16 = -1;
                     lVar20 = 0;
                     LAB_00119775:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar16, lVar20, "p_index", "size()", "", false, false);
                  }
 else {
                     lVar20 = *(long*)( local_390 + -8 );
                     lVar16 = lVar20 + -1;
                     if (lVar16 < 0) goto LAB_00119775;
                     CowData<char_const*>::_copy_on_write((CowData<char_const*>*)&local_390);
                     *(undefined8*)( local_390 + lVar16 * 8 ) = uVar12;
                  }

                  lVar20 = *(long*)( this + 0x30 );
                  lVar7 = lVar7 + 1;
                  lVar16 = local_390;
                  if (lVar20 == 0) break;
                  goto LAB_00118d4b;
               }

               lVar7 = lVar7 + 1;
               _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
               lVar20 = *(long*)( this + 0x30 );
               lVar16 = local_390;
            }
 while ( lVar20 != 0 );
         }

         pcVar10 = "Godot Engine";
         puVar15 = local_298;
         for (lVar20 = 0x22; lVar20 != 0; lVar20 = lVar20 + -1) {
            *puVar15 = *(undefined8*)pcVar10;
            pcVar10 = pcVar10 + ( (ulong)bVar22 * -2 + 1 ) * 8;
            puVar15 = puVar15 + (ulong)bVar22 * -2 + 1;
         }

         CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
         puVar19 = (undefined8*)registered_extension_wrappers._8_8_;
         CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
         puVar15 = (undefined8*)registered_extension_wrappers._8_8_;
         if (registered_extension_wrappers._8_8_ != 0) {
            puVar15 = (undefined8*)( registered_extension_wrappers._8_8_ + *(long*)( registered_extension_wrappers._8_8_ + -8 ) * 8 );
         }

         lVar20 = 0;
         for (; puVar19 != puVar15; puVar19 = puVar19 + 1) {
            lVar7 = ( **(code**)( *(long*)*puVar19 + 0x10 ) )((long*)*puVar19, lVar20);
            if (lVar7 != 0) {
               lVar20 = lVar7;
            }

         }

         piVar18 = local_188;
         for (lVar7 = 0x29; lVar7 != 0; lVar7 = lVar7 + -1) {
            piVar18[0] = 0;
            piVar18[1] = 0;
            piVar18 = piVar18 + ( (ulong)bVar22 * -2 + 1 ) * 2;
         }

         local_180 = lVar20;
         local_188[0] = 3;
         puVar15 = local_298;
         puVar19 = local_170;
         for (lVar20 = 0x22; lVar20 != 0; lVar20 = lVar20 + -1) {
            *puVar19 = *puVar15;
            puVar15 = puVar15 + (ulong)bVar22 * -2 + 1;
            puVar19 = puVar19 + (ulong)bVar22 * -2 + 1;
         }

         if (lVar16 == 0) {
            local_50 = 0;
         }
 else {
            local_50 = *(undefined4*)( lVar16 + -8 );
         }

         local_48 = lVar16;
         ProjectSettings::get_singleton();
         StringName::StringName((StringName*)&local_388, "application/config/name", false);
         ProjectSettings::get_setting_with_override((StringName*)local_338);
         Variant::operator_cast_to_String((Variant*)&local_3d0);
         if (Variant::needs_deinit[local_338[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (( StringName::configured != '\0' ) && ( local_388 != (char*)0x0 )) {
            StringName::unref();
         }

         if (( local_3d0 != 0 ) && ( 1 < *(uint*)( local_3d0 + -8 ) )) {
            local_388 = (char*)0x0;
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_388, (CowData*)&local_3d0);
            copy_string_to_char_buffer(this, (StringName*)&local_388, local_170, 0x80);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_388);
         }

         if (( *(code**)( this + 0x218 ) == (code*)0x0 ) || ( iVar6 = iVar6 < 0 )) {
            uVar12 = 0;
            _err_print_error(_LC432, "modules/openxr/openxr_api.cpp", 0x26c, "Condition \"((result) < 0)\" is true. Returning: false", "Failed to create XR instance.", 0, 0);
            goto LAB_00119323;
         }

         local_338[0] = 0x20;
         pcVar10 = "xrGetInstanceProperties";
         local_320 = (undefined1[16])0x0;
         local_330 = 0;
         local_328 = 0;
         local_310 = (undefined1[16])0x0;
         local_300 = (undefined1[16])0x0;
         local_2f0 = (undefined1[16])0x0;
         local_2e0 = (undefined1[16])0x0;
         local_2d0 = (undefined1[16])0x0;
         local_2c0 = (undefined1[16])0x0;
         local_2b0 = (undefined1[16])0x0;
         iVar6 = xrGetInstanceProcAddr(*(undefined8*)( this + 0xd0 ), "xrGetInstanceProperties", this + 0x2d0);
         if (( iVar6 != 0 ) && ( get_instance_proc_addr("xrGetInstanceProperties", (_func_void*)pcVar10),iVar6 < 0 )) {
            uVar12 = 0;
            _err_print_error(_LC432, "modules/openxr/openxr_api.cpp", 0x277, "Condition \"((get_instance_proc_addr_result) < 0)\" is true. Returning: false", 0, 0);
            goto LAB_00119323;
         }

         if (*(code**)( this + 0x2d0 ) == (code*)0x0) {
            iVar6 = -0xc;
            LAB_00119212:get_error_string((StringName*)&local_388, this, iVar6);
            Variant::Variant((Variant*)local_358, "OpenXR: Failed to get XR instance properties [");
            print_line<String,char_const*>((Variant*)local_358, (StringName*)&local_388, &_LC164);
            if (Variant::needs_deinit[local_358[0]] != '\0') {
               Variant::_clear_internal();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_388);
            local_388 = "";
            local_380 = (void*)0x0;
            String::parse_latin1((StrRange*)( this + 0x88 ));
            local_388 = "";
            local_380 = (void*)0x0;
            String::parse_latin1((StrRange*)( this + 0x90 ));
         }
 else {
            iVar6 = ( **(code**)( this + 0x2d0 ) )(*(undefined8*)( this + 0xd0 ), (StringName*)local_338);
            if (iVar6 < 0) goto LAB_00119212;
            local_380 = (void*)strlen(local_320);
            local_388 = local_320;
            String::parse_latin1((StrRange*)( this + 0x88 ));
            OpenXRUtil::make_xr_version_string(( ulong ) & local_388);
            if (*(char**)( this + 0x90 ) != local_388) {
               CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x90 ));
               pcVar10 = local_388;
               local_388 = (char*)0x0;
               *(char**)( this + 0x90 ) = pcVar10;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_388);
            local_3c0 = 0;
            if (*(long*)( this + 0x90 ) == 0) {
               local_3c8 = 0;
               if (*(long*)( this + 0x88 ) != 0) goto LAB_0011996c;
               Variant::Variant((Variant*)local_358, "OpenXR: Running on OpenXR runtime: ");
               LAB_00119b8b:local_3b0[0] = 0;
               local_3b8 = 0;
            }
 else {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_3c0, (CowData*)( this + 0x90 ));
               lVar20 = local_3c0;
               local_3c8 = 0;
               if (*(long*)( this + 0x88 ) == 0) {
                  Variant::Variant((Variant*)local_358, "OpenXR: Running on OpenXR runtime: ");
                  local_3b0[0] = 0;
                  if (lVar20 == 0) goto LAB_00119b8b;
                  CowData<char32_t>::_ref((CowData<char32_t>*)local_3b0, (CowData*)&local_3c0);
                  local_3b8 = 0;
               }
 else {
                  LAB_0011996c:lVar7 = local_3c0;
                  local_400 = (CowData*)&local_3c0;
                  local_3c8 = 0;
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_3c8, (CowData*)( this + 0x88 ));
                  lVar20 = local_3c8;
                  Variant::Variant((Variant*)local_358, "OpenXR: Running on OpenXR runtime: ");
                  local_3b0[0] = 0;
                  if (lVar7 != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)local_3b0, local_400);
                  }

                  local_3b8 = 0;
                  if (lVar20 != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_3b8, (CowData*)&local_3c8);
                  }

               }

            }

            local_3f0 = (CowData<char32_t>*)&local_3c8;
            local_400 = (CowData*)&local_3c0;
            stringify_variants<String,char_const*,String>((StringName*)&local_388, local_358, (CowData<char32_t>*)&local_3b8, &_LC250, (CowData<char32_t>*)local_3b0);
            __print_line((String*)&local_388);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_388);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_3b8);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_3b0);
            if (Variant::needs_deinit[local_358[0]] != '\0') {
               Variant::_clear_internal();
            }

            CowData<char32_t>::_unref(local_3f0);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_400);
         }

         CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
         puVar19 = (undefined8*)registered_extension_wrappers._8_8_;
         CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
         puVar15 = (undefined8*)registered_extension_wrappers._8_8_;
         if (registered_extension_wrappers._8_8_ != 0) {
            puVar15 = (undefined8*)( registered_extension_wrappers._8_8_ + *(long*)( registered_extension_wrappers._8_8_ + -8 ) * 8 );
         }

         for (; puVar19 != puVar15; puVar19 = puVar19 + 1) {
            ( **(code**)( *(long*)*puVar19 + 0x50 ) )();
         }

         uVar12 = 1;
         LAB_00119323:CowData<char32_t>::_unref((CowData<char32_t>*)&local_3d0);
         if (lVar16 != 0) {
            LOCK();
            plVar1 = (long*)( lVar16 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_390 + -0x10 ), false);
            }

         }

         LAB_00119738:CowData<OpenXRAPI::create_instance()::RequestExtension > ::_unref((CowData<OpenXRAPI::create_instance()::RequestExtension>*)&local_3a0);
         if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return uVar12;
         LAB_00118b74:if (lVar16 <= lVar7) goto LAB_00118b9a;
         cVar5 = CharString::operator ==((CharString*)( lVar20 + lVar7 * 8 ), (CharString*)&local_398);
         if (cVar5 != '\0') goto LAB_00118c78;
         lVar20 = *(long*)( this + 0x30 );
         lVar7 = lVar7 + 1;
         if (lVar20 == 0) goto LAB_00118b9a;
         lVar16 = *(long*)( lVar20 + -8 );
         goto LAB_00118b74;
         LAB_00118b9a:local_388 = (char*)0x0;
         plVar1 = (long*)( local_398 + -0x10 );
         if (local_398 == (char*)0x0) {
            LAB_00118be6:pcVar10 = local_398;
            if (lVar20 != 0) goto LAB_00118bef;
            LAB_00119569:iVar6 = CowData<CharString>::resize<false>(this_00, 1);
         }
 else {
            do {
               lVar20 = *plVar1;
               if (lVar20 == 0) goto LAB_00119554;
               LOCK();
               lVar16 = *plVar1;
               bVar21 = lVar20 == lVar16;
               if (bVar21) {
                  *plVar1 = lVar20 + 1;
                  lVar16 = lVar20;
               }

               UNLOCK();
            }
 while ( !bVar21 );
            if (lVar16 != -1) {
               lVar20 = *(long*)( this + 0x30 );
               local_388 = local_398;
               goto LAB_00118be6;
            }

            LAB_00119554:lVar20 = *(long*)( this + 0x30 );
            pcVar10 = (char*)0x0;
            if (lVar20 == 0) goto LAB_00119569;
            LAB_00118bef:iVar6 = CowData<CharString>::resize<false>(this_00, *(long*)( lVar20 + -8 ) + 1);
         }

         if (iVar6 == 0) {
            if (*(long*)( this + 0x30 ) == 0) {
               lVar16 = -1;
               lVar20 = 0;
            }
 else {
               lVar20 = *(long*)( *(long*)( this + 0x30 ) + -8 );
               lVar16 = lVar20 + -1;
               if (-1 < lVar16) {
                  CowData<CharString>::_copy_on_write(this_00);
                  this_01 = (CowData<char>*)( *(long*)( this + 0x30 ) + lVar16 * 8 );
                  if (pcVar10 != *(char**)this_01) {
                     CowData<char>::_ref(this_01, (CowData*)&local_388);
                  }

                  goto LAB_00118c55;
               }

            }

            _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar16, lVar20, "p_index", "size()", "", false, false);
         }
 else {
            _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
         }

         LAB_00118c55:if (pcVar10 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( pcVar10 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static(local_388 + -0x10, false);
            }

         }

         LAB_00118c78:pcVar10 = local_398;
         if (local_398 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_398 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_398 = (char*)0x0;
               Memory::free_static(pcVar10 + -0x10, false);
            }

         }

         LAB_00118ca8:pSVar9 = pSVar9 + 0x10;
         if (pSVar14 == pSVar9) goto LAB_00118cba;
         goto LAB_00118b00;
      }

      /* OpenXRAPI::initialize(String const&) */
      undefined8 OpenXRAPI::initialize(OpenXRAPI *this, String *param_1) {
         char cVar1;
         OpenXRExtensionWrapper *pOVar2;
         OpenXRFBUpdateSwapchainExtension *this_00;
         OpenXRFBFoveationExtension *this_01;
         undefined8 uVar3;
         undefined8 *puVar4;
         undefined8 *puVar5;
         if (*(long*)( this + 0xd0 ) == 0) {
            cVar1 = openxr_loader_init(this);
            if (cVar1 != '\0') {
               cVar1 = String::operator ==(param_1, "vulkan");
               if (cVar1 == '\0') {
                  cVar1 = String::operator ==(param_1, "metal");
                  if (cVar1 != '\0') {
                     _err_print_error("initialize", "modules/openxr/openxr_api.cpp", 0x650, "Method/function failed. Returning: false", 0, 0);
                     return 0;
                  }

                  cVar1 = String::operator ==(param_1, "opengl3");
                  if (cVar1 == '\0') {
                     _err_print_error("initialize", "modules/openxr/openxr_api.cpp", 0x65b, "Method/function failed. Returning: false", "OpenXR: Unsupported rendering device.", 0, 0);
                     return 0;
                  }

                  pOVar2 = (OpenXRExtensionWrapper*)operator_new(0x18, "");
                  *(code**)pOVar2 = __cxa_atexit;
                  *(undefined1(*) [16])( pOVar2 + 8 ) = (undefined1[16])0x0;
                  *(OpenXRExtensionWrapper**)( this + 0x148 ) = pOVar2;
                  Vector<OpenXRExtensionWrapper*>::push_back((Vector<OpenXRExtensionWrapper*>*)registered_extension_wrappers, pOVar2);
               }
 else {
                  pOVar2 = (OpenXRExtensionWrapper*)operator_new(0x58, "");
                  *(undefined***)pOVar2 = &PTR___cxa_pure_virtual_001262f8;
                  VulkanHooks::VulkanHooks((VulkanHooks*)( pOVar2 + 8 ));
                  *(undefined8*)( pOVar2 + 0x20 ) = 0;
                  *(undefined8*)( pOVar2 + 0x28 ) = 0xffffffffffffffff;
                  *(undefined8*)( pOVar2 + 0x50 ) = 0;
                  *(code**)pOVar2 = OpenXRFBFoveationExtension::OpenXRFBFoveationExtension;
                  *(undefined8*)( pOVar2 + 8 ) = 0x12c5b8;
                  *(undefined1(*) [16])( pOVar2 + 0x10 ) = (undefined1[16])0x0;
                  *(undefined1(*) [16])( pOVar2 + 0x30 ) = (undefined1[16])0x0;
                  *(undefined1(*) [16])( pOVar2 + 0x40 ) = (undefined1[16])0x0;
                  *(OpenXRExtensionWrapper**)( this + 0x148 ) = pOVar2;
                  Vector<OpenXRExtensionWrapper*>::push_back((Vector<OpenXRExtensionWrapper*>*)registered_extension_wrappers, pOVar2);
               }

               this_00 = (OpenXRFBUpdateSwapchainExtension*)operator_new(0x28, "");
               OpenXRFBUpdateSwapchainExtension::OpenXRFBUpdateSwapchainExtension(this_00, param_1);
               Vector<OpenXRExtensionWrapper*>::push_back((Vector<OpenXRExtensionWrapper*>*)registered_extension_wrappers, (OpenXRExtensionWrapper*)this_00);
               this_01 = (OpenXRFBFoveationExtension*)operator_new(0x50, "");
               OpenXRFBFoveationExtension::OpenXRFBFoveationExtension(this_01, param_1);
               Vector<OpenXRExtensionWrapper*>::push_back((Vector<OpenXRExtensionWrapper*>*)registered_extension_wrappers, (OpenXRExtensionWrapper*)this_01);
               CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
               puVar4 = (undefined8*)registered_extension_wrappers._8_8_;
               CowData<OpenXRExtensionWrapper*>::_copy_on_write((CowData<OpenXRExtensionWrapper*>*)( registered_extension_wrappers + 8 ));
               puVar5 = (undefined8*)registered_extension_wrappers._8_8_;
               if (registered_extension_wrappers._8_8_ != 0) {
                  puVar5 = (undefined8*)( registered_extension_wrappers._8_8_ + *(long*)( registered_extension_wrappers._8_8_ + -8 ) * 8 );
               }

               for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
                  ( **(code**)( *(long*)*puVar4 + 0x48 ) )();
               }

               cVar1 = load_layer_properties(this);
               if (( ( ( ( cVar1 != '\0' ) && ( cVar1 = load_supported_extensions(this) ),cVar1 != '\0' ) ) && ( cVar1 = create_instance(this) ),cVar1 != '\0' )) &&( ( cVar1 = resolve_instance_openxr_symbols(this) ),cVar1 != '\0' && ( cVar1 = cVar1 != '\0' ) ) && ( ( cVar1 = load_supported_view_configuration_types(this) ),cVar1 != '\0' && ( ( cVar1 = load_supported_view_configuration_views(this, *(undefined4*)( this + 0x9c )) ),cVar1 != '\0' && ( uVar3 = load_supported_environmental_blend_modes(this) ),(char)uVar3 != '\0' ) );
            }

            destroy_instance(this);
         }

      }

      else{_err_print_error("initialize", "modules/openxr/openxr_api.cpp", 0x63c, "Condition \"instance != nullptr\" is true. Returning: false", "OpenXR instance was already created", 0, 0);
   }

   return 0;
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* OpenXRExtensionWrapper::set_system_properties_and_get_next_pointer(void*) */void *__thiscallOpenXRExtensionWrapper::set_system_properties_and_get_next_pointer(OpenXRExtensionWrapper *this, void *param_1) {
   return param_1;
}
/* OpenXRExtensionWrapper::set_instance_create_info_and_get_next_pointer(void*) */void *__thiscallOpenXRExtensionWrapper::set_instance_create_info_and_get_next_pointer(OpenXRExtensionWrapper *this, void *param_1) {
   return param_1;
}
/* OpenXRExtensionWrapper::set_session_create_and_get_next_pointer(void*) */void *__thiscallOpenXRExtensionWrapper::set_session_create_and_get_next_pointer(OpenXRExtensionWrapper *this, void *param_1) {
   return param_1;
}
/* OpenXRExtensionWrapper::set_swapchain_create_info_and_get_next_pointer(void*) */void *__thiscallOpenXRExtensionWrapper::set_swapchain_create_info_and_get_next_pointer(OpenXRExtensionWrapper *this, void *param_1) {
   return param_1;
}
/* OpenXRExtensionWrapper::set_hand_joint_locations_and_get_next_pointer(int, void*) */void *__thiscallOpenXRExtensionWrapper::set_hand_joint_locations_and_get_next_pointer(OpenXRExtensionWrapper *this, int param_1, void *param_2) {
   return param_2;
}
/* OpenXRExtensionWrapper::set_projection_views_and_get_next_pointer(int, void*) */void *__thiscallOpenXRExtensionWrapper::set_projection_views_and_get_next_pointer(OpenXRExtensionWrapper *this, int param_1, void *param_2) {
   return param_2;
}
/* OpenXRExtensionWrapper::get_suggested_tracker_names() */OpenXRExtensionWrapper * OpenXRExtensionWrapper::get_suggested_tracker_names(OpenXRExtensionWrapper * this) * (undefined8*)( this + 8 ) = 0 ;return this;}/* OpenXRExtensionWrapper::on_register_metadata() */void OpenXRExtensionWrapper::on_register_metadata(void) {
   return;
}
/* OpenXRExtensionWrapper::on_before_instance_created() */void OpenXRExtensionWrapper::on_before_instance_created(void) {
   return;
}
/* OpenXRExtensionWrapper::on_instance_created(XrInstance_T*) */void OpenXRExtensionWrapper::on_instance_created(XrInstance_T *param_1) {
   return;
}
/* OpenXRExtensionWrapper::on_instance_destroyed() */void OpenXRExtensionWrapper::on_instance_destroyed(void) {
   return;
}
/* OpenXRExtensionWrapper::on_session_created(XrSession_T*) */void OpenXRExtensionWrapper::on_session_created(XrSession_T *param_1) {
   return;
}
/* OpenXRExtensionWrapper::on_session_destroyed() */void OpenXRExtensionWrapper::on_session_destroyed(void) {
   return;
}
/* OpenXRExtensionWrapper::on_process() */void OpenXRExtensionWrapper::on_process(void) {
   return;
}
/* OpenXRExtensionWrapper::on_pre_render() */void OpenXRExtensionWrapper::on_pre_render(void) {
   return;
}
/* OpenXRExtensionWrapper::on_main_swapchains_created() */void OpenXRExtensionWrapper::on_main_swapchains_created(void) {
   return;
}
/* OpenXRExtensionWrapper::on_pre_draw_viewport(RID) */void OpenXRExtensionWrapper::on_pre_draw_viewport(void) {
   return;
}
/* OpenXRExtensionWrapper::on_post_draw_viewport(RID) */void OpenXRExtensionWrapper::on_post_draw_viewport(void) {
   return;
}
/* OpenXRExtensionWrapper::on_state_idle() */void OpenXRExtensionWrapper::on_state_idle(void) {
   return;
}
/* OpenXRExtensionWrapper::on_state_ready() */void OpenXRExtensionWrapper::on_state_ready(void) {
   return;
}
/* OpenXRExtensionWrapper::on_state_synchronized() */void OpenXRExtensionWrapper::on_state_synchronized(void) {
   return;
}
/* OpenXRExtensionWrapper::on_state_visible() */void OpenXRExtensionWrapper::on_state_visible(void) {
   return;
}
/* OpenXRExtensionWrapper::on_state_focused() */void OpenXRExtensionWrapper::on_state_focused(void) {
   return;
}
/* OpenXRExtensionWrapper::on_state_stopping() */void OpenXRExtensionWrapper::on_state_stopping(void) {
   return;
}
/* OpenXRExtensionWrapper::on_state_loss_pending() */void OpenXRExtensionWrapper::on_state_loss_pending(void) {
   return;
}
/* OpenXRExtensionWrapper::on_state_exiting() */void OpenXRExtensionWrapper::on_state_exiting(void) {
   return;
}
/* OpenXRExtensionWrapper::set_viewport_composition_layer_and_get_next_pointer(XrCompositionLayerBaseHeader
   const*, Dictionary const&, void*) */void OpenXRExtensionWrapper::set_viewport_composition_layer_and_get_next_pointer(XrCompositionLayerBaseHeader *param_1, Dictionary *param_2, void *param_3) {
   return;
}
/* OpenXRExtensionWrapper::on_viewport_composition_layer_destroyed(XrCompositionLayerBaseHeader
   const*) */void OpenXRExtensionWrapper::on_viewport_composition_layer_destroyed(XrCompositionLayerBaseHeader *param_1) {
   return;
}
/* OpenXRExtensionWrapper::get_viewport_composition_layer_extension_properties(List<PropertyInfo,
   DefaultAllocator>*) */void OpenXRExtensionWrapper::get_viewport_composition_layer_extension_properties(List *param_1) {
   return;
}
/* OpenXRExtensionWrapper::set_android_surface_swapchain_create_info_and_get_next_pointer(Dictionary
   const&, void*) */void *__thiscallOpenXRExtensionWrapper::set_android_surface_swapchain_create_info_and_get_next_pointer(OpenXRExtensionWrapper *this, Dictionary *param_1, void *param_2) {
   return param_2;
}
/* OpenXRExtensionWrapper::on_event_polled(XrEventDataBuffer const&) */undefined8 OpenXRExtensionWrapper::on_event_polled(XrEventDataBuffer *param_1) {
   return 0;
}
/* Vector<OpenXRExtensionWrapper*>::~Vector() */void Vector<OpenXRExtensionWrapper*>::~Vector(Vector<OpenXRExtensionWrapper*> *this) {
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
         return;
      }

   }

   return;
}
/* CallableCustomStaticMethodPointer<void, Rect2i const&>::~CallableCustomStaticMethodPointer() */void CallableCustomStaticMethodPointer<void,Rect2i_const&>::~CallableCustomStaticMethodPointer(CallableCustomStaticMethodPointer<void,Rect2i_const&> *this) {
   return;
}
/* CallableCustomStaticMethodPointer<void, double>::~CallableCustomStaticMethodPointer() */void CallableCustomStaticMethodPointer<void,double>::~CallableCustomStaticMethodPointer(CallableCustomStaticMethodPointer<void,double> *this) {
   return;
}
/* CallableCustomStaticMethodPointer<void, unsigned long>::~CallableCustomStaticMethodPointer() */void CallableCustomStaticMethodPointer<void,unsigned_long>::~CallableCustomStaticMethodPointer(CallableCustomStaticMethodPointer<void,unsigned_long> *this) {
   return;
}
/* CallableCustomStaticMethodPointer<void, long, bool>::~CallableCustomStaticMethodPointer() */void CallableCustomStaticMethodPointer<void,long,bool>::~CallableCustomStaticMethodPointer(CallableCustomStaticMethodPointer<void,long,bool> *this) {
   return;
}
/* CallableCustomStaticMethodPointer<void, bool>::~CallableCustomStaticMethodPointer() */void CallableCustomStaticMethodPointer<void,bool>::~CallableCustomStaticMethodPointer(CallableCustomStaticMethodPointer<void,bool> *this) {
   return;
}
/* CallableCustomStaticMethodPointer<void, unsigned int, bool>::~CallableCustomStaticMethodPointer()
    */void CallableCustomStaticMethodPointer<void,unsigned_int,bool>::~CallableCustomStaticMethodPointer(CallableCustomStaticMethodPointer<void,unsigned_int,bool> *this) {
   return;
}
/* CallableCustomStaticMethodPointer<void, Rect2i const&>::is_valid() const */undefined8 CallableCustomStaticMethodPointer<void,Rect2i_const&>::is_valid(void) {
   return 1;
}
/* CallableCustomStaticMethodPointer<void, Rect2i const&>::get_object() const */undefined8 CallableCustomStaticMethodPointer<void,Rect2i_const&>::get_object(void) {
   return 0;
}
/* CallableCustomStaticMethodPointer<void, Rect2i const&>::get_argument_count(bool&) const */undefined8 CallableCustomStaticMethodPointer<void,Rect2i_const&>::get_argument_count(CallableCustomStaticMethodPointer<void,Rect2i_const&> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomStaticMethodPointer<void, double>::is_valid() const */undefined8 CallableCustomStaticMethodPointer<void,double>::is_valid(void) {
   return 1;
}
/* CallableCustomStaticMethodPointer<void, double>::get_object() const */undefined8 CallableCustomStaticMethodPointer<void,double>::get_object(void) {
   return 0;
}
/* CallableCustomStaticMethodPointer<void, double>::get_argument_count(bool&) const */undefined8 CallableCustomStaticMethodPointer<void,double>::get_argument_count(CallableCustomStaticMethodPointer<void,double> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomStaticMethodPointer<void, unsigned long>::is_valid() const */undefined8 CallableCustomStaticMethodPointer<void,unsigned_long>::is_valid(void) {
   return 1;
}
/* CallableCustomStaticMethodPointer<void, unsigned long>::get_object() const */undefined8 CallableCustomStaticMethodPointer<void,unsigned_long>::get_object(void) {
   return 0;
}
/* CallableCustomStaticMethodPointer<void, unsigned long>::get_argument_count(bool&) const */undefined8 CallableCustomStaticMethodPointer<void,unsigned_long>::get_argument_count(CallableCustomStaticMethodPointer<void,unsigned_long> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomStaticMethodPointer<void, long, bool>::is_valid() const */undefined8 CallableCustomStaticMethodPointer<void,long,bool>::is_valid(void) {
   return 1;
}
/* CallableCustomStaticMethodPointer<void, long, bool>::get_object() const */undefined8 CallableCustomStaticMethodPointer<void,long,bool>::get_object(void) {
   return 0;
}
/* CallableCustomStaticMethodPointer<void, long, bool>::get_argument_count(bool&) const */undefined8 CallableCustomStaticMethodPointer<void,long,bool>::get_argument_count(CallableCustomStaticMethodPointer<void,long,bool> *this, bool *param_1) {
   *param_1 = true;
   return 2;
}
/* CallableCustomStaticMethodPointer<void, bool>::is_valid() const */undefined8 CallableCustomStaticMethodPointer<void,bool>::is_valid(void) {
   return 1;
}
/* CallableCustomStaticMethodPointer<void, bool>::get_object() const */undefined8 CallableCustomStaticMethodPointer<void,bool>::get_object(void) {
   return 0;
}
/* CallableCustomStaticMethodPointer<void, bool>::get_argument_count(bool&) const */undefined8 CallableCustomStaticMethodPointer<void,bool>::get_argument_count(CallableCustomStaticMethodPointer<void,bool> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomStaticMethodPointer<void, unsigned int, bool>::is_valid() const */undefined8 CallableCustomStaticMethodPointer<void,unsigned_int,bool>::is_valid(void) {
   return 1;
}
/* CallableCustomStaticMethodPointer<void, unsigned int, bool>::get_object() const */undefined8 CallableCustomStaticMethodPointer<void,unsigned_int,bool>::get_object(void) {
   return 0;
}
/* CallableCustomStaticMethodPointer<void, unsigned int, bool>::get_argument_count(bool&) const */undefined8 CallableCustomStaticMethodPointer<void,unsigned_int,bool>::get_argument_count(CallableCustomStaticMethodPointer<void,unsigned_int,bool> *this, bool *param_1) {
   *param_1 = true;
   return 2;
}
/* Vector<OpenXRAPI::OpenXRSwapChainInfo>::~Vector() */void Vector<OpenXRAPI::OpenXRSwapChainInfo>::~Vector(Vector<OpenXRAPI::OpenXRSwapChainInfo> *this) {
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
         return;
      }

   }

   return;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* CallableCustomStaticMethodPointer<void, unsigned long>::~CallableCustomStaticMethodPointer() */void CallableCustomStaticMethodPointer<void,unsigned_long>::~CallableCustomStaticMethodPointer(CallableCustomStaticMethodPointer<void,unsigned_long> *this) {
   operator_delete(this, 0x30);
   return;
}
/* CallableCustomStaticMethodPointer<void, bool>::~CallableCustomStaticMethodPointer() */void CallableCustomStaticMethodPointer<void,bool>::~CallableCustomStaticMethodPointer(CallableCustomStaticMethodPointer<void,bool> *this) {
   operator_delete(this, 0x30);
   return;
}
/* CallableCustomStaticMethodPointer<void, unsigned int, bool>::~CallableCustomStaticMethodPointer()
    */void CallableCustomStaticMethodPointer<void,unsigned_int,bool>::~CallableCustomStaticMethodPointer(CallableCustomStaticMethodPointer<void,unsigned_int,bool> *this) {
   operator_delete(this, 0x30);
   return;
}
/* CallableCustomStaticMethodPointer<void, long, bool>::~CallableCustomStaticMethodPointer() */void CallableCustomStaticMethodPointer<void,long,bool>::~CallableCustomStaticMethodPointer(CallableCustomStaticMethodPointer<void,long,bool> *this) {
   operator_delete(this, 0x30);
   return;
}
/* CallableCustomStaticMethodPointer<void, double>::~CallableCustomStaticMethodPointer() */void CallableCustomStaticMethodPointer<void,double>::~CallableCustomStaticMethodPointer(CallableCustomStaticMethodPointer<void,double> *this) {
   operator_delete(this, 0x30);
   return;
}
/* CallableCustomStaticMethodPointer<void, Rect2i const&>::~CallableCustomStaticMethodPointer() */void CallableCustomStaticMethodPointer<void,Rect2i_const&>::~CallableCustomStaticMethodPointer(CallableCustomStaticMethodPointer<void,Rect2i_const&> *this) {
   operator_delete(this, 0x30);
   return;
}
/* OpenXRExtensionWrapper::get_viewport_composition_layer_extension_property_defaults() */OpenXRExtensionWrapper * __thiscall
OpenXRExtensionWrapper::get_viewport_composition_layer_extension_property_defaults
          (OpenXRExtensionWrapper *this){
   Dictionary::Dictionary((Dictionary*)this);
   return this;
}
/* CallableCustomStaticMethodPointer<void, unsigned int, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomStaticMethodPointer<void,unsigned_int,bool>::call(CallableCustomStaticMethodPointer<void,unsigned_int,bool> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   undefined8 uVar2;
   char cVar3;
   bool bVar4;
   uint uVar5;
   UNRECOVERED_JUMPTABLE = *(code**)( this + 0x28 );
   if (2 < (uint)param_2) {
      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 2;
      return;
   }

   if (param_2 != 2) {
      *(undefined4*)param_4 = 4;
      *(undefined4*)( param_4 + 8 ) = 2;
      return;
   }

   pVVar1 = param_1[1];
   *(undefined4*)param_4 = 0;
   cVar3 = Variant::can_convert_strict(*(undefined4*)pVVar1, 1);
   uVar2 = _LC14;
   if (cVar3 == '\0') {
      *(undefined4*)param_4 = 2;
      *(undefined8*)( param_4 + 4 ) = uVar2;
   }

   bVar4 = Variant::operator_cast_to_bool(param_1[1]);
   cVar3 = Variant::can_convert_strict(*(undefined4*)*param_1, 2);
   uVar2 = _LC15;
   if (cVar3 == '\0') {
      *(undefined4*)param_4 = 2;
      *(undefined8*)( param_4 + 4 ) = uVar2;
   }

   uVar5 = Variant::operator_cast_to_unsigned_int(*param_1);
   /* WARNING: Could not recover jumptable at 0x0011d71c. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *UNRECOVERED_JUMPTABLE )(uVar5, bVar4);
   return;
}
/* CallableCustomStaticMethodPointer<void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomStaticMethodPointer<void,bool>::call(CallableCustomStaticMethodPointer<void,bool> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   undefined8 uVar2;
   char cVar3;
   bool bVar4;
   UNRECOVERED_JUMPTABLE = *(code**)( this + 0x28 );
   if (1 < (uint)param_2) {
      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 1;
      return;
   }

   if (param_2 == 0) {
      *(undefined4*)param_4 = 4;
      *(undefined4*)( param_4 + 8 ) = 1;
      return;
   }

   pVVar1 = *param_1;
   *(undefined4*)param_4 = 0;
   cVar3 = Variant::can_convert_strict(*(undefined4*)pVVar1, 1);
   uVar2 = _LC16;
   if (cVar3 == '\0') {
      *(undefined4*)param_4 = 2;
      *(undefined8*)( param_4 + 4 ) = uVar2;
   }

   bVar4 = Variant::operator_cast_to_bool(*param_1);
   /* WARNING: Could not recover jumptable at 0x0011d7b1. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *UNRECOVERED_JUMPTABLE )(bVar4);
   return;
}
/* CallableCustomStaticMethodPointer<void, long, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomStaticMethodPointer<void,long,bool>::call(CallableCustomStaticMethodPointer<void,long,bool> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   undefined8 uVar2;
   char cVar3;
   bool bVar4;
   long lVar5;
   UNRECOVERED_JUMPTABLE = *(code**)( this + 0x28 );
   if (2 < (uint)param_2) {
      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 2;
      return;
   }

   if (param_2 != 2) {
      *(undefined4*)param_4 = 4;
      *(undefined4*)( param_4 + 8 ) = 2;
      return;
   }

   pVVar1 = param_1[1];
   *(undefined4*)param_4 = 0;
   cVar3 = Variant::can_convert_strict(*(undefined4*)pVVar1, 1);
   uVar2 = _LC14;
   if (cVar3 == '\0') {
      *(undefined4*)param_4 = 2;
      *(undefined8*)( param_4 + 4 ) = uVar2;
   }

   bVar4 = Variant::operator_cast_to_bool(param_1[1]);
   cVar3 = Variant::can_convert_strict(*(undefined4*)*param_1, 2);
   uVar2 = _LC15;
   if (cVar3 == '\0') {
      *(undefined4*)param_4 = 2;
      *(undefined8*)( param_4 + 4 ) = uVar2;
   }

   lVar5 = Variant::operator_cast_to_long(*param_1);
   /* WARNING: Could not recover jumptable at 0x0011d88d. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *UNRECOVERED_JUMPTABLE )(lVar5, bVar4);
   return;
}
/* CallableCustomStaticMethodPointer<void, unsigned long>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomStaticMethodPointer<void,unsigned_long>::call(CallableCustomStaticMethodPointer<void,unsigned_long> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   undefined8 uVar2;
   char cVar3;
   ulong uVar4;
   UNRECOVERED_JUMPTABLE = *(code**)( this + 0x28 );
   if (1 < (uint)param_2) {
      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 1;
      return;
   }

   if (param_2 == 0) {
      *(undefined4*)param_4 = 4;
      *(undefined4*)( param_4 + 8 ) = 1;
      return;
   }

   pVVar1 = *param_1;
   *(undefined4*)param_4 = 0;
   cVar3 = Variant::can_convert_strict(*(undefined4*)pVVar1, 2);
   uVar2 = _LC15;
   if (cVar3 == '\0') {
      *(undefined4*)param_4 = 2;
      *(undefined8*)( param_4 + 4 ) = uVar2;
   }

   uVar4 = Variant::operator_cast_to_unsigned_long(*param_1);
   /* WARNING: Could not recover jumptable at 0x0011d921. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *UNRECOVERED_JUMPTABLE )(uVar4);
   return;
}
/* CallableCustomStaticMethodPointer<void, double>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomStaticMethodPointer<void,double>::call(CallableCustomStaticMethodPointer<void,double> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   undefined8 uVar2;
   char cVar3;
   UNRECOVERED_JUMPTABLE = *(code**)( this + 0x28 );
   if (1 < (uint)param_2) {
      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 1;
      return;
   }

   if (param_2 == 0) {
      *(undefined4*)param_4 = 4;
      *(undefined4*)( param_4 + 8 ) = 1;
      return;
   }

   pVVar1 = *param_1;
   *(undefined4*)param_4 = 0;
   cVar3 = Variant::can_convert_strict(*(undefined4*)pVVar1, 3);
   uVar2 = _LC17;
   if (cVar3 == '\0') {
      *(undefined4*)param_4 = 2;
      *(undefined8*)( param_4 + 4 ) = uVar2;
   }

   Variant::operator_cast_to_double(*param_1);
   /* WARNING: Could not recover jumptable at 0x0011d9ae. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}
/* CallableCustomStaticMethodPointer<void, Rect2i const&>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomStaticMethodPointer<void,Rect2i_const&>::call(CallableCustomStaticMethodPointer<void,Rect2i_const&> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   code *pcVar1;
   Variant *pVVar2;
   undefined8 uVar3;
   char cVar4;
   undefined4 extraout_EDX;
   undefined4 extraout_var;
   long in_FS_OFFSET;
   undefined8 local_38;
   undefined8 local_30;
   long local_20;
   pcVar1 = *(code**)( this + 0x28 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if ((uint)param_2 < 2) {
      if (param_2 == 0) {
         *(undefined4*)param_4 = 4;
         *(undefined4*)( param_4 + 8 ) = 1;
      }
 else {
         pVVar2 = *param_1;
         *(undefined4*)param_4 = 0;
         cVar4 = Variant::can_convert_strict(*(undefined4*)pVVar2, 8);
         uVar3 = _LC18;
         if (cVar4 == '\0') {
            *(undefined4*)param_4 = 2;
            *(undefined8*)( param_4 + 4 ) = uVar3;
         }

         local_38 = Variant::operator_cast_to_Rect2i(*param_1);
         local_30 = CONCAT44(extraout_var, extraout_EDX);
         ( *pcVar1 )(&local_38);
      }

   }
 else {
      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 1;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<XrActiveActionSet>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<XrActiveActionSet>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<XrBindingModificationBaseHeaderKHR const*>::_copy_on_write() [clone .isra.0] [clone
   .cold] */void CowData<XrBindingModificationBaseHeaderKHR_const*>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<XrActionSuggestedBinding>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<XrActionSuggestedBinding>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<unsigned long>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<unsigned_long>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<OpenXRCompositionLayerProvider*>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<OpenXRCompositionLayerProvider*>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<OpenXRExtensionWrapper*>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<OpenXRExtensionWrapper*>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<OpenXRAPI::OpenXRSwapChainInfo>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<OpenXRAPI::OpenXRSwapChainInfo>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<OpenXRAPI::ActionTracker>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<OpenXRAPI::ActionTracker>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<XrEnvironmentBlendMode>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<XrEnvironmentBlendMode>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<char const*>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<char_const*>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<OpenXRAPI::create_instance()::RequestExtension>::_unref() [clone .cold] */void CowData<OpenXRAPI::create_instance()::RequestExtension>::_unref(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<OpenXRAPI::OrderedCompositionLayer>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<OpenXRAPI::OrderedCompositionLayer>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<XrCompositionLayerBaseHeader const*>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<XrCompositionLayerBaseHeader_const*>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<OpenXRAPI::create_instance()::RequestExtension>::_copy_on_write() [clone .isra.0] [clone
   .cold] */void CowData<OpenXRAPI::create_instance()::RequestExtension>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<long>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<long>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<XrEnvironmentBlendMode>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<XrEnvironmentBlendMode>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
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
/* CowData<Vector<unsigned char> >::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Vector<unsigned_char>>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OpenXRAPI::load_supported_swapchain_formats() [clone .cold] */void OpenXRAPI::load_supported_swapchain_formats(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<CharString>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<CharString>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* OpenXRAPI::create_instance() [clone .cold] */void OpenXRAPI::create_instance(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* SortArray<OpenXRAPI::OrderedCompositionLayer, OpenXRAPI::OrderedCompositionLayer,
   true>::introsort(long, long, OpenXRAPI::OrderedCompositionLayer*, long) const [clone .isra.0] */void SortArray<OpenXRAPI::OrderedCompositionLayer,OpenXRAPI::OrderedCompositionLayer,true>::introsort(long param_1, long param_2, OrderedCompositionLayer *param_3, long param_4) {
   int iVar1;
   int iVar2;
   ulong uVar3;
   ulong uVar4;
   long lVar5;
   ulong *puVar6;
   ulong *puVar7;
   ulong *puVar8;
   long lVar9;
   ulong *puVar10;
   long lVar11;
   long lVar12;
   int iVar13;
   long lVar14;
   ulong uVar15;
   long lVar16;
   OrderedCompositionLayer *pOVar17;
   long lVar18;
   int iVar19;
   ulong local_70;
   lVar14 = param_2 - param_1;
   if (lVar14 < 0x11) {
      return;
   }

   if (param_4 != 0) {
      puVar10 = (ulong*)( param_3 + param_1 * 0x10 );
      lVar18 = param_2;
      LAB_0011dc39:param_4 = param_4 + -1;
      puVar8 = (ulong*)( param_3 + lVar18 * 0x10 + -0x10 );
      puVar6 = (ulong*)( param_3 + ( ( lVar14 >> 1 ) + param_1 ) * 0x10 );
      iVar2 = (int)puVar10[1];
      iVar1 = (int)puVar6[1];
      iVar19 = iVar2;
      if (( iVar2 < iVar1 ) || ( ( iVar2 == iVar1 && ( *puVar10 < *puVar6 ) ) )) {
         iVar13 = (int)puVar8[1];
         if (iVar1 < iVar13) {
            iVar19 = iVar1;
            local_70 = *puVar6;
            goto LAB_0011dc8e;
         }

         if (( iVar1 == iVar13 ) && ( iVar19 = iVar1 ),local_70 = *puVar6,*puVar6 < *puVar8) goto LAB_0011dc8e;
         if (iVar13 <= iVar2) {
            uVar15 = *puVar10;
            iVar19 = iVar2;
            local_70 = uVar15;
            if (( iVar2 == iVar13 ) && ( local_70 = *puVar8 * puVar8 <= uVar15 )) {
               local_70 = uVar15;
            }

            goto LAB_0011dc8e;
         }

         LAB_0011de7a:iVar19 = iVar13;
         local_70 = *puVar8;
      }
 else {
         iVar13 = (int)puVar8[1];
         if (iVar2 < iVar13) {
            local_70 = *puVar10;
            goto LAB_0011dc8e;
         }

         if (iVar2 == iVar13) {
            uVar15 = *puVar8;
            local_70 = *puVar10;
            if (( *puVar10 < uVar15 ) || ( local_70 = iVar1 < iVar13 )) goto LAB_0011dc8e;
            local_70 = *puVar6;
         }
 else {
            if (iVar1 < iVar13) goto LAB_0011de7a;
            local_70 = *puVar6;
            iVar19 = iVar1;
            if (iVar1 != iVar13) goto LAB_0011dc8e;
            uVar15 = *puVar8;
         }

         iVar19 = iVar1;
         if (local_70 < uVar15) {
            iVar19 = iVar13;
            local_70 = uVar15;
         }

      }

      LAB_0011dc8e:puVar8 = puVar10;
      param_2 = param_1;
      lVar14 = lVar18;
      do {
         if (( (int)puVar8[1] < iVar19 ) || ( ( (int)puVar8[1] == iVar19 && ( *puVar8 < local_70 ) ) )) {
            if (param_2 == lVar18 + -1) {
               _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
               goto LAB_0011dcb6;
            }

         }
 else {
            LAB_0011dcb6:puVar6 = (ulong*)( param_3 + lVar14 * 0x10 + -0x10 );
            do {
               puVar7 = puVar6;
               lVar14 = lVar14 + -1;
               iVar2 = (int)puVar7[1];
               if (( iVar2 == iVar19 || iVar2 < iVar19 ) && ( ( iVar2 != iVar19 || ( *puVar7 <= local_70 ) ) )) goto joined_r0x0011dcd9;
               puVar6 = puVar7 + -2;
            }
 while ( param_1 != lVar14 );
            _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
            joined_r0x0011dcd9:if (lVar14 <= param_2) goto LAB_0011ddf8;
            uVar3 = puVar7[1];
            uVar15 = *puVar8;
            uVar4 = puVar8[1];
            *puVar8 = *puVar7;
            puVar8[1] = uVar3;
            *puVar7 = uVar15;
            *(int*)( puVar7 + 1 ) = (int)uVar4;
         }

         puVar8 = puVar8 + 2;
         param_2 = param_2 + 1;
      }
 while ( true );
   }

   LAB_0011df26:lVar9 = lVar14 + -2 >> 1;
   lVar18 = lVar9 * 2 + 2;
   puVar10 = (ulong*)( param_3 + ( param_1 + lVar9 ) * 0x10 );
   do {
      uVar15 = *puVar10;
      iVar2 = (int)puVar10[1];
      lVar12 = lVar18;
      lVar5 = lVar9;
      if (lVar18 < lVar14) {
         do {
            lVar16 = lVar12 + -1;
            puVar6 = (ulong*)( param_3 + ( param_1 + lVar12 ) * 0x10 );
            puVar8 = (ulong*)( param_3 + ( param_1 + lVar16 ) * 0x10 );
            lVar11 = lVar12;
            if (( (int)puVar8[1] <= (int)puVar6[1] ) && ( ( (int)puVar8[1] != (int)puVar6[1] || ( *puVar8 <= *puVar6 ) ) )) {
               lVar11 = lVar12 + 1;
               puVar8 = puVar6;
               lVar16 = lVar12;
            }

            uVar3 = puVar8[1];
            lVar12 = lVar11 * 2;
            *(ulong*)( param_3 + ( lVar5 + param_1 ) * 0x10 ) = *puVar8;
            *(ulong*)( (long)( param_3 + ( lVar5 + param_1 ) * 0x10 ) + 8 ) = uVar3;
            lVar5 = lVar16;
         }
 while ( lVar12 < lVar14 );
         puVar6 = puVar8;
         if (lVar12 == lVar14) goto LAB_0011e108;
         LAB_0011dfbe:lVar12 = lVar16 + -1 >> 1;
         if (lVar16 <= lVar9) goto LAB_0011e22c;
         do {
            lVar5 = lVar12;
            puVar8 = (ulong*)( param_3 + ( param_1 + lVar5 ) * 0x10 );
            iVar1 = (int)puVar8[1];
            if (iVar2 == iVar1 || iVar2 < iVar1) {
               if (iVar2 != iVar1) {
                  puVar8 = (ulong*)( param_3 + ( lVar16 + param_1 ) * 0x10 );
                  break;
               }

               if (uVar15 <= *puVar8) {
                  *(ulong*)( param_3 + ( param_1 + lVar16 ) * 0x10 ) = uVar15;
                  *(int*)( (long)( param_3 + ( param_1 + lVar16 ) * 0x10 ) + 8 ) = iVar2;
                  goto joined_r0x0011e05a;
               }

            }

            uVar3 = puVar8[1];
            *(ulong*)( param_3 + ( lVar16 + param_1 ) * 0x10 ) = *puVar8;
            *(ulong*)( (long)( param_3 + ( lVar16 + param_1 ) * 0x10 ) + 8 ) = uVar3;
            lVar12 = ( lVar5 + -1 ) / 2;
            lVar16 = lVar5;
         }
 while ( lVar9 < lVar5 );
         *puVar8 = uVar15;
         *(int*)( puVar8 + 1 ) = iVar2;
         joined_r0x0011e05a:if (lVar9 == 0) goto LAB_0011e05c;
      }
 else {
         puVar6 = puVar10;
         puVar8 = puVar10;
         if (lVar18 == lVar14) {
            LAB_0011e108:lVar16 = lVar12 + -1;
            puVar8 = (ulong*)( param_3 + ( param_1 + lVar16 ) * 0x10 );
            uVar3 = puVar8[1];
            *puVar6 = *puVar8;
            puVar6[1] = uVar3;
            goto LAB_0011dfbe;
         }

         LAB_0011e22c:*puVar8 = uVar15;
         *(int*)( puVar8 + 1 ) = iVar2;
      }

      lVar9 = lVar9 + -1;
      puVar10 = puVar10 + -2;
      lVar18 = lVar18 + -2;
   }
 while ( true );
   LAB_0011ddf8:introsort(param_2, lVar18, param_3, param_4);
   lVar14 = param_2 - param_1;
   if (lVar14 < 0x11) {
      return;
   }

   lVar18 = param_2;
   if (param_4 == 0) goto LAB_0011df26;
   goto LAB_0011dc39;
   LAB_0011e05c:lVar14 = ( param_2 + -1 ) - param_1;
   puVar10 = (ulong*)( param_3 + param_1 * 0x10 );
   pOVar17 = param_3 + param_2 * 0x10;
   do {
      uVar3 = puVar10[1];
      uVar15 = *(ulong*)( pOVar17 + -0x10 );
      iVar2 = *(int*)( pOVar17 + -8 );
      *(ulong*)( pOVar17 + -0x10 ) = *puVar10;
      *(ulong*)( pOVar17 + -8 ) = uVar3;
      if (lVar14 < 3) {
         if (lVar14 != 2) {
            *puVar10 = uVar15;
            *(int*)( puVar10 + 1 ) = iVar2;
            return;
         }

         lVar18 = param_1 + 1;
         lVar9 = 0;
         lVar14 = 1;
         uVar3 = *(ulong*)( (long)( param_3 + lVar18 * 0x10 ) + 8 );
         *puVar10 = *(ulong*)( param_3 + lVar18 * 0x10 );
         puVar10[1] = uVar3;
         LAB_0011e198:while (true) {
            puVar8 = (ulong*)( param_3 + ( param_1 + lVar9 ) * 0x10 );
            if (( iVar2 <= (int)puVar8[1] ) && ( ( (int)puVar8[1] != iVar2 || ( uVar15 <= *puVar8 ) ) )) break;
            uVar3 = puVar8[1];
            *(ulong*)( param_3 + lVar18 * 0x10 ) = *puVar8;
            *(ulong*)( (long)( param_3 + lVar18 * 0x10 ) + 8 ) = uVar3;
            if (lVar9 == 0) goto LAB_0011e1b2;
            lVar18 = param_1 + lVar9;
            lVar9 = ( lVar9 + -1 ) / 2;
         }
;
         puVar8 = (ulong*)( param_3 + lVar18 * 0x10 );
      }
 else {
         lVar18 = 2;
         lVar9 = 0;
         do {
            lVar12 = lVar18 + -1;
            puVar8 = (ulong*)( param_3 + ( param_1 + lVar12 ) * 0x10 );
            puVar6 = (ulong*)( param_3 + ( param_1 + lVar18 ) * 0x10 );
            lVar5 = lVar18;
            if (( (int)puVar8[1] <= (int)puVar6[1] ) && ( ( (int)puVar8[1] != (int)puVar6[1] || ( *puVar8 <= *puVar6 ) ) )) {
               lVar5 = lVar18 + 1;
               puVar8 = puVar6;
               lVar12 = lVar18;
            }

            uVar3 = puVar8[1];
            lVar18 = lVar5 * 2;
            *(ulong*)( param_3 + ( lVar9 + param_1 ) * 0x10 ) = *puVar8;
            *(ulong*)( (long)( param_3 + ( lVar9 + param_1 ) * 0x10 ) + 8 ) = uVar3;
            lVar9 = lVar12;
         }
 while ( lVar14 != lVar18 && SBORROW8(lVar14, lVar18) == lVar14 + lVar5 * -2 < 0 );
         if (lVar14 == lVar18) {
            lVar18 = param_1 + lVar14 + -1;
            lVar9 = lVar14 + -2 >> 1;
            uVar3 = *(ulong*)( (long)( param_3 + lVar18 * 0x10 ) + 8 );
            *puVar8 = *(ulong*)( param_3 + lVar18 * 0x10 );
            puVar8[1] = uVar3;
            lVar14 = lVar14 + -1;
            goto LAB_0011e198;
         }

         if (0 < lVar12) {
            lVar18 = param_1 + lVar12;
            lVar9 = ( lVar12 + -1 ) / 2;
            lVar14 = lVar14 + -1;
            goto LAB_0011e198;
         }

         lVar14 = lVar14 + -1;
      }

      LAB_0011e1b2:*puVar8 = uVar15;
      pOVar17 = pOVar17 + -0x10;
      *(int*)( puVar8 + 1 ) = iVar2;
   }
 while ( true );
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
/* Callable Callable::bind<bool>(bool) const */Variant **Callable::bind<bool>(bool param_1) {
   char cVar1;
   bool in_DL;
   int in_ESI;
   undefined7 in_register_00000039;
   long in_FS_OFFSET;
   int local_58[6];
   undefined8 local_40;
   undefined1 local_38[16];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_58, in_DL);
   local_40 = 0;
   local_38 = (undefined1[16])0x0;
   Callable::bindp((Variant**)CONCAT71(in_register_00000039, param_1), in_ESI);
   if (Variant::needs_deinit[(int)local_40] == '\0') {
      cVar1 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (Variant**)CONCAT71(in_register_00000039, param_1);
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Callable Callable::bind<long, bool>(long, bool) const */long Callable::bind<long,bool>(long param_1, bool param_2) {
   Variant *pVVar1;
   bool in_CL;
   long in_RDX;
   Variant *pVVar2;
   undefined7 in_register_00000031;
   long in_FS_OFFSET;
   Variant local_78[24];
   Variant local_60[24];
   undefined8 local_48;
   undefined1 local_40[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_78, in_RDX);
   pVVar2 = (Variant*)&local_30;
   Variant::Variant(local_60, in_CL);
   local_48 = 0;
   local_40 = (undefined1[16])0x0;
   Callable::bindp((Variant**)param_1, (int)CONCAT71(in_register_00000031, param_2));
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_78 );
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Callable Callable::bind<unsigned long>(unsigned long) const */ulong Callable::bind<unsigned_long>(ulong param_1) {
   char cVar1;
   ulong in_RDX;
   int in_ESI;
   long in_FS_OFFSET;
   int local_58[6];
   undefined8 local_40;
   undefined1 local_38[16];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_58, in_RDX);
   local_40 = 0;
   local_38 = (undefined1[16])0x0;
   Callable::bindp((Variant**)param_1, in_ESI);
   if (Variant::needs_deinit[(int)local_40] == '\0') {
      cVar1 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x0011e708) *//* WARNING: Removing unreachable block (ram,0x0011e838) *//* WARNING: Removing unreachable block (ram,0x0011ea00) *//* WARNING: Removing unreachable block (ram,0x0011e844) *//* WARNING: Removing unreachable block (ram,0x0011e84e) *//* WARNING: Removing unreachable block (ram,0x0011e9e0) *//* WARNING: Removing unreachable block (ram,0x0011e85a) *//* WARNING: Removing unreachable block (ram,0x0011e864) *//* WARNING: Removing unreachable block (ram,0x0011e9c0) *//* WARNING: Removing unreachable block (ram,0x0011e870) *//* WARNING: Removing unreachable block (ram,0x0011e87a) *//* WARNING: Removing unreachable block (ram,0x0011e9a0) *//* WARNING: Removing unreachable block (ram,0x0011e886) *//* WARNING: Removing unreachable block (ram,0x0011e890) *//* WARNING: Removing unreachable block (ram,0x0011e980) *//* WARNING: Removing unreachable block (ram,0x0011e89c) *//* WARNING: Removing unreachable block (ram,0x0011e8a6) *//* WARNING: Removing unreachable block (ram,0x0011e960) *//* WARNING: Removing unreachable block (ram,0x0011e8b2) *//* WARNING: Removing unreachable block (ram,0x0011e8bc) *//* WARNING: Removing unreachable block (ram,0x0011e940) *//* WARNING: Removing unreachable block (ram,0x0011e8c4) *//* WARNING: Removing unreachable block (ram,0x0011e8da) *//* WARNING: Removing unreachable block (ram,0x0011e8e6) *//* String vformat<char const*>(String const&, char const* const) */String *vformat<char_const*>(String *param_1, char *param_2) {
   char cVar1;
   Variant *this;
   char *in_RDX;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, in_RDX);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar2 = (int)local_c8;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, (bool*)param_2);
   *(undefined8*)param_1 = local_c0[0];
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
/* WARNING: Removing unreachable block (ram,0x0011eb48) *//* WARNING: Removing unreachable block (ram,0x0011ec78) *//* WARNING: Removing unreachable block (ram,0x0011ee40) *//* WARNING: Removing unreachable block (ram,0x0011ec84) *//* WARNING: Removing unreachable block (ram,0x0011ec8e) *//* WARNING: Removing unreachable block (ram,0x0011ee20) *//* WARNING: Removing unreachable block (ram,0x0011ec9a) *//* WARNING: Removing unreachable block (ram,0x0011eca4) *//* WARNING: Removing unreachable block (ram,0x0011ee00) *//* WARNING: Removing unreachable block (ram,0x0011ecb0) *//* WARNING: Removing unreachable block (ram,0x0011ecba) *//* WARNING: Removing unreachable block (ram,0x0011ede0) *//* WARNING: Removing unreachable block (ram,0x0011ecc6) *//* WARNING: Removing unreachable block (ram,0x0011ecd0) *//* WARNING: Removing unreachable block (ram,0x0011edc0) *//* WARNING: Removing unreachable block (ram,0x0011ecdc) *//* WARNING: Removing unreachable block (ram,0x0011ece6) *//* WARNING: Removing unreachable block (ram,0x0011eda0) *//* WARNING: Removing unreachable block (ram,0x0011ecf2) *//* WARNING: Removing unreachable block (ram,0x0011ecfc) *//* WARNING: Removing unreachable block (ram,0x0011ed80) *//* WARNING: Removing unreachable block (ram,0x0011ed04) *//* WARNING: Removing unreachable block (ram,0x0011ed1a) *//* WARNING: Removing unreachable block (ram,0x0011ed26) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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
/* WARNING: Removing unreachable block (ram,0x0011efc0) *//* WARNING: Removing unreachable block (ram,0x0011f0f0) *//* WARNING: Removing unreachable block (ram,0x0011f269) *//* WARNING: Removing unreachable block (ram,0x0011f0fc) *//* WARNING: Removing unreachable block (ram,0x0011f106) *//* WARNING: Removing unreachable block (ram,0x0011f24b) *//* WARNING: Removing unreachable block (ram,0x0011f112) *//* WARNING: Removing unreachable block (ram,0x0011f11c) *//* WARNING: Removing unreachable block (ram,0x0011f22d) *//* WARNING: Removing unreachable block (ram,0x0011f128) *//* WARNING: Removing unreachable block (ram,0x0011f132) *//* WARNING: Removing unreachable block (ram,0x0011f20f) *//* WARNING: Removing unreachable block (ram,0x0011f13e) *//* WARNING: Removing unreachable block (ram,0x0011f148) *//* WARNING: Removing unreachable block (ram,0x0011f1f1) *//* WARNING: Removing unreachable block (ram,0x0011f154) *//* WARNING: Removing unreachable block (ram,0x0011f15e) *//* WARNING: Removing unreachable block (ram,0x0011f1d3) *//* WARNING: Removing unreachable block (ram,0x0011f166) *//* WARNING: Removing unreachable block (ram,0x0011f170) *//* WARNING: Removing unreachable block (ram,0x0011f1b8) *//* WARNING: Removing unreachable block (ram,0x0011f178) *//* WARNING: Removing unreachable block (ram,0x0011f18e) *//* WARNING: Removing unreachable block (ram,0x0011f19a) *//* String vformat<String, String>(String const&, String const, String const) */undefined8 *vformat<String,String>(undefined8 *param_1, bool *param_2, String *param_3, String *param_4) {
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
/* void Vector<OpenXRAPI::OrderedCompositionLayer>::sort_custom<OpenXRAPI::OrderedCompositionLayer,
   true>() */void Vector<OpenXRAPI::OrderedCompositionLayer>::sort_custom<OpenXRAPI::OrderedCompositionLayer,true>(Vector<OpenXRAPI::OrderedCompositionLayer> *this) {
   int iVar1;
   int iVar2;
   long lVar3;
   ulong *__src;
   ulong uVar4;
   ulong *puVar5;
   long lVar6;
   long lVar7;
   ulong *puVar8;
   if (*(long*)( this + 8 ) == 0) {
      return;
   }

   lVar3 = *(long*)( *(long*)( this + 8 ) + -8 );
   if (lVar3 != 0) {
      CowData<OpenXRAPI::OrderedCompositionLayer>::_copy_on_write((CowData<OpenXRAPI::OrderedCompositionLayer>*)( this + 8 ));
      __src = *(ulong**)( this + 8 );
      if (lVar3 == 1) {
         SortArray<OpenXRAPI::OrderedCompositionLayer,OpenXRAPI::OrderedCompositionLayer,true>::introsort(0, 1, (OrderedCompositionLayer*)__src, 0);
         return;
      }

      lVar6 = 0;
      lVar7 = lVar3;
      do {
         lVar7 = lVar7 >> 1;
         lVar6 = lVar6 + 1;
      }
 while ( lVar7 != 1 );
      SortArray<OpenXRAPI::OrderedCompositionLayer,OpenXRAPI::OrderedCompositionLayer,true>::introsort(0, lVar3, (OrderedCompositionLayer*)__src, lVar6 * 2);
      if (lVar3 < 0x11) {
         lVar7 = 1;
         puVar8 = __src + 2;
         do {
            uVar4 = *puVar8;
            iVar2 = (int)puVar8[1];
            if (( iVar2 < (int)__src[1] ) || ( ( lVar6 = lVar7 ),puVar5 = puVar8,iVar2 == (int)__src[1] && ( uVar4 < *__src ) )) {
               memmove(__src + 2, __src, lVar7 << 4);
               *__src = uVar4;
               *(int*)( __src + 1 ) = iVar2;
            }
 else {
               while (true) {
                  if (( (int)puVar5[-1] <= iVar2 ) && ( ( iVar2 != (int)puVar5[-1] || ( puVar5[-2] <= uVar4 ) ) )) goto LAB_0011f4a4;
                  if (lVar6 + -1 == 0) break;
                  *puVar5 = puVar5[-2];
                  puVar5[1] = puVar5[-1];
                  lVar6 = lVar6 + -1;
                  puVar5 = puVar5 + -2;
               }
;
               _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
               lVar6 = 1;
               LAB_0011f4a4:__src[lVar6 * 2] = uVar4;
               *(int*)( __src + lVar6 * 2 + 1 ) = iVar2;
            }

            lVar7 = lVar7 + 1;
            puVar8 = puVar8 + 2;
         }
 while ( lVar3 != lVar7 );
      }
 else {
         lVar7 = 1;
         puVar8 = __src + 2;
         do {
            while (true) {
               lVar6 = lVar7;
               uVar4 = *puVar8;
               iVar2 = (int)puVar8[1];
               if (( (int)__src[1] <= iVar2 ) && ( ( puVar5 = puVar8 ),lVar7 = lVar6,(int)__src[1] != iVar2 || ( *__src <= uVar4 ) )) break;
               puVar8 = puVar8 + 2;
               memmove(__src + 2, __src, lVar6 << 4);
               *__src = uVar4;
               *(int*)( __src + 1 ) = iVar2;
               lVar7 = lVar6 + 1;
               if (lVar6 + 1 == 0x10) goto LAB_0011f3d2;
            }
;
            while (true) {
               iVar1 = (int)puVar5[-1];
               if (( iVar1 == iVar2 || iVar1 < iVar2 ) && ( ( iVar1 != iVar2 || ( puVar5[-2] <= uVar4 ) ) )) goto LAB_0011f374;
               if (lVar7 == 1) break;
               *puVar5 = puVar5[-2];
               puVar5[1] = puVar5[-1];
               puVar5 = puVar5 + -2;
               lVar7 = lVar7 + -1;
            }
;
            _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
            LAB_0011f374:puVar8 = puVar8 + 2;
            __src[lVar7 * 2] = uVar4;
            *(int*)( __src + lVar7 * 2 + 1 ) = iVar2;
            lVar7 = lVar6 + 1;
         }
 while ( lVar6 + 1 != 0x10 );
         LAB_0011f3d2:lVar6 = lVar6 + 1;
         puVar8 = __src + 0x20;
         do {
            uVar4 = *puVar8;
            iVar2 = (int)puVar8[1];
            puVar5 = puVar8;
            lVar7 = lVar6;
            while (true) {
               if (( (int)puVar5[-1] <= iVar2 ) && ( ( (int)puVar5[-1] != iVar2 || ( puVar5[-2] <= uVar4 ) ) )) goto LAB_0011f3ee;
               if (lVar7 == 1) break;
               lVar7 = lVar7 + -1;
               *puVar5 = puVar5[-2];
               puVar5[1] = puVar5[-1];
               puVar5 = puVar5 + -2;
            }
;
            _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
            lVar7 = 1;
            LAB_0011f3ee:lVar6 = lVar6 + 1;
            puVar8 = puVar8 + 2;
            __src[lVar7 * 2] = uVar4;
            *(int*)( __src + lVar7 * 2 + 1 ) = iVar2;
         }
 while ( lVar3 != lVar6 );
      }

   }

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
/* WARNING: Removing unreachable block (ram,0x0011f8d0) *//* WARNING: Removing unreachable block (ram,0x0011fa00) *//* WARNING: Removing unreachable block (ram,0x0011fb79) *//* WARNING: Removing unreachable block (ram,0x0011fa0c) *//* WARNING: Removing unreachable block (ram,0x0011fa16) *//* WARNING: Removing unreachable block (ram,0x0011fb5b) *//* WARNING: Removing unreachable block (ram,0x0011fa22) *//* WARNING: Removing unreachable block (ram,0x0011fa2c) *//* WARNING: Removing unreachable block (ram,0x0011fb3d) *//* WARNING: Removing unreachable block (ram,0x0011fa38) *//* WARNING: Removing unreachable block (ram,0x0011fa42) *//* WARNING: Removing unreachable block (ram,0x0011fb1f) *//* WARNING: Removing unreachable block (ram,0x0011fa4e) *//* WARNING: Removing unreachable block (ram,0x0011fa58) *//* WARNING: Removing unreachable block (ram,0x0011fb01) *//* WARNING: Removing unreachable block (ram,0x0011fa64) *//* WARNING: Removing unreachable block (ram,0x0011fa6e) *//* WARNING: Removing unreachable block (ram,0x0011fae3) *//* WARNING: Removing unreachable block (ram,0x0011fa76) *//* WARNING: Removing unreachable block (ram,0x0011fa80) *//* WARNING: Removing unreachable block (ram,0x0011fac8) *//* WARNING: Removing unreachable block (ram,0x0011fa88) *//* WARNING: Removing unreachable block (ram,0x0011fa9e) *//* WARNING: Removing unreachable block (ram,0x0011faaa) *//* String vformat<unsigned int, char const*>(String const&, unsigned int const, char const* const)
    */String *vformat<unsigned_int,char_const*>(String *param_1, uint param_2, char *param_3) {
   Variant *pVVar1;
   Variant *pVVar2;
   char *in_RCX;
   undefined4 in_register_00000034;
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
   Variant::Variant(local_88, (uint)param_3);
   Variant::Variant(local_70, in_RCX);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, (bool*)CONCAT44(in_register_00000034, param_2));
   *(undefined8*)param_1 = local_d0[0];
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
/* RID_Alloc<OpenXRAPI::Tracker, true>::~RID_Alloc() */void RID_Alloc<OpenXRAPI::Tracker,true>::~RID_Alloc(RID_Alloc<OpenXRAPI::Tracker,true> *this) {
   long *plVar1;
   long lVar2;
   uint uVar3;
   char *pcVar4;
   ulong uVar5;
   long *plVar6;
   ulong uVar7;
   long lVar8;
   ulong uVar9;
   undefined8 *puVar10;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_00126458;
   uVar3 = *(uint*)( this + 0x20 );
   if (uVar3 == 0) {
      uVar5 = ( ulong ) * (uint*)( this + 0x1c );
      uVar9 = ( ulong ) * (uint*)( this + 0x18 );
      puVar10 = *(undefined8**)( this + 8 );
      LAB_0011fd1a:if ((uint)uVar5 < (uint)uVar9) goto LAB_0011fd5b;
      lVar8 = 0;
      while (true) {
         Memory::free_static((void*)puVar10[lVar8], false);
         lVar2 = lVar8 * 8;
         lVar8 = lVar8 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         if (( uint )(uVar5 / uVar9) <= (uint)lVar8) break;
         puVar10 = *(undefined8**)( this + 8 );
      }
;
   }
 else {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
      print_error((String*)&local_48);
      pcVar4 = local_48;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar6 = (long*)( local_48 + -0x10 );
         *plVar6 = *plVar6 + -1;
         UNLOCK();
         if (*plVar6 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar4 + -0x10, false);
         }

      }

      lVar8 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar6 = (long*)( local_50 + -0x10 );
         *plVar6 = *plVar6 + -1;
         UNLOCK();
         if (*plVar6 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      uVar9 = ( ulong ) * (uint*)( this + 0x18 );
      puVar10 = *(undefined8**)( this + 8 );
      if (*(int*)( this + 0x1c ) != 0) {
         uVar7 = 0;
         do {
            plVar6 = (long*)( ( uVar7 % uVar9 ) * 0x20 + puVar10[uVar7 / uVar9] );
            if (( -1 < (int)plVar6[3] ) && ( *plVar6 != 0 )) {
               LOCK();
               plVar1 = (long*)( *plVar6 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar8 = *plVar6;
                  *plVar6 = 0;
                  Memory::free_static((void*)( lVar8 + -0x10 ), false);
               }

               uVar9 = ( ulong ) * (uint*)( this + 0x18 );
               puVar10 = *(undefined8**)( this + 8 );
            }

            uVar5 = ( ulong ) * (uint*)( this + 0x1c );
            uVar7 = uVar7 + 1;
         }
 while ( uVar7 < uVar5 );
         goto LAB_0011fd1a;
      }

      if (*(uint*)( this + 0x18 ) != 0) goto LAB_0011fd5b;
      Memory::free_static((void*)*puVar10, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar10 = *(undefined8**)( this + 8 );
   LAB_0011fd5b:if (puVar10 == (undefined8*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      Memory::free_static(puVar10, false);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(*(void**)( this + 0x10 ), false);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<OpenXRAPI::ActionSet, true>::~RID_Alloc() */void RID_Alloc<OpenXRAPI::ActionSet,true>::~RID_Alloc(RID_Alloc<OpenXRAPI::ActionSet,true> *this) {
   long *plVar1;
   long lVar2;
   uint uVar3;
   char *pcVar4;
   ulong uVar5;
   long *plVar6;
   ulong uVar7;
   long lVar8;
   ulong uVar9;
   undefined8 *puVar10;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_00126478;
   uVar3 = *(uint*)( this + 0x20 );
   if (uVar3 == 0) {
      uVar5 = ( ulong ) * (uint*)( this + 0x1c );
      uVar9 = ( ulong ) * (uint*)( this + 0x18 );
      puVar10 = *(undefined8**)( this + 8 );
      LAB_0011ff6a:if ((uint)uVar5 < (uint)uVar9) goto LAB_0011ffab;
      lVar8 = 0;
      while (true) {
         Memory::free_static((void*)puVar10[lVar8], false);
         lVar2 = lVar8 * 8;
         lVar8 = lVar8 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         if (( uint )(uVar5 / uVar9) <= (uint)lVar8) break;
         puVar10 = *(undefined8**)( this + 8 );
      }
;
   }
 else {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
      print_error((String*)&local_48);
      pcVar4 = local_48;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar6 = (long*)( local_48 + -0x10 );
         *plVar6 = *plVar6 + -1;
         UNLOCK();
         if (*plVar6 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar4 + -0x10, false);
         }

      }

      lVar8 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar6 = (long*)( local_50 + -0x10 );
         *plVar6 = *plVar6 + -1;
         UNLOCK();
         if (*plVar6 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      uVar9 = ( ulong ) * (uint*)( this + 0x18 );
      puVar10 = *(undefined8**)( this + 8 );
      if (*(int*)( this + 0x1c ) != 0) {
         uVar7 = 0;
         do {
            plVar6 = (long*)( ( uVar7 % uVar9 ) * 0x20 + puVar10[uVar7 / uVar9] );
            if (( -1 < (int)plVar6[3] ) && ( *plVar6 != 0 )) {
               LOCK();
               plVar1 = (long*)( *plVar6 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar8 = *plVar6;
                  *plVar6 = 0;
                  Memory::free_static((void*)( lVar8 + -0x10 ), false);
               }

               uVar9 = ( ulong ) * (uint*)( this + 0x18 );
               puVar10 = *(undefined8**)( this + 8 );
            }

            uVar5 = ( ulong ) * (uint*)( this + 0x1c );
            uVar7 = uVar7 + 1;
         }
 while ( uVar7 < uVar5 );
         goto LAB_0011ff6a;
      }

      if (*(uint*)( this + 0x18 ) != 0) goto LAB_0011ffab;
      Memory::free_static((void*)*puVar10, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar10 = *(undefined8**)( this + 8 );
   LAB_0011ffab:if (puVar10 == (undefined8*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      Memory::free_static(puVar10, false);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(*(void**)( this + 0x10 ), false);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<OpenXRAPI::Action, true>::~RID_Alloc() */void RID_Alloc<OpenXRAPI::Action,true>::~RID_Alloc(RID_Alloc<OpenXRAPI::Action,true> *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   char *pcVar4;
   ulong uVar5;
   ulong uVar6;
   long lVar7;
   ulong uVar8;
   undefined8 *puVar9;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_00126498;
   uVar2 = *(uint*)( this + 0x20 );
   if (uVar2 == 0) {
      uVar5 = ( ulong ) * (uint*)( this + 0x1c );
      uVar8 = ( ulong ) * (uint*)( this + 0x18 );
      puVar9 = *(undefined8**)( this + 8 );
      LAB_001201fa:if ((uint)uVar5 < (uint)uVar8) goto LAB_0012023b;
      lVar7 = 0;
      while (true) {
         Memory::free_static((void*)puVar9[lVar7], false);
         lVar3 = lVar7 * 8;
         lVar7 = lVar7 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar3 ), false);
         if (( uint )(uVar5 / uVar8) <= (uint)lVar7) break;
         puVar9 = *(undefined8**)( this + 8 );
      }
;
   }
 else {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar2);
      print_error((String*)&local_48);
      pcVar4 = local_48;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar4 + -0x10, false);
         }

      }

      lVar7 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

      uVar8 = ( ulong ) * (uint*)( this + 0x18 );
      puVar9 = *(undefined8**)( this + 8 );
      if (*(int*)( this + 0x1c ) != 0) {
         uVar6 = 0;
         do {
            lVar7 = puVar9[uVar6 / uVar8] + ( uVar6 % uVar8 ) * 0x38;
            if (-1 < *(int*)( lVar7 + 0x30 )) {
               if (*(long*)( lVar7 + 0x20 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar7 + 0x20 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( lVar7 + 0x20 );
                     *(undefined8*)( lVar7 + 0x20 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               if (*(long*)( lVar7 + 8 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar7 + 8 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( lVar7 + 8 );
                     *(undefined8*)( lVar7 + 8 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               uVar8 = ( ulong ) * (uint*)( this + 0x18 );
               puVar9 = *(undefined8**)( this + 8 );
            }

            uVar5 = ( ulong ) * (uint*)( this + 0x1c );
            uVar6 = uVar6 + 1;
         }
 while ( uVar6 < uVar5 );
         goto LAB_001201fa;
      }

      if (*(uint*)( this + 0x18 ) != 0) goto LAB_0012023b;
      Memory::free_static((void*)*puVar9, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar9 = *(undefined8**)( this + 8 );
   LAB_0012023b:if (puVar9 == (undefined8*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      Memory::free_static(puVar9, false);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(*(void**)( this + 0x10 ), false);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<OpenXRAPI::Action, true>::~RID_Alloc() */void RID_Alloc<OpenXRAPI::Action,true>::~RID_Alloc(RID_Alloc<OpenXRAPI::Action,true> *this) {
   ~RID_Alloc(this)
   ;;
   operator_delete(this, 0x58);
   return;
}
/* RID_Alloc<OpenXRAPI::ActionSet, true>::~RID_Alloc() */void RID_Alloc<OpenXRAPI::ActionSet,true>::~RID_Alloc(RID_Alloc<OpenXRAPI::ActionSet,true> *this) {
   long *plVar1;
   long lVar2;
   uint uVar3;
   char *pcVar4;
   ulong uVar5;
   long *plVar6;
   ulong uVar7;
   long lVar8;
   ulong uVar9;
   undefined8 *puVar10;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_00126478;
   uVar3 = *(uint*)( this + 0x20 );
   if (uVar3 == 0) {
      uVar5 = ( ulong ) * (uint*)( this + 0x1c );
      uVar9 = ( ulong ) * (uint*)( this + 0x18 );
      puVar10 = *(undefined8**)( this + 8 );
      LAB_0012046a:if ((uint)uVar5 < (uint)uVar9) goto LAB_001204ab;
      lVar8 = 0;
      while (true) {
         Memory::free_static((void*)puVar10[lVar8], false);
         lVar2 = lVar8 * 8;
         lVar8 = lVar8 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         if (( uint )(uVar5 / uVar9) <= (uint)lVar8) break;
         puVar10 = *(undefined8**)( this + 8 );
      }
;
   }
 else {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
      print_error((String*)&local_48);
      pcVar4 = local_48;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar6 = (long*)( local_48 + -0x10 );
         *plVar6 = *plVar6 + -1;
         UNLOCK();
         if (*plVar6 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar4 + -0x10, false);
         }

      }

      lVar8 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar6 = (long*)( local_50 + -0x10 );
         *plVar6 = *plVar6 + -1;
         UNLOCK();
         if (*plVar6 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      uVar9 = ( ulong ) * (uint*)( this + 0x18 );
      puVar10 = *(undefined8**)( this + 8 );
      if (*(int*)( this + 0x1c ) != 0) {
         uVar7 = 0;
         do {
            plVar6 = (long*)( ( uVar7 % uVar9 ) * 0x20 + puVar10[uVar7 / uVar9] );
            if (( -1 < (int)plVar6[3] ) && ( *plVar6 != 0 )) {
               LOCK();
               plVar1 = (long*)( *plVar6 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar8 = *plVar6;
                  *plVar6 = 0;
                  Memory::free_static((void*)( lVar8 + -0x10 ), false);
               }

               uVar9 = ( ulong ) * (uint*)( this + 0x18 );
               puVar10 = *(undefined8**)( this + 8 );
            }

            uVar5 = ( ulong ) * (uint*)( this + 0x1c );
            uVar7 = uVar7 + 1;
         }
 while ( uVar7 < uVar5 );
         goto LAB_0012046a;
      }

      if (*(uint*)( this + 0x18 ) != 0) goto LAB_001204ab;
      Memory::free_static((void*)*puVar10, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar10 = *(undefined8**)( this + 8 );
   LAB_001204ab:if (puVar10 != (undefined8*)0x0) {
      Memory::free_static(puVar10, false);
      Memory::free_static(*(void**)( this + 0x10 ), false);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      operator_delete(this, 0x58);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<OpenXRAPI::Tracker, true>::~RID_Alloc() */void RID_Alloc<OpenXRAPI::Tracker,true>::~RID_Alloc(RID_Alloc<OpenXRAPI::Tracker,true> *this) {
   long *plVar1;
   long lVar2;
   uint uVar3;
   char *pcVar4;
   ulong uVar5;
   long *plVar6;
   ulong uVar7;
   long lVar8;
   ulong uVar9;
   undefined8 *puVar10;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_00126458;
   uVar3 = *(uint*)( this + 0x20 );
   if (uVar3 == 0) {
      uVar5 = ( ulong ) * (uint*)( this + 0x1c );
      uVar9 = ( ulong ) * (uint*)( this + 0x18 );
      puVar10 = *(undefined8**)( this + 8 );
      LAB_0012069a:if ((uint)uVar5 < (uint)uVar9) goto LAB_001206db;
      lVar8 = 0;
      while (true) {
         Memory::free_static((void*)puVar10[lVar8], false);
         lVar2 = lVar8 * 8;
         lVar8 = lVar8 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         if (( uint )(uVar5 / uVar9) <= (uint)lVar8) break;
         puVar10 = *(undefined8**)( this + 8 );
      }
;
   }
 else {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
      print_error((String*)&local_48);
      pcVar4 = local_48;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar6 = (long*)( local_48 + -0x10 );
         *plVar6 = *plVar6 + -1;
         UNLOCK();
         if (*plVar6 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar4 + -0x10, false);
         }

      }

      lVar8 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar6 = (long*)( local_50 + -0x10 );
         *plVar6 = *plVar6 + -1;
         UNLOCK();
         if (*plVar6 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      uVar9 = ( ulong ) * (uint*)( this + 0x18 );
      puVar10 = *(undefined8**)( this + 8 );
      if (*(int*)( this + 0x1c ) != 0) {
         uVar7 = 0;
         do {
            plVar6 = (long*)( ( uVar7 % uVar9 ) * 0x20 + puVar10[uVar7 / uVar9] );
            if (( -1 < (int)plVar6[3] ) && ( *plVar6 != 0 )) {
               LOCK();
               plVar1 = (long*)( *plVar6 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar8 = *plVar6;
                  *plVar6 = 0;
                  Memory::free_static((void*)( lVar8 + -0x10 ), false);
               }

               uVar9 = ( ulong ) * (uint*)( this + 0x18 );
               puVar10 = *(undefined8**)( this + 8 );
            }

            uVar5 = ( ulong ) * (uint*)( this + 0x1c );
            uVar7 = uVar7 + 1;
         }
 while ( uVar7 < uVar5 );
         goto LAB_0012069a;
      }

      if (*(uint*)( this + 0x18 ) != 0) goto LAB_001206db;
      Memory::free_static((void*)*puVar10, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar10 = *(undefined8**)( this + 8 );
   LAB_001206db:if (puVar10 != (undefined8*)0x0) {
      Memory::free_static(puVar10, false);
      Memory::free_static(*(void**)( this + 0x10 ), false);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      operator_delete(this, 0x58);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<OpenXRAPI::Tracker, true>::make_rid(OpenXRAPI::Tracker const&) */ulong RID_Alloc<OpenXRAPI::Tracker,true>::make_rid(RID_Alloc<OpenXRAPI::Tracker,true> *this, Tracker *param_1) {
   pthread_mutex_t *__mutex;
   long *plVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   int iVar6;
   uint uVar7;
   undefined8 uVar8;
   long lVar9;
   uint uVar10;
   uint uVar11;
   CowData<char32_t> *this_00;
   ulong uVar12;
   ulong uVar13;
   char *pcVar14;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   __mutex = (pthread_mutex_t*)( this + 0x30 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar6 = pthread_mutex_lock(__mutex);
   if (iVar6 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar6);
   }

   uVar7 = *(uint*)( this + 0x20 );
   if (uVar7 == *(uint*)( this + 0x1c )) {
      if (uVar7 != 0) {
         uVar7 = uVar7 / *(uint*)( this + 0x18 );
      }

      if (*(uint*)( this + 0x24 ) != uVar7) {
         lVar3 = *(long*)( this + 8 );
         uVar12 = (ulong)uVar7;
         uVar8 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) << 5, false);
         uVar7 = *(uint*)( this + 0x18 );
         lVar4 = *(long*)( this + 0x10 );
         *(undefined8*)( lVar3 + uVar12 * 8 ) = uVar8;
         uVar8 = Memory::alloc_static((ulong)uVar7 << 2, false);
         uVar7 = *(uint*)( this + 0x18 );
         *(undefined8*)( uVar12 * 8 + lVar4 ) = uVar8;
         if (uVar7 != 0) {
            lVar3 = *(long*)( *(long*)( this + 8 ) + uVar12 * 8 );
            lVar4 = *(long*)( *(long*)( this + 0x10 ) + uVar12 * 8 );
            lVar9 = 0;
            do {
               *(undefined4*)( lVar3 + 0x18 + lVar9 * 0x20 ) = 0xffffffff;
               *(int*)( lVar4 + lVar9 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar9;
               uVar7 = *(uint*)( this + 0x18 );
               lVar9 = lVar9 + 1;
            }
 while ( (uint)lVar9 < uVar7 );
         }

         *(uint*)( this + 0x1c ) = uVar7 + *(int*)( this + 0x1c );
         uVar7 = *(uint*)( this + 0x20 );
         goto LAB_001209bb;
      }

      pthread_mutex_unlock(__mutex);
      pcVar14 = *(char**)( this + 0x28 );
      if (pcVar14 == (char*)0x0) {
         uVar13 = 0;
         _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x85, "Method/function failed. Returning: RID()", "Element limit reached.", 0, 0);
      }
 else {
         local_60 = 0;
         local_50 = strlen(pcVar14);
         local_58 = pcVar14;
         String::parse_latin1((StrRange*)&local_60);
         local_50 = 0x2b;
         local_58 = "Element limit for RID of type \'%s\' reached.";
         local_68 = 0;
         String::parse_latin1((StrRange*)&local_68);
         vformat<String>(&local_58, &local_68, (StrRange*)&local_60);
         _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x83, "Method/function failed. Returning: RID()", &local_58, 0, 0);
         pcVar14 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar14 + -0x10, false);
            }

         }

         lVar3 = local_68;
         if (local_68 != 0) {
            LOCK();
            plVar1 = (long*)( local_68 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_68 = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         lVar3 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               uVar13 = 0;
               local_60 = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
               goto LAB_00120bf4;
            }

         }

         uVar13 = 0;
      }

   }
 else {
      LAB_001209bb:uVar2 = *(uint*)( this + 0x18 );
      uVar7 = *(uint*)( *(long*)( *(long*)( this + 0x10 ) + ( (ulong)uVar7 / (ulong)uVar2 ) * 8 ) + ( (ulong)uVar7 % (ulong)uVar2 ) * 4 );
      uVar12 = (ulong)uVar7;
      LOCK();
      UNLOCK();
      uVar10 = (int)RID_AllocBase::base_id + 1;
      uVar11 = uVar10 & 0x7fffffff;
      if (uVar11 == 0x7fffffff) {
         RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
         _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0xa9, "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.", "Overflow in RID validator", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar5 = (code*)invalidInstructionException();
         ( *pcVar5 )();
      }

      uVar13 = CONCAT44(uVar10, uVar7) & 0x7fffffffffffffff;
      RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
      *(uint*)( ( uVar12 % (ulong)uVar2 ) * 0x20 + *(long*)( *(long*)( this + 8 ) + ( uVar12 / uVar2 ) * 8 ) + 0x18 ) = uVar11 | 0x80000000;
      *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
      pthread_mutex_unlock(__mutex);
      if (uVar13 == 0) {
         uVar13 = 0;
      }
 else if ((uint)uVar13 < *(uint*)( this + 0x1c )) {
         this_00 = (CowData<char32_t>*)( ( uVar12 % ( ulong ) * (uint*)( this + 0x18 ) ) * 0x20 + *(long*)( *(long*)( this + 8 ) + ( uVar12 / *(uint*)( this + 0x18 ) ) * 8 ) );
         if ((int)*(uint*)( this_00 + 0x18 ) < 0) {
            uVar7 = *(uint*)( this_00 + 0x18 ) & 0x7fffffff;
            if (uVar7 == ( uint )(uVar13 >> 0x20)) {
               *(undefined8*)this_00 = 0;
               lVar3 = *(long*)param_1;
               *(uint*)( this_00 + 0x18 ) = uVar7;
               if (lVar3 != 0) {
                  CowData<char32_t>::_ref(this_00, (CowData*)param_1);
               }

               *(undefined8*)( this_00 + 8 ) = *(undefined8*)( param_1 + 8 );
               *(undefined8*)( this_00 + 0x10 ) = *(undefined8*)( param_1 + 0x10 );
               goto LAB_00120a9c;
            }

            pcVar14 = "Attempting to initialize the wrong RID";
            uVar8 = 0xfc;
         }
 else {
            pcVar14 = "Initializing already initialized RID";
            uVar8 = 0xf8;
         }

         _err_print_error("get_or_null", "./core/templates/rid_owner.h", uVar8, "Method/function failed. Returning: nullptr", pcVar14, 0, 0);
      }

   }

   LAB_00120bf4:_err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
   LAB_00120a9c:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar13;
}
/* RID_Alloc<OpenXRAPI::ActionSet, true>::make_rid(OpenXRAPI::ActionSet const&) */ulong RID_Alloc<OpenXRAPI::ActionSet,true>::make_rid(RID_Alloc<OpenXRAPI::ActionSet,true> *this, ActionSet *param_1) {
   pthread_mutex_t *__mutex;
   long *plVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   int iVar6;
   uint uVar7;
   undefined8 uVar8;
   long lVar9;
   uint uVar10;
   uint uVar11;
   CowData<char32_t> *this_00;
   ulong uVar12;
   ulong uVar13;
   char *pcVar14;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   __mutex = (pthread_mutex_t*)( this + 0x30 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar6 = pthread_mutex_lock(__mutex);
   if (iVar6 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar6);
   }

   uVar7 = *(uint*)( this + 0x20 );
   if (uVar7 == *(uint*)( this + 0x1c )) {
      if (uVar7 != 0) {
         uVar7 = uVar7 / *(uint*)( this + 0x18 );
      }

      if (*(uint*)( this + 0x24 ) != uVar7) {
         lVar3 = *(long*)( this + 8 );
         uVar12 = (ulong)uVar7;
         uVar8 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) << 5, false);
         uVar7 = *(uint*)( this + 0x18 );
         lVar4 = *(long*)( this + 0x10 );
         *(undefined8*)( lVar3 + uVar12 * 8 ) = uVar8;
         uVar8 = Memory::alloc_static((ulong)uVar7 << 2, false);
         uVar7 = *(uint*)( this + 0x18 );
         *(undefined8*)( uVar12 * 8 + lVar4 ) = uVar8;
         if (uVar7 != 0) {
            lVar3 = *(long*)( *(long*)( this + 8 ) + uVar12 * 8 );
            lVar4 = *(long*)( *(long*)( this + 0x10 ) + uVar12 * 8 );
            lVar9 = 0;
            do {
               *(undefined4*)( lVar3 + 0x18 + lVar9 * 0x20 ) = 0xffffffff;
               *(int*)( lVar4 + lVar9 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar9;
               uVar7 = *(uint*)( this + 0x18 );
               lVar9 = lVar9 + 1;
            }
 while ( (uint)lVar9 < uVar7 );
         }

         *(uint*)( this + 0x1c ) = uVar7 + *(int*)( this + 0x1c );
         uVar7 = *(uint*)( this + 0x20 );
         goto LAB_00120e3b;
      }

      pthread_mutex_unlock(__mutex);
      pcVar14 = *(char**)( this + 0x28 );
      if (pcVar14 == (char*)0x0) {
         uVar13 = 0;
         _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x85, "Method/function failed. Returning: RID()", "Element limit reached.", 0, 0);
      }
 else {
         local_60 = 0;
         local_50 = strlen(pcVar14);
         local_58 = pcVar14;
         String::parse_latin1((StrRange*)&local_60);
         local_50 = 0x2b;
         local_58 = "Element limit for RID of type \'%s\' reached.";
         local_68 = 0;
         String::parse_latin1((StrRange*)&local_68);
         vformat<String>(&local_58, &local_68, (StrRange*)&local_60);
         _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x83, "Method/function failed. Returning: RID()", &local_58, 0, 0);
         pcVar14 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar14 + -0x10, false);
            }

         }

         lVar3 = local_68;
         if (local_68 != 0) {
            LOCK();
            plVar1 = (long*)( local_68 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_68 = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         lVar3 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               uVar13 = 0;
               local_60 = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
               goto LAB_00121074;
            }

         }

         uVar13 = 0;
      }

   }
 else {
      LAB_00120e3b:uVar2 = *(uint*)( this + 0x18 );
      uVar7 = *(uint*)( *(long*)( *(long*)( this + 0x10 ) + ( (ulong)uVar7 / (ulong)uVar2 ) * 8 ) + ( (ulong)uVar7 % (ulong)uVar2 ) * 4 );
      uVar12 = (ulong)uVar7;
      LOCK();
      UNLOCK();
      uVar10 = (int)RID_AllocBase::base_id + 1;
      uVar11 = uVar10 & 0x7fffffff;
      if (uVar11 == 0x7fffffff) {
         RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
         _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0xa9, "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.", "Overflow in RID validator", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar5 = (code*)invalidInstructionException();
         ( *pcVar5 )();
      }

      uVar13 = CONCAT44(uVar10, uVar7) & 0x7fffffffffffffff;
      RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
      *(uint*)( ( uVar12 % (ulong)uVar2 ) * 0x20 + *(long*)( *(long*)( this + 8 ) + ( uVar12 / uVar2 ) * 8 ) + 0x18 ) = uVar11 | 0x80000000;
      *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
      pthread_mutex_unlock(__mutex);
      if (uVar13 == 0) {
         uVar13 = 0;
      }
 else if ((uint)uVar13 < *(uint*)( this + 0x1c )) {
         this_00 = (CowData<char32_t>*)( ( uVar12 % ( ulong ) * (uint*)( this + 0x18 ) ) * 0x20 + *(long*)( *(long*)( this + 8 ) + ( uVar12 / *(uint*)( this + 0x18 ) ) * 8 ) );
         if ((int)*(uint*)( this_00 + 0x18 ) < 0) {
            uVar7 = *(uint*)( this_00 + 0x18 ) & 0x7fffffff;
            if (uVar7 == ( uint )(uVar13 >> 0x20)) {
               *(undefined8*)this_00 = 0;
               lVar3 = *(long*)param_1;
               *(uint*)( this_00 + 0x18 ) = uVar7;
               if (lVar3 != 0) {
                  CowData<char32_t>::_ref(this_00, (CowData*)param_1);
               }

               this_00[8] = *(CowData<char32_t>*)( param_1 + 8 );
               *(undefined8*)( this_00 + 0x10 ) = *(undefined8*)( param_1 + 0x10 );
               goto LAB_00120f1c;
            }

            pcVar14 = "Attempting to initialize the wrong RID";
            uVar8 = 0xfc;
         }
 else {
            pcVar14 = "Initializing already initialized RID";
            uVar8 = 0xf8;
         }

         _err_print_error("get_or_null", "./core/templates/rid_owner.h", uVar8, "Method/function failed. Returning: nullptr", pcVar14, 0, 0);
      }

   }

   LAB_00121074:_err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
   LAB_00120f1c:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar13;
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
/* Error CowData<String>::resize<false>(long) */undefined8 CowData<String>::resize<false>(CowData<String> *this, long param_1) {
   long *plVar1;
   long *plVar2;
   code *pcVar3;
   undefined8 *puVar4;
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
      lVar9 = 0;
      lVar5 = 0;
   }
 else {
      lVar9 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar9) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar5 = lVar9 * 8;
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
      LAB_00121550:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar6 = param_1 * 8 - 1;
   uVar6 = uVar6 >> 1 | uVar6;
   uVar6 = uVar6 | uVar6 >> 2;
   uVar6 = uVar6 | uVar6 >> 4;
   uVar6 = uVar6 | uVar6 >> 8;
   uVar6 = uVar6 | uVar6 >> 0x10;
   uVar6 = uVar6 | uVar6 >> 0x20;
   if (uVar6 == 0xffffffffffffffff) goto LAB_00121550;
   if (param_1 <= lVar9) {
      puVar7 = *(undefined8**)this;
      uVar8 = param_1;
      while (puVar7 != (undefined8*)0x0) {
         if ((ulong)puVar7[-1] <= uVar8) {
            LAB_001213d9:if (uVar6 + 1 != lVar5) {
               puVar4 = (undefined8*)Memory::realloc_static(puVar7 + -2, uVar6 + 0x11, false);
               if (puVar4 == (undefined8*)0x0) goto LAB_0012157f;
               puVar7 = puVar4 + 2;
               *puVar4 = 1;
               *(undefined8**)this = puVar7;
            }

            puVar7[-1] = param_1;
            return 0;
         }

         while (true) {
            plVar2 = puVar7 + uVar8;
            if (*plVar2 != 0) break;
            uVar8 = uVar8 + 1;
            if ((ulong)puVar7[-1] <= uVar8) goto LAB_001213d9;
         }
;
         LOCK();
         plVar1 = (long*)( *plVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar9 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void*)( lVar9 + -0x10 ), false);
         }

         uVar8 = uVar8 + 1;
         puVar7 = *(undefined8**)this;
      }
;
      LAB_001215cd:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   if (uVar6 + 1 == lVar5) {
      puVar7 = *(undefined8**)this;
      if (puVar7 == (undefined8*)0x0) goto LAB_001215cd;
      lVar9 = puVar7[-1];
      LAB_001214b0:if (param_1 <= lVar9) goto LAB_00121465;
   }
 else {
      if (lVar9 != 0) {
         puVar4 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar6 + 0x11, false);
         if (puVar4 == (undefined8*)0x0) {
            LAB_0012157f:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
            return 6;
         }

         puVar7 = puVar4 + 2;
         *puVar4 = 1;
         *(undefined8**)this = puVar7;
         lVar9 = puVar4[1];
         goto LAB_001214b0;
      }

      puVar4 = (undefined8*)Memory::alloc_static(uVar6 + 0x11, false);
      if (puVar4 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar7 = puVar4 + 2;
      *puVar4 = 1;
      puVar4[1] = 0;
      *(undefined8**)this = puVar7;
      lVar9 = 0;
   }

   memset(puVar7 + lVar9, 0, ( param_1 - lVar9 ) * 8);
   LAB_00121465:puVar7[-1] = param_1;
   return 0;
}
/* CowData<Vector<unsigned char> >::_unref() */void CowData<Vector<unsigned_char>>::_unref(CowData<Vector<unsigned_char>> *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long lVar6;
   long lVar7;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      lVar2 = *(long*)this;
      if (lVar2 != 0) {
         lVar3 = *(long*)( lVar2 + -8 );
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar7 = 0;
            lVar6 = lVar2;
            do {
               if (*(long*)( lVar6 + 8 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 8 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( lVar6 + 8 );
                     *(undefined8*)( lVar6 + 8 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar7 = lVar7 + 1;
               lVar6 = lVar6 + 0x10;
            }
 while ( lVar3 != lVar7 );
         }

         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }

      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* RID_Alloc<OpenXRAPI::InteractionProfile, true>::~RID_Alloc() */void RID_Alloc<OpenXRAPI::InteractionProfile,true>::~RID_Alloc(RID_Alloc<OpenXRAPI::InteractionProfile,true> *this) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   uint uVar4;
   char *pcVar5;
   ulong uVar6;
   ulong uVar7;
   long lVar8;
   ulong uVar9;
   undefined8 *puVar10;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_001264b8;
   uVar4 = *(uint*)( this + 0x20 );
   if (uVar4 == 0) {
      uVar6 = ( ulong ) * (uint*)( this + 0x1c );
      uVar9 = ( ulong ) * (uint*)( this + 0x18 );
      puVar10 = *(undefined8**)( this + 8 );
      LAB_0012182a:if ((uint)uVar6 < (uint)uVar9) goto LAB_0012186b;
      lVar8 = 0;
      while (true) {
         Memory::free_static((void*)puVar10[lVar8], false);
         lVar3 = lVar8 * 8;
         lVar8 = lVar8 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar3 ), false);
         if (( uint )(uVar6 / uVar9) <= (uint)lVar8) break;
         puVar10 = *(undefined8**)( this + 8 );
      }
;
   }
 else {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar4);
      print_error((String*)&local_48);
      pcVar5 = local_48;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar5 + -0x10, false);
         }

      }

      lVar8 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      uVar9 = ( ulong ) * (uint*)( this + 0x18 );
      puVar10 = *(undefined8**)( this + 8 );
      if (*(int*)( this + 0x1c ) != 0) {
         uVar7 = 0;
         do {
            plVar1 = (long*)( puVar10[uVar7 / uVar9] + ( uVar7 % uVar9 ) * 0x38 );
            if (-1 < (int)plVar1[6]) {
               CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>>*)( plVar1 + 5 ));
               if (plVar1[3] != 0) {
                  LOCK();
                  plVar2 = (long*)( plVar1[3] + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar8 = plVar1[3];
                     plVar1[3] = 0;
                     Memory::free_static((void*)( lVar8 + -0x10 ), false);
                  }

               }

               if (*plVar1 != 0) {
                  LOCK();
                  plVar2 = (long*)( *plVar1 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar8 = *plVar1;
                     *plVar1 = 0;
                     Memory::free_static((void*)( lVar8 + -0x10 ), false);
                  }

               }

               uVar9 = ( ulong ) * (uint*)( this + 0x18 );
               puVar10 = *(undefined8**)( this + 8 );
            }

            uVar6 = ( ulong ) * (uint*)( this + 0x1c );
            uVar7 = uVar7 + 1;
         }
 while ( uVar7 < uVar6 );
         goto LAB_0012182a;
      }

      if (*(uint*)( this + 0x18 ) != 0) goto LAB_0012186b;
      Memory::free_static((void*)*puVar10, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar10 = *(undefined8**)( this + 8 );
   LAB_0012186b:if (puVar10 == (undefined8*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      Memory::free_static(puVar10, false);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(*(void**)( this + 0x10 ), false);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<OpenXRAPI::InteractionProfile, true>::~RID_Alloc() */void RID_Alloc<OpenXRAPI::InteractionProfile,true>::~RID_Alloc(RID_Alloc<OpenXRAPI::InteractionProfile,true> *this) {
   ~RID_Alloc(this)
   ;;
   operator_delete(this, 0x58);
   return;
}
/* String stringify_variants<char const*>(Variant const&, char const*) */Variant *stringify_variants<char_const*>(Variant *param_1, char *param_2) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   char *in_RDX;
   long in_FS_OFFSET;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_58, in_RDX);
   stringify_variants((Variant*)&local_70);
   local_68 = &_LC250;
   local_78 = 0;
   local_60 = 1;
   String::parse_latin1((StrRange*)&local_78);
   Variant::operator_cast_to_String((Variant*)&local_80);
   String::operator +((String*)&local_68, (String*)&local_80);
   String::operator +((String*)param_1, (String*)&local_68);
   puVar3 = local_68;
   if (local_68 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (undefined*)0x0;
         Memory::free_static(puVar3 + -0x10, false);
      }

   }

   lVar2 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

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

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String stringify_variants<String, char const*>(Variant const&, String, char const*) */String *stringify_variants<String,char_const*>(String *param_1, undefined8 param_2, String *param_3) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   long in_FS_OFFSET;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_58, param_3);
   stringify_variants<char_const*>((Variant*)&local_70, (char*)local_58);
   local_78 = 0;
   local_68 = &_LC250;
   local_60 = 1;
   String::parse_latin1((StrRange*)&local_78);
   Variant::operator_cast_to_String((Variant*)&local_80);
   String::operator +((String*)&local_68, (String*)&local_80);
   String::operator +(param_1, (String*)&local_68);
   puVar3 = local_68;
   if (local_68 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (undefined*)0x0;
         Memory::free_static(puVar3 + -0x10, false);
      }

   }

   lVar2 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

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

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void print_line<String, char const*>(Variant const&, String, char const*) */void print_line<String,char_const*>(undefined8 param_1, long *param_2, undefined8 param_3) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long in_FS_OFFSET;
   bool bVar4;
   long local_20;
   long local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_20 = 0;
   if (*param_2 != 0) {
      plVar1 = (long*)( *param_2 + -0x10 );
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_00121d72;
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
         local_20 = *param_2;
      }

   }

   LAB_00121d72:stringify_variants<String,char_const*>((String*)&local_18, param_1, &local_20, param_3);
   __print_line((String*)&local_18);
   lVar2 = local_18;
   if (local_18 != 0) {
      LOCK();
      plVar1 = (long*)( local_18 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_18 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_20;
   if (local_20 != 0) {
      LOCK();
      plVar1 = (long*)( local_20 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_20 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void print_line<String, char const*, String, char const*>(Variant const&, String, char const*,
   String, char const*) */void print_line<String,char_const*,String,char_const*>(undefined8 param_1, long *param_2, char *param_3, long *param_4, undefined8 param_5) {
   undefined *puVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   long lVar5;
   long in_FS_OFFSET;
   bool bVar6;
   long local_c8;
   long local_b8;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   undefined *local_88;
   undefined8 local_80;
   int local_78[8];
   int local_58[6];
   long local_40;
   plVar4 = (long*)( *param_4 + -0x10 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_4 == 0) {
      local_b8 = 0;
      lVar5 = *param_2;
      lVar2 = 0;
      if (lVar5 != 0) goto LAB_00121e8a;
      LAB_0012231d:Variant::Variant((Variant*)local_78, (String*)&local_b8);
      local_98 = 0;
      local_c8 = 0;
   }
 else {
      do {
         lVar5 = *plVar4;
         if (lVar5 == 0) {
            lVar5 = *param_2;
            goto LAB_00122298;
         }

         LOCK();
         lVar2 = *plVar4;
         bVar6 = lVar5 == lVar2;
         if (bVar6) {
            *plVar4 = lVar5 + 1;
            lVar2 = lVar5;
         }

         UNLOCK();
      }
 while ( !bVar6 );
      lVar5 = *param_2;
      if (lVar2 == -1) {
         LAB_00122298:local_b8 = 0;
         lVar2 = 0;
         if (lVar5 != 0) goto LAB_00121e8a;
      }
 else {
         local_b8 = 0;
         lVar2 = *param_4;
         if (lVar5 != 0) {
            LAB_00121e8a:local_b8 = 0;
            plVar4 = (long*)( lVar5 + -0x10 );
            do {
               lVar5 = *plVar4;
               if (lVar5 == 0) goto LAB_00121eaf;
               LOCK();
               lVar3 = *plVar4;
               bVar6 = lVar5 == lVar3;
               if (bVar6) {
                  *plVar4 = lVar5 + 1;
                  lVar3 = lVar5;
               }

               UNLOCK();
            }
 while ( !bVar6 );
            if (lVar3 != -1) {
               local_b8 = *param_2;
            }

         }

         LAB_00121eaf:plVar4 = (long*)( lVar2 + -0x10 );
         if (lVar2 != 0) {
            do {
               lVar5 = *plVar4;
               if (lVar5 == 0) goto LAB_0012231d;
               LOCK();
               lVar3 = *plVar4;
               bVar6 = lVar5 == lVar3;
               if (bVar6) {
                  *plVar4 = lVar5 + 1;
                  lVar3 = lVar5;
               }

               UNLOCK();
            }
 while ( !bVar6 );
            if (lVar3 == -1) goto LAB_0012231d;
            Variant::Variant((Variant*)local_78, (String*)&local_b8);
            local_98 = 0;
            do {
               lVar5 = *plVar4;
               local_c8 = lVar2;
               if (lVar5 == 0) goto LAB_00121f24;
               LOCK();
               lVar3 = *plVar4;
               bVar6 = lVar5 == lVar3;
               if (bVar6) {
                  *plVar4 = lVar5 + 1;
                  lVar3 = lVar5;
               }

               UNLOCK();
            }
 while ( !bVar6 );
            if (lVar3 != -1) {
               local_98 = lVar2;
            }

            goto LAB_00121f24;
         }

      }

      lVar2 = 0;
      Variant::Variant((Variant*)local_78, (String*)&local_b8);
      local_98 = 0;
      local_c8 = 0;
   }

   LAB_00121f24:Variant::Variant((Variant*)local_58, param_3);
   stringify_variants<String,char_const*>((StrRange*)&local_90, (Variant*)local_58, (Variant*)&local_98, param_5);
   local_a0 = 0;
   local_88 = &_LC250;
   local_80 = 1;
   String::parse_latin1((StrRange*)&local_a0);
   Variant::operator_cast_to_String((Variant*)&local_a8);
   String::operator +((String*)&local_88, (String*)&local_a8);
   String::operator +((String*)&local_b0, (String*)&local_88);
   puVar1 = local_88;
   if (local_88 != (undefined*)0x0) {
      LOCK();
      plVar4 = (long*)( local_88 + -0x10 );
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
         local_88 = (undefined*)0x0;
         Memory::free_static(puVar1 + -0x10, false);
      }

   }

   lVar5 = local_a8;
   if (local_a8 != 0) {
      LOCK();
      plVar4 = (long*)( local_a8 + -0x10 );
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
         local_a8 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   lVar5 = local_a0;
   if (local_a0 != 0) {
      LOCK();
      plVar4 = (long*)( local_a0 + -0x10 );
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
         local_a0 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   lVar5 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar4 = (long*)( local_90 + -0x10 );
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   lVar5 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar4 = (long*)( local_98 + -0x10 );
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   local_88 = &_LC250;
   local_90 = 0;
   local_80 = 1;
   String::parse_latin1((StrRange*)&local_90);
   Variant::operator_cast_to_String((Variant*)&local_98);
   String::operator +((String*)&local_88, (String*)&local_98);
   String::operator +((String*)&local_a0, (String*)&local_88);
   puVar1 = local_88;
   if (local_88 != (undefined*)0x0) {
      LOCK();
      plVar4 = (long*)( local_88 + -0x10 );
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
         local_88 = (undefined*)0x0;
         Memory::free_static(puVar1 + -0x10, false);
      }

   }

   lVar5 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar4 = (long*)( local_98 + -0x10 );
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   lVar5 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar4 = (long*)( local_90 + -0x10 );
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   lVar5 = local_b0;
   if (local_b0 != 0) {
      LOCK();
      plVar4 = (long*)( local_b0 + -0x10 );
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
         local_b0 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_c8 != 0) {
      plVar4 = (long*)( local_c8 + -0x10 );
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
         Memory::free_static(plVar4, false);
      }

   }

   __print_line((String*)&local_a0);
   lVar5 = local_a0;
   if (local_a0 != 0) {
      LOCK();
      plVar4 = (long*)( local_a0 + -0x10 );
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
         local_a0 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   lVar5 = local_b8;
   if (local_b8 != 0) {
      LOCK();
      plVar4 = (long*)( local_b8 + -0x10 );
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
         local_b8 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   if (lVar2 != 0) {
      plVar4 = (long*)( lVar2 + -0x10 );
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static(plVar4, false);
            return;
         }

         goto LAB_0012236f;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0012236f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<OpenXRAPI::OpenXRSwapChainInfo>::resize<false>(long) */undefined8 CowData<OpenXRAPI::OpenXRSwapChainInfo>::resize<false>(CowData<OpenXRAPI::OpenXRSwapChainInfo> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   undefined1(*pauVar3)[16];
   long lVar4;
   ulong uVar5;
   undefined8 *puVar6;
   undefined1(*pauVar7)[16];
   undefined8 *puVar8;
   long lVar9;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   lVar4 = *(long*)this;
   if (lVar4 == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar9 = 0;
      lVar4 = 0;
   }
 else {
      lVar9 = *(long*)( lVar4 + -8 );
      if (param_1 == lVar9) {
         return 0;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar4 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return 0;
         }

         lVar4 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
         return 0;
      }

      _copy_on_write(this);
      lVar4 = lVar9 * 0x18;
      if (lVar4 != 0) {
         uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
         uVar5 = uVar5 | uVar5 >> 2;
         uVar5 = uVar5 | uVar5 >> 4;
         uVar5 = uVar5 | uVar5 >> 8;
         uVar5 = uVar5 | uVar5 >> 0x10;
         lVar4 = ( uVar5 | uVar5 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x18 == 0) {
      LAB_00122898:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar5 = param_1 * 0x18 - 1;
   uVar5 = uVar5 >> 1 | uVar5;
   uVar5 = uVar5 | uVar5 >> 2;
   uVar5 = uVar5 | uVar5 >> 4;
   uVar5 = uVar5 | uVar5 >> 8;
   uVar5 = uVar5 | uVar5 >> 0x10;
   uVar5 = uVar5 | uVar5 >> 0x20;
   if (uVar5 == 0xffffffffffffffff) goto LAB_00122898;
   if (param_1 <= lVar9) {
      puVar8 = *(undefined8**)this;
      if (uVar5 + 1 == lVar4) {
         if (puVar8 == (undefined8*)0x0) {
            _DAT_00000000 = 0;
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

      }
 else {
         puVar6 = (undefined8*)Memory::realloc_static(puVar8 + -2, uVar5 + 0x11, false);
         if (puVar6 == (undefined8*)0x0) {
            LAB_001228d0:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
            return 6;
         }

         puVar8 = puVar6 + 2;
         *puVar6 = 1;
         *(undefined8**)this = puVar8;
      }

      puVar8[-1] = param_1;
      return 0;
   }

   if (uVar5 + 1 == lVar4) {
      puVar8 = *(undefined8**)this;
      if (puVar8 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar4 = puVar8[-1];
      LAB_001227d9:if (param_1 <= lVar4) goto LAB_0012274a;
   }
 else {
      if (lVar9 != 0) {
         puVar6 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar5 + 0x11, false);
         if (puVar6 == (undefined8*)0x0) goto LAB_001228d0;
         puVar8 = puVar6 + 2;
         *puVar6 = 1;
         *(undefined8**)this = puVar8;
         lVar4 = puVar6[1];
         goto LAB_001227d9;
      }

      puVar6 = (undefined8*)Memory::alloc_static(uVar5 + 0x11, false);
      if (puVar6 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar8 = puVar6 + 2;
      *puVar6 = 1;
      puVar6[1] = 0;
      *(undefined8**)this = puVar8;
      lVar4 = 0;
   }

   pauVar7 = (undefined1(*) [16])( puVar8 + lVar4 * 3 );
   do {
      *(undefined4*)pauVar7[1] = 0;
      pauVar3 = pauVar7 + 1;
      *pauVar7 = (undefined1[16])0x0;
      *(undefined2*)( pauVar7[1] + 4 ) = 0;
      pauVar7 = (undefined1(*) [16])( *pauVar3 + 8 );
   }
 while ( (undefined1(*) [16])( puVar8 + param_1 * 3 ) != (undefined1(*) [16])( *pauVar3 + 8 ) );
   LAB_0012274a:puVar8[-1] = param_1;
   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<char const*>::resize<false>(long) */undefined8 CowData<char_const*>::resize<false>(CowData<char_const*> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   long lVar7;
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
      lVar7 = 0;
      lVar3 = 0;
   }
 else {
      lVar7 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar7) {
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
      lVar3 = lVar7 * 8;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 != 0) {
      uVar4 = param_1 * 8 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = uVar4 | uVar4 >> 0x20;
      if (uVar4 != 0xffffffffffffffff) {
         if (lVar7 < param_1) {
            if (uVar4 + 1 == lVar3) {
               puVar5 = *(undefined8**)this;
               if (puVar5 == (undefined8*)0x0) goto LAB_00122ad9;
            }
 else {
               if (lVar7 == 0) {
                  puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) {
                     _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                     return 6;
                  }

                  *puVar5 = 1;
                  puVar5[1] = 0;
               }
 else {
                  puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) goto LAB_00122bc0;
                  *puVar5 = 1;
               }

               puVar5 = puVar5 + 2;
               *(undefined8**)this = puVar5;
            }

            puVar5[-1] = param_1;
         }
 else {
            puVar5 = *(undefined8**)this;
            if (uVar4 + 1 == lVar3) {
               if (puVar5 == (undefined8*)0x0) {
                  LAB_00122ad9:_DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

            }
 else {
               puVar6 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar4 + 0x11, false);
               if (puVar6 == (undefined8*)0x0) {
                  LAB_00122bc0:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
                  return 6;
               }

               puVar5 = puVar6 + 2;
               *puVar6 = 1;
               *(undefined8**)this = puVar5;
            }

            puVar5[-1] = param_1;
         }

         return 0;
      }

   }

   _err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
   return 6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<OpenXRExtensionWrapper*>::resize<false>(long) */undefined8 CowData<OpenXRExtensionWrapper*>::resize<false>(CowData<OpenXRExtensionWrapper*> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   long lVar7;
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
      lVar7 = 0;
      lVar3 = 0;
   }
 else {
      lVar7 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar7) {
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
      lVar3 = lVar7 * 8;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 != 0) {
      uVar4 = param_1 * 8 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = uVar4 | uVar4 >> 0x20;
      if (uVar4 != 0xffffffffffffffff) {
         if (lVar7 < param_1) {
            if (uVar4 + 1 == lVar3) {
               puVar5 = *(undefined8**)this;
               if (puVar5 == (undefined8*)0x0) goto LAB_00122da9;
            }
 else {
               if (lVar7 == 0) {
                  puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) {
                     _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                     return 6;
                  }

                  *puVar5 = 1;
                  puVar5[1] = 0;
               }
 else {
                  puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) goto LAB_00122e90;
                  *puVar5 = 1;
               }

               puVar5 = puVar5 + 2;
               *(undefined8**)this = puVar5;
            }

            puVar5[-1] = param_1;
         }
 else {
            puVar5 = *(undefined8**)this;
            if (uVar4 + 1 == lVar3) {
               if (puVar5 == (undefined8*)0x0) {
                  LAB_00122da9:_DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

            }
 else {
               puVar6 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar4 + 0x11, false);
               if (puVar6 == (undefined8*)0x0) {
                  LAB_00122e90:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
                  return 6;
               }

               puVar5 = puVar6 + 2;
               *puVar6 = 1;
               *(undefined8**)this = puVar5;
            }

            puVar5[-1] = param_1;
         }

         return 0;
      }

   }

   _err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
   return 6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<OpenXRAPI::OrderedCompositionLayer>::resize<false>(long) */undefined8 CowData<OpenXRAPI::OrderedCompositionLayer>::resize<false>(CowData<OpenXRAPI::OrderedCompositionLayer> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   long lVar7;
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
      lVar7 = 0;
      lVar3 = 0;
   }
 else {
      lVar7 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar7) {
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
      lVar3 = lVar7 * 0x10;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x10 != 0) {
      uVar4 = param_1 * 0x10 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = uVar4 | uVar4 >> 0x20;
      if (uVar4 != 0xffffffffffffffff) {
         if (lVar7 < param_1) {
            if (uVar4 + 1 == lVar3) {
               puVar5 = *(undefined8**)this;
               if (puVar5 == (undefined8*)0x0) goto LAB_00123079;
            }
 else {
               if (lVar7 == 0) {
                  puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) {
                     _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                     return 6;
                  }

                  *puVar5 = 1;
                  puVar5[1] = 0;
               }
 else {
                  puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) goto LAB_00123160;
                  *puVar5 = 1;
               }

               puVar5 = puVar5 + 2;
               *(undefined8**)this = puVar5;
            }

            puVar5[-1] = param_1;
         }
 else {
            puVar5 = *(undefined8**)this;
            if (uVar4 + 1 == lVar3) {
               if (puVar5 == (undefined8*)0x0) {
                  LAB_00123079:_DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

            }
 else {
               puVar6 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar4 + 0x11, false);
               if (puVar6 == (undefined8*)0x0) {
                  LAB_00123160:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
                  return 6;
               }

               puVar5 = puVar6 + 2;
               *puVar6 = 1;
               *(undefined8**)this = puVar5;
            }

            puVar5[-1] = param_1;
         }

         return 0;
      }

   }

   _err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
   return 6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<XrCompositionLayerBaseHeader const*>::resize<false>(long) */undefined8 CowData<XrCompositionLayerBaseHeader_const*>::resize<false>(CowData<XrCompositionLayerBaseHeader_const*> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   long lVar7;
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
      lVar7 = 0;
      lVar3 = 0;
   }
 else {
      lVar7 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar7) {
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
      lVar3 = lVar7 * 8;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 != 0) {
      uVar4 = param_1 * 8 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = uVar4 | uVar4 >> 0x20;
      if (uVar4 != 0xffffffffffffffff) {
         if (lVar7 < param_1) {
            if (uVar4 + 1 == lVar3) {
               puVar5 = *(undefined8**)this;
               if (puVar5 == (undefined8*)0x0) goto LAB_00123349;
            }
 else {
               if (lVar7 == 0) {
                  puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) {
                     _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                     return 6;
                  }

                  *puVar5 = 1;
                  puVar5[1] = 0;
               }
 else {
                  puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) goto LAB_00123430;
                  *puVar5 = 1;
               }

               puVar5 = puVar5 + 2;
               *(undefined8**)this = puVar5;
            }

            puVar5[-1] = param_1;
         }
 else {
            puVar5 = *(undefined8**)this;
            if (uVar4 + 1 == lVar3) {
               if (puVar5 == (undefined8*)0x0) {
                  LAB_00123349:_DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

            }
 else {
               puVar6 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar4 + 0x11, false);
               if (puVar6 == (undefined8*)0x0) {
                  LAB_00123430:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
                  return 6;
               }

               puVar5 = puVar6 + 2;
               *puVar6 = 1;
               *(undefined8**)this = puVar5;
            }

            puVar5[-1] = param_1;
         }

         return 0;
      }

   }

   _err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
   return 6;
}
/* CowData<CharString>::_unref() */void CowData<CharString>::_unref(CowData<CharString> *this) {
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
/* Error CowData<CharString>::resize<false>(long) */undefined8 CowData<CharString>::resize<false>(CowData<CharString> *this, long param_1) {
   long *plVar1;
   long *plVar2;
   code *pcVar3;
   undefined8 *puVar4;
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
      lVar9 = 0;
      lVar5 = 0;
   }
 else {
      lVar9 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar9) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar5 = lVar9 * 8;
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
      LAB_001237f0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar6 = param_1 * 8 - 1;
   uVar6 = uVar6 >> 1 | uVar6;
   uVar6 = uVar6 | uVar6 >> 2;
   uVar6 = uVar6 | uVar6 >> 4;
   uVar6 = uVar6 | uVar6 >> 8;
   uVar6 = uVar6 | uVar6 >> 0x10;
   uVar6 = uVar6 | uVar6 >> 0x20;
   if (uVar6 == 0xffffffffffffffff) goto LAB_001237f0;
   if (param_1 <= lVar9) {
      puVar7 = *(undefined8**)this;
      uVar8 = param_1;
      while (puVar7 != (undefined8*)0x0) {
         if ((ulong)puVar7[-1] <= uVar8) {
            LAB_00123679:if (uVar6 + 1 != lVar5) {
               puVar4 = (undefined8*)Memory::realloc_static(puVar7 + -2, uVar6 + 0x11, false);
               if (puVar4 == (undefined8*)0x0) goto LAB_0012381f;
               puVar7 = puVar4 + 2;
               *puVar4 = 1;
               *(undefined8**)this = puVar7;
            }

            puVar7[-1] = param_1;
            return 0;
         }

         while (true) {
            plVar2 = puVar7 + uVar8;
            if (*plVar2 != 0) break;
            uVar8 = uVar8 + 1;
            if ((ulong)puVar7[-1] <= uVar8) goto LAB_00123679;
         }
;
         LOCK();
         plVar1 = (long*)( *plVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar9 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void*)( lVar9 + -0x10 ), false);
         }

         uVar8 = uVar8 + 1;
         puVar7 = *(undefined8**)this;
      }
;
      LAB_0012386d:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   if (uVar6 + 1 == lVar5) {
      puVar7 = *(undefined8**)this;
      if (puVar7 == (undefined8*)0x0) goto LAB_0012386d;
      lVar9 = puVar7[-1];
      LAB_00123750:if (param_1 <= lVar9) goto LAB_00123705;
   }
 else {
      if (lVar9 != 0) {
         puVar4 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar6 + 0x11, false);
         if (puVar4 == (undefined8*)0x0) {
            LAB_0012381f:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
            return 6;
         }

         puVar7 = puVar4 + 2;
         *puVar4 = 1;
         *(undefined8**)this = puVar7;
         lVar9 = puVar4[1];
         goto LAB_00123750;
      }

      puVar4 = (undefined8*)Memory::alloc_static(uVar6 + 0x11, false);
      if (puVar4 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar7 = puVar4 + 2;
      *puVar4 = 1;
      puVar4[1] = 0;
      *(undefined8**)this = puVar7;
      lVar9 = 0;
   }

   memset(puVar7 + lVar9, 0, ( param_1 - lVar9 ) * 8);
   LAB_00123705:puVar7[-1] = param_1;
   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<OpenXRCompositionLayerProvider*>::resize<false>(long) */undefined8 CowData<OpenXRCompositionLayerProvider*>::resize<false>(CowData<OpenXRCompositionLayerProvider*> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   long lVar7;
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
      lVar7 = 0;
      lVar3 = 0;
   }
 else {
      lVar7 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar7) {
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
      lVar3 = lVar7 * 8;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 != 0) {
      uVar4 = param_1 * 8 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = uVar4 | uVar4 >> 0x20;
      if (uVar4 != 0xffffffffffffffff) {
         if (lVar7 < param_1) {
            if (uVar4 + 1 == lVar3) {
               puVar5 = *(undefined8**)this;
               if (puVar5 == (undefined8*)0x0) goto LAB_00123a19;
            }
 else {
               if (lVar7 == 0) {
                  puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) {
                     _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                     return 6;
                  }

                  *puVar5 = 1;
                  puVar5[1] = 0;
               }
 else {
                  puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) goto LAB_00123b00;
                  *puVar5 = 1;
               }

               puVar5 = puVar5 + 2;
               *(undefined8**)this = puVar5;
            }

            puVar5[-1] = param_1;
         }
 else {
            puVar5 = *(undefined8**)this;
            if (uVar4 + 1 == lVar3) {
               if (puVar5 == (undefined8*)0x0) {
                  LAB_00123a19:_DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

            }
 else {
               puVar6 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar4 + 0x11, false);
               if (puVar6 == (undefined8*)0x0) {
                  LAB_00123b00:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
                  return 6;
               }

               puVar5 = puVar6 + 2;
               *puVar6 = 1;
               *(undefined8**)this = puVar5;
            }

            puVar5[-1] = param_1;
         }

         return 0;
      }

   }

   _err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
   return 6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<OpenXRAPI::ActionTracker>::resize<false>(long) */undefined8 CowData<OpenXRAPI::ActionTracker>::resize<false>(CowData<OpenXRAPI::ActionTracker> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
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
      lVar3 = lVar9 * 0x18;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x18 == 0) {
      LAB_00123e18:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 0x18 - 1;
   uVar4 = uVar4 >> 1 | uVar4;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   if (uVar4 == 0xffffffffffffffff) goto LAB_00123e18;
   if (param_1 <= lVar9) {
      puVar7 = *(undefined8**)this;
      if (uVar4 + 1 == lVar3) {
         if (puVar7 == (undefined8*)0x0) {
            _DAT_00000000 = 0;
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

      }
 else {
         puVar5 = (undefined8*)Memory::realloc_static(puVar7 + -2, uVar4 + 0x11, false);
         if (puVar5 == (undefined8*)0x0) {
            LAB_00123e50:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
            return 6;
         }

         puVar7 = puVar5 + 2;
         *puVar5 = 1;
         *(undefined8**)this = puVar7;
      }

      puVar7[-1] = param_1;
      return 0;
   }

   if (uVar4 + 1 == lVar3) {
      puVar7 = *(undefined8**)this;
      if (puVar7 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar7[-1];
      LAB_00123d59:if (param_1 <= lVar3) goto LAB_00123cc8;
   }
 else {
      if (lVar9 != 0) {
         puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar4 + 0x11, false);
         if (puVar5 == (undefined8*)0x0) goto LAB_00123e50;
         puVar7 = puVar5 + 2;
         *puVar5 = 1;
         *(undefined8**)this = puVar7;
         lVar3 = puVar5[1];
         goto LAB_00123d59;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar7 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar7;
      lVar3 = 0;
   }

   puVar8 = puVar7 + param_1 * 3;
   puVar5 = puVar7 + lVar3 * 3;
   if (( (int)puVar8 - (int)puVar5 & 8U ) != 0) {
      *puVar5 = 0;
      puVar5 = puVar5 + 3;
      if (puVar5 == puVar8) goto LAB_00123cc8;
   }

   do {
      *puVar5 = 0;
      puVar6 = puVar5 + 6;
      puVar5[3] = 0;
      puVar5 = puVar6;
   }
 while ( puVar6 != puVar8 );
   LAB_00123cc8:puVar7[-1] = param_1;
   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<unsigned long>::resize<false>(long) */undefined8 CowData<unsigned_long>::resize<false>(CowData<unsigned_long> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   long lVar7;
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
      lVar7 = 0;
      lVar3 = 0;
   }
 else {
      lVar7 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar7) {
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
      lVar3 = lVar7 * 8;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 != 0) {
      uVar4 = param_1 * 8 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = uVar4 | uVar4 >> 0x20;
      if (uVar4 != 0xffffffffffffffff) {
         if (lVar7 < param_1) {
            if (uVar4 + 1 == lVar3) {
               puVar5 = *(undefined8**)this;
               if (puVar5 == (undefined8*)0x0) goto LAB_00124059;
            }
 else {
               if (lVar7 == 0) {
                  puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) {
                     _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                     return 6;
                  }

                  *puVar5 = 1;
                  puVar5[1] = 0;
               }
 else {
                  puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) goto LAB_00124140;
                  *puVar5 = 1;
               }

               puVar5 = puVar5 + 2;
               *(undefined8**)this = puVar5;
            }

            puVar5[-1] = param_1;
         }
 else {
            puVar5 = *(undefined8**)this;
            if (uVar4 + 1 == lVar3) {
               if (puVar5 == (undefined8*)0x0) {
                  LAB_00124059:_DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

            }
 else {
               puVar6 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar4 + 0x11, false);
               if (puVar6 == (undefined8*)0x0) {
                  LAB_00124140:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
                  return 6;
               }

               puVar5 = puVar6 + 2;
               *puVar6 = 1;
               *(undefined8**)this = puVar5;
            }

            puVar5[-1] = param_1;
         }

         return 0;
      }

   }

   _err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
   return 6;
}
/* RID_Alloc<OpenXRAPI::Action, true>::initialize_rid(RID, OpenXRAPI::Action const&) */void RID_Alloc<OpenXRAPI::Action,true>::initialize_rid(RID_Alloc<OpenXRAPI::Action,true> *this, ulong param_2, undefined8 *param_3) {
   long *plVar1;
   undefined8 *puVar2;
   undefined4 uVar3;
   long lVar4;
   long lVar5;
   undefined8 uVar6;
   uint uVar7;
   char *pcVar8;
   bool bVar9;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1c ) )) {
      puVar2 = (undefined8*)( *(long*)( *(long*)( this + 8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x18 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x18 ) ) * 0x38 );
      if ((int)*(uint*)( puVar2 + 6 ) < 0) {
         uVar7 = ( uint )(param_2 >> 0x20);
         if (uVar7 == ( *(uint*)( puVar2 + 6 ) & 0x7fffffff )) {
            uVar6 = *param_3;
            puVar2[1] = 0;
            lVar4 = param_3[1];
            *(uint*)( puVar2 + 6 ) = uVar7;
            *puVar2 = uVar6;
            if (lVar4 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar2 + 1 ), (CowData*)( param_3 + 1 ));
            }

            uVar3 = *(undefined4*)( param_3 + 2 );
            puVar2[4] = 0;
            *(undefined4*)( puVar2 + 2 ) = uVar3;
            plVar1 = (long*)( param_3[4] + -0x10 );
            if (param_3[4] != 0) {
               do {
                  lVar4 = *plVar1;
                  if (lVar4 == 0) goto LAB_0012424f;
                  LOCK();
                  lVar5 = *plVar1;
                  bVar9 = lVar4 == lVar5;
                  if (bVar9) {
                     *plVar1 = lVar4 + 1;
                     lVar5 = lVar4;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar5 != -1) {
                  puVar2[4] = param_3[4];
               }

            }

            LAB_0012424f:puVar2[5] = param_3[5];
            return;
         }

         pcVar8 = "Attempting to initialize the wrong RID";
         uVar6 = 0xfc;
      }
 else {
         pcVar8 = "Initializing already initialized RID";
         uVar6 = 0xf8;
      }

      _err_print_error("get_or_null", "./core/templates/rid_owner.h", uVar6, "Method/function failed. Returning: nullptr", pcVar8, 0, 0);
   }

   _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
   return;
}
/* RID_Alloc<OpenXRAPI::Action, true>::make_rid(OpenXRAPI::Action const&) */ulong RID_Alloc<OpenXRAPI::Action,true>::make_rid(RID_Alloc<OpenXRAPI::Action,true> *this, Action *param_1) {
   pthread_mutex_t *__mutex;
   long *plVar1;
   uint uVar2;
   long lVar3;
   char *pcVar4;
   code *pcVar5;
   int iVar6;
   uint uVar7;
   undefined8 uVar8;
   long lVar9;
   uint uVar10;
   uint uVar11;
   undefined4 *puVar12;
   ulong uVar13;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   __mutex = (pthread_mutex_t*)( this + 0x30 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar6 = pthread_mutex_lock(__mutex);
   if (iVar6 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar6);
   }

   uVar7 = *(uint*)( this + 0x20 );
   if (uVar7 == *(uint*)( this + 0x1c )) {
      if (uVar7 != 0) {
         uVar7 = uVar7 / *(uint*)( this + 0x18 );
      }

      if (*(uint*)( this + 0x24 ) == uVar7) {
         pthread_mutex_unlock(__mutex);
         pcVar4 = *(char**)( this + 0x28 );
         if (pcVar4 == (char*)0x0) {
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x85, "Method/function failed. Returning: RID()", "Element limit reached.", 0, 0);
         }
 else {
            local_60 = 0;
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange*)&local_60);
            local_50 = 0x2b;
            local_58 = "Element limit for RID of type \'%s\' reached.";
            local_68 = 0;
            String::parse_latin1((StrRange*)&local_68);
            vformat<String>(&local_58, &local_68, (StrRange*)&local_60);
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x83, "Method/function failed. Returning: RID()", &local_58, 0, 0);
            pcVar4 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_58 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar4 + -0x10, false);
               }

            }

            lVar3 = local_68;
            if (local_68 != 0) {
               LOCK();
               plVar1 = (long*)( local_68 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_68 = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

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

         }

         uVar13 = 0;
         goto LAB_00124452;
      }

      uVar13 = (ulong)uVar7;
      lVar3 = *(long*)( this + 8 );
      uVar8 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0x38, false);
      uVar7 = *(uint*)( this + 0x18 );
      lVar9 = *(long*)( this + 0x10 );
      *(undefined8*)( lVar3 + uVar13 * 8 ) = uVar8;
      uVar8 = Memory::alloc_static((ulong)uVar7 << 2, false);
      uVar7 = *(uint*)( this + 0x18 );
      *(undefined8*)( uVar13 * 8 + lVar9 ) = uVar8;
      if (uVar7 != 0) {
         lVar3 = *(long*)( *(long*)( this + 0x10 ) + uVar13 * 8 );
         lVar9 = 0;
         puVar12 = (undefined4*)( *(long*)( *(long*)( this + 8 ) + uVar13 * 8 ) + 0x30 );
         do {
            *puVar12 = 0xffffffff;
            puVar12 = puVar12 + 0xe;
            *(int*)( lVar3 + lVar9 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar9;
            uVar7 = *(uint*)( this + 0x18 );
            lVar9 = lVar9 + 1;
         }
 while ( (uint)lVar9 < uVar7 );
      }

      *(uint*)( this + 0x1c ) = uVar7 + *(int*)( this + 0x1c );
      uVar7 = *(uint*)( this + 0x20 );
   }

   uVar2 = *(uint*)( this + 0x18 );
   uVar7 = *(uint*)( *(long*)( *(long*)( this + 0x10 ) + ( (ulong)uVar7 / (ulong)uVar2 ) * 8 ) + ( (ulong)uVar7 % (ulong)uVar2 ) * 4 );
   LOCK();
   UNLOCK();
   uVar10 = (int)RID_AllocBase::base_id + 1;
   uVar11 = uVar10 & 0x7fffffff;
   if (uVar11 == 0x7fffffff) {
      RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
      _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0xa9, "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.", "Overflow in RID validator", 0, 0);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }

   uVar13 = CONCAT44(uVar10, uVar7) & 0x7fffffffffffffff;
   RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
   *(uint*)( *(long*)( *(long*)( this + 8 ) + ( (ulong)uVar7 / (ulong)uVar2 ) * 8 ) + ( (ulong)uVar7 % (ulong)uVar2 ) * 0x38 + 0x30 ) = uVar11 | 0x80000000;
   *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
   pthread_mutex_unlock(__mutex);
   LAB_00124452:initialize_rid(this, uVar13, param_1);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar13;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<OpenXRAPI::InteractionProfile, true>::initialize_rid(RID, OpenXRAPI::InteractionProfile
   const&) */void RID_Alloc<OpenXRAPI::InteractionProfile,true>::initialize_rid(RID_Alloc<OpenXRAPI::InteractionProfile,true> *this, ulong param_2, CowData *param_3) {
   long *plVar1;
   CowData<char32_t> *this_00;
   long lVar2;
   uint uVar3;
   long lVar4;
   undefined8 uVar5;
   char *pcVar6;
   bool bVar7;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1c ) )) {
      this_00 = (CowData<char32_t>*)( *(long*)( *(long*)( this + 8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x18 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x18 ) ) * 0x38 );
      if ((int)*(uint*)( this_00 + 0x30 ) < 0) {
         uVar3 = *(uint*)( this_00 + 0x30 ) & 0x7fffffff;
         if (uVar3 == ( uint )(param_2 >> 0x20)) {
            *(undefined8*)this_00 = 0;
            lVar2 = *(long*)param_3;
            *(uint*)( this_00 + 0x30 ) = uVar3;
            if (lVar2 != 0) {
               CowData<char32_t>::_ref(this_00, param_3);
            }

            uVar5 = *(undefined8*)( param_3 + 8 );
            *(undefined8*)( this_00 + 0x18 ) = 0;
            *(undefined8*)( this_00 + 8 ) = uVar5;
            plVar1 = (long*)( *(long*)( param_3 + 0x18 ) + -0x10 );
            if (*(long*)( param_3 + 0x18 ) != 0) {
               do {
                  lVar2 = *plVar1;
                  if (lVar2 == 0) goto LAB_00124727;
                  LOCK();
                  lVar4 = *plVar1;
                  bVar7 = lVar2 == lVar4;
                  if (bVar7) {
                     *plVar1 = lVar2 + 1;
                     lVar4 = lVar2;
                  }

                  UNLOCK();
               }
 while ( !bVar7 );
               if (lVar4 != -1) {
                  *(undefined8*)( this_00 + 0x18 ) = *(undefined8*)( param_3 + 0x18 );
               }

            }

            LAB_00124727:*(undefined8*)( this_00 + 0x28 ) = 0;
            if (*(long*)( param_3 + 0x28 ) != 0) {
               CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>>*)( this_00 + 0x28 ));
               if (*(long*)( param_3 + 0x28 ) != 0) {
                  plVar1 = (long*)( *(long*)( param_3 + 0x28 ) + -0x10 );
                  do {
                     lVar2 = *plVar1;
                     if (lVar2 == 0) {
                        return;
                     }

                     LOCK();
                     lVar4 = *plVar1;
                     bVar7 = lVar2 == lVar4;
                     if (bVar7) {
                        *plVar1 = lVar2 + 1;
                        lVar4 = lVar2;
                     }

                     UNLOCK();
                  }
 while ( !bVar7 );
                  if (lVar4 != -1) {
                     *(undefined8*)( this_00 + 0x28 ) = *(undefined8*)( param_3 + 0x28 );
                  }

               }

            }

            return;
         }

         pcVar6 = "Attempting to initialize the wrong RID";
         uVar5 = 0xfc;
      }
 else {
         pcVar6 = "Initializing already initialized RID";
         uVar5 = 0xf8;
      }

      _err_print_error("get_or_null", "./core/templates/rid_owner.h", uVar5, "Method/function failed. Returning: nullptr", pcVar6, 0, 0);
   }

   _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
   return;
}
/* RID_Alloc<OpenXRAPI::InteractionProfile, true>::make_rid(OpenXRAPI::InteractionProfile const&) */ulong RID_Alloc<OpenXRAPI::InteractionProfile,true>::make_rid(RID_Alloc<OpenXRAPI::InteractionProfile,true> *this, InteractionProfile *param_1) {
   pthread_mutex_t *__mutex;
   long *plVar1;
   uint uVar2;
   long lVar3;
   char *pcVar4;
   code *pcVar5;
   int iVar6;
   uint uVar7;
   undefined8 uVar8;
   long lVar9;
   uint uVar10;
   uint uVar11;
   undefined4 *puVar12;
   ulong uVar13;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   __mutex = (pthread_mutex_t*)( this + 0x30 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar6 = pthread_mutex_lock(__mutex);
   if (iVar6 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar6);
   }

   uVar7 = *(uint*)( this + 0x20 );
   if (uVar7 == *(uint*)( this + 0x1c )) {
      if (uVar7 != 0) {
         uVar7 = uVar7 / *(uint*)( this + 0x18 );
      }

      if (*(uint*)( this + 0x24 ) == uVar7) {
         pthread_mutex_unlock(__mutex);
         pcVar4 = *(char**)( this + 0x28 );
         if (pcVar4 == (char*)0x0) {
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x85, "Method/function failed. Returning: RID()", "Element limit reached.", 0, 0);
         }
 else {
            local_60 = 0;
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange*)&local_60);
            local_50 = 0x2b;
            local_58 = "Element limit for RID of type \'%s\' reached.";
            local_68 = 0;
            String::parse_latin1((StrRange*)&local_68);
            vformat<String>(&local_58, &local_68, (StrRange*)&local_60);
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x83, "Method/function failed. Returning: RID()", &local_58, 0, 0);
            pcVar4 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_58 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar4 + -0x10, false);
               }

            }

            lVar3 = local_68;
            if (local_68 != 0) {
               LOCK();
               plVar1 = (long*)( local_68 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_68 = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

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

         }

         uVar13 = 0;
         goto LAB_00124972;
      }

      uVar13 = (ulong)uVar7;
      lVar3 = *(long*)( this + 8 );
      uVar8 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0x38, false);
      uVar7 = *(uint*)( this + 0x18 );
      lVar9 = *(long*)( this + 0x10 );
      *(undefined8*)( lVar3 + uVar13 * 8 ) = uVar8;
      uVar8 = Memory::alloc_static((ulong)uVar7 << 2, false);
      uVar7 = *(uint*)( this + 0x18 );
      *(undefined8*)( uVar13 * 8 + lVar9 ) = uVar8;
      if (uVar7 != 0) {
         lVar3 = *(long*)( *(long*)( this + 0x10 ) + uVar13 * 8 );
         lVar9 = 0;
         puVar12 = (undefined4*)( *(long*)( *(long*)( this + 8 ) + uVar13 * 8 ) + 0x30 );
         do {
            *puVar12 = 0xffffffff;
            puVar12 = puVar12 + 0xe;
            *(int*)( lVar3 + lVar9 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar9;
            uVar7 = *(uint*)( this + 0x18 );
            lVar9 = lVar9 + 1;
         }
 while ( (uint)lVar9 < uVar7 );
      }

      *(uint*)( this + 0x1c ) = uVar7 + *(int*)( this + 0x1c );
      uVar7 = *(uint*)( this + 0x20 );
   }

   uVar2 = *(uint*)( this + 0x18 );
   uVar7 = *(uint*)( *(long*)( *(long*)( this + 0x10 ) + ( (ulong)uVar7 / (ulong)uVar2 ) * 8 ) + ( (ulong)uVar7 % (ulong)uVar2 ) * 4 );
   LOCK();
   UNLOCK();
   uVar10 = (int)RID_AllocBase::base_id + 1;
   uVar11 = uVar10 & 0x7fffffff;
   if (uVar11 == 0x7fffffff) {
      RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
      _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0xa9, "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.", "Overflow in RID validator", 0, 0);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }

   uVar13 = CONCAT44(uVar10, uVar7) & 0x7fffffffffffffff;
   RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
   *(uint*)( *(long*)( *(long*)( this + 8 ) + ( (ulong)uVar7 / (ulong)uVar2 ) * 8 ) + ( (ulong)uVar7 % (ulong)uVar2 ) * 0x38 + 0x30 ) = uVar11 | 0x80000000;
   *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
   pthread_mutex_unlock(__mutex);
   LAB_00124972:initialize_rid(this, uVar13, param_1);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar13;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<XrActionSuggestedBinding>::resize<false>(long) */undefined8 CowData<XrActionSuggestedBinding>::resize<false>(CowData<XrActionSuggestedBinding> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   long lVar7;
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
      lVar7 = 0;
      lVar3 = 0;
   }
 else {
      lVar7 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar7) {
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
      lVar3 = lVar7 * 0x10;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x10 != 0) {
      uVar4 = param_1 * 0x10 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = uVar4 | uVar4 >> 0x20;
      if (uVar4 != 0xffffffffffffffff) {
         if (lVar7 < param_1) {
            if (uVar4 + 1 == lVar3) {
               puVar5 = *(undefined8**)this;
               if (puVar5 == (undefined8*)0x0) goto LAB_00124d29;
            }
 else {
               if (lVar7 == 0) {
                  puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) {
                     _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                     return 6;
                  }

                  *puVar5 = 1;
                  puVar5[1] = 0;
               }
 else {
                  puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) goto LAB_00124e10;
                  *puVar5 = 1;
               }

               puVar5 = puVar5 + 2;
               *(undefined8**)this = puVar5;
            }

            puVar5[-1] = param_1;
         }
 else {
            puVar5 = *(undefined8**)this;
            if (uVar4 + 1 == lVar3) {
               if (puVar5 == (undefined8*)0x0) {
                  LAB_00124d29:_DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

            }
 else {
               puVar6 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar4 + 0x11, false);
               if (puVar6 == (undefined8*)0x0) {
                  LAB_00124e10:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
                  return 6;
               }

               puVar5 = puVar6 + 2;
               *puVar6 = 1;
               *(undefined8**)this = puVar5;
            }

            puVar5[-1] = param_1;
         }

         return 0;
      }

   }

   _err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
   return 6;
}
/* Error CowData<Vector<unsigned char> >::resize<false>(long) */undefined8 CowData<Vector<unsigned_char>>::resize<false>(CowData<Vector<unsigned_char>> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   long lVar7;
   ulong uVar8;
   ulong uVar9;
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
      lVar10 = 0;
      lVar7 = 0;
   }
 else {
      lVar10 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar10) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar7 = lVar10 * 0x10;
      if (lVar7 != 0) {
         uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
         uVar8 = uVar8 | uVar8 >> 2;
         uVar8 = uVar8 | uVar8 >> 4;
         uVar8 = uVar8 | uVar8 >> 8;
         uVar8 = uVar8 | uVar8 >> 0x10;
         lVar7 = ( uVar8 | uVar8 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x10 == 0) {
      LAB_00125168:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar8 = param_1 * 0x10 - 1;
   uVar8 = uVar8 >> 1 | uVar8;
   uVar8 = uVar8 | uVar8 >> 2;
   uVar8 = uVar8 | uVar8 >> 4;
   uVar8 = uVar8 | uVar8 >> 8;
   uVar8 = uVar8 | uVar8 >> 0x10;
   uVar8 = uVar8 | uVar8 >> 0x20;
   if (uVar8 == 0xffffffffffffffff) goto LAB_00125168;
   if (param_1 <= lVar10) {
      puVar6 = *(undefined8**)this;
      uVar9 = param_1;
      while (puVar6 != (undefined8*)0x0) {
         if ((ulong)puVar6[-1] <= uVar9) {
            LAB_00124fb2:if (uVar8 + 1 != lVar7) {
               puVar4 = (undefined8*)Memory::realloc_static(puVar6 + -2, uVar8 + 0x11, false);
               if (puVar4 == (undefined8*)0x0) goto LAB_00125197;
               puVar6 = puVar4 + 2;
               *puVar4 = 1;
               *(undefined8**)this = puVar6;
            }

            puVar6[-1] = param_1;
            return 0;
         }

         while (puVar6[uVar9 * 2 + 1] == 0) {
            uVar9 = uVar9 + 1;
            if ((ulong)puVar6[-1] <= uVar9) goto LAB_00124fb2;
         }
;
         LOCK();
         plVar1 = (long*)( puVar6[uVar9 * 2 + 1] + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar10 = puVar6[uVar9 * 2 + 1];
            puVar6[uVar9 * 2 + 1] = 0;
            Memory::free_static((void*)( lVar10 + -0x10 ), false);
         }

         uVar9 = uVar9 + 1;
         puVar6 = *(undefined8**)this;
      }
;
      LAB_001251e5:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   if (uVar8 + 1 == lVar7) {
      puVar6 = *(undefined8**)this;
      if (puVar6 == (undefined8*)0x0) goto LAB_001251e5;
      lVar10 = puVar6[-1];
      LAB_001250c0:if (param_1 <= lVar10) goto LAB_00125071;
   }
 else {
      if (lVar10 != 0) {
         puVar4 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar8 + 0x11, false);
         if (puVar4 == (undefined8*)0x0) {
            LAB_00125197:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
            return 6;
         }

         puVar6 = puVar4 + 2;
         *puVar4 = 1;
         *(undefined8**)this = puVar6;
         lVar10 = puVar4[1];
         goto LAB_001250c0;
      }

      puVar4 = (undefined8*)Memory::alloc_static(uVar8 + 0x11, false);
      if (puVar4 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar6 = puVar4 + 2;
      *puVar4 = 1;
      puVar4[1] = 0;
      *(undefined8**)this = puVar6;
      lVar10 = 0;
   }

   puVar5 = puVar6 + param_1 * 2;
   puVar4 = puVar6 + lVar10 * 2;
   if (( (int)puVar5 - (int)puVar4 & 0x10U ) != 0) {
      puVar4[1] = 0;
      puVar4 = puVar4 + 2;
      if (puVar4 == puVar5) goto LAB_00125071;
   }

   do {
      puVar4[1] = 0;
      puVar3 = puVar4 + 4;
      puVar4[3] = 0;
      puVar4 = puVar3;
   }
 while ( puVar3 != puVar5 );
   LAB_00125071:puVar6[-1] = param_1;
   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<XrBindingModificationBaseHeaderKHR const*>::resize<false>(long) */undefined8 CowData<XrBindingModificationBaseHeaderKHR_const*>::resize<false>(CowData<XrBindingModificationBaseHeaderKHR_const*> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   long lVar7;
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
      lVar7 = 0;
      lVar3 = 0;
   }
 else {
      lVar7 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar7) {
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
      lVar3 = lVar7 * 8;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 != 0) {
      uVar4 = param_1 * 8 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = uVar4 | uVar4 >> 0x20;
      if (uVar4 != 0xffffffffffffffff) {
         if (lVar7 < param_1) {
            if (uVar4 + 1 == lVar3) {
               puVar5 = *(undefined8**)this;
               if (puVar5 == (undefined8*)0x0) goto LAB_00125389;
            }
 else {
               if (lVar7 == 0) {
                  puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) {
                     _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                     return 6;
                  }

                  *puVar5 = 1;
                  puVar5[1] = 0;
               }
 else {
                  puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) goto LAB_00125470;
                  *puVar5 = 1;
               }

               puVar5 = puVar5 + 2;
               *(undefined8**)this = puVar5;
            }

            puVar5[-1] = param_1;
         }
 else {
            puVar5 = *(undefined8**)this;
            if (uVar4 + 1 == lVar3) {
               if (puVar5 == (undefined8*)0x0) {
                  LAB_00125389:_DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

            }
 else {
               puVar6 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar4 + 0x11, false);
               if (puVar6 == (undefined8*)0x0) {
                  LAB_00125470:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
                  return 6;
               }

               puVar5 = puVar6 + 2;
               *puVar6 = 1;
               *(undefined8**)this = puVar5;
            }

            puVar5[-1] = param_1;
         }

         return 0;
      }

   }

   _err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
   return 6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<XrActiveActionSet>::resize<false>(long) */undefined8 CowData<XrActiveActionSet>::resize<false>(CowData<XrActiveActionSet> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   long lVar7;
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
      lVar7 = 0;
      lVar3 = 0;
   }
 else {
      lVar7 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar7) {
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
      lVar3 = lVar7 * 0x10;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x10 != 0) {
      uVar4 = param_1 * 0x10 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = uVar4 | uVar4 >> 0x20;
      if (uVar4 != 0xffffffffffffffff) {
         if (lVar7 < param_1) {
            if (uVar4 + 1 == lVar3) {
               puVar5 = *(undefined8**)this;
               if (puVar5 == (undefined8*)0x0) goto LAB_00125659;
            }
 else {
               if (lVar7 == 0) {
                  puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) {
                     _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                     return 6;
                  }

                  *puVar5 = 1;
                  puVar5[1] = 0;
               }
 else {
                  puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) goto LAB_00125740;
                  *puVar5 = 1;
               }

               puVar5 = puVar5 + 2;
               *(undefined8**)this = puVar5;
            }

            puVar5[-1] = param_1;
         }
 else {
            puVar5 = *(undefined8**)this;
            if (uVar4 + 1 == lVar3) {
               if (puVar5 == (undefined8*)0x0) {
                  LAB_00125659:_DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

            }
 else {
               puVar6 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar4 + 0x11, false);
               if (puVar6 == (undefined8*)0x0) {
                  LAB_00125740:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
                  return 6;
               }

               puVar5 = puVar6 + 2;
               *puVar6 = 1;
               *(undefined8**)this = puVar5;
            }

            puVar5[-1] = param_1;
         }

         return 0;
      }

   }

   _err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
   return 6;
}
/* String stringify_variants<String>(Variant const&, String) */String *stringify_variants<String>(String *param_1, undefined8 param_2, String *param_3) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   long in_FS_OFFSET;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_58, param_3);
   stringify_variants((Variant*)&local_70);
   local_68 = &_LC250;
   local_78 = 0;
   local_60 = 1;
   String::parse_latin1((StrRange*)&local_78);
   Variant::operator_cast_to_String((Variant*)&local_80);
   String::operator +((String*)&local_68, (String*)&local_80);
   String::operator +(param_1, (String*)&local_68);
   puVar3 = local_68;
   if (local_68 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (undefined*)0x0;
         Memory::free_static(puVar3 + -0x10, false);
      }

   }

   lVar2 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

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

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String stringify_variants<char const*, String>(Variant const&, char const*, String) */String *stringify_variants<char_const*,String>(String *param_1, undefined8 param_2, char *param_3, long *param_4) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   long lVar4;
   long in_FS_OFFSET;
   bool bVar5;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = 0;
   if (*param_4 != 0) {
      plVar1 = (long*)( *param_4 + -0x10 );
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_001259d1;
         LOCK();
         lVar4 = *plVar1;
         bVar5 = lVar2 == lVar4;
         if (bVar5) {
            *plVar1 = lVar2 + 1;
            lVar4 = lVar2;
         }

         UNLOCK();
      }
 while ( !bVar5 );
      if (lVar4 != -1) {
         local_78 = *param_4;
      }

   }

   LAB_001259d1:Variant::Variant((Variant*)local_58, param_3);
   stringify_variants<String>(&local_70, (Variant*)local_58, &local_78);
   local_68 = &_LC250;
   local_80 = 0;
   local_60 = 1;
   String::parse_latin1((StrRange*)&local_80);
   Variant::operator_cast_to_String((Variant*)&local_88);
   String::operator +((String*)&local_68, (String*)&local_88);
   String::operator +(param_1, (String*)&local_68);
   puVar3 = local_68;
   if (local_68 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (undefined*)0x0;
         Memory::free_static(puVar3 + -0x10, false);
      }

   }

   lVar2 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

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

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   lVar2 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* String stringify_variants<String, char const*, String>(Variant const&, String, char const*,
   String) */String *stringify_variants<String,char_const*,String>(String *param_1, undefined8 param_2, String *param_3, undefined8 param_4, long *param_5) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   long lVar4;
   long in_FS_OFFSET;
   bool bVar5;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = 0;
   if (*param_5 != 0) {
      plVar1 = (long*)( *param_5 + -0x10 );
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_00125c24;
         LOCK();
         lVar4 = *plVar1;
         bVar5 = lVar2 == lVar4;
         if (bVar5) {
            *plVar1 = lVar2 + 1;
            lVar4 = lVar2;
         }

         UNLOCK();
      }
 while ( !bVar5 );
      if (lVar4 != -1) {
         local_78 = *param_5;
      }

   }

   LAB_00125c24:Variant::Variant((Variant*)local_58, param_3);
   stringify_variants<char_const*,String>(&local_70, (Variant*)local_58, param_4, &local_78);
   local_68 = &_LC250;
   local_80 = 0;
   local_60 = 1;
   String::parse_latin1((StrRange*)&local_80);
   Variant::operator_cast_to_String((Variant*)&local_88);
   String::operator +((String*)&local_68, (String*)&local_88);
   String::operator +(param_1, (String*)&local_68);
   puVar3 = local_68;
   if (local_68 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (undefined*)0x0;
         Memory::free_static(puVar3 + -0x10, false);
      }

   }

   lVar2 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

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

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_78 + -0x10 ), false);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* OpenXRAPI::OpenXRSwapChainInfo::free_queue */void OpenXRAPI::OpenXRSwapChainInfo::_GLOBAL__sub_I_free_queue(void) {
   free_queue._8_8_ = 0;
   __cxa_atexit(Vector<OpenXRAPI::OpenXRSwapChainInfo>::~Vector, free_queue, &__dso_handle);
   registered_extension_wrappers._8_8_ = 0;
   __cxa_atexit(Vector<OpenXRExtensionWrapper*>::~Vector, registered_extension_wrappers, &__dso_handle);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomStaticMethodPointer<void, unsigned int, bool>::~CallableCustomStaticMethodPointer()
    */void CallableCustomStaticMethodPointer<void,unsigned_int,bool>::~CallableCustomStaticMethodPointer(CallableCustomStaticMethodPointer<void,unsigned_int,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomStaticMethodPointer<void, bool>::~CallableCustomStaticMethodPointer() */void CallableCustomStaticMethodPointer<void,bool>::~CallableCustomStaticMethodPointer(CallableCustomStaticMethodPointer<void,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomStaticMethodPointer<void, long, bool>::~CallableCustomStaticMethodPointer() */void CallableCustomStaticMethodPointer<void,long,bool>::~CallableCustomStaticMethodPointer(CallableCustomStaticMethodPointer<void,long,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomStaticMethodPointer<void, unsigned long>::~CallableCustomStaticMethodPointer() */void CallableCustomStaticMethodPointer<void,unsigned_long>::~CallableCustomStaticMethodPointer(CallableCustomStaticMethodPointer<void,unsigned_long> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomStaticMethodPointer<void, double>::~CallableCustomStaticMethodPointer() */void CallableCustomStaticMethodPointer<void,double>::~CallableCustomStaticMethodPointer(CallableCustomStaticMethodPointer<void,double> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomStaticMethodPointer<void, Rect2i const&>::~CallableCustomStaticMethodPointer() */void CallableCustomStaticMethodPointer<void,Rect2i_const&>::~CallableCustomStaticMethodPointer(CallableCustomStaticMethodPointer<void,Rect2i_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* Vector<OpenXRExtensionWrapper*>::~Vector() */void Vector<OpenXRExtensionWrapper*>::~Vector(Vector<OpenXRExtensionWrapper*> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<OpenXRAPI::InteractionProfile, true>::~RID_Alloc() */void RID_Alloc<OpenXRAPI::InteractionProfile,true>::~RID_Alloc(RID_Alloc<OpenXRAPI::InteractionProfile,true> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<OpenXRAPI::Action, true>::~RID_Alloc() */void RID_Alloc<OpenXRAPI::Action,true>::~RID_Alloc(RID_Alloc<OpenXRAPI::Action,true> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<OpenXRAPI::ActionSet, true>::~RID_Alloc() */void RID_Alloc<OpenXRAPI::ActionSet,true>::~RID_Alloc(RID_Alloc<OpenXRAPI::ActionSet,true> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<OpenXRAPI::Tracker, true>::~RID_Alloc() */void RID_Alloc<OpenXRAPI::Tracker,true>::~RID_Alloc(RID_Alloc<OpenXRAPI::Tracker,true> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* Vector<OpenXRAPI::OpenXRSwapChainInfo>::~Vector() */void Vector<OpenXRAPI::OpenXRSwapChainInfo>::~Vector(Vector<OpenXRAPI::OpenXRSwapChainInfo> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

