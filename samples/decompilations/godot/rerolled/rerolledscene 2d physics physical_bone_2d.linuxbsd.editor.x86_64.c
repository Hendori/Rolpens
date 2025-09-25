/* PhysicalBone2D::get_joint() const */undefined8 PhysicalBone2D::get_joint(PhysicalBone2D *this) {
   return *(undefined8*)( this + 0x6f0 );
}
/* PhysicalBone2D::get_auto_configure_joint() const */PhysicalBone2D PhysicalBone2D::get_auto_configure_joint(PhysicalBone2D *this) {
   return this[0x6f8];
}
/* PhysicalBone2D::get_simulate_physics() const */PhysicalBone2D PhysicalBone2D::get_simulate_physics(PhysicalBone2D *this) {
   return this[0x6f9];
}
/* PhysicalBone2D::is_simulating_physics() const */PhysicalBone2D PhysicalBone2D::is_simulating_physics(PhysicalBone2D *this) {
   return this[0x6fa];
}
/* PhysicalBone2D::get_bone2d_index() const */undefined4 PhysicalBone2D::get_bone2d_index(PhysicalBone2D *this) {
   return *(undefined4*)( this + 0x6d8 );
}
/* PhysicalBone2D::get_follow_bone_when_simulating() const */PhysicalBone2D PhysicalBone2D::get_follow_bone_when_simulating(PhysicalBone2D *this) {
   return this[0x6e8];
}
/* PhysicalBone2D::set_bone2d_nodepath(NodePath const&) */void PhysicalBone2D::set_bone2d_nodepath(PhysicalBone2D *this, NodePath *param_1) {
   NodePath::operator =((NodePath*)( this + 0x6e0 ), param_1);
   Object::notify_property_list_changed();
   return;
}
/* PhysicalBone2D::get_bone2d_nodepath() const */void PhysicalBone2D::get_bone2d_nodepath(void) {
   long in_RSI;
   NodePath *in_RDI;
   NodePath::NodePath(in_RDI, (NodePath*)( in_RSI + 0x6e0 ));
   return;
}
/* PhysicalBone2D::~PhysicalBone2D() */void PhysicalBone2D::~PhysicalBone2D(PhysicalBone2D *this) {
   *(undefined***)this = &PTR__initialize_classv_0010a6c0;
   NodePath::~NodePath((NodePath*)( this + 0x6e0 ));
   RigidBody2D::~RigidBody2D((RigidBody2D*)this);
   return;
}
/* PhysicalBone2D::set_bone2d_index(int) */void PhysicalBone2D::set_bone2d_index(PhysicalBone2D *this, int param_1) {
   int iVar1;
   long in_FS_OFFSET;
   Node aNStack_28[8];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 < 0) {
      _err_print_error("set_bone2d_index", "scene/2d/physics/physical_bone_2d.cpp", 0xe5, "Condition \"p_bone_idx < 0\" is true.", "Bone index is out of range: The index is too low!", 0, 0);
   }
 else {
      if (( (byte)this[0x2fa] & 0x40 ) != 0) {
         if (*(long*)( this + 0x6d0 ) == 0) {
            _err_print_error("set_bone2d_index", "scene/2d/physics/physical_bone_2d.cpp", 0xf2, "Cannot verify bone index...", 0, 1);
            *(int*)( this + 0x6d8 ) = param_1;
         }
 else {
            iVar1 = Skeleton2D::get_bone_count();
            if (iVar1 <= param_1) {
               iVar1 = Skeleton2D::get_bone_count();
               _err_print_index_error("set_bone2d_index", "scene/2d/physics/physical_bone_2d.cpp", 0xed, (long)param_1, (long)iVar1, "p_bone_idx", "parent_skeleton->get_bone_count()", "Passed-in Bone index is out of range!", false, false);
               goto LAB_0010018e;
            }

            *(int*)( this + 0x6d8 ) = param_1;
            Skeleton2D::get_bone((int)*(undefined8*)( this + 0x6d0 ));
            Node::get_path_to(aNStack_28, SUB81(this, 0));
            NodePath::operator =((NodePath*)( this + 0x6e0 ), (NodePath*)aNStack_28);
            NodePath::~NodePath((NodePath*)aNStack_28);
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Object::notify_property_list_changed();
            return;
         }

         goto LAB_0010026e;
      }

      *(int*)( this + 0x6d8 ) = param_1;
   }

   LAB_0010018e:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010026e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* PhysicalBone2D::~PhysicalBone2D() */void PhysicalBone2D::~PhysicalBone2D(PhysicalBone2D *this) {
   *(undefined***)this = &PTR__initialize_classv_0010a6c0;
   NodePath::~NodePath((NodePath*)( this + 0x6e0 ));
   RigidBody2D::~RigidBody2D((RigidBody2D*)this);
   operator_delete(this, 0x700);
   return;
}
/* PhysicalBone2D::_auto_configure_joint() [clone .part.0] */void PhysicalBone2D::_auto_configure_joint(PhysicalBone2D *this) {
   NodePath *pNVar1;
   Vector2 *pVVar2;
   long lVar3;
   long in_FS_OFFSET;
   Node local_30[8];
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = Node::get_parent();
   if (lVar3 != 0) {
      lVar3 = __dynamic_cast(lVar3, &Object::typeinfo, &typeinfo, 0);
      if (lVar3 != 0) {
         pNVar1 = *(NodePath**)( this + 0x6f0 );
         Node::get_path_to(local_30, SUB81(pNVar1, 0));
         Joint2D::set_node_a(pNVar1);
         NodePath::~NodePath((NodePath*)local_30);
         pNVar1 = *(NodePath**)( this + 0x6f0 );
         Node::get_path_to(local_30, SUB81(pNVar1, 0));
         Joint2D::set_node_b(pNVar1);
         NodePath::~NodePath((NodePath*)local_30);
         goto LAB_00100363;
      }

   }

   _err_print_error("_auto_configure_joint", "scene/2d/physics/physical_bone_2d.cpp", 0x8e, "Cannot setup joint without a parent PhysicalBone2D node.", 0, 1);
   LAB_00100363:pVVar2 = *(Vector2**)( this + 0x6f0 );
   local_28 = Node2D::get_global_position();
   Node2D::set_global_position(pVVar2);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PhysicalBone2D::set_auto_configure_joint(bool) */void PhysicalBone2D::set_auto_configure_joint(PhysicalBone2D *this, bool param_1) {
   this[0x6f8] = (PhysicalBone2D)param_1;
   if (( param_1 ) && ( *(long*)( this + 0x6f0 ) != 0 )) {
      _auto_configure_joint(this);
      return;
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
/* PhysicalBone2D::_find_skeleton_parent() */void PhysicalBone2D::_find_skeleton_parent(PhysicalBone2D *this) {
   long lVar1;
   long lVar2;
   lVar1 = Node::get_parent();
   if (lVar1 != 0) {
      while (lVar2 = __dynamic_cast(lVar1, &Object::typeinfo, &Skeleton2D::typeinfo, 0),lVar2 == 0) {
         lVar1 = __dynamic_cast(lVar1, &Object::typeinfo, &typeinfo, 0);
         if (lVar1 == 0) {
            return;
         }

         lVar1 = Node::get_parent();
         if (lVar1 == 0) {
            return;
         }

      }
;
      *(long*)( this + 0x6d0 ) = lVar2;
   }

   return;
}
/* PhysicalBone2D::_find_joint_child() */void PhysicalBone2D::_find_joint_child(PhysicalBone2D *this) {
   int iVar1;
   long lVar2;
   int iVar3;
   iVar3 = 0;
   do {
      iVar1 = Node::get_child_count(SUB81(this, 0));
      if (iVar1 <= iVar3) {
         return;
      }

      lVar2 = Node::get_child((int)this, SUB41(iVar3, 0));
      if (lVar2 != 0) {
         lVar2 = __dynamic_cast(lVar2, &Object::typeinfo, &Joint2D::typeinfo, 0);
         if (lVar2 != 0) {
            *(long*)( this + 0x6f0 ) = lVar2;
            return;
         }

      }

      iVar3 = iVar3 + 1;
   }
 while ( true );
}
/* PhysicalBone2D::_auto_configure_joint() */void PhysicalBone2D::_auto_configure_joint(PhysicalBone2D *this) {
   if (( this[0x6f8] != (PhysicalBone2D)0x0 ) && ( *(long*)( this + 0x6f0 ) != 0 )) {
      _auto_configure_joint(this);
      return;
   }

   return;
}
/* PhysicalBone2D::PhysicalBone2D() */void PhysicalBone2D::PhysicalBone2D(PhysicalBone2D *this) {
   long *plVar1;
   RigidBody2D::RigidBody2D((RigidBody2D*)this);
   *(undefined8*)( this + 0x6d0 ) = 0;
   *(undefined***)this = &PTR__initialize_classv_0010a6c0;
   *(undefined4*)( this + 0x6d8 ) = 0xffffffff;
   *(undefined8*)( this + 0x6e0 ) = 0;
   this[0x6e8] = (PhysicalBone2D)0x0;
   *(undefined8*)( this + 0x6f0 ) = 0;
   *(undefined2*)( this + 0x6f8 ) = 1;
   this[0x6fa] = (PhysicalBone2D)0x0;
   plVar1 = (long*)PhysicsServer2D::get_singleton();
   ( **(code**)( *plVar1 + 0x398 ) )(plVar1, *(undefined8*)( this + 0x590 ), 0);
   plVar1 = (long*)PhysicsServer2D::get_singleton();
   ( **(code**)( *plVar1 + 0x3a8 ) )(plVar1, *(undefined8*)( this + 0x590 ), 0);
   plVar1 = (long*)PhysicsServer2D::get_singleton();
   ( **(code**)( *plVar1 + 0x308 ) )(plVar1, *(undefined8*)( this + 0x590 ), 0);
   *(undefined8*)( this + 0x6f0 ) = 0;
   return;
}
/* PhysicalBone2D::_position_at_bone2d() */void PhysicalBone2D::_position_at_bone2d(PhysicalBone2D *this) {
   long *plVar1;
   long in_FS_OFFSET;
   CowData<char32_t> local_70[8];
   CowData<char32_t> local_68[8];
   undefined8 local_60;
   undefined *local_58;
   undefined8 local_50;
   undefined1 local_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x6d0 ) != 0) {
      plVar1 = (long*)Skeleton2D::get_bone((int)*(long*)( this + 0x6d0 ));
      if (plVar1 == (long*)0x0) {
         local_60 = 0;
         local_50 = 1;
         local_58 = &_LC13;
         String::parse_latin1((StrRange*)&local_60);
         itos((long)local_70);
         operator+((char *)
         local_68,"It\'s not possible to position the bone with ID: ";
         String::operator +((String*)&local_58, local_68);
         _err_print_error("_position_at_bone2d", "scene/2d/physics/physical_bone_2d.cpp", 0x4a, "Parameter \"bone_to_use\" is null.", (String*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref(local_68);
         CowData<char32_t>::_unref(local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      }
 else {
         ( **(code**)( *plVar1 + 0x298 ) )(local_48, plVar1);
         Node2D::set_global_transform((Transform2D*)this);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PhysicalBone2D::_start_physics_simulation() [clone .part.0] */void PhysicalBone2D::_start_physics_simulation(PhysicalBone2D *this) {
   code *pcVar1;
   undefined4 uVar2;
   long *plVar3;
   _position_at_bone2d(this);
   plVar3 = (long*)PhysicsServer2D::get_singleton();
   pcVar1 = *(code**)( *plVar3 + 0x398 );
   uVar2 = CollisionObject2D::get_collision_layer();
   ( *pcVar1 )(plVar3, *(undefined8*)( this + 0x590 ), uVar2);
   plVar3 = (long*)PhysicsServer2D::get_singleton();
   pcVar1 = *(code**)( *plVar3 + 0x3a8 );
   uVar2 = CollisionObject2D::get_collision_mask();
   ( *pcVar1 )(plVar3, *(undefined8*)( this + 0x590 ), uVar2);
   plVar3 = (long*)PhysicsServer2D::get_singleton();
   pcVar1 = *(code**)( *plVar3 + 0x3b8 );
   CollisionObject2D::get_collision_priority();
   ( *pcVar1 )(plVar3, *(undefined8*)( this + 0x590 ));
   RigidBody2D::_apply_body_mode();
   this[0x6fa] = (PhysicalBone2D)0x1;
   Node::set_physics_process_internal(SUB81(this, 0));
   return;
}
/* PhysicalBone2D::_start_physics_simulation() */void PhysicalBone2D::_start_physics_simulation(PhysicalBone2D *this) {
   if (this[0x6fa] != (PhysicalBone2D)0x0) {
      return;
   }

   _start_physics_simulation(this);
   return;
}
/* PhysicalBone2D::_stop_physics_simulation() [clone .part.0] */void PhysicalBone2D::_stop_physics_simulation(PhysicalBone2D *this) {
   long *plVar1;
   this[0x6fa] = (PhysicalBone2D)0x0;
   _position_at_bone2d(this);
   Node::set_physics_process_internal(SUB81(this, 0));
   plVar1 = (long*)PhysicsServer2D::get_singleton();
   ( **(code**)( *plVar1 + 0x398 ) )(plVar1, *(undefined8*)( this + 0x590 ), 0);
   plVar1 = (long*)PhysicsServer2D::get_singleton();
   ( **(code**)( *plVar1 + 0x3a8 ) )(plVar1, *(undefined8*)( this + 0x590 ), 0);
   plVar1 = (long*)PhysicsServer2D::get_singleton();
   ( **(code**)( *plVar1 + 0x3b8 ) )(_LC17, plVar1, *(undefined8*)( this + 0x590 ));
   plVar1 = (long*)PhysicsServer2D::get_singleton();
   /* WARNING: Could not recover jumptable at 0x00100a4a. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 0x308 ) )(plVar1, *(undefined8*)( this + 0x590 ), 0);
   return;
}
/* PhysicalBone2D::_stop_physics_simulation() */void PhysicalBone2D::_stop_physics_simulation(PhysicalBone2D *this) {
   if (this[0x6fa] == (PhysicalBone2D)0x0) {
      return;
   }

   _stop_physics_simulation(this);
   return;
}
/* PhysicalBone2D::set_simulate_physics(bool) */void PhysicalBone2D::set_simulate_physics(PhysicalBone2D *this, bool param_1) {
   if (this[0x6f9] != (PhysicalBone2D)param_1) {
      this[0x6f9] = (PhysicalBone2D)param_1;
      if (param_1) {
         if (this[0x6fa] == (PhysicalBone2D)0x0) {
            _start_physics_simulation(this);
            return;
         }

      }
 else if (this[0x6fa] != (PhysicalBone2D)0x0) {
         _stop_physics_simulation(this);
         return;
      }

   }

   return;
}
/* PhysicalBone2D::set_follow_bone_when_simulating(bool) */void PhysicalBone2D::set_follow_bone_when_simulating(PhysicalBone2D *this, bool param_1) {
   this[0x6e8] = (PhysicalBone2D)param_1;
   if (this[0x6fa] == (PhysicalBone2D)0x0) {
      return;
   }

   _stop_physics_simulation(this);
   if (this[0x6fa] != (PhysicalBone2D)0x0) {
      return;
   }

   _start_physics_simulation(this);
   return;
}
/* PhysicalBone2D::_notification(int) */void PhysicalBone2D::_notification(PhysicalBone2D *this, int param_1) {
   long lVar1;
   Vector2 *pVVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0xd) {
      _find_skeleton_parent(this);
      _find_joint_child(this);
      if (( *(long*)( this + 0x6f0 ) != 0 ) && ( this[0x6f8] != (PhysicalBone2D)0x0 )) {
         _auto_configure_joint(this);
      }

      if (this[0x6f9] == (PhysicalBone2D)0x0) {
         if (this[0x6fa] != (PhysicalBone2D)0x0) {
            _stop_physics_simulation(this);
         }

      }
 else if (this[0x6fa] == (PhysicalBone2D)0x0) {
         _start_physics_simulation(this);
      }

      if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Node::set_physics_process_internal(SUB81(this, 0));
         return;
      }

   }
 else {
      if (param_1 == 0x1a) {
         if (this[0x6e8] != (PhysicalBone2D)0x0) {
            _position_at_bone2d(this);
         }

         pVVar2 = *(Vector2**)( this + 0x6f0 );
         if (( pVVar2 != (Vector2*)0x0 ) && ( this[0x6f8] != (PhysicalBone2D)0x0 )) {
            Node2D::get_global_position();
            Node2D::set_global_position(pVVar2);
         }

      }

      if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PhysicalBone2D::_bind_methods() */void PhysicalBone2D::_bind_methods(void) {
   long lVar1;
   code *pcVar2;
   long *plVar3;
   MethodBind *pMVar4;
   uint uVar5;
   long *plVar6;
   long lVar7;
   long in_FS_OFFSET;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   long local_b8;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   CowData<char32_t> local_90[8];
   long *local_88;
   CowData<char32_t> local_78[16];
   char *local_68;
   undefined8 local_60;
   char **local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   D_METHODP((char*)&local_98, (char***)"get_joint", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<PhysicalBone2D,Joint2D*>(get_joint);
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

   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_98, (char***)"get_auto_configure_joint", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<PhysicalBone2D,bool>(get_auto_configure_joint);
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

   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   local_60 = 0;
   local_68 = "auto_configure_joint";
   uVar5 = ( uint ) & local_58;
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)"set_auto_configure_joint", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<PhysicalBone2D,bool>(set_auto_configure_joint);
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

   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   local_68 = "simulate_physics";
   local_60 = 0;
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)"set_simulate_physics", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<PhysicalBone2D,bool>(set_simulate_physics);
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

   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_98, (char***)"get_simulate_physics", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<PhysicalBone2D,bool>(get_simulate_physics);
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

   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_98, (char***)"is_simulating_physics", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<PhysicalBone2D,bool>(is_simulating_physics);
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

   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   local_68 = "nodepath";
   local_60 = 0;
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)"set_bone2d_nodepath", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<PhysicalBone2D,NodePath_const&>(set_bone2d_nodepath);
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

   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_98, (char***)"get_bone2d_nodepath", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<PhysicalBone2D,NodePath>(get_bone2d_nodepath);
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

   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   local_68 = "bone_index";
   local_60 = 0;
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)"set_bone2d_index", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<PhysicalBone2D,int>(set_bone2d_index);
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

   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_98, (char***)"get_bone2d_index", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<PhysicalBone2D,int>(get_bone2d_index);
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

   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   local_68 = "follow_bone";
   local_60 = 0;
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)"set_follow_bone_when_simulating", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<PhysicalBone2D,bool>(set_follow_bone_when_simulating);
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

   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_98, (char***)"get_follow_bone_when_simulating", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<PhysicalBone2D,bool>(get_follow_bone_when_simulating);
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

   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_a8, true);
   _scs_create((char*)&local_b0, true);
   local_b8 = 0;
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "Bone2D");
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "bone2d_nodepath");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_98, 0x16, (String*)&local_c8, 0x1a, (String*)&local_c0, 6, &local_b8);
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "PhysicalBone2D");
   StringName::StringName((StringName*)&local_a0, (String*)&local_d0, false);
   ClassDB::add_property((StringName*)&local_a0, (PropertyInfo*)&local_98, (StringName*)&local_b0, (StringName*)&local_a8, -1);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   CowData<char32_t>::_unref(local_78);
   if (( StringName::configured != '\0' ) && ( local_88 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref(local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_b8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_b0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_a8 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_a8, true);
   _scs_create((char*)&local_b0, true);
   local_b8 = 0;
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "-1, 1000, 1");
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "bone2d_index");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_98, 2, (String*)&local_c8, 1, (String*)&local_c0, 6, &local_b8);
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "PhysicalBone2D");
   StringName::StringName((StringName*)&local_a0, (String*)&local_d0, false);
   ClassDB::add_property((StringName*)&local_a0, (PropertyInfo*)&local_98, (StringName*)&local_b0, (StringName*)&local_a8, -1);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   CowData<char32_t>::_unref(local_78);
   if (( StringName::configured != '\0' ) && ( local_88 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref(local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_b8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_b0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_a8 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_a8, true);
   _scs_create((char*)&local_b0, true);
   local_b8 = 0;
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "");
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "auto_configure_joint");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_98, 1, (String*)&local_c8, 0, (String*)&local_c0, 6, &local_b8);
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "PhysicalBone2D");
   StringName::StringName((StringName*)&local_a0, (String*)&local_d0, false);
   ClassDB::add_property((StringName*)&local_a0, (PropertyInfo*)&local_98, (StringName*)&local_b0, (StringName*)&local_a8, -1);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   CowData<char32_t>::_unref(local_78);
   if (( StringName::configured != '\0' ) && ( local_88 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref(local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_b8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_b0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_a8 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_a8, true);
   _scs_create((char*)&local_b0, true);
   local_b8 = 0;
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "");
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "simulate_physics");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_98, 1, (String*)&local_c8, 0, (String*)&local_c0, 6, &local_b8);
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "PhysicalBone2D");
   StringName::StringName((StringName*)&local_a0, (String*)&local_d0, false);
   ClassDB::add_property((StringName*)&local_a0, (PropertyInfo*)&local_98, (StringName*)&local_b0, (StringName*)&local_a8, -1);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   CowData<char32_t>::_unref(local_78);
   if (( StringName::configured != '\0' ) && ( local_88 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref(local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (( ( StringName::configured != '\0' ) && ( ( local_b8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_b0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_a8 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_a8, true);
   _scs_create((char*)&local_b0, true);
   local_b8 = 0;
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "");
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "follow_bone_when_simulating");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_98, 1, (String*)&local_c8, 0, (String*)&local_c0, 6, &local_b8);
   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "PhysicalBone2D");
   StringName::StringName((StringName*)&local_a0, (String*)&local_d0, false);
   ClassDB::add_property((StringName*)&local_a0, (PropertyInfo*)&local_98, (StringName*)&local_b0, (StringName*)&local_a8, -1);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   CowData<char32_t>::_unref(local_78);
   if (( StringName::configured != '\0' ) && ( local_88 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref(local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_b8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_b0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_a8 != 0 )) {
      StringName::unref();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
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
/* PhysicalBone2D::get_configuration_warnings() const */void PhysicalBone2D::get_configuration_warnings(void) {
   long lVar1;
   long in_RSI;
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   RigidBody2D::get_configuration_warnings();
   if (*(long*)( in_RSI + 0x6d0 ) == 0) {
      local_50 = 0;
      local_40 = 0;
      local_48 = "";
      String::parse_latin1((StrRange*)&local_50);
      local_48 = "A PhysicalBone2D only works with a Skeleton2D or another PhysicalBone2D as a parent node!";
      local_58 = 0;
      local_40 = 0x59;
      String::parse_latin1((StrRange*)&local_58);
      RTR((String*)&local_48, (String*)&local_58);
      Vector<String>::push_back();
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      if (*(long*)( in_RSI + 0x6d0 ) == 0) {
         lVar1 = *(long*)( in_RSI + 0x6f0 );
         goto joined_r0x001024fd;
      }

   }

   if (*(int*)( in_RSI + 0x6d8 ) < 0) {
      local_50 = 0;
      local_40 = 0;
      local_48 = "";
      String::parse_latin1((StrRange*)&local_50);
      local_48 = "A PhysicalBone2D needs to be assigned to a Bone2D node in order to function! Please set a Bone2D node in the inspector.";
      local_58 = 0;
      local_40 = 0x77;
      String::parse_latin1((StrRange*)&local_58);
      RTR((String*)&local_48, (String*)&local_58);
      Vector<String>::push_back();
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   lVar1 = *(long*)( in_RSI + 0x6f0 );
   joined_r0x001024fd:if (( ( lVar1 == 0 ) && ( lVar1 = Node::get_parent() ),lVar1 != 0 )) {
      local_50 = 0;
      String::parse_latin1((String*)&local_50, "");
      local_58 = 0;
      String::parse_latin1((String*)&local_58, "A PhysicalBone2D node should have a Joint2D-based child node to keep bones connected! Please add a Joint2D-based node as a child to this node!");
      RTR((String*)&local_48, (String*)&local_58);
      Vector<String>::push_back();
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
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
/* Object::_bind_compatibility_methods() */void Object::_bind_compatibility_methods(void) {
   return;
}
/* Object::_set(StringName const&, Variant const&) */undefined8 Object::_set(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Object::_get(StringName const&, Variant&) const */undefined8 Object::_get(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Object::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */void Object::_get_property_list(List *param_1) {
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
/* CanvasItem::_edit_get_minimum_size() const */undefined8 CanvasItem::_edit_get_minimum_size(void) {
   return 0xbf800000bf800000;
}
/* CanvasItem::_edit_use_pivot() const */undefined8 CanvasItem::_edit_use_pivot(void) {
   return 0;
}
/* CanvasItem::_edit_set_pivot(Vector2 const&) */void CanvasItem::_edit_set_pivot(Vector2 *param_1) {
   return;
}
/* CanvasItem::_edit_get_pivot() const */undefined8 CanvasItem::_edit_get_pivot(void) {
   return 0;
}
/* CanvasItem::_edit_use_rect() const */undefined8 CanvasItem::_edit_use_rect(void) {
   return 0;
}
/* CanvasItem::_edit_get_rect() const */undefined1[16];CanvasItem::_edit_get_rect(void) {
   return ZEXT816(0);
}
/* CanvasItem::get_anchorable_rect() const */undefined1[16];CanvasItem::get_anchorable_rect(void) {
   return ZEXT816(0);
}
/* PhysicalBone2D::_property_can_revertv(StringName const&) const */undefined8 PhysicalBone2D::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* PhysicalBone2D::_property_get_revertv(StringName const&, Variant&) const */undefined8 PhysicalBone2D::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* MethodBindTRC<int>::_gen_argument_type(int) const */undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<int>::get_argument_meta(int) const */uint MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this, int param_1) {
   return param_1 >> 0x1f & 3;
}
/* MethodBindT<int>::_gen_argument_type(int) const */char MethodBindT<int>::_gen_argument_type(MethodBindT<int> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<int>::get_argument_meta(int) const */byte MethodBindT<int>::get_argument_meta(MethodBindT<int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindTRC<NodePath>::_gen_argument_type(int) const */undefined8 MethodBindTRC<NodePath>::_gen_argument_type(int param_1) {
   return 0x16;
}
/* MethodBindTRC<NodePath>::get_argument_meta(int) const */undefined8 MethodBindTRC<NodePath>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<NodePath const&>::_gen_argument_type(int) const */byte MethodBindT<NodePath_const&>::_gen_argument_type(MethodBindT<NodePath_const&> *this, int param_1) {
   return -(param_1 == 0) & 0x16;
}
/* MethodBindT<NodePath const&>::get_argument_meta(int) const */undefined8 MethodBindT<NodePath_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<bool>::_gen_argument_type(int) const */bool MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this, int param_1) {
   return param_1 == 0;
}
/* MethodBindT<bool>::get_argument_meta(int) const */undefined8 MethodBindT<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<bool>::_gen_argument_type(int) const */undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1) {
   return 1;
}
/* MethodBindTRC<bool>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Joint2D*>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Joint2D*>::_gen_argument_type(int param_1) {
   return 0x18;
}
/* MethodBindTRC<Joint2D*>::get_argument_meta(int) const */undefined8 MethodBindTRC<Joint2D*>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Joint2D*>::~MethodBindTRC() */void MethodBindTRC<Joint2D*>::~MethodBindTRC(MethodBindTRC<Joint2D*> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010a9b8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Joint2D*>::~MethodBindTRC() */void MethodBindTRC<Joint2D*>::~MethodBindTRC(MethodBindTRC<Joint2D*> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010a9b8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<NodePath const&>::~MethodBindT() */void MethodBindT<NodePath_const&>::~MethodBindT(MethodBindT<NodePath_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010aad8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<NodePath const&>::~MethodBindT() */void MethodBindT<NodePath_const&>::~MethodBindT(MethodBindT<NodePath_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010aad8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<NodePath>::~MethodBindTRC() */void MethodBindTRC<NodePath>::~MethodBindTRC(MethodBindTRC<NodePath> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010ab38;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<NodePath>::~MethodBindTRC() */void MethodBindTRC<NodePath>::~MethodBindTRC(MethodBindTRC<NodePath> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010ab38;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010ab98;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010ab98;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010abf8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010abf8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010aa78;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010aa78;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010aa18;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010aa18;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* PhysicalBone2D::_getv(StringName const&, Variant&) const */undefined8 PhysicalBone2D::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_get) {
      uVar1 = CanvasItem::_get(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* PhysicalBone2D::_setv(StringName const&, Variant const&) */undefined8 PhysicalBone2D::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__set_0010e008 != Object::_set) {
      uVar1 = CanvasItem::_set(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* PhysicalBone2D::_validate_propertyv(PropertyInfo&) const */void PhysicalBone2D::_validate_propertyv(PropertyInfo *param_1) {
   Node::_validate_property(param_1);
   CanvasItem::_validate_property(param_1);
   if ((code*)PTR__validate_property_0010e010 == CanvasItem::_validate_property) {
      return;
   }

   RigidBody2D::_validate_property(param_1);
   return;
}
/* PhysicalBone2D::is_class_ptr(void*) const */ulong PhysicalBone2D::is_class_ptr(void *param_1) {
   undefined4 in_EDX;
   undefined4 *in_RSI;
   if (in_RSI == &RigidBody2D::get_class_ptr_static() || in_RSI == &get_class_ptr_static()::ptr) {
      return CONCAT71(0x10ac, in_RSI == &RigidBody2D::get_class_ptr_static() || in_RSI == &get_class_ptr_static(), ::ptr);
   }

   return ( ulong )((uint)CONCAT71(0x10ac, in_RSI == &CollisionObject2D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10ac, in_RSI == &PhysicsBody2D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10ac, in_RSI == &Node2D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10ac, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10ac, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr));
}
/* WARNING: Removing unreachable block (ram,0x00103250) *//* RigidBody2D::_notificationv(int, bool) [clone .part.0] */void RigidBody2D::_notificationv(int param_1, bool param_2) {
   if ((code*)PTR__notification_0010e018 != Node2D::_notification) {
      CollisionObject2D::_notification(param_1);
   }

   for (int i = 0; i < 3; i++) {
      Node2D::_notification(param_1);
   }

   return;
}
/* PhysicalBone2D::_get_class_namev() const */undefined8 *PhysicalBone2D::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_001032a3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001032a3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "PhysicalBone2D");
         goto LAB_0010330e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "PhysicalBone2D");
   LAB_0010330e:return &_get_class_namev();
}
/* MethodBindTRC<Joint2D*>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Joint2D*>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   bool bVar4;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_30 = 7;
   local_38 = "Joint2D";
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   *puVar3 = 0x18;
   *(undefined8*)( puVar3 + 2 ) = 0;
   StringName::StringName((StringName*)( puVar3 + 4 ), (StringName*)&local_38);
   bVar4 = StringName::configured != '\0';
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   puVar3[10] = 6;
   if (( bVar4 ) && ( local_38 != (char*)0x0 )) {
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
      return puVar3;
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
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

   return;
}
/* PhysicalBone2D::get_class() const */void PhysicalBone2D::get_class(void) {
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
/* PhysicalBone2D::_notificationv(int, bool) */void PhysicalBone2D::_notificationv(PhysicalBone2D *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (!param_2) {
      for (int i = 0; i < 4; i++) {
         Node::_notification(iVar1);
      }

      if ((code*)PTR__notification_0010e020 != CollisionObject2D::_notification) {
         RigidBody2D::_notification(iVar1);
      }

      _notification(this, param_1);
      return;
   }

   _notification(this, param_1);
   if ((code*)PTR__notification_0010e020 != CollisionObject2D::_notification) {
      RigidBody2D::_notification(iVar1);
   }

   RigidBody2D::_notificationv(iVar1, SUB41(param_1, 0));
   return;
}
/* MethodBindTRC<NodePath>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<NodePath>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC18;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *puVar1 = 0x16;
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

         goto LAB_001038e5;
      }

   }

   StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_50);
   LAB_001038e5:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
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
   local_48 = &_LC18;
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

         goto LAB_00103a45;
      }

   }

   StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_50);
   LAB_00103a45:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
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
/* MethodBindTRC<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<int>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC18;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *puVar1 = 2;
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

         goto LAB_00103ba5;
      }

   }

   StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_50);
   LAB_00103ba5:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
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
/* Node2D::is_class(String const&) const */undefined8 Node2D::is_class(Node2D *this, String *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   char *pcVar5;
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
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar5 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar5 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_00103c9f;
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
                  local_60 = *(long*)( lVar4 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar5);
            local_58 = pcVar5;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_00103c9f:cVar6 = String::operator ==((String*)param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00103d53;
   }

   cVar6 = String::operator ==((String*)param_1, "Node2D");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar5 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar5 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar5);
               local_58 = pcVar5;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar6 = String::operator ==((String*)param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar6 != '\0') goto LAB_00103d53;
      }

      cVar6 = String::operator ==((String*)param_1, "CanvasItem");
      if (cVar6 == '\0') {
         for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            lVar4 = *(long*)( lVar2 + 0x20 );
            if (lVar4 == 0) {
               local_58 = (char*)0x0;
            }
 else {
               local_58 = (char*)0x0;
               if (*(char**)( lVar4 + 8 ) == (char*)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( lVar4 + 0x10 ));
               }
 else {
                  String::parse_latin1((String*)&local_58, *(char**)( lVar4 + 8 ));
               }

            }

            cVar6 = String::operator ==((String*)param_1, (String*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            if (cVar6 != '\0') goto LAB_00103d53;
         }

         cVar6 = String::operator ==((String*)param_1, "Node");
         if (cVar6 == '\0') {
            for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
               lVar4 = *(long*)( lVar2 + 0x20 );
               if (lVar4 == 0) {
                  local_58 = (char*)0x0;
               }
 else {
                  local_58 = (char*)0x0;
                  if (*(char**)( lVar4 + 8 ) == (char*)0x0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( lVar4 + 0x10 ));
                  }
 else {
                     String::parse_latin1((String*)&local_58, *(char**)( lVar4 + 8 ));
                  }

               }

               cVar6 = String::operator ==((String*)param_1, (String*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               if (cVar6 != '\0') goto LAB_00103d53;
            }

            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar8 = String::operator ==((String*)param_1, "Object");
               return uVar8;
            }

            goto LAB_00103f7c;
         }

      }

   }

   LAB_00103d53:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00103f7c:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* PhysicsBody2D::is_class(String const&) const */undefined8 PhysicsBody2D::is_class(PhysicsBody2D *this, String *param_1) {
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
                  if (lVar3 == 0) goto LAB_0010401f;
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

      LAB_0010401f:cVar6 = String::operator ==((String*)param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_001040d3;
   }

   cVar6 = String::operator ==((String*)param_1, "PhysicsBody2D");
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

         cVar6 = String::operator ==((String*)param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar6 != '\0') goto LAB_001040d3;
      }

      cVar6 = String::operator ==((String*)param_1, "CollisionObject2D");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar8 = Node2D::is_class((Node2D*)this, param_1);
            return uVar8;
         }

         goto LAB_001041de;
      }

   }

   LAB_001040d3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_001041de:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* PhysicalBone2D::is_class(String const&) const */undefined8 PhysicalBone2D::is_class(PhysicalBone2D *this, String *param_1) {
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
                  if (lVar3 == 0) goto LAB_0010425f;
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

      LAB_0010425f:cVar6 = String::operator ==((String*)param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00104313;
   }

   cVar6 = String::operator ==((String*)param_1, "PhysicalBone2D");
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

         cVar6 = String::operator ==((String*)param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar6 != '\0') goto LAB_00104313;
      }

      cVar6 = String::operator ==((String*)param_1, "RigidBody2D");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar8 = PhysicsBody2D::is_class((PhysicsBody2D*)this, param_1);
            return uVar8;
         }

         goto LAB_0010441e;
      }

   }

   LAB_00104313:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010441e:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
   local_78 = &_LC21;
   local_88 = 0;
   local_90 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC21;
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

         goto LAB_0010458c;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010458c:List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
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
/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void CanvasItem::_get_property_listv(CanvasItem *this, List *param_1, bool param_2) {
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
   local_78 = "CanvasItem";
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "CanvasItem";
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

         goto LAB_001047f1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_001047f1:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "CanvasItem", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if ((code*)PTR__get_property_list_0010e028 != Object::_get_property_list) {
      CanvasItem::_get_property_list((List*)this);
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
/* Node2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Node2D::_get_property_listv(Node2D *this, List *param_1, bool param_2) {
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
      CanvasItem::_get_property_listv((CanvasItem*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Node2D";
   local_70 = 6;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Node2D";
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

         goto LAB_00104ac1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00104ac1:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "Node2D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         CanvasItem::_get_property_listv((CanvasItem*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CollisionObject2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void CollisionObject2D::_get_property_listv(CollisionObject2D *this, List *param_1, bool param_2) {
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
      Node2D::_get_property_listv((Node2D*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "CollisionObject2D";
   local_70 = 0x11;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "CollisionObject2D";
   local_98 = 0;
   local_70 = 0x11;
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

         goto LAB_00104d71;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00104d71:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "CollisionObject2D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Node2D::_get_property_listv((Node2D*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PhysicsBody2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void PhysicsBody2D::_get_property_listv(PhysicsBody2D *this, List *param_1, bool param_2) {
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
      CollisionObject2D::_get_property_listv((CollisionObject2D*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "PhysicsBody2D";
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "PhysicsBody2D";
   local_98 = 0;
   local_70 = 0xd;
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

         goto LAB_00105021;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00105021:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "PhysicsBody2D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         CollisionObject2D::_get_property_listv((CollisionObject2D*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RigidBody2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RigidBody2D::_get_property_listv(RigidBody2D *this, List *param_1, bool param_2) {
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
      PhysicsBody2D::_get_property_listv((PhysicsBody2D*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "RigidBody2D";
   local_70 = 0xb;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "RigidBody2D";
   local_98 = 0;
   local_70 = 0xb;
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

         goto LAB_001052d1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_001052d1:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "RigidBody2D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         PhysicsBody2D::_get_property_listv((PhysicsBody2D*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PhysicalBone2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void PhysicalBone2D::_get_property_listv(PhysicalBone2D *this, List *param_1, bool param_2) {
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
      RigidBody2D::_get_property_listv((RigidBody2D*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "PhysicalBone2D";
   local_70 = 0xe;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "PhysicalBone2D";
   local_98 = 0;
   local_70 = 0xe;
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

         goto LAB_00105581;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00105581:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "PhysicalBone2D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         RigidBody2D::_get_property_listv((RigidBody2D*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<int>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   undefined8 local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar5 = 0;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   puVar5[10] = 6;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00105709;
   local_78 = 0;
   local_68 = &_LC18;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00105805:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00105805;
      StringName::StringName((StringName*)&local_70, (CowData<char32_t>*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *puVar5 = local_68._0_4_;
   if (*(long*)( puVar5 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 2 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
   }

   if (*(long*)( puVar5 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar5 + 4 ) = uVar3;
   }

   puVar5[6] = local_50;
   if (*(long*)( puVar5 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 8 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( puVar5 + 8 ) = lVar4;
   }

   puVar5[10] = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   LAB_00105709:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBindT<NodePath const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<NodePath_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   undefined8 local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar5 = 0;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   puVar5[10] = 6;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00105979;
   local_78 = 0;
   local_68 = &_LC18;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x16);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00105a75:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00105a75;
      StringName::StringName((StringName*)&local_70, (CowData<char32_t>*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *puVar5 = local_68._0_4_;
   if (*(long*)( puVar5 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 2 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
   }

   if (*(long*)( puVar5 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar5 + 4 ) = uVar3;
   }

   puVar5[6] = local_50;
   if (*(long*)( puVar5 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 8 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( puVar5 + 8 ) = lVar4;
   }

   puVar5[10] = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   LAB_00105979:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBindT<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<bool>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   undefined8 local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar5 = 0;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   puVar5[10] = 6;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00105be9;
   local_78 = 0;
   local_68 = &_LC18;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 1);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00105ce5:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00105ce5;
      StringName::StringName((StringName*)&local_70, (CowData<char32_t>*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *puVar5 = local_68._0_4_;
   if (*(long*)( puVar5 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 2 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
   }

   if (*(long*)( puVar5 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar5 + 4 ) = uVar3;
   }

   puVar5[6] = local_50;
   if (*(long*)( puVar5 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 8 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( puVar5 + 8 ) = lVar4;
   }

   puVar5[10] = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   LAB_00105be9:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBind* create_method_bind<PhysicalBone2D, Joint2D*>(Joint2D* (PhysicalBone2D::*)() const) */MethodBind *create_method_bind<PhysicalBone2D,Joint2D*>(_func_Joint2D_ptr *param_1) {
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
   *(_func_Joint2D_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010a9b8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "PhysicalBone2D";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<PhysicalBone2D, bool>(bool (PhysicalBone2D::*)() const) */MethodBind *create_method_bind<PhysicalBone2D,bool>(_func_bool *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0010aa18;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "PhysicalBone2D";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<PhysicalBone2D, bool>(void (PhysicalBone2D::*)(bool)) */MethodBind *create_method_bind<PhysicalBone2D,bool>(_func_void_bool *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0010aa78;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "PhysicalBone2D";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<PhysicalBone2D, NodePath const&>(void (PhysicalBone2D::*)(NodePath
   const&)) */MethodBind *create_method_bind<PhysicalBone2D,NodePath_const&>(_func_void_NodePath_ptr *param_1) {
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
   *(_func_void_NodePath_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010aad8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "PhysicalBone2D";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<PhysicalBone2D, NodePath>(NodePath (PhysicalBone2D::*)() const) */MethodBind *create_method_bind<PhysicalBone2D,NodePath>(_func_NodePath *param_1) {
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
   *(_func_NodePath**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010ab38;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "PhysicalBone2D";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<PhysicalBone2D, int>(void (PhysicalBone2D::*)(int)) */MethodBind *create_method_bind<PhysicalBone2D,int>(_func_void_int *param_1) {
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
   *(_func_void_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010ab98;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "PhysicalBone2D";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<PhysicalBone2D, int>(int (PhysicalBone2D::*)() const) */MethodBind *create_method_bind<PhysicalBone2D,int>(_func_int *param_1) {
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
   *(_func_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010abf8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "PhysicalBone2D";
   local_30 = 0xe;
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
/* PhysicalBone2D::_bind_methods() [clone .cold] */void PhysicalBone2D::_bind_methods(void) {
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
/* PhysicalBone2D::_initialize_classv() */void PhysicalBone2D::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (RigidBody2D::initialize_class() == '\0') {
         if (PhysicsBody2D::initialize_class() == '\0') {
            if (CollisionObject2D::initialize_class() == '\0') {
               if (Node2D::initialize_class() == '\0') {
                  if (CanvasItem::initialize_class() == '\0') {
                     if (Node::initialize_class() == '\0') {
                        Object::initialize_class();
                        local_60 = 0;
                        String::parse_latin1((String*)&local_60, "Object");
                        StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                        local_70 = 0;
                        String::parse_latin1((String*)&local_70, "Node");
                        StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
                        ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                        if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                           StringName::unref();
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                        if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                           StringName::unref();
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                        if ((code*)PTR__bind_methods_0010e040 != Node::_bind_methods) {
                           Node::_bind_methods();
                        }

                        Node::initialize_class()::initialized =
                        '\x01';
                     }

                     local_60 = 0;
                     String::parse_latin1((String*)&local_60, "Node");
                     StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                     local_70 = 0;
                     String::parse_latin1((String*)&local_70, "CanvasItem");
                     StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
                     ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                     if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     CanvasItem::_bind_methods();
                     if ((code*)PTR__bind_compatibility_methods_0010e030 != Object::_bind_compatibility_methods) {
                        CanvasItem::_bind_compatibility_methods();
                     }

                     CanvasItem::initialize_class()::initialized =
                     '\x01';
                  }

                  local_60 = 0;
                  String::parse_latin1((String*)&local_60, "CanvasItem");
                  StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                  local_70 = 0;
                  String::parse_latin1((String*)&local_70, "Node2D");
                  StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
                  ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                  if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  Node2D::_bind_methods();
                  Node2D::initialize_class()::initialized =
                  '\x01';
               }

               local_60 = 0;
               String::parse_latin1((String*)&local_60, "Node2D");
               StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
               local_70 = 0;
               String::parse_latin1((String*)&local_70, "CollisionObject2D");
               StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
               if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               CollisionObject2D::_bind_methods();
               CollisionObject2D::initialize_class()::initialized =
               '\x01';
            }

            local_60 = 0;
            String::parse_latin1((String*)&local_60, "CollisionObject2D");
            StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
            local_70 = 0;
            String::parse_latin1((String*)&local_70, "PhysicsBody2D");
            StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            PhysicsBody2D::_bind_methods();
            PhysicsBody2D::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "PhysicsBody2D";
         local_68 = 0;
         local_50 = 0xd;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (StrRange*)&local_68, false);
         local_58 = "RigidBody2D";
         local_70 = 0;
         local_50 = 0xb;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (StrRange*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         if ((code*)PTR__bind_methods_0010e038 != PhysicsBody2D::_bind_methods) {
            RigidBody2D::_bind_methods();
         }

         RigidBody2D::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "RigidBody2D";
      local_68 = 0;
      local_50 = 0xb;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (StrRange*)&local_68, false);
      local_58 = "PhysicalBone2D";
      local_70 = 0;
      local_50 = 0xe;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (StrRange*)&local_70, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      _bind_methods();
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
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
      LAB_00107150:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar9 == 0) goto LAB_00107150;
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
      goto LAB_001071a6;
   }

   if (lVar9 == lVar5) {
      LAB_001070cb:puVar7 = *(undefined8**)this;
      if (puVar7 == (undefined8*)0x0) {
         LAB_001071a6:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      lVar4 = puVar7[-1];
      if (param_1 <= lVar4) goto LAB_0010703f;
   }
 else {
      if (lVar4 != 0) {
         uVar3 = _realloc(this, lVar9);
         if ((int)uVar3 != 0) {
            return uVar3;
         }

         goto LAB_001070cb;
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
   LAB_0010703f:puVar7[-1] = param_1;
   return 0;
}
/* WARNING: Removing unreachable block (ram,0x00107358) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   int iVar2;
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
         _err_print_error(&_LC70, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_001076d0;
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

         iVar2 = ( *(code*)pVVar3 )();
         Variant::Variant((Variant*)local_48, iVar2);
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

   LAB_001076d0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<int>::validated_call(MethodBindTRC<int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   int iVar1;
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

         goto LAB_00107974;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(long*)( param_3 + 8 ) = (long)iVar1;
   LAB_00107974:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this, Object *param_1, void **param_2, void *param_3) {
   int iVar1;
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

         goto LAB_00107b33;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(long*)param_3 = (long)iVar1;
   LAB_00107b33:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<int>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00107e71;
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
      /* WARNING: Could not recover jumptable at 0x00107cfc. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_00107e71:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */void MethodBindT<int>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00108051;
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
      /* WARNING: Could not recover jumptable at 0x00107edb. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_00108051:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<NodePath>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<NodePath>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   long *plVar4;
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
   plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar4[1] == 0) {
         plVar3 = (long*)plVar4[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
         }

      }
 else {
         plVar3 = (long*)( plVar4[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC70, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00108130;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
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

         ( *(code*)pVVar2 )((NodePath*)&local_58);
         Variant::Variant((Variant*)local_48, (NodePath*)&local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         NodePath::~NodePath((NodePath*)&local_58);
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

   LAB_00108130:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<NodePath>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<NodePath>::validated_call(MethodBindTRC<NodePath> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   Variant **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Variant **local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (Variant**)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Variant**)0x107528;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((NodePath*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (NodePath*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00108359;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar1 = *(code**)( pcVar1 + (long)param_2 + -1 );
   }

   ( *pcVar1 )((NodePath*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   NodePath::operator =((NodePath*)( param_3 + 8 ), (NodePath*)&local_48);
   NodePath::~NodePath((NodePath*)&local_48);
   LAB_00108359:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<NodePath>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<NodePath>::ptrcall(MethodBindTRC<NodePath> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   void **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   void **local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (void**)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (void**)0x107528;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((NodePath*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (NodePath*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010852a;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar1 = *(code**)( pcVar1 + (long)param_2 + -1 );
   }

   ( *pcVar1 )((NodePath*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   NodePath::operator =((NodePath*)param_3, (NodePath*)&local_48);
   NodePath::~NodePath((NodePath*)&local_48);
   LAB_0010852a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<NodePath const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<NodePath_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00108871;
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
      /* WARNING: Could not recover jumptable at 0x001086fd. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
      return;
   }

   LAB_00108871:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<NodePath const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<NodePath_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00108a51;
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
      /* WARNING: Could not recover jumptable at 0x001088d9. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }

   LAB_00108a51:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<bool>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00108c31;
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
      /* WARNING: Could not recover jumptable at 0x00108abd. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined1*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_00108c31:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */void MethodBindT<bool>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00108e19;
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
      /* WARNING: Could not recover jumptable at 0x00108ca2. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3 != '\0');
      return;
   }

   LAB_00108e19:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC70, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00108ee0;
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

   LAB_00108ee0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<bool>::validated_call(MethodBindTRC<bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_001090f2;
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
   LAB_001090f2:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this, Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_001092a1;
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
   LAB_001092a1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Joint2D*>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<Joint2D*>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Object *pOVar2;
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
         _err_print_error(&_LC70, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_001094d0;
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

         pOVar2 = (Object*)( *(code*)pVVar3 )();
         Variant::Variant((Variant*)local_48, pOVar2);
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

   LAB_001094d0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Joint2D*>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Joint2D*>::validated_call(MethodBindTRC<Joint2D*> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
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
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0010985f;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ));
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      Variant::ObjData::ref_pointer((Object*)( param_3 + 8 ));
      return;
   }

   LAB_0010985f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<Joint2D*>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Joint2D*>::ptrcall(MethodBindTRC<Joint2D*> *this, Object *param_1, void **param_2, void *param_3) {
   undefined8 uVar1;
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

         goto LAB_001098b1;
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
   *(undefined8*)param_3 = uVar1;
   LAB_001098b1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<NodePath const&>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<NodePath_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC70, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00109bc0;
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
         if (in_R8D != 1) goto LAB_00109c10;
         LAB_00109c00:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00109c10:uVar6 = 4;
            goto LAB_00109bb5;
         }

         if (in_R8D == 1) goto LAB_00109c00;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 0x16);
      uVar4 = _LC76;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_NodePath((Variant*)&local_48);
      ( *(code*)pVVar11 )((Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_48);
      NodePath::~NodePath((NodePath*)&local_48);
   }
 else {
      uVar6 = 3;
      LAB_00109bb5:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_00109bc0:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */void call_with_variant_args_dv<__UnexistingClass,int>(__UnexistingClass *param_1, _func_void_int *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
      goto LAB_00109ecd;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_00109f30;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_00109f30:uVar6 = 4;
         LAB_00109ecd:*(undefined4*)param_6 = uVar6;
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
         goto LAB_00109e4b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_00109e4b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_int**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC78;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_int(this);
   /* WARNING: Could not recover jumptable at 0x00109ea6. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )((int)( param_1 + (long)param_3 ));
   return;
}
/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC70, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00109f96;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,int>(p_Var2, (_func_void_int*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00109f96:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */void call_with_variant_args_dv<__UnexistingClass,bool>(__UnexistingClass *param_1, _func_void_bool *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
      goto LAB_0010a25d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0010a2c0;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0010a2c0:uVar6 = 4;
         LAB_0010a25d:*(undefined4*)param_6 = uVar6;
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
         goto LAB_0010a1db;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0010a1db:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_bool**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 1);
   uVar4 = _LC79;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_bool(this);
   /* WARNING: Could not recover jumptable at 0x0010a237. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )(SUB81(param_1 + (long)param_3, 0));
   return;
}
/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC70, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0010a326;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,bool>(p_Var2, (_func_void_bool*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0010a326:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<NodePath>::~MethodBindTRC() */void MethodBindTRC<NodePath>::~MethodBindTRC(MethodBindTRC<NodePath> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<NodePath const&>::~MethodBindT() */void MethodBindT<NodePath_const&>::~MethodBindT(MethodBindT<NodePath_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Joint2D*>::~MethodBindTRC() */void MethodBindTRC<Joint2D*>::~MethodBindTRC(MethodBindTRC<Joint2D*> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */void PropertyInfo::PropertyInfo(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

