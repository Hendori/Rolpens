/* JoltShapeInstance3D::ShapeReference::ShapeReference(JoltShapedObject3D*, JoltShape3D*) */void JoltShapeInstance3D::ShapeReference::ShapeReference(ShapeReference *this, JoltShapedObject3D *param_1, JoltShape3D *param_2) {
   *(JoltShapedObject3D**)this = param_1;
   *(JoltShape3D**)( this + 8 ) = param_2;
   if (param_2 != (JoltShape3D*)0x0) {
      JoltShape3D::add_owner((JoltShapedObject3D*)param_2);
      return;
   }

   return;
}
/* JoltShapeInstance3D::ShapeReference::ShapeReference(JoltShapeInstance3D::ShapeReference const&)
    */void JoltShapeInstance3D::ShapeReference::ShapeReference(ShapeReference *this, ShapeReference *param_1) {
   JoltShapedObject3D *pJVar1;
   pJVar1 = *(JoltShapedObject3D**)( param_1 + 8 );
   *(undefined8*)this = *(undefined8*)param_1;
   *(JoltShapedObject3D**)( this + 8 ) = pJVar1;
   if (pJVar1 != (JoltShapedObject3D*)0x0) {
      JoltShape3D::add_owner(pJVar1);
      return;
   }

   return;
}
/* JoltShapeInstance3D::ShapeReference::~ShapeReference() */void JoltShapeInstance3D::ShapeReference::~ShapeReference(ShapeReference *this) {
   if (*(JoltShapedObject3D**)( this + 8 ) != (JoltShapedObject3D*)0x0) {
      JoltShape3D::remove_owner(*(JoltShapedObject3D**)( this + 8 ));
      return;
   }

   return;
}
/* JoltShapeInstance3D::ShapeReference::TEMPNAMEPLACEHOLDERVALUE(JoltShapeInstance3D::ShapeReference
   const&) */ShapeReference * __thiscall
JoltShapeInstance3D::ShapeReference::operator=(ShapeReference *this,ShapeReference *param_1){
   JoltShapedObject3D *pJVar1;
   if (*(JoltShapedObject3D**)( this + 8 ) != (JoltShapedObject3D*)0x0) {
      JoltShape3D::remove_owner(*(JoltShapedObject3D**)( this + 8 ));
   }

   pJVar1 = *(JoltShapedObject3D**)( param_1 + 8 );
   *(undefined8*)this = *(undefined8*)param_1;
   *(JoltShapedObject3D**)( this + 8 ) = pJVar1;
   if (pJVar1 != (JoltShapedObject3D*)0x0) {
      JoltShape3D::add_owner(pJVar1);
   }

   return this;
}
/* JoltShapeInstance3D::JoltShapeInstance3D(JoltShapedObject3D*, JoltShape3D*, Transform3D const&,
   Vector3 const&, bool) */void JoltShapeInstance3D::JoltShapeInstance3D(JoltShapeInstance3D *this, JoltShapedObject3D *param_1, JoltShape3D *param_2, Transform3D *param_3, Vector3 *param_4, bool param_5) {
   undefined4 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   uVar2 = *(undefined8*)param_3;
   uVar3 = *(undefined8*)( param_3 + 8 );
   uVar4 = *(undefined8*)( param_3 + 0x10 );
   uVar5 = *(undefined8*)( param_3 + 0x18 );
   uVar6 = *(undefined8*)( param_3 + 0x20 );
   uVar7 = *(undefined8*)( param_3 + 0x28 );
   *(undefined8*)( this + 0x30 ) = *(undefined8*)param_4;
   uVar1 = *(undefined4*)( param_4 + 8 );
   *(undefined8*)this = uVar2;
   *(undefined8*)( this + 8 ) = uVar3;
   *(undefined4*)( this + 0x38 ) = uVar1;
   *(JoltShapedObject3D**)( this + 0x40 ) = param_1;
   *(JoltShape3D**)( this + 0x48 ) = param_2;
   *(undefined8*)( this + 0x10 ) = uVar4;
   *(undefined8*)( this + 0x18 ) = uVar5;
   *(undefined8*)( this + 0x20 ) = uVar6;
   *(undefined8*)( this + 0x28 ) = uVar7;
   if (param_2 != (JoltShape3D*)0x0) {
      JoltShape3D::add_owner((JoltShapedObject3D*)param_2);
   }

   *(undefined8*)( this + 0x50 ) = 0;
   this[0x5c] = (JoltShapeInstance3D)param_5;
   *(int*)( this + 0x58 ) = next_id;
   next_id = next_id + 1;
   return;
}
/* JoltShapeInstance3D::get_aabb() const */void JoltShapeInstance3D::get_aabb(void) {
   float fVar1;
   long lVar2;
   Vector3 *pVVar3;
   long lVar4;
   long in_RSI;
   undefined8 *in_RDI;
   long in_FS_OFFSET;
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   undefined8 local_b0;
   float local_a8;
   undefined8 local_a0;
   float local_98;
   float local_90[3];
   undefined8 local_84;
   float local_7c;
   undefined8 local_78;
   float local_70;
   undefined8 local_6c;
   float local_64;
   Vector3 local_58[36];
   float local_34[5];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   pVVar3 = local_58;
   Transform3D::scaled_local(pVVar3);
   ( **(code**)( **(long**)( in_RSI + 0x48 ) + 0x48 ) )(&local_78);
   lVar4 = 0;
   local_a0 = 0;
   local_84 = local_78;
   local_98 = 0.0;
   local_7c = local_70;
   for (int i = 0; i < 3; i++) {
      local_90[i] = 0;
   }

   local_b0 = CONCAT44((float)( (ulong)local_78 >> 0x20 ) + (float)( (ulong)local_6c >> 0x20 ), (float)local_78 + (float)local_6c);
   local_a8 = local_70 + local_64;
   do {
      fVar8 = *(float*)( (long)local_34 + lVar4 );
      lVar2 = 0;
      fVar6 = fVar8;
      do {
         fVar7 = *(float*)( (long)&local_84 + lVar2 ) * *(float*)( pVVar3 + lVar2 );
         fVar5 = *(float*)( pVVar3 + lVar2 ) * *(float*)( (long)&local_b0 + lVar2 );
         fVar1 = fVar7;
         if (fVar7 < fVar5) {
            fVar1 = fVar5;
            fVar5 = fVar7;
         }

         fVar6 = fVar6 + fVar5;
         fVar8 = fVar8 + fVar1;
         lVar2 = lVar2 + 4;
      }
 while ( lVar2 != 0xc );
      *(float*)( (long)local_90 + lVar4 ) = fVar8;
      pVVar3 = pVVar3 + 0xc;
      *(float*)( (long)&local_a0 + lVar4 ) = fVar6;
      lVar4 = lVar4 + 4;
   }
 while ( lVar4 != 0xc );
   *in_RDI = local_a0;
   *(float*)( in_RDI + 1 ) = local_98;
   *(ulong*)( (long)in_RDI + 0xc ) = CONCAT44(SUB84(local_90._0_8_, 4) - (float)( (ulong)local_a0 >> 0x20 ), (float)local_90._0_8_ - (float)local_a0);
   *(float*)( (long)in_RDI + 0x14 ) = local_90[2] - local_98;
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* JoltShapeInstance3D::try_build() */undefined1 JoltShapeInstance3D::try_build(JoltShapeInstance3D *this) {
   long *plVar1;
   long *plVar2;
   undefined1 uVar3;
   long in_FS_OFFSET;
   long *local_30;
   long *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0x5c] != (JoltShapeInstance3D)0x0) {
      uVar3 = 0;
      _err_print_error("try_build", "modules/jolt_physics/shapes/jolt_shape_instance_3d.cpp", 0x56, "Condition \"is_disabled()\" is true. Returning: false", 0, 0);
      goto LAB_001003a2;
   }

   JoltShape3D::try_build();
   if (local_30 == (long*)0x0) {
      plVar2 = *(long**)( this + 0x50 );
      uVar3 = 0;
      if (plVar2 == (long*)0x0) goto LAB_001003a2;
      LOCK();
      plVar1 = plVar2 + 1;
      *(int*)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
         ( **(code**)( *plVar2 + 8 ) )();
      }

      *(undefined8*)( this + 0x50 ) = 0;
      LAB_00100391:if (local_30 == (long*)0x0) goto LAB_001003a2;
   }
 else {
      if (( *(long*)( this + 0x50 ) == 0 ) || ( *(long**)( *(long*)( this + 0x50 ) + 0x20 ) != local_30 )) {
         JoltShape3D::with_user_data((Shape*)&local_28, (ulong)local_30);
         plVar2 = *(long**)( this + 0x50 );
         if (plVar2 == local_28) {
            if (plVar2 != (long*)0x0) {
               LOCK();
               plVar1 = plVar2 + 1;
               *(int*)plVar1 = (int)*plVar1 + -1;
               UNLOCK();
               if ((int)*plVar1 == 0) {
                  ( **(code**)( *plVar2 + 8 ) )();
               }

            }

         }
 else {
            if (plVar2 != (long*)0x0) {
               LOCK();
               plVar1 = plVar2 + 1;
               *(int*)plVar1 = (int)*plVar1 + -1;
               UNLOCK();
               if ((int)*plVar1 == 0) {
                  ( **(code**)( *plVar2 + 8 ) )();
               }

            }

            *(long**)( this + 0x50 ) = local_28;
         }

         uVar3 = 1;
         goto LAB_00100391;
      }

      uVar3 = 1;
   }

   LOCK();
   plVar2 = local_30 + 1;
   *(int*)plVar2 = (int)*plVar2 + -1;
   UNLOCK();
   if ((int)*plVar2 == 0) {
      ( **(code**)( *local_30 + 8 ) )(local_30);
   }

   LAB_001003a2:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
/* JoltShapeInstance3D::ShapeReference::ShapeReference(JoltShapedObject3D*, JoltShape3D*) */void JoltShapeInstance3D::ShapeReference::_GLOBAL__sub_I_ShapeReference(void) {
   if (JPH::DVec3::cTrue == '\0') {
      JPH::DVec3::cTrue = '\x01';
      JPH::DVec3::cTrue = _LC3;
   }

   return;
}

