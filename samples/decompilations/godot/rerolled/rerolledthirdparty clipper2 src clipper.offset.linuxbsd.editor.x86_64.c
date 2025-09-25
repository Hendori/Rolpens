/* Clipper2Lib::GetLowestClosedPathIdx(std::vector<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >, std::allocator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > > > const&) */undefined1[16];Clipper2Lib::GetLowestClosedPathIdx(vector *param_1) {
   long *plVar1;
   undefined8 *puVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   ulong uVar6;
   long lVar7;
   long lVar8;
   undefined1 uVar9;
   ulong uVar10;
   undefined1 auVar11[16];
   uVar10 = 0;
   puVar2 = *(undefined8**)param_1;
   lVar3 = (long)*(undefined8**)( param_1 + 8 ) - (long)puVar2;
   if (*(undefined8**)( param_1 + 8 ) == puVar2) {
      uVar9 = 0;
      LAB_001000b5:auVar11[8] = uVar9;
      auVar11._0_8_ = uVar10;
      auVar11._9_7_ = 0;
      return auVar11;
   }

   lVar4 = -0x8000000000000000;
   uVar6 = 0;
   uVar9 = 0;
   lVar7 = 0x7fffffffffffffff;
   do {
      plVar1 = (long*)*puVar2;
      joined_r0x00100062:lVar8 = lVar7;
      if ((long*)puVar2[1] != plVar1) {
         do {
            lVar5 = plVar1[1];
            lVar7 = lVar8;
            if (lVar4 <= lVar5) {
               lVar7 = *plVar1;
               if (( lVar4 == lVar5 ) && ( lVar5 = lVar8 <= lVar7 )) goto code_r0x0010009b;
               uVar9 = 1;
               lVar4 = lVar5;
               uVar10 = uVar6;
            }

            plVar1 = plVar1 + 2;
            lVar8 = lVar7;
            if ((long*)puVar2[1] == plVar1) break;
         }
 while ( true );
      }

      uVar6 = uVar6 + 1;
      puVar2 = puVar2 + 3;
      if (( ulong )(( lVar3 >> 3 ) * -0x5555555555555555) <= uVar6) goto LAB_001000b5;
   }
 while ( true );
   code_r0x0010009b:plVar1 = plVar1 + 2;
   lVar7 = lVar8;
   goto joined_r0x00100062;
}
/* Clipper2Lib::GetUnitNormal(Clipper2Lib::Point<long> const&, Clipper2Lib::Point<long> const&) */undefined1[16];Clipper2Lib::GetUnitNormal(Point *param_1, Point *param_2) {
   double dVar1;
   double __y;
   double __x;
   undefined1 local_28[16];
   if (( *(long*)param_1 == *(long*)param_2 ) && ( *(long*)( param_1 + 8 ) == *(long*)( param_2 + 8 ) )) {
      return (undefined1[16])0x0;
   }

   __x = (double)( *(long*)param_2 - *(long*)param_1 );
   __y = (double)( *(long*)( param_2 + 8 ) - *(long*)( param_1 + 8 ) );
   dVar1 = hypot(__x, __y);
   local_28._8_8_ = ( ulong )(__x * ( _LC0 / dVar1 )) ^ _LC15;
   local_28._0_8_ = __y * ( _LC0 / dVar1 );
   return local_28;
}
/* Clipper2Lib::ClipperOffset::Group::Group(std::vector<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >, std::allocator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > > > const&, Clipper2Lib::JoinType,
   Clipper2Lib::EndType) */void Clipper2Lib::ClipperOffset::Group::Group(Group *this, long *param_1, undefined4 param_3, uint param_4) {
   undefined8 uVar1;
   void *pvVar2;
   long *plVar3;
   long lVar4;
   long *plVar5;
   long *plVar6;
   long lVar7;
   Group GVar8;
   long lVar9;
   long *plVar10;
   long lVar11;
   undefined1(*unaff_RBX)[16];
   undefined1(*pauVar12)[16];
   undefined1(*pauVar13)[16];
   ulong uVar14;
   double dVar15;
   double dVar16;
   undefined1 auVar17[16];
   uVar14 = param_1[1] - *param_1;
   *(undefined1(*) [16])this = (undefined1[16])0x0;
   *(undefined8*)( this + 0x10 ) = 0;
   if (uVar14 == 0) {
      uVar14 = 0;
      unaff_RBX = (undefined1(*) [16])0x0;
      LAB_001001f9:*(undefined1**)( this + 0x10 ) = *unaff_RBX + uVar14;
      *(undefined1(**) [16])this = unaff_RBX;
      *(undefined1(**) [16])( this + 8 ) = unaff_RBX;
      plVar5 = (long*)param_1[1];
      param_1 = (long*)*param_1;
      pauVar12 = unaff_RBX;
      if (plVar5 == param_1) goto LAB_001003f9;
      do {
         uVar14 = param_1[1] - *param_1;
         *(undefined8*)unaff_RBX[1] = 0;
         *unaff_RBX = (undefined1[16])0x0;
         if (uVar14 == 0) {
            pvVar2 = (void*)0x0;
         }
 else {
            if (0x7ffffffffffffff0 < uVar14) {
               if (-1 < (long)uVar14) goto LAB_001003f4;
               goto LAB_001003ef;
            }

            pvVar2 = operator_new(uVar14);
         }

         *(ulong*)unaff_RBX[1] = (long)pvVar2 + uVar14;
         *(void**)*unaff_RBX = pvVar2;
         *(void**)( *unaff_RBX + 8 ) = pvVar2;
         lVar4 = *param_1;
         if (param_1[1] != lVar4) {
            lVar7 = param_1[1] - lVar4;
            lVar9 = 0;
            do {
               uVar1 = ( (undefined8*)( lVar4 + lVar9 ) )[1];
               *(undefined8*)( (long)pvVar2 + lVar9 ) = *(undefined8*)( lVar4 + lVar9 );
               ( (undefined8*)( (long)pvVar2 + lVar9 ) )[1] = uVar1;
               lVar9 = lVar9 + 0x10;
            }
 while ( lVar7 != lVar9 );
            pvVar2 = (void*)( (long)pvVar2 + lVar7 );
         }

         param_1 = param_1 + 3;
         *(void**)( *unaff_RBX + 8 ) = pvVar2;
         unaff_RBX = (undefined1(*) [16])( unaff_RBX[1] + 8 );
      }
 while ( plVar5 != param_1 );
      pauVar12 = *(undefined1(**) [16])this;
      *(undefined1(**) [16])( this + 8 ) = unaff_RBX;
      this[0x20] = (Group)0x0;
      this[0x28] = (Group)0x0;
      *(undefined4*)( this + 0x2c ) = param_3;
      *(uint*)( this + 0x30 ) = param_4;
      for (pauVar13 = pauVar12; unaff_RBX != pauVar13; pauVar13 = (undefined1(*) [16])( pauVar13[1] + 8 )) {
         plVar5 = *(long**)( *pauVar13 + 8 );
         plVar6 = *(long**)*pauVar13;
         if (( plVar5 != plVar6 ) && ( plVar3 = plVar5 != plVar3 )) {
            lVar4 = *plVar6;
            do {
               lVar7 = *plVar3;
               if (( lVar7 == lVar4 ) && ( plVar3[-1] == plVar3[1] )) {
                  plVar10 = plVar3 + -2;
                  if (plVar10 != plVar5) {
                     plVar3 = plVar3 + 2;
                     if (plVar5 != plVar3) {
                        while (true) {
                           if (( lVar4 != *plVar3 ) || ( plVar10[1] != plVar3[1] )) {
                              lVar4 = plVar3[1];
                              plVar10[2] = *plVar3;
                              plVar10[3] = lVar4;
                              plVar10 = plVar10 + 2;
                           }

                           if (plVar5 == plVar3 + 2) break;
                           plVar3 = plVar3 + 2;
                           lVar4 = *plVar10;
                        }
;
                     }

                     if (plVar5 != plVar10 + 2) {
                        *(long**)( *pauVar13 + 8 ) = plVar10 + 2;
                     }

                  }

                  break;
               }

               plVar3 = plVar3 + 2;
               lVar4 = lVar7;
            }
 while ( plVar5 != plVar3 );
         }

         if (( param_4 < 2 ) && ( lVar4 = *(long*)( *pauVar13 + 8 ) ),0x10 < ( ulong )(lVar4 - (long)plVar6)) {
            lVar7 = *plVar6;
            do {
               if (( *(long*)( lVar4 + -0x10 ) != lVar7 ) || ( *(long*)( lVar4 + -8 ) != plVar6[1] )) break;
               lVar4 = lVar4 + -0x10;
               *(long*)( *pauVar13 + 8 ) = lVar4;
            }
 while ( 0x10 < ( ulong )(lVar4 - (long)plVar6) );
         }

      }

   }
 else {
      if (uVar14 < 0x7ffffffffffffff9) {
         unaff_RBX = (undefined1(*) [16])operator_new(uVar14);
         goto LAB_001001f9;
      }

      LAB_001003ef:std::__throw_bad_array_new_length();
      LAB_001003f4:std::__throw_bad_alloc();
      pauVar12 = unaff_RBX;
      LAB_001003f9:*(undefined1(**) [16])( this + 8 ) = pauVar12;
      this[0x20] = (Group)0x0;
      this[0x28] = (Group)0x0;
      *(undefined4*)( this + 0x2c ) = param_3;
      *(uint*)( this + 0x30 ) = param_4;
   }

   if (param_4 != 0) {
      return;
   }

   auVar17 = GetLowestClosedPathIdx((vector*)this);
   GVar8 = this[0x20];
   *(undefined1(*) [16])( this + 0x18 ) = auVar17;
   if (GVar8 == (Group)0x0) goto LAB_0010051c;
   plVar5 = (long*)( (long)pauVar12 + *(long*)( this + 0x18 ) * 0x18 );
   plVar6 = (long*)plVar5[1];
   plVar5 = (long*)*plVar5;
   GVar8 = (Group)0x0;
   if (( ulong )((long)plVar6 - (long)plVar5) < 0x21) goto LAB_0010051c;
   uVar14 = (long)plVar6 - (long)plVar5 >> 4;
   if (( uVar14 & 1 ) == 0) {
      plVar3 = plVar6;
      if (plVar5 == plVar6) goto LAB_0010051c;
      LAB_00100477:lVar4 = plVar6[-1];
      lVar9 = plVar6[-2];
      dVar15 = 0.0;
      do {
         plVar6 = plVar5 + 4;
         lVar11 = lVar4 + plVar5[1];
         lVar7 = lVar9 - *plVar5;
         lVar9 = plVar5[2];
         lVar4 = plVar5[3];
         dVar15 = dVar15 + (double)lVar11 * (double)lVar7 + (double)( plVar5[1] + lVar4 ) * (double)( *plVar5 - lVar9 );
         plVar5 = plVar6;
      }
 while ( plVar3 != plVar6 );
      if (( uVar14 & 1 ) != 0) {
         lVar7 = plVar3[1];
         dVar16 = (double)( lVar9 - *plVar3 );
         goto LAB_001004f5;
      }

   }
 else {
      plVar3 = plVar6 + -2;
      if (plVar5 != plVar6 + -2) goto LAB_00100477;
      lVar7 = plVar6[-1];
      dVar15 = 0.0;
      lVar4 = lVar7;
      dVar16 = dVar15;
      LAB_001004f5:dVar15 = dVar15 + (double)( lVar4 + lVar7 ) * dVar16;
   }

   GVar8 = ( Group )(dVar15 * _LC3 < 0.0);
   LAB_0010051c:this[0x28] = GVar8;
   return;
}
/* Clipper2Lib::ClipperOffset::CalcSolutionCapacity() */long Clipper2Lib::ClipperOffset::CalcSolutionCapacity(ClipperOffset *this) {
   long lVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   lVar3 = 0;
   for (plVar4 = *(long**)( this + 0x78 ); *(long**)( this + 0x80 ) != plVar4; plVar4 = plVar4 + 7) {
      lVar1 = plVar4[1] - *plVar4 >> 3;
      lVar2 = lVar1 * -0x5555555555555555;
      if ((int)plVar4[6] == 1) {
         lVar2 = lVar1 * 0x5555555555555556;
      }

      lVar3 = lVar3 + lVar2;
   }

   return lVar3;
}
/* Clipper2Lib::ClipperOffset::CheckReverseOrientation() */undefined1 Clipper2Lib::ClipperOffset::CheckReverseOrientation(ClipperOffset *this) {
   long lVar1;
   lVar1 = *(long*)( this + 0x78 );
   while (true) {
      if (*(long*)( this + 0x80 ) == lVar1) {
         return 0;
      }

      if (*(int*)( lVar1 + 0x30 ) == 0) break;
      lVar1 = lVar1 + 0x38;
   }
;
   return *(undefined1*)( lVar1 + 0x28 );
}
/* Clipper2Lib::ClipperOffset::Group& std::vector<Clipper2Lib::ClipperOffset::Group,
   std::allocator<Clipper2Lib::ClipperOffset::Group>
   >::emplace_back<Clipper2Lib::ClipperOffset::Group>(Clipper2Lib::ClipperOffset::Group&&) [clone
   .isra.0] */Group * __thiscall
std::vector<Clipper2Lib::ClipperOffset::Group,std::allocator<Clipper2Lib::ClipperOffset::Group>>::
emplace_back<Clipper2Lib::ClipperOffset::Group>
          (vector<Clipper2Lib::ClipperOffset::Group,std::allocator<Clipper2Lib::ClipperOffset::Group>>
           *this,Group *param_1){
   Group GVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   Group *pGVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   Group *extraout_RAX;
   puVar2 = *(undefined8**)( this + 8 );
   if (puVar2 != *(undefined8**)( this + 0x10 )) {
      uVar3 = *(undefined8*)( param_1 + 0x10 );
      uVar5 = *(undefined8*)param_1;
      uVar6 = *(undefined8*)( param_1 + 8 );
      *(undefined8*)( param_1 + 0x10 ) = 0;
      uVar7 = *(undefined8*)( param_1 + 0x18 );
      uVar8 = *(undefined8*)( param_1 + 0x20 );
      puVar2[2] = uVar3;
      GVar1 = param_1[0x28];
      *(undefined1(*) [16])param_1 = (undefined1[16])0x0;
      *puVar2 = uVar5;
      puVar2[1] = uVar6;
      *(Group*)( puVar2 + 5 ) = GVar1;
      pGVar4 = *(Group**)( param_1 + 0x2c );
      puVar2[3] = uVar7;
      puVar2[4] = uVar8;
      *(Group**)( (long)puVar2 + 0x2c ) = pGVar4;
      *(undefined8**)( this + 8 ) = puVar2 + 7;
      return pGVar4;
   }

   _M_realloc_insert<Clipper2Lib::ClipperOffset::Group>();
   return extraout_RAX;
}
/* Clipper2Lib::ClipperOffset::AddPath(std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > const&, Clipper2Lib::JoinType, Clipper2Lib::EndType)
    */void Clipper2Lib::ClipperOffset::AddPath(ClipperOffset *this, undefined8 param_1, undefined4 param_3, undefined4 param_4) {
   void *pvVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 *puVar4;
   long in_FS_OFFSET;
   undefined1 local_98[16];
   long local_88;
   undefined8 *local_78;
   undefined8 *local_70;
   long local_68;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = (undefined1[16])0x0;
   local_88 = 0;
   std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > ::_M_realloc_insert<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>const&>(( vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > *)local_98,0,param_1 ));
   uVar3 = local_98._8_8_;
   uVar2 = local_98._0_8_;
   if (local_98._8_8_ != local_98._0_8_) {
      Group::Group((Group*)&local_78, ( vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > *)local_98,param_3,param_4 ));
      std::vector<Clipper2Lib::ClipperOffset::Group,std::allocator<Clipper2Lib::ClipperOffset::Group>>::emplace_back<Clipper2Lib::ClipperOffset::Group>((vector<Clipper2Lib::ClipperOffset::Group,std::allocator<Clipper2Lib::ClipperOffset::Group>>*)( this + 0x78 ), (Group*)&local_78);
      for (puVar4 = local_78; local_70 != puVar4; puVar4 = puVar4 + 3) {
         pvVar1 = (void*)*puVar4;
         if (pvVar1 != (void*)0x0) {
            operator_delete(pvVar1, puVar4[2] - (long)pvVar1);
         }

      }

      puVar4 = (undefined8*)uVar2;
      if (local_78 != (undefined8*)0x0) {
         operator_delete(local_78, local_68 - (long)local_78);
      }

      do {
         pvVar1 = (void*)*puVar4;
         if (pvVar1 != (void*)0x0) {
            operator_delete(pvVar1, puVar4[2] - (long)pvVar1);
         }

         puVar4 = puVar4 + 3;
      }
 while ( (undefined8*)uVar3 != puVar4 );
   }

   if ((undefined8*)uVar2 == (undefined8*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      operator_delete((void*)uVar2, local_88 - uVar2);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Clipper2Lib::ClipperOffset::AddPaths(std::vector<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >, std::allocator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > > > const&, Clipper2Lib::JoinType,
   Clipper2Lib::EndType) */void Clipper2Lib::ClipperOffset::AddPaths(long param_1, long *param_2) {
   void *pvVar1;
   undefined8 *puVar2;
   long in_FS_OFFSET;
   undefined8 *local_58;
   undefined8 *local_50;
   long local_48;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2[1] != *param_2) {
      Group::Group((Group*)&local_58);
      std::vector<Clipper2Lib::ClipperOffset::Group,std::allocator<Clipper2Lib::ClipperOffset::Group>>::emplace_back<Clipper2Lib::ClipperOffset::Group>((vector<Clipper2Lib::ClipperOffset::Group,std::allocator<Clipper2Lib::ClipperOffset::Group>>*)( param_1 + 0x78 ), (Group*)&local_58);
      for (puVar2 = local_58; local_50 != puVar2; puVar2 = puVar2 + 3) {
         pvVar1 = (void*)*puVar2;
         if (pvVar1 != (void*)0x0) {
            operator_delete(pvVar1, puVar2[2] - (long)pvVar1);
         }

      }

      if (local_58 != (undefined8*)0x0) {
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            operator_delete(local_58, local_48 - (long)local_58);
            return;
         }

         goto LAB_00100859;
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00100859:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Clipper2Lib::ClipperOffset::BuildNormals(std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > const&) */void Clipper2Lib::ClipperOffset::BuildNormals(vector *param_1) {
   long lVar1;
   undefined8 *puVar2;
   long lVar3;
   undefined8 *puVar4;
   undefined8 uVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   Point *pPVar9;
   Point *pPVar10;
   Point *pPVar11;
   long *in_RSI;
   ulong uVar12;
   long in_FS_OFFSET;
   undefined8 in_XMM1_Qa;
   undefined8 local_58[3];
   long local_40;
   lVar1 = *(long*)( param_1 + 0x38 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar1 != *(long*)( param_1 + 0x40 )) {
      *(long*)( param_1 + 0x40 ) = lVar1;
   }

   pPVar11 = (Point*)in_RSI[1];
   pPVar10 = (Point*)*in_RSI;
   uVar12 = (long)pPVar11 - (long)pPVar10;
   if (0x7ffffffffffffff0 < uVar12) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::reserve");
   }

   if (( ulong )(*(long*)( param_1 + 0x48 ) - lVar1) < uVar12) {
      lVar3 = *(long*)( param_1 + 0x40 );
      puVar7 = (undefined8*)operator_new(uVar12);
      puVar4 = *(undefined8**)( param_1 + 0x40 );
      puVar2 = *(undefined8**)( param_1 + 0x38 );
      puVar6 = puVar7;
      for (puVar8 = puVar2; puVar4 != puVar8; puVar8 = puVar8 + 2) {
         uVar5 = puVar8[1];
         *puVar6 = *puVar8;
         puVar6[1] = uVar5;
         puVar6 = puVar6 + 2;
      }

      if (puVar2 != (undefined8*)0x0) {
         operator_delete(puVar2, *(long*)( param_1 + 0x48 ) - (long)puVar2);
      }

      *(undefined8**)( param_1 + 0x38 ) = puVar7;
      *(long*)( param_1 + 0x40 ) = ( lVar3 - lVar1 ) + (long)puVar7;
      pPVar10 = (Point*)*in_RSI;
      *(ulong*)( param_1 + 0x48 ) = (long)puVar7 + uVar12;
      pPVar11 = (Point*)in_RSI[1];
   }

   if (pPVar11 != pPVar10) {
      pPVar11 = pPVar11 + -0x10;
      if (pPVar11 != pPVar10) {
         do {
            while (true) {
               pPVar9 = pPVar10 + 0x10;
               local_58[0] = GetUnitNormal(pPVar10, pPVar9);
               puVar2 = *(undefined8**)( param_1 + 0x40 );
               pPVar10 = pPVar9;
               if (puVar2 != *(undefined8**)( param_1 + 0x48 )) break;
               std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::_M_realloc_insert<Clipper2Lib::Point<double>>((vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>*)( param_1 + 0x38 ), puVar2, local_58);
               if (pPVar11 == pPVar9) goto LAB_00100938;
            }
;
            *puVar2 = local_58[0];
            puVar2[1] = in_XMM1_Qa;
            *(undefined8**)( param_1 + 0x40 ) = puVar2 + 2;
         }
 while ( pPVar11 != pPVar9 );
         LAB_00100938:pPVar10 = (Point*)*in_RSI;
      }

      local_58[0] = GetUnitNormal(pPVar11, pPVar10);
      puVar2 = *(undefined8**)( param_1 + 0x40 );
      if (puVar2 == *(undefined8**)( param_1 + 0x48 )) {
         std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::_M_realloc_insert<Clipper2Lib::Point<double>>((vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>*)( param_1 + 0x38 ), puVar2, local_58);
      }
 else {
         *puVar2 = local_58[0];
         puVar2[1] = in_XMM1_Qa;
         *(undefined8**)( param_1 + 0x40 ) = puVar2 + 2;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Clipper2Lib::ClipperOffset::DoMiter(std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > const&, unsigned long, unsigned long, double) */void Clipper2Lib::ClipperOffset::DoMiter(ClipperOffset *this, vector *param_1, ulong param_2, ulong param_3, double param_4) {
   double dVar1;
   long lVar2;
   long *plVar3;
   double *pdVar4;
   double *pdVar5;
   long in_FS_OFFSET;
   double dVar6;
   double dVar7;
   double dVar8;
   long local_28;
   long lStack_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   dVar8 = *(double*)( this + 0x10 ) / ( param_4 + _LC0 );
   plVar3 = (long*)( *(long*)param_1 + param_2 * 0x10 );
   lVar2 = plVar3[1];
   pdVar5 = (double*)( param_3 * 0x10 + *(long*)( this + 0x38 ) );
   pdVar4 = (double*)( *(long*)( this + 0x38 ) + param_2 * 0x10 );
   dVar7 = pdVar5[1];
   dVar1 = pdVar4[1];
   dVar6 = round(( *pdVar5 + *pdVar4 ) * dVar8 + (double)*plVar3);
   local_28 = (long)dVar6;
   dVar7 = round(( dVar7 + dVar1 ) * dVar8 + (double)lVar2);
   plVar3 = *(long**)( this + 0x58 );
   lStack_20 = (long)dVar7;
   if (plVar3 == *(long**)( this + 0x60 )) {
      std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::_M_realloc_insert<Clipper2Lib::Point<long>>((vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>*)( this + 0x50 ), plVar3, &local_28);
   }
 else {
      *plVar3 = local_28;
      plVar3[1] = lStack_20;
      *(long**)( this + 0x58 ) = plVar3 + 2;
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Clipper2Lib::ClipperOffset::DoBevel(std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > const&, unsigned long, unsigned long) */void Clipper2Lib::ClipperOffset::DoBevel(ClipperOffset *this, vector *param_1, ulong param_2, ulong param_3) {
   double *pdVar1;
   long *plVar2;
   long *plVar3;
   long *plVar4;
   long in_FS_OFFSET;
   double __x;
   double dVar5;
   double dVar6;
   double dVar7;
   double dVar8;
   double dVar9;
   long local_58;
   long lStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   dVar5 = *(double*)( this + 0x10 );
   plVar3 = (long*)( *(long*)param_1 + param_2 * 0x10 );
   pdVar1 = (double*)( param_2 * 0x10 + *(long*)( this + 0x38 ) );
   dVar9 = (double)plVar3[1];
   dVar7 = pdVar1[1];
   dVar6 = *pdVar1;
   dVar8 = (double)*plVar3;
   if (param_2 == param_3) {
      dVar7 = dVar7 * (double)( (ulong)dVar5 & _LC8 );
      dVar6 = (double)( (ulong)dVar5 & _LC8 ) * dVar6;
      __x = dVar9 - dVar7;
      dVar5 = dVar8 - dVar6;
   }
 else {
      dVar7 = dVar7 * dVar5;
      pdVar1 = (double*)( *(long*)( this + 0x38 ) + param_3 * 0x10 );
      __x = pdVar1[1] * dVar5 + dVar9;
      dVar6 = dVar5 * dVar6;
      dVar5 = *pdVar1 * dVar5 + dVar8;
   }

   dVar5 = round(dVar5);
   local_58 = (long)dVar5;
   dVar5 = round(__x);
   plVar3 = *(long**)( this + 0x58 );
   plVar4 = *(long**)( this + 0x60 );
   lStack_50 = (long)dVar5;
   if (plVar3 == plVar4) {
      std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::_M_realloc_insert<Clipper2Lib::Point<long>>((vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>*)( this + 0x50 ), plVar4, &local_58);
      plVar4 = *(long**)( this + 0x60 );
      plVar2 = *(long**)( this + 0x58 );
   }
 else {
      plVar2 = plVar3 + 2;
      *plVar3 = local_58;
      plVar3[1] = lStack_50;
      *(long**)( this + 0x58 ) = plVar2;
   }

   dVar5 = round(dVar6 + dVar8);
   local_58 = (long)dVar5;
   dVar5 = round(dVar7 + dVar9);
   lStack_50 = (long)dVar5;
   if (plVar4 == plVar2) {
      std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::_M_realloc_insert<Clipper2Lib::Point<long>>((vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>*)( this + 0x50 ), plVar4, &local_58);
   }
 else {
      *plVar2 = local_58;
      plVar2[1] = lStack_50;
      *(long**)( this + 0x58 ) = plVar2 + 2;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Clipper2Lib::ClipperOffset::DoRound(std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > const&, unsigned long, unsigned long, double) */void Clipper2Lib::ClipperOffset::DoRound(ClipperOffset *this, vector *param_1, ulong param_2, ulong param_3, double param_4) {
   vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>> *pvVar1;
   long lVar2;
   long lVar3;
   ulong uVar4;
   double *pdVar5;
   long *plVar6;
   int iVar7;
   long lVar8;
   long *plVar9;
   long *plVar10;
   int iVar11;
   long in_FS_OFFSET;
   double dVar12;
   double dVar13;
   double dVar14;
   double dVar15;
   double local_98;
   double local_68;
   double local_60;
   long local_58;
   long lStack_50;
   long local_40;
   uVar4 = _LC8;
   dVar13 = *(double*)( this + 0x10 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0xc0 ) != 0) {
      dVar12 = *(double*)( this + 0xa0 );
      dVar14 = (double)( _LC8 & (ulong)dVar13 );
      if (dVar12 <= _LC9) {
         dVar12 = log10(dVar14 + _LC10);
         dVar12 = dVar12 * __LC11;
      }
 else if (dVar14 <= dVar12) {
         dVar12 = dVar14;
      }

      dVar15 = _LC12 * dVar14;
      dVar12 = acos(_LC0 - dVar12 / dVar14);
      if (_LC12 / dVar12 <= dVar15) {
         dVar15 = _LC12 / dVar12;
      }

      sincos(_LC13 / dVar15, &local_60, &local_68);
      *(double*)( this + 0x28 ) = local_60;
      *(double*)( this + 0x30 ) = local_68;
      if (dVar13 < 0.0) {
         *(ulong*)( this + 0x28 ) = (ulong)local_60 ^ _LC15;
      }

      *(double*)( this + 0x20 ) = dVar15 / _LC13;
   }

   lVar8 = param_2 * 0x10;
   pdVar5 = (double*)( param_3 * 0x10 + *(long*)( this + 0x38 ) );
   local_98 = pdVar5[1] * dVar13;
   dVar13 = dVar13 * *pdVar5;
   if (param_2 == param_3) {
      local_98 = (double)( (ulong)local_98 ^ _LC15 );
      dVar13 = (double)( (ulong)dVar13 ^ _LC15 );
   }

   pvVar1 = (vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>*)( this + 0x50 );
   dVar14 = (double)*(long*)( *(long*)param_1 + lVar8 );
   dVar15 = (double)( (long*)( *(long*)param_1 + lVar8 ) )[1];
   dVar12 = round(dVar14 + dVar13);
   local_58 = (long)dVar12;
   dVar12 = round(dVar15 + local_98);
   plVar9 = *(long**)( this + 0x58 );
   plVar6 = *(long**)( this + 0x60 );
   lStack_50 = (long)dVar12;
   if (plVar9 == plVar6) {
      std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::_M_realloc_insert<Clipper2Lib::Point<long>>(pvVar1, plVar6, &local_58);
      plVar10 = *(long**)( this + 0x58 );
      plVar6 = *(long**)( this + 0x60 );
   }
 else {
      plVar10 = plVar9 + 2;
      *plVar9 = local_58;
      plVar9[1] = lStack_50;
      *(long**)( this + 0x58 ) = plVar10;
   }

   dVar12 = (double)( (ulong)param_4 & uVar4 ) * *(double*)( this + 0x20 );
   if ((double)( (ulong)dVar12 & uVar4 ) < _LC14) {
      dVar12 = (double)( ( ulong )((double)(long)dVar12 + (double)( -(ulong)((double)(long)dVar12 < dVar12) & (ulong)_LC0 )) | ~uVar4 & (ulong)dVar12 );
   }

   iVar7 = (int)dVar12;
   if (1 < iVar7) {
      iVar11 = 1;
      plVar9 = plVar10;
      do {
         while (true) {
            dVar12 = *(double*)( this + 0x28 ) * dVar13;
            dVar13 = dVar13 * *(double*)( this + 0x30 ) - local_98 * *(double*)( this + 0x28 );
            local_98 = dVar12 + local_98 * *(double*)( this + 0x30 );
            dVar12 = round(dVar14 + dVar13);
            local_58 = (long)dVar12;
            dVar12 = round(dVar15 + local_98);
            lStack_50 = (long)dVar12;
            if (plVar9 != plVar6) break;
            iVar11 = iVar11 + 1;
            std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::_M_realloc_insert<Clipper2Lib::Point<long>>(pvVar1, plVar9, &local_58);
            plVar10 = *(long**)( this + 0x58 );
            plVar6 = *(long**)( this + 0x60 );
            plVar9 = plVar10;
            if (iVar7 == iVar11) goto LAB_00101050;
         }
;
         plVar10 = plVar9 + 2;
         iVar11 = iVar11 + 1;
         *plVar9 = local_58;
         plVar9[1] = lStack_50;
         *(long**)( this + 0x58 ) = plVar10;
         plVar9 = plVar10;
      }
 while ( iVar7 != iVar11 );
   }

   LAB_00101050:lVar2 = *(long*)( this + 0x38 );
   dVar13 = *(double*)( this + 0x10 );
   lVar3 = *(long*)param_1;
   dVar12 = round((double)*(long*)( lVar8 + lVar3 ) + dVar13 * *(double*)( lVar2 + lVar8 ));
   dVar13 = round((double)( (long*)( lVar8 + lVar3 ) )[1] + dVar13 * ( (double*)( lVar2 + lVar8 ) )[1]);
   local_58 = (long)dVar12;
   lStack_50 = (long)dVar13;
   if (plVar10 == plVar6) {
      std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::_M_realloc_insert<Clipper2Lib::Point<long>>(pvVar1, plVar10, &local_58);
   }
 else {
      *plVar10 = local_58;
      plVar10[1] = lStack_50;
      *(long**)( this + 0x58 ) = plVar10 + 2;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Clipper2Lib::ClipperOffset::DoSquare(std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > const&, unsigned long, unsigned long) */void Clipper2Lib::ClipperOffset::DoSquare(ClipperOffset *this, vector *param_1, ulong param_2, ulong param_3) {
   double *pdVar1;
   long *plVar2;
   long *plVar3;
   long *plVar4;
   long in_FS_OFFSET;
   double dVar5;
   double dVar6;
   double dVar7;
   double dVar8;
   double dVar9;
   double dVar10;
   double dVar11;
   double dVar12;
   double dVar13;
   double dVar14;
   double dVar15;
   double dVar16;
   double dVar17;
   double dVar18;
   double dVar19;
   double dVar20;
   double local_68;
   long local_48;
   long lStack_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pdVar1 = (double*)( *(long*)( this + 0x38 ) + param_2 * 0x10 );
   dVar6 = *pdVar1;
   dVar9 = pdVar1[1];
   pdVar1 = (double*)( *(long*)( this + 0x38 ) + param_3 * 0x10 );
   dVar5 = *pdVar1;
   dVar15 = pdVar1[1];
   if (param_2 == param_3) {
      dVar17 = (double)( (ulong)_LC15 ^ (ulong)dVar9 );
      dVar6 = (double)( (ulong)dVar6 ^ (ulong)_LC15 );
   }
 else {
      dVar9 = dVar9 - dVar15;
      dVar6 = dVar5 - dVar6;
      dVar10 = SQRT(dVar9 * dVar9 + dVar6 * dVar6);
      if (dVar10 < _LC16) {
         dVar9 = 0.0;
         dVar17 = _LC15;
         dVar6 = dVar9;
      }
 else {
         dVar10 = _LC0 / dVar10;
         dVar9 = dVar9 * dVar10;
         dVar17 = (double)( (ulong)dVar9 ^ (ulong)_LC15 );
         dVar6 = dVar6 * dVar10;
      }

   }

   dVar10 = *(double*)( this + 0x10 );
   dVar17 = dVar17 * dVar10;
   plVar3 = (long*)( param_2 * 0x10 + *(long*)param_1 );
   dVar16 = (double)*plVar3;
   dVar7 = dVar6 * dVar10;
   plVar2 = (long*)( *(long*)param_1 + param_3 * 0x10 );
   dVar12 = (double)plVar3[1];
   dVar15 = dVar15 * dVar10;
   dVar5 = dVar10 * dVar5;
   dVar8 = dVar6 * (double)( (ulong)dVar10 & _LC8 ) + dVar12;
   dVar6 = dVar9 * (double)( (ulong)dVar10 & _LC8 ) + dVar16;
   dVar10 = (double)plVar2[1] + dVar15;
   dVar20 = dVar17 + dVar8;
   dVar11 = (double)*plVar2 + dVar5;
   dVar19 = dVar8 - dVar17;
   dVar9 = dVar7 + dVar6;
   dVar18 = dVar6 - dVar7;
   dVar14 = dVar19 - dVar20;
   dVar13 = dVar18 - dVar9;
   local_68 = dVar8;
   if (param_2 == param_3) {
      dVar7 = ( dVar7 + dVar10 ) - dVar10;
      dVar17 = ( dVar11 - dVar17 ) - dVar11;
      dVar15 = dVar17 * dVar14 - dVar13 * dVar7;
      dVar5 = dVar6;
      if (( ( dVar15 != 0.0 ) && ( dVar15 = ( ( dVar9 - dVar11 ) * dVar7 - ( dVar20 - dVar10 ) * dVar17 ) / dVar15 ),dVar5 = dVar9,local_68 = dVar20,0.0 < dVar15 )) {
         dVar5 = dVar9 + dVar13 * dVar15;
         local_68 = dVar15 * dVar14 + dVar20;
      }

      dVar6 = round(( dVar6 - dVar5 ) + dVar6);
      local_48 = (long)dVar6;
      dVar6 = round(( dVar8 - local_68 ) + dVar8);
      plVar2 = *(long**)( this + 0x58 );
      plVar3 = *(long**)( this + 0x60 );
      lStack_40 = (long)dVar6;
      if (plVar2 == plVar3) {
         std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::_M_realloc_insert<Clipper2Lib::Point<long>>((vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>*)( this + 0x50 ), plVar3, &local_48);
         plVar3 = *(long**)( this + 0x60 );
         plVar4 = *(long**)( this + 0x58 );
      }
 else {
         plVar4 = plVar2 + 2;
         *plVar2 = local_48;
         plVar2[1] = lStack_40;
         *(long**)( this + 0x58 ) = plVar4;
      }

      dVar6 = round(dVar5);
      local_48 = (long)dVar6;
      dVar6 = round(local_68);
      lStack_40 = (long)dVar6;
      if (plVar3 != plVar4) {
         *plVar4 = local_48;
         plVar4[1] = lStack_40;
         *(long**)( this + 0x58 ) = plVar4 + 2;
         goto LAB_00101441;
      }

   }
 else {
      dVar17 = ( dVar5 + dVar16 ) - dVar11;
      dVar7 = ( dVar15 + dVar12 ) - dVar10;
      dVar15 = dVar14 * dVar17 - dVar13 * dVar7;
      dVar5 = dVar6;
      if (( ( dVar15 != 0.0 ) && ( dVar15 = ( ( dVar9 - dVar11 ) * dVar7 - ( dVar20 - dVar10 ) * dVar17 ) / dVar15 ),dVar5 = dVar9,local_68 = dVar20,0.0 < dVar15 )) {
         dVar5 = dVar9 + dVar13 * dVar15;
         local_68 = dVar14 * dVar15 + dVar20;
      }

      dVar9 = round(dVar5);
      local_48 = (long)dVar9;
      dVar9 = round(local_68);
      plVar2 = *(long**)( this + 0x58 );
      plVar3 = *(long**)( this + 0x60 );
      lStack_40 = (long)dVar9;
      if (plVar2 == plVar3) {
         std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::_M_realloc_insert<Clipper2Lib::Point<long>>((vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>*)( this + 0x50 ), plVar3, &local_48);
         plVar3 = *(long**)( this + 0x60 );
         plVar4 = *(long**)( this + 0x58 );
      }
 else {
         plVar4 = plVar2 + 2;
         *plVar2 = local_48;
         plVar2[1] = lStack_40;
         *(long**)( this + 0x58 ) = plVar4;
      }

      dVar6 = round(( dVar6 - dVar5 ) + dVar6);
      local_48 = (long)dVar6;
      dVar6 = round(( dVar8 - local_68 ) + dVar8);
      lStack_40 = (long)dVar6;
      if (plVar3 != plVar4) {
         *plVar4 = local_48;
         plVar4[1] = lStack_40;
         *(long**)( this + 0x58 ) = plVar4 + 2;
         goto LAB_00101441;
      }

   }

   std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::_M_realloc_insert<Clipper2Lib::Point<long>>((vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>*)( this + 0x50 ), plVar3, &local_48);
   LAB_00101441:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Clipper2Lib::ClipperOffset::OffsetPoint(Clipper2Lib::ClipperOffset::Group&,
   std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > > const&,
   unsigned long, unsigned long) */void Clipper2Lib::ClipperOffset::OffsetPoint(ClipperOffset *this, Group *param_1, vector *param_2, ulong param_3, ulong param_4) {
   vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>> *pvVar1;
   long *plVar2;
   double *pdVar3;
   double dVar4;
   Group GVar5;
   int iVar6;
   undefined8 *puVar7;
   long lVar8;
   undefined8 uVar9;
   ulong uVar10;
   long *plVar11;
   double *pdVar12;
   long lVar13;
   ulong *puVar14;
   ulong *puVar15;
   long lVar16;
   undefined8 *puVar17;
   ulong *puVar18;
   ulong *puVar19;
   long in_FS_OFFSET;
   double dVar20;
   double dVar21;
   double dVar22;
   double dVar23;
   ulong local_60;
   ulong local_58;
   ulong uStack_50;
   long local_40;
   lVar13 = param_4 * 0x10;
   lVar16 = param_3 * 0x10;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar2 = (long*)( *(long*)param_2 + lVar13 );
   plVar11 = (long*)( *(long*)param_2 + lVar16 );
   if (( *plVar2 != *plVar11 ) || ( plVar2[1] != plVar11[1] )) {
      pdVar3 = (double*)( *(long*)( this + 0x38 ) + lVar13 );
      pdVar12 = (double*)( *(long*)( this + 0x38 ) + lVar16 );
      dVar21 = pdVar3[1];
      dVar22 = pdVar12[1];
      dVar20 = *pdVar3;
      dVar4 = *pdVar12;
      dVar23 = dVar22 * dVar20 - dVar21 * dVar4;
      dVar22 = dVar20 * dVar4 + dVar22 * dVar21;
      dVar21 = _LC0;
      if (( dVar23 <= _LC0 ) && ( dVar21 = _LC17 <= dVar23 )) {
         dVar21 = dVar23;
      }

      if (*(long*)( this + 0xc0 ) == 0) {
         dVar20 = *(double*)( this + 0x10 );
      }
 else {
         local_60 = param_3;
         local_58 = param_4;
         dVar20 = (double)( **(code**)( this + 200 ) )(this + 0xb0, param_2, this + 0x38, &local_60, &local_58);
         GVar5 = param_1[0x28];
         *(double*)( this + 0x10 ) = dVar20;
         if (GVar5 != (Group)0x0) {
            dVar20 = (double)( (ulong)dVar20 ^ _LC15 );
            *(double*)( this + 0x10 ) = dVar20;
         }

      }

      if ((double)( (ulong)dVar20 & _LC8 ) <= _LC9) {
         puVar7 = *(undefined8**)( this + 0x58 );
         puVar17 = (undefined8*)( lVar16 + *(long*)param_2 );
         if (puVar7 == *(undefined8**)( this + 0x60 )) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::_M_realloc_insert<Clipper2Lib::Point<long>const&>((vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>*)( this + 0x50 ), puVar7, puVar17);
               return;
            }

            goto LAB_00101c2b;
         }

         uVar9 = puVar17[1];
         *puVar7 = *puVar17;
         puVar7[1] = uVar9;
         *(undefined8**)( this + 0x58 ) = puVar7 + 2;
      }
 else {
         if (dVar22 <= __LC18) {
            LAB_001018d0:iVar6 = *(int*)( this + 0x90 );
            if (iVar6 == 3) {
               if (*(double*)( this + 0x18 ) - _LC0 < dVar22) {
                  LAB_001019bf:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     DoMiter(this, param_2, param_3, param_4, dVar22);
                     return;
                  }

                  goto LAB_00101c2b;
               }

            }
 else {
               if (iVar6 == 2) goto LAB_00101882;
               if (iVar6 == 1) {
                  if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     DoBevel(this, param_2, param_3, param_4);
                     return;
                  }

                  goto LAB_00101c2b;
               }

            }

            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               DoSquare(this, param_2, param_3, param_4);
               return;
            }

            goto LAB_00101c2b;
         }

         if (0.0 <= dVar21 * dVar20) {
            if (dVar22 <= __LC20) goto LAB_001018d0;
            if (*(int*)( this + 0x90 ) != 2) goto LAB_001019bf;
            LAB_00101882:dVar21 = atan2(dVar21, dVar22);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               DoRound(this, param_2, param_3, param_4, dVar21);
               return;
            }

            goto LAB_00101c2b;
         }

         lVar8 = *(long*)( this + 0x38 );
         pvVar1 = (vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>*)( this + 0x50 );
         puVar15 = (ulong*)( *(long*)param_2 + lVar16 );
         dVar21 = round((double)(long)*puVar15 + dVar20 * *(double*)( lVar8 + lVar13 ));
         dVar20 = round((double)(long)puVar15[1] + dVar20 * ( (double*)( lVar8 + lVar13 ) )[1]);
         puVar19 = *(ulong**)( this + 0x58 );
         puVar14 = *(ulong**)( this + 0x60 );
         local_58 = (ulong)dVar21;
         uStack_50 = (ulong)dVar20;
         if (puVar19 == puVar14) {
            std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::_M_realloc_insert<Clipper2Lib::Point<long>>(pvVar1, puVar14, &local_58);
            puVar18 = *(ulong**)( this + 0x58 );
            puVar14 = *(ulong**)( this + 0x60 );
            puVar15 = (ulong*)( *(long*)param_2 + lVar16 );
         }
 else {
            puVar18 = puVar19 + 2;
            *puVar19 = local_58;
            puVar19[1] = uStack_50;
            *(ulong**)( this + 0x58 ) = puVar18;
         }

         puVar19 = puVar18;
         if (dVar22 < _LC19) {
            if (puVar18 == puVar14) {
               std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::_M_realloc_insert<Clipper2Lib::Point<long>const&>(pvVar1, puVar18, puVar15);
               puVar19 = *(ulong**)( this + 0x58 );
               puVar14 = *(ulong**)( this + 0x60 );
               puVar15 = (ulong*)( *(long*)param_2 + lVar16 );
            }
 else {
               uVar10 = puVar15[1];
               puVar19 = puVar18 + 2;
               *puVar18 = *puVar15;
               puVar18[1] = uVar10;
               *(ulong**)( this + 0x58 ) = puVar19;
            }

         }

         dVar21 = *(double*)( this + 0x10 );
         lVar13 = *(long*)( this + 0x38 );
         dVar22 = round((double)(long)*puVar15 + dVar21 * *(double*)( lVar16 + lVar13 ));
         dVar21 = round((double)(long)puVar15[1] + dVar21 * ( (double*)( lVar16 + lVar13 ) )[1]);
         local_58 = (ulong)dVar22;
         uStack_50 = (ulong)dVar21;
         if (puVar19 == puVar14) {
            std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::_M_realloc_insert<Clipper2Lib::Point<long>>(pvVar1, puVar19, &local_58);
         }
 else {
            *puVar19 = local_58;
            puVar19[1] = uStack_50;
            *(ulong**)( this + 0x58 ) = puVar19 + 2;
         }

      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00101c2b:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Clipper2Lib::ClipperOffset::OffsetPolygon(Clipper2Lib::ClipperOffset::Group&,
   std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > > const&) */void Clipper2Lib::ClipperOffset::OffsetPolygon(ClipperOffset *this, Group *param_1, vector *param_2) {
   vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > *pvVar1;
   undefined1(*pauVar2)[16];
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   void *pvVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   ulong *puVar9;
   ulong *puVar10;
   long lVar11;
   long lVar12;
   vector *extraout_RDX;
   undefined8 *puVar13;
   undefined8 *puVar14;
   ulong *puVar15;
   ulong *puVar16;
   size_t __n;
   ulong uVar17;
   ulong uVar18;
   Group *pGVar19;
   ClipperOffset *this_00;
   undefined1(*pauVar20)[16];
   long lVar21;
   ulong *__dest;
   ulong *puVar22;
   ulong uVar23;
   long in_FS_OFFSET;
   undefined1 auStack_70[16];
   long lStack_60;
   long lStack_58;
   undefined1(*pauStack_48)[16];
   ClipperOffset *pCStack_40;
   ulong uStack_38;
   vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > *pvStack_30;
   if (*(long*)( this + 0x50 ) != *(long*)( this + 0x58 )) {
      *(long*)( this + 0x58 ) = *(long*)( this + 0x50 );
   }

   uVar23 = 0;
   pGVar19 = param_1;
   this_00 = this;
   uVar17 = ( *(long*)( param_2 + 8 ) - *(long*)param_2 >> 4 ) - 1;
   if (*(long*)param_2 != *(long*)( param_2 + 8 )) {
      do {
         uVar18 = uVar23;
         pvStack_30 = ( vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > *)0x101c8c;pGVar19 = param_1 );
         this_00 = this;
         OffsetPoint(this, param_1, param_2, uVar18, uVar17);
         uVar23 = uVar18 + 1;
         uVar17 = uVar18;
      }
 while ( uVar18 + 1 < ( ulong )(*(long*)( param_2 + 8 ) - *(long*)param_2 >> 4) );
   }

   pvVar1 = *( vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > ** )(this + 0x68);
   pauVar2 = *(undefined1(**) [16])( pvVar1 + 8 );
   if (pauVar2 == *(undefined1(**) [16])( pvVar1 + 0x10 )) {
      std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > ::_M_realloc_insert<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>const&>(pvVar1, pauVar2, this + 0x50);
      return;
   }

   uVar23 = *(long*)( this + 0x58 ) - *(long*)( this + 0x50 );
   *(undefined8*)pauVar2[1] = 0;
   *pauVar2 = (undefined1[16])0x0;
   if (uVar23 == 0) {
      pvVar6 = (void*)0x0;
      pauVar20 = pauVar2;
      LAB_00101cee:*(ulong*)pauVar2[1] = uVar23 + (long)pvVar6;
      *(void**)*pauVar2 = pvVar6;
      *(void**)( *pauVar2 + 8 ) = pvVar6;
      lVar21 = *(long*)( this + 0x58 );
      lVar11 = *(long*)( this + 0x50 );
      if (lVar21 != lVar11) {
         lVar12 = 0;
         do {
            uVar3 = ( (undefined8*)( lVar11 + lVar12 ) )[1];
            *(undefined8*)( (long)pvVar6 + lVar12 ) = *(undefined8*)( lVar11 + lVar12 );
            ( (undefined8*)( (long)pvVar6 + lVar12 ) )[1] = uVar3;
            lVar12 = lVar12 + 0x10;
         }
 while ( lVar12 != lVar21 - lVar11 );
         pvVar6 = (void*)( (long)pvVar6 + lVar12 );
      }

      *(void**)( *pauVar2 + 8 ) = pvVar6;
      *(undefined1**)( pvVar1 + 8 ) = pauVar20[1] + 8;
      return;
   }

   if (uVar23 < 0x7ffffffffffffff1) {
      pvStack_30 = ( vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > *)0x101cea;pvVar6 = operator_new(uVar23) );
      pauVar20 = *(undefined1(**) [16])( pvVar1 + 8 );
      goto LAB_00101cee;
   }

   pvStack_30 = ( vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > *)0x101d6e;
  std::__throw_bad_array_new_length();lStack_58 = *(long*)( in_FS_OFFSET + 0x28 ) );
   pauStack_48 = pauVar2;
   pCStack_40 = this;
   uStack_38 = uVar23;
   pvStack_30 = pvVar1;
   OffsetPolygon(this_00, pGVar19, extraout_RDX);
   lVar21 = *(long*)( extraout_RDX + 8 );
   lVar11 = *(long*)extraout_RDX;
   lStack_60 = 0;
   auStack_70 = (undefined1[16])0x0;
   uVar23 = lVar21 - lVar11;
   if (uVar23 == 0) {
      uVar23 = 0;
      puVar7 = (undefined8*)0x0;
   }
 else {
      if (0x7ffffffffffffff0 < uVar23) {
         std::__throw_bad_array_new_length();
         goto LAB_00101fc2;
      }

      puVar7 = (undefined8*)operator_new(uVar23);
      lVar21 = *(long*)( extraout_RDX + 8 );
      lVar11 = *(long*)extraout_RDX;
   }

   lStack_60 = uVar23 + (long)puVar7;
   if (lVar21 == lVar11) {
      auStack_70._8_8_ = puVar7;
      auStack_70._0_8_ = puVar7;
   }
 else {
      lVar12 = 0;
      do {
         uVar3 = ( (undefined8*)( lVar11 + lVar12 ) )[1];
         *(undefined8*)( (long)puVar7 + lVar12 ) = *(undefined8*)( lVar11 + lVar12 );
         ( (undefined8*)( (long)puVar7 + lVar12 ) )[1] = uVar3;
         lVar12 = lVar12 + 0x10;
      }
 while ( lVar12 != lVar21 - lVar11 );
      auStack_70._8_8_ = (undefined8*)( lVar12 + (long)puVar7 );
      auStack_70._0_8_ = puVar7;
      puVar13 = (undefined8*)( ( lVar21 - lVar11 ) + -0x10 + (long)puVar7 );
      if (( puVar7 != (undefined8*)( lVar12 + (long)puVar7 ) ) && ( puVar7 < puVar13 )) {
         do {
            uVar3 = *puVar7;
            uVar4 = puVar7[1];
            uVar5 = puVar13[1];
            puVar8 = puVar7 + 2;
            puVar14 = puVar13 + -2;
            *puVar7 = *puVar13;
            puVar7[1] = uVar5;
            *puVar13 = uVar3;
            puVar13[1] = uVar4;
            puVar7 = puVar8;
            puVar13 = puVar14;
         }
 while ( puVar8 < puVar14 );
      }

   }

   puVar22 = *(ulong**)( this_00 + 0x40 );
   __dest = *(ulong**)( this_00 + 0x38 );
   if (( __dest != puVar22 ) && ( puVar9 = puVar22 + -2 ),puVar15 = __dest,__dest < puVar9) {
      do {
         uVar23 = *puVar15;
         uVar17 = puVar15[1];
         uVar18 = puVar9[1];
         puVar16 = puVar15 + 2;
         puVar10 = puVar9 + -2;
         *puVar15 = *puVar9;
         puVar15[1] = uVar18;
         *puVar9 = uVar23;
         puVar9[1] = uVar17;
         puVar9 = puVar10;
         puVar15 = puVar16;
      }
 while ( puVar16 < puVar10 );
   }

   if (puVar22 == *(ulong**)( this_00 + 0x48 )) {
      std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::_M_realloc_insert<Clipper2Lib::Point<double>const&>((vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>*)( this_00 + 0x38 ), puVar22, __dest);
      __dest = *(ulong**)( this_00 + 0x38 );
      puVar9 = *(ulong**)( this_00 + 0x40 );
   }
 else {
      uVar23 = __dest[1];
      puVar9 = puVar22 + 2;
      *puVar22 = *__dest;
      puVar22[1] = uVar23;
      *(ulong**)( this_00 + 0x40 ) = puVar9;
   }

   puVar22 = __dest + 2;
   if (puVar9 != puVar22) {
      __n = (long)puVar9 - (long)puVar22;
      if ((long)__n < 0x11) {
         if (__n == 0x10) {
            *__dest = __dest[2];
            __dest[1] = __dest[3];
         }

      }
 else {
         memmove(__dest, puVar22, __n);
         __dest = *(ulong**)( this_00 + 0x38 );
         puVar9 = *(ulong**)( this_00 + 0x40 );
      }

   }

   *(ulong**)( this_00 + 0x40 ) = puVar9 + -2;
   uVar23 = _LC15;
   if (puVar9 + -2 != __dest) {
      uVar17 = 0;
      puVar22 = __dest;
      do {
         uVar17 = uVar17 + 1;
         *puVar22 = *puVar22 ^ uVar23;
         puVar22[1] = puVar22[1] ^ uVar23;
         puVar22 = puVar22 + 2;
      }
 while ( uVar17 < ( ( ulong )((long)puVar9 + ( -0x20 - (long)__dest )) >> 4 ) + 1 );
   }

   OffsetPolygon(this_00, pGVar19, (vector*)auStack_70);
   if ((void*)auStack_70._0_8_ != (void*)0x0) {
      operator_delete((void*)auStack_70._0_8_, lStack_60 - auStack_70._0_8_);
   }

   if (lStack_58 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00101fc2:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Clipper2Lib::ClipperOffset::OffsetOpenJoined(Clipper2Lib::ClipperOffset::Group&,
   std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > > const&) */void Clipper2Lib::ClipperOffset::OffsetOpenJoined(ClipperOffset *this, Group *param_1, vector *param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   ulong *puVar7;
   ulong *puVar8;
   long lVar9;
   long lVar10;
   undefined8 *puVar11;
   undefined8 *puVar12;
   ulong *puVar13;
   ulong *puVar14;
   size_t __n;
   ulong uVar15;
   long lVar16;
   ulong *__dest;
   ulong *puVar17;
   ulong uVar18;
   long in_FS_OFFSET;
   undefined1 local_48[16];
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   OffsetPolygon(this, param_1, param_2);
   lVar16 = *(long*)( param_2 + 8 );
   lVar9 = *(long*)param_2;
   local_38 = 0;
   local_48 = (undefined1[16])0x0;
   uVar18 = lVar16 - lVar9;
   if (uVar18 == 0) {
      uVar18 = 0;
      puVar5 = (undefined8*)0x0;
   }
 else {
      if (0x7ffffffffffffff0 < uVar18) {
         std::__throw_bad_array_new_length();
         goto LAB_00101fc2;
      }

      puVar5 = (undefined8*)operator_new(uVar18);
      lVar16 = *(long*)( param_2 + 8 );
      lVar9 = *(long*)param_2;
   }

   local_38 = uVar18 + (long)puVar5;
   if (lVar16 == lVar9) {
      local_48._8_8_ = puVar5;
      local_48._0_8_ = puVar5;
   }
 else {
      lVar10 = 0;
      do {
         uVar1 = ( (undefined8*)( lVar9 + lVar10 ) )[1];
         *(undefined8*)( (long)puVar5 + lVar10 ) = *(undefined8*)( lVar9 + lVar10 );
         ( (undefined8*)( (long)puVar5 + lVar10 ) )[1] = uVar1;
         lVar10 = lVar10 + 0x10;
      }
 while ( lVar10 != lVar16 - lVar9 );
      local_48._8_8_ = (undefined8*)( lVar10 + (long)puVar5 );
      local_48._0_8_ = puVar5;
      puVar11 = (undefined8*)( ( lVar16 - lVar9 ) + -0x10 + (long)puVar5 );
      if (( puVar5 != (undefined8*)( lVar10 + (long)puVar5 ) ) && ( puVar5 < puVar11 )) {
         do {
            uVar1 = *puVar5;
            uVar2 = puVar5[1];
            uVar3 = puVar11[1];
            puVar6 = puVar5 + 2;
            puVar12 = puVar11 + -2;
            *puVar5 = *puVar11;
            puVar5[1] = uVar3;
            *puVar11 = uVar1;
            puVar11[1] = uVar2;
            puVar5 = puVar6;
            puVar11 = puVar12;
         }
 while ( puVar6 < puVar12 );
      }

   }

   puVar17 = *(ulong**)( this + 0x40 );
   __dest = *(ulong**)( this + 0x38 );
   if (( __dest != puVar17 ) && ( puVar7 = puVar17 + -2 ),puVar13 = __dest,__dest < puVar7) {
      do {
         uVar18 = *puVar13;
         uVar15 = puVar13[1];
         uVar4 = puVar7[1];
         puVar14 = puVar13 + 2;
         puVar8 = puVar7 + -2;
         *puVar13 = *puVar7;
         puVar13[1] = uVar4;
         *puVar7 = uVar18;
         puVar7[1] = uVar15;
         puVar7 = puVar8;
         puVar13 = puVar14;
      }
 while ( puVar14 < puVar8 );
   }

   if (puVar17 == *(ulong**)( this + 0x48 )) {
      std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::_M_realloc_insert<Clipper2Lib::Point<double>const&>((vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>*)( this + 0x38 ), puVar17, __dest);
      __dest = *(ulong**)( this + 0x38 );
      puVar7 = *(ulong**)( this + 0x40 );
   }
 else {
      uVar18 = __dest[1];
      puVar7 = puVar17 + 2;
      *puVar17 = *__dest;
      puVar17[1] = uVar18;
      *(ulong**)( this + 0x40 ) = puVar7;
   }

   puVar17 = __dest + 2;
   if (puVar7 != puVar17) {
      __n = (long)puVar7 - (long)puVar17;
      if ((long)__n < 0x11) {
         if (__n == 0x10) {
            *__dest = __dest[2];
            __dest[1] = __dest[3];
         }

      }
 else {
         memmove(__dest, puVar17, __n);
         __dest = *(ulong**)( this + 0x38 );
         puVar7 = *(ulong**)( this + 0x40 );
      }

   }

   *(ulong**)( this + 0x40 ) = puVar7 + -2;
   uVar18 = _LC15;
   if (puVar7 + -2 != __dest) {
      uVar15 = 0;
      puVar17 = __dest;
      do {
         uVar15 = uVar15 + 1;
         *puVar17 = *puVar17 ^ uVar18;
         puVar17[1] = puVar17[1] ^ uVar18;
         puVar17 = puVar17 + 2;
      }
 while ( uVar15 < ( ( ulong )((long)puVar7 + ( -0x20 - (long)__dest )) >> 4 ) + 1 );
   }

   OffsetPolygon(this, param_1, (vector*)local_48);
   if ((void*)local_48._0_8_ != (void*)0x0) {
      operator_delete((void*)local_48._0_8_, local_38 - local_48._0_8_);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00101fc2:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Clipper2Lib::ClipperOffset::OffsetOpenPath(Clipper2Lib::ClipperOffset::Group&,
   std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > > const&) */void Clipper2Lib::ClipperOffset::OffsetOpenPath(ClipperOffset *this, Group *param_1, vector *param_2) {
   ulong *puVar1;
   vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > *pvVar2;
   undefined1(*pauVar3)[16];
   undefined8 uVar4;
   long lVar5;
   long lVar6;
   void *pvVar7;
   undefined8 *puVar8;
   long lVar9;
   long lVar10;
   undefined1(*pauVar11)[16];
   ulong uVar12;
   ulong uVar13;
   undefined8 *puVar14;
   long in_FS_OFFSET;
   ulong uVar15;
   ulong local_50;
   ulong local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0xc0 ) == 0) {
      uVar15 = *(ulong*)( this + 0x10 );
   }
 else {
      local_50 = 0;
      local_48 = 0;
      uVar15 = ( **(code**)( this + 200 ) )(this + 0xb0, param_2, this + 0x38, &local_50, &local_48);
      *(ulong*)( this + 0x10 ) = uVar15;
   }

   if ((double)( uVar15 & _LC8 ) <= _LC9) {
      puVar8 = *(undefined8**)param_2;
      puVar14 = *(undefined8**)( this + 0x58 );
      if (puVar14 == *(undefined8**)( this + 0x60 )) {
         std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::_M_realloc_insert<Clipper2Lib::Point<long>const&>((vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>*)( this + 0x50 ));
         puVar8 = *(undefined8**)param_2;
      }
 else {
         uVar4 = puVar8[1];
         *puVar14 = *puVar8;
         puVar14[1] = uVar4;
         *(undefined8**)( this + 0x58 ) = puVar14 + 2;
      }

   }
 else if (*(int*)( this + 0x94 ) == 2) {
      DoBevel(this, param_2, 0, 0);
      puVar8 = *(undefined8**)param_2;
   }
 else if (*(int*)( this + 0x94 ) == 4) {
      DoRound(this, param_2, 0, 0, _LC12);
      puVar8 = *(undefined8**)param_2;
   }
 else {
      DoSquare(this, param_2, 0, 0);
      puVar8 = *(undefined8**)param_2;
   }

   uVar12 = 1;
   lVar5 = *(long*)( param_2 + 8 ) - (long)puVar8;
   lVar10 = lVar5 >> 4;
   uVar15 = lVar10 - 1;
   if (uVar15 < 2) {
      puVar14 = *(undefined8**)( this + 0x38 );
      lVar9 = 0x10;
      puVar8 = (undefined8*)( (long)puVar14 + lVar5 + -0x10 );
      lVar5 = 0x20;
      if (uVar15 != 0) goto LAB_001020df;
      lVar9 = 0;
   }
 else {
      do {
         uVar13 = uVar12 + 1;
         OffsetPoint(this, param_1, param_2, uVar12, uVar12 - 1);
         uVar12 = uVar13;
      }
 while ( uVar15 != uVar13 );
      puVar14 = *(undefined8**)( this + 0x38 );
      lVar9 = lVar5 + -0x10;
      puVar8 = (undefined8*)( (long)puVar14 + lVar9 );
      LAB_001020df:uVar12 = _LC15;
      lVar6 = 0;
      do {
         puVar1 = (ulong*)( (long)puVar14 + lVar6 + lVar5 + -0x20 );
         uVar13 = puVar1[1];
         *(ulong*)( (long)puVar8 + lVar6 ) = *puVar1 ^ uVar12;
         ( (ulong*)( (long)puVar8 + lVar6 ) )[1] = uVar13 ^ uVar12;
         lVar6 = lVar6 + -0x10;
      }
 while ( lVar10 * -0x10 + 0x10 != lVar6 );
   }

   uVar4 = puVar8[1];
   lVar5 = *(long*)( this + 0xc0 );
   *puVar14 = *puVar8;
   puVar14[1] = uVar4;
   if (lVar5 == 0) {
      uVar12 = *(ulong*)( this + 0x10 );
   }
 else {
      local_50 = uVar15;
      local_48 = uVar15;
      uVar12 = ( **(code**)( this + 200 ) )(this + 0xb0, param_2, this + 0x38, &local_50, &local_48);
      *(ulong*)( this + 0x10 ) = uVar12;
   }

   if ((double)( uVar12 & _LC8 ) <= _LC9) {
      puVar8 = *(undefined8**)( this + 0x58 );
      puVar14 = (undefined8*)( lVar9 + *(long*)param_2 );
      if (puVar8 == *(undefined8**)( this + 0x60 )) {
         std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::_M_realloc_insert<Clipper2Lib::Point<long>const&>((vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>*)( this + 0x50 ), puVar8, puVar14);
      }
 else {
         uVar4 = puVar14[1];
         *puVar8 = *puVar14;
         puVar8[1] = uVar4;
         *(undefined8**)( this + 0x58 ) = puVar8 + 2;
      }

   }
 else if (*(int*)( this + 0x94 ) == 2) {
      DoBevel(this, param_2, uVar15, uVar15);
   }
 else if (*(int*)( this + 0x94 ) == 4) {
      DoRound(this, param_2, uVar15, uVar15, _LC12);
   }
 else {
      DoSquare(this, param_2, uVar15, uVar15);
   }

   for (uVar15 = lVar10 - 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      OffsetPoint(this, param_1, param_2, uVar15, uVar15 + 1);
   }

   pvVar2 = *( vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > ** )(this + 0x68);
   pauVar3 = *(undefined1(**) [16])( pvVar2 + 8 );
   if (pauVar3 == *(undefined1(**) [16])( pvVar2 + 0x10 )) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > ::_M_realloc_insert<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>const&>(pvVar2, pauVar3, this + 0x50);
         return;
      }

   }
 else {
      uVar15 = *(long*)( this + 0x58 ) - *(long*)( this + 0x50 );
      *(undefined8*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
      if (uVar15 == 0) {
         pvVar7 = (void*)0x0;
         pauVar11 = pauVar3;
      }
 else {
         if (0x7ffffffffffffff0 < uVar15) {
            std::__throw_bad_array_new_length();
            goto LAB_0010241d;
         }

         pvVar7 = operator_new(uVar15);
         pauVar11 = *(undefined1(**) [16])( pvVar2 + 8 );
      }

      *(ulong*)pauVar3[1] = uVar15 + (long)pvVar7;
      *(void**)*pauVar3 = pvVar7;
      *(void**)( *pauVar3 + 8 ) = pvVar7;
      lVar5 = *(long*)( this + 0x50 );
      if (*(long*)( this + 0x58 ) != lVar5) {
         lVar10 = *(long*)( this + 0x58 ) - lVar5;
         lVar9 = 0;
         do {
            uVar4 = ( (undefined8*)( lVar5 + lVar9 ) )[1];
            *(undefined8*)( (long)pvVar7 + lVar9 ) = *(undefined8*)( lVar5 + lVar9 );
            ( (undefined8*)( (long)pvVar7 + lVar9 ) )[1] = uVar4;
            lVar9 = lVar9 + 0x10;
         }
 while ( lVar10 != lVar9 );
         pvVar7 = (void*)( (long)pvVar7 + lVar10 );
      }

      *(void**)( *pauVar3 + 8 ) = pvVar7;
      *(undefined1**)( pvVar2 + 8 ) = pauVar11[1] + 8;
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   LAB_0010241d:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Clipper2Lib::ClipperOffset::DoGroupOffset(Clipper2Lib::ClipperOffset::Group&) */void Clipper2Lib::ClipperOffset::DoGroupOffset(ClipperOffset *this, Group *param_1) {
   Group GVar1;
   int iVar2;
   int iVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   ulong uVar6;
   long lVar7;
   long *plVar8;
   long *plVar9;
   void *pvVar10;
   long lVar11;
   undefined8 uVar12;
   undefined1(*pauVar13)[16];
   undefined1(*pauVar14)[16];
   vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > *pvVar15;
   long *plVar16;
   ulong uVar17;
   vector *pvVar18;
   long in_FS_OFFSET;
   double dVar19;
   long lVar20;
   double dVar21;
   double dVar22;
   double dVar23;
   double dVar24;
   long lVar25;
   long *local_c8;
   double local_b8;
   ulong local_b0;
   double local_78;
   double local_70;
   undefined1 local_68[16];
   undefined1 local_58[16];
   long *local_48;
   long local_40;
   uVar6 = _LC8;
   iVar2 = *(int*)( param_1 + 0x30 );
   dVar24 = *(double*)( this + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (iVar2 == 0) {
      if (param_1[0x20] == (Group)0x0) {
         dVar24 = (double)( (ulong)dVar24 & _LC8 );
         *(double*)( this + 8 ) = dVar24;
      }

      if (param_1[0x28] != (Group)0x0) {
         dVar24 = (double)( (ulong)dVar24 ^ _LC15 );
      }

      local_b8 = (double)( uVar6 & (ulong)dVar24 );
   }
 else {
      dVar24 = (double)( (ulong)dVar24 & _LC8 );
      local_b8 = dVar24;
   }

   iVar3 = *(int*)( param_1 + 0x2c );
   *(double*)( this + 0x10 ) = dVar24;
   *(ulong*)( this + 0x90 ) = CONCAT44(iVar2, iVar3);
   if (( iVar3 == 2 ) || ( *(int*)( param_1 + 0x30 ) == 4 )) {
      dVar19 = *(double*)( this + 0xa0 );
      if (dVar19 <= _LC9) {
         dVar19 = log10(local_b8 + _LC10);
         dVar19 = dVar19 * __LC11;
      }
 else if (local_b8 <= dVar19) {
         dVar19 = local_b8;
      }

      dVar23 = _LC12;
      dVar21 = local_b8 * _LC12;
      dVar19 = acos(_LC0 - dVar19 / local_b8);
      if (dVar23 / dVar19 <= dVar21) {
         dVar21 = dVar23 / dVar19;
      }

      sincos(_LC13 / dVar21, &local_70, &local_78);
      *(double*)( this + 0x28 ) = local_70;
      *(double*)( this + 0x30 ) = local_78;
      if (dVar24 < 0.0) {
         *(ulong*)( this + 0x28 ) = (ulong)local_70 ^ _LC15;
      }

      pvVar18 = *(vector**)param_1;
      *(double*)( this + 0x20 ) = dVar21 / _LC13;
      if (pvVar18 == *(vector**)( param_1 + 8 )) goto LAB_00102790;
   }
 else {
      pvVar18 = *(vector**)param_1;
      if (pvVar18 == *(vector**)( param_1 + 8 )) goto LAB_00102790;
   }

   do {
      lVar7 = *(long*)( pvVar18 + 8 ) - *(long*)pvVar18 >> 4;
      if (*(long*)( this + 0x50 ) != *(long*)( this + 0x58 )) {
         *(long*)( this + 0x58 ) = *(long*)( this + 0x50 );
      }

      if (lVar7 == 1) {
         if (*(long*)( this + 0xc0 ) == 0) {
            dVar24 = *(double*)( this + 0x10 );
         }
 else {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = local_68._8_8_;
            local_68 = auVar4 << 0x40;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = local_58._8_8_;
            local_58 = auVar5 << 0x40;
            dVar24 = (double)( **(code**)( this + 200 ) )(this + 0xb0, pvVar18, this + 0x38, local_68, local_58);
            GVar1 = param_1[0x28];
            *(double*)( this + 0x10 ) = dVar24;
            if (GVar1 != (Group)0x0) {
               dVar24 = (double)( (ulong)dVar24 ^ _LC15 );
               *(double*)( this + 0x10 ) = dVar24;
            }

            local_b8 = (double)( uVar6 & (ulong)dVar24 );
         }

         if (_LC0 <= dVar24) {
            plVar9 = *(long**)pvVar18;
            if (*(int*)( param_1 + 0x2c ) == 2) {
               dVar24 = *(double*)( this + 0x20 );
               if (dVar24 <= 0.0) {
                  if (local_b8 <= 0.0) goto LAB_00102d50;
                  LAB_00102ac0:dVar24 = SQRT(( local_b8 + local_b8 ) * _LC3) * _LC12;
                  if (_LC22 <= dVar24) {
                     local_b0 = (long)( dVar24 - _LC22 ) ^ 0x8000000000000000;
                  }
 else {
                     local_b0 = (ulong)dVar24;
                  }

                  LAB_00102ae0:sincos(_LC13 / (double)local_b0, &local_70, &local_78);
                  dVar19 = local_70;
                  dVar24 = local_78;
                  local_58 = (undefined1[16])0x0;
                  local_48 = (long*)0x0;
                  std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::reserve(( vector<Clipper2Lib::Point<long>,std::allocator < Clipper2Lib::Point < long> >> *)local_58,local_b0 ));
                  lVar7 = plVar9[1];
                  dVar21 = round((double)*plVar9 + local_b8);
                  local_68._8_8_ = (long)(double)lVar7;
                  local_68._0_8_ = (long)dVar21;
                  if ((long*)local_58._8_8_ == local_48) {
                     std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::_M_realloc_insert<Clipper2Lib::Point<long>>((vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>*)local_58, local_48, local_68);
                     plVar8 = (long*)local_58._8_8_;
                  }
 else {
                     plVar8 = (long*)( local_58._8_8_ + 0x10 );
                     *(long*)local_58._8_8_ = (long)dVar21;
                     *(long*)( local_58._8_8_ + 8 ) = (long)(double)lVar7;
                     local_58._8_8_ = plVar8;
                  }

                  local_c8 = local_48;
                  if (1 < local_b0) {
                     uVar17 = 1;
                     plVar16 = plVar8;
                     dVar21 = dVar24;
                     dVar23 = dVar19;
                     do {
                        lVar7 = plVar9[1];
                        dVar22 = round((double)*plVar9 + local_b8 * dVar21);
                        local_68._0_8_ = (long)dVar22;
                        dVar22 = round((double)lVar7 + local_b8 * dVar23);
                        local_68._8_8_ = (long)dVar22;
                        if (plVar16 == local_c8) {
                           std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::_M_realloc_insert<Clipper2Lib::Point<long>>((vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>*)local_58, plVar16, local_68);
                           local_c8 = local_48;
                           plVar8 = (long*)local_58._8_8_;
                        }
 else {
                           plVar8 = plVar16 + 2;
                           *plVar16 = local_68._0_8_;
                           plVar16[1] = (long)dVar22;
                           local_58._8_8_ = plVar8;
                        }

                        uVar17 = uVar17 + 1;
                        dVar22 = dVar21 * dVar19;
                        dVar21 = dVar24 * dVar21 - dVar19 * dVar23;
                        dVar23 = dVar23 * dVar24 + dVar22;
                        plVar16 = plVar8;
                     }
 while ( local_b0 != uVar17 );
                  }

                  uVar12 = local_58._0_8_;
               }
 else {
                  if (0.0 < local_b8) {
                     dVar24 = ( dVar24 + dVar24 ) * _LC12;
                     if ((double)( (ulong)dVar24 & uVar6 ) < _LC14) {
                        dVar24 = (double)( ( ulong )((double)(long)dVar24 + (double)( -(ulong)((double)(long)dVar24 < dVar24) & (ulong)_LC0 )) | ~uVar6 & (ulong)dVar24 );
                        if (dVar24 < _LC22) goto LAB_00102e35;
                        LAB_00102661:local_b0 = (long)( dVar24 - _LC22 ) ^ 0x8000000000000000;
                     }
 else {
                        if (_LC22 <= dVar24) goto LAB_00102661;
                        LAB_00102e35:local_b0 = (ulong)dVar24;
                     }

                     if (local_b0 < 3) goto LAB_00102ac0;
                     goto LAB_00102ae0;
                  }

                  LAB_00102d50:local_c8 = (long*)0x0;
                  plVar8 = (long*)0x0;
                  uVar12 = 0;
               }

               pvVar10 = *(void**)( this + 0x50 );
               *(undefined8*)( this + 0x50 ) = uVar12;
               lVar7 = *(long*)( this + 0x60 );
               *(long**)( this + 0x58 ) = plVar8;
               *(long**)( this + 0x60 ) = local_c8;
               if (pvVar10 != (void*)0x0) {
                  LAB_001029a6:operator_delete(pvVar10, lVar7 - (long)pvVar10);
                  goto LAB_001029b1;
               }

               pvVar15 = *( vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > ** )(this + 0x68);
               pauVar13 = *(undefined1(**) [16])( pvVar15 + 8 );
               if (pauVar13 != *(undefined1(**) [16])( pvVar15 + 0x10 )) goto LAB_001029c5;
            }
 else {
               dVar24 = local_b8;
               if ((double)( (ulong)local_b8 & uVar6 ) < _LC14) {
                  dVar24 = (double)( ( ulong )((double)( -(ulong)((double)(long)local_b8 < local_b8) & (ulong)_LC0 ) + (double)(long)local_b8) | ~uVar6 & (ulong)local_b8 );
               }

               local_48 = (long*)0x0;
               lVar7 = (long)(int)dVar24;
               lVar11 = lVar7 + *plVar9;
               lVar25 = lVar7 + plVar9[1];
               lVar20 = *plVar9 - lVar7;
               lVar7 = plVar9[1] - lVar7;
               local_58 = (undefined1[16])0x0;
               std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::reserve(( vector<Clipper2Lib::Point<long>,std::allocator < Clipper2Lib::Point < long> >> *)local_58,4 ));
               if ((long*)local_58._8_8_ == local_48) {
                  local_68._0_8_ = lVar20;
                  local_68._8_8_ = lVar7;
                  std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::_M_realloc_insert<Clipper2Lib::Point<long>>((vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>*)local_58, local_48, local_68);
                  plVar9 = (long*)local_58._8_8_;
               }
 else {
                  plVar9 = (long*)( local_58._8_8_ + 0x10 );
                  *(long*)local_58._8_8_ = lVar20;
                  *(long*)( local_58._8_8_ + 8 ) = lVar7;
                  local_58._8_8_ = plVar9;
               }

               if (local_48 == plVar9) {
                  local_68._0_8_ = lVar11;
                  local_68._8_8_ = lVar7;
                  std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::_M_realloc_insert<Clipper2Lib::Point<long>>((vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>*)local_58, local_48, local_68);
                  plVar8 = (long*)local_58._8_8_;
                  if (local_48 == (long*)local_58._8_8_) goto LAB_00102f30;
                  LAB_0010293e:*plVar8 = lVar11;
                  plVar8[1] = lVar25;
                  local_58._8_8_ = plVar8 + 2;
                  plVar9 = plVar8 + 2;
               }
 else {
                  plVar8 = plVar9 + 2;
                  *plVar9 = lVar11;
                  plVar9[1] = lVar7;
                  local_58._8_8_ = plVar8;
                  if (local_48 != plVar8) goto LAB_0010293e;
                  LAB_00102f30:local_68._0_8_ = lVar11;
                  local_68._8_8_ = lVar25;
                  std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::_M_realloc_insert<Clipper2Lib::Point<long>>((vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>*)local_58, local_48, local_68);
                  plVar9 = (long*)local_58._8_8_;
               }

               local_68._8_8_ = lVar25;
               local_68._0_8_ = lVar20;
               if (local_48 == plVar9) {
                  std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::_M_realloc_insert<Clipper2Lib::Point<long>>((vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>*)local_58, local_48, local_68);
                  plVar9 = (long*)local_58._8_8_;
               }
 else {
                  *plVar9 = lVar20;
                  plVar9[1] = lVar25;
                  plVar9 = plVar9 + 2;
               }

               pvVar10 = *(void**)( this + 0x50 );
               lVar7 = *(long*)( this + 0x60 );
               *(long**)( this + 0x60 ) = local_48;
               *(undefined8*)( this + 0x50 ) = local_58._0_8_;
               *(long**)( this + 0x58 ) = plVar9;
               if (pvVar10 != (void*)0x0) goto LAB_001029a6;
               LAB_001029b1:pvVar15 = *( vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > ** )(this + 0x68);
               pauVar13 = *(undefined1(**) [16])( pvVar15 + 8 );
               if (pauVar13 != *(undefined1(**) [16])( pvVar15 + 0x10 )) {
                  LAB_001029c5:uVar17 = *(long*)( this + 0x58 ) - *(long*)( this + 0x50 );
                  *(undefined8*)pauVar13[1] = 0;
                  *pauVar13 = (undefined1[16])0x0;
                  if (uVar17 == 0) {
                     pvVar10 = (void*)0x0;
                     pauVar14 = pauVar13;
                  }
 else {
                     if (0x7ffffffffffffff0 < uVar17) {
                        if ((long)uVar17 < 0) {
                           std::__throw_bad_array_new_length();
                        }

                        std::__throw_bad_alloc();
                        goto LAB_00102faf;
                     }

                     pvVar10 = operator_new(uVar17);
                     pauVar14 = *(undefined1(**) [16])( pvVar15 + 8 );
                  }

                  *(ulong*)pauVar13[1] = uVar17 + (long)pvVar10;
                  *(void**)*pauVar13 = pvVar10;
                  *(void**)( *pauVar13 + 8 ) = pvVar10;
                  lVar7 = *(long*)( this + 0x58 );
                  lVar20 = *(long*)( this + 0x50 );
                  if (lVar7 != lVar20) {
                     lVar11 = 0;
                     do {
                        uVar12 = ( (undefined8*)( lVar20 + lVar11 ) )[1];
                        *(undefined8*)( (long)pvVar10 + lVar11 ) = *(undefined8*)( lVar20 + lVar11 );
                        ( (undefined8*)( (long)pvVar10 + lVar11 ) )[1] = uVar12;
                        lVar11 = lVar11 + 0x10;
                     }
 while ( lVar11 != lVar7 - lVar20 );
                     pvVar10 = (void*)( (long)pvVar10 + lVar11 );
                  }

                  *(void**)( *pauVar13 + 8 ) = pvVar10;
                  *(undefined1**)( pvVar15 + 8 ) = pauVar14[1] + 8;
                  goto LAB_0010253b;
               }

            }

            std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > ::_M_realloc_insert<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>const&>(pvVar15, pauVar13, this + 0x50);
         }

      }
 else {
         if (( lVar7 == 2 ) && ( *(int*)( param_1 + 0x30 ) == 1 )) {
            *(uint*)( this + 0x94 ) = ( *(int*)( param_1 + 0x2c ) == 2 ) + 3;
         }

         BuildNormals((vector*)this);
         if (*(int*)( this + 0x94 ) == 0) {
            OffsetPolygon(this, param_1, pvVar18);
         }
 else if (*(int*)( this + 0x94 ) == 1) {
            OffsetOpenJoined(this, param_1, pvVar18);
         }
 else {
            OffsetOpenPath(this, param_1, pvVar18);
         }

      }

      LAB_0010253b:pvVar18 = pvVar18 + 0x18;
   }
 while ( *(vector**)( param_1 + 8 ) != pvVar18 );
   LAB_00102790:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00102faf:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x00103288) *//* WARNING: Removing unreachable block (ram,0x00103290) *//* WARNING: Removing unreachable block (ram,0x0010329c) *//* WARNING: Removing unreachable block (ram,0x00103660) *//* WARNING: Removing unreachable block (ram,0x00103668) *//* WARNING: Removing unreachable block (ram,0x00103674) *//* WARNING: Removing unreachable block (ram,0x0010367d) *//* WARNING: Removing unreachable block (ram,0x00103607) *//* WARNING: Removing unreachable block (ram,0x0010360a) *//* WARNING: Removing unreachable block (ram,0x00103612) *//* WARNING: Removing unreachable block (ram,0x0010361e) *//* WARNING: Removing unreachable block (ram,0x00103627) *//* WARNING: Removing unreachable block (ram,0x00103723) *//* WARNING: Removing unreachable block (ram,0x00103726) *//* WARNING: Removing unreachable block (ram,0x0010372e) *//* WARNING: Removing unreachable block (ram,0x0010373a) *//* WARNING: Removing unreachable block (ram,0x00103743) *//* WARNING: Removing unreachable block (ram,0x0010354c) *//* WARNING: Removing unreachable block (ram,0x0010354f) *//* WARNING: Removing unreachable block (ram,0x00103557) *//* WARNING: Removing unreachable block (ram,0x00103563) *//* WARNING: Removing unreachable block (ram,0x0010356c) *//* WARNING: Removing unreachable block (ram,0x001035a8) *//* WARNING: Removing unreachable block (ram,0x001035b0) *//* WARNING: Removing unreachable block (ram,0x001035b8) *//* WARNING: Removing unreachable block (ram,0x001035c4) *//* WARNING: Removing unreachable block (ram,0x001035cd) *//* WARNING: Removing unreachable block (ram,0x001034ca) *//* WARNING: Removing unreachable block (ram,0x001034d0) *//* WARNING: Removing unreachable block (ram,0x001034d8) *//* WARNING: Removing unreachable block (ram,0x001034e4) *//* WARNING: Removing unreachable block (ram,0x001034ed) *//* WARNING: Removing unreachable block (ram,0x001032a5) *//* WARNING: Removing unreachable block (ram,0x001036b8) *//* WARNING: Removing unreachable block (ram,0x001036bb) *//* WARNING: Removing unreachable block (ram,0x001036c3) *//* WARNING: Removing unreachable block (ram,0x001036cf) *//* WARNING: Removing unreachable block (ram,0x001036d8) *//* WARNING: Removing unreachable block (ram,0x001032af) *//* Clipper2Lib::ClipperOffset::ExecuteInternal(double) */void Clipper2Lib::ClipperOffset::ExecuteInternal(ClipperOffset *this, double param_1) {
   double dVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   vector *pvVar4;
   long *plVar5;
   undefined1(*pauVar6)[16];
   undefined8 uVar7;
   char cVar8;
   long lVar9;
   long lVar10;
   void *pvVar11;
   long lVar12;
   long *plVar13;
   undefined8 *puVar14;
   ulong uVar15;
   undefined1(*pauVar16)[16];
   Group *pGVar17;
   long *plVar18;
   byte bVar19;
   long *plVar20;
   vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > *pvVar21;
   long in_FS_OFFSET;
   double dVar22;
   undefined **local_148;
   undefined8 local_140;
   undefined4 local_138;
   undefined8 local_130;
   undefined2 local_128;
   undefined1 local_120[16];
   undefined1 local_110[16];
   undefined1 local_100[16];
   undefined1 local_f0[16];
   undefined1 local_e0[16];
   undefined1 local_d0[16];
   undefined1 local_b8[16];
   undefined1 local_a8[16];
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined8 local_78;
   undefined1 local_70;
   byte local_6f;
   undefined4 local_6c;
   undefined2 local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   long local_40;
   plVar13 = *(long**)( this + 0x78 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)this = 0;
   if (plVar13 == *(long**)( this + 0x80 )) goto LAB_001032cc;
   uVar15 = 0;
   do {
      lVar9 = plVar13[1] - *plVar13 >> 3;
      lVar10 = lVar9 * -0x5555555555555555;
      if ((int)plVar13[6] == 1) {
         lVar10 = lVar9 * 0x5555555555555556;
      }

      plVar13 = plVar13 + 7;
      uVar15 = uVar15 + lVar10;
   }
 while ( *(long**)( this + 0x80 ) != plVar13 );
   std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > ::reserve(*( vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > ** )(this + 0x68), uVar15);
   if ((double)( (ulong)param_1 & _LC8 ) < _LC3) {
      uVar15 = 0;
      for (plVar13 = *(long**)( this + 0x78 ); *(long**)( this + 0x80 ) != plVar13; plVar13 = plVar13 + 7) {
         uVar15 = uVar15 + ( plVar13[1] - *plVar13 >> 3 ) * -0x5555555555555555;
      }

      std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > ::reserve(*( vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > ** )(this + 0x68), uVar15);
      plVar13 = *(long**)( this + 0x80 );
      plVar18 = *(long**)( this + 0x78 );
      if (plVar13 != plVar18) {
         pvVar21 = *( vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > ** )(this + 0x68);
         do {
            plVar5 = (long*)plVar18[1];
            plVar20 = (long*)*plVar18;
            if (0 < (long)plVar5 - (long)plVar20) {
               do {
                  pauVar6 = *(undefined1(**) [16])( pvVar21 + 8 );
                  if (pauVar6 == *(undefined1(**) [16])( pvVar21 + 0x10 )) {
                     std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > ::_M_realloc_insert<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>const&>(pvVar21, pauVar6, plVar20);
                  }
 else {
                     uVar15 = plVar20[1] - *plVar20;
                     *(undefined8*)pauVar6[1] = 0;
                     *pauVar6 = (undefined1[16])0x0;
                     if (uVar15 == 0) {
                        pvVar11 = (void*)0x0;
                        pauVar16 = pauVar6;
                     }
 else {
                        if (0x7ffffffffffffff0 < uVar15) {
                           if ((long)uVar15 < 0) {
                              std::__throw_bad_array_new_length();
                           }

                           std::__throw_bad_alloc();
                           goto LAB_0010347c;
                        }

                        pvVar11 = operator_new(uVar15);
                        pauVar16 = *(undefined1(**) [16])( pvVar21 + 8 );
                     }

                     *(ulong*)pauVar6[1] = (long)pvVar11 + uVar15;
                     *(void**)*pauVar6 = pvVar11;
                     *(void**)( *pauVar6 + 8 ) = pvVar11;
                     lVar10 = *plVar20;
                     if (plVar20[1] != lVar10) {
                        lVar12 = plVar20[1] - lVar10;
                        lVar9 = 0;
                        do {
                           uVar7 = ( (undefined8*)( lVar10 + lVar9 ) )[1];
                           *(undefined8*)( (long)pvVar11 + lVar9 ) = *(undefined8*)( lVar10 + lVar9 );
                           ( (undefined8*)( (long)pvVar11 + lVar9 ) )[1] = uVar7;
                           lVar9 = lVar9 + 0x10;
                        }
 while ( lVar12 != lVar9 );
                        pvVar11 = (void*)( (long)pvVar11 + lVar12 );
                     }

                     *(void**)( *pauVar6 + 8 ) = pvVar11;
                     *(undefined1**)( pvVar21 + 8 ) = pauVar16[1] + 8;
                  }

                  plVar20 = plVar20 + 3;
               }
 while ( plVar5 != plVar20 );
               pvVar21 = *( vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > ** )(this + 0x68);
            }

            plVar18 = plVar18 + 7;
         }
 while ( plVar13 != plVar18 );
         goto LAB_0010310b;
      }

      LAB_0010347c:pvVar21 = *( vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > ** )(this + 0x68);
      if (*(long*)( pvVar21 + 8 ) == *(long*)pvVar21) goto LAB_001032cc;
   }
 else {
      dVar1 = *(double*)( this + 0x98 );
      dVar22 = _LC10;
      if (_LC0 < dVar1) {
         dVar22 = _LC10 / ( dVar1 * dVar1 );
      }

      pGVar17 = *(Group**)( this + 0x78 );
      *(double*)( this + 0x18 ) = dVar22;
      *(double*)( this + 8 ) = param_1;
      if (pGVar17 == *(Group**)( this + 0x80 )) goto LAB_0010347c;
      do {
         DoGroupOffset(this, pGVar17);
         if (*(int*)this != 0) {
            plVar13 = *(long**)( this + 0x68 );
            puVar2 = (undefined8*)*plVar13;
            puVar3 = (undefined8*)plVar13[1];
            puVar14 = puVar2;
            if (puVar2 != puVar3) {
               do {
                  pvVar11 = (void*)*puVar14;
                  if (pvVar11 != (void*)0x0) {
                     operator_delete(pvVar11, puVar14[2] - (long)pvVar11);
                  }

                  puVar14 = puVar14 + 3;
               }
 while ( puVar3 != puVar14 );
               plVar13[1] = (long)puVar2;
            }

         }

         pGVar17 = pGVar17 + 0x38;
      }
 while ( *(Group**)( this + 0x80 ) != pGVar17 );
      pvVar21 = *( vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > ** )(this + 0x68);
      LAB_0010310b:if (*(long*)( pvVar21 + 8 ) == *(long*)pvVar21) goto LAB_001032cc;
      for (lVar10 = *(long*)( this + 0x78 ); lVar10 != *(long*)( this + 0x80 ); lVar10 = lVar10 + 0x38) {
         if (*(int*)( lVar10 + 0x30 ) == 0) {
            bVar19 = *(byte*)( lVar10 + 0x28 );
            goto LAB_00103149;
         }

      }

   }

   bVar19 = 0;
   LAB_00103149:local_128 = 0;
   local_68 = 0x100;
   local_120 = (undefined1[16])0x0;
   local_6f = (byte)this[0xa9] ^ bVar19;
   local_110 = (undefined1[16])0x0;
   local_100 = (undefined1[16])0x0;
   local_f0 = (undefined1[16])0x0;
   local_e0 = (undefined1[16])0x0;
   local_d0 = (undefined1[16])0x0;
   local_b8 = (undefined1[16])0x0;
   local_a8 = (undefined1[16])0x0;
   local_98 = (undefined1[16])0x0;
   local_88 = (undefined1[16])0x0;
   local_60 = (undefined1[16])0x0;
   local_140 = 0;
   local_138 = 2;
   local_130 = 0;
   local_78 = 0;
   local_6c = 0;
   local_50 = 0;
   local_148 = &PTR__Clipper64_001070c0;
   local_70 = 0;
   Clipper2Lib::ClipperBase::AddPaths((ClipperBase*)&local_148, pvVar21, 0, 0);
   pvVar4 = *(vector**)( this + 0x70 );
   if (pvVar4 == (vector*)0x0) {
      pvVar4 = *(vector**)( this + 0x68 );
      puVar2 = *(undefined8**)pvVar4;
      puVar3 = *(undefined8**)( pvVar4 + 8 );
      if (bVar19 == 0) {
         puVar14 = puVar2;
         if (puVar2 != puVar3) {
            do {
               pvVar11 = (void*)*puVar14;
               if (pvVar11 != (void*)0x0) {
                  operator_delete(pvVar11, puVar14[2] - (long)pvVar11);
               }

               puVar14 = puVar14 + 3;
            }
 while ( puVar3 != puVar14 );
            *(undefined8**)( pvVar4 + 8 ) = puVar2;
         }

         cVar8 = Clipper2Lib::ClipperBase::ExecuteInternal((ClipperBase*)&local_148, 2, 2, 0);
         if (cVar8 != '\0') {
            Clipper2Lib::Clipper64::BuildPaths64((vector*)&local_148, pvVar4);
         }

         Clipper2Lib::ClipperBase::CleanUp();
      }
 else {
         puVar14 = puVar2;
         if (puVar2 != puVar3) {
            do {
               pvVar11 = (void*)*puVar14;
               if (pvVar11 != (void*)0x0) {
                  operator_delete(pvVar11, puVar14[2] - (long)pvVar11);
               }

               puVar14 = puVar14 + 3;
            }
 while ( puVar3 != puVar14 );
            *(undefined8**)( pvVar4 + 8 ) = puVar2;
         }

         cVar8 = Clipper2Lib::ClipperBase::ExecuteInternal((ClipperBase*)&local_148, 2, 3, 0);
         if (cVar8 != '\0') {
            Clipper2Lib::Clipper64::BuildPaths64((vector*)&local_148, pvVar4);
         }

         Clipper2Lib::ClipperBase::CleanUp();
      }

   }
 else if (bVar19 == 0) {
      cVar8 = Clipper2Lib::ClipperBase::ExecuteInternal((ClipperBase*)&local_148, 2, 2, 1);
      if (cVar8 != '\0') {
         if (*(code**)( *(long*)pvVar4 + 0x18 ) == PolyPath64::Clear) {
            std::vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>::resize((vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>*)( pvVar4 + 0x10 ), 0);
         }
 else {
            ( **(code**)( *(long*)pvVar4 + 0x18 ) )(pvVar4);
         }

         Clipper2Lib::Clipper64::BuildTree64((PolyPath64*)&local_148, pvVar4);
      }

      Clipper2Lib::ClipperBase::CleanUp();
   }
 else {
      cVar8 = Clipper2Lib::ClipperBase::ExecuteInternal((ClipperBase*)&local_148, 2, 3, 1);
      if (cVar8 != '\0') {
         if (*(code**)( *(long*)pvVar4 + 0x18 ) == PolyPath64::Clear) {
            std::vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>::resize((vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>*)( pvVar4 + 0x10 ), 0);
         }
 else {
            ( **(code**)( *(long*)pvVar4 + 0x18 ) )(pvVar4);
         }

         Clipper2Lib::Clipper64::BuildTree64((PolyPath64*)&local_148, pvVar4);
      }

      Clipper2Lib::ClipperBase::CleanUp();
   }

   local_148 = &PTR__Clipper64_001070c0;
   Clipper2Lib::ClipperBase::~ClipperBase((ClipperBase*)&local_148);
   LAB_001032cc:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Clipper2Lib::ClipperOffset::Execute(double, std::vector<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >, std::allocator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > > >&) */void Clipper2Lib::ClipperOffset::Execute(ClipperOffset *this, double param_1, vector *param_2) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   void *pvVar3;
   undefined8 *puVar4;
   puVar1 = *(undefined8**)param_2;
   puVar2 = *(undefined8**)( param_2 + 8 );
   puVar4 = puVar1;
   if (puVar1 != puVar2) {
      do {
         pvVar3 = (void*)*puVar4;
         if (pvVar3 != (void*)0x0) {
            operator_delete(pvVar3, puVar4[2] - (long)pvVar3);
         }

         puVar4 = puVar4 + 3;
      }
 while ( puVar2 != puVar4 );
      *(undefined8**)( param_2 + 8 ) = puVar1;
   }

   *(vector**)( this + 0x68 ) = param_2;
   *(undefined8*)( this + 0x70 ) = 0;
   ExecuteInternal(this, param_1);
   return;
}
/* Clipper2Lib::ClipperOffset::Execute(std::function<double (std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > const&, std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > const&, unsigned long, unsigned long)>,
   std::vector<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >,
   std::allocator<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >
   > >&) */void Clipper2Lib::ClipperOffset::Execute(ClipperOffset *this, long param_2, long *param_3) {
   code *pcVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   void *pvVar4;
   undefined1 auVar5[16];
   undefined8 *puVar6;
   long in_FS_OFFSET;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined1 local_58[16];
   undefined8 local_48;
   undefined8 uStack_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (undefined1[16])0x0;
   uVar7 = 0;
   uVar8 = 0;
   local_48 = 0;
   uStack_40 = 0;
   if (*(code**)( param_2 + 0x10 ) != (code*)0x0) {
      ( **(code**)( param_2 + 0x10 ) )(local_58, param_2, 2);
      uVar7 = *(undefined8*)( param_2 + 0x10 );
      uVar8 = *(undefined8*)( param_2 + 0x18 );
   }

   auVar5 = *(undefined1(*) [16])( this + 0xb0 );
   local_48 = *(undefined8*)( this + 0xc0 );
   uStack_40 = *(undefined8*)( this + 200 );
   pcVar1 = *(code**)( this + 0xc0 );
   *(undefined8*)( this + 0xc0 ) = uVar7;
   *(undefined8*)( this + 200 ) = uVar8;
   *(undefined8*)( this + 0xb0 ) = local_58._0_8_;
   *(undefined8*)( this + 0xb8 ) = local_58._8_8_;
   local_58 = auVar5;
   if (pcVar1 != (code*)0x0) {
      ( *pcVar1 )(local_58, local_58, 3);
   }

   puVar2 = (undefined8*)*param_3;
   puVar3 = (undefined8*)param_3[1];
   puVar6 = puVar2;
   if (puVar2 != puVar3) {
      do {
         pvVar4 = (void*)*puVar6;
         if (pvVar4 != (void*)0x0) {
            operator_delete(pvVar4, puVar6[2] - (long)pvVar4);
         }

         puVar6 = puVar6 + 3;
      }
 while ( puVar3 != puVar6 );
      param_3[1] = (long)puVar2;
   }

   *(long**)( this + 0x68 ) = param_3;
   *(undefined8*)( this + 0x70 ) = 0;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   ExecuteInternal(this, _LC0);
   return;
}
/* Clipper2Lib::ClipperOffset::Execute(double, Clipper2Lib::PolyPath64&) */void Clipper2Lib::ClipperOffset::Execute(ClipperOffset *this, double param_1, PolyPath64 *param_2) {
   undefined8 *puVar1;
   long *plVar2;
   undefined8 *puVar3;
   long *plVar4;
   undefined8 *puVar5;
   long *plVar6;
   undefined8 *puVar7;
   long *plVar8;
   void *pvVar9;
   undefined8 *puVar10;
   PolyPath64 *pPVar11;
   undefined1(*pauVar12)[16];
   undefined8 *puVar13;
   undefined8 *puVar14;
   undefined8 *puVar15;
   undefined8 *puVar16;
   undefined8 *puVar17;
   undefined8 *puVar18;
   undefined8 *puVar19;
   undefined8 *puVar20;
   undefined8 *puVar21;
   if (*(code**)( *(long*)param_2 + 0x18 ) == PolyPath64::Clear) {
      puVar1 = *(undefined8**)( param_2 + 0x18 );
      puVar15 = *(undefined8**)( param_2 + 0x10 );
      puVar20 = puVar15;
      if (puVar1 != puVar15) {
         LAB_001039ad:do {
            plVar2 = (long*)*puVar20;
            if (plVar2 != (long*)0x0) {
               if (*(code**)( *plVar2 + 8 ) != PolyPath64::~PolyPath64) {
                  puVar20 = puVar20 + 1;
                  ( **(code**)( *plVar2 + 8 ) )(plVar2);
                  if (puVar1 == puVar20) break;
                  goto LAB_001039ad;
               }

               puVar3 = (undefined8*)plVar2[2];
               *plVar2 = (long)&PTR__PolyPath64_00107088;
               puVar17 = (undefined8*)plVar2[3];
               puVar16 = puVar3;
               if (puVar17 != puVar3) {
                  LAB_001039ff:do {
                     plVar4 = (long*)*puVar16;
                     if (plVar4 != (long*)0x0) {
                        if (*(code**)( *plVar4 + 8 ) != PolyPath64::~PolyPath64) {
                           puVar16 = puVar16 + 1;
                           ( **(code**)( *plVar4 + 8 ) )(plVar4);
                           if (puVar17 == puVar16) break;
                           goto LAB_001039ff;
                        }

                        puVar5 = (undefined8*)plVar4[3];
                        *plVar4 = (long)&PTR__PolyPath64_00107088;
                        puVar19 = (undefined8*)plVar4[2];
                        puVar18 = puVar19;
                        if (puVar5 != puVar19) {
                           LAB_00103a53:do {
                              plVar6 = (long*)*puVar18;
                              if (plVar6 != (long*)0x0) {
                                 if (*(code**)( *plVar6 + 8 ) != PolyPath64::~PolyPath64) {
                                    puVar18 = puVar18 + 1;
                                    ( **(code**)( *plVar6 + 8 ) )(plVar6);
                                    if (puVar5 == puVar18) break;
                                    goto LAB_00103a53;
                                 }

                                 puVar7 = (undefined8*)plVar6[3];
                                 puVar14 = (undefined8*)plVar6[2];
                                 *plVar6 = (long)&PTR__PolyPath64_00107088;
                                 puVar13 = puVar14;
                                 if (puVar7 != puVar14) {
                                    LAB_00103aa5:do {
                                       plVar8 = (long*)*puVar13;
                                       if (plVar8 != (long*)0x0) {
                                          if (*(code**)( *plVar8 + 8 ) != PolyPath64::~PolyPath64) {
                                             puVar13 = puVar13 + 1;
                                             ( **(code**)( *plVar8 + 8 ) )(plVar8);
                                             if (puVar7 == puVar13) break;
                                             goto LAB_00103aa5;
                                          }

                                          *plVar8 = (long)&PTR__PolyPath64_00107088;
                                          std::vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>::resize((vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>*)( plVar8 + 2 ), 0);
                                          pvVar9 = (void*)plVar8[5];
                                          if (pvVar9 != (void*)0x0) {
                                             operator_delete(pvVar9, plVar8[7] - (long)pvVar9);
                                          }

                                          puVar10 = (undefined8*)plVar8[3];
                                          puVar21 = (undefined8*)plVar8[2];
                                          if (puVar10 != puVar21) {
                                             do {
                                                while (pPVar11 = (PolyPath64*)*puVar21,pPVar11 == (PolyPath64*)0x0) {
                                                   LAB_00103b22:puVar21 = puVar21 + 1;
                                                   if (puVar10 == puVar21) goto LAB_00103b50;
                                                }
;
                                                if (*(code**)( *(long*)pPVar11 + 8 ) == PolyPath64::~PolyPath64) {
                                                   PolyPath64::~PolyPath64(pPVar11);
                                                   operator_delete(pPVar11, 0x40);
                                                   goto LAB_00103b22;
                                                }

                                                ( **(code**)( *(long*)pPVar11 + 8 ) )();
                                                puVar21 = puVar21 + 1;
                                             }
 while ( puVar10 != puVar21 );
                                             LAB_00103b50:puVar21 = (undefined8*)plVar8[2];
                                          }

                                          if (puVar21 != (undefined8*)0x0) {
                                             operator_delete(puVar21, plVar8[4] - (long)puVar21);
                                          }

                                          operator_delete(plVar8, 0x40);
                                       }

                                       puVar13 = puVar13 + 1;
                                    }
 while ( puVar7 != puVar13 );
                                    plVar6[3] = (long)puVar14;
                                 }

                                 pvVar9 = (void*)plVar6[5];
                                 if (pvVar9 != (void*)0x0) {
                                    operator_delete(pvVar9, plVar6[7] - (long)pvVar9);
                                 }

                                 puVar7 = (undefined8*)plVar6[3];
                                 puVar14 = (undefined8*)plVar6[2];
                                 if (puVar7 != puVar14) {
                                    do {
                                       while (pPVar11 = (PolyPath64*)*puVar14,pPVar11 == (PolyPath64*)0x0) {
                                          LAB_00103bea:puVar14 = puVar14 + 1;
                                          if (puVar7 == puVar14) goto LAB_00103c20;
                                       }
;
                                       if (*(code**)( *(long*)pPVar11 + 8 ) == PolyPath64::~PolyPath64) {
                                          PolyPath64::~PolyPath64(pPVar11);
                                          operator_delete(pPVar11, 0x40);
                                          goto LAB_00103bea;
                                       }

                                       ( **(code**)( *(long*)pPVar11 + 8 ) )();
                                       puVar14 = puVar14 + 1;
                                    }
 while ( puVar7 != puVar14 );
                                    LAB_00103c20:puVar14 = (undefined8*)plVar6[2];
                                 }

                                 if (puVar14 != (undefined8*)0x0) {
                                    operator_delete(puVar14, plVar6[4] - (long)puVar14);
                                 }

                                 operator_delete(plVar6, 0x40);
                              }

                              puVar18 = puVar18 + 1;
                           }
 while ( puVar5 != puVar18 );
                           plVar4[3] = (long)puVar19;
                        }

                        pvVar9 = (void*)plVar4[5];
                        if (pvVar9 != (void*)0x0) {
                           operator_delete(pvVar9, plVar4[7] - (long)pvVar9);
                        }

                        puVar5 = (undefined8*)plVar4[3];
                        puVar19 = (undefined8*)plVar4[2];
                        if (puVar5 != puVar19) {
                           do {
                              while (pPVar11 = (PolyPath64*)*puVar19,pPVar11 == (PolyPath64*)0x0) {
                                 LAB_00103cba:puVar19 = puVar19 + 1;
                                 if (puVar5 == puVar19) goto LAB_00103cf0;
                              }
;
                              if (*(code**)( *(long*)pPVar11 + 8 ) == PolyPath64::~PolyPath64) {
                                 PolyPath64::~PolyPath64(pPVar11);
                                 operator_delete(pPVar11, 0x40);
                                 goto LAB_00103cba;
                              }

                              ( **(code**)( *(long*)pPVar11 + 8 ) )();
                              puVar19 = puVar19 + 1;
                           }
 while ( puVar5 != puVar19 );
                           LAB_00103cf0:puVar19 = (undefined8*)plVar4[2];
                        }

                        if (puVar19 != (undefined8*)0x0) {
                           operator_delete(puVar19, plVar4[4] - (long)puVar19);
                        }

                        operator_delete(plVar4, 0x40);
                     }

                     puVar16 = puVar16 + 1;
                  }
 while ( puVar17 != puVar16 );
                  plVar2[3] = (long)puVar3;
               }

               pvVar9 = (void*)plVar2[5];
               if (pvVar9 != (void*)0x0) {
                  operator_delete(pvVar9, plVar2[7] - (long)pvVar9);
               }

               puVar3 = (undefined8*)plVar2[3];
               puVar17 = (undefined8*)plVar2[2];
               if (puVar3 != puVar17) {
                  do {
                     while (pPVar11 = (PolyPath64*)*puVar17,pPVar11 == (PolyPath64*)0x0) {
                        LAB_00103d82:puVar17 = puVar17 + 1;
                        if (puVar3 == puVar17) goto LAB_00103db0;
                     }
;
                     if (*(code**)( *(long*)pPVar11 + 8 ) == PolyPath64::~PolyPath64) {
                        PolyPath64::~PolyPath64(pPVar11);
                        operator_delete(pPVar11, 0x40);
                        goto LAB_00103d82;
                     }

                     ( **(code**)( *(long*)pPVar11 + 8 ) )();
                     puVar17 = puVar17 + 1;
                  }
 while ( puVar3 != puVar17 );
                  LAB_00103db0:puVar17 = (undefined8*)plVar2[2];
               }

               if (puVar17 != (undefined8*)0x0) {
                  operator_delete(puVar17, plVar2[4] - (long)puVar17);
               }

               operator_delete(plVar2, 0x40);
            }

            puVar20 = puVar20 + 1;
         }
 while ( puVar1 != puVar20 );
         *(undefined8**)( param_2 + 0x18 ) = puVar15;
      }

   }
 else {
      ( **(code**)( *(long*)param_2 + 0x18 ) )(param_2);
   }

   *(PolyPath64**)( this + 0x70 ) = param_2;
   pauVar12 = (undefined1(*) [16])operator_new(0x18);
   *(undefined8*)pauVar12[1] = 0;
   *(undefined1(**) [16])( this + 0x68 ) = pauVar12;
   *pauVar12 = (undefined1[16])0x0;
   ExecuteInternal(this, param_1);
   plVar2 = *(long**)( this + 0x68 );
   if (plVar2 != (long*)0x0) {
      puVar1 = (undefined8*)plVar2[1];
      puVar15 = (undefined8*)*plVar2;
      if (puVar1 != puVar15) {
         do {
            pvVar9 = (void*)*puVar15;
            if (pvVar9 != (void*)0x0) {
               operator_delete(pvVar9, puVar15[2] - (long)pvVar9);
            }

            puVar15 = puVar15 + 3;
         }
 while ( puVar1 != puVar15 );
         puVar15 = (undefined8*)*plVar2;
      }

      if (puVar15 != (undefined8*)0x0) {
         operator_delete(puVar15, plVar2[2] - (long)puVar15);
      }

      operator_delete(plVar2, 0x18);
   }

   *(undefined8*)( this + 0x68 ) = 0;
   return;
}
/* Clipper2Lib::PolyPath64::Count() const */long Clipper2Lib::PolyPath64::Count(PolyPath64 *this) {
   return *(long*)( this + 0x18 ) - *(long*)( this + 0x10 ) >> 3;
}
/* Clipper2Lib::Clipper64::~Clipper64() */void Clipper2Lib::Clipper64::~Clipper64(Clipper64 *this) {
   *(undefined***)this = &PTR__Clipper64_001070c0;
   Clipper2Lib::ClipperBase::~ClipperBase((ClipperBase*)this);
   return;
}
/* Clipper2Lib::Clipper64::~Clipper64() */void Clipper2Lib::Clipper64::~Clipper64(Clipper64 *this) {
   *(undefined***)this = &PTR__Clipper64_001070c0;
   Clipper2Lib::ClipperBase::~ClipperBase((ClipperBase*)this);
   operator_delete(this, 0x100);
   return;
}
/* std::vector<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >,
   std::allocator<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >
   > >::reserve(unsigned long) */void std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>::reserve(vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator < Clipper2Lib::Point<long>>>> > *this, ulong param_1) {
   long lVar1;
   long lVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   undefined8 *puVar9;
   if (0x555555555555555 < param_1) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::reserve");
   }

   lVar1 = *(long*)this;
   if (param_1 <= ( ulong )(( *(long*)( this + 0x10 ) - lVar1 >> 3 ) * -0x5555555555555555)) {
      return;
   }

   lVar2 = *(long*)( this + 8 );
   puVar8 = (undefined8*)operator_new(param_1 * 0x18);
   puVar3 = *(undefined8**)( this + 8 );
   puVar4 = *(undefined8**)this;
   puVar7 = puVar8;
   for (puVar9 = puVar4; puVar3 != puVar9; puVar9 = puVar9 + 3) {
      uVar6 = puVar9[1];
      uVar5 = puVar9[2];
      *puVar7 = *puVar9;
      puVar7[1] = uVar6;
      puVar7[2] = uVar5;
      puVar7 = puVar7 + 3;
   }

   if (puVar4 != (undefined8*)0x0) {
      operator_delete(puVar4, *(long*)( this + 0x10 ) - (long)puVar4);
   }

   *(undefined8**)this = puVar8;
   *(long*)( this + 8 ) = ( lVar2 - lVar1 ) + (long)puVar8;
   *(undefined8**)( this + 0x10 ) = puVar8 + param_1 * 3;
   return;
}
/* std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> >
   >::reserve(unsigned long) */void std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::reserve(vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>> *this, ulong param_1) {
   long lVar1;
   long lVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   undefined8 uVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   if (param_1 >> 0x3b != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::reserve");
   }

   lVar1 = *(long*)this;
   if (param_1 <= ( ulong )(*(long*)( this + 0x10 ) - lVar1 >> 4)) {
      return;
   }

   lVar2 = *(long*)( this + 8 );
   puVar7 = (undefined8*)operator_new(param_1 * 0x10);
   puVar3 = *(undefined8**)( this + 8 );
   puVar4 = *(undefined8**)this;
   puVar6 = puVar7;
   for (puVar8 = puVar4; puVar3 != puVar8; puVar8 = puVar8 + 2) {
      uVar5 = puVar8[1];
      *puVar6 = *puVar8;
      puVar6[1] = uVar5;
      puVar6 = puVar6 + 2;
   }

   if (puVar4 != (undefined8*)0x0) {
      operator_delete(puVar4, *(long*)( this + 0x10 ) - (long)puVar4);
   }

   *(undefined8**)this = puVar7;
   *(long*)( this + 8 ) = ( lVar2 - lVar1 ) + (long)puVar7;
   *(undefined8**)( this + 0x10 ) = puVar7 + param_1 * 2;
   return;
}
/* std::vector<std::unique_ptr<Clipper2Lib::PolyPath64, std::default_delete<Clipper2Lib::PolyPath64>
   >, std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,
   std::default_delete<Clipper2Lib::PolyPath64> > > >::_M_default_append(unsigned long) */void std::vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>::_M_default_append(vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>> *this, ulong param_1) {
   ulong uVar1;
   undefined8 *__s;
   undefined8 *puVar2;
   undefined8 *puVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   ulong uVar7;
   if (param_1 == 0) {
      return;
   }

   __s = *(undefined8**)( this + 8 );
   puVar2 = *(undefined8**)this;
   if (( ulong )(*(long*)( this + 0x10 ) - (long)__s >> 3) < param_1) {
      uVar4 = (long)__s - (long)puVar2 >> 3;
      if (0xfffffffffffffff - uVar4 < param_1) {
         /* WARNING: Subroutine does not return */
         std::__throw_length_error("vector::_M_default_append");
      }

      uVar1 = param_1 + uVar4;
      uVar7 = 0xfffffffffffffff;
      if (uVar1 < 0x1000000000000000) {
         uVar7 = uVar1;
      }

      if (( param_1 <= uVar4 ) && ( uVar7 = 0xfffffffffffffff < uVar7 )) {
         uVar7 = 0xfffffffffffffff;
      }

      puVar5 = (undefined8*)operator_new(uVar7 * 8);
      memset((void*)( (long)puVar5 + ( (long)__s - (long)puVar2 ) ), 0, param_1 * 8);
      puVar3 = puVar5;
      for (puVar6 = puVar2; puVar6 != __s; puVar6 = puVar6 + 1) {
         *puVar3 = *puVar6;
         puVar3 = puVar3 + 1;
      }

      if (puVar2 != (undefined8*)0x0) {
         operator_delete(puVar2, *(long*)( this + 0x10 ) - (long)puVar2);
      }

      *(undefined8**)this = puVar5;
      *(undefined8**)( this + 8 ) = puVar5 + uVar1;
      *(undefined8**)( this + 0x10 ) = puVar5 + uVar7;
      return;
   }

   memset(__s, 0, param_1 * 8);
   *(undefined8**)( this + 8 ) = __s + param_1;
   return;
}
/* std::vector<std::unique_ptr<Clipper2Lib::PolyPath64, std::default_delete<Clipper2Lib::PolyPath64>
   >, std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,
   std::default_delete<Clipper2Lib::PolyPath64> > > >::resize(unsigned long) */void std::vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>::resize(vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>> *this, ulong param_1) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   long *plVar3;
   undefined8 *puVar4;
   long *plVar5;
   void *pvVar6;
   undefined8 *puVar7;
   PolyPath64 *pPVar8;
   ulong uVar9;
   undefined8 *puVar10;
   undefined8 *puVar11;
   undefined8 *puVar12;
   undefined8 *local_68;
   puVar2 = *(undefined8**)( this + 8 );
   uVar9 = (long)puVar2 - *(long*)this >> 3;
   if (uVar9 < param_1) {
      _M_default_append(this, param_1 - uVar9);
      return;
   }

   if (( param_1 < uVar9 ) && ( puVar1 = (undefined8*)( *(long*)this + param_1 * 8 ) ),local_68 = puVar1,puVar1 != puVar2) {
      do {
         plVar3 = (long*)*local_68;
         if (plVar3 != (long*)0x0) {
            if (*(code**)( *plVar3 + 8 ) == Clipper2Lib::PolyPath64::~PolyPath64) {
               puVar4 = (undefined8*)plVar3[3];
               *plVar3 = (long)&PTR__PolyPath64_00107088;
               puVar10 = (undefined8*)plVar3[2];
               puVar11 = puVar10;
               if (puVar4 != puVar10) {
                  do {
                     plVar5 = (long*)*puVar11;
                     if (plVar5 != (long*)0x0) {
                        if (*(code**)( *plVar5 + 8 ) == Clipper2Lib::PolyPath64::~PolyPath64) {
                           *plVar5 = (long)&PTR__PolyPath64_00107088;
                           resize((vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>*)( plVar5 + 2 ), 0);
                           pvVar6 = (void*)plVar5[5];
                           if (pvVar6 != (void*)0x0) {
                              operator_delete(pvVar6, plVar5[7] - (long)pvVar6);
                           }

                           puVar7 = (undefined8*)plVar5[3];
                           puVar12 = (undefined8*)plVar5[2];
                           if (puVar7 != puVar12) {
                              do {
                                 while (pPVar8 = (PolyPath64*)*puVar12,pPVar8 == (PolyPath64*)0x0) {
                                    LAB_00104419:puVar12 = puVar12 + 1;
                                    if (puVar7 == puVar12) goto LAB_00104448;
                                 }
;
                                 if (*(code**)( *(long*)pPVar8 + 8 ) == Clipper2Lib::PolyPath64::~PolyPath64) {
                                    Clipper2Lib::PolyPath64::~PolyPath64(pPVar8);
                                    operator_delete(pPVar8, 0x40);
                                    goto LAB_00104419;
                                 }

                                 ( **(code**)( *(long*)pPVar8 + 8 ) )();
                                 puVar12 = puVar12 + 1;
                              }
 while ( puVar7 != puVar12 );
                              LAB_00104448:puVar12 = (undefined8*)plVar5[2];
                           }

                           if (puVar12 != (undefined8*)0x0) {
                              operator_delete(puVar12, plVar5[4] - (long)puVar12);
                           }

                           operator_delete(plVar5, 0x40);
                        }
 else {
                           ( **(code**)( *plVar5 + 8 ) )(plVar5);
                        }

                     }

                     puVar11 = puVar11 + 1;
                  }
 while ( puVar4 != puVar11 );
                  plVar3[3] = (long)puVar10;
               }

               pvVar6 = (void*)plVar3[5];
               if (pvVar6 != (void*)0x0) {
                  operator_delete(pvVar6, plVar3[7] - (long)pvVar6);
               }

               puVar4 = (undefined8*)plVar3[3];
               puVar10 = (undefined8*)plVar3[2];
               if (puVar4 != puVar10) {
                  do {
                     while (pPVar8 = (PolyPath64*)*puVar10,pPVar8 == (PolyPath64*)0x0) {
                        LAB_001044c2:puVar10 = puVar10 + 1;
                        if (puVar4 == puVar10) goto LAB_001044f0;
                     }
;
                     if (*(code**)( *(long*)pPVar8 + 8 ) == Clipper2Lib::PolyPath64::~PolyPath64) {
                        Clipper2Lib::PolyPath64::~PolyPath64(pPVar8);
                        operator_delete(pPVar8, 0x40);
                        goto LAB_001044c2;
                     }

                     ( **(code**)( *(long*)pPVar8 + 8 ) )();
                     puVar10 = puVar10 + 1;
                  }
 while ( puVar4 != puVar10 );
                  LAB_001044f0:puVar10 = (undefined8*)plVar3[2];
               }

               if (puVar10 != (undefined8*)0x0) {
                  operator_delete(puVar10, plVar3[4] - (long)puVar10);
               }

               operator_delete(plVar3, 0x40);
            }
 else {
               ( **(code**)( *plVar3 + 8 ) )(plVar3);
            }

         }

         local_68 = local_68 + 1;
      }
 while ( puVar2 != local_68 );
      *(undefined8**)( this + 8 ) = puVar1;
   }

   return;
}
/* Clipper2Lib::PolyPath64::~PolyPath64() */void Clipper2Lib::PolyPath64::~PolyPath64(PolyPath64 *this) {
   undefined8 *puVar1;
   long *plVar2;
   long *plVar3;
   long *plVar4;
   long *plVar5;
   void *pvVar6;
   PolyPath64 *pPVar7;
   long *plVar8;
   undefined8 *puVar9;
   undefined8 *puVar10;
   undefined8 *puVar11;
   undefined8 *puVar12;
   undefined8 *puVar13;
   undefined8 *puVar14;
   undefined8 *puVar15;
   undefined8 *puVar16;
   undefined8 *puVar17;
   undefined8 *puVar18;
   undefined8 *puVar19;
   undefined8 *puVar20;
   undefined8 *puVar21;
   undefined8 *puVar22;
   undefined8 *puVar23;
   puVar1 = *(undefined8**)( this + 0x18 );
   puVar23 = *(undefined8**)( this + 0x10 );
   *(undefined***)this = &PTR__PolyPath64_00107088;
   puVar21 = puVar23;
   if (puVar1 != puVar23) {
      LAB_001045d9:do {
         plVar2 = (long*)*puVar21;
         if (plVar2 != (long*)0x0) {
            if (*(code**)( *plVar2 + 8 ) != ~PolyPath64) {
               puVar21 = puVar21 + 1;
               ( **(code**)( *plVar2 + 8 ) )(plVar2);
               if (puVar1 == puVar21) break;
               goto LAB_001045d9;
            }

            puVar18 = (undefined8*)plVar2[2];
            *plVar2 = (long)&PTR__PolyPath64_00107088;
            puVar17 = (undefined8*)plVar2[3];
            puVar14 = puVar18;
            if (puVar17 != puVar18) {
               LAB_00104627:do {
                  plVar3 = (long*)*puVar14;
                  if (plVar3 != (long*)0x0) {
                     if (*(code**)( *plVar3 + 8 ) != ~PolyPath64) {
                        puVar14 = puVar14 + 1;
                        ( **(code**)( *plVar3 + 8 ) )(plVar3);
                        if (puVar17 == puVar14) break;
                        goto LAB_00104627;
                     }

                     puVar22 = (undefined8*)plVar3[3];
                     puVar11 = (undefined8*)plVar3[2];
                     *plVar3 = (long)&PTR__PolyPath64_00107088;
                     puVar10 = puVar11;
                     if (puVar22 != puVar11) {
                        LAB_00104671:do {
                           plVar4 = (long*)*puVar10;
                           if (plVar4 != (long*)0x0) {
                              if (*(code**)( *plVar4 + 8 ) != ~PolyPath64) {
                                 puVar10 = puVar10 + 1;
                                 ( **(code**)( *plVar4 + 8 ) )(plVar4);
                                 if (puVar22 == puVar10) break;
                                 goto LAB_00104671;
                              }

                              puVar20 = (undefined8*)plVar4[3];
                              puVar16 = (undefined8*)plVar4[2];
                              *plVar4 = (long)&PTR__PolyPath64_00107088;
                              puVar15 = puVar16;
                              if (puVar20 != puVar16) {
                                 LAB_001046c7:do {
                                    plVar5 = (long*)*puVar15;
                                    if (plVar5 != (long*)0x0) {
                                       if (*(code**)( *plVar5 + 8 ) != ~PolyPath64) {
                                          puVar15 = puVar15 + 1;
                                          ( **(code**)( *plVar5 + 8 ) )(plVar5);
                                          if (puVar20 == puVar15) break;
                                          goto LAB_001046c7;
                                       }

                                       *plVar5 = (long)&PTR__PolyPath64_00107088;
                                       std::vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>::resize((vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>*)( plVar5 + 2 ), 0);
                                       pvVar6 = (void*)plVar5[5];
                                       if (pvVar6 != (void*)0x0) {
                                          operator_delete(pvVar6, plVar5[7] - (long)pvVar6);
                                       }

                                       puVar13 = (undefined8*)plVar5[3];
                                       puVar12 = (undefined8*)plVar5[2];
                                       if (puVar13 != puVar12) {
                                          do {
                                             while (pPVar7 = (PolyPath64*)*puVar12,pPVar7 == (PolyPath64*)0x0) {
                                                LAB_00104740:puVar12 = puVar12 + 1;
                                                if (puVar13 == puVar12) goto LAB_00104770;
                                             }
;
                                             if (*(code**)( *(long*)pPVar7 + 8 ) == ~PolyPath64) {
                                                ~PolyPath64(pPVar7)
                                                ;;
                                                operator_delete(pPVar7, 0x40);
                                                goto LAB_00104740;
                                             }

                                             ( **(code**)( *(long*)pPVar7 + 8 ) )();
                                             puVar12 = puVar12 + 1;
                                          }
 while ( puVar13 != puVar12 );
                                          LAB_00104770:puVar12 = (undefined8*)plVar5[2];
                                       }

                                       if (puVar12 != (undefined8*)0x0) {
                                          operator_delete(puVar12, plVar5[4] - (long)puVar12);
                                       }

                                       operator_delete(plVar5, 0x40);
                                    }

                                    puVar15 = puVar15 + 1;
                                 }
 while ( puVar20 != puVar15 );
                                 plVar4[3] = (long)puVar16;
                              }

                              pvVar6 = (void*)plVar4[5];
                              if (pvVar6 != (void*)0x0) {
                                 operator_delete(pvVar6, plVar4[7] - (long)pvVar6);
                              }

                              puVar20 = (undefined8*)plVar4[3];
                              puVar16 = (undefined8*)plVar4[2];
                              if (puVar20 != puVar16) {
                                 do {
                                    while (pPVar7 = (PolyPath64*)*puVar16,pPVar7 == (PolyPath64*)0x0) {
                                       LAB_00104820:puVar16 = puVar16 + 1;
                                       if (puVar20 == puVar16) goto LAB_00104850;
                                    }
;
                                    if (*(code**)( *(long*)pPVar7 + 8 ) == ~PolyPath64) {
                                       ~PolyPath64(pPVar7)
                                       ;;
                                       operator_delete(pPVar7, 0x40);
                                       goto LAB_00104820;
                                    }

                                    ( **(code**)( *(long*)pPVar7 + 8 ) )();
                                    puVar16 = puVar16 + 1;
                                 }
 while ( puVar20 != puVar16 );
                                 LAB_00104850:puVar16 = (undefined8*)plVar4[2];
                              }

                              if (puVar16 != (undefined8*)0x0) {
                                 operator_delete(puVar16, plVar4[4] - (long)puVar16);
                              }

                              operator_delete(plVar4, 0x40);
                           }

                           puVar10 = puVar10 + 1;
                        }
 while ( puVar22 != puVar10 );
                        plVar3[3] = (long)puVar11;
                     }

                     pvVar6 = (void*)plVar3[5];
                     if (pvVar6 != (void*)0x0) {
                        operator_delete(pvVar6, plVar3[7] - (long)pvVar6);
                     }

                     puVar22 = (undefined8*)plVar3[3];
                     puVar11 = (undefined8*)plVar3[2];
                     if (puVar22 != puVar11) {
                        do {
                           while (pPVar7 = (PolyPath64*)*puVar11,pPVar7 == (PolyPath64*)0x0) {
                              LAB_001048e2:puVar11 = puVar11 + 1;
                              if (puVar22 == puVar11) goto LAB_00104910;
                           }
;
                           if (*(code**)( *(long*)pPVar7 + 8 ) == ~PolyPath64) {
                              ~PolyPath64(pPVar7)
                              ;;
                              operator_delete(pPVar7, 0x40);
                              goto LAB_001048e2;
                           }

                           ( **(code**)( *(long*)pPVar7 + 8 ) )();
                           puVar11 = puVar11 + 1;
                        }
 while ( puVar22 != puVar11 );
                        LAB_00104910:puVar11 = (undefined8*)plVar3[2];
                     }

                     if (puVar11 != (undefined8*)0x0) {
                        operator_delete(puVar11, plVar3[4] - (long)puVar11);
                     }

                     operator_delete(plVar3, 0x40);
                  }

                  puVar14 = puVar14 + 1;
               }
 while ( puVar17 != puVar14 );
               plVar2[3] = (long)puVar18;
            }

            pvVar6 = (void*)plVar2[5];
            if (pvVar6 != (void*)0x0) {
               operator_delete(pvVar6, plVar2[7] - (long)pvVar6);
            }

            puVar18 = (undefined8*)plVar2[3];
            puVar17 = (undefined8*)plVar2[2];
            if (puVar18 != puVar17) {
               do {
                  while (pPVar7 = (PolyPath64*)*puVar17,pPVar7 == (PolyPath64*)0x0) {
                     LAB_00104992:puVar17 = puVar17 + 1;
                     if (puVar18 == puVar17) goto LAB_001049c0;
                  }
;
                  if (*(code**)( *(long*)pPVar7 + 8 ) == ~PolyPath64) {
                     ~PolyPath64(pPVar7)
                     ;;
                     operator_delete(pPVar7, 0x40);
                     goto LAB_00104992;
                  }

                  ( **(code**)( *(long*)pPVar7 + 8 ) )();
                  puVar17 = puVar17 + 1;
               }
 while ( puVar18 != puVar17 );
               LAB_001049c0:puVar17 = (undefined8*)plVar2[2];
            }

            if (puVar17 != (undefined8*)0x0) {
               operator_delete(puVar17, plVar2[4] - (long)puVar17);
            }

            operator_delete(plVar2, 0x40);
         }

         puVar21 = puVar21 + 1;
      }
 while ( puVar1 != puVar21 );
      *(undefined8**)( this + 0x18 ) = puVar23;
   }

   pvVar6 = *(void**)( this + 0x28 );
   if (pvVar6 != (void*)0x0) {
      operator_delete(pvVar6, *(long*)( this + 0x38 ) - (long)pvVar6);
   }

   puVar1 = *(undefined8**)( this + 0x18 );
   puVar23 = *(undefined8**)( this + 0x10 );
   if (puVar1 != puVar23) {
      LAB_00104a40:do {
         plVar2 = (long*)*puVar23;
         if (plVar2 != (long*)0x0) {
            if (*(code**)( *plVar2 + 8 ) != ~PolyPath64) {
               puVar23 = puVar23 + 1;
               ( **(code**)( *plVar2 + 8 ) )(plVar2);
               if (puVar1 == puVar23) break;
               goto LAB_00104a40;
            }

            puVar21 = (undefined8*)plVar2[2];
            *plVar2 = (long)&PTR__PolyPath64_00107088;
            puVar18 = (undefined8*)plVar2[3];
            puVar17 = puVar21;
            if (puVar18 != puVar21) {
               LAB_00104a91:do {
                  plVar3 = (long*)*puVar17;
                  if (plVar3 != (long*)0x0) {
                     if (*(code**)( *plVar3 + 8 ) != ~PolyPath64) {
                        puVar17 = puVar17 + 1;
                        ( **(code**)( *plVar3 + 8 ) )(plVar3);
                        if (puVar18 == puVar17) break;
                        goto LAB_00104a91;
                     }

                     puVar14 = (undefined8*)plVar3[2];
                     *plVar3 = (long)&PTR__PolyPath64_00107088;
                     puVar22 = (undefined8*)plVar3[3];
                     puVar11 = puVar14;
                     if (puVar22 != puVar14) {
                        LAB_00104ae3:do {
                           plVar4 = (long*)*puVar11;
                           if (plVar4 != (long*)0x0) {
                              if (*(code**)( *plVar4 + 8 ) != ~PolyPath64) {
                                 puVar11 = puVar11 + 1;
                                 ( **(code**)( *plVar4 + 8 ) )(plVar4);
                                 if (puVar22 == puVar11) break;
                                 goto LAB_00104ae3;
                              }

                              puVar10 = (undefined8*)plVar4[3];
                              *plVar4 = (long)&PTR__PolyPath64_00107088;
                              puVar20 = (undefined8*)plVar4[2];
                              puVar16 = puVar20;
                              if (puVar10 != puVar20) {
                                 LAB_00104b36:do {
                                    plVar5 = (long*)*puVar16;
                                    if (plVar5 != (long*)0x0) {
                                       if (*(code**)( *plVar5 + 8 ) != ~PolyPath64) {
                                          puVar16 = puVar16 + 1;
                                          ( **(code**)( *plVar5 + 8 ) )(plVar5);
                                          if (puVar10 == puVar16) break;
                                          goto LAB_00104b36;
                                       }

                                       puVar15 = (undefined8*)plVar5[3];
                                       puVar13 = (undefined8*)plVar5[2];
                                       *plVar5 = (long)&PTR__PolyPath64_00107088;
                                       puVar12 = puVar13;
                                       if (puVar15 != puVar13) {
                                          LAB_00104b85:do {
                                             plVar8 = (long*)*puVar12;
                                             if (plVar8 != (long*)0x0) {
                                                if (*(code**)( *plVar8 + 8 ) != ~PolyPath64) {
                                                   puVar12 = puVar12 + 1;
                                                   ( **(code**)( *plVar8 + 8 ) )(plVar8);
                                                   if (puVar15 == puVar12) break;
                                                   goto LAB_00104b85;
                                                }

                                                *plVar8 = (long)&PTR__PolyPath64_00107088;
                                                std::vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>::resize((vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>*)( plVar8 + 2 ), 0);
                                                pvVar6 = (void*)plVar8[5];
                                                if (pvVar6 != (void*)0x0) {
                                                   operator_delete(pvVar6, plVar8[7] - (long)pvVar6);
                                                }

                                                puVar9 = (undefined8*)plVar8[3];
                                                puVar19 = (undefined8*)plVar8[2];
                                                if (puVar9 != puVar19) {
                                                   do {
                                                      while (pPVar7 = (PolyPath64*)*puVar19,pPVar7 == (PolyPath64*)0x0) {
                                                         LAB_00104c00:puVar19 = puVar19 + 1;
                                                         if (puVar9 == puVar19) goto LAB_00104c30;
                                                      }
;
                                                      if (*(code**)( *(long*)pPVar7 + 8 ) == ~PolyPath64) {
                                                         ~PolyPath64(pPVar7)
                                                         ;;
                                                         operator_delete(pPVar7, 0x40);
                                                         goto LAB_00104c00;
                                                      }

                                                      ( **(code**)( *(long*)pPVar7 + 8 ) )();
                                                      puVar19 = puVar19 + 1;
                                                   }
 while ( puVar9 != puVar19 );
                                                   LAB_00104c30:puVar19 = (undefined8*)plVar8[2];
                                                }

                                                if (puVar19 != (undefined8*)0x0) {
                                                   operator_delete(puVar19, plVar8[4] - (long)puVar19);
                                                }

                                                operator_delete(plVar8, 0x40);
                                             }

                                             puVar12 = puVar12 + 1;
                                          }
 while ( puVar15 != puVar12 );
                                          plVar5[3] = (long)puVar13;
                                       }

                                       pvVar6 = (void*)plVar5[5];
                                       if (pvVar6 != (void*)0x0) {
                                          operator_delete(pvVar6, plVar5[7] - (long)pvVar6);
                                       }

                                       puVar15 = (undefined8*)plVar5[3];
                                       puVar13 = (undefined8*)plVar5[2];
                                       if (puVar15 != puVar13) {
                                          do {
                                             while (pPVar7 = (PolyPath64*)*puVar13,pPVar7 == (PolyPath64*)0x0) {
                                                LAB_00104cd0:puVar13 = puVar13 + 1;
                                                if (puVar15 == puVar13) goto LAB_00104d00;
                                             }
;
                                             if (*(code**)( *(long*)pPVar7 + 8 ) == ~PolyPath64) {
                                                ~PolyPath64(pPVar7)
                                                ;;
                                                operator_delete(pPVar7, 0x40);
                                                goto LAB_00104cd0;
                                             }

                                             ( **(code**)( *(long*)pPVar7 + 8 ) )();
                                             puVar13 = puVar13 + 1;
                                          }
 while ( puVar15 != puVar13 );
                                          LAB_00104d00:puVar13 = (undefined8*)plVar5[2];
                                       }

                                       if (puVar13 != (undefined8*)0x0) {
                                          operator_delete(puVar13, plVar5[4] - (long)puVar13);
                                       }

                                       operator_delete(plVar5, 0x40);
                                    }

                                    puVar16 = puVar16 + 1;
                                 }
 while ( puVar10 != puVar16 );
                                 plVar4[3] = (long)puVar20;
                              }

                              pvVar6 = (void*)plVar4[5];
                              if (pvVar6 != (void*)0x0) {
                                 operator_delete(pvVar6, plVar4[7] - (long)pvVar6);
                              }

                              puVar10 = (undefined8*)plVar4[3];
                              puVar20 = (undefined8*)plVar4[2];
                              if (puVar10 != puVar20) {
                                 do {
                                    while (pPVar7 = (PolyPath64*)*puVar20,pPVar7 == (PolyPath64*)0x0) {
                                       LAB_00104da0:puVar20 = puVar20 + 1;
                                       if (puVar10 == puVar20) goto LAB_00104dd0;
                                    }
;
                                    if (*(code**)( *(long*)pPVar7 + 8 ) == ~PolyPath64) {
                                       ~PolyPath64(pPVar7)
                                       ;;
                                       operator_delete(pPVar7, 0x40);
                                       goto LAB_00104da0;
                                    }

                                    ( **(code**)( *(long*)pPVar7 + 8 ) )();
                                    puVar20 = puVar20 + 1;
                                 }
 while ( puVar10 != puVar20 );
                                 LAB_00104dd0:puVar20 = (undefined8*)plVar4[2];
                              }

                              if (puVar20 != (undefined8*)0x0) {
                                 operator_delete(puVar20, plVar4[4] - (long)puVar20);
                              }

                              operator_delete(plVar4, 0x40);
                           }

                           puVar11 = puVar11 + 1;
                        }
 while ( puVar22 != puVar11 );
                        plVar3[3] = (long)puVar14;
                     }

                     pvVar6 = (void*)plVar3[5];
                     if (pvVar6 != (void*)0x0) {
                        operator_delete(pvVar6, plVar3[7] - (long)pvVar6);
                     }

                     puVar14 = (undefined8*)plVar3[3];
                     puVar22 = (undefined8*)plVar3[2];
                     if (puVar14 != puVar22) {
                        do {
                           while (pPVar7 = (PolyPath64*)*puVar22,pPVar7 == (PolyPath64*)0x0) {
                              LAB_00104e60:puVar22 = puVar22 + 1;
                              if (puVar14 == puVar22) goto LAB_00104e90;
                           }
;
                           if (*(code**)( *(long*)pPVar7 + 8 ) == ~PolyPath64) {
                              ~PolyPath64(pPVar7)
                              ;;
                              operator_delete(pPVar7, 0x40);
                              goto LAB_00104e60;
                           }

                           ( **(code**)( *(long*)pPVar7 + 8 ) )();
                           puVar22 = puVar22 + 1;
                        }
 while ( puVar14 != puVar22 );
                        LAB_00104e90:puVar22 = (undefined8*)plVar3[2];
                     }

                     if (puVar22 != (undefined8*)0x0) {
                        operator_delete(puVar22, plVar3[4] - (long)puVar22);
                     }

                     operator_delete(plVar3, 0x40);
                  }

                  puVar17 = puVar17 + 1;
               }
 while ( puVar18 != puVar17 );
               plVar2[3] = (long)puVar21;
            }

            pvVar6 = (void*)plVar2[5];
            if (pvVar6 != (void*)0x0) {
               operator_delete(pvVar6, plVar2[7] - (long)pvVar6);
            }

            puVar21 = (undefined8*)plVar2[3];
            puVar18 = (undefined8*)plVar2[2];
            if (puVar21 != puVar18) {
               do {
                  while (pPVar7 = (PolyPath64*)*puVar18,pPVar7 == (PolyPath64*)0x0) {
                     LAB_00104f20:puVar18 = puVar18 + 1;
                     if (puVar21 == puVar18) goto LAB_00104f50;
                  }
;
                  if (*(code**)( *(long*)pPVar7 + 8 ) == ~PolyPath64) {
                     ~PolyPath64(pPVar7)
                     ;;
                     operator_delete(pPVar7, 0x40);
                     goto LAB_00104f20;
                  }

                  ( **(code**)( *(long*)pPVar7 + 8 ) )();
                  puVar18 = puVar18 + 1;
               }
 while ( puVar21 != puVar18 );
               LAB_00104f50:puVar18 = (undefined8*)plVar2[2];
            }

            if (puVar18 != (undefined8*)0x0) {
               operator_delete(puVar18, plVar2[4] - (long)puVar18);
            }

            operator_delete(plVar2, 0x40);
         }

         puVar23 = puVar23 + 1;
      }
 while ( puVar1 != puVar23 );
      puVar23 = *(undefined8**)( this + 0x10 );
   }

   if (puVar23 == (undefined8*)0x0) {
      return;
   }

   operator_delete(puVar23, *(long*)( this + 0x20 ) - (long)puVar23);
   return;
}
/* Clipper2Lib::PolyPath64::Clear() */void Clipper2Lib::PolyPath64::Clear(PolyPath64 *this) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   long *plVar3;
   undefined8 *puVar4;
   long *plVar5;
   undefined8 *puVar6;
   long *plVar7;
   undefined8 *puVar8;
   long *plVar9;
   void *pvVar10;
   undefined8 *puVar11;
   PolyPath64 *pPVar12;
   undefined8 *puVar13;
   undefined8 *puVar14;
   undefined8 *puVar15;
   undefined8 *puVar16;
   undefined8 *puVar17;
   undefined8 *puVar18;
   undefined8 *puVar19;
   undefined8 *puVar20;
   puVar1 = *(undefined8**)( this + 0x18 );
   puVar2 = *(undefined8**)( this + 0x10 );
   puVar20 = puVar2;
   if (puVar1 != puVar2) {
      LAB_0010510d:do {
         plVar3 = (long*)*puVar20;
         if (plVar3 != (long*)0x0) {
            if (*(code**)( *plVar3 + 8 ) != ~PolyPath64) {
               puVar20 = puVar20 + 1;
               ( **(code**)( *plVar3 + 8 ) )(plVar3);
               if (puVar1 == puVar20) break;
               goto LAB_0010510d;
            }

            puVar4 = (undefined8*)plVar3[2];
            *plVar3 = (long)&PTR__PolyPath64_00107088;
            puVar16 = (undefined8*)plVar3[3];
            puVar15 = puVar4;
            if (puVar16 != puVar4) {
               LAB_0010515f:do {
                  plVar5 = (long*)*puVar15;
                  if (plVar5 != (long*)0x0) {
                     if (*(code**)( *plVar5 + 8 ) != ~PolyPath64) {
                        puVar15 = puVar15 + 1;
                        ( **(code**)( *plVar5 + 8 ) )(plVar5);
                        if (puVar16 == puVar15) break;
                        goto LAB_0010515f;
                     }

                     puVar6 = (undefined8*)plVar5[3];
                     *plVar5 = (long)&PTR__PolyPath64_00107088;
                     puVar19 = (undefined8*)plVar5[2];
                     puVar17 = puVar19;
                     if (puVar6 != puVar19) {
                        LAB_001051b0:do {
                           plVar7 = (long*)*puVar17;
                           if (plVar7 != (long*)0x0) {
                              if (*(code**)( *plVar7 + 8 ) != ~PolyPath64) {
                                 puVar17 = puVar17 + 1;
                                 ( **(code**)( *plVar7 + 8 ) )(plVar7);
                                 if (puVar6 == puVar17) break;
                                 goto LAB_001051b0;
                              }

                              puVar8 = (undefined8*)plVar7[3];
                              *plVar7 = (long)&PTR__PolyPath64_00107088;
                              puVar14 = (undefined8*)plVar7[2];
                              puVar13 = puVar14;
                              if (puVar8 != puVar14) {
                                 LAB_00105202:do {
                                    plVar9 = (long*)*puVar13;
                                    if (plVar9 != (long*)0x0) {
                                       if (*(code**)( *plVar9 + 8 ) != ~PolyPath64) {
                                          puVar13 = puVar13 + 1;
                                          ( **(code**)( *plVar9 + 8 ) )(plVar9);
                                          if (puVar8 == puVar13) break;
                                          goto LAB_00105202;
                                       }

                                       *plVar9 = (long)&PTR__PolyPath64_00107088;
                                       std::vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>::resize((vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>*)( plVar9 + 2 ), 0);
                                       pvVar10 = (void*)plVar9[5];
                                       if (pvVar10 != (void*)0x0) {
                                          operator_delete(pvVar10, plVar9[7] - (long)pvVar10);
                                       }

                                       puVar11 = (undefined8*)plVar9[3];
                                       puVar18 = (undefined8*)plVar9[2];
                                       if (puVar11 != puVar18) {
                                          do {
                                             while (pPVar12 = (PolyPath64*)*puVar18,pPVar12 == (PolyPath64*)0x0) {
                                                LAB_00105272:puVar18 = puVar18 + 1;
                                                if (puVar11 == puVar18) goto LAB_001052a0;
                                             }
;
                                             if (*(code**)( *(long*)pPVar12 + 8 ) == ~PolyPath64) {
                                                ~PolyPath64(pPVar12)
                                                ;;
                                                operator_delete(pPVar12, 0x40);
                                                goto LAB_00105272;
                                             }

                                             ( **(code**)( *(long*)pPVar12 + 8 ) )();
                                             puVar18 = puVar18 + 1;
                                          }
 while ( puVar11 != puVar18 );
                                          LAB_001052a0:puVar18 = (undefined8*)plVar9[2];
                                       }

                                       if (puVar18 != (undefined8*)0x0) {
                                          operator_delete(puVar18, plVar9[4] - (long)puVar18);
                                       }

                                       operator_delete(plVar9, 0x40);
                                    }

                                    puVar13 = puVar13 + 1;
                                 }
 while ( puVar8 != puVar13 );
                                 plVar7[3] = (long)puVar14;
                              }

                              pvVar10 = (void*)plVar7[5];
                              if (pvVar10 != (void*)0x0) {
                                 operator_delete(pvVar10, plVar7[7] - (long)pvVar10);
                              }

                              puVar8 = (undefined8*)plVar7[3];
                              puVar14 = (undefined8*)plVar7[2];
                              if (puVar8 != puVar14) {
                                 do {
                                    while (pPVar12 = (PolyPath64*)*puVar14,pPVar12 == (PolyPath64*)0x0) {
                                       LAB_0010533a:puVar14 = puVar14 + 1;
                                       if (puVar8 == puVar14) goto LAB_00105370;
                                    }
;
                                    if (*(code**)( *(long*)pPVar12 + 8 ) == ~PolyPath64) {
                                       ~PolyPath64(pPVar12)
                                       ;;
                                       operator_delete(pPVar12, 0x40);
                                       goto LAB_0010533a;
                                    }

                                    ( **(code**)( *(long*)pPVar12 + 8 ) )();
                                    puVar14 = puVar14 + 1;
                                 }
 while ( puVar8 != puVar14 );
                                 LAB_00105370:puVar14 = (undefined8*)plVar7[2];
                              }

                              if (puVar14 != (undefined8*)0x0) {
                                 operator_delete(puVar14, plVar7[4] - (long)puVar14);
                              }

                              operator_delete(plVar7, 0x40);
                           }

                           puVar17 = puVar17 + 1;
                        }
 while ( puVar6 != puVar17 );
                        plVar5[3] = (long)puVar19;
                     }

                     pvVar10 = (void*)plVar5[5];
                     if (pvVar10 != (void*)0x0) {
                        operator_delete(pvVar10, plVar5[7] - (long)pvVar10);
                     }

                     puVar6 = (undefined8*)plVar5[3];
                     puVar19 = (undefined8*)plVar5[2];
                     if (puVar6 != puVar19) {
                        do {
                           while (pPVar12 = (PolyPath64*)*puVar19,pPVar12 == (PolyPath64*)0x0) {
                              LAB_00105402:puVar19 = puVar19 + 1;
                              if (puVar6 == puVar19) goto LAB_00105430;
                           }
;
                           if (*(code**)( *(long*)pPVar12 + 8 ) == ~PolyPath64) {
                              ~PolyPath64(pPVar12)
                              ;;
                              operator_delete(pPVar12, 0x40);
                              goto LAB_00105402;
                           }

                           ( **(code**)( *(long*)pPVar12 + 8 ) )();
                           puVar19 = puVar19 + 1;
                        }
 while ( puVar6 != puVar19 );
                        LAB_00105430:puVar19 = (undefined8*)plVar5[2];
                     }

                     if (puVar19 != (undefined8*)0x0) {
                        operator_delete(puVar19, plVar5[4] - (long)puVar19);
                     }

                     operator_delete(plVar5, 0x40);
                  }

                  puVar15 = puVar15 + 1;
               }
 while ( puVar16 != puVar15 );
               plVar3[3] = (long)puVar4;
            }

            pvVar10 = (void*)plVar3[5];
            if (pvVar10 != (void*)0x0) {
               operator_delete(pvVar10, plVar3[7] - (long)pvVar10);
            }

            puVar4 = (undefined8*)plVar3[3];
            puVar16 = (undefined8*)plVar3[2];
            if (puVar4 != puVar16) {
               do {
                  while (pPVar12 = (PolyPath64*)*puVar16,pPVar12 == (PolyPath64*)0x0) {
                     LAB_001054c2:puVar16 = puVar16 + 1;
                     if (puVar4 == puVar16) goto LAB_001054f0;
                  }
;
                  if (*(code**)( *(long*)pPVar12 + 8 ) == ~PolyPath64) {
                     ~PolyPath64(pPVar12)
                     ;;
                     operator_delete(pPVar12, 0x40);
                     goto LAB_001054c2;
                  }

                  ( **(code**)( *(long*)pPVar12 + 8 ) )();
                  puVar16 = puVar16 + 1;
               }
 while ( puVar4 != puVar16 );
               LAB_001054f0:puVar16 = (undefined8*)plVar3[2];
            }

            if (puVar16 != (undefined8*)0x0) {
               operator_delete(puVar16, plVar3[4] - (long)puVar16);
            }

            operator_delete(plVar3, 0x40);
         }

         puVar20 = puVar20 + 1;
      }
 while ( puVar1 != puVar20 );
      *(undefined8**)( this + 0x18 ) = puVar2;
   }

   return;
}
/* Clipper2Lib::PolyPath64::~PolyPath64() */void Clipper2Lib::PolyPath64::~PolyPath64(PolyPath64 *this) {
   undefined8 *puVar1;
   long *plVar2;
   undefined8 *puVar3;
   long *plVar4;
   undefined8 *puVar5;
   long *plVar6;
   undefined8 *puVar7;
   long *plVar8;
   void *pvVar9;
   undefined8 *puVar10;
   PolyPath64 *pPVar11;
   undefined8 *puVar12;
   undefined8 *puVar13;
   undefined8 *puVar14;
   undefined8 *puVar15;
   undefined8 *puVar16;
   undefined8 *puVar17;
   undefined8 *puVar18;
   undefined8 *puVar19;
   undefined8 *puVar20;
   puVar1 = *(undefined8**)( this + 0x18 );
   puVar14 = *(undefined8**)( this + 0x10 );
   *(undefined***)this = &PTR__PolyPath64_00107088;
   puVar19 = puVar14;
   if (puVar1 != puVar14) {
      LAB_0010561a:do {
         plVar2 = (long*)*puVar19;
         if (plVar2 != (long*)0x0) {
            if (*(code**)( *plVar2 + 8 ) != ~PolyPath64) {
               puVar19 = puVar19 + 1;
               ( **(code**)( *plVar2 + 8 ) )(plVar2);
               if (puVar1 == puVar19) break;
               goto LAB_0010561a;
            }

            puVar3 = (undefined8*)plVar2[2];
            *plVar2 = (long)&PTR__PolyPath64_00107088;
            puVar16 = (undefined8*)plVar2[3];
            puVar15 = puVar3;
            if (puVar16 != puVar3) {
               LAB_0010566c:do {
                  plVar4 = (long*)*puVar15;
                  if (plVar4 != (long*)0x0) {
                     if (*(code**)( *plVar4 + 8 ) != ~PolyPath64) {
                        puVar15 = puVar15 + 1;
                        ( **(code**)( *plVar4 + 8 ) )(plVar4);
                        if (puVar16 == puVar15) break;
                        goto LAB_0010566c;
                     }

                     puVar5 = (undefined8*)plVar4[3];
                     *plVar4 = (long)&PTR__PolyPath64_00107088;
                     puVar18 = (undefined8*)plVar4[2];
                     puVar17 = puVar18;
                     if (puVar5 != puVar18) {
                        LAB_001056c0:do {
                           plVar6 = (long*)*puVar17;
                           if (plVar6 != (long*)0x0) {
                              if (*(code**)( *plVar6 + 8 ) != ~PolyPath64) {
                                 puVar17 = puVar17 + 1;
                                 ( **(code**)( *plVar6 + 8 ) )(plVar6);
                                 if (puVar5 == puVar17) break;
                                 goto LAB_001056c0;
                              }

                              puVar7 = (undefined8*)plVar6[3];
                              puVar13 = (undefined8*)plVar6[2];
                              *plVar6 = (long)&PTR__PolyPath64_00107088;
                              puVar12 = puVar13;
                              if (puVar7 != puVar13) {
                                 LAB_00105712:do {
                                    plVar8 = (long*)*puVar12;
                                    if (plVar8 != (long*)0x0) {
                                       if (*(code**)( *plVar8 + 8 ) != ~PolyPath64) {
                                          puVar12 = puVar12 + 1;
                                          ( **(code**)( *plVar8 + 8 ) )(plVar8);
                                          if (puVar7 == puVar12) break;
                                          goto LAB_00105712;
                                       }

                                       *plVar8 = (long)&PTR__PolyPath64_00107088;
                                       std::vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>::resize((vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>*)( plVar8 + 2 ), 0);
                                       pvVar9 = (void*)plVar8[5];
                                       if (pvVar9 != (void*)0x0) {
                                          operator_delete(pvVar9, plVar8[7] - (long)pvVar9);
                                       }

                                       puVar10 = (undefined8*)plVar8[3];
                                       puVar20 = (undefined8*)plVar8[2];
                                       if (puVar10 != puVar20) {
                                          do {
                                             while (pPVar11 = (PolyPath64*)*puVar20,pPVar11 == (PolyPath64*)0x0) {
                                                LAB_0010578a:puVar20 = puVar20 + 1;
                                                if (puVar10 == puVar20) goto LAB_001057c0;
                                             }
;
                                             if (*(code**)( *(long*)pPVar11 + 8 ) == ~PolyPath64) {
                                                ~PolyPath64(pPVar11)
                                                ;;
                                                operator_delete(pPVar11, 0x40);
                                                goto LAB_0010578a;
                                             }

                                             ( **(code**)( *(long*)pPVar11 + 8 ) )();
                                             puVar20 = puVar20 + 1;
                                          }
 while ( puVar10 != puVar20 );
                                          LAB_001057c0:puVar20 = (undefined8*)plVar8[2];
                                       }

                                       if (puVar20 != (undefined8*)0x0) {
                                          operator_delete(puVar20, plVar8[4] - (long)puVar20);
                                       }

                                       operator_delete(plVar8, 0x40);
                                    }

                                    puVar12 = puVar12 + 1;
                                 }
 while ( puVar7 != puVar12 );
                                 plVar6[3] = (long)puVar13;
                              }

                              pvVar9 = (void*)plVar6[5];
                              if (pvVar9 != (void*)0x0) {
                                 operator_delete(pvVar9, plVar6[7] - (long)pvVar9);
                              }

                              puVar7 = (undefined8*)plVar6[3];
                              puVar13 = (undefined8*)plVar6[2];
                              if (puVar7 != puVar13) {
                                 do {
                                    while (pPVar11 = (PolyPath64*)*puVar13,pPVar11 == (PolyPath64*)0x0) {
                                       LAB_0010585a:puVar13 = puVar13 + 1;
                                       if (puVar7 == puVar13) goto LAB_00105890;
                                    }
;
                                    if (*(code**)( *(long*)pPVar11 + 8 ) == ~PolyPath64) {
                                       ~PolyPath64(pPVar11)
                                       ;;
                                       operator_delete(pPVar11, 0x40);
                                       goto LAB_0010585a;
                                    }

                                    ( **(code**)( *(long*)pPVar11 + 8 ) )();
                                    puVar13 = puVar13 + 1;
                                 }
 while ( puVar7 != puVar13 );
                                 LAB_00105890:puVar13 = (undefined8*)plVar6[2];
                              }

                              if (puVar13 != (undefined8*)0x0) {
                                 operator_delete(puVar13, plVar6[4] - (long)puVar13);
                              }

                              operator_delete(plVar6, 0x40);
                           }

                           puVar17 = puVar17 + 1;
                        }
 while ( puVar5 != puVar17 );
                        plVar4[3] = (long)puVar18;
                     }

                     pvVar9 = (void*)plVar4[5];
                     if (pvVar9 != (void*)0x0) {
                        operator_delete(pvVar9, plVar4[7] - (long)pvVar9);
                     }

                     puVar5 = (undefined8*)plVar4[3];
                     puVar18 = (undefined8*)plVar4[2];
                     if (puVar5 != puVar18) {
                        do {
                           while (pPVar11 = (PolyPath64*)*puVar18,pPVar11 == (PolyPath64*)0x0) {
                              LAB_0010592a:puVar18 = puVar18 + 1;
                              if (puVar5 == puVar18) goto LAB_00105960;
                           }
;
                           if (*(code**)( *(long*)pPVar11 + 8 ) == ~PolyPath64) {
                              ~PolyPath64(pPVar11)
                              ;;
                              operator_delete(pPVar11, 0x40);
                              goto LAB_0010592a;
                           }

                           ( **(code**)( *(long*)pPVar11 + 8 ) )();
                           puVar18 = puVar18 + 1;
                        }
 while ( puVar5 != puVar18 );
                        LAB_00105960:puVar18 = (undefined8*)plVar4[2];
                     }

                     if (puVar18 != (undefined8*)0x0) {
                        operator_delete(puVar18, plVar4[4] - (long)puVar18);
                     }

                     operator_delete(plVar4, 0x40);
                  }

                  puVar15 = puVar15 + 1;
               }
 while ( puVar16 != puVar15 );
               plVar2[3] = (long)puVar3;
            }

            pvVar9 = (void*)plVar2[5];
            if (pvVar9 != (void*)0x0) {
               operator_delete(pvVar9, plVar2[7] - (long)pvVar9);
            }

            puVar3 = (undefined8*)plVar2[3];
            puVar16 = (undefined8*)plVar2[2];
            if (puVar3 != puVar16) {
               do {
                  while (pPVar11 = (PolyPath64*)*puVar16,pPVar11 == (PolyPath64*)0x0) {
                     LAB_001059f2:puVar16 = puVar16 + 1;
                     if (puVar3 == puVar16) goto LAB_00105a20;
                  }
;
                  if (*(code**)( *(long*)pPVar11 + 8 ) == ~PolyPath64) {
                     ~PolyPath64(pPVar11)
                     ;;
                     operator_delete(pPVar11, 0x40);
                     goto LAB_001059f2;
                  }

                  ( **(code**)( *(long*)pPVar11 + 8 ) )();
                  puVar16 = puVar16 + 1;
               }
 while ( puVar3 != puVar16 );
               LAB_00105a20:puVar16 = (undefined8*)plVar2[2];
            }

            if (puVar16 != (undefined8*)0x0) {
               operator_delete(puVar16, plVar2[4] - (long)puVar16);
            }

            operator_delete(plVar2, 0x40);
         }

         puVar19 = puVar19 + 1;
      }
 while ( puVar1 != puVar19 );
      *(undefined8**)( this + 0x18 ) = puVar14;
   }

   pvVar9 = *(void**)( this + 0x28 );
   if (pvVar9 != (void*)0x0) {
      operator_delete(pvVar9, *(long*)( this + 0x38 ) - (long)pvVar9);
   }

   puVar1 = *(undefined8**)( this + 0x18 );
   puVar14 = *(undefined8**)( this + 0x10 );
   if (puVar1 != puVar14) {
      do {
         while (pPVar11 = (PolyPath64*)*puVar14,pPVar11 == (PolyPath64*)0x0) {
            LAB_00105aa2:puVar14 = puVar14 + 1;
            if (puVar1 == puVar14) goto LAB_00105ad0;
         }
;
         if (*(code**)( *(long*)pPVar11 + 8 ) == ~PolyPath64) {
            ~PolyPath64(pPVar11)
            ;;
            operator_delete(pPVar11, 0x40);
            goto LAB_00105aa2;
         }

         ( **(code**)( *(long*)pPVar11 + 8 ) )();
         puVar14 = puVar14 + 1;
      }
 while ( puVar1 != puVar14 );
      LAB_00105ad0:puVar14 = *(undefined8**)( this + 0x10 );
   }

   if (puVar14 != (undefined8*)0x0) {
      operator_delete(puVar14, *(long*)( this + 0x20 ) - (long)puVar14);
   }

   operator_delete(this, 0x40);
   return;
}
/* void std::vector<std::unique_ptr<Clipper2Lib::PolyPath64,
   std::default_delete<Clipper2Lib::PolyPath64> >,
   std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,
   std::default_delete<Clipper2Lib::PolyPath64> > >
   >::_M_realloc_insert<std::unique_ptr<Clipper2Lib::PolyPath64,
   std::default_delete<Clipper2Lib::PolyPath64> >
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::PolyPath64,
   std::default_delete<Clipper2Lib::PolyPath64> >*,
   std::vector<std::unique_ptr<Clipper2Lib::PolyPath64, std::default_delete<Clipper2Lib::PolyPath64>
   >, std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,
   std::default_delete<Clipper2Lib::PolyPath64> > > > >, std::unique_ptr<Clipper2Lib::PolyPath64,
   std::default_delete<Clipper2Lib::PolyPath64> >&&) */void std::vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>::_M_realloc_insert<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>(vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>> *this, undefined8 *param_2, undefined8 *param_3) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   ulong uVar4;
   ulong uVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   ulong uVar9;
   long local_50;
   puVar1 = *(undefined8**)( this + 8 );
   puVar2 = *(undefined8**)this;
   uVar5 = (long)puVar1 - (long)puVar2 >> 3;
   if (uVar5 == 0xfffffffffffffff) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }

   if (puVar2 == puVar1) {
      uVar9 = uVar5 + 1;
      if (0xfffffffffffffffe < uVar5) goto LAB_00105ca6;
      if (0xfffffffffffffff < uVar9) {
         uVar9 = 0xfffffffffffffff;
      }

      uVar9 = uVar9 * 8;
      LAB_00105cb0:puVar6 = (undefined8*)operator_new(uVar9);
      local_50 = (long)puVar6 + uVar9;
      uVar3 = *param_3;
      puVar7 = puVar6 + 1;
      *param_3 = 0;
      *(undefined8*)( (long)puVar6 + ( (long)param_2 - (long)puVar2 ) ) = uVar3;
      if (param_2 != puVar2) {
         LAB_00105c32:puVar7 = puVar2;
         puVar8 = puVar6;
         do {
            uVar3 = *puVar7;
            puVar7 = puVar7 + 1;
            *puVar8 = uVar3;
            puVar8 = puVar8 + 1;
         }
 while ( param_2 != puVar7 );
         puVar7 = (undefined8*)( (long)puVar6 + (long)param_2 + ( 8 - (long)puVar2 ) );
      }

      puVar8 = puVar7;
      if (param_2 == puVar1) goto LAB_00105c72;
   }
 else {
      uVar4 = uVar5 * 2;
      if (uVar4 < uVar5) {
         LAB_00105ca6:uVar9 = 0x7ffffffffffffff8;
         goto LAB_00105cb0;
      }

      if (uVar4 != 0) {
         uVar9 = 0xfffffffffffffff;
         if (uVar4 < 0x1000000000000000) {
            uVar9 = uVar4;
         }

         uVar9 = uVar9 << 3;
         goto LAB_00105cb0;
      }

      uVar3 = *param_3;
      puVar6 = (undefined8*)0x0;
      *param_3 = 0;
      puVar7 = (undefined8*)0x8;
      local_50 = 0;
      *(undefined8*)( (long)param_2 - (long)puVar2 ) = uVar3;
      if (param_2 != puVar2) goto LAB_00105c32;
   }

   puVar8 = (undefined8*)( (long)puVar7 + ( (long)puVar1 - (long)param_2 ) );
   memcpy(puVar7, param_2, (long)puVar1 - (long)param_2);
   LAB_00105c72:if (puVar2 != (undefined8*)0x0) {
      operator_delete(puVar2, *(long*)( this + 0x10 ) - (long)puVar2);
   }

   *(undefined8**)this = puVar6;
   *(undefined8**)( this + 8 ) = puVar8;
   *(long*)( this + 0x10 ) = local_50;
   return;
}
/* Clipper2Lib::PolyPath64::AddChild(std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > const&) */undefined8 Clipper2Lib::PolyPath64::AddChild(PolyPath64 *this, vector *param_1) {
   long lVar1;
   long lVar2;
   undefined8 *puVar3;
   long *plVar4;
   undefined8 *puVar5;
   long *plVar6;
   undefined8 *puVar7;
   long *plVar8;
   undefined8 *puVar9;
   long *plVar10;
   undefined8 *puVar11;
   PolyPath64 *pPVar12;
   void *pvVar13;
   long *plVar14;
   void *pvVar15;
   ulong uVar16;
   undefined8 *puVar17;
   undefined8 *puVar18;
   undefined8 *puVar19;
   undefined8 *puVar20;
   undefined8 *puVar21;
   undefined8 uVar22;
   undefined8 *puVar23;
   undefined8 *puVar24;
   undefined8 *puVar25;
   long lVar26;
   undefined8 *puVar27;
   ulong uVar28;
   long in_FS_OFFSET;
   long *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar14 = (long*)operator_new(0x40);
   plVar14[1] = (long)this;
   *plVar14 = (long)&PTR__PolyPath64_00107088;
   for (int i = 0; i < 6; i++) {
      plVar14[( i + 2 )] = 0;
   }

   if (param_1 != (vector*)( plVar14 + 5 )) {
      lVar1 = *(long*)( param_1 + 8 );
      lVar2 = *(long*)param_1;
      lVar26 = 0;
      uVar28 = lVar1 - lVar2;
      if (uVar28 != 0) {
         if (0x7ffffffffffffff0 < uVar28) {
            std::__throw_bad_array_new_length();
            goto LAB_0010646f;
         }

         pvVar15 = operator_new(uVar28);
         uVar16 = 0;
         if (lVar1 != lVar2) {
            do {
               uVar22 = ( (undefined8*)( lVar2 + uVar16 ) )[1];
               *(undefined8*)( (long)pvVar15 + uVar16 ) = *(undefined8*)( lVar2 + uVar16 );
               ( (undefined8*)( (long)pvVar15 + uVar16 ) )[1] = uVar22;
               uVar16 = uVar16 + 0x10;
            }
 while ( uVar28 != uVar16 );
         }

         pvVar13 = (void*)plVar14[5];
         if (pvVar13 != (void*)0x0) {
            operator_delete(pvVar13, plVar14[7] - (long)pvVar13);
         }

         plVar14[5] = (long)pvVar15;
         lVar26 = (long)pvVar15 + uVar28;
         plVar14[7] = lVar26;
      }

      plVar14[6] = lVar26;
   }

   puVar3 = *(undefined8**)( this + 0x18 );
   local_48 = plVar14;
   if (puVar3 == *(undefined8**)( this + 0x20 )) {
      std::vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>::_M_realloc_insert<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>((vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>*)( this + 0x10 ), puVar3, &local_48);
      plVar14 = local_48;
      uVar22 = *(undefined8*)( *(long*)( this + 0x18 ) + -8 );
      if (local_48 != (long*)0x0) {
         if (*(code**)( *local_48 + 8 ) == ~PolyPath64) {
            puVar3 = (undefined8*)local_48[2];
            *local_48 = (long)&PTR__PolyPath64_00107088;
            puVar19 = (undefined8*)local_48[3];
            puVar27 = puVar3;
            if (puVar19 != puVar3) {
               LAB_00105eac:do {
                  plVar4 = (long*)*puVar27;
                  if (plVar4 != (long*)0x0) {
                     if (*(code**)( *plVar4 + 8 ) != ~PolyPath64) {
                        puVar27 = puVar27 + 1;
                        ( **(code**)( *plVar4 + 8 ) )(plVar4);
                        if (puVar19 == puVar27) break;
                        goto LAB_00105eac;
                     }

                     puVar5 = (undefined8*)plVar4[2];
                     *plVar4 = (long)&PTR__PolyPath64_00107088;
                     puVar21 = (undefined8*)plVar4[3];
                     puVar20 = puVar5;
                     if (puVar21 != puVar5) {
                        LAB_00105efe:do {
                           plVar6 = (long*)*puVar20;
                           if (plVar6 != (long*)0x0) {
                              if (*(code**)( *plVar6 + 8 ) != ~PolyPath64) {
                                 puVar20 = puVar20 + 1;
                                 ( **(code**)( *plVar6 + 8 ) )(plVar6);
                                 if (puVar21 == puVar20) break;
                                 goto LAB_00105efe;
                              }

                              puVar7 = (undefined8*)plVar6[3];
                              *plVar6 = (long)&PTR__PolyPath64_00107088;
                              puVar25 = (undefined8*)plVar6[2];
                              puVar23 = puVar25;
                              if (puVar7 != puVar25) {
                                 LAB_00105f4e:do {
                                    plVar8 = (long*)*puVar23;
                                    if (plVar8 != (long*)0x0) {
                                       if (*(code**)( *plVar8 + 8 ) != ~PolyPath64) {
                                          puVar23 = puVar23 + 1;
                                          ( **(code**)( *plVar8 + 8 ) )(plVar8);
                                          if (puVar7 == puVar23) break;
                                          goto LAB_00105f4e;
                                       }

                                       puVar9 = (undefined8*)plVar8[3];
                                       *plVar8 = (long)&PTR__PolyPath64_00107088;
                                       puVar18 = (undefined8*)plVar8[2];
                                       puVar17 = puVar18;
                                       if (puVar9 != puVar18) {
                                          LAB_00105fa0:do {
                                             plVar10 = (long*)*puVar17;
                                             if (plVar10 != (long*)0x0) {
                                                if (*(code**)( *plVar10 + 8 ) != ~PolyPath64) {
                                                   puVar17 = puVar17 + 1;
                                                   ( **(code**)( *plVar10 + 8 ) )(plVar10);
                                                   if (puVar9 == puVar17) break;
                                                   goto LAB_00105fa0;
                                                }

                                                *plVar10 = (long)&PTR__PolyPath64_00107088;
                                                std::vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>::resize((vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>*)( plVar10 + 2 ), 0);
                                                pvVar15 = (void*)plVar10[5];
                                                if (pvVar15 != (void*)0x0) {
                                                   operator_delete(pvVar15, plVar10[7] - (long)pvVar15);
                                                }

                                                puVar11 = (undefined8*)plVar10[3];
                                                puVar24 = (undefined8*)plVar10[2];
                                                if (puVar11 != puVar24) {
                                                   do {
                                                      while (pPVar12 = (PolyPath64*)*puVar24,pPVar12 == (PolyPath64*)0x0) {
                                                         LAB_00106012:puVar24 = puVar24 + 1;
                                                         if (puVar11 == puVar24) goto LAB_00106040;
                                                      }
;
                                                      if (*(code**)( *(long*)pPVar12 + 8 ) == ~PolyPath64) {
                                                         ~PolyPath64(pPVar12)
                                                         ;;
                                                         operator_delete(pPVar12, 0x40);
                                                         goto LAB_00106012;
                                                      }

                                                      ( **(code**)( *(long*)pPVar12 + 8 ) )();
                                                      puVar24 = puVar24 + 1;
                                                   }
 while ( puVar11 != puVar24 );
                                                   LAB_00106040:puVar24 = (undefined8*)plVar10[2];
                                                }

                                                if (puVar24 != (undefined8*)0x0) {
                                                   operator_delete(puVar24, plVar10[4] - (long)puVar24);
                                                }

                                                operator_delete(plVar10, 0x40);
                                             }

                                             puVar17 = puVar17 + 1;
                                          }
 while ( puVar9 != puVar17 );
                                          plVar8[3] = (long)puVar18;
                                       }

                                       pvVar15 = (void*)plVar8[5];
                                       if (pvVar15 != (void*)0x0) {
                                          operator_delete(pvVar15, plVar8[7] - (long)pvVar15);
                                       }

                                       puVar9 = (undefined8*)plVar8[3];
                                       puVar18 = (undefined8*)plVar8[2];
                                       if (puVar9 != puVar18) {
                                          do {
                                             while (pPVar12 = (PolyPath64*)*puVar18,pPVar12 == (PolyPath64*)0x0) {
                                                LAB_001060da:puVar18 = puVar18 + 1;
                                                if (puVar9 == puVar18) goto LAB_00106110;
                                             }
;
                                             if (*(code**)( *(long*)pPVar12 + 8 ) == ~PolyPath64) {
                                                ~PolyPath64(pPVar12)
                                                ;;
                                                operator_delete(pPVar12, 0x40);
                                                goto LAB_001060da;
                                             }

                                             ( **(code**)( *(long*)pPVar12 + 8 ) )();
                                             puVar18 = puVar18 + 1;
                                          }
 while ( puVar9 != puVar18 );
                                          LAB_00106110:puVar18 = (undefined8*)plVar8[2];
                                       }

                                       if (puVar18 != (undefined8*)0x0) {
                                          operator_delete(puVar18, plVar8[4] - (long)puVar18);
                                       }

                                       operator_delete(plVar8, 0x40);
                                    }

                                    puVar23 = puVar23 + 1;
                                 }
 while ( puVar7 != puVar23 );
                                 plVar6[3] = (long)puVar25;
                              }

                              pvVar15 = (void*)plVar6[5];
                              if (pvVar15 != (void*)0x0) {
                                 operator_delete(pvVar15, plVar6[7] - (long)pvVar15);
                              }

                              puVar7 = (undefined8*)plVar6[3];
                              puVar25 = (undefined8*)plVar6[2];
                              if (puVar7 != puVar25) {
                                 do {
                                    while (pPVar12 = (PolyPath64*)*puVar25,pPVar12 == (PolyPath64*)0x0) {
                                       LAB_001061a2:puVar25 = puVar25 + 1;
                                       if (puVar7 == puVar25) goto LAB_001061d0;
                                    }
;
                                    if (*(code**)( *(long*)pPVar12 + 8 ) == ~PolyPath64) {
                                       ~PolyPath64(pPVar12)
                                       ;;
                                       operator_delete(pPVar12, 0x40);
                                       goto LAB_001061a2;
                                    }

                                    ( **(code**)( *(long*)pPVar12 + 8 ) )();
                                    puVar25 = puVar25 + 1;
                                 }
 while ( puVar7 != puVar25 );
                                 LAB_001061d0:puVar25 = (undefined8*)plVar6[2];
                              }

                              if (puVar25 != (undefined8*)0x0) {
                                 operator_delete(puVar25, plVar6[4] - (long)puVar25);
                              }

                              operator_delete(plVar6, 0x40);
                           }

                           puVar20 = puVar20 + 1;
                        }
 while ( puVar21 != puVar20 );
                        plVar4[3] = (long)puVar5;
                     }

                     pvVar15 = (void*)plVar4[5];
                     if (pvVar15 != (void*)0x0) {
                        operator_delete(pvVar15, plVar4[7] - (long)pvVar15);
                     }

                     puVar5 = (undefined8*)plVar4[3];
                     puVar21 = (undefined8*)plVar4[2];
                     if (puVar5 != puVar21) {
                        do {
                           while (pPVar12 = (PolyPath64*)*puVar21,pPVar12 == (PolyPath64*)0x0) {
                              LAB_00106262:puVar21 = puVar21 + 1;
                              if (puVar5 == puVar21) goto LAB_00106290;
                           }
;
                           if (*(code**)( *(long*)pPVar12 + 8 ) == ~PolyPath64) {
                              ~PolyPath64(pPVar12)
                              ;;
                              operator_delete(pPVar12, 0x40);
                              goto LAB_00106262;
                           }

                           ( **(code**)( *(long*)pPVar12 + 8 ) )();
                           puVar21 = puVar21 + 1;
                        }
 while ( puVar5 != puVar21 );
                        LAB_00106290:puVar21 = (undefined8*)plVar4[2];
                     }

                     if (puVar21 != (undefined8*)0x0) {
                        operator_delete(puVar21, plVar4[4] - (long)puVar21);
                     }

                     operator_delete(plVar4, 0x40);
                  }

                  puVar27 = puVar27 + 1;
               }
 while ( puVar19 != puVar27 );
               plVar14[3] = (long)puVar3;
            }

            pvVar15 = (void*)plVar14[5];
            if (pvVar15 != (void*)0x0) {
               operator_delete(pvVar15, plVar14[7] - (long)pvVar15);
            }

            puVar3 = (undefined8*)plVar14[3];
            puVar19 = (undefined8*)plVar14[2];
            if (puVar3 != puVar19) {
               do {
                  while (pPVar12 = (PolyPath64*)*puVar19,pPVar12 == (PolyPath64*)0x0) {
                     LAB_0010633a:puVar19 = puVar19 + 1;
                     if (puVar3 == puVar19) goto LAB_00106370;
                  }
;
                  if (*(code**)( *(long*)pPVar12 + 8 ) == ~PolyPath64) {
                     ~PolyPath64(pPVar12)
                     ;;
                     operator_delete(pPVar12, 0x40);
                     goto LAB_0010633a;
                  }

                  ( **(code**)( *(long*)pPVar12 + 8 ) )();
                  puVar19 = puVar19 + 1;
               }
 while ( puVar3 != puVar19 );
               LAB_00106370:puVar19 = (undefined8*)plVar14[2];
            }

            if (puVar19 != (undefined8*)0x0) {
               operator_delete(puVar19, plVar14[4] - (long)puVar19);
            }

            operator_delete(plVar14, 0x40);
         }
 else {
            ( **(code**)( *local_48 + 8 ) )(local_48);
         }

      }

   }
 else {
      *puVar3 = plVar14;
      uVar22 = *puVar3;
      *(undefined8**)( this + 0x18 ) = puVar3 + 1;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar22;
   }

   LAB_0010646f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* void std::vector<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> >
   >, std::allocator<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> >
   > > >::_M_realloc_insert<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >
   const&>(__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >*, std::vector<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >, std::allocator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > > > >, std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > const&) */void std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>::_M_realloc_insert<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>const&>(vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator < Clipper2Lib::Point<long>>>> > *this, undefined8 *param_2, long *param_3) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   long lVar5;
   ulong uVar6;
   void *pvVar7;
   undefined8 *puVar8;
   undefined8 *puVar9;
   undefined8 *puVar10;
   undefined8 *puVar11;
   long lVar12;
   undefined8 *puVar13;
   long *extraout_RDX;
   long lVar14;
   undefined1(*pauVar15)[16];
   ulong uVar16;
   puVar1 = *(undefined8**)( this + 8 );
   puVar2 = *(undefined8**)this;
   lVar5 = (long)puVar1 - (long)puVar2 >> 3;
   uVar6 = lVar5 * -0x5555555555555555;
   if (uVar6 == 0x555555555555555) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }

   pauVar15 = (undefined1(*) [16])( (long)param_2 - (long)puVar2 );
   if (puVar2 == puVar1) {
      if (uVar6 != 0xffffffffffffffff) {
         uVar16 = 0x555555555555555;
         if (uVar6 + 1 < 0x555555555555556) {
            uVar16 = uVar6 + 1;
         }

         uVar6 = uVar16 * 0x18;
         goto LAB_00106665;
      }

   }
 else {
      uVar16 = lVar5 * 0x5555555555555556;
      if (uVar6 <= uVar16) {
         if (uVar16 != 0) goto LAB_001066d5;
         puVar11 = (undefined8*)0x0;
         goto LAB_001064f2;
      }

   }

   uVar6 = 0x7ffffffffffffff8;
   uVar16 = 0x555555555555555;
   LAB_00106665:while (true) {
      puVar11 = (undefined8*)operator_new(uVar6);
      LAB_001064f2:lVar5 = param_3[1];
      lVar14 = *param_3;
      pauVar15 = (undefined1(*) [16])( *pauVar15 + (long)puVar11 );
      *(undefined8*)pauVar15[1] = 0;
      *pauVar15 = (undefined1[16])0x0;
      uVar6 = lVar5 - lVar14;
      if (uVar6 == 0) break;
      if (uVar6 < 0x7ffffffffffffff1) {
         pvVar7 = operator_new(uVar6);
         lVar5 = param_3[1];
         lVar14 = *param_3;
         LAB_00106555:*(void**)*pauVar15 = pvVar7;
         *(ulong*)pauVar15[1] = uVar6 + (long)pvVar7;
         if (lVar5 != lVar14) {
            lVar12 = 0;
            do {
               uVar3 = ( (undefined8*)( lVar14 + lVar12 ) )[1];
               *(undefined8*)( (long)pvVar7 + lVar12 ) = *(undefined8*)( lVar14 + lVar12 );
               ( (undefined8*)( (long)pvVar7 + lVar12 ) )[1] = uVar3;
               lVar12 = lVar12 + 0x10;
            }
 while ( lVar5 - lVar14 != lVar12 );
            pvVar7 = (void*)( (long)pvVar7 + ( lVar5 - lVar14 ) );
         }

         *(void**)( *pauVar15 + 8 ) = pvVar7;
         puVar8 = puVar2;
         puVar13 = puVar11;
         if (param_2 != puVar2) {
            do {
               uVar4 = puVar8[1];
               uVar3 = puVar8[2];
               puVar9 = puVar8 + 3;
               *puVar13 = *puVar8;
               puVar13[1] = uVar4;
               puVar13[2] = uVar3;
               puVar8 = puVar9;
               puVar13 = puVar13 + 3;
            }
 while ( param_2 != puVar9 );
            puVar13 = (undefined8*)( (long)puVar11 + ( (long)param_2 + ( -0x18 - (long)puVar2 ) & 0xfffffffffffffff8U ) + 0x18 );
         }

         puVar8 = puVar13 + 3;
         puVar9 = param_2;
         if (param_2 != puVar1) {
            do {
               uVar4 = puVar9[1];
               uVar3 = puVar9[2];
               puVar10 = puVar9 + 3;
               *puVar8 = *puVar9;
               puVar8[1] = uVar4;
               puVar8[2] = uVar3;
               puVar9 = puVar10;
               puVar8 = puVar8 + 3;
            }
 while ( puVar1 != puVar10 );
            puVar8 = (undefined8*)( (long)puVar13 + ( (long)puVar1 + ( -0x18 - (long)param_2 ) & 0xfffffffffffffff8U ) + 0x30 );
         }

         if (puVar2 != (undefined8*)0x0) {
            operator_delete(puVar2, *(long*)( this + 0x10 ) - (long)puVar2);
         }

         *(undefined8**)this = puVar11;
         *(undefined8**)( this + 8 ) = puVar8;
         *(undefined8**)( this + 0x10 ) = puVar11 + uVar16 * 3;
         return;
      }

      std::__throw_bad_array_new_length();
      param_3 = extraout_RDX;
      LAB_001066d5:if (0x555555555555555 < uVar16) {
         uVar16 = 0x555555555555555;
      }

      uVar6 = uVar16 * 0x18;
   }
;
   pvVar7 = (void*)0x0;
   goto LAB_00106555;
}
/* void std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> >
   >::_M_realloc_insert<Clipper2Lib::Point<long>
   const&>(__gnu_cxx::__normal_iterator<Clipper2Lib::Point<long>*,
   std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > > >,
   Clipper2Lib::Point<long> const&) */void std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::_M_realloc_insert<Clipper2Lib::Point<long>const&>(vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>> *this, undefined8 *param_2, undefined8 *param_3) {
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
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }

   puVar8 = (undefined8*)( (long)param_2 - (long)puVar2 );
   if (puVar2 == puVar1) {
      if (0xfffffffffffffffe < uVar5) goto LAB_00106808;
      uVar7 = 0x7ffffffffffffff;
      if (uVar5 + 1 < 0x800000000000000) {
         uVar7 = uVar5 + 1;
      }

      uVar7 = uVar7 << 4;
      LAB_00106812:puVar6 = (undefined8*)operator_new(uVar7);
      uVar3 = param_3[1];
      lVar11 = uVar7 + (long)puVar6;
      puVar10 = puVar6 + 2;
      *(undefined8*)( (long)puVar6 + (long)puVar8 ) = *param_3;
      ( (undefined8*)( (long)puVar6 + (long)puVar8 ) )[1] = uVar3;
      if (param_2 != puVar2) {
         LAB_0010677a:puVar8 = puVar6;
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
      if (param_2 == puVar1) goto LAB_001067cc;
   }
 else {
      uVar7 = uVar5 * 2;
      if (uVar7 < uVar5) {
         LAB_00106808:uVar7 = 0x7ffffffffffffff0;
         goto LAB_00106812;
      }

      if (uVar7 != 0) {
         if (0x7ffffffffffffff < uVar7) {
            uVar7 = 0x7ffffffffffffff;
         }

         uVar7 = uVar7 << 4;
         goto LAB_00106812;
      }

      uVar3 = param_3[1];
      lVar11 = 0;
      puVar6 = (undefined8*)0x0;
      puVar10 = (undefined8*)0x10;
      *puVar8 = *param_3;
      puVar8[1] = uVar3;
      if (param_2 != puVar2) goto LAB_0010677a;
   }

   puVar8 = (undefined8*)( (long)puVar10 + ( (long)puVar1 - (long)param_2 ) );
   memcpy(puVar10, param_2, (long)puVar1 - (long)param_2);
   LAB_001067cc:if (puVar2 != (undefined8*)0x0) {
      operator_delete(puVar2, *(long*)( this + 0x10 ) - (long)puVar2);
   }

   *(undefined8**)this = puVar6;
   *(undefined8**)( this + 8 ) = puVar8;
   *(long*)( this + 0x10 ) = lVar11;
   return;
}
/* void std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >::_M_realloc_insert<Clipper2Lib::Point<double>
   const&>(__gnu_cxx::__normal_iterator<Clipper2Lib::Point<double>*,
   std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> > > >,
   Clipper2Lib::Point<double> const&) */void std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::_M_realloc_insert<Clipper2Lib::Point<double>const&>(vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *this, undefined8 *param_2, undefined8 *param_3) {
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
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }

   puVar8 = (undefined8*)( (long)param_2 - (long)puVar2 );
   if (puVar2 == puVar1) {
      if (0xfffffffffffffffe < uVar5) goto LAB_00106998;
      uVar7 = 0x7ffffffffffffff;
      if (uVar5 + 1 < 0x800000000000000) {
         uVar7 = uVar5 + 1;
      }

      uVar7 = uVar7 << 4;
      LAB_001069a2:puVar6 = (undefined8*)operator_new(uVar7);
      uVar3 = param_3[1];
      lVar11 = uVar7 + (long)puVar6;
      puVar10 = puVar6 + 2;
      *(undefined8*)( (long)puVar6 + (long)puVar8 ) = *param_3;
      ( (undefined8*)( (long)puVar6 + (long)puVar8 ) )[1] = uVar3;
      if (param_2 != puVar2) {
         LAB_0010690a:puVar8 = puVar6;
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
      if (param_2 == puVar1) goto LAB_0010695c;
   }
 else {
      uVar7 = uVar5 * 2;
      if (uVar7 < uVar5) {
         LAB_00106998:uVar7 = 0x7ffffffffffffff0;
         goto LAB_001069a2;
      }

      if (uVar7 != 0) {
         if (0x7ffffffffffffff < uVar7) {
            uVar7 = 0x7ffffffffffffff;
         }

         uVar7 = uVar7 << 4;
         goto LAB_001069a2;
      }

      uVar3 = param_3[1];
      lVar11 = 0;
      puVar6 = (undefined8*)0x0;
      puVar10 = (undefined8*)0x10;
      *puVar8 = *param_3;
      puVar8[1] = uVar3;
      if (param_2 != puVar2) goto LAB_0010690a;
   }

   puVar8 = (undefined8*)( (long)puVar10 + ( (long)puVar1 - (long)param_2 ) );
   memcpy(puVar10, param_2, (long)puVar1 - (long)param_2);
   LAB_0010695c:if (puVar2 != (undefined8*)0x0) {
      operator_delete(puVar2, *(long*)( this + 0x10 ) - (long)puVar2);
   }

   *(undefined8**)this = puVar6;
   *(undefined8**)( this + 8 ) = puVar8;
   *(long*)( this + 0x10 ) = lVar11;
   return;
}
/* void std::vector<Clipper2Lib::ClipperOffset::Group,
   std::allocator<Clipper2Lib::ClipperOffset::Group>
   >::_M_realloc_insert<Clipper2Lib::ClipperOffset::Group>(__gnu_cxx::__normal_iterator<Clipper2Lib::ClipperOffset::Group*,
   std::vector<Clipper2Lib::ClipperOffset::Group, std::allocator<Clipper2Lib::ClipperOffset::Group>
   > >, Clipper2Lib::ClipperOffset::Group&&) */void std::vector<Clipper2Lib::ClipperOffset::Group,std::allocator<Clipper2Lib::ClipperOffset::Group>>::_M_realloc_insert<Clipper2Lib::ClipperOffset::Group>(vector<Clipper2Lib::ClipperOffset::Group,std::allocator<Clipper2Lib::ClipperOffset::Group>> *this, undefined8 *param_2, undefined1 (*param_3)[16]) {
   undefined1 uVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   long lVar9;
   ulong uVar10;
   undefined8 *puVar11;
   undefined8 *puVar12;
   undefined8 *puVar13;
   undefined8 *puVar14;
   ulong uVar15;
   undefined8 *puVar16;
   puVar2 = *(undefined8**)( this + 8 );
   puVar3 = *(undefined8**)this;
   lVar9 = (long)puVar2 - (long)puVar3 >> 3;
   uVar10 = lVar9 * 0x6db6db6db6db6db7;
   if (uVar10 == 0x249249249249249) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }

   if (puVar3 == puVar2) {
      uVar15 = uVar10 + 1;
      if (0xfffffffffffffffe < uVar10) goto LAB_00106c08;
      if (0x249249249249249 < uVar15) {
         uVar15 = 0x249249249249249;
      }

      uVar15 = uVar15 * 0x38;
   }
 else {
      uVar15 = lVar9 * -0x2492492492492492;
      if (uVar15 < uVar10) {
         LAB_00106c08:uVar15 = 0x7ffffffffffffff8;
      }
 else {
         if (uVar15 == 0) {
            puVar16 = (undefined8*)0x38;
            lVar9 = 0;
            puVar13 = (undefined8*)0x0;
            goto LAB_00106a9b;
         }

         if (0x249249249249249 < uVar15) {
            uVar15 = 0x249249249249249;
         }

         uVar15 = uVar15 * 0x38;
      }

   }

   puVar13 = (undefined8*)operator_new(uVar15);
   lVar9 = uVar15 + (long)puVar13;
   puVar16 = puVar13 + 7;
   LAB_00106a9b:puVar11 = (undefined8*)( (long)puVar13 + ( (long)param_2 - (long)puVar3 ) );
   uVar4 = *(undefined8*)param_3[1];
   uVar5 = *(undefined8*)*param_3;
   uVar6 = *(undefined8*)( *param_3 + 8 );
   uVar7 = *(undefined8*)( param_3[1] + 8 );
   uVar8 = *(undefined8*)param_3[2];
   *(undefined8*)param_3[1] = 0;
   puVar11[2] = uVar4;
   uVar1 = param_3[2][8];
   *param_3 = (undefined1[16])0x0;
   uVar4 = *(undefined8*)( param_3[2] + 0xc );
   *(undefined1*)( puVar11 + 5 ) = uVar1;
   *(undefined8*)( (long)puVar11 + 0x2c ) = uVar4;
   *puVar11 = uVar5;
   puVar11[1] = uVar6;
   puVar11[3] = uVar7;
   puVar11[4] = uVar8;
   puVar11 = puVar3;
   puVar14 = puVar13;
   if (param_2 != puVar3) {
      do {
         uVar4 = *puVar11;
         uVar5 = puVar11[1];
         puVar16 = puVar11 + 7;
         uVar6 = puVar11[3];
         uVar7 = puVar11[4];
         puVar14[2] = puVar11[2];
         uVar1 = *(undefined1*)( puVar11 + 5 );
         *puVar14 = uVar4;
         puVar14[1] = uVar5;
         *(undefined1*)( puVar14 + 5 ) = uVar1;
         uVar4 = *(undefined8*)( (long)puVar11 + 0x2c );
         puVar14[3] = uVar6;
         puVar14[4] = uVar7;
         *(undefined8*)( (long)puVar14 + 0x2c ) = uVar4;
         puVar11 = puVar16;
         puVar14 = puVar14 + 7;
      }
 while ( puVar16 != param_2 );
      puVar16 = puVar13 + ( ( ( ulong )((long)param_2 + ( -0x38 - (long)puVar3 )) >> 3 ) * 0xdb6db6db6db6db7 & 0x1fffffffffffffff ) * 7 + 0xe;
   }

   puVar11 = param_2;
   puVar14 = puVar16;
   if (param_2 != puVar2) {
      do {
         uVar4 = *puVar11;
         uVar5 = puVar11[1];
         puVar12 = puVar11 + 7;
         uVar6 = puVar11[3];
         uVar7 = puVar11[4];
         puVar14[2] = puVar11[2];
         uVar1 = *(undefined1*)( puVar11 + 5 );
         *puVar14 = uVar4;
         puVar14[1] = uVar5;
         *(undefined1*)( puVar14 + 5 ) = uVar1;
         uVar4 = *(undefined8*)( (long)puVar11 + 0x2c );
         puVar14[3] = uVar6;
         puVar14[4] = uVar7;
         *(undefined8*)( (long)puVar14 + 0x2c ) = uVar4;
         puVar11 = puVar12;
         puVar14 = puVar14 + 7;
      }
 while ( puVar12 != puVar2 );
      puVar16 = puVar16 + ( ( ( ( ulong )((long)puVar12 + ( -0x38 - (long)param_2 )) >> 3 ) * 0xdb6db6db6db6db7 & 0x1fffffffffffffff ) + 1 ) * 7;
   }

   if (puVar3 != (undefined8*)0x0) {
      operator_delete(puVar3, *(long*)( this + 0x10 ) - (long)puVar3);
   }

   *(undefined8**)this = puVar13;
   *(undefined8**)( this + 8 ) = puVar16;
   *(long*)( this + 0x10 ) = lVar9;
   return;
}
/* void std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >::_M_realloc_insert<Clipper2Lib::Point<double>
   >(__gnu_cxx::__normal_iterator<Clipper2Lib::Point<double>*,
   std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> > > >,
   Clipper2Lib::Point<double>&&) */void std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::_M_realloc_insert<Clipper2Lib::Point<double>>(vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *this, undefined8 *param_2, undefined8 *param_3) {
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
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }

   puVar8 = (undefined8*)( (long)param_2 - (long)puVar2 );
   if (puVar2 == puVar1) {
      if (0xfffffffffffffffe < uVar5) goto LAB_00106da8;
      uVar7 = 0x7ffffffffffffff;
      if (uVar5 + 1 < 0x800000000000000) {
         uVar7 = uVar5 + 1;
      }

      uVar7 = uVar7 << 4;
      LAB_00106db2:puVar6 = (undefined8*)operator_new(uVar7);
      uVar3 = param_3[1];
      lVar11 = uVar7 + (long)puVar6;
      puVar10 = puVar6 + 2;
      *(undefined8*)( (long)puVar6 + (long)puVar8 ) = *param_3;
      ( (undefined8*)( (long)puVar6 + (long)puVar8 ) )[1] = uVar3;
      if (param_2 != puVar2) {
         LAB_00106d1a:puVar8 = puVar6;
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
      if (param_2 == puVar1) goto LAB_00106d6c;
   }
 else {
      uVar7 = uVar5 * 2;
      if (uVar7 < uVar5) {
         LAB_00106da8:uVar7 = 0x7ffffffffffffff0;
         goto LAB_00106db2;
      }

      if (uVar7 != 0) {
         if (0x7ffffffffffffff < uVar7) {
            uVar7 = 0x7ffffffffffffff;
         }

         uVar7 = uVar7 << 4;
         goto LAB_00106db2;
      }

      uVar3 = param_3[1];
      lVar11 = 0;
      puVar6 = (undefined8*)0x0;
      puVar10 = (undefined8*)0x10;
      *puVar8 = *param_3;
      puVar8[1] = uVar3;
      if (param_2 != puVar2) goto LAB_00106d1a;
   }

   puVar8 = (undefined8*)( (long)puVar10 + ( (long)puVar1 - (long)param_2 ) );
   memcpy(puVar10, param_2, (long)puVar1 - (long)param_2);
   LAB_00106d6c:if (puVar2 != (undefined8*)0x0) {
      operator_delete(puVar2, *(long*)( this + 0x10 ) - (long)puVar2);
   }

   *(undefined8**)this = puVar6;
   *(undefined8**)( this + 8 ) = puVar8;
   *(long*)( this + 0x10 ) = lVar11;
   return;
}
/* void std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> >
   >::_M_realloc_insert<Clipper2Lib::Point<long>
   >(__gnu_cxx::__normal_iterator<Clipper2Lib::Point<long>*, std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > >, Clipper2Lib::Point<long>&&) */void std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::_M_realloc_insert<Clipper2Lib::Point<long>>(vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>> *this, undefined8 *param_2, undefined8 *param_3) {
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
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }

   puVar8 = (undefined8*)( (long)param_2 - (long)puVar2 );
   if (puVar2 == puVar1) {
      if (0xfffffffffffffffe < uVar5) goto LAB_00106f38;
      uVar7 = 0x7ffffffffffffff;
      if (uVar5 + 1 < 0x800000000000000) {
         uVar7 = uVar5 + 1;
      }

      uVar7 = uVar7 << 4;
      LAB_00106f42:puVar6 = (undefined8*)operator_new(uVar7);
      uVar3 = param_3[1];
      lVar11 = uVar7 + (long)puVar6;
      puVar10 = puVar6 + 2;
      *(undefined8*)( (long)puVar6 + (long)puVar8 ) = *param_3;
      ( (undefined8*)( (long)puVar6 + (long)puVar8 ) )[1] = uVar3;
      if (param_2 != puVar2) {
         LAB_00106eaa:puVar8 = puVar6;
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
      if (param_2 == puVar1) goto LAB_00106efc;
   }
 else {
      uVar7 = uVar5 * 2;
      if (uVar7 < uVar5) {
         LAB_00106f38:uVar7 = 0x7ffffffffffffff0;
         goto LAB_00106f42;
      }

      if (uVar7 != 0) {
         if (0x7ffffffffffffff < uVar7) {
            uVar7 = 0x7ffffffffffffff;
         }

         uVar7 = uVar7 << 4;
         goto LAB_00106f42;
      }

      uVar3 = param_3[1];
      lVar11 = 0;
      puVar6 = (undefined8*)0x0;
      puVar10 = (undefined8*)0x10;
      *puVar8 = *param_3;
      puVar8[1] = uVar3;
      if (param_2 != puVar2) goto LAB_00106eaa;
   }

   puVar8 = (undefined8*)( (long)puVar10 + ( (long)puVar1 - (long)param_2 ) );
   memcpy(puVar10, param_2, (long)puVar1 - (long)param_2);
   LAB_00106efc:if (puVar2 != (undefined8*)0x0) {
      operator_delete(puVar2, *(long*)( this + 0x10 ) - (long)puVar2);
   }

   *(undefined8**)this = puVar6;
   *(undefined8**)( this + 8 ) = puVar8;
   *(long*)( this + 0x10 ) = lVar11;
   return;
}
/* Clipper2Lib::GetLowestClosedPathIdx(std::vector<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >, std::allocator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > > > const&) */void Clipper2Lib::_GLOBAL__sub_I_GetLowestClosedPathIdx(void) {
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* Clipper2Lib::PolyPath64::~PolyPath64() */void Clipper2Lib::PolyPath64::~PolyPath64(PolyPath64 *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* Clipper2Lib::Clipper64::~Clipper64() */void Clipper2Lib::Clipper64::~Clipper64(Clipper64 *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

