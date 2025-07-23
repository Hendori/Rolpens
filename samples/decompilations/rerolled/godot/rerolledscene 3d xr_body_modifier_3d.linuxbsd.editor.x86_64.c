/* XRBodyModifier3D::set_body_update(BitField<XRBodyModifier3D::BodyUpdate>) */void XRBodyModifier3D::set_body_update(XRBodyModifier3D *this, undefined8 param_2) {
   *(undefined8*)( this + 0x558 ) = param_2;
   return;
}
/* XRBodyModifier3D::get_body_update() const */undefined8 XRBodyModifier3D::get_body_update(XRBodyModifier3D *this) {
   return *(undefined8*)( this + 0x558 );
}
/* XRBodyModifier3D::get_bone_update() const */undefined4 XRBodyModifier3D::get_bone_update(XRBodyModifier3D *this) {
   return *(undefined4*)( this + 0x560 );
}
/* XRBodyModifier3D::get_body_tracker() const */void XRBodyModifier3D::get_body_tracker(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, (StringName*)( in_RSI + 0x550 ));
   return;
}
/* XRBodyModifier3D::set_body_tracker(StringName const&) */void XRBodyModifier3D::set_body_tracker(XRBodyModifier3D *this, StringName *param_1) {
   StringName::operator =((StringName*)( this + 0x550 ), param_1);
   return;
}
/* XRBodyModifier3D::set_bone_update(XRBodyModifier3D::BoneUpdate) */void XRBodyModifier3D::set_bone_update(XRBodyModifier3D *this, uint param_2) {
   if (param_2 < 2) {
      *(uint*)( this + 0x560 ) = param_2;
      return;
   }

   _err_print_index_error("set_bone_update", "scene/3d/xr_body_modifier_3d.cpp", 0x4c, (ulong)param_2, 2, "p_bone_update", "BONE_UPDATE_MAX", "", false, false);
   return;
}
/* XRBodyModifier3D::_process_modification() */void XRBodyModifier3D::_process_modification(XRBodyModifier3D *this) {
   Object *pOVar1;
   char cVar2;
   long lVar3;
   long lVar4;
   Transform3D *pTVar5;
   Transform3D *pTVar6;
   ulong uVar7;
   long lVar8;
   ulong uVar9;
   long in_FS_OFFSET;
   float fVar10;
   undefined1 auVar11[16];
   Object *local_1de0;
   undefined8 local_1d98;
   undefined8 uStack_1d90;
   undefined8 local_1d88;
   undefined8 uStack_1d80;
   undefined8 local_1d78;
   undefined8 uStack_1d70;
   Object *local_1d68;
   Object *local_1d60[3];
   Transform3D local_1d48[48];
   char local_1d18[80];
   Transform3D local_1cc8[8];
   Transform3D aTStack_1cc0[8];
   Transform3D local_1cb8[8];
   Transform3D aTStack_1cb0[8];
   Transform3D local_1ca8[8];
   Transform3D aTStack_1ca0[3608];
   Transform3D local_e88[8];
   undefined8 auStack_e80[455];
   Transform3D local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = SkeletonModifier3D::get_skeleton();
   if (( lVar3 == 0 ) || ( lVar4 = lVar4 == 0 )) goto LAB_00100240;
   XRServer::get_tracker((StringName*)local_1d60);
   local_1d68 = (Object*)0x0;
   if (local_1d60[0] == (Object*)0x0) goto LAB_00100240;
   local_1de0 = (Object*)__dynamic_cast(local_1d60[0], &Object::typeinfo, &XRBodyTracker::typeinfo, 0);
   if (local_1de0 == (Object*)0x0) {
      LAB_001001f5:cVar2 = RefCounted::unreference();
      local_1de0 = local_1d68;
      pOVar1 = local_1d60[0];
      joined_r0x001001ff:local_1d68 = local_1de0;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(pOVar1);
         local_1de0 = local_1d68;
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

      if (local_1de0 == (Object*)0x0) goto LAB_00100240;
   }
 else {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
         local_1d68 = (Object*)0x0;
         if (local_1d60[0] == (Object*)0x0) goto LAB_00100240;
         goto LAB_001001f5;
      }

      local_1d68 = local_1de0;
      if (local_1d60[0] != (Object*)0x0) {
         cVar2 = RefCounted::unreference();
         local_1de0 = local_1d68;
         pOVar1 = local_1d60[0];
         goto joined_r0x001001ff;
      }

   }

   cVar2 = XRBodyTracker::get_has_tracking_data();
   if (cVar2 != '\0') {
      fVar10 = (float)Skeleton3D::get_motion_scale();
      auVar11 = ZEXT416(_LC9);
      pTVar6 = local_1cc8;
      do {
         *(undefined8*)( pTVar6 + 0x24 ) = 0;
         pTVar5 = pTVar6 + 0x30;
         *(undefined1(*) [16])pTVar6 = auVar11;
         *(undefined1(*) [16])( pTVar6 + 0x10 ) = auVar11;
         *(uint*)&pTVar6[0x20].field_0x0 = _LC9;
         *(undefined4*)( pTVar6 + 0x2c ) = 0;
         pTVar6 = pTVar5;
      }
 while ( pTVar5 != local_e88 );
      pTVar6 = local_e88;
      do {
         *(undefined8*)( pTVar6 + 0x24 ) = 0;
         pTVar5 = pTVar6 + 0x30;
         *(undefined1(*) [16])pTVar6 = auVar11;
         *(undefined1(*) [16])( pTVar6 + 0x10 ) = auVar11;
         *(uint*)&pTVar6[0x20].field_0x0 = _LC9;
         *(undefined4*)( pTVar6 + 0x2c ) = 0;
         pTVar6 = pTVar5;
      }
 while ( pTVar5 != local_48 );
      uVar9 = 0;
      pTVar6 = local_1cc8;
      do {
         while (true) {
            uVar7 = XRBodyTracker::get_joint_flags(local_1de0);
            if (( ~uVar7 & 5 ) != 0) break;
            lVar4 = (long)(int)uVar9;
            uVar7 = uVar9 & 0xffffffff;
            local_1d18[uVar9] = '\x01';
            uVar9 = uVar9 + 1;
            lVar8 = lVar4 * 0x30;
            XRBodyTracker::get_joint_transform(&local_1d98, local_1de0, uVar7);
            *(undefined8*)( local_1cc8 + lVar4 * 0x30 ) = local_1d98;
            *(undefined8*)( local_1cc8 + lVar8 + 8 ) = uStack_1d90;
            *(undefined8*)( local_1cc8 + lVar8 + 0x10 ) = local_1d88;
            *(undefined8*)( local_1cc8 + lVar8 + 0x18 ) = uStack_1d80;
            *(undefined8*)( local_1cc8 + lVar8 + 0x20 ) = local_1d78;
            *(undefined8*)( local_1cc8 + lVar8 + 0x28 ) = uStack_1d70;
            *(float*)( pTVar6 + 0x2c ) = fVar10 * *(float*)( pTVar6 + 0x2c );
            *(ulong*)( pTVar6 + 0x24 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( pTVar6 + 0x24 ) >> 0x20 ) * fVar10, (float)*(undefined8*)( pTVar6 + 0x24 ) * fVar10);
            Transform3D::inverse();
            *(undefined8*)( local_e88 + lVar8 ) = local_1d98;
            auStack_e80[lVar4 * 6] = uStack_1d90;
            auStack_e80[lVar4 * 6 + 1] = local_1d88;
            auStack_e80[lVar4 * 6 + 2] = uStack_1d80;
            auStack_e80[lVar4 * 6 + 3] = local_1d78;
            auStack_e80[lVar4 * 6 + 4] = uStack_1d70;
            pTVar6 = pTVar6 + 0x30;
            if (uVar9 == 0x4c) goto LAB_00100469;
         }
;
         local_1d18[uVar9] = '\0';
         uVar9 = uVar9 + 1;
         pTVar6 = pTVar6 + 0x30;
      }
 while ( uVar9 != 0x4c );
      LAB_00100469:if (local_1d18[0] != '\0') {
         lVar4 = 0;
         do {
            if (( local_1d18[lVar4] != '\0' ) && ( *(int*)( this + lVar4 * 8 + 0x564 ) != -1 )) {
               Transform3D::operator *(local_1d48, local_e88 + (long)*(int*)( this + lVar4 * 8 + 0x568 ) * 0x30);
               if (( *(int*)( this + 0x560 ) == 0 ) || ( (int)lVar4 == 1 )) {
                  Skeleton3D::set_bone_pose_position((int)lVar3, (Vector3*)( ulong ) * (uint*)( this + lVar4 * 8 + 0x564 ));
               }

               Basis::get_quaternion();
               Skeleton3D::set_bone_pose_rotation((int)lVar3, (Quaternion*)( ulong ) * (uint*)( this + lVar4 * 8 + 0x564 ));
            }

            lVar4 = lVar4 + 1;
         }
 while ( lVar4 != 0x4c );
      }

   }

   cVar2 = RefCounted::unreference();
   if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(local_1de0) ),cVar2 != '\0') {
      ( **(code**)( *(long*)local_1de0 + 0x140 ) )(local_1de0);
      Memory::free_static(local_1de0, false);
   }

   LAB_00100240:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* XRBodyModifier3D::_get_joint_data() */void XRBodyModifier3D::_get_joint_data(XRBodyModifier3D *this) {
   long *plVar1;
   int iVar2;
   int iVar3;
   XRBodyModifier3D *pXVar4;
   XRBodyModifier3D *pXVar5;
   String *pSVar6;
   ulong uVar7;
   long lVar8;
   uint uVar9;
   long lVar10;
   uint uVar11;
   uint uVar12;
   long *plVar13;
   int *piVar14;
   XRBodyModifier3D *pXVar15;
   long in_FS_OFFSET;
   bool bVar16;
   undefined8 local_198;
   long local_190;
   char *local_188;
   undefined8 local_180;
   int local_178[76];
   int local_48[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( _get_joint_data() ) && ( iVar2 = __cxa_guard_acquire(&_get_joint_data(), ::bone_names) ),iVar2 != 0) {
      _get_joint_data()
      String::parse_latin1((String*)&_get_joint_data(), ::bone_names, "Root");
      _DAT_00102a68 = 0;
      String::parse_latin1((String*)&DAT_00102a68, "Hips");
      _DAT_00102a70 = 0;
      String::parse_latin1((String*)&DAT_00102a70, "Spine");
      _DAT_00102a78 = 0;
      String::parse_latin1((String*)&DAT_00102a78, "Chest");
      _DAT_00102a80 = 0;
      String::parse_latin1((String*)&DAT_00102a80, "UpperChest");
      _DAT_00102a88 = 0;
      String::parse_latin1((String*)&DAT_00102a88, "Neck");
      _DAT_00102a90 = 0;
      String::parse_latin1((String*)&DAT_00102a90, "Head");
      _DAT_00102a98 = 0;
      String::parse_latin1((String*)&DAT_00102a98, "HeadTip");
      _DAT_00102aa0 = 0;
      String::parse_latin1((String*)&DAT_00102aa0, "LeftShoulder");
      _DAT_00102aa8 = 0;
      String::parse_latin1((String*)&DAT_00102aa8, "LeftUpperArm");
      _DAT_00102ab0 = 0;
      String::parse_latin1((String*)&DAT_00102ab0, "LeftLowerArm");
      _DAT_00102ab8 = 0;
      String::parse_latin1((String*)&DAT_00102ab8, "RightShoulder");
      _DAT_00102ac0 = 0;
      String::parse_latin1((String*)&DAT_00102ac0, "RightUpperArm");
      _DAT_00102ac8 = 0;
      String::parse_latin1((String*)&DAT_00102ac8, "RightLowerArm");
      _DAT_00102ad0 = 0;
      String::parse_latin1((String*)&DAT_00102ad0, "LeftUpperLeg");
      _DAT_00102ad8 = 0;
      String::parse_latin1((String*)&DAT_00102ad8, "LeftLowerLeg");
      _DAT_00102ae0 = 0;
      String::parse_latin1((String*)&DAT_00102ae0, "LeftFoot");
      _DAT_00102ae8 = 0;
      String::parse_latin1((String*)&DAT_00102ae8, "LeftToes");
      _DAT_00102af0 = 0;
      String::parse_latin1((String*)&DAT_00102af0, "RightUpperLeg");
      _DAT_00102af8 = 0;
      String::parse_latin1((String*)&DAT_00102af8, "RightLowerLeg");
      _DAT_00102b00 = 0;
      String::parse_latin1((String*)&DAT_00102b00, "RightFoot");
      _DAT_00102b08 = 0;
      String::parse_latin1((String*)&DAT_00102b08, "RightToes");
      _DAT_00102b10 = 0;
      String::parse_latin1((String*)&DAT_00102b10, "LeftHand");
      _DAT_00102b18 = 0;
      String::parse_latin1((String*)&DAT_00102b18, "LeftPalm");
      _DAT_00102b20 = 0;
      String::parse_latin1((String*)&DAT_00102b20, "LeftWrist");
      _DAT_00102b28 = 0;
      String::parse_latin1((String*)&DAT_00102b28, "LeftThumbMetacarpal");
      _DAT_00102b30 = 0;
      String::parse_latin1((String*)&DAT_00102b30, "LeftThumbProximal");
      _DAT_00102b38 = 0;
      String::parse_latin1((String*)&DAT_00102b38, "LeftThumbDistal");
      _DAT_00102b40 = 0;
      String::parse_latin1((String*)&DAT_00102b40, "LeftThumbTip");
      _DAT_00102b48 = 0;
      String::parse_latin1((String*)&DAT_00102b48, "LeftIndexMetacarpal");
      _DAT_00102b50 = 0;
      String::parse_latin1((String*)&DAT_00102b50, "LeftIndexProximal");
      _DAT_00102b58 = 0;
      String::parse_latin1((String*)&DAT_00102b58, "LeftIndexIntermediate");
      _DAT_00102b60 = 0;
      String::parse_latin1((String*)&DAT_00102b60, "LeftIndexDistal");
      _DAT_00102b68 = 0;
      String::parse_latin1((String*)&DAT_00102b68, "LeftIndexTip");
      _DAT_00102b70 = 0;
      String::parse_latin1((String*)&DAT_00102b70, "LeftMiddleMetacarpal");
      _DAT_00102b78 = 0;
      String::parse_latin1((String*)&DAT_00102b78, "LeftMiddleProximal");
      _DAT_00102b80 = 0;
      String::parse_latin1((String*)&DAT_00102b80, "LeftMiddleIntermediate");
      _DAT_00102b88 = 0;
      String::parse_latin1((String*)&DAT_00102b88, "LeftMiddleDistal");
      _DAT_00102b90 = 0;
      String::parse_latin1((String*)&DAT_00102b90, "LeftMiddleTip");
      _DAT_00102b98 = 0;
      String::parse_latin1((String*)&DAT_00102b98, "LeftRingMetacarpal");
      _DAT_00102ba0 = 0;
      String::parse_latin1((String*)&DAT_00102ba0, "LeftRingProximal");
      _DAT_00102ba8 = 0;
      String::parse_latin1((String*)&DAT_00102ba8, "LeftRingIntermediate");
      _DAT_00102bb0 = 0;
      String::parse_latin1((String*)&DAT_00102bb0, "LeftRingDistal");
      _DAT_00102bb8 = 0;
      String::parse_latin1((String*)&DAT_00102bb8, "LeftRingTip");
      _DAT_00102bc0 = 0;
      String::parse_latin1((String*)&DAT_00102bc0, "LeftLittleMetacarpal");
      _DAT_00102bc8 = 0;
      String::parse_latin1((String*)&DAT_00102bc8, "LeftLittleProximal");
      _DAT_00102bd0 = 0;
      String::parse_latin1((String*)&DAT_00102bd0, "LeftLittleIntermediate");
      _DAT_00102bd8 = 0;
      String::parse_latin1((String*)&DAT_00102bd8, "LeftLittleDistal");
      _DAT_00102be0 = 0;
      String::parse_latin1((String*)&DAT_00102be0, "LeftLittleTip");
      _DAT_00102be8 = 0;
      String::parse_latin1((String*)&DAT_00102be8, "RightHand");
      _DAT_00102bf0 = 0;
      String::parse_latin1((String*)&DAT_00102bf0, "RightPalm");
      _DAT_00102bf8 = 0;
      String::parse_latin1((String*)&DAT_00102bf8, "RightWrist");
      _DAT_00102c00 = 0;
      String::parse_latin1((String*)&DAT_00102c00, "RightThumbMetacarpal");
      _DAT_00102c08 = 0;
      String::parse_latin1((String*)&DAT_00102c08, "RightThumbProximal");
      _DAT_00102c10 = 0;
      String::parse_latin1((String*)&DAT_00102c10, "RightThumbDistal");
      _DAT_00102c18 = 0;
      String::parse_latin1((String*)&DAT_00102c18, "RightThumbTip");
      _DAT_00102c20 = 0;
      String::parse_latin1((String*)&DAT_00102c20, "RightIndexMetacarpal");
      _DAT_00102c28 = 0;
      String::parse_latin1((String*)&DAT_00102c28, "RightIndexProximal");
      _DAT_00102c30 = 0;
      String::parse_latin1((String*)&DAT_00102c30, "RightIndexIntermediate");
      _DAT_00102c38 = 0;
      String::parse_latin1((String*)&DAT_00102c38, "RightIndexDistal");
      _DAT_00102c40 = 0;
      String::parse_latin1((String*)&DAT_00102c40, "RightIndexTip");
      _DAT_00102c48 = 0;
      String::parse_latin1((String*)&DAT_00102c48, "RightMiddleMetacarpal");
      _DAT_00102c50 = 0;
      String::parse_latin1((String*)&DAT_00102c50, "RightMiddleProximal");
      _DAT_00102c58 = 0;
      String::parse_latin1((String*)&DAT_00102c58, "RightMiddleIntermediate");
      _DAT_00102c60 = 0;
      String::parse_latin1((String*)&DAT_00102c60, "RightMiddleDistal");
      _DAT_00102c68 = 0;
      String::parse_latin1((String*)&DAT_00102c68, "RightMiddleTip");
      _DAT_00102c70 = 0;
      String::parse_latin1((String*)&DAT_00102c70, "RightRingMetacarpal");
      _DAT_00102c78 = 0;
      String::parse_latin1((String*)&DAT_00102c78, "RightRingProximal");
      _DAT_00102c80 = 0;
      String::parse_latin1((String*)&DAT_00102c80, "RightRingIntermediate");
      _DAT_00102c88 = 0;
      String::parse_latin1((String*)&DAT_00102c88, "RightRingDistal");
      _DAT_00102c90 = 0;
      String::parse_latin1((String*)&DAT_00102c90, "RightRingTip");
      _DAT_00102c98 = 0;
      String::parse_latin1((String*)&DAT_00102c98, "RightLittleMetacarpal");
      _DAT_00102ca0 = 0;
      String::parse_latin1((String*)&DAT_00102ca0, "RightLittleProximal");
      _DAT_00102ca8 = 0;
      String::parse_latin1((String*)&DAT_00102ca8, "RightLittleIntermediate");
      DAT_00102cb0 = 0;
      String::parse_latin1((String*)&DAT_00102cb0, "RightLittleDistal");
      DAT_00102cb8 = 0;
      String::parse_latin1((String*)&DAT_00102cb8, "RightLittleTip");
      __cxa_atexit(__tcf_0, 0, &__dso_handle);
      __cxa_guard_release(&_get_joint_data(), ::bone_names);
   }

   pXVar15 = this + 0x564;
   pXVar4 = pXVar15;
   do {
      *(int*)pXVar4 = -1;
      for (int i = 0; i < 3; i++) {
         *(int*)( pXVar4 + ( 4*i + 4 ) ) = -1;
      }

      pXVar5 = pXVar4 + 0x20;
      for (int i = 0; i < 4; i++) {
         *(int*)( pXVar4 + ( 4*i + 16 ) ) = -1;
      }

      pXVar4 = pXVar5;
   }
 while ( pXVar5 != this + 0x7c4 );
   pSVar6 = (String*)SkeletonModifier3D::get_skeleton();
   if (pSVar6 != (String*)0x0) {
      uVar12 = 0xffffffea;
      plVar13= &_get_joint_data()::bone_names
      ;
      uVar7 = *(ulong*)( this + 0x558 );
      piVar14 = local_178;
      do {
         if (( uVar7 & 1 ) != 0) goto LAB_00100708;
         uVar9 = uVar12 + 0x15;
         uVar11 = uVar12;
         while (uVar12 = uVar11,0xc < uVar9) {
            LAB_00100708:do {
               uVar11 = uVar12;
               if (( ( uVar7 & 2 ) == 0 ) && ( uVar11 + 8 < 8 )) goto LAB_0010075e;
               if (( uVar7 & 4 ) == 0) {
                  if (uVar11 < 0x36) {
                     *piVar14 = -1;
                     goto LAB_00100792;
                  }

                  iVar2 = Skeleton3D::find_bone(pSVar6);
                  *piVar14 = iVar2;
                  if (iVar2 == -1) goto LAB_00100850;
               }
 else {
                  iVar2 = Skeleton3D::find_bone(pSVar6);
                  *piVar14 = iVar2;
                  if (iVar2 == -1) {
                     LAB_00100850:local_190 = 0;
                     plVar1 = (long*)( *plVar13 + -0x10 );
                     if (*plVar13 != 0) {
                        do {
                           lVar10 = *plVar1;
                           if (lVar10 == 0) goto LAB_00100888;
                           LOCK();
                           lVar8 = *plVar1;
                           bVar16 = lVar10 == lVar8;
                           if (bVar16) {
                              *plVar1 = lVar10 + 1;
                              lVar8 = lVar10;
                           }

                           UNLOCK();
                        }
 while ( !bVar16 );
                        if (lVar8 != -1) {
                           local_190 = *plVar13;
                        }

                     }

                     LAB_00100888:local_198 = 0;
                     local_188 = "Couldn\'t obtain bone for %s";
                     local_180 = 0x1b;
                     String::parse_latin1((StrRange*)&local_198);
                     vformat<String>((CowData<char32_t>*)&local_188, (StrRange*)&local_198, (CowData<char32_t>*)&local_190);
                     _err_print_error("_get_joint_data", "scene/3d/xr_body_modifier_3d.cpp", 0xd0, (CowData<char32_t>*)&local_188, 0, 1);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
                  }

                  LAB_00100792:if (uVar11 == 0x35) {
                     piVar14 = local_178;
                     goto LAB_001007b0;
                  }

               }

               piVar14 = piVar14 + 1;
               plVar13 = plVar13 + 1;
               uVar7 = *(ulong*)( this + 0x558 );
               uVar12 = uVar11 + 1;
            }
 while ( ( uVar7 & 1 ) != 0 );
            uVar9 = uVar11 + 0x16;
            uVar11 = uVar11 + 1;
         }
;
         LAB_0010075e:*piVar14 = -1;
         plVar13 = plVar13 + 1;
         piVar14 = piVar14 + 1;
         uVar12 = uVar11 + 1;
      }
 while ( true );
   }

   goto LAB_00100800;
   LAB_001007b0:do {
      iVar2 = *piVar14;
      if (iVar2 != -1) {
         iVar3 = Skeleton3D::get_bone_parent((int)pSVar6);
         lVar10 = 0;
         if (iVar3 == -1) {
            *(int*)pXVar15 = iVar2;
            *(int*)( pXVar15 + 4 ) = 0;
         }
 else {
            do {
               if (local_178[lVar10] == iVar3) {
                  *(ulong*)pXVar15 = CONCAT44((int)lVar10, iVar2);
                  break;
               }

               lVar10 = lVar10 + 1;
            }
 while ( lVar10 != 0x4c );
         }

      }

      piVar14 = piVar14 + 1;
      pXVar15 = pXVar15 + 8;
   }
 while ( piVar14 != local_48 );
   LAB_00100800:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* XRBodyModifier3D::_tracker_changed(StringName const&, XRServer::TrackerType) */void XRBodyModifier3D::_tracker_changed(XRBodyModifier3D *param_1, long *param_2) {
   if (*(long*)( param_1 + 0x550 ) != *param_2) {
      return;
   }

   _get_joint_data(param_1);
   return;
}
/* XRBodyModifier3D::_skeleton_changed(Skeleton3D*, Skeleton3D*) */void XRBodyModifier3D::_skeleton_changed(Skeleton3D *param_1, Skeleton3D *param_2) {
   _get_joint_data((XRBodyModifier3D*)param_1);
   return;
}
/* XRBodyModifier3D::_notification(int) */void XRBodyModifier3D::_notification(XRBodyModifier3D *this, int param_1) {
   code *pcVar1;
   long *plVar2;
   XRBodyModifier3D *pXVar3;
   XRBodyModifier3D *pXVar4;
   long in_FS_OFFSET;
   long local_60;
   XRBodyModifier3D local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 10) {
      plVar2 = (long*)XRServer::get_singleton();
      if (plVar2 != (long*)0x0) {
         pcVar1 = *(code**)( *plVar2 + 0x108 );
         create_custom_callable_function_pointer<XRBodyModifier3D,StringName_const&,XRServer::TrackerType>(local_58, (char*)this, (_func_void_StringName_ptr_TrackerType*)"&XRBodyModifier3D::_tracker_changed");
         StringName::StringName((StringName*)&local_60, "tracker_added", false);
         ( *pcVar1 )(plVar2, (StringName*)&local_60, local_58, 0);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         Callable::~Callable((Callable*)local_58);
         pcVar1 = *(code**)( *plVar2 + 0x108 );
         create_custom_callable_function_pointer<XRBodyModifier3D,StringName_const&,XRServer::TrackerType>(local_58, (char*)this, (_func_void_StringName_ptr_TrackerType*)"&XRBodyModifier3D::_tracker_changed");
         StringName::StringName((StringName*)&local_60, "tracker_updated", false);
         ( *pcVar1 )(plVar2, (StringName*)&local_60, local_58, 0);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         Callable::~Callable((Callable*)local_58);
         pcVar1 = *(code**)( *plVar2 + 0x108 );
         create_custom_callable_function_pointer<XRBodyModifier3D,StringName_const&,XRServer::TrackerType>(local_58, (char*)this, (_func_void_StringName_ptr_TrackerType*)"&XRBodyModifier3D::_tracker_changed");
         StringName::StringName((StringName*)&local_60, "tracker_removed", false);
         ( *pcVar1 )(plVar2, (StringName*)&local_60, local_58, 0);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         Callable::~Callable((Callable*)local_58);
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _get_joint_data(this);
         return;
      }

   }
 else {
      if (param_1 == 0xb) {
         plVar2 = (long*)XRServer::get_singleton();
         if (plVar2 != (long*)0x0) {
            pcVar1 = *(code**)( *plVar2 + 0x110 );
            create_custom_callable_function_pointer<XRBodyModifier3D,StringName_const&,XRServer::TrackerType>(local_58, (char*)this, (_func_void_StringName_ptr_TrackerType*)"&XRBodyModifier3D::_tracker_changed");
            StringName::StringName((StringName*)&local_60, "tracker_added", false);
            ( *pcVar1 )(plVar2, (StringName*)&local_60, local_58);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            Callable::~Callable((Callable*)local_58);
            pcVar1 = *(code**)( *plVar2 + 0x110 );
            create_custom_callable_function_pointer<XRBodyModifier3D,StringName_const&,XRServer::TrackerType>(local_58, (char*)this, (_func_void_StringName_ptr_TrackerType*)"&XRBodyModifier3D::_tracker_changed");
            StringName::StringName((StringName*)&local_60, "tracker_updated", false);
            ( *pcVar1 )(plVar2, (StringName*)&local_60, local_58);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            Callable::~Callable((Callable*)local_58);
            pcVar1 = *(code**)( *plVar2 + 0x110 );
            create_custom_callable_function_pointer<XRBodyModifier3D,StringName_const&,XRServer::TrackerType>(local_58, (char*)this, (_func_void_StringName_ptr_TrackerType*)"&XRBodyModifier3D::_tracker_changed");
            StringName::StringName((StringName*)&local_60, "tracker_removed", false);
            ( *pcVar1 )(plVar2, (StringName*)&local_60, local_58);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            Callable::~Callable((Callable*)local_58);
         }

         pXVar3 = this + 0x564;
         do {
            *(undefined4*)pXVar3 = 0xffffffff;
            for (int i = 0; i < 3; i++) {
               *(undefined4*)( pXVar3 + ( 4*i + 4 ) ) = 4294967295;
            }

            pXVar4 = pXVar3 + 0x20;
            for (int i = 0; i < 4; i++) {
               *(undefined4*)( pXVar3 + ( 4*i + 16 ) ) = 4294967295;
            }

            pXVar3 = pXVar4;
         }
 while ( pXVar4 != this + 0x7c4 );
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* XRBodyModifier3D::_bind_methods() */void XRBodyModifier3D::_bind_methods(void) {
   long lVar1;
   code *pcVar2;
   long *plVar3;
   MethodBind *pMVar4;
   uint uVar5;
   long lVar6;
   long *plVar7;
   long in_FS_OFFSET;
   undefined8 local_d0;
   long local_c8;
   long local_c0;
   long local_b8;
   long local_b0;
   long local_a8;
   long local_a0;
   undefined4 local_98;
   undefined4 uStack_94;
   undefined8 local_90;
   long *local_88;
   int local_80;
   undefined8 local_78;
   undefined4 local_70;
   char *local_68;
   undefined8 local_60;
   char **local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = 0;
   local_68 = "tracker_name";
   uVar5 = ( uint ) & local_58;
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)"set_body_tracker", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<XRBodyModifier3D,StringName_const&>(set_body_tracker);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar7 = local_88 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar6 = 0;
         local_88 = (long*)0x0;
         plVar7 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar6 = lVar6 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar1 != lVar6 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_94, local_98) != 0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_98, (char***)"get_body_tracker", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<XRBodyModifier3D,StringName>(get_body_tracker);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar7 = local_88 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar6 = 0;
         local_88 = (long*)0x0;
         plVar7 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar6 = lVar6 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar1 != lVar6 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_94, local_98) != 0 )) {
      StringName::unref();
   }

   local_68 = "body_update";
   local_60 = 0;
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)"set_body_update", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<XRBodyModifier3D,BitField<XRBodyModifier3D::BodyUpdate>>(set_body_update);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar7 = local_88 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar6 = 0;
         local_88 = (long*)0x0;
         plVar7 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar6 = lVar6 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar1 != lVar6 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_94, local_98) != 0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_98, (char***)"get_body_update", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<XRBodyModifier3D,BitField<XRBodyModifier3D::BodyUpdate>>(get_body_update);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar7 = local_88 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar6 = 0;
         local_88 = (long*)0x0;
         plVar7 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar6 = lVar6 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar1 != lVar6 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_94, local_98) != 0 )) {
      StringName::unref();
   }

   local_68 = "bone_update";
   local_60 = 0;
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)"set_bone_update", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<XRBodyModifier3D,XRBodyModifier3D::BoneUpdate>(set_bone_update);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar7 = local_88 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar6 = 0;
         local_88 = (long*)0x0;
         plVar7 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar6 = lVar6 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar1 != lVar6 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_94, local_98) != 0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_98, (char***)"get_bone_update", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<XRBodyModifier3D,XRBodyModifier3D::BoneUpdate>(get_bone_update);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar7 = local_88 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar6 = 0;
         local_88 = (long*)0x0;
         plVar7 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar6 = lVar6 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar1 != lVar6 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_94, local_98) != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_a8, true);
   _scs_create((char*)&local_b0, true);
   local_b8 = 0;
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "/user/body_tracker");
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "body_tracker");
   local_98 = 4;
   local_90 = 0;
   if (local_c8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_90, (CowData*)&local_c8);
   }

   local_88 = (long*)0x0;
   local_80 = 3;
   local_78 = 0;
   if (local_c0 == 0) {
      LAB_00101de3:local_70 = 6;
      StringName::operator =((StringName*)&local_88, (StringName*)&local_b8);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)&local_c0);
      local_70 = 6;
      if (local_80 != 0x11) goto LAB_00101de3;
      StringName::StringName((StringName*)&local_a0, (String*)&local_78, false);
      if (local_88 == (long*)local_a0) {
         if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_88 = (long*)local_a0;
      }

   }

   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "XRBodyModifier3D");
   StringName::StringName((StringName*)&local_a0, (String*)&local_d0, false);
   ClassDB::add_property((StringName*)&local_a0, (PropertyInfo*)&local_98, (StringName*)&local_b0, (StringName*)&local_a8, -1);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_88 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_b8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_b0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_a8 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_a8, true);
   _scs_create((char*)&local_b0, true);
   local_b8 = 0;
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "Upper Body,Lower Body,Hands");
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "body_update");
   local_98 = 2;
   local_90 = 0;
   if (local_c8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_90, (CowData*)&local_c8);
   }

   local_88 = (long*)0x0;
   local_80 = 6;
   local_78 = 0;
   if (local_c0 == 0) {
      LAB_00101ffb:local_70 = 6;
      StringName::operator =((StringName*)&local_88, (StringName*)&local_b8);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)&local_c0);
      local_70 = 6;
      if (local_80 != 0x11) goto LAB_00101ffb;
      StringName::StringName((StringName*)&local_a0, (String*)&local_78, false);
      if (local_88 == (long*)local_a0) {
         if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_88 = (long*)local_a0;
      }

   }

   local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "XRBodyModifier3D");
   StringName::StringName((StringName*)&local_a0, (String*)&local_d0, false);
   ClassDB::add_property((StringName*)&local_a0, (PropertyInfo*)&local_98, (StringName*)&local_b0, (StringName*)&local_a8, -1);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_88 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_b8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_b0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_a8 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_a8, true);
   _scs_create((char*)&local_b0, true);
   local_b8 = 0;
   local_c0 = 0;
   String::parse_latin1((String*)&local_c0, "Full,Rotation Only");
   local_c8 = 0;
   String::parse_latin1((String*)&local_c8, "bone_update");
   local_98 = 2;
   local_90 = 0;
   if (local_c8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_90, (CowData*)&local_c8);
   }

   local_88 = (long*)0x0;
   local_80 = 2;
   local_78 = 0;
   if (local_c0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)&local_c0);
      local_70 = 6;
      if (local_80 == 0x11) {
         StringName::StringName((StringName*)&local_a0, (String*)&local_78, false);
         if (local_88 == (long*)local_a0) {
            if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_88 = (long*)local_a0;
         }

         goto LAB_00102210;
      }

   }

   local_70 = 6;
   StringName::operator =((StringName*)&local_88, (StringName*)&local_b8);
   LAB_00102210:local_d0 = 0;
   String::parse_latin1((String*)&local_d0, "XRBodyModifier3D");
   StringName::StringName((StringName*)&local_a0, (String*)&local_d0, false);
   ClassDB::add_property((StringName*)&local_a0, (PropertyInfo*)&local_98, (StringName*)&local_b0, (StringName*)&local_a8, -1);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_88 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_b8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_b0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_a8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_a0, "BODY_UPDATE_UPPER_BODY", false);
   local_b0 = 0;
   String::parse_latin1((String*)&local_b0, "BODY_UPDATE_UPPER_BODY");
   GetTypeInfo<BitField<XRBodyModifier3D::BodyUpdate>,void>::get_class_info((GetTypeInfo<BitField<XRBodyModifier3D::BodyUpdate>,void>*)&local_98);
   local_a8 = (long)local_88;
   local_88 = (long*)0x0;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_88 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   local_b8 = 0;
   String::parse_latin1((String*)&local_b8, "XRBodyModifier3D");
   StringName::StringName((StringName*)&local_98, (String*)&local_b8, false);
   ClassDB::bind_integer_constant((StringName*)&local_98, (StringName*)&local_a8, (StringName*)&local_a0, 1, true);
   if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_94, local_98) != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_a0, "BODY_UPDATE_LOWER_BODY", false);
   local_b0 = 0;
   String::parse_latin1((String*)&local_b0, "BODY_UPDATE_LOWER_BODY");
   GetTypeInfo<BitField<XRBodyModifier3D::BodyUpdate>,void>::get_class_info((GetTypeInfo<BitField<XRBodyModifier3D::BodyUpdate>,void>*)&local_98);
   local_a8 = (long)local_88;
   local_88 = (long*)0x0;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_88 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   local_b8 = 0;
   String::parse_latin1((String*)&local_b8, "XRBodyModifier3D");
   StringName::StringName((StringName*)&local_98, (String*)&local_b8, false);
   ClassDB::bind_integer_constant((StringName*)&local_98, (StringName*)&local_a8, (StringName*)&local_a0, 2, true);
   if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_94, local_98) != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_a0, "BODY_UPDATE_HANDS", false);
   local_b0 = 0;
   String::parse_latin1((String*)&local_b0, "BODY_UPDATE_HANDS");
   GetTypeInfo<BitField<XRBodyModifier3D::BodyUpdate>,void>::get_class_info((GetTypeInfo<BitField<XRBodyModifier3D::BodyUpdate>,void>*)&local_98);
   local_a8 = (long)local_88;
   local_88 = (long*)0x0;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_88 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   local_b8 = 0;
   String::parse_latin1((String*)&local_b8, "XRBodyModifier3D");
   StringName::StringName((StringName*)&local_98, (String*)&local_b8, false);
   ClassDB::bind_integer_constant((StringName*)&local_98, (StringName*)&local_a8, (StringName*)&local_a0, 4, true);
   if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_94, local_98) != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_a0, "BONE_UPDATE_FULL", false);
   local_b0 = 0;
   String::parse_latin1((String*)&local_b0, "BONE_UPDATE_FULL");
   GetTypeInfo<XRBodyModifier3D::BoneUpdate,void>::get_class_info((GetTypeInfo<XRBodyModifier3D::BoneUpdate,void>*)&local_98);
   local_a8 = (long)local_88;
   local_88 = (long*)0x0;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_88 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   local_b8 = 0;
   String::parse_latin1((String*)&local_b8, "XRBodyModifier3D");
   StringName::StringName((StringName*)&local_98, (String*)&local_b8, false);
   ClassDB::bind_integer_constant((StringName*)&local_98, (StringName*)&local_a8, (StringName*)&local_a0, 0, false);
   if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_94, local_98) != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_a0, "BONE_UPDATE_ROTATION_ONLY", false);
   local_b0 = 0;
   String::parse_latin1((String*)&local_b0, "BONE_UPDATE_ROTATION_ONLY");
   GetTypeInfo<XRBodyModifier3D::BoneUpdate,void>::get_class_info((GetTypeInfo<XRBodyModifier3D::BoneUpdate,void>*)&local_98);
   local_a8 = (long)local_88;
   local_88 = (long*)0x0;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_88 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   local_b8 = 0;
   String::parse_latin1((String*)&local_b8, "XRBodyModifier3D");
   StringName::StringName((StringName*)&local_98, (String*)&local_b8, false);
   ClassDB::bind_integer_constant((StringName*)&local_98, (StringName*)&local_a8, (StringName*)&local_a0, 1, false);
   if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_94, local_98) != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_a0, "BONE_UPDATE_MAX", false);
   local_b0 = 0;
   String::parse_latin1((String*)&local_b0, "BONE_UPDATE_MAX");
   GetTypeInfo<XRBodyModifier3D::BoneUpdate,void>::get_class_info((GetTypeInfo<XRBodyModifier3D::BoneUpdate,void>*)&local_98);
   local_a8 = (long)local_88;
   local_88 = (long*)0x0;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_88 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   local_b8 = 0;
   String::parse_latin1((String*)&local_b8, "XRBodyModifier3D");
   StringName::StringName((StringName*)&local_98, (String*)&local_b8, false);
   ClassDB::bind_integer_constant((StringName*)&local_98, (StringName*)&local_a8, (StringName*)&local_a0, 2, false);
   if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_94, local_98) != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
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
/* SkeletonModifier3D::has_process() const */undefined8 SkeletonModifier3D::has_process(void) {
   return 0;
}
/* SkeletonModifier3D::is_processed_on_saving() const */undefined8 SkeletonModifier3D::is_processed_on_saving(void) {
   return 0;
}
/* XRBodyModifier3D::is_class_ptr(void*) const */uint XRBodyModifier3D::is_class_ptr(XRBodyModifier3D *this, void *param_1) {
   return (uint)CONCAT71(0x10a8, (undefined4*)param_1 == &SkeletonModifier3D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10a8, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10a8, (undefined4*)param_1 == &Node3D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10a8, (undefined4*)param_1 == &Node::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10a8, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* XRBodyModifier3D::_getv(StringName const&, Variant&) const */undefined8 XRBodyModifier3D::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* XRBodyModifier3D::_setv(StringName const&, Variant const&) */undefined8 XRBodyModifier3D::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* CallableCustomMethodPointer<XRBodyModifier3D, void, StringName const&,
   XRServer::TrackerType>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<XRBodyModifier3D,void,StringName_const&,XRServer::TrackerType>::~CallableCustomMethodPointer(CallableCustomMethodPointer<XRBodyModifier3D,void,StringName_const&,XRServer::TrackerType> *this) {
   return;
}
/* MethodBindTRC<XRBodyModifier3D::BoneUpdate>::_gen_argument_type(int) const */undefined8 MethodBindTRC<XRBodyModifier3D::BoneUpdate>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<XRBodyModifier3D::BoneUpdate>::get_argument_meta(int) const */undefined8 MethodBindTRC<XRBodyModifier3D::BoneUpdate>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<XRBodyModifier3D::BoneUpdate>::_gen_argument_type(int) const */char MethodBindT<XRBodyModifier3D::BoneUpdate>::_gen_argument_type(MethodBindT<XRBodyModifier3D::BoneUpdate> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<XRBodyModifier3D::BoneUpdate>::get_argument_meta(int) const */undefined8 MethodBindT<XRBodyModifier3D::BoneUpdate>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<BitField<XRBodyModifier3D::BodyUpdate>>::_gen_argument_type(int) const */undefined8 MethodBindTRC<BitField<XRBodyModifier3D::BodyUpdate>>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<BitField<XRBodyModifier3D::BodyUpdate>>::get_argument_meta(int) const */undefined8 MethodBindTRC<BitField<XRBodyModifier3D::BodyUpdate>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<BitField<XRBodyModifier3D::BodyUpdate> >::_gen_argument_type(int) const */char MethodBindT<BitField<XRBodyModifier3D::BodyUpdate>>::_gen_argument_type(MethodBindT<BitField<XRBodyModifier3D::BodyUpdate>> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<BitField<XRBodyModifier3D::BodyUpdate> >::get_argument_meta(int) const */undefined8 MethodBindT<BitField<XRBodyModifier3D::BodyUpdate>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<StringName>::_gen_argument_type(int) const */undefined8 MethodBindTRC<StringName>::_gen_argument_type(int param_1) {
   return 0x15;
}
/* MethodBindTRC<StringName>::get_argument_meta(int) const */undefined8 MethodBindTRC<StringName>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<StringName const&>::_gen_argument_type(int) const */byte MethodBindT<StringName_const&>::_gen_argument_type(MethodBindT<StringName_const&> *this, int param_1) {
   return -(param_1 == 0) & 0x15;
}
/* MethodBindT<StringName const&>::get_argument_meta(int) const */undefined8 MethodBindT<StringName_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* CallableCustomMethodPointer<XRBodyModifier3D, void, StringName const&,
   XRServer::TrackerType>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<XRBodyModifier3D,void,StringName_const&,XRServer::TrackerType>::get_argument_count(CallableCustomMethodPointer<XRBodyModifier3D,void,StringName_const&,XRServer::TrackerType> *this, bool *param_1) {
   *param_1 = true;
   return 2;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* CallableCustomMethodPointer<XRBodyModifier3D, void, StringName const&,
   XRServer::TrackerType>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<XRBodyModifier3D,void,StringName_const&,XRServer::TrackerType>::~CallableCustomMethodPointer(CallableCustomMethodPointer<XRBodyModifier3D,void,StringName_const&,XRServer::TrackerType> *this) {
   operator_delete(this, 0x48);
   return;
}
/* MethodBindT<StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010a640;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010a640;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<StringName>::~MethodBindTRC() */void MethodBindTRC<StringName>::~MethodBindTRC(MethodBindTRC<StringName> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010a6a0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<StringName>::~MethodBindTRC() */void MethodBindTRC<StringName>::~MethodBindTRC(MethodBindTRC<StringName> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010a6a0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<BitField<XRBodyModifier3D::BodyUpdate> >::~MethodBindT() */void MethodBindT<BitField<XRBodyModifier3D::BodyUpdate>>::~MethodBindT(MethodBindT<BitField<XRBodyModifier3D::BodyUpdate>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010a700;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<BitField<XRBodyModifier3D::BodyUpdate> >::~MethodBindT() */void MethodBindT<BitField<XRBodyModifier3D::BodyUpdate>>::~MethodBindT(MethodBindT<BitField<XRBodyModifier3D::BodyUpdate>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010a700;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<BitField<XRBodyModifier3D::BodyUpdate>>::~MethodBindTRC() */void MethodBindTRC<BitField<XRBodyModifier3D::BodyUpdate>>::~MethodBindTRC(MethodBindTRC<BitField<XRBodyModifier3D::BodyUpdate>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010a760;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<BitField<XRBodyModifier3D::BodyUpdate>>::~MethodBindTRC() */void MethodBindTRC<BitField<XRBodyModifier3D::BodyUpdate>>::~MethodBindTRC(MethodBindTRC<BitField<XRBodyModifier3D::BodyUpdate>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010a760;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<XRBodyModifier3D::BoneUpdate>::~MethodBindT() */void MethodBindT<XRBodyModifier3D::BoneUpdate>::~MethodBindT(MethodBindT<XRBodyModifier3D::BoneUpdate> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010a7c0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<XRBodyModifier3D::BoneUpdate>::~MethodBindT() */void MethodBindT<XRBodyModifier3D::BoneUpdate>::~MethodBindT(MethodBindT<XRBodyModifier3D::BoneUpdate> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010a7c0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<XRBodyModifier3D::BoneUpdate>::~MethodBindTRC() */void MethodBindTRC<XRBodyModifier3D::BoneUpdate>::~MethodBindTRC(MethodBindTRC<XRBodyModifier3D::BoneUpdate> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010a820;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<XRBodyModifier3D::BoneUpdate>::~MethodBindTRC() */void MethodBindTRC<XRBodyModifier3D::BoneUpdate>::~MethodBindTRC(MethodBindTRC<XRBodyModifier3D::BoneUpdate> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010a820;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* XRBodyModifier3D::_property_get_revertv(StringName const&, Variant&) const */undefined8 XRBodyModifier3D::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Node3D::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* XRBodyModifier3D::_property_can_revertv(StringName const&) const */undefined8 XRBodyModifier3D::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0010d008 != Object::_property_can_revert) {
      uVar1 = Node3D::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* CallableCustomMethodPointer<XRBodyModifier3D, void, StringName const&,
   XRServer::TrackerType>::get_object() const */undefined8 CallableCustomMethodPointer<XRBodyModifier3D,void,StringName_const&,XRServer::TrackerType>::get_object(CallableCustomMethodPointer<XRBodyModifier3D,void,StringName_const&,XRServer::TrackerType> *this) {
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
         goto LAB_0010394d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010394d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010394d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* XRBodyModifier3D::_validate_propertyv(PropertyInfo&) const */void XRBodyModifier3D::_validate_propertyv(PropertyInfo *param_1) {
   Node::_validate_property(param_1);
   Node3D::_validate_property(param_1);
   if ((code*)PTR__validate_property_0010d010 == Node3D::_validate_property) {
      return;
   }

   SkeletonModifier3D::_validate_property(param_1);
   return;
}
/* XRBodyModifier3D::~XRBodyModifier3D() */void XRBodyModifier3D::~XRBodyModifier3D(XRBodyModifier3D *this) {
   bool bVar1;
   bVar1 = StringName::configured == '\0';
   *(undefined***)this = &PTR__initialize_classv_0010a3a0;
   if (bVar1) {
      *(code**)this = Memory::free_static;
      Node3D::~Node3D((Node3D*)this);
      return;
   }

   if (*(long*)( this + 0x550 ) == 0) {
      *(code**)this = Memory::free_static;
   }
 else {
      StringName::unref();
      bVar1 = StringName::configured == '\0';
      *(code**)this = Memory::free_static;
      if (bVar1) goto LAB_00103a9a;
   }

   if (*(long*)( this + 0x538 ) != 0) {
      StringName::unref();
   }

   LAB_00103a9a:Node3D::~Node3D((Node3D*)this);
   return;
}
/* XRBodyModifier3D::~XRBodyModifier3D() */void XRBodyModifier3D::~XRBodyModifier3D(XRBodyModifier3D *this) {
   bool bVar1;
   bVar1 = StringName::configured == '\0';
   *(undefined***)this = &PTR__initialize_classv_0010a3a0;
   if (bVar1) {
      *(code**)this = Memory::free_static;
   }
 else {
      if (*(long*)( this + 0x550 ) == 0) {
         *(code**)this = Memory::free_static;
      }
 else {
         StringName::unref();
         bVar1 = StringName::configured == '\0';
         *(code**)this = Memory::free_static;
         if (bVar1) goto LAB_00103b2a;
      }

      if (*(long*)( this + 0x538 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00103b2a:Node3D::~Node3D((Node3D*)this);
   operator_delete(this, 0x7c8);
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
/* XRBodyModifier3D::_get_class_namev() const */undefined8 *XRBodyModifier3D::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103c13:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103c13;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "XRBodyModifier3D");
         goto LAB_00103c7e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "XRBodyModifier3D");
   LAB_00103c7e:return &_get_class_namev();
}
/* XRBodyModifier3D::get_class() const */void XRBodyModifier3D::get_class(void) {
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
            uVar7 = String::operator ==(param_1, "Object");
            return uVar7;
         }

         LAB_00103f5f:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
                  if (lVar4 == 0) goto LAB_00103e73;
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

      LAB_00103e73:uVar5 = String::operator ==(param_1, (String*)&local_50);
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

         goto LAB_00103f5f;
      }

      lVar2 = *(long*)( lVar2 + 8 );
   }
 while ( true );
}
/* Callable create_custom_callable_function_pointer<XRBodyModifier3D, StringName const&,
   XRServer::TrackerType>(XRBodyModifier3D*, char const*, void (XRBodyModifier3D::*)(StringName
   const&, XRServer::TrackerType)) */XRBodyModifier3D *create_custom_callable_function_pointer<XRBodyModifier3D,StringName_const&,XRServer::TrackerType>(XRBodyModifier3D *param_1, char *param_2, _func_void_StringName_ptr_TrackerType *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC3;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_0010a5b0;
   uVar1 = *(undefined8*)( param_2 + 0x60 );
   *(char**)( this + 0x28 ) = param_2;
   *(undefined8*)( this + 0x30 ) = uVar1;
   *(undefined8*)( this + 0x38 ) = in_RCX;
   *(undefined8*)( this + 0x40 ) = in_R8;
   *(undefined8*)( this + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
   *(_func_void_StringName_ptr_TrackerType**)( this + 0x20 ) = param_3 + 1;
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
/* MethodBindTRC<StringName>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<StringName>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC3;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *puVar1 = 0x15;
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
         StringName::StringName((StringName*)&local_48, (String*)( puVar1 + 8 ), false);
         if (*(undefined**)( puVar1 + 4 ) == local_48) {
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar1 + 4 ) = local_48;
         }

         goto LAB_00104165;
      }

   }

   StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_50);
   LAB_00104165:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
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
/* WARNING: Removing unreachable block (ram,0x00104378) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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
/* WARNING: Removing unreachable block (ram,0x001045c0) *//* XRBodyModifier3D::_notificationv(int, bool) */void XRBodyModifier3D::_notificationv(XRBodyModifier3D *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      _notification(this, param_1);
      if ((code*)PTR__notification_0010d018 != Node3D::_notification) {
         SkeletonModifier3D::_notification(iVar1);
      }

      Node3D::_notification(iVar1);
      Node::_notification(iVar1);
      return;
   }

   Node::_notification(iVar1);
   Node3D::_notification(iVar1);
   if ((code*)PTR__notification_0010d018 != Node3D::_notification) {
      SkeletonModifier3D::_notification(iVar1);
   }

   _notification(this, param_1);
   return;
}
/* godot::details::enum_qualified_name_to_class_info_name(String const&) */details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1){
   long *plVar1;
   long lVar2;
   code *pcVar3;
   long *plVar4;
   long *plVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   undefined8 local_60;
   char local_58[8];
   long *local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   String::split(local_58, SUB81(param_1, 0), 0x104625);
   if (( local_50 != (long*)0x0 ) && ( 2 < local_50[-1] )) {
      local_60 = 0;
      local_48 = &_LC12;
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
            goto LAB_001046fa;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar7, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   local_60 = 0;
   local_48 = &_LC12;
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)this);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   LAB_001046fa:plVar4 = local_50;
   if (local_50 != (long*)0x0) {
      LOCK();
      plVar5 = local_50 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_50 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar7 = local_50[-1];
         local_50 = (long*)0x0;
         if (lVar7 != 0) {
            lVar6 = 0;
            plVar5 = plVar4;
            do {
               if (*plVar5 != 0) {
                  LOCK();
                  plVar1 = (long*)( *plVar5 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar2 = *plVar5;
                     *plVar5 = 0;
                     Memory::free_static((void*)( lVar2 + -0x10 ), false);
                  }

               }

               lVar6 = lVar6 + 1;
               plVar5 = plVar5 + 1;
            }
 while ( lVar7 != lVar6 );
         }

         Memory::free_static(plVar4 + -2, false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<BitField<XRBodyModifier3D::BodyUpdate>, void>::get_class_info() */GetTypeInfo<BitField<XRBodyModifier3D::BodyUpdate>,void> * __thiscall
GetTypeInfo<BitField<XRBodyModifier3D::BodyUpdate>,void>::get_class_info
          (GetTypeInfo<BitField<XRBodyModifier3D::BodyUpdate>,void> *this){
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   details local_50[8];
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   local_48 = "XRBodyModifier3D::BodyUpdate";
   local_40 = 0x1c;
   String::parse_latin1((StrRange*)&local_58);
   godot::details::enum_qualified_name_to_class_info_name(local_50, (String*)&local_58);
   StringName::StringName((StringName*)&local_48, (String*)local_50, false);
   *(undefined4*)this = 2;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x28 ) = 0x206;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   local_60 = 0;
   local_68 = 0;
   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<XRBodyModifier3D::BoneUpdate, void>::get_class_info() */GetTypeInfo<XRBodyModifier3D::BoneUpdate,void> * __thiscall
GetTypeInfo<XRBodyModifier3D::BoneUpdate,void>::get_class_info
          (GetTypeInfo<XRBodyModifier3D::BoneUpdate,void> *this){
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   details local_50[8];
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   local_48 = "XRBodyModifier3D::BoneUpdate";
   local_40 = 0x1c;
   String::parse_latin1((StrRange*)&local_58);
   godot::details::enum_qualified_name_to_class_info_name(local_50, (String*)&local_58);
   StringName::StringName((StringName*)&local_48, (String*)local_50, false);
   *(undefined4*)this = 2;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x28 ) = 0x10006;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   local_60 = 0;
   local_68 = 0;
   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CallableCustomMethodPointer<XRBodyModifier3D, void, StringName const&,
   XRServer::TrackerType>::call(Variant const**, int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<XRBodyModifier3D,void,StringName_const&,XRServer::TrackerType>::call(CallableCustomMethodPointer<XRBodyModifier3D,void,StringName_const&,XRServer::TrackerType> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   char cVar4;
   ulong uVar5;
   uint uVar6;
   ulong *puVar7;
   code *pcVar8;
   long in_FS_OFFSET;
   bool bVar9;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   Variant local_48;
   undefined7 uStack_47;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar6 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_48 = (Variant)0x0;
         LOCK();
         bVar9 = (char)ObjectDB::spin_lock == '\0';
         if (bVar9) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar9) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar7 = (ulong*)( (ulong)uVar6 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) == ( *puVar7 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar7[1] != 0) {
            lVar1 = *(long*)( this + 0x28 );
            pcVar8 = *(code**)( this + 0x38 );
            lVar2 = *(long*)( this + 0x40 );
            if ((uint)param_2 < 3) {
               if (param_2 == 2) {
                  *(undefined4*)param_4 = 0;
                  if (( (ulong)pcVar8 & 1 ) != 0) {
                     pcVar8 = *(code**)( pcVar8 + *(long*)( lVar1 + lVar2 ) + -1 );
                  }

                  cVar4 = Variant::can_convert_strict(*(undefined4*)param_1[1], 2);
                  uVar3 = _LC112;
                  if (cVar4 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar3;
                  }

                  uVar5 = Variant::operator_cast_to_long(param_1[1]);
                  cVar4 = Variant::can_convert_strict(*(undefined4*)*param_1, 0x15);
                  uVar3 = _LC113;
                  if (cVar4 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar3;
                  }

                  Variant::operator_cast_to_StringName(&local_48);
                  ( *pcVar8 )((long*)( lVar1 + lVar2 ), &local_48, uVar5 & 0xffffffff);
                  if (( StringName::configured != '\0' ) && ( CONCAT71(uStack_47, local_48) != 0 )) {
                     StringName::unref();
                  }

               }
 else {
                  *(undefined4*)param_4 = 4;
                  *(undefined4*)( param_4 + 8 ) = 2;
               }

            }
 else {
               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 2;
            }

            goto LAB_00104c45;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   local_50 = 0;
   String::parse_latin1((String*)&local_50, "\', can\'t call method.");
   uitos((ulong)local_60);
   operator+((char *)
   local_58,(String*)"Invalid Object id \'";
   String::operator +((String*)&local_48, (String*)local_58);
   _err_print_error(&_LC111, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", &local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref(local_58);
   CowData<char32_t>::_unref(local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   LAB_00104c45:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* SkeletonModifier3D::is_class(String const&) const */undefined8 SkeletonModifier3D::is_class(SkeletonModifier3D *this, String *param_1) {
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
                  if (lVar3 == 0) goto LAB_00104ebf;
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

      LAB_00104ebf:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00104f73;
   }

   cVar6 = String::operator ==(param_1, "SkeletonModifier3D");
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
               if (*(long*)( lVar5 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar4);
               local_58 = pcVar4;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar6 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar6 != '\0') goto LAB_00104f73;
      }

      cVar6 = String::operator ==(param_1, "Node3D");
      if (cVar6 == '\0') {
         for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            lVar5 = *(long*)( lVar2 + 0x20 );
            if (lVar5 == 0) {
               local_58 = (char*)0x0;
            }
 else {
               local_58 = (char*)0x0;
               if (*(char**)( lVar5 + 8 ) == (char*)0x0) {
                  if (*(long*)( lVar5 + 0x10 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( lVar5 + 0x10 ));
                  }

               }
 else {
                  String::parse_latin1((String*)&local_58, *(char**)( lVar5 + 8 ));
               }

            }

            cVar6 = String::operator ==(param_1, (String*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            if (cVar6 != '\0') goto LAB_00104f73;
         }

         cVar6 = String::operator ==(param_1, "Node");
         if (cVar6 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar8 = Object::is_class((Object*)this, param_1);
               return uVar8;
            }

            goto LAB_0010511d;
         }

      }

   }

   LAB_00104f73:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010511d:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* XRBodyModifier3D::is_class(String const&) const */undefined8 XRBodyModifier3D::is_class(XRBodyModifier3D *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_0010519f;
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

      LAB_0010519f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00105253;
   }

   cVar5 = String::operator ==(param_1, "XRBodyModifier3D");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = SkeletonModifier3D::is_class((SkeletonModifier3D*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00105253:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<BitField<XRBodyModifier3D::BodyUpdate>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<BitField<XRBodyModifier3D::BodyUpdate>>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   undefined4 *puVar1;
   long in_FS_OFFSET;
   long local_68;
   details local_60[8];
   undefined8 local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   puVar1 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = "XRBodyModifier3D::BodyUpdate";
   local_58 = 0;
   local_40 = 0x1c;
   String::parse_latin1((StrRange*)&local_58);
   godot::details::enum_qualified_name_to_class_info_name(local_60, (String*)&local_58);
   StringName::StringName((StringName*)&local_68, (String*)local_60, false);
   *puVar1 = 2;
   puVar1[6] = 0;
   *(undefined8*)( puVar1 + 8 ) = 0;
   puVar1[10] = 0x206;
   *(undefined1(*) [16])( puVar1 + 2 ) = (undefined1[16])0x0;
   local_50 = 0;
   local_48 = (char*)0x0;
   StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<XRBodyModifier3D::BoneUpdate>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<XRBodyModifier3D::BoneUpdate>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   undefined4 *puVar1;
   long in_FS_OFFSET;
   long local_68;
   details local_60[8];
   undefined8 local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   puVar1 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = "XRBodyModifier3D::BoneUpdate";
   local_58 = 0;
   local_40 = 0x1c;
   String::parse_latin1((StrRange*)&local_58);
   godot::details::enum_qualified_name_to_class_info_name(local_60, (String*)&local_58);
   StringName::StringName((StringName*)&local_68, (String*)local_60, false);
   *puVar1 = 2;
   puVar1[6] = 0;
   *(undefined8*)( puVar1 + 8 ) = 0;
   puVar1[10] = 0x10006;
   *(undefined1(*) [16])( puVar1 + 2 ) = (undefined1[16])0x0;
   local_50 = 0;
   local_48 = (char*)0x0;
   StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Node::_get_property_listv(List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
   undefined7 in_register_00000031;
   List *pLVar5;
   long in_FS_OFFSET;
   StringName *local_a8;
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
   pLVar5 = (List*)CONCAT71(in_register_00000031, param_2);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = &_LC116;
   local_88 = 0;
   local_90 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC116;
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
      LAB_0010567d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010567d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar5;
         local_68 = local_80;
         goto joined_r0x0010569f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar5;
   joined_r0x0010569f:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])pLVar5 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   local_a8 = (StringName*)&local_68;
   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), local_a8);
   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_58);
   }

   puVar4[10] = local_50;
   plVar1 = *(long**)pLVar5;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar1;
   *(long*)( puVar4 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar4;
   }

   plVar1[1] = (long)puVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar4;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
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
   ClassDB::get_property_list((StringName*)&local_78, pLVar5, true, (Object*)param_1);
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
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
   long in_FS_OFFSET;
   StringName *local_a8;
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
      LAB_001059fd:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001059fd;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00105a1f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00105a1f:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   local_a8 = (StringName*)&local_68;
   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), local_a8);
   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_58);
   }

   puVar4[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar1;
   *(long*)( puVar4 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar4;
   }

   plVar1[1] = (long)puVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar4;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
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
/* SkeletonModifier3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void SkeletonModifier3D::_get_property_listv(SkeletonModifier3D *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
   long in_FS_OFFSET;
   StringName *local_a8;
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
   local_78 = "SkeletonModifier3D";
   local_70 = 0x12;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "SkeletonModifier3D";
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
      LAB_00105ddd:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00105ddd;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00105dff;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00105dff:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   local_a8 = (StringName*)&local_68;
   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), local_a8);
   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_58);
   }

   puVar4[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar1;
   *(long*)( puVar4 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar4;
   }

   plVar1[1] = (long)puVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar4;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
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

   StringName::StringName((StringName*)&local_78, "SkeletonModifier3D", false);
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
/* XRBodyModifier3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void XRBodyModifier3D::_get_property_listv(XRBodyModifier3D *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
   long in_FS_OFFSET;
   StringName *local_a8;
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
      SkeletonModifier3D::_get_property_listv((SkeletonModifier3D*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "XRBodyModifier3D";
   local_70 = 0x10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "XRBodyModifier3D";
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
   if (local_90 == 0) {
      LAB_001061bd:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001061bd;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x001061df;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x001061df:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   local_a8 = (StringName*)&local_68;
   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), local_a8);
   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_58);
   }

   puVar4[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar1;
   *(long*)( puVar4 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar4;
   }

   plVar1[1] = (long)puVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar4;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
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

   StringName::StringName((StringName*)&local_78, "XRBodyModifier3D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         SkeletonModifier3D::_get_property_listv((SkeletonModifier3D*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<BitField<XRBodyModifier3D::BodyUpdate> >::_gen_argument_type_info(int) const */undefined4 *MethodBindT<BitField<XRBodyModifier3D::BodyUpdate>>::_gen_argument_type_info(int param_1) {
   long lVar1;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar2;
   long in_FS_OFFSET;
   undefined4 local_48[2];
   long local_40;
   long local_38;
   undefined4 local_30;
   long local_28;
   undefined4 local_20;
   long local_10;
   puVar2 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar2 = 0;
   puVar2[6] = 0;
   *(undefined8*)( puVar2 + 8 ) = 0;
   puVar2[10] = 6;
   *(undefined1(*) [16])( puVar2 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      GetTypeInfo<BitField<XRBodyModifier3D::BodyUpdate>,void>::get_class_info((GetTypeInfo<BitField<XRBodyModifier3D::BodyUpdate>,void>*)local_48);
      *puVar2 = local_48[0];
      if (*(long*)( puVar2 + 2 ) != local_40) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 2 ));
         lVar1 = local_40;
         local_40 = 0;
         *(long*)( puVar2 + 2 ) = lVar1;
      }

      if (*(long*)( puVar2 + 4 ) != local_38) {
         StringName::unref();
         lVar1 = local_38;
         local_38 = 0;
         *(long*)( puVar2 + 4 ) = lVar1;
      }

      puVar2[6] = local_30;
      if (*(long*)( puVar2 + 8 ) != local_28) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 8 ));
         lVar1 = local_28;
         local_28 = 0;
         *(long*)( puVar2 + 8 ) = lVar1;
      }

      puVar2[10] = local_20;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_28);
      if (( StringName::configured != '\0' ) && ( local_38 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<XRBodyModifier3D::BoneUpdate>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<XRBodyModifier3D::BoneUpdate>::_gen_argument_type_info(int param_1) {
   long lVar1;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar2;
   long in_FS_OFFSET;
   undefined4 local_48[2];
   long local_40;
   long local_38;
   undefined4 local_30;
   long local_28;
   undefined4 local_20;
   long local_10;
   puVar2 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar2 = 0;
   puVar2[6] = 0;
   *(undefined8*)( puVar2 + 8 ) = 0;
   puVar2[10] = 6;
   *(undefined1(*) [16])( puVar2 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      GetTypeInfo<XRBodyModifier3D::BoneUpdate,void>::get_class_info((GetTypeInfo<XRBodyModifier3D::BoneUpdate,void>*)local_48);
      *puVar2 = local_48[0];
      if (*(long*)( puVar2 + 2 ) != local_40) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 2 ));
         lVar1 = local_40;
         local_40 = 0;
         *(long*)( puVar2 + 2 ) = lVar1;
      }

      if (*(long*)( puVar2 + 4 ) != local_38) {
         StringName::unref();
         lVar1 = local_38;
         local_38 = 0;
         *(long*)( puVar2 + 4 ) = lVar1;
      }

      puVar2[6] = local_30;
      if (*(long*)( puVar2 + 8 ) != local_28) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 8 ));
         lVar1 = local_28;
         local_28 = 0;
         *(long*)( puVar2 + 8 ) = lVar1;
      }

      puVar2[10] = local_20;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_28);
      if (( StringName::configured != '\0' ) && ( local_38 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<StringName const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<StringName_const&>::_gen_argument_type_info(int param_1) {
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
   if (in_EDX != 0) goto LAB_001066a9;
   local_78 = 0;
   local_68 = &_LC3;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x15);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_001067a5:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_001067a5;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
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
   LAB_001066a9:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBind* create_method_bind<XRBodyModifier3D, StringName const&>(void
   (XRBodyModifier3D::*)(StringName const&)) */MethodBind *create_method_bind<XRBodyModifier3D,StringName_const&>(_func_void_StringName_ptr *param_1) {
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
   *(_func_void_StringName_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010a640;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "XRBodyModifier3D";
   local_30 = 0x10;
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
/* MethodBind* create_method_bind<XRBodyModifier3D, StringName>(StringName (XRBodyModifier3D::*)()
   const) */MethodBind *create_method_bind<XRBodyModifier3D,StringName>(_func_StringName *param_1) {
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
   *(_func_StringName**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010a6a0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "XRBodyModifier3D";
   local_30 = 0x10;
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
/* MethodBind* create_method_bind<XRBodyModifier3D, BitField<XRBodyModifier3D::BodyUpdate> >(void
   (XRBodyModifier3D::*)(BitField<XRBodyModifier3D::BodyUpdate>)) */MethodBind *create_method_bind<XRBodyModifier3D,BitField<XRBodyModifier3D::BodyUpdate>>(_func_void_BitField *param_1) {
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
   *(_func_void_BitField**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010a700;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "XRBodyModifier3D";
   local_30 = 0x10;
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
/* MethodBind* create_method_bind<XRBodyModifier3D,
   BitField<XRBodyModifier3D::BodyUpdate>>(BitField<XRBodyModifier3D::BodyUpdate>
   (XRBodyModifier3D::*)() const) */MethodBind *create_method_bind<XRBodyModifier3D,BitField<XRBodyModifier3D::BodyUpdate>>(_func_BitField *param_1) {
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
   *(_func_BitField**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010a760;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "XRBodyModifier3D";
   local_30 = 0x10;
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
/* MethodBind* create_method_bind<XRBodyModifier3D, XRBodyModifier3D::BoneUpdate>(void
   (XRBodyModifier3D::*)(XRBodyModifier3D::BoneUpdate)) */MethodBind *create_method_bind<XRBodyModifier3D,XRBodyModifier3D::BoneUpdate>(_func_void_BoneUpdate *param_1) {
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
   *(_func_void_BoneUpdate**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010a7c0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "XRBodyModifier3D";
   local_30 = 0x10;
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
/* MethodBind* create_method_bind<XRBodyModifier3D,
   XRBodyModifier3D::BoneUpdate>(XRBodyModifier3D::BoneUpdate (XRBodyModifier3D::*)() const) */MethodBind *create_method_bind<XRBodyModifier3D,XRBodyModifier3D::BoneUpdate>(_func_BoneUpdate *param_1) {
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
   *(_func_BoneUpdate**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010a820;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "XRBodyModifier3D";
   local_30 = 0x10;
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
/* XRBodyModifier3D::_bind_methods() [clone .cold] */void XRBodyModifier3D::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* XRBodyModifier3D::_initialize_classv() */void XRBodyModifier3D::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (SkeletonModifier3D::initialize_class()::initialized == '\0') {
      if (Node3D::initialize_class()::initialized == '\0') {
        if (Node::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Object");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"Node");
          StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((code *)PTR__bind_methods_0010d028 != Node::_bind_methods) {
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
      local_58 = "SkeletonModifier3D";
      local_70 = 0;
      local_50 = 0x12;
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
      if ((code *)PTR__bind_methods_0010d020 != Node3D::_bind_methods) {
        SkeletonModifier3D::_bind_methods();
      }
      SkeletonModifier3D::initialize_class()::initialized = '\x01';
    }
    local_58 = "SkeletonModifier3D";
    local_68 = 0;
    local_50 = 0x12;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "XRBodyModifier3D";
    local_70 = 0;
    local_50 = 0x10;
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x001074f8) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
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
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<XRBodyModifier3D::BoneUpdate>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<XRBodyModifier3D::BoneUpdate>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC111,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00107870;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_00107870:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<XRBodyModifier3D::BoneUpdate>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<XRBodyModifier3D::BoneUpdate>::validated_call
          (MethodBindTRC<XRBodyModifier3D::BoneUpdate> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00107b14;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_00107b14:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<XRBodyModifier3D::BoneUpdate>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<XRBodyModifier3D::BoneUpdate>::ptrcall
          (MethodBindTRC<XRBodyModifier3D::BoneUpdate> *this,Object *param_1,void **param_2,
          void *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00107cd3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar1;
LAB_00107cd3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<XRBodyModifier3D::BoneUpdate>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<XRBodyModifier3D::BoneUpdate>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00108011;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00107e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00108011:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<XRBodyModifier3D::BoneUpdate>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<XRBodyModifier3D::BoneUpdate>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001081f1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010807b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_001081f1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<XRBodyModifier3D::BodyUpdate>>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<BitField<XRBodyModifier3D::BodyUpdate>>::validated_call
          (MethodBindTRC<BitField<XRBodyModifier3D::BodyUpdate>> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  undefined8 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00108242;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)(param_3 + 8) = uVar1;
LAB_00108242:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<XRBodyModifier3D::BodyUpdate>>::ptrcall(Object*, void const**, void*)
   const */

void __thiscall
MethodBindTRC<BitField<XRBodyModifier3D::BodyUpdate>>::ptrcall
          (MethodBindTRC<BitField<XRBodyModifier3D::BodyUpdate>> *this,Object *param_1,
          void **param_2,void *param_3)

{
  undefined8 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001083f1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = uVar1;
LAB_001083f1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<BitField<XRBodyModifier3D::BodyUpdate> >::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<BitField<XRBodyModifier3D::BodyUpdate>>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00108731;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001085bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00108731:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<BitField<XRBodyModifier3D::BodyUpdate> >::ptrcall(Object*, void const**, void*) const
    */

void MethodBindT<BitField<XRBodyModifier3D::BodyUpdate>>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00108911;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010879c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00108911:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<StringName>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<StringName>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  bool bVar5;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC111,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00108a00;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)((StringName *)&local_58);
      Variant::Variant((Variant *)local_48,(StringName *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      bVar5 = StringName::configured != '\0';
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if ((bVar5) && (local_58 != (char *)0x0)) {
        StringName::unref();
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
LAB_00108a00:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<StringName>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<StringName>::validated_call
          (MethodBindTRC<StringName> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x1076c8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00108c3a;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  StringName::operator=((StringName *)(param_3 + 8),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
    StringName::unref();
  }
LAB_00108c3a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<StringName>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<StringName>::ptrcall
          (MethodBindTRC<StringName> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x1076c8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00108e1b;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  StringName::operator=((StringName *)param_3,(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
    StringName::unref();
  }
LAB_00108e1b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<StringName_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00109161;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00108fed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_00109161:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<StringName_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00109341;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001091c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00109341:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<XRBodyModifier3D::BodyUpdate>>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<BitField<XRBodyModifier3D::BodyUpdate>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
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
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC111,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00109410;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      lVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,lVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_00109410:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<StringName_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC111,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00109790;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001097e0;
LAB_001097d0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001097e0:
        uVar6 = 4;
        goto LAB_00109785;
      }
      if (in_R8D == 1) goto LAB_001097d0;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x15);
    uVar4 = _LC113;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    uVar6 = 3;
LAB_00109785:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00109790:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass,
   XRBodyModifier3D::BoneUpdate>(__UnexistingClass*, void
   (__UnexistingClass::*)(XRBodyModifier3D::BoneUpdate), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,XRBodyModifier3D::BoneUpdate>
               (__UnexistingClass *param_1,_func_void_BoneUpdate *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
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
    goto LAB_00109abd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00109b20;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00109b20:
      uVar6 = 4;
LAB_00109abd:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_00109a3b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00109a3b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_BoneUpdate **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC143;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00109a96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<XRBodyModifier3D::BoneUpdate>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<XRBodyModifier3D::BoneUpdate>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC111,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00109b86;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,XRBodyModifier3D::BoneUpdate>
            (p_Var2,(_func_void_BoneUpdate *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00109b86:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, BitField<XRBodyModifier3D::BodyUpdate>
   >(__UnexistingClass*, void (__UnexistingClass::*)(BitField<XRBodyModifier3D::BodyUpdate>),
   Variant const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,BitField<XRBodyModifier3D::BodyUpdate>>
               (__UnexistingClass *param_1,_func_void_BitField *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
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
    goto LAB_00109e4d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00109eb0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00109eb0:
      uVar6 = 4;
LAB_00109e4d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_00109dcb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00109dcb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_BitField **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC143;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00109e27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<BitField<XRBodyModifier3D::BodyUpdate> >::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<BitField<XRBodyModifier3D::BodyUpdate>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC111,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00109f16;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,BitField<XRBodyModifier3D::BodyUpdate>>
            (p_Var2,(_func_void_BitField *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00109f16:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<StringName>::~MethodBindTRC() */

void __thiscall MethodBindTRC<StringName>::~MethodBindTRC(MethodBindTRC<StringName> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<StringName const&>::~MethodBindT() */

void __thiscall MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<XRBodyModifier3D, void, StringName const&,
   XRServer::TrackerType>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<XRBodyModifier3D,void,StringName_const&,XRServer::TrackerType>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<XRBodyModifier3D,void,StringName_const&,XRServer::TrackerType>
           *this)

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



/* WARNING: Control flow encountered bad instruction data */
/* XRBodyModifier3D::~XRBodyModifier3D() */

void __thiscall XRBodyModifier3D::~XRBodyModifier3D(XRBodyModifier3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<XRBodyModifier3D::BoneUpdate>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<XRBodyModifier3D::BoneUpdate>::~MethodBindTRC
          (MethodBindTRC<XRBodyModifier3D::BoneUpdate> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<XRBodyModifier3D::BoneUpdate>::~MethodBindT() */

void __thiscall
MethodBindT<XRBodyModifier3D::BoneUpdate>::~MethodBindT
          (MethodBindT<XRBodyModifier3D::BoneUpdate> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<BitField<XRBodyModifier3D::BodyUpdate>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BitField<XRBodyModifier3D::BodyUpdate>>::~MethodBindTRC
          (MethodBindTRC<BitField<XRBodyModifier3D::BodyUpdate>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<BitField<XRBodyModifier3D::BodyUpdate> >::~MethodBindT() */

void __thiscall
MethodBindT<BitField<XRBodyModifier3D::BodyUpdate>>::~MethodBindT
          (MethodBindT<BitField<XRBodyModifier3D::BodyUpdate>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
