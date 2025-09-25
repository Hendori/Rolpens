/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JoltGeneric6DOFJoint3D::_build_6dof(JPH::Body*, JPH::Body*, Transform3D const&, Transform3D
   const&) const */void JoltGeneric6DOFJoint3D::_build_6dof(JoltGeneric6DOFJoint3D *this, Body *param_1, Body *param_2, Transform3D *param_3, Transform3D *param_4) {
   undefined1 *puVar1;
   undefined1 *puVar2;
   long lVar3;
   long in_FS_OFFSET;
   float fVar4;
   float fVar5;
   double dVar6;
   double dVar7;
   undefined8 *local_1c8;
   undefined4 local_1c0;
   undefined1 local_1bc;
   undefined8 local_1b8;
   undefined8 local_1b0;
   undefined8 local_1a8;
   undefined4 local_1a0;
   undefined1 local_198[16];
   undefined4 local_188;
   undefined4 uStack_184;
   undefined4 uStack_180;
   undefined4 uStack_17c;
   undefined4 local_178;
   undefined4 uStack_174;
   undefined4 uStack_170;
   undefined4 uStack_16c;
   undefined1 local_168[16];
   undefined4 local_158;
   undefined4 uStack_154;
   undefined4 uStack_150;
   undefined4 uStack_14c;
   undefined4 local_148;
   undefined4 uStack_144;
   undefined4 uStack_140;
   undefined4 uStack_13c;
   undefined1 local_138[16];
   undefined8 local_128;
   undefined1 local_120;
   float local_11c[4];
   undefined8 local_10c;
   undefined8 uStack_104;
   float local_fc;
   float fStack_f8;
   float fStack_f4;
   float fStack_f0;
   undefined1 local_ec[16];
   undefined1 local_dc[16];
   undefined4 local_cc;
   undefined1 local_c8[168];
   undefined1 local_20[16];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_138 = (undefined1[16])0x0;
   local_1c0 = 0;
   local_1bc = 1;
   for (int i = 0; i < 4; i++) {
      local_11c[i] = _LC3;
   }

   local_10c = CONCAT44(_UNK_00104954, _LC3);
   uStack_104 = CONCAT44(_UNK_0010495c, _LC0);
   local_1b8 = 0;
   local_1a8 = 0;
   local_fc = _LC0;
   fStack_f8 = _LC0;
   fStack_f4 = _LC0;
   fStack_f0 = _LC0;
   local_128 = 0;
   local_cc = 0;
   local_1b0 = 0x3f80000000000000;
   local_ec = (undefined1[16])0x0;
   local_dc = (undefined1[16])0x0;
   local_1c8 = &JPH::Body::sFixedToWorld;
   puVar1 = local_c8;
   do {
      *puVar1 = 0;
      puVar2 = puVar1 + 0x1c;
      *(undefined8*)( puVar1 + 4 ) = __LC5;
      *(undefined8*)( puVar1 + 0xc ) = _LC6;
      *(undefined8*)( puVar1 + 0x14 ) = _LC6;
      puVar1 = puVar2;
   }
 while ( local_20 != puVar2 );
   lVar3 = 0;
   LAB_00100120:do {
      dVar6 = *(double*)( this + lVar3 * 8 + 200 );
      fVar5 = _LC0;
      fVar4 = _LC3;
      if ((int)lVar3 - 3U < 3) {
         dVar7 = (double)( (ulong)dVar6 ^ _LC7 );
         dVar6 = (double)( ( ulong ) * (double*)( this + lVar3 * 8 + 0x98 ) ^ _LC7 );
         if (this[lVar3 + 0x2a8] != (JoltGeneric6DOFJoint3D)0x0) goto LAB_00100190;
      }
 else {
         dVar7 = *(double*)( this + lVar3 * 8 + 0x98 );
         if (this[lVar3 + 0x2a8] == (JoltGeneric6DOFJoint3D)0x0) {
            *(float*)( (long)&uStack_104 + lVar3 * 4 ) = _LC0;
            local_11c[lVar3] = _LC3;
            lVar3 = lVar3 + 1;
            goto LAB_00100120;
         }

         LAB_00100190:if (dVar7 <= dVar6) {
            fVar5 = (float)dVar6;
            fVar4 = (float)dVar7;
         }

      }

      *(float*)( (long)&uStack_104 + lVar3 * 4 ) = fVar5;
      local_11c[lVar3] = fVar4;
      lVar3 = lVar3 + 1;
      if (lVar3 == 6) {
         local_198._12_4_ = SUB164(*(undefined1(*) [16])( param_3 + 0x20 ), 0xc);
         uStack_174 = *(undefined4*)( param_3 + 0x10 );
         uStack_180 = *(undefined4*)( param_3 + 0x18 );
         uStack_170 = *(undefined4*)( param_3 + 0x1c );
         local_1a0 = 0;
         local_120 = 1;
         local_198._0_12_ = SUB1612(*(undefined1(*) [16])( param_3 + 0x20 ), 4);
         local_188 = *(undefined4*)param_3;
         local_178 = *(undefined4*)( param_3 + 4 );
         uStack_184 = *(undefined4*)( param_3 + 0xc );
         local_168._12_4_ = SUB164(*(undefined1(*) [16])( param_4 + 0x20 ), 0xc);
         uStack_144 = *(undefined4*)( param_4 + 0x10 );
         uStack_150 = *(undefined4*)( param_4 + 0x18 );
         uStack_140 = *(undefined4*)( param_4 + 0x1c );
         local_168._0_12_ = SUB1612(*(undefined1(*) [16])( param_4 + 0x20 ), 4);
         local_158 = *(undefined4*)param_4;
         local_148 = *(undefined4*)( param_4 + 4 );
         uStack_154 = *(undefined4*)( param_4 + 0xc );
         uStack_17c = uStack_180;
         uStack_16c = uStack_170;
         uStack_14c = uStack_150;
         uStack_13c = uStack_140;
         if (param_1 == (Body*)0x0) {
            JPH::SixDOFConstraintSettings::Create((Body*)&local_1c8, (Body*)&JPH::Body::sFixedToWorld);
         }
 else if (param_2 == (Body*)0x0) {
            JPH::SixDOFConstraintSettings::Create((Body*)&local_1c8, param_1);
         }
 else {
            JPH::SixDOFConstraintSettings::Create((Body*)&local_1c8, param_1);
         }

         if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return;
      }

   }
 while ( true );
}
/* JoltGeneric6DOFJoint3D::_update_limit_spring_parameters(int) */void JoltGeneric6DOFJoint3D::_update_limit_spring_parameters(JoltGeneric6DOFJoint3D *this, int param_1) {
   long lVar1;
   long lVar2;
   float fVar3;
   float fVar4;
   undefined3 uStack_17;
   lVar1 = *(long*)( this + 0x18 );
   if (lVar1 != 0) {
      lVar2 = (long)param_1;
      fVar3 = 0.0;
      fVar4 = 0.0;
      if (this[lVar2 + 0x2ae] != (JoltGeneric6DOFJoint3D)0x0) {
         fVar3 = (float)*(double*)( this + lVar2 * 8 + 0xf8 );
         fVar4 = (float)*(double*)( this + lVar2 * 8 + 0x128 );
      }

      uStack_17 = ( undefined3 )(( ulong ) * (undefined8*)( lVar1 + lVar2 * 0xc + 0xb8 ) >> 8);
      lVar1 = lVar1 + 0xb0 + lVar2 * 0xc;
      *(ulong*)( lVar1 + 8 ) = (ulong)CONCAT43(fVar3, uStack_17) << 8;
      *(float*)( lVar1 + 0x10 ) = fVar4;
      JPH::SixDOFConstraint::CacheHasSpringLimits();
      return;
   }

   return;
}
/* JoltGeneric6DOFJoint3D::_update_motor_state(int) */void JoltGeneric6DOFJoint3D::_update_motor_state(JoltGeneric6DOFJoint3D *this, int param_1) {
   long lVar1;
   lVar1 = *(long*)( this + 0x18 );
   if (lVar1 == 0) {
      return;
   }

   if (this[(long)param_1 + 0x2b4] == (JoltGeneric6DOFJoint3D)0x0) {
      if (this[(long)param_1 + 0x2ba] != (JoltGeneric6DOFJoint3D)0x0) {
         JPH::SixDOFConstraint::SetMotorState(lVar1, param_1, 2);
         return;
      }

      JPH::SixDOFConstraint::SetMotorState(lVar1, param_1, 0);
      return;
   }

   JPH::SixDOFConstraint::SetMotorState(lVar1, param_1, 1);
   return;
}
/* JoltGeneric6DOFJoint3D::_update_motor_velocity(int) */void JoltGeneric6DOFJoint3D::_update_motor_velocity(JoltGeneric6DOFJoint3D *this, int param_1) {
   double dVar1;
   long lVar2;
   double dVar3;
   uint uVar4;
   uint uVar5;
   uint uVar6;
   lVar2 = *(long*)( this + 0x18 );
   if (lVar2 != 0) {
      if ((uint)param_1 < 3) {
         dVar1 = *(double*)( this + 0x168 );
         dVar3 = *(double*)( this + 0x160 );
         *(float*)( lVar2 + 0x1c0 ) = (float)*(double*)( this + 0x158 );
         *(float*)( lVar2 + 0x1c4 ) = (float)dVar3;
         *(float*)( lVar2 + 0x1c8 ) = (float)dVar1;
         *(float*)( lVar2 + 0x1cc ) = (float)dVar1;
         return;
      }

      uVar4 = (uint)(float)*(double*)( this + 0x178 ) ^ _LC7._4_4_;
      uVar5 = (uint)(float)*(double*)( this + 0x180 ) ^ _LC7._4_4_;
      uVar6 = (uint)(float)*(double*)( this + 0x180 ) ^ _LC7._4_4_;
      *(uint*)( lVar2 + 0x1d0 ) = (uint)(float)*(double*)( this + 0x170 ) ^ _LC7._4_4_;
      *(uint*)( lVar2 + 0x1d4 ) = uVar4;
      *(uint*)( lVar2 + 0x1d8 ) = uVar5;
      *(uint*)( lVar2 + 0x1dc ) = uVar6;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JoltGeneric6DOFJoint3D::_update_motor_limit(int) */void JoltGeneric6DOFJoint3D::_update_motor_limit(JoltGeneric6DOFJoint3D *this, int param_1) {
   long lVar1;
   long lVar2;
   uint uVar3;
   float fVar4;
   lVar1 = *(long*)( this + 0x18 );
   if (lVar1 != 0) {
      lVar2 = (long)param_1;
      if (this[lVar2 + 0x2b4] == (JoltGeneric6DOFJoint3D)0x0) {
         uVar3 = _LC3;
         fVar4 = _LC0;
         if (this[lVar2 + 0x2ba] != (JoltGeneric6DOFJoint3D)0x0) {
            uVar3 = (uint)(float)*(double*)( this + lVar2 * 8 + 0x278 ) ^ __LC12;
            fVar4 = (float)*(double*)( this + lVar2 * 8 + 0x278 );
         }

      }
 else {
         uVar3 = (uint)(float)*(double*)( this + lVar2 * 8 + 0x188 ) ^ __LC12;
         fVar4 = (float)*(double*)( this + lVar2 * 8 + 0x188 );
      }

      if ((uint)param_1 < 3) {
         *(ulong*)( lVar1 + 0xe8 + lVar2 * 0x1c ) = CONCAT44(fVar4, uVar3);
         return;
      }

      *(ulong*)( lVar1 + 0xf0 + lVar2 * 0x1c ) = CONCAT44(fVar4, uVar3);
   }

   return;
}
/* JoltGeneric6DOFJoint3D::_update_spring_parameters(int) */void JoltGeneric6DOFJoint3D::_update_spring_parameters(JoltGeneric6DOFJoint3D *this, int param_1) {
   double dVar1;
   JoltGeneric6DOFJoint3D JVar2;
   long lVar3;
   long lVar4;
   lVar3 = *(long*)( this + 0x18 );
   if (lVar3 != 0) {
      lVar4 = (long)param_1;
      JVar2 = this[lVar4 + 0x2c0];
      if (JVar2 != (JoltGeneric6DOFJoint3D)0x0) {
         *(float*)( lVar3 + 0xe0 + lVar4 * 0x1c ) = (float)*(double*)( this + lVar4 * 8 + 0x1e8 );
      }
 else {
         *(float*)( lVar3 + 0xe0 + lVar4 * 0x1c ) = (float)*(double*)( this + lVar4 * 8 + 0x1b8 );
      }

      dVar1 = *(double*)( this + lVar4 * 8 + 0x218 );
      lVar3 = lVar3 + lVar4 * 0x1c;
      *(bool*)( lVar3 + 0xdc ) = JVar2 == (JoltGeneric6DOFJoint3D)0x0;
      *(float*)( lVar3 + 0xe4 ) = (float)dVar1;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JoltGeneric6DOFJoint3D::_update_spring_equilibrium(int) */void JoltGeneric6DOFJoint3D::_update_spring_equilibrium(JoltGeneric6DOFJoint3D *this, int param_1) {
   double dVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   uint local_50;
   undefined1 local_48[16];
   undefined1 local_38[16];
   undefined4 local_28;
   long local_20;
   lVar2 = *(long*)( this + 0x18 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar2 != 0) {
      if ((uint)param_1 < 3) {
         dVar1 = *(double*)( this + 600 );
         *(ulong*)( lVar2 + 0x1e0 ) = CONCAT44((float)*(double*)( this + 0x250 ), (float)*(double*)( this + 0x248 ));
         *(ulong*)( lVar2 + 0x1e8 ) = CONCAT44((float)dVar1, (float)dVar1);
      }
 else {
         local_50 = (uint)(float)*(double*)( this + 0x270 ) ^ __LC12;
         local_28 = 0x3f800000;
         local_58 = CONCAT44((uint)(float)*(double*)( this + 0x268 ) ^ ( uint )((ulong)_LC13 >> 0x20), (uint)(float)*(double*)( this + 0x260 ) ^ (uint)_LC13);
         local_48 = ZEXT416(_LC15);
         local_38 = local_48;
         Basis::set_euler(local_48, &local_58, 5);
         Basis::get_quaternion();
         Quaternion::normalized();
         JPH::SixDOFConstraint::SetTargetOrientationCS(local_68, local_60, lVar2);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JoltGeneric6DOFJoint3D::rebuild() */void JoltGeneric6DOFJoint3D::rebuild(JoltGeneric6DOFJoint3D *this) {
   long *plVar1;
   double dVar2;
   long *plVar3;
   long lVar4;
   double dVar5;
   int iVar6;
   JoltJoint3D *pJVar7;
   Body *pBVar8;
   Body *pBVar9;
   long *plVar10;
   int iVar11;
   JoltGeneric6DOFJoint3D *pJVar12;
   long in_FS_OFFSET;
   float fVar13;
   float fVar14;
   uint uVar15;
   uint uVar16;
   uint uVar17;
   undefined3 uStack_127;
   undefined8 local_110;
   undefined4 local_108;
   undefined8 local_104;
   undefined4 local_fc;
   Transform3D local_f8[16];
   undefined1 local_e8[16];
   uint local_d8;
   undefined8 local_d4;
   undefined4 local_cc;
   code *local_c8;
   JoltSpace3D *local_c0;
   undefined1 local_88[16];
   undefined1 local_78[16];
   uint local_68;
   undefined8 local_64;
   undefined4 local_5c;
   Body *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   JoltJoint3D::destroy();
   pJVar7 = (JoltJoint3D*)JoltJoint3D::get_space();
   if (pJVar7 != (JoltJoint3D*)0x0) {
      JoltSpace3D::write_bodies((BodyID*)&local_c8, (int)pJVar7);
      iVar6 = JoltBodyAccessor3D::get_count();
      iVar11 = (int)(BodyID*)&local_c8;
      if (0 < iVar6) {
         JoltBodyAccessor3D::get_at(iVar11);
      }

      JoltBodyWriter3D::JoltBodyWriter3D((JoltBodyWriter3D*)local_88, local_c0);
      JoltBodyAccessor3D::acquire((BodyID*)local_88);
      pBVar8 = (Body*)JoltBodyWriter3D::try_get();
      local_48 = pBVar8;
      JoltBodyAccessor3D::release();
      local_88._0_8_ = JoltBodyAccessor3D::acquire;
      JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_88);
      iVar6 = JoltBodyAccessor3D::get_count();
      if (1 < iVar6) {
         JoltBodyAccessor3D::get_at(iVar11);
      }

      JoltBodyWriter3D::JoltBodyWriter3D((JoltBodyWriter3D*)local_88, local_c0);
      JoltBodyAccessor3D::acquire((BodyID*)local_88);
      pBVar9 = (Body*)JoltBodyWriter3D::try_get();
      local_48 = pBVar9;
      JoltBodyAccessor3D::release();
      local_88._0_8_ = JoltBodyAccessor3D::acquire;
      JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_88);
      if (pBVar8 == (Body*)0x0 && pBVar9 == (Body*)0x0) {
         _err_print_error("rebuild", "modules/jolt_physics/joints/jolt_generic_6dof_joint_3d.cpp", 0x29d, "Condition \"jolt_body_a == nullptr && jolt_body_b == nullptr\" is true.", 0, 0);
      }
 else {
         local_f8 = (Transform3D[16])ZEXT416(_LC15);
         local_e8 = ZEXT416(_LC15);
         local_d8 = _LC15;
         local_88 = ZEXT416(_LC15);
         local_78 = ZEXT416(_LC15);
         local_68 = _LC15;
         local_d4 = 0;
         local_cc = 0;
         local_64 = 0;
         local_5c = 0;
         local_104 = 0;
         local_fc = 0;
         local_110 = 0;
         local_108 = 0;
         JoltJoint3D::_shift_reference_frames((Vector3*)this, (Vector3*)&local_110, (Transform3D*)&local_104, local_f8);
         plVar10 = (long*)_build_6dof(this, pBVar8, pBVar9, local_f8, (Transform3D*)local_88);
         plVar3 = *(long**)( this + 0x18 );
         if (plVar10 != plVar3) {
            if (plVar3 != (long*)0x0) {
               LOCK();
               plVar1 = plVar3 + 1;
               *(int*)plVar1 = (int)*plVar1 + -1;
               UNLOCK();
               if ((int)*plVar1 == 0) {
                  ( **(code**)( *plVar3 + 8 ) )();
               }

            }

            *(long**)( this + 0x18 ) = plVar10;
            if (plVar10 != (long*)0x0) {
               LOCK();
               *(int*)( plVar10 + 1 ) = (int)plVar10[1] + 1;
               UNLOCK();
            }

         }

         JoltSpace3D::add_joint(pJVar7);
         JoltJoint3D::_update_enabled();
         JoltJoint3D::_update_iterations();
         lVar4 = *(long*)( this + 0x18 );
         if (lVar4 != 0) {
            fVar13 = 0.0;
            fVar14 = 0.0;
            if (this[0x2ae] != (JoltGeneric6DOFJoint3D)0x0) {
               fVar13 = (float)*(double*)( this + 0xf8 );
               fVar14 = (float)*(double*)( this + 0x128 );
            }

            uStack_127 = ( undefined3 )(( ulong ) * (undefined8*)( lVar4 + 0xb8 ) >> 8);
            *(ulong*)( lVar4 + 0xb8 ) = (ulong)CONCAT43(fVar13, uStack_127) << 8;
            *(float*)( lVar4 + 0xc0 ) = fVar14;
            JPH::SixDOFConstraint::CacheHasSpringLimits();
            lVar4 = *(long*)( this + 0x18 );
            if (lVar4 != 0) {
               fVar13 = 0.0;
               fVar14 = 0.0;
               if (this[0x2af] != (JoltGeneric6DOFJoint3D)0x0) {
                  fVar13 = (float)*(double*)( this + 0x100 );
                  fVar14 = (float)*(double*)( this + 0x130 );
               }

               uStack_127 = ( undefined3 )(( ulong ) * (undefined8*)( lVar4 + 0xc4 ) >> 8);
               *(ulong*)( lVar4 + 0xc4 ) = (ulong)CONCAT43(fVar13, uStack_127) << 8;
               *(float*)( lVar4 + 0xcc ) = fVar14;
               JPH::SixDOFConstraint::CacheHasSpringLimits();
               lVar4 = *(long*)( this + 0x18 );
               if (lVar4 != 0) {
                  fVar13 = 0.0;
                  fVar14 = 0.0;
                  if (this[0x2b0] != (JoltGeneric6DOFJoint3D)0x0) {
                     fVar13 = (float)*(double*)( this + 0x108 );
                     fVar14 = (float)*(double*)( this + 0x138 );
                  }

                  uStack_127 = ( undefined3 )(( ulong ) * (undefined8*)( lVar4 + 0xd0 ) >> 8);
                  *(ulong*)( lVar4 + 0xd0 ) = (ulong)CONCAT43(fVar13, uStack_127) << 8;
                  *(float*)( lVar4 + 0xd8 ) = fVar14;
                  JPH::SixDOFConstraint::CacheHasSpringLimits();
               }

            }

         }

         iVar6 = 0;
         LAB_001009d8:do {
            _update_motor_state(this, iVar6);
            lVar4 = *(long*)( this + 0x18 );
            if (lVar4 != 0) {
               if (iVar6 < 3) {
                  dVar2 = *(double*)( this + 0x168 );
                  dVar5 = *(double*)( this + 0x160 );
                  *(float*)( lVar4 + 0x1c0 ) = (float)*(double*)( this + 0x158 );
                  *(float*)( lVar4 + 0x1c4 ) = (float)dVar5;
                  *(float*)( lVar4 + 0x1c8 ) = (float)dVar2;
                  *(float*)( lVar4 + 0x1cc ) = (float)dVar2;
                  pJVar12 = this;
                  iVar11 = iVar6;
                  _update_motor_limit(this, iVar6);
                  _update_spring_parameters(pJVar12, iVar11);
                  _update_spring_equilibrium(this, iVar6);
                  iVar6 = iVar6 + 1;
                  goto LAB_001009d8;
               }

               uVar15 = (uint)(float)*(double*)( this + 0x178 ) ^ _LC13._4_4_;
               uVar16 = (uint)(float)*(double*)( this + 0x180 ) ^ _UNK_00104988;
               uVar17 = (uint)(float)*(double*)( this + 0x180 ) ^ _UNK_0010498c;
               *(uint*)( lVar4 + 0x1d0 ) = (uint)(float)*(double*)( this + 0x170 ) ^ (uint)_LC13;
               *(uint*)( lVar4 + 0x1d4 ) = uVar15;
               *(uint*)( lVar4 + 0x1d8 ) = uVar16;
               *(uint*)( lVar4 + 0x1dc ) = uVar17;
            }

            pJVar12 = this;
            iVar11 = iVar6;
            _update_motor_limit(this, iVar6);
            _update_spring_parameters(pJVar12, iVar11);
            iVar11 = iVar6 + 1;
            _update_spring_equilibrium(this, iVar6);
            iVar6 = iVar11;
         }
 while ( iVar11 != 6 );
      }

      JoltBodyAccessor3D::release();
      local_c8 = JoltBodyAccessor3D::acquire;
      JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)&local_c8);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltGeneric6DOFJoint3D::_limits_changed() */void JoltGeneric6DOFJoint3D::_limits_changed(JoltGeneric6DOFJoint3D *this) {
   rebuild(this);
   JoltJoint3D::_wake_up_bodies();
   return;
}
/* JoltGeneric6DOFJoint3D::_limit_spring_parameters_changed(int) */void JoltGeneric6DOFJoint3D::_limit_spring_parameters_changed(JoltGeneric6DOFJoint3D *this, int param_1) {
   _update_limit_spring_parameters(this, param_1);
   JoltJoint3D::_wake_up_bodies();
   return;
}
/* JoltGeneric6DOFJoint3D::_motor_state_changed(int) */void JoltGeneric6DOFJoint3D::_motor_state_changed(JoltGeneric6DOFJoint3D *this, int param_1) {
   _update_motor_state(this, param_1);
   _update_motor_limit(this, param_1);
   JoltJoint3D::_wake_up_bodies();
   return;
}
/* JoltGeneric6DOFJoint3D::_motor_speed_changed(int) */void JoltGeneric6DOFJoint3D::_motor_speed_changed(JoltGeneric6DOFJoint3D *this, int param_1) {
   double dVar1;
   long lVar2;
   double dVar3;
   uint uVar4;
   uint uVar5;
   uint uVar6;
   lVar2 = *(long*)( this + 0x18 );
   if (lVar2 != 0) {
      if (2 < (uint)param_1) {
         uVar4 = (uint)(float)*(double*)( this + 0x178 ) ^ _LC7._4_4_;
         uVar5 = (uint)(float)*(double*)( this + 0x180 ) ^ _LC7._4_4_;
         uVar6 = (uint)(float)*(double*)( this + 0x180 ) ^ _LC7._4_4_;
         *(uint*)( lVar2 + 0x1d0 ) = (uint)(float)*(double*)( this + 0x170 ) ^ _LC7._4_4_;
         *(uint*)( lVar2 + 0x1d4 ) = uVar4;
         *(uint*)( lVar2 + 0x1d8 ) = uVar5;
         *(uint*)( lVar2 + 0x1dc ) = uVar6;
         JoltJoint3D::_wake_up_bodies();
         return;
      }

      dVar1 = *(double*)( this + 0x168 );
      dVar3 = *(double*)( this + 0x160 );
      *(float*)( lVar2 + 0x1c0 ) = (float)*(double*)( this + 0x158 );
      *(float*)( lVar2 + 0x1c4 ) = (float)dVar3;
      *(float*)( lVar2 + 0x1c8 ) = (float)dVar1;
      *(float*)( lVar2 + 0x1cc ) = (float)dVar1;
   }

   JoltJoint3D::_wake_up_bodies();
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JoltGeneric6DOFJoint3D::_motor_limit_changed(int) */void JoltGeneric6DOFJoint3D::_motor_limit_changed(JoltGeneric6DOFJoint3D *this, int param_1) {
   long lVar1;
   long lVar2;
   uint uVar3;
   float fVar4;
   lVar1 = *(long*)( this + 0x18 );
   if (lVar1 != 0) {
      lVar2 = (long)param_1;
      if (this[lVar2 + 0x2b4] == (JoltGeneric6DOFJoint3D)0x0) {
         uVar3 = _LC3;
         fVar4 = _LC0;
         if (this[lVar2 + 0x2ba] != (JoltGeneric6DOFJoint3D)0x0) {
            uVar3 = (uint)(float)*(double*)( this + lVar2 * 8 + 0x278 ) ^ __LC12;
            fVar4 = (float)*(double*)( this + lVar2 * 8 + 0x278 );
         }

      }
 else {
         uVar3 = (uint)(float)*(double*)( this + lVar2 * 8 + 0x188 ) ^ __LC12;
         fVar4 = (float)*(double*)( this + lVar2 * 8 + 0x188 );
      }

      if (2 < (uint)param_1) {
         *(ulong*)( lVar1 + 0xf0 + lVar2 * 0x1c ) = CONCAT44(fVar4, uVar3);
         JoltJoint3D::_wake_up_bodies();
         return;
      }

      *(ulong*)( lVar1 + 0xe8 + lVar2 * 0x1c ) = CONCAT44(fVar4, uVar3);
   }

   JoltJoint3D::_wake_up_bodies();
   return;
}
/* JoltGeneric6DOFJoint3D::_spring_state_changed(int) */void JoltGeneric6DOFJoint3D::_spring_state_changed(JoltGeneric6DOFJoint3D *this, int param_1) {
   long lVar1;
   lVar1 = *(long*)( this + 0x18 );
   if (lVar1 != 0) {
      if (this[(long)param_1 + 0x2b4] != (JoltGeneric6DOFJoint3D)0x0) {
         JPH::SixDOFConstraint::SetMotorState(lVar1, param_1, 1);
         JoltJoint3D::_wake_up_bodies();
         return;
      }

      if (this[(long)param_1 + 0x2ba] == (JoltGeneric6DOFJoint3D)0x0) {
         JPH::SixDOFConstraint::SetMotorState(lVar1, param_1, 0);
         JoltJoint3D::_wake_up_bodies();
         return;
      }

      JPH::SixDOFConstraint::SetMotorState(lVar1, param_1, 2);
   }

   JoltJoint3D::_wake_up_bodies();
   return;
}
/* JoltGeneric6DOFJoint3D::_spring_parameters_changed(int) */void JoltGeneric6DOFJoint3D::_spring_parameters_changed(JoltGeneric6DOFJoint3D *this, int param_1) {
   double dVar1;
   JoltGeneric6DOFJoint3D JVar2;
   long lVar3;
   long lVar4;
   lVar3 = *(long*)( this + 0x18 );
   if (lVar3 != 0) {
      lVar4 = (long)param_1;
      JVar2 = this[lVar4 + 0x2c0];
      if (JVar2 != (JoltGeneric6DOFJoint3D)0x0) {
         *(float*)( lVar3 + 0xe0 + lVar4 * 0x1c ) = (float)*(double*)( this + lVar4 * 8 + 0x1e8 );
      }
 else {
         *(float*)( lVar3 + 0xe0 + lVar4 * 0x1c ) = (float)*(double*)( this + lVar4 * 8 + 0x1b8 );
      }

      dVar1 = *(double*)( this + lVar4 * 8 + 0x218 );
      lVar3 = lVar3 + lVar4 * 0x1c;
      *(bool*)( lVar3 + 0xdc ) = JVar2 == (JoltGeneric6DOFJoint3D)0x0;
      *(float*)( lVar3 + 0xe4 ) = (float)dVar1;
   }

   JoltJoint3D::_wake_up_bodies();
   return;
}
/* JoltGeneric6DOFJoint3D::_spring_equilibrium_changed(int) */void JoltGeneric6DOFJoint3D::_spring_equilibrium_changed(JoltGeneric6DOFJoint3D *this, int param_1) {
   _update_spring_equilibrium(this, param_1);
   JoltJoint3D::_wake_up_bodies();
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JoltGeneric6DOFJoint3D::_spring_limit_changed(int) */void JoltGeneric6DOFJoint3D::_spring_limit_changed(JoltGeneric6DOFJoint3D *this, int param_1) {
   long lVar1;
   long lVar2;
   uint uVar3;
   float fVar4;
   lVar1 = *(long*)( this + 0x18 );
   if (lVar1 != 0) {
      lVar2 = (long)param_1;
      if (this[lVar2 + 0x2b4] == (JoltGeneric6DOFJoint3D)0x0) {
         uVar3 = _LC3;
         fVar4 = _LC0;
         if (this[lVar2 + 0x2ba] != (JoltGeneric6DOFJoint3D)0x0) {
            uVar3 = (uint)(float)*(double*)( this + lVar2 * 8 + 0x278 ) ^ __LC12;
            fVar4 = (float)*(double*)( this + lVar2 * 8 + 0x278 );
         }

      }
 else {
         uVar3 = (uint)(float)*(double*)( this + lVar2 * 8 + 0x188 ) ^ __LC12;
         fVar4 = (float)*(double*)( this + lVar2 * 8 + 0x188 );
      }

      if (2 < (uint)param_1) {
         *(ulong*)( lVar1 + 0xf0 + lVar2 * 0x1c ) = CONCAT44(fVar4, uVar3);
         JoltJoint3D::_wake_up_bodies();
         return;
      }

      *(ulong*)( lVar1 + 0xe8 + lVar2 * 0x1c ) = CONCAT44(fVar4, uVar3);
   }

   JoltJoint3D::_wake_up_bodies();
   return;
}
/* JoltGeneric6DOFJoint3D::JoltGeneric6DOFJoint3D(JoltJoint3D const&, JoltBody3D*, JoltBody3D*,
   Transform3D const&, Transform3D const&) */void JoltGeneric6DOFJoint3D::JoltGeneric6DOFJoint3D(JoltGeneric6DOFJoint3D *this, JoltJoint3D *param_1, JoltBody3D *param_2, JoltBody3D *param_3, Transform3D *param_4, Transform3D *param_5) {
   undefined8 uVar1;
   JoltJoint3D::JoltJoint3D((JoltJoint3D*)this, param_1, param_2, param_3, param_4, param_5);
   uVar1 = _LC20;
   *(undefined1(*) [16])( this + 0x98 ) = (undefined1[16])0x0;
   *(undefined***)this = &PTR__JoltGeneric6DOFJoint3D_001048e8;
   for (int i = 0; i < 14; i++) {
      *(undefined1(*) [16])( this + ( 16*i + 168 ) ) = (undefined1[16])0;
   }

   for (int i = 0; i < 6; i++) {
      *(undefined8*)( this + ( 8*i + 392 ) ) = uVar1;
   }

   for (int i = 0; i < 12; i++) {
      *(undefined1(*) [16])( this + ( 16*i + 440 ) ) = (undefined1[16])0;
   }

   *(undefined8*)( this + 0x278 ) = uVar1;
   *(undefined8*)( this + 0x280 ) = uVar1;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 8*i + 680 ) ) = 0;
   }

   *(undefined4*)( this + 0x2c0 ) = 0;
   *(undefined2*)( this + 0x2c4 ) = 0;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i + 648 ) ) = uVar1;
   }

   rebuild(this);
   return;
}
/* JoltGeneric6DOFJoint3D::get_applied_force() const */undefined8 JoltGeneric6DOFJoint3D::get_applied_force(JoltGeneric6DOFJoint3D *this) {
   long lVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   float fVar5;
   float fVar6;
   float fVar7;
   lVar1 = *(long*)( this + 0x18 );
   if (lVar1 == 0) {
      _err_print_error("get_applied_force", "modules/jolt_physics/joints/jolt_generic_6dof_joint_3d.cpp", 0x26b, "Parameter \"constraint\" is null.", 0, 0);
   }
 else {
      lVar2 = JoltJoint3D::get_space();
      if (lVar2 == 0) {
         _err_print_error("get_applied_force", "modules/jolt_physics/joints/jolt_generic_6dof_joint_3d.cpp", 0x26e, "Parameter \"space\" is null.", 0, 0);
      }
 else if (*(float*)( lVar2 + 0x80 ) != 0.0) {
         if (( ( ~*(byte *)(lVar1 + 0x81) & 7 ) == 0 ) && ( *(char*)( lVar1 + 0x85 ) == '\0' )) {
            fVar5 = *(float*)( lVar1 + 0x410 );
            fVar6 = *(float*)( lVar1 + 0x414 );
            fVar7 = *(float*)( lVar1 + 0x418 );
         }
 else {
            fVar7 = *(float*)( lVar1 + 0x328 );
            fVar6 = *(float*)( lVar1 + 0x2e8 );
            fVar5 = *(float*)( lVar1 + 0x2a8 );
         }

         fVar5 = fVar5 + *(float*)( lVar1 + 0x63c );
         fVar6 = fVar6 + *(float*)( lVar1 + 0x67c );
         fVar7 = fVar7 + *(float*)( lVar1 + 0x6bc );
         auVar3._4_4_ = fVar6;
         auVar3._0_4_ = fVar6;
         auVar3._8_4_ = fVar6;
         auVar3._12_4_ = fVar6;
         auVar4._4_12_ = auVar3._4_12_;
         auVar4._0_4_ = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + 0.0 + fVar7 * fVar7) / *(float*)( lVar2 + 0x80 );
         return auVar4._0_8_;
      }

   }

   return 0;
}
/* JoltGeneric6DOFJoint3D::get_applied_torque() const */undefined8 JoltGeneric6DOFJoint3D::get_applied_torque(JoltGeneric6DOFJoint3D *this) {
   long lVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   float fVar5;
   float fVar6;
   float fVar7;
   lVar1 = *(long*)( this + 0x18 );
   if (lVar1 == 0) {
      _err_print_error("get_applied_torque", "modules/jolt_physics/joints/jolt_generic_6dof_joint_3d.cpp", 0x27c, "Parameter \"constraint\" is null.", 0, 0);
   }
 else {
      lVar2 = JoltJoint3D::get_space();
      if (lVar2 == 0) {
         _err_print_error("get_applied_torque", "modules/jolt_physics/joints/jolt_generic_6dof_joint_3d.cpp", 0x27f, "Parameter \"space\" is null.", 0, 0);
      }
 else if (*(float*)( lVar2 + 0x80 ) != 0.0) {
         if (( ~*(byte *)(lVar1 + 0x81) & 0x38 ) == 0) {
            fVar5 = *(float*)( lVar1 + 0x5f0 );
            fVar6 = *(float*)( lVar1 + 0x5f4 );
            fVar7 = *(float*)( lVar1 + 0x5f8 );
         }
 else {
            fVar7 = *(float*)( lVar1 + 0x4fc );
            fVar6 = *(float*)( lVar1 + 0x4cc );
            fVar5 = *(float*)( lVar1 + 0x52c );
         }

         fVar5 = fVar5 + *(float*)( lVar1 + 0x6ec );
         fVar6 = fVar6 + *(float*)( lVar1 + 0x71c );
         fVar7 = fVar7 + *(float*)( lVar1 + 0x74c );
         auVar3._4_4_ = fVar6;
         auVar3._0_4_ = fVar6;
         auVar3._8_4_ = fVar6;
         auVar3._12_4_ = fVar6;
         auVar4._4_12_ = auVar3._4_12_;
         auVar4._0_4_ = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + 0.0 + fVar7 * fVar7) / *(float*)( lVar2 + 0x80 );
         return auVar4._0_8_;
      }

   }

   return 0;
}
/* JoltGeneric6DOFJoint3D::get_param(Vector3::Axis, PhysicsServer3D::G6DOFJointAxisParam) const */undefined8 JoltGeneric6DOFJoint3D::get_param(JoltGeneric6DOFJoint3D *this, int param_2, uint param_3) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   int iVar4;
   long in_FS_OFFSET;
   undefined8 uVar5;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 < 0x16) {
      iVar4 = param_2 + 3;
      switch (param_3) {
         case 0:
      uVar5 = *(undefined8 *)(this + (long)param_2 * 8 + 0x98);
      break;
         case 1:
      uVar5 = *(undefined8 *)(this + (long)param_2 * 8 + 200);
      break;
         case 2:
      uVar5 = _LC32;
      break;
         default:
      uVar5 = _LC33;
      break;
         case 4:
         case 0xd:
      uVar5 = _LC34;
      break;
         case 5:
      uVar5 = *(undefined8 *)(this + (long)param_2 * 8 + 0x158);
      break;
         case 6:
      uVar5 = *(undefined8 *)(this + (long)param_2 * 8 + 0x188);
      break;
         case 7:
      uVar5 = *(undefined8 *)(this + (long)param_2 * 8 + 0x1b8);
      break;
         case 8:
      uVar5 = *(undefined8 *)(this + (long)param_2 * 8 + 0x218);
      break;
         case 9:
      uVar5 = *(undefined8 *)(this + (long)param_2 * 8 + 0x248);
      break;
         case 10:
      uVar5 = *(undefined8 *)(this + (long)iVar4 * 8 + 0x98);
      break;
         case 0xb:
      uVar5 = *(undefined8 *)(this + (long)iVar4 * 8 + 200);
      break;
         case 0xe:
         case 0xf:
      goto switchD_00101315_caseD_e;
         case 0x11:
      uVar5 = *(undefined8 *)(this + (long)iVar4 * 8 + 0x158);
      break;
         case 0x12:
      uVar5 = *(undefined8 *)(this + (long)iVar4 * 8 + 0x188);
      break;
         case 0x13:
      uVar5 = *(undefined8 *)(this + (long)iVar4 * 8 + 0x1b8);
      break;
         case 0x14:
      uVar5 = *(undefined8 *)(this + (long)iVar4 * 8 + 0x218);
      break;
         case 0x15:
      uVar5 = *(undefined8 *)(this + (long)iVar4 * 8 + 0x248);
      }

   }
 else {
      local_40 = 0;
      local_38 = "Unhandled parameter: \'%d\'. This should not happen. Please report this.";
      local_30 = 0x46;
      String::parse_latin1((StrRange*)&local_40);
      vformat<PhysicsServer3D::G6DOFJointAxisParam>(&local_38, (StrRange*)&local_40, param_3);
      _err_print_error("get_param", "modules/jolt_physics/joints/jolt_generic_6dof_joint_3d.cpp", 0x14e, "Method/function failed. Returning: 0.0", &local_38, 0);
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

      switchD_00101315_caseD_e:uVar5 = 0;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltGeneric6DOFJoint3D::set_param(Vector3::Axis, PhysicsServer3D::G6DOFJointAxisParam, double) */void JoltGeneric6DOFJoint3D::set_param(double param_1, JoltGeneric6DOFJoint3D *this, uint param_3, uint param_4) {
   long *plVar1;
   char *pcVar2;
   long lVar3;
   undefined8 uVar4;
   uint uVar5;
   long in_FS_OFFSET;
   uint uVar6;
   uint uVar7;
   double dVar8;
   double dVar9;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (0x15 < param_4) {
      local_40 = 0;
      local_38 = "Unhandled parameter: \'%d\'. This should not happen. Please report this.";
      local_30 = 0x46;
      String::parse_latin1((StrRange*)&local_40);
      vformat<PhysicsServer3D::G6DOFJointAxisParam>(&local_38, (StrRange*)&local_40, param_4);
      _err_print_error("set_param", "modules/jolt_physics/joints/jolt_generic_6dof_joint_3d.cpp", 0x1b9, "Method/function failed.", &local_38, 0);
      pcVar2 = local_38;
      if (local_38 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_38 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_38 = (char*)0x0;
            Memory::free_static(pcVar2 + -0x10, false);
         }

      }

      lVar3 = local_40;
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

      goto LAB_00101708;
   }

   uVar5 = param_3 + 3;
   switch (param_4) {
      case 0:
    *(double *)(this + (long)(int)param_3 * 8 + 0x98) = param_1;
    rebuild(this);
    if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) break;
    goto LAB_00101606;
      case 1:
    *(double *)(this + (long)(int)param_3 * 8 + 200) = param_1;
    rebuild(this);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00101606;
    break;
      case 2:
    if (param_1 != _LC32) {
      dVar9 = _LC39;
      if (_LC39 <= ABS(param_1) * _LC39) {
        dVar9 = ABS(param_1) * _LC39;
      }
      if (dVar9 <= ABS(param_1 - _LC32)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "6DOF joint linear limit softness is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x82;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        uVar4 = 0x162;
LAB_001017c0:
        _err_print_error("set_param","modules/jolt_physics/joints/jolt_generic_6dof_joint_3d.cpp",
                         uVar4,&local_38,0,1);
        pcVar2 = local_38;
        if (local_38 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_38 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_38 = (char *)0x0;
            Memory::free_static(pcVar2 + -0x10,false);
          }
        }
        lVar3 = local_40;
        if (local_40 != 0) {
          LOCK();
          plVar1 = (long *)(local_40 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_40 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        lVar3 = local_48;
        if (local_48 != 0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
      }
    }
    goto LAB_00101708;
      case 3:
    if (param_1 != _LC33) {
      dVar9 = _LC39;
      if (_LC39 <= ABS(param_1) * _LC39) {
        dVar9 = ABS(param_1) * _LC39;
      }
      if (dVar9 <= ABS(param_1 - _LC33)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "6DOF joint linear restitution is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x7f;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        uVar4 = 0x167;
        goto LAB_001017c0;
      }
    }
    goto LAB_00101708;
      case 4:
    if (param_1 != _LC34) {
      dVar9 = _LC39;
      if (_LC39 <= ABS(param_1) * _LC39) {
        dVar9 = ABS(param_1) * _LC39;
      }
      if (dVar9 <= ABS(param_1 - _LC34)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "6DOF joint linear damping is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x7b;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        uVar4 = 0x16c;
        goto LAB_001017c0;
      }
    }
    goto LAB_00101708;
      case 5:
    *(double *)(this + (long)(int)param_3 * 8 + 0x158) = param_1;
    lVar3 = *(long *)(this + 0x18);
    if (lVar3 != 0) {
      if (2 < param_3) goto LAB_00101bd2;
LAB_0010167e:
      dVar9 = *(double *)(this + 0x168);
      *(ulong *)(lVar3 + 0x1c0) =
           CONCAT44((float)*(double *)(this + 0x160),(float)*(double *)(this + 0x158));
      *(ulong *)(lVar3 + 0x1c8) = CONCAT44((float)dVar9,(float)dVar9);
    }
    goto LAB_001015f6;
      case 6:
    *(double *)(this + (long)(int)param_3 * 8 + 0x188) = param_1;
    _update_motor_limit(this,param_3);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00101606;
    break;
      case 7:
    *(double *)(this + (long)(int)param_3 * 8 + 0x1b8) = param_1;
    _update_spring_parameters(this,param_3);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00101606;
    break;
      case 8:
    *(double *)(this + (long)(int)param_3 * 8 + 0x218) = param_1;
    _update_spring_parameters(this,param_3);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00101606;
    break;
      case 9:
    *(double *)(this + (long)(int)param_3 * 8 + 0x248) = param_1;
    _update_spring_equilibrium(this,param_3);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00101606;
    break;
      case 10:
    *(double *)(this + (long)(int)uVar5 * 8 + 0x98) = param_1;
    rebuild(this);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00101606;
    break;
      case 0xb:
    *(double *)(this + (long)(int)uVar5 * 8 + 200) = param_1;
    rebuild(this);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00101606;
    break;
      case 0xc:
    if (param_1 != _LC33) {
      dVar9 = _LC39;
      if (_LC39 <= ABS(param_1) * _LC39) {
        dVar9 = ABS(param_1) * _LC39;
      }
      if (dVar9 <= ABS(param_1 - _LC33)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "6DOF joint angular limit softness is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x83;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        uVar4 = 0x18d;
        goto LAB_001017c0;
      }
    }
    goto LAB_00101708;
      case 0xd:
    if (param_1 != _LC34) {
      dVar9 = _LC39;
      if (_LC39 <= ABS(param_1) * _LC39) {
        dVar9 = ABS(param_1) * _LC39;
      }
      if (dVar9 <= ABS(param_1 - _LC34)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "6DOF joint angular damping is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x7c;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        uVar4 = 0x192;
        goto LAB_001017c0;
      }
    }
    goto LAB_00101708;
      case 0xe:
    if (param_1 != 0.0) {
      dVar8 = ABS(param_1) * _LC39;
      dVar9 = _LC39;
      if (_LC39 <= dVar8) {
        dVar9 = dVar8;
      }
      if (dVar9 <= ABS(param_1)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "6DOF joint angular restitution is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x80;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        uVar4 = 0x197;
        goto LAB_001017c0;
      }
    }
    goto LAB_00101708;
      case 0xf:
    if (param_1 != 0.0) {
      dVar8 = ABS(param_1) * _LC39;
      dVar9 = _LC39;
      if (_LC39 <= dVar8) {
        dVar9 = dVar8;
      }
      if (dVar9 <= ABS(param_1)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "6DOF joint angular force limit is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x80;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        uVar4 = 0x19c;
        goto LAB_001017c0;
      }
    }
    goto LAB_00101708;
      case 0x10:
    if (param_1 != _LC33) {
      dVar9 = _LC39;
      if (_LC39 <= ABS(param_1) * _LC39) {
        dVar9 = ABS(param_1) * _LC39;
      }
      if (dVar9 <= ABS(param_1 - _LC33)) {
        JoltJoint3D::_bodies_to_string();
        local_38 = 
        "6DOF joint angular ERP is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
        ;
        local_40 = 0;
        local_30 = 0x78;
        String::parse_latin1((StrRange *)&local_40);
        vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
        uVar4 = 0x1a1;
        goto LAB_001017c0;
      }
    }
LAB_00101708:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    break;
      case 0x11:
    *(double *)(this + (long)(int)uVar5 * 8 + 0x158) = param_1;
    lVar3 = *(long *)(this + 0x18);
    if (lVar3 != 0) {
      if (uVar5 < 3) goto LAB_0010167e;
LAB_00101bd2:
      uVar5 = (uint)(float)*(double *)(this + 0x178) ^ _LC7._4_4_;
      uVar6 = (uint)(float)*(double *)(this + 0x180) ^ _LC7._4_4_;
      uVar7 = (uint)(float)*(double *)(this + 0x180) ^ _LC7._4_4_;
      *(uint *)(lVar3 + 0x1d0) = (uint)(float)*(double *)(this + 0x170) ^ _LC7._4_4_;
      *(uint *)(lVar3 + 0x1d4) = uVar5;
      *(uint *)(lVar3 + 0x1d8) = uVar6;
      *(uint *)(lVar3 + 0x1dc) = uVar7;
    }
    goto LAB_001015f6;
      case 0x12:
    *(double *)(this + (long)(int)uVar5 * 8 + 0x188) = param_1;
    _update_motor_limit(this,uVar5);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00101606;
    break;
      case 0x13:
    *(double *)(this + (long)(int)uVar5 * 8 + 0x1b8) = param_1;
    goto LAB_001015ec;
      case 0x14:
    *(double *)(this + (long)(int)uVar5 * 8 + 0x218) = param_1;
LAB_001015ec:
    _update_spring_parameters(this,uVar5);
    goto LAB_001015f6;
      case 0x15:
    *(double *)(this + (long)(int)uVar5 * 8 + 0x248) = param_1;
    _update_spring_equilibrium(this,uVar5);
LAB_001015f6:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00101606:
      JoltJoint3D::_wake_up_bodies();
      return;
    }
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltGeneric6DOFJoint3D::get_flag(Vector3::Axis, PhysicsServer3D::G6DOFJointAxisFlag) const */JoltGeneric6DOFJoint3D JoltGeneric6DOFJoint3D::get_flag(JoltGeneric6DOFJoint3D *this, int param_2, uint param_3) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   JoltGeneric6DOFJoint3D JVar4;
   int iVar5;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 < 6) {
      iVar5 = param_2 + 3;
      switch (param_3) {
         case 0:
      JVar4 = this[(long)param_2 + 0x2a8];
      break;
         case 1:
      JVar4 = this[(long)iVar5 + 0x2a8];
      break;
         case 2:
      JVar4 = this[(long)iVar5 + 0x2ba];
      break;
         case 3:
      JVar4 = this[(long)param_2 + 0x2ba];
      break;
         case 4:
      JVar4 = this[(long)iVar5 + 0x2b4];
      break;
         case 5:
      JVar4 = this[(long)param_2 + 0x2b4];
      }

   }
 else {
      local_40 = 0;
      local_38 = "Unhandled flag: \'%d\'. This should not happen. Please report this.";
      local_30 = 0x41;
      String::parse_latin1((StrRange*)&local_40);
      vformat<PhysicsServer3D::G6DOFJointAxisFlag>(&local_38, (StrRange*)&local_40, param_3);
      _err_print_error("get_flag", "modules/jolt_physics/joints/jolt_generic_6dof_joint_3d.cpp", 0x1d6, "Method/function failed. Returning: false", &local_38, 0, 0);
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
            JVar4 = (JoltGeneric6DOFJoint3D)0x0;
            goto LAB_00102060;
         }

      }

      JVar4 = (JoltGeneric6DOFJoint3D)0x0;
   }

   LAB_00102060:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return JVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltGeneric6DOFJoint3D::set_flag(Vector3::Axis, PhysicsServer3D::G6DOFJointAxisFlag, bool) */void JoltGeneric6DOFJoint3D::set_flag(JoltGeneric6DOFJoint3D *this, int param_2, uint param_3, JoltGeneric6DOFJoint3D param_4) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   int iVar4;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 < 6) {
      iVar4 = param_2 + 3;
      switch (param_3) {
         case 0:
      this[(long)param_2 + 0x2a8] = param_4;
      rebuild(this);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00102225:
        JoltJoint3D::_wake_up_bodies();
        return;
      }
      break;
         case 1:
      this[(long)iVar4 + 0x2a8] = param_4;
      rebuild(this);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00102225;
      break;
         case 2:
      this[(long)iVar4 + 0x2ba] = param_4;
      _update_motor_state(this,iVar4);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00102225;
      break;
         case 3:
      this[(long)param_2 + 0x2ba] = param_4;
      _update_motor_state(this,param_2);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00102225;
      break;
         case 4:
      this[(long)iVar4 + 0x2b4] = param_4;
      _update_motor_state(this,iVar4);
      _update_motor_limit(this,iVar4);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00102225;
      break;
         case 5:
      this[(long)param_2 + 0x2b4] = param_4;
      _update_motor_state(this,param_2);
      _update_motor_limit(this,param_2);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00102225;
      }

   }
 else {
      local_50 = 0;
      local_48 = "Unhandled flag: \'%d\'. This should not happen. Please report this.";
      local_40 = 0x41;
      String::parse_latin1((StrRange*)&local_50);
      vformat<PhysicsServer3D::G6DOFJointAxisFlag>(&local_48, (StrRange*)&local_50, param_3);
      _err_print_error("set_flag", "modules/jolt_physics/joints/jolt_generic_6dof_joint_3d.cpp", 0x1f9, "Method/function failed.", &local_48, 0);
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

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltGeneric6DOFJoint3D::get_jolt_param(Vector3::Axis,
   JoltPhysicsServer3D::G6DOFJointAxisParamJolt) const */undefined8 JoltGeneric6DOFJoint3D::get_jolt_param(JoltGeneric6DOFJoint3D *this, int param_2, int param_3) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long in_FS_OFFSET;
   undefined8 uVar4;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 - 100U < 6) {
      switch (param_3) {
         case 100:
      uVar4 = *(undefined8 *)(this + (long)param_2 * 8 + 0x1e8);
      break;
         case 0x65:
      uVar4 = *(undefined8 *)(this + (long)param_2 * 8 + 0xf8);
      break;
         case 0x66:
      uVar4 = *(undefined8 *)(this + (long)param_2 * 8 + 0x128);
      break;
         case 0x67:
      uVar4 = *(undefined8 *)(this + (long)(param_2 + 3) * 8 + 0x1e8);
      break;
         case 0x68:
      uVar4 = *(undefined8 *)(this + (long)param_2 * 8 + 0x278);
      break;
         case 0x69:
      uVar4 = *(undefined8 *)(this + (long)(param_2 + 3) * 8 + 0x278);
      }

   }
 else {
      local_40 = 0;
      local_38 = "Unhandled parameter: \'%d\'. This should not happen. Please report this.";
      local_30 = 0x46;
      String::parse_latin1((StrRange*)&local_40);
      vformat<JoltPhysicsServer3D::G6DOFJointAxisParamJolt>(&local_38, (StrRange*)&local_40, param_3);
      _err_print_error("get_jolt_param", "modules/jolt_physics/joints/jolt_generic_6dof_joint_3d.cpp", 0x216, "Method/function failed. Returning: 0.0", &local_38, 0);
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

      uVar4 = 0;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltGeneric6DOFJoint3D::set_jolt_param(Vector3::Axis,
   JoltPhysicsServer3D::G6DOFJointAxisParamJolt, double) */void JoltGeneric6DOFJoint3D::set_jolt_param(undefined8 param_1, JoltGeneric6DOFJoint3D *this, int param_3, int param_4) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   int iVar4;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_4 - 100U < 6) {
      iVar4 = param_3 + 3;
      switch (param_4) {
         case 100:
      *(undefined8 *)(this + (long)param_3 * 8 + 0x1e8) = param_1;
      _update_spring_parameters(this,param_3);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        JoltJoint3D::_wake_up_bodies();
        return;
      }
      break;
         case 0x65:
      *(undefined8 *)(this + (long)param_3 * 8 + 0xf8) = param_1;
      _update_limit_spring_parameters(this,param_3);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        JoltJoint3D::_wake_up_bodies();
        return;
      }
      break;
         case 0x66:
      *(undefined8 *)(this + (long)param_3 * 8 + 0x128) = param_1;
      _update_limit_spring_parameters(this,param_3);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        JoltJoint3D::_wake_up_bodies();
        return;
      }
      break;
         case 0x67:
      *(undefined8 *)(this + (long)iVar4 * 8 + 0x1e8) = param_1;
      _update_spring_parameters(this,iVar4);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        JoltJoint3D::_wake_up_bodies();
        return;
      }
      break;
         case 0x68:
      *(undefined8 *)(this + (long)param_3 * 8 + 0x278) = param_1;
      _update_motor_limit(this,param_3);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00102621:
        JoltJoint3D::_wake_up_bodies();
        return;
      }
      break;
         case 0x69:
      *(undefined8 *)(this + (long)iVar4 * 8 + 0x278) = param_1;
      _update_motor_limit(this,iVar4);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00102621;
      }

   }
 else {
      local_40 = 0;
      local_38 = "Unhandled parameter: \'%d\'. This should not happen. Please report this.";
      local_30 = 0x46;
      String::parse_latin1((StrRange*)&local_40);
      vformat<JoltPhysicsServer3D::G6DOFJointAxisParamJolt>(&local_38, (StrRange*)&local_40, param_4);
      _err_print_error("set_jolt_param", "modules/jolt_physics/joints/jolt_generic_6dof_joint_3d.cpp", 0x239, "Method/function failed.", &local_38, 0);
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

      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltGeneric6DOFJoint3D::get_jolt_flag(Vector3::Axis, JoltPhysicsServer3D::G6DOFJointAxisFlagJolt)
   const */JoltGeneric6DOFJoint3D JoltGeneric6DOFJoint3D::get_jolt_flag(JoltGeneric6DOFJoint3D *this, int param_2, int param_3) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   JoltGeneric6DOFJoint3D JVar4;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 != 0x65) {
      if (param_3 != 0x66) {
         if (param_3 == 100) {
            JVar4 = this[(long)param_2 + 0x2ae];
         }
 else {
            local_40 = 0;
            local_30 = 0x41;
            local_38 = "Unhandled flag: \'%d\'. This should not happen. Please report this.";
            String::parse_latin1((StrRange*)&local_40);
            vformat<JoltPhysicsServer3D::G6DOFJointAxisFlagJolt>(&local_38, (StrRange*)&local_40, param_3);
            _err_print_error("get_jolt_flag", "modules/jolt_physics/joints/jolt_generic_6dof_joint_3d.cpp", 0x24d, "Method/function failed. Returning: false", &local_38, 0, 0);
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

            JVar4 = (JoltGeneric6DOFJoint3D)0x0;
         }

         goto LAB_0010286e;
      }

      param_2 = param_2 + 3;
   }

   JVar4 = this[(long)param_2 + 0x2c0];
   LAB_0010286e:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return JVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltGeneric6DOFJoint3D::set_jolt_flag(Vector3::Axis, JoltPhysicsServer3D::G6DOFJointAxisFlagJolt,
   bool) */void JoltGeneric6DOFJoint3D::set_jolt_flag(JoltGeneric6DOFJoint3D *this, int param_2, int param_3, JoltGeneric6DOFJoint3D param_4) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 != 0x65) {
      if (param_3 != 0x66) {
         if (param_3 != 100) {
            local_40 = 0;
            local_30 = 0x41;
            local_38 = "Unhandled flag: \'%d\'. This should not happen. Please report this.";
            String::parse_latin1((StrRange*)&local_40);
            vformat<JoltPhysicsServer3D::G6DOFJointAxisFlagJolt>(&local_38, (StrRange*)&local_40, param_3);
            _err_print_error("set_jolt_flag", "modules/jolt_physics/joints/jolt_generic_6dof_joint_3d.cpp", 0x264, "Method/function failed.", &local_38, 0);
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

            if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            goto LAB_001029e5;
         }

         this[(long)param_2 + 0x2ae] = param_4;
         _update_limit_spring_parameters(this, param_2);
         if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_001029e5;
         goto LAB_001029af;
      }

      param_2 = param_2 + 3;
   }

   this[(long)param_2 + 0x2c0] = param_4;
   _update_spring_parameters(this, param_2);
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      LAB_001029e5:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   LAB_001029af:JoltJoint3D::_wake_up_bodies();
   return;
}
/* JoltGeneric6DOFJoint3D::get_type() const */undefined8 JoltGeneric6DOFJoint3D::get_type(void) {
   return 4;
}
/* JoltGeneric6DOFJoint3D::~JoltGeneric6DOFJoint3D() */void JoltGeneric6DOFJoint3D::~JoltGeneric6DOFJoint3D(JoltGeneric6DOFJoint3D *this) {
   *(undefined***)this = &PTR__JoltGeneric6DOFJoint3D_001048e8;
   JoltJoint3D::~JoltJoint3D((JoltJoint3D*)this);
   return;
}
/* JoltGeneric6DOFJoint3D::~JoltGeneric6DOFJoint3D() */void JoltGeneric6DOFJoint3D::~JoltGeneric6DOFJoint3D(JoltGeneric6DOFJoint3D *this) {
   *(undefined***)this = &PTR__JoltGeneric6DOFJoint3D_001048e8;
   JoltJoint3D::~JoltJoint3D((JoltJoint3D*)this);
   operator_delete(this, 0x2c8);
   return;
}
/* WARNING: Removing unreachable block (ram,0x00103328) *//* WARNING: Removing unreachable block (ram,0x00103458) *//* WARNING: Removing unreachable block (ram,0x00103620) *//* WARNING: Removing unreachable block (ram,0x00103464) *//* WARNING: Removing unreachable block (ram,0x0010346e) *//* WARNING: Removing unreachable block (ram,0x00103600) *//* WARNING: Removing unreachable block (ram,0x0010347a) *//* WARNING: Removing unreachable block (ram,0x00103484) *//* WARNING: Removing unreachable block (ram,0x001035e0) *//* WARNING: Removing unreachable block (ram,0x00103490) *//* WARNING: Removing unreachable block (ram,0x0010349a) *//* WARNING: Removing unreachable block (ram,0x001035c0) *//* WARNING: Removing unreachable block (ram,0x001034a6) *//* WARNING: Removing unreachable block (ram,0x001034b0) *//* WARNING: Removing unreachable block (ram,0x001035a0) *//* WARNING: Removing unreachable block (ram,0x001034bc) *//* WARNING: Removing unreachable block (ram,0x001034c6) *//* WARNING: Removing unreachable block (ram,0x00103580) *//* WARNING: Removing unreachable block (ram,0x001034d2) *//* WARNING: Removing unreachable block (ram,0x001034dc) *//* WARNING: Removing unreachable block (ram,0x00103560) *//* WARNING: Removing unreachable block (ram,0x001034e4) *//* WARNING: Removing unreachable block (ram,0x001034fa) *//* WARNING: Removing unreachable block (ram,0x00103506) *//* String vformat<PhysicsServer3D::G6DOFJointAxisParam>(String const&,
   PhysicsServer3D::G6DOFJointAxisParam const) */undefined8 *vformat<PhysicsServer3D::G6DOFJointAxisParam>(undefined8 *param_1, bool *param_2, int param_3) {
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
/* WARNING: Removing unreachable block (ram,0x00103878) *//* WARNING: Removing unreachable block (ram,0x001039a8) *//* WARNING: Removing unreachable block (ram,0x00103b70) *//* WARNING: Removing unreachable block (ram,0x001039b4) *//* WARNING: Removing unreachable block (ram,0x001039be) *//* WARNING: Removing unreachable block (ram,0x00103b50) *//* WARNING: Removing unreachable block (ram,0x001039ca) *//* WARNING: Removing unreachable block (ram,0x001039d4) *//* WARNING: Removing unreachable block (ram,0x00103b30) *//* WARNING: Removing unreachable block (ram,0x001039e0) *//* WARNING: Removing unreachable block (ram,0x001039ea) *//* WARNING: Removing unreachable block (ram,0x00103b10) *//* WARNING: Removing unreachable block (ram,0x001039f6) *//* WARNING: Removing unreachable block (ram,0x00103a00) *//* WARNING: Removing unreachable block (ram,0x00103af0) *//* WARNING: Removing unreachable block (ram,0x00103a0c) *//* WARNING: Removing unreachable block (ram,0x00103a16) *//* WARNING: Removing unreachable block (ram,0x00103ad0) *//* WARNING: Removing unreachable block (ram,0x00103a22) *//* WARNING: Removing unreachable block (ram,0x00103a2c) *//* WARNING: Removing unreachable block (ram,0x00103ab0) *//* WARNING: Removing unreachable block (ram,0x00103a34) *//* WARNING: Removing unreachable block (ram,0x00103a4a) *//* WARNING: Removing unreachable block (ram,0x00103a56) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String_conflict *param_3) {
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
/* WARNING: Removing unreachable block (ram,0x00103cb8) *//* WARNING: Removing unreachable block (ram,0x00103de8) *//* WARNING: Removing unreachable block (ram,0x00103fb0) *//* WARNING: Removing unreachable block (ram,0x00103df4) *//* WARNING: Removing unreachable block (ram,0x00103dfe) *//* WARNING: Removing unreachable block (ram,0x00103f90) *//* WARNING: Removing unreachable block (ram,0x00103e0a) *//* WARNING: Removing unreachable block (ram,0x00103e14) *//* WARNING: Removing unreachable block (ram,0x00103f70) *//* WARNING: Removing unreachable block (ram,0x00103e20) *//* WARNING: Removing unreachable block (ram,0x00103e2a) *//* WARNING: Removing unreachable block (ram,0x00103f50) *//* WARNING: Removing unreachable block (ram,0x00103e36) *//* WARNING: Removing unreachable block (ram,0x00103e40) *//* WARNING: Removing unreachable block (ram,0x00103f30) *//* WARNING: Removing unreachable block (ram,0x00103e4c) *//* WARNING: Removing unreachable block (ram,0x00103e56) *//* WARNING: Removing unreachable block (ram,0x00103f10) *//* WARNING: Removing unreachable block (ram,0x00103e62) *//* WARNING: Removing unreachable block (ram,0x00103e6c) *//* WARNING: Removing unreachable block (ram,0x00103ef0) *//* WARNING: Removing unreachable block (ram,0x00103e74) *//* WARNING: Removing unreachable block (ram,0x00103e8a) *//* WARNING: Removing unreachable block (ram,0x00103e96) *//* String vformat<PhysicsServer3D::G6DOFJointAxisFlag>(String const&,
   PhysicsServer3D::G6DOFJointAxisFlag const) */undefined8 *vformat<PhysicsServer3D::G6DOFJointAxisFlag>(undefined8 *param_1, bool *param_2, int param_3) {
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
/* WARNING: Removing unreachable block (ram,0x001040f8) *//* WARNING: Removing unreachable block (ram,0x00104228) *//* WARNING: Removing unreachable block (ram,0x001043f0) *//* WARNING: Removing unreachable block (ram,0x00104234) *//* WARNING: Removing unreachable block (ram,0x0010423e) *//* WARNING: Removing unreachable block (ram,0x001043d0) *//* WARNING: Removing unreachable block (ram,0x0010424a) *//* WARNING: Removing unreachable block (ram,0x00104254) *//* WARNING: Removing unreachable block (ram,0x001043b0) *//* WARNING: Removing unreachable block (ram,0x00104260) *//* WARNING: Removing unreachable block (ram,0x0010426a) *//* WARNING: Removing unreachable block (ram,0x00104390) *//* WARNING: Removing unreachable block (ram,0x00104276) *//* WARNING: Removing unreachable block (ram,0x00104280) *//* WARNING: Removing unreachable block (ram,0x00104370) *//* WARNING: Removing unreachable block (ram,0x0010428c) *//* WARNING: Removing unreachable block (ram,0x00104296) *//* WARNING: Removing unreachable block (ram,0x00104350) *//* WARNING: Removing unreachable block (ram,0x001042a2) *//* WARNING: Removing unreachable block (ram,0x001042ac) *//* WARNING: Removing unreachable block (ram,0x00104330) *//* WARNING: Removing unreachable block (ram,0x001042b4) *//* WARNING: Removing unreachable block (ram,0x001042ca) *//* WARNING: Removing unreachable block (ram,0x001042d6) *//* String vformat<JoltPhysicsServer3D::G6DOFJointAxisParamJolt>(String const&,
   JoltPhysicsServer3D::G6DOFJointAxisParamJolt const) */undefined8 *vformat<JoltPhysicsServer3D::G6DOFJointAxisParamJolt>(undefined8 *param_1, bool *param_2, int param_3) {
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
/* WARNING: Removing unreachable block (ram,0x00104538) *//* WARNING: Removing unreachable block (ram,0x00104668) *//* WARNING: Removing unreachable block (ram,0x00104830) *//* WARNING: Removing unreachable block (ram,0x00104674) *//* WARNING: Removing unreachable block (ram,0x0010467e) *//* WARNING: Removing unreachable block (ram,0x00104810) *//* WARNING: Removing unreachable block (ram,0x0010468a) *//* WARNING: Removing unreachable block (ram,0x00104694) *//* WARNING: Removing unreachable block (ram,0x001047f0) *//* WARNING: Removing unreachable block (ram,0x001046a0) *//* WARNING: Removing unreachable block (ram,0x001046aa) *//* WARNING: Removing unreachable block (ram,0x001047d0) *//* WARNING: Removing unreachable block (ram,0x001046b6) *//* WARNING: Removing unreachable block (ram,0x001046c0) *//* WARNING: Removing unreachable block (ram,0x001047b0) *//* WARNING: Removing unreachable block (ram,0x001046cc) *//* WARNING: Removing unreachable block (ram,0x001046d6) *//* WARNING: Removing unreachable block (ram,0x00104790) *//* WARNING: Removing unreachable block (ram,0x001046e2) *//* WARNING: Removing unreachable block (ram,0x001046ec) *//* WARNING: Removing unreachable block (ram,0x00104770) *//* WARNING: Removing unreachable block (ram,0x001046f4) *//* WARNING: Removing unreachable block (ram,0x0010470a) *//* WARNING: Removing unreachable block (ram,0x00104716) *//* String vformat<JoltPhysicsServer3D::G6DOFJointAxisFlagJolt>(String const&,
   JoltPhysicsServer3D::G6DOFJointAxisFlagJolt const) */undefined8 *vformat<JoltPhysicsServer3D::G6DOFJointAxisFlagJolt>(undefined8 *param_1, bool *param_2, int param_3) {
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
/* JoltGeneric6DOFJoint3D::_build_6dof(JPH::Body*, JPH::Body*, Transform3D const&, Transform3D
   const&) const */void JoltGeneric6DOFJoint3D::_GLOBAL__sub_I__build_6dof(void) {
   if (JPH::DVec3::cTrue == '\0') {
      JPH::DVec3::cTrue = '\x01';
      JPH::DVec3::cTrue = _LC58;
   }

   return;
}
/* WARNING: Control flow encountered bad instruction data *//* JoltGeneric6DOFJoint3D::~JoltGeneric6DOFJoint3D() */void JoltGeneric6DOFJoint3D::~JoltGeneric6DOFJoint3D(JoltGeneric6DOFJoint3D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

