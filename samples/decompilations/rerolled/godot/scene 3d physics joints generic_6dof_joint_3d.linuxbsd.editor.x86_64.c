/* Generic6DOFJoint3D::set_param_x(Generic6DOFJoint3D::Param, float) */void Generic6DOFJoint3D::set_param_x(undefined4 param_1, Generic6DOFJoint3D *this, uint param_3) {
   Generic6DOFJoint3D GVar1;
   long *plVar2;
   if (0x15 < param_3) {
      _err_print_index_error("set_param_x", "scene/3d/physics/joints/generic_6dof_joint_3d.cpp", 200, (ulong)param_3, 0x16, "p_param", "PARAM_MAX", "", false, false);
      return;
   }

   GVar1 = this[0x560];
   *(undefined4*)( this + (long)(int)param_3 * 4 + 0x564 ) = param_1;
   if (GVar1 == (Generic6DOFJoint3D)0x0) {
      Node3D::update_gizmos();
      return;
   }

   plVar2 = (long*)PhysicsServer3D::get_singleton();
   ( **(code**)( *plVar2 + 0x6c8 ) )(param_1, plVar2, *(undefined8*)( this + 0x538 ), 0, param_3);
   Node3D::update_gizmos();
   return;
}
/* Generic6DOFJoint3D::set_param_y(Generic6DOFJoint3D::Param, float) */void Generic6DOFJoint3D::set_param_y(undefined4 param_1, Generic6DOFJoint3D *this, uint param_3) {
   Generic6DOFJoint3D GVar1;
   long *plVar2;
   if (0x15 < param_3) {
      _err_print_index_error("set_param_y", "scene/3d/physics/joints/generic_6dof_joint_3d.cpp", 0xd7, (ulong)param_3, 0x16, "p_param", "PARAM_MAX", "", false, false);
      return;
   }

   GVar1 = this[0x560];
   *(undefined4*)( this + (long)(int)param_3 * 4 + 0x5c4 ) = param_1;
   if (GVar1 == (Generic6DOFJoint3D)0x0) {
      Node3D::update_gizmos();
      return;
   }

   plVar2 = (long*)PhysicsServer3D::get_singleton();
   ( **(code**)( *plVar2 + 0x6c8 ) )(param_1, plVar2, *(undefined8*)( this + 0x538 ), 1, param_3);
   Node3D::update_gizmos();
   return;
}
/* Generic6DOFJoint3D::set_param_z(Generic6DOFJoint3D::Param, float) */void Generic6DOFJoint3D::set_param_z(undefined4 param_1, Generic6DOFJoint3D *this, uint param_3) {
   Generic6DOFJoint3D GVar1;
   long *plVar2;
   if (0x15 < param_3) {
      _err_print_index_error("set_param_z", "scene/3d/physics/joints/generic_6dof_joint_3d.cpp", 0xe5, (ulong)param_3, 0x16, "p_param", "PARAM_MAX", "", false, false);
      return;
   }

   GVar1 = this[0x560];
   *(undefined4*)( this + (long)(int)param_3 * 4 + 0x624 ) = param_1;
   if (GVar1 == (Generic6DOFJoint3D)0x0) {
      Node3D::update_gizmos();
      return;
   }

   plVar2 = (long*)PhysicsServer3D::get_singleton();
   ( **(code**)( *plVar2 + 0x6c8 ) )(param_1, plVar2, *(undefined8*)( this + 0x538 ), 2, param_3);
   Node3D::update_gizmos();
   return;
}
/* Generic6DOFJoint3D::set_flag_x(Generic6DOFJoint3D::Flag, bool) */void Generic6DOFJoint3D::set_flag_x(Generic6DOFJoint3D *this, uint param_2, Generic6DOFJoint3D param_3) {
   long *plVar1;
   if (5 < param_2) {
      _err_print_index_error("set_flag_x", "scene/3d/physics/joints/generic_6dof_joint_3d.cpp", 0xf3, (ulong)param_2, 6, "p_flag", "FLAG_MAX", "", false, false);
      return;
   }

   this[(long)(int)param_2 + 0x5bc] = param_3;
   if (this[0x560] == (Generic6DOFJoint3D)0x0) {
      Node3D::update_gizmos();
      return;
   }

   plVar1 = (long*)PhysicsServer3D::get_singleton();
   ( **(code**)( *plVar1 + 0x6d8 ) )(plVar1, *(undefined8*)( this + 0x538 ), 0, param_2, param_3);
   Node3D::update_gizmos();
   return;
}
/* Generic6DOFJoint3D::set_flag_y(Generic6DOFJoint3D::Flag, bool) */void Generic6DOFJoint3D::set_flag_y(Generic6DOFJoint3D *this, uint param_2, Generic6DOFJoint3D param_3) {
   long *plVar1;
   if (5 < param_2) {
      _err_print_index_error("set_flag_y", "scene/3d/physics/joints/generic_6dof_joint_3d.cpp", 0x101, (ulong)param_2, 6, "p_flag", "FLAG_MAX", "", false, false);
      return;
   }

   this[(long)(int)param_2 + 0x61c] = param_3;
   if (this[0x560] == (Generic6DOFJoint3D)0x0) {
      Node3D::update_gizmos();
      return;
   }

   plVar1 = (long*)PhysicsServer3D::get_singleton();
   ( **(code**)( *plVar1 + 0x6d8 ) )(plVar1, *(undefined8*)( this + 0x538 ), 1, param_2, param_3);
   Node3D::update_gizmos();
   return;
}
/* Generic6DOFJoint3D::set_flag_z(Generic6DOFJoint3D::Flag, bool) */void Generic6DOFJoint3D::set_flag_z(Generic6DOFJoint3D *this, uint param_2, Generic6DOFJoint3D param_3) {
   long *plVar1;
   if (5 < param_2) {
      _err_print_index_error("set_flag_z", "scene/3d/physics/joints/generic_6dof_joint_3d.cpp", 0x10f, (ulong)param_2, 6, "p_flag", "FLAG_MAX", "", false, false);
      return;
   }

   this[(long)(int)param_2 + 0x67c] = param_3;
   if (this[0x560] == (Generic6DOFJoint3D)0x0) {
      Node3D::update_gizmos();
      return;
   }

   plVar1 = (long*)PhysicsServer3D::get_singleton();
   ( **(code**)( *plVar1 + 0x6d8 ) )(plVar1, *(undefined8*)( this + 0x538 ), 2, param_2, param_3);
   Node3D::update_gizmos();
   return;
}
/* Generic6DOFJoint3D::_configure_joint(RID, PhysicsBody3D*, PhysicsBody3D*) */void Generic6DOFJoint3D::_configure_joint(Generic6DOFJoint3D *this, undefined8 param_2, long param_3, long param_4) {
   long lVar1;
   long *plVar2;
   code *pcVar3;
   ulong uVar4;
   undefined8 uVar5;
   ulong uVar6;
   long in_FS_OFFSET;
   undefined8 local_198;
   undefined8 uStack_190;
   undefined8 local_188;
   undefined8 uStack_180;
   undefined8 local_178;
   undefined8 uStack_170;
   undefined8 local_168;
   undefined8 uStack_160;
   undefined8 local_158;
   undefined8 uStack_150;
   undefined8 local_148;
   undefined8 uStack_140;
   Transform3D local_138[48];
   Transform3D local_108[48];
   undefined8 local_d8;
   undefined8 uStack_d0;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   Transform3D local_a8[104];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Node3D::get_global_transform();
   Node3D::get_global_transform();
   Transform3D::affine_inverse();
   Transform3D::operator *(local_108, local_138);
   Transform3D::orthonormalize();
   local_d8 = local_168;
   uStack_d0 = uStack_160;
   local_c8 = local_158;
   uStack_c0 = uStack_150;
   local_b8 = local_148;
   uStack_b0 = uStack_140;
   if (param_4 == 0) {
      Transform3D::orthonormalize();
      plVar2 = (long*)PhysicsServer3D::get_singleton();
      uVar5 = 0;
      pcVar3 = *(code**)( *plVar2 + 0x6c0 );
   }
 else {
      Node3D::get_global_transform();
      Transform3D::affine_inverse();
      Transform3D::operator *((Transform3D*)&local_198, local_a8);
      local_d8 = local_198;
      uStack_d0 = uStack_190;
      local_c8 = local_188;
      uStack_c0 = uStack_180;
      local_b8 = local_178;
      uStack_b0 = uStack_170;
      Transform3D::orthonormalize();
      plVar2 = (long*)PhysicsServer3D::get_singleton();
      uVar5 = *(undefined8*)( param_4 + 0x538 );
      pcVar3 = *(code**)( *plVar2 + 0x6c0 );
   }

   uVar6 = 0;
   ( *pcVar3 )(plVar2, param_2, *(undefined8*)( param_3 + 0x538 ), local_108, uVar5, &local_d8);
   do {
      plVar2 = (long*)PhysicsServer3D::get_singleton();
      ( **(code**)( *plVar2 + 0x6c8 ) )(*(undefined4*)( this + uVar6 * 4 + 0x564 ), plVar2, param_2, 0, uVar6 & 0xffffffff);
      plVar2 = (long*)PhysicsServer3D::get_singleton();
      ( **(code**)( *plVar2 + 0x6c8 ) )(*(undefined4*)( this + uVar6 * 4 + 0x5c4 ), plVar2, param_2, 1, uVar6 & 0xffffffff);
      plVar2 = (long*)PhysicsServer3D::get_singleton();
      uVar4 = uVar6 & 0xffffffff;
      lVar1 = uVar6 * 4;
      uVar6 = uVar6 + 1;
      ( **(code**)( *plVar2 + 0x6c8 ) )(*(undefined4*)( this + lVar1 + 0x624 ), plVar2, param_2, 2, uVar4);
   }
 while ( uVar6 != 0x16 );
   uVar6 = 0;
   do {
      plVar2 = (long*)PhysicsServer3D::get_singleton();
      ( **(code**)( *plVar2 + 0x6d8 ) )(plVar2, param_2, 0, uVar6 & 0xffffffff, this[uVar6 + 0x5bc]);
      plVar2 = (long*)PhysicsServer3D::get_singleton();
      ( **(code**)( *plVar2 + 0x6d8 ) )(plVar2, param_2, 1, uVar6 & 0xffffffff, this[uVar6 + 0x61c]);
      plVar2 = (long*)PhysicsServer3D::get_singleton();
      uVar4 = uVar6 & 0xffffffff;
      lVar1 = uVar6 + 0x67c;
      uVar6 = uVar6 + 1;
      ( **(code**)( *plVar2 + 0x6d8 ) )(plVar2, param_2, 2, uVar4, this[lVar1]);
   }
 while ( uVar6 != 6 );
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Generic6DOFJoint3D::get_param_x(Generic6DOFJoint3D::Param) const */undefined4 Generic6DOFJoint3D::get_param_x(Generic6DOFJoint3D *this, uint param_2) {
   if (param_2 < 0x16) {
      return *(undefined4*)( this + (long)(int)param_2 * 4 + 0x564 );
   }

   _err_print_index_error("get_param_x", "scene/3d/physics/joints/generic_6dof_joint_3d.cpp", 0xd2, (ulong)param_2, 0x16, "p_param", "PARAM_MAX", "", false, false);
   return 0;
}
/* Generic6DOFJoint3D::get_param_y(Generic6DOFJoint3D::Param) const */undefined4 Generic6DOFJoint3D::get_param_y(Generic6DOFJoint3D *this, uint param_2) {
   if (param_2 < 0x16) {
      return *(undefined4*)( this + (long)(int)param_2 * 4 + 0x5c4 );
   }

   _err_print_index_error("get_param_y", "scene/3d/physics/joints/generic_6dof_joint_3d.cpp", 0xe0, (ulong)param_2, 0x16, "p_param", "PARAM_MAX", "", false, false);
   return 0;
}
/* Generic6DOFJoint3D::get_param_z(Generic6DOFJoint3D::Param) const */undefined4 Generic6DOFJoint3D::get_param_z(Generic6DOFJoint3D *this, uint param_2) {
   if (param_2 < 0x16) {
      return *(undefined4*)( this + (long)(int)param_2 * 4 + 0x624 );
   }

   _err_print_index_error("get_param_z", "scene/3d/physics/joints/generic_6dof_joint_3d.cpp", 0xee, (ulong)param_2, 0x16, "p_param", "PARAM_MAX", "", false, false);
   return 0;
}
/* Generic6DOFJoint3D::get_flag_x(Generic6DOFJoint3D::Flag) const */Generic6DOFJoint3D Generic6DOFJoint3D::get_flag_x(Generic6DOFJoint3D *this, uint param_2) {
   if (param_2 < 6) {
      return this[(long)(int)param_2 + 0x5bc];
   }

   _err_print_index_error("get_flag_x", "scene/3d/physics/joints/generic_6dof_joint_3d.cpp", 0xfc, (ulong)param_2, 6, "p_flag", "FLAG_MAX", "", false, false);
   return (Generic6DOFJoint3D)0x0;
}
/* Generic6DOFJoint3D::get_flag_y(Generic6DOFJoint3D::Flag) const */Generic6DOFJoint3D Generic6DOFJoint3D::get_flag_y(Generic6DOFJoint3D *this, uint param_2) {
   if (param_2 < 6) {
      return this[(long)(int)param_2 + 0x61c];
   }

   _err_print_index_error("get_flag_y", "scene/3d/physics/joints/generic_6dof_joint_3d.cpp", 0x10a, (ulong)param_2, 6, "p_flag", "FLAG_MAX", "", false, false);
   return (Generic6DOFJoint3D)0x0;
}
/* Generic6DOFJoint3D::get_flag_z(Generic6DOFJoint3D::Flag) const */Generic6DOFJoint3D Generic6DOFJoint3D::get_flag_z(Generic6DOFJoint3D *this, uint param_2) {
   if (param_2 < 6) {
      return this[(long)(int)param_2 + 0x67c];
   }

   _err_print_index_error("get_flag_z", "scene/3d/physics/joints/generic_6dof_joint_3d.cpp", 0x118, (ulong)param_2, 6, "p_flag", "FLAG_MAX", "", false, false);
   return (Generic6DOFJoint3D)0x0;
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
/* Generic6DOFJoint3D::Generic6DOFJoint3D() */void Generic6DOFJoint3D::Generic6DOFJoint3D(Generic6DOFJoint3D *this) {
   Joint3D::Joint3D((Joint3D*)this);
   *(undefined***)this = &PTR__initialize_classv_00114458;
   set_param_x((Generic6DOFJoint3D*)0x0, this, 0);
   set_param_x((Generic6DOFJoint3D*)0x0, this, 1);
   for (int i = 0; i < 3; i++) {
      set_param_x(this, ( i + 2 ));
   }

   set_param_x((Generic6DOFJoint3D*)0x0, this, 5);
   set_param_x((Generic6DOFJoint3D*)0x0, this, 6);
   set_param_x(this, 7);
   set_param_x(this, 8);
   for (int i = 0; i < 3; i++) {
      set_param_x((Generic6DOFJoint3D*)0, this, ( i + 9 ));
   }

   set_param_x(this, 0xc);
   set_param_x(this, 0xd);
   set_param_x((Generic6DOFJoint3D*)0x0, this, 0xe);
   set_param_x((Generic6DOFJoint3D*)0x0, this, 0xf);
   set_param_x(this, 0x10);
   set_param_x((Generic6DOFJoint3D*)0x0, this, 0x11);
   set_param_x(this, 0x12);
   for (int i = 0; i < 3; i++) {
      set_param_x((Generic6DOFJoint3D*)0, this, ( i + 19 ));
   }

   set_flag_x(this, 1, 1);
   set_flag_x(this, 0, 1);
   set_flag_x(this, 2, 0);
   set_flag_x(this, 3, 0);
   set_flag_x(this, 4, 0);
   set_flag_x(this, 5, 0);
   set_param_y((Generic6DOFJoint3D*)0x0, this, 0);
   set_param_y((Generic6DOFJoint3D*)0x0, this, 1);
   for (int i = 0; i < 3; i++) {
      set_param_y(this, ( i + 2 ));
   }

   set_param_y((Generic6DOFJoint3D*)0x0, this, 5);
   set_param_y((Generic6DOFJoint3D*)0x0, this, 6);
   set_param_y(this, 7);
   set_param_y(this, 8);
   for (int i = 0; i < 3; i++) {
      set_param_y((Generic6DOFJoint3D*)0, this, ( i + 9 ));
   }

   set_param_y(this, 0xc);
   set_param_y(this, 0xd);
   set_param_y((Generic6DOFJoint3D*)0x0, this, 0xe);
   set_param_y((Generic6DOFJoint3D*)0x0, this, 0xf);
   set_param_y(this, 0x10);
   set_param_y((Generic6DOFJoint3D*)0x0, this, 0x11);
   set_param_y(this, 0x12);
   for (int i = 0; i < 3; i++) {
      set_param_y((Generic6DOFJoint3D*)0, this, ( i + 19 ));
   }

   set_flag_y(this, 1, 1);
   set_flag_y(this, 0, 1);
   set_flag_y(this, 2, 0);
   set_flag_y(this, 3, 0);
   set_flag_y(this, 4, 0);
   set_flag_y(this, 5, 0);
   set_param_z((Generic6DOFJoint3D*)0x0, this, 0);
   set_param_z((Generic6DOFJoint3D*)0x0, this, 1);
   for (int i = 0; i < 3; i++) {
      set_param_z(this, ( i + 2 ));
   }

   set_param_z((Generic6DOFJoint3D*)0x0, this, 5);
   set_param_z((Generic6DOFJoint3D*)0x0, this, 6);
   set_param_z(this, 7);
   set_param_z(this, 8);
   for (int i = 0; i < 3; i++) {
      set_param_z((Generic6DOFJoint3D*)0, this, ( i + 9 ));
   }

   set_param_z(this, 0xc);
   set_param_z(this, 0xd);
   set_param_z((Generic6DOFJoint3D*)0x0, this, 0xe);
   set_param_z((Generic6DOFJoint3D*)0x0, this, 0xf);
   set_param_z(this, 0x10);
   set_param_z((Generic6DOFJoint3D*)0x0, this, 0x11);
   set_param_z(this, 0x12);
   for (int i = 0; i < 3; i++) {
      set_param_z((Generic6DOFJoint3D*)0, this, ( i + 19 ));
   }

   set_flag_z(this, 1, 1);
   set_flag_z(this, 0, 1);
   set_flag_z(this, 2, 0);
   set_flag_z(this, 3, 0);
   set_flag_z(this, 4, 0);
   set_flag_z(this, 5, 0);
   return;
}
/* Generic6DOFJoint3D::_bind_methods() */void Generic6DOFJoint3D::_bind_methods(void) {
   long lVar1;
   code *pcVar2;
   long *plVar3;
   undefined *puVar4;
   MethodBind *pMVar5;
   undefined *puVar6;
   uint uVar7;
   long *plVar8;
   long lVar9;
   long in_FS_OFFSET;
   undefined8 local_188;
   undefined8 local_180;
   undefined8 local_178;
   long local_170;
   long local_168;
   long local_160;
   char *local_158;
   undefined8 local_150;
   char *local_148;
   long local_140;
   long *local_138;
   char *local_118;
   char *pcStack_110;
   undefined8 local_108;
   char *local_f8;
   char *pcStack_f0;
   undefined8 local_e8;
   char *local_d8;
   char *pcStack_d0;
   undefined8 local_c8;
   char *local_b8;
   char *pcStack_b0;
   undefined8 local_a8;
   char *local_98;
   char *pcStack_90;
   undefined8 local_88;
   char *local_78;
   char *pcStack_70;
   undefined8 local_68;
   char **local_58;
   undefined1 auStack_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = 0;
   local_78 = "param";
   pcStack_70 = "value";
   auStack_50._8_8_ = auStack_50._0_8_;
   auStack_50._0_8_ = &pcStack_70;
   uVar7 = ( uint ) & local_58;
   local_58 = &local_78;
   D_METHODP((char*)&local_148, (char***)"set_param_x", uVar7);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<Generic6DOFJoint3D,Generic6DOFJoint3D::Param,float>(set_param_x);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_138;
   if (local_138 != (long*)0x0) {
      LOCK();
      plVar8 = local_138 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_138 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_138[-1];
         lVar9 = 0;
         local_138 = (long*)0x0;
         plVar8 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar9 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   pcStack_70 = (char*)0x0;
   local_78 = "param";
   local_58 = &local_78;
   D_METHODP((char*)&local_148, (char***)"get_param_x", uVar7);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<Generic6DOFJoint3D,float,Generic6DOFJoint3D::Param>(get_param_x);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_138;
   if (local_138 != (long*)0x0) {
      LOCK();
      plVar8 = local_138 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_138 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_138[-1];
         lVar9 = 0;
         local_138 = (long*)0x0;
         plVar8 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar9 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   local_88 = 0;
   local_98 = "param";
   pcStack_90 = "value";
   auStack_50._0_8_ = &pcStack_90;
   local_58 = &local_98;
   D_METHODP((char*)&local_148, (char***)"set_param_y", uVar7);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<Generic6DOFJoint3D,Generic6DOFJoint3D::Param,float>(set_param_y);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_138;
   if (local_138 != (long*)0x0) {
      LOCK();
      plVar8 = local_138 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_138 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_138[-1];
         lVar9 = 0;
         local_138 = (long*)0x0;
         plVar8 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar9 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   pcStack_70 = (char*)0x0;
   local_78 = "param";
   local_58 = &local_78;
   D_METHODP((char*)&local_148, (char***)"get_param_y", uVar7);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<Generic6DOFJoint3D,float,Generic6DOFJoint3D::Param>(get_param_y);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_138;
   if (local_138 != (long*)0x0) {
      LOCK();
      plVar8 = local_138 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_138 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_138[-1];
         lVar9 = 0;
         local_138 = (long*)0x0;
         plVar8 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar9 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   local_a8 = 0;
   local_b8 = "param";
   pcStack_b0 = "value";
   auStack_50._0_8_ = &pcStack_b0;
   local_58 = &local_b8;
   D_METHODP((char*)&local_148, (char***)"set_param_z", uVar7);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<Generic6DOFJoint3D,Generic6DOFJoint3D::Param,float>(set_param_z);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_138;
   if (local_138 != (long*)0x0) {
      LOCK();
      plVar8 = local_138 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_138 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_138[-1];
         lVar9 = 0;
         local_138 = (long*)0x0;
         plVar8 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar9 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   pcStack_70 = (char*)0x0;
   local_78 = "param";
   local_58 = &local_78;
   D_METHODP((char*)&local_148, (char***)"get_param_z", uVar7);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<Generic6DOFJoint3D,float,Generic6DOFJoint3D::Param>(get_param_z);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_138;
   if (local_138 != (long*)0x0) {
      LOCK();
      plVar8 = local_138 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_138 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_138[-1];
         lVar9 = 0;
         local_138 = (long*)0x0;
         plVar8 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar9 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   local_c8 = 0;
   local_d8 = "flag";
   pcStack_d0 = "value";
   auStack_50._0_8_ = &pcStack_d0;
   local_58 = &local_d8;
   D_METHODP((char*)&local_148, (char***)"set_flag_x", uVar7);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<Generic6DOFJoint3D,Generic6DOFJoint3D::Flag,bool>(set_flag_x);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_138;
   if (local_138 != (long*)0x0) {
      LOCK();
      plVar8 = local_138 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_138 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_138[-1];
         lVar9 = 0;
         local_138 = (long*)0x0;
         plVar8 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar9 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   pcStack_70 = (char*)0x0;
   local_78 = "flag";
   local_58 = &local_78;
   D_METHODP((char*)&local_148, (char***)"get_flag_x", uVar7);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<Generic6DOFJoint3D,bool,Generic6DOFJoint3D::Flag>(get_flag_x);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_138;
   if (local_138 != (long*)0x0) {
      LOCK();
      plVar8 = local_138 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_138 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_138[-1];
         lVar9 = 0;
         local_138 = (long*)0x0;
         plVar8 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar9 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   local_e8 = 0;
   local_f8 = "flag";
   pcStack_f0 = "value";
   auStack_50._0_8_ = &pcStack_f0;
   local_58 = &local_f8;
   D_METHODP((char*)&local_148, (char***)"set_flag_y", uVar7);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<Generic6DOFJoint3D,Generic6DOFJoint3D::Flag,bool>(set_flag_y);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_138;
   if (local_138 != (long*)0x0) {
      LOCK();
      plVar8 = local_138 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_138 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_138[-1];
         lVar9 = 0;
         local_138 = (long*)0x0;
         plVar8 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar9 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   pcStack_70 = (char*)0x0;
   local_78 = "flag";
   local_58 = &local_78;
   D_METHODP((char*)&local_148, (char***)"get_flag_y", uVar7);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<Generic6DOFJoint3D,bool,Generic6DOFJoint3D::Flag>(get_flag_y);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_138;
   if (local_138 != (long*)0x0) {
      LOCK();
      plVar8 = local_138 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_138 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_138[-1];
         lVar9 = 0;
         local_138 = (long*)0x0;
         plVar8 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar9 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   local_108 = 0;
   local_118 = "flag";
   pcStack_110 = "value";
   auStack_50._0_8_ = &pcStack_110;
   local_58 = &local_118;
   D_METHODP((char*)&local_148, (char***)"set_flag_z", uVar7);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<Generic6DOFJoint3D,Generic6DOFJoint3D::Flag,bool>(set_flag_z);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_138;
   if (local_138 != (long*)0x0) {
      LOCK();
      plVar8 = local_138 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_138 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_138[-1];
         lVar9 = 0;
         local_138 = (long*)0x0;
         plVar8 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar9 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   pcStack_70 = (char*)0x0;
   local_78 = "flag";
   local_58 = &local_78;
   D_METHODP((char*)&local_148, (char***)"get_flag_z", uVar7);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<Generic6DOFJoint3D,bool,Generic6DOFJoint3D::Flag>(get_flag_z);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_138;
   if (local_138 != (long*)0x0) {
      LOCK();
      plVar8 = local_138 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_138 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_138[-1];
         lVar9 = 0;
         local_138 = (long*)0x0;
         plVar8 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar9 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   local_158 = (char*)0x0;
   local_148 = "linear_limit_";
   local_140 = 0xd;
   String::parse_latin1((StrRange*)&local_158);
   local_148 = "Linear Limit";
   local_160 = 0;
   local_140 = 0xc;
   String::parse_latin1((StrRange*)&local_160);
   local_148 = "Generic6DOFJoint3D";
   local_168 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_168);
   StringName::StringName((StringName*)&local_148, (String*)&local_168, false);
   ClassDB::add_property_group((StringName*)&local_148, (String*)&local_160, (String*)&local_158, 0);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_170 = 0;
   local_148 = "";
   local_178 = 0;
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_178);
   local_180 = 0;
   local_148 = "linear_limit_x/enabled";
   local_140 = 0x16;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 1, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "suffix:m";
   local_170 = 0;
   local_178 = 0;
   local_140 = 8;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "linear_limit_x/upper_distance";
   local_180 = 0;
   local_140 = 0x1d;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 1);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_160 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "suffix:m";
   local_170 = 0;
   local_178 = 0;
   local_140 = 8;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "linear_limit_x/lower_distance";
   local_180 = 0;
   local_140 = 0x1d;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "0.01,16,0.01";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0xc;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "linear_limit_x/softness";
   local_180 = 0;
   local_140 = 0x17;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 1, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 2);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_160 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "0.01,16,0.01";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0xc;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "linear_limit_x/restitution";
   local_180 = 0;
   local_140 = 0x1a;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 1, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 3);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "0.01,16,0.01";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0xc;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "linear_limit_x/damping";
   local_180 = 0;
   local_140 = 0x16;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 1, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 4);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "linear_limit_y/enabled";
   local_180 = 0;
   local_140 = 0x16;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 1, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "suffix:m";
   local_170 = 0;
   local_178 = 0;
   local_140 = 8;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "linear_limit_y/upper_distance";
   local_180 = 0;
   local_140 = 0x1d;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 1);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_160 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "suffix:m";
   local_170 = 0;
   local_178 = 0;
   local_140 = 8;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "linear_limit_y/lower_distance";
   local_180 = 0;
   local_140 = 0x1d;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "0.01,16,0.01";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0xc;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "linear_limit_y/softness";
   local_180 = 0;
   local_140 = 0x17;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 1, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 2);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "0.01,16,0.01";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0xc;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "linear_limit_y/restitution";
   local_180 = 0;
   local_140 = 0x1a;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 1, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 3);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "0.01,16,0.01";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0xc;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "linear_limit_y/damping";
   local_180 = 0;
   local_140 = 0x16;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 1, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 4);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "linear_limit_z/enabled";
   local_180 = 0;
   local_140 = 0x16;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 1, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "suffix:m";
   local_170 = 0;
   local_178 = 0;
   local_140 = 8;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "linear_limit_z/upper_distance";
   local_180 = 0;
   local_140 = 0x1d;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 1);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_160 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "suffix:m";
   local_170 = 0;
   local_178 = 0;
   local_140 = 8;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "linear_limit_z/lower_distance";
   local_180 = 0;
   local_140 = 0x1d;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "0.01,16,0.01";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0xc;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "linear_limit_z/softness";
   local_180 = 0;
   local_140 = 0x17;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 1, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 2);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_160 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "0.01,16,0.01";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0xc;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "linear_limit_z/restitution";
   local_180 = 0;
   local_140 = 0x1a;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 1, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 3);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "0.01,16,0.01";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0xc;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "linear_limit_z/damping";
   local_180 = 0;
   local_140 = 0x16;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 1, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 4);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   local_158 = (char*)0x0;
   local_148 = "linear_motor_";
   local_140 = 0xd;
   String::parse_latin1((StrRange*)&local_158);
   local_148 = "Linear Motor";
   local_160 = 0;
   local_140 = 0xc;
   String::parse_latin1((StrRange*)&local_160);
   local_148 = "Generic6DOFJoint3D";
   local_168 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_168);
   StringName::StringName((StringName*)&local_148, (String*)&local_168, false);
   ClassDB::add_property_group((StringName*)&local_148, (String*)&local_160, (String*)&local_158, 0);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "linear_motor_x/enabled";
   local_180 = 0;
   local_140 = 0x16;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 1, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 5);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "suffix:m/s";
   local_170 = 0;
   local_178 = 0;
   local_140 = 10;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "linear_motor_x/target_velocity";
   local_180 = 0;
   local_140 = 0x1e;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 5);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_160 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_170 = 0;
   local_178 = 0;
   puVar4 = &_LC37;
   do {
      puVar6 = puVar4;
      puVar4 = puVar6 + 4;
   }
 while ( *(int*)( puVar6 + 4 ) != 0 );
   local_148 = "s";
   local_140 = (long)( puVar6 + -0x1115c4 ) >> 2;
   String::parse_utf32((StrRange*)&local_178);
   local_148 = "linear_motor_x/force_limit";
   local_180 = 0;
   local_140 = 0x1a;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 6);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "linear_motor_y/enabled";
   local_180 = 0;
   local_140 = 0x16;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 1, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 5);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "suffix:m/s";
   local_170 = 0;
   local_178 = 0;
   local_140 = 10;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "linear_motor_y/target_velocity";
   local_180 = 0;
   local_140 = 0x1e;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 5);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_170 = 0;
   local_178 = 0;
   puVar4 = &_LC37;
   do {
      puVar6 = puVar4;
      puVar4 = puVar6 + 4;
   }
 while ( *(int*)( puVar6 + 4 ) != 0 );
   local_148 = "s";
   local_140 = (long)( puVar6 + -0x1115c4 ) >> 2;
   String::parse_utf32((StrRange*)&local_178);
   local_148 = "linear_motor_y/force_limit";
   local_180 = 0;
   local_140 = 0x1a;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 6);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_160 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "linear_motor_z/enabled";
   local_180 = 0;
   local_140 = 0x16;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 1, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 5);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "suffix:m/s";
   local_170 = 0;
   local_178 = 0;
   local_140 = 10;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "linear_motor_z/target_velocity";
   local_180 = 0;
   local_140 = 0x1e;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 5);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_160 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_170 = 0;
   local_178 = 0;
   puVar4 = &_LC37;
   do {
      puVar6 = puVar4;
      puVar4 = puVar6 + 4;
   }
 while ( *(int*)( puVar6 + 4 ) != 0 );
   local_148 = "s";
   local_140 = (long)( puVar6 + -0x1115c4 ) >> 2;
   String::parse_utf32((StrRange*)&local_178);
   local_148 = "linear_motor_z/force_limit";
   local_180 = 0;
   local_140 = 0x1a;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 6);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   local_158 = (char*)0x0;
   local_148 = "linear_spring_";
   local_140 = 0xe;
   String::parse_latin1((StrRange*)&local_158);
   local_148 = "Linear Spring";
   local_160 = 0;
   local_140 = 0xd;
   String::parse_latin1((StrRange*)&local_160);
   local_148 = "Generic6DOFJoint3D";
   local_168 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_168);
   StringName::StringName((StringName*)&local_148, (String*)&local_168, false);
   ClassDB::add_property_group((StringName*)&local_148, (String*)&local_160, (String*)&local_158, 0);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "linear_spring_x/enabled";
   local_180 = 0;
   local_140 = 0x17;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 1, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 3);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "linear_spring_x/stiffness";
   local_180 = 0;
   local_140 = 0x19;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 7);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "linear_spring_x/damping";
   local_180 = 0;
   local_140 = 0x17;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 8);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "suffix:m";
   local_170 = 0;
   local_178 = 0;
   local_140 = 8;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "linear_spring_x/equilibrium_point";
   local_180 = 0;
   local_140 = 0x21;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 9);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_170 = 0;
   local_178 = 0;
   String::parse_latin1((String*)&local_178, "");
   local_148 = "linear_spring_y/enabled";
   local_180 = 0;
   local_140 = 0x17;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 1, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 3);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_160 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_170 = 0;
   local_178 = 0;
   String::parse_latin1((String*)&local_178, "");
   local_180 = 0;
   String::parse_latin1((String*)&local_180, "linear_spring_y/stiffness");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 7);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_170 = 0;
   local_178 = 0;
   String::parse_latin1((String*)&local_178, "");
   local_180 = 0;
   String::parse_latin1((String*)&local_180, "linear_spring_y/damping");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 8);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_170 = 0;
   local_178 = 0;
   String::parse_latin1((String*)&local_178, "suffix:m");
   local_148 = "linear_spring_y/equilibrium_point";
   local_180 = 0;
   local_140 = 0x21;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 9);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_170 = 0;
   local_178 = 0;
   String::parse_latin1((String*)&local_178, "");
   local_180 = 0;
   local_148 = "linear_spring_z/enabled";
   local_140 = 0x17;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 1, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_188 = 0;
   String::parse_latin1((String*)&local_188, "Generic6DOFJoint3D");
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 3);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_178);
   local_180 = 0;
   String::parse_latin1((String*)&local_180, "linear_spring_z/stiffness");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_188 = 0;
   String::parse_latin1((String*)&local_188, "Generic6DOFJoint3D");
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 7);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_178);
   local_180 = 0;
   local_148 = "linear_spring_z/damping";
   local_140 = 0x17;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_188 = 0;
   String::parse_latin1((String*)&local_188, "Generic6DOFJoint3D");
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 8);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_160 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "suffix:m";
   local_170 = 0;
   local_178 = 0;
   local_140 = 8;
   String::parse_latin1((StrRange*)&local_178);
   local_180 = 0;
   String::parse_latin1((String*)&local_180, "linear_spring_z/equilibrium_point");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_188 = 0;
   String::parse_latin1((String*)&local_188, "Generic6DOFJoint3D");
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 9);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   local_158 = (char*)0x0;
   local_148 = "angular_limit_";
   local_140 = 0xe;
   String::parse_latin1((StrRange*)&local_158);
   local_148 = "Angular Limit";
   local_160 = 0;
   local_140 = 0xd;
   String::parse_latin1((StrRange*)&local_160);
   local_148 = "Generic6DOFJoint3D";
   local_168 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_168);
   StringName::StringName((StringName*)&local_148, (String*)&local_168, false);
   ClassDB::add_property_group((StringName*)&local_148, (String*)&local_160, (String*)&local_158, 0);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_170 = 0;
   local_178 = 0;
   String::parse_latin1((String*)&local_178, "");
   local_180 = 0;
   local_148 = "angular_limit_x/enabled";
   local_140 = 0x17;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 1, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_188 = 0;
   String::parse_latin1((String*)&local_188, "Generic6DOFJoint3D");
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 1);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_160 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_170 = 0;
   local_178 = 0;
   String::parse_latin1((String*)&local_178, "-180,180,0.01,radians_as_degrees");
   local_148 = "angular_limit_x/upper_angle";
   local_180 = 0;
   local_140 = 0x1b;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 1, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0xb);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_170 = 0;
   local_178 = 0;
   String::parse_latin1((String*)&local_178, "-180,180,0.01,radians_as_degrees");
   local_180 = 0;
   local_148 = "angular_limit_x/lower_angle";
   local_140 = 0x1b;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 1, (StrRange*)&local_178, 6, (String*)&local_170);
   local_188 = 0;
   String::parse_latin1((String*)&local_188, "Generic6DOFJoint3D");
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 10);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_170 = 0;
   local_178 = 0;
   String::parse_latin1((String*)&local_178, "0.01,16,0.01");
   local_148 = "angular_limit_x/softness";
   local_180 = 0;
   local_140 = 0x18;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 1, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0xc);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_170 = 0;
   local_178 = 0;
   String::parse_latin1((String*)&local_178, "0.01,16,0.01");
   local_180 = 0;
   local_148 = "angular_limit_x/restitution";
   local_140 = 0x1b;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 1, (StrRange*)&local_178, 6, (String*)&local_170);
   local_188 = 0;
   String::parse_latin1((String*)&local_188, "Generic6DOFJoint3D");
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0xe);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_160 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_170 = 0;
   local_178 = 0;
   String::parse_latin1((String*)&local_178, "0.01,16,0.01");
   local_180 = 0;
   String::parse_latin1((String*)&local_180, "angular_limit_x/damping");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 1, (StrRange*)&local_178, 6, (String*)&local_170);
   local_188 = 0;
   String::parse_latin1((String*)&local_188, "Generic6DOFJoint3D");
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0xd);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_170 = 0;
   local_178 = 0;
   puVar4 = &_LC38;
   do {
      puVar6 = puVar4;
      puVar4 = puVar6 + 4;
   }
 while ( *(int*)( puVar6 + 4 ) != 0 );
   local_148 = "s";
   local_140 = (long)( puVar6 + -0x111614 ) >> 2;
   String::parse_utf32((StrRange*)&local_178);
   local_148 = "angular_limit_x/force_limit";
   local_180 = 0;
   local_140 = 0x1b;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0xf);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_178);
   local_180 = 0;
   local_148 = "angular_limit_x/erp";
   local_140 = 0x13;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_188 = 0;
   String::parse_latin1((String*)&local_188, "Generic6DOFJoint3D");
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0x10);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_170 = 0;
   local_178 = 0;
   String::parse_latin1((String*)&local_178, "");
   local_180 = 0;
   local_148 = "angular_limit_y/enabled";
   local_140 = 0x17;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 1, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_188 = 0;
   String::parse_latin1((String*)&local_188, "Generic6DOFJoint3D");
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 1);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_160 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "-180,180,0.01,radians_as_degrees";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0x20;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "angular_limit_y/upper_angle";
   local_180 = 0;
   local_140 = 0x1b;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 1, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0xb);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "-180,180,0.01,radians_as_degrees";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0x20;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "angular_limit_y/lower_angle";
   local_180 = 0;
   local_140 = 0x1b;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 1, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 10);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_160 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "0.01,16,0.01";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0xc;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "angular_limit_y/softness";
   local_180 = 0;
   local_140 = 0x18;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 1, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0xc);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "0.01,16,0.01";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0xc;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "angular_limit_y/restitution";
   local_180 = 0;
   local_140 = 0x1b;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 1, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0xe);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "0.01,16,0.01";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0xc;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "angular_limit_y/damping";
   local_180 = 0;
   local_140 = 0x17;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 1, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0xd);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_170 = 0;
   local_178 = 0;
   puVar4 = &_LC38;
   do {
      puVar6 = puVar4;
      puVar4 = puVar6 + 4;
   }
 while ( *(int*)( puVar6 + 4 ) != 0 );
   local_148 = "s";
   local_140 = (long)( puVar6 + -0x111614 ) >> 2;
   String::parse_utf32((StrRange*)&local_178);
   local_148 = "angular_limit_y/force_limit";
   local_180 = 0;
   local_140 = 0x1b;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0xf);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "angular_limit_y/erp";
   local_180 = 0;
   local_140 = 0x13;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0x10);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "angular_limit_z/enabled";
   local_180 = 0;
   local_140 = 0x17;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 1, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 1);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_160 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "-180,180,0.01,radians_as_degrees";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0x20;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "angular_limit_z/upper_angle";
   local_180 = 0;
   local_140 = 0x1b;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 1, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0xb);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "-180,180,0.01,radians_as_degrees";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0x20;
   String::parse_latin1((StrRange*)&local_178);
   local_180 = 0;
   local_148 = "angular_limit_z/lower_angle";
   local_140 = 0x1b;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 1, (StrRange*)&local_178, 6, (String*)&local_170);
   local_188 = 0;
   String::parse_latin1((String*)&local_188, "Generic6DOFJoint3D");
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 10);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "0.01,16,0.01";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0xc;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "angular_limit_z/softness";
   local_180 = 0;
   local_140 = 0x18;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 1, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0xc);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "0.01,16,0.01";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0xc;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "angular_limit_z/restitution";
   local_180 = 0;
   local_140 = 0x1b;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 1, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0xe);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_160 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "0.01,16,0.01";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0xc;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "angular_limit_z/damping";
   local_180 = 0;
   local_140 = 0x17;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 1, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0xd);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_170 = 0;
   local_178 = 0;
   puVar4 = &_LC38;
   do {
      puVar6 = puVar4;
      puVar4 = puVar6 + 4;
   }
 while ( *(int*)( puVar6 + 4 ) != 0 );
   local_148 = "s";
   local_140 = (long)( puVar6 + -0x111614 ) >> 2;
   String::parse_utf32((StrRange*)&local_178);
   local_148 = "angular_limit_z/force_limit";
   local_180 = 0;
   local_140 = 0x1b;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0xf);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_160 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "angular_limit_z/erp";
   local_180 = 0;
   local_140 = 0x13;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0x10);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   local_158 = (char*)0x0;
   local_148 = "angular_motor_";
   local_140 = 0xe;
   String::parse_latin1((StrRange*)&local_158);
   local_148 = "Angular Motor";
   local_160 = 0;
   local_140 = 0xd;
   String::parse_latin1((StrRange*)&local_160);
   local_168 = 0;
   String::parse_latin1((String*)&local_168, "Generic6DOFJoint3D");
   StringName::StringName((StringName*)&local_148, (String*)&local_168, false);
   ClassDB::add_property_group((StringName*)&local_148, (String*)&local_160, (String*)&local_158, 0);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "angular_motor_x/enabled";
   local_180 = 0;
   local_140 = 0x17;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 1, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 4);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_160 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_170 = 0;
   local_178 = 0;
   puVar4 = &_LC39;
   do {
      puVar6 = puVar4;
      puVar4 = puVar6 + 4;
   }
 while ( *(int*)( puVar6 + 4 ) != 0 );
   local_148 = "r";
   local_140 = (long)( puVar6 + -0x11166c ) >> 2;
   String::parse_utf32((StrRange*)&local_178);
   local_148 = "angular_motor_x/target_velocity";
   local_180 = 0;
   local_140 = 0x1f;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0x11);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_170 = 0;
   local_178 = 0;
   puVar4 = &_LC38;
   do {
      puVar6 = puVar4;
      puVar4 = puVar6 + 4;
   }
 while ( *(int*)( puVar6 + 4 ) != 0 );
   local_148 = "s";
   local_140 = (long)( puVar6 + -0x111614 ) >> 2;
   String::parse_utf32((StrRange*)&local_178);
   local_148 = "angular_motor_x/force_limit";
   local_180 = 0;
   local_140 = 0x1b;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0x12);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "angular_motor_y/enabled";
   local_180 = 0;
   local_140 = 0x17;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 1, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 4);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_170 = 0;
   local_178 = 0;
   puVar4 = &_LC39;
   do {
      puVar6 = puVar4;
      puVar4 = puVar6 + 4;
   }
 while ( *(int*)( puVar6 + 4 ) != 0 );
   local_148 = "r";
   local_140 = (long)( puVar6 + -0x11166c ) >> 2;
   String::parse_utf32((StrRange*)&local_178);
   local_148 = "angular_motor_y/target_velocity";
   local_180 = 0;
   local_140 = 0x1f;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0x11);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_160 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_170 = 0;
   local_178 = 0;
   puVar4 = &_LC38;
   do {
      puVar6 = puVar4;
      puVar4 = puVar6 + 4;
   }
 while ( *(int*)( puVar6 + 4 ) != 0 );
   local_148 = "s";
   local_140 = (long)( puVar6 + -0x111614 ) >> 2;
   String::parse_utf32((StrRange*)&local_178);
   local_148 = "angular_motor_y/force_limit";
   local_180 = 0;
   local_140 = 0x1b;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0x12);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "angular_motor_z/enabled";
   local_180 = 0;
   local_140 = 0x17;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 1, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 4);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_170 = 0;
   local_178 = 0;
   puVar4 = &_LC39;
   do {
      puVar6 = puVar4;
      puVar4 = puVar6 + 4;
   }
 while ( *(int*)( puVar6 + 4 ) != 0 );
   local_148 = "r";
   local_140 = (long)( puVar6 + -0x11166c ) >> 2;
   String::parse_utf32((StrRange*)&local_178);
   local_148 = "angular_motor_z/target_velocity";
   local_180 = 0;
   local_140 = 0x1f;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0x11);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_170 = 0;
   local_178 = 0;
   puVar4 = &_LC38;
   do {
      puVar6 = puVar4;
      puVar4 = puVar6 + 4;
   }
 while ( *(int*)( puVar6 + 4 ) != 0 );
   local_148 = "s";
   local_140 = (long)( puVar6 + -0x111614 ) >> 2;
   String::parse_utf32((StrRange*)&local_178);
   local_148 = "angular_motor_z/force_limit";
   local_180 = 0;
   local_140 = 0x1b;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0x12);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   local_158 = (char*)0x0;
   String::parse_latin1((String*)&local_158, "angular_spring_");
   local_148 = "Angular Spring";
   local_160 = 0;
   local_140 = 0xe;
   String::parse_latin1((StrRange*)&local_160);
   local_148 = "Generic6DOFJoint3D";
   local_168 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_168);
   StringName::StringName((StringName*)&local_148, (String*)&local_168, false);
   ClassDB::add_property_group((StringName*)&local_148, (String*)&local_160, (String*)&local_158, 0);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "angular_spring_x/enabled";
   local_180 = 0;
   local_140 = 0x18;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 1, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 2);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "angular_spring_x/stiffness";
   local_180 = 0;
   local_140 = 0x1a;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0x13);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_160 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_170 = 0;
   local_178 = 0;
   String::parse_latin1((String*)&local_178, "");
   local_148 = "angular_spring_x/damping";
   local_180 = 0;
   local_140 = 0x18;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0x14);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "-180,180,0.01,radians_as_degrees";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0x20;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "angular_spring_x/equilibrium_point";
   local_180 = 0;
   local_140 = 0x22;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 1, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0x15);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_160 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "angular_spring_y/enabled";
   local_180 = 0;
   local_140 = 0x18;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 1, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 2);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "angular_spring_y/stiffness";
   local_180 = 0;
   local_140 = 0x1a;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0x13);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "angular_spring_y/damping";
   local_180 = 0;
   local_140 = 0x18;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0x14);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "-180,180,0.01,radians_as_degrees";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0x20;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "angular_spring_y/equilibrium_point";
   local_180 = 0;
   local_140 = 0x22;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 1, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0x15);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_160 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "angular_spring_z/enabled";
   local_180 = 0;
   local_140 = 0x18;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 1, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 2);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "angular_spring_z/stiffness";
   local_180 = 0;
   local_140 = 0x1a;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0x13);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "angular_spring_z/damping";
   local_180 = 0;
   local_140 = 0x18;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 0, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0x14);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "-180,180,0.01,radians_as_degrees";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0x20;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "angular_spring_z/equilibrium_point";
   local_180 = 0;
   local_140 = 0x22;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 3, (StrRange*)&local_180, 1, (StrRange*)&local_178, 6, (String*)&local_170);
   local_158 = "Generic6DOFJoint3D";
   local_188 = 0;
   local_150 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, 0x15);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_148, "PARAM_LINEAR_LOWER_LIMIT", false);
   local_168 = 0;
   String::parse_latin1((String*)&local_168, "PARAM_LINEAR_LOWER_LIMIT");
   __constant_get_enum_name<Generic6DOFJoint3D::Param>((StrRange*)&local_160);
   local_170 = 0;
   String::parse_latin1((String*)&local_170, "Generic6DOFJoint3D");
   StringName::StringName((StringName*)&local_158, (String*)&local_170, false);
   ClassDB::bind_integer_constant((StringName*)&local_158, (StringName*)&local_160, (StringName*)&local_148, 0, false);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_158, "PARAM_LINEAR_UPPER_LIMIT", false);
   local_168 = 0;
   local_148 = "PARAM_LINEAR_UPPER_LIMIT";
   local_140 = 0x18;
   String::parse_latin1((StrRange*)&local_168);
   __constant_get_enum_name<Generic6DOFJoint3D::Param>((StrRange*)&local_160);
   local_148 = "Generic6DOFJoint3D";
   local_170 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_170);
   StringName::StringName((StringName*)&local_148, (String*)&local_170, false);
   ClassDB::bind_integer_constant((StringName*)&local_148, (StringName*)&local_160, (StringName*)&local_158, 1, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_158, "PARAM_LINEAR_LIMIT_SOFTNESS", false);
   local_168 = 0;
   local_148 = "PARAM_LINEAR_LIMIT_SOFTNESS";
   local_140 = 0x1b;
   String::parse_latin1((StrRange*)&local_168);
   __constant_get_enum_name<Generic6DOFJoint3D::Param>((StrRange*)&local_160);
   local_148 = "Generic6DOFJoint3D";
   local_170 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_170);
   StringName::StringName((StringName*)&local_148, (String*)&local_170, false);
   ClassDB::bind_integer_constant((StringName*)&local_148, (StringName*)&local_160, (StringName*)&local_158, 2, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_158, "PARAM_LINEAR_RESTITUTION", false);
   local_168 = 0;
   local_148 = "PARAM_LINEAR_RESTITUTION";
   local_140 = 0x18;
   String::parse_latin1((StrRange*)&local_168);
   __constant_get_enum_name<Generic6DOFJoint3D::Param>((StrRange*)&local_160);
   local_148 = "Generic6DOFJoint3D";
   local_170 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_170);
   StringName::StringName((StringName*)&local_148, (String*)&local_170, false);
   ClassDB::bind_integer_constant((StringName*)&local_148, (StringName*)&local_160, (StringName*)&local_158, 3, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_148, "PARAM_LINEAR_DAMPING", false);
   local_168 = 0;
   String::parse_latin1((String*)&local_168, "PARAM_LINEAR_DAMPING");
   __constant_get_enum_name<Generic6DOFJoint3D::Param>((StrRange*)&local_160);
   local_170 = 0;
   String::parse_latin1((String*)&local_170, "Generic6DOFJoint3D");
   StringName::StringName((StringName*)&local_158, (String*)&local_170, false);
   ClassDB::bind_integer_constant((StringName*)&local_158, (StringName*)&local_160, (StringName*)&local_148, 4, false);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_148, "PARAM_LINEAR_MOTOR_TARGET_VELOCITY", false);
   local_168 = 0;
   String::parse_latin1((String*)&local_168, "PARAM_LINEAR_MOTOR_TARGET_VELOCITY");
   __constant_get_enum_name<Generic6DOFJoint3D::Param>((StrRange*)&local_160);
   local_170 = 0;
   String::parse_latin1((String*)&local_170, "Generic6DOFJoint3D");
   StringName::StringName((StringName*)&local_158, (String*)&local_170, false);
   ClassDB::bind_integer_constant((StringName*)&local_158, (StringName*)&local_160, (StringName*)&local_148, 5, false);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_158, "PARAM_LINEAR_MOTOR_FORCE_LIMIT", false);
   local_168 = 0;
   local_148 = "PARAM_LINEAR_MOTOR_FORCE_LIMIT";
   local_140 = 0x1e;
   String::parse_latin1((StrRange*)&local_168);
   __constant_get_enum_name<Generic6DOFJoint3D::Param>((StrRange*)&local_160);
   local_170 = 0;
   String::parse_latin1((String*)&local_170, "Generic6DOFJoint3D");
   StringName::StringName((StringName*)&local_148, (String*)&local_170, false);
   ClassDB::bind_integer_constant((StringName*)&local_148, (StringName*)&local_160, (StringName*)&local_158, 6, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_158, "PARAM_LINEAR_SPRING_STIFFNESS", false);
   local_168 = 0;
   String::parse_latin1((String*)&local_168, "PARAM_LINEAR_SPRING_STIFFNESS");
   __constant_get_enum_name<Generic6DOFJoint3D::Param>((StrRange*)&local_160);
   local_148 = "Generic6DOFJoint3D";
   local_170 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_170);
   StringName::StringName((StringName*)&local_148, (String*)&local_170, false);
   ClassDB::bind_integer_constant((StringName*)&local_148, (StringName*)&local_160, (StringName*)&local_158, 7, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_158, "PARAM_LINEAR_SPRING_DAMPING", false);
   local_168 = 0;
   String::parse_latin1((String*)&local_168, "PARAM_LINEAR_SPRING_DAMPING");
   __constant_get_enum_name<Generic6DOFJoint3D::Param>((StrRange*)&local_160);
   local_148 = "Generic6DOFJoint3D";
   local_170 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_170);
   StringName::StringName((StringName*)&local_148, (String*)&local_170, false);
   ClassDB::bind_integer_constant((StringName*)&local_148, (StringName*)&local_160, (StringName*)&local_158, 8, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_158, "PARAM_LINEAR_SPRING_EQUILIBRIUM_POINT", false);
   local_168 = 0;
   local_148 = "PARAM_LINEAR_SPRING_EQUILIBRIUM_POINT";
   local_140 = 0x25;
   String::parse_latin1((StrRange*)&local_168);
   __constant_get_enum_name<Generic6DOFJoint3D::Param>((StrRange*)&local_160);
   local_148 = "Generic6DOFJoint3D";
   local_170 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_170);
   StringName::StringName((StringName*)&local_148, (String*)&local_170, false);
   ClassDB::bind_integer_constant((StringName*)&local_148, (StringName*)&local_160, (StringName*)&local_158, 9, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_158, "PARAM_ANGULAR_LOWER_LIMIT", false);
   local_168 = 0;
   String::parse_latin1((String*)&local_168, "PARAM_ANGULAR_LOWER_LIMIT");
   __constant_get_enum_name<Generic6DOFJoint3D::Param>((StrRange*)&local_160);
   local_148 = "Generic6DOFJoint3D";
   local_170 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_170);
   StringName::StringName((StringName*)&local_148, (String*)&local_170, false);
   ClassDB::bind_integer_constant((StringName*)&local_148, (StringName*)&local_160, (StringName*)&local_158, 10, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_158, "PARAM_ANGULAR_UPPER_LIMIT", false);
   local_168 = 0;
   local_148 = "PARAM_ANGULAR_UPPER_LIMIT";
   local_140 = 0x19;
   String::parse_latin1((StrRange*)&local_168);
   __constant_get_enum_name<Generic6DOFJoint3D::Param>((StrRange*)&local_160);
   local_148 = "Generic6DOFJoint3D";
   local_170 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_170);
   StringName::StringName((StringName*)&local_148, (String*)&local_170, false);
   ClassDB::bind_integer_constant((StringName*)&local_148, (StringName*)&local_160, (StringName*)&local_158, 0xb, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_158, "PARAM_ANGULAR_LIMIT_SOFTNESS", false);
   local_168 = 0;
   String::parse_latin1((String*)&local_168, "PARAM_ANGULAR_LIMIT_SOFTNESS");
   __constant_get_enum_name<Generic6DOFJoint3D::Param>((StrRange*)&local_160);
   local_148 = "Generic6DOFJoint3D";
   local_170 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_170);
   StringName::StringName((StringName*)&local_148, (String*)&local_170, false);
   ClassDB::bind_integer_constant((StringName*)&local_148, (StringName*)&local_160, (StringName*)&local_158, 0xc, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_158, "PARAM_ANGULAR_DAMPING", false);
   local_168 = 0;
   local_148 = "PARAM_ANGULAR_DAMPING";
   local_140 = 0x15;
   String::parse_latin1((StrRange*)&local_168);
   __constant_get_enum_name<Generic6DOFJoint3D::Param>((StrRange*)&local_160);
   local_148 = "Generic6DOFJoint3D";
   local_170 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_170);
   StringName::StringName((StringName*)&local_148, (String*)&local_170, false);
   ClassDB::bind_integer_constant((StringName*)&local_148, (StringName*)&local_160, (StringName*)&local_158, 0xd, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_158, "PARAM_ANGULAR_RESTITUTION", false);
   local_168 = 0;
   local_148 = "PARAM_ANGULAR_RESTITUTION";
   local_140 = 0x19;
   String::parse_latin1((StrRange*)&local_168);
   __constant_get_enum_name<Generic6DOFJoint3D::Param>((StrRange*)&local_160);
   local_170 = 0;
   String::parse_latin1((String*)&local_170, "Generic6DOFJoint3D");
   StringName::StringName((StringName*)&local_148, (String*)&local_170, false);
   ClassDB::bind_integer_constant((StringName*)&local_148, (StringName*)&local_160, (StringName*)&local_158, 0xe, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_148, "PARAM_ANGULAR_FORCE_LIMIT", false);
   local_168 = 0;
   String::parse_latin1((String*)&local_168, "PARAM_ANGULAR_FORCE_LIMIT");
   __constant_get_enum_name<Generic6DOFJoint3D::Param>((StrRange*)&local_160);
   local_170 = 0;
   String::parse_latin1((String*)&local_170, "Generic6DOFJoint3D");
   StringName::StringName((StringName*)&local_158, (String*)&local_170, false);
   ClassDB::bind_integer_constant((StringName*)&local_158, (StringName*)&local_160, (StringName*)&local_148, 0xf, false);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_148, "PARAM_ANGULAR_ERP", false);
   local_168 = 0;
   String::parse_latin1((String*)&local_168, "PARAM_ANGULAR_ERP");
   __constant_get_enum_name<Generic6DOFJoint3D::Param>((StrRange*)&local_160);
   local_170 = 0;
   String::parse_latin1((String*)&local_170, "Generic6DOFJoint3D");
   StringName::StringName((StringName*)&local_158, (String*)&local_170, false);
   ClassDB::bind_integer_constant((StringName*)&local_158, (StringName*)&local_160, (StringName*)&local_148, 0x10, false);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_158, "PARAM_ANGULAR_MOTOR_TARGET_VELOCITY", false);
   local_168 = 0;
   local_148 = "PARAM_ANGULAR_MOTOR_TARGET_VELOCITY";
   local_140 = 0x23;
   String::parse_latin1((StrRange*)&local_168);
   __constant_get_enum_name<Generic6DOFJoint3D::Param>((StrRange*)&local_160);
   local_170 = 0;
   String::parse_latin1((String*)&local_170, "Generic6DOFJoint3D");
   StringName::StringName((StringName*)&local_148, (String*)&local_170, false);
   ClassDB::bind_integer_constant((StringName*)&local_148, (StringName*)&local_160, (StringName*)&local_158, 0x11, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_148, "PARAM_ANGULAR_MOTOR_FORCE_LIMIT", false);
   local_168 = 0;
   String::parse_latin1((String*)&local_168, "PARAM_ANGULAR_MOTOR_FORCE_LIMIT");
   __constant_get_enum_name<Generic6DOFJoint3D::Param>((StrRange*)&local_160);
   local_170 = 0;
   String::parse_latin1((String*)&local_170, "Generic6DOFJoint3D");
   StringName::StringName((StringName*)&local_158, (String*)&local_170, false);
   ClassDB::bind_integer_constant((StringName*)&local_158, (StringName*)&local_160, (StringName*)&local_148, 0x12, false);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_158, "PARAM_ANGULAR_SPRING_STIFFNESS", false);
   local_168 = 0;
   local_148 = "PARAM_ANGULAR_SPRING_STIFFNESS";
   local_140 = 0x1e;
   String::parse_latin1((StrRange*)&local_168);
   __constant_get_enum_name<Generic6DOFJoint3D::Param>((StrRange*)&local_160);
   local_148 = "Generic6DOFJoint3D";
   local_170 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_170);
   StringName::StringName((StringName*)&local_148, (String*)&local_170, false);
   ClassDB::bind_integer_constant((StringName*)&local_148, (StringName*)&local_160, (StringName*)&local_158, 0x13, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_158, "PARAM_ANGULAR_SPRING_DAMPING", false);
   local_168 = 0;
   String::parse_latin1((String*)&local_168, "PARAM_ANGULAR_SPRING_DAMPING");
   __constant_get_enum_name<Generic6DOFJoint3D::Param>((StrRange*)&local_160);
   local_148 = "Generic6DOFJoint3D";
   local_170 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_170);
   StringName::StringName((StringName*)&local_148, (String*)&local_170, false);
   ClassDB::bind_integer_constant((StringName*)&local_148, (StringName*)&local_160, (StringName*)&local_158, 0x14, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_158, "PARAM_ANGULAR_SPRING_EQUILIBRIUM_POINT", false);
   local_168 = 0;
   String::parse_latin1((String*)&local_168, "PARAM_ANGULAR_SPRING_EQUILIBRIUM_POINT");
   __constant_get_enum_name<Generic6DOFJoint3D::Param>((StrRange*)&local_160);
   local_148 = "Generic6DOFJoint3D";
   local_170 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_170);
   StringName::StringName((StringName*)&local_148, (String*)&local_170, false);
   ClassDB::bind_integer_constant((StringName*)&local_148, (StringName*)&local_160, (StringName*)&local_158, 0x15, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_158, "PARAM_MAX", false);
   local_168 = 0;
   local_148 = "PARAM_MAX";
   local_140 = 9;
   String::parse_latin1((StrRange*)&local_168);
   __constant_get_enum_name<Generic6DOFJoint3D::Param>((StrRange*)&local_160);
   local_148 = "Generic6DOFJoint3D";
   local_170 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_170);
   StringName::StringName((StringName*)&local_148, (String*)&local_170, false);
   ClassDB::bind_integer_constant((StringName*)&local_148, (StringName*)&local_160, (StringName*)&local_158, 0x16, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_148, "FLAG_ENABLE_LINEAR_LIMIT", false);
   local_168 = 0;
   String::parse_latin1((String*)&local_168, "FLAG_ENABLE_LINEAR_LIMIT");
   __constant_get_enum_name<Generic6DOFJoint3D::Flag>((StrRange*)&local_160);
   local_170 = 0;
   String::parse_latin1((String*)&local_170, "Generic6DOFJoint3D");
   StringName::StringName((StringName*)&local_158, (String*)&local_170, false);
   ClassDB::bind_integer_constant((StringName*)&local_158, (StringName*)&local_160, (StringName*)&local_148, 0, false);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_158, "FLAG_ENABLE_ANGULAR_LIMIT", false);
   local_168 = 0;
   String::parse_latin1((String*)&local_168, "FLAG_ENABLE_ANGULAR_LIMIT");
   __constant_get_enum_name<Generic6DOFJoint3D::Flag>((StrRange*)&local_160);
   local_148 = "Generic6DOFJoint3D";
   local_170 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_170);
   StringName::StringName((StringName*)&local_148, (String*)&local_170, false);
   ClassDB::bind_integer_constant((StringName*)&local_148, (StringName*)&local_160, (StringName*)&local_158, 1, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_158, "FLAG_ENABLE_LINEAR_SPRING", false);
   local_168 = 0;
   local_148 = "FLAG_ENABLE_LINEAR_SPRING";
   local_140 = 0x19;
   String::parse_latin1((StrRange*)&local_168);
   __constant_get_enum_name<Generic6DOFJoint3D::Flag>((StrRange*)&local_160);
   local_148 = "Generic6DOFJoint3D";
   local_170 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_170);
   StringName::StringName((StringName*)&local_148, (String*)&local_170, false);
   ClassDB::bind_integer_constant((StringName*)&local_148, (StringName*)&local_160, (StringName*)&local_158, 3, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_158, "FLAG_ENABLE_ANGULAR_SPRING", false);
   local_168 = 0;
   local_148 = "FLAG_ENABLE_ANGULAR_SPRING";
   local_140 = 0x1a;
   String::parse_latin1((StrRange*)&local_168);
   __constant_get_enum_name<Generic6DOFJoint3D::Flag>((StrRange*)&local_160);
   local_148 = "Generic6DOFJoint3D";
   local_170 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_170);
   StringName::StringName((StringName*)&local_148, (String*)&local_170, false);
   ClassDB::bind_integer_constant((StringName*)&local_148, (StringName*)&local_160, (StringName*)&local_158, 2, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_158, "FLAG_ENABLE_MOTOR", false);
   local_168 = 0;
   local_148 = "FLAG_ENABLE_MOTOR";
   local_140 = 0x11;
   String::parse_latin1((StrRange*)&local_168);
   __constant_get_enum_name<Generic6DOFJoint3D::Flag>((StrRange*)&local_160);
   local_148 = "Generic6DOFJoint3D";
   local_170 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_170);
   StringName::StringName((StringName*)&local_148, (String*)&local_170, false);
   ClassDB::bind_integer_constant((StringName*)&local_148, (StringName*)&local_160, (StringName*)&local_158, 4, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_158, "FLAG_ENABLE_LINEAR_MOTOR", false);
   local_168 = 0;
   local_148 = "FLAG_ENABLE_LINEAR_MOTOR";
   local_140 = 0x18;
   String::parse_latin1((StrRange*)&local_168);
   __constant_get_enum_name<Generic6DOFJoint3D::Flag>((StrRange*)&local_160);
   local_148 = "Generic6DOFJoint3D";
   local_170 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_170);
   StringName::StringName((StringName*)&local_148, (String*)&local_170, false);
   ClassDB::bind_integer_constant((StringName*)&local_148, (StringName*)&local_160, (StringName*)&local_158, 5, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_158, "FLAG_MAX", false);
   local_168 = 0;
   String::parse_latin1((String*)&local_168, "FLAG_MAX");
   __constant_get_enum_name<Generic6DOFJoint3D::Flag>((StrRange*)&local_160);
   local_148 = "Generic6DOFJoint3D";
   local_170 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_170);
   StringName::StringName((StringName*)&local_148, (String*)&local_170, false);
   ClassDB::bind_integer_constant((StringName*)&local_148, (StringName*)&local_160, (StringName*)&local_158, 6, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
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
/* Generic6DOFJoint3D::is_class_ptr(void*) const */uint Generic6DOFJoint3D::is_class_ptr(Generic6DOFJoint3D *this, void *param_1) {
   return (uint)CONCAT71(0x1147, (undefined4*)param_1 == &Joint3D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1147, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1147, (undefined4*)param_1 == &Node3D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1147, (undefined4*)param_1 == &Node::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1147, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* Generic6DOFJoint3D::_getv(StringName const&, Variant&) const */undefined8 Generic6DOFJoint3D::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Generic6DOFJoint3D::_setv(StringName const&, Variant const&) */undefined8 Generic6DOFJoint3D::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* MethodBindTRC<bool, Generic6DOFJoint3D::Flag>::_gen_argument_type(int) const */char MethodBindTRC<bool,Generic6DOFJoint3D::Flag>::_gen_argument_type(MethodBindTRC<bool,Generic6DOFJoint3D::Flag> *this, int param_1) {
   return ( param_1 == 0 ) + '\x01';
}
/* MethodBindTRC<bool, Generic6DOFJoint3D::Flag>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool,Generic6DOFJoint3D::Flag>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Generic6DOFJoint3D::Flag, bool>::_gen_argument_type(int) const */char MethodBindT<Generic6DOFJoint3D::Flag,bool>::_gen_argument_type(MethodBindT<Generic6DOFJoint3D::Flag,bool> *this, int param_1) {
   char cVar1;
   cVar1 = ( param_1 == 0 ) + '\x01';
   if (1 < (uint)param_1) {
      cVar1 = '\0';
   }

   return cVar1;
}
/* MethodBindT<Generic6DOFJoint3D::Flag, bool>::get_argument_meta(int) const */undefined8 MethodBindT<Generic6DOFJoint3D::Flag,bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<float, Generic6DOFJoint3D::Param>::_gen_argument_type(int) const */int MethodBindTRC<float,Generic6DOFJoint3D::Param>::_gen_argument_type(MethodBindTRC<float,Generic6DOFJoint3D::Param> *this, int param_1) {
   return 3 - ( uint )(param_1 == 0);
}
/* MethodBindTRC<float, Generic6DOFJoint3D::Param>::get_argument_meta(int) const */uint MethodBindTRC<float,Generic6DOFJoint3D::Param>::get_argument_meta(MethodBindTRC<float,Generic6DOFJoint3D::Param> *this, int param_1) {
   return param_1 >> 0x1f & 9;
}
/* MethodBindT<Generic6DOFJoint3D::Param, float>::_gen_argument_type(int) const */int MethodBindT<Generic6DOFJoint3D::Param,float>::_gen_argument_type(MethodBindT<Generic6DOFJoint3D::Param,float> *this, int param_1) {
   int iVar1;
   iVar1 = 3 - ( uint )(param_1 == 0);
   if (1 < (uint)param_1) {
      iVar1 = 0;
   }

   return iVar1;
}
/* MethodBindT<Generic6DOFJoint3D::Param, float>::get_argument_meta(int) const */char MethodBindT<Generic6DOFJoint3D::Param,float>::get_argument_meta(MethodBindT<Generic6DOFJoint3D::Param,float> *this, int param_1) {
   return ( param_1 == 1 ) * '\t';
}
/* MethodBindT<Generic6DOFJoint3D::Param, float>::~MethodBindT() */void MethodBindT<Generic6DOFJoint3D::Param,float>::~MethodBindT(MethodBindT<Generic6DOFJoint3D::Param,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00114648;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Generic6DOFJoint3D::Param, float>::~MethodBindT() */void MethodBindT<Generic6DOFJoint3D::Param,float>::~MethodBindT(MethodBindT<Generic6DOFJoint3D::Param,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00114648;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<float, Generic6DOFJoint3D::Param>::~MethodBindTRC() */void MethodBindTRC<float,Generic6DOFJoint3D::Param>::~MethodBindTRC(MethodBindTRC<float,Generic6DOFJoint3D::Param> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001146a8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<float, Generic6DOFJoint3D::Param>::~MethodBindTRC() */void MethodBindTRC<float,Generic6DOFJoint3D::Param>::~MethodBindTRC(MethodBindTRC<float,Generic6DOFJoint3D::Param> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001146a8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Generic6DOFJoint3D::Flag, bool>::~MethodBindT() */void MethodBindT<Generic6DOFJoint3D::Flag,bool>::~MethodBindT(MethodBindT<Generic6DOFJoint3D::Flag,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00114708;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Generic6DOFJoint3D::Flag, bool>::~MethodBindT() */void MethodBindT<Generic6DOFJoint3D::Flag,bool>::~MethodBindT(MethodBindT<Generic6DOFJoint3D::Flag,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00114708;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool, Generic6DOFJoint3D::Flag>::~MethodBindTRC() */void MethodBindTRC<bool,Generic6DOFJoint3D::Flag>::~MethodBindTRC(MethodBindTRC<bool,Generic6DOFJoint3D::Flag> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00114768;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool, Generic6DOFJoint3D::Flag>::~MethodBindTRC() */void MethodBindTRC<bool,Generic6DOFJoint3D::Flag>::~MethodBindTRC(MethodBindTRC<bool,Generic6DOFJoint3D::Flag> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00114768;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* Generic6DOFJoint3D::~Generic6DOFJoint3D() */void Generic6DOFJoint3D::~Generic6DOFJoint3D(Generic6DOFJoint3D *this) {
   *(undefined***)this = &PTR__initialize_classv_00114458;
   Joint3D::~Joint3D((Joint3D*)this);
   return;
}
/* Generic6DOFJoint3D::~Generic6DOFJoint3D() */void Generic6DOFJoint3D::~Generic6DOFJoint3D(Generic6DOFJoint3D *this) {
   *(undefined***)this = &PTR__initialize_classv_00114458;
   Joint3D::~Joint3D((Joint3D*)this);
   operator_delete(this, 0x688);
   return;
}
/* Generic6DOFJoint3D::_property_get_revertv(StringName const&, Variant&) const */undefined8 Generic6DOFJoint3D::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Node3D::_property_get_revert((StringName*)param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* Generic6DOFJoint3D::_property_can_revertv(StringName const&) const */undefined8 Generic6DOFJoint3D::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_00118008 != Object::_property_can_revert) {
      uVar1 = Node3D::_property_can_revert((StringName*)param_1);
      return uVar1;
   }

   return 0;
}
/* Generic6DOFJoint3D::_validate_propertyv(PropertyInfo&) const */void Generic6DOFJoint3D::_validate_propertyv(PropertyInfo *param_1) {
   Node::_validate_property(param_1);
   if ((code*)PTR__validate_property_00118010 == Node::_validate_property) {
      return;
   }

   Node3D::_validate_property(param_1);
   return;
}
/* Generic6DOFJoint3D::_notificationv(int, bool) */void Generic6DOFJoint3D::_notificationv(Generic6DOFJoint3D *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_00118018 != Node3D::_notification) {
         Joint3D::_notification(iVar1);
      }

      Node3D::_notification(iVar1);
      Node::_notification(iVar1);
      return;
   }

   Node::_notification(iVar1);
   Node3D::_notification(iVar1);
   if ((code*)PTR__notification_00118018 == Node3D::_notification) {
      return;
   }

   Joint3D::_notification(iVar1);
   return;
}
/* Generic6DOFJoint3D::_get_class_namev() const */undefined8 *Generic6DOFJoint3D::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010e443:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010e443;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Generic6DOFJoint3D");
         goto LAB_0010e4ae;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Generic6DOFJoint3D");
   LAB_0010e4ae:return &_get_class_namev();
}
/* Generic6DOFJoint3D::get_class() const */void Generic6DOFJoint3D::get_class(void) {
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
/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Node::_get_property_listv(List *param_1, bool param_2) {
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
   undefined *local_78;
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
   local_78 = &_LC20;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC20;
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
   if (local_90 == 0) {
      LAB_0010e938:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010e938;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x0010e956;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x0010e956:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "Node", false);
   ClassDB::get_property_list((StringName*)&local_78, pLVar6, true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Node3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Node3D::_get_property_listv(Node3D *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
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
   if (local_90 == 0) {
      LAB_0010ed38:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010ed38;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010ed55;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010ed55:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
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
   plVar1 = *(long**)param_1;
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
/* Joint3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Joint3D::_get_property_listv(Joint3D *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Node3D::_get_property_listv((Node3D*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Joint3D";
   local_70 = 7;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Joint3D";
   local_98 = 0;
   local_70 = 7;
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
      LAB_0010f188:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010f188;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010f1a5;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010f1a5:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
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
   plVar1 = *(long**)param_1;
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

   StringName::StringName((StringName*)&local_78, "Joint3D", false);
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
/* Generic6DOFJoint3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Generic6DOFJoint3D::_get_property_listv(Generic6DOFJoint3D *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Joint3D::_get_property_listv((Joint3D*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Generic6DOFJoint3D";
   local_70 = 0x12;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Generic6DOFJoint3D";
   local_98 = 0;
   local_70 = 0x12;
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
      LAB_0010f5d8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010f5d8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010f5f5;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010f5f5:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
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
   plVar1 = *(long**)param_1;
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

   StringName::StringName((StringName*)&local_78, "Generic6DOFJoint3D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Joint3D::_get_property_listv((Joint3D*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
/* godot::details::enum_qualified_name_to_class_info_name(String const&) */details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1){
   long *plVar1;
   long *plVar2;
   long lVar3;
   code *pcVar4;
   long *plVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   long local_60;
   char local_58[8];
   long *local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   String::split(local_58, SUB81(param_1, 0), 0x10f8ed);
   if (( local_50 != (long*)0x0 ) && ( 2 < local_50[-1] )) {
      local_60 = 0;
      local_48 = &_LC29;
      local_40 = 1;
      String::parse_latin1((StrRange*)&local_60);
      if (local_50 == (long*)0x0) {
         lVar7 = 0;
         lVar6 = -2;
      }
 else {
         lVar7 = local_50[-1];
         lVar6 = lVar7 + -2;
         if (-1 < lVar6) {
            String::operator +((String*)&local_48, (String*)( local_50 + lVar6 ));
            String::operator +((String*)this, (String*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            goto LAB_0010f9dd;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar7, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   local_60 = 0;
   local_48 = &_LC29;
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)this);
   lVar7 = local_60;
   if (local_60 != 0) {
      LOCK();
      plVar1 = (long*)( local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar7 + -0x10 ), false);
      }

   }

   LAB_0010f9dd:plVar1 = local_50;
   if (local_50 != (long*)0x0) {
      LOCK();
      plVar5 = local_50 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_50 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar7 = local_50[-1];
         local_50 = (long*)0x0;
         if (lVar7 != 0) {
            lVar6 = 0;
            plVar5 = plVar1;
            do {
               if (*plVar5 != 0) {
                  LOCK();
                  plVar2 = (long*)( *plVar5 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar3 = *plVar5;
                     *plVar5 = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               lVar6 = lVar6 + 1;
               plVar5 = plVar5 + 1;
            }
 while ( lVar7 != lVar6 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, Generic6DOFJoint3D::Flag>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<bool,Generic6DOFJoint3D::Flag>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   long lVar4;
   undefined8 uVar5;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar6;
   long in_FS_OFFSET;
   undefined8 local_c0;
   undefined8 local_b8;
   undefined8 local_b0;
   details local_a8[8];
   long local_a0;
   long local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   long local_78;
   undefined4 local_70;
   char *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar6 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = 0;
   if (in_EDX == 0) {
      local_80 = 0;
      local_90 = (undefined1[16])0x0;
      local_78 = 0;
      local_68 = "Generic6DOFJoint3D::Flag";
      local_70 = 6;
      local_b0 = 0;
      local_60._8_8_ = local_60._0_8_;
      local_60._0_8_ = 0x18;
      String::parse_latin1((StrRange*)&local_b0);
      godot::details::enum_qualified_name_to_class_info_name(local_a8, (String*)&local_b0);
      StringName::StringName((StringName*)&local_a0, (String*)local_a8, false);
      local_60 = (undefined1[16])0x0;
      local_b8 = 0;
      local_c0 = 0;
      local_68 = (undefined*)0x2;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0x10006;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
      if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
      local_98 = CONCAT44(local_98._4_4_, local_68._0_4_);
      if (local_90._0_8_ != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
         uVar5 = local_60._0_8_;
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_60._8_8_;
         local_60 = auVar2 << 0x40;
         local_90._0_8_ = uVar5;
      }

      if (local_90._8_8_ != local_60._8_8_) {
         StringName::unref();
         uVar5 = local_60._8_8_;
         local_60._8_8_ = 0;
         local_90._8_8_ = uVar5;
      }

      local_80 = CONCAT44(local_80._4_4_, (undefined4)local_50);
      if (local_78 != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         local_78 = local_48;
         local_48 = 0;
      }

      local_70 = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
      *puVar6 = (undefined4)local_98;
      *(undefined8*)( puVar6 + 2 ) = local_90._0_8_;
      *(undefined8*)( puVar6 + 4 ) = local_90._8_8_;
      puVar6[6] = (undefined4)local_80;
      *(long*)( puVar6 + 8 ) = local_78;
      puVar6[10] = local_70;
      goto LAB_0010fe4b;
   }

   local_a0 = 0;
   auVar3._8_8_ = 0;
   auVar3._0_8_ = local_60._0_8_;
   local_60 = auVar3 << 0x40;
   local_68 = "";
   String::parse_latin1((StrRange*)&local_a0);
   *puVar6 = 1;
   puVar6[6] = 0;
   *(undefined8*)( puVar6 + 8 ) = 0;
   *(undefined1(*) [16])( puVar6 + 2 ) = (undefined1[16])0x0;
   if (local_a0 == 0) {
      puVar6[10] = 6;
      LAB_0010fe7f:StringName::operator =((StringName*)( puVar6 + 4 ), (StringName*)&local_98);
      lVar4 = local_a0;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar6 + 8 ), (CowData*)&local_a0);
      puVar6[10] = 6;
      if (puVar6[6] != 0x11) goto LAB_0010fe7f;
      StringName::StringName((StringName*)&local_68, (String*)( puVar6 + 8 ), false);
      if (*(undefined**)( puVar6 + 4 ) == local_68) {
         lVar4 = local_a0;
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
            lVar4 = local_a0;
         }

      }
 else {
         StringName::unref();
         *(char**)( puVar6 + 4 ) = local_68;
         lVar4 = local_a0;
      }

   }

   local_a0 = lVar4;
   if (lVar4 != 0) {
      LOCK();
      plVar1 = (long*)( lVar4 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a0 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   LAB_0010fe4b:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Joint3D::is_class(String const&) const */undefined8 Joint3D::is_class(Joint3D *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long lVar4;
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
                  if (lVar5 == 0) goto LAB_0010ff5f;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar5 == lVar7;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar7 = lVar5;
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
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010ff5f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00110013;
   }

   cVar6 = String::operator ==(param_1, "Joint3D");
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
                     if (lVar5 == 0) goto LAB_0011015b;
                     LOCK();
                     lVar7 = *plVar1;
                     bVar9 = lVar5 == lVar7;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar7 = lVar5;
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
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_0011015b:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00110013;
      }

      cVar6 = String::operator ==(param_1, "Node3D");
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

            cVar6 = String::operator ==(param_1, (String*)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (cVar6 != '\0') goto LAB_00110013;
         }

         cVar6 = String::operator ==(param_1, "Node");
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

               cVar6 = String::operator ==(param_1, (String*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               if (cVar6 != '\0') goto LAB_00110013;
            }

            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar8 = String::operator ==(param_1, "Object");
               return uVar8;
            }

            goto LAB_001102de;
         }

      }

   }

   LAB_00110013:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_001102de:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Generic6DOFJoint3D::is_class(String const&) const */undefined8 Generic6DOFJoint3D::is_class(Generic6DOFJoint3D *this, String *param_1) {
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
            plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               do {
                  lVar4 = *plVar1;
                  if (lVar4 == 0) goto LAB_0011035f;
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
                  local_60 = *(long*)( lVar3 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0011035f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00110413;
   }

   cVar5 = String::operator ==(param_1, "Generic6DOFJoint3D");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = Joint3D::is_class((Joint3D*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00110413:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float, Generic6DOFJoint3D::Param>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<float,Generic6DOFJoint3D::Param>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   long lVar4;
   undefined8 uVar5;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar6;
   long in_FS_OFFSET;
   undefined8 local_c0;
   undefined8 local_b8;
   undefined8 local_b0;
   details local_a8[8];
   long local_a0;
   long local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   long local_78;
   undefined4 local_70;
   char *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar6 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = 0;
   if (in_EDX == 0) {
      local_80 = 0;
      local_90 = (undefined1[16])0x0;
      local_78 = 0;
      local_68 = "Generic6DOFJoint3D::Param";
      local_70 = 6;
      local_b0 = 0;
      local_60._8_8_ = local_60._0_8_;
      local_60._0_8_ = 0x19;
      String::parse_latin1((StrRange*)&local_b0);
      godot::details::enum_qualified_name_to_class_info_name(local_a8, (String*)&local_b0);
      StringName::StringName((StringName*)&local_a0, (String*)local_a8, false);
      local_60 = (undefined1[16])0x0;
      local_b8 = 0;
      local_c0 = 0;
      local_68 = (undefined*)0x2;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0x10006;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
      if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
      local_98 = CONCAT44(local_98._4_4_, local_68._0_4_);
      if (local_90._0_8_ != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
         uVar5 = local_60._0_8_;
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_60._8_8_;
         local_60 = auVar2 << 0x40;
         local_90._0_8_ = uVar5;
      }

      if (local_90._8_8_ != local_60._8_8_) {
         StringName::unref();
         uVar5 = local_60._8_8_;
         local_60._8_8_ = 0;
         local_90._8_8_ = uVar5;
      }

      local_80 = CONCAT44(local_80._4_4_, (undefined4)local_50);
      if (local_78 != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         local_78 = local_48;
         local_48 = 0;
      }

      local_70 = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
      *puVar6 = (undefined4)local_98;
      *(undefined8*)( puVar6 + 2 ) = local_90._0_8_;
      *(undefined8*)( puVar6 + 4 ) = local_90._8_8_;
      puVar6[6] = (undefined4)local_80;
      *(long*)( puVar6 + 8 ) = local_78;
      puVar6[10] = local_70;
      goto LAB_0011075b;
   }

   local_a0 = 0;
   auVar3._8_8_ = 0;
   auVar3._0_8_ = local_60._0_8_;
   local_60 = auVar3 << 0x40;
   local_68 = "";
   String::parse_latin1((StrRange*)&local_a0);
   *puVar6 = 3;
   puVar6[6] = 0;
   *(undefined8*)( puVar6 + 8 ) = 0;
   *(undefined1(*) [16])( puVar6 + 2 ) = (undefined1[16])0x0;
   if (local_a0 == 0) {
      puVar6[10] = 6;
      LAB_0011078f:StringName::operator =((StringName*)( puVar6 + 4 ), (StringName*)&local_98);
      lVar4 = local_a0;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar6 + 8 ), (CowData*)&local_a0);
      puVar6[10] = 6;
      if (puVar6[6] != 0x11) goto LAB_0011078f;
      StringName::StringName((StringName*)&local_68, (String*)( puVar6 + 8 ), false);
      if (*(undefined**)( puVar6 + 4 ) == local_68) {
         lVar4 = local_a0;
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
            lVar4 = local_a0;
         }

      }
 else {
         StringName::unref();
         *(char**)( puVar6 + 4 ) = local_68;
         lVar4 = local_a0;
      }

   }

   local_a0 = lVar4;
   if (lVar4 != 0) {
      LOCK();
      plVar1 = (long*)( lVar4 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a0 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   LAB_0011075b:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Generic6DOFJoint3D::Flag, bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Generic6DOFJoint3D::Flag,bool>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined8 uVar6;
   long lVar7;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar8;
   long in_FS_OFFSET;
   undefined8 local_a0;
   undefined8 local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined1 local_70[16];
   ulong local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   puVar8 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar8 = 0;
   puVar8[6] = 0;
   *(undefined8*)( puVar8 + 8 ) = 0;
   puVar8[10] = 6;
   *(undefined1(*) [16])( puVar8 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_90 = 0;
      local_78 = "Generic6DOFJoint3D::Flag";
      local_70._0_8_ = 0x18;
      String::parse_latin1((StrRange*)&local_90);
      godot::details::enum_qualified_name_to_class_info_name((details*)&local_88, (String*)&local_90);
      StringName::StringName((StringName*)&local_80, (String*)&local_88, false);
      local_70 = (undefined1[16])0x0;
      local_98 = 0;
      local_a0 = 0;
      local_78 = (char*)0x2;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0x10006;
      StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      *puVar8 = local_78._0_4_;
      if (*(long*)( puVar8 + 2 ) != local_70._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar8 + 2 ));
         uVar6 = local_70._0_8_;
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_70._8_8_;
         local_70 = auVar2 << 0x40;
         *(undefined8*)( puVar8 + 2 ) = uVar6;
      }

      if (*(long*)( puVar8 + 4 ) != local_70._8_8_) {
         StringName::unref();
         uVar6 = local_70._8_8_;
         local_70._8_8_ = 0;
         *(undefined8*)( puVar8 + 4 ) = uVar6;
      }

      lVar7 = local_58;
      puVar8[6] = (int)local_60;
      if (*(long*)( puVar8 + 8 ) == local_58) {
         puVar8[10] = local_50;
         if (local_58 != 0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }

         }

      }
 else {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar8 + 8 ));
         *(long*)( puVar8 + 8 ) = local_58;
         puVar8[10] = local_50;
      }

      if (( StringName::configured != '\0' ) && ( local_70._8_8_ != 0 )) {
         StringName::unref();
      }

   }
 else {
      if (in_EDX != 1) goto LAB_0011084a;
      local_88 = 0;
      local_78 = "";
      local_90 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_70._8_8_;
      local_70 = auVar4 << 0x40;
      String::parse_latin1((StrRange*)&local_90);
      local_98 = 0;
      local_78 = (char*)CONCAT44(local_78._4_4_, 1);
      local_60 = local_60 & 0xffffffff00000000;
      local_58 = 0;
      local_70 = (undefined1[16])0x0;
      if (local_90 == 0) {
         LAB_00110af0:local_50 = 6;
         StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_88);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 6;
         if ((int)local_60 != 0x11) goto LAB_00110af0;
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_70._8_8_ == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_70._8_8_ = local_80;
         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
         StringName::unref();
      }

      *puVar8 = local_78._0_4_;
      if (*(long*)( puVar8 + 2 ) != local_70._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar8 + 2 ));
         uVar6 = local_70._0_8_;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = local_70._8_8_;
         local_70 = auVar5 << 0x40;
         *(undefined8*)( puVar8 + 2 ) = uVar6;
      }

      if (*(long*)( puVar8 + 4 ) != local_70._8_8_) {
         StringName::unref();
         uVar6 = local_70._8_8_;
         local_70._8_8_ = 0;
         *(undefined8*)( puVar8 + 4 ) = uVar6;
      }

      lVar7 = local_58;
      puVar8[6] = (int)local_60;
      if (*(long*)( puVar8 + 8 ) == local_58) {
         puVar8[10] = local_50;
         if (local_58 != 0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }

         }

      }
 else {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar8 + 8 ));
         *(long*)( puVar8 + 8 ) = local_58;
         puVar8[10] = local_50;
      }

      if (( StringName::configured != '\0' ) && ( local_70._8_8_ != 0 )) {
         StringName::unref();
      }

   }

   uVar6 = local_70._0_8_;
   if (local_70._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_70._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_70._8_8_;
         local_70 = auVar3 << 0x40;
         Memory::free_static((void*)( uVar6 + -0x10 ), false);
      }

   }

   LAB_0011084a:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar8;
}
/* MethodBindT<Generic6DOFJoint3D::Param, float>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Generic6DOFJoint3D::Param,float>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined8 uVar6;
   long lVar7;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar8;
   long in_FS_OFFSET;
   undefined8 local_a0;
   undefined8 local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined1 local_70[16];
   ulong local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   puVar8 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar8 = 0;
   puVar8[6] = 0;
   *(undefined8*)( puVar8 + 8 ) = 0;
   puVar8[10] = 6;
   *(undefined1(*) [16])( puVar8 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_90 = 0;
      local_78 = "Generic6DOFJoint3D::Param";
      local_70._0_8_ = 0x19;
      String::parse_latin1((StrRange*)&local_90);
      godot::details::enum_qualified_name_to_class_info_name((details*)&local_88, (String*)&local_90);
      StringName::StringName((StringName*)&local_80, (String*)&local_88, false);
      local_70 = (undefined1[16])0x0;
      local_98 = 0;
      local_a0 = 0;
      local_78 = (char*)0x2;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0x10006;
      StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      *puVar8 = local_78._0_4_;
      if (*(long*)( puVar8 + 2 ) != local_70._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar8 + 2 ));
         uVar6 = local_70._0_8_;
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_70._8_8_;
         local_70 = auVar2 << 0x40;
         *(undefined8*)( puVar8 + 2 ) = uVar6;
      }

      if (*(long*)( puVar8 + 4 ) != local_70._8_8_) {
         StringName::unref();
         uVar6 = local_70._8_8_;
         local_70._8_8_ = 0;
         *(undefined8*)( puVar8 + 4 ) = uVar6;
      }

      lVar7 = local_58;
      puVar8[6] = (int)local_60;
      if (*(long*)( puVar8 + 8 ) == local_58) {
         puVar8[10] = local_50;
         if (local_58 != 0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }

         }

      }
 else {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar8 + 8 ));
         *(long*)( puVar8 + 8 ) = local_58;
         puVar8[10] = local_50;
      }

      if (( StringName::configured != '\0' ) && ( local_70._8_8_ != 0 )) {
         StringName::unref();
      }

   }
 else {
      if (in_EDX != 1) goto LAB_00110cda;
      local_88 = 0;
      local_78 = "";
      local_90 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_70._8_8_;
      local_70 = auVar4 << 0x40;
      String::parse_latin1((StrRange*)&local_90);
      local_98 = 0;
      local_78 = (char*)CONCAT44(local_78._4_4_, 3);
      local_60 = local_60 & 0xffffffff00000000;
      local_58 = 0;
      local_70 = (undefined1[16])0x0;
      if (local_90 == 0) {
         LAB_00110f80:local_50 = 6;
         StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_88);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 6;
         if ((int)local_60 != 0x11) goto LAB_00110f80;
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_70._8_8_ == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_70._8_8_ = local_80;
         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
         StringName::unref();
      }

      *puVar8 = local_78._0_4_;
      if (*(long*)( puVar8 + 2 ) != local_70._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar8 + 2 ));
         uVar6 = local_70._0_8_;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = local_70._8_8_;
         local_70 = auVar5 << 0x40;
         *(undefined8*)( puVar8 + 2 ) = uVar6;
      }

      if (*(long*)( puVar8 + 4 ) != local_70._8_8_) {
         StringName::unref();
         uVar6 = local_70._8_8_;
         local_70._8_8_ = 0;
         *(undefined8*)( puVar8 + 4 ) = uVar6;
      }

      lVar7 = local_58;
      puVar8[6] = (int)local_60;
      if (*(long*)( puVar8 + 8 ) == local_58) {
         puVar8[10] = local_50;
         if (local_58 != 0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }

         }

      }
 else {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar8 + 8 ));
         *(long*)( puVar8 + 8 ) = local_58;
         puVar8[10] = local_50;
      }

      if (( StringName::configured != '\0' ) && ( local_70._8_8_ != 0 )) {
         StringName::unref();
      }

   }

   uVar6 = local_70._0_8_;
   if (local_70._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_70._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_70._8_8_;
         local_70 = auVar3 << 0x40;
         Memory::free_static((void*)( uVar6 + -0x10 ), false);
      }

   }

   LAB_00110cda:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar8;
}
/* MethodBind* create_method_bind<Generic6DOFJoint3D, Generic6DOFJoint3D::Param, float>(void
   (Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Param, float)) */MethodBind *create_method_bind<Generic6DOFJoint3D,Generic6DOFJoint3D::Param,float>(_func_void_Param_float *param_1) {
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
   *(_func_void_Param_float**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00114648;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "Generic6DOFJoint3D";
   local_30 = 0x12;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
/* MethodBind* create_method_bind<Generic6DOFJoint3D, float, Generic6DOFJoint3D::Param>(float
   (Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Param) const) */MethodBind *create_method_bind<Generic6DOFJoint3D,float,Generic6DOFJoint3D::Param>(_func_float_Param *param_1) {
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
   *(_func_float_Param**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001146a8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Generic6DOFJoint3D";
   local_30 = 0x12;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
/* MethodBind* create_method_bind<Generic6DOFJoint3D, Generic6DOFJoint3D::Flag, bool>(void
   (Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Flag, bool)) */MethodBind *create_method_bind<Generic6DOFJoint3D,Generic6DOFJoint3D::Flag,bool>(_func_void_Flag_bool *param_1) {
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
   *(_func_void_Flag_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00114708;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "Generic6DOFJoint3D";
   local_30 = 0x12;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
/* MethodBind* create_method_bind<Generic6DOFJoint3D, bool, Generic6DOFJoint3D::Flag>(bool
   (Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Flag) const) */MethodBind *create_method_bind<Generic6DOFJoint3D,bool,Generic6DOFJoint3D::Flag>(_func_bool_Flag *param_1) {
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
   *(_func_bool_Flag**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00114768;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Generic6DOFJoint3D";
   local_30 = 0x12;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
/* Generic6DOFJoint3D::_bind_methods() [clone .cold] */void Generic6DOFJoint3D::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* Generic6DOFJoint3D::_initialize_classv() */void Generic6DOFJoint3D::_initialize_classv(void)

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
  if (initialize_class()::initialized == '\0') {
    if (Joint3D::initialize_class()::initialized == '\0') {
      if (Node3D::initialize_class()::initialized == '\0') {
        if (Node::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_68 = 0;
          local_50 = 6;
          local_58 = "Object";
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "Node";
          local_70 = 0;
          local_50 = 4;
          String::parse_latin1((StrRange *)&local_70);
          StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
          if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if ((code *)PTR__bind_methods_00118028 != Node::_bind_methods) {
            Node::_bind_methods();
          }
          Node::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Node";
        local_50 = 4;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Node3D";
        local_70 = 0;
        local_50 = 6;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        Node3D::_bind_methods();
        Node3D::initialize_class()::initialized = '\x01';
      }
      local_58 = "Node3D";
      local_68 = 0;
      local_50 = 6;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Joint3D";
      local_70 = 0;
      local_50 = 7;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_00118020 != Node3D::_bind_methods) {
        Joint3D::_bind_methods();
      }
      Joint3D::initialize_class()::initialized = '\x01';
    }
    local_58 = "Joint3D";
    local_68 = 0;
    local_50 = 7;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "Generic6DOFJoint3D";
    local_70 = 0;
    local_50 = 0x12;
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00111d78) */
/* WARNING: Removing unreachable block (ram,0x00111f0d) */
/* WARNING: Removing unreachable block (ram,0x00111f19) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  Variant *this;
  int iVar1;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar1 = (int)local_c8;
  Array::resize(iVar1);
  this = (Variant *)Array::operator[](iVar1);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<bool, Generic6DOFJoint3D::Flag>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<bool,Generic6DOFJoint3D::Flag>::validated_call
          (MethodBindTRC<bool,Generic6DOFJoint3D::Flag> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  Variant VVar3;
  code *pcVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00112098;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar3 = (Variant)(*pcVar4)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  param_3[8] = VVar3;
LAB_00112098:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, Generic6DOFJoint3D::Flag>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool,Generic6DOFJoint3D::Flag>::ptrcall
          (MethodBindTRC<bool,Generic6DOFJoint3D::Flag> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  char *pcVar2;
  undefined1 uVar3;
  code *pcVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001122c7;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined1 *)param_3 = uVar3;
LAB_001122c7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Generic6DOFJoint3D::Flag, bool>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<Generic6DOFJoint3D::Flag,bool>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
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
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar3 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_38 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar1 = (long *)(local_40 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001126bd;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00112502. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(undefined1 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_001126bd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Generic6DOFJoint3D::Flag, bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Generic6DOFJoint3D::Flag,bool>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
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
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001128f5;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x00112736. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               **(char **)((long)param_3 + 8) != '\0');
    return;
  }
LAB_001128f5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, Generic6DOFJoint3D::Param>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<float,Generic6DOFJoint3D::Param>::validated_call
          (MethodBindTRC<float,Generic6DOFJoint3D::Param> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  float fVar5;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011294e;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar5 = (float)(*pcVar3)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(double *)(param_3 + 8) = (double)fVar5;
LAB_0011294e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, Generic6DOFJoint3D::Param>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<float,Generic6DOFJoint3D::Param>::ptrcall
          (MethodBindTRC<float,Generic6DOFJoint3D::Param> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  float fVar5;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00112b6c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  fVar5 = (float)(*pcVar3)(param_1 + *(long *)(this + 0x60),**param_2);
  *(double *)param_3 = (double)fVar5;
LAB_00112b6c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Generic6DOFJoint3D::Param, float>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<Generic6DOFJoint3D::Param,float>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar3 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_38 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar1 = (long *)(local_40 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00112f65;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar5._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar5._0_4_ = (float)*(double *)(*(long *)(param_3 + 8) + 8);
                    /* WARNING: Could not recover jumptable at 0x00112da5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar5._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00112f65:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Generic6DOFJoint3D::Param, float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Generic6DOFJoint3D::Param,float>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011318d;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Load size is inaccurate */
    auVar4._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar4._0_4_ = (float)**(double **)((long)param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x00112fd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar4._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011318d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, Generic6DOFJoint3D::Flag>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<bool,Generic6DOFJoint3D::Flag>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  bool bVar7;
  undefined4 uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar10 = (long *)plVar12[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar10 = (long *)(plVar12[1] + 0x20);
    }
    if (local_58 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC183,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0);
      pcVar5 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar12 = (long *)(local_58 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar12 = (long *)(local_60 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00113360;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar13 = param_2[5];
    if (pVVar13 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001133a0;
LAB_00113390:
      pVVar13 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar13 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001133a0:
        uVar8 = 4;
        goto LAB_00113355;
      }
      if (in_R8D == 1) goto LAB_00113390;
      lVar11 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar11) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar13 = pVVar13 + lVar11 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar14 & 1) != 0) {
      pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar13,2);
    uVar4 = _LC184;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    uVar9 = Variant::operator_cast_to_long(pVVar13);
    bVar7 = (bool)(*(code *)pVVar14)((Variant *)((long)plVar12 + (long)pVVar1),uVar9 & 0xffffffff);
    Variant::Variant((Variant *)local_48,bVar7);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar8 = 3;
LAB_00113355:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_00113360:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, Generic6DOFJoint3D::Param>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<float,Generic6DOFJoint3D::Param>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  float fVar14;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_58 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC183,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0);
      pcVar5 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar11 = (long *)(local_58 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar11 = (long *)(local_60 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00113718;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00113760;
LAB_00113750:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00113760:
        uVar7 = 4;
        goto LAB_0011370d;
      }
      if (in_R8D == 1) goto LAB_00113750;
      lVar10 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar10) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar12 = pVVar12 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar13 & 1) != 0) {
      pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,2);
    uVar4 = _LC184;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    uVar8 = Variant::operator_cast_to_long(pVVar12);
    fVar14 = (float)(*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),uVar8 & 0xffffffff)
    ;
    Variant::Variant((Variant *)local_48,fVar14);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_0011370d:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00113718:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* void call_with_variant_args_dv<__UnexistingClass, Generic6DOFJoint3D::Flag,
   bool>(__UnexistingClass*, void (__UnexistingClass::*)(Generic6DOFJoint3D::Flag, bool), Variant
   const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Generic6DOFJoint3D::Flag,bool>
               (__UnexistingClass *param_1,_func_void_Flag_bool *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  Variant *this;
  uint uVar10;
  int iVar11;
  Variant *this_00;
  long in_stack_00000008;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  uVar10 = (uint)param_5;
  if (2 < uVar10) {
    uVar6 = 3;
    goto LAB_00113acd;
  }
  lVar7 = *(long *)(in_stack_00000008 + 8);
  iVar5 = 2 - uVar10;
  if (lVar7 == 0) {
    if (iVar5 == 0) {
      this = (Variant *)*plVar8;
LAB_00113afd:
      this_00 = (Variant *)plVar8[1];
      goto LAB_00113a35;
    }
  }
  else {
    lVar1 = *(long *)(lVar7 + -8);
    iVar11 = (int)lVar1;
    if (iVar5 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar1 <= lVar9) goto LAB_00113b18;
        this = (Variant *)(lVar7 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_00113afd;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar5));
      if (lVar1 <= lVar9) {
LAB_00113b18:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar1,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      this_00 = (Variant *)(lVar7 + lVar9 * 0x18);
LAB_00113a35:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_Flag_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar4 = Variant::can_convert_strict(*(undefined4 *)this_00,1);
      uVar3 = _LC186;
      if (cVar4 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar3;
      }
      Variant::operator_cast_to_bool(this_00);
      cVar4 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar3 = _LC184;
      if (cVar4 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar3;
      }
      lVar7 = Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00113abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((char)(param_1 + (long)param_3),SUB81(lVar7,0));
      return;
    }
  }
  uVar6 = 4;
LAB_00113acd:
  *(undefined4 *)param_6 = uVar6;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<Generic6DOFJoint3D::Flag, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Generic6DOFJoint3D::Flag,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC183,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00113c56;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Generic6DOFJoint3D::Flag,bool>
            (p_Var4,(_func_void_Flag_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8
             ,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00113c56:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Generic6DOFJoint3D::Param,
   float>(__UnexistingClass*, void (__UnexistingClass::*)(Generic6DOFJoint3D::Param, float), Variant
   const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Generic6DOFJoint3D::Param,float>
               (__UnexistingClass *param_1,_func_void_Param_float *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  Variant *this;
  uint uVar10;
  int iVar11;
  Variant *this_00;
  float fVar12;
  long in_stack_00000008;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  uVar10 = (uint)param_5;
  if (2 < uVar10) {
    uVar7 = 3;
    goto LAB_00113f95;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar10;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar8;
LAB_00113fcd:
      this_00 = (Variant *)plVar8[1];
      goto LAB_00113ef5;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_00113fe8;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_00113fcd;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00113fe8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
LAB_00113ef5:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_Param_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,3);
      uVar4 = _LC188;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      fVar12 = Variant::operator_cast_to_float(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC184;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00113f7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((char)(param_1 + (long)param_3),fVar12);
      return;
    }
  }
  uVar7 = 4;
LAB_00113f95:
  *(undefined4 *)param_6 = uVar7;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<Generic6DOFJoint3D::Param, float>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Generic6DOFJoint3D::Param,float>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC183,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00114086;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Generic6DOFJoint3D::Param,float>
            (p_Var4,(_func_void_Param_float *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00114086:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall PropertyInfo::PropertyInfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Generic6DOFJoint3D::~Generic6DOFJoint3D() */

void __thiscall Generic6DOFJoint3D::~Generic6DOFJoint3D(Generic6DOFJoint3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool, Generic6DOFJoint3D::Flag>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,Generic6DOFJoint3D::Flag>::~MethodBindTRC
          (MethodBindTRC<bool,Generic6DOFJoint3D::Flag> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Generic6DOFJoint3D::Flag, bool>::~MethodBindT() */

void __thiscall
MethodBindT<Generic6DOFJoint3D::Flag,bool>::~MethodBindT
          (MethodBindT<Generic6DOFJoint3D::Flag,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<float, Generic6DOFJoint3D::Param>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<float,Generic6DOFJoint3D::Param>::~MethodBindTRC
          (MethodBindTRC<float,Generic6DOFJoint3D::Param> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Generic6DOFJoint3D::Param, float>::~MethodBindT() */

void __thiscall
MethodBindT<Generic6DOFJoint3D::Param,float>::~MethodBindT
          (MethodBindT<Generic6DOFJoint3D::Param,float> *this)

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
