/* RVO3D::Agent3D::Agent3D() */void RVO3D::Agent3D::Agent3D(Agent3D *this) {
   *(undefined8*)( this + 0x90 ) = 0x13f800000;
   *(undefined8*)( this + 0x98 ) = 0x3f80000000000001;
   *(undefined1(*) [16])this = (undefined1[16])0x0;
   for (int i = 0; i < 3; i++) {
      *(undefined1(*) [16])( this + ( 40*i + 16 ) ) = (undefined1[16])0;
      *(undefined1(*) [16])( this + ( 40*i + 32 ) ) = (undefined1[16])0;
   }

   *(undefined1(*) [16])( this + 0x80 ) = (undefined1[16])0x0;
   return;
}
/* RVO3D::Agent3D::computeNeighbors(RVO3D::RVOSimulator3D*) */void RVO3D::Agent3D::computeNeighbors(Agent3D *this, RVOSimulator3D *param_1) {
   if (*(long*)( this + 0x60 ) != *(long*)( this + 0x68 )) {
      *(long*)( this + 0x68 ) = *(long*)( this + 0x60 );
   }

   if (*(long*)( this + 0x40 ) == 0) {
      return;
   }

   RVO3D::KdTree3D::computeAgentNeighbors(*(Agent3D**)( param_1 + 8 ), *(float*)( this + 0x4c ) * *(float*)( this + 0x4c ));
   return;
}
/* RVO3D::Agent3D::update(RVO3D::RVOSimulator3D*) */void RVO3D::Agent3D::update(Agent3D *this, RVOSimulator3D *param_1) {
   float fVar1;
   undefined8 uVar2;
   uVar2 = *(undefined8*)this;
   *(undefined8*)( this + 0x24 ) = uVar2;
   fVar1 = *(float*)( param_1 + 0x14 );
   *(float*)( this + 0x2c ) = *(float*)( this + 8 );
   *(float*)( this + 0x14 ) = fVar1 * *(float*)( this + 8 ) + *(float*)( this + 0x14 );
   *(ulong*)( this + 0xc ) = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0xc ) >> 0x20 ) + fVar1 * (float)( (ulong)uVar2 >> 0x20 ), (float)*(undefined8*)( this + 0xc ) + fVar1 * (float)uVar2);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RVO3D::linearProgram1(std::vector<RVO3D::Plane, std::allocator<RVO3D::Plane> > const&, unsigned
   long, RVO3D::Line3D const&, float, RVO3D::Vector3 const&, bool, RVO3D::Vector3&) */undefined8 RVO3D::linearProgram1(vector *param_1, ulong param_2, Line3D *param_3, float param_4, Vector3 *param_5, bool param_6, Vector3 *param_7) {
   float fVar1;
   float fVar2;
   float *pfVar3;
   ulong uVar4;
   undefined8 uVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   fVar8 = *(float*)param_3;
   fVar1 = *(float*)( param_3 + 0xc );
   fVar16 = (float)*(undefined8*)param_3;
   fVar17 = (float)( ( ulong ) * (undefined8*)param_3 >> 0x20 );
   fVar14 = (float)*(undefined8*)( param_3 + 0xc );
   fVar15 = (float)( ( ulong ) * (undefined8*)( param_3 + 0xc ) >> 0x20 );
   fVar2 = *(float*)( param_3 + 8 );
   fVar11 = *(float*)( param_3 + 0x14 );
   uVar5 = 0;
   fVar9 = fVar8 * fVar1 + fVar17 * fVar15 + fVar11 * fVar2;
   fVar6 = ( param_4 * param_4 + fVar9 * fVar9 ) - ( fVar1 * fVar1 + fVar15 * fVar15 + fVar11 * fVar11 );
   if (0.0 <= fVar6) {
      fVar6 = SQRT(fVar6);
      fVar12 = (float)( (uint)fVar9 ^ __LC1 ) - fVar6;
      fVar6 = fVar6 - fVar9;
      if (param_2 != 0) {
         pfVar3 = *(float**)param_1;
         uVar4 = 0;
         fVar9 = fVar6;
         fVar13 = fVar12;
         do {
            fVar10 = ( *pfVar3 - fVar1 ) * pfVar3[3] + ( pfVar3[1] - fVar15 ) * pfVar3[4] + ( pfVar3[2] - fVar11 ) * pfVar3[5];
            fVar7 = pfVar3[3] * fVar8 + pfVar3[4] * fVar17 + pfVar3[5] * fVar2;
            fVar6 = fVar9;
            fVar12 = fVar13;
            if (_LC2 < fVar7 * fVar7) {
               fVar10 = fVar10 / fVar7;
               if (fVar7 < 0.0) {
                  fVar6 = fVar10;
                  if (fVar9 <= fVar10) {
                     fVar6 = fVar9;
                  }

               }
 else {
                  fVar12 = fVar10;
                  if (fVar10 <= fVar13) {
                     fVar12 = fVar13;
                  }

               }

               if (fVar6 < fVar12) {
                  return 0;
               }

            }
 else if (0.0 < fVar10) {
               return 0;
            }

            uVar4 = uVar4 + 1;
            pfVar3 = pfVar3 + 6;
            fVar9 = fVar6;
            fVar13 = fVar12;
         }
 while ( param_2 != uVar4 );
      }

      if (param_6) {
         if (*(float*)param_5 * fVar8 + *(float*)( param_5 + 4 ) * fVar17 + *(float*)( param_5 + 8 ) * fVar2 <= 0.0) {
            uVar5 = CONCAT44(fVar15 + fVar12 * fVar17, fVar14 + fVar12 * fVar16);
            fVar11 = fVar11 + fVar2 * fVar12;
         }
 else {
            uVar5 = CONCAT44(fVar15 + fVar6 * fVar17, fVar14 + fVar6 * fVar16);
            fVar11 = fVar11 + fVar2 * fVar6;
         }

      }
 else {
         fVar8 = ( *(float*)param_5 - fVar1 ) * fVar8 + ( *(float*)( param_5 + 4 ) - fVar15 ) * fVar17 + ( *(float*)( param_5 + 8 ) - fVar11 ) * fVar2;
         if (fVar12 <= fVar8) {
            if (fVar8 <= fVar6) {
               fVar11 = fVar11 + fVar2 * fVar8;
               uVar5 = CONCAT44(fVar15 + fVar8 * fVar17, fVar14 + fVar8 * fVar16);
            }
 else {
               uVar5 = CONCAT44(fVar15 + fVar6 * fVar17, fVar14 + fVar6 * fVar16);
               fVar11 = fVar11 + fVar6 * fVar2;
            }

         }
 else {
            uVar5 = CONCAT44(fVar15 + fVar12 * fVar17, fVar14 + fVar12 * fVar16);
            fVar11 = fVar11 + fVar12 * fVar2;
         }

      }

      *(undefined8*)param_7 = uVar5;
      uVar5 = 1;
      *(float*)( param_7 + 8 ) = fVar11;
   }

   return uVar5;
}
/* RVO3D::linearProgram2(std::vector<RVO3D::Plane, std::allocator<RVO3D::Plane> > const&, unsigned
   long, float, RVO3D::Vector3 const&, bool, RVO3D::Vector3&) */undefined8 RVO3D::linearProgram2(vector *param_1, ulong param_2, float param_3, Vector3 *param_4, bool param_5, Vector3 *param_6) {
   float *pfVar1;
   float fVar2;
   char cVar3;
   undefined8 uVar4;
   ulong uVar5;
   ulong uVar6;
   float *pfVar7;
   long in_FS_OFFSET;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   float local_48;
   float fStack_44;
   float fStack_40;
   float fStack_3c;
   float local_38;
   float local_34;
   long local_30;
   fVar18 = param_3 * param_3;
   pfVar7 = *(float**)param_1;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pfVar1 = pfVar7 + param_2 * 6;
   fVar14 = pfVar1[3];
   fVar11 = (float)*(undefined8*)( pfVar1 + 3 );
   fVar13 = (float)( ( ulong ) * (undefined8*)( pfVar1 + 3 ) >> 0x20 );
   fVar2 = pfVar1[5];
   fVar9 = pfVar1[1] * fVar13 + fVar14 * *pfVar1 + fVar2 * pfVar1[2];
   if (fVar18 < fVar9 * fVar9) {
      LAB_00100768:uVar4 = 0;
   }
 else {
      fVar8 = fVar18 - fVar9 * fVar9;
      fVar10 = fVar9 * fVar2;
      fVar12 = *(float*)( param_4 + 8 );
      fVar17 = fVar9 * fVar11;
      fVar9 = fVar9 * fVar13;
      fVar15 = (float)*(undefined8*)param_4;
      fVar16 = (float)( ( ulong ) * (undefined8*)param_4 >> 0x20 );
      if (param_5) {
         fVar14 = fVar15 * fVar14 + fVar16 * fVar13 + fVar2 * fVar12;
         fVar15 = fVar15 - fVar14 * fVar11;
         fVar16 = fVar16 - fVar14 * fVar13;
         fVar12 = fVar12 - fVar14 * fVar2;
         fVar14 = fVar15 * fVar15 + fVar16 * fVar16 + fVar12 * fVar12;
         if (_LC2 < fVar14) {
            fVar8 = fVar8 / fVar14;
            if (fVar8 < 0.0) {
               fVar8 = sqrtf(fVar8);
            }
 else {
               fVar8 = SQRT(fVar8);
            }

            *(float*)( param_6 + 8 ) = fVar8 * fVar12 + fVar10;
            *(float*)param_6 = fVar8 * fVar15 + fVar17;
            *(float*)( param_6 + 4 ) = fVar8 * fVar16 + fVar9;
         }
 else {
            *(ulong*)param_6 = CONCAT44(fVar9, fVar17);
            *(float*)( param_6 + 8 ) = fVar10;
         }

      }
 else {
         fVar14 = ( *pfVar1 - fVar15 ) * fVar14 + ( pfVar1[1] - fVar16 ) * fVar13 + ( pfVar1[2] - fVar12 ) * fVar2;
         fVar12 = fVar2 * fVar14 + fVar12;
         fVar15 = fVar15 + fVar14 * fVar11;
         fVar16 = fVar16 + fVar14 * fVar13;
         *(float*)( param_6 + 8 ) = fVar12;
         *(float*)param_6 = fVar15;
         *(float*)( param_6 + 4 ) = fVar16;
         if (fVar18 < fVar15 * fVar15 + fVar16 * fVar16 + fVar12 * fVar12) {
            fVar15 = fVar15 - fVar17;
            fVar16 = fVar16 - fVar9;
            fVar12 = fVar12 - fVar10;
            fVar8 = fVar8 / ( fVar15 * fVar15 + fVar16 * fVar16 + fVar12 * fVar12 );
            if (fVar8 < 0.0) {
               fVar8 = sqrtf(fVar8);
            }
 else {
               fVar8 = SQRT(fVar8);
            }

            *(float*)( param_6 + 8 ) = fVar12 * fVar8 + fVar10;
            *(ulong*)param_6 = CONCAT44(fVar8 * fVar16 + fVar9, fVar8 * fVar15 + fVar17);
         }

      }

      uVar5 = 0;
      if (param_2 != 0) {
         uVar6 = (ulong)param_5;
         do {
            fVar14 = pfVar7[3];
            fVar2 = pfVar7[4];
            fVar9 = pfVar7[5];
            if (0.0 < ( *pfVar7 - *(float*)param_6 ) * fVar14 + ( pfVar7[1] - *(float*)( param_6 + 4 ) ) * fVar2 + ( pfVar7[2] - *(float*)( param_6 + 8 ) ) * fVar9) {
               fVar11 = pfVar1[3];
               fVar13 = pfVar1[4];
               fVar18 = pfVar1[5];
               fVar8 = fVar14 * fVar13 - fVar2 * fVar11;
               fVar10 = fVar9 * fVar11 - fVar14 * fVar18;
               fVar12 = fVar2 * fVar18 - fVar9 * fVar13;
               fVar15 = fVar12 * fVar12 + fVar10 * fVar10 + fVar8 * fVar8;
               if (fVar15 <= _LC2) goto LAB_00100768;
               fStack_40 = _LC3 / SQRT(fVar15);
               fStack_44 = fVar10 * fStack_40;
               local_48 = fVar12 * fStack_40;
               fStack_40 = fVar8 * fStack_40;
               fVar12 = fVar13 * local_48 - fVar11 * fStack_44;
               fVar11 = fVar11 * fStack_40 - fVar18 * local_48;
               fVar13 = fVar18 * fStack_44 - fVar13 * fStack_40;
               fVar14 = ( ( *pfVar7 - *pfVar1 ) * fVar14 + ( pfVar7[1] - pfVar1[1] ) * fVar2 + ( pfVar7[2] - pfVar1[2] ) * fVar9 ) / ( fVar14 * fVar13 + fVar2 * fVar11 + fVar9 * fVar12 );
               fStack_3c = fVar13 * fVar14 + *pfVar1;
               local_38 = fVar11 * fVar14 + pfVar1[1];
               local_34 = fVar14 * fVar12 + pfVar1[2];
               cVar3 = linearProgram1(param_1, uVar5, (Line3D*)&local_48, param_3, param_4, SUB81(uVar6, 0), param_6);
               if (cVar3 == '\0') goto LAB_00100768;
            }

            uVar5 = uVar5 + 1;
            pfVar7 = pfVar7 + 6;
         }
 while ( param_2 != uVar5 );
      }

      uVar4 = 1;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RVO3D::linearProgram3(std::vector<RVO3D::Plane, std::allocator<RVO3D::Plane> > const&, float,
   RVO3D::Vector3 const&, bool, RVO3D::Vector3&) */ulong RVO3D::linearProgram3(vector *param_1, float param_2, Vector3 *param_3, bool param_4, Vector3 *param_5) {
   float fVar1;
   long lVar2;
   char cVar3;
   ulong uVar4;
   ulong uVar5;
   float *pfVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   undefined8 uVar10;
   uVar10 = *(undefined8*)param_3;
   fVar8 = *(float*)( param_3 + 8 );
   fVar1 = (float)( (ulong)uVar10 >> 0x20 );
   fVar9 = (float)uVar10;
   if (param_4) {
      uVar10 = CONCAT44(fVar1 * param_2, fVar9 * param_2);
      fVar8 = fVar8 * param_2;
   }
 else {
      fVar7 = fVar9 * fVar9 + fVar1 * fVar1 + fVar8 * fVar8;
      if (param_2 * param_2 < fVar7) {
         fVar7 = _LC3 / SQRT(fVar7);
         fVar8 = fVar8 * fVar7 * param_2;
         uVar10 = CONCAT44(fVar1 * fVar7 * param_2, fVar9 * fVar7 * param_2);
      }

   }

   pfVar6 = *(float**)param_1;
   lVar2 = *(long*)( param_1 + 8 );
   *(undefined8*)param_5 = uVar10;
   *(float*)( param_5 + 8 ) = fVar8;
   uVar4 = ( lVar2 - (long)pfVar6 >> 3 ) * -0x5555555555555555;
   if (uVar4 != 0) {
      uVar5 = 0;
      do {
         fVar8 = *(float*)( param_5 + 4 );
         fVar1 = *(float*)param_5;
         fVar9 = *(float*)( param_5 + 8 );
         if (( 0.0 < ( *pfVar6 - fVar1 ) * pfVar6[3] + ( pfVar6[1] - fVar8 ) * pfVar6[4] + ( pfVar6[2] - fVar9 ) * pfVar6[5] ) && ( cVar3 = linearProgram2(param_1, uVar5, param_2, param_3, param_4, param_5) ),cVar3 == '\0') {
            *(float*)param_5 = fVar1;
            *(float*)( param_5 + 4 ) = fVar8;
            *(float*)( param_5 + 8 ) = fVar9;
            return uVar5;
         }

         uVar5 = uVar5 + 1;
         pfVar6 = pfVar6 + 6;
      }
 while ( uVar5 != uVar4 );
   }

   return uVar4;
}
/* RVO3D::linearProgram4(std::vector<RVO3D::Plane, std::allocator<RVO3D::Plane> > const&, unsigned
   long, float, RVO3D::Vector3&) */void RVO3D::linearProgram4(vector *param_1, ulong param_2, float param_3, Vector3 *param_4) {
   undefined8 uVar1;
   float *pfVar2;
   undefined8 *puVar3;
   float *pfVar4;
   float *pfVar5;
   undefined8 *puVar6;
   long lVar7;
   ulong uVar8;
   void *pvVar9;
   long in_FS_OFFSET;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   float fVar19;
   float local_98;
   float fStack_94;
   ulong local_88;
   undefined1 local_78[16];
   undefined8 *local_68;
   float local_58;
   float fStack_54;
   undefined8 uStack_50;
   float fStack_48;
   float fStack_44;
   long local_40;
   lVar7 = *(long*)( param_1 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pfVar2 = *(float**)param_1;
   if (( ulong )(( lVar7 - (long)pfVar2 >> 3 ) * -0x5555555555555555) <= param_2) {
      LAB_00100fd0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   fVar12 = 0.0;
   pfVar4 = pfVar2;
   do {
      pfVar5 = pfVar4 + param_2 * 6;
      pfVar4 = pfVar2;
      if (fVar12 < ( pfVar5[1] - *(float*)( param_4 + 4 ) ) * pfVar5[4] + ( *pfVar5 - *(float*)param_4 ) * pfVar5[3] + ( pfVar5[2] - *(float*)( param_4 + 8 ) ) * pfVar5[5]) {
         local_68 = (undefined8*)0x0;
         local_78 = (undefined1[16])0x0;
         if (param_2 == 0) {
            pvVar9 = (void*)0x0;
            linearProgram3((vector*)local_78, param_3, (Vector3*)( pfVar2 + 3 ), true, param_4);
            local_88 = 0;
            LAB_00100fa5:local_98 = *(float*)param_4;
            fStack_94 = *(float*)( param_4 + 4 );
            fVar12 = *(float*)( param_4 + 8 );
         }
 else {
            pfVar4 = pfVar2 + param_2 * 6;
            uVar8 = 0;
            puVar3 = (undefined8*)0x0;
            puVar6 = (undefined8*)0x0;
            do {
               while (true) {
                  fVar12 = pfVar4[3];
                  fStack_54 = 0.0;
                  uStack_50 = 0;
                  fStack_48 = 0.0;
                  pfVar5 = pfVar2 + uVar8 * 6;
                  fStack_44 = 0.0;
                  fVar10 = pfVar5[3];
                  fVar17 = (float)*(undefined8*)( pfVar4 + 4 );
                  fVar18 = (float)( ( ulong ) * (undefined8*)( pfVar4 + 4 ) >> 0x20 );
                  fVar15 = (float)*(undefined8*)( pfVar5 + 4 );
                  fVar16 = (float)( ( ulong ) * (undefined8*)( pfVar5 + 4 ) >> 0x20 );
                  fVar13 = fVar10 * fVar17 - fVar12 * fVar15;
                  fVar11 = fVar12 * fVar16 - fVar10 * fVar18;
                  fVar14 = fVar18 * fVar15 - fVar17 * fVar16;
                  if (_LC2 < fVar14 * fVar14 + fVar11 * fVar11 + fVar13 * fVar13) break;
                  if (fVar15 * fVar17 + fVar10 * fVar12 + fVar18 * fVar16 <= 0.0) {
                     local_58 = _LC5 * ( *pfVar4 + *pfVar5 );
                     fVar14 = ( pfVar4[2] + pfVar5[2] ) * _LC5;
                     fStack_54 = ( pfVar4[1] + pfVar5[1] ) * _LC5;
                     goto LAB_00100c23;
                  }

                  LAB_00100ca1:uVar8 = uVar8 + 1;
                  if (uVar8 == param_2) goto LAB_00100e68;
               }
;
               fVar19 = fVar12 * fVar13 - fVar14 * fVar18;
               fVar14 = fVar14 * fVar17 - fVar12 * fVar11;
               fVar11 = fVar11 * fVar18 - fVar13 * fVar17;
               fVar13 = ( ( *pfVar5 - *pfVar4 ) * fVar10 + ( pfVar5[1] - pfVar4[1] ) * fVar15 + ( pfVar5[2] - pfVar4[2] ) * fVar16 ) / ( fVar15 * fVar19 + fVar10 * fVar11 + fVar16 * fVar14 );
               fVar14 = fVar14 * fVar13 + pfVar4[2];
               fStack_54 = fVar19 * fVar13 + pfVar4[1];
               local_58 = *pfVar4 + fVar13 * fVar11;
               LAB_00100c23:fVar15 = fVar15 - fVar17;
               fVar16 = fVar16 - fVar18;
               fVar10 = fVar10 - fVar12;
               fVar12 = _LC3 / SQRT(fVar10 * fVar10 + fVar15 * fVar15 + fVar16 * fVar16);
               fStack_48 = fVar12 * fVar15;
               fStack_44 = fVar12 * fVar16;
               uStack_50 = CONCAT44(fVar10 * fVar12, fVar14);
               if (puVar6 != puVar3) {
                  *puVar6 = CONCAT44(fStack_54, local_58);
                  puVar6[1] = uStack_50;
                  puVar6[2] = CONCAT44(fStack_44, fStack_48);
                  local_78._8_8_ = puVar6 + 3;
                  puVar6 = puVar6 + 3;
                  goto LAB_00100ca1;
               }

               uVar8 = uVar8 + 1;
               std::vector<RVO3D::Plane,std::allocator<RVO3D::Plane>>::_M_realloc_insert<RVO3D::Plane_const&>((vector<RVO3D::Plane,std::allocator<RVO3D::Plane>>*)local_78, puVar6, &local_58);
               pfVar2 = *(float**)param_1;
               pfVar4 = pfVar2 + param_2 * 6;
               puVar3 = local_68;
               puVar6 = (undefined8*)local_78._8_8_;
            }
 while ( uVar8 != param_2 );
            LAB_00100e68:pvVar9 = (void*)local_78._0_8_;
            uVar1 = *(undefined8*)param_4;
            local_88 = (long)puVar3 - local_78._0_8_;
            lVar7 = (long)puVar6 - local_78._0_8_;
            fVar12 = *(float*)( param_4 + 8 );
            uVar8 = linearProgram3((vector*)local_78, param_3, (Vector3*)( pfVar4 + 3 ), true, param_4);
            local_98 = (float)uVar1;
            fStack_94 = (float)( (ulong)uVar1 >> 0x20 );
            if (( ulong )(( lVar7 >> 3 ) * -0x5555555555555555) <= uVar8) goto LAB_00100fa5;
            *(float*)param_4 = local_98;
            *(float*)( param_4 + 4 ) = fStack_94;
            *(float*)( param_4 + 8 ) = fVar12;
         }

         fVar12 = ( *pfVar4 - local_98 ) * pfVar4[3] + ( pfVar4[1] - fStack_94 ) * pfVar4[4] + ( pfVar4[2] - fVar12 ) * pfVar4[5];
         if (pvVar9 == (void*)0x0) {
            lVar7 = *(long*)( param_1 + 8 );
            pfVar4 = pfVar2;
         }
 else {
            operator_delete(pvVar9, local_88);
            lVar7 = *(long*)( param_1 + 8 );
            pfVar4 = *(float**)param_1;
         }

      }

      param_2 = param_2 + 1;
      if (( ulong )(( lVar7 - (long)pfVar4 >> 3 ) * -0x5555555555555555) <= param_2) goto LAB_00100fd0;
      pfVar2 = *(float**)param_1;
   }
 while ( true );
}
/* RVO3D::Agent3D::computeNewVelocity(RVO3D::RVOSimulator3D*) */void RVO3D::Agent3D::computeNewVelocity(Agent3D *this, RVOSimulator3D *param_1) {
   vector *pvVar1;
   float fVar2;
   float *pfVar3;
   long lVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   float fVar19;
   float fVar20;
   float fVar21;
   float fVar22;
   float local_48;
   float fStack_44;
   float fStack_40;
   float fStack_3c;
   undefined8 local_38;
   long local_30;
   pvVar1 = (vector*)( this + 0x78 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x78 ) != *(long*)( this + 0x80 )) {
      *(long*)( this + 0x80 ) = *(long*)( this + 0x78 );
   }

   fVar14 = _LC3 / *(float*)( this + 0x54 );
   lVar4 = *(long*)( this + 0x60 );
   if (*(long*)( this + 0x68 ) != lVar4) {
      uVar5 = 0;
      do {
         lVar4 = *(long*)( lVar4 + 8 + uVar5 * 0x10 );
         fVar10 = *(float*)( lVar4 + 0xc ) - *(float*)( this + 0xc );
         fVar17 = (float)*(undefined8*)( lVar4 + 0x10 ) - (float)*(undefined8*)( this + 0x10 );
         fVar18 = (float)( ( ulong ) * (undefined8*)( lVar4 + 0x10 ) >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( this + 0x10 ) >> 0x20 );
         fVar19 = *(float*)( this + 0x50 ) + *(float*)( lVar4 + 0x50 );
         fVar6 = (float)*(undefined8*)( this + 0x28 );
         fVar8 = (float)( ( ulong ) * (undefined8*)( this + 0x28 ) >> 0x20 );
         fVar7 = fVar6 - (float)*(undefined8*)( lVar4 + 0x28 );
         fVar9 = fVar8 - (float)( ( ulong ) * (undefined8*)( lVar4 + 0x28 ) >> 0x20 );
         fVar2 = *(float*)( this + 0x24 );
         fVar22 = fVar19 * fVar19;
         fVar11 = fVar2 - *(float*)( lVar4 + 0x24 );
         fVar12 = fVar17 * fVar17 + fVar10 * fVar10 + fVar18 * fVar18;
         if (fVar22 < fVar12) {
            fVar20 = fVar7 - fVar14 * fVar17;
            fVar21 = fVar9 - fVar14 * fVar18;
            fVar15 = fVar11 - fVar14 * fVar10;
            fVar16 = fVar20 * fVar17 + fVar10 * fVar15 + fVar21 * fVar18;
            if (fVar16 < 0.0) {
               fVar13 = fVar15 * fVar15 + fVar20 * fVar20 + fVar21 * fVar21;
               if (fVar22 * fVar13 < fVar16 * fVar16) {
                  fVar13 = SQRT(fVar13);
                  fVar7 = _LC3 / fVar13;
                  fVar13 = fVar19 * fVar14 - fVar13;
                  local_38 = CONCAT44(fVar7 * fVar21, fVar7 * fVar20);
                  fStack_3c = fVar7 * fVar15;
                  fVar9 = fVar7 * fVar21 * fVar13;
                  fVar7 = fVar7 * fVar20 * fVar13;
                  fVar13 = fVar13 * fStack_3c;
                  goto LAB_00101281;
               }

            }

            fVar16 = fVar11 * fVar10 + fVar17 * fVar7 + fVar18 * fVar9;
            fVar21 = fVar10 * fVar7 - fVar11 * fVar17;
            fVar15 = fVar17 * fVar9 - fVar18 * fVar7;
            fVar20 = fVar11 * fVar18 - fVar10 * fVar9;
            fVar22 = fVar16 * fVar16 - ( ( fVar11 * fVar11 + fVar7 * fVar7 + fVar9 * fVar9 ) - ( fVar20 * fVar20 + fVar15 * fVar15 + fVar21 * fVar21 ) / ( fVar12 - fVar22 ) ) * fVar12;
            if (fVar22 < 0.0) {
               fVar22 = sqrtf(fVar22);
            }
 else {
               fVar22 = SQRT(fVar22);
            }

            fVar12 = ( fVar16 + fVar22 ) / fVar12;
            fVar11 = fVar11 - fVar10 * fVar12;
            fVar7 = fVar7 - fVar12 * fVar17;
            fVar9 = fVar9 - fVar12 * fVar18;
            fVar13 = SQRT(fVar11 * fVar11 + fVar7 * fVar7 + fVar9 * fVar9);
            fVar10 = _LC3 / fVar13;
            fVar13 = fVar12 * fVar19 - fVar13;
            local_38 = CONCAT44(fVar10 * fVar9, fVar10 * fVar7);
            fStack_3c = fVar10 * fVar11;
            fVar7 = fVar10 * fVar7 * fVar13;
            fVar9 = fVar10 * fVar9 * fVar13;
            fVar13 = fVar13 * fStack_3c;
         }
 else {
            fVar12 = _LC3 / *(float*)( param_1 + 0x14 );
            fVar7 = fVar7 - fVar12 * fVar17;
            fVar9 = fVar9 - fVar12 * fVar18;
            fVar11 = fVar11 - fVar10 * fVar12;
            fVar13 = SQRT(fVar11 * fVar11 + fVar7 * fVar7 + fVar9 * fVar9);
            fVar10 = _LC3 / fVar13;
            fVar13 = fVar12 * fVar19 - fVar13;
            local_38 = CONCAT44(fVar10 * fVar9, fVar10 * fVar7);
            fStack_3c = fVar10 * fVar11;
            fVar9 = fVar10 * fVar9 * fVar13;
            fVar7 = fVar10 * fVar7 * fVar13;
            fVar13 = fVar13 * fStack_3c;
         }

         LAB_00101281:fStack_44 = fVar7 * _LC5 + fVar6;
         fStack_40 = fVar9 * _LC5 + fVar8;
         pfVar3 = *(float**)( this + 0x80 );
         local_48 = _LC5 * fVar13 + fVar2;
         if (pfVar3 == *(float**)( this + 0x88 )) {
            std::vector<RVO3D::Plane,std::allocator<RVO3D::Plane>>::_M_realloc_insert<RVO3D::Plane_const&>((vector<RVO3D::Plane,std::allocator<RVO3D::Plane>>*)pvVar1, pfVar3, &local_48);
         }
 else {
            *pfVar3 = local_48;
            pfVar3[1] = fStack_44;
            pfVar3[2] = fStack_40;
            pfVar3[3] = fStack_3c;
            *(undefined8*)( pfVar3 + 4 ) = local_38;
            *(float**)( this + 0x80 ) = pfVar3 + 6;
         }

         lVar4 = *(long*)( this + 0x60 );
         uVar5 = uVar5 + 1;
      }
 while ( uVar5 < ( ulong )(*(long*)( this + 0x68 ) - lVar4 >> 4) );
   }

   fVar14 = *(float*)( this + 0x48 );
   uVar5 = linearProgram3(pvVar1, fVar14, (Vector3*)( this + 0x18 ), false, (Vector3*)this);
   if (uVar5 < ( ulong )(( *(long*)( this + 0x80 ) - *(long*)( this + 0x78 ) >> 3 ) * -0x5555555555555555)) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         linearProgram4(pvVar1, uVar5, fVar14, (Vector3*)this);
         return;
      }

   }
 else if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RVO3D::Agent3D::insertAgentNeighbor(RVO3D::Agent3D const*, float&) */void RVO3D::Agent3D::insertAgentNeighbor(Agent3D *this, Agent3D *param_1, float *param_2) {
   undefined8 *puVar1;
   float *pfVar2;
   float *pfVar3;
   long lVar4;
   ulong uVar5;
   undefined8 *puVar6;
   float *pfVar7;
   ulong uVar8;
   long in_FS_OFFSET;
   float fVar9;
   float local_38;
   undefined4 uStack_34;
   Agent3D *pAStack_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( ( this != param_1 ) && ( ( *(uint*)( this + 0x98 ) & *(uint*)( param_1 + 0x94 ) ) != 0 ) ) && ( *(float*)( this + 0x9c ) < *(float*)( param_1 + 0x9c ) || *(float*)( this + 0x9c ) == *(float*)( param_1 + 0x9c ) ) ) && ( fVar9 = ( *(float*)( this + 0x10 ) - *(float*)( param_1 + 0x10 ) ) * ( *(float*)( this + 0x10 ) - *(float*)( param_1 + 0x10 ) ) + ( *(float*)( this + 0xc ) - *(float*)( param_1 + 0xc ) ) * ( *(float*)( this + 0xc ) - *(float*)( param_1 + 0xc ) ) + ( *(float*)( this + 0x14 ) - *(float*)( param_1 + 0x14 ) ) * ( *(float*)( this + 0x14 ) - *(float*)( param_1 + 0x14 ) ) ),fVar9 < *param_2) {
      puVar1 = *(undefined8**)( this + 0x68 );
      pfVar7 = *(float**)( this + 0x60 );
      uVar8 = *(ulong*)( this + 0x40 );
      uVar5 = (long)puVar1 - (long)pfVar7 >> 4;
      puVar6 = puVar1;
      if (uVar5 < uVar8) {
         local_38 = fVar9;
         pAStack_30 = param_1;
         if (puVar1 == *(undefined8**)( this + 0x70 )) {
            std::vector<std::pair<float,RVO3D::Agent3D_const*>,std::allocator<std::pair<float,RVO3D::Agent3D_const*>>>::_M_realloc_insert<std::pair<float,RVO3D::Agent3D_const*>>((vector<std::pair<float,RVO3D::Agent3D_const*>,std::allocator<std::pair<float,RVO3D::Agent3D_const*>>>*)( this + 0x60 ), puVar1, &local_38);
            puVar6 = *(undefined8**)( this + 0x68 );
            pfVar7 = *(float**)( this + 0x60 );
            uVar8 = *(ulong*)( this + 0x40 );
         }
 else {
            puVar6 = puVar1 + 2;
            *puVar1 = CONCAT44(uStack_34, fVar9);
            puVar1[1] = param_1;
            *(undefined8**)( this + 0x68 ) = puVar6;
         }

         uVar5 = (long)puVar6 - (long)pfVar7 >> 4;
      }

      lVar4 = uVar5 - 1;
      pfVar3 = pfVar7;
      if (lVar4 != 0) {
         pfVar2 = pfVar7 + lVar4 * 4;
         do {
            lVar4 = lVar4 + -1;
            pfVar3 = pfVar2;
            if (pfVar2[-4] <= fVar9) break;
            *pfVar2 = pfVar2[-4];
            *(undefined8*)( pfVar2 + 2 ) = *(undefined8*)( pfVar2 + -2 );
            pfVar2 = pfVar2 + -4;
            pfVar3 = pfVar7;
         }
 while ( lVar4 != 0 );
      }

      *(Agent3D**)( pfVar3 + 2 ) = param_1;
      *pfVar3 = fVar9;
      if (uVar8 == uVar5) {
         *param_2 = *(float*)( puVar6 + -2 );
      }

   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Control flow encountered bad instruction data *//* void std::vector<RVO3D::Plane, std::allocator<RVO3D::Plane> >::_M_realloc_insert<RVO3D::Plane
   const&>(__gnu_cxx::__normal_iterator<RVO3D::Plane*, std::vector<RVO3D::Plane,
   std::allocator<RVO3D::Plane> > >, RVO3D::Plane const&) */void std::vector<RVO3D::Plane,std::allocator<RVO3D::Plane>>::_M_realloc_insert<RVO3D::Plane_const&>(vector<RVO3D::Plane,std::allocator<RVO3D::Plane>> *this, undefined8 *param_2, undefined8 *param_3) {
   undefined8 *puVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   long lVar4;
   ulong uVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   ulong uVar9;
   undefined8 *puVar10;
   puVar8 = *(undefined8**)( this + 8 );
   puVar1 = *(undefined8**)this;
   lVar4 = (long)puVar8 - (long)puVar1 >> 3;
   uVar5 = lVar4 * -0x5555555555555555;
   if (uVar5 == 0x555555555555555) {
      std::__throw_length_error("vector::_M_realloc_insert");
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   if (puVar1 == puVar8) {
      uVar9 = uVar5 + 1;
      if (0xfffffffffffffffe < uVar5) goto LAB_00101920;
      if (0x555555555555555 < uVar9) {
         uVar9 = 0x555555555555555;
      }

      uVar9 = uVar9 * 0x18;
   }
 else {
      uVar9 = lVar4 * 0x5555555555555556;
      if (uVar9 < uVar5) {
         LAB_00101920:uVar9 = 0x7ffffffffffffff8;
      }
 else {
         if (uVar9 == 0) {
            puVar10 = (undefined8*)0x18;
            lVar4 = 0;
            puVar6 = (undefined8*)0x0;
            goto LAB_001017fb;
         }

         if (0x555555555555555 < uVar9) {
            uVar9 = 0x555555555555555;
         }

         uVar9 = uVar9 * 0x18;
      }

   }

   puVar6 = (undefined8*)operator_new(uVar9);
   lVar4 = uVar9 + (long)puVar6;
   puVar10 = puVar6 + 3;
   LAB_001017fb:uVar2 = *param_3;
   uVar3 = param_3[1];
   puVar7 = (undefined8*)( (long)puVar6 + ( (long)param_2 - (long)puVar1 ) );
   puVar7[2] = param_3[2];
   *puVar7 = uVar2;
   puVar7[1] = uVar3;
   if (param_2 != puVar1) {
      uVar5 = 0;
      uVar9 = ( ( ulong )((long)param_2 + ( -0x18 - (long)puVar1 )) >> 3 ) * 0xaaaaaaaaaaaaaab & 0x1fffffffffffffff;
      puVar10 = puVar1;
      puVar7 = puVar6;
      do {
         uVar2 = puVar10[2];
         uVar5 = uVar5 + 1;
         uVar3 = *puVar10;
         puVar7[1] = puVar10[1];
         *puVar7 = uVar3;
         puVar7[2] = uVar2;
         puVar10 = puVar10 + 3;
         puVar7 = puVar7 + 3;
      }
 while ( uVar5 < uVar9 + 1 );
      puVar10 = puVar6 + uVar9 * 3 + 6;
   }

   if (param_2 != puVar8) {
      uVar5 = 0;
      uVar9 = ( ( ( ulong )((long)puVar8 + ( -0x18 - (long)param_2 )) >> 3 ) * 0xaaaaaaaaaaaaaab & 0x1fffffffffffffff ) + 1;
      puVar8 = puVar10;
      do {
         uVar2 = param_2[2];
         uVar5 = uVar5 + 1;
         uVar3 = *param_2;
         puVar8[1] = param_2[1];
         *puVar8 = uVar3;
         puVar8[2] = uVar2;
         param_2 = param_2 + 3;
         puVar8 = puVar8 + 3;
      }
 while ( uVar5 < uVar9 );
      puVar10 = puVar10 + uVar9 * 3;
   }

   if (puVar1 != (undefined8*)0x0) {
      operator_delete(puVar1, *(long*)( this + 0x10 ) - (long)puVar1);
   }

   *(undefined8**)this = puVar6;
   *(undefined8**)( this + 8 ) = puVar10;
   *(long*)( this + 0x10 ) = lVar4;
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* void std::vector<std::pair<float, RVO3D::Agent3D const*>, std::allocator<std::pair<float,
   RVO3D::Agent3D const*> > >::_M_realloc_insert<std::pair<float, RVO3D::Agent3D const*>
   >(__gnu_cxx::__normal_iterator<std::pair<float, RVO3D::Agent3D const*>*,
   std::vector<std::pair<float, RVO3D::Agent3D const*>, std::allocator<std::pair<float,
   RVO3D::Agent3D const*> > > >, std::pair<float, RVO3D::Agent3D const*>&&) */void std::vector<std::pair<float,RVO3D::Agent3D_const*>,std::allocator<std::pair<float,RVO3D::Agent3D_const*>>>::_M_realloc_insert<std::pair<float,RVO3D::Agent3D_const*>>(vector<std::pair<float,RVO3D::Agent3D_const*>,std::allocator<std::pair<float,RVO3D::Agent3D_const*>>> *this, undefined8 *param_2, undefined8 *param_3) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   ulong uVar5;
   undefined8 *puVar6;
   ulong uVar7;
   undefined8 *puVar8;
   undefined8 *puVar9;
   undefined8 *puVar10;
   long lVar11;
   puVar1 = *(undefined8**)( this + 8 );
   puVar2 = *(undefined8**)this;
   uVar5 = (long)puVar1 - (long)puVar2 >> 4;
   if (uVar5 == 0x7ffffffffffffff) {
      std::__throw_length_error("vector::_M_realloc_insert");
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   puVar8 = (undefined8*)( (long)param_2 - (long)puVar2 );
   if (puVar2 == puVar1) {
      if (0xfffffffffffffffe < uVar5) goto LAB_00101ab8;
      uVar7 = 0x7ffffffffffffff;
      if (uVar5 + 1 < 0x800000000000000) {
         uVar7 = uVar5 + 1;
      }

      uVar7 = uVar7 << 4;
      LAB_00101ac2:puVar6 = (undefined8*)operator_new(uVar7);
      uVar3 = param_3[1];
      lVar11 = uVar7 + (long)puVar6;
      puVar10 = puVar6 + 2;
      *(undefined8*)( (long)puVar6 + (long)puVar8 ) = *param_3;
      ( (undefined8*)( (long)puVar6 + (long)puVar8 ) )[1] = uVar3;
      if (param_2 != puVar2) {
         LAB_00101a2a:puVar8 = puVar6;
         puVar9 = puVar2;
         do {
            puVar10 = puVar8;
            uVar3 = *puVar9;
            uVar4 = puVar9[1];
            puVar9 = puVar9 + 2;
            *puVar10 = uVar3;
            puVar10[1] = uVar4;
            puVar8 = puVar10 + 2;
         }
 while ( puVar10 + 2 != (undefined8*)( ( (long)param_2 - (long)puVar2 ) + (long)puVar6 ) );
         puVar10 = puVar10 + 4;
      }

      puVar8 = puVar10;
      if (param_2 == puVar1) goto LAB_00101a7c;
   }
 else {
      uVar7 = uVar5 * 2;
      if (uVar7 < uVar5) {
         LAB_00101ab8:uVar7 = 0x7ffffffffffffff0;
         goto LAB_00101ac2;
      }

      if (uVar7 != 0) {
         if (0x7ffffffffffffff < uVar7) {
            uVar7 = 0x7ffffffffffffff;
         }

         uVar7 = uVar7 << 4;
         goto LAB_00101ac2;
      }

      uVar3 = param_3[1];
      lVar11 = 0;
      puVar6 = (undefined8*)0x0;
      puVar10 = (undefined8*)0x10;
      *puVar8 = *param_3;
      puVar8[1] = uVar3;
      if (param_2 != puVar2) goto LAB_00101a2a;
   }

   puVar8 = (undefined8*)( (long)puVar10 + ( (long)puVar1 - (long)param_2 ) );
   memcpy(puVar10, param_2, (long)puVar1 - (long)param_2);
   LAB_00101a7c:if (puVar2 != (undefined8*)0x0) {
      operator_delete(puVar2, *(long*)( this + 0x10 ) - (long)puVar2);
   }

   *(undefined8**)this = puVar6;
   *(undefined8**)( this + 8 ) = puVar8;
   *(long*)( this + 0x10 ) = lVar11;
   return;
}

