/* CollisionShape3D::resource_changed(Ref<Resource>) */void CollisionShape3D::resource_changed(void) {
   return;
}
/* CollisionShape3D::is_disabled() const */CollisionShape3D CollisionShape3D::is_disabled(CollisionShape3D *this) {
   return this[0x551];
}
/* CollisionShape3D::get_debug_color() const */undefined1  [16] __thiscallCollisionShape3D::get_debug_color(CollisionShape3D *this) {
   return *(undefined1(*) [16])( this + 0x540 );
}
/* CollisionShape3D::get_debug_fill_enabled() const */CollisionShape3D CollisionShape3D::get_debug_fill_enabled(CollisionShape3D *this) {
   return this[0x550];
}
/* CollisionShape3D::set_disabled(bool) */void CollisionShape3D::set_disabled(CollisionShape3D *this, bool param_1) {
   this[0x551] = (CollisionShape3D)param_1;
   Node3D::update_gizmos();
   if (*(long*)( this + 0x538 ) != 0) {
      CollisionObject3D::shape_owner_set_disabled(( uint ) * (long*)( this + 0x538 ), SUB41(*(undefined4*)( this + 0x530 ), 0));
      return;
   }

   return;
}
/* CollisionShape3D::set_debug_fill_enabled(bool) */void CollisionShape3D::set_debug_fill_enabled(CollisionShape3D *this, bool param_1) {
   if (this[0x550] != (CollisionShape3D)param_1) {
      this[0x550] = (CollisionShape3D)param_1;
      if (*(long*)( this + 0x528 ) != 0) {
         Shape3D::set_debug_fill(SUB81(*(long*)( this + 0x528 ), 0));
         return;
      }

   }

   return;
}
/* CollisionShape3D::set_debug_color(Color const&) */void CollisionShape3D::set_debug_color(CollisionShape3D *this, Color *param_1) {
   undefined8 uVar1;
   if (( ( ( *(float*)( this + 0x540 ) != *(float*)param_1 ) || ( *(float*)( this + 0x544 ) != *(float*)( param_1 + 4 ) ) ) || ( *(float*)( this + 0x548 ) != *(float*)( param_1 + 8 ) ) ) || ( *(float*)( this + 0x54c ) != *(float*)( param_1 + 0xc ) )) {
      uVar1 = *(undefined8*)( param_1 + 8 );
      *(undefined8*)( this + 0x540 ) = *(undefined8*)param_1;
      *(undefined8*)( this + 0x548 ) = uVar1;
      if (*(Color**)( this + 0x528 ) != (Color*)0x0) {
         Shape3D::set_debug_color(*(Color**)( this + 0x528 ));
         return;
      }

   }

   return;
}
/* CollisionShape3D::_shape_changed() */void CollisionShape3D::_shape_changed(void) {
   CollisionShape3D CVar1;
   CollisionShape3D *in_RDI;
   long in_FS_OFFSET;
   undefined8 uVar2;
   float in_XMM1_Da;
   float in_XMM1_Db;
   undefined8 local_28[3];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = Shape3D::get_debug_color();
   if (( ( ( (float)uVar2 != *(float*)( in_RDI + 0x540 ) ) || ( (float)( (ulong)uVar2 >> 0x20 ) != *(float*)( in_RDI + 0x544 ) ) ) || ( in_XMM1_Da != *(float*)( in_RDI + 0x548 ) ) ) || ( in_XMM1_Db != *(float*)( in_RDI + 0x54c ) )) {
      local_28[0] = Shape3D::get_debug_color();
      set_debug_color(in_RDI, (Color*)local_28);
   }

   CVar1 = (CollisionShape3D)Shape3D::get_debug_fill();
   if (( CVar1 != in_RDI[0x550] ) && ( CVar1 = (CollisionShape3D)Shape3D::get_debug_fill() ),CVar1 != in_RDI[0x550]) {
      in_RDI[0x550] = CVar1;
      if (*(long*)( in_RDI + 0x528 ) != 0) {
         if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Shape3D::set_debug_fill(SUB81(*(long*)( in_RDI + 0x528 ), 0));
            return;
         }

         goto LAB_00100253;
      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00100253:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CollisionShape3D::~CollisionShape3D() */void CollisionShape3D::~CollisionShape3D(CollisionShape3D *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR__initialize_classv_0010be78;
   if (*(long*)( this + 0x528 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x528 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            Node3D::~Node3D((Node3D*)this);
            return;
         }

      }

   }

   Node3D::~Node3D((Node3D*)this);
   return;
}
/* CollisionShape3D::~CollisionShape3D() */void CollisionShape3D::~CollisionShape3D(CollisionShape3D *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR__initialize_classv_0010be78;
   if (*(long*)( this + 0x528 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x528 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   Node3D::~Node3D((Node3D*)this);
   operator_delete(this, 0x558);
   return;
}
/* CollisionShape3D::get_shape() const */void CollisionShape3D::get_shape(void) {
   char cVar1;
   long in_RSI;
   long *in_RDI;
   *in_RDI = 0;
   if (*(long*)( in_RSI + 0x528 ) != 0) {
      *in_RDI = *(long*)( in_RSI + 0x528 );
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *in_RDI = 0;
      }

   }

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
/* CollisionShape3D::_update_in_shape_owner(bool) */void CollisionShape3D::_update_in_shape_owner(CollisionShape3D *this, bool param_1) {
   undefined8 uVar1;
   long lVar2;
   long in_FS_OFFSET;
   uVar1 = *(undefined8*)( this + 0x538 );
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   Node3D::get_transform();
   CollisionObject3D::shape_owner_set_transform((uint)uVar1, (Transform3D*)( ulong ) * (uint*)( this + 0x530 ));
   if (param_1) {
      if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      CollisionObject3D::shape_owner_set_disabled(( uint ) * (undefined8*)( this + 0x538 ), SUB41(*(undefined4*)( this + 0x530 ), 0));
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CollisionShape3D::_notification(int) */void CollisionShape3D::_notification(CollisionShape3D *this, int param_1) {
   long lVar1;
   undefined8 uVar2;
   uint uVar3;
   long lVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0x13) {
      if (*(long*)( this + 0x538 ) != 0) {
         CollisionObject3D::remove_shape_owner(( uint ) * (long*)( this + 0x538 ));
      }

      *(undefined4*)( this + 0x530 ) = 0;
      LAB_00100761:*(undefined8*)( this + 0x538 ) = 0;
   }
 else if (param_1 < 0x14) {
      if (param_1 == 10) {
         lVar4 = *(long*)( this + 0x538 );
         if (lVar4 != 0) {
            Node3D::get_transform();
            CollisionObject3D::shape_owner_set_transform((uint)lVar4, (Transform3D*)( ulong ) * (uint*)( this + 0x530 ));
            if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
               LAB_001006c0:CollisionObject3D::shape_owner_set_disabled(( uint ) * (undefined8*)( this + 0x538 ), SUB41(*(undefined4*)( this + 0x530 ), 0));
               return;
            }

            goto LAB_001007c7;
         }

      }
 else if (param_1 == 0x12) {
         lVar4 = Node::get_parent();
         if (lVar4 == 0) goto LAB_00100761;
         pOVar5 = (Object*)__dynamic_cast(lVar4, &Object::typeinfo, &CollisionObject3D::typeinfo, 0);
         *(Object**)( this + 0x538 ) = pOVar5;
         if (pOVar5 != (Object*)0x0) {
            uVar3 = CollisionObject3D::create_shape_owner(pOVar5);
            *(uint*)( this + 0x530 ) = uVar3;
            if (*(long*)( this + 0x528 ) != 0) {
               CollisionObject3D::shape_owner_add_shape(( uint ) * (undefined8*)( this + 0x538 ), (Ref*)(ulong)uVar3);
            }

            uVar2 = *(undefined8*)( this + 0x538 );
            Node3D::get_transform();
            CollisionObject3D::shape_owner_set_transform((uint)uVar2, (Transform3D*)( ulong ) * (uint*)( this + 0x530 ));
            if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_001007c7;
            goto LAB_001006c0;
         }

      }

   }
 else if (param_1 == 0x2c) {
      lVar4 = *(long*)( this + 0x538 );
      if (lVar4 != 0) {
         Node3D::get_transform();
         CollisionObject3D::shape_owner_set_transform((uint)lVar4, (Transform3D*)( ulong ) * (uint*)( this + 0x530 ));
      }

      if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Node::update_configuration_warnings();
         return;
      }

      goto LAB_001007c7;
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001007c7:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CollisionShape3D::_get_default_debug_color() const */undefined8 CollisionShape3D::_get_default_debug_color(void) {
   undefined8 uVar1;
   if (SceneTree::singleton != 0) {
      uVar1 = SceneTree::get_debug_collisions_color();
      return uVar1;
   }

   return 0;
}
/* CollisionShape3D::_property_can_revert(StringName const&) const */void CollisionShape3D::_property_can_revert(CollisionShape3D *this, StringName *param_1) {
   StringName::operator ==(param_1, "debug_color");
   return;
}
/* CollisionShape3D::_property_get_revert(StringName const&, Variant&) const */undefined4 CollisionShape3D::_property_get_revert(StringName *param_1, Variant *param_2) {
   undefined4 uVar1;
   int *in_RDX;
   long in_FS_OFFSET;
   undefined8 in_XMM1_Qa;
   undefined8 local_48;
   undefined8 uStack_40;
   int local_38[2];
   undefined8 local_30;
   undefined8 uStack_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = StringName::operator ==((StringName*)param_2, "debug_color");
   if ((char)uVar1 != '\0') {
      local_48 = 0;
      uStack_40 = 0;
      if (SceneTree::singleton != 0) {
         local_48 = SceneTree::get_debug_collisions_color();
         uStack_40 = in_XMM1_Qa;
      }

      Variant::Variant((Variant*)local_38, (Color*)&local_48);
      if (Variant::needs_deinit[*in_RDX] != '\0') {
         Variant::_clear_internal();
      }

      *in_RDX = local_38[0];
      *(undefined8*)( in_RDX + 2 ) = local_30;
      *(undefined8*)( in_RDX + 4 ) = uStack_28;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CollisionShape3D::_validate_property(PropertyInfo&) const */void CollisionShape3D::_validate_property(CollisionShape3D *this, PropertyInfo *param_1) {
   char cVar1;
   float fVar2;
   undefined8 uVar3;
   float extraout_XMM1_Da;
   float fVar4;
   float extraout_XMM1_Db;
   float fVar5;
   float fVar6;
   cVar1 = String::operator ==((String*)( param_1 + 8 ), "debug_color");
   if (cVar1 == '\0') {
      return;
   }

   if (SceneTree::singleton == 0) {
      fVar4 = 0.0;
      fVar6 = 0.0;
      fVar2 = 0.0;
      fVar5 = 0.0;
   }
 else {
      uVar3 = SceneTree::get_debug_collisions_color();
      fVar5 = (float)uVar3;
      fVar2 = (float)( (ulong)uVar3 >> 0x20 );
      fVar4 = extraout_XMM1_Db;
      fVar6 = extraout_XMM1_Da;
   }

   if (( ( ( fVar5 == *(float*)( this + 0x540 ) ) && ( fVar2 == *(float*)( this + 0x544 ) ) ) && ( fVar6 == *(float*)( this + 0x548 ) ) ) && ( fVar4 == *(float*)( this + 0x54c ) )) {
      *(undefined4*)( param_1 + 0x28 ) = 4;
      return;
   }

   *(undefined4*)( param_1 + 0x28 ) = 6;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CollisionShape3D::CollisionShape3D() */void CollisionShape3D::CollisionShape3D(CollisionShape3D *this) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 in_XMM1_Qa;
   Node3D::Node3D((Node3D*)this);
   uVar1 = _UNK_0010c4d8;
   uVar2 = __LC7;
   *(undefined***)this = &PTR__initialize_classv_0010be78;
   *(undefined8*)( this + 0x528 ) = 0;
   *(undefined4*)( this + 0x530 ) = 0;
   *(undefined8*)( this + 0x538 ) = 0;
   *(undefined2*)( this + 0x550 ) = 1;
   *(undefined8*)( this + 0x540 ) = uVar2;
   *(undefined8*)( this + 0x548 ) = uVar1;
   Node3D::set_notify_local_transform(SUB81(this, 0));
   uVar1 = 0;
   uVar2 = 0;
   if (SceneTree::singleton != 0) {
      uVar1 = SceneTree::get_debug_collisions_color();
      uVar2 = in_XMM1_Qa;
   }

   *(undefined8*)( this + 0x540 ) = uVar1;
   *(undefined8*)( this + 0x548 ) = uVar2;
   return;
}
/* CollisionShape3D::set_shape(Ref<Shape3D> const&) */void CollisionShape3D::set_shape(Ref *param_1) {
   Callable *pCVar1;
   Callable *pCVar2;
   Object *pOVar3;
   long lVar4;
   char cVar5;
   Object *pOVar6;
   long *in_RSI;
   Callable *pCVar7;
   long in_FS_OFFSET;
   CollisionShape3D aCStack_78[16];
   undefined8 local_68[7];
   long local_30;
   pCVar1 = (Callable*)*in_RSI;
   pCVar2 = *(Callable**)( param_1 + 0x528 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (pCVar2 == pCVar1) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      goto LAB_00100d7b;
   }

   if (pCVar2 == (Callable*)0x0) {
      *(Callable**)( param_1 + 0x528 ) = pCVar1;
      if (pCVar1 != (Callable*)0x0) {
         cVar5 = RefCounted::reference();
         if (cVar5 != '\0') goto LAB_00100b50;
         *(undefined8*)( param_1 + 0x528 ) = 0;
      }

   }
 else {
      create_custom_callable_function_pointer<CollisionShape3D>(aCStack_78, param_1, (_func_void*)"&CollisionShape3D::_shape_changed");
      Resource::disconnect_changed(pCVar2);
      Callable::~Callable((Callable*)aCStack_78);
      pCVar1 = *(Callable**)( param_1 + 0x528 );
      create_custom_callable_function_pointer<Node3D>((Node3D*)aCStack_78, param_1, (_func_void*)"&Node3D::update_gizmos");
      Resource::disconnect_changed(pCVar1);
      Callable::~Callable((Callable*)aCStack_78);
      pOVar3 = (Object*)*in_RSI;
      pOVar6 = *(Object**)( param_1 + 0x528 );
      if (pOVar3 != pOVar6) {
         *(Object**)( param_1 + 0x528 ) = pOVar3;
         if (pOVar3 == (Object*)0x0) {
            LAB_00100d4b:if (pOVar6 == (Object*)0x0) goto LAB_00100c36;
         }
 else {
            cVar5 = RefCounted::reference();
            if (cVar5 == '\0') {
               *(undefined8*)( param_1 + 0x528 ) = 0;
               goto LAB_00100d4b;
            }

            if (pOVar6 == (Object*)0x0) goto LAB_00100b50;
         }

         cVar5 = RefCounted::unreference();
         if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler(pOVar6) ),cVar5 != '\0') {
            ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
            Memory::free_static(pOVar6, false);
         }

         LAB_00100b50:pOVar6 = *(Object**)( param_1 + 0x528 );
      }

      if (pOVar6 != (Object*)0x0) {
         if (( (Color*)pOVar6 )[0x271] == (Color)0x0) {
            Shape3D::set_debug_color((Color*)pOVar6);
            Shape3D::set_debug_fill(SUB81(*(undefined8*)( param_1 + 0x528 ), 0));
            LAB_00100d2a:pCVar7 = *(Callable**)( param_1 + 0x528 );
         }
 else {
            local_68[0] = Shape3D::get_debug_color();
            set_debug_color((CollisionShape3D*)param_1, (Color*)local_68);
            cVar5 = Shape3D::get_debug_fill();
            if (cVar5 == param_1[0x550]) goto LAB_00100d2a;
            pCVar7 = *(Callable**)( param_1 + 0x528 );
            param_1[0x550] = cVar5;
            if (pCVar7 != (Callable*)0x0) {
               Shape3D::set_debug_fill(SUB81(pCVar7, 0));
               pCVar7 = *(Callable**)( param_1 + 0x528 );
            }

         }

         create_custom_callable_function_pointer<Node3D>((Node3D*)aCStack_78, param_1, (_func_void*)"&Node3D::update_gizmos");
         Resource::connect_changed(pCVar7, (uint)aCStack_78);
         Callable::~Callable((Callable*)aCStack_78);
         pCVar7 = *(Callable**)( param_1 + 0x528 );
         create_custom_callable_function_pointer<CollisionShape3D>(aCStack_78, param_1, (_func_void*)"&CollisionShape3D::_shape_changed");
         Resource::connect_changed(pCVar7, (uint)aCStack_78);
         Callable::~Callable((Callable*)aCStack_78);
      }

   }

   LAB_00100c36:Node3D::update_gizmos();
   if (*(long*)( param_1 + 0x538 ) != 0) {
      CollisionObject3D::shape_owner_clear_shapes(( uint ) * (long*)( param_1 + 0x538 ));
      if (*(long*)( param_1 + 0x528 ) != 0) {
         CollisionObject3D::shape_owner_add_shape(( uint ) * (undefined8*)( param_1 + 0x538 ), (Ref*)( ulong ) * (uint*)( param_1 + 0x530 ));
      }

      if (( ( param_1[0x2fa] & 0x40 ) != 0 ) && ( lVar4 = lVar4 != 0 )) {
         Node3D::get_transform();
         CollisionObject3D::shape_owner_set_transform((uint)lVar4, (Transform3D*)( ulong ) * (uint*)( param_1 + 0x530 ));
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      Node::update_configuration_warnings();
      return;
   }

   LAB_00100d7b:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CollisionShape3D::_bind_methods() */void CollisionShape3D::_bind_methods(void) {
   long lVar1;
   code *pcVar2;
   long *plVar3;
   MethodBind *pMVar4;
   uint uVar5;
   long *plVar6;
   long lVar7;
   long in_FS_OFFSET;
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   long local_c0;
   long local_b8;
   long local_b0;
   char *local_a8;
   undefined8 local_a0;
   char *local_98;
   undefined8 local_90;
   long *local_88;
   Color local_68[16];
   Color *local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = (Color[16])ZEXT816(0x10465a);
   uVar5 = (uint)(Variant*)&local_58;
   local_58 = local_68;
   D_METHODP((char*)&local_98, (char***)"resource_changed", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (Color*)0x0;
   pMVar4 = create_method_bind<CollisionShape3D,Ref<Resource>>(resource_changed);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar6 = local_88 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar7 = 0;
         local_88 = (long*)0x0;
         plVar6 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   local_68 = (Color[16])ZEXT816(0x104674);
   local_58 = local_68;
   D_METHODP((char*)&local_98, (char***)"set_shape", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (Color*)0x0;
   pMVar4 = create_method_bind<CollisionShape3D,Ref<Shape3D>const&>(set_shape);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar6 = local_88 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar7 = 0;
         local_88 = (long*)0x0;
         plVar6 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_98, (char***)"get_shape", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (Color*)0x0;
   pMVar4 = create_method_bind<CollisionShape3D,Ref<Shape3D>>(get_shape);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar6 = local_88 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar7 = 0;
         local_88 = (long*)0x0;
         plVar6 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   local_68 = (Color[16])ZEXT816(0x10468e);
   local_58 = local_68;
   D_METHODP((char*)&local_98, (char***)"set_disabled", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (Color*)0x0;
   pMVar4 = create_method_bind<CollisionShape3D,bool>(set_disabled);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar6 = local_88 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar7 = 0;
         local_88 = (long*)0x0;
         plVar6 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_98, (char***)"is_disabled", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (Color*)0x0;
   pMVar4 = create_method_bind<CollisionShape3D,bool>(is_disabled);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar6 = local_88 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar7 = 0;
         local_88 = (long*)0x0;
         plVar6 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_98, (char***)"make_convex_from_siblings", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (Color*)0x0;
   pMVar4 = create_method_bind<CollisionShape3D>(make_convex_from_siblings);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar6 = local_88 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar7 = 0;
         local_88 = (long*)0x0;
         plVar6 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_98, "make_convex_from_siblings", false);
   StringName::StringName((StringName*)&local_a8, "CollisionShape3D", false);
   ClassDB::set_method_flags((StringName*)&local_a8, (StringName*)&local_98, 3);
   if (( StringName::configured != '\0' ) && ( ( ( local_a8 == (char*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_98 != (char*)0x0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_b0, true);
   _scs_create((char*)&local_b8, true);
   local_c0 = 0;
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "Shape3D");
   local_d0 = 0;
   local_98 = "shape";
   local_90 = 5;
   String::parse_latin1((StrRange*)&local_d0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_98, 0x18, (StrRange*)&local_d0, 0x11, (String*)&local_c8, 6, &local_c0);
   local_a8 = "CollisionShape3D";
   local_d8 = 0;
   local_a0 = 0x10;
   String::parse_latin1((StrRange*)&local_d8);
   StringName::StringName((StringName*)&local_a8, (StrRange*)&local_d8, false);
   ClassDB::add_property((StringName*)&local_a8, (PropertyInfo*)&local_98, (StringName*)&local_b8, (StringName*)&local_b0, -1);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_c0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_b8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_b0 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_b0, true);
   _scs_create((char*)&local_b8, true);
   local_98 = "";
   local_c0 = 0;
   local_c8 = 0;
   local_90 = 0;
   String::parse_latin1((StrRange*)&local_c8);
   local_d0 = 0;
   local_98 = "disabled";
   local_90 = 8;
   String::parse_latin1((StrRange*)&local_d0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_98, 1, (StrRange*)&local_d0, 0, (String*)&local_c8, 6, &local_c0);
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "CollisionShape3D");
   StringName::StringName((StringName*)&local_a8, (StrRange*)&local_d8, false);
   ClassDB::add_property((StringName*)&local_a8, (PropertyInfo*)&local_98, (StringName*)&local_b8, (StringName*)&local_b0, -1);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( ( StringName::configured != '\0' ) && ( ( local_c0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_b8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_b0 != 0 ) ) )) {
      StringName::unref();
   }

   local_68 = (Color[16])ZEXT816(0x1046d1);
   local_58 = local_68;
   D_METHODP((char*)&local_98, (char***)"set_debug_color", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (Color*)0x0;
   pMVar4 = create_method_bind<CollisionShape3D,Color_const&>(set_debug_color);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar6 = local_88 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar7 = 0;
         local_88 = (long*)0x0;
         plVar6 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_98, (char***)"get_debug_color", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (Color*)0x0;
   pMVar4 = create_method_bind<CollisionShape3D,Color>(get_debug_color);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar6 = local_88 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar7 = 0;
         local_88 = (long*)0x0;
         plVar6 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   local_68 = (Color[16])ZEXT816(0x10468e);
   local_58 = local_68;
   D_METHODP((char*)&local_98, (char***)"set_enable_debug_fill", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (Color*)0x0;
   pMVar4 = create_method_bind<CollisionShape3D,bool>(set_debug_fill_enabled);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar6 = local_88 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar7 = 0;
         local_88 = (long*)0x0;
         plVar6 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_98, (char***)"get_enable_debug_fill", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (Color*)0x0;
   pMVar4 = create_method_bind<CollisionShape3D,bool>(get_debug_fill_enabled);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar6 = local_88 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar7 = 0;
         local_88 = (long*)0x0;
         plVar6 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_b0, true);
   _scs_create((char*)&local_b8, true);
   local_c0 = 0;
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "");
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "debug_color");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_98, 0x14, (StrRange*)&local_d0, 0, (String*)&local_c8, 6, &local_c0);
   local_a8 = "CollisionShape3D";
   local_d8 = 0;
   local_a0 = 0x10;
   String::parse_latin1((StrRange*)&local_d8);
   StringName::StringName((StringName*)&local_a8, (StrRange*)&local_d8, false);
   ClassDB::add_property((StringName*)&local_a8, (PropertyInfo*)&local_98, (StringName*)&local_b8, (StringName*)&local_b0, -1);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_c0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_b8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_b0 != 0 )) {
      StringName::unref();
   }

   for (int i = 0; i < 16; i++) {
      local_68[i] = (Color)0;
   }

   Variant::Variant((Variant*)&local_58, local_68);
   StringName::StringName((StringName*)&local_98, "debug_color", false);
   local_b0 = 0;
   String::parse_latin1((String*)&local_b0, "CollisionShape3D");
   StringName::StringName((StringName*)&local_a8, (StringName*)&local_b0, false);
   ClassDB::set_property_default_value((StringName*)&local_a8, (StringName*)&local_98, (Variant*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   _scs_create((char*)&local_b0, true);
   _scs_create((char*)&local_b8, true);
   local_c0 = 0;
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "");
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "debug_fill");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_98, 1, (StrRange*)&local_d0, 0, (String*)&local_c8, 6, &local_c0);
   local_a8 = "CollisionShape3D";
   local_d8 = 0;
   local_a0 = 0x10;
   String::parse_latin1((StrRange*)&local_d8);
   StringName::StringName((StringName*)&local_a8, (StrRange*)&local_d8, false);
   ClassDB::add_property((StringName*)&local_a8, (PropertyInfo*)&local_98, (StringName*)&local_b8, (StringName*)&local_b0, -1);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( ( StringName::configured != '\0' ) && ( ( local_c0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_b8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_b0 != 0 ) ) )) {
      StringName::unref();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CowData<Vector3>::_copy_on_write() [clone .isra.0] */void CowData<Vector3>::_copy_on_write(CowData<Vector3> *this) {
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   size_t __n;
   ulong uVar4;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar4 = 0x10;
   __n = lVar1 * 0xc;
   if (__n != 0) {
      uVar4 = __n - 1 | __n - 1 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = ( uVar4 | uVar4 >> 0x20 ) + 0x11;
   }

   puVar3 = (undefined8*)Memory::alloc_static(uVar4, false);
   if (puVar3 != (undefined8*)0x0) {
      *puVar3 = 1;
      puVar3[1] = lVar1;
      memcpy(puVar3 + 2, *(void**)this, __n);
      _unref(this);
      *(undefined8**)this = puVar3 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* CollisionShape3D::make_convex_from_siblings() */void CollisionShape3D::make_convex_from_siblings(CollisionShape3D *this) {
   long *plVar1;
   undefined8 *puVar2;
   float fVar3;
   undefined8 uVar4;
   code *pcVar5;
   ulong uVar6;
   ulong uVar7;
   char cVar8;
   int iVar9;
   long lVar10;
   long lVar11;
   ConvexPolygonShape3D *this_00;
   Object *pOVar12;
   long lVar13;
   long lVar14;
   long in_FS_OFFSET;
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   float fVar19;
   float fVar20;
   float fVar21;
   float fVar22;
   int local_dc;
   int local_cc;
   Object *local_a8;
   Object *local_a0[2];
   long local_90;
   undefined8 local_88;
   long local_80;
   float local_78;
   float fStack_74;
   undefined8 local_70;
   float local_68;
   float fStack_64;
   float local_60;
   float local_5c;
   float local_58;
   undefined8 local_54;
   float local_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar10 = Node::get_parent();
   if (lVar10 == 0) goto LAB_001026c5;
   local_90 = 0;
   for (local_cc = 0; iVar9 = Node::get_child_count(SUB81(lVar10, 0)),local_cc < iVar9; local_cc = local_cc + 1) {
      lVar11 = Node::get_child((int)lVar10, SUB41(local_cc, 0));
      if (( lVar11 != 0 ) && ( lVar11 = __dynamic_cast(lVar11, &Object::typeinfo, &MeshInstance3D::typeinfo, 0) ),lVar11 != 0) {
         MeshInstance3D::get_mesh();
         if (local_a8 != (Object*)0x0) {
            for (local_dc = 0; iVar9 = ( **(code**)( *(long*)local_a8 + 0x1c8 ) )(),local_dc < iVar9; local_dc = local_dc + 1) {
               ( **(code**)( *(long*)local_a8 + 0x1e0 ) )((Array*)local_a0, local_a8, local_dc);
               cVar8 = Array::is_empty();
               if (cVar8 == '\0') {
                  lVar11 = 0;
                  Array::operator []((int)(Array*)local_a0);
                  Variant::operator_cast_to_Vector((Variant*)&local_88);
                  lVar14 = local_80;
                  while (local_80 = lVar14,lVar14 != 0) {
                     if (*(long*)( lVar14 + -8 ) <= lVar11) {
                        LOCK();
                        plVar1 = (long*)( lVar14 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_80 = 0;
                           Memory::free_static((void*)( lVar14 + -0x10 ), false);
                        }

                        break;
                     }

                     Node3D::get_transform();
                     if (local_80 == 0) {
                        lVar14 = 0;
                        LAB_00102553:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar11, lVar14, "p_index", "size()", "", false, true);
                        _err_flush_stdout();
                        /* WARNING: Does not return */
                        pcVar5 = (code*)invalidInstructionException();
                        ( *pcVar5 )();
                     }

                     lVar14 = *(long*)( local_80 + -8 );
                     if (lVar14 <= lVar11) goto LAB_00102553;
                     puVar2 = (undefined8*)( local_80 + lVar11 * 0xc );
                     uVar4 = *puVar2;
                     fVar3 = *(float*)( puVar2 + 1 );
                     fVar18 = (float)uVar4;
                     fVar17 = (float)( (ulong)uVar4 >> 0x20 );
                     fVar15 = local_60 * fVar18 + local_5c * fVar17 + local_58 * fVar3 + local_4c;
                     fVar16 = fStack_74 * fVar17;
                     fVar17 = local_68 * fVar17;
                     uVar6 = (ulong)local_70 >> 0x20;
                     fVar21 = local_78 * fVar18;
                     fVar22 = (float)local_70;
                     fVar20 = fStack_64 * fVar3;
                     fVar19 = (float)local_54;
                     uVar7 = (ulong)local_54 >> 0x20;
                     if (local_90 == 0) {
                        lVar14 = 1;
                     }
 else {
                        lVar14 = *(long*)( local_90 + -8 ) + 1;
                     }

                     iVar9 = CowData<Vector3>::resize<false>((CowData<Vector3>*)&local_90, lVar14);
                     if (iVar9 == 0) {
                        if (local_90 == 0) {
                           lVar13 = -1;
                           lVar14 = 0;
                        }
 else {
                           lVar14 = *(long*)( local_90 + -8 );
                           lVar13 = lVar14 + -1;
                           if (-1 < lVar13) {
                              CowData<Vector3>::_copy_on_write((CowData<Vector3>*)&local_90);
                              puVar2 = (undefined8*)( local_90 + lVar13 * 0xc );
                              *puVar2 = CONCAT44(fVar17 + (float)uVar6 * fVar18 + fVar20 + (float)uVar7, fVar16 + fVar21 + fVar22 * fVar3 + fVar19);
                              *(float*)( puVar2 + 1 ) = fVar15;
                              goto LAB_00102403;
                           }

                        }

                        _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar13, lVar14, "p_index", "size()", "", false, false);
                     }
 else {
                        _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
                     }

                     LAB_00102403:lVar11 = lVar11 + 1;
                     lVar14 = local_80;
                  }
;
               }

               Array::~Array((Array*)local_a0);
            }

            if (( ( local_a8 != (Object*)0x0 ) && ( cVar8 = RefCounted::unreference() ),cVar8 != '\0' )) &&( cVar8 = cVar8 != '\0' )(**(code**)( *(long*)local_a8 + 0x140 ))(local_a8);
            Memory::free_static(local_a8, false);
         }

      }

   }

}
this_00 = (ConvexPolygonShape3D*)operator_new(0x288, "");ConvexPolygonShape3D::ConvexPolygonShape3D(this_00);postinitialize_handler((Object*)this_00);cVar8 = RefCounted::init_ref();if (cVar8 == '\0') {
   this_00 = (ConvexPolygonShape3D*)0x0;
}
ConvexPolygonShape3D::set_points((Vector*)this_00);local_a0[0] = (Object*)0x0;pOVar12 = (Object*)__dynamic_cast(this_00, &Object::typeinfo, &Shape3D::typeinfo, 0);if (pOVar12 == (Object*)0x0) {
   LAB_001026a0:set_shape(this);
}
 else {
   local_88 = 0;
   local_a0[0] = pOVar12;
   cVar8 = RefCounted::reference();
   if (cVar8 == '\0') {
      local_a0[0] = (Object*)0x0;
      Ref<Shape3D>::unref((Ref<Shape3D>*)&local_88);
      goto LAB_001026a0;
   }

   Ref<Shape3D>::unref((Ref<Shape3D>*)&local_88);
   set_shape(this);
   cVar8 = RefCounted::unreference();
   if (( cVar8 != '\0' ) && ( cVar8 = predelete_handler(pOVar12) ),cVar8 != '\0') {
      ( **(code**)( *(long*)pOVar12 + 0x140 ) )(pOVar12);
      Memory::free_static(pOVar12, false);
   }

}
cVar8 = RefCounted::unreference();if (( cVar8 != '\0' ) && ( cVar8 = predelete_handler((Object*)this_00) ),cVar8 != '\0') {
   ( **(code**)( *(long*)this_00 + 0x140 ) )(this_00);
   Memory::free_static(this_00, false);
}
CowData<Vector3>::_unref((CowData<Vector3>*)&local_90);LAB_001026c5:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* CowData<String>::_copy_on_write() [clone .isra.0] */void CowData<String>::_copy_on_write(CowData<String> *this) {
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
/* CollisionShape3D::get_configuration_warnings() const */void CollisionShape3D::get_configuration_warnings(void) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long in_RSI;
   long in_FS_OFFSET;
   bool bVar5;
   long local_c0;
   undefined8 local_b8;
   undefined8 local_b0;
   undefined8 local_a8;
   long local_a0;
   char *local_98;
   undefined8 local_90;
   undefined1 local_84[68];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Node::get_configuration_warnings();
   lVar2 = Node::get_parent();
   if (( lVar2 == 0 ) || ( lVar2 = __dynamic_cast(lVar2, &Object::typeinfo, &CollisionObject3D::typeinfo, 0) ),lVar2 == 0) {
      local_a0 = 0;
      String::parse_latin1((String*)&local_a0, "");
      local_a8 = 0;
      String::parse_latin1((String*)&local_a8, "CollisionShape3D only serves to provide a collision shape to a CollisionObject3D derived node.\nPlease only use it as a child of Area3D, StaticBody3D, RigidBody3D, CharacterBody3D, etc. to give them a shape.");
      RTR((String*)&local_98, (String*)&local_a8);
      Vector<String>::push_back();
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      if (*(long*)( in_RSI + 0x528 ) != 0) goto LAB_00102d16;
      lVar2 = 0;
      LAB_00102ee0:local_a0 = 0;
      String::parse_latin1((String*)&local_a0, "");
      local_a8 = 0;
      String::parse_latin1((String*)&local_a8, "A shape must be provided for CollisionShape3D to function. Please create a shape resource for it.");
      RTR((String*)&local_98, (String*)&local_a8);
      Vector<String>::push_back();
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      lVar4 = *(long*)( in_RSI + 0x528 );
      if (( lVar4 == 0 ) || ( lVar2 == 0 )) goto LAB_00102d16;
      lVar3 = __dynamic_cast(lVar2, &Object::typeinfo, &RigidBody3D::typeinfo, 0);
   }
 else {
      lVar4 = *(long*)( in_RSI + 0x528 );
      if (lVar4 == 0) goto LAB_00102ee0;
      lVar3 = __dynamic_cast(lVar2, &Object::typeinfo, &RigidBody3D::typeinfo, 0);
   }

   if (lVar3 != 0) {
      local_c0 = 0;
      local_98 = "RigidBody3D";
      local_90 = 0xb;
      String::parse_latin1((StrRange*)&local_c0);
      lVar4 = __dynamic_cast(lVar2, &Object::typeinfo, &VehicleBody3D::typeinfo, 0);
      if (lVar4 != 0) {
         String::parse_latin1((String*)&local_c0, "VehicleBody3D");
      }

      lVar4 = *(long*)( in_RSI + 0x528 );
      if (lVar4 != 0) {
         lVar3 = __dynamic_cast(lVar4, &Object::typeinfo, &ConcavePolygonShape3D::typeinfo, 0);
         if (lVar3 == 0) {
            lVar4 = __dynamic_cast(lVar4, &Object::typeinfo, &WorldBoundaryShape3D::typeinfo, 0);
            if (lVar4 != 0) {
               local_a0 = 0;
               String::parse_latin1((String*)&local_a0, "");
               local_a8 = 0;
               String::parse_latin1((String*)&local_a8, "WorldBoundaryShape3D doesn\'t support RigidBody3D in another mode than static.");
               RTR((String*)&local_98, (String*)&local_a8);
               Vector<String>::push_back();
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
            }

         }
 else {
            local_a0 = 0;
            plVar1 = (long*)( local_c0 + -0x10 );
            if (local_c0 != 0) {
               do {
                  lVar4 = *plVar1;
                  if (lVar4 == 0) goto LAB_00102b6f;
                  LOCK();
                  lVar3 = *plVar1;
                  bVar5 = lVar4 == lVar3;
                  if (bVar5) {
                     *plVar1 = lVar4 + 1;
                     lVar3 = lVar4;
                  }

                  UNLOCK();
               }
 while ( !bVar5 );
               if (lVar3 != -1) {
                  local_a0 = local_c0;
               }

            }

            LAB_00102b6f:local_b0 = 0;
            local_98 = "";
            local_90 = 0;
            String::parse_latin1((StrRange*)&local_b0);
            local_b8 = 0;
            local_98 = "When used for collision, ConcavePolygonShape3D is intended to work with static CollisionObject3D nodes like StaticBody3D.\nIt will likely not behave well for %ss (except when frozen and freeze_mode set to FREEZE_MODE_STATIC).";
            local_90 = 0xe0;
            String::parse_latin1((StrRange*)&local_b8);
            RTR((String*)&local_a8, (String*)&local_b8);
            vformat<String>((CowData<char32_t>*)&local_98, (String*)&local_a8, (CowData<char32_t>*)&local_a0);
            Vector<String>::push_back();
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
      lVar4 = *(long*)( in_RSI + 0x528 );
      if (lVar4 == 0) goto LAB_00102d16;
   }

   lVar2 = __dynamic_cast(lVar2, &Object::typeinfo, &CharacterBody3D::typeinfo, 0);
   if (( lVar2 != 0 ) && ( lVar2 = __dynamic_cast(lVar4, &Object::typeinfo, &ConcavePolygonShape3D::typeinfo, 0) ),lVar2 != 0) {
      local_a0 = 0;
      String::parse_latin1((String*)&local_a0, "");
      local_98 = "When used for collision, ConcavePolygonShape3D is intended to work with static CollisionObject3D nodes like StaticBody3D.\nIt will likely not behave well for CharacterBody3Ds.";
      local_a8 = 0;
      local_90 = 0xae;
      String::parse_latin1((StrRange*)&local_a8);
      RTR((String*)&local_98, (String*)&local_a8);
      Vector<String>::push_back();
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   }

   LAB_00102d16:Node3D::get_transform();
   local_84._0_12_ = Basis::get_scale();
   if (( _LC78 <= ABS((float)local_84._0_4_ - (float)local_84._4_4_) ) || ( _LC78 <= ABS((float)local_84._4_4_ - SUB124(local_84._0_12_, 8)) )) {
      local_a0 = 0;
      local_98 = "";
      local_90 = 0;
      String::parse_latin1((StrRange*)&local_a0);
      local_98 = "A non-uniformly scaled CollisionShape3D node will probably not function as expected.\nPlease make its scale uniform (i.e. the same on all axes), and change the size of its shape resource instead.";
      local_a8 = 0;
      local_90 = 0xc2;
      String::parse_latin1((StrRange*)&local_a8);
      RTR((String*)&local_98, (String*)&local_a8);
      Vector<String>::push_back();
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* Object::_property_can_revert(StringName const&) const */undefined8 Object::_property_can_revert(StringName *param_1) {
   return 0;
}
/* Object::_property_get_revert(StringName const&, Variant&) const */undefined8 Object::_property_get_revert(StringName *param_1, Variant *param_2) {
   return 0;
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
/* Node3D::set_transform_gizmo_visible(bool) */void Node3D::set_transform_gizmo_visible(Node3D *this, bool param_1) {
   this[0x518] = ( Node3D )((byte)this[0x518] & 0xfb | param_1 * '\x04');
   return;
}
/* Node3D::is_transform_gizmo_visible() const */byte Node3D::is_transform_gizmo_visible(Node3D *this) {
   return (byte)this[0x518] >> 2 & 1;
}
/* CollisionShape3D::is_class_ptr(void*) const */uint CollisionShape3D::is_class_ptr(CollisionShape3D *this, void *param_1) {
   return (uint)CONCAT71(0x10c4, (undefined4*)param_1 == &Node3D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10c4, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10c4, (undefined4*)param_1 == &Node::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10c4, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* CollisionShape3D::_getv(StringName const&, Variant&) const */undefined8 CollisionShape3D::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* CollisionShape3D::_setv(StringName const&, Variant const&) */undefined8 CollisionShape3D::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* CallableCustomMethodPointer<Node3D, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Node3D,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Node3D,void> *this) {
   return;
}
/* CallableCustomMethodPointer<CollisionShape3D, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<CollisionShape3D,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<CollisionShape3D,void> *this) {
   return;
}
/* MethodBindTRC<Color>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Color>::_gen_argument_type(int param_1) {
   return 0x14;
}
/* MethodBindTRC<Color>::get_argument_meta(int) const */undefined8 MethodBindTRC<Color>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Color const&>::_gen_argument_type(int) const */byte MethodBindT<Color_const&>::_gen_argument_type(MethodBindT<Color_const&> *this, int param_1) {
   return -(param_1 == 0) & 0x14;
}
/* MethodBindT<Color const&>::get_argument_meta(int) const */undefined8 MethodBindT<Color_const&>::get_argument_meta(int param_1) {
   return 0;
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
/* MethodBindTRC<bool>::_gen_argument_type(int) const */undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1) {
   return 1;
}
/* MethodBindTRC<bool>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<bool>::_gen_argument_type(int) const */bool MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this, int param_1) {
   return param_1 == 0;
}
/* MethodBindT<bool>::get_argument_meta(int) const */undefined8 MethodBindT<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Ref<Shape3D>>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Ref<Shape3D>>::_gen_argument_type(int param_1) {
   return 0x18;
}
/* MethodBindTRC<Ref<Shape3D>>::get_argument_meta(int) const */undefined8 MethodBindTRC<Ref<Shape3D>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Ref<Shape3D> const&>::_gen_argument_type(int) const */byte MethodBindT<Ref<Shape3D>const&>::_gen_argument_type(MethodBindT<Ref<Shape3D>const&> *this, int param_1) {
   return -(param_1 == 0) & 0x18;
}
/* MethodBindT<Ref<Shape3D> const&>::get_argument_meta(int) const */undefined8 MethodBindT<Ref<Shape3D>const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Ref<Resource> >::_gen_argument_type(int) const */byte MethodBindT<Ref<Resource>>::_gen_argument_type(MethodBindT<Ref<Resource>> *this, int param_1) {
   return -(param_1 == 0) & 0x18;
}
/* MethodBindT<Ref<Resource> >::get_argument_meta(int) const */undefined8 MethodBindT<Ref<Resource>>::get_argument_meta(int param_1) {
   return 0;
}
/* CallableCustomMethodPointer<Node3D, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<Node3D,void>::get_argument_count(CallableCustomMethodPointer<Node3D,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* CallableCustomMethodPointer<CollisionShape3D, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<CollisionShape3D,void>::get_argument_count(CallableCustomMethodPointer<CollisionShape3D,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* CallableCustomMethodPointer<Node3D, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Node3D,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Node3D,void> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<CollisionShape3D, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<CollisionShape3D,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<CollisionShape3D,void> *this) {
   operator_delete(this, 0x48);
   return;
}
/* MethodBindT<Ref<Resource> >::~MethodBindT() */void MethodBindT<Ref<Resource>>::~MethodBindT(MethodBindT<Ref<Resource>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c180;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Ref<Resource> >::~MethodBindT() */void MethodBindT<Ref<Resource>>::~MethodBindT(MethodBindT<Ref<Resource>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c180;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Ref<Shape3D> const&>::~MethodBindT() */void MethodBindT<Ref<Shape3D>const&>::~MethodBindT(MethodBindT<Ref<Shape3D>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c1e0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Ref<Shape3D> const&>::~MethodBindT() */void MethodBindT<Ref<Shape3D>const&>::~MethodBindT(MethodBindT<Ref<Shape3D>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c1e0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Ref<Shape3D>>::~MethodBindTRC() */void MethodBindTRC<Ref<Shape3D>>::~MethodBindTRC(MethodBindTRC<Ref<Shape3D>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c240;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Ref<Shape3D>>::~MethodBindTRC() */void MethodBindTRC<Ref<Shape3D>>::~MethodBindTRC(MethodBindTRC<Ref<Shape3D>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c240;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c360;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c360;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Color const&>::~MethodBindT() */void MethodBindT<Color_const&>::~MethodBindT(MethodBindT<Color_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c3c0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Color const&>::~MethodBindT() */void MethodBindT<Color_const&>::~MethodBindT(MethodBindT<Color_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c3c0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Color>::~MethodBindTRC() */void MethodBindTRC<Color>::~MethodBindTRC(MethodBindTRC<Color> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c420;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Color>::~MethodBindTRC() */void MethodBindTRC<Color>::~MethodBindTRC(MethodBindTRC<Color> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c420;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c2a0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c2a0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c300;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c300;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* CollisionShape3D::_property_can_revertv(StringName const&) const */void CollisionShape3D::_property_can_revertv(CollisionShape3D *this, StringName *param_1) {
   char cVar1;
   cVar1 = StringName::operator ==(param_1, "debug_color");
   if (( cVar1 == '\0' ) && ( (code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_can_revert )) {
      Node3D::_property_can_revert((StringName*)this);
      return;
   }

   return;
}
/* CallableCustomMethodPointer<Node3D, void>::get_object() const */undefined8 CallableCustomMethodPointer<Node3D,void>::get_object(CallableCustomMethodPointer<Node3D,void> *this) {
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
         goto LAB_0010374d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010374d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010374d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<CollisionShape3D, void>::get_object() const */undefined8 CallableCustomMethodPointer<CollisionShape3D,void>::get_object(CallableCustomMethodPointer<CollisionShape3D,void> *this) {
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
         goto LAB_0010384d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010384d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010384d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CollisionShape3D::_property_get_revertv(StringName const&, Variant&) const */ulong CollisionShape3D::_property_get_revertv(StringName *param_1, Variant *param_2) {
   uint uVar1;
   ulong uVar2;
   int *in_RDX;
   long in_FS_OFFSET;
   undefined8 in_XMM1_Qa;
   undefined8 local_58;
   undefined8 uStack_50;
   int local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = StringName::operator ==((StringName*)param_2, "debug_color");
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__property_get_revert_00110008 != Object::_property_get_revert) {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar2 = Node3D::_property_get_revert(param_1, param_2);
            return uVar2;
         }

         goto LAB_001039ca;
      }

   }
 else {
      local_58 = 0;
      uStack_50 = 0;
      if (SceneTree::singleton != 0) {
         local_58 = SceneTree::get_debug_collisions_color();
         uStack_50 = in_XMM1_Qa;
      }

      Variant::Variant((Variant*)local_48, (Color*)&local_58);
      if (Variant::needs_deinit[*in_RDX] != '\0') {
         Variant::_clear_internal();
      }

      *in_RDX = local_48[0];
      *(undefined8*)( in_RDX + 2 ) = local_40;
      *(undefined8*)( in_RDX + 4 ) = uStack_38;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (ulong)uVar1;
   }

   LAB_001039ca:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
/* CollisionShape3D::_get_class_namev() const */undefined8 *CollisionShape3D::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103a83:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103a83;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "CollisionShape3D");
         goto LAB_00103aee;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "CollisionShape3D");
   LAB_00103aee:return &_get_class_namev();
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
      StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( this + 0x20 ), false);
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
/* Object::is_class(String const&) const */ulong Object::is_class(Object *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *__s;
   long lVar3;
   long lVar4;
   uint uVar5;
   long lVar6;
   ulong uVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_50;
   char *local_48;
   size_t local_40;
   long local_30;
   lVar2 = *(long*)( this + 8 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      if (lVar2 == 0) {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = String::operator ==((String*)param_1, "Object");
            return uVar7;
         }

         LAB_00103e9f:/* WARNING: Subroutine does not return */__stack_chk_fail();
      }

      lVar3 = *(long*)( lVar2 + 0x20 );
      if (lVar3 == 0) {
         local_50 = 0;
      }
 else {
         __s = *(char**)( lVar3 + 8 );
         local_50 = 0;
         if (__s == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               do {
                  lVar4 = *plVar1;
                  if (lVar4 == 0) goto LAB_00103db3;
                  LOCK();
                  lVar6 = *plVar1;
                  bVar8 = lVar4 == lVar6;
                  if (bVar8) {
                     *plVar1 = lVar4 + 1;
                     lVar6 = lVar4;
                  }

                  UNLOCK();
               }
 while ( !bVar8 );
               if (lVar6 != -1) {
                  local_50 = *(long*)( lVar3 + 0x10 );
               }

            }

         }
 else {
            local_40 = strlen(__s);
            local_48 = __s;
            String::parse_latin1((StrRange*)&local_50);
         }

      }

      LAB_00103db3:uVar5 = String::operator ==((String*)param_1, (StrRange*)&local_50);
      lVar3 = local_50;
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

      if ((char)uVar5 != '\0') {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return (ulong)uVar5;
         }

         goto LAB_00103e9f;
      }

      lVar2 = *(long*)( lVar2 + 8 );
   }
 while ( true );
}
/* WARNING: Removing unreachable block (ram,0x00103f00) *//* CollisionShape3D::_notificationv(int, bool) */void CollisionShape3D::_notificationv(CollisionShape3D *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      _notification(this, param_1);
      if ((code*)PTR__notification_00110010 != Node::_notification) {
         Node3D::_notification(iVar1);
      }

      Node::_notification(iVar1);
      return;
   }

   Node::_notification(iVar1);
   if ((code*)PTR__notification_00110010 != Node::_notification) {
      Node3D::_notification(iVar1);
   }

   _notification(this, param_1);
   return;
}
/* CollisionShape3D::_validate_propertyv(PropertyInfo&) const */void CollisionShape3D::_validate_propertyv(CollisionShape3D *this, PropertyInfo *param_1) {
   Node::_validate_property((PropertyInfo*)this);
   if ((code*)PTR__validate_property_00110018 != Node::_validate_property) {
      Node3D::_validate_property((PropertyInfo*)this);
   }

   _validate_property(this, param_1);
   return;
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

   return;
}
/* CollisionShape3D::get_class() const */void CollisionShape3D::get_class(void) {
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
/* Callable create_custom_callable_function_pointer<CollisionShape3D>(CollisionShape3D*, char
   const*, void (CollisionShape3D::*)()) */CollisionShape3D *create_custom_callable_function_pointer<CollisionShape3D>(CollisionShape3D *param_1, char *param_2, _func_void *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC9;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_0010c060;
   uVar1 = *(undefined8*)( param_2 + 0x60 );
   *(char**)( this + 0x28 ) = param_2;
   *(undefined8*)( this + 0x30 ) = uVar1;
   *(undefined8*)( this + 0x38 ) = in_RCX;
   *(undefined8*)( this + 0x40 ) = in_R8;
   *(undefined8*)( this + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
   *(_func_void**)( this + 0x20 ) = param_3 + 1;
   Callable::Callable((Callable*)param_1, this);
   return param_1;
}
/* Callable create_custom_callable_function_pointer<Node3D>(Node3D*, char const*, void
   (Node3D::*)()) */Node3D *create_custom_callable_function_pointer<Node3D>(Node3D *param_1, char *param_2, _func_void *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC9;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_0010c0f0;
   uVar1 = *(undefined8*)( param_2 + 0x60 );
   *(char**)( this + 0x28 ) = param_2;
   *(undefined8*)( this + 0x30 ) = uVar1;
   *(undefined8*)( this + 0x38 ) = in_RCX;
   *(undefined8*)( this + 0x40 ) = in_R8;
   *(undefined8*)( this + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
   *(_func_void**)( this + 0x20 ) = param_3 + 1;
   Callable::Callable((Callable*)param_1, this);
   return param_1;
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
/* MethodBindTRC<Color>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Color>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   undefined4 *puVar1;
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar1 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC9;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *puVar1 = 0x14;
   puVar1[6] = 0;
   *(undefined8*)( puVar1 + 8 ) = 0;
   *(undefined1(*) [16])( puVar1 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar1[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar1 + 8 ), (CowData*)&local_58);
      puVar1[10] = 6;
      if (puVar1[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( puVar1 + 8 ), false);
         if (*(undefined**)( puVar1 + 4 ) == local_48) {
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar1 + 4 ) = local_48;
         }

         goto LAB_00104905;
      }

   }

   StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_50);
   LAB_00104905:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x00104b18) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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
/* MethodBindTRC<Ref<Shape3D>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Ref<Shape3D>>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   undefined4 *puVar1;
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   puVar1 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = "Shape3D";
   local_40 = 7;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *puVar1 = 0x18;
   puVar1[6] = 0x11;
   *(undefined8*)( puVar1 + 8 ) = 0;
   *(undefined1(*) [16])( puVar1 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar1[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar1 + 8 ), (CowData*)&local_58);
      puVar1[10] = 6;
      if (puVar1[6] != 0x11) {
         StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_50);
         goto LAB_00104da5;
      }

   }

   StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( puVar1 + 8 ), false);
   if (*(char**)( puVar1 + 4 ) == local_48) {
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      *(char**)( puVar1 + 4 ) = local_48;
   }

   LAB_00104da5:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CallableCustomMethodPointer<Node3D, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<Node3D,void>::call(CallableCustomMethodPointer<Node3D,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   uint uVar3;
   ulong *puVar4;
   code *UNRECOVERED_JUMPTABLE;
   ulong uVar5;
   long in_FS_OFFSET;
   bool bVar6;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar5 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar5 << 8 );
         LOCK();
         bVar6 = (char)ObjectDB::spin_lock == '\0';
         if (bVar6) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar6) break;
         local_48 = (char*)( uVar5 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      uVar5 = *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff;
      if (uVar5 != ( *puVar4 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010503f;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_0010503f;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00105018. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_00105101;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0010503f:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC23, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00105101:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<CollisionShape3D, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<CollisionShape3D,void>::call(CallableCustomMethodPointer<CollisionShape3D,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   uint uVar3;
   ulong *puVar4;
   code *UNRECOVERED_JUMPTABLE;
   ulong uVar5;
   long in_FS_OFFSET;
   bool bVar6;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar5 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar5 << 8 );
         LOCK();
         bVar6 = (char)ObjectDB::spin_lock == '\0';
         if (bVar6) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar6) break;
         local_48 = (char*)( uVar5 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      uVar5 = *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff;
      if (uVar5 != ( *puVar4 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010525f;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_0010525f;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00105238. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_00105321;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0010525f:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC23, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00105321:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<bool>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   undefined4 *puVar1;
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar1 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC9;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *puVar1 = 1;
   puVar1[6] = 0;
   *(undefined8*)( puVar1 + 8 ) = 0;
   *(undefined1(*) [16])( puVar1 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar1[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar1 + 8 ), (CowData*)&local_58);
      puVar1[10] = 6;
      if (puVar1[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( puVar1 + 8 ), false);
         if (*(undefined**)( puVar1 + 4 ) == local_48) {
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar1 + 4 ) = local_48;
         }

         goto LAB_00105425;
      }

   }

   StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_50);
   LAB_00105425:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CollisionShape3D::is_class(String const&) const */undefined8 CollisionShape3D::is_class(CollisionShape3D *this, String *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   char *pcVar4;
   long lVar5;
   char cVar6;
   long lVar7;
   undefined8 uVar8;
   long in_FS_OFFSET;
   bool bVar9;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar5 = *(long*)( lVar2 + 0x20 );
      if (lVar5 == 0) {
         local_60 = 0;
      }
 else {
         pcVar4 = *(char**)( lVar5 + 8 );
         local_60 = 0;
         if (pcVar4 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar5 + 0x10 ) + -0x10 );
            if (*(long*)( lVar5 + 0x10 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_0010550f;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar3 == lVar7;
                  if (bVar9) {
                     *plVar1 = lVar3 + 1;
                     lVar7 = lVar3;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar7 != -1) {
                  local_60 = *(long*)( lVar5 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010550f:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
      lVar5 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_001055c3;
   }

   cVar6 = String::operator ==((String*)param_1, "CollisionShape3D");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar5 = *(long*)( lVar2 + 0x20 );
         if (lVar5 == 0) {
            local_60 = 0;
         }
 else {
            pcVar4 = *(char**)( lVar5 + 8 );
            local_60 = 0;
            if (pcVar4 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar4);
               local_58 = pcVar4;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar6 != '\0') goto LAB_001055c3;
      }

      cVar6 = String::operator ==((String*)param_1, "Node3D");
      if (cVar6 == '\0') {
         for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            lVar5 = *(long*)( lVar2 + 0x20 );
            if (lVar5 == 0) {
               local_58 = (char*)0x0;
            }
 else {
               local_58 = (char*)0x0;
               if (*(char**)( lVar5 + 8 ) == (char*)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( lVar5 + 0x10 ));
               }
 else {
                  String::parse_latin1((String*)&local_58, *(char**)( lVar5 + 8 ));
               }

            }

            cVar6 = String::operator ==((String*)param_1, (String*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            if (cVar6 != '\0') goto LAB_001055c3;
         }

         cVar6 = String::operator ==((String*)param_1, "Node");
         if (cVar6 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar8 = Object::is_class((Object*)this, param_1);
               return uVar8;
            }

            goto LAB_0010575e;
         }

      }

   }

   LAB_001055c3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010575e:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
   local_78 = &_LC25;
   local_88 = 0;
   local_90 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC25;
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
         StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_001058cc;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_001058cc:List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
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
/* Node3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Node3D::_get_property_listv(Node3D *this, List *param_1, bool param_2) {
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
      Node::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Node3D";
   local_70 = 6;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Node3D";
   local_98 = 0;
   local_70 = 6;
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
         StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_00105b31;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00105b31:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "Node3D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Node::_get_property_listv((List*)this, SUB81(param_1, 0));
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CollisionShape3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void CollisionShape3D::_get_property_listv(CollisionShape3D *this, List *param_1, bool param_2) {
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
      Node3D::_get_property_listv((Node3D*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "CollisionShape3D";
   local_70 = 0x10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "CollisionShape3D";
   local_98 = 0;
   local_70 = 0x10;
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
         StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_00105de1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00105de1:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "CollisionShape3D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Node3D::_get_property_listv((Node3D*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<Shape3D> const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Ref<Shape3D>const&>::_gen_argument_type_info(int param_1) {
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
      local_68 = "Shape3D";
      local_60 = 7;
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
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Color const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Color_const&>::_gen_argument_type_info(int param_1) {
   long lVar1;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar2;
   long in_FS_OFFSET;
   undefined8 local_80;
   undefined8 local_78;
   long local_70;
   undefined *local_68;
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
      local_68 = &_LC9;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_78);
      local_80 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 0x14, (CowData<char32_t>*)&local_80, 0, (StrRange*)&local_78, 6, &local_70);
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
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<bool>::_gen_argument_type_info(int param_1) {
   long lVar1;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar2;
   long in_FS_OFFSET;
   undefined8 local_80;
   undefined8 local_78;
   long local_70;
   undefined *local_68;
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
      local_68 = &_LC9;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_78);
      local_80 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 1, (CowData<char32_t>*)&local_80, 0, (StrRange*)&local_78, 6, &local_70);
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
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<Resource> >::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Ref<Resource>>::_gen_argument_type_info(int param_1) {
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
      local_68 = "Resource";
      local_60 = 8;
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
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Ref<Shape3D>::unref() */void Ref<Shape3D>::unref(Ref<Shape3D> *this) {
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
/* MethodBind* create_method_bind<CollisionShape3D, Ref<Resource> >(void
   (CollisionShape3D::*)(Ref<Resource>)) */MethodBind *create_method_bind<CollisionShape3D,Ref<Resource>>(_func_void_Ref *param_1) {
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
   *(_func_void_Ref**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010c180;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "CollisionShape3D";
   local_30 = 0x10;
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
/* MethodBind* create_method_bind<CollisionShape3D, Ref<Shape3D> const&>(void
   (CollisionShape3D::*)(Ref<Shape3D> const&)) */MethodBind *create_method_bind<CollisionShape3D,Ref<Shape3D>const&>(_func_void_Ref_ptr *param_1) {
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
   *(_func_void_Ref_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010c1e0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "CollisionShape3D";
   local_30 = 0x10;
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
/* MethodBind* create_method_bind<CollisionShape3D, Ref<Shape3D>>(Ref<Shape3D>
   (CollisionShape3D::*)() const) */MethodBind *create_method_bind<CollisionShape3D,Ref<Shape3D>>(_func_Ref *param_1) {
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
   *(_func_Ref**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010c240;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "CollisionShape3D";
   local_30 = 0x10;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<CollisionShape3D, bool>(void (CollisionShape3D::*)(bool)) */MethodBind *create_method_bind<CollisionShape3D,bool>(_func_void_bool *param_1) {
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
   *(_func_void_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010c2a0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "CollisionShape3D";
   local_30 = 0x10;
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
/* MethodBind* create_method_bind<CollisionShape3D, bool>(bool (CollisionShape3D::*)() const) */MethodBind *create_method_bind<CollisionShape3D,bool>(_func_bool *param_1) {
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
   *(_func_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010c300;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "CollisionShape3D";
   local_30 = 0x10;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<CollisionShape3D>(void (CollisionShape3D::*)()) */MethodBind *create_method_bind<CollisionShape3D>(_func_void *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0010c360;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "CollisionShape3D";
   local_30 = 0x10;
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
/* MethodBind* create_method_bind<CollisionShape3D, Color const&>(void (CollisionShape3D::*)(Color
   const&)) */MethodBind *create_method_bind<CollisionShape3D,Color_const&>(_func_void_Color_ptr *param_1) {
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
   *(_func_void_Color_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010c3c0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "CollisionShape3D";
   local_30 = 0x10;
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
/* MethodBind* create_method_bind<CollisionShape3D, Color>(Color (CollisionShape3D::*)() const) */MethodBind *create_method_bind<CollisionShape3D,Color>(_func_Color *param_1) {
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
   *(_func_Color**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010c420;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "CollisionShape3D";
   local_30 = 0x10;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* CollisionShape3D::_bind_methods() [clone .cold] */void CollisionShape3D::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Vector3>::_copy_on_write(void) {
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
/* CollisionShape3D::_initialize_classv() */void CollisionShape3D::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (Node3D::initialize_class() == '\0') {
         if (Node::initialize_class() == '\0') {
            Object::initialize_class();
            local_68 = 0;
            local_50 = 6;
            local_58 = "Object";
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (StrRange*)&local_68, false);
            local_58 = "Node";
            local_70 = 0;
            local_50 = 4;
            String::parse_latin1((StrRange*)&local_70);
            StringName::StringName((StringName*)&local_58, (StrRange*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_58 != (undefined*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            if ((code*)PTR__bind_methods_00110028 != Node::_bind_methods) {
               Node::_bind_methods();
            }

            Node::initialize_class() {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            if ((code*)PTR__bind_methods_00110020 != Node::_bind_methods) {
               Node3D::_bind_methods();
            }

            Node3D::initialize_class() {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            _bind_methods();
            initialize_class()::initialized = '\x01'
            ;;
         }

         if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return;
      }

      /* CowData<Vector3>::_unref() */
      void CowData<Vector3>::_unref(CowData<Vector3> *this) {
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

      /* CowData<Vector3>::_realloc(long) */
      undefined8 CowData<Vector3>::_realloc(CowData<Vector3> *this, long param_1) {
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
      /* Error CowData<Vector3>::resize<false>(long) */
      undefined8 CowData<Vector3>::resize<false>(CowData<Vector3> *this, long param_1) {
         long *plVar1;
         code *pcVar2;
         long lVar3;
         ulong uVar4;
         undefined8 *puVar5;
         undefined8 uVar6;
         long lVar7;
         long lVar8;
         undefined8 *puVar9;
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
            lVar8 = 0;
            lVar3 = 0;
         }
 else {
            lVar8 = *(long*)( lVar3 + -8 );
            if (param_1 == lVar8) {
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
            lVar3 = lVar8 * 0xc;
            if (lVar3 != 0) {
               uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
               uVar4 = uVar4 | uVar4 >> 2;
               uVar4 = uVar4 | uVar4 >> 4;
               uVar4 = uVar4 | uVar4 >> 8;
               uVar4 = uVar4 | uVar4 >> 0x10;
               lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
            }

         }

         if (param_1 * 0xc == 0) {
            LAB_00107730:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
            return 6;
         }

         uVar4 = param_1 * 0xc - 1;
         uVar4 = uVar4 >> 1 | uVar4;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         uVar4 = uVar4 | uVar4 >> 0x20;
         lVar7 = uVar4 + 1;
         if (lVar7 == 0) goto LAB_00107730;
         if (param_1 <= lVar8) {
            if (( lVar7 != lVar3 ) && ( uVar6 = _realloc(this, lVar7) ),(int)uVar6 != 0) {
               return uVar6;
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

         if (lVar7 == lVar3) {
            LAB_0010769c:puVar9 = *(undefined8**)this;
            if (puVar9 == (undefined8*)0x0) {
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            lVar3 = puVar9[-1];
            if (param_1 <= lVar3) goto LAB_0010762b;
         }
 else {
            if (lVar8 != 0) {
               uVar6 = _realloc(this, lVar7);
               if ((int)uVar6 != 0) {
                  return uVar6;
               }

               goto LAB_0010769c;
            }

            puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
            if (puVar5 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               return 6;
            }

            puVar9 = puVar5 + 2;
            *puVar5 = 1;
            puVar5[1] = 0;
            *(undefined8**)this = puVar9;
            lVar3 = 0;
         }

         memset((void*)( (long)puVar9 + lVar3 * 0xc ), 0, ( param_1 - lVar3 ) * 0xc);
         LAB_0010762b:puVar9[-1] = param_1;
         return 0;
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
            LAB_00107b10:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
         if (lVar9 == 0) goto LAB_00107b10;
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
            goto LAB_00107b66;
         }

         if (lVar9 == lVar5) {
            LAB_00107a8b:puVar7 = *(undefined8**)this;
            if (puVar7 == (undefined8*)0x0) {
               LAB_00107b66:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }

            lVar4 = puVar7[-1];
            if (param_1 <= lVar4) goto LAB_001079ff;
         }
 else {
            if (lVar4 != 0) {
               uVar3 = _realloc(this, lVar9);
               if ((int)uVar3 != 0) {
                  return uVar3;
               }

               goto LAB_00107a8b;
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
         LAB_001079ff:puVar7[-1] = param_1;
         return 0;
      }

      /* WARNING: Removing unreachable block (ram,0x00107c98) */
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

      /* MethodBindTRC<Color>::call(Object*, Variant const**, int, Callable::CallError&) const */
      Object *MethodBindTRC<Color>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
         Variant *pVVar1;
         Variant *pVVar2;
         long *plVar3;
         undefined4 in_register_00000014;
         long *plVar4;
         int in_R8D;
         undefined4 *in_R9;
         long in_FS_OFFSET;
         long local_78;
         undefined8 local_70;
         char *local_68;
         undefined8 local_60;
         undefined8 local_58[2];
         undefined4 local_48[2];
         undefined8 local_40;
         undefined8 uStack_38;
         long local_30;
         plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
         local_30 = *(long*)( in_FS_OFFSET + 0x28 );
         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
            StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
            if (plVar4[1] == 0) {
               plVar3 = (long*)plVar4[0x23];
               if (plVar3 == (long*)0x0) {
                  plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
               }

            }
 else {
               plVar3 = (long*)( plVar4[1] + 0x20 );
            }

            if (local_68 == (char*)*plVar3) {
               if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
                  StringName::unref();
               }

               MethodBind::get_name();
               local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
               local_70 = 0;
               local_60 = 0x35;
               String::parse_latin1((StrRange*)&local_70);
               vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
               _err_print_error(&_LC23, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
                  StringName::unref();
               }

               goto LAB_00108020;
            }

            if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
               StringName::unref();
            }

         }

         pVVar2 = param_2[0xb];
         pVVar1 = param_2[0xc];
         if (in_R8D == 0) {
            if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
               *in_R9 = 0;
               if (( (ulong)pVVar2 & 1 ) != 0) {
                  pVVar2 = *(Variant**)( pVVar2 + *(long*)( (long)plVar4 + (long)pVVar1 ) + -1 );
               }

               local_58[0] = ( *(code*)pVVar2 )();
               Variant::Variant((Variant*)local_48, (Color*)local_58);
               if (Variant::needs_deinit[*(int*)param_1] != '\0') {
                  Variant::_clear_internal();
               }

               *(undefined4*)param_1 = local_48[0];
               *(undefined8*)( param_1 + 8 ) = local_40;
               *(undefined8*)( param_1 + 0x10 ) = uStack_38;
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

         LAB_00108020:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return param_1;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* MethodBindTRC<Color>::validated_call(Object*, Variant const**, Variant*) const */
      void MethodBindTRC<Color>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
         code *pcVar1;
         Variant *pVVar2;
         long in_RCX;
         long in_FS_OFFSET;
         undefined8 uVar3;
         undefined8 in_XMM1_Qa;
         long local_58;
         undefined8 local_50;
         char *local_48;
         undefined8 local_40;
         long local_30;
         local_30 = *(long*)( in_FS_OFFSET + 0x28 );
         if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
            StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
            if (param_2[1] == (Variant*)0x0) {
               pVVar2 = param_2[0x23];
               if (pVVar2 == (Variant*)0x0) {
                  pVVar2 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
               }

            }
 else {
               pVVar2 = param_2[1] + 0x20;
            }

            if (local_48 == *(char**)pVVar2) {
               if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
                  StringName::unref();
               }

               MethodBind::get_name();
               local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
               local_40 = 0x35;
               local_50 = 0;
               String::parse_latin1((StrRange*)&local_50);
               vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
               _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
               if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                  StringName::unref();
               }

               goto LAB_001082cb;
            }

            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }

         }

         pcVar1 = *(code**)( param_1 + 0x58 );
         if (( (ulong)pcVar1 & 1 ) != 0) {
            pcVar1 = *(code**)( pcVar1 + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
         }

         uVar3 = ( *pcVar1 )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
         *(undefined8*)( in_RCX + 8 ) = uVar3;
         *(undefined8*)( in_RCX + 0x10 ) = in_XMM1_Qa;
         LAB_001082cb:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* MethodBindTRC<Color>::ptrcall(Object*, void const**, void*) const */
      void MethodBindTRC<Color>::ptrcall(Object *param_1, void **param_2, void *param_3) {
         code *pcVar1;
         long *plVar2;
         undefined8 *in_RCX;
         long in_FS_OFFSET;
         undefined8 uVar3;
         undefined8 in_XMM1_Qa;
         long local_58;
         undefined8 local_50;
         char *local_48;
         undefined8 local_40;
         long local_30;
         local_30 = *(long*)( in_FS_OFFSET + 0x28 );
         if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
            StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
            if (param_2[1] == (void*)0x0) {
               plVar2 = (long*)param_2[0x23];
               if (plVar2 == (long*)0x0) {
                  plVar2 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
               }

            }
 else {
               plVar2 = (long*)( (long)param_2[1] + 0x20 );
            }

            if (local_48 == (char*)*plVar2) {
               if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
                  StringName::unref();
               }

               MethodBind::get_name();
               local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
               local_40 = 0x35;
               local_50 = 0;
               String::parse_latin1((StrRange*)&local_50);
               vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
               _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
               if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                  StringName::unref();
               }

               goto LAB_0010848a;
            }

            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }

         }

         pcVar1 = *(code**)( param_1 + 0x58 );
         if (( (ulong)pcVar1 & 1 ) != 0) {
            pcVar1 = *(code**)( pcVar1 + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
         }

         uVar3 = ( *pcVar1 )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
         *in_RCX = uVar3;
         in_RCX[1] = in_XMM1_Qa;
         LAB_0010848a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* MethodBindT<Color const&>::validated_call(Object*, Variant const**, Variant*) const */
      void MethodBindT<Color_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

               goto LAB_001087d1;
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
            /* WARNING: Could not recover jumptable at 0x0010865d. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
            return;
         }

         LAB_001087d1:/* WARNING: Subroutine does not return */__stack_chk_fail();
      }

      /* MethodBindT<Color const&>::ptrcall(Object*, void const**, void*) const */
      void MethodBindT<Color_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

               goto LAB_001089b1;
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
            /* WARNING: Could not recover jumptable at 0x00108839. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
            return;
         }

         LAB_001089b1:/* WARNING: Subroutine does not return */__stack_chk_fail();
      }

      /* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */
      Object *MethodBindT<>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
         Variant *pVVar1;
         Variant *pVVar2;
         long *plVar3;
         undefined4 in_register_00000014;
         long *plVar4;
         int in_R8D;
         undefined4 *in_R9;
         long in_FS_OFFSET;
         long local_58;
         undefined8 local_50;
         char *local_48;
         undefined8 local_40;
         long local_30;
         plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
         local_30 = *(long*)( in_FS_OFFSET + 0x28 );
         if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
            StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
            if (plVar4[1] == 0) {
               plVar3 = (long*)plVar4[0x23];
               if (plVar3 == (long*)0x0) {
                  plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
               }

            }
 else {
               plVar3 = (long*)( plVar4[1] + 0x20 );
            }

            if (local_48 == (char*)*plVar3) {
               if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
                  StringName::unref();
               }

               MethodBind::get_name();
               local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
               local_50 = 0;
               local_40 = 0x35;
               String::parse_latin1((StrRange*)&local_50);
               vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
               _err_print_error(&_LC23, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
               if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                  StringName::unref();
               }

               goto LAB_00108ad0;
            }

            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }

         }

         pVVar2 = param_2[0xb];
         pVVar1 = param_2[0xc];
         if (in_R8D == 0) {
            if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
               *in_R9 = 0;
               if (( (ulong)pVVar2 & 1 ) != 0) {
                  pVVar2 = *(Variant**)( pVVar2 + *(long*)( (long)plVar4 + (long)pVVar1 ) + -1 );
               }

               ( *(code*)pVVar2 )();
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

         LAB_00108ad0:*(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return param_1;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */
      void MethodBindT<>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
               local_40 = 0x35;
               local_50 = 0;
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

               goto LAB_00108e4f;
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
            /* WARNING: Could not recover jumptable at 0x00108cf6. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
            return;
         }

         LAB_00108e4f:/* WARNING: Subroutine does not return */__stack_chk_fail();
      }

      /* MethodBindT<>::ptrcall(Object*, void const**, void*) const */
      void MethodBindT<>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

               goto LAB_0010900f;
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
            /* WARNING: Could not recover jumptable at 0x00108eb6. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
            return;
         }

         LAB_0010900f:/* WARNING: Subroutine does not return */__stack_chk_fail();
      }

      /* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */
      Object *MethodBindTRC<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
         Variant *pVVar1;
         bool bVar2;
         long *plVar4;
         undefined4 in_register_00000014;
         long *plVar5;
         int in_R8D;
         undefined4 *in_R9;
         long in_FS_OFFSET;
         long local_68;
         undefined8 local_60;
         char *local_58;
         undefined8 local_50;
         undefined4 local_48[2];
         undefined8 local_40;
         undefined8 uStack_38;
         long local_30;
         Variant *pVVar3;
         plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
         local_30 = *(long*)( in_FS_OFFSET + 0x28 );
         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
            StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
            if (plVar5[1] == 0) {
               plVar4 = (long*)plVar5[0x23];
               if (plVar4 == (long*)0x0) {
                  plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
               }

            }
 else {
               plVar4 = (long*)( plVar5[1] + 0x20 );
            }

            if (local_58 == (char*)*plVar4) {
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               MethodBind::get_name();
               local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
               local_60 = 0;
               local_50 = 0x35;
               String::parse_latin1((StrRange*)&local_60);
               vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
               _err_print_error(&_LC23, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                  StringName::unref();
               }

               goto LAB_001090e0;
            }

            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

         }

         pVVar3 = param_2[0xb];
         pVVar1 = param_2[0xc];
         if (in_R8D == 0) {
            if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
               *in_R9 = 0;
               if (( (ulong)pVVar3 & 1 ) != 0) {
                  pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)pVVar1 ) + -1 );
               }

               bVar2 = (bool)( *(code*)pVVar3 )();
               Variant::Variant((Variant*)local_48, bVar2);
               if (Variant::needs_deinit[*(int*)param_1] != '\0') {
                  Variant::_clear_internal();
               }

               *(undefined4*)param_1 = local_48[0];
               *(undefined8*)( param_1 + 8 ) = local_40;
               *(undefined8*)( param_1 + 0x10 ) = uStack_38;
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

         LAB_001090e0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return param_1;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */
      void MethodBindTRC<bool>::validated_call(MethodBindTRC<bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
         Variant VVar1;
         long *plVar3;
         long in_FS_OFFSET;
         long local_58;
         undefined8 local_50;
         char *local_48;
         undefined8 local_40;
         long local_30;
         code *pcVar2;
         local_30 = *(long*)( in_FS_OFFSET + 0x28 );
         if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
            StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
            if (*(long*)( param_1 + 8 ) == 0) {
               plVar3 = *(long**)( param_1 + 0x118 );
               if (plVar3 == (long*)0x0) {
                  plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
               }

            }
 else {
               plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
            }

            if (local_48 == (char*)*plVar3) {
               if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
                  StringName::unref();
               }

               MethodBind::get_name();
               local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
               local_40 = 0x35;
               local_50 = 0;
               String::parse_latin1((StrRange*)&local_50);
               vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
               _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
               if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                  StringName::unref();
               }

               goto LAB_001092f2;
            }

            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }

         }

         pcVar2 = *(code**)( this + 0x58 );
         if (( (ulong)pcVar2 & 1 ) != 0) {
            pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
         }

         VVar1 = ( Variant )(*pcVar2)(param_1 + *(long*)( this + 0x60 ));
         param_3[8] = VVar1;
         LAB_001092f2:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */
      void MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this, Object *param_1, void **param_2, void *param_3) {
         undefined1 uVar1;
         long *plVar3;
         long in_FS_OFFSET;
         long local_58;
         undefined8 local_50;
         char *local_48;
         undefined8 local_40;
         long local_30;
         code *pcVar2;
         local_30 = *(long*)( in_FS_OFFSET + 0x28 );
         if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
            StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
            if (*(long*)( param_1 + 8 ) == 0) {
               plVar3 = *(long**)( param_1 + 0x118 );
               if (plVar3 == (long*)0x0) {
                  plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
               }

            }
 else {
               plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
            }

            if (local_48 == (char*)*plVar3) {
               if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
                  StringName::unref();
               }

               MethodBind::get_name();
               local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
               local_40 = 0x35;
               local_50 = 0;
               String::parse_latin1((StrRange*)&local_50);
               vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
               _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
               if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                  StringName::unref();
               }

               goto LAB_001094a1;
            }

            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }

         }

         pcVar2 = *(code**)( this + 0x58 );
         if (( (ulong)pcVar2 & 1 ) != 0) {
            pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
         }

         uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
         *(undefined1*)param_3 = uVar1;
         LAB_001094a1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */
      void MethodBindT<bool>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

               goto LAB_001097e1;
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
            /* WARNING: Could not recover jumptable at 0x0010966d. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined1*)( *(long*)param_3 + 8 ));
            return;
         }

         LAB_001097e1:/* WARNING: Subroutine does not return */__stack_chk_fail();
      }

      /* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */
      void MethodBindT<bool>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

               goto LAB_001099c9;
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
            /* WARNING: Could not recover jumptable at 0x00109852. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3 != '\0');
            return;
         }

         LAB_001099c9:/* WARNING: Subroutine does not return */__stack_chk_fail();
      }

      /* MethodBindTRC<Ref<Shape3D>>::call(Object*, Variant const**, int, Callable::CallError&) const */
      Object *MethodBindTRC<Ref<Shape3D>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
         Variant *pVVar1;
         Object *pOVar2;
         char cVar3;
         Variant *pVVar4;
         long *plVar5;
         undefined4 in_register_00000014;
         long *plVar6;
         int in_R8D;
         undefined4 *in_R9;
         long in_FS_OFFSET;
         long local_68;
         undefined8 local_60;
         Object *local_58;
         undefined8 local_50;
         undefined4 local_48[2];
         undefined8 local_40;
         undefined8 uStack_38;
         long local_30;
         plVar6 = (long*)CONCAT44(in_register_00000014, param_3);
         local_30 = *(long*)( in_FS_OFFSET + 0x28 );
         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         if (( ( plVar6 != (long*)0x0 ) && ( plVar6[1] != 0 ) ) && ( *(char*)( plVar6[1] + 0x2e ) != '\0' )) {
            StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
            if (plVar6[1] == 0) {
               plVar5 = (long*)plVar6[0x23];
               if (plVar5 == (long*)0x0) {
                  plVar5 = (long*)( **(code**)( *plVar6 + 0x40 ) )(plVar6);
               }

            }
 else {
               plVar5 = (long*)( plVar6[1] + 0x20 );
            }

            if (local_58 == (Object*)*plVar5) {
               if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
                  StringName::unref();
               }

               MethodBind::get_name();
               local_58 = (Object*)0x107e68;
               local_60 = 0;
               local_50 = 0x35;
               String::parse_latin1((StrRange*)&local_60);
               vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
               _err_print_error(&_LC23, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                  StringName::unref();
               }

               goto LAB_00109ae0;
            }

            if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
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

               ( *(code*)pVVar4 )(&local_58);
               Variant::Variant((Variant*)local_48, local_58);
               if (Variant::needs_deinit[*(int*)param_1] != '\0') {
                  Variant::_clear_internal();
               }

               *(undefined4*)param_1 = local_48[0];
               *(undefined8*)( param_1 + 8 ) = local_40;
               *(undefined8*)( param_1 + 0x10 ) = uStack_38;
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

         LAB_00109ae0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return param_1;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* MethodBindTRC<Ref<Shape3D>>::ptrcall(Object*, void const**, void*) const */
      void MethodBindTRC<Ref<Shape3D>>::ptrcall(MethodBindTRC<Ref<Shape3D>> *this, Object *param_1, void **param_2, void *param_3) {
         char cVar1;
         code *pcVar2;
         Object *pOVar3;
         long *plVar4;
         Object *extraout_RDX;
         Object *pOVar5;
         long in_FS_OFFSET;
         long local_58;
         undefined8 local_50;
         Object *local_48;
         undefined8 local_40;
         long local_30;
         local_30 = *(long*)( in_FS_OFFSET + 0x28 );
         if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
            StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
            if (*(long*)( param_1 + 8 ) == 0) {
               plVar4 = *(long**)( param_1 + 0x118 );
               if (plVar4 == (long*)0x0) {
                  plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
               }

            }
 else {
               plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
            }

            if (local_48 == (Object*)*plVar4) {
               if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
                  StringName::unref();
               }

               MethodBind::get_name();
               local_48 = (Object*)0x107e68;
               local_40 = 0x35;
               local_50 = 0;
               String::parse_latin1((StrRange*)&local_50);
               vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
               _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
               if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                  StringName::unref();
               }

               goto LAB_00109d66;
            }

            param_2 = (void**)local_48;
            if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
               StringName::unref();
               param_2 = (void**)extraout_RDX;
            }

         }

         pcVar2 = *(code**)( this + 0x58 );
         if (( (ulong)pcVar2 & 1 ) != 0) {
            param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
            pcVar2 = *(code**)( (Object*)( (long)param_2 + -1 ) + (long)pcVar2 );
         }

         ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
         if (local_48 == (Object*)0x0) {
            /* WARNING: Load size is inaccurate */
            pOVar5 = *param_3;
            if (pOVar5 == (Object*)0x0) goto LAB_00109d66;
            *(undefined8*)param_3 = 0;
            goto LAB_00109da9;
         }

         pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
         /* WARNING: Load size is inaccurate */
         pOVar5 = *param_3;
         if (pOVar5 != pOVar3) {
            *(Object**)param_3 = pOVar3;
            if (pOVar3 == (Object*)0x0) {
               if (pOVar5 != (Object*)0x0) goto LAB_00109da9;
            }
 else {
               cVar1 = RefCounted::reference();
               if (cVar1 == '\0') {
                  *(undefined8*)param_3 = 0;
               }

               if (pOVar5 != (Object*)0x0) {
                  LAB_00109da9:cVar1 = RefCounted::unreference();
                  if (cVar1 != '\0') {
                     cVar1 = predelete_handler(pOVar5);
                     if (cVar1 != '\0') {
                        ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                        Memory::free_static(pOVar5, false);
                     }

                  }

               }

               if (local_48 == (Object*)0x0) goto LAB_00109d66;
            }

         }

         cVar1 = RefCounted::unreference();
         pOVar5 = local_48;
         if (cVar1 != '\0') {
            cVar1 = predelete_handler(local_48);
            if (cVar1 != '\0') {
               ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
               Memory::free_static(pOVar5, false);
            }

         }

         LAB_00109d66:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* MethodBindT<Ref<Shape3D> const&>::validated_call(Object*, Variant const**, Variant*) const */
      void MethodBindT<Ref<Shape3D>const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
               local_58 = (Object*)0x107e68;
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

               goto LAB_0010a068;
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
                  LAB_0010a026:cVar3 = RefCounted::unreference();
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
               pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &Shape3D::typeinfo, 0);
               if (pOVar2 != pOVar4) {
                  local_58 = pOVar4;
                  if (pOVar4 != (Object*)0x0) {
                     cVar3 = RefCounted::reference();
                     if (cVar3 == '\0') {
                        local_58 = (Object*)0x0;
                     }

                  }

                  if (pOVar2 != (Object*)0x0) goto LAB_0010a026;
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

         LAB_0010a068:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* MethodBindT<Ref<Shape3D> const&>::ptrcall(Object*, void const**, void*) const */
      void MethodBindT<Ref<Shape3D>const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
               local_48 = (Object*)0x107e68;
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

               goto LAB_0010a32c;
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
            LAB_0010a308:local_48 = (Object*)0x0;
         }
 else {
            cVar3 = RefCounted::init_ref();
            if (cVar3 == '\0') goto LAB_0010a308;
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

         LAB_0010a32c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* MethodBindT<Ref<Resource> >::validated_call(Object*, Variant const**, Variant*) const */
      void MethodBindT<Ref<Resource>>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
               local_58 = (Object*)0x107e68;
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

               goto LAB_0010a5d8;
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
                  LAB_0010a596:cVar3 = RefCounted::unreference();
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
               pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &Resource::typeinfo, 0);
               if (pOVar2 != pOVar4) {
                  local_58 = pOVar4;
                  if (pOVar4 != (Object*)0x0) {
                     cVar3 = RefCounted::reference();
                     if (cVar3 == '\0') {
                        local_58 = (Object*)0x0;
                     }

                  }

                  if (pOVar2 != (Object*)0x0) goto LAB_0010a596;
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

         LAB_0010a5d8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* MethodBindT<Ref<Resource> >::ptrcall(Object*, void const**, void*) const */
      void MethodBindT<Ref<Resource>>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
               local_48 = (Object*)0x107e68;
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

               goto LAB_0010a89c;
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
            LAB_0010a878:local_48 = (Object*)0x0;
         }
 else {
            cVar3 = RefCounted::init_ref();
            if (cVar3 == '\0') goto LAB_0010a878;
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

         LAB_0010a89c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* MethodBindT<Color const&>::call(Object*, Variant const**, int, Callable::CallError&) const */
      Object *MethodBindT<Color_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         long local_68;
         undefined8 local_60;
         char *local_58;
         undefined8 local_50;
         undefined8 local_48[3];
         long local_30;
         plVar9 = (long*)CONCAT44(in_register_00000014, param_3);
         local_30 = *(long*)( in_FS_OFFSET + 0x28 );
         if (( ( plVar9 != (long*)0x0 ) && ( plVar9[1] != 0 ) ) && ( *(char*)( plVar9[1] + 0x2e ) != '\0' )) {
            StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
            if (plVar9[1] == 0) {
               plVar7 = (long*)plVar9[0x23];
               if (plVar7 == (long*)0x0) {
                  plVar7 = (long*)( **(code**)( *plVar9 + 0x40 ) )(plVar9);
               }

            }
 else {
               plVar7 = (long*)( plVar9[1] + 0x20 );
            }

            if (local_58 == (char*)*plVar7) {
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               MethodBind::get_name();
               local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
               local_60 = 0;
               local_50 = 0x35;
               String::parse_latin1((StrRange*)&local_60);
               vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
               _err_print_error(&_LC23, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_58, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                  StringName::unref();
               }

               goto LAB_0010ab58;
            }

            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

         }

         pVVar11 = param_2[0xb];
         pVVar1 = param_2[0xc];
         if (in_R8D < 2) {
            pVVar10 = param_2[5];
            if (pVVar10 == (Variant*)0x0) {
               if (in_R8D != 1) goto LAB_0010abb0;
               LAB_0010aba0:pVVar10 = *(Variant**)param_4;
            }
 else {
               lVar2 = *(long*)( pVVar10 + -8 );
               if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
                  LAB_0010abb0:uVar6 = 4;
                  goto LAB_0010ab4d;
               }

               if (in_R8D == 1) goto LAB_0010aba0;
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

            cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 0x14);
            uVar4 = _LC67;
            if (cVar5 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }

            local_48[0] = Variant::operator_cast_to_Color(pVVar10);
            ( *(code*)pVVar11 )((Variant*)( (long)plVar9 + (long)pVVar1 ), local_48);
         }
 else {
            uVar6 = 3;
            LAB_0010ab4d:*in_R9 = uVar6;
            in_R9[2] = 1;
         }

         LAB_0010ab58:*(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return param_1;
      }

      /* MethodBindT<Ref<Shape3D> const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */
      Object *MethodBindT<Ref<Shape3D>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
         Variant *pVVar1;
         long lVar2;
         Object *pOVar3;
         code *pcVar4;
         undefined8 uVar5;
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
         Object *local_50;
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
               local_48 = (Object*)0x107e68;
               local_50 = (Object*)0x0;
               local_40 = 0x35;
               String::parse_latin1((StrRange*)&local_50);
               vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
               _err_print_error(&_LC23, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
               if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                  StringName::unref();
               }

               goto LAB_0010af18;
            }

            if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
               StringName::unref();
            }

         }

         pVVar13 = param_2[0xb];
         pVVar1 = param_2[0xc];
         if (1 < in_R8D) {
            uVar7 = 3;
            LAB_0010af0d:*in_R9 = uVar7;
            in_R9[2] = 1;
            goto LAB_0010af18;
         }

         pVVar12 = param_2[5];
         if (pVVar12 == (Variant*)0x0) {
            if (in_R8D != 1) goto LAB_0010af70;
            LAB_0010af60:pVVar12 = *(Variant**)param_4;
         }
 else {
            lVar2 = *(long*)( pVVar12 + -8 );
            if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
               LAB_0010af70:uVar7 = 4;
               goto LAB_0010af0d;
            }

            if (in_R8D == 1) goto LAB_0010af60;
            lVar10 = (long)( (int)lVar2 + -1 );
            if (lVar2 <= lVar10) {
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar4 = (code*)invalidInstructionException();
               ( *pcVar4 )();
            }

            pVVar12 = pVVar12 + lVar10 * 0x18;
         }

         *in_R9 = 0;
         if (( (ulong)pVVar13 & 1 ) != 0) {
            pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
         }

         cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar12, 0x18);
         uVar5 = _LC69;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar5;
         }

         local_50 = (Object*)0x0;
         pOVar8 = (Object*)Variant::get_validated_object();
         pOVar3 = local_50;
         if (pOVar8 != local_50) {
            if (pOVar8 == (Object*)0x0) {
               if (local_50 != (Object*)0x0) {
                  local_50 = (Object*)0x0;
                  local_48 = pOVar3;
                  goto LAB_0010aeaf;
               }

            }
 else {
               pOVar8 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &Shape3D::typeinfo, 0);
               if (pOVar3 != pOVar8) {
                  local_48 = pOVar3;
                  local_50 = pOVar8;
                  if (( pOVar8 != (Object*)0x0 ) && ( cVar6 = RefCounted::reference() ),cVar6 == '\0') {
                     local_50 = (Object*)0x0;
                  }

                  LAB_0010aeaf:Ref<Shape3D>::unref((Ref<Shape3D>*)&local_48);
               }

            }

         }

         ( *(code*)pVVar13 )((Variant*)( (long)plVar11 + (long)pVVar1 ));
         if (( ( local_50 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),pOVar3 = local_50,cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
         Memory::free_static(pOVar3, false);
      }

      LAB_0010af18:*(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return param_1;
   }

   /* MethodBindT<Ref<Resource> >::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindT<Ref<Resource>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            local_48 = (Object*)0x107e68;
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error(&_LC23, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010b320;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

      }

      pVVar13 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (1 < in_R8D) {
         uVar7 = 3;
         LAB_0010b315:*in_R9 = uVar7;
         in_R9[2] = 1;
         goto LAB_0010b320;
      }

      pVVar12 = param_2[5];
      if (pVVar12 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0010b370;
         LAB_0010b360:pVVar12 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar12 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0010b370:uVar7 = 4;
            goto LAB_0010b315;
         }

         if (in_R8D == 1) goto LAB_0010b360;
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
      uVar4 = _LC69;
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
               LAB_0010b48d:cVar6 = RefCounted::unreference();
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
            pOVar8 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &Resource::typeinfo, 0);
            if (pOVar5 != pOVar8) {
               local_48 = pOVar8;
               if (pOVar8 != (Object*)0x0) {
                  cVar6 = RefCounted::reference();
                  if (cVar6 == '\0') {
                     local_48 = (Object*)0x0;
                  }

               }

               if (pOVar5 != (Object*)0x0) goto LAB_0010b48d;
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

      LAB_0010b320:*(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Ref<Shape3D>>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<Ref<Shape3D>>::validated_call(MethodBindTRC<Ref<Shape3D>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      Object *pOVar1;
      char cVar2;
      code *pcVar3;
      long *plVar4;
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
            plVar4 = *(long**)( param_1 + 0x118 );
            if (plVar4 == (long*)0x0) {
               plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_48 == (Variant**)*plVar4) {
            if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = (Variant**)0x107e68;
            local_50 = (Object*)0x0;
            local_40 = (Object*)0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010b636;
         }

         param_2 = local_48;
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
            param_2 = extraout_RDX;
         }

      }

      pcVar3 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar3 & 1 ) != 0) {
         param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
         pcVar3 = *(code**)( pcVar3 + (long)param_2 + -1 );
      }

      ( *pcVar3 )(&local_50, param_1 + *(long*)( this + 0x60 ), param_2);
      if (local_50 == (Object*)0x0) {
         Variant::ObjData::unref();
      }
 else {
         local_48 = *(Variant***)( local_50 + 0x60 );
         local_40 = local_50;
         Variant::ObjData::ref((ObjData*)( param_3 + 8 ));
      }

      if (local_50 != (Object*)0x0) {
         cVar2 = RefCounted::unreference();
         pOVar1 = local_50;
         if (cVar2 != '\0') {
            cVar2 = predelete_handler(local_50);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

      }

      LAB_0010b636:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* void call_with_variant_args_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */
   void call_with_variant_args_dv<__UnexistingClass,bool>(__UnexistingClass *param_1, _func_void_bool *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
      long lVar1;
      long lVar2;
      code *pcVar3;
      undefined8 uVar4;
      char cVar5;
      undefined4 uVar6;
      undefined4 in_register_0000000c;
      long lVar7;
      uint uVar8;
      Variant *this;
      long in_stack_00000008;
      uVar8 = (uint)param_5;
      if (1 < uVar8) {
         uVar6 = 3;
         goto LAB_0010b8dd;
      }

      lVar1 = *(long*)( in_stack_00000008 + 8 );
      if (lVar1 == 0) {
         if (uVar8 != 1) goto LAB_0010b940;
      }
 else {
         lVar2 = *(long*)( lVar1 + -8 );
         if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
            LAB_0010b940:uVar6 = 4;
            LAB_0010b8dd:*(undefined4*)param_6 = uVar6;
            *(undefined4*)( param_6 + 8 ) = 1;
            return;
         }

         if (uVar8 != 1) {
            lVar7 = (long)( (int)lVar2 + -1 );
            if (lVar2 <= lVar7) {
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            this(Variant * )(lVar1 + lVar7 * 0x18);
            goto LAB_0010b85b;
         }

      }

      this * (Variant**)CONCAT44(in_register_0000000c, param_4);
      LAB_0010b85b:*(undefined4*)param_6 = 0;
      if (( (ulong)param_2 & 1 ) != 0) {
         param_2 = *(_func_void_bool**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)this, 1);
      uVar4 = _LC70;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      Variant::operator_cast_to_bool(this);
      /* WARNING: Could not recover jumptable at 0x0010b8b7. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *param_2 )(SUB81(param_1 + (long)param_3, 0));
      return;
   }

   /* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindT<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      long *plVar1;
      undefined4 in_register_00000014;
      __UnexistingClass *p_Var2;
      CallError *in_R8;
      Vector *in_R9;
      long in_FS_OFFSET;
      long local_58;
      undefined8 local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      p_Var2 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( p_Var2 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var2 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var2 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
         if (*(long*)( p_Var2 + 8 ) == 0) {
            plVar1 = *(long**)( p_Var2 + 0x118 );
            if (plVar1 == (long*)0x0) {
               plVar1 = (long*)( **(code**)( *(long*)p_Var2 + 0x40 ) )(p_Var2);
            }

         }
 else {
            plVar1 = (long*)( *(long*)( p_Var2 + 8 ) + 0x20 );
         }

         in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
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
            _err_print_error(&_LC23, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            *(undefined4*)param_1 = 0;
            *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
            goto LAB_0010b9a6;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      call_with_variant_args_dv<__UnexistingClass,bool>(p_Var2, (_func_void_bool*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      LAB_0010b9a6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */
   void PropertyInfo::PropertyInfo(void) {
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
   /* MethodBindTRC<bool>::~MethodBindTRC() */
   void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<bool>::~MethodBindT() */
   void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<Color>::~MethodBindTRC() */
   void MethodBindTRC<Color>::~MethodBindTRC(MethodBindTRC<Color> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<Color const&>::~MethodBindT() */
   void MethodBindT<Color_const&>::~MethodBindT(MethodBindT<Color_const&> *this) {
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
   /* MethodBindTRC<Ref<Shape3D>>::~MethodBindTRC() */
   void MethodBindTRC<Ref<Shape3D>>::~MethodBindTRC(MethodBindTRC<Ref<Shape3D>> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<Ref<Shape3D> const&>::~MethodBindT() */
   void MethodBindT<Ref<Shape3D>const&>::~MethodBindT(MethodBindT<Ref<Shape3D>const&> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<Ref<Resource> >::~MethodBindT() */
   void MethodBindT<Ref<Resource>>::~MethodBindT(MethodBindT<Ref<Resource>> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* CallableCustomMethodPointer<CollisionShape3D, void>::~CallableCustomMethodPointer() */
   void CallableCustomMethodPointer<CollisionShape3D,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<CollisionShape3D,void> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* CallableCustomMethodPointer<Node3D, void>::~CallableCustomMethodPointer() */
   void CallableCustomMethodPointer<Node3D,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Node3D,void> *this) {
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

