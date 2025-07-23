/* OpenXRExtensionWrapperExtension::register_extension_wrapper() */void OpenXRExtensionWrapperExtension::register_extension_wrapper(OpenXRExtensionWrapperExtension *this) {
   OpenXRAPI::register_extension_wrapper((OpenXRExtensionWrapper*)( this + 0x178 ));
   return;
}
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
/* OpenXRExtensionWrapperExtension::get_openxr_api() */void OpenXRExtensionWrapperExtension::get_openxr_api(void) {
   char cVar1;
   long in_RSI;
   long *in_RDI;
   *in_RDI = 0;
   if (*(long*)( in_RSI + 0x1b0 ) != 0) {
      *in_RDI = *(long*)( in_RSI + 0x1b0 );
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *in_RDI = 0;
      }

   }

   return;
}
/* OpenXRExtensionWrapperExtension::~OpenXRExtensionWrapperExtension() */void OpenXRExtensionWrapperExtension::~OpenXRExtensionWrapperExtension(OpenXRExtensionWrapperExtension *this) {
   Object *pOVar1;
   char cVar2;
   bool bVar3;
   *(undefined***)this = &PTR__initialize_classv_00116ff0;
   bVar3 = StringName::configured != '\0';
   *(undefined***)( this + 0x178 ) = &PTR_get_requested_extensions_00117270;
   *(undefined***)( this + 0x180 ) = &PTR_get_composition_layer_count_00117398;
   if (bVar3) {
      if (*(long*)( this + 0x500 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x4e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x4d0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x4b8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x4a0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x488 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x470 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x458 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x440 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x428 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x410 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x3f8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x3e0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x3c8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x3b0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x398 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x380 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x368 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x350 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x338 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 800 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x308 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x2f0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x2d8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x2c0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x2a8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x290 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x278 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x260 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x248 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x230 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x218 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x200 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x1e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x1d0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100688;
      }

      if (*(long*)( this + 0x1b8 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00100688:if (*(long*)( this + 0x1b0 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x1b0 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            Object::~Object((Object*)this);
            return;
         }

      }

   }

   Object::~Object((Object*)this);
   return;
}
/* non-virtual thunk to OpenXRExtensionWrapperExtension::~OpenXRExtensionWrapperExtension() */void OpenXRExtensionWrapperExtension::~OpenXRExtensionWrapperExtension(OpenXRExtensionWrapperExtension *this) {
   ~OpenXRExtensionWrapperExtension(this + -0x178)
   ;;
   return;
}
/* non-virtual thunk to OpenXRExtensionWrapperExtension::~OpenXRExtensionWrapperExtension() */void OpenXRExtensionWrapperExtension::~OpenXRExtensionWrapperExtension(OpenXRExtensionWrapperExtension *this) {
   ~OpenXRExtensionWrapperExtension(this + -0x180)
   ;;
   return;
}
/* OpenXRExtensionWrapperExtension::~OpenXRExtensionWrapperExtension() */void OpenXRExtensionWrapperExtension::~OpenXRExtensionWrapperExtension(OpenXRExtensionWrapperExtension *this) {
   ~OpenXRExtensionWrapperExtension(this)
   ;;
   operator_delete(this, 0x518);
   return;
}
/* non-virtual thunk to OpenXRExtensionWrapperExtension::~OpenXRExtensionWrapperExtension() */void OpenXRExtensionWrapperExtension::~OpenXRExtensionWrapperExtension(OpenXRExtensionWrapperExtension *this) {
   ~OpenXRExtensionWrapperExtension(this + -0x178)
   ;;
   operator_delete(this + -0x178, 0x518);
   return;
}
/* non-virtual thunk to OpenXRExtensionWrapperExtension::~OpenXRExtensionWrapperExtension() */void OpenXRExtensionWrapperExtension::~OpenXRExtensionWrapperExtension(OpenXRExtensionWrapperExtension *this) {
   ~OpenXRExtensionWrapperExtension(this + -0x180)
   ;;
   operator_delete(this + -0x180, 0x518);
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
/* PropertyInfo::TEMPNAMEPLACEHOLDERVALUE(PropertyInfo&&) [clone .isra.0] */void PropertyInfo::operator =(PropertyInfo *this, PropertyInfo *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   lVar3 = *(long*)( param_1 + 8 );
   *(undefined4*)this = *(undefined4*)param_1;
   lVar2 = *(long*)( this + 8 );
   if (lVar2 != lVar3) {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( this + 8 );
            *(undefined8*)( this + 8 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            lVar3 = *(long*)( param_1 + 8 );
         }
 else {
            *(undefined8*)( this + 8 ) = 0;
            lVar3 = *(long*)( param_1 + 8 );
         }

      }

      *(long*)( this + 8 ) = lVar3;
      *(undefined8*)( param_1 + 8 ) = 0;
   }

   if (*(long*)( this + 0x10 ) != *(long*)( param_1 + 0x10 )) {
      StringName::unref();
      *(undefined8*)( this + 0x10 ) = *(undefined8*)( param_1 + 0x10 );
      *(undefined8*)( param_1 + 0x10 ) = 0;
   }

   lVar3 = *(long*)( param_1 + 0x20 );
   *(undefined4*)( this + 0x18 ) = *(undefined4*)( param_1 + 0x18 );
   lVar2 = *(long*)( this + 0x20 );
   if (lVar2 != lVar3) {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( this + 0x20 );
            *(undefined8*)( this + 0x20 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            lVar3 = *(long*)( param_1 + 0x20 );
         }
 else {
            *(undefined8*)( this + 0x20 ) = 0;
            lVar3 = *(long*)( param_1 + 0x20 );
         }

      }

      *(long*)( this + 0x20 ) = lVar3;
      *(undefined8*)( param_1 + 0x20 ) = 0;
   }

   *(undefined4*)( this + 0x28 ) = *(undefined4*)( param_1 + 0x28 );
   return;
}
/* OpenXRExtensionWrapperExtension::OpenXRExtensionWrapperExtension() */void OpenXRExtensionWrapperExtension::OpenXRExtensionWrapperExtension(OpenXRExtensionWrapperExtension *this) {
   char cVar1;
   OpenXRAPIExtension *this_00;
   Object *pOVar2;
   Object *pOVar3;
   Object::Object((Object*)this);
   *(undefined8*)( this + 0x1a8 ) = 0;
   *(undefined***)this = &PTR__initialize_classv_00116ff0;
   *(undefined8*)( this + 0x1b0 ) = 0;
   *(undefined***)( this + 0x178 ) = &PTR_get_requested_extensions_00117270;
   *(undefined***)( this + 0x180 ) = &PTR_get_composition_layer_count_00117398;
   *(undefined1(*) [16])( this + 0x198 ) = (undefined1[16])0x0;
   *(undefined4*)( this + 0x198 ) = 1;
   *(undefined1(*) [16])( this + 0x188 ) = (undefined1[16])0x0;
   StringName::StringName((StringName*)( this + 0x1b8 ), "_get_requested_extensions", false);
   this[0x1c0] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x1c8 ) = 0;
   StringName::StringName((StringName*)( this + 0x1d0 ), "_set_system_properties_and_get_next_pointer", false);
   this[0x1d8] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x1e0 ) = 0;
   StringName::StringName((StringName*)( this + 0x1e8 ), "_set_instance_create_info_and_get_next_pointer", false);
   this[0x1f0] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x1f8 ) = 0;
   StringName::StringName((StringName*)( this + 0x200 ), "_set_session_create_and_get_next_pointer", false);
   this[0x208] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x210 ) = 0;
   StringName::StringName((StringName*)( this + 0x218 ), "_set_swapchain_create_info_and_get_next_pointer", false);
   this[0x220] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x228 ) = 0;
   StringName::StringName((StringName*)( this + 0x230 ), "_set_hand_joint_locations_and_get_next_pointer", false);
   this[0x238] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x240 ) = 0;
   StringName::StringName((StringName*)( this + 0x248 ), "_set_projection_views_and_get_next_pointer", false);
   this[0x250] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 600 ) = 0;
   StringName::StringName((StringName*)( this + 0x260 ), "_get_composition_layer_count", false);
   this[0x268] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x270 ) = 0;
   StringName::StringName((StringName*)( this + 0x278 ), "_get_composition_layer", false);
   this[0x280] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x288 ) = 0;
   StringName::StringName((StringName*)( this + 0x290 ), "_get_composition_layer_order", false);
   this[0x298] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x2a0 ) = 0;
   StringName::StringName((StringName*)( this + 0x2a8 ), "_get_suggested_tracker_names", false);
   this[0x2b0] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x2b8 ) = 0;
   StringName::StringName((StringName*)( this + 0x2c0 ), "_on_register_metadata", false);
   this[0x2c8] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x2d0 ) = 0;
   StringName::StringName((StringName*)( this + 0x2d8 ), "_on_before_instance_created", false);
   this[0x2e0] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x2e8 ) = 0;
   StringName::StringName((StringName*)( this + 0x2f0 ), "_on_instance_created", false);
   this[0x2f8] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x300 ) = 0;
   StringName::StringName((StringName*)( this + 0x308 ), "_on_instance_destroyed", false);
   this[0x310] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x318 ) = 0;
   StringName::StringName((StringName*)( this + 800 ), "_on_session_created", false);
   this[0x328] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x330 ) = 0;
   StringName::StringName((StringName*)( this + 0x338 ), "_on_process", false);
   this[0x340] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x348 ) = 0;
   StringName::StringName((StringName*)( this + 0x350 ), "_on_pre_render", false);
   this[0x358] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x360 ) = 0;
   StringName::StringName((StringName*)( this + 0x368 ), "_on_main_swapchains_created", false);
   this[0x370] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x378 ) = 0;
   StringName::StringName((StringName*)( this + 0x380 ), "_on_session_destroyed", false);
   this[0x388] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x390 ) = 0;
   StringName::StringName((StringName*)( this + 0x398 ), "_on_pre_draw_viewport", false);
   this[0x3a0] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x3a8 ) = 0;
   StringName::StringName((StringName*)( this + 0x3b0 ), "_on_post_draw_viewport", false);
   this[0x3b8] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x3c0 ) = 0;
   StringName::StringName((StringName*)( this + 0x3c8 ), "_on_state_idle", false);
   this[0x3d0] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x3d8 ) = 0;
   StringName::StringName((StringName*)( this + 0x3e0 ), "_on_state_ready", false);
   this[1000] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x3f0 ) = 0;
   StringName::StringName((StringName*)( this + 0x3f8 ), "_on_state_synchronized", false);
   this[0x400] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x408 ) = 0;
   StringName::StringName((StringName*)( this + 0x410 ), "_on_state_visible", false);
   this[0x418] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x420 ) = 0;
   StringName::StringName((StringName*)( this + 0x428 ), "_on_state_focused", false);
   this[0x430] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x438 ) = 0;
   StringName::StringName((StringName*)( this + 0x440 ), "_on_state_stopping", false);
   this[0x448] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x450 ) = 0;
   StringName::StringName((StringName*)( this + 0x458 ), "_on_state_loss_pending", false);
   this[0x460] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x468 ) = 0;
   StringName::StringName((StringName*)( this + 0x470 ), "_on_state_exiting", false);
   this[0x478] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x480 ) = 0;
   StringName::StringName((StringName*)( this + 0x488 ), "_on_event_polled", false);
   this[0x490] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x498 ) = 0;
   StringName::StringName((StringName*)( this + 0x4a0 ), "_set_viewport_composition_layer_and_get_next_pointer", false);
   this[0x4a8] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x4b0 ) = 0;
   StringName::StringName((StringName*)( this + 0x4b8 ), "_on_viewport_composition_layer_destroyed", false);
   this[0x4c0] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x4c8 ) = 0;
   StringName::StringName((StringName*)( this + 0x4d0 ), "_get_viewport_composition_layer_extension_properties", false);
   this[0x4d8] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x4e0 ) = 0;
   StringName::StringName((StringName*)( this + 0x4e8 ), "_get_viewport_composition_layer_extension_property_defaults", false);
   this[0x4f0] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x4f8 ) = 0;
   StringName::StringName((StringName*)( this + 0x500 ), "_set_android_surface_swapchain_create_info_and_get_next_pointer", false);
   this[0x508] = (OpenXRExtensionWrapperExtension)0x0;
   *(undefined8*)( this + 0x510 ) = 0;
   this_00 = (OpenXRAPIExtension*)operator_new(0x1a8, "");
   OpenXRAPIExtension::OpenXRAPIExtension(this_00);
   postinitialize_handler((Object*)this_00);
   cVar1 = RefCounted::init_ref();
   if (cVar1 == '\0') {
      pOVar3 = *(Object**)( this + 0x1b0 );
      if (pOVar3 == (Object*)0x0) {
         return;
      }

      *(undefined8*)( this + 0x1b0 ) = 0;
      cVar1 = RefCounted::unreference();
      if (cVar1 == '\0') {
         return;
      }

      this_00 = (OpenXRAPIExtension*)0x0;
      cVar1 = predelete_handler(pOVar3);
      if (cVar1 == '\0') {
         return;
      }

   }
 else {
      pOVar3 = *(Object**)( this + 0x1b0 );
      pOVar2 = pOVar3;
      if (this_00 == (OpenXRAPIExtension*)pOVar3) goto LAB_001010a6;
      *(OpenXRAPIExtension**)( this + 0x1b0 ) = this_00;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *(undefined8*)( this + 0x1b0 ) = 0;
      }

      pOVar2 = (Object*)this_00;
      if (( ( pOVar3 == (Object*)0x0 ) || ( cVar1 = RefCounted::unreference() ),cVar1 == '\0' )) goto LAB_001010a6;
   }

   ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
   Memory::free_static(pOVar3, false);
   pOVar2 = (Object*)this_00;
   if (this_00 == (OpenXRAPIExtension*)0x0) {
      return;
   }

   LAB_001010a6:cVar1 = RefCounted::unreference();
   if (( cVar1 != '\0' ) && ( cVar1 = predelete_handler(pOVar2) ),cVar1 != '\0') {
      ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
      Memory::free_static(pOVar2, false);
      return;
   }

   return;
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
/* Vector<String>::push_back(String) [clone .isra.0] */void Vector<String>::push_back(Vector<String> *this, CowData *param_2) {
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
/* OpenXRExtensionWrapperExtension::get_suggested_tracker_names() */void OpenXRExtensionWrapperExtension::get_suggested_tracker_names(void) {
   code *pcVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   long in_RSI;
   long in_RDI;
   long lVar7;
   long in_FS_OFFSET;
   undefined8 local_118;
   long local_110[2];
   long local_100;
   int local_f8[2];
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   long local_e8;
   long local_d8;
   undefined8 local_c8;
   long local_c0;
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
   plVar5 = *(long**)( in_RSI + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_100 = 0;
   if (plVar5 == (long*)0x0) {
      LAB_001013fb:if (( *(long*)( in_RSI + 8 ) != 0 ) && ( *(char*)( in_RSI + 0x2b0 ) == '\0' )) {
         local_c8 = 0;
         local_b8 = (undefined1[16])0x0;
         local_f8[0] = 0x112247;
         local_f8[1] = 0;
         local_c0 = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_98 = 6;
         local_90 = 1;
         local_88 = 0;
         local_78 = 0;
         local_70 = 0;
         local_60 = 0;
         uStack_f0 = 0x1c;
         uStack_ec = 0;
         String::parse_latin1((StrRange*)&local_c8);
         local_90 = CONCAT44(local_90._4_4_, 8);
         GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void>*)local_f8);
         PropertyInfo::operator =((PropertyInfo*)&local_c0, (PropertyInfo*)local_f8);
         lVar4 = local_d8;
         if (local_d8 != 0) {
            LOCK();
            plVar5 = (long*)( local_d8 + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
               local_d8 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_e8 != 0 )) {
            StringName::unref();
         }

         if (CONCAT44(uStack_ec, uStack_f0) != 0) {
            LOCK();
            plVar5 = (long*)( CONCAT44(uStack_ec, uStack_f0) + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
               lVar4 = CONCAT44(uStack_ec, uStack_f0);
               uStack_f0 = 0;
               uStack_ec = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         local_70 = local_70 & 0xffffffff00000000;
         uVar2 = MethodInfo::get_compatibility_hash();
         lVar4 = *(long*)( in_RSI + 8 );
         *(undefined8*)( in_RSI + 0x2b8 ) = 0;
         pcVar6 = *(code**)( lVar4 + 0xd8 );
         if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
            local_118 = 0;
            String::parse_latin1((String*)&local_118, "OpenXRExtensionWrapperExtension");
            StringName::StringName((StringName*)local_110, (String*)&local_118, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_f8, (StringName*)local_110);
            if (CONCAT44(uStack_ec, uStack_f0) == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&uStack_f0);
               if (( StringName::configured != '\0' ) && ( lVar4 = local_110[0] != 0 )) goto LAB_001017bf;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
               LAB_001017d4:lVar4 = *(long*)( in_RSI + 8 );
               pcVar6 = *(code**)( lVar4 + 200 );
               if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_00101709;
               uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), in_RSI + 0x2a8);
               *(undefined8*)( in_RSI + 0x2b8 ) = uVar3;
            }
 else {
               lVar4 = *(long*)( CONCAT44(uStack_ec, uStack_f0) + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&uStack_f0);
               if (( StringName::configured != '\0' ) && ( local_110[0] != 0 )) {
                  LAB_001017bf:StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
               if (lVar4 == 0) goto LAB_001017d4;
            }

            lVar4 = *(long*)( in_RSI + 8 );
         }
 else {
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), in_RSI + 0x2a8, uVar2);
            *(undefined8*)( in_RSI + 0x2b8 ) = uVar3;
            lVar4 = *(long*)( in_RSI + 8 );
         }

         LAB_00101709:if (*(char*)( lVar4 + 0x29 ) != '\0') {
            plVar5 = (long*)operator_new(0x18, "");
            *plVar5 = in_RSI + 0x2b8;
            plVar5[1] = in_RSI + 0x2b0;
            plVar5[2] = *(long*)( in_RSI + 0x168 );
            *(long**)( in_RSI + 0x168 ) = plVar5;
         }

         *(undefined1*)( in_RSI + 0x2b0 ) = 1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
      }

      lVar4 = local_100;
      pcVar6 = *(code**)( in_RSI + 0x2b8 );
      if (pcVar6 == (code*)0x0) {
         *(undefined8*)( in_RDI + 8 ) = 0;
         goto LAB_001014ab;
      }

      uStack_f0 = 0;
      uStack_ec = 0;
      pcVar1 = *(code**)( *(long*)( in_RSI + 8 ) + 0xe0 );
      if (pcVar1 == (code*)0x0) {
         ( *pcVar6 )(*(undefined8*)( in_RSI + 0x10 ), 0, local_f8);
      }
 else {
         ( *pcVar1 )(*(undefined8*)( in_RSI + 0x10 ), in_RSI + 0x2a8, pcVar6, 0, local_f8);
      }

      local_c0 = 0;
      CowData<String>::_ref((CowData<String>*)&local_c0, (CowData*)&uStack_f0);
      lVar7 = local_c0;
      if (lVar4 != local_c0) {
         CowData<String>::_unref((CowData<String>*)&local_100);
         local_c0 = 0;
      }

      CowData<String>::_unref((CowData<String>*)&local_c0);
      CowData<String>::_unref((CowData<String>*)&uStack_f0);
   }
 else {
      local_f8[0] = 0;
      local_f8[1] = 0;
      uStack_f0 = 0;
      ( **(code**)( *plVar5 + 0x60 ) )(local_58, plVar5, in_RSI + 0x2a8, 0, 0, local_f8);
      if (local_f8[0] != 0) {
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_001013fb;
      }

      Variant::operator_cast_to_Vector((Variant*)&local_c8);
      lVar7 = local_c0;
      if (local_c0 != 0) {
         CowData<String>::_unref((CowData<String>*)&local_100);
         lVar7 = local_c0;
         local_c0 = 0;
      }

      CowData<String>::_unref((CowData<String>*)&local_c0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   *(long*)( in_RDI + 8 ) = lVar7;
   local_100 = 0;
   LAB_001014ab:CowData<String>::_unref((CowData<String>*)&local_100);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* non-virtual thunk to OpenXRExtensionWrapperExtension::get_suggested_tracker_names() */void OpenXRExtensionWrapperExtension::get_suggested_tracker_names(OpenXRExtensionWrapperExtension *this) {
   get_suggested_tracker_names();
   return;
}
/* OpenXRExtensionWrapperExtension::get_composition_layer_count() */int OpenXRExtensionWrapperExtension::get_composition_layer_count(OpenXRExtensionWrapperExtension *this) {
   int iVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   undefined8 local_108;
   long local_100;
   char *local_f8;
   long local_f0;
   long local_e8;
   long local_d8;
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
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar5 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar5 != (long*)0x0) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_58, plVar5, this + 0x260, 0, 0, local_c8);
      if (local_c8[0] == 0) {
         iVar1 = Variant::operator_cast_to_int((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00101973;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x268] == (OpenXRExtensionWrapperExtension)0x0 )) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_b8 = (undefined1[16])0x0;
      local_f8 = "_get_composition_layer_count";
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
      local_f0 = 0x1c;
      String::parse_latin1((StrRange*)local_c8);
      local_90 = CONCAT44(local_90._4_4_, 8);
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)&local_f8);
      lVar4 = local_d8;
      if (local_d8 != 0) {
         LOCK();
         plVar5 = (long*)( local_d8 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_d8 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_e8 != 0 )) {
         StringName::unref();
      }

      lVar4 = local_f0;
      if (local_f0 != 0) {
         LOCK();
         plVar5 = (long*)( local_f0 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_f0 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      local_70 = CONCAT44(local_70._4_4_, 3);
      uVar2 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x270 ) = 0;
      pcVar6 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "OpenXRExtensionWrapperExtension");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
         if (local_f0 == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_f0);
            if (( StringName::configured != '\0' ) && ( lVar4 = local_100 != 0 )) goto LAB_00101c18;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_00101c2d:lVar4 = *(long*)( this + 8 );
            pcVar6 = *(code**)( lVar4 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_00101b72;
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x260);
            *(undefined8*)( this + 0x270 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_f0 + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_00101c18:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar4 == 0) goto LAB_00101c2d;
         }

         lVar4 = *(long*)( this + 8 );
      }
 else {
         uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x260, uVar2);
         *(undefined8*)( this + 0x270 ) = uVar3;
         lVar4 = *(long*)( this + 8 );
      }

      LAB_00101b72:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 0x270 );
         plVar5[1] = (long)( this + 0x268 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x268] = (OpenXRExtensionWrapperExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_c8);
   }

   pcVar6 = *(code**)( this + 0x270 );
   iVar1 = 0;
   if (pcVar6 != (code*)0x0) {
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar6 )(*(undefined8*)( this + 0x10 ), 0, local_c8);
         iVar1 = local_c8[0];
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x260, pcVar6, 0, local_c8);
         iVar1 = local_c8[0];
      }

   }

   LAB_00101973:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar1;
}
/* non-virtual thunk to OpenXRExtensionWrapperExtension::get_composition_layer_count() */void OpenXRExtensionWrapperExtension::get_composition_layer_count(OpenXRExtensionWrapperExtension *this) {
   get_composition_layer_count(this + -0x180);
   return;
}
/* OpenXRExtensionWrapperExtension::on_register_metadata() */void OpenXRExtensionWrapperExtension::on_register_metadata(OpenXRExtensionWrapperExtension *this) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   undefined8 local_e8;
   long local_e0;
   char *local_d8;
   long local_d0;
   int local_c8[4];
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 == (long*)0x0) {
      LAB_00101d8b:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x2c8] == (OpenXRExtensionWrapperExtension)0x0 )) {
         local_c8[0] = 0;
         local_c8[1] = 0;
         local_b8 = (undefined1[16])0x0;
         local_d8 = "_on_register_metadata";
         local_c8[2] = 0;
         local_c8[3] = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_98 = 6;
         local_90 = 1;
         local_88 = 0;
         local_78 = 0;
         local_70 = 0;
         local_60 = 0;
         local_d0 = 0x15;
         String::parse_latin1((StrRange*)local_c8);
         local_90 = CONCAT44(local_90._4_4_, 8);
         uVar1 = MethodInfo::get_compatibility_hash();
         lVar3 = *(long*)( this + 8 );
         *(undefined8*)( this + 0x2d0 ) = 0;
         UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd8 );
         if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) {
            local_e8 = 0;
            String::parse_latin1((String*)&local_e8, "OpenXRExtensionWrapperExtension");
            StringName::StringName((StringName*)&local_e0, (String*)&local_e8, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_d8, (StringName*)&local_e0);
            if (local_d0 == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( lVar3 = local_e0 != 0 )) goto LAB_00101fe5;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               LAB_00101ffa:lVar3 = *(long*)( this + 8 );
               UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 200 );
               if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xc0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) goto LAB_00101f3f;
               uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x2c0);
               *(undefined8*)( this + 0x2d0 ) = uVar2;
            }
 else {
               lVar3 = *(long*)( local_d0 + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
                  LAB_00101fe5:StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               if (lVar3 == 0) goto LAB_00101ffa;
            }

            lVar3 = *(long*)( this + 8 );
         }
 else {
            uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x2c0, uVar1);
            *(undefined8*)( this + 0x2d0 ) = uVar2;
            lVar3 = *(long*)( this + 8 );
         }

         LAB_00101f3f:if (*(char*)( lVar3 + 0x29 ) != '\0') {
            plVar4 = (long*)operator_new(0x18, "");
            *plVar4 = (long)( this + 0x2d0 );
            plVar4[1] = (long)( this + 0x2c8 );
            plVar4[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar4;
         }

         this[0x2c8] = (OpenXRExtensionWrapperExtension)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)local_c8);
      }

      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x2d0 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x00101e4c. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( this + 0x10 ), 0, 0);
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00101ded. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x2c0, UNRECOVERED_JUMPTABLE, 0, 0);
            return;
         }

         goto LAB_0010206d;
      }

   }
 else {
      for (int i = 0; i < 3; i++) {
         local_c8[i] = 0;
      }

      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, this + 0x2c0, 0, 0, local_c8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_c8[0] != 0) goto LAB_00101d8b;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010206d:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* non-virtual thunk to OpenXRExtensionWrapperExtension::on_register_metadata() */void OpenXRExtensionWrapperExtension::on_register_metadata(OpenXRExtensionWrapperExtension *this) {
   on_register_metadata(this + -0x178);
   return;
}
/* OpenXRExtensionWrapperExtension::on_before_instance_created() */void OpenXRExtensionWrapperExtension::on_before_instance_created(OpenXRExtensionWrapperExtension *this) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   undefined8 local_e8;
   long local_e0;
   char *local_d8;
   long local_d0;
   int local_c8[4];
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 == (long*)0x0) {
      LAB_0010215b:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x2e0] == (OpenXRExtensionWrapperExtension)0x0 )) {
         local_c8[0] = 0;
         local_c8[1] = 0;
         local_b8 = (undefined1[16])0x0;
         local_d8 = "_on_before_instance_created";
         local_c8[2] = 0;
         local_c8[3] = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_98 = 6;
         local_90 = 1;
         local_88 = 0;
         local_78 = 0;
         local_70 = 0;
         local_60 = 0;
         local_d0 = 0x1b;
         String::parse_latin1((StrRange*)local_c8);
         local_90 = CONCAT44(local_90._4_4_, 8);
         uVar1 = MethodInfo::get_compatibility_hash();
         lVar3 = *(long*)( this + 8 );
         *(undefined8*)( this + 0x2e8 ) = 0;
         UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd8 );
         if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) {
            local_e8 = 0;
            String::parse_latin1((String*)&local_e8, "OpenXRExtensionWrapperExtension");
            StringName::StringName((StringName*)&local_e0, (String*)&local_e8, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_d8, (StringName*)&local_e0);
            if (local_d0 == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( lVar3 = local_e0 != 0 )) goto LAB_001023b5;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               LAB_001023ca:lVar3 = *(long*)( this + 8 );
               UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 200 );
               if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xc0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) goto LAB_0010230f;
               uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x2d8);
               *(undefined8*)( this + 0x2e8 ) = uVar2;
            }
 else {
               lVar3 = *(long*)( local_d0 + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
                  LAB_001023b5:StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               if (lVar3 == 0) goto LAB_001023ca;
            }

            lVar3 = *(long*)( this + 8 );
         }
 else {
            uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x2d8, uVar1);
            *(undefined8*)( this + 0x2e8 ) = uVar2;
            lVar3 = *(long*)( this + 8 );
         }

         LAB_0010230f:if (*(char*)( lVar3 + 0x29 ) != '\0') {
            plVar4 = (long*)operator_new(0x18, "");
            *plVar4 = (long)( this + 0x2e8 );
            plVar4[1] = (long)( this + 0x2e0 );
            plVar4[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar4;
         }

         this[0x2e0] = (OpenXRExtensionWrapperExtension)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)local_c8);
      }

      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x2e8 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010221c. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( this + 0x10 ), 0, 0);
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x001021bd. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x2d8, UNRECOVERED_JUMPTABLE, 0, 0);
            return;
         }

         goto LAB_0010243d;
      }

   }
 else {
      for (int i = 0; i < 3; i++) {
         local_c8[i] = 0;
      }

      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, this + 0x2d8, 0, 0, local_c8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_c8[0] != 0) goto LAB_0010215b;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010243d:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* non-virtual thunk to OpenXRExtensionWrapperExtension::on_before_instance_created() */void OpenXRExtensionWrapperExtension::on_before_instance_created(OpenXRExtensionWrapperExtension *this) {
   on_before_instance_created(this + -0x178);
   return;
}
/* OpenXRExtensionWrapperExtension::on_instance_destroyed() */void OpenXRExtensionWrapperExtension::on_instance_destroyed(OpenXRExtensionWrapperExtension *this) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   undefined8 local_e8;
   long local_e0;
   char *local_d8;
   long local_d0;
   int local_c8[4];
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 == (long*)0x0) {
      LAB_0010252b:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x310] == (OpenXRExtensionWrapperExtension)0x0 )) {
         local_c8[0] = 0;
         local_c8[1] = 0;
         local_b8 = (undefined1[16])0x0;
         local_d8 = "_on_instance_destroyed";
         local_c8[2] = 0;
         local_c8[3] = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_98 = 6;
         local_90 = 1;
         local_88 = 0;
         local_78 = 0;
         local_70 = 0;
         local_60 = 0;
         local_d0 = 0x16;
         String::parse_latin1((StrRange*)local_c8);
         local_90 = CONCAT44(local_90._4_4_, 8);
         uVar1 = MethodInfo::get_compatibility_hash();
         lVar3 = *(long*)( this + 8 );
         *(undefined8*)( this + 0x318 ) = 0;
         UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd8 );
         if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) {
            local_e8 = 0;
            String::parse_latin1((String*)&local_e8, "OpenXRExtensionWrapperExtension");
            StringName::StringName((StringName*)&local_e0, (String*)&local_e8, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_d8, (StringName*)&local_e0);
            if (local_d0 == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( lVar3 = local_e0 != 0 )) goto LAB_00102785;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               LAB_0010279a:lVar3 = *(long*)( this + 8 );
               UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 200 );
               if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xc0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) goto LAB_001026df;
               uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x308);
               *(undefined8*)( this + 0x318 ) = uVar2;
            }
 else {
               lVar3 = *(long*)( local_d0 + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
                  LAB_00102785:StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               if (lVar3 == 0) goto LAB_0010279a;
            }

            lVar3 = *(long*)( this + 8 );
         }
 else {
            uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x308, uVar1);
            *(undefined8*)( this + 0x318 ) = uVar2;
            lVar3 = *(long*)( this + 8 );
         }

         LAB_001026df:if (*(char*)( lVar3 + 0x29 ) != '\0') {
            plVar4 = (long*)operator_new(0x18, "");
            *plVar4 = (long)( this + 0x318 );
            plVar4[1] = (long)( this + 0x310 );
            plVar4[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar4;
         }

         this[0x310] = (OpenXRExtensionWrapperExtension)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)local_c8);
      }

      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x318 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x001025ec. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( this + 0x10 ), 0, 0);
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x0010258d. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x308, UNRECOVERED_JUMPTABLE, 0, 0);
            return;
         }

         goto LAB_0010280d;
      }

   }
 else {
      for (int i = 0; i < 3; i++) {
         local_c8[i] = 0;
      }

      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, this + 0x308, 0, 0, local_c8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_c8[0] != 0) goto LAB_0010252b;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010280d:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* non-virtual thunk to OpenXRExtensionWrapperExtension::on_instance_destroyed() */void OpenXRExtensionWrapperExtension::on_instance_destroyed(OpenXRExtensionWrapperExtension *this) {
   on_instance_destroyed(this + -0x178);
   return;
}
/* OpenXRExtensionWrapperExtension::on_process() */void OpenXRExtensionWrapperExtension::on_process(OpenXRExtensionWrapperExtension *this) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   undefined8 local_e8;
   long local_e0;
   char *local_d8;
   long local_d0;
   int local_c8[4];
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 == (long*)0x0) {
      LAB_001028fb:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x340] == (OpenXRExtensionWrapperExtension)0x0 )) {
         local_c8[0] = 0;
         local_c8[1] = 0;
         local_b8 = (undefined1[16])0x0;
         local_d8 = "_on_process";
         local_c8[2] = 0;
         local_c8[3] = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_98 = 6;
         local_90 = 1;
         local_88 = 0;
         local_78 = 0;
         local_70 = 0;
         local_60 = 0;
         local_d0 = 0xb;
         String::parse_latin1((StrRange*)local_c8);
         local_90 = CONCAT44(local_90._4_4_, 8);
         uVar1 = MethodInfo::get_compatibility_hash();
         lVar3 = *(long*)( this + 8 );
         *(undefined8*)( this + 0x348 ) = 0;
         UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd8 );
         if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) {
            local_e8 = 0;
            String::parse_latin1((String*)&local_e8, "OpenXRExtensionWrapperExtension");
            StringName::StringName((StringName*)&local_e0, (String*)&local_e8, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_d8, (StringName*)&local_e0);
            if (local_d0 == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( lVar3 = local_e0 != 0 )) goto LAB_00102b55;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               LAB_00102b6a:lVar3 = *(long*)( this + 8 );
               UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 200 );
               if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xc0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) goto LAB_00102aaf;
               uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x338);
               *(undefined8*)( this + 0x348 ) = uVar2;
            }
 else {
               lVar3 = *(long*)( local_d0 + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
                  LAB_00102b55:StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               if (lVar3 == 0) goto LAB_00102b6a;
            }

            lVar3 = *(long*)( this + 8 );
         }
 else {
            uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x338, uVar1);
            *(undefined8*)( this + 0x348 ) = uVar2;
            lVar3 = *(long*)( this + 8 );
         }

         LAB_00102aaf:if (*(char*)( lVar3 + 0x29 ) != '\0') {
            plVar4 = (long*)operator_new(0x18, "");
            *plVar4 = (long)( this + 0x348 );
            plVar4[1] = (long)( this + 0x340 );
            plVar4[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar4;
         }

         this[0x340] = (OpenXRExtensionWrapperExtension)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)local_c8);
      }

      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x348 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x001029bc. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( this + 0x10 ), 0, 0);
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x0010295d. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x338, UNRECOVERED_JUMPTABLE, 0, 0);
            return;
         }

         goto LAB_00102bdd;
      }

   }
 else {
      for (int i = 0; i < 3; i++) {
         local_c8[i] = 0;
      }

      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, this + 0x338, 0, 0, local_c8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_c8[0] != 0) goto LAB_001028fb;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00102bdd:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* non-virtual thunk to OpenXRExtensionWrapperExtension::on_process() */void OpenXRExtensionWrapperExtension::on_process(OpenXRExtensionWrapperExtension *this) {
   on_process(this + -0x178);
   return;
}
/* OpenXRExtensionWrapperExtension::on_pre_render() */void OpenXRExtensionWrapperExtension::on_pre_render(OpenXRExtensionWrapperExtension *this) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   undefined8 local_e8;
   long local_e0;
   char *local_d8;
   long local_d0;
   int local_c8[4];
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 == (long*)0x0) {
      LAB_00102ccb:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x358] == (OpenXRExtensionWrapperExtension)0x0 )) {
         local_c8[0] = 0;
         local_c8[1] = 0;
         local_b8 = (undefined1[16])0x0;
         local_d8 = "_on_pre_render";
         local_c8[2] = 0;
         local_c8[3] = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_98 = 6;
         local_90 = 1;
         local_88 = 0;
         local_78 = 0;
         local_70 = 0;
         local_60 = 0;
         local_d0 = 0xe;
         String::parse_latin1((StrRange*)local_c8);
         local_90 = CONCAT44(local_90._4_4_, 8);
         uVar1 = MethodInfo::get_compatibility_hash();
         lVar3 = *(long*)( this + 8 );
         *(undefined8*)( this + 0x360 ) = 0;
         UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd8 );
         if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) {
            local_e8 = 0;
            String::parse_latin1((String*)&local_e8, "OpenXRExtensionWrapperExtension");
            StringName::StringName((StringName*)&local_e0, (String*)&local_e8, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_d8, (StringName*)&local_e0);
            if (local_d0 == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( lVar3 = local_e0 != 0 )) goto LAB_00102f25;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               LAB_00102f3a:lVar3 = *(long*)( this + 8 );
               UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 200 );
               if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xc0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) goto LAB_00102e7f;
               uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x350);
               *(undefined8*)( this + 0x360 ) = uVar2;
            }
 else {
               lVar3 = *(long*)( local_d0 + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
                  LAB_00102f25:StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               if (lVar3 == 0) goto LAB_00102f3a;
            }

            lVar3 = *(long*)( this + 8 );
         }
 else {
            uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x350, uVar1);
            *(undefined8*)( this + 0x360 ) = uVar2;
            lVar3 = *(long*)( this + 8 );
         }

         LAB_00102e7f:if (*(char*)( lVar3 + 0x29 ) != '\0') {
            plVar4 = (long*)operator_new(0x18, "");
            *plVar4 = (long)( this + 0x360 );
            plVar4[1] = (long)( this + 0x358 );
            plVar4[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar4;
         }

         this[0x358] = (OpenXRExtensionWrapperExtension)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)local_c8);
      }

      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x360 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x00102d8c. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( this + 0x10 ), 0, 0);
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00102d2d. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x350, UNRECOVERED_JUMPTABLE, 0, 0);
            return;
         }

         goto LAB_00102fad;
      }

   }
 else {
      for (int i = 0; i < 3; i++) {
         local_c8[i] = 0;
      }

      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, this + 0x350, 0, 0, local_c8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_c8[0] != 0) goto LAB_00102ccb;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00102fad:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* non-virtual thunk to OpenXRExtensionWrapperExtension::on_pre_render() */void OpenXRExtensionWrapperExtension::on_pre_render(OpenXRExtensionWrapperExtension *this) {
   on_pre_render(this + -0x178);
   return;
}
/* OpenXRExtensionWrapperExtension::on_main_swapchains_created() */void OpenXRExtensionWrapperExtension::on_main_swapchains_created(OpenXRExtensionWrapperExtension *this) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   undefined8 local_e8;
   long local_e0;
   char *local_d8;
   long local_d0;
   int local_c8[4];
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 == (long*)0x0) {
      LAB_0010309b:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x370] == (OpenXRExtensionWrapperExtension)0x0 )) {
         local_c8[0] = 0;
         local_c8[1] = 0;
         local_b8 = (undefined1[16])0x0;
         local_d8 = "_on_main_swapchains_created";
         local_c8[2] = 0;
         local_c8[3] = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_98 = 6;
         local_90 = 1;
         local_88 = 0;
         local_78 = 0;
         local_70 = 0;
         local_60 = 0;
         local_d0 = 0x1b;
         String::parse_latin1((StrRange*)local_c8);
         local_90 = CONCAT44(local_90._4_4_, 8);
         uVar1 = MethodInfo::get_compatibility_hash();
         lVar3 = *(long*)( this + 8 );
         *(undefined8*)( this + 0x378 ) = 0;
         UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd8 );
         if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) {
            local_e8 = 0;
            String::parse_latin1((String*)&local_e8, "OpenXRExtensionWrapperExtension");
            StringName::StringName((StringName*)&local_e0, (String*)&local_e8, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_d8, (StringName*)&local_e0);
            if (local_d0 == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( lVar3 = local_e0 != 0 )) goto LAB_001032f5;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               LAB_0010330a:lVar3 = *(long*)( this + 8 );
               UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 200 );
               if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xc0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) goto LAB_0010324f;
               uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x368);
               *(undefined8*)( this + 0x378 ) = uVar2;
            }
 else {
               lVar3 = *(long*)( local_d0 + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
                  LAB_001032f5:StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               if (lVar3 == 0) goto LAB_0010330a;
            }

            lVar3 = *(long*)( this + 8 );
         }
 else {
            uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x368, uVar1);
            *(undefined8*)( this + 0x378 ) = uVar2;
            lVar3 = *(long*)( this + 8 );
         }

         LAB_0010324f:if (*(char*)( lVar3 + 0x29 ) != '\0') {
            plVar4 = (long*)operator_new(0x18, "");
            *plVar4 = (long)( this + 0x378 );
            plVar4[1] = (long)( this + 0x370 );
            plVar4[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar4;
         }

         this[0x370] = (OpenXRExtensionWrapperExtension)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)local_c8);
      }

      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x378 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010315c. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( this + 0x10 ), 0, 0);
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x001030fd. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x368, UNRECOVERED_JUMPTABLE, 0, 0);
            return;
         }

         goto LAB_0010337d;
      }

   }
 else {
      for (int i = 0; i < 3; i++) {
         local_c8[i] = 0;
      }

      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, this + 0x368, 0, 0, local_c8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_c8[0] != 0) goto LAB_0010309b;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010337d:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* non-virtual thunk to OpenXRExtensionWrapperExtension::on_main_swapchains_created() */void OpenXRExtensionWrapperExtension::on_main_swapchains_created(OpenXRExtensionWrapperExtension *this) {
   on_main_swapchains_created(this + -0x178);
   return;
}
/* OpenXRExtensionWrapperExtension::on_session_destroyed() */void OpenXRExtensionWrapperExtension::on_session_destroyed(OpenXRExtensionWrapperExtension *this) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   undefined8 local_e8;
   long local_e0;
   char *local_d8;
   long local_d0;
   int local_c8[4];
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 == (long*)0x0) {
      LAB_0010346b:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x388] == (OpenXRExtensionWrapperExtension)0x0 )) {
         local_c8[0] = 0;
         local_c8[1] = 0;
         local_b8 = (undefined1[16])0x0;
         local_d8 = "_on_session_destroyed";
         local_c8[2] = 0;
         local_c8[3] = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_98 = 6;
         local_90 = 1;
         local_88 = 0;
         local_78 = 0;
         local_70 = 0;
         local_60 = 0;
         local_d0 = 0x15;
         String::parse_latin1((StrRange*)local_c8);
         local_90 = CONCAT44(local_90._4_4_, 8);
         uVar1 = MethodInfo::get_compatibility_hash();
         lVar3 = *(long*)( this + 8 );
         *(undefined8*)( this + 0x390 ) = 0;
         UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd8 );
         if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) {
            local_e8 = 0;
            String::parse_latin1((String*)&local_e8, "OpenXRExtensionWrapperExtension");
            StringName::StringName((StringName*)&local_e0, (String*)&local_e8, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_d8, (StringName*)&local_e0);
            if (local_d0 == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( lVar3 = local_e0 != 0 )) goto LAB_001036c5;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               LAB_001036da:lVar3 = *(long*)( this + 8 );
               UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 200 );
               if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xc0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) goto LAB_0010361f;
               uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x380);
               *(undefined8*)( this + 0x390 ) = uVar2;
            }
 else {
               lVar3 = *(long*)( local_d0 + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
                  LAB_001036c5:StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               if (lVar3 == 0) goto LAB_001036da;
            }

            lVar3 = *(long*)( this + 8 );
         }
 else {
            uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x380, uVar1);
            *(undefined8*)( this + 0x390 ) = uVar2;
            lVar3 = *(long*)( this + 8 );
         }

         LAB_0010361f:if (*(char*)( lVar3 + 0x29 ) != '\0') {
            plVar4 = (long*)operator_new(0x18, "");
            *plVar4 = (long)( this + 0x390 );
            plVar4[1] = (long)( this + 0x388 );
            plVar4[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar4;
         }

         this[0x388] = (OpenXRExtensionWrapperExtension)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)local_c8);
      }

      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x390 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010352c. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( this + 0x10 ), 0, 0);
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x001034cd. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x380, UNRECOVERED_JUMPTABLE, 0, 0);
            return;
         }

         goto LAB_0010374d;
      }

   }
 else {
      for (int i = 0; i < 3; i++) {
         local_c8[i] = 0;
      }

      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, this + 0x380, 0, 0, local_c8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_c8[0] != 0) goto LAB_0010346b;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010374d:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* non-virtual thunk to OpenXRExtensionWrapperExtension::on_session_destroyed() */void OpenXRExtensionWrapperExtension::on_session_destroyed(OpenXRExtensionWrapperExtension *this) {
   on_session_destroyed(this + -0x178);
   return;
}
/* OpenXRExtensionWrapperExtension::on_state_idle() */void OpenXRExtensionWrapperExtension::on_state_idle(OpenXRExtensionWrapperExtension *this) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   undefined8 local_e8;
   long local_e0;
   char *local_d8;
   long local_d0;
   int local_c8[4];
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 == (long*)0x0) {
      LAB_0010383b:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x3d0] == (OpenXRExtensionWrapperExtension)0x0 )) {
         local_c8[0] = 0;
         local_c8[1] = 0;
         local_b8 = (undefined1[16])0x0;
         local_d8 = "_on_state_idle";
         local_c8[2] = 0;
         local_c8[3] = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_98 = 6;
         local_90 = 1;
         local_88 = 0;
         local_78 = 0;
         local_70 = 0;
         local_60 = 0;
         local_d0 = 0xe;
         String::parse_latin1((StrRange*)local_c8);
         local_90 = CONCAT44(local_90._4_4_, 8);
         uVar1 = MethodInfo::get_compatibility_hash();
         lVar3 = *(long*)( this + 8 );
         *(undefined8*)( this + 0x3d8 ) = 0;
         UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd8 );
         if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) {
            local_e8 = 0;
            String::parse_latin1((String*)&local_e8, "OpenXRExtensionWrapperExtension");
            StringName::StringName((StringName*)&local_e0, (String*)&local_e8, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_d8, (StringName*)&local_e0);
            if (local_d0 == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( lVar3 = local_e0 != 0 )) goto LAB_00103a95;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               LAB_00103aaa:lVar3 = *(long*)( this + 8 );
               UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 200 );
               if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xc0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) goto LAB_001039ef;
               uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x3c8);
               *(undefined8*)( this + 0x3d8 ) = uVar2;
            }
 else {
               lVar3 = *(long*)( local_d0 + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
                  LAB_00103a95:StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               if (lVar3 == 0) goto LAB_00103aaa;
            }

            lVar3 = *(long*)( this + 8 );
         }
 else {
            uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x3c8, uVar1);
            *(undefined8*)( this + 0x3d8 ) = uVar2;
            lVar3 = *(long*)( this + 8 );
         }

         LAB_001039ef:if (*(char*)( lVar3 + 0x29 ) != '\0') {
            plVar4 = (long*)operator_new(0x18, "");
            *plVar4 = (long)( this + 0x3d8 );
            plVar4[1] = (long)( this + 0x3d0 );
            plVar4[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar4;
         }

         this[0x3d0] = (OpenXRExtensionWrapperExtension)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)local_c8);
      }

      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x3d8 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x001038fc. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( this + 0x10 ), 0, 0);
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x0010389d. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x3c8, UNRECOVERED_JUMPTABLE, 0, 0);
            return;
         }

         goto LAB_00103b1d;
      }

   }
 else {
      for (int i = 0; i < 3; i++) {
         local_c8[i] = 0;
      }

      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, this + 0x3c8, 0, 0, local_c8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_c8[0] != 0) goto LAB_0010383b;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00103b1d:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* non-virtual thunk to OpenXRExtensionWrapperExtension::on_state_idle() */void OpenXRExtensionWrapperExtension::on_state_idle(OpenXRExtensionWrapperExtension *this) {
   on_state_idle(this + -0x178);
   return;
}
/* OpenXRExtensionWrapperExtension::on_state_ready() */void OpenXRExtensionWrapperExtension::on_state_ready(OpenXRExtensionWrapperExtension *this) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   undefined8 local_e8;
   long local_e0;
   char *local_d8;
   long local_d0;
   int local_c8[4];
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 == (long*)0x0) {
      LAB_00103c0b:if (( *(long*)( this + 8 ) != 0 ) && ( this[1000] == (OpenXRExtensionWrapperExtension)0x0 )) {
         local_c8[0] = 0;
         local_c8[1] = 0;
         local_b8 = (undefined1[16])0x0;
         local_d8 = "_on_state_ready";
         local_c8[2] = 0;
         local_c8[3] = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_98 = 6;
         local_90 = 1;
         local_88 = 0;
         local_78 = 0;
         local_70 = 0;
         local_60 = 0;
         local_d0 = 0xf;
         String::parse_latin1((StrRange*)local_c8);
         local_90 = CONCAT44(local_90._4_4_, 8);
         uVar1 = MethodInfo::get_compatibility_hash();
         lVar3 = *(long*)( this + 8 );
         *(undefined8*)( this + 0x3f0 ) = 0;
         UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd8 );
         if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) {
            local_e8 = 0;
            String::parse_latin1((String*)&local_e8, "OpenXRExtensionWrapperExtension");
            StringName::StringName((StringName*)&local_e0, (String*)&local_e8, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_d8, (StringName*)&local_e0);
            if (local_d0 == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( lVar3 = local_e0 != 0 )) goto LAB_00103e65;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               LAB_00103e7a:lVar3 = *(long*)( this + 8 );
               UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 200 );
               if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xc0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) goto LAB_00103dbf;
               uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x3e0);
               *(undefined8*)( this + 0x3f0 ) = uVar2;
            }
 else {
               lVar3 = *(long*)( local_d0 + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
                  LAB_00103e65:StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               if (lVar3 == 0) goto LAB_00103e7a;
            }

            lVar3 = *(long*)( this + 8 );
         }
 else {
            uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x3e0, uVar1);
            *(undefined8*)( this + 0x3f0 ) = uVar2;
            lVar3 = *(long*)( this + 8 );
         }

         LAB_00103dbf:if (*(char*)( lVar3 + 0x29 ) != '\0') {
            plVar4 = (long*)operator_new(0x18, "");
            *plVar4 = (long)( this + 0x3f0 );
            plVar4[1] = (long)( this + 1000 );
            plVar4[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar4;
         }

         this[1000] = (OpenXRExtensionWrapperExtension)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)local_c8);
      }

      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x3f0 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x00103ccc. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( this + 0x10 ), 0, 0);
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00103c6d. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x3e0, UNRECOVERED_JUMPTABLE, 0, 0);
            return;
         }

         goto LAB_00103eed;
      }

   }
 else {
      for (int i = 0; i < 3; i++) {
         local_c8[i] = 0;
      }

      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, this + 0x3e0, 0, 0, local_c8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_c8[0] != 0) goto LAB_00103c0b;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00103eed:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* non-virtual thunk to OpenXRExtensionWrapperExtension::on_state_ready() */void OpenXRExtensionWrapperExtension::on_state_ready(OpenXRExtensionWrapperExtension *this) {
   on_state_ready(this + -0x178);
   return;
}
/* OpenXRExtensionWrapperExtension::on_state_synchronized() */void OpenXRExtensionWrapperExtension::on_state_synchronized(OpenXRExtensionWrapperExtension *this) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   undefined8 local_e8;
   long local_e0;
   char *local_d8;
   long local_d0;
   int local_c8[4];
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 == (long*)0x0) {
      LAB_00103fdb:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x400] == (OpenXRExtensionWrapperExtension)0x0 )) {
         local_c8[0] = 0;
         local_c8[1] = 0;
         local_b8 = (undefined1[16])0x0;
         local_d8 = "_on_state_synchronized";
         local_c8[2] = 0;
         local_c8[3] = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_98 = 6;
         local_90 = 1;
         local_88 = 0;
         local_78 = 0;
         local_70 = 0;
         local_60 = 0;
         local_d0 = 0x16;
         String::parse_latin1((StrRange*)local_c8);
         local_90 = CONCAT44(local_90._4_4_, 8);
         uVar1 = MethodInfo::get_compatibility_hash();
         lVar3 = *(long*)( this + 8 );
         *(undefined8*)( this + 0x408 ) = 0;
         UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd8 );
         if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) {
            local_e8 = 0;
            String::parse_latin1((String*)&local_e8, "OpenXRExtensionWrapperExtension");
            StringName::StringName((StringName*)&local_e0, (String*)&local_e8, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_d8, (StringName*)&local_e0);
            if (local_d0 == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( lVar3 = local_e0 != 0 )) goto LAB_00104235;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               LAB_0010424a:lVar3 = *(long*)( this + 8 );
               UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 200 );
               if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xc0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) goto LAB_0010418f;
               uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x3f8);
               *(undefined8*)( this + 0x408 ) = uVar2;
            }
 else {
               lVar3 = *(long*)( local_d0 + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
                  LAB_00104235:StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               if (lVar3 == 0) goto LAB_0010424a;
            }

            lVar3 = *(long*)( this + 8 );
         }
 else {
            uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x3f8, uVar1);
            *(undefined8*)( this + 0x408 ) = uVar2;
            lVar3 = *(long*)( this + 8 );
         }

         LAB_0010418f:if (*(char*)( lVar3 + 0x29 ) != '\0') {
            plVar4 = (long*)operator_new(0x18, "");
            *plVar4 = (long)( this + 0x408 );
            plVar4[1] = (long)( this + 0x400 );
            plVar4[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar4;
         }

         this[0x400] = (OpenXRExtensionWrapperExtension)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)local_c8);
      }

      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x408 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010409c. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( this + 0x10 ), 0, 0);
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x0010403d. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x3f8, UNRECOVERED_JUMPTABLE, 0, 0);
            return;
         }

         goto LAB_001042bd;
      }

   }
 else {
      for (int i = 0; i < 3; i++) {
         local_c8[i] = 0;
      }

      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, this + 0x3f8, 0, 0, local_c8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_c8[0] != 0) goto LAB_00103fdb;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001042bd:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* non-virtual thunk to OpenXRExtensionWrapperExtension::on_state_synchronized() */void OpenXRExtensionWrapperExtension::on_state_synchronized(OpenXRExtensionWrapperExtension *this) {
   on_state_synchronized(this + -0x178);
   return;
}
/* OpenXRExtensionWrapperExtension::on_state_visible() */void OpenXRExtensionWrapperExtension::on_state_visible(OpenXRExtensionWrapperExtension *this) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   undefined8 local_e8;
   long local_e0;
   char *local_d8;
   long local_d0;
   int local_c8[4];
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 == (long*)0x0) {
      LAB_001043ab:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x418] == (OpenXRExtensionWrapperExtension)0x0 )) {
         local_c8[0] = 0;
         local_c8[1] = 0;
         local_b8 = (undefined1[16])0x0;
         local_d8 = "_on_state_visible";
         local_c8[2] = 0;
         local_c8[3] = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_98 = 6;
         local_90 = 1;
         local_88 = 0;
         local_78 = 0;
         local_70 = 0;
         local_60 = 0;
         local_d0 = 0x11;
         String::parse_latin1((StrRange*)local_c8);
         local_90 = CONCAT44(local_90._4_4_, 8);
         uVar1 = MethodInfo::get_compatibility_hash();
         lVar3 = *(long*)( this + 8 );
         *(undefined8*)( this + 0x420 ) = 0;
         UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd8 );
         if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) {
            local_e8 = 0;
            String::parse_latin1((String*)&local_e8, "OpenXRExtensionWrapperExtension");
            StringName::StringName((StringName*)&local_e0, (String*)&local_e8, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_d8, (StringName*)&local_e0);
            if (local_d0 == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( lVar3 = local_e0 != 0 )) goto LAB_00104605;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               LAB_0010461a:lVar3 = *(long*)( this + 8 );
               UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 200 );
               if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xc0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) goto LAB_0010455f;
               uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x410);
               *(undefined8*)( this + 0x420 ) = uVar2;
            }
 else {
               lVar3 = *(long*)( local_d0 + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
                  LAB_00104605:StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               if (lVar3 == 0) goto LAB_0010461a;
            }

            lVar3 = *(long*)( this + 8 );
         }
 else {
            uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x410, uVar1);
            *(undefined8*)( this + 0x420 ) = uVar2;
            lVar3 = *(long*)( this + 8 );
         }

         LAB_0010455f:if (*(char*)( lVar3 + 0x29 ) != '\0') {
            plVar4 = (long*)operator_new(0x18, "");
            *plVar4 = (long)( this + 0x420 );
            plVar4[1] = (long)( this + 0x418 );
            plVar4[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar4;
         }

         this[0x418] = (OpenXRExtensionWrapperExtension)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)local_c8);
      }

      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x420 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010446c. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( this + 0x10 ), 0, 0);
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x0010440d. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x410, UNRECOVERED_JUMPTABLE, 0, 0);
            return;
         }

         goto LAB_0010468d;
      }

   }
 else {
      for (int i = 0; i < 3; i++) {
         local_c8[i] = 0;
      }

      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, this + 0x410, 0, 0, local_c8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_c8[0] != 0) goto LAB_001043ab;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010468d:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* non-virtual thunk to OpenXRExtensionWrapperExtension::on_state_visible() */void OpenXRExtensionWrapperExtension::on_state_visible(OpenXRExtensionWrapperExtension *this) {
   on_state_visible(this + -0x178);
   return;
}
/* OpenXRExtensionWrapperExtension::on_state_focused() */void OpenXRExtensionWrapperExtension::on_state_focused(OpenXRExtensionWrapperExtension *this) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   undefined8 local_e8;
   long local_e0;
   char *local_d8;
   long local_d0;
   int local_c8[4];
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 == (long*)0x0) {
      LAB_0010477b:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x430] == (OpenXRExtensionWrapperExtension)0x0 )) {
         local_c8[0] = 0;
         local_c8[1] = 0;
         local_b8 = (undefined1[16])0x0;
         local_d8 = "_on_state_focused";
         local_c8[2] = 0;
         local_c8[3] = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_98 = 6;
         local_90 = 1;
         local_88 = 0;
         local_78 = 0;
         local_70 = 0;
         local_60 = 0;
         local_d0 = 0x11;
         String::parse_latin1((StrRange*)local_c8);
         local_90 = CONCAT44(local_90._4_4_, 8);
         uVar1 = MethodInfo::get_compatibility_hash();
         lVar3 = *(long*)( this + 8 );
         *(undefined8*)( this + 0x438 ) = 0;
         UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd8 );
         if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) {
            local_e8 = 0;
            String::parse_latin1((String*)&local_e8, "OpenXRExtensionWrapperExtension");
            StringName::StringName((StringName*)&local_e0, (String*)&local_e8, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_d8, (StringName*)&local_e0);
            if (local_d0 == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( lVar3 = local_e0 != 0 )) goto LAB_001049d5;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               LAB_001049ea:lVar3 = *(long*)( this + 8 );
               UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 200 );
               if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xc0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) goto LAB_0010492f;
               uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x428);
               *(undefined8*)( this + 0x438 ) = uVar2;
            }
 else {
               lVar3 = *(long*)( local_d0 + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
                  LAB_001049d5:StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               if (lVar3 == 0) goto LAB_001049ea;
            }

            lVar3 = *(long*)( this + 8 );
         }
 else {
            uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x428, uVar1);
            *(undefined8*)( this + 0x438 ) = uVar2;
            lVar3 = *(long*)( this + 8 );
         }

         LAB_0010492f:if (*(char*)( lVar3 + 0x29 ) != '\0') {
            plVar4 = (long*)operator_new(0x18, "");
            *plVar4 = (long)( this + 0x438 );
            plVar4[1] = (long)( this + 0x430 );
            plVar4[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar4;
         }

         this[0x430] = (OpenXRExtensionWrapperExtension)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)local_c8);
      }

      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x438 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010483c. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( this + 0x10 ), 0, 0);
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x001047dd. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x428, UNRECOVERED_JUMPTABLE, 0, 0);
            return;
         }

         goto LAB_00104a5d;
      }

   }
 else {
      for (int i = 0; i < 3; i++) {
         local_c8[i] = 0;
      }

      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, this + 0x428, 0, 0, local_c8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_c8[0] != 0) goto LAB_0010477b;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00104a5d:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* non-virtual thunk to OpenXRExtensionWrapperExtension::on_state_focused() */void OpenXRExtensionWrapperExtension::on_state_focused(OpenXRExtensionWrapperExtension *this) {
   on_state_focused(this + -0x178);
   return;
}
/* OpenXRExtensionWrapperExtension::on_state_stopping() */void OpenXRExtensionWrapperExtension::on_state_stopping(OpenXRExtensionWrapperExtension *this) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   undefined8 local_e8;
   long local_e0;
   char *local_d8;
   long local_d0;
   int local_c8[4];
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 == (long*)0x0) {
      LAB_00104b4b:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x448] == (OpenXRExtensionWrapperExtension)0x0 )) {
         local_c8[0] = 0;
         local_c8[1] = 0;
         local_b8 = (undefined1[16])0x0;
         local_d8 = "_on_state_stopping";
         local_c8[2] = 0;
         local_c8[3] = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_98 = 6;
         local_90 = 1;
         local_88 = 0;
         local_78 = 0;
         local_70 = 0;
         local_60 = 0;
         local_d0 = 0x12;
         String::parse_latin1((StrRange*)local_c8);
         local_90 = CONCAT44(local_90._4_4_, 8);
         uVar1 = MethodInfo::get_compatibility_hash();
         lVar3 = *(long*)( this + 8 );
         *(undefined8*)( this + 0x450 ) = 0;
         UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd8 );
         if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) {
            local_e8 = 0;
            String::parse_latin1((String*)&local_e8, "OpenXRExtensionWrapperExtension");
            StringName::StringName((StringName*)&local_e0, (String*)&local_e8, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_d8, (StringName*)&local_e0);
            if (local_d0 == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( lVar3 = local_e0 != 0 )) goto LAB_00104da5;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               LAB_00104dba:lVar3 = *(long*)( this + 8 );
               UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 200 );
               if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xc0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) goto LAB_00104cff;
               uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x440);
               *(undefined8*)( this + 0x450 ) = uVar2;
            }
 else {
               lVar3 = *(long*)( local_d0 + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
                  LAB_00104da5:StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               if (lVar3 == 0) goto LAB_00104dba;
            }

            lVar3 = *(long*)( this + 8 );
         }
 else {
            uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x440, uVar1);
            *(undefined8*)( this + 0x450 ) = uVar2;
            lVar3 = *(long*)( this + 8 );
         }

         LAB_00104cff:if (*(char*)( lVar3 + 0x29 ) != '\0') {
            plVar4 = (long*)operator_new(0x18, "");
            *plVar4 = (long)( this + 0x450 );
            plVar4[1] = (long)( this + 0x448 );
            plVar4[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar4;
         }

         this[0x448] = (OpenXRExtensionWrapperExtension)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)local_c8);
      }

      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x450 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x00104c0c. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( this + 0x10 ), 0, 0);
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00104bad. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x440, UNRECOVERED_JUMPTABLE, 0, 0);
            return;
         }

         goto LAB_00104e2d;
      }

   }
 else {
      for (int i = 0; i < 3; i++) {
         local_c8[i] = 0;
      }

      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, this + 0x440, 0, 0, local_c8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_c8[0] != 0) goto LAB_00104b4b;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00104e2d:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* non-virtual thunk to OpenXRExtensionWrapperExtension::on_state_stopping() */void OpenXRExtensionWrapperExtension::on_state_stopping(OpenXRExtensionWrapperExtension *this) {
   on_state_stopping(this + -0x178);
   return;
}
/* OpenXRExtensionWrapperExtension::on_state_loss_pending() */void OpenXRExtensionWrapperExtension::on_state_loss_pending(OpenXRExtensionWrapperExtension *this) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   undefined8 local_e8;
   long local_e0;
   char *local_d8;
   long local_d0;
   int local_c8[4];
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 == (long*)0x0) {
      LAB_00104f1b:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x460] == (OpenXRExtensionWrapperExtension)0x0 )) {
         local_c8[0] = 0;
         local_c8[1] = 0;
         local_b8 = (undefined1[16])0x0;
         local_d8 = "_on_state_loss_pending";
         local_c8[2] = 0;
         local_c8[3] = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_98 = 6;
         local_90 = 1;
         local_88 = 0;
         local_78 = 0;
         local_70 = 0;
         local_60 = 0;
         local_d0 = 0x16;
         String::parse_latin1((StrRange*)local_c8);
         local_90 = CONCAT44(local_90._4_4_, 8);
         uVar1 = MethodInfo::get_compatibility_hash();
         lVar3 = *(long*)( this + 8 );
         *(undefined8*)( this + 0x468 ) = 0;
         UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd8 );
         if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) {
            local_e8 = 0;
            String::parse_latin1((String*)&local_e8, "OpenXRExtensionWrapperExtension");
            StringName::StringName((StringName*)&local_e0, (String*)&local_e8, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_d8, (StringName*)&local_e0);
            if (local_d0 == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( lVar3 = local_e0 != 0 )) goto LAB_00105175;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               LAB_0010518a:lVar3 = *(long*)( this + 8 );
               UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 200 );
               if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xc0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) goto LAB_001050cf;
               uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x458);
               *(undefined8*)( this + 0x468 ) = uVar2;
            }
 else {
               lVar3 = *(long*)( local_d0 + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
                  LAB_00105175:StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               if (lVar3 == 0) goto LAB_0010518a;
            }

            lVar3 = *(long*)( this + 8 );
         }
 else {
            uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x458, uVar1);
            *(undefined8*)( this + 0x468 ) = uVar2;
            lVar3 = *(long*)( this + 8 );
         }

         LAB_001050cf:if (*(char*)( lVar3 + 0x29 ) != '\0') {
            plVar4 = (long*)operator_new(0x18, "");
            *plVar4 = (long)( this + 0x468 );
            plVar4[1] = (long)( this + 0x460 );
            plVar4[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar4;
         }

         this[0x460] = (OpenXRExtensionWrapperExtension)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)local_c8);
      }

      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x468 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x00104fdc. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( this + 0x10 ), 0, 0);
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00104f7d. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x458, UNRECOVERED_JUMPTABLE, 0, 0);
            return;
         }

         goto LAB_001051fd;
      }

   }
 else {
      for (int i = 0; i < 3; i++) {
         local_c8[i] = 0;
      }

      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, this + 0x458, 0, 0, local_c8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_c8[0] != 0) goto LAB_00104f1b;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001051fd:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* non-virtual thunk to OpenXRExtensionWrapperExtension::on_state_loss_pending() */void OpenXRExtensionWrapperExtension::on_state_loss_pending(OpenXRExtensionWrapperExtension *this) {
   on_state_loss_pending(this + -0x178);
   return;
}
/* OpenXRExtensionWrapperExtension::on_state_exiting() */void OpenXRExtensionWrapperExtension::on_state_exiting(OpenXRExtensionWrapperExtension *this) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   undefined8 local_e8;
   long local_e0;
   char *local_d8;
   long local_d0;
   int local_c8[4];
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 == (long*)0x0) {
      LAB_001052eb:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x478] == (OpenXRExtensionWrapperExtension)0x0 )) {
         local_c8[0] = 0;
         local_c8[1] = 0;
         local_b8 = (undefined1[16])0x0;
         local_d8 = "_on_state_exiting";
         local_c8[2] = 0;
         local_c8[3] = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_98 = 6;
         local_90 = 1;
         local_88 = 0;
         local_78 = 0;
         local_70 = 0;
         local_60 = 0;
         local_d0 = 0x11;
         String::parse_latin1((StrRange*)local_c8);
         local_90 = CONCAT44(local_90._4_4_, 8);
         uVar1 = MethodInfo::get_compatibility_hash();
         lVar3 = *(long*)( this + 8 );
         *(undefined8*)( this + 0x480 ) = 0;
         UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd8 );
         if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) {
            local_e8 = 0;
            String::parse_latin1((String*)&local_e8, "OpenXRExtensionWrapperExtension");
            StringName::StringName((StringName*)&local_e0, (String*)&local_e8, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_d8, (StringName*)&local_e0);
            if (local_d0 == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( lVar3 = local_e0 != 0 )) goto LAB_00105545;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               LAB_0010555a:lVar3 = *(long*)( this + 8 );
               UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 200 );
               if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xc0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) goto LAB_0010549f;
               uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x470);
               *(undefined8*)( this + 0x480 ) = uVar2;
            }
 else {
               lVar3 = *(long*)( local_d0 + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
                  LAB_00105545:StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               if (lVar3 == 0) goto LAB_0010555a;
            }

            lVar3 = *(long*)( this + 8 );
         }
 else {
            uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x470, uVar1);
            *(undefined8*)( this + 0x480 ) = uVar2;
            lVar3 = *(long*)( this + 8 );
         }

         LAB_0010549f:if (*(char*)( lVar3 + 0x29 ) != '\0') {
            plVar4 = (long*)operator_new(0x18, "");
            *plVar4 = (long)( this + 0x480 );
            plVar4[1] = (long)( this + 0x478 );
            plVar4[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar4;
         }

         this[0x478] = (OpenXRExtensionWrapperExtension)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)local_c8);
      }

      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x480 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x001053ac. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( this + 0x10 ), 0, 0);
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x0010534d. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x470, UNRECOVERED_JUMPTABLE, 0, 0);
            return;
         }

         goto LAB_001055cd;
      }

   }
 else {
      for (int i = 0; i < 3; i++) {
         local_c8[i] = 0;
      }

      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, this + 0x470, 0, 0, local_c8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_c8[0] != 0) goto LAB_001052eb;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001055cd:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* non-virtual thunk to OpenXRExtensionWrapperExtension::on_state_exiting() */void OpenXRExtensionWrapperExtension::on_state_exiting(OpenXRExtensionWrapperExtension *this) {
   on_state_exiting(this + -0x178);
   return;
}
/* OpenXRExtensionWrapperExtension::get_viewport_composition_layer_extension_properties(List<PropertyInfo,
   DefaultAllocator>*) */void OpenXRExtensionWrapperExtension::get_viewport_composition_layer_extension_properties(OpenXRExtensionWrapperExtension *this, List *param_1) {
   long lVar1;
   char cVar2;
   int iVar3;
   undefined4 uVar4;
   int *piVar5;
   undefined1(*pauVar6)[16];
   undefined8 uVar7;
   long lVar8;
   long *plVar9;
   code *pcVar10;
   int iVar11;
   uint uVar12;
   long in_FS_OFFSET;
   Array *local_158;
   Array local_130[8];
   long local_128;
   long local_120;
   char *local_118;
   long local_110[5];
   int local_e8;
   undefined4 uStack_e4;
   undefined4 local_e0;
   undefined4 uStack_dc;
   undefined1 local_d8[16];
   long local_c8;
   undefined8 local_c0;
   undefined8 local_b8;
   undefined8 local_b0;
   undefined8 local_a8;
   undefined8 local_98;
   ulong local_90;
   undefined8 local_80;
   int local_78[8];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array(local_130);
   local_58 = 0;
   local_e8 = 0;
   uStack_e4 = 0;
   local_50 = (undefined1[16])0x0;
   uVar12 = (uint)local_130;
   Array::set_typed(uVar12, (StringName*)&DAT_0000001b, (Variant*)&local_e8);
   if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_e4, local_e8) != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar9 = *(long**)( this + 0x98 );
   if (plVar9 == (long*)0x0) {
      LAB_00105743:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x4d8] == (OpenXRExtensionWrapperExtension)0x0 )) {
         local_118 = "_get_viewport_composition_layer_extension_properties";
         local_d8 = (undefined1[16])0x0;
         local_e8 = 0;
         uStack_e4 = 0;
         local_e0 = 0;
         uStack_dc = 0;
         local_c8 = 0;
         local_c0 = 0;
         local_b8 = 6;
         local_b0 = 1;
         local_a8 = 0;
         local_98 = 0;
         local_90 = 0;
         local_80 = 0;
         local_110[0] = 0x34;
         String::parse_latin1((StrRange*)&local_e8);
         local_b0 = CONCAT44(local_b0._4_4_, 8);
         GetTypeInfo<TypedArray<Dictionary>,void>::get_class_info((GetTypeInfo<TypedArray<Dictionary>,void>*)&local_118);
         PropertyInfo::operator =((PropertyInfo*)&local_e0, (PropertyInfo*)&local_118);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_118);
         local_90 = local_90 & 0xffffffff00000000;
         uVar4 = MethodInfo::get_compatibility_hash();
         *(undefined8*)( this + 0x4e0 ) = 0;
         lVar8 = *(long*)( this + 8 );
         pcVar10 = *(code**)( lVar8 + 0xd8 );
         if (( ( pcVar10 == (code*)0x0 ) || ( *(long*)( lVar8 + 0xe0 ) == 0 ) ) && ( pcVar10 = *(code**)( lVar8 + 0xd0 ) ),pcVar10 == (code*)0x0) {
            local_128 = 0;
            String::parse_latin1((String*)&local_128, "OpenXRExtensionWrapperExtension");
            StringName::StringName((StringName*)&local_120, (String*)&local_128, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_118, (StringName*)&local_120);
            if (local_110[0] == 0) {
               lVar8 = 0;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_110);
               if (StringName::configured != '\0') goto LAB_00105dc7;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
               LAB_00105de7:lVar8 = *(long*)( this + 8 );
               pcVar10 = *(code**)( lVar8 + 200 );
               if (( ( pcVar10 == (code*)0x0 ) || ( *(long*)( lVar8 + 0xe0 ) == 0 ) ) && ( pcVar10 = *(code**)( lVar8 + 0xc0 ) ),pcVar10 == (code*)0x0) goto LAB_00105cd6;
               uVar7 = ( *pcVar10 )(*(undefined8*)( lVar8 + 0xa0 ), this + 0x4d0);
               *(undefined8*)( this + 0x4e0 ) = uVar7;
            }
 else {
               lVar8 = *(long*)( local_110[0] + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_110);
               if (StringName::configured != '\0') {
                  LAB_00105dc7:if (local_120 != 0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
               if (lVar8 == 0) goto LAB_00105de7;
            }

            lVar8 = *(long*)( this + 8 );
         }
 else {
            uVar7 = ( *pcVar10 )(*(undefined8*)( lVar8 + 0xa0 ), this + 0x4d0, uVar4);
            *(undefined8*)( this + 0x4e0 ) = uVar7;
            lVar8 = *(long*)( this + 8 );
         }

         LAB_00105cd6:if (*(char*)( lVar8 + 0x29 ) != '\0') {
            plVar9 = (long*)operator_new(0x18, "");
            *plVar9 = (long)( this + 0x4e0 );
            plVar9[1] = (long)( this + 0x4d8 );
            plVar9[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar9;
         }

         this[0x4d8] = (OpenXRExtensionWrapperExtension)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_e8);
      }

      if (*(long*)( this + 0x4e0 ) == 0) goto LAB_00105758;
      Array::Array((Array*)&local_120);
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( this + 0x4e0 ) )(*(undefined8*)( this + 0x10 ), 0, (Array*)&local_120);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x4d0, *(undefined8*)( this + 0x4e0 ), 0, (Array*)&local_120);
      }

      Array::Array((Array*)&local_e8);
      local_58 = 0;
      local_118 = (char*)0x0;
      local_50 = (undefined1[16])0x0;
      Array::set_typed((uint)(Array*)&local_e8, (StringName*)&DAT_0000001b, (Variant*)&local_118);
      if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
         StringName::unref();
      }

      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }

      cVar2 = Array::is_same_typed((Array*)&local_e8);
      if (cVar2 == '\0') {
         Array::assign((Array*)&local_e8);
      }
 else {
         Array::_ref((Array*)&local_e8);
      }

      Array::operator =(local_130, (Array*)&local_e8);
      Array::~Array((Array*)&local_e8);
      Array::~Array((Array*)&local_120);
   }
 else {
      local_e8 = 0;
      uStack_e4 = 0;
      local_e0 = 0;
      ( **(code**)( *plVar9 + 0x60 ) )(local_78, plVar9, this + 0x4d0, 0, 0, (Array*)&local_e8);
      if (local_e8 != 0) {
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00105743;
      }

      Variant::operator_cast_to_Array((Variant*)&local_120);
      Array::Array((Array*)&local_118);
      local_58 = 0;
      local_128 = 0;
      local_50 = (undefined1[16])0x0;
      Array::set_typed((uint)(Array*)&local_118, (StringName*)&DAT_0000001b, (Variant*)&local_128);
      if (( StringName::configured != '\0' ) && ( local_128 != 0 )) {
         StringName::unref();
      }

      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }

      local_158 = (Array*)&local_120;
      cVar2 = Array::is_same_typed((Array*)&local_118);
      if (cVar2 == '\0') {
         Array::assign((Array*)&local_118);
      }
 else {
         Array::_ref((Array*)&local_118);
      }

      Array::~Array(local_158);
      Array::operator =(local_130, (Array*)&local_118);
      Array::~Array((Array*)&local_118);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   for (iVar11 = 0; iVar3 = Array::size(),iVar11 < iVar3; iVar11 = iVar11 + 1) {
      Array::operator [](uVar12);
      Variant::operator_cast_to_Dictionary((Variant*)&local_118);
      PropertyInfo::from_dict((Dictionary*)&local_e8);
      if (*(long*)param_1 == 0) {
         pauVar6 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])param_1 = pauVar6;
         *(undefined4*)pauVar6[1] = 0;
         *pauVar6 = (undefined1[16])0x0;
      }

      piVar5 = (int*)operator_new(0x48, DefaultAllocator::alloc);
      piVar5[8] = 0;
      piVar5[9] = 0;
      *(undefined1(*) [16])( piVar5 + 2 ) = (undefined1[16])0x0;
      *piVar5 = 0;
      piVar5[6] = 0;
      piVar5[10] = 6;
      piVar5[0x10] = 0;
      piVar5[0x11] = 0;
      *(undefined1(*) [16])( piVar5 + 0xc ) = (undefined1[16])0x0;
      *piVar5 = local_e8;
      if (CONCAT44(uStack_dc, local_e0) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( piVar5 + 2 ), (CowData*)&local_e0);
      }

      StringName::operator =((StringName*)( piVar5 + 4 ), (StringName*)local_d8);
      piVar5[6] = local_d8._8_4_;
      if (*(long*)( piVar5 + 8 ) != local_c8) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( piVar5 + 8 ), (CowData*)&local_c8);
      }

      lVar1 = local_c8;
      piVar5[10] = (int)local_c0;
      plVar9 = *(long**)param_1;
      lVar8 = plVar9[1];
      piVar5[0xc] = 0;
      piVar5[0xd] = 0;
      *(long**)( piVar5 + 0x10 ) = plVar9;
      *(long*)( piVar5 + 0xe ) = lVar8;
      if (lVar8 != 0) {
         *(int**)( lVar8 + 0x30 ) = piVar5;
      }

      plVar9[1] = (long)piVar5;
      if (*plVar9 == 0) {
         *plVar9 = (long)piVar5;
      }

      *(int*)( plVar9 + 2 ) = (int)plVar9[2] + 1;
      if (local_c8 != 0) {
         LOCK();
         plVar9 = (long*)( local_c8 + -0x10 );
         *plVar9 = *plVar9 + -1;
         UNLOCK();
         if (*plVar9 == 0) {
            local_c8 = 0;
            Memory::free_static((void*)( lVar1 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_d8._0_8_ != 0 )) {
         StringName::unref();
      }

      if (CONCAT44(uStack_dc, local_e0) != 0) {
         LOCK();
         plVar9 = (long*)( CONCAT44(uStack_dc, local_e0) + -0x10 );
         *plVar9 = *plVar9 + -1;
         UNLOCK();
         if (*plVar9 == 0) {
            lVar8 = CONCAT44(uStack_dc, local_e0);
            local_e0 = 0;
            uStack_dc = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      Dictionary::~Dictionary((Dictionary*)&local_118);
   }

   LAB_00105758:Array::~Array(local_130);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* non-virtual thunk to
   OpenXRExtensionWrapperExtension::get_viewport_composition_layer_extension_properties(List<PropertyInfo,
   DefaultAllocator>*) */void OpenXRExtensionWrapperExtension::get_viewport_composition_layer_extension_properties(OpenXRExtensionWrapperExtension *this, List *param_1) {
   get_viewport_composition_layer_extension_properties(this + -0x178, param_1);
   return;
}
/* OpenXRExtensionWrapperExtension::get_viewport_composition_layer_extension_property_defaults() */void OpenXRExtensionWrapperExtension::get_viewport_composition_layer_extension_property_defaults(void) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *pcVar5;
   long in_RSI;
   Dictionary *in_RDI;
   long in_FS_OFFSET;
   undefined8 local_108;
   long local_100;
   char *local_f8;
   long local_f0;
   long local_e8;
   long local_d8;
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary(in_RDI);
   plVar4 = *(long**)( in_RSI + 0x98 );
   if (plVar4 != (long*)0x0) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, in_RSI + 0x4e8, 0, 0, local_c8);
      if (local_c8[0] == 0) {
         Variant::operator_cast_to_Dictionary((Variant*)&local_f8);
         Dictionary::operator =(in_RDI, (Dictionary*)&local_f8);
         Dictionary::~Dictionary((Dictionary*)&local_f8);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00105f6c;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( in_RSI + 8 ) != 0 ) && ( *(char*)( in_RSI + 0x4f0 ) == '\0' )) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_b8 = (undefined1[16])0x0;
      local_f8 = "_get_viewport_composition_layer_extension_property_defaults";
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
      local_f0 = 0x3b;
      String::parse_latin1((StrRange*)local_c8);
      local_90 = CONCAT44(local_90._4_4_, 8);
      GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void>*)&local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)&local_f8);
      lVar3 = local_d8;
      if (local_d8 != 0) {
         LOCK();
         plVar4 = (long*)( local_d8 + -0x10 );
         *plVar4 = *plVar4 + -1;
         UNLOCK();
         if (*plVar4 == 0) {
            local_d8 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_e8 != 0 )) {
         StringName::unref();
      }

      lVar3 = local_f0;
      if (local_f0 != 0) {
         LOCK();
         plVar4 = (long*)( local_f0 + -0x10 );
         *plVar4 = *plVar4 + -1;
         UNLOCK();
         if (*plVar4 == 0) {
            local_f0 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      local_70 = local_70 & 0xffffffff00000000;
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar3 = *(long*)( in_RSI + 8 );
      *(undefined8*)( in_RSI + 0x4f8 ) = 0;
      pcVar5 = *(code**)( lVar3 + 0xd8 );
      if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xd0 ) ),pcVar5 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "OpenXRExtensionWrapperExtension");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
         if (local_f0 == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_f0);
            if (( StringName::configured != '\0' ) && ( lVar3 = local_100 != 0 )) goto LAB_001062bf;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_001062d4:lVar3 = *(long*)( in_RSI + 8 );
            pcVar5 = *(code**)( lVar3 + 200 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_0010620b;
            uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), in_RSI + 0x4e8);
            *(undefined8*)( in_RSI + 0x4f8 ) = uVar2;
         }
 else {
            lVar3 = *(long*)( local_f0 + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_001062bf:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar3 == 0) goto LAB_001062d4;
         }

         lVar3 = *(long*)( in_RSI + 8 );
      }
 else {
         uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), in_RSI + 0x4e8, uVar1);
         *(undefined8*)( in_RSI + 0x4f8 ) = uVar2;
         lVar3 = *(long*)( in_RSI + 8 );
      }

      LAB_0010620b:if (*(char*)( lVar3 + 0x29 ) != '\0') {
         plVar4 = (long*)operator_new(0x18, "");
         *plVar4 = in_RSI + 0x4f8;
         plVar4[1] = in_RSI + 0x4f0;
         plVar4[2] = *(long*)( in_RSI + 0x168 );
         *(long**)( in_RSI + 0x168 ) = plVar4;
      }

      *(undefined1*)( in_RSI + 0x4f0 ) = 1;
      MethodInfo::~MethodInfo((MethodInfo*)local_c8);
   }

   if (*(long*)( in_RSI + 0x4f8 ) != 0) {
      Dictionary::Dictionary((Dictionary*)&local_f8);
      pcVar5 = *(code**)( *(long*)( in_RSI + 8 ) + 0xe0 );
      if (pcVar5 == (code*)0x0) {
         ( **(code**)( in_RSI + 0x4f8 ) )(*(undefined8*)( in_RSI + 0x10 ), 0, (Dictionary*)&local_f8);
      }
 else {
         ( *pcVar5 )(*(undefined8*)( in_RSI + 0x10 ), in_RSI + 0x4e8, *(undefined8*)( in_RSI + 0x4f8 ), 0, (Dictionary*)&local_f8);
      }

      Dictionary::Dictionary((Dictionary*)local_c8, (Dictionary*)&local_f8);
      Dictionary::operator =(in_RDI, (Dictionary*)local_c8);
      Dictionary::~Dictionary((Dictionary*)local_c8);
      Dictionary::~Dictionary((Dictionary*)&local_f8);
   }

   LAB_00105f6c:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* non-virtual thunk to
   OpenXRExtensionWrapperExtension::get_viewport_composition_layer_extension_property_defaults() */void OpenXRExtensionWrapperExtension::get_viewport_composition_layer_extension_property_defaults(OpenXRExtensionWrapperExtension *this) {
   get_viewport_composition_layer_extension_property_defaults();
   return;
}
/* Vector<int>::push_back(int) [clone .isra.0] */void Vector<int>::push_back(Vector<int> *this, int param_1) {
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
/* OpenXRExtensionWrapperExtension::_bind_methods() */void OpenXRExtensionWrapperExtension::_bind_methods(void) {
   long lVar1;
   code *pcVar2;
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
   undefined8 uVar31;
   MethodBind *pMVar32;
   long *plVar33;
   long lVar34;
   long in_FS_OFFSET;
   long local_128;
   long local_120;
   long local_118;
   long local_110;
   Vector<String> local_108[8];
   undefined8 local_100;
   char *local_f8;
   undefined1 local_f0[16];
   int local_e0;
   long local_d8;
   undefined4 local_d0;
   char *local_c8;
   undefined8 local_c0;
   undefined1 local_b8[16];
   undefined8 local_a8;
   long local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88[2];
   undefined8 local_78;
   ulong local_70;
   Vector<int> local_68[8];
   undefined8 local_60;
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_f0._8_8_ = local_f0._0_8_;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_b8._0_8_ = 0;
   local_b8._8_8_ = 0;
   local_100 = 0;
   local_f8 = "_get_requested_extensions";
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x19;
   String::parse_latin1((StrRange*)&local_c8);
   local_90 = CONCAT44(local_90._4_4_, 8);
   GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void>*)&local_f8);
   uVar31 = local_b8._0_8_;
   local_c0 = CONCAT44(local_c0._4_4_, local_f8._0_4_);
   if (local_b8._0_8_ != local_f0._0_8_) {
      if (local_b8._0_8_ != 0) {
         LOCK();
         plVar33 = (long*)( local_b8._0_8_ + -0x10 );
         *plVar33 = *plVar33 + -1;
         UNLOCK();
         if (*plVar33 == 0) {
            local_b8._0_8_ = 0;
            Memory::free_static((void*)( uVar31 + -0x10 ), false);
         }

      }

      local_b8._0_8_ = local_f0._0_8_;
      local_f0._0_8_ = 0;
   }

   if (local_b8._8_8_ != local_f0._8_8_) {
      StringName::unref();
      local_b8._8_8_ = local_f0._8_8_;
      local_f0._8_8_ = 0;
   }

   lVar34 = local_a0;
   lVar1 = local_d8;
   local_a8 = CONCAT44(local_a8._4_4_, local_e0);
   if (local_a0 == local_d8) {
      local_98 = CONCAT44(local_98._4_4_, local_d0);
      if (local_a0 != 0) {
         LOCK();
         plVar33 = (long*)( local_a0 + -0x10 );
         *plVar33 = *plVar33 + -1;
         UNLOCK();
         if (*plVar33 == 0) {
            local_d8 = 0;
            Memory::free_static((void*)( lVar1 + -0x10 ), false);
         }

      }

   }
 else {
      if (local_a0 != 0) {
         LOCK();
         plVar33 = (long*)( local_a0 + -0x10 );
         *plVar33 = *plVar33 + -1;
         UNLOCK();
         if (*plVar33 == 0) {
            local_a0 = 0;
            Memory::free_static((void*)( lVar34 + -0x10 ), false);
         }

      }

      local_a0 = local_d8;
      local_98 = CONCAT44(local_98._4_4_, local_d0);
   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_f0._0_8_ = 0;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   local_70 = local_70 & 0xffffffff00000000;
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_100 = 0;
   local_f8 = (char*)0x0;
   local_c8 = "next_pointer";
   local_c0 = 0xc;
   String::parse_latin1((StrRange*)&local_f8);
   local_c8 = (char*)0x0;
   if (local_f8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_f8);
   }

   Vector<String>::push_back(local_108, (StrRange*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_set_system_properties_and_get_next_pointer";
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x2b;
   String::parse_latin1((StrRange*)&local_c8);
   local_90 = CONCAT44(local_90._4_4_, 8);
   GetTypeInfo<unsigned_long,void>::get_class_info((GetTypeInfo<unsigned_long,void>*)&local_f8);
   PropertyInfo::operator =((PropertyInfo*)&local_c0, (PropertyInfo*)&local_f8);
   lVar1 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar33 = (long*)( local_d8 + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         auVar19._8_8_ = 0;
         auVar19._0_8_ = local_f0._8_8_;
         local_f0 = auVar19 << 0x40;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   local_70 = CONCAT44(local_70._4_4_, 8);
   GetTypeInfo<GDExtensionPtr<void>,void>::get_class_info((GetTypeInfo<GDExtensionPtr<void>,void>*)&local_f8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_f8);
   lVar1 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar33 = (long*)( local_d8 + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         auVar20._8_8_ = 0;
         auVar20._0_8_ = local_f0._8_8_;
         local_f0 = auVar20 << 0x40;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_68, 0);
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_100 = 0;
   local_f8 = (char*)0x0;
   local_c8 = "next_pointer";
   local_c0 = 0xc;
   String::parse_latin1((StrRange*)&local_f8);
   local_c8 = (char*)0x0;
   if (local_f8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_f8);
   }

   Vector<String>::push_back(local_108, (StrRange*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   local_b8._0_8_ = 0;
   local_b8._8_8_ = 0;
   local_f8 = "_set_instance_create_info_and_get_next_pointer";
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x2e;
   String::parse_latin1((StrRange*)&local_c8);
   local_90 = CONCAT44(local_90._4_4_, 8);
   GetTypeInfo<unsigned_long,void>::get_class_info((GetTypeInfo<unsigned_long,void>*)&local_f8);
   uVar31 = local_b8._0_8_;
   local_c0 = CONCAT44(local_c0._4_4_, local_f8._0_4_);
   if (local_b8._0_8_ != local_f0._0_8_) {
      if (local_b8._0_8_ != 0) {
         LOCK();
         plVar33 = (long*)( local_b8._0_8_ + -0x10 );
         *plVar33 = *plVar33 + -1;
         UNLOCK();
         if (*plVar33 == 0) {
            local_b8._0_8_ = 0;
            Memory::free_static((void*)( uVar31 + -0x10 ), false);
         }

      }

      local_b8._0_8_ = local_f0._0_8_;
      local_f0._0_8_ = 0;
   }

   if (local_b8._8_8_ != local_f0._8_8_) {
      StringName::unref();
      local_b8._8_8_ = local_f0._8_8_;
      local_f0._8_8_ = 0;
   }

   lVar34 = local_a0;
   lVar1 = local_d8;
   local_a8 = CONCAT44(local_a8._4_4_, local_e0);
   if (local_a0 == local_d8) {
      local_98 = CONCAT44(local_98._4_4_, local_d0);
      if (local_a0 != 0) {
         LOCK();
         plVar33 = (long*)( local_a0 + -0x10 );
         *plVar33 = *plVar33 + -1;
         UNLOCK();
         if (*plVar33 == 0) {
            local_d8 = 0;
            Memory::free_static((void*)( lVar1 + -0x10 ), false);
         }

      }

   }
 else {
      if (local_a0 != 0) {
         LOCK();
         plVar33 = (long*)( local_a0 + -0x10 );
         *plVar33 = *plVar33 + -1;
         UNLOCK();
         if (*plVar33 == 0) {
            local_a0 = 0;
            Memory::free_static((void*)( lVar34 + -0x10 ), false);
         }

      }

      local_a0 = local_d8;
      local_98 = CONCAT44(local_98._4_4_, local_d0);
   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_f0._0_8_ = 0;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   local_70 = CONCAT44(local_70._4_4_, 8);
   GetTypeInfo<GDExtensionPtr<void>,void>::get_class_info((GetTypeInfo<GDExtensionPtr<void>,void>*)&local_f8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_f8);
   lVar1 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar33 = (long*)( local_d8 + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_f0._0_8_ = 0;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_68, 0);
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_100 = 0;
   local_f8 = (char*)0x0;
   local_c8 = "next_pointer";
   local_c0 = 0xc;
   String::parse_latin1((StrRange*)&local_f8);
   local_c8 = (char*)0x0;
   if (local_f8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_f8);
   }

   Vector<String>::push_back(local_108, (StrRange*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   local_b8._0_8_ = 0;
   local_b8._8_8_ = 0;
   local_f8 = "_set_session_create_and_get_next_pointer";
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x28;
   String::parse_latin1((StrRange*)&local_c8);
   local_90 = CONCAT44(local_90._4_4_, 8);
   GetTypeInfo<unsigned_long,void>::get_class_info((GetTypeInfo<unsigned_long,void>*)&local_f8);
   uVar31 = local_b8._0_8_;
   local_c0 = CONCAT44(local_c0._4_4_, local_f8._0_4_);
   if (local_b8._0_8_ != local_f0._0_8_) {
      if (local_b8._0_8_ != 0) {
         LOCK();
         plVar33 = (long*)( local_b8._0_8_ + -0x10 );
         *plVar33 = *plVar33 + -1;
         UNLOCK();
         if (*plVar33 == 0) {
            local_b8._0_8_ = 0;
            Memory::free_static((void*)( uVar31 + -0x10 ), false);
         }

      }

      local_b8._0_8_ = local_f0._0_8_;
      local_f0._0_8_ = 0;
   }

   if (local_b8._8_8_ != local_f0._8_8_) {
      StringName::unref();
      local_b8._8_8_ = local_f0._8_8_;
      local_f0._8_8_ = 0;
   }

   lVar34 = local_a0;
   lVar1 = local_d8;
   local_a8 = CONCAT44(local_a8._4_4_, local_e0);
   if (local_a0 == local_d8) {
      local_98 = CONCAT44(local_98._4_4_, local_d0);
      if (local_a0 != 0) {
         LOCK();
         plVar33 = (long*)( local_a0 + -0x10 );
         *plVar33 = *plVar33 + -1;
         UNLOCK();
         if (*plVar33 == 0) {
            local_d8 = 0;
            Memory::free_static((void*)( lVar1 + -0x10 ), false);
         }

      }

   }
 else {
      if (local_a0 != 0) {
         LOCK();
         plVar33 = (long*)( local_a0 + -0x10 );
         *plVar33 = *plVar33 + -1;
         UNLOCK();
         if (*plVar33 == 0) {
            local_a0 = 0;
            Memory::free_static((void*)( lVar34 + -0x10 ), false);
         }

      }

      local_a0 = local_d8;
      local_98 = CONCAT44(local_98._4_4_, local_d0);
   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_f0._0_8_ = 0;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   local_70 = CONCAT44(local_70._4_4_, 8);
   GetTypeInfo<GDExtensionPtr<void>,void>::get_class_info((GetTypeInfo<GDExtensionPtr<void>,void>*)&local_f8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_f8);
   lVar1 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar33 = (long*)( local_d8 + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_f0._0_8_ = 0;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_68, 0);
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_100 = 0;
   local_f8 = (char*)0x0;
   local_c8 = "next_pointer";
   local_c0 = 0xc;
   String::parse_latin1((StrRange*)&local_f8);
   local_c8 = (char*)0x0;
   if (local_f8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_f8);
   }

   Vector<String>::push_back(local_108, (StrRange*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   local_b8._0_8_ = 0;
   local_b8._8_8_ = 0;
   local_f8 = "_set_swapchain_create_info_and_get_next_pointer";
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x2f;
   String::parse_latin1((StrRange*)&local_c8);
   local_90 = CONCAT44(local_90._4_4_, 8);
   GetTypeInfo<unsigned_long,void>::get_class_info((GetTypeInfo<unsigned_long,void>*)&local_f8);
   uVar31 = local_b8._0_8_;
   local_c0 = CONCAT44(local_c0._4_4_, local_f8._0_4_);
   if (local_b8._0_8_ != local_f0._0_8_) {
      if (local_b8._0_8_ != 0) {
         LOCK();
         plVar33 = (long*)( local_b8._0_8_ + -0x10 );
         *plVar33 = *plVar33 + -1;
         UNLOCK();
         if (*plVar33 == 0) {
            local_b8._0_8_ = 0;
            Memory::free_static((void*)( uVar31 + -0x10 ), false);
         }

      }

      local_b8._0_8_ = local_f0._0_8_;
      local_f0._0_8_ = 0;
   }

   if (local_b8._8_8_ != local_f0._8_8_) {
      StringName::unref();
      local_b8._8_8_ = local_f0._8_8_;
      local_f0._8_8_ = 0;
   }

   lVar34 = local_a0;
   lVar1 = local_d8;
   local_a8 = CONCAT44(local_a8._4_4_, local_e0);
   if (local_a0 == local_d8) {
      local_98 = CONCAT44(local_98._4_4_, local_d0);
      if (local_a0 != 0) {
         LOCK();
         plVar33 = (long*)( local_a0 + -0x10 );
         *plVar33 = *plVar33 + -1;
         UNLOCK();
         if (*plVar33 == 0) {
            local_d8 = 0;
            Memory::free_static((void*)( lVar1 + -0x10 ), false);
         }

      }

   }
 else {
      if (local_a0 != 0) {
         LOCK();
         plVar33 = (long*)( local_a0 + -0x10 );
         *plVar33 = *plVar33 + -1;
         UNLOCK();
         if (*plVar33 == 0) {
            local_a0 = 0;
            Memory::free_static((void*)( lVar34 + -0x10 ), false);
         }

      }

      local_a0 = local_d8;
      local_98 = CONCAT44(local_98._4_4_, local_d0);
   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_f0._0_8_ = 0;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   local_70 = CONCAT44(local_70._4_4_, 8);
   GetTypeInfo<GDExtensionPtr<void>,void>::get_class_info((GetTypeInfo<GDExtensionPtr<void>,void>*)&local_f8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_f8);
   lVar1 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar33 = (long*)( local_d8 + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_f0._0_8_ = 0;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_68, 0);
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_100 = 0;
   local_f8 = (char*)0x0;
   local_c8 = "hand_index";
   local_c0 = 10;
   String::parse_latin1((StrRange*)&local_f8);
   local_c8 = (char*)0x0;
   if (local_f8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_f8);
   }

   Vector<String>::push_back(local_108, (StrRange*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   local_110 = 0;
   local_c8 = "next_pointer";
   local_c0 = 0xc;
   String::parse_latin1((StrRange*)&local_110);
   local_c8 = (char*)0x0;
   if (local_110 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_110);
   }

   Vector<String>::push_back(local_108, (StrRange*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   local_b8._0_8_ = 0;
   local_b8._8_8_ = 0;
   local_f8 = "_set_hand_joint_locations_and_get_next_pointer";
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x2e;
   String::parse_latin1((StrRange*)&local_c8);
   local_90 = CONCAT44(local_90._4_4_, 8);
   GetTypeInfo<unsigned_long,void>::get_class_info((GetTypeInfo<unsigned_long,void>*)&local_f8);
   uVar31 = local_b8._0_8_;
   local_c0 = CONCAT44(local_c0._4_4_, local_f8._0_4_);
   if (local_b8._0_8_ != local_f0._0_8_) {
      if (local_b8._0_8_ != 0) {
         LOCK();
         plVar33 = (long*)( local_b8._0_8_ + -0x10 );
         *plVar33 = *plVar33 + -1;
         UNLOCK();
         if (*plVar33 == 0) {
            local_b8._0_8_ = 0;
            Memory::free_static((void*)( uVar31 + -0x10 ), false);
         }

      }

      local_b8._0_8_ = local_f0._0_8_;
      local_f0._0_8_ = 0;
   }

   if (local_b8._8_8_ != local_f0._8_8_) {
      StringName::unref();
      local_b8._8_8_ = local_f0._8_8_;
      local_f0._8_8_ = 0;
   }

   lVar34 = local_a0;
   lVar1 = local_d8;
   local_a8 = CONCAT44(local_a8._4_4_, local_e0);
   if (local_a0 == local_d8) {
      local_98 = CONCAT44(local_98._4_4_, local_d0);
      if (local_a0 != 0) {
         LOCK();
         plVar33 = (long*)( local_a0 + -0x10 );
         *plVar33 = *plVar33 + -1;
         UNLOCK();
         if (*plVar33 == 0) {
            local_d8 = 0;
            Memory::free_static((void*)( lVar1 + -0x10 ), false);
         }

      }

   }
 else {
      if (local_a0 != 0) {
         LOCK();
         plVar33 = (long*)( local_a0 + -0x10 );
         *plVar33 = *plVar33 + -1;
         UNLOCK();
         if (*plVar33 == 0) {
            local_a0 = 0;
            Memory::free_static((void*)( lVar34 + -0x10 ), false);
         }

      }

      local_a0 = local_d8;
      local_98 = CONCAT44(local_98._4_4_, local_d0);
   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_f0._0_8_ = 0;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   local_70 = CONCAT44(local_70._4_4_, 8);
   GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_f8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_f8);
   lVar1 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar33 = (long*)( local_d8 + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_f0._0_8_ = 0;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_68, 3);
   GetTypeInfo<GDExtensionPtr<void>,void>::get_class_info((GetTypeInfo<GDExtensionPtr<void>,void>*)&local_f8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_f8);
   lVar1 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar33 = (long*)( local_d8 + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_f0._0_8_ = 0;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_68, 0);
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_100 = 0;
   local_f8 = (char*)0x0;
   local_c8 = "view_index";
   local_c0 = 10;
   String::parse_latin1((StrRange*)&local_f8);
   local_c8 = (char*)0x0;
   if (local_f8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_f8);
   }

   Vector<String>::push_back(local_108, (StrRange*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   local_110 = 0;
   local_c8 = "next_pointer";
   local_c0 = 0xc;
   String::parse_latin1((StrRange*)&local_110);
   local_c8 = (char*)0x0;
   if (local_110 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_110);
   }

   Vector<String>::push_back(local_108, (StrRange*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_set_projection_views_and_get_next_pointer";
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x2a;
   String::parse_latin1((StrRange*)&local_c8);
   local_90 = CONCAT44(local_90._4_4_, 8);
   GetTypeInfo<unsigned_long,void>::get_class_info((GetTypeInfo<unsigned_long,void>*)&local_f8);
   PropertyInfo::operator =((PropertyInfo*)&local_c0, (PropertyInfo*)&local_f8);
   lVar1 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar33 = (long*)( local_d8 + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         auVar23._8_8_ = 0;
         auVar23._0_8_ = local_f0._8_8_;
         local_f0 = auVar23 << 0x40;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   local_70 = CONCAT44(local_70._4_4_, 8);
   GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_f8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_f8);
   lVar1 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar33 = (long*)( local_d8 + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         auVar22._8_8_ = 0;
         auVar22._0_8_ = local_f0._8_8_;
         local_f0 = auVar22 << 0x40;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_68, 3);
   GetTypeInfo<GDExtensionPtr<void>,void>::get_class_info((GetTypeInfo<GDExtensionPtr<void>,void>*)&local_f8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_f8);
   lVar1 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar33 = (long*)( local_d8 + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         auVar21._8_8_ = 0;
         auVar21._0_8_ = local_f0._8_8_;
         local_f0 = auVar21 << 0x40;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_68, 0);
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_get_composition_layer_count";
   local_100 = 0;
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x1c;
   String::parse_latin1((StrRange*)&local_c8);
   local_90 = CONCAT44(local_90._4_4_, 8);
   GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_f8);
   PropertyInfo::operator =((PropertyInfo*)&local_c0, (PropertyInfo*)&local_f8);
   lVar1 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar33 = (long*)( local_d8 + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         auVar24._8_8_ = 0;
         auVar24._0_8_ = local_f0._8_8_;
         local_f0 = auVar24 << 0x40;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   local_70 = CONCAT44(local_70._4_4_, 3);
   local_110 = 0;
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_100 = 0;
   local_f8 = (char*)0x0;
   local_c8 = "index";
   local_c0 = 5;
   String::parse_latin1((StrRange*)&local_f8);
   local_c8 = (char*)0x0;
   if (local_f8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_f8);
   }

   Vector<String>::push_back(local_108, (StrRange*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_get_composition_layer";
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x16;
   String::parse_latin1((StrRange*)&local_c8);
   local_90 = CONCAT44(local_90._4_4_, 8);
   GetTypeInfo<unsigned_long,void>::get_class_info((GetTypeInfo<unsigned_long,void>*)&local_f8);
   PropertyInfo::operator =((PropertyInfo*)&local_c0, (PropertyInfo*)&local_f8);
   lVar1 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar33 = (long*)( local_d8 + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         auVar16._8_8_ = 0;
         auVar16._0_8_ = local_f0._8_8_;
         local_f0 = auVar16 << 0x40;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   local_70 = CONCAT44(local_70._4_4_, 8);
   GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_f8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_f8);
   lVar1 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar33 = (long*)( local_d8 + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         auVar15._8_8_ = 0;
         auVar15._0_8_ = local_f0._8_8_;
         local_f0 = auVar15 << 0x40;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_68, 3);
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_100 = 0;
   local_f8 = (char*)0x0;
   local_c8 = "index";
   local_c0 = 5;
   String::parse_latin1((StrRange*)&local_f8);
   local_c8 = (char*)0x0;
   if (local_f8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_f8);
   }

   Vector<String>::push_back(local_108, (StrRange*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   local_b8._0_8_ = 0;
   local_b8._8_8_ = 0;
   local_f8 = "_get_composition_layer_order";
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x1c;
   String::parse_latin1((StrRange*)&local_c8);
   local_90 = CONCAT44(local_90._4_4_, 8);
   GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_f8);
   uVar31 = local_b8._0_8_;
   local_c0 = CONCAT44(local_c0._4_4_, local_f8._0_4_);
   if (local_b8._0_8_ != local_f0._0_8_) {
      if (local_b8._0_8_ != 0) {
         LOCK();
         plVar33 = (long*)( local_b8._0_8_ + -0x10 );
         *plVar33 = *plVar33 + -1;
         UNLOCK();
         if (*plVar33 == 0) {
            local_b8._0_8_ = 0;
            Memory::free_static((void*)( uVar31 + -0x10 ), false);
         }

      }

      local_b8._0_8_ = local_f0._0_8_;
      local_f0._0_8_ = 0;
   }

   if (local_b8._8_8_ != local_f0._8_8_) {
      StringName::unref();
      local_b8._8_8_ = local_f0._8_8_;
      local_f0._8_8_ = 0;
   }

   lVar34 = local_a0;
   lVar1 = local_d8;
   local_a8 = CONCAT44(local_a8._4_4_, local_e0);
   if (local_a0 == local_d8) {
      local_98 = CONCAT44(local_98._4_4_, local_d0);
      if (local_a0 != 0) {
         LOCK();
         plVar33 = (long*)( local_a0 + -0x10 );
         *plVar33 = *plVar33 + -1;
         UNLOCK();
         if (*plVar33 == 0) {
            local_d8 = 0;
            Memory::free_static((void*)( lVar1 + -0x10 ), false);
         }

      }

   }
 else {
      if (local_a0 != 0) {
         LOCK();
         plVar33 = (long*)( local_a0 + -0x10 );
         *plVar33 = *plVar33 + -1;
         UNLOCK();
         if (*plVar33 == 0) {
            local_a0 = 0;
            Memory::free_static((void*)( lVar34 + -0x10 ), false);
         }

      }

      local_a0 = local_d8;
      local_98 = CONCAT44(local_98._4_4_, local_d0);
   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_f0._0_8_ = 0;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   local_70 = CONCAT44(local_70._4_4_, 3);
   GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_f8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_f8);
   lVar1 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar33 = (long*)( local_d8 + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_f0._0_8_ = 0;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_68, 3);
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_b8._0_8_ = 0;
   local_b8._8_8_ = 0;
   local_f8 = "_get_suggested_tracker_names";
   local_100 = 0;
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x1c;
   String::parse_latin1((StrRange*)&local_c8);
   local_90 = CONCAT44(local_90._4_4_, 8);
   local_f8 = "";
   local_128 = 0;
   local_120 = 0;
   auVar29._8_8_ = 0;
   auVar29._0_8_ = local_f0._8_8_;
   local_f0 = auVar29 << 0x40;
   String::parse_latin1((StrRange*)&local_120);
   local_118 = 0;
   local_f8 = (char*)CONCAT44(local_f8._4_4_, 0x22);
   local_e0 = 0;
   local_d8 = 0;
   local_f0._0_8_ = 0;
   local_f0._8_8_ = 0;
   if (local_120 == 0) {
      LAB_001083fb:local_d0 = 6;
      StringName::operator =((StringName*)( local_f0 + 8 ), (StringName*)&local_128);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_120);
      local_d0 = 6;
      if (local_e0 != 0x11) goto LAB_001083fb;
      StringName::StringName((StringName*)&local_110, (CowData<char32_t>*)&local_d8, false);
      if (local_f0._8_8_ == local_110) {
         if (( StringName::configured != '\0' ) && ( local_110 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_f0._8_8_ = local_110;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   if (( StringName::configured != '\0' ) && ( local_128 != 0 )) {
      StringName::unref();
   }

   uVar31 = local_b8._0_8_;
   local_c0 = CONCAT44(local_c0._4_4_, local_f8._0_4_);
   if (local_b8._0_8_ != local_f0._0_8_) {
      if (local_b8._0_8_ != 0) {
         LOCK();
         plVar33 = (long*)( local_b8._0_8_ + -0x10 );
         *plVar33 = *plVar33 + -1;
         UNLOCK();
         if (*plVar33 == 0) {
            local_b8._0_8_ = 0;
            Memory::free_static((void*)( uVar31 + -0x10 ), false);
         }

      }

      local_b8._0_8_ = local_f0._0_8_;
      local_f0._0_8_ = 0;
   }

   if (local_b8._8_8_ != local_f0._8_8_) {
      StringName::unref();
      local_b8._8_8_ = local_f0._8_8_;
      local_f0._8_8_ = 0;
   }

   lVar34 = local_a0;
   lVar1 = local_d8;
   local_a8 = CONCAT44(local_a8._4_4_, local_e0);
   if (local_a0 == local_d8) {
      local_98 = CONCAT44(local_98._4_4_, local_d0);
      if (local_a0 != 0) {
         LOCK();
         plVar33 = (long*)( local_a0 + -0x10 );
         *plVar33 = *plVar33 + -1;
         UNLOCK();
         if (*plVar33 == 0) {
            local_d8 = 0;
            Memory::free_static((void*)( lVar1 + -0x10 ), false);
         }

      }

   }
 else {
      if (local_a0 != 0) {
         LOCK();
         plVar33 = (long*)( local_a0 + -0x10 );
         *plVar33 = *plVar33 + -1;
         UNLOCK();
         if (*plVar33 == 0) {
            local_a0 = 0;
            Memory::free_static((void*)( lVar34 + -0x10 ), false);
         }

      }

      local_a0 = local_d8;
      local_98 = CONCAT44(local_98._4_4_, local_d0);
   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_f0._0_8_ = 0;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   local_70 = local_70 & 0xffffffff00000000;
   local_110 = 0;
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_on_register_metadata";
   local_100 = 0;
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x15;
   String::parse_latin1((StrRange*)&local_c8);
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_90 = CONCAT44(local_90._4_4_, 8);
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_on_before_instance_created";
   local_100 = 0;
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x1b;
   String::parse_latin1((StrRange*)&local_c8);
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_90 = CONCAT44(local_90._4_4_, 8);
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_100 = 0;
   local_f8 = (char*)0x0;
   local_c8 = "instance";
   local_c0 = 8;
   String::parse_latin1((StrRange*)&local_f8);
   local_c8 = (char*)0x0;
   if (local_f8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_f8);
   }

   Vector<String>::push_back(local_108, (StrRange*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_on_instance_created";
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x14;
   String::parse_latin1((StrRange*)&local_c8);
   local_90 = CONCAT44(local_90._4_4_, 8);
   GetTypeInfo<unsigned_long,void>::get_class_info((GetTypeInfo<unsigned_long,void>*)&local_f8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_f8);
   lVar1 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar33 = (long*)( local_d8 + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         auVar28._8_8_ = 0;
         auVar28._0_8_ = local_f0._8_8_;
         local_f0 = auVar28 << 0x40;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_68, 8);
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_on_instance_destroyed";
   local_100 = 0;
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x16;
   String::parse_latin1((StrRange*)&local_c8);
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_90 = CONCAT44(local_90._4_4_, 8);
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_100 = 0;
   local_f8 = (char*)0x0;
   local_c8 = "session";
   local_c0 = 7;
   String::parse_latin1((StrRange*)&local_f8);
   local_c8 = (char*)0x0;
   if (local_f8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_f8);
   }

   Vector<String>::push_back(local_108, (StrRange*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_on_session_created";
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x13;
   String::parse_latin1((StrRange*)&local_c8);
   local_90 = CONCAT44(local_90._4_4_, 8);
   GetTypeInfo<unsigned_long,void>::get_class_info((GetTypeInfo<unsigned_long,void>*)&local_f8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_f8);
   lVar1 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar33 = (long*)( local_d8 + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         auVar27._8_8_ = 0;
         auVar27._0_8_ = local_f0._8_8_;
         local_f0 = auVar27 << 0x40;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_68, 8);
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_on_process";
   local_100 = 0;
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0xb;
   String::parse_latin1((StrRange*)&local_c8);
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_90 = CONCAT44(local_90._4_4_, 8);
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_on_pre_render";
   local_100 = 0;
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_c8);
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_90 = CONCAT44(local_90._4_4_, 8);
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_on_main_swapchains_created";
   local_100 = 0;
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x1b;
   String::parse_latin1((StrRange*)&local_c8);
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_90 = CONCAT44(local_90._4_4_, 8);
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_100 = 0;
   local_f8 = (char*)0x0;
   local_c8 = "viewport";
   local_c0 = 8;
   String::parse_latin1((StrRange*)&local_f8);
   local_c8 = (char*)0x0;
   if (local_f8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_f8);
   }

   Vector<String>::push_back(local_108, (StrRange*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_on_pre_draw_viewport";
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x15;
   String::parse_latin1((StrRange*)&local_c8);
   local_90 = CONCAT44(local_90._4_4_, 8);
   GetTypeInfo<RID,void>::get_class_info((GetTypeInfo<RID,void>*)&local_f8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_f8);
   lVar1 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar33 = (long*)( local_d8 + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         auVar26._8_8_ = 0;
         auVar26._0_8_ = local_f0._8_8_;
         local_f0 = auVar26 << 0x40;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_68, 0);
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_100 = 0;
   local_f8 = (char*)0x0;
   local_c8 = "viewport";
   local_c0 = 8;
   String::parse_latin1((StrRange*)&local_f8);
   local_c8 = (char*)0x0;
   if (local_f8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_f8);
   }

   Vector<String>::push_back(local_108, (StrRange*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_on_post_draw_viewport";
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x16;
   String::parse_latin1((StrRange*)&local_c8);
   local_90 = CONCAT44(local_90._4_4_, 8);
   GetTypeInfo<RID,void>::get_class_info((GetTypeInfo<RID,void>*)&local_f8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_f8);
   lVar1 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar33 = (long*)( local_d8 + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         auVar25._8_8_ = 0;
         auVar25._0_8_ = local_f0._8_8_;
         local_f0 = auVar25 << 0x40;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_68, 0);
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_on_session_destroyed";
   local_100 = 0;
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x15;
   String::parse_latin1((StrRange*)&local_c8);
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_90 = CONCAT44(local_90._4_4_, 8);
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_on_state_idle";
   local_100 = 0;
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_c8);
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_90 = CONCAT44(local_90._4_4_, 8);
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_on_state_ready";
   local_100 = 0;
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0xf;
   String::parse_latin1((StrRange*)&local_c8);
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_90 = CONCAT44(local_90._4_4_, 8);
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_on_state_synchronized";
   local_100 = 0;
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x16;
   String::parse_latin1((StrRange*)&local_c8);
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_90 = CONCAT44(local_90._4_4_, 8);
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_on_state_visible";
   local_100 = 0;
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x11;
   String::parse_latin1((StrRange*)&local_c8);
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_90 = CONCAT44(local_90._4_4_, 8);
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_on_state_focused";
   local_100 = 0;
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x11;
   String::parse_latin1((StrRange*)&local_c8);
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_90 = CONCAT44(local_90._4_4_, 8);
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_on_state_stopping";
   local_100 = 0;
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x12;
   String::parse_latin1((StrRange*)&local_c8);
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_90 = CONCAT44(local_90._4_4_, 8);
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_on_state_loss_pending";
   local_100 = 0;
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x16;
   String::parse_latin1((StrRange*)&local_c8);
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_90 = CONCAT44(local_90._4_4_, 8);
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_on_state_exiting";
   local_100 = 0;
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x11;
   String::parse_latin1((StrRange*)&local_c8);
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_90 = CONCAT44(local_90._4_4_, 8);
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_100 = 0;
   local_f8 = (char*)0x0;
   local_c8 = "event";
   local_c0 = 5;
   String::parse_latin1((StrRange*)&local_f8);
   local_c8 = (char*)0x0;
   if (local_f8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_f8);
   }

   Vector<String>::push_back(local_108, (StrRange*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_on_event_polled";
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x10;
   String::parse_latin1((StrRange*)&local_c8);
   local_90 = CONCAT44(local_90._4_4_, 8);
   local_128 = 0;
   local_120 = 0;
   local_f8 = "";
   auVar30._8_8_ = 0;
   auVar30._0_8_ = local_f0._8_8_;
   local_f0 = auVar30 << 0x40;
   String::parse_latin1((StrRange*)&local_120);
   local_118 = 0;
   local_f8 = (char*)CONCAT44(local_f8._4_4_, 1);
   local_e0 = 0;
   local_d8 = 0;
   local_f0 = (undefined1[16])0x0;
   if (local_120 == 0) {
      LAB_0010a1ab:local_d0 = 6;
      StringName::operator =((StringName*)( local_f0 + 8 ), (StringName*)&local_128);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_120);
      local_d0 = 6;
      if (local_e0 != 0x11) goto LAB_0010a1ab;
      StringName::StringName((StringName*)&local_110, (CowData<char32_t>*)&local_d8, false);
      if (local_f0._8_8_ == local_110) {
         if (( StringName::configured != '\0' ) && ( local_110 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_f0._8_8_ = local_110;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   if (( StringName::configured != '\0' ) && ( local_128 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::operator =((PropertyInfo*)&local_c0, (PropertyInfo*)&local_f8);
   lVar1 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar33 = (long*)( local_d8 + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         auVar18._8_8_ = 0;
         auVar18._0_8_ = local_f0._8_8_;
         local_f0 = auVar18 << 0x40;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   local_70 = local_70 & 0xffffffff00000000;
   GetTypeInfo<GDExtensionConstPtr<void>,void>::get_class_info((GetTypeInfo<GDExtensionConstPtr<void>,void>*)&local_f8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_f8);
   lVar1 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar33 = (long*)( local_d8 + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         auVar11._8_8_ = 0;
         auVar11._0_8_ = local_f0._8_8_;
         local_f0 = auVar11 << 0x40;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_68, 0);
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_100 = 0;
   local_f8 = (char*)0x0;
   local_c8 = "layer";
   local_c0 = 5;
   String::parse_latin1((StrRange*)&local_f8);
   local_c8 = (char*)0x0;
   if (local_f8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_f8);
   }

   Vector<String>::push_back(local_108, (StrRange*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   local_118 = 0;
   local_c8 = "property_values";
   local_c0 = 0xf;
   String::parse_latin1((StrRange*)&local_118);
   local_c8 = (char*)0x0;
   if (local_118 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_118);
   }

   Vector<String>::push_back(local_108, (StrRange*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   local_110 = 0;
   local_c8 = "next_pointer";
   local_c0 = 0xc;
   String::parse_latin1((StrRange*)&local_110);
   local_c8 = (char*)0x0;
   if (local_110 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_110);
   }

   Vector<String>::push_back(local_108, (StrRange*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_set_viewport_composition_layer_and_get_next_pointer";
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x34;
   String::parse_latin1((StrRange*)&local_c8);
   local_90 = CONCAT44(local_90._4_4_, 8);
   GetTypeInfo<unsigned_long,void>::get_class_info((GetTypeInfo<unsigned_long,void>*)&local_f8);
   PropertyInfo::operator =((PropertyInfo*)&local_c0, (PropertyInfo*)&local_f8);
   lVar1 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar33 = (long*)( local_d8 + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         auVar17._8_8_ = 0;
         auVar17._0_8_ = local_f0._8_8_;
         local_f0 = auVar17 << 0x40;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   local_70 = CONCAT44(local_70._4_4_, 8);
   GetTypeInfo<GDExtensionConstPtr<void>,void>::get_class_info((GetTypeInfo<GDExtensionConstPtr<void>,void>*)&local_f8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_f8);
   lVar1 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar33 = (long*)( local_d8 + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         auVar14._8_8_ = 0;
         auVar14._0_8_ = local_f0._8_8_;
         local_f0 = auVar14 << 0x40;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_68, 0);
   GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void>*)&local_f8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_f8);
   lVar1 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar33 = (long*)( local_d8 + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         auVar13._8_8_ = 0;
         auVar13._0_8_ = local_f0._8_8_;
         local_f0 = auVar13 << 0x40;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_68, 0);
   GetTypeInfo<GDExtensionPtr<void>,void>::get_class_info((GetTypeInfo<GDExtensionPtr<void>,void>*)&local_f8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_f8);
   lVar1 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar33 = (long*)( local_d8 + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         auVar12._8_8_ = 0;
         auVar12._0_8_ = local_f0._8_8_;
         local_f0 = auVar12 << 0x40;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_68, 0);
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_get_viewport_composition_layer_extension_properties";
   local_100 = 0;
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x34;
   String::parse_latin1((StrRange*)&local_c8);
   local_90 = CONCAT44(local_90._4_4_, 8);
   local_128 = 0;
   Variant::get_type_name((StrRange*)&local_120, 0x1b);
   local_118 = 0;
   local_f8 = (char*)CONCAT44(local_f8._4_4_, 0x1c);
   local_e0 = 0x1f;
   local_d8 = 0;
   local_f0 = (undefined1[16])0x0;
   if (local_120 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_120);
      local_d0 = 6;
      if (local_e0 == 0x11) {
         StringName::StringName((StringName*)&local_110, (CowData<char32_t>*)&local_d8, false);
         if (local_f0._8_8_ == local_110) {
            if (( StringName::configured != '\0' ) && ( local_110 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_f0._8_8_ = local_110;
         }

         goto LAB_0010a8ca;
      }

   }

   local_d0 = 6;
   StringName::operator =((StringName*)( local_f0 + 8 ), (StringName*)&local_128);
   LAB_0010a8ca:CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   if (( StringName::configured != '\0' ) && ( local_128 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::operator =((PropertyInfo*)&local_c0, (PropertyInfo*)&local_f8);
   lVar1 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar33 = (long*)( local_d8 + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         auVar9._8_8_ = 0;
         auVar9._0_8_ = local_f0._8_8_;
         local_f0 = auVar9 << 0x40;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   local_70 = local_70 & 0xffffffff00000000;
   local_110 = 0;
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_get_viewport_composition_layer_extension_property_defaults";
   local_100 = 0;
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x3b;
   String::parse_latin1((StrRange*)&local_c8);
   local_90 = CONCAT44(local_90._4_4_, 8);
   GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void>*)&local_f8);
   PropertyInfo::operator =((PropertyInfo*)&local_c0, (PropertyInfo*)&local_f8);
   lVar1 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar33 = (long*)( local_d8 + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         auVar10._8_8_ = 0;
         auVar10._0_8_ = local_f0._8_8_;
         local_f0 = auVar10 << 0x40;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   local_70 = local_70 & 0xffffffff00000000;
   local_110 = 0;
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_100 = 0;
   local_f8 = (char*)0x0;
   local_c8 = "layer";
   local_c0 = 5;
   String::parse_latin1((StrRange*)&local_f8);
   local_c8 = (char*)0x0;
   if (local_f8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_f8);
   }

   Vector<String>::push_back(local_108, (StrRange*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_on_viewport_composition_layer_destroyed";
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x28;
   String::parse_latin1((StrRange*)&local_c8);
   local_90 = CONCAT44(local_90._4_4_, 8);
   GetTypeInfo<GDExtensionConstPtr<void>,void>::get_class_info((GetTypeInfo<GDExtensionConstPtr<void>,void>*)&local_f8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_f8);
   lVar1 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar33 = (long*)( local_d8 + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         auVar7._8_8_ = 0;
         auVar7._0_8_ = local_f0._8_8_;
         local_f0 = auVar7 << 0x40;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_68, 0);
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_100 = 0;
   local_f8 = (char*)0x0;
   local_c8 = "property_values";
   local_c0 = 0xf;
   String::parse_latin1((StrRange*)&local_f8);
   local_c8 = (char*)0x0;
   if (local_f8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_f8);
   }

   Vector<String>::push_back(local_108, (StrRange*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   local_110 = 0;
   local_c8 = "next_pointer";
   local_c0 = 0xc;
   String::parse_latin1((StrRange*)&local_110);
   local_c8 = (char*)0x0;
   if (local_110 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_110);
   }

   Vector<String>::push_back(local_108, (StrRange*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_set_android_surface_swapchain_create_info_and_get_next_pointer";
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0x3f;
   String::parse_latin1((StrRange*)&local_c8);
   local_90 = CONCAT44(local_90._4_4_, 8);
   GetTypeInfo<unsigned_long,void>::get_class_info((GetTypeInfo<unsigned_long,void>*)&local_f8);
   PropertyInfo::operator =((PropertyInfo*)&local_c0, (PropertyInfo*)&local_f8);
   lVar1 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar33 = (long*)( local_d8 + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         auVar8._8_8_ = 0;
         auVar8._0_8_ = local_f0._8_8_;
         local_f0 = auVar8 << 0x40;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   local_70 = CONCAT44(local_70._4_4_, 8);
   GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void>*)&local_f8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_f8);
   lVar1 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar33 = (long*)( local_d8 + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         auVar6._8_8_ = 0;
         auVar6._0_8_ = local_f0._8_8_;
         local_f0 = auVar6 << 0x40;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_68, 0);
   GetTypeInfo<GDExtensionPtr<void>,void>::get_class_info((GetTypeInfo<GDExtensionPtr<void>,void>*)&local_f8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_f8);
   lVar1 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar33 = (long*)( local_d8 + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar31 = local_f0._0_8_;
   if (local_f0._0_8_ != 0) {
      LOCK();
      plVar33 = (long*)( local_f0._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         auVar5._8_8_ = 0;
         auVar5._0_8_ = local_f0._8_8_;
         local_f0 = auVar5 << 0x40;
         Memory::free_static((void*)( uVar31 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_68, 0);
   local_f8 = "OpenXRExtensionWrapperExtension";
   local_110 = 0;
   local_f0._0_8_ = 0x1f;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   D_METHODP((char*)&local_c8, (char***)"get_openxr_api", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar32 = create_method_bind<OpenXRExtensionWrapperExtension,Ref<OpenXRAPIExtension>>(get_openxr_api);
   ClassDB::bind_methodfi(1, pMVar32, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   uVar31 = local_b8._0_8_;
   if ((long*)local_b8._0_8_ != (long*)0x0) {
      LOCK();
      plVar33 = (long*)( local_b8._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         if ((long*)local_b8._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_b8._0_8_ + -8 );
         lVar34 = 0;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_b8._8_8_;
         local_b8 = auVar3 << 0x40;
         plVar33 = (long*)uVar31;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar33 != 0 )) {
                  StringName::unref();
               }

               lVar34 = lVar34 + 1;
               plVar33 = plVar33 + 1;
            }
 while ( lVar1 != lVar34 );
         }

         Memory::free_static((long*)( uVar31 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_c8, (char***)"register_extension_wrapper", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar32 = create_method_bind<OpenXRExtensionWrapperExtension>(register_extension_wrapper);
   ClassDB::bind_methodfi(1, pMVar32, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   uVar31 = local_b8._0_8_;
   if ((long*)local_b8._0_8_ != (long*)0x0) {
      LOCK();
      plVar33 = (long*)( local_b8._0_8_ + -0x10 );
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (*plVar33 == 0) {
         if ((long*)local_b8._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_b8._0_8_ + -8 );
         lVar34 = 0;
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_b8._8_8_;
         local_b8 = auVar4 << 0x40;
         plVar33 = (long*)uVar31;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar33 != 0 )) {
                  StringName::unref();
               }

               lVar34 = lVar34 + 1;
               plVar33 = plVar33 + 1;
            }
 while ( lVar1 != lVar34 );
         }

         Memory::free_static((long*)( uVar31 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* OpenXRExtensionWrapperExtension::set_android_surface_swapchain_create_info_and_get_next_pointer(Dictionary
   const&, void*) */void *__thiscallOpenXRExtensionWrapperExtension::set_android_surface_swapchain_create_info_and_get_next_pointer(OpenXRExtensionWrapperExtension *this, Dictionary *param_1, void *param_2) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   Dictionary local_160[8];
   undefined8 local_158;
   long local_150;
   char *local_148;
   long local_140;
   long local_138;
   long local_128;
   int local_118;
   undefined4 uStack_114;
   undefined4 uStack_110;
   undefined4 uStack_10c;
   undefined1 local_108[16];
   undefined8 local_f8;
   undefined8 local_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   undefined8 local_d8[2];
   undefined8 local_c8;
   undefined8 local_c0;
   Vector<int> local_b8[8];
   undefined8 local_b0;
   Variant *local_a8;
   Variant *pVStack_a0;
   int local_98[8];
   Dictionary *local_78;
   char **ppcStack_70;
   int local_60[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary(local_160, param_1);
   plVar4 = *(long**)( this + 0x98 );
   if (plVar4 == (long*)0x0) {
      LAB_0010c0a1:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x508] == (OpenXRExtensionWrapperExtension)0x0 )) {
         local_118 = 0;
         uStack_114 = 0;
         local_108 = (undefined1[16])0x0;
         local_148 = "_set_android_surface_swapchain_create_info_and_get_next_pointer";
         uStack_110 = 0;
         uStack_10c = 0;
         local_f8 = 0;
         local_f0 = 0;
         local_e8 = 6;
         local_e0 = 1;
         local_d8[0] = 0;
         local_c8 = 0;
         local_c0 = 0;
         local_b0 = 0;
         local_140 = 0x3f;
         String::parse_latin1((StrRange*)&local_118);
         local_e0 = CONCAT44(local_e0._4_4_, 8);
         GetTypeInfo<unsigned_long,void>::get_class_info((GetTypeInfo<unsigned_long,void>*)&local_148);
         PropertyInfo::operator =((PropertyInfo*)&uStack_110, (PropertyInfo*)&local_148);
         lVar3 = local_128;
         if (local_128 != 0) {
            LOCK();
            plVar4 = (long*)( local_128 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_128 = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_138 != 0 )) {
            StringName::unref();
         }

         lVar3 = local_140;
         if (local_140 != 0) {
            LOCK();
            plVar4 = (long*)( local_140 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_140 = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         local_c0 = CONCAT44(local_c0._4_4_, 8);
         GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void>*)&local_148);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
         Vector<int>::push_back(local_b8, 0);
         GetTypeInfo<GDExtensionPtr<void>,void>::get_class_info((GetTypeInfo<GDExtensionPtr<void>,void>*)&local_148);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
         Vector<int>::push_back(local_b8, 0);
         uVar1 = MethodInfo::get_compatibility_hash();
         *(undefined8*)( this + 0x510 ) = 0;
         lVar3 = *(long*)( this + 8 );
         pcVar5 = *(code**)( lVar3 + 0xd8 );
         if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xd0 ) ),pcVar5 == (code*)0x0) {
            local_158 = 0;
            String::parse_latin1((String*)&local_158, "OpenXRExtensionWrapperExtension");
            StringName::StringName((StringName*)&local_150, (String*)&local_158, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_148, (StringName*)&local_150);
            if (local_140 == 0) {
               lVar3 = 0;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_140);
               if (StringName::configured != '\0') goto LAB_0010c4eb;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
               LAB_0010c50a:lVar3 = *(long*)( this + 8 );
               pcVar5 = *(code**)( lVar3 + 200 );
               if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_0010c3f8;
               uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x500);
               *(undefined8*)( this + 0x510 ) = uVar2;
            }
 else {
               lVar3 = *(long*)( local_140 + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_140);
               if (StringName::configured != '\0') {
                  LAB_0010c4eb:if (local_150 != 0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
               if (lVar3 == 0) goto LAB_0010c50a;
            }

            lVar3 = *(long*)( this + 8 );
         }
 else {
            uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x500, uVar1);
            *(undefined8*)( this + 0x510 ) = uVar2;
            lVar3 = *(long*)( this + 8 );
         }

         LAB_0010c3f8:if (*(char*)( lVar3 + 0x29 ) != '\0') {
            plVar4 = (long*)operator_new(0x18, "");
            *plVar4 = (long)( this + 0x510 );
            plVar4[1] = (long)( this + 0x508 );
            plVar4[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar4;
         }

         this[0x508] = (OpenXRExtensionWrapperExtension)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_118);
      }

      if (*(long*)( this + 0x510 ) == 0) {
         Dictionary::~Dictionary(local_160);
         goto LAB_0010c0c1;
      }

      Dictionary::Dictionary((Dictionary*)&local_150, local_160);
      ppcStack_70 = &local_148;
      local_148 = (char*)param_2;
      local_78 = (Dictionary*)&local_150;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( this + 0x510 ) )(*(undefined8*)( this + 0x10 ), &local_78, &local_118);
         param_2 = (void*)CONCAT44(uStack_114, local_118);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x500, *(undefined8*)( this + 0x510 ), &local_78, &local_118);
         param_2 = (void*)CONCAT44(uStack_114, local_118);
      }

      Dictionary::~Dictionary((Dictionary*)&local_150);
   }
 else {
      local_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      Variant::Variant((Variant*)&local_78, local_160);
      Variant::Variant((Variant*)local_60, (ulong)param_2);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = (Variant*)local_60;
      ( **(code**)( *plVar4 + 0x60 ) )((Variant*)local_98, plVar4, this + 0x500, &local_a8, 2, &local_118);
      if (local_118 != 0) {
         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010c0a1;
      }

      param_2 = (void*)Variant::operator_cast_to_unsigned_long((Variant*)local_98);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_60[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

   }

   Dictionary::~Dictionary(local_160);
   LAB_0010c0c1:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_2;
}
/* non-virtual thunk to
   OpenXRExtensionWrapperExtension::set_android_surface_swapchain_create_info_and_get_next_pointer(Dictionary
   const&, void*) */void OpenXRExtensionWrapperExtension::set_android_surface_swapchain_create_info_and_get_next_pointer(OpenXRExtensionWrapperExtension *this, Dictionary *param_1, void *param_2) {
   set_android_surface_swapchain_create_info_and_get_next_pointer(this + -0x178, param_1, param_2);
   return;
}
/* OpenXRExtensionWrapperExtension::on_viewport_composition_layer_destroyed(XrCompositionLayerBaseHeader
   const*) */void OpenXRExtensionWrapperExtension::on_viewport_composition_layer_destroyed(OpenXRExtensionWrapperExtension *this, XrCompositionLayerBaseHeader *param_1) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   undefined8 local_138;
   long local_130;
   char *local_128;
   long local_120;
   long local_118;
   long local_108;
   undefined8 local_f8;
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   undefined1 local_e8[16];
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8[2];
   undefined8 local_a8;
   undefined8 local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   undefined8 *local_58[3];
   long local_40;
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 != (long*)0x0) {
      local_f8._0_4_ = 0;
      local_f8._4_4_ = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, (ulong)param_1);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, this + 0x4b8, &local_80, 1, &local_f8);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if ((int)local_f8 == 0) {
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010c6f6;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x4c0] == (OpenXRExtensionWrapperExtension)0x0 )) {
      local_f8._0_4_ = 0;
      local_f8._4_4_ = 0;
      local_e8 = (undefined1[16])0x0;
      local_128 = "_on_viewport_composition_layer_destroyed";
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
      local_120 = 0x28;
      String::parse_latin1((StrRange*)&local_f8);
      local_c0 = CONCAT44(local_c0._4_4_, 8);
      GetTypeInfo<GDExtensionConstPtr<void>,void>::get_class_info((GetTypeInfo<GDExtensionConstPtr<void>,void>*)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
      lVar3 = local_108;
      if (local_108 != 0) {
         LOCK();
         plVar4 = (long*)( local_108 + -0x10 );
         *plVar4 = *plVar4 + -1;
         UNLOCK();
         if (*plVar4 == 0) {
            local_108 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
         StringName::unref();
      }

      lVar3 = local_120;
      if (local_120 != 0) {
         LOCK();
         plVar4 = (long*)( local_120 + -0x10 );
         *plVar4 = *plVar4 + -1;
         UNLOCK();
         if (*plVar4 == 0) {
            local_120 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      Vector<int>::push_back(local_98, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar3 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x4c8 ) = 0;
      pcVar5 = *(code**)( lVar3 + 0xd8 );
      if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xd0 ) ),pcVar5 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "OpenXRExtensionWrapperExtension");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120 == 0) {
            lVar3 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_120);
            if (StringName::configured != '\0') goto LAB_0010c997;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_0010c9b4:lVar3 = *(long*)( this + 8 );
            pcVar5 = *(code**)( lVar3 + 200 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_0010c8e9;
            uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x4b8);
            *(undefined8*)( this + 0x4c8 ) = uVar2;
         }
 else {
            lVar3 = *(long*)( local_120 + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_120);
            if (StringName::configured != '\0') {
               LAB_0010c997:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar3 == 0) goto LAB_0010c9b4;
         }

         lVar3 = *(long*)( this + 8 );
      }
 else {
         uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x4b8, uVar1);
         *(undefined8*)( this + 0x4c8 ) = uVar2;
         lVar3 = *(long*)( this + 8 );
      }

      LAB_0010c8e9:if (*(char*)( lVar3 + 0x29 ) != '\0') {
         plVar4 = (long*)operator_new(0x18, "");
         *plVar4 = (long)( this + 0x4c8 );
         plVar4[1] = (long)( this + 0x4c0 );
         plVar4[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar4;
      }

      this[0x4c0] = (OpenXRExtensionWrapperExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar5 = *(code**)( this + 0x4c8 );
   if (pcVar5 != (code*)0x0) {
      local_58[0] = &local_f8;
      local_f8 = param_1;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar5 )(*(undefined8*)( this + 0x10 ), local_58, 0);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x4b8, pcVar5, local_58, 0);
      }

   }

   LAB_0010c6f6:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* non-virtual thunk to
   OpenXRExtensionWrapperExtension::on_viewport_composition_layer_destroyed(XrCompositionLayerBaseHeader
   const*) */void OpenXRExtensionWrapperExtension::on_viewport_composition_layer_destroyed(OpenXRExtensionWrapperExtension *this, XrCompositionLayerBaseHeader *param_1) {
   on_viewport_composition_layer_destroyed(this + -0x178, param_1);
   return;
}
/* OpenXRExtensionWrapperExtension::set_viewport_composition_layer_and_get_next_pointer(XrCompositionLayerBaseHeader
   const*, Dictionary const&, void*) */void *__thiscallOpenXRExtensionWrapperExtension::set_viewport_composition_layer_and_get_next_pointer(OpenXRExtensionWrapperExtension *this, XrCompositionLayerBaseHeader *param_1, Dictionary *param_2, void *param_3) {
   Variant *pVVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   Variant *pVVar7;
   long in_FS_OFFSET;
   Dictionary local_180[8];
   XrCompositionLayerBaseHeader *local_178;
   long local_170;
   char *local_168;
   long local_160[5];
   int local_138;
   undefined4 uStack_134;
   undefined4 uStack_130;
   undefined4 uStack_12c;
   undefined1 local_128[16];
   undefined8 local_118;
   undefined8 local_110;
   undefined8 local_108;
   undefined8 local_100;
   undefined8 local_f8[2];
   undefined8 local_e8;
   undefined8 local_e0;
   Vector<int> local_d8[8];
   undefined8 local_d0;
   Variant *local_c8;
   Variant *pVStack_c0;
   Variant *local_b8;
   int local_a8[8];
   XrCompositionLayerBaseHeader **local_88;
   Dictionary *pDStack_80;
   char **local_78;
   Variant local_70[24];
   Variant local_58[24];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary(local_180, param_2);
   plVar5 = *(long**)( this + 0x98 );
   if (plVar5 == (long*)0x0) {
      LAB_0010cbb3:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x4a8] == (OpenXRExtensionWrapperExtension)0x0 )) {
         local_138 = 0;
         uStack_134 = 0;
         local_168 = "_set_viewport_composition_layer_and_get_next_pointer";
         local_128 = (undefined1[16])0x0;
         uStack_130 = 0;
         uStack_12c = 0;
         local_118 = 0;
         local_110 = 0;
         local_108 = 6;
         local_100 = 1;
         local_f8[0] = 0;
         local_e8 = 0;
         local_e0 = 0;
         local_d0 = 0;
         local_160[0] = 0x34;
         String::parse_latin1((StrRange*)&local_138);
         local_100 = CONCAT44(local_100._4_4_, 8);
         GetTypeInfo<unsigned_long,void>::get_class_info((GetTypeInfo<unsigned_long,void>*)&local_168);
         PropertyInfo::operator =((PropertyInfo*)&uStack_130, (PropertyInfo*)&local_168);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
         local_e0 = CONCAT44(local_e0._4_4_, 8);
         GetTypeInfo<GDExtensionConstPtr<void>,void>::get_class_info((GetTypeInfo<GDExtensionConstPtr<void>,void>*)&local_168);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_f8, (PropertyInfo*)&local_168);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
         Vector<int>::push_back(local_d8, 0);
         GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void>*)&local_168);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_f8, (PropertyInfo*)&local_168);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
         Vector<int>::push_back(local_d8, 0);
         GetTypeInfo<GDExtensionPtr<void>,void>::get_class_info((GetTypeInfo<GDExtensionPtr<void>,void>*)&local_168);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_f8, (PropertyInfo*)&local_168);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
         Vector<int>::push_back(local_d8, 0);
         uVar2 = MethodInfo::get_compatibility_hash();
         *(undefined8*)( this + 0x4b0 ) = 0;
         lVar4 = *(long*)( this + 8 );
         pcVar6 = *(code**)( lVar4 + 0xd8 );
         if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
            local_178 = (XrCompositionLayerBaseHeader*)0x0;
            String::parse_latin1((String*)&local_178, "OpenXRExtensionWrapperExtension");
            StringName::StringName((StringName*)&local_170, (String*)&local_178, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_168, (StringName*)&local_170);
            if (local_160[0] == 0) {
               lVar4 = 0;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_160);
               if (StringName::configured != '\0') goto LAB_0010cfa4;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
               LAB_0010cfc1:lVar4 = *(long*)( this + 8 );
               pcVar6 = *(code**)( lVar4 + 200 );
               if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_0010cee0;
               uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x4a0);
               *(undefined8*)( this + 0x4b0 ) = uVar3;
            }
 else {
               lVar4 = *(long*)( local_160[0] + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_160);
               if (StringName::configured != '\0') {
                  LAB_0010cfa4:if (local_170 != 0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
               if (lVar4 == 0) goto LAB_0010cfc1;
            }

            lVar4 = *(long*)( this + 8 );
         }
 else {
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x4a0, uVar2);
            *(undefined8*)( this + 0x4b0 ) = uVar3;
            lVar4 = *(long*)( this + 8 );
         }

         LAB_0010cee0:if (*(char*)( lVar4 + 0x29 ) != '\0') {
            plVar5 = (long*)operator_new(0x18, "");
            *plVar5 = (long)( this + 0x4b0 );
            plVar5[1] = (long)( this + 0x4a8 );
            plVar5[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar5;
         }

         this[0x4a8] = (OpenXRExtensionWrapperExtension)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_138);
      }

      if (*(long*)( this + 0x4b0 ) == 0) {
         Dictionary::~Dictionary(local_180);
         goto LAB_0010cbd3;
      }

      local_178 = param_1;
      Dictionary::Dictionary((Dictionary*)&local_170, local_180);
      local_88 = &local_178;
      local_78 = &local_168;
      local_168 = (char*)param_3;
      pDStack_80 = (Dictionary*)&local_170;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( this + 0x4b0 ) )(*(undefined8*)( this + 0x10 ), &local_88, &local_138);
         param_3 = (void*)CONCAT44(uStack_134, local_138);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x4a0, *(undefined8*)( this + 0x4b0 ), &local_88, &local_138);
         param_3 = (void*)CONCAT44(uStack_134, local_138);
      }

      Dictionary::~Dictionary((Dictionary*)&local_170);
   }
 else {
      local_138 = 0;
      uStack_134 = 0;
      uStack_130 = 0;
      Variant::Variant((Variant*)&local_88, (ulong)param_1);
      Variant::Variant(local_70, local_180);
      Variant::Variant(local_58, (ulong)param_3);
      local_c8 = (Variant*)&local_88;
      pVStack_c0 = local_70;
      local_b8 = local_58;
      ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_a8, plVar5, this + 0x4a0, &local_c8, 3, &local_138);
      if (local_138 != 0) {
         if (Variant::needs_deinit[local_a8[0]] != '\0') {
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
 while ( pVVar7 != (Variant*)&local_88 );
         goto LAB_0010cbb3;
      }

      param_3 = (void*)Variant::operator_cast_to_unsigned_long((Variant*)local_a8);
      if (Variant::needs_deinit[local_a8[0]] != '\0') {
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
 while ( pVVar7 != (Variant*)&local_88 );
   }

   Dictionary::~Dictionary(local_180);
   LAB_0010cbd3:if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_3;
}
/* non-virtual thunk to
   OpenXRExtensionWrapperExtension::set_viewport_composition_layer_and_get_next_pointer(XrCompositionLayerBaseHeader
   const*, Dictionary const&, void*) */void OpenXRExtensionWrapperExtension::set_viewport_composition_layer_and_get_next_pointer(OpenXRExtensionWrapperExtension *this, XrCompositionLayerBaseHeader *param_1, Dictionary *param_2, void *param_3) {
   set_viewport_composition_layer_and_get_next_pointer(this + -0x178, param_1, param_2, param_3);
   return;
}
/* OpenXRExtensionWrapperExtension::on_event_polled(XrEventDataBuffer const&) */bool OpenXRExtensionWrapperExtension::on_event_polled(OpenXRExtensionWrapperExtension *this, XrEventDataBuffer *param_1) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   bool bVar6;
   undefined8 local_138;
   long local_130;
   char *local_128;
   long local_120;
   long local_118;
   long local_108;
   undefined8 local_f8;
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
   undefined8 *local_58[3];
   long local_40;
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 != (long*)0x0) {
      local_f8._0_4_ = 0;
      local_f8._4_4_ = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, (ulong)param_1);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar4 + 0x60 ) )((Variant*)local_58, plVar4, this + 0x488, &local_80, 1, &local_f8);
      if ((int)local_f8 == 0) {
         bVar6 = Variant::operator_cast_to_bool((Variant*)local_58);
         if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010d1c3;
      }

      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x490] == (OpenXRExtensionWrapperExtension)0x0 )) {
      local_f8._0_4_ = 0;
      local_f8._4_4_ = 0;
      local_e8 = (undefined1[16])0x0;
      local_128 = "_on_event_polled";
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
      local_120 = 0x10;
      String::parse_latin1((StrRange*)&local_f8);
      local_c0 = CONCAT44(local_c0._4_4_, 8);
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_128);
      PropertyInfo::operator =((PropertyInfo*)&uStack_f0, (PropertyInfo*)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
      local_a0 = local_a0 & 0xffffffff00000000;
      GetTypeInfo<GDExtensionConstPtr<void>,void>::get_class_info((GetTypeInfo<GDExtensionConstPtr<void>,void>*)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
      lVar3 = local_108;
      if (local_108 != 0) {
         LOCK();
         plVar4 = (long*)( local_108 + -0x10 );
         *plVar4 = *plVar4 + -1;
         UNLOCK();
         if (*plVar4 == 0) {
            local_108 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
         StringName::unref();
      }

      lVar3 = local_120;
      if (local_120 != 0) {
         LOCK();
         plVar4 = (long*)( local_120 + -0x10 );
         *plVar4 = *plVar4 + -1;
         UNLOCK();
         if (*plVar4 == 0) {
            local_120 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      Vector<int>::push_back(local_98, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar3 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x498 ) = 0;
      pcVar5 = *(code**)( lVar3 + 0xd8 );
      if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xd0 ) ),pcVar5 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "OpenXRExtensionWrapperExtension");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120 == 0) {
            lVar3 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_120);
            if (StringName::configured != '\0') goto LAB_0010d4f4;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_0010d511:lVar3 = *(long*)( this + 8 );
            pcVar5 = *(code**)( lVar3 + 200 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_0010d41d;
            uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x488);
            *(undefined8*)( this + 0x498 ) = uVar2;
         }
 else {
            lVar3 = *(long*)( local_120 + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_120);
            if (StringName::configured != '\0') {
               LAB_0010d4f4:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar3 == 0) goto LAB_0010d511;
         }

         lVar3 = *(long*)( this + 8 );
      }
 else {
         uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x488, uVar1);
         *(undefined8*)( this + 0x498 ) = uVar2;
         lVar3 = *(long*)( this + 8 );
      }

      LAB_0010d41d:if (*(char*)( lVar3 + 0x29 ) != '\0') {
         plVar4 = (long*)operator_new(0x18, "");
         *plVar4 = (long)( this + 0x498 );
         plVar4[1] = (long)( this + 0x490 );
         plVar4[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar4;
      }

      this[0x490] = (OpenXRExtensionWrapperExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar5 = *(code**)( this + 0x498 );
   bVar6 = false;
   if (pcVar5 != (code*)0x0) {
      local_58[0] = &local_f8;
      local_f8 = param_1;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar5 )(*(undefined8*)( this + 0x10 ), local_58, &local_128);
         bVar6 = local_128._0_1_ != (GetTypeInfo<bool,void>)0x0;
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x488, pcVar5, local_58, &local_128);
         bVar6 = local_128._0_1_ != (GetTypeInfo<bool,void>)0x0;
      }

   }

   LAB_0010d1c3:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar6;
}
/* non-virtual thunk to OpenXRExtensionWrapperExtension::on_event_polled(XrEventDataBuffer const&)
    */void OpenXRExtensionWrapperExtension::on_event_polled(OpenXRExtensionWrapperExtension *this, XrEventDataBuffer *param_1) {
   on_event_polled(this + -0x178, param_1);
   return;
}
/* OpenXRExtensionWrapperExtension::on_post_draw_viewport(RID) */void OpenXRExtensionWrapperExtension::on_post_draw_viewport(OpenXRExtensionWrapperExtension *this, undefined8 param_2) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   undefined8 local_140;
   undefined8 local_138;
   long local_130;
   char *local_128;
   long local_120;
   long local_118;
   long local_108;
   int local_f8;
   undefined4 uStack_f4;
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   undefined1 local_e8[16];
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8[2];
   undefined8 local_a8;
   undefined8 local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   int *local_58[3];
   long local_40;
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_140 = param_2;
   if (plVar4 != (long*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, (RID*)&local_140);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, this + 0x3b0, &local_80, 1, &local_f8);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_f8 == 0) {
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010d712;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x3b8] == (OpenXRExtensionWrapperExtension)0x0 )) {
      local_f8 = 0;
      uStack_f4 = 0;
      local_e8 = (undefined1[16])0x0;
      local_128 = "_on_post_draw_viewport";
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
      local_120 = 0x16;
      String::parse_latin1((StrRange*)&local_f8);
      local_c0 = CONCAT44(local_c0._4_4_, 8);
      GetTypeInfo<RID,void>::get_class_info((GetTypeInfo<RID,void>*)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
      lVar3 = local_108;
      if (local_108 != 0) {
         LOCK();
         plVar4 = (long*)( local_108 + -0x10 );
         *plVar4 = *plVar4 + -1;
         UNLOCK();
         if (*plVar4 == 0) {
            local_108 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
         StringName::unref();
      }

      lVar3 = local_120;
      if (local_120 != 0) {
         LOCK();
         plVar4 = (long*)( local_120 + -0x10 );
         *plVar4 = *plVar4 + -1;
         UNLOCK();
         if (*plVar4 == 0) {
            local_120 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      Vector<int>::push_back(local_98, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar3 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x3c0 ) = 0;
      pcVar5 = *(code**)( lVar3 + 0xd8 );
      if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xd0 ) ),pcVar5 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "OpenXRExtensionWrapperExtension");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120 == 0) {
            lVar3 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_120);
            if (StringName::configured != '\0') goto LAB_0010d9b0;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_0010d9cd:lVar3 = *(long*)( this + 8 );
            pcVar5 = *(code**)( lVar3 + 200 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_0010d909;
            uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x3b0);
            *(undefined8*)( this + 0x3c0 ) = uVar2;
         }
 else {
            lVar3 = *(long*)( local_120 + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_120);
            if (StringName::configured != '\0') {
               LAB_0010d9b0:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar3 == 0) goto LAB_0010d9cd;
         }

         lVar3 = *(long*)( this + 8 );
      }
 else {
         uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x3b0, uVar1);
         *(undefined8*)( this + 0x3c0 ) = uVar2;
         lVar3 = *(long*)( this + 8 );
      }

      LAB_0010d909:if (*(char*)( lVar3 + 0x29 ) != '\0') {
         plVar4 = (long*)operator_new(0x18, "");
         *plVar4 = (long)( this + 0x3c0 );
         plVar4[1] = (long)( this + 0x3b8 );
         plVar4[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar4;
      }

      this[0x3b8] = (OpenXRExtensionWrapperExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar5 = *(code**)( this + 0x3c0 );
   if (pcVar5 != (code*)0x0) {
      local_f8 = (int)local_140;
      uStack_f4 = ( undefined4 )((ulong)local_140 >> 0x20);
      local_58[0] = &local_f8;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar5 )(*(undefined8*)( this + 0x10 ), local_58, 0);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x3b0, pcVar5, local_58, 0);
      }

   }

   LAB_0010d712:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* non-virtual thunk to OpenXRExtensionWrapperExtension::on_post_draw_viewport(RID) */void OpenXRExtensionWrapperExtension::on_post_draw_viewport(OpenXRExtensionWrapperExtension *this) {
   on_post_draw_viewport(this + -0x178);
   return;
}
/* OpenXRExtensionWrapperExtension::on_pre_draw_viewport(RID) */void OpenXRExtensionWrapperExtension::on_pre_draw_viewport(OpenXRExtensionWrapperExtension *this, undefined8 param_2) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   undefined8 local_140;
   undefined8 local_138;
   long local_130;
   char *local_128;
   long local_120;
   long local_118;
   long local_108;
   int local_f8;
   undefined4 uStack_f4;
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   undefined1 local_e8[16];
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8[2];
   undefined8 local_a8;
   undefined8 local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   int *local_58[3];
   long local_40;
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_140 = param_2;
   if (plVar4 != (long*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, (RID*)&local_140);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, this + 0x398, &local_80, 1, &local_f8);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_f8 == 0) {
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010dbc2;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x3a0] == (OpenXRExtensionWrapperExtension)0x0 )) {
      local_f8 = 0;
      uStack_f4 = 0;
      local_e8 = (undefined1[16])0x0;
      local_128 = "_on_pre_draw_viewport";
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
      local_120 = 0x15;
      String::parse_latin1((StrRange*)&local_f8);
      local_c0 = CONCAT44(local_c0._4_4_, 8);
      GetTypeInfo<RID,void>::get_class_info((GetTypeInfo<RID,void>*)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
      lVar3 = local_108;
      if (local_108 != 0) {
         LOCK();
         plVar4 = (long*)( local_108 + -0x10 );
         *plVar4 = *plVar4 + -1;
         UNLOCK();
         if (*plVar4 == 0) {
            local_108 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
         StringName::unref();
      }

      lVar3 = local_120;
      if (local_120 != 0) {
         LOCK();
         plVar4 = (long*)( local_120 + -0x10 );
         *plVar4 = *plVar4 + -1;
         UNLOCK();
         if (*plVar4 == 0) {
            local_120 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      Vector<int>::push_back(local_98, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar3 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x3a8 ) = 0;
      pcVar5 = *(code**)( lVar3 + 0xd8 );
      if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xd0 ) ),pcVar5 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "OpenXRExtensionWrapperExtension");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120 == 0) {
            lVar3 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_120);
            if (StringName::configured != '\0') goto LAB_0010de60;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_0010de7d:lVar3 = *(long*)( this + 8 );
            pcVar5 = *(code**)( lVar3 + 200 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_0010ddb9;
            uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x398);
            *(undefined8*)( this + 0x3a8 ) = uVar2;
         }
 else {
            lVar3 = *(long*)( local_120 + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_120);
            if (StringName::configured != '\0') {
               LAB_0010de60:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar3 == 0) goto LAB_0010de7d;
         }

         lVar3 = *(long*)( this + 8 );
      }
 else {
         uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x398, uVar1);
         *(undefined8*)( this + 0x3a8 ) = uVar2;
         lVar3 = *(long*)( this + 8 );
      }

      LAB_0010ddb9:if (*(char*)( lVar3 + 0x29 ) != '\0') {
         plVar4 = (long*)operator_new(0x18, "");
         *plVar4 = (long)( this + 0x3a8 );
         plVar4[1] = (long)( this + 0x3a0 );
         plVar4[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar4;
      }

      this[0x3a0] = (OpenXRExtensionWrapperExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar5 = *(code**)( this + 0x3a8 );
   if (pcVar5 != (code*)0x0) {
      local_f8 = (int)local_140;
      uStack_f4 = ( undefined4 )((ulong)local_140 >> 0x20);
      local_58[0] = &local_f8;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar5 )(*(undefined8*)( this + 0x10 ), local_58, 0);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x398, pcVar5, local_58, 0);
      }

   }

   LAB_0010dbc2:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* non-virtual thunk to OpenXRExtensionWrapperExtension::on_pre_draw_viewport(RID) */void OpenXRExtensionWrapperExtension::on_pre_draw_viewport(OpenXRExtensionWrapperExtension *this) {
   on_pre_draw_viewport(this + -0x178);
   return;
}
/* OpenXRExtensionWrapperExtension::on_session_created(XrSession_T*) */void OpenXRExtensionWrapperExtension::on_session_created(OpenXRExtensionWrapperExtension *this, XrSession_T *param_1) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   undefined8 local_138;
   long local_130;
   char *local_128;
   long local_120;
   long local_118;
   long local_108;
   undefined8 local_f8;
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   undefined1 local_e8[16];
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8[2];
   undefined8 local_a8;
   undefined8 local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   undefined8 *local_58[3];
   long local_40;
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 != (long*)0x0) {
      local_f8._0_4_ = 0;
      local_f8._4_4_ = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, (ulong)param_1);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, this + 800, &local_80, 1, &local_f8);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if ((int)local_f8 == 0) {
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010e066;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x328] == (OpenXRExtensionWrapperExtension)0x0 )) {
      local_f8._0_4_ = 0;
      local_f8._4_4_ = 0;
      local_e8 = (undefined1[16])0x0;
      local_128 = "_on_session_created";
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
      local_120 = 0x13;
      String::parse_latin1((StrRange*)&local_f8);
      local_c0 = CONCAT44(local_c0._4_4_, 8);
      GetTypeInfo<unsigned_long,void>::get_class_info((GetTypeInfo<unsigned_long,void>*)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
      lVar3 = local_108;
      if (local_108 != 0) {
         LOCK();
         plVar4 = (long*)( local_108 + -0x10 );
         *plVar4 = *plVar4 + -1;
         UNLOCK();
         if (*plVar4 == 0) {
            local_108 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
         StringName::unref();
      }

      lVar3 = local_120;
      if (local_120 != 0) {
         LOCK();
         plVar4 = (long*)( local_120 + -0x10 );
         *plVar4 = *plVar4 + -1;
         UNLOCK();
         if (*plVar4 == 0) {
            local_120 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      Vector<int>::push_back(local_98, 8);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar3 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x330 ) = 0;
      pcVar5 = *(code**)( lVar3 + 0xd8 );
      if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xd0 ) ),pcVar5 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "OpenXRExtensionWrapperExtension");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120 == 0) {
            lVar3 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_120);
            if (StringName::configured != '\0') goto LAB_0010e307;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_0010e324:lVar3 = *(long*)( this + 8 );
            pcVar5 = *(code**)( lVar3 + 200 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_0010e25c;
            uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 800);
            *(undefined8*)( this + 0x330 ) = uVar2;
         }
 else {
            lVar3 = *(long*)( local_120 + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_120);
            if (StringName::configured != '\0') {
               LAB_0010e307:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar3 == 0) goto LAB_0010e324;
         }

         lVar3 = *(long*)( this + 8 );
      }
 else {
         uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 800, uVar1);
         *(undefined8*)( this + 0x330 ) = uVar2;
         lVar3 = *(long*)( this + 8 );
      }

      LAB_0010e25c:if (*(char*)( lVar3 + 0x29 ) != '\0') {
         plVar4 = (long*)operator_new(0x18, "");
         *plVar4 = (long)( this + 0x330 );
         plVar4[1] = (long)( this + 0x328 );
         plVar4[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar4;
      }

      this[0x328] = (OpenXRExtensionWrapperExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar5 = *(code**)( this + 0x330 );
   if (pcVar5 != (code*)0x0) {
      local_58[0] = &local_f8;
      local_f8 = param_1;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar5 )(*(undefined8*)( this + 0x10 ), local_58, 0);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 800, pcVar5, local_58, 0);
      }

   }

   LAB_0010e066:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* non-virtual thunk to OpenXRExtensionWrapperExtension::on_session_created(XrSession_T*) */void OpenXRExtensionWrapperExtension::on_session_created(OpenXRExtensionWrapperExtension *this, XrSession_T *param_1) {
   on_session_created(this + -0x178, param_1);
   return;
}
/* OpenXRExtensionWrapperExtension::on_instance_created(XrInstance_T*) */void OpenXRExtensionWrapperExtension::on_instance_created(OpenXRExtensionWrapperExtension *this, XrInstance_T *param_1) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   undefined8 local_138;
   long local_130;
   char *local_128;
   long local_120;
   long local_118;
   long local_108;
   undefined8 local_f8;
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   undefined1 local_e8[16];
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8[2];
   undefined8 local_a8;
   undefined8 local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   undefined8 *local_58[3];
   long local_40;
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 != (long*)0x0) {
      local_f8._0_4_ = 0;
      local_f8._4_4_ = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, (ulong)param_1);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, this + 0x2f0, &local_80, 1, &local_f8);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if ((int)local_f8 == 0) {
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010e516;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x2f8] == (OpenXRExtensionWrapperExtension)0x0 )) {
      local_f8._0_4_ = 0;
      local_f8._4_4_ = 0;
      local_e8 = (undefined1[16])0x0;
      local_128 = "_on_instance_created";
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
      local_120 = 0x14;
      String::parse_latin1((StrRange*)&local_f8);
      local_c0 = CONCAT44(local_c0._4_4_, 8);
      GetTypeInfo<unsigned_long,void>::get_class_info((GetTypeInfo<unsigned_long,void>*)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
      lVar3 = local_108;
      if (local_108 != 0) {
         LOCK();
         plVar4 = (long*)( local_108 + -0x10 );
         *plVar4 = *plVar4 + -1;
         UNLOCK();
         if (*plVar4 == 0) {
            local_108 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
         StringName::unref();
      }

      lVar3 = local_120;
      if (local_120 != 0) {
         LOCK();
         plVar4 = (long*)( local_120 + -0x10 );
         *plVar4 = *plVar4 + -1;
         UNLOCK();
         if (*plVar4 == 0) {
            local_120 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      Vector<int>::push_back(local_98, 8);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar3 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x300 ) = 0;
      pcVar5 = *(code**)( lVar3 + 0xd8 );
      if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xd0 ) ),pcVar5 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "OpenXRExtensionWrapperExtension");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120 == 0) {
            lVar3 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_120);
            if (StringName::configured != '\0') goto LAB_0010e7b7;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_0010e7d4:lVar3 = *(long*)( this + 8 );
            pcVar5 = *(code**)( lVar3 + 200 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_0010e70c;
            uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x2f0);
            *(undefined8*)( this + 0x300 ) = uVar2;
         }
 else {
            lVar3 = *(long*)( local_120 + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_120);
            if (StringName::configured != '\0') {
               LAB_0010e7b7:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar3 == 0) goto LAB_0010e7d4;
         }

         lVar3 = *(long*)( this + 8 );
      }
 else {
         uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x2f0, uVar1);
         *(undefined8*)( this + 0x300 ) = uVar2;
         lVar3 = *(long*)( this + 8 );
      }

      LAB_0010e70c:if (*(char*)( lVar3 + 0x29 ) != '\0') {
         plVar4 = (long*)operator_new(0x18, "");
         *plVar4 = (long)( this + 0x300 );
         plVar4[1] = (long)( this + 0x2f8 );
         plVar4[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar4;
      }

      this[0x2f8] = (OpenXRExtensionWrapperExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar5 = *(code**)( this + 0x300 );
   if (pcVar5 != (code*)0x0) {
      local_58[0] = &local_f8;
      local_f8 = param_1;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar5 )(*(undefined8*)( this + 0x10 ), local_58, 0);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x2f0, pcVar5, local_58, 0);
      }

   }

   LAB_0010e516:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* non-virtual thunk to OpenXRExtensionWrapperExtension::on_instance_created(XrInstance_T*) */void OpenXRExtensionWrapperExtension::on_instance_created(OpenXRExtensionWrapperExtension *this, XrInstance_T *param_1) {
   on_instance_created(this + -0x178, param_1);
   return;
}
/* OpenXRExtensionWrapperExtension::get_composition_layer_order(int) */int OpenXRExtensionWrapperExtension::get_composition_layer_order(OpenXRExtensionWrapperExtension *this, int param_1) {
   int iVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   undefined8 local_138;
   long local_130;
   char *local_128;
   long local_120;
   long local_118;
   long local_108;
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
   undefined8 local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   char **local_58[3];
   long local_40;
   plVar5 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar5 != (long*)0x0) {
      local_f8[0] = 0;
      local_f8[1] = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, param_1);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_58, plVar5, this + 0x290, &local_80, 1, local_f8);
      if (local_f8[0] == 0) {
         iVar1 = Variant::operator_cast_to_int((Variant*)local_58);
         if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010e9d2;
      }

      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x298] == (OpenXRExtensionWrapperExtension)0x0 )) {
      local_f8[0] = 0;
      local_f8[1] = 0;
      local_e8 = (undefined1[16])0x0;
      local_128 = "_get_composition_layer_order";
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
      local_120 = 0x1c;
      String::parse_latin1((StrRange*)local_f8);
      local_c0 = CONCAT44(local_c0._4_4_, 8);
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_128);
      PropertyInfo::operator =((PropertyInfo*)&uStack_f0, (PropertyInfo*)&local_128);
      lVar4 = local_108;
      if (local_108 != 0) {
         LOCK();
         plVar5 = (long*)( local_108 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_108 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
         StringName::unref();
      }

      lVar4 = local_120;
      if (local_120 != 0) {
         LOCK();
         plVar5 = (long*)( local_120 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_120 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      local_a0 = CONCAT44(local_a0._4_4_, 3);
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
      lVar4 = local_108;
      if (local_108 != 0) {
         LOCK();
         plVar5 = (long*)( local_108 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_108 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
         StringName::unref();
      }

      lVar4 = local_120;
      if (local_120 != 0) {
         LOCK();
         plVar5 = (long*)( local_120 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_120 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      Vector<int>::push_back(local_98, 3);
      uVar2 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x2a0 ) = 0;
      pcVar6 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "OpenXRExtensionWrapperExtension");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120 == 0) {
            lVar4 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_120);
            if (StringName::configured != '\0') goto LAB_0010ed6b;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_0010ed88:lVar4 = *(long*)( this + 8 );
            pcVar6 = *(code**)( lVar4 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_0010ec95;
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x290);
            *(undefined8*)( this + 0x2a0 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_120 + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_120);
            if (StringName::configured != '\0') {
               LAB_0010ed6b:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar4 == 0) goto LAB_0010ed88;
         }

         lVar4 = *(long*)( this + 8 );
      }
 else {
         uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x290, uVar2);
         *(undefined8*)( this + 0x2a0 ) = uVar3;
         lVar4 = *(long*)( this + 8 );
      }

      LAB_0010ec95:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 0x2a0 );
         plVar5[1] = (long)( this + 0x298 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x298] = (OpenXRExtensionWrapperExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_f8);
   }

   pcVar6 = *(code**)( this + 0x2a0 );
   iVar1 = 0;
   if (pcVar6 != (code*)0x0) {
      local_58[0] = &local_128;
      local_128 = (char*)(long)param_1;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar6 )(*(undefined8*)( this + 0x10 ), local_58, local_f8);
         iVar1 = local_f8[0];
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x290, pcVar6, local_58, local_f8);
         iVar1 = local_f8[0];
      }

   }

   LAB_0010e9d2:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar1;
}
/* non-virtual thunk to OpenXRExtensionWrapperExtension::get_composition_layer_order(int) */void OpenXRExtensionWrapperExtension::get_composition_layer_order(OpenXRExtensionWrapperExtension *this, int param_1) {
   get_composition_layer_order(this + -0x180, param_1);
   return;
}
/* OpenXRExtensionWrapperExtension::get_composition_layer(int) */code * __thiscall
OpenXRExtensionWrapperExtension::get_composition_layer
          (OpenXRExtensionWrapperExtension *this,int param_1){
   undefined4 uVar1;
   code *pcVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   long in_FS_OFFSET;
   undefined8 local_138;
   long local_130;
   char *local_128;
   long local_120;
   long local_118;
   long local_108;
   int local_f8;
   undefined4 uStack_f4;
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   undefined1 local_e8[16];
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8[2];
   undefined8 local_a8;
   undefined8 local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   char **local_58[3];
   long local_40;
   plVar5 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar5 != (long*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, param_1);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_58, plVar5, this + 0x278, &local_80, 1, &local_f8);
      if (local_f8 == 0) {
         pcVar2 = (code*)Variant::operator_cast_to_unsigned_long((Variant*)local_58);
         if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010ef82;
      }

      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x280] == (OpenXRExtensionWrapperExtension)0x0 )) {
      local_f8 = 0;
      uStack_f4 = 0;
      local_e8 = (undefined1[16])0x0;
      local_128 = "_get_composition_layer";
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
      local_120 = 0x16;
      String::parse_latin1((StrRange*)&local_f8);
      local_c0 = CONCAT44(local_c0._4_4_, 8);
      GetTypeInfo<unsigned_long,void>::get_class_info((GetTypeInfo<unsigned_long,void>*)&local_128);
      PropertyInfo::operator =((PropertyInfo*)&uStack_f0, (PropertyInfo*)&local_128);
      lVar4 = local_108;
      if (local_108 != 0) {
         LOCK();
         plVar5 = (long*)( local_108 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_108 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
         StringName::unref();
      }

      lVar4 = local_120;
      if (local_120 != 0) {
         LOCK();
         plVar5 = (long*)( local_120 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_120 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      local_a0 = CONCAT44(local_a0._4_4_, 8);
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
      lVar4 = local_108;
      if (local_108 != 0) {
         LOCK();
         plVar5 = (long*)( local_108 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_108 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
         StringName::unref();
      }

      lVar4 = local_120;
      if (local_120 != 0) {
         LOCK();
         plVar5 = (long*)( local_120 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_120 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      Vector<int>::push_back(local_98, 3);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x288 ) = 0;
      pcVar2 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar2 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar2 = *(code**)( lVar4 + 0xd0 ) ),pcVar2 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "OpenXRExtensionWrapperExtension");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120 == 0) {
            lVar4 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_120);
            if (StringName::configured != '\0') goto LAB_0010f325;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_0010f342:lVar4 = *(long*)( this + 8 );
            pcVar2 = *(code**)( lVar4 + 200 );
            if (( ( pcVar2 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar2 = *(code**)( lVar4 + 0xc0 ) ),pcVar2 == (code*)0x0) goto LAB_0010f249;
            uVar3 = ( *pcVar2 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x278);
            *(undefined8*)( this + 0x288 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_120 + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_120);
            if (StringName::configured != '\0') {
               LAB_0010f325:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar4 == 0) goto LAB_0010f342;
         }

         lVar4 = *(long*)( this + 8 );
      }
 else {
         uVar3 = ( *pcVar2 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x278, uVar1);
         *(undefined8*)( this + 0x288 ) = uVar3;
         lVar4 = *(long*)( this + 8 );
      }

      LAB_0010f249:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 0x288 );
         plVar5[1] = (long)( this + 0x280 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x280] = (OpenXRExtensionWrapperExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar2 = *(code**)( this + 0x288 );
   if (pcVar2 != (code*)0x0) {
      local_58[0] = &local_128;
      local_128 = (char*)(long)param_1;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar2 )(*(undefined8*)( this + 0x10 ), local_58, &local_f8);
         pcVar2 = (code*)CONCAT44(uStack_f4, local_f8);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x278, pcVar2, local_58, &local_f8);
         pcVar2 = (code*)CONCAT44(uStack_f4, local_f8);
      }

   }

   LAB_0010ef82:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pcVar2;
}
/* non-virtual thunk to OpenXRExtensionWrapperExtension::get_composition_layer(int) */void OpenXRExtensionWrapperExtension::get_composition_layer(OpenXRExtensionWrapperExtension *this, int param_1) {
   get_composition_layer(this + -0x180, param_1);
   return;
}
/* OpenXRExtensionWrapperExtension::set_projection_views_and_get_next_pointer(int, void*) */code * __thiscall
OpenXRExtensionWrapperExtension::set_projection_views_and_get_next_pointer
          (OpenXRExtensionWrapperExtension *this,int param_1,void *param_2){
   undefined4 uVar1;
   code *pcVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   long in_FS_OFFSET;
   undefined8 local_158;
   long local_150;
   char *local_148;
   long local_140;
   long local_138;
   long local_128;
   int local_118;
   undefined4 uStack_114;
   undefined4 uStack_110;
   undefined4 uStack_10c;
   undefined1 local_108[16];
   undefined8 local_f8;
   undefined8 local_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   undefined8 local_d8[2];
   undefined8 local_c8;
   undefined8 local_c0;
   Vector<int> local_b8[8];
   undefined8 local_b0;
   Variant *local_a8;
   Variant *pVStack_a0;
   int local_98[8];
   long *local_78;
   char **ppcStack_70;
   int local_60[8];
   long local_40;
   plVar5 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar5 != (long*)0x0) {
      local_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      Variant::Variant((Variant*)&local_78, param_1);
      Variant::Variant((Variant*)local_60, (ulong)param_2);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = (Variant*)local_60;
      ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_98, plVar5, this + 0x248, &local_a8, 2, &local_118);
      if (local_118 == 0) {
         pcVar2 = (code*)Variant::operator_cast_to_unsigned_long((Variant*)local_98);
         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010f58f;
      }

      if (Variant::needs_deinit[local_98[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_60[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x250] == (OpenXRExtensionWrapperExtension)0x0 )) {
      local_118 = 0;
      uStack_114 = 0;
      local_108 = (undefined1[16])0x0;
      local_148 = "_set_projection_views_and_get_next_pointer";
      uStack_110 = 0;
      uStack_10c = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 6;
      local_e0 = 1;
      local_d8[0] = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b0 = 0;
      local_140 = 0x2a;
      String::parse_latin1((StrRange*)&local_118);
      local_e0 = CONCAT44(local_e0._4_4_, 8);
      GetTypeInfo<unsigned_long,void>::get_class_info((GetTypeInfo<unsigned_long,void>*)&local_148);
      PropertyInfo::operator =((PropertyInfo*)&uStack_110, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      local_c0 = CONCAT44(local_c0._4_4_, 8);
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 3);
      GetTypeInfo<GDExtensionPtr<void>,void>::get_class_info((GetTypeInfo<GDExtensionPtr<void>,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      lVar4 = local_128;
      if (local_128 != 0) {
         LOCK();
         plVar5 = (long*)( local_128 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_128 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_138 != 0 )) {
         StringName::unref();
      }

      lVar4 = local_140;
      if (local_140 != 0) {
         LOCK();
         plVar5 = (long*)( local_140 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_140 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      Vector<int>::push_back(local_b8, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( this + 600 ) = 0;
      lVar4 = *(long*)( this + 8 );
      pcVar2 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar2 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar2 = *(code**)( lVar4 + 0xd0 ) ),pcVar2 == (code*)0x0) {
         local_158 = 0;
         String::parse_latin1((String*)&local_158, "OpenXRExtensionWrapperExtension");
         StringName::StringName((StringName*)&local_150, (String*)&local_158, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_148, (StringName*)&local_150);
         if (local_140 == 0) {
            lVar4 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_140);
            if (StringName::configured != '\0') goto LAB_0010f93f;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            LAB_0010f95e:lVar4 = *(long*)( this + 8 );
            pcVar2 = *(code**)( lVar4 + 200 );
            if (( ( pcVar2 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar2 = *(code**)( lVar4 + 0xc0 ) ),pcVar2 == (code*)0x0) goto LAB_0010f83d;
            uVar3 = ( *pcVar2 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x248);
            *(undefined8*)( this + 600 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_140 + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_140);
            if (StringName::configured != '\0') {
               LAB_0010f93f:if (local_150 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            if (lVar4 == 0) goto LAB_0010f95e;
         }

         lVar4 = *(long*)( this + 8 );
      }
 else {
         uVar3 = ( *pcVar2 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x248, uVar1);
         *(undefined8*)( this + 600 ) = uVar3;
         lVar4 = *(long*)( this + 8 );
      }

      LAB_0010f83d:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 600 );
         plVar5[1] = (long)( this + 0x250 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x250] = (OpenXRExtensionWrapperExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   }

   pcVar2 = *(code**)( this + 600 );
   if (pcVar2 != (code*)0x0) {
      ppcStack_70 = &local_148;
      local_150 = (long)param_1;
      local_78 = &local_150;
      local_148 = (char*)param_2;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar2 )(*(undefined8*)( this + 0x10 ), &local_78, &local_118);
         pcVar2 = (code*)CONCAT44(uStack_114, local_118);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x248, pcVar2, &local_78, &local_118);
         pcVar2 = (code*)CONCAT44(uStack_114, local_118);
      }

   }

   LAB_0010f58f:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pcVar2;
}
/* non-virtual thunk to
   OpenXRExtensionWrapperExtension::set_projection_views_and_get_next_pointer(int, void*) */void OpenXRExtensionWrapperExtension::set_projection_views_and_get_next_pointer(OpenXRExtensionWrapperExtension *this, int param_1, void *param_2) {
   set_projection_views_and_get_next_pointer(this + -0x178, param_1, param_2);
   return;
}
/* OpenXRExtensionWrapperExtension::set_hand_joint_locations_and_get_next_pointer(int, void*) */code * __thiscall
OpenXRExtensionWrapperExtension::set_hand_joint_locations_and_get_next_pointer
          (OpenXRExtensionWrapperExtension *this,int param_1,void *param_2){
   undefined4 uVar1;
   code *pcVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   long in_FS_OFFSET;
   undefined8 local_158;
   long local_150;
   char *local_148;
   long local_140;
   long local_138;
   long local_128;
   int local_118;
   undefined4 uStack_114;
   undefined4 uStack_110;
   undefined4 uStack_10c;
   undefined1 local_108[16];
   undefined8 local_f8;
   undefined8 local_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   undefined8 local_d8[2];
   undefined8 local_c8;
   undefined8 local_c0;
   Vector<int> local_b8[8];
   undefined8 local_b0;
   Variant *local_a8;
   Variant *pVStack_a0;
   int local_98[8];
   long *local_78;
   char **ppcStack_70;
   int local_60[8];
   long local_40;
   plVar5 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar5 != (long*)0x0) {
      local_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      Variant::Variant((Variant*)&local_78, param_1);
      Variant::Variant((Variant*)local_60, (ulong)param_2);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = (Variant*)local_60;
      ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_98, plVar5, this + 0x230, &local_a8, 2, &local_118);
      if (local_118 == 0) {
         pcVar2 = (code*)Variant::operator_cast_to_unsigned_long((Variant*)local_98);
         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010fb9f;
      }

      if (Variant::needs_deinit[local_98[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_60[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x238] == (OpenXRExtensionWrapperExtension)0x0 )) {
      local_118 = 0;
      uStack_114 = 0;
      local_108 = (undefined1[16])0x0;
      local_148 = "_set_hand_joint_locations_and_get_next_pointer";
      uStack_110 = 0;
      uStack_10c = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 6;
      local_e0 = 1;
      local_d8[0] = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b0 = 0;
      local_140 = 0x2e;
      String::parse_latin1((StrRange*)&local_118);
      local_e0 = CONCAT44(local_e0._4_4_, 8);
      GetTypeInfo<unsigned_long,void>::get_class_info((GetTypeInfo<unsigned_long,void>*)&local_148);
      PropertyInfo::operator =((PropertyInfo*)&uStack_110, (PropertyInfo*)&local_148);
      lVar4 = local_128;
      if (local_128 != 0) {
         LOCK();
         plVar5 = (long*)( local_128 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_128 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_138 != 0 )) {
         StringName::unref();
      }

      lVar4 = local_140;
      if (local_140 != 0) {
         LOCK();
         plVar5 = (long*)( local_140 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_140 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      local_c0 = CONCAT44(local_c0._4_4_, 8);
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 3);
      GetTypeInfo<GDExtensionPtr<void>,void>::get_class_info((GetTypeInfo<GDExtensionPtr<void>,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( this + 0x240 ) = 0;
      lVar4 = *(long*)( this + 8 );
      pcVar2 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar2 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar2 = *(code**)( lVar4 + 0xd0 ) ),pcVar2 == (code*)0x0) {
         local_158 = 0;
         String::parse_latin1((String*)&local_158, "OpenXRExtensionWrapperExtension");
         StringName::StringName((StringName*)&local_150, (String*)&local_158, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_148, (StringName*)&local_150);
         if (local_140 == 0) {
            lVar4 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_140);
            if (StringName::configured != '\0') goto LAB_0010ff4f;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            LAB_0010ff6e:lVar4 = *(long*)( this + 8 );
            pcVar2 = *(code**)( lVar4 + 200 );
            if (( ( pcVar2 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar2 = *(code**)( lVar4 + 0xc0 ) ),pcVar2 == (code*)0x0) goto LAB_0010fe4d;
            uVar3 = ( *pcVar2 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x230);
            *(undefined8*)( this + 0x240 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_140 + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_140);
            if (StringName::configured != '\0') {
               LAB_0010ff4f:if (local_150 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            if (lVar4 == 0) goto LAB_0010ff6e;
         }

         lVar4 = *(long*)( this + 8 );
      }
 else {
         uVar3 = ( *pcVar2 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x230, uVar1);
         *(undefined8*)( this + 0x240 ) = uVar3;
         lVar4 = *(long*)( this + 8 );
      }

      LAB_0010fe4d:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 0x240 );
         plVar5[1] = (long)( this + 0x238 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x238] = (OpenXRExtensionWrapperExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   }

   pcVar2 = *(code**)( this + 0x240 );
   if (pcVar2 != (code*)0x0) {
      ppcStack_70 = &local_148;
      local_150 = (long)param_1;
      local_78 = &local_150;
      local_148 = (char*)param_2;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar2 )(*(undefined8*)( this + 0x10 ), &local_78, &local_118);
         pcVar2 = (code*)CONCAT44(uStack_114, local_118);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x230, pcVar2, &local_78, &local_118);
         pcVar2 = (code*)CONCAT44(uStack_114, local_118);
      }

   }

   LAB_0010fb9f:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pcVar2;
}
/* non-virtual thunk to
   OpenXRExtensionWrapperExtension::set_hand_joint_locations_and_get_next_pointer(int, void*) */void OpenXRExtensionWrapperExtension::set_hand_joint_locations_and_get_next_pointer(OpenXRExtensionWrapperExtension *this, int param_1, void *param_2) {
   set_hand_joint_locations_and_get_next_pointer(this + -0x178, param_1, param_2);
   return;
}
/* OpenXRExtensionWrapperExtension::set_swapchain_create_info_and_get_next_pointer(void*) */code * __thiscall
OpenXRExtensionWrapperExtension::set_swapchain_create_info_and_get_next_pointer
          (OpenXRExtensionWrapperExtension *this,void *param_1){
   undefined4 uVar1;
   code *pcVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   long in_FS_OFFSET;
   undefined8 local_138;
   long local_130;
   char *local_128;
   long local_120;
   long local_118;
   long local_108;
   int local_f8;
   undefined4 uStack_f4;
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   undefined1 local_e8[16];
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8[2];
   undefined8 local_a8;
   undefined8 local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   char **local_58[3];
   long local_40;
   plVar5 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar5 != (long*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, (ulong)param_1);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_58, plVar5, this + 0x218, &local_80, 1, &local_f8);
      if (local_f8 == 0) {
         pcVar2 = (code*)Variant::operator_cast_to_unsigned_long((Variant*)local_58);
         if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0011015f;
      }

      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x220] == (OpenXRExtensionWrapperExtension)0x0 )) {
      local_f8 = 0;
      uStack_f4 = 0;
      local_e8 = (undefined1[16])0x0;
      local_128 = "_set_swapchain_create_info_and_get_next_pointer";
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
      local_120 = 0x2f;
      String::parse_latin1((StrRange*)&local_f8);
      local_c0 = CONCAT44(local_c0._4_4_, 8);
      GetTypeInfo<unsigned_long,void>::get_class_info((GetTypeInfo<unsigned_long,void>*)&local_128);
      PropertyInfo::operator =((PropertyInfo*)&uStack_f0, (PropertyInfo*)&local_128);
      lVar4 = local_108;
      if (local_108 != 0) {
         LOCK();
         plVar5 = (long*)( local_108 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_108 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
         StringName::unref();
      }

      lVar4 = local_120;
      if (local_120 != 0) {
         LOCK();
         plVar5 = (long*)( local_120 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_120 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      local_a0 = CONCAT44(local_a0._4_4_, 8);
      GetTypeInfo<GDExtensionPtr<void>,void>::get_class_info((GetTypeInfo<GDExtensionPtr<void>,void>*)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
      lVar4 = local_108;
      if (local_108 != 0) {
         LOCK();
         plVar5 = (long*)( local_108 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_108 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
         StringName::unref();
      }

      lVar4 = local_120;
      if (local_120 != 0) {
         LOCK();
         plVar5 = (long*)( local_120 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_120 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      Vector<int>::push_back(local_98, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x228 ) = 0;
      pcVar2 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar2 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar2 = *(code**)( lVar4 + 0xd0 ) ),pcVar2 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "OpenXRExtensionWrapperExtension");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120 == 0) {
            lVar4 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_120);
            if (StringName::configured != '\0') goto LAB_001104f5;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_00110512:lVar4 = *(long*)( this + 8 );
            pcVar2 = *(code**)( lVar4 + 200 );
            if (( ( pcVar2 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar2 = *(code**)( lVar4 + 0xc0 ) ),pcVar2 == (code*)0x0) goto LAB_00110422;
            uVar3 = ( *pcVar2 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x218);
            *(undefined8*)( this + 0x228 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_120 + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_120);
            if (StringName::configured != '\0') {
               LAB_001104f5:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar4 == 0) goto LAB_00110512;
         }

         lVar4 = *(long*)( this + 8 );
      }
 else {
         uVar3 = ( *pcVar2 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x218, uVar1);
         *(undefined8*)( this + 0x228 ) = uVar3;
         lVar4 = *(long*)( this + 8 );
      }

      LAB_00110422:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 0x228 );
         plVar5[1] = (long)( this + 0x220 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x220] = (OpenXRExtensionWrapperExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar2 = *(code**)( this + 0x228 );
   if (pcVar2 != (code*)0x0) {
      local_58[0] = &local_128;
      local_128 = (char*)param_1;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar2 )(*(undefined8*)( this + 0x10 ), local_58, &local_f8);
         pcVar2 = (code*)CONCAT44(uStack_f4, local_f8);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x218, pcVar2, local_58, &local_f8);
         pcVar2 = (code*)CONCAT44(uStack_f4, local_f8);
      }

   }

   LAB_0011015f:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pcVar2;
}
/* non-virtual thunk to
   OpenXRExtensionWrapperExtension::set_swapchain_create_info_and_get_next_pointer(void*) */void OpenXRExtensionWrapperExtension::set_swapchain_create_info_and_get_next_pointer(OpenXRExtensionWrapperExtension *this, void *param_1) {
   set_swapchain_create_info_and_get_next_pointer(this + -0x178, param_1);
   return;
}
/* OpenXRExtensionWrapperExtension::set_session_create_and_get_next_pointer(void*) */code * __thiscall
OpenXRExtensionWrapperExtension::set_session_create_and_get_next_pointer
          (OpenXRExtensionWrapperExtension *this,void *param_1){
   undefined4 uVar1;
   code *pcVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   long in_FS_OFFSET;
   undefined8 local_138;
   long local_130;
   char *local_128;
   long local_120;
   long local_118;
   long local_108;
   int local_f8;
   undefined4 uStack_f4;
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   undefined1 local_e8[16];
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8[2];
   undefined8 local_a8;
   undefined8 local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   char **local_58[3];
   long local_40;
   plVar5 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar5 != (long*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, (ulong)param_1);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_58, plVar5, this + 0x200, &local_80, 1, &local_f8);
      if (local_f8 == 0) {
         pcVar2 = (code*)Variant::operator_cast_to_unsigned_long((Variant*)local_58);
         if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0011070f;
      }

      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x208] == (OpenXRExtensionWrapperExtension)0x0 )) {
      local_f8 = 0;
      uStack_f4 = 0;
      local_e8 = (undefined1[16])0x0;
      local_128 = "_set_session_create_and_get_next_pointer";
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
      local_120 = 0x28;
      String::parse_latin1((StrRange*)&local_f8);
      local_c0 = CONCAT44(local_c0._4_4_, 8);
      GetTypeInfo<unsigned_long,void>::get_class_info((GetTypeInfo<unsigned_long,void>*)&local_128);
      PropertyInfo::operator =((PropertyInfo*)&uStack_f0, (PropertyInfo*)&local_128);
      lVar4 = local_108;
      if (local_108 != 0) {
         LOCK();
         plVar5 = (long*)( local_108 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_108 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
         StringName::unref();
      }

      lVar4 = local_120;
      if (local_120 != 0) {
         LOCK();
         plVar5 = (long*)( local_120 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_120 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      local_a0 = CONCAT44(local_a0._4_4_, 8);
      GetTypeInfo<GDExtensionPtr<void>,void>::get_class_info((GetTypeInfo<GDExtensionPtr<void>,void>*)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
      lVar4 = local_108;
      if (local_108 != 0) {
         LOCK();
         plVar5 = (long*)( local_108 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_108 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
         StringName::unref();
      }

      lVar4 = local_120;
      if (local_120 != 0) {
         LOCK();
         plVar5 = (long*)( local_120 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_120 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      Vector<int>::push_back(local_98, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x210 ) = 0;
      pcVar2 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar2 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar2 = *(code**)( lVar4 + 0xd0 ) ),pcVar2 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "OpenXRExtensionWrapperExtension");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120 == 0) {
            lVar4 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_120);
            if (StringName::configured != '\0') goto LAB_00110aa5;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_00110ac2:lVar4 = *(long*)( this + 8 );
            pcVar2 = *(code**)( lVar4 + 200 );
            if (( ( pcVar2 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar2 = *(code**)( lVar4 + 0xc0 ) ),pcVar2 == (code*)0x0) goto LAB_001109d2;
            uVar3 = ( *pcVar2 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x200);
            *(undefined8*)( this + 0x210 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_120 + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_120);
            if (StringName::configured != '\0') {
               LAB_00110aa5:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar4 == 0) goto LAB_00110ac2;
         }

         lVar4 = *(long*)( this + 8 );
      }
 else {
         uVar3 = ( *pcVar2 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x200, uVar1);
         *(undefined8*)( this + 0x210 ) = uVar3;
         lVar4 = *(long*)( this + 8 );
      }

      LAB_001109d2:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 0x210 );
         plVar5[1] = (long)( this + 0x208 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x208] = (OpenXRExtensionWrapperExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar2 = *(code**)( this + 0x210 );
   if (pcVar2 != (code*)0x0) {
      local_58[0] = &local_128;
      local_128 = (char*)param_1;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar2 )(*(undefined8*)( this + 0x10 ), local_58, &local_f8);
         pcVar2 = (code*)CONCAT44(uStack_f4, local_f8);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x200, pcVar2, local_58, &local_f8);
         pcVar2 = (code*)CONCAT44(uStack_f4, local_f8);
      }

   }

   LAB_0011070f:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pcVar2;
}
/* non-virtual thunk to
   OpenXRExtensionWrapperExtension::set_session_create_and_get_next_pointer(void*) */void OpenXRExtensionWrapperExtension::set_session_create_and_get_next_pointer(OpenXRExtensionWrapperExtension *this, void *param_1) {
   set_session_create_and_get_next_pointer(this + -0x178, param_1);
   return;
}
/* OpenXRExtensionWrapperExtension::set_instance_create_info_and_get_next_pointer(void*) */code * __thiscall
OpenXRExtensionWrapperExtension::set_instance_create_info_and_get_next_pointer
          (OpenXRExtensionWrapperExtension *this,void *param_1){
   undefined4 uVar1;
   code *pcVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   long in_FS_OFFSET;
   undefined8 local_138;
   long local_130;
   char *local_128;
   long local_120;
   long local_118;
   long local_108;
   int local_f8;
   undefined4 uStack_f4;
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   undefined1 local_e8[16];
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8[2];
   undefined8 local_a8;
   undefined8 local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   char **local_58[3];
   long local_40;
   plVar5 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar5 != (long*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, (ulong)param_1);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_58, plVar5, this + 0x1e8, &local_80, 1, &local_f8);
      if (local_f8 == 0) {
         pcVar2 = (code*)Variant::operator_cast_to_unsigned_long((Variant*)local_58);
         if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00110cbf;
      }

      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x1f0] == (OpenXRExtensionWrapperExtension)0x0 )) {
      local_f8 = 0;
      uStack_f4 = 0;
      local_e8 = (undefined1[16])0x0;
      local_128 = "_set_instance_create_info_and_get_next_pointer";
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
      local_120 = 0x2e;
      String::parse_latin1((StrRange*)&local_f8);
      local_c0 = CONCAT44(local_c0._4_4_, 8);
      GetTypeInfo<unsigned_long,void>::get_class_info((GetTypeInfo<unsigned_long,void>*)&local_128);
      PropertyInfo::operator =((PropertyInfo*)&uStack_f0, (PropertyInfo*)&local_128);
      lVar4 = local_108;
      if (local_108 != 0) {
         LOCK();
         plVar5 = (long*)( local_108 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_108 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
         StringName::unref();
      }

      lVar4 = local_120;
      if (local_120 != 0) {
         LOCK();
         plVar5 = (long*)( local_120 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_120 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      local_a0 = CONCAT44(local_a0._4_4_, 8);
      GetTypeInfo<GDExtensionPtr<void>,void>::get_class_info((GetTypeInfo<GDExtensionPtr<void>,void>*)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
      lVar4 = local_108;
      if (local_108 != 0) {
         LOCK();
         plVar5 = (long*)( local_108 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_108 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
         StringName::unref();
      }

      lVar4 = local_120;
      if (local_120 != 0) {
         LOCK();
         plVar5 = (long*)( local_120 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_120 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      Vector<int>::push_back(local_98, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x1f8 ) = 0;
      pcVar2 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar2 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar2 = *(code**)( lVar4 + 0xd0 ) ),pcVar2 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "OpenXRExtensionWrapperExtension");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120 == 0) {
            lVar4 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_120);
            if (StringName::configured != '\0') goto LAB_00111051;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_0011106e:lVar4 = *(long*)( this + 8 );
            pcVar2 = *(code**)( lVar4 + 200 );
            if (( ( pcVar2 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar2 = *(code**)( lVar4 + 0xc0 ) ),pcVar2 == (code*)0x0) goto LAB_00110f82;
            uVar3 = ( *pcVar2 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x1e8);
            *(undefined8*)( this + 0x1f8 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_120 + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_120);
            if (StringName::configured != '\0') {
               LAB_00111051:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar4 == 0) goto LAB_0011106e;
         }

         lVar4 = *(long*)( this + 8 );
      }
 else {
         uVar3 = ( *pcVar2 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x1e8, uVar1);
         *(undefined8*)( this + 0x1f8 ) = uVar3;
         lVar4 = *(long*)( this + 8 );
      }

      LAB_00110f82:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 0x1f8 );
         plVar5[1] = (long)( this + 0x1f0 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x1f0] = (OpenXRExtensionWrapperExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar2 = *(code**)( this + 0x1f8 );
   if (pcVar2 != (code*)0x0) {
      local_58[0] = &local_128;
      local_128 = (char*)param_1;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar2 )(*(undefined8*)( this + 0x10 ), local_58, &local_f8);
         pcVar2 = (code*)CONCAT44(uStack_f4, local_f8);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x1e8, pcVar2, local_58, &local_f8);
         pcVar2 = (code*)CONCAT44(uStack_f4, local_f8);
      }

   }

   LAB_00110cbf:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pcVar2;
}
/* non-virtual thunk to
   OpenXRExtensionWrapperExtension::set_instance_create_info_and_get_next_pointer(void*) */void OpenXRExtensionWrapperExtension::set_instance_create_info_and_get_next_pointer(OpenXRExtensionWrapperExtension *this, void *param_1) {
   set_instance_create_info_and_get_next_pointer(this + -0x178, param_1);
   return;
}
/* OpenXRExtensionWrapperExtension::set_system_properties_and_get_next_pointer(void*) */code * __thiscall
OpenXRExtensionWrapperExtension::set_system_properties_and_get_next_pointer
          (OpenXRExtensionWrapperExtension *this,void *param_1){
   undefined4 uVar1;
   code *pcVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   long in_FS_OFFSET;
   undefined8 local_138;
   long local_130;
   char *local_128;
   long local_120;
   long local_118;
   long local_108;
   int local_f8;
   undefined4 uStack_f4;
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   undefined1 local_e8[16];
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8[2];
   undefined8 local_a8;
   undefined8 local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   char **local_58[3];
   long local_40;
   plVar5 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar5 != (long*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, (ulong)param_1);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_58, plVar5, this + 0x1d0, &local_80, 1, &local_f8);
      if (local_f8 == 0) {
         pcVar2 = (code*)Variant::operator_cast_to_unsigned_long((Variant*)local_58);
         if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0011125f;
      }

      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x1d8] == (OpenXRExtensionWrapperExtension)0x0 )) {
      local_f8 = 0;
      uStack_f4 = 0;
      local_e8 = (undefined1[16])0x0;
      local_128 = "_set_system_properties_and_get_next_pointer";
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
      local_120 = 0x2b;
      String::parse_latin1((StrRange*)&local_f8);
      local_c0 = CONCAT44(local_c0._4_4_, 8);
      GetTypeInfo<unsigned_long,void>::get_class_info((GetTypeInfo<unsigned_long,void>*)&local_128);
      PropertyInfo::operator =((PropertyInfo*)&uStack_f0, (PropertyInfo*)&local_128);
      lVar4 = local_108;
      if (local_108 != 0) {
         LOCK();
         plVar5 = (long*)( local_108 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_108 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
         StringName::unref();
      }

      lVar4 = local_120;
      if (local_120 != 0) {
         LOCK();
         plVar5 = (long*)( local_120 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_120 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      local_a0 = CONCAT44(local_a0._4_4_, 8);
      GetTypeInfo<GDExtensionPtr<void>,void>::get_class_info((GetTypeInfo<GDExtensionPtr<void>,void>*)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
      lVar4 = local_108;
      if (local_108 != 0) {
         LOCK();
         plVar5 = (long*)( local_108 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_108 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
         StringName::unref();
      }

      lVar4 = local_120;
      if (local_120 != 0) {
         LOCK();
         plVar5 = (long*)( local_120 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_120 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      Vector<int>::push_back(local_98, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x1e0 ) = 0;
      pcVar2 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar2 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar2 = *(code**)( lVar4 + 0xd0 ) ),pcVar2 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "OpenXRExtensionWrapperExtension");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120 == 0) {
            lVar4 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_120);
            if (StringName::configured != '\0') goto LAB_001115f5;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_00111612:lVar4 = *(long*)( this + 8 );
            pcVar2 = *(code**)( lVar4 + 200 );
            if (( ( pcVar2 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar2 = *(code**)( lVar4 + 0xc0 ) ),pcVar2 == (code*)0x0) goto LAB_00111522;
            uVar3 = ( *pcVar2 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x1d0);
            *(undefined8*)( this + 0x1e0 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_120 + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_120);
            if (StringName::configured != '\0') {
               LAB_001115f5:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar4 == 0) goto LAB_00111612;
         }

         lVar4 = *(long*)( this + 8 );
      }
 else {
         uVar3 = ( *pcVar2 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x1d0, uVar1);
         *(undefined8*)( this + 0x1e0 ) = uVar3;
         lVar4 = *(long*)( this + 8 );
      }

      LAB_00111522:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 0x1e0 );
         plVar5[1] = (long)( this + 0x1d8 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x1d8] = (OpenXRExtensionWrapperExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar2 = *(code**)( this + 0x1e0 );
   if (pcVar2 != (code*)0x0) {
      local_58[0] = &local_128;
      local_128 = (char*)param_1;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar2 )(*(undefined8*)( this + 0x10 ), local_58, &local_f8);
         pcVar2 = (code*)CONCAT44(uStack_f4, local_f8);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x1d0, pcVar2, local_58, &local_f8);
         pcVar2 = (code*)CONCAT44(uStack_f4, local_f8);
      }

   }

   LAB_0011125f:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pcVar2;
}
/* non-virtual thunk to
   OpenXRExtensionWrapperExtension::set_system_properties_and_get_next_pointer(void*) */void OpenXRExtensionWrapperExtension::set_system_properties_and_get_next_pointer(OpenXRExtensionWrapperExtension *this, void *param_1) {
   set_system_properties_and_get_next_pointer(this + -0x178, param_1);
   return;
}
/* OpenXRExtensionWrapperExtension::get_requested_extensions() */bool **OpenXRExtensionWrapperExtension::get_requested_extensions(void) {
   char cVar1;
   uint uVar2;
   void *pvVar3;
   long lVar4;
   int iVar5;
   undefined4 uVar6;
   ulong uVar7;
   long lVar8;
   undefined8 uVar9;
   long *plVar10;
   code *pcVar11;
   int iVar12;
   void *pvVar13;
   long in_RSI;
   bool **in_RDI;
   undefined8 *puVar14;
   long in_FS_OFFSET;
   char **local_180;
   bool **local_168;
   Dictionary local_158[8];
   Array local_150[8];
   long local_148;
   ulong local_140;
   char *local_138;
   long local_130[5];
   undefined8 local_108;
   undefined4 uStack_100;
   undefined4 uStack_fc;
   void *pvStack_f8;
   undefined8 *puStack_f0;
   undefined8 uStack_e8;
   undefined8 local_e0;
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_b8;
   ulong local_b0;
   undefined8 local_a0;
   int local_98[8];
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary(local_158);
   plVar10 = *(long**)( in_RSI + 0x98 );
   if (plVar10 == (long*)0x0) {
      LAB_00111799:if (( *(long*)( in_RSI + 8 ) != 0 ) && ( *(char*)( in_RSI + 0x1c0 ) == '\0' )) {
         local_108._0_4_ = 0;
         local_108._4_4_ = 0;
         pvStack_f8 = (void*)0x0;
         puStack_f0 = (undefined8*)0x0;
         local_138 = "_get_requested_extensions";
         uStack_100 = 0;
         uStack_fc = 0;
         uStack_e8 = 0;
         local_e0 = 0;
         local_d8 = 6;
         local_d0 = 1;
         local_c8 = 0;
         local_b8 = 0;
         local_b0 = 0;
         local_a0 = 0;
         local_130[0] = 0x19;
         String::parse_latin1((StrRange*)&local_108);
         local_d0 = CONCAT44(local_d0._4_4_, 8);
         GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void>*)&local_138);
         PropertyInfo::operator =((PropertyInfo*)&uStack_100, (PropertyInfo*)&local_138);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_138);
         local_b0 = local_b0 & 0xffffffff00000000;
         uVar6 = MethodInfo::get_compatibility_hash();
         *(undefined8*)( in_RSI + 0x1c8 ) = 0;
         lVar8 = *(long*)( in_RSI + 8 );
         pcVar11 = *(code**)( lVar8 + 0xd8 );
         if (( ( pcVar11 == (code*)0x0 ) || ( *(long*)( lVar8 + 0xe0 ) == 0 ) ) && ( pcVar11 = *(code**)( lVar8 + 0xd0 ) ),pcVar11 == (code*)0x0) {
            local_148 = 0;
            String::parse_latin1((String*)&local_148, "OpenXRExtensionWrapperExtension");
            StringName::StringName((StringName*)&local_140, (String*)&local_148, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_138, (StringName*)&local_140);
            if (local_130[0] == 0) {
               lVar8 = 0;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_130);
               if (StringName::configured != '\0') goto LAB_00111e6b;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
               LAB_00111e88:lVar8 = *(long*)( in_RSI + 8 );
               pcVar11 = *(code**)( lVar8 + 200 );
               if (( ( pcVar11 == (code*)0x0 ) || ( *(long*)( lVar8 + 0xe0 ) == 0 ) ) && ( pcVar11 = *(code**)( lVar8 + 0xc0 ) ),pcVar11 == (code*)0x0) goto LAB_00111dc1;
               uVar9 = ( *pcVar11 )(*(undefined8*)( lVar8 + 0xa0 ), in_RSI + 0x1b8);
               *(undefined8*)( in_RSI + 0x1c8 ) = uVar9;
            }
 else {
               lVar8 = *(long*)( local_130[0] + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_130);
               if (StringName::configured != '\0') {
                  LAB_00111e6b:if (local_140 != 0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
               if (lVar8 == 0) goto LAB_00111e88;
            }

            lVar8 = *(long*)( in_RSI + 8 );
         }
 else {
            uVar9 = ( *pcVar11 )(*(undefined8*)( lVar8 + 0xa0 ), in_RSI + 0x1b8, uVar6);
            *(undefined8*)( in_RSI + 0x1c8 ) = uVar9;
            lVar8 = *(long*)( in_RSI + 8 );
         }

         LAB_00111dc1:if (*(char*)( lVar8 + 0x29 ) != '\0') {
            plVar10 = (long*)operator_new(0x18, "");
            *plVar10 = in_RSI + 0x1c8;
            plVar10[1] = in_RSI + 0x1c0;
            plVar10[2] = *(long*)( in_RSI + 0x168 );
            *(long**)( in_RSI + 0x168 ) = plVar10;
         }

         *(undefined1*)( in_RSI + 0x1c0 ) = 1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_108);
      }

      if (*(long*)( in_RSI + 0x1c8 ) == 0) {
         in_RDI[5] = (bool*)0x2;
         *(undefined1(*) [16])( in_RDI + 1 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( in_RDI + 3 ) = (undefined1[16])0x0;
         goto LAB_001117c7;
      }

      Dictionary::Dictionary((Dictionary*)&local_138);
      pcVar11 = *(code**)( *(long*)( in_RSI + 8 ) + 0xe0 );
      if (pcVar11 == (code*)0x0) {
         ( **(code**)( in_RSI + 0x1c8 ) )(*(undefined8*)( in_RSI + 0x10 ), 0, (Dictionary*)&local_138);
      }
 else {
         ( *pcVar11 )(*(undefined8*)( in_RSI + 0x10 ), in_RSI + 0x1b8, *(undefined8*)( in_RSI + 0x1c8 ), 0, (Dictionary*)&local_138);
      }

      Dictionary::Dictionary((Dictionary*)&local_108, (Dictionary*)&local_138);
      Dictionary::operator =(local_158, (Dictionary*)&local_108);
      Dictionary::~Dictionary((Dictionary*)&local_108);
      Dictionary::~Dictionary((Dictionary*)&local_138);
   }
 else {
      local_108._0_4_ = 0;
      local_108._4_4_ = 0;
      uStack_100 = 0;
      ( **(code**)( *plVar10 + 0x60 ) )(local_58, plVar10, in_RSI + 0x1b8, 0, 0, &local_108);
      if ((int)local_108 != 0) {
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00111799;
      }

      Variant::operator_cast_to_Dictionary((Variant*)&local_138);
      Dictionary::operator =(local_158, (Dictionary*)&local_138);
      Dictionary::~Dictionary((Dictionary*)&local_138);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   local_168 = (bool**)&local_108;
   local_180 = &local_138;
   uStack_100 = 0;
   uStack_fc = 0;
   pvStack_f8 = (void*)0x0;
   local_e0 = 2;
   puStack_f0 = (undefined8*)0x0;
   uStack_e8 = 0;
   Dictionary::keys();
   for (iVar12 = 0; iVar5 = Array::size(),iVar12 < iVar5; iVar12 = iVar12 + 1) {
      Array::get((int)local_150);
      Variant::operator_cast_to_String((Variant*)&local_148);
      Variant::Variant((Variant*)local_78, 0);
      Variant::Variant((Variant*)local_98, (String*)&local_148);
      Dictionary::get((Variant*)local_58, (Variant*)local_158);
      uVar7 = Variant::operator_cast_to_unsigned_long((Variant*)local_58);
      if (Variant::needs_deinit[local_58[0]] == '\0') {
         if (Variant::needs_deinit[local_98[0]] == '\0') goto LAB_0011194d;
         LAB_00111b88:Variant::_clear_internal();
         cVar1 = Variant::needs_deinit[local_78[0]];
      }
 else {
         Variant::_clear_internal();
         if (Variant::needs_deinit[local_98[0]] != '\0') goto LAB_00111b88;
         LAB_0011194d:cVar1 = Variant::needs_deinit[local_78[0]];
      }

      if (cVar1 != '\0') {
         Variant::_clear_internal();
      }

      local_140 = uVar7;
      HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>::insert((String*)local_180, local_168, SUB81((Variant*)&local_148, 0));
      lVar8 = local_148;
      if (local_148 != 0) {
         LOCK();
         plVar10 = (long*)( local_148 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_148 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

   }

   in_RDI[5] = (bool*)0x0;
   *(undefined1(*) [16])( in_RDI + 1 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( in_RDI + 3 ) = (undefined1[16])0x0;
   uVar2 = *(uint*)( hash_table_size_primes + ( local_e0 & 0xffffffff ) * 4 );
   lVar8 = 1;
   if (5 < uVar2) {
      do {
         if (uVar2 <= *(uint*)( hash_table_size_primes + lVar8 * 4 )) {
            *(int*)( in_RDI + 5 ) = (int)lVar8;
            goto LAB_00111a38;
         }

         lVar8 = lVar8 + 1;
      }
 while ( lVar8 != 0x1d );
      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   }

   LAB_00111a38:pvVar13 = (void*)CONCAT44(uStack_fc, uStack_100);
   puVar14 = puStack_f0;
   if (local_e0._4_4_ == 0) {
      Array::~Array(local_150);
      LAB_00111b33:if (pvVar13 == (void*)0x0) goto LAB_001117c7;
   }
 else {
      for (; puVar14 != (undefined8*)0x0; puVar14 = (undefined8*)*puVar14) {
         HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>::insert((String*)local_180, in_RDI, (bool)( (char)puVar14 + '\x10' ));
      }

      Array::~Array(local_150);
      if (pvVar13 == (void*)0x0) goto LAB_001117c7;
      if (uVar2 != 0) {
         lVar8 = 0;
         do {
            if (*(int*)( (long)pvStack_f8 + lVar8 ) != 0) {
               *(int*)( (long)pvStack_f8 + lVar8 ) = 0;
               puVar14 = (undefined8*)( (long)pvVar13 + lVar8 * 2 );
               pvVar3 = (void*)*puVar14;
               if (*(long*)( (long)pvVar3 + 0x10 ) != 0) {
                  LOCK();
                  plVar10 = (long*)( *(long*)( (long)pvVar3 + 0x10 ) + -0x10 );
                  *plVar10 = *plVar10 + -1;
                  UNLOCK();
                  if (*plVar10 == 0) {
                     lVar4 = *(long*)( (long)pvVar3 + 0x10 );
                     *(undefined8*)( (long)pvVar3 + 0x10 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

                  pvVar13 = (void*)CONCAT44(uStack_fc, uStack_100);
                  puVar14 = (undefined8*)( (long)pvVar13 + lVar8 * 2 );
               }

               Memory::free_static(pvVar3, false);
               *puVar14 = 0;
            }

            lVar8 = lVar8 + 4;
         }
 while ( lVar8 != (ulong)uVar2 << 2 );
         local_e0 = local_e0 & 0xffffffff;
         puStack_f0 = (undefined8*)0x0;
         uStack_e8 = 0;
         goto LAB_00111b33;
      }

   }

   Memory::free_static(pvVar13, false);
   Memory::free_static(pvStack_f8, false);
   LAB_001117c7:Dictionary::~Dictionary(local_158);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return in_RDI;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* non-virtual thunk to OpenXRExtensionWrapperExtension::get_requested_extensions() */void OpenXRExtensionWrapperExtension::get_requested_extensions(OpenXRExtensionWrapperExtension *this) {
   get_requested_extensions();
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
/* OpenXRExtensionWrapperExtension::is_class_ptr(void*) const */uint OpenXRExtensionWrapperExtension::is_class_ptr(OpenXRExtensionWrapperExtension *this, void *param_1) {
   return (uint)CONCAT71(0x1174, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1174, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}
/* OpenXRExtensionWrapperExtension::_getv(StringName const&, Variant&) const */undefined8 OpenXRExtensionWrapperExtension::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* OpenXRExtensionWrapperExtension::_setv(StringName const&, Variant const&) */undefined8 OpenXRExtensionWrapperExtension::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* OpenXRExtensionWrapperExtension::_validate_propertyv(PropertyInfo&) const */void OpenXRExtensionWrapperExtension::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* OpenXRExtensionWrapperExtension::_property_can_revertv(StringName const&) const */undefined8 OpenXRExtensionWrapperExtension::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* OpenXRExtensionWrapperExtension::_property_get_revertv(StringName const&, Variant&) const */undefined8 OpenXRExtensionWrapperExtension::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* OpenXRExtensionWrapperExtension::_notificationv(int, bool) */void OpenXRExtensionWrapperExtension::_notificationv(int param_1, bool param_2) {
   return;
}
/* MethodBindT<>::_gen_argument_type(int) const */undefined8 MethodBindT<>::_gen_argument_type(int param_1) {
   return 0;
}
/* MethodBindT<>::_gen_argument_type_info(int) const */undefined8 MethodBindT<>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   *(undefined4*)CONCAT44(in_register_0000003c, param_1) = 0;
   *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x18 ) = 0;
   *(undefined8*)( CONCAT44(in_register_0000003c, param_1) + 0x20 ) = 0;
   *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x28 ) = 6;
   *(undefined1(*) [16])( CONCAT44(in_register_0000003c, param_1) + 8 ) = (undefined1[16])0x0;
   return CONCAT44(in_register_0000003c, param_1);
}
/* MethodBindT<>::get_argument_meta(int) const */undefined8 MethodBindT<>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<Ref<OpenXRAPIExtension>>::_gen_argument_type(int) const */undefined8 MethodBindTR<Ref<OpenXRAPIExtension>>::_gen_argument_type(int param_1) {
   return 0x18;
}
/* MethodBindTR<Ref<OpenXRAPIExtension>>::get_argument_meta(int) const */undefined8 MethodBindTR<Ref<OpenXRAPIExtension>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<Ref<OpenXRAPIExtension>>::~MethodBindTR() */void MethodBindTR<Ref<OpenXRAPIExtension>>::~MethodBindTR(MethodBindTR<Ref<OpenXRAPIExtension>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001173d0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Ref<OpenXRAPIExtension>>::~MethodBindTR() */void MethodBindTR<Ref<OpenXRAPIExtension>>::~MethodBindTR(MethodBindTR<Ref<OpenXRAPIExtension>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001173d0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00117430;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00117430;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<int>::_copy_on_write(void) {
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
/* OpenXRExtensionWrapperExtension::_bind_methods() [clone .cold] */void OpenXRExtensionWrapperExtension::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* OpenXRExtensionWrapperExtension::_get_class_namev() const */undefined8 *OpenXRExtensionWrapperExtension::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00112543:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00112543;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "OpenXRExtensionWrapperExtension");
         goto LAB_001125ae;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "OpenXRExtensionWrapperExtension");
   LAB_001125ae:return &_get_class_namev();
}
/* OpenXRExtensionWrapperExtension::get_class() const */void OpenXRExtensionWrapperExtension::get_class(void) {
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
/* MethodBindTR<Ref<OpenXRAPIExtension>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<Ref<OpenXRAPIExtension>>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = "OpenXRAPIExtension";
   local_40 = 0x12;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x18;
   puVar3[6] = 0x11;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] != 0x11) {
         StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
         goto LAB_00112780;
      }

   }

   StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( puVar3 + 8 ), false);
   if (*(char**)( puVar3 + 4 ) == local_48) {
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      *(char**)( puVar3 + 4 ) = local_48;
   }

   LAB_00112780:lVar2 = local_58;
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

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRExtensionWrapperExtension::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */void OpenXRExtensionWrapperExtension::_get_property_listv(List *param_1, bool param_2) {
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
   local_78 = "OpenXRExtensionWrapperExtension";
   local_70 = 0x1f;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "OpenXRExtensionWrapperExtension";
   local_98 = 0;
   local_70 = 0x1f;
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
      LAB_001129c8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001129c8;
      StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x001129e6;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x001129e6:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "OpenXRExtensionWrapperExtension", false);
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
/* OpenXRExtensionWrapperExtension::is_class(String const&) const */undefined8 OpenXRExtensionWrapperExtension::is_class(OpenXRExtensionWrapperExtension *this, String *param_1) {
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
                  if (lVar5 == 0) goto LAB_00112cbf;
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

      LAB_00112cbf:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00112d73;
   }

   cVar6 = String::operator ==((String*)param_1, "OpenXRExtensionWrapperExtension");
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
                     if (lVar5 == 0) goto LAB_00112e23;
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

         LAB_00112e23:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00112d73;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==((String*)param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_00112d73:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
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
/* GetTypeInfo<bool, void>::get_class_info() */GetTypeInfo<bool,void> * __thiscall
GetTypeInfo<bool,void>::get_class_info(GetTypeInfo<bool,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC7;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
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
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( this + 0x20 ), false);
         if (*(undefined**)( this + 0x10 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0011310c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0011310c:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

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
/* GetTypeInfo<int, void>::get_class_info() */GetTypeInfo<int,void> * __thiscall
GetTypeInfo<int,void>::get_class_info(GetTypeInfo<int,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC7;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 2;
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
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( this + 0x20 ), false);
         if (*(undefined**)( this + 0x10 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0011328c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0011328c:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

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
/* GetTypeInfo<unsigned long, void>::get_class_info() */GetTypeInfo<unsigned_long,void> * __thiscall
GetTypeInfo<unsigned_long,void>::get_class_info(GetTypeInfo<unsigned_long,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC7;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 2;
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
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( this + 0x20 ), false);
         if (*(undefined**)( this + 0x10 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0011340c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0011340c:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

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
/* GetTypeInfo<RID, void>::get_class_info() */GetTypeInfo<RID,void> * __thiscall
GetTypeInfo<RID,void>::get_class_info(GetTypeInfo<RID,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC7;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 0x17;
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
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( this + 0x20 ), false);
         if (*(undefined**)( this + 0x10 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0011358c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0011358c:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

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
/* GetTypeInfo<Dictionary, void>::get_class_info() */GetTypeInfo<Dictionary,void> * __thiscall
GetTypeInfo<Dictionary,void>::get_class_info(GetTypeInfo<Dictionary,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC7;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
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
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( this + 0x20 ), false);
         if (*(undefined**)( this + 0x10 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0011370c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0011370c:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

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
/* GetTypeInfo<Vector<String>, void>::get_class_info() */GetTypeInfo<Vector<String>,void> * __thiscall
GetTypeInfo<Vector<String>,void>::get_class_info(GetTypeInfo<Vector<String>,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC7;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 0x22;
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
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( this + 0x20 ), false);
         if (*(undefined**)( this + 0x10 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0011388c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0011388c:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

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
/* GetTypeInfo<TypedArray<Dictionary>, void>::get_class_info() */GetTypeInfo<TypedArray<Dictionary>,void> * __thiscall
GetTypeInfo<TypedArray<Dictionary>,void>::get_class_info
          (GetTypeInfo<TypedArray<Dictionary>,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_30 = 0;
   Variant::get_type_name(&local_38, 0x1b);
   *(undefined4*)this = 0x1c;
   *(undefined4*)( this + 0x18 ) = 0x1f;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_38 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_38);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) == 0x11) {
         StringName::StringName((StringName*)&local_28, (CowData<char32_t>*)( this + 0x20 ), false);
         if (*(long*)( this + 0x10 ) == local_28) {
            lVar2 = local_38;
            if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
               StringName::unref();
               lVar2 = local_38;
            }

         }
 else {
            StringName::unref();
            *(long*)( this + 0x10 ) = local_28;
            lVar2 = local_38;
         }

         goto joined_r0x001139ec;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_30);
   lVar2 = local_38;
   joined_r0x001139ec:local_38 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_38 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_30 != 0 )) {
      StringName::unref();
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
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
   if (*(long*)( this + 0x28 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x28 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0x28 );
         *(undefined8*)( this + 0x28 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
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
         lVar3 = *(long*)( this + 0x10 );
         *(undefined8*)( this + 0x10 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* GetTypeInfo<GDExtensionPtr<void>, void>::get_class_info() */GetTypeInfo<GDExtensionPtr<void>,void> * __thiscall
GetTypeInfo<GDExtensionPtr<void>,void>::get_class_info(GetTypeInfo<GDExtensionPtr<void>,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC49;
   local_40 = 4;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 2;
   *(undefined4*)( this + 0x18 ) = 0x1e;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_58);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) == 0x11) {
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( this + 0x20 ), false);
         if (*(undefined**)( this + 0x10 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x001141dc;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x001141dc:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

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
/* GetTypeInfo<GDExtensionConstPtr<void>, void>::get_class_info() */GetTypeInfo<GDExtensionConstPtr<void>,void> * __thiscall
GetTypeInfo<GDExtensionConstPtr<void>,void>::get_class_info
          (GetTypeInfo<GDExtensionConstPtr<void>,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = "const void";
   local_40 = 10;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 2;
   *(undefined4*)( this + 0x18 ) = 0x1e;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_58);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) == 0x11) {
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( this + 0x20 ), false);
         if (*(char**)( this + 0x10 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(char**)( this + 0x10 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0011436c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0011436c:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

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
/* MethodBind* create_method_bind<OpenXRExtensionWrapperExtension,
   Ref<OpenXRAPIExtension>>(Ref<OpenXRAPIExtension> (OpenXRExtensionWrapperExtension::*)()) */MethodBind *create_method_bind<OpenXRExtensionWrapperExtension,Ref<OpenXRAPIExtension>>(_func_Ref *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_Ref**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001173d0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "OpenXRExtensionWrapperExtension";
   local_30 = 0x1f;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
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

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<OpenXRExtensionWrapperExtension>(void
   (OpenXRExtensionWrapperExtension::*)()) */MethodBind *create_method_bind<OpenXRExtensionWrapperExtension>(_func_void *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void**)( this + 0x58 ) = param_1;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   *(undefined***)this = &PTR__gen_argument_type_00117430;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "OpenXRExtensionWrapperExtension";
   local_30 = 0x1f;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
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

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
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
/* CowData<String>::_ref(CowData<String> const&) */void CowData<String>::_ref(CowData<String> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   if (*(long*)this == *(long*)param_1) {
      return;
   }

   _unref(this);
   if (*(long*)param_1 != 0) {
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
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
      LAB_00114af0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar10 == 0) goto LAB_00114af0;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_001149c9:if (lVar10 != lVar7) {
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
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_001149c9;
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
      goto LAB_00114b46;
   }

   if (lVar10 == lVar7) {
      LAB_00114a6f:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_00114b46:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_00114a5a;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_00114a6f;
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
   LAB_00114a5a:puVar9[-1] = param_1;
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
      LAB_00114e10:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar8 == 0) goto LAB_00114e10;
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
            goto LAB_00114d21;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_00114d21:puVar7[-1] = param_1;
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
/* OpenXRExtensionWrapperExtension::_initialize_classv() */void OpenXRExtensionWrapperExtension::_initialize_classv(void) {
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
      StringName::StringName((StringName*)&local_40, (StrRange*)&local_48, false);
      local_38 = "OpenXRExtensionWrapperExtension";
      local_50 = 0;
      local_30 = 0x1f;
      String::parse_latin1((StrRange*)&local_50);
      StringName::StringName((StringName*)&local_38, (StrRange*)&local_50, false);
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
            _bind_methods();
            initialize_class()::initialized = '\x01';
        goto LAB_00114e95
            ;;
         }

      }

      _bind_methods();
      initialize_class() {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* HashMap<String, bool*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, bool*> > >::_resize_and_rehash(unsigned int) */
   void HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>::_resize_and_rehash(HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>> *this, uint param_1) {
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
   /* HashMap<String, bool*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, bool*> > >::insert(String const&, bool* const&,
   bool) */
   String * HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>::insert(String * param_1, bool, **param_2, bool, param_3);
   {
      long *plVar1;
      long lVar2;
      bool *pbVar3;
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
      char cVar20;
      uint uVar21;
      uint uVar22;
      bool *pbVar23;
      ulong uVar24;
      undefined8 *in_RCX;
      int iVar25;
      uint uVar26;
      undefined7 in_register_00000011;
      CowData *pCVar27;
      long lVar28;
      bool *pbVar29;
      uint uVar30;
      char in_R8B;
      uint uVar31;
      ulong uVar32;
      undefined1(*pauVar33)[16];
      undefined1(*pauVar34)[16];
      undefined8 uVar35;
      uint uVar36;
      ulong uVar37;
      long in_FS_OFFSET;
      undefined1(*pauStack_a0)[16];
      long local_58;
      undefined8 local_50;
      long local_40;
      pCVar27 = (CowData*)CONCAT71(in_register_00000011, param_3);
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      uVar22 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 );
      if (param_2[1] == (bool*)0x0) {
         uVar32 = (ulong)uVar22;
         uVar24 = uVar32 * 4;
         uVar37 = uVar32 * 8;
         pbVar23 = (bool*)Memory::alloc_static(uVar24, false);
         param_2[2] = pbVar23;
         pbVar23 = (bool*)Memory::alloc_static(uVar37, false);
         param_2[1] = pbVar23;
         if (uVar22 != 0) {
            pbVar29 = param_2[2];
            if (( pbVar29 < pbVar23 + uVar37 ) && ( pbVar23 < pbVar29 + uVar24 )) {
               uVar24 = 0;
               do {
                  pbVar3 = pbVar29 + uVar24 * 4;
                  for (int i = 0; i < 4; i++) {
                     pbVar3[i] = false;
                  }

                  pbVar3 = pbVar23 + uVar24 * 8;
                  for (int i = 0; i < 8; i++) {
                     pbVar3[i] = false;
                  }

                  uVar24 = uVar24 + 1;
               }
 while ( uVar32 != uVar24 );
            }
 else {
               memset(pbVar29, 0, uVar24);
               memset(pbVar23, 0, uVar37);
            }

            goto LAB_0011535f;
         }

         iVar25 = *(int*)( (long)param_2 + 0x2c );
         if (pbVar23 == (bool*)0x0) goto LAB_0011536f;
         if (*(int*)( (long)param_2 + 0x2c ) != 0) goto LAB_001155c8;
         LAB_00115391:if (*(int*)( param_2 + 5 ) == 0x1c) {
            pauStack_a0 = (undefined1(*) [16])0x0;
            _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
            goto LAB_00115578;
         }

         _resize_and_rehash((HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>*)param_2, *(int*)( param_2 + 5 ) + 1);
      }
 else {
         LAB_0011535f:iVar25 = *(int*)( (long)param_2 + 0x2c );
         if (iVar25 != 0) {
            LAB_001155c8:uVar21 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 );
            lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 5 ) * 8 );
            uVar31 = String::hash();
            uVar24 = CONCAT44(0, uVar21);
            pbVar23 = param_2[2];
            uVar30 = 1;
            if (uVar31 != 0) {
               uVar30 = uVar31;
            }

            uVar36 = 0;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar30 * lVar2;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar24;
            lVar28 = SUB168(auVar8 * auVar16, 8);
            uVar31 = *(uint*)( pbVar23 + lVar28 * 4 );
            uVar26 = SUB164(auVar8 * auVar16, 8);
            if (uVar31 != 0) {
               do {
                  if (uVar30 == uVar31) {
                     cVar20 = String::operator ==((String*)( *(long*)( param_2[1] + lVar28 * 8 ) + 0x10 ), pCVar27);
                     if (cVar20 != '\0') {
                        pauStack_a0 = *(undefined1(**) [16])( param_2[1] + (ulong)uVar26 * 8 );
                        *(undefined8*)( pauStack_a0[1] + 8 ) = *in_RCX;
                        goto LAB_00115578;
                     }

                     pbVar23 = param_2[2];
                  }

                  uVar36 = uVar36 + 1;
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = ( ulong )(uVar26 + 1) * lVar2;
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = uVar24;
                  lVar28 = SUB168(auVar9 * auVar17, 8);
                  uVar31 = *(uint*)( pbVar23 + lVar28 * 4 );
                  uVar26 = SUB164(auVar9 * auVar17, 8);
               }
 while ( ( uVar31 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar31 * lVar2,auVar18._8_8_ = 0,auVar18._0_8_ = uVar24,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( uVar21 + uVar26 ) - SUB164(auVar10 * auVar18, 8)) * lVar2,auVar19._8_8_ = 0,auVar19._0_8_ = uVar24,uVar36 <= SUB164(auVar11 * auVar19, 8) );
            }

            iVar25 = *(int*)( (long)param_2 + 0x2c );
         }

         LAB_0011536f:if ((float)uVar22 * __LC75 < (float)( iVar25 + 1 )) goto LAB_00115391;
      }

      local_58 = 0;
      if (*(long*)pCVar27 == 0) {
         uVar35 = *in_RCX;
         pauStack_a0 = (undefined1(*) [16])operator_new(0x20, "");
         *(undefined8*)pauStack_a0[1] = 0;
         *pauStack_a0 = (undefined1[16])0x0;
         LAB_0011574f:pbVar23 = param_2[4];
         *(undefined8*)( pauStack_a0[1] + 8 ) = uVar35;
         if (pbVar23 != (bool*)0x0) goto LAB_00115464;
         LAB_00115761:param_2[3] = (bool*)pauStack_a0;
         param_2[4] = (bool*)pauStack_a0;
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, pCVar27);
         lVar2 = local_58;
         uVar35 = *in_RCX;
         local_50 = uVar35;
         pauStack_a0 = (undefined1(*) [16])operator_new(0x20, "");
         *(undefined8*)pauStack_a0[1] = 0;
         *(undefined8*)*pauStack_a0 = 0;
         *(undefined8*)( *pauStack_a0 + 8 ) = 0;
         if (lVar2 == 0) goto LAB_0011574f;
         CowData<char32_t>::_ref((CowData<char32_t>*)( pauStack_a0 + 1 ), (CowData*)&local_58);
         *(undefined8*)( pauStack_a0[1] + 8 ) = uVar35;
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_58 + -0x10 ), false);
         }

         pbVar23 = param_2[4];
         if (pbVar23 == (bool*)0x0) goto LAB_00115761;
         LAB_00115464:if (in_R8B == '\0') {
            *(undefined1(**) [16])pbVar23 = pauStack_a0;
            *(bool**)( *pauStack_a0 + 8 ) = pbVar23;
            param_2[4] = (bool*)pauStack_a0;
         }
 else {
            pbVar23 = param_2[3];
            *(undefined1(**) [16])( pbVar23 + 8 ) = pauStack_a0;
            *(bool**)*pauStack_a0 = pbVar23;
            param_2[3] = (bool*)pauStack_a0;
         }

      }

      uVar21 = String::hash();
      pbVar23 = param_2[2];
      uVar22 = 1;
      if (uVar21 != 0) {
         uVar22 = uVar21;
      }

      uVar37 = (ulong)uVar22;
      uVar21 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 );
      uVar24 = CONCAT44(0, uVar21);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 5 ) * 8 );
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar37 * lVar2;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar24;
      lVar28 = SUB168(auVar4 * auVar12, 8);
      pbVar3 = param_2[1];
      pbVar29 = pbVar23 + lVar28 * 4;
      iVar25 = SUB164(auVar4 * auVar12, 8);
      uVar30 = *(uint*)pbVar29;
      pauVar34 = pauStack_a0;
      if (uVar30 != 0) {
         uVar31 = 0;
         pauVar33 = pauStack_a0;
         do {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar30 * lVar2;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = uVar24;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ulong )(( uVar21 + iVar25 ) - SUB164(auVar5 * auVar13, 8)) * lVar2;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar24;
            uVar22 = SUB164(auVar6 * auVar14, 8);
            pauVar34 = pauVar33;
            if (uVar22 < uVar31) {
               *(uint*)pbVar29 = (uint)uVar37;
               uVar37 = (ulong)uVar30;
               pbVar29 = pbVar3 + lVar28 * 8;
               pauVar34 = *(undefined1(**) [16])pbVar29;
               *(undefined1(**) [16])pbVar29 = pauVar33;
               uVar31 = uVar22;
            }

            uVar22 = (uint)uVar37;
            uVar31 = uVar31 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = ( ulong )(iVar25 + 1) * lVar2;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar24;
            lVar28 = SUB168(auVar7 * auVar15, 8);
            pbVar29 = pbVar23 + lVar28 * 4;
            iVar25 = SUB164(auVar7 * auVar15, 8);
            uVar30 = *(uint*)pbVar29;
            pauVar33 = pauVar34;
         }
 while ( uVar30 != 0 );
      }

      *(undefined1(**) [16])( pbVar3 + lVar28 * 8 ) = pauVar34;
      *(uint*)pbVar29 = uVar22;
      *(int*)( (long)param_2 + 0x2c ) = *(int*)( (long)param_2 + 0x2c ) + 1;
      LAB_00115578:*(undefined1(**) [16])param_1 = pauStack_a0;
      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return param_1;
   }

   /* WARNING: Removing unreachable block (ram,0x001159e8) */
   /* WARNING: Removing unreachable block (ram,0x00115b18) */
   /* WARNING: Removing unreachable block (ram,0x00115ce0) */
   /* WARNING: Removing unreachable block (ram,0x00115b24) */
   /* WARNING: Removing unreachable block (ram,0x00115b2e) */
   /* WARNING: Removing unreachable block (ram,0x00115cc0) */
   /* WARNING: Removing unreachable block (ram,0x00115b3a) */
   /* WARNING: Removing unreachable block (ram,0x00115b44) */
   /* WARNING: Removing unreachable block (ram,0x00115ca0) */
   /* WARNING: Removing unreachable block (ram,0x00115b50) */
   /* WARNING: Removing unreachable block (ram,0x00115b5a) */
   /* WARNING: Removing unreachable block (ram,0x00115c80) */
   /* WARNING: Removing unreachable block (ram,0x00115b66) */
   /* WARNING: Removing unreachable block (ram,0x00115b70) */
   /* WARNING: Removing unreachable block (ram,0x00115c60) */
   /* WARNING: Removing unreachable block (ram,0x00115b7c) */
   /* WARNING: Removing unreachable block (ram,0x00115b86) */
   /* WARNING: Removing unreachable block (ram,0x00115c40) */
   /* WARNING: Removing unreachable block (ram,0x00115b92) */
   /* WARNING: Removing unreachable block (ram,0x00115b9c) */
   /* WARNING: Removing unreachable block (ram,0x00115c20) */
   /* WARNING: Removing unreachable block (ram,0x00115ba4) */
   /* WARNING: Removing unreachable block (ram,0x00115bba) */
   /* WARNING: Removing unreachable block (ram,0x00115bc6) */
   /* String vformat<StringName>(String const&, StringName const) */
   undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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

   /* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindT<>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      long lVar2;
      char *pcVar3;
      Variant *pVVar4;
      long *plVar5;
      undefined4 in_register_00000014;
      long *plVar6;
      int in_R8D;
      undefined4 *in_R9;
      long in_FS_OFFSET;
      long local_58;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      plVar6 = (long*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( plVar6 != (long*)0x0 ) && ( plVar6[1] != 0 ) ) && ( *(char*)( plVar6[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
         if (plVar6[1] == 0) {
            plVar5 = (long*)plVar6[0x23];
            if (plVar5 == (long*)0x0) {
               plVar5 = (long*)( **(code**)( *plVar6 + 0x40 ) )(plVar6);
            }

         }
 else {
            plVar5 = (long*)( plVar6[1] + 0x20 );
         }

         if (local_48 == (char*)*plVar5) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error(&_LC93, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
            pcVar3 = local_48;
            if (local_48 != (char*)0x0) {
               LOCK();
               plVar6 = (long*)( local_48 + -0x10 );
               *plVar6 = *plVar6 + -1;
               UNLOCK();
               if (*plVar6 == 0) {
                  local_48 = (char*)0x0;
                  Memory::free_static(pcVar3 + -0x10, false);
               }

            }

            lVar2 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar6 = (long*)( local_50 + -0x10 );
               *plVar6 = *plVar6 + -1;
               UNLOCK();
               if (*plVar6 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_00115e80;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pVVar4 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (in_R8D == 0) {
         if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
            *in_R9 = 0;
            if (( (ulong)pVVar4 & 1 ) != 0) {
               pVVar4 = *(Variant**)( pVVar4 + *(long*)( (long)plVar6 + (long)pVVar1 ) + -1 );
            }

            ( *(code*)pVVar4 )();
         }
 else {
            *in_R9 = 4;
            in_R9[2] = 0;
         }

      }
 else {
         *in_R9 = 3;
         in_R9[2] = 0;
      }

      LAB_00115e80:*(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindT<>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
      long *plVar1;
      long lVar2;
      char *pcVar3;
      code *UNRECOVERED_JUMPTABLE;
      Variant *pVVar4;
      long in_FS_OFFSET;
      long local_48;
      long local_40;
      char *local_38;
      undefined8 local_30;
      long local_20;
      local_20 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
         StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
         if (param_2[1] == (Variant*)0x0) {
            pVVar4 = param_2[0x23];
            if (pVVar4 == (Variant*)0x0) {
               pVVar4 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
            }

         }
 else {
            pVVar4 = param_2[1] + 0x20;
         }

         if (local_38 == *(char**)pVVar4) {
            if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_30 = 0x35;
            local_40 = 0;
            String::parse_latin1((StrRange*)&local_40);
            vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0, 0);
            pcVar3 = local_38;
            if (local_38 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_38 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_38 = (char*)0x0;
                  Memory::free_static(pcVar3 + -0x10, false);
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

            if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
               StringName::unref();
            }

            if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            goto LAB_0011630b;
         }

         if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
      if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
         UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
      }

      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Could not recover jumptable at 0x00116172. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
         return;
      }

      LAB_0011630b:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<>::ptrcall(Object *param_1, void **param_2, void *param_3) {
      long lVar1;
      char *pcVar2;
      code *UNRECOVERED_JUMPTABLE;
      long *plVar3;
      long in_FS_OFFSET;
      long local_48;
      long local_40;
      char *local_38;
      undefined8 local_30;
      long local_20;
      local_20 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
         if (param_2[1] == (void*)0x0) {
            plVar3 = (long*)param_2[0x23];
            if (plVar3 == (long*)0x0) {
               plVar3 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
            }

         }
 else {
            plVar3 = (long*)( (long)param_2[1] + 0x20 );
         }

         if (local_38 == (char*)*plVar3) {
            if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_30 = 0x35;
            local_40 = 0;
            String::parse_latin1((StrRange*)&local_40);
            vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0, 0);
            pcVar2 = local_38;
            if (local_38 != (char*)0x0) {
               LOCK();
               plVar3 = (long*)( local_38 + -0x10 );
               *plVar3 = *plVar3 + -1;
               UNLOCK();
               if (*plVar3 == 0) {
                  local_38 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }

            }

            lVar1 = local_40;
            if (local_40 != 0) {
               LOCK();
               plVar3 = (long*)( local_40 + -0x10 );
               *plVar3 = *plVar3 + -1;
               UNLOCK();
               if (*plVar3 == 0) {
                  local_40 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
               StringName::unref();
            }

            if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            goto LAB_0011650b;
         }

         if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
      if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
         UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
      }

      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Could not recover jumptable at 0x00116372. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
         return;
      }

      LAB_0011650b:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindTR<Ref<OpenXRAPIExtension>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */
   Object *MethodBindTR<Ref<OpenXRAPIExtension>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Object *pOVar1;
      Variant *pVVar2;
      long lVar3;
      Object *pOVar4;
      char cVar5;
      Variant *pVVar6;
      long *plVar7;
      undefined4 in_register_00000014;
      long *plVar8;
      int in_R8D;
      undefined4 *in_R9;
      long in_FS_OFFSET;
      long local_68;
      long local_60;
      Object *local_58;
      undefined8 local_50;
      undefined4 local_48[2];
      undefined8 local_40;
      undefined8 uStack_38;
      long local_30;
      plVar8 = (long*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (( ( plVar8 != (long*)0x0 ) && ( plVar8[1] != 0 ) ) && ( *(char*)( plVar8[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
         if (plVar8[1] == 0) {
            plVar7 = (long*)plVar8[0x23];
            if (plVar7 == (long*)0x0) {
               plVar7 = (long*)( **(code**)( *plVar8 + 0x40 ) )(plVar8);
            }

         }
 else {
            plVar7 = (long*)( plVar8[1] + 0x20 );
         }

         if (local_58 == (Object*)*plVar7) {
            if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_58 = (Object*)0x115d08;
            local_60 = 0;
            local_50 = 0x35;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error(&_LC93, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            pOVar4 = local_58;
            if (local_58 != (Object*)0x0) {
               LOCK();
               pOVar1 = local_58 + -0x10;
               *(long*)pOVar1 = *(long*)pOVar1 + -1;
               UNLOCK();
               if (*(long*)pOVar1 == 0) {
                  local_58 = (Object*)0x0;
                  Memory::free_static(pOVar4 + -0x10, false);
               }

            }

            lVar3 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar8 = (long*)( local_60 + -0x10 );
               *plVar8 = *plVar8 + -1;
               UNLOCK();
               if (*plVar8 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_001166b0;
         }

         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }

      }

      pVVar6 = param_2[0xb];
      pVVar2 = param_2[0xc];
      if (in_R8D == 0) {
         if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
            *in_R9 = 0;
            if (( (ulong)pVVar6 & 1 ) != 0) {
               pVVar6 = *(Variant**)( pVVar6 + *(long*)( (long)plVar8 + (long)pVVar2 ) + -1 );
            }

            ( *(code*)pVVar6 )(&local_58);
            Variant::Variant((Variant*)local_48, local_58);
            if (Variant::needs_deinit[*(int*)param_1] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)param_1 = local_48[0];
            *(undefined8*)( param_1 + 8 ) = local_40;
            *(undefined8*)( param_1 + 0x10 ) = uStack_38;
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

         }
 else {
            *in_R9 = 4;
            in_R9[2] = 0;
         }

      }
 else {
         *in_R9 = 3;
         in_R9[2] = 0;
      }

      LAB_001166b0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<Ref<OpenXRAPIExtension>>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTR<Ref<OpenXRAPIExtension>>::ptrcall(MethodBindTR<Ref<OpenXRAPIExtension>> *this, Object *param_1, void **param_2, void *param_3) {
      long lVar1;
      char cVar2;
      code *pcVar3;
      Object *pOVar4;
      long *plVar5;
      Object *extraout_RDX;
      Object *pOVar6;
      long in_FS_OFFSET;
      long local_58;
      long local_50;
      Object *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar5 = *(long**)( param_1 + 0x118 );
            if (plVar5 == (long*)0x0) {
               plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_48 == (Object*)*plVar5) {
            if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = (Object*)0x115d08;
            local_40 = 0x35;
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            pOVar6 = local_48;
            if (local_48 != (Object*)0x0) {
               LOCK();
               pOVar4 = local_48 + -0x10;
               *(void**)pOVar4 = (void*)( (long)*(void**)pOVar4 + -1 );
               UNLOCK();
               if (*(void**)pOVar4 == (void*)0x0) {
                  local_48 = (Object*)0x0;
                  Memory::free_static(pOVar6 + -0x10, false);
               }

            }

            lVar1 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar5 = (long*)( local_50 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_00116986;
         }

         param_2 = (void**)local_48;
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
            param_2 = (void**)extraout_RDX;
         }

      }

      pcVar3 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar3 & 1 ) != 0) {
         param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
         pcVar3 = *(code**)( (Object*)( (long)param_2 + -1 ) + (long)pcVar3 );
      }

      ( *pcVar3 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
      if (local_48 == (Object*)0x0) {
         /* WARNING: Load size is inaccurate */
         pOVar6 = *param_3;
         if (pOVar6 == (Object*)0x0) goto LAB_00116986;
         *(undefined8*)param_3 = 0;
         goto LAB_001169c9;
      }

      pOVar4 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
      /* WARNING: Load size is inaccurate */
      pOVar6 = *param_3;
      if (pOVar6 != pOVar4) {
         *(Object**)param_3 = pOVar4;
         if (pOVar4 == (Object*)0x0) {
            if (pOVar6 != (Object*)0x0) goto LAB_001169c9;
         }
 else {
            cVar2 = RefCounted::reference();
            if (cVar2 == '\0') {
               *(undefined8*)param_3 = 0;
            }

            if (pOVar6 != (Object*)0x0) {
               LAB_001169c9:cVar2 = RefCounted::unreference();
               if (cVar2 != '\0') {
                  cVar2 = predelete_handler(pOVar6);
                  if (cVar2 != '\0') {
                     ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
                     Memory::free_static(pOVar6, false);
                  }

               }

            }

            if (local_48 == (Object*)0x0) goto LAB_00116986;
         }

      }

      cVar2 = RefCounted::unreference();
      pOVar6 = local_48;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_48);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
            Memory::free_static(pOVar6, false);
         }

      }

      LAB_00116986:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<Ref<OpenXRAPIExtension>>::validated_call(Object*, Variant const**, Variant*) const
    */
   void MethodBindTR<Ref<OpenXRAPIExtension>>::validated_call(MethodBindTR<Ref<OpenXRAPIExtension>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      Variant **ppVVar1;
      Object *pOVar2;
      Object *pOVar3;
      Variant **ppVVar4;
      char cVar5;
      code *pcVar6;
      long *plVar7;
      Variant **extraout_RDX;
      long in_FS_OFFSET;
      long local_58;
      Object *local_50;
      Variant **local_48;
      Object *local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar7 = *(long**)( param_1 + 0x118 );
            if (plVar7 == (long*)0x0) {
               plVar7 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar7 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_48 == (Variant**)*plVar7) {
            if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = (Variant**)0x115d08;
            local_50 = (Object*)0x0;
            local_40 = (Object*)0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            ppVVar4 = local_48;
            if (local_48 != (Variant**)0x0) {
               LOCK();
               ppVVar1 = local_48 + -2;
               *ppVVar1 = *ppVVar1 + -1;
               UNLOCK();
               if (*ppVVar1 == (Variant*)0x0) {
                  local_48 = (Variant**)0x0;
                  Memory::free_static(ppVVar4 + -2, false);
               }

            }

            pOVar3 = local_50;
            if (local_50 != (Object*)0x0) {
               LOCK();
               pOVar2 = local_50 + -0x10;
               *(long*)pOVar2 = *(long*)pOVar2 + -1;
               UNLOCK();
               if (*(long*)pOVar2 == 0) {
                  local_50 = (Object*)0x0;
                  Memory::free_static(pOVar3 + -0x10, false);
               }

            }

            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_00116c46;
         }

         param_2 = local_48;
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
            param_2 = extraout_RDX;
         }

      }

      pcVar6 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar6 & 1 ) != 0) {
         param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
         pcVar6 = *(code**)( pcVar6 + (long)param_2 + -1 );
      }

      ( *pcVar6 )(&local_50, param_1 + *(long*)( this + 0x60 ), param_2);
      if (local_50 == (Object*)0x0) {
         Variant::ObjData::unref();
      }
 else {
         local_48 = *(Variant***)( local_50 + 0x60 );
         local_40 = local_50;
         Variant::ObjData::ref((ObjData*)( param_3 + 8 ));
      }

      if (local_50 != (Object*)0x0) {
         cVar5 = RefCounted::unreference();
         pOVar3 = local_50;
         if (cVar5 != '\0') {
            cVar5 = predelete_handler(local_50);
            if (cVar5 != '\0') {
               ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
               Memory::free_static(pOVar3, false);
            }

         }

      }

      LAB_00116c46:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodInfo::~MethodInfo() */
   void MethodInfo::~MethodInfo(MethodInfo *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* List<PropertyInfo, DefaultAllocator>::~List() */
   void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* PropertyInfo::~PropertyInfo() */
   void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<>::~MethodBindT() */
   void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTR<Ref<OpenXRAPIExtension>>::~MethodBindTR() */
   void MethodBindTR<Ref<OpenXRAPIExtension>>::~MethodBindTR(MethodBindTR<Ref<OpenXRAPIExtension>> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* StringName::~StringName() */
   void StringName::~StringName(StringName *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

}

