/* CowData<RID>::_copy_on_write() [clone .isra.0] */void CowData<RID>::_copy_on_write(CowData<RID> *this) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererSceneRender::CameraData::set_camera(Transform3D, Projection, bool, bool, bool, Vector2
   const&, float, unsigned int) */void RendererSceneRender::CameraData::set_camera(undefined4 param_1, undefined4 *param_2, undefined8 *param_3, undefined1 param_4, undefined1 param_5, undefined1 param_6, undefined8 *param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined4 param_14) {
   long lVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   uVar5 = _UNK_001034f8;
   uVar4 = __LC6;
   uVar2 = *param_3;
   uVar3 = param_3[1];
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1*)( param_2 + 1 ) = param_4;
   *(undefined8*)( param_2 + 0x10 ) = uVar2;
   *(undefined8*)( param_2 + 0x12 ) = uVar3;
   uVar2 = param_3[3];
   *(undefined8*)( param_2 + 0x14 ) = param_3[2];
   *(undefined8*)( param_2 + 0x16 ) = uVar2;
   uVar2 = param_3[5];
   *(undefined8*)( param_2 + 0x18 ) = param_3[4];
   *(undefined8*)( param_2 + 0x1a ) = uVar2;
   *(undefined8*)( param_2 + 4 ) = param_8;
   *(undefined8*)( param_2 + 6 ) = param_9;
   uVar2 = param_3[6];
   uVar3 = param_3[7];
   *(undefined8*)( param_2 + 8 ) = param_10;
   *(undefined8*)( param_2 + 10 ) = param_11;
   param_2[2] = param_14;
   *param_2 = 1;
   *(undefined1*)( (long)param_2 + 5 ) = param_5;
   *(undefined1*)( param_2 + 3 ) = param_6;
   *(undefined8*)( param_2 + 0xc ) = param_12;
   *(undefined8*)( param_2 + 0xe ) = param_13;
   *(undefined8*)( param_2 + 0x1c ) = uVar2;
   *(undefined8*)( param_2 + 0x1e ) = uVar3;
   *(undefined8*)( param_2 + 0x20 ) = uVar4;
   *(undefined8*)( param_2 + 0x22 ) = uVar5;
   *(undefined8*)( param_2 + 0x24 ) = uVar4;
   *(undefined8*)( param_2 + 0x26 ) = uVar5;
   *(undefined8*)( param_2 + 0x28 ) = 0x3f800000;
   *(undefined8*)( param_2 + 0x2a ) = 0;
   uVar3 = param_3[1];
   uVar2 = *param_7;
   *(undefined8*)( param_2 + 0x38 ) = *param_3;
   *(undefined8*)( param_2 + 0x3a ) = uVar3;
   uVar3 = param_3[3];
   *(undefined8*)( param_2 + 0x3c ) = param_3[2];
   *(undefined8*)( param_2 + 0x3e ) = uVar3;
   uVar3 = param_3[5];
   *(undefined8*)( param_2 + 0x40 ) = param_3[4];
   *(undefined8*)( param_2 + 0x42 ) = uVar3;
   uVar3 = param_3[6];
   uVar4 = param_3[7];
   *(undefined8*)( param_2 + 0x58 ) = uVar2;
   *(undefined8*)( param_2 + 0x44 ) = uVar3;
   *(undefined8*)( param_2 + 0x46 ) = uVar4;
   param_2[0x5a] = param_1;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail(0);
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererSceneRender::CameraData::set_multiview_camera(unsigned int, Transform3D const*,
   Projection const*, bool, bool, bool) */void RendererSceneRender::CameraData::set_multiview_camera(CameraData *this, uint param_1, Transform3D *param_2, Projection *param_3, bool param_4, bool param_5, bool param_6) {
   long *plVar1;
   Plane *pPVar2;
   Vector3 *pVVar3;
   Plane *pPVar4;
   Plane *pPVar5;
   float fVar6;
   float fVar7;
   code *pcVar8;
   long lVar9;
   char cVar10;
   ulong uVar11;
   ulong uVar12;
   long lVar13;
   ulong uVar14;
   long lVar15;
   float *pfVar16;
   float *pfVar17;
   long in_FS_OFFSET;
   float fVar18;
   float fVar19;
   float fVar20;
   float fVar21;
   float fVar22;
   undefined8 uVar23;
   float fVar24;
   float fVar25;
   float fVar26;
   float fVar27;
   float local_2c8;
   float local_2b8;
   float local_2b0;
   float local_2a0;
   float local_29c;
   float local_288;
   float *local_280;
   undefined8 local_238;
   undefined8 uStack_230;
   undefined8 local_228;
   undefined8 uStack_220;
   undefined8 local_218;
   undefined8 uStack_210;
   Transform3D local_208[8];
   long local_200;
   undefined8 local_1ec;
   float local_1e4;
   undefined8 local_1e0;
   float local_1d8;
   undefined8 local_1d4;
   float local_1cc;
   undefined8 local_1c8;
   float local_1c0;
   undefined8 local_1bc;
   float local_1b4;
   undefined8 local_1b0;
   float local_1a8;
   undefined8 local_1a4;
   float local_19c;
   undefined8 local_198;
   undefined8 uStack_190;
   undefined8 local_188;
   undefined8 uStack_180;
   float local_178[4];
   float local_168[4];
   undefined8 local_158;
   float fStack_150;
   float fStack_14c;
   float local_148[2];
   long local_140[3];
   float local_128;
   float local_124;
   float local_120;
   float local_11c;
   float local_118;
   float local_114;
   float local_104;
   float local_100;
   Transform3D local_f8[48];
   Projection local_c8[64];
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != 2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("set_multiview_camera", "servers/rendering/renderer_scene_render.cpp", 0x35, "Condition \"p_view_count != 2\" is true.", "Incorrect view count for stereoscopic view", 0);
         return;
      }

      goto LAB_00101a2e;
   }

   *(undefined4*)this = 2;
   uVar12 = 0;
   this[0xc] = (CameraData)param_6;
   *(undefined4*)( this + 8 ) = 0xffffffff;
   this[4] = (CameraData)param_4;
   this[5] = (CameraData)param_5;
   local_140[0] = 0;
   local_140[2] = 0;
   do {
      Projection::get_projection_planes(local_208);
      lVar15 = local_200;
      if (local_140[uVar12 * 2] == local_200) {
         if (local_200 != 0) {
            LOCK();
            plVar1 = (long*)( local_200 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_200 = 0;
               Memory::free_static((void*)( lVar15 + -0x10 ), false);
            }

         }

      }
 else {
         if (local_140[( uVar12 & 0xffffffff ) * 2] != 0) {
            LOCK();
            plVar1 = (long*)( local_140[( uVar12 & 0xffffffff ) * 2] + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_140[( uVar12 & 0xffffffff ) * 2] + -0x10 ), false);
            }

         }

         local_140[( uVar12 & 0xffffffff ) * 2] = local_200;
      }

      lVar9 = local_140[2];
      lVar15 = local_140[0];
      uVar12 = uVar12 + 1;
   }
 while ( (uint)uVar12 < *(uint*)this );
   if (local_140[0] == 0) {
      lVar13 = 0;
   }
 else {
      lVar13 = *(long*)( local_140[0] + -8 );
      if (2 < lVar13) {
         fVar25 = *(float*)( local_140[0] + 0x20 );
         fVar26 = *(float*)( local_140[0] + 0x24 );
         fVar18 = *(float*)( local_140[0] + 0x28 );
         if (local_140[2] == 0) {
            lVar13 = 0;
         }
 else {
            lVar13 = *(long*)( local_140[2] + -8 );
            if (4 < lVar13) {
               fVar6 = *(float*)( local_140[2] + 0x40 );
               fVar7 = *(float*)( local_140[2] + 0x44 );
               fVar19 = *(float*)( local_140[2] + 0x48 );
               fVar21 = fVar7 + fVar26;
               fVar20 = fVar6 + fVar25;
               fVar22 = fVar19 + fVar18;
               fVar24 = fVar20 * fVar20 + fVar21 * fVar21 + fVar22 * fVar22;
               if (fVar24 == 0.0) {
                  fVar22 = 0.0;
                  fVar20 = 0.0;
                  fVar21 = fVar20;
               }
 else {
                  fVar24 = SQRT(fVar24);
                  fVar20 = fVar20 / fVar24;
                  fVar21 = fVar21 / fVar24;
                  fVar22 = fVar22 / fVar24;
               }

               fVar24 = fVar6 * fVar18 - fVar25 * fVar19;
               fVar18 = fVar19 * fVar26 - fVar18 * fVar7;
               fVar25 = fVar7 * fVar25 - fVar6 * fVar26;
               fVar26 = fVar18 * fVar18 + fVar24 * fVar24 + fVar25 * fVar25;
               if (fVar26 == 0.0) {
                  fVar25 = 0.0;
                  fVar24 = 0.0;
                  fVar18 = 0.0;
               }
 else {
                  fVar26 = SQRT(fVar26);
                  fVar18 = fVar18 / fVar26;
                  fVar24 = fVar24 / fVar26;
                  fVar25 = fVar25 / fVar26;
               }

               local_288 = fVar18 * fVar21 - fVar24 * fVar20;
               local_29c = fVar25 * fVar20 - fVar18 * fVar22;
               local_2a0 = fVar24 * fVar22 - fVar25 * fVar21;
               fVar25 = local_2a0 * local_2a0 + local_29c * local_29c + local_288 * local_288;
               if (fVar25 == 0.0) {
                  local_288 = 0.0;
                  local_29c = 0.0;
                  local_2a0 = 0.0;
                  local_2b0 = 0.0;
                  local_2b8 = 0.0;
                  local_2c8 = 0.0;
               }
 else {
                  fVar25 = SQRT(fVar25);
                  local_29c = local_29c / fVar25;
                  local_2a0 = local_2a0 / fVar25;
                  local_288 = local_288 / fVar25;
                  local_2b0 = local_29c * fVar20 - local_2a0 * fVar21;
                  local_2b8 = local_2a0 * fVar22 - local_288 * fVar20;
                  local_2c8 = local_288 * fVar21 - local_29c * fVar22;
                  fVar25 = local_2c8 * local_2c8 + local_2b8 * local_2b8 + local_2b0 * local_2b0;
                  if (fVar25 == 0.0) {
                     local_2b0 = 0.0;
                     local_2b8 = 0.0;
                     local_2c8 = 0.0;
                  }
 else {
                     fVar25 = SQRT(fVar25);
                     local_2c8 = local_2c8 / fVar25;
                     local_2b8 = local_2b8 / fVar25;
                     local_2b0 = local_2b0 / fVar25;
                  }

               }

               pPVar2 = (Plane*)( local_140[0] + 0x20 );
               *(float*)( this + 0x30 ) = fVar22;
               *(ulong*)( this + 0x10 ) = CONCAT44(local_2c8, local_2a0);
               *(ulong*)( this + 0x18 ) = CONCAT44(local_29c, fVar20);
               *(ulong*)( this + 0x20 ) = CONCAT44(fVar21, local_2b8);
               *(ulong*)( this + 0x28 ) = CONCAT44(local_2b0, local_288);
               pVVar3 = (Vector3*)( local_140[2] + 0x40 );
               uStack_190 = CONCAT44(*(float*)( param_2 + 0x24 ) * local_2c8 + *(float*)( param_2 + 0x28 ) * local_2b8 + *(float*)( param_2 + 0x2c ) * local_2b0, local_2b0);
               local_198 = CONCAT44(local_2b8, local_2c8);
               cVar10 = Plane::intersect_3((Plane*)&local_198, pPVar2, pVVar3);
               if (cVar10 == '\0') {
                  _err_print_error("set_multiview_camera", "servers/rendering/renderer_scene_render.cpp", 0x53, "Condition \"!horizon.intersect_3(planes[0][Projection::PLANE_LEFT], planes[1][Projection::PLANE_RIGHT], &main_transform.origin)\" is true.", "Can\'t determine camera origin", 0, 0);
                  goto LAB_00101630;
               }

               Transform3D::inverse();
               lVar13 = *(long*)( lVar9 + -8 );
               if (1 < lVar13) {
                  lVar13 = *(long*)( lVar15 + -8 );
                  fVar25 = *(float*)( lVar9 + 0x1c );
                  if (1 < lVar13) {
                     fVar26 = *(float*)( lVar15 + 0x1c );
                     local_1ec = 0;
                     fVar21 = (float)( (uint)fVar21 ^ __LC19 );
                     local_1e0 = 0;
                     fVar20 = (float)( (uint)fVar20 ^ __LC19 );
                     fVar22 = (float)( (uint)fVar22 ^ __LC19 );
                     local_1e4 = 0.0;
                     local_1d8 = 0.0;
                     uVar23 = CONCAT44(fVar21, fVar20);
                     uStack_180 = CONCAT44(( fVar26 * *(float*)( lVar15 + 0x10 ) + *(float*)( lVar9 + 0x10 ) * fVar25 ) * _LC18 * fVar20 + ( *(float*)( lVar9 + 0x14 ) * fVar25 + *(float*)( lVar15 + 0x14 ) * fVar26 ) * _LC18 * fVar21 + ( *(float*)( lVar9 + 0x18 ) * fVar25 + *(float*)( lVar15 + 0x18 ) * fVar26 ) * _LC18 * fVar22, fVar22);
                     local_188 = uVar23;
                     if (3 < lVar13) {
                        cVar10 = Plane::intersect_3((Plane*)&local_188, pPVar2, (Vector3*)( lVar15 + 0x30 ));
                        if (cVar10 == '\0') {
                           _err_print_error("set_multiview_camera", "servers/rendering/renderer_scene_render.cpp", 0x62, "Condition \"!far_plane.intersect_3(planes[0][Projection::PLANE_LEFT], planes[0][Projection::PLANE_TOP], &top_left)\" is true.", "Can\'t determine left camera far/left/top vector", 0, 0);
                           LAB_00101630:local_280 = &local_128;
                           do {
                              pfVar16 = local_280 + -4;
                              if (*(long*)( local_280 + -2 ) != 0) {
                                 LOCK();
                                 plVar1 = (long*)( *(long*)( local_280 + -2 ) + -0x10 );
                                 *plVar1 = *plVar1 + -1;
                                 UNLOCK();
                                 if (*plVar1 == 0) {
                                    Memory::free_static((void*)( *(long*)( local_280 + -2 ) + -0x10 ), false);
                                 }

                              }

                              local_280 = pfVar16;
                           }
 while ( pfVar16 != local_148 );
                        }
 else {
                           lVar13 = *(long*)( lVar9 + -8 );
                           if (lVar13 < 4) goto LAB_0010149a;
                           pPVar4 = (Plane*)( lVar9 + 0x20 );
                           cVar10 = Plane::intersect_3((Plane*)&local_188, pPVar4, (Vector3*)( lVar9 + 0x30 ));
                           if (cVar10 == '\0') {
                              _err_print_error("set_multiview_camera", "servers/rendering/renderer_scene_render.cpp", 100, "Condition \"!far_plane.intersect_3(planes[1][Projection::PLANE_LEFT], planes[1][Projection::PLANE_TOP], &other)\" is true.", "Can\'t determine right camera far/left/top vector", 0, 0);
                              goto LAB_00101630;
                           }

                           if (local_2c8 * (float)local_1ec + local_2b8 * local_1ec._4_4_ + local_2b0 * local_1e4 < local_1d8 * local_2b0 + (float)local_1e0 * local_2c8 + local_1e0._4_4_ * local_2b8) {
                              local_1ec = local_1e0;
                              local_1e4 = local_1d8;
                           }

                           local_1cc = 0.0;
                           local_1d4 = 0;
                           lVar13 = *(long*)( lVar15 + -8 );
                           if (lVar13 < 6) {
                              LAB_001015cc:lVar15 = 5;
                              goto LAB_001014ba;
                           }

                           cVar10 = Plane::intersect_3((Plane*)&local_188, pPVar2, (Vector3*)( lVar15 + 0x50 ));
                           if (cVar10 == '\0') {
                              _err_print_error("set_multiview_camera", "servers/rendering/renderer_scene_render.cpp", 0x6c, "Condition \"!far_plane.intersect_3(planes[0][Projection::PLANE_LEFT], planes[0][Projection::PLANE_BOTTOM], &bottom_left)\" is true.", "Can\'t determine left camera far/left/bottom vector", 0, 0);
                              goto LAB_00101630;
                           }

                           lVar13 = *(long*)( lVar9 + -8 );
                           if (lVar13 < 6) goto LAB_001015cc;
                           cVar10 = Plane::intersect_3((Plane*)&local_188, pPVar4, (Vector3*)( lVar9 + 0x50 ));
                           if (cVar10 == '\0') {
                              _err_print_error("set_multiview_camera", "servers/rendering/renderer_scene_render.cpp", 0x6e, "Condition \"!far_plane.intersect_3(planes[1][Projection::PLANE_LEFT], planes[1][Projection::PLANE_BOTTOM], &other)\" is true.", "Can\'t determine right camera far/left/bottom vector", 0, 0);
                              goto LAB_00101630;
                           }

                           if (local_2c8 * (float)local_1e0 + local_2b8 * local_1e0._4_4_ + local_1d8 * local_2b0 < local_1cc * local_2b0 + (float)local_1d4 * local_2c8 + local_1d4._4_4_ * local_2b8) {
                              local_1d4 = local_1e0;
                              local_1cc = local_1d8;
                           }

                           local_1c0 = 0.0;
                           local_1c8 = 0;
                           lVar13 = *(long*)( lVar15 + -8 );
                           if (lVar13 < 4) goto LAB_0010149a;
                           if (lVar13 == 4) {
                              LAB_00101759:lVar13 = 4;
                              goto LAB_001015c2;
                           }

                           pPVar5 = (Plane*)( lVar15 + 0x40 );
                           cVar10 = Plane::intersect_3((Plane*)&local_188, pPVar5, (Vector3*)( lVar15 + 0x30 ));
                           if (cVar10 == '\0') {
                              _err_print_error("set_multiview_camera", "servers/rendering/renderer_scene_render.cpp", 0x76, "Condition \"!far_plane.intersect_3(planes[0][Projection::PLANE_RIGHT], planes[0][Projection::PLANE_TOP], &top_right)\" is true.", "Can\'t determine left camera far/right/top vector", 0, 0);
                              goto LAB_00101630;
                           }

                           lVar13 = *(long*)( lVar9 + -8 );
                           if (lVar13 < 4) goto LAB_0010149a;
                           if (lVar13 == 4) goto LAB_00101759;
                           cVar10 = Plane::intersect_3((Plane*)&local_188, (Plane*)pVVar3, (Vector3*)( lVar9 + 0x30 ));
                           if (cVar10 == '\0') {
                              _err_print_error("set_multiview_camera", "servers/rendering/renderer_scene_render.cpp", 0x78, "Condition \"!far_plane.intersect_3(planes[1][Projection::PLANE_RIGHT], planes[1][Projection::PLANE_TOP], &other)\" is true.", "Can\'t determine right camera far/right/top vector", 0, 0);
                              goto LAB_00101630;
                           }

                           if (local_2c8 * (float)local_1c8 + local_2b8 * local_1c8._4_4_ + local_1c0 * local_2b0 < local_1d8 * local_2b0 + (float)local_1e0 * local_2c8 + local_1e0._4_4_ * local_2b8) {
                              local_1c8 = local_1e0;
                              local_1c0 = local_1d8;
                           }

                           local_1b4 = 0.0;
                           local_1bc = 0;
                           lVar13 = *(long*)( lVar15 + -8 );
                           if (lVar13 < 6) goto LAB_001015cc;
                           cVar10 = Plane::intersect_3((Plane*)&local_188, pPVar5, (Vector3*)( lVar15 + 0x50 ));
                           if (cVar10 == '\0') {
                              _err_print_error("set_multiview_camera", "servers/rendering/renderer_scene_render.cpp", 0x80, "Condition \"!far_plane.intersect_3(planes[0][Projection::PLANE_RIGHT], planes[0][Projection::PLANE_BOTTOM], &bottom_right)\" is true.", "Can\'t determine left camera far/right/bottom vector", 0, 0);
                              goto LAB_00101630;
                           }

                           lVar13 = *(long*)( lVar9 + -8 );
                           if (lVar13 < 6) goto LAB_001015cc;
                           cVar10 = Plane::intersect_3((Plane*)&local_188, (Plane*)pVVar3, (Vector3*)( lVar9 + 0x50 ));
                           if (cVar10 == '\0') {
                              _err_print_error("set_multiview_camera", "servers/rendering/renderer_scene_render.cpp", 0x82, "Condition \"!far_plane.intersect_3(planes[1][Projection::PLANE_RIGHT], planes[1][Projection::PLANE_BOTTOM], &other)\" is true.", "Can\'t determine right camera far/right/bottom vector", 0, 0);
                              goto LAB_00101630;
                           }

                           fVar26 = local_1bc._4_4_;
                           fVar25 = (float)local_1bc;
                           if (local_2c8 * (float)local_1e0 + local_2b8 * local_1e0._4_4_ + local_2b0 * local_1d8 < local_2c8 * (float)local_1bc + local_2b8 * local_1bc._4_4_ + local_2b0 * local_1b4) {
                              local_1bc = local_1e0;
                              local_1b4 = local_1d8;
                              fVar26 = local_1e0._4_4_;
                              fVar25 = (float)local_1e0;
                           }

                           fVar18 = *(float*)( this + 0x38 );
                           fVar6 = *(float*)( this + 0x3c );
                           fVar7 = *(float*)( this + 0x34 );
                           fVar27 = ( fVar7 - (float)local_1ec ) * ( fVar6 - local_1c0 ) - ( fVar7 - (float)local_1c8 ) * ( fVar6 - local_1e4 );
                           fVar19 = ( fVar18 - local_1c8._4_4_ ) * ( fVar6 - local_1e4 ) - ( fVar6 - local_1c0 ) * ( fVar18 - local_1ec._4_4_ );
                           local_178[2] = ( fVar7 - (float)local_1c8 ) * ( fVar18 - local_1ec._4_4_ ) - ( fVar18 - local_1c8._4_4_ ) * ( fVar7 - (float)local_1ec );
                           fVar24 = fVar19 * fVar19 + fVar27 * fVar27 + local_178[2] * local_178[2];
                           if (fVar24 == 0.0) {
                              fVar27 = 0.0;
                              fVar19 = 0.0;
                              for (int i = 0; i < 3; i++) {
                                 local_178[i] = 0;
                              }

                           }
 else {
                              fVar24 = SQRT(fVar24);
                              fVar19 = fVar19 / fVar24;
                              fVar27 = fVar27 / fVar24;
                              local_178[2] = local_178[2] / fVar24;
                              local_178[1] = fVar27;
                              local_178[0] = fVar19;
                           }

                           local_178[3] = fVar19 * fVar7 + fVar27 * fVar18 + local_178[2] * fVar6;
                           fVar19 = ( fVar18 - fVar26 ) * ( fVar6 - local_1cc ) - ( fVar6 - local_1b4 ) * ( fVar18 - local_1d4._4_4_ );
                           fVar24 = ( fVar7 - (float)local_1d4 ) * ( fVar6 - local_1b4 ) - ( fVar7 - fVar25 ) * ( fVar6 - local_1cc );
                           local_168[2] = ( fVar7 - fVar25 ) * ( fVar18 - local_1d4._4_4_ ) - ( fVar18 - fVar26 ) * ( fVar7 - (float)local_1d4 );
                           fVar25 = fVar19 * fVar19 + fVar24 * fVar24 + local_168[2] * local_168[2];
                           if (fVar25 == 0.0) {
                              fVar24 = 0.0;
                              local_168[2] = 0.0;
                              fVar19 = 0.0;
                              local_168[0] = 0.0;
                              local_168[1] = 0.0;
                           }
 else {
                              fVar25 = SQRT(fVar25);
                              fVar19 = fVar19 / fVar25;
                              fVar24 = fVar24 / fVar25;
                              local_168[2] = local_168[2] / fVar25;
                              local_168[1] = fVar24;
                              local_168[0] = fVar19;
                           }

                           local_168[3] = fVar19 * fVar7 + fVar18 * fVar24 + fVar6 * local_168[2];
                           fVar26 = *(float*)( param_2 + 0x54 ) * fVar20 + *(float*)( param_2 + 0x58 ) * fVar21 + *(float*)( param_2 + 0x5c ) * fVar22;
                           fVar25 = fVar20 * *(float*)( param_2 + 0x24 ) + fVar21 * *(float*)( param_2 + 0x28 ) + *(float*)( param_2 + 0x2c ) * fVar22;
                           if (fVar25 <= fVar26) {
                              fVar25 = fVar26;
                           }

                           _fStack_150 = CONCAT44(fVar25, fVar22);
                           local_1a8 = 0.0;
                           local_1b0 = 0;
                           lVar13 = *(long*)( lVar15 + -8 );
                           local_158 = uVar23;
                           if (lVar13 < 3) goto LAB_0010151f;
                           cVar10 = Plane::intersect_3((Plane*)&local_158, (Plane*)local_168, (Vector3*)pPVar2);
                           if (cVar10 == '\0') {
                              _err_print_error("set_multiview_camera", "servers/rendering/renderer_scene_render.cpp", 0x9c, "Condition \"!near_plane.intersect_3(bottom, planes[0][Projection::PLANE_LEFT], &min_vec)\" is true.", "Can\'t determine left camera near/left/bottom vector", 0, 0);
                              goto LAB_00101630;
                           }

                           lVar13 = *(long*)( lVar9 + -8 );
                           if (lVar13 < 3) goto LAB_0010151f;
                           cVar10 = Plane::intersect_3((Plane*)&local_158, (Plane*)local_168, (Vector3*)pPVar4);
                           if (cVar10 == '\0') {
                              _err_print_error("set_multiview_camera", "servers/rendering/renderer_scene_render.cpp", 0x9e, "Condition \"!near_plane.intersect_3(bottom, planes[1][Projection::PLANE_LEFT], &other)\" is true.", "Can\'t determine right camera near/left/bottom vector", 0, 0);
                              goto LAB_00101630;
                           }

                           if (local_2a0 * (float)local_1e0 + local_1e0._4_4_ * local_29c + local_1d8 * local_288 < local_1a8 * local_288 + (float)local_1b0 * local_2a0 + local_1b0._4_4_ * local_29c) {
                              local_1b0 = local_1e0;
                              local_1a8 = local_1d8;
                           }

                           local_19c = 0.0;
                           local_1a4 = 0;
                           lVar13 = *(long*)( lVar15 + -8 );
                           if (lVar13 < 5) goto LAB_001015c2;
                           cVar10 = Plane::intersect_3((Plane*)&local_158, (Plane*)local_178, (Vector3*)pPVar5);
                           if (cVar10 == '\0') {
                              _err_print_error("set_multiview_camera", "servers/rendering/renderer_scene_render.cpp", 0xa5, "Condition \"!near_plane.intersect_3(top, planes[0][Projection::PLANE_RIGHT], &max_vec)\" is true.", "Can\'t determine left camera near/right/top vector", 0, 0);
                              goto LAB_00101630;
                           }

                           lVar13 = *(long*)( lVar9 + -8 );
                           if (lVar13 < 5) goto LAB_001015c2;
                           cVar10 = Plane::intersect_3((Plane*)&local_158, (Plane*)local_178, pVVar3);
                           if (cVar10 == '\0') {
                              _err_print_error("set_multiview_camera", "servers/rendering/renderer_scene_render.cpp", 0xa7, "Condition \"!near_plane.intersect_3(top, planes[1][Projection::PLANE_RIGHT], &other)\" is true.", "Can\'t determine right camera near/right/top vector", 0);
                              goto LAB_00101630;
                           }

                           fVar25 = local_1a4._4_4_;
                           fVar26 = (float)local_1a4;
                           if (local_2a0 * (float)local_1a4 + local_29c * local_1a4._4_4_ + local_288 * local_19c < local_2a0 * (float)local_1e0 + local_29c * local_1e0._4_4_ + local_288 * local_1d8) {
                              local_1a4 = local_1e0;
                              local_19c = local_1d8;
                              fVar25 = local_1e0._4_4_;
                              fVar26 = (float)local_1e0;
                           }

                           Projection::set_frustum(local_1a8 * local_120 + (float)local_1b0 * local_128 + local_1b0._4_4_ * local_124 + local_104, fVar26 * local_128 + fVar25 * local_124 + local_19c * local_120 + local_104, local_118 * local_1b0._4_4_ + local_11c * (float)local_1b0 + local_114 * local_1a8 + local_100, local_118 * fVar25 + local_11c * fVar26 + local_114 * local_19c + local_100, (float)( ( uint )(( *(float*)( this + 0x38 ) * local_158._4_4_ + *(float*)( this + 0x34 ) * (float)local_158 + *(float*)( this + 0x3c ) * fStack_150 ) - fStack_14c) ^ __LC19 ), (float)( ( uint )(( local_188._4_4_ * *(float*)( this + 0x38 ) + (float)local_188 * *(float*)( this + 0x34 ) + (float)uStack_180 * *(float*)( this + 0x3c ) ) - uStack_180._4_4_) ^ __LC19 ));
                           if (*(int*)this != 0) {
                              uVar12 = 0;
                              do {
                                 uVar11 = uVar12 & 0xffffffff;
                                 uVar14 = uVar12 + 1;
                                 lVar15 = uVar12 * 0x40;
                                 Transform3D::operator *((Transform3D*)&local_238, (Transform3D*)&local_128);
                                 *(undefined8*)( this + uVar11 * 0x30 + 0x80 ) = local_238;
                                 *(undefined8*)( this + uVar11 * 0x30 + 0x88 ) = uStack_230;
                                 *(undefined8*)( this + uVar11 * 0x30 + 0x90 ) = local_228;
                                 *(undefined8*)( this + uVar11 * 0x30 + 0x98 ) = uStack_220;
                                 *(undefined8*)( this + uVar11 * 0x30 + 0xa0 ) = local_218;
                                 *(undefined8*)( this + uVar11 * 0x30 + 0xa8 ) = uStack_210;
                                 Transform3D::inverse();
                                 Projection::Projection(local_c8, local_f8);
                                 Projection::operator *((Projection*)&local_88, (Projection*)( param_3 + lVar15 ));
                                 *(undefined8*)( this + lVar15 + 0xe0 ) = local_88;
                                 *(undefined8*)( this + lVar15 + 0xe0 + 8 ) = uStack_80;
                                 *(undefined8*)( this + lVar15 + 0xf0 ) = local_78;
                                 *(undefined8*)( this + lVar15 + 0xf0 + 8 ) = uStack_70;
                                 *(undefined8*)( this + lVar15 + 0x100 ) = local_68;
                                 *(undefined8*)( this + lVar15 + 0x100 + 8 ) = uStack_60;
                                 *(undefined8*)( this + lVar15 + 0x110 ) = local_58;
                                 *(undefined8*)( this + lVar15 + 0x110 + 8 ) = uStack_50;
                                 Projection::~Projection((Projection*)&local_88);
                                 Projection::~Projection(local_c8);
                                 uVar12 = uVar14;
                              }
 while ( (uint)uVar14 < *(uint*)this );
                           }

                           pfVar16 = &local_128;
                           do {
                              pfVar17 = pfVar16 + -4;
                              if (*(long*)( pfVar16 + -2 ) != 0) {
                                 LOCK();
                                 plVar1 = (long*)( *(long*)( pfVar16 + -2 ) + -0x10 );
                                 *plVar1 = *plVar1 + -1;
                                 UNLOCK();
                                 if (*plVar1 == 0) {
                                    Memory::free_static((void*)( *(long*)( pfVar16 + -2 ) + -0x10 ), false);
                                 }

                              }

                              pfVar16 = pfVar17;
                           }
 while ( pfVar17 != local_148 );
                        }

                        if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                           return;
                        }

                        LAB_00101a2e:/* WARNING: Subroutine does not return */__stack_chk_fail();
                     }

                     LAB_0010149a:lVar15 = 3;
                     goto LAB_001014ba;
                  }

               }

               lVar15 = 1;
               goto LAB_001014ba;
            }

         }

         LAB_001015c2:lVar15 = 4;
         goto LAB_001014ba;
      }

   }

   LAB_0010151f:lVar15 = 2;
   LAB_001014ba:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar15, lVar13, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar8 = (code*)invalidInstructionException();
   ( *pcVar8 )();
}
/* RendererSceneRender::compositor_effect_allocate() */void RendererSceneRender::compositor_effect_allocate(void) {
   RendererCompositorStorage::compositor_effect_allocate();
   return;
}
/* RendererSceneRender::compositor_effect_initialize(RID) */void RendererSceneRender::compositor_effect_initialize(long param_1) {
   RendererCompositorStorage::compositor_effect_initialize(param_1 + 0x68);
   return;
}
/* RendererSceneRender::compositor_effect_free(RID) */void RendererSceneRender::compositor_effect_free(long param_1) {
   RendererCompositorStorage::compositor_effect_free(param_1 + 0x68);
   return;
}
/* RendererSceneRender::is_compositor_effect(RID) const */bool RendererSceneRender::is_compositor_effect(RendererSceneRender *this, ulong param_2) {
   pthread_mutex_t *__mutex;
   int iVar1;
   bool bVar2;
   __mutex = (pthread_mutex_t*)( this + 0xa8 );
   iVar1 = pthread_mutex_lock(__mutex);
   if (iVar1 == 0) {
      if ((uint)param_2 < *(uint*)( this + 0x94 )) {
         bVar2 = false;
         if (param_2 >> 0x20 != 0x7fffffff) {
            bVar2 = ( *(uint*)( *(long*)( *(long*)( this + 0x80 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x90 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x90 ) ) * 0x28 + 0x20 ) & 0x7fffffff ) == ( uint )(param_2 >> 0x20);
         }

         pthread_mutex_unlock(__mutex);
      }
 else {
         bVar2 = false;
         pthread_mutex_unlock(__mutex);
      }

      return bVar2;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar1);
}
/* RendererSceneRender::compositor_effect_set_enabled(RID, bool) */void RendererSceneRender::compositor_effect_set_enabled(RendererSceneRender *this, undefined8 param_2, undefined1 param_3) {
   RendererCompositorStorage::compositor_effect_set_enabled(this + 0x68, param_2, param_3);
   return;
}
/* RendererSceneRender::compositor_effect_set_callback(RID,
   RenderingServer::CompositorEffectCallbackType, Callable const&) */void RendererSceneRender::compositor_effect_set_callback(long param_1) {
   RendererCompositorStorage::compositor_effect_set_callback(param_1 + 0x68);
   return;
}
/* RendererSceneRender::compositor_effect_set_flag(RID, RenderingServer::CompositorEffectFlags,
   bool) */void RendererSceneRender::compositor_effect_set_flag(RendererSceneRender *this, undefined8 param_2, undefined8 param_3, undefined1 param_4) {
   RendererCompositorStorage::compositor_effect_set_flag(this + 0x68, param_2, param_3, param_4);
   return;
}
/* RendererSceneRender::compositor_allocate() */void RendererSceneRender::compositor_allocate(void) {
   RendererCompositorStorage::compositor_allocate();
   return;
}
/* RendererSceneRender::compositor_initialize(RID) */void RendererSceneRender::compositor_initialize(long param_1) {
   RendererCompositorStorage::compositor_initialize(param_1 + 0x68);
   return;
}
/* RendererSceneRender::compositor_free(RID) */void RendererSceneRender::compositor_free(long param_1) {
   RendererCompositorStorage::compositor_free(param_1 + 0x68);
   return;
}
/* RendererSceneRender::is_compositor(RID) const */bool RendererSceneRender::is_compositor(RendererSceneRender *this, ulong param_2) {
   pthread_mutex_t *__mutex;
   int iVar1;
   bool bVar2;
   __mutex = (pthread_mutex_t*)( this + 0x100 );
   iVar1 = pthread_mutex_lock(__mutex);
   if (iVar1 == 0) {
      if ((uint)param_2 < *(uint*)( this + 0xec )) {
         bVar2 = false;
         if (param_2 >> 0x20 != 0x7fffffff) {
            bVar2 = ( *(uint*)( *(long*)( *(long*)( this + 0xd8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xe8 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xe8 ) ) * 0x18 + 0x10 ) & 0x7fffffff ) == ( uint )(param_2 >> 0x20);
         }

         pthread_mutex_unlock(__mutex);
      }
 else {
         bVar2 = false;
         pthread_mutex_unlock(__mutex);
      }

      return bVar2;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar1);
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* RendererSceneRender::environment_allocate() */void RendererSceneRender::environment_allocate(void) {
   RendererEnvironmentStorage::environment_allocate();
   return;
}
/* RendererSceneRender::environment_initialize(RID) */void RendererSceneRender::environment_initialize(long param_1) {
   RendererEnvironmentStorage::environment_initialize(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_free(RID) */void RendererSceneRender::environment_free(long param_1) {
   RendererEnvironmentStorage::environment_free(param_1 + 8);
   return;
}
/* RendererSceneRender::is_environment(RID) const */bool RendererSceneRender::is_environment(RendererSceneRender *this, ulong param_2) {
   pthread_mutex_t *__mutex;
   int iVar1;
   bool bVar2;
   __mutex = (pthread_mutex_t*)( this + 0x40 );
   iVar1 = pthread_mutex_lock(__mutex);
   if (iVar1 == 0) {
      if ((uint)param_2 < *(uint*)( this + 0x2c )) {
         bVar2 = false;
         if (param_2 >> 0x20 != 0x7fffffff) {
            bVar2 = ( *(uint*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x1f0 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 ) + 0x1e8 ) & 0x7fffffff ) == ( uint )(param_2 >> 0x20);
         }

         pthread_mutex_unlock(__mutex);
      }
 else {
         bVar2 = false;
         pthread_mutex_unlock(__mutex);
      }

      return bVar2;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar1);
}
/* RendererSceneRender::environment_set_background(RID, RenderingServer::EnvironmentBG) */void RendererSceneRender::environment_set_background(long param_1) {
   RendererEnvironmentStorage::environment_set_background(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_set_sky(RID, RID) */void RendererSceneRender::environment_set_sky(long param_1) {
   RendererEnvironmentStorage::environment_set_sky(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_set_sky_custom_fov(RID, float) */void RendererSceneRender::environment_set_sky_custom_fov(long param_1) {
   RendererEnvironmentStorage::environment_set_sky_custom_fov(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_set_sky_orientation(RID, Basis const&) */void RendererSceneRender::environment_set_sky_orientation(long param_1) {
   RendererEnvironmentStorage::environment_set_sky_orientation(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_set_bg_color(RID, Color const&) */void RendererSceneRender::environment_set_bg_color(long param_1) {
   RendererEnvironmentStorage::environment_set_bg_color(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_set_bg_energy(RID, float, float) */void RendererSceneRender::environment_set_bg_energy(long param_1) {
   RendererEnvironmentStorage::environment_set_bg_energy(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_set_canvas_max_layer(RID, int) */void RendererSceneRender::environment_set_canvas_max_layer(long param_1) {
   RendererEnvironmentStorage::environment_set_canvas_max_layer(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_set_ambient_light(RID, Color const&,
   RenderingServer::EnvironmentAmbientSource, float, float,
   RenderingServer::EnvironmentReflectionSource) */void RendererSceneRender::environment_set_ambient_light(long param_1) {
   RendererEnvironmentStorage::environment_set_ambient_light(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_background(RID) const */void RendererSceneRender::environment_get_background(long param_1) {
   RendererEnvironmentStorage::environment_get_background(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_sky(RID) const */void RendererSceneRender::environment_get_sky(long param_1) {
   RendererEnvironmentStorage::environment_get_sky(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_sky_custom_fov(RID) const */void RendererSceneRender::environment_get_sky_custom_fov(long param_1) {
   RendererEnvironmentStorage::environment_get_sky_custom_fov(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_sky_orientation(RID) const */RendererSceneRender * __thiscall
RendererSceneRender::environment_get_sky_orientation(RendererSceneRender *this,long param_2){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   RendererEnvironmentStorage::environment_get_sky_orientation(this, param_2 + 8);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererSceneRender::environment_get_bg_color(RID) const */void RendererSceneRender::environment_get_bg_color(long param_1) {
   RendererEnvironmentStorage::environment_get_bg_color(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_bg_energy_multiplier(RID) const */void RendererSceneRender::environment_get_bg_energy_multiplier(long param_1) {
   RendererEnvironmentStorage::environment_get_bg_energy_multiplier(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_bg_intensity(RID) const */void RendererSceneRender::environment_get_bg_intensity(long param_1) {
   RendererEnvironmentStorage::environment_get_bg_intensity(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_canvas_max_layer(RID) const */void RendererSceneRender::environment_get_canvas_max_layer(long param_1) {
   RendererEnvironmentStorage::environment_get_canvas_max_layer(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_ambient_source(RID) const */void RendererSceneRender::environment_get_ambient_source(long param_1) {
   RendererEnvironmentStorage::environment_get_ambient_source(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_ambient_light(RID) const */void RendererSceneRender::environment_get_ambient_light(long param_1) {
   RendererEnvironmentStorage::environment_get_ambient_light(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_ambient_light_energy(RID) const */void RendererSceneRender::environment_get_ambient_light_energy(long param_1) {
   RendererEnvironmentStorage::environment_get_ambient_light_energy(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_ambient_sky_contribution(RID) const */void RendererSceneRender::environment_get_ambient_sky_contribution(long param_1) {
   RendererEnvironmentStorage::environment_get_ambient_sky_contribution(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_reflection_source(RID) const */void RendererSceneRender::environment_get_reflection_source(long param_1) {
   RendererEnvironmentStorage::environment_get_reflection_source(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_set_camera_feed_id(RID, int) */void RendererSceneRender::environment_set_camera_feed_id(long param_1) {
   RendererEnvironmentStorage::environment_set_camera_feed_id(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_camera_feed_id(RID) const */void RendererSceneRender::environment_get_camera_feed_id(long param_1) {
   RendererEnvironmentStorage::environment_get_camera_feed_id(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_set_tonemap(RID, RenderingServer::EnvironmentToneMapper, float,
   float) */void RendererSceneRender::environment_set_tonemap(long param_1) {
   RendererEnvironmentStorage::environment_set_tonemap(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_tone_mapper(RID) const */void RendererSceneRender::environment_get_tone_mapper(long param_1) {
   RendererEnvironmentStorage::environment_get_tone_mapper(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_exposure(RID) const */void RendererSceneRender::environment_get_exposure(long param_1) {
   RendererEnvironmentStorage::environment_get_exposure(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_white(RID) const */void RendererSceneRender::environment_get_white(long param_1) {
   RendererEnvironmentStorage::environment_get_white(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_set_fog(RID, bool, Color const&, float, float, float, float,
   float, float, float, RenderingServer::EnvironmentFogMode) */void RendererSceneRender::environment_set_fog(long param_1, undefined8 param_2, undefined1 param_3) {
   RendererEnvironmentStorage::environment_set_fog(param_1 + 8, param_2, param_3);
   return;
}
/* RendererSceneRender::environment_get_fog_enabled(RID) const */void RendererSceneRender::environment_get_fog_enabled(long param_1) {
   RendererEnvironmentStorage::environment_get_fog_enabled(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_fog_mode(RID) const */void RendererSceneRender::environment_get_fog_mode(long param_1) {
   RendererEnvironmentStorage::environment_get_fog_mode(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_fog_light_color(RID) const */void RendererSceneRender::environment_get_fog_light_color(long param_1) {
   RendererEnvironmentStorage::environment_get_fog_light_color(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_fog_light_energy(RID) const */void RendererSceneRender::environment_get_fog_light_energy(long param_1) {
   RendererEnvironmentStorage::environment_get_fog_light_energy(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_fog_sun_scatter(RID) const */void RendererSceneRender::environment_get_fog_sun_scatter(long param_1) {
   RendererEnvironmentStorage::environment_get_fog_sun_scatter(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_fog_density(RID) const */void RendererSceneRender::environment_get_fog_density(long param_1) {
   RendererEnvironmentStorage::environment_get_fog_density(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_fog_sky_affect(RID) const */void RendererSceneRender::environment_get_fog_sky_affect(long param_1) {
   RendererEnvironmentStorage::environment_get_fog_sky_affect(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_fog_height(RID) const */void RendererSceneRender::environment_get_fog_height(long param_1) {
   RendererEnvironmentStorage::environment_get_fog_height(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_fog_height_density(RID) const */void RendererSceneRender::environment_get_fog_height_density(long param_1) {
   RendererEnvironmentStorage::environment_get_fog_height_density(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_fog_aerial_perspective(RID) const */void RendererSceneRender::environment_get_fog_aerial_perspective(long param_1) {
   RendererEnvironmentStorage::environment_get_fog_aerial_perspective(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_set_fog_depth(RID, float, float, float) */void RendererSceneRender::environment_set_fog_depth(long param_1) {
   RendererEnvironmentStorage::environment_set_fog_depth(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_fog_depth_curve(RID) const */void RendererSceneRender::environment_get_fog_depth_curve(long param_1) {
   RendererEnvironmentStorage::environment_get_fog_depth_curve(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_fog_depth_begin(RID) const */void RendererSceneRender::environment_get_fog_depth_begin(long param_1) {
   RendererEnvironmentStorage::environment_get_fog_depth_begin(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_fog_depth_end(RID) const */void RendererSceneRender::environment_get_fog_depth_end(long param_1) {
   RendererEnvironmentStorage::environment_get_fog_depth_end(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_set_volumetric_fog(RID, bool, float, Color const&, Color const&,
   float, float, float, float, float, bool, float, float, float) */void RendererSceneRender::environment_set_volumetric_fog(long param_1, undefined8 param_2, undefined1 param_3, undefined8 param_4, undefined8 param_5, undefined1 param_6) {
   RendererEnvironmentStorage::environment_set_volumetric_fog(param_1 + 8, param_2, param_3, param_4, param_5, param_6);
   return;
}
/* RendererSceneRender::environment_get_volumetric_fog_enabled(RID) const */void RendererSceneRender::environment_get_volumetric_fog_enabled(long param_1) {
   RendererEnvironmentStorage::environment_get_volumetric_fog_enabled(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_volumetric_fog_density(RID) const */void RendererSceneRender::environment_get_volumetric_fog_density(long param_1) {
   RendererEnvironmentStorage::environment_get_volumetric_fog_density(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_volumetric_fog_scattering(RID) const */void RendererSceneRender::environment_get_volumetric_fog_scattering(long param_1) {
   RendererEnvironmentStorage::environment_get_volumetric_fog_scattering(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_volumetric_fog_emission(RID) const */void RendererSceneRender::environment_get_volumetric_fog_emission(long param_1) {
   RendererEnvironmentStorage::environment_get_volumetric_fog_emission(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_volumetric_fog_emission_energy(RID) const */void RendererSceneRender::environment_get_volumetric_fog_emission_energy(long param_1) {
   RendererEnvironmentStorage::environment_get_volumetric_fog_emission_energy(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_volumetric_fog_anisotropy(RID) const */void RendererSceneRender::environment_get_volumetric_fog_anisotropy(long param_1) {
   RendererEnvironmentStorage::environment_get_volumetric_fog_anisotropy(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_volumetric_fog_length(RID) const */void RendererSceneRender::environment_get_volumetric_fog_length(long param_1) {
   RendererEnvironmentStorage::environment_get_volumetric_fog_length(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_volumetric_fog_detail_spread(RID) const */void RendererSceneRender::environment_get_volumetric_fog_detail_spread(long param_1) {
   RendererEnvironmentStorage::environment_get_volumetric_fog_detail_spread(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_volumetric_fog_gi_inject(RID) const */void RendererSceneRender::environment_get_volumetric_fog_gi_inject(long param_1) {
   RendererEnvironmentStorage::environment_get_volumetric_fog_gi_inject(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_volumetric_fog_sky_affect(RID) const */void RendererSceneRender::environment_get_volumetric_fog_sky_affect(long param_1) {
   RendererEnvironmentStorage::environment_get_volumetric_fog_sky_affect(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_volumetric_fog_temporal_reprojection(RID) const */void RendererSceneRender::environment_get_volumetric_fog_temporal_reprojection(long param_1) {
   RendererEnvironmentStorage::environment_get_volumetric_fog_temporal_reprojection(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_volumetric_fog_temporal_reprojection_amount(RID) const */void RendererSceneRender::environment_get_volumetric_fog_temporal_reprojection_amount(long param_1) {
   RendererEnvironmentStorage::environment_get_volumetric_fog_temporal_reprojection_amount(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_volumetric_fog_ambient_inject(RID) const */void RendererSceneRender::environment_get_volumetric_fog_ambient_inject(long param_1) {
   RendererEnvironmentStorage::environment_get_volumetric_fog_ambient_inject(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_set_glow(RID, bool, Vector<float>, float, float, float, float,
   RenderingServer::EnvironmentGlowBlendMode, float, float, float, float, RID) */void RendererSceneRender::environment_set_glow(long param_1, undefined8 param_2, undefined1 param_3, long param_4) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long in_FS_OFFSET;
   bool bVar4;
   undefined1 auStack_28[8];
   long local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_20 = 0;
   if (*(long*)( param_4 + 8 ) != 0) {
      plVar1 = (long*)( *(long*)( param_4 + 8 ) + -0x10 );
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_00102114;
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
         local_20 = *(long*)( param_4 + 8 );
      }

   }

   LAB_00102114:RendererEnvironmentStorage::environment_set_glow(param_1 + 8, param_2, param_3, auStack_28);
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
/* RendererSceneRender::environment_get_glow_enabled(RID) const */void RendererSceneRender::environment_get_glow_enabled(long param_1) {
   RendererEnvironmentStorage::environment_get_glow_enabled(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_glow_levels(RID) const */RendererSceneRender * __thiscall
RendererSceneRender::environment_get_glow_levels(RendererSceneRender *this,long param_2){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   RendererEnvironmentStorage::environment_get_glow_levels(this, param_2 + 8);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererSceneRender::environment_get_glow_intensity(RID) const */void RendererSceneRender::environment_get_glow_intensity(long param_1) {
   RendererEnvironmentStorage::environment_get_glow_intensity(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_glow_strength(RID) const */void RendererSceneRender::environment_get_glow_strength(long param_1) {
   RendererEnvironmentStorage::environment_get_glow_strength(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_glow_bloom(RID) const */void RendererSceneRender::environment_get_glow_bloom(long param_1) {
   RendererEnvironmentStorage::environment_get_glow_bloom(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_glow_mix(RID) const */void RendererSceneRender::environment_get_glow_mix(long param_1) {
   RendererEnvironmentStorage::environment_get_glow_mix(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_glow_blend_mode(RID) const */void RendererSceneRender::environment_get_glow_blend_mode(long param_1) {
   RendererEnvironmentStorage::environment_get_glow_blend_mode(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_glow_hdr_bleed_threshold(RID) const */void RendererSceneRender::environment_get_glow_hdr_bleed_threshold(long param_1) {
   RendererEnvironmentStorage::environment_get_glow_hdr_bleed_threshold(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_glow_hdr_luminance_cap(RID) const */void RendererSceneRender::environment_get_glow_hdr_luminance_cap(long param_1) {
   RendererEnvironmentStorage::environment_get_glow_hdr_luminance_cap(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_glow_hdr_bleed_scale(RID) const */void RendererSceneRender::environment_get_glow_hdr_bleed_scale(long param_1) {
   RendererEnvironmentStorage::environment_get_glow_hdr_bleed_scale(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_glow_map_strength(RID) const */void RendererSceneRender::environment_get_glow_map_strength(long param_1) {
   RendererEnvironmentStorage::environment_get_glow_map_strength(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_glow_map(RID) const */void RendererSceneRender::environment_get_glow_map(long param_1) {
   RendererEnvironmentStorage::environment_get_glow_map(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_set_ssr(RID, bool, int, float, float, float) */void RendererSceneRender::environment_set_ssr(long param_1, undefined8 param_2, undefined1 param_3) {
   RendererEnvironmentStorage::environment_set_ssr(param_1 + 8, param_2, param_3);
   return;
}
/* RendererSceneRender::environment_get_ssr_enabled(RID) const */void RendererSceneRender::environment_get_ssr_enabled(long param_1) {
   RendererEnvironmentStorage::environment_get_ssr_enabled(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_ssr_max_steps(RID) const */void RendererSceneRender::environment_get_ssr_max_steps(long param_1) {
   RendererEnvironmentStorage::environment_get_ssr_max_steps(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_ssr_fade_in(RID) const */void RendererSceneRender::environment_get_ssr_fade_in(long param_1) {
   RendererEnvironmentStorage::environment_get_ssr_fade_in(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_ssr_fade_out(RID) const */void RendererSceneRender::environment_get_ssr_fade_out(long param_1) {
   RendererEnvironmentStorage::environment_get_ssr_fade_out(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_ssr_depth_tolerance(RID) const */void RendererSceneRender::environment_get_ssr_depth_tolerance(long param_1) {
   RendererEnvironmentStorage::environment_get_ssr_depth_tolerance(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_set_ssao(RID, bool, float, float, float, float, float, float,
   float, float) */void RendererSceneRender::environment_set_ssao(long param_1, undefined8 param_2, undefined1 param_3) {
   RendererEnvironmentStorage::environment_set_ssao(param_1 + 8, param_2, param_3);
   return;
}
/* RendererSceneRender::environment_get_ssao_enabled(RID) const */void RendererSceneRender::environment_get_ssao_enabled(long param_1) {
   RendererEnvironmentStorage::environment_get_ssao_enabled(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_ssao_radius(RID) const */void RendererSceneRender::environment_get_ssao_radius(long param_1) {
   RendererEnvironmentStorage::environment_get_ssao_radius(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_ssao_intensity(RID) const */void RendererSceneRender::environment_get_ssao_intensity(long param_1) {
   RendererEnvironmentStorage::environment_get_ssao_intensity(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_ssao_power(RID) const */void RendererSceneRender::environment_get_ssao_power(long param_1) {
   RendererEnvironmentStorage::environment_get_ssao_power(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_ssao_detail(RID) const */void RendererSceneRender::environment_get_ssao_detail(long param_1) {
   RendererEnvironmentStorage::environment_get_ssao_detail(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_ssao_horizon(RID) const */void RendererSceneRender::environment_get_ssao_horizon(long param_1) {
   RendererEnvironmentStorage::environment_get_ssao_horizon(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_ssao_sharpness(RID) const */void RendererSceneRender::environment_get_ssao_sharpness(long param_1) {
   RendererEnvironmentStorage::environment_get_ssao_sharpness(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_ssao_direct_light_affect(RID) const */void RendererSceneRender::environment_get_ssao_direct_light_affect(long param_1) {
   RendererEnvironmentStorage::environment_get_ssao_direct_light_affect(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_ssao_ao_channel_affect(RID) const */void RendererSceneRender::environment_get_ssao_ao_channel_affect(long param_1) {
   RendererEnvironmentStorage::environment_get_ssao_ao_channel_affect(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_set_ssil(RID, bool, float, float, float, float) */void RendererSceneRender::environment_set_ssil(long param_1, undefined8 param_2, undefined1 param_3) {
   RendererEnvironmentStorage::environment_set_ssil(param_1 + 8, param_2, param_3);
   return;
}
/* RendererSceneRender::environment_get_ssil_enabled(RID) const */void RendererSceneRender::environment_get_ssil_enabled(long param_1) {
   RendererEnvironmentStorage::environment_get_ssil_enabled(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_ssil_radius(RID) const */void RendererSceneRender::environment_get_ssil_radius(long param_1) {
   RendererEnvironmentStorage::environment_get_ssil_radius(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_ssil_intensity(RID) const */void RendererSceneRender::environment_get_ssil_intensity(long param_1) {
   RendererEnvironmentStorage::environment_get_ssil_intensity(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_ssil_sharpness(RID) const */void RendererSceneRender::environment_get_ssil_sharpness(long param_1) {
   RendererEnvironmentStorage::environment_get_ssil_sharpness(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_ssil_normal_rejection(RID) const */void RendererSceneRender::environment_get_ssil_normal_rejection(long param_1) {
   RendererEnvironmentStorage::environment_get_ssil_normal_rejection(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_set_sdfgi(RID, bool, int, float,
   RenderingServer::EnvironmentSDFGIYScale, bool, float, bool, float, float, float) */void RendererSceneRender::environment_set_sdfgi(long param_1, undefined8 param_2, undefined1 param_3, undefined8 param_4, undefined8 param_5, undefined1 param_6) {
   RendererEnvironmentStorage::environment_set_sdfgi(param_1 + 8, param_2, param_3, param_4, param_5, param_6);
   return;
}
/* RendererSceneRender::environment_get_sdfgi_enabled(RID) const */void RendererSceneRender::environment_get_sdfgi_enabled(long param_1) {
   RendererEnvironmentStorage::environment_get_sdfgi_enabled(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_sdfgi_cascades(RID) const */void RendererSceneRender::environment_get_sdfgi_cascades(long param_1) {
   RendererEnvironmentStorage::environment_get_sdfgi_cascades(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_sdfgi_min_cell_size(RID) const */void RendererSceneRender::environment_get_sdfgi_min_cell_size(long param_1) {
   RendererEnvironmentStorage::environment_get_sdfgi_min_cell_size(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_sdfgi_use_occlusion(RID) const */void RendererSceneRender::environment_get_sdfgi_use_occlusion(long param_1) {
   RendererEnvironmentStorage::environment_get_sdfgi_use_occlusion(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_sdfgi_bounce_feedback(RID) const */void RendererSceneRender::environment_get_sdfgi_bounce_feedback(long param_1) {
   RendererEnvironmentStorage::environment_get_sdfgi_bounce_feedback(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_sdfgi_read_sky_light(RID) const */void RendererSceneRender::environment_get_sdfgi_read_sky_light(long param_1) {
   RendererEnvironmentStorage::environment_get_sdfgi_read_sky_light(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_sdfgi_energy(RID) const */void RendererSceneRender::environment_get_sdfgi_energy(long param_1) {
   RendererEnvironmentStorage::environment_get_sdfgi_energy(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_sdfgi_normal_bias(RID) const */void RendererSceneRender::environment_get_sdfgi_normal_bias(long param_1) {
   RendererEnvironmentStorage::environment_get_sdfgi_normal_bias(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_sdfgi_probe_bias(RID) const */void RendererSceneRender::environment_get_sdfgi_probe_bias(long param_1) {
   RendererEnvironmentStorage::environment_get_sdfgi_probe_bias(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_sdfgi_y_scale(RID) const */void RendererSceneRender::environment_get_sdfgi_y_scale(long param_1) {
   RendererEnvironmentStorage::environment_get_sdfgi_y_scale(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_set_adjustment(RID, bool, float, float, float, bool, RID) */void RendererSceneRender::environment_set_adjustment(long param_1, undefined8 param_2, undefined1 param_3, undefined1 param_4) {
   RendererEnvironmentStorage::environment_set_adjustment(param_1 + 8, param_2, param_3, param_4);
   return;
}
/* RendererSceneRender::environment_get_adjustments_enabled(RID) const */void RendererSceneRender::environment_get_adjustments_enabled(long param_1) {
   RendererEnvironmentStorage::environment_get_adjustments_enabled(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_adjustments_brightness(RID) const */void RendererSceneRender::environment_get_adjustments_brightness(long param_1) {
   RendererEnvironmentStorage::environment_get_adjustments_brightness(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_adjustments_contrast(RID) const */void RendererSceneRender::environment_get_adjustments_contrast(long param_1) {
   RendererEnvironmentStorage::environment_get_adjustments_contrast(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_adjustments_saturation(RID) const */void RendererSceneRender::environment_get_adjustments_saturation(long param_1) {
   RendererEnvironmentStorage::environment_get_adjustments_saturation(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_use_1d_color_correction(RID) const */void RendererSceneRender::environment_get_use_1d_color_correction(long param_1) {
   RendererEnvironmentStorage::environment_get_use_1d_color_correction(param_1 + 8);
   return;
}
/* RendererSceneRender::environment_get_color_correction(RID) const */void RendererSceneRender::environment_get_color_correction(long param_1) {
   RendererEnvironmentStorage::environment_get_color_correction(param_1 + 8);
   return;
}
/* RendererSceneRender::compositor_set_compositor_effects(RID, TypedArray<RID> const&) */void RendererSceneRender::compositor_set_compositor_effects(RendererSceneRender *this, undefined8 param_2, int param_3) {
   long *plVar1;
   int iVar2;
   Variant *this_00;
   undefined8 uVar3;
   int iVar4;
   long lVar5;
   long lVar6;
   long in_FS_OFFSET;
   undefined1 local_58[8];
   long local_50[2];
   long local_40;
   iVar4 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50[0] = 0;
   do {
      iVar2 = Array::size();
      if (iVar2 <= iVar4) {
         RendererCompositorStorage::compositor_set_compositor_effects(this + 0x68, param_2, local_58);
         lVar5 = local_50[0];
         if (local_50[0] != 0) {
            LOCK();
            plVar1 = (long*)( local_50[0] + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_50[0] = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }

         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      this_00 = (Variant*)Array::operator [](param_3);
      uVar3 = Variant::operator_cast_to_RID(this_00);
      if (local_50[0] == 0) {
         lVar5 = 1;
      }
 else {
         lVar5 = *(long*)( local_50[0] + -8 ) + 1;
      }

      iVar2 = CowData<RID>::resize<false>((CowData<RID>*)local_50, lVar5);
      if (iVar2 == 0) {
         if (local_50[0] == 0) {
            lVar6 = -1;
            lVar5 = 0;
         }
 else {
            lVar5 = *(long*)( local_50[0] + -8 );
            lVar6 = lVar5 + -1;
            if (-1 < lVar6) {
               CowData<RID>::_copy_on_write((CowData<RID>*)local_50);
               *(undefined8*)( local_50[0] + lVar6 * 8 ) = uVar3;
               goto LAB_001025bb;
            }

         }

         _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar6, lVar5, "p_index", "size()", "", false, false);
      }
 else {
         _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
      }

      LAB_001025bb:iVar4 = iVar4 + 1;
   }
 while ( true );
}
/* CowData<RID>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<RID>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<RID>::_realloc(long) */undefined8 CowData<RID>::_realloc(CowData<RID> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<RID>::resize<false>(long) */undefined8 CowData<RID>::resize<false>(CowData<RID> *this, long param_1) {
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
      lVar3 = lVar8 * 8;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_00103480:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 8 - 1;
   uVar4 = uVar4 >> 1 | uVar4;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar7 = uVar4 + 1;
   if (lVar7 == 0) goto LAB_00103480;
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
      LAB_001033ec:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar9[-1];
      if (param_1 <= lVar3) goto LAB_00103381;
   }
 else {
      if (lVar8 != 0) {
         uVar6 = _realloc(this, lVar7);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

         goto LAB_001033ec;
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

   memset(puVar9 + lVar3, 0, ( param_1 - lVar3 ) * 8);
   LAB_00103381:puVar9[-1] = param_1;
   return 0;
}

