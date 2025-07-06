/* Clipper2Lib::IntersectListSort(Clipper2Lib::IntersectNode const&, Clipper2Lib::IntersectNode
   const&) */bool Clipper2Lib::IntersectListSort(IntersectNode *param_1, IntersectNode *param_2) {
   bool bVar1;
   bVar1 = *(long*)( param_2 + 8 ) < *(long*)( param_1 + 8 );
   if (*(long*)( param_1 + 8 ) == *(long*)( param_2 + 8 )) {
      bVar1 = *(long*)param_1 < *(long*)param_2;
   }
   return bVar1;
}/* __gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >
   std::_V2::__rotate<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >,
   __gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >,
   __gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >, std::random_access_iterator_tag) [clone
   .isra.0] */long std::_V2::__rotate<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>>(long param_1, long param_2, long param_3) {
   undefined8 uVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   if (param_1 == param_2) {
      return param_3;
   }
   if (param_2 != param_3) {
      lVar3 = param_1 + ( param_3 - param_2 );
      lVar2 = param_3 - param_1 >> 3;
      lVar6 = param_2 - param_1 >> 3;
      if (lVar6 == lVar2 - lVar6) {
         lVar3 = 0;
         do {
            uVar1 = *(undefined8*)( param_1 + lVar3 );
            *(undefined8*)( param_1 + lVar3 ) = *(undefined8*)( param_2 + lVar3 );
            *(undefined8*)( param_2 + lVar3 ) = uVar1;
            lVar3 = lVar3 + 8;
         } while ( lVar3 != param_2 - param_1 );
         return param_2;
      }
      lVar8 = lVar2 - lVar6;
      lVar7 = lVar6;
      if (lVar8 <= lVar6) goto LAB_001000c3;
      do {
         lVar6 = param_1 + lVar7 * 8;
         if (0 < lVar8) {
            lVar4 = 0;
            do {
               uVar1 = *(undefined8*)( param_1 + lVar4 * 8 );
               *(undefined8*)( param_1 + lVar4 * 8 ) = *(undefined8*)( lVar6 + lVar4 * 8 );
               *(undefined8*)( lVar6 + lVar4 * 8 ) = uVar1;
               lVar4 = lVar4 + 1;
            } while ( lVar8 != lVar4 );
            param_1 = param_1 + lVar8 * 8;
         }
         if (lVar2 % lVar7 == 0) {
            return lVar3;
         }
         lVar6 = lVar7 - lVar2 % lVar7;
         lVar2 = lVar7;
         while (lVar8 = lVar2 - lVar6,lVar7 = lVar6,lVar8 <= lVar6) {
            LAB_001000c3:lVar7 = param_1 + lVar2 * 8;
            param_1 = lVar7 + lVar8 * -8;
            if (0 < lVar6) {
               lVar4 = -8;
               lVar5 = 0;
               do {
                  uVar1 = *(undefined8*)( param_1 + lVar4 );
                  lVar5 = lVar5 + 1;
                  *(undefined8*)( param_1 + lVar4 ) = *(undefined8*)( lVar7 + lVar4 );
                  *(undefined8*)( lVar7 + lVar4 ) = uVar1;
                  lVar4 = lVar4 + -8;
               } while ( lVar6 != lVar5 );
               param_1 = param_1 + lVar6 * -8;
            }
            lVar6 = lVar2 % lVar8;
            lVar2 = lVar8;
            if (lVar6 == 0) {
               return lVar3;
            }
         };
      } while ( true );
   }
   return param_1;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* void std::__adjust_heap<__gnu_cxx::__normal_iterator<long*, std::vector<long,
   std::allocator<long> > >, long, long, __gnu_cxx::__ops::_Iter_comp_iter<std::less<long> >
   >(__gnu_cxx::__normal_iterator<long*, std::vector<long, std::allocator<long> > >, long, long,
   long, __gnu_cxx::__ops::_Iter_comp_iter<std::less<long> >) [clone .isra.0] */void std::__adjust_heap<__gnu_cxx::__normal_iterator<long*,std::vector<long,std::allocator<long>>>,long,long,__gnu_cxx::__ops::_Iter_comp_iter<std::less<long>>>(long param_1, long param_2, ulong param_3, long param_4) {
   long lVar1;
   long lVar2;
   long *plVar3;
   long *plVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   lVar8 = (long)( param_3 - 1 ) / 2;
   lVar6 = param_2;
   if (param_2 < lVar8) {
      do {
         lVar7 = ( lVar6 + 1 ) * 2;
         lVar1 = lVar7 + -1;
         plVar3 = (long*)( ( lVar6 + 1 ) * 0x10 + param_1 );
         plVar4 = (long*)( param_1 + lVar1 * 8 );
         lVar5 = *plVar3;
         lVar2 = *plVar4;
         if (lVar5 < lVar2) {
            plVar3 = plVar4;
            lVar5 = lVar2;
            lVar7 = lVar1;
         }
         *(long*)( param_1 + lVar6 * 8 ) = lVar5;
         lVar6 = lVar7;
      } while ( lVar7 < lVar8 );
      plVar4 = plVar3;
      if (( param_3 & 1 ) == 0) goto LAB_00100230;
   } else {
      plVar3 = (long*)( param_1 + param_2 * 8 );
      plVar4 = plVar3;
      lVar7 = param_2;
      if (( param_3 & 1 ) != 0) goto LAB_0010020f;
      LAB_00100230:plVar4 = plVar3;
      if ((long)( param_3 - 2 ) / 2 == lVar7) {
         lVar7 = lVar7 * 2 + 1;
         plVar4 = (long*)( param_1 + lVar7 * 8 );
         *plVar3 = *plVar4;
      }
   }
   lVar6 = ( lVar7 + -1 ) - ( lVar7 + -1 >> 0x3f );
   if (param_2 < lVar7) {
      while (true) {
         lVar8 = lVar6 >> 1;
         plVar3 = (long*)( param_1 + lVar8 * 8 );
         plVar4 = (long*)( param_1 + lVar7 * 8 );
         lVar6 = *plVar3;
         if (param_4 <= lVar6) break;
         *plVar4 = lVar6;
         lVar6 = ( lVar8 + -1 ) - ( lVar8 + -1 >> 0x3f );
         lVar7 = lVar8;
         if (lVar8 <= param_2) {
            *plVar3 = param_4;
            return;
         }
      };
   }
   LAB_0010020f:*plVar4 = param_4;
   return;
}/* Clipper2Lib::Point<long> Clipper2Lib::GetClosestPointOnSegment<long>(Clipper2Lib::Point<long>
   const&, Clipper2Lib::Point<long> const&, Clipper2Lib::Point<long> const&) [clone .isra.0] */undefined1[16];Clipper2Lib::GetClosestPointOnSegment<long>(Point_conflict *param_1, Point_conflict *param_2, Point_conflict *param_3) {
   long lVar1;
   long lVar2;
   long in_RCX;
   long in_R8;
   double dVar3;
   double dVar4;
   double __x;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   lVar1 = *(long*)param_3;
   lVar2 = *(long*)( param_3 + 8 );
   if (( lVar1 == in_RCX ) && ( in_R8 == lVar2 )) {
      auVar6._8_8_ = in_R8;
      auVar6._0_8_ = lVar1;
      return auVar6;
   }
   dVar4 = (double)( in_RCX - lVar1 );
   __x = (double)( in_R8 - lVar2 );
   dVar3 = ( (double)( (long)param_1 - lVar1 ) * dVar4 + (double)( (long)param_2 - lVar2 ) * __x ) / ( dVar4 * dVar4 + __x * __x );
   if (dVar3 < 0.0) {
      __x = __x * 0.0;
      dVar4 = dVar4 * 0.0;
   } else if (dVar3 <= _LC1) {
      __x = __x * dVar3;
      dVar4 = dVar4 * dVar3;
   }
   dVar3 = nearbyint(__x);
   dVar4 = nearbyint(dVar4);
   auVar5._0_8_ = (long)dVar4 + lVar1;
   auVar5._8_8_ = (long)dVar3 + lVar2;
   return auVar5;
}/* double Clipper2Lib::CrossProduct<long>(Clipper2Lib::Point<long> const&, Clipper2Lib::Point<long>
   const&, Clipper2Lib::Point<long> const&) [clone .isra.0] */double Clipper2Lib::CrossProduct<long>(Point_conflict *param_1, Point_conflict *param_2, Point_conflict *param_3) {
   long in_RCX;
   long in_R8;
   long in_R9;
   return (double)( (long)param_3 - (long)param_1 ) * (double)( in_R9 - in_RCX ) - (double)( in_RCX - (long)param_2 ) * (double)( in_R8 - (long)param_3 );
}/* __gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >
   std::_V2::__rotate<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,
   std::vector<Clipper2Lib::HorzSegment, std::allocator<Clipper2Lib::HorzSegment> > >
   >(__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >,
   __gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >,
   __gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >, std::random_access_iterator_tag) [clone .isra.0] */undefined8 *std::_V2::__rotate<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>>(undefined8 *param_1, undefined8 *param_2, undefined8 *param_3) {
   undefined8 *puVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long lVar6;
   long lVar7;
   undefined8 *puVar8;
   long lVar9;
   undefined8 *puVar10;
   long lVar11;
   long lVar12;
   if (param_1 == param_2) {
      return param_3;
   }
   if (param_2 != param_3) {
      puVar8 = (undefined8*)( (long)param_1 + ( (long)param_3 - (long)param_2 ) );
      lVar6 = (long)param_3 - (long)param_1 >> 3;
      lVar7 = lVar6 * -0x5555555555555555;
      lVar11 = (long)param_2 - (long)param_1 >> 3;
      lVar12 = lVar11 * -0x5555555555555555;
      puVar10 = param_2;
      if (lVar6 * 0x5555555555555555 + lVar11 * 0x5555555555555556 == 0) {
         do {
            uVar3 = puVar10[1];
            uVar4 = *param_1;
            uVar5 = param_1[1];
            puVar8 = param_1 + 3;
            uVar2 = param_1[2];
            *param_1 = *puVar10;
            param_1[1] = uVar3;
            *(undefined1*)( param_1 + 2 ) = *(undefined1*)( puVar10 + 2 );
            *puVar10 = uVar4;
            puVar10[1] = uVar5;
            *(char*)( puVar10 + 2 ) = (char)uVar2;
            param_1 = puVar8;
            puVar10 = puVar10 + 3;
         } while ( param_2 != puVar8 );
         return param_2;
      }
      lVar11 = lVar7 + lVar11 * 0x5555555555555555;
      puVar10 = param_1;
      lVar6 = lVar12;
      if (lVar11 <= lVar12) goto LAB_001004b0;
      do {
         if (0 < lVar11) {
            lVar6 = 0;
            lVar9 = 0;
            do {
               puVar10 = (undefined8*)( (long)param_1 + lVar6 + lVar12 * 0x18 );
               uVar3 = puVar10[1];
               uVar4 = *(undefined8*)( (long)param_1 + lVar6 );
               uVar5 = ( (undefined8*)( (long)param_1 + lVar6 ) )[1];
               lVar9 = lVar9 + 1;
               uVar2 = *(undefined8*)( (long)param_1 + lVar6 + 0x10 );
               *(undefined8*)( (long)param_1 + lVar6 ) = *puVar10;
               ( (undefined8*)( (long)param_1 + lVar6 ) )[1] = uVar3;
               *(undefined1*)( (long)param_1 + lVar6 + 0x10 ) = *(undefined1*)( (long)param_1 + lVar6 + lVar12 * 0x18 + 0x10 );
               *(char*)( (long)param_1 + lVar6 + lVar12 * 0x18 + 0x10 ) = (char)uVar2;
               puVar10 = (undefined8*)( (long)param_1 + lVar6 + lVar12 * 0x18 );
               *puVar10 = uVar4;
               puVar10[1] = uVar5;
               lVar6 = lVar6 + 0x18;
            } while ( lVar11 != lVar9 );
            param_1 = param_1 + lVar11 * 3;
         }
         if (lVar7 % lVar12 == 0) {
            return puVar8;
         }
         lVar6 = lVar12 - lVar7 % lVar12;
         lVar7 = lVar12;
         while (lVar11 = lVar7 - lVar6,puVar10 = param_1,lVar12 = lVar6,lVar11 <= lVar6) {
            LAB_001004b0:param_1 = puVar10 + lVar7 * 3 + lVar11 * -3;
            if (0 < lVar6) {
               lVar12 = -0x18;
               lVar9 = 0;
               do {
                  puVar1 = (undefined8*)( (long)puVar10 + lVar12 + lVar7 * 0x18 );
                  uVar3 = puVar1[1];
                  uVar4 = *(undefined8*)( (long)param_1 + lVar12 );
                  uVar5 = ( (undefined8*)( (long)param_1 + lVar12 ) )[1];
                  lVar9 = lVar9 + 1;
                  uVar2 = *(undefined8*)( (long)param_1 + lVar12 + 0x10 );
                  *(undefined8*)( (long)param_1 + lVar12 ) = *puVar1;
                  ( (undefined8*)( (long)param_1 + lVar12 ) )[1] = uVar3;
                  *(undefined1*)( (long)param_1 + lVar12 + 0x10 ) = *(undefined1*)( (long)puVar10 + lVar12 + lVar7 * 0x18 + 0x10 );
                  *(char*)( (long)puVar10 + lVar12 + lVar7 * 0x18 + 0x10 ) = (char)uVar2;
                  puVar1 = (undefined8*)( (long)puVar10 + lVar12 + lVar7 * 0x18 );
                  *puVar1 = uVar4;
                  puVar1[1] = uVar5;
                  lVar12 = lVar12 + -0x18;
               } while ( lVar6 != lVar9 );
               param_1 = param_1 + lVar6 * -3;
            }
            lVar6 = lVar7 % lVar11;
            lVar7 = lVar11;
            if (lVar6 == 0) {
               return puVar8;
            }
         };
      } while ( true );
   }
   return param_1;
}/* bool Clipper2Lib::IsCollinear<long>(Clipper2Lib::Point<long> const&, Clipper2Lib::Point<long>
   const&, Clipper2Lib::Point<long> const&) [clone .isra.0] */bool Clipper2Lib::IsCollinear<long>(Point_conflict *param_1, Point_conflict *param_2, Point_conflict *param_3) {
   int iVar1;
   ulong uVar2;
   long in_RCX;
   ulong uVar3;
   ulong uVar4;
   ulong uVar5;
   ulong uVar6;
   ulong uVar7;
   ulong uVar8;
   long in_R8;
   ulong uVar9;
   long in_R9;
   ulong uVar10;
   ulong uVar11;
   ulong uVar12;
   ulong uVar13;
   ulong uVar14;
   ulong uVar15;
   uVar10 = in_R9 - in_RCX;
   uVar3 = in_RCX - (long)param_2;
   uVar12 = (long)param_3 - (long)param_1;
   uVar9 = in_R8 - (long)param_3;
   uVar2 = -uVar12;
   if (0 < (long)uVar12) {
      uVar2 = uVar12;
   }
   uVar14 = -uVar10;
   if (0 < (long)uVar10) {
      uVar14 = uVar10;
   }
   uVar4 = -uVar3;
   if (0 < (long)uVar3) {
      uVar4 = uVar3;
   }
   uVar11 = -uVar9;
   if (0 < (long)uVar9) {
      uVar11 = uVar9;
   }
   uVar5 = ( uVar2 & 0xffffffff ) * ( uVar14 & 0xffffffff );
   uVar13 = ( uVar14 & 0xffffffff ) * ( uVar2 >> 0x20 ) + ( uVar5 >> 0x20 );
   uVar7 = ( uVar2 & 0xffffffff ) * ( uVar14 >> 0x20 ) + ( uVar13 & 0xffffffff );
   uVar6 = ( uVar4 & 0xffffffff ) * ( uVar11 & 0xffffffff );
   uVar15 = ( uVar11 & 0xffffffff ) * ( uVar4 >> 0x20 ) + ( uVar6 >> 0x20 );
   uVar8 = ( uVar4 & 0xffffffff ) * ( uVar11 >> 0x20 ) + ( uVar15 & 0xffffffff );
   iVar1 = (int)( (long)uVar3 >> 0x3f );
   return ( ( uVar4 >> 0x20 ) * ( uVar11 >> 0x20 ) + ( uVar15 >> 0x20 ) + ( uVar8 >> 0x20 ) == ( uVar2 >> 0x20 ) * ( uVar14 >> 0x20 ) + ( uVar13 >> 0x20 ) + ( uVar7 >> 0x20 ) && ( uVar8 << 0x20 | uVar6 & 0xffffffff ) == ( uVar7 << 0x20 | uVar5 & 0xffffffff ) ) && ( ( uint )(0 < (long)uVar12) + (int)( (long)uVar12 >> 0x3f ) ) * ( ( uint )(0 < (long)uVar10) + (int)( (long)uVar10 >> 0x3f ) ) == ( ( uint )(0 < (long)uVar3) + iVar1 ) * ( CONCAT31(( int3 )(( uint ) - iVar1 >> 8), 0 < (long)uVar9) + (int)( (long)uVar9 >> 0x3f ) );
}/* std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> > >&
   std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > >
   >::emplace_back<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double>
   > > >(std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> > >&&)
   [clone .isra.0] */vector * __thiscallstd::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>::emplace_back<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>(vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>> * this, vector * param_1) * puVar1 ;undefined8 *puVar2undefined8 uVar3ulong uVar4undefined8 uVar5undefined8 uVar6ulong uVar7vector *pvVar8vector *extraout_RAXvector *pvVar9undefined8 *puVar10undefined8 *puVar11vector *pvVar12ulong uVar13undefined8 *puVar14vector *pvVar15puVar1 = *(undefined8**)( this + 8 );puVar11 = *(undefined8**)( this + 0x10 );if (puVar1 != puVar11) {
   uVar3 = *(undefined8*)( param_1 + 8 );
   pvVar9 = *(vector**)( param_1 + 0x10 );
   *(undefined8*)( param_1 + 0x10 ) = 0;
   *puVar1 = *(undefined8*)param_1;
   puVar1[1] = uVar3;
   puVar1[2] = pvVar9;
   *(undefined1(*) [16])param_1 = (undefined1[16])0x0;
   *(undefined8**)( this + 8 ) = puVar1 + 3;
   return pvVar9;
}puVar2 = *(undefined8**)this;puVar14 = (undefined8*)( (long)puVar1 - (long)puVar2 );uVar7 = ( (long)puVar14 >> 3 ) * -0x5555555555555555;if (uVar7 == 0x555555555555555) {
   /* WARNING: Subroutine does not return */
   std::__throw_length_error("vector::_M_realloc_insert");
}if (puVar1 == puVar2) {
   uVar13 = uVar7 + 1;
   if (0xfffffffffffffffe < uVar7) goto LAB_00100880;
   if (0x555555555555555 < uVar13) {
      uVar13 = 0x555555555555555;
   }
   uVar13 = uVar13 * 0x18;
   LAB_0010082f:pvVar9 = (vector*)operator_new(uVar13);
   uVar5 = *(undefined8*)param_1;
   uVar6 = *(undefined8*)( param_1 + 8 );
   uVar3 = *(undefined8*)( param_1 + 0x10 );
   pvVar15 = (vector*)( (long)puVar14 + (long)pvVar9 );
   puVar11 = *(undefined8**)( this + 0x10 );
   pvVar12 = pvVar9 + uVar13;
   *(undefined1(*) [16])param_1 = (undefined1[16])0x0;
   *(undefined8*)( param_1 + 0x10 ) = 0;
   *(undefined8*)( pvVar15 + 0x10 ) = uVar3;
   *(undefined8*)pvVar15 = uVar5;
   *(undefined8*)( pvVar15 + 8 ) = uVar6;
   puVar14 = puVar2;
   pvVar15 = pvVar9;
   if (puVar1 == puVar2) {
      pvVar8 = pvVar9 + 0x18;
      goto LAB_001007dd;
   }
} else {
   uVar4 = ( (long)puVar14 >> 3 ) * 0x5555555555555556;
   if (uVar4 < uVar7) {
      LAB_00100880:uVar13 = 0x7ffffffffffffff8;
      goto LAB_0010082f;
   }
   if (uVar4 != 0) {
      uVar13 = 0x555555555555555;
      if (uVar4 < 0x555555555555556) {
         uVar13 = uVar4;
      }
      uVar13 = uVar13 * 0x18;
      goto LAB_0010082f;
   }
   uVar3 = *(undefined8*)( param_1 + 0x10 );
   uVar5 = *(undefined8*)param_1;
   uVar6 = *(undefined8*)( param_1 + 8 );
   pvVar12 = (vector*)0x0;
   *(undefined8*)( param_1 + 0x10 ) = 0;
   puVar14[2] = uVar3;
   *(undefined1(*) [16])param_1 = (undefined1[16])0x0;
   pvVar9 = (vector*)0x0;
   *puVar14 = uVar5;
   puVar14[1] = uVar6;
   puVar14 = puVar2;
   pvVar15 = pvVar9;
}do {
   uVar5 = puVar14[1];
   uVar3 = puVar14[2];
   puVar10 = puVar14 + 3;
   pvVar8 = pvVar9 + 0x18;
   *(undefined8*)pvVar9 = *puVar14;
   *(undefined8*)( pvVar9 + 8 ) = uVar5;
   *(undefined8*)( pvVar9 + 0x10 ) = uVar3;
   pvVar9 = pvVar8;
   puVar14 = puVar10;
} while ( puVar1 != puVar10 );pvVar8 = pvVar15 + ( (long)puVar1 + ( -0x18 - (long)puVar2 ) & 0xfffffffffffffff8U ) + 0x30;LAB_001007dd:if (puVar2 != (undefined8*)0x0) {
   operator_delete(puVar2, (long)puVar11 - (long)puVar2);
   pvVar9 = extraout_RAX;
}*(vector**)this = pvVar15;*(vector**)( this + 8 ) = pvVar8;*(vector**)( this + 0x10 ) = pvVar12;return pvVar9;}/* std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >&
   std::vector<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >,
   std::allocator<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >
   > >::emplace_back<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> >
   > >(std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >&&) [clone
   .isra.0] */vector * __thiscallstd::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>::emplace_back<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>(vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > *this, vector * param_1) * puVar1 ;undefined8 *puVar2undefined8 uVar3ulong uVar4undefined8 uVar5undefined8 uVar6ulong uVar7vector *pvVar8vector *extraout_RAXvector *pvVar9undefined8 *puVar10undefined8 *puVar11vector *pvVar12ulong uVar13undefined8 *puVar14vector *pvVar15puVar1 = *(undefined8**)( this + 8 );puVar11 = *(undefined8**)( this + 0x10 );if (puVar1 != puVar11) {
   uVar3 = *(undefined8*)( param_1 + 8 );
   pvVar9 = *(vector**)( param_1 + 0x10 );
   *(undefined8*)( param_1 + 0x10 ) = 0;
   *puVar1 = *(undefined8*)param_1;
   puVar1[1] = uVar3;
   puVar1[2] = pvVar9;
   *(undefined1(*) [16])param_1 = (undefined1[16])0x0;
   *(undefined8**)( this + 8 ) = puVar1 + 3;
   return pvVar9;
}puVar2 = *(undefined8**)this;puVar14 = (undefined8*)( (long)puVar1 - (long)puVar2 );uVar7 = ( (long)puVar14 >> 3 ) * -0x5555555555555555;if (uVar7 == 0x555555555555555) {
   /* WARNING: Subroutine does not return */
   std::__throw_length_error("vector::_M_realloc_insert");
}if (puVar1 == puVar2) {
   uVar13 = uVar7 + 1;
   if (0xfffffffffffffffe < uVar7) goto LAB_00100a60;
   if (0x555555555555555 < uVar13) {
      uVar13 = 0x555555555555555;
   }
   uVar13 = uVar13 * 0x18;
   LAB_00100a0f:pvVar9 = (vector*)operator_new(uVar13);
   uVar5 = *(undefined8*)param_1;
   uVar6 = *(undefined8*)( param_1 + 8 );
   uVar3 = *(undefined8*)( param_1 + 0x10 );
   pvVar15 = (vector*)( (long)puVar14 + (long)pvVar9 );
   puVar11 = *(undefined8**)( this + 0x10 );
   pvVar12 = pvVar9 + uVar13;
   *(undefined1(*) [16])param_1 = (undefined1[16])0x0;
   *(undefined8*)( param_1 + 0x10 ) = 0;
   *(undefined8*)( pvVar15 + 0x10 ) = uVar3;
   *(undefined8*)pvVar15 = uVar5;
   *(undefined8*)( pvVar15 + 8 ) = uVar6;
   puVar14 = puVar2;
   pvVar15 = pvVar9;
   if (puVar1 == puVar2) {
      pvVar8 = pvVar9 + 0x18;
      goto LAB_001009bd;
   }
} else {
   uVar4 = ( (long)puVar14 >> 3 ) * 0x5555555555555556;
   if (uVar4 < uVar7) {
      LAB_00100a60:uVar13 = 0x7ffffffffffffff8;
      goto LAB_00100a0f;
   }
   if (uVar4 != 0) {
      uVar13 = 0x555555555555555;
      if (uVar4 < 0x555555555555556) {
         uVar13 = uVar4;
      }
      uVar13 = uVar13 * 0x18;
      goto LAB_00100a0f;
   }
   uVar3 = *(undefined8*)( param_1 + 0x10 );
   uVar5 = *(undefined8*)param_1;
   uVar6 = *(undefined8*)( param_1 + 8 );
   pvVar12 = (vector*)0x0;
   *(undefined8*)( param_1 + 0x10 ) = 0;
   puVar14[2] = uVar3;
   *(undefined1(*) [16])param_1 = (undefined1[16])0x0;
   pvVar9 = (vector*)0x0;
   *puVar14 = uVar5;
   puVar14[1] = uVar6;
   puVar14 = puVar2;
   pvVar15 = pvVar9;
}do {
   uVar5 = puVar14[1];
   uVar3 = puVar14[2];
   puVar10 = puVar14 + 3;
   pvVar8 = pvVar9 + 0x18;
   *(undefined8*)pvVar9 = *puVar14;
   *(undefined8*)( pvVar9 + 8 ) = uVar5;
   *(undefined8*)( pvVar9 + 0x10 ) = uVar3;
   pvVar9 = pvVar8;
   puVar14 = puVar10;
} while ( puVar1 != puVar10 );pvVar8 = pvVar15 + ( (long)puVar1 + ( -0x18 - (long)puVar2 ) & 0xfffffffffffffff8U ) + 0x30;LAB_001009bd:if (puVar2 != (undefined8*)0x0) {
   operator_delete(puVar2, (long)puVar11 - (long)puVar2);
   pvVar9 = extraout_RAX;
}*(vector**)this = pvVar15;*(vector**)( this + 8 ) = pvVar8;*(vector**)( this + 0x10 ) = pvVar12;return pvVar9;}/* Clipper2Lib::IsValidAelOrder(Clipper2Lib::Active const&, Clipper2Lib::Active const&) [clone
   .part.0] */ulong Clipper2Lib::IsValidAelOrder(Active *param_1, Active *param_2) {
   Active AVar1;
   Point_conflict *pPVar2;
   Point_conflict *pPVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   Point_conflict *pPVar7;
   bool bVar8;
   undefined7 extraout_var;
   undefined8 *puVar9;
   undefined8 unaff_R13;
   undefined7 uVar11;
   ulong uVar10;
   double dVar12;
   double dVar13;
   dVar13 = 0.0;
   pPVar2 = *(Point_conflict**)param_2;
   pPVar3 = *(Point_conflict**)( param_2 + 8 );
   lVar4 = *(long*)( param_1 + 0x18 );
   lVar5 = *(long*)( param_2 + 0x18 );
   dVar12 = (double)( (long)pPVar2 - (long)*(Point_conflict**)( param_1 + 0x10 ) ) * (double)( lVar5 - (long)pPVar3 ) - (double)( (long)pPVar3 - lVar4 ) * (double)( (long)*(Point_conflict**)( param_2 + 0x10 ) - (long)pPVar2 );
   uVar11 = ( undefined7 )((ulong)unaff_R13 >> 8);
   if (dVar12 == 0.0) {
      lVar6 = *(long*)( param_1 + 0x70 );
      if (( ( *(byte*)( lVar6 + 0x20 ) & 4 ) == 0 ) && ( lVar5 < lVar4 )) {
         dVar12 = CrossProduct<long>(pPVar2, pPVar3, *(Point_conflict**)( param_1 + 0x10 ));
         uVar10 = CONCAT71(uVar11, dVar12 <= dVar13);
      } else if (( ( *(byte*)( *(long*)( param_2 + 0x70 ) + 0x20 ) & 4 ) == 0 ) && ( lVar4 < lVar5 )) {
         dVar12 = CrossProduct<long>(pPVar2, pPVar3, *(Point_conflict**)( param_2 + 0x10 ));
         uVar10 = CONCAT71(uVar11, 0.0 <= dVar12);
      } else {
         AVar1 = param_2[0x80];
         uVar10 = (ulong)(byte)AVar1;
         if (( ( *(Point_conflict**)( param_1 + 8 ) == pPVar3 ) && ( *(Point_conflict**)( **(long**)( param_1 + 0x78 ) + 8 ) == pPVar3 ) ) && ( AVar1 == param_1[0x80] )) {
            if (*(int*)( param_1 + 0x30 ) < 1) {
               puVar9 = *(undefined8**)( *(long*)( lVar6 + 0x10 ) + 0x10 );
            } else {
               puVar9 = *(undefined8**)( *(long*)( lVar6 + 0x18 ) + 0x18 );
            }
            pPVar3 = (Point_conflict*)*puVar9;
            pPVar7 = (Point_conflict*)puVar9[1];
            bVar8 = IsCollinear<long>(pPVar3, pPVar7, *(Point_conflict**)param_1);
            if (bVar8) {
               uVar10 = CONCAT71(extraout_var, bVar8) & 0xffffffff;
            } else {
               dVar12 = CrossProduct<long>(pPVar3, pPVar7, pPVar2);
               uVar10 = ( ulong )(( Active )(0.0 < dVar12) == AVar1);
            }
         }
      }
   } else {
      uVar10 = CONCAT71(uVar11, dVar12 < 0.0);
   }
   return uVar10 & 0xffffffff;
}/* Clipper2Lib::GetMaximaPair(Clipper2Lib::Active const&) */void Clipper2Lib::GetMaximaPair(Active *param_1) {
   long lVar1;
   lVar1 = *(long*)( param_1 + 0x50 );
   if (lVar1 != 0) {
      do {
         if (*(long*)( lVar1 + 0x70 ) == *(long*)( param_1 + 0x70 )) {
            return;
         }
         lVar1 = *(long*)( lVar1 + 0x50 );
      } while ( lVar1 != 0 );
   }
   return;
}/* Clipper2Lib::SwapOutrecs(Clipper2Lib::Active&, Clipper2Lib::Active&) */void Clipper2Lib::SwapOutrecs(Active *param_1, Active *param_2) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   lVar1 = *(long*)( param_1 + 0x40 );
   lVar2 = *(long*)( param_2 + 0x40 );
   if (lVar1 == lVar2) {
      uVar3 = *(undefined8*)( lVar1 + 0x10 );
      *(undefined8*)( lVar1 + 0x10 ) = *(undefined8*)( lVar1 + 0x18 );
      *(undefined8*)( lVar1 + 0x18 ) = uVar3;
      return;
   }
   if (lVar1 != 0) {
      if (*(Active**)( lVar1 + 0x10 ) == param_1) {
         *(Active**)( lVar1 + 0x10 ) = param_2;
      } else {
         *(Active**)( lVar1 + 0x18 ) = param_2;
      }
   }
   if (lVar2 != 0) {
      if (*(Active**)( lVar2 + 0x10 ) == param_2) {
         *(Active**)( lVar2 + 0x10 ) = param_1;
         *(long*)( param_1 + 0x40 ) = lVar2;
         *(long*)( param_2 + 0x40 ) = lVar1;
         return;
      }
      *(Active**)( lVar2 + 0x18 ) = param_1;
   }
   *(long*)( param_1 + 0x40 ) = lVar2;
   *(long*)( param_2 + 0x40 ) = lVar1;
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Clipper2Lib::Area(Clipper2Lib::OutPt*) */double Clipper2Lib::Area(OutPt *param_1) {
   OutPt *pOVar1;
   OutPt *pOVar2;
   long lVar3;
   OutPt *pOVar4;
   double dVar5;
   dVar5 = 0.0;
   pOVar4 = param_1;
   do {
      pOVar1 = pOVar4 + 0x18;
      pOVar2 = pOVar4 + 8;
      lVar3 = *(long*)pOVar4;
      pOVar4 = *(OutPt**)( pOVar4 + 0x10 );
      dVar5 = dVar5 + (double)( *(long*)pOVar2 + ( *(long**)pOVar1 )[1] ) * (double)( **(long**)pOVar1 - lVar3 );
   } while ( param_1 != pOVar4 );
   return dVar5 * __LC3;
}/* Clipper2Lib::ReverseOutPts(Clipper2Lib::OutPt*) */void Clipper2Lib::ReverseOutPts(OutPt *param_1) {
   OutPt *pOVar1;
   undefined8 uVar2;
   OutPt *pOVar3;
   pOVar3 = param_1;
   if (param_1 != (OutPt*)0x0) {
      do {
         uVar2 = *(undefined8*)( pOVar3 + 0x10 );
         pOVar1 = *(OutPt**)( pOVar3 + 0x10 );
         *(undefined8*)( pOVar3 + 0x10 ) = *(undefined8*)( pOVar3 + 0x18 );
         *(undefined8*)( pOVar3 + 0x18 ) = uVar2;
         pOVar3 = pOVar1;
      } while ( param_1 != pOVar1 );
   }
   return;
}/* Clipper2Lib::ReuseableDataContainer64::Clear() */void Clipper2Lib::ReuseableDataContainer64::Clear(ReuseableDataContainer64 *this) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   puVar3 = *(undefined8**)( this + 8 );
   puVar1 = *(undefined8**)( this + 0x10 );
   puVar2 = puVar3;
   if (puVar3 != puVar1) {
      do {
         if ((void*)*puVar2 != (void*)0x0) {
            operator_delete((void*)*puVar2, 0x10);
         }
         puVar2 = puVar2 + 1;
      } while ( puVar1 != puVar2 );
      *(undefined8**)( this + 0x10 ) = puVar3;
   }
   puVar3 = *(undefined8**)( this + 0x20 );
   puVar1 = *(undefined8**)( this + 0x28 );
   if (puVar1 != puVar3) {
      do {
         if ((void*)*puVar3 != (void*)0x0) {
            operator_delete__((void*)*puVar3);
         }
         puVar3 = puVar3 + 1;
      } while ( puVar1 != puVar3 );
      if (*(long*)( this + 0x20 ) != *(long*)( this + 0x28 )) {
         *(long*)( this + 0x28 ) = *(long*)( this + 0x20 );
      }
   }
   return;
}/* Clipper2Lib::ReuseableDataContainer64::~ReuseableDataContainer64() */void Clipper2Lib::ReuseableDataContainer64::~ReuseableDataContainer64(ReuseableDataContainer64 *this) {
   void *pvVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   *(undefined***)this = &PTR__ReuseableDataContainer64_0010f638;
   Clear(this);
   pvVar1 = *(void**)( this + 0x20 );
   if (pvVar1 != (void*)0x0) {
      operator_delete(pvVar1, *(long*)( this + 0x30 ) - (long)pvVar1);
   }
   puVar2 = *(undefined8**)( this + 0x10 );
   puVar3 = *(undefined8**)( this + 8 );
   if (puVar2 != puVar3) {
      do {
         if ((void*)*puVar3 != (void*)0x0) {
            operator_delete((void*)*puVar3, 0x10);
         }
         puVar3 = puVar3 + 1;
      } while ( puVar2 != puVar3 );
      puVar3 = *(undefined8**)( this + 8 );
   }
   if (puVar3 != (undefined8*)0x0) {
      operator_delete(puVar3, *(long*)( this + 0x18 ) - (long)puVar3);
      return;
   }
   return;
}/* Clipper2Lib::ReuseableDataContainer64::~ReuseableDataContainer64() */void Clipper2Lib::ReuseableDataContainer64::~ReuseableDataContainer64(ReuseableDataContainer64 *this) {
   ~ReuseableDataContainer64(this)
   ;;
   operator_delete(this, 0x38);
   return;
}/* Clipper2Lib::ClipperBase::DeleteEdges(Clipper2Lib::Active*&) */void Clipper2Lib::ClipperBase::DeleteEdges(ClipperBase *this, Active **param_1) {
   Active *pAVar1;
   pAVar1 = *param_1;
   if (pAVar1 == (Active*)0x0) {
      return;
   }
   do {
      *param_1 = *(Active**)( pAVar1 + 0x50 );
      operator_delete(pAVar1, 0x88);
      pAVar1 = *param_1;
   } while ( pAVar1 != (Active*)0x0 );
   return;
}/* Clipper2Lib::ClipperBase::DisposeVerticesAndLocalMinima() */void Clipper2Lib::ClipperBase::DisposeVerticesAndLocalMinima(ClipperBase *this) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   puVar3 = *(undefined8**)( this + 0x38 );
   puVar1 = *(undefined8**)( this + 0x40 );
   puVar2 = puVar3;
   if (puVar3 != puVar1) {
      do {
         if ((void*)*puVar2 != (void*)0x0) {
            operator_delete((void*)*puVar2, 0x10);
         }
         puVar2 = puVar2 + 1;
      } while ( puVar1 != puVar2 );
      *(undefined8**)( this + 0x40 ) = puVar3;
   }
   puVar3 = *(undefined8**)( this + 0x58 );
   puVar1 = *(undefined8**)( this + 0x60 );
   if (puVar1 != puVar3) {
      do {
         if ((void*)*puVar3 != (void*)0x0) {
            operator_delete__((void*)*puVar3);
         }
         puVar3 = puVar3 + 1;
      } while ( puVar1 != puVar3 );
      if (*(long*)( this + 0x58 ) != *(long*)( this + 0x60 )) {
         *(long*)( this + 0x60 ) = *(long*)( this + 0x58 );
      }
   }
   return;
}/* Clipper2Lib::ClipperBase::IsContributingClosed(Clipper2Lib::Active const&) const */ulong Clipper2Lib::ClipperBase::IsContributingClosed(ClipperBase *this, Active *param_1) {
   uint uVar1;
   int iVar2;
   ulong uVar3;
   int iVar4;
   iVar4 = *(int*)( this + 0xc );
   if (iVar4 == 2) {
      if (*(int*)( param_1 + 0x34 ) != 1) {
         return 0;
      }
      iVar4 = *(int*)( this + 8 );
      if (iVar4 != 3) {
         if (iVar4 < 4) {
            if (iVar4 == 1) {
               return ( ulong )(0 < *(int*)( param_1 + 0x38 ));
            }
            if (iVar4 != 2) {
               return 0;
            }
            return ( ulong )(*(int*)( param_1 + 0x38 ) < 1);
         }
         LAB_001010e0:return ( ulong )(iVar4 == 4);
      }
      uVar3 = ( ulong )(*(int*)( param_1 + 0x38 ) < 1);
   } else if (iVar4 == 3) {
      if (*(int*)( param_1 + 0x34 ) != -1) {
         return 0;
      }
      iVar4 = *(int*)( this + 8 );
      if (iVar4 != 3) {
         if (iVar4 < 4) {
            if (iVar4 == 1) {
               return ( ulong )(*(uint*)( param_1 + 0x38 ) >> 0x1f);
            }
            if (iVar4 != 2) {
               return 0;
            }
            return ( ulong )(~*(uint *)(param_1 + 0x38) >> 0x1f);
         }
         goto LAB_001010e0;
      }
      uVar3 = ( ulong )(~*(uint *)(param_1 + 0x38) >> 0x1f);
   } else {
      if (iVar4 == 1) {
         iVar4 = *(int*)( param_1 + 0x34 );
         iVar2 = -iVar4;
         if (0 < iVar4) {
            iVar2 = iVar4;
         }
         uVar3 = 0;
         if (iVar2 != 1) {
            return 0;
         }
         iVar4 = *(int*)( this + 8 );
         if (iVar4 != 3) {
            if (3 < iVar4) goto LAB_001010e0;
            if (iVar4 == 1) goto LAB_001010d0;
            if (iVar4 != 2) {
               return 0;
            }
            goto LAB_0010101a;
         }
      } else {
         uVar1 = *(uint*)( this + 8 );
         uVar3 = (ulong)uVar1;
         if (uVar1 != 3) {
            if (3 < (int)uVar1) {
               return (ulong)CONCAT31(( int3 )(uVar1 >> 8), uVar1 == 4);
            }
            if (uVar1 == 1) {
               LAB_001010d0:return (ulong)CONCAT31(( int3 )(( uint ) * (int*)( param_1 + 0x38 ) >> 8), *(int*)( param_1 + 0x38 ) != 0);
            }
            if (uVar1 != 2) {
               return 0;
            }
            LAB_0010101a:return CONCAT71(( int7 )(uVar3 >> 8), *(int*)( param_1 + 0x38 ) == 0);
         }
      }
      uVar3 = CONCAT71(( int7 )(uVar3 >> 8), *(int*)( param_1 + 0x38 ) == 0);
   }
   if (*(int*)( *(long*)( param_1 + 0x78 ) + 8 ) == 0) {
      return uVar3;
   }
   return ( ulong )((uint)uVar3 ^ 1);
}/* Clipper2Lib::ClipperBase::SetWindCountForClosedPathEdge(Clipper2Lib::Active&) */void Clipper2Lib::ClipperBase::SetWindCountForClosedPathEdge(ClipperBase *this, Active *param_1) {
   int iVar1;
   long lVar2;
   Active *pAVar3;
   int iVar4;
   int iVar5;
   lVar2 = *(long*)( param_1 + 0x48 );
   iVar1 = *(int*)( *(long*)( param_1 + 0x78 ) + 8 );
   do {
      if (lVar2 == 0) {
         iVar4 = *(int*)( this + 0xc );
         pAVar3 = *(Active**)( this + 0x28 );
         *(undefined4*)( param_1 + 0x34 ) = *(undefined4*)( param_1 + 0x30 );
         if (iVar4 == 0) {
            LAB_0010122e:if (param_1 != pAVar3) {
               do {
                  if (( iVar1 != *(int*)( *(long*)( pAVar3 + 0x78 ) + 8 ) ) && ( *(char*)( *(long*)( pAVar3 + 0x78 ) + 0xc ) == '\0' )) {
                     *(uint*)( param_1 + 0x38 ) = ( uint )(*(int*)( param_1 + 0x38 ) == 0);
                  }
                  pAVar3 = *(Active**)( pAVar3 + 0x50 );
               } while ( param_1 != pAVar3 );
               return;
            }
            return;
         }
         LAB_001011f0:if (param_1 != pAVar3) {
            do {
               if (( iVar1 != *(int*)( *(long*)( pAVar3 + 0x78 ) + 8 ) ) && ( *(char*)( *(long*)( pAVar3 + 0x78 ) + 0xc ) == '\0' )) {
                  *(int*)( param_1 + 0x38 ) = *(int*)( param_1 + 0x38 ) + *(int*)( pAVar3 + 0x30 );
               }
               pAVar3 = *(Active**)( pAVar3 + 0x50 );
            } while ( param_1 != pAVar3 );
            return;
         }
         return;
      }
      if (( iVar1 == *(int*)( *(long*)( lVar2 + 0x78 ) + 8 ) ) && ( *(char*)( *(long*)( lVar2 + 0x78 ) + 0xc ) == '\0' )) {
         pAVar3 = *(Active**)( lVar2 + 0x50 );
         if (*(int*)( this + 0xc ) == 0) {
            *(ulong*)( param_1 + 0x34 ) = CONCAT44(*(undefined4*)( lVar2 + 0x38 ), *(undefined4*)( param_1 + 0x30 ));
            goto LAB_0010122e;
         }
         iVar4 = *(int*)( lVar2 + 0x34 );
         if (iVar4 * *(int*)( lVar2 + 0x30 ) < 0) {
            iVar5 = -iVar4;
            if (0 < iVar4) {
               iVar5 = iVar4;
            }
            if (1 < iVar5) goto LAB_001011d2;
            iVar4 = 1;
            if (*(char*)( *(long*)( param_1 + 0x78 ) + 0xc ) == '\0') {
               iVar4 = *(int*)( param_1 + 0x30 );
            }
         } else {
            LAB_001011d2:if (-1 < *(int*)( lVar2 + 0x30 ) * *(int*)( param_1 + 0x30 )) {
               iVar4 = *(int*)( param_1 + 0x30 ) + iVar4;
            }
         }
         *(ulong*)( param_1 + 0x34 ) = CONCAT44(*(undefined4*)( lVar2 + 0x38 ), iVar4);
         goto LAB_001011f0;
      }
      lVar2 = *(long*)( lVar2 + 0x48 );
   } while ( true );
}/* Clipper2Lib::ClipperBase::SetWindCountForOpenPathEdge(Clipper2Lib::Active&) */void Clipper2Lib::ClipperBase::SetWindCountForOpenPathEdge(ClipperBase *this, Active *param_1) {
   Active *pAVar1;
   Active *pAVar2;
   uint uVar3;
   uint uVar4;
   pAVar2 = *(Active**)( this + 0x28 );
   if (*(int*)( this + 0xc ) != 0) {
      if (pAVar2 == param_1) {
         return;
      }
      do {
         while (*(int*)( *(long*)( pAVar2 + 0x78 ) + 8 ) == 1) {
            pAVar1 = pAVar2 + 0x30;
            pAVar2 = *(Active**)( pAVar2 + 0x50 );
            *(int*)( param_1 + 0x38 ) = *(int*)( param_1 + 0x38 ) + *(int*)pAVar1;
            if (param_1 == pAVar2) {
               return;
            }
         };
         if (*(char*)( *(long*)( pAVar2 + 0x78 ) + 0xc ) == '\0') {
            *(int*)( param_1 + 0x34 ) = *(int*)( param_1 + 0x34 ) + *(int*)( pAVar2 + 0x30 );
         }
         pAVar2 = *(Active**)( pAVar2 + 0x50 );
      } while ( param_1 != pAVar2 );
      return;
   }
   uVar4 = 0;
   uVar3 = 0;
   if (pAVar2 == param_1) {
      *(undefined4*)( param_1 + 0x34 ) = 0;
      *(undefined4*)( param_1 + 0x38 ) = 0;
      return;
   }
   do {
      while (pAVar1 = pAVar2 + 0x78,*(int*)( *(long*)pAVar1 + 8 ) != 1) {
         pAVar2 = *(Active**)( pAVar2 + 0x50 );
         uVar3 = uVar3 + ( *(char*)( *(long*)pAVar1 + 0xc ) == '\0' );
         if (param_1 == pAVar2) goto LAB_00101336;
      };
      pAVar2 = *(Active**)( pAVar2 + 0x50 );
      uVar4 = uVar4 + 1;
   } while ( param_1 != pAVar2 );
   LAB_00101336:*(uint*)( param_1 + 0x34 ) = uVar3 & 1;
   *(uint*)( param_1 + 0x38 ) = uVar4 & 1;
   return;
}/* Clipper2Lib::IsValidAelOrder(Clipper2Lib::Active const&, Clipper2Lib::Active const&) */undefined8 Clipper2Lib::IsValidAelOrder(Active *param_1, Active *param_2) {
   long lVar1;
   undefined8 uVar2;
   lVar1 = *(long*)( param_1 + 0x20 );
   if (*(long*)( param_2 + 0x20 ) == lVar1) {
      uVar2 = IsValidAelOrder(param_1, param_2);
      return uVar2;
   }
   return CONCAT71(( int7 )((ulong)lVar1 >> 8), lVar1 < *(long*)( param_2 + 0x20 ));
}/* Clipper2Lib::ClipperBase::InsertLeftEdge(Clipper2Lib::Active&) */void Clipper2Lib::ClipperBase::InsertLeftEdge(ClipperBase *this, Active *param_1) {
   long lVar1;
   Active *pAVar2;
   char cVar3;
   Active *pAVar4;
   Active *pAVar5;
   pAVar5 = *(Active**)( this + 0x28 );
   if (pAVar5 == (Active*)0x0) {
      *(undefined1(*) [16])( param_1 + 0x48 ) = (undefined1[16])0x0;
      *(Active**)( this + 0x28 ) = param_1;
      return;
   }
   lVar1 = *(long*)( param_1 + 0x20 );
   if (lVar1 == *(long*)( pAVar5 + 0x20 )) {
      cVar3 = IsValidAelOrder(pAVar5, param_1);
      if (cVar3 != '\0') {
         pAVar2 = pAVar5;
         pAVar5 = *(Active**)( pAVar5 + 0x50 );
         goto joined_r0x001013d3;
      }
      LAB_00101399:*(undefined8*)( param_1 + 0x48 ) = 0;
      *(Active**)( param_1 + 0x50 ) = pAVar5;
      *(Active**)( pAVar5 + 0x48 ) = param_1;
      *(Active**)( this + 0x28 ) = param_1;
      return;
   }
   if (lVar1 <= *(long*)( pAVar5 + 0x20 )) goto LAB_00101399;
   do {
      while (true) {
         pAVar2 = pAVar5;
         pAVar5 = *(Active**)( pAVar5 + 0x50 );
         joined_r0x001013d3:if (pAVar5 == (Active*)0x0) {
            if (*(int*)( pAVar2 + 0x84 ) == 2) {
               return;
            }
            *(undefined8*)( param_1 + 0x50 ) = 0;
            pAVar5 = pAVar2;
            goto LAB_0010142b;
         }
         if (lVar1 != *(long*)( pAVar5 + 0x20 )) break;
         cVar3 = IsValidAelOrder(pAVar5, param_1);
         if (cVar3 == '\0') goto LAB_00101413;
      };
   } while ( *(long*)( pAVar5 + 0x20 ) < lVar1 );
   LAB_00101413:if (*(int*)( pAVar2 + 0x84 ) == 2) {
      pAVar4 = *(Active**)( pAVar5 + 0x50 );
      *(Active**)( param_1 + 0x50 ) = pAVar4;
      if (pAVar4 == (Active*)0x0) goto LAB_0010142b;
   } else {
      *(Active**)( param_1 + 0x50 ) = pAVar5;
      pAVar4 = pAVar5;
      pAVar5 = pAVar2;
   }
   *(Active**)( pAVar4 + 0x48 ) = param_1;
   LAB_0010142b:*(Active**)( param_1 + 0x48 ) = pAVar5;
   *(Active**)( pAVar5 + 0x50 ) = param_1;
   return;
}/* Clipper2Lib::InsertRightEdge(Clipper2Lib::Active&, Clipper2Lib::Active&) */void Clipper2Lib::InsertRightEdge(Active *param_1, Active *param_2) {
   long lVar1;
   lVar1 = *(long*)( param_1 + 0x50 );
   *(long*)( param_2 + 0x50 ) = lVar1;
   if (lVar1 != 0) {
      *(Active**)( lVar1 + 0x48 ) = param_2;
   }
   *(Active**)( param_2 + 0x48 ) = param_1;
   *(Active**)( param_1 + 0x50 ) = param_2;
   return;
}/* Clipper2Lib::ClipperBase::JoinOutrecPaths(Clipper2Lib::Active&, Clipper2Lib::Active&) */void Clipper2Lib::ClipperBase::JoinOutrecPaths(ClipperBase *this, Active *param_1, Active *param_2) {
   long lVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   lVar5 = *(long*)( param_1 + 0x40 );
   lVar6 = *(long*)( param_2 + 0x40 );
   lVar4 = *(long*)( lVar5 + 0x20 );
   lVar1 = *(long*)( lVar6 + 0x20 );
   lVar2 = *(long*)( lVar4 + 0x10 );
   lVar3 = *(long*)( lVar1 + 0x10 );
   if (param_1 == *(Active**)( lVar5 + 0x10 )) {
      *(long*)( lVar3 + 0x18 ) = lVar4;
      *(long*)( lVar4 + 0x10 ) = lVar3;
      *(long*)( lVar1 + 0x10 ) = lVar2;
      *(long*)( lVar2 + 0x18 ) = lVar1;
      *(long*)( lVar5 + 0x20 ) = lVar1;
      lVar1 = *(long*)( lVar6 + 0x10 );
      *(long*)( lVar5 + 0x10 ) = lVar1;
   } else {
      *(long*)( lVar2 + 0x18 ) = lVar1;
      *(long*)( lVar1 + 0x10 ) = lVar2;
      lVar1 = *(long*)( lVar6 + 0x18 );
      *(long*)( lVar4 + 0x10 ) = lVar3;
      *(long*)( lVar3 + 0x18 ) = lVar4;
      *(long*)( lVar5 + 0x18 ) = lVar1;
   }
   if (lVar1 != 0) {
      *(long*)( lVar1 + 0x40 ) = lVar5;
      lVar6 = *(long*)( param_2 + 0x40 );
      lVar5 = *(long*)( param_1 + 0x40 );
   }
   lVar4 = *(long*)( param_1 + 0x70 );
   *(undefined8*)( lVar6 + 0x20 ) = 0;
   *(undefined1(*) [16])( lVar6 + 0x10 ) = (undefined1[16])0x0;
   if (( *(byte*)( lVar4 + 0x20 ) & 3 ) != 0) {
      *(undefined8*)( lVar6 + 0x20 ) = *(undefined8*)( lVar5 + 0x20 );
      *(undefined8*)( lVar5 + 0x20 ) = 0;
      goto LAB_0010150c;
   }
   lVar4 = *(long*)( lVar5 + 8 );
   while (lVar4 != 0) {
      if (*(long*)( lVar4 + 0x20 ) != 0) {
         if (lVar6 == lVar5) goto LAB_00101573;
         lVar4 = *(long*)( lVar5 + 8 );
         if (lVar6 == lVar4) goto LAB_0010156e;
         if (lVar4 == 0) goto LAB_0010157b;
         goto LAB_00101560;
      }
      lVar4 = *(long*)( lVar4 + 8 );
      *(long*)( lVar5 + 8 ) = lVar4;
   };
   if (lVar6 == lVar5) goto LAB_00101573;
   goto LAB_0010157b;
   while (lVar6 != lVar4) {
      LAB_00101560:lVar4 = *(long*)( lVar4 + 8 );
      if (lVar4 == 0) goto LAB_0010157b;
   };
   LAB_0010156e:if (lVar4 != 0) {
      LAB_00101573:*(undefined8*)( lVar5 + 8 ) = *(undefined8*)( lVar6 + 8 );
   }
   LAB_0010157b:*(long*)( lVar6 + 8 ) = lVar5;
   LAB_0010150c:*(undefined8*)( param_1 + 0x40 ) = 0;
   *(undefined8*)( param_2 + 0x40 ) = 0;
   return;
}/* Clipper2Lib::ClipperBase::AddOutPt(Clipper2Lib::Active const&, Clipper2Lib::Point<long> const&)
    */long *__thiscallClipper2Lib::ClipperBase::AddOutPt(ClipperBase *this, Active *param_1, Point_conflict *param_2) {
   long lVar1;
   long *plVar2;
   long *plVar3;
   long lVar4;
   long lVar5;
   long *plVar6;
   lVar1 = *(long*)( param_1 + 0x40 );
   plVar2 = *(long**)( lVar1 + 0x20 );
   plVar3 = (long*)plVar2[2];
   if (param_1 == *(Active**)( lVar1 + 0x10 )) {
      if (( *plVar2 != *(long*)param_2 ) || ( plVar6 = plVar2 * (long*)( param_2 + 8 ) != plVar2[1] )) {
         plVar6 = (long*)operator_new(0x30);
         lVar4 = *(long*)param_2;
         lVar5 = *(long*)( param_2 + 8 );
         plVar6[4] = lVar1;
         plVar6[5] = 0;
         *plVar6 = lVar4;
         plVar6[1] = lVar5;
         plVar3[3] = (long)plVar6;
         plVar6[2] = (long)plVar3;
         plVar6[3] = (long)plVar2;
         plVar2[2] = (long)plVar6;
         *(long**)( lVar1 + 0x20 ) = plVar6;
         return plVar6;
      }
   } else if (( *plVar3 != *(long*)param_2 ) || ( plVar6 = plVar3 * (long*)( param_2 + 8 ) != plVar3[1] )) {
      plVar6 = (long*)operator_new(0x30);
      lVar4 = *(long*)param_2;
      lVar5 = *(long*)( param_2 + 8 );
      plVar6[4] = lVar1;
      plVar6[5] = 0;
      *plVar6 = lVar4;
      plVar6[1] = lVar5;
      plVar3[3] = (long)plVar6;
      plVar6[2] = (long)plVar3;
      plVar6[3] = (long)plVar2;
      plVar2[2] = (long)plVar6;
   }
   return plVar6;
}/* Clipper2Lib::FindEdgeWithMatchingLocMin(Clipper2Lib::Active*) */long *Clipper2Lib::FindEdgeWithMatchingLocMin(Active *param_1) {
   long *plVar1;
   plVar1 = *(long**)( param_1 + 0x50 );
   if (plVar1 != (long*)0x0) {
      do {
         if (plVar1[0xf] == *(long*)( param_1 + 0x78 )) {
            return plVar1;
         }
      } while ( ( ( plVar1[1] == plVar1[3] ) || ( ( *(long*)param_1 == *plVar1 && ( plVar1[1] == *(long*)( param_1 + 8 ) ) ) ) ) && ( plVar1 = (long*)plVar1[10] ),plVar1 != (long*)0x0 );
   }
   plVar1 = *(long**)( param_1 + 0x48 );
   if (plVar1 != (long*)0x0) {
      while (plVar1[0xf] != *(long*)( param_1 + 0x78 )) {
         if (( plVar1[3] != plVar1[1] ) && ( ( *(long*)param_1 != *plVar1 || ( plVar1[1] != *(long*)( param_1 + 8 ) ) ) )) {
            return (long*)0x0;
         }
         plVar1 = (long*)plVar1[9];
         if (plVar1 == (long*)0x0) {
            return plVar1;
         }
      };
   }
   return plVar1;
}/* Clipper2Lib::ClipperBase::SwapPositionsInAEL(Clipper2Lib::Active&, Clipper2Lib::Active&) */void Clipper2Lib::ClipperBase::SwapPositionsInAEL(ClipperBase *this, Active *param_1, Active *param_2) {
   long lVar1;
   long lVar2;
   lVar1 = *(long*)( param_2 + 0x50 );
   if (lVar1 != 0) {
      *(Active**)( lVar1 + 0x48 ) = param_1;
   }
   lVar2 = *(long*)( param_1 + 0x48 );
   if (lVar2 != 0) {
      *(Active**)( lVar2 + 0x50 ) = param_2;
   }
   *(long*)( param_2 + 0x48 ) = lVar2;
   *(Active**)( param_2 + 0x50 ) = param_1;
   *(Active**)( param_1 + 0x48 ) = param_2;
   *(long*)( param_1 + 0x50 ) = lVar1;
   if (*(long*)( param_2 + 0x48 ) != 0) {
      return;
   }
   *(Active**)( this + 0x28 ) = param_2;
   return;
}/* Clipper2Lib::ClipperBase::ResetHorzDirection(Clipper2Lib::Active const&, Clipper2Lib::Vertex
   const*, long&, long&) */long Clipper2Lib::ClipperBase::ResetHorzDirection(ClipperBase *this, Active *param_1, Vertex *param_2, long *param_3, long *param_4) {
   long lVar1;
   long lVar2;
   lVar1 = *(long*)( param_1 + 0x10 );
   if (*(long*)param_1 == lVar1) {
      lVar1 = *(long*)( param_1 + 0x20 );
      lVar2 = *(long*)( param_1 + 0x50 );
      *param_3 = lVar1;
      *param_4 = lVar1;
      if (lVar2 == 0) {
         return lVar2;
      }
      do {
         if (param_2 == *(Vertex**)( lVar2 + 0x70 )) {
            return 1;
         }
         lVar2 = *(long*)( lVar2 + 0x50 );
      } while ( lVar2 != 0 );
   } else {
      if (*(long*)( param_1 + 0x20 ) < lVar1) {
         *param_3 = *(long*)( param_1 + 0x20 );
         *param_4 = *(long*)( param_1 + 0x10 );
         return 1;
      }
      *param_3 = lVar1;
      *param_4 = *(long*)( param_1 + 0x20 );
   }
   return 0;
}/* Clipper2Lib::ClipperBase::DisposeAllOutRecs() */void Clipper2Lib::ClipperBase::DisposeAllOutRecs(ClipperBase *this) {
   undefined8 *puVar1;
   void *pvVar2;
   void *pvVar3;
   undefined8 *puVar4;
   void *pvVar5;
   undefined8 *puVar6;
   puVar6 = *(undefined8**)( this + 0xe8 );
   puVar1 = *(undefined8**)( this + 0xf0 );
   if (puVar1 != puVar6) {
      do {
         pvVar2 = (void*)*puVar6;
         pvVar5 = *(void**)( (long)pvVar2 + 0x20 );
         if (pvVar5 != (void*)0x0) {
            *(undefined8*)( *(long*)( (long)pvVar5 + 0x18 ) + 0x10 ) = 0;
            do {
               pvVar3 = *(void**)( (long)pvVar5 + 0x10 );
               operator_delete(pvVar5, 0x30);
               pvVar5 = pvVar3;
            } while ( pvVar3 != (void*)0x0 );
            *(undefined8*)( (long)pvVar2 + 0x20 ) = 0;
         }
         puVar4 = *(undefined8**)( (long)pvVar2 + 0x30 );
         if (puVar4 != (undefined8*)0x0) {
            pvVar5 = (void*)*puVar4;
            if (pvVar5 != (void*)0x0) {
               operator_delete(pvVar5, puVar4[2] - (long)pvVar5);
            }
            operator_delete(puVar4, 0x18);
         }
         pvVar5 = *(void**)( (long)pvVar2 + 0x60 );
         if (pvVar5 != (void*)0x0) {
            operator_delete(pvVar5, *(long*)( (long)pvVar2 + 0x70 ) - (long)pvVar5);
         }
         puVar6 = puVar6 + 1;
         operator_delete(pvVar2, 0x80);
      } while ( puVar1 != puVar6 );
      if (*(long*)( this + 0xf0 ) != *(long*)( this + 0xe8 )) {
         *(long*)( this + 0xf0 ) = *(long*)( this + 0xe8 );
      }
   }
   return;
}/* Clipper2Lib::ClipperBase::CleanUp() */void Clipper2Lib::ClipperBase::CleanUp(ClipperBase *this) {
   void *pvVar1;
   long lVar2;
   pvVar1 = *(void**)( this + 0x28 );
   while (pvVar1 != (void*)0x0) {
      *(undefined8*)( this + 0x28 ) = *(undefined8*)( (long)pvVar1 + 0x50 );
      operator_delete(pvVar1, 0x88);
      pvVar1 = *(void**)( this + 0x28 );
   };
   pvVar1 = *(void**)( this + 0x70 );
   lVar2 = *(long*)( this + 0x80 );
   *(undefined8*)( this + 0x80 ) = 0;
   *(undefined1(*) [16])( this + 0x70 ) = (undefined1[16])0x0;
   if (pvVar1 != (void*)0x0) {
      operator_delete(pvVar1, lVar2 - (long)pvVar1);
   }
   if (*(long*)( this + 0x90 ) != *(long*)( this + 0x98 )) {
      *(long*)( this + 0x98 ) = *(long*)( this + 0x90 );
   }
   DisposeAllOutRecs(this);
   if (*(long*)( this + 0xa8 ) != *(long*)( this + 0xb0 )) {
      *(long*)( this + 0xb0 ) = *(long*)( this + 0xa8 );
   }
   if (*(long*)( this + 0xc0 ) != *(long*)( this + 200 )) {
      *(long*)( this + 200 ) = *(long*)( this + 0xc0 );
   }
   return;
}/* Clipper2Lib::ClipperBase::Clear() */void Clipper2Lib::ClipperBase::Clear(ClipperBase *this) {
   CleanUp(this);
   DisposeVerticesAndLocalMinima(this);
   this[0x20] = (ClipperBase)0x0;
   this[0xe0] = (ClipperBase)0x0;
   *(undefined8*)( this + 0x50 ) = *(undefined8*)( this + 0x38 );
   return;
}/* Clipper2Lib::ClipperBase::~ClipperBase() */void Clipper2Lib::ClipperBase::~ClipperBase(ClipperBase *this) {
   void *pvVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   *(undefined***)this = &PTR__ClipperBase_0010f658;
   CleanUp(this);
   DisposeVerticesAndLocalMinima(this);
   this[0x20] = (ClipperBase)0x0;
   pvVar1 = *(void**)( this + 0xe8 );
   this[0xe0] = (ClipperBase)0x0;
   *(undefined8*)( this + 0x50 ) = *(undefined8*)( this + 0x38 );
   if (pvVar1 != (void*)0x0) {
      operator_delete(pvVar1, *(long*)( this + 0xf8 ) - (long)pvVar1);
   }
   pvVar1 = *(void**)( this + 0xc0 );
   if (pvVar1 != (void*)0x0) {
      operator_delete(pvVar1, *(long*)( this + 0xd0 ) - (long)pvVar1);
   }
   pvVar1 = *(void**)( this + 0xa8 );
   if (pvVar1 != (void*)0x0) {
      operator_delete(pvVar1, *(long*)( this + 0xb8 ) - (long)pvVar1);
   }
   pvVar1 = *(void**)( this + 0x90 );
   if (pvVar1 != (void*)0x0) {
      operator_delete(pvVar1, *(long*)( this + 0xa0 ) - (long)pvVar1);
   }
   pvVar1 = *(void**)( this + 0x70 );
   if (pvVar1 != (void*)0x0) {
      operator_delete(pvVar1, *(long*)( this + 0x80 ) - (long)pvVar1);
   }
   pvVar1 = *(void**)( this + 0x58 );
   if (pvVar1 != (void*)0x0) {
      operator_delete(pvVar1, *(long*)( this + 0x68 ) - (long)pvVar1);
   }
   puVar2 = *(undefined8**)( this + 0x40 );
   puVar3 = *(undefined8**)( this + 0x38 );
   if (puVar2 != puVar3) {
      do {
         if ((void*)*puVar3 != (void*)0x0) {
            operator_delete((void*)*puVar3, 0x10);
         }
         puVar3 = puVar3 + 1;
      } while ( puVar2 != puVar3 );
      puVar3 = *(undefined8**)( this + 0x38 );
   }
   if (puVar3 == (undefined8*)0x0) {
      return;
   }
   operator_delete(puVar3, *(long*)( this + 0x48 ) - (long)puVar3);
   return;
}/* Clipper2Lib::ClipperBase::~ClipperBase() */void Clipper2Lib::ClipperBase::~ClipperBase(ClipperBase *this) {
   ~ClipperBase(this)
   ;;
   operator_delete(this, 0x100);
   return;
}/* Clipper2Lib::MoveSplits(Clipper2Lib::OutRec*, Clipper2Lib::OutRec*) */void Clipper2Lib::MoveSplits(OutRec *param_1, OutRec *param_2) {
   vector<Clipper2Lib::OutRec*,std::allocator<Clipper2Lib::OutRec*>> *pvVar1;
   undefined8 *puVar2;
   long *plVar3;
   undefined1(*pauVar4)[16];
   undefined8 *puVar5;
   plVar3 = *(long**)( param_1 + 0x30 );
   if (plVar3 == (long*)0x0) {
      return;
   }
   if (*(long*)( param_2 + 0x30 ) == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18);
      *(undefined8*)pauVar4[1] = 0;
      *(undefined1(**) [16])( param_2 + 0x30 ) = pauVar4;
      *pauVar4 = (undefined1[16])0x0;
      plVar3 = *(long**)( param_1 + 0x30 );
   }
   puVar2 = (undefined8*)*plVar3;
   if ((undefined8*)*plVar3 != (undefined8*)plVar3[1]) {
      do {
         while (true) {
            puVar5 = puVar2;
            pvVar1 = *(vector<Clipper2Lib::OutRec*,std::allocator<Clipper2Lib::OutRec*>>**)( param_2 + 0x30 );
            puVar2 = *(undefined8**)( pvVar1 + 8 );
            if (puVar2 != *(undefined8**)( pvVar1 + 0x10 )) break;
            std::vector<Clipper2Lib::OutRec*,std::allocator<Clipper2Lib::OutRec*>>::_M_realloc_insert<Clipper2Lib::OutRec*const&>(pvVar1, puVar2, puVar5);
            plVar3 = *(long**)( param_1 + 0x30 );
            puVar2 = puVar5 + 1;
            if ((undefined8*)plVar3[1] == puVar5 + 1) goto LAB_00101bb0;
         };
         *puVar2 = *puVar5;
         *(undefined8**)( pvVar1 + 8 ) = puVar2 + 1;
         puVar2 = puVar5 + 1;
      } while ( (undefined8*)plVar3[1] != puVar5 + 1 );
      LAB_00101bb0:if (puVar5 + 1 != (undefined8*)*plVar3) {
         plVar3[1] = *plVar3;
      }
   }
   return;
}/* Clipper2Lib::ClipperBase::NewOutRec() */long *__thiscallClipper2Lib::ClipperBase::NewOutRec(ClipperBase *this) {
   undefined8 *puVar1;
   long *plVar2;
   long lVar3;
   long *plVar4;
   long in_FS_OFFSET;
   byte bVar5;
   long *local_28;
   long local_20;
   bVar5 = 0;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar2 = (long*)operator_new(0x80);
   puVar1 = *(undefined8**)( this + 0xf0 );
   plVar4 = plVar2;
   for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *plVar4 = 0;
      plVar4 = plVar4 + (ulong)bVar5 * -2 + 1;
   }
   *plVar2 = (long)puVar1 - *(long*)( this + 0xe8 ) >> 3;
   local_28 = plVar2;
   if (puVar1 == *(undefined8**)( this + 0xf8 )) {
      std::vector<Clipper2Lib::OutRec*,std::allocator<Clipper2Lib::OutRec*>>::_M_realloc_insert<Clipper2Lib::OutRec*const&>((vector<Clipper2Lib::OutRec*,std::allocator<Clipper2Lib::OutRec*>>*)( this + 0xe8 ), puVar1, &local_28);
   } else {
      *puVar1 = plVar2;
      *(undefined8**)( this + 0xf0 ) = puVar1 + 1;
   }
   plVar2[1] = 0;
   *(undefined1*)( plVar2 + 0xf ) = 0;
   plVar2[6] = 0;
   *(undefined1(*) [16])( plVar2 + 4 ) = (undefined1[16])0x0;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return plVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Clipper2Lib::ClipperBase::AddLocalMinPoly(Clipper2Lib::Active&, Clipper2Lib::Active&,
   Clipper2Lib::Point<long> const&, bool) */void Clipper2Lib::ClipperBase::AddLocalMinPoly(ClipperBase *this, Active *param_1, Active *param_2, Point_conflict *param_3, bool param_4) {
   int iVar1;
   long lVar2;
   long lVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long lVar6;
   undefined8 *puVar7;
   long lVar8;
   Active *pAVar9;
   lVar6 = NewOutRec(this);
   *(long*)( param_1 + 0x40 ) = lVar6;
   *(long*)( param_2 + 0x40 ) = lVar6;
   pAVar9 = param_1;
   if (*(char*)( *(long*)( param_1 + 0x78 ) + 0xc ) == '\0') {
      for (lVar2 = *(long*)( param_1 + 0x48 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 0x48 )) {
         if (( *(char*)( *(long*)( lVar2 + 0x78 ) + 0xc ) == '\0' ) && ( *(long*)( lVar2 + 0x40 ) != 0 )) {
            lVar3 = *(long*)( lVar2 + 0x40 );
            if (this[0x21] == (ClipperBase)0x0) goto LAB_00101dbb;
            lVar8 = *(long*)( lVar3 + 8 );
            if (lVar8 != 0) goto LAB_00101ded;
            goto LAB_00101e31;
         }
      }
      *(undefined8*)( lVar6 + 8 ) = 0;
      if (param_4) goto LAB_00101d16;
   } else {
      iVar1 = *(int*)( param_1 + 0x30 );
      *(undefined8*)( lVar6 + 8 ) = 0;
      *(undefined1*)( lVar6 + 0x78 ) = 1;
      if (0 < iVar1) goto LAB_00101d16;
   }
   goto LAB_00101da0;
   while (true) {
      lVar8 = *(long*)( lVar8 + 8 );
      *(long*)( lVar3 + 8 ) = lVar8;
      if (lVar8 == 0) break;
      LAB_00101ded:if (*(long*)( lVar8 + 0x20 ) != 0) {
         if (lVar6 == lVar3) goto LAB_00101e23;
         lVar8 = *(long*)( lVar3 + 8 );
         if (lVar6 == lVar8) goto LAB_00101e1e;
         if (lVar8 == 0) goto LAB_00101e2b;
         goto LAB_00101e10;
      }
   };
   LAB_00101e31:if (lVar6 == lVar3) goto LAB_00101e23;
   goto LAB_00101e2b;
   while (lVar6 != lVar8) {
      LAB_00101e10:lVar8 = *(long*)( lVar8 + 8 );
      if (lVar8 == 0) goto LAB_00101e2b;
   };
   LAB_00101e1e:if (lVar8 != 0) {
      LAB_00101e23:*(undefined8*)( lVar3 + 8 ) = *(undefined8*)( lVar6 + 8 );
   }
   LAB_00101e2b:*(long*)( lVar6 + 8 ) = lVar3;
   LAB_00101dbb:if (param_4 == ( *(long*)( lVar3 + 0x10 ) == lVar2 )) {
      LAB_00101da0:pAVar9 = param_2;
      param_2 = param_1;
   }
   LAB_00101d16:*(Active**)( lVar6 + 0x10 ) = pAVar9;
   *(Active**)( lVar6 + 0x18 ) = param_2;
   puVar7 = (undefined8*)operator_new(0x30);
   uVar4 = *(undefined8*)param_3;
   uVar5 = *(undefined8*)( param_3 + 8 );
   puVar7[4] = lVar6;
   puVar7[5] = 0;
   *puVar7 = uVar4;
   puVar7[1] = uVar5;
   puVar7[2] = puVar7;
   puVar7[3] = puVar7;
   *(undefined8**)( lVar6 + 0x20 ) = puVar7;
   return;
}/* Clipper2Lib::ClipperBase::Split(Clipper2Lib::Active&, Clipper2Lib::Point<long> const&) */void Clipper2Lib::ClipperBase::Split(ClipperBase *this, Active *param_1, Point_conflict *param_2) {
   int iVar1;
   Active *pAVar2;
   iVar1 = *(int*)( param_1 + 0x84 );
   *(undefined4*)( param_1 + 0x84 ) = 0;
   if (iVar1 != 2) {
      pAVar2 = *(Active**)( param_1 + 0x48 );
      *(undefined4*)( pAVar2 + 0x84 ) = 0;
      AddLocalMinPoly(this, pAVar2, param_1, param_2, true);
      return;
   }
   pAVar2 = *(Active**)( param_1 + 0x50 );
   *(undefined4*)( pAVar2 + 0x84 ) = 0;
   AddLocalMinPoly(this, param_1, pAVar2, param_2, true);
   return;
}/* Clipper2Lib::ClipperBase::AddLocalMaxPoly(Clipper2Lib::Active&, Clipper2Lib::Active&,
   Clipper2Lib::Point<long> const&) */ulong Clipper2Lib::ClipperBase::AddLocalMaxPoly(ClipperBase *this, Active *param_1, Active *param_2, Point_conflict *param_3) {
   ClipperBase CVar1;
   long lVar2;
   long lVar3;
   Active *pAVar4;
   Active *pAVar5;
   undefined8 uVar6;
   ulong *puVar7;
   ulong uVar8;
   ulong uVar9;
   ulong *puVar10;
   ulong *puVar11;
   if (*(int*)( param_1 + 0x84 ) != 0) {
      Split(this, param_1, param_3);
   }
   if (*(int*)( param_2 + 0x84 ) != 0) {
      Split(this, param_2, param_3);
   }
   lVar2 = *(long*)( param_2 + 0x40 );
   lVar3 = *(long*)( param_1 + 0x40 );
   pAVar4 = *(Active**)( lVar2 + 0x10 );
   pAVar5 = *(Active**)( lVar3 + 0x10 );
   if (( param_2 == pAVar4 ) == ( param_1 == pAVar5 )) {
      if (( *(byte*)( *(long*)( param_1 + 0x70 ) + 0x20 ) & 3 ) == 0) {
         if (( *(byte*)( *(long*)( param_2 + 0x70 ) + 0x20 ) & 3 ) == 0) {
            this[0xe1] = (ClipperBase)0x0;
            return 0;
         }
         uVar6 = *(undefined8*)( *(long*)( lVar2 + 0x20 ) + 0x10 );
         *(undefined8*)( lVar2 + 0x10 ) = *(undefined8*)( lVar2 + 0x18 );
         *(Active**)( lVar2 + 0x18 ) = pAVar4;
         *(undefined8*)( lVar2 + 0x20 ) = uVar6;
      } else {
         uVar6 = *(undefined8*)( *(long*)( lVar3 + 0x20 ) + 0x10 );
         *(undefined8*)( lVar3 + 0x10 ) = *(undefined8*)( lVar3 + 0x18 );
         *(Active**)( lVar3 + 0x18 ) = pAVar5;
         *(undefined8*)( lVar3 + 0x20 ) = uVar6;
      }
   }
   uVar9 = AddOutPt(this, param_1, param_3);
   puVar7 = *(ulong**)( param_1 + 0x40 );
   if (puVar7 != *(ulong**)( param_2 + 0x40 )) {
      if (*(char*)( *(long*)( param_1 + 0x78 ) + 0xc ) == '\0') {
         if (*puVar7 < **(ulong**)( param_2 + 0x40 )) goto LAB_00101f90;
      } else if (*(int*)( param_1 + 0x30 ) < 0) {
         LAB_00101f90:JoinOutrecPaths(this, param_1, param_2);
         return uVar9;
      }
      JoinOutrecPaths(this, param_2, param_1);
      return uVar9;
   }
   CVar1 = this[0x21];
   puVar7[4] = uVar9;
   if (CVar1 == (ClipperBase)0x0) {
      puVar10 = (ulong*)puVar7[1];
      *(undefined8*)( puVar7[2] + 0x40 ) = 0;
      *(undefined8*)( puVar7[3] + 0x40 ) = 0;
      *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
      if (puVar10 == (ulong*)0x0) {
         return uVar9;
      }
      goto LAB_00102095;
   }
   lVar2 = *(long*)( param_1 + 0x48 );
   while (true) {
      if (lVar2 == 0) {
         puVar7[1] = 0;
         *(undefined8*)( puVar7[2] + 0x40 ) = 0;
         *(undefined8*)( puVar7[3] + 0x40 ) = 0;
         *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
         return uVar9;
      }
      if (( *(char*)( *(long*)( lVar2 + 0x78 ) + 0xc ) == '\0' ) && ( *(long*)( lVar2 + 0x40 ) != 0 )) break;
      lVar2 = *(long*)( lVar2 + 0x48 );
   };
   puVar10 = *(ulong**)( lVar2 + 0x40 );
   uVar8 = puVar10[1];
   while (uVar8 != 0) {
      if (*(long*)( uVar8 + 0x20 ) != 0) {
         if (puVar7 == puVar10) goto LAB_00102123;
         puVar11 = (ulong*)puVar10[1];
         if (puVar7 == puVar11) goto LAB_0010211e;
         if (puVar11 != (ulong*)0x0) goto LAB_00102110;
         goto LAB_0010212b;
      }
      uVar8 = *(ulong*)( uVar8 + 8 );
      puVar10[1] = uVar8;
   };
   if (puVar7 == puVar10) goto LAB_00102123;
   goto LAB_0010212b;
   while (puVar7 != puVar11) {
      LAB_00102110:puVar11 = (ulong*)puVar11[1];
      if (puVar11 == (ulong*)0x0) goto LAB_0010212b;
   };
   LAB_0010211e:if (puVar11 != (ulong*)0x0) {
      LAB_00102123:puVar10[1] = puVar7[1];
   }
   LAB_0010212b:puVar7[1] = (ulong)puVar10;
   *(undefined8*)( puVar7[2] + 0x40 ) = 0;
   *(undefined8*)( puVar7[3] + 0x40 ) = 0;
   *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
   LAB_00102095:if (puVar10[2] == 0) {
      do {
         if (puVar10[4] != 0) break;
         puVar10 = (ulong*)puVar10[1];
      } while ( puVar10 != (ulong*)0x0 );
      puVar7[1] = (ulong)puVar10;
   }
   return uVar9;
}/* Clipper2Lib::ClipperBase::StartOpenPath(Clipper2Lib::Active&, Clipper2Lib::Point<long> const&)
   [clone .isra.0] */void Clipper2Lib::ClipperBase::StartOpenPath(ClipperBase *this, Active *param_1, Point_conflict *param_2) {
   int iVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   Active *pAVar4;
   long lVar5;
   Active *pAVar6;
   undefined8 *puVar7;
   lVar5 = NewOutRec(this);
   iVar1 = *(int*)( param_1 + 0x30 );
   *(undefined1*)( lVar5 + 0x78 ) = 1;
   pAVar6 = (Active*)0x0;
   pAVar4 = param_1;
   if (iVar1 < 1) {
      pAVar6 = param_1;
      pAVar4 = (Active*)0x0;
   }
   *(Active**)( lVar5 + 0x10 ) = pAVar4;
   *(Active**)( lVar5 + 0x18 ) = pAVar6;
   *(long*)( param_1 + 0x40 ) = lVar5;
   puVar7 = (undefined8*)operator_new(0x30);
   uVar2 = *(undefined8*)param_2;
   uVar3 = *(undefined8*)( param_2 + 8 );
   puVar7[4] = lVar5;
   puVar7[5] = 0;
   *puVar7 = uVar2;
   puVar7[1] = uVar3;
   puVar7[2] = puVar7;
   puVar7[3] = puVar7;
   *(undefined8**)( lVar5 + 0x20 ) = puVar7;
   return;
}/* Clipper2Lib::ClipperBase::IntersectEdges(Clipper2Lib::Active&, Clipper2Lib::Active&,
   Clipper2Lib::Point<long> const&) */void Clipper2Lib::ClipperBase::IntersectEdges(ClipperBase *this, Active *param_1, Active *param_2, Point_conflict *param_3) {
   int iVar1;
   uint uVar2;
   long *plVar3;
   long lVar4;
   uint uVar5;
   uint uVar6;
   long lVar7;
   int iVar8;
   int iVar9;
   uint uVar10;
   Active *pAVar11;
   int iVar12;
   Active *pAVar13;
   if (this[0xe0] != (ClipperBase)0x0) {
      pAVar13 = param_2 + 0x78;
      if (*(char*)( *(long*)( param_1 + 0x78 ) + 0xc ) != '\0') {
         pAVar11 = param_2;
         param_2 = param_1;
         if (*(char*)( *(long*)pAVar13 + 0xc ) != '\0') {
            return;
         }
         LAB_0010223e:if (*(int*)( pAVar11 + 0x84 ) != 0) {
            Split(this, pAVar11, param_3);
         }
         iVar1 = *(int*)( pAVar11 + 0x34 );
         iVar9 = -iVar1;
         if (0 < iVar1) {
            iVar9 = iVar1;
         }
         if (iVar9 != 1) {
            return;
         }
         if (*(int*)( this + 8 ) == 2) {
            if (*(long*)( pAVar11 + 0x40 ) == 0) {
               return;
            }
         } else if (*(int*)( *(long*)( pAVar11 + 0x78 ) + 8 ) == 0) {
            return;
         }
         if (*(int*)( this + 0xc ) == 2) {
            if (iVar1 != 1) {
               return;
            }
         } else if (( *(int*)( this + 0xc ) == 3 ) && ( iVar1 != -1 )) {
            return;
         }
         if (*(long*)( param_2 + 0x40 ) != 0) {
            AddOutPt(this, param_2, param_3);
            lVar7 = *(long*)( param_2 + 0x40 );
            if (param_2 == *(Active**)( lVar7 + 0x10 )) {
               *(undefined8*)( lVar7 + 0x10 ) = 0;
            } else {
               *(undefined8*)( lVar7 + 0x18 ) = 0;
            }
            *(undefined8*)( param_2 + 0x40 ) = 0;
            return;
         }
         plVar3 = (long*)**(long**)( param_2 + 0x78 );
         if (( ( ( *plVar3 == *(long*)param_3 ) && ( plVar3[1] == *(long*)( param_3 + 8 ) ) ) && ( ( *(byte*)( plVar3 + 4 ) & 3 ) == 0 ) ) && ( ( lVar7 = FindEdgeWithMatchingLocMin(param_2) ),lVar7 != 0 && ( lVar4 = *(long*)( lVar7 + 0x40 ) ),lVar4 != 0 )) {
            *(long*)( param_2 + 0x40 ) = lVar4;
            if (0 < *(int*)( param_2 + 0x30 )) {
               *(Active**)( lVar4 + 0x10 ) = param_2;
               *(long*)( lVar4 + 0x18 ) = lVar7;
               return;
            }
            *(long*)( lVar4 + 0x10 ) = lVar7;
            *(Active**)( lVar4 + 0x18 ) = param_2;
            return;
         }
         StartOpenPath(this, param_2, param_3);
         return;
      }
      pAVar11 = param_1;
      if (*(char*)( *(long*)pAVar13 + 0xc ) != '\0') goto LAB_0010223e;
   }
   if (*(int*)( param_1 + 0x84 ) == 0) {
      iVar1 = *(int*)( param_2 + 0x84 );
   } else {
      Split(this, param_1, param_3);
      iVar1 = *(int*)( param_2 + 0x84 );
   }
   if (iVar1 != 0) {
      Split(this, param_2, param_3);
   }
   uVar2 = *(uint*)( this + 0xc );
   iVar1 = *(int*)( *(long*)( param_1 + 0x78 ) + 8 );
   iVar9 = *(int*)( *(long*)( param_2 + 0x78 ) + 8 );
   uVar6 = *(uint*)( param_1 + 0x34 );
   if (iVar1 == iVar9) {
      if (uVar2 != 0) {
         iVar8 = uVar6 + *(int*)( param_2 + 0x30 );
         if (uVar6 + *(int*)( param_2 + 0x30 ) == 0) {
            iVar8 = -uVar6;
         }
         *(int*)( param_1 + 0x34 ) = iVar8;
         iVar8 = *(int*)( param_2 + 0x34 );
         if (iVar8 == *(int*)( param_1 + 0x30 )) {
            uVar5 = -iVar8;
            *(uint*)( param_2 + 0x34 ) = uVar5;
            uVar10 = *(uint*)( param_1 + 0x34 );
         } else {
            uVar5 = iVar8 - *(int*)( param_1 + 0x30 );
            *(uint*)( param_2 + 0x34 ) = uVar5;
            uVar10 = *(uint*)( param_1 + 0x34 );
         }
         goto LAB_00102332;
      }
      *(undefined4*)( param_1 + 0x34 ) = *(undefined4*)( param_2 + 0x34 );
      *(uint*)( param_2 + 0x34 ) = uVar6;
      LAB_00102477:uVar5 = *(uint*)( param_1 + 0x34 );
      uVar10 = -uVar5;
      if (0 < (int)uVar5) {
         uVar10 = uVar5;
      }
      if ((int)uVar6 < 1) {
         uVar6 = -uVar6;
      }
   } else {
      uVar5 = *(uint*)( param_2 + 0x34 );
      if (uVar2 == 0) {
         *(uint*)( param_1 + 0x38 ) = ( uint )(*(int*)( param_1 + 0x38 ) == 0);
         *(uint*)( param_2 + 0x38 ) = ( uint )(*(int*)( param_2 + 0x38 ) == 0);
         uVar6 = uVar5;
         goto LAB_00102477;
      }
      *(int*)( param_1 + 0x38 ) = *(int*)( param_1 + 0x38 ) + *(int*)( param_2 + 0x30 );
      *(int*)( param_2 + 0x38 ) = *(int*)( param_2 + 0x38 ) - *(int*)( param_1 + 0x30 );
      uVar10 = uVar6;
      LAB_00102332:uVar6 = uVar5;
      if (uVar2 < 2) goto LAB_00102477;
      if (*(uint*)( this + 0x10 ) != uVar2) {
         uVar10 = -uVar10;
         uVar6 = -uVar5;
      }
   }
   lVar7 = *(long*)( param_1 + 0x40 );
   if (( 1 < uVar10 ) && ( lVar7 == 0 )) {
      return;
   }
   if (*(long*)( param_2 + 0x40 ) != 0) {
      pAVar13 = param_2;
      if (lVar7 != 0) {
         if (( 1 < ( uVar10 | uVar6 ) ) || ( ( iVar1 != iVar9 && ( *(int*)( this + 8 ) != 4 ) ) )) {
            AddLocalMaxPoly(this, param_1, param_2, param_3);
            return;
         }
         if (( *(Active**)( lVar7 + 0x10 ) == param_1 ) || ( lVar7 == *(long*)( param_2 + 0x40 ) )) {
            AddLocalMaxPoly(this, param_1, param_2, param_3);
            goto LAB_001025a4;
         }
         AddOutPt(this, param_1, param_3);
      }
      LAB_001024b4:AddOutPt(this, pAVar13, param_3);
      SwapOutrecs(param_1, param_2);
      return;
   }
   if (1 < uVar6) {
      return;
   }
   pAVar13 = param_1;
   if (lVar7 != 0) goto LAB_001024b4;
   iVar8 = *(int*)( param_1 + 0x38 );
   iVar12 = *(int*)( param_2 + 0x38 );
   if (uVar2 < 2) {
      if (iVar8 < 1) {
         iVar8 = -iVar8;
      }
      if (iVar12 < 1) {
         iVar12 = -iVar12;
      }
   } else if (*(uint*)( this + 0x10 ) != uVar2) {
      iVar8 = -iVar8;
      iVar12 = -iVar12;
   }
   if (iVar1 != iVar9) goto LAB_001025a4;
   if (uVar10 != 1) {
      return;
   }
   if (( uVar6 & 1 ) == 0) {
      return;
   }
   iVar9 = *(int*)( this + 8 );
   if (iVar9 == 3) {
      if (iVar1 != 1) {
         if (iVar1 != 0) {
            return;
         }
         LAB_001026af:if (0 < iVar8) {
            return;
         }
         if (0 < iVar12) {
            return;
         }
         goto LAB_001025a4;
      }
   } else {
      if (iVar9 == 4) goto LAB_001025a4;
      if (iVar9 == 2) goto LAB_001026af;
   }
   if (( iVar8 < 1 ) || ( iVar12 < 1 )) {
      return;
   }
   LAB_001025a4:AddLocalMinPoly(this, param_1, param_2, param_3, false);
   return;
}/* Clipper2Lib::ClipperBase::DoMaxima(Clipper2Lib::Active&) */Active * __thiscall Clipper2Lib::ClipperBase::DoMaxima(ClipperBase *this,Active *param_1){
   int iVar1;
   long lVar2;
   long lVar3;
   Active *pAVar4;
   Active *pAVar5;
   Active *pAVar6;
   lVar2 = *(long*)( param_1 + 0x48 );
   pAVar5 = *(Active**)( param_1 + 0x50 );
   pAVar4 = pAVar5;
   if (( *(byte*)( *(long*)( param_1 + 0x70 ) + 0x20 ) & 3 ) == 0) {
      for (; pAVar4 != (Active*)0x0; pAVar4 = *(Active**)( pAVar4 + 0x50 )) {
         if (*(long*)( param_1 + 0x70 ) == *(long*)( pAVar4 + 0x70 )) {
            if (*(int*)( param_1 + 0x84 ) == 0) {
               iVar1 = *(int*)( pAVar4 + 0x84 );
            } else {
               Split(this, param_1, (Point_conflict*)( param_1 + 0x10 ));
               iVar1 = *(int*)( pAVar4 + 0x84 );
            }
            if (iVar1 != 0) {
               Split(this, pAVar4, (Point_conflict*)( pAVar4 + 0x10 ));
            }
            while (pAVar6 = pAVar5,pAVar5 != pAVar4) {
               while (true) {
                  IntersectEdges(this, param_1, pAVar6, (Point_conflict*)( param_1 + 0x10 ));
                  pAVar5 = *(Active**)( pAVar6 + 0x50 );
                  if (pAVar5 != (Active*)0x0) {
                     *(Active**)( pAVar5 + 0x48 ) = param_1;
                  }
                  lVar3 = *(long*)( param_1 + 0x48 );
                  if (lVar3 != 0) {
                     *(Active**)( lVar3 + 0x50 ) = pAVar6;
                  }
                  *(long*)( pAVar6 + 0x48 ) = lVar3;
                  *(Active**)( pAVar6 + 0x50 ) = param_1;
                  *(Active**)( param_1 + 0x48 ) = pAVar6;
                  *(Active**)( param_1 + 0x50 ) = pAVar5;
                  if (*(long*)( pAVar6 + 0x48 ) != 0) break;
                  *(Active**)( this + 0x28 ) = pAVar6;
                  pAVar6 = pAVar5;
                  if (pAVar5 == pAVar4) goto LAB_001027c7;
               };
            };
            LAB_001027c7:if (*(char*)( *(long*)( param_1 + 0x78 ) + 0xc ) == '\0') {
               if (*(long*)( param_1 + 0x40 ) != 0) {
                  AddLocalMaxPoly(this, param_1, pAVar4, (Point_conflict*)( param_1 + 0x10 ));
               }
               DeleteFromAEL(this, param_1);
               DeleteFromAEL(this, pAVar4);
            } else {
               if (*(long*)( param_1 + 0x40 ) != 0) {
                  AddLocalMaxPoly(this, param_1, pAVar4, (Point_conflict*)( param_1 + 0x10 ));
               }
               DeleteFromAEL(this, pAVar4);
               DeleteFromAEL(this, param_1);
            }
            if (lVar2 != 0) {
               return *(Active**)( lVar2 + 0x50 );
            }
            return *(Active**)( this + 0x28 );
         }
      }
   } else {
      if (*(long*)( param_1 + 0x40 ) == 0) {
         if (*(long*)( param_1 + 0x18 ) == *(long*)( param_1 + 8 )) {
            return pAVar5;
         }
      } else {
         AddOutPt(this, param_1, (Point_conflict*)( param_1 + 0x10 ));
         if (*(long*)( param_1 + 8 ) == *(long*)( param_1 + 0x18 )) {
            return pAVar5;
         }
         lVar2 = *(long*)( param_1 + 0x40 );
         if (lVar2 != 0) {
            if (param_1 == *(Active**)( lVar2 + 0x10 )) {
               *(undefined8*)( lVar2 + 0x10 ) = 0;
            } else {
               *(undefined8*)( lVar2 + 0x18 ) = 0;
            }
            *(undefined8*)( param_1 + 0x40 ) = 0;
         }
      }
      DeleteFromAEL(this, param_1);
   }
   return pAVar5;
}/* Clipper2Lib::ClipperBase::ProcessHorzJoins() */void Clipper2Lib::ClipperBase::ProcessHorzJoins(ClipperBase *this) {
   long *plVar1;
   ClipperBase CVar2;
   long *plVar3;
   long lVar4;
   char cVar5;
   OutRec *pOVar6;
   long lVar7;
   OutRec *pOVar8;
   long lVar9;
   long lVar10;
   vector<Clipper2Lib::OutRec*,std::allocator<Clipper2Lib::OutRec*>> *pvVar11;
   OutRec *pOVar12;
   long *plVar13;
   undefined8 *puVar14;
   long in_FS_OFFSET;
   OutRec *local_48;
   long local_40;
   plVar3 = *(long**)( this + 200 );
   plVar13 = *(long**)( this + 0xc0 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   joined_r0x00102953:if (plVar3 == plVar13) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   lVar7 = *plVar13;
   lVar4 = plVar13[1];
   lVar9 = *(long*)( lVar7 + 0x10 );
   lVar10 = *(long*)( lVar4 + 0x18 );
   pOVar6 = *(OutRec**)( lVar4 + 0x20 );
   for (pOVar12 = *(OutRec**)( lVar7 + 0x20 ); pOVar12 != (OutRec*)0x0; pOVar12 = *(OutRec**)( pOVar12 + 8 )) {
      if (*(long*)( pOVar12 + 0x20 ) != 0) {
         if (pOVar6 != (OutRec*)0x0) goto LAB_001029b9;
         *(long*)( lVar7 + 0x10 ) = lVar4;
         local_48 = (OutRec*)0x0;
         *(long*)( lVar4 + 0x18 ) = lVar7;
         *(long*)( lVar9 + 0x18 ) = lVar10;
         *(long*)( lVar10 + 0x10 ) = lVar9;
         goto LAB_001029da;
      }
   }
   if (pOVar6 != (OutRec*)0x0) {
      LAB_001029b9:do {
         if (*(long*)( pOVar6 + 0x20 ) != 0) break;
         pOVar6 = *(OutRec**)( pOVar6 + 8 );
      } while ( pOVar6 != (OutRec*)0x0 );
      *(long*)( lVar7 + 0x10 ) = lVar4;
      *(long*)( lVar4 + 0x18 ) = lVar7;
      *(long*)( lVar9 + 0x18 ) = lVar10;
      *(long*)( lVar10 + 0x10 ) = lVar9;
      local_48 = pOVar6;
      if (pOVar6 == pOVar12) goto LAB_00102a40;
      LAB_001029da:CVar2 = this[0x21];
      *(undefined8*)( pOVar6 + 0x20 ) = 0;
      if (CVar2 == (ClipperBase)0x0) {
         *(OutRec**)( pOVar6 + 8 ) = pOVar12;
         goto LAB_001029f1;
      }
      lVar7 = *(long*)( pOVar12 + 8 );
      while (lVar7 != 0) {
         if (*(long*)( lVar7 + 0x20 ) != 0) {
            pOVar8 = *(OutRec**)( pOVar12 + 8 );
            if (pOVar8 == pOVar6) goto LAB_00102af0;
            if (pOVar8 != (OutRec*)0x0) goto LAB_00102acd;
            break;
         }
         lVar7 = *(long*)( lVar7 + 8 );
         *(long*)( pOVar12 + 8 ) = lVar7;
      };
      goto LAB_00102ad6;
   }
   *(long*)( lVar7 + 0x10 ) = lVar4;
   pOVar12 = (OutRec*)0x0;
   *(long*)( lVar4 + 0x18 ) = lVar7;
   *(long*)( lVar9 + 0x18 ) = lVar10;
   *(long*)( lVar10 + 0x10 ) = lVar9;
   LAB_00102a40:pOVar6 = (OutRec*)NewOutRec(this);
   *(long*)( pOVar6 + 0x20 ) = lVar9;
   lVar7 = lVar9;
   do {
      *(OutRec**)( lVar7 + 0x20 ) = pOVar6;
      lVar7 = *(long*)( lVar7 + 0x10 );
   } while ( lVar7 != lVar9 );
   local_48 = pOVar6;
   if (pOVar6 == *(OutRec**)( *(long*)( pOVar12 + 0x20 ) + 0x20 )) {
      lVar7 = *plVar13;
      CVar2 = this[0x21];
      *(long*)( pOVar12 + 0x20 ) = lVar7;
      *(OutRec**)( lVar7 + 0x20 ) = pOVar12;
      if (CVar2 != (ClipperBase)0x0) goto LAB_00102b2c;
      LAB_00102a86:*(OutRec**)( pOVar6 + 8 ) = pOVar12;
   } else {
      if (this[0x21] == (ClipperBase)0x0) goto LAB_00102a86;
      LAB_00102b2c:cVar5 = Path1InsidePath2(*(OutPt**)( pOVar12 + 0x20 ), *(OutPt**)( pOVar6 + 0x20 ));
      pOVar8 = pOVar12;
      if (cVar5 == '\0') {
         cVar5 = Path1InsidePath2(*(OutPt**)( pOVar6 + 0x20 ), *(OutPt**)( pOVar12 + 0x20 ));
         if (cVar5 == '\0') {
            pOVar8 = *(OutRec**)( pOVar12 + 8 );
         }
      } else {
         lVar7 = *(long*)( pOVar12 + 0x20 );
         *(undefined8*)( pOVar12 + 0x20 ) = *(undefined8*)( pOVar6 + 0x20 );
         *(long*)( pOVar6 + 0x20 ) = lVar7;
         lVar4 = *(long*)( pOVar12 + 0x20 );
         lVar9 = lVar4;
         do {
            *(OutRec**)( lVar9 + 0x20 ) = pOVar12;
            lVar9 = *(long*)( lVar9 + 0x10 );
            lVar10 = lVar7;
         } while ( lVar4 != lVar9 );
         do {
            *(OutRec**)( lVar10 + 0x20 ) = pOVar6;
            plVar1 = (long*)( lVar10 + 0x10 );
            lVar10 = *plVar1;
         } while ( lVar7 != *plVar1 );
      }
      pvVar11 = *(vector<Clipper2Lib::OutRec*,std::allocator<Clipper2Lib::OutRec*>>**)( pOVar12 + 0x30 );
      *(OutRec**)( pOVar6 + 8 ) = pOVar8;
      if (pvVar11 == (vector<Clipper2Lib::OutRec*,std::allocator<Clipper2Lib::OutRec*>>*)0x0) {
         pvVar11 = (vector<Clipper2Lib::OutRec*,std::allocator<Clipper2Lib::OutRec*>>*)operator_new(0x18);
         *(undefined8*)( pvVar11 + 0x10 ) = 0;
         *(undefined1(*) [16])pvVar11 = (undefined1[16])0x0;
         *(vector<Clipper2Lib::OutRec*,std::allocator<Clipper2Lib::OutRec*>>**)( pOVar12 + 0x30 ) = pvVar11;
         puVar14 = (undefined8*)0x0;
      } else {
         puVar14 = *(undefined8**)( pvVar11 + 8 );
         if (puVar14 != *(undefined8**)( pvVar11 + 0x10 )) {
            *puVar14 = pOVar6;
            *(undefined8**)( pvVar11 + 8 ) = puVar14 + 1;
            goto LAB_001029f1;
         }
      }
      std::vector<Clipper2Lib::OutRec*,std::allocator<Clipper2Lib::OutRec*>>::_M_realloc_insert<Clipper2Lib::OutRec*const&>(pvVar11, puVar14, &local_48);
   }
   goto LAB_001029f1;
   while (pOVar6 != pOVar8) {
      LAB_00102acd:pOVar8 = *(OutRec**)( pOVar8 + 8 );
      if (pOVar8 == (OutRec*)0x0) goto LAB_00102ad6;
   };
   LAB_00102af0:if (pOVar8 == (OutRec*)0x0) {
      LAB_00102ad6:*(OutRec**)( pOVar6 + 8 ) = pOVar12;
      MoveSplits(pOVar6, pOVar12);
   } else {
      *(undefined8*)( pOVar12 + 8 ) = *(undefined8*)( pOVar6 + 8 );
      *(OutRec**)( pOVar6 + 8 ) = pOVar12;
      MoveSplits(pOVar6, pOVar12);
   }
   LAB_001029f1:plVar13 = plVar13 + 2;
   goto joined_r0x00102953;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Clipper2Lib::ClipperBase::DoSplitOp(Clipper2Lib::OutRec*, Clipper2Lib::OutPt*) */void Clipper2Lib::ClipperBase::DoSplitOp(ClipperBase *this, OutRec *param_1, OutPt *param_2) {
   ClipperBase CVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   undefined8 uVar6;
   bool bVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   char cVar12;
   OutPt *pOVar13;
   long lVar14;
   OutPt *pOVar15;
   vector<Clipper2Lib::OutRec*,std::allocator<Clipper2Lib::OutRec*>> *pvVar16;
   OutPt *pOVar17;
   OutPt *pOVar18;
   long *plVar19;
   long lVar20;
   long lVar21;
   long in_FS_OFFSET;
   double dVar22;
   long lVar23;
   long lVar24;
   double dVar25;
   double dVar26;
   double dVar27;
   double dVar28;
   OutRec *local_50;
   long local_48;
   long local_40;
   pOVar18 = *(OutPt**)( param_2 + 0x18 );
   lVar8 = *(long*)param_2;
   lVar9 = *(long*)( param_2 + 8 );
   lVar2 = *(long*)param_2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar19 = *(long**)( param_2 + 0x10 );
   pOVar15 = (OutPt*)plVar19[2];
   lVar14 = *plVar19;
   *(OutPt**)( param_1 + 0x20 ) = pOVar18;
   lVar3 = plVar19[1];
   lVar10 = *(long*)pOVar18;
   lVar11 = *(long*)( pOVar18 + 8 );
   lVar4 = *(long*)pOVar18;
   lVar5 = *(long*)( pOVar18 + 8 );
   dVar28 = (double)( lVar2 - lVar4 );
   dVar27 = (double)( *(long*)( param_2 + 8 ) - lVar5 );
   dVar25 = (double)( *(long*)pOVar15 - lVar14 );
   dVar26 = (double)( *(long*)( pOVar15 + 8 ) - lVar3 );
   dVar22 = dVar27 * dVar25 - dVar28 * dVar26;
   if (dVar22 == 0.0) {
      lVar20 = 0;
      lVar21 = 0;
      lVar23 = 0;
      lVar24 = 0;
   } else {
      dVar22 = ( (double)( lVar10 - lVar14 ) * dVar26 - dVar25 * (double)( lVar11 - lVar3 ) ) / dVar22;
      lVar20 = lVar5;
      lVar21 = lVar4;
      lVar23 = lVar10;
      lVar24 = lVar11;
      if (( 0.0 < dVar22 ) && ( lVar20 = *(long*)( param_2 + 8 ) ),lVar21 = lVar2,lVar23 = lVar8,lVar24 = lVar9,dVar22 < _LC1) {
         lVar21 = (long)( (double)lVar4 + dVar28 * dVar22 );
         lVar20 = (long)( (double)lVar5 + dVar27 * dVar22 );
         lVar23 = lVar21;
         lVar24 = lVar20;
      }
   }
   plVar19 = *(long**)( pOVar18 + 0x18 );
   dVar22 = (double)( *plVar19 - lVar10 ) * (double)( lVar11 + plVar19[1] ) + 0.0;
   for (pOVar13 = *(OutPt**)( pOVar18 + 0x10 ); pOVar13 != pOVar18; pOVar13 = *(OutPt**)( pOVar13 + 0x10 )) {
      dVar22 = dVar22 + (double)( *(long*)( pOVar13 + 8 ) + ( *(long**)( pOVar13 + 0x18 ) )[1] ) * (double)( **(long**)( pOVar13 + 0x18 ) - *(long*)pOVar13 );
   }
   dVar22 = dVar22 * __LC3;
   dVar25 = (double)( (ulong)dVar22 & _LC8 );
   local_50 = param_1;
   if (dVar25 < _LC9) {
      plVar19[2] = 0;
      do {
         pOVar15 = *(OutPt**)( pOVar18 + 0x10 );
         operator_delete(pOVar18, 0x30);
         pOVar18 = pOVar15;
      } while ( pOVar15 != (OutPt*)0x0 );
      *(undefined8*)( param_1 + 0x20 ) = 0;
   } else {
      dVar26 = (double)( lVar24 + lVar3 ) * (double)( lVar14 - lVar23 ) + (double)( lVar24 + lVar9 ) * (double)( lVar23 - lVar8 ) + (double)( lVar9 + lVar3 ) * (double)( lVar8 - lVar14 );
      dVar27 = (double)( _LC8 & (ulong)dVar26 );
      pOVar13 = pOVar15;
      pOVar17 = pOVar18;
      if (( ( lVar5 != lVar20 ) || ( lVar4 != lVar21 ) ) && ( ( *(long*)pOVar15 != lVar21 || ( *(long*)( pOVar15 + 8 ) != lVar20 ) ) )) {
         pOVar13 = (OutPt*)operator_new(0x30);
         uVar6 = *(undefined8*)( pOVar18 + 0x20 );
         *(undefined8*)( pOVar13 + 0x28 ) = 0;
         *(long*)pOVar13 = lVar23;
         *(long*)( pOVar13 + 8 ) = lVar24;
         *(undefined8*)( pOVar13 + 0x20 ) = uVar6;
         *(OutPt**)( pOVar13 + 0x10 ) = pOVar15;
         *(OutPt**)( pOVar13 + 0x18 ) = pOVar18;
         pOVar17 = pOVar13;
      }
      bVar7 = dVar27 < _LC1;
      *(OutPt**)( pOVar15 + 0x18 ) = pOVar17;
      *(OutPt**)( pOVar18 + 0x10 ) = pOVar13;
      if (( bVar7 ) || ( ( dVar27 <= dVar25 && ( 0.0 < dVar26 != 0.0 < dVar22 ) ) )) {
         if (*(void**)( param_2 + 0x10 ) != (void*)0x0) {
            operator_delete(*(void**)( param_2 + 0x10 ), 0x30);
         }
         operator_delete(param_2, 0x30);
      } else {
         lVar14 = NewOutRec(this);
         *(undefined8*)( lVar14 + 8 ) = *(undefined8*)( param_1 + 8 );
         *(long*)( param_2 + 0x20 ) = lVar14;
         *(long*)( *(long*)( param_2 + 0x10 ) + 0x20 ) = lVar14;
         local_48 = lVar14;
         pOVar15 = (OutPt*)operator_new(0x30);
         CVar1 = this[0x21];
         *(long*)( pOVar15 + 0x20 ) = lVar14;
         *(undefined8*)( pOVar15 + 0x28 ) = 0;
         *(long*)pOVar15 = lVar23;
         *(long*)( pOVar15 + 8 ) = lVar24;
         lVar2 = *(long*)( param_2 + 0x10 );
         *(OutPt**)( pOVar15 + 0x10 ) = param_2;
         *(long*)( pOVar15 + 0x18 ) = lVar2;
         *(OutPt**)( lVar14 + 0x20 ) = pOVar15;
         *(OutPt**)( param_2 + 0x18 ) = pOVar15;
         *(OutPt**)( lVar2 + 0x10 ) = pOVar15;
         if (CVar1 != (ClipperBase)0x0) {
            cVar12 = Path1InsidePath2(pOVar18, pOVar15);
            if (cVar12 == '\0') {
               pvVar16 = *(vector<Clipper2Lib::OutRec*,std::allocator<Clipper2Lib::OutRec*>>**)( param_1 + 0x30 );
               if (pvVar16 == (vector<Clipper2Lib::OutRec*,std::allocator<Clipper2Lib::OutRec*>>*)0x0) {
                  pvVar16 = (vector<Clipper2Lib::OutRec*,std::allocator<Clipper2Lib::OutRec*>>*)operator_new(0x18);
                  *(undefined8*)( pvVar16 + 0x10 ) = 0;
                  *(vector<Clipper2Lib::OutRec*,std::allocator<Clipper2Lib::OutRec*>>**)( param_1 + 0x30 ) = pvVar16;
                  *(undefined1(*) [16])pvVar16 = (undefined1[16])0x0;
                  plVar19 = (long*)0x0;
               } else {
                  plVar19 = *(long**)( pvVar16 + 8 );
                  if (plVar19 != *(long**)( pvVar16 + 0x10 )) {
                     *plVar19 = lVar14;
                     *(long**)( pvVar16 + 8 ) = plVar19 + 1;
                     goto LAB_00102f46;
                  }
               }
               std::vector<Clipper2Lib::OutRec*,std::allocator<Clipper2Lib::OutRec*>>::_M_realloc_insert<Clipper2Lib::OutRec*const&>(pvVar16, plVar19, &local_48);
            } else {
               pvVar16 = (vector<Clipper2Lib::OutRec*,std::allocator<Clipper2Lib::OutRec*>>*)operator_new(0x18);
               *(undefined8*)( pvVar16 + 0x10 ) = 0;
               *(undefined1(*) [16])pvVar16 = (undefined1[16])0x0;
               *(vector<Clipper2Lib::OutRec*,std::allocator<Clipper2Lib::OutRec*>>**)( lVar14 + 0x30 ) = pvVar16;
               std::vector<Clipper2Lib::OutRec*,std::allocator<Clipper2Lib::OutRec*>>::_M_realloc_insert<Clipper2Lib::OutRec*const&>(pvVar16, 0, &local_50);
            }
         }
      }
   }
   LAB_00102f46:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* Clipper2Lib::ClipperBase::FixSelfIntersects(Clipper2Lib::OutRec*) */void Clipper2Lib::ClipperBase::FixSelfIntersects(ClipperBase *this, OutRec *param_1) {
   Point_conflict *pPVar1;
   Point_conflict *pPVar2;
   Point_conflict *pPVar3;
   Point_conflict *pPVar4;
   int iVar5;
   undefined8 *puVar6;
   Point_conflict *extraout_RDX;
   OutPt *pOVar7;
   undefined8 *puVar8;
   OutPt *pOVar9;
   OutPt *pOVar10;
   double dVar11;
   double dVar12;
   double dVar13;
   double dVar14;
   pOVar7 = *(OutPt**)( param_1 + 0x20 );
   pOVar9 = *(OutPt**)( pOVar7 + 0x10 );
   puVar8 = *(undefined8**)( pOVar7 + 0x18 );
   puVar6 = *(undefined8**)( pOVar9 + 0x10 );
   if (puVar6 == puVar8) {
      return;
   }
   dVar14 = 0.0;
   pOVar10 = pOVar7;
   do {
      pPVar1 = (Point_conflict*)puVar6[1];
      pPVar2 = *(Point_conflict**)( pOVar9 + 8 );
      pPVar3 = (Point_conflict*)*puVar6;
      pPVar4 = *(Point_conflict**)pOVar9;
      dVar13 = (double)( (long)pPVar1 - (long)pPVar2 );
      dVar12 = (double)( (long)pPVar3 - (long)pPVar4 );
      dVar11 = (double)( (long)pPVar4 - (long)*puVar8 ) * dVar13 - (double)( (long)pPVar2 - puVar8[1] ) * dVar12;
      if (NAN(dVar11) || NAN(dVar14)) {
         LAB_00103216:iVar5 = -1;
      } else if (dVar11 == dVar14) {
         iVar5 = 0;
      } else {
         iVar5 = 1;
         if (dVar11 <= dVar14) goto LAB_00103216;
      }
      dVar11 = (double)( (long)pPVar4 - *(long*)pOVar7 ) * dVar13 - (double)( (long)pPVar2 - *(long*)( pOVar7 + 8 ) ) * dVar12;
      if (NAN(dVar11) || NAN(dVar14)) {
         LAB_00103310:if (iVar5 != 1) goto LAB_00103320;
         LAB_00103264:dVar11 = CrossProduct<long>(pPVar4, pPVar2, (Point_conflict*)*puVar8);
         if (NAN(dVar11) || NAN(dVar14)) {
            LAB_00103360:iVar5 = -1;
         } else if (dVar11 == dVar14) {
            iVar5 = 0;
         } else {
            iVar5 = 1;
            if (dVar11 <= dVar14) goto LAB_00103360;
         }
         dVar11 = CrossProduct<long>(pPVar3, pPVar1, extraout_RDX);
         if (NAN(dVar11) || NAN(dVar14)) {
            LAB_00103350:iVar5 = -iVar5;
         } else {
            if (dVar11 == dVar14) goto LAB_00103320;
            if (dVar11 <= dVar14) goto LAB_00103350;
         }
         if (iVar5 != -1) goto LAB_00103320;
         if (( pOVar10 == pOVar7 ) || ( pOVar10 == pOVar9 )) {
            *(undefined8*)( param_1 + 0x20 ) = *(undefined8*)( pOVar10 + 0x18 );
         }
         DoSplitOp(this, param_1, pOVar7);
         pOVar7 = *(OutPt**)( param_1 + 0x20 );
         dVar14 = 0.0;
         pOVar10 = pOVar7;
         if (pOVar7 == (OutPt*)0x0) {
            return;
         }
      } else {
         if (dVar11 != dVar14) {
            if (dVar11 <= dVar14) goto LAB_00103310;
            if (iVar5 != -1) goto LAB_00103320;
            goto LAB_00103264;
         }
         LAB_00103320:pOVar7 = pOVar9;
         if (pOVar10 == pOVar7) {
            return;
         }
      }
      pOVar9 = *(OutPt**)( pOVar7 + 0x10 );
      puVar8 = *(undefined8**)( pOVar7 + 0x18 );
      puVar6 = *(undefined8**)( pOVar9 + 0x10 );
      if (puVar8 == puVar6) {
         return;
      }
   } while ( true );
}/* Clipper2Lib::ClipperBase::CleanCollinear(Clipper2Lib::OutRec*) */void Clipper2Lib::ClipperBase::CleanCollinear(ClipperBase *this, OutRec *param_1) {
   ulong uVar1;
   OutPt *pOVar2;
   long lVar3;
   long lVar4;
   void *pvVar5;
   code *pcVar6;
   char cVar7;
   ulong uVar8;
   ulong uVar9;
   ulong uVar10;
   ulong uVar11;
   ulong uVar12;
   void *pvVar13;
   ulong uVar14;
   ulong uVar15;
   ulong uVar16;
   ulong uVar17;
   ulong uVar18;
   ulong uVar19;
   ulong uVar20;
   ulong uVar21;
   OutPt *pOVar22;
   OutPt *pOVar23;
   long local_98;
   long local_90;
   OutPt *local_78;
   OutPt *local_40;
   if (param_1 != (OutRec*)0x0) {
      do {
         if (*(long*)( param_1 + 0x20 ) != 0) {
            if (param_1[0x78] != (OutRec)0x0) {
               return;
            }
            local_78 = *(OutPt**)( param_1 + 0x20 );
            if (local_78 != (OutPt*)0x0) {
               pOVar2 = *(OutPt**)( local_78 + 0x10 );
               pOVar22 = *(OutPt**)( local_78 + 0x18 );
               if (( ( local_78 == pOVar2 ) || ( pOVar2 == pOVar22 ) ) || ( cVar7 = IsVerySmallTriangle(local_78) ),cVar7 != '\0') {
                  *(undefined8*)( pOVar22 + 0x10 ) = 0;
                  do {
                     pOVar2 = *(OutPt**)( local_78 + 0x10 );
                     operator_delete(local_78, 0x30);
                     local_78 = pOVar2;
                  } while ( pOVar2 != (OutPt*)0x0 );
               } else {
                  local_98 = *(long*)local_78;
                  local_90 = *(long*)( local_78 + 8 );
                  local_40 = local_78;
                  while (true) {
                     while (true) {
                        pOVar23 = pOVar2;
                        lVar3 = *(long*)( pOVar23 + 8 );
                        lVar4 = *(long*)pOVar23;
                        uVar14 = local_98 - *(long*)pOVar22;
                        uVar11 = lVar3 - local_90;
                        uVar12 = local_90 - *(long*)( pOVar22 + 8 );
                        uVar8 = lVar4 - local_98;
                        uVar18 = -uVar14;
                        if (0 < (long)uVar14) {
                           uVar18 = uVar14;
                        }
                        uVar16 = -uVar11;
                        if (0 < (long)uVar11) {
                           uVar16 = uVar11;
                        }
                        uVar19 = -uVar12;
                        if (0 < (long)uVar12) {
                           uVar19 = uVar12;
                        }
                        uVar17 = -uVar8;
                        if (0 < (long)uVar8) {
                           uVar17 = uVar8;
                        }
                        uVar21 = ( uVar18 & 0xffffffff ) * ( uVar16 & 0xffffffff );
                        uVar9 = ( uVar16 & 0xffffffff ) * ( uVar18 >> 0x20 ) + ( uVar21 >> 0x20 );
                        uVar1 = ( uVar18 & 0xffffffff ) * ( uVar16 >> 0x20 ) + ( uVar9 & 0xffffffff );
                        uVar20 = ( uVar19 & 0xffffffff ) * ( uVar17 & 0xffffffff );
                        uVar10 = ( uVar17 & 0xffffffff ) * ( uVar19 >> 0x20 ) + ( uVar20 >> 0x20 );
                        uVar15 = ( uVar19 & 0xffffffff ) * ( uVar17 >> 0x20 ) + ( uVar10 & 0xffffffff );
                        if (( ( ( uVar10 >> 0x20 ) + ( uVar17 >> 0x20 ) * ( uVar19 >> 0x20 ) + ( uVar15 >> 0x20 ) == ( uVar9 >> 0x20 ) + ( uVar16 >> 0x20 ) * ( uVar18 >> 0x20 ) + ( uVar1 >> 0x20 ) && ( uVar20 & 0xffffffff | uVar15 << 0x20 ) == ( uVar1 << 0x20 | uVar21 & 0xffffffff ) ) && ( ( ( uint )(0 < (long)uVar14) + (int)( (long)uVar14 >> 0x3f ) ) * ( ( uint )(0 < (long)uVar11) + (int)( (long)uVar11 >> 0x3f ) ) == ( ( uint )(0 < (long)uVar12) + (int)( (long)uVar12 >> 0x3f ) ) * ( ( uint )(0 < (long)uVar8) + (int)( (long)uVar8 >> 0x3f ) ) ) ) && ( ( ( ( *(long*)pOVar22 == local_98 && ( *(long*)( pOVar22 + 8 ) == local_90 ) ) || ( ( ( lVar3 == local_90 && ( lVar4 == local_98 ) ) || ( this[0xd8] == (ClipperBase)0x0 ) ) ) ) || ( (double)(long)uVar14 * (double)(long)uVar8 + (double)(long)uVar12 * (double)(long)uVar11 < 0.0 ) ) )) break;
                        if (local_40 == pOVar23) {
                           FixSelfIntersects(this, param_1);
                           return;
                        }
                        pOVar22 = *(OutPt**)( pOVar23 + 0x18 );
                        pOVar2 = *(OutPt**)( pOVar23 + 0x10 );
                        local_98 = lVar4;
                        local_90 = lVar3;
                        local_78 = pOVar23;
                     };
                     if (*(OutPt**)( param_1 + 0x20 ) == local_78) {
                        *(OutPt**)( param_1 + 0x20 ) = pOVar22;
                     }
                     *(OutPt**)( pOVar22 + 0x10 ) = pOVar23;
                     *(OutPt**)( pOVar23 + 0x18 ) = pOVar22;
                     operator_delete(local_78, 0x30);
                     pOVar2 = *(OutPt**)( pOVar23 + 0x10 );
                     if (( ( pOVar2 == pOVar23 ) || ( pOVar22 = *(OutPt**)( pOVar23 + 0x18 ) ),pOVar2 == pOVar22 )) break;
                     local_98 = *(long*)pOVar23;
                     local_90 = *(long*)( pOVar23 + 8 );
                     local_78 = pOVar23;
                     local_40 = pOVar23;
                  };
                  pvVar13 = *(void**)( param_1 + 0x20 );
                  *(undefined8*)( *(long*)( (long)pvVar13 + 0x18 ) + 0x10 ) = 0;
                  do {
                     pvVar5 = *(void**)( (long)pvVar13 + 0x10 );
                     operator_delete(pvVar13, 0x30);
                     pvVar13 = pvVar5;
                  } while ( pvVar5 != (void*)0x0 );
               }
               *(undefined8*)( param_1 + 0x20 ) = 0;
               return;
            }
            /* WARNING: Does not return */
            pcVar6 = (code*)invalidInstructionException();
            ( *pcVar6 )();
         }
         param_1 = *(OutRec**)( param_1 + 8 );
      } while ( param_1 != (OutRec*)0x0 );
   }
   return;
}/* Clipper2Lib::BuildPath64(Clipper2Lib::OutPt*, bool, bool, std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >&) */ulong Clipper2Lib::BuildPath64(OutPt *param_1, bool param_2, bool param_3, vector *param_4) {
   OutPt *pOVar1;
   long *plVar2;
   uint uVar3;
   ulong uVar4;
   undefined7 in_register_00000011;
   OutPt *pOVar5;
   long in_FS_OFFSET;
   long local_58;
   long lStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != (OutPt*)0x0) {
      uVar4 = CONCAT71(in_register_00000011, param_3) & 0xffffffff;
      pOVar1 = *(OutPt**)( param_1 + 0x10 );
      if (( pOVar1 != param_1 ) && ( ( (char)uVar4 != '\0' || ( pOVar1 != *(OutPt**)( param_1 + 0x18 ) ) ) )) {
         plVar2 = *(long**)param_4;
         if (*(long**)( param_4 + 8 ) != plVar2) {
            *(long**)( param_4 + 8 ) = plVar2;
         }
         if (param_2) {
            local_58 = *(long*)param_1;
            lStack_50 = *(long*)( param_1 + 8 );
            pOVar5 = *(OutPt**)( param_1 + 0x18 );
            if (plVar2 != *(long**)( param_4 + 0x10 )) goto LAB_00103803;
            LAB_00103899:std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::_M_realloc_insert<Clipper2Lib::Point<long>const&>((vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>*)param_4, plVar2, &local_58);
         } else {
            local_58 = *(long*)pOVar1;
            lStack_50 = *(long*)( pOVar1 + 8 );
            pOVar5 = *(OutPt**)( pOVar1 + 0x10 );
            param_1 = pOVar1;
            if (plVar2 == *(long**)( param_4 + 0x10 )) goto LAB_00103899;
            LAB_00103803:*plVar2 = local_58;
            plVar2[1] = lStack_50;
            *(long**)( param_4 + 8 ) = plVar2 + 2;
         }
         while (param_1 != pOVar5) {
            if (( local_58 != *(long*)pOVar5 ) || ( *(long*)( pOVar5 + 8 ) != lStack_50 )) {
               local_58 = *(long*)pOVar5;
               lStack_50 = *(long*)( pOVar5 + 8 );
               plVar2 = *(long**)( param_4 + 8 );
               if (plVar2 == *(long**)( param_4 + 0x10 )) {
                  std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::_M_realloc_insert<Clipper2Lib::Point<long>const&>((vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>*)param_4, plVar2, &local_58);
               } else {
                  *plVar2 = local_58;
                  plVar2[1] = lStack_50;
                  *(long**)( param_4 + 8 ) = plVar2 + 2;
               }
            }
            pOVar1 = pOVar5 + 0x18;
            pOVar5 = *(OutPt**)( pOVar5 + 0x10 );
            if (param_2) {
               pOVar5 = *(OutPt**)pOVar1;
            }
         };
         if (( (char)uVar4 == '\0' ) && ( uVar4 = 1 * (long*)( param_4 + 8 ) - *(long*)param_4 == 0x30 )) {
            uVar3 = IsVerySmallTriangle(pOVar5);
            uVar4 = ( ulong )(uVar3 ^ 1);
         }
         goto LAB_001038b2;
      }
   }
   uVar4 = 0;
   LAB_001038b2:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar4;
}/* Clipper2Lib::ClipperBase::CheckBounds(Clipper2Lib::OutRec*) */undefined8 Clipper2Lib::ClipperBase::CheckBounds(ClipperBase *this, OutRec *param_1) {
   long lVar1;
   char cVar2;
   long *plVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   if (*(long*)( param_1 + 0x20 ) == 0) {
      return 0;
   }
   if (( *(long*)( param_1 + 0x58 ) <= *(long*)( param_1 + 0x48 ) ) || ( *(long*)( param_1 + 0x50 ) <= *(long*)( param_1 + 0x40 ) )) {
      CleanCollinear(this, param_1);
      if (( *(OutPt**)( param_1 + 0x20 ) == (OutPt*)0x0 ) || ( cVar2 = BuildPath64(*(OutPt**)( param_1 + 0x20 ), (bool)this[0xd9], false, (vector*)( param_1 + 0x60 )) ),cVar2 == '\0') {
         return 0;
      }
      lVar4 = -0x8000000000000000;
      lVar5 = 0x7fffffffffffffff;
      lVar6 = -0x8000000000000000;
      lVar7 = 0x7fffffffffffffff;
      for (plVar3 = *(long**)( param_1 + 0x60 ); plVar3 != *(long**)( param_1 + 0x68 ); plVar3 = plVar3 + 2) {
         lVar1 = *plVar3;
         if (lVar1 < lVar7) {
            lVar7 = lVar1;
         }
         if (lVar6 < lVar1) {
            lVar6 = lVar1;
         }
         lVar1 = plVar3[1];
         if (lVar1 < lVar5) {
            lVar5 = lVar1;
         }
         if (lVar4 < lVar1) {
            lVar4 = lVar1;
         }
      }
      *(long*)( param_1 + 0x40 ) = lVar7;
      *(long*)( param_1 + 0x48 ) = lVar5;
      *(long*)( param_1 + 0x50 ) = lVar6;
      *(long*)( param_1 + 0x58 ) = lVar4;
   }
   return 1;
}/* Clipper2Lib::ClipperBase::CheckSplitOwner(Clipper2Lib::OutRec*, std::vector<Clipper2Lib::OutRec*,
   std::allocator<Clipper2Lib::OutRec*> >*) */undefined8 Clipper2Lib::ClipperBase::CheckSplitOwner(ClipperBase *this, OutRec *param_1, vector *param_2) {
   undefined8 *puVar1;
   OutRec *pOVar2;
   char cVar3;
   OutRec *pOVar4;
   undefined8 *puVar5;
   puVar1 = *(undefined8**)( param_2 + 8 );
   puVar5 = *(undefined8**)param_2;
   joined_r0x00103a3c:if (puVar1 == puVar5) {
      return 0;
   }
   for (pOVar2 = (OutRec*)*puVar5; pOVar2 != (OutRec*)0x0; pOVar2 = *(OutRec**)( pOVar2 + 8 )) {
      if (*(long*)( pOVar2 + 0x20 ) != 0) {
         if (( param_1 != pOVar2 ) && ( *(OutRec**)( pOVar2 + 0x38 ) != param_1 )) {
            *(OutRec**)( pOVar2 + 0x38 ) = param_1;
            if (( *(vector**)( pOVar2 + 0x30 ) != (vector*)0x0 ) && ( cVar3 = CheckSplitOwner(this, param_1, *(vector**)( pOVar2 + 0x30 )) ),cVar3 != '\0') {
               return 1;
            }
            cVar3 = CheckBounds(this, pOVar2);
            pOVar4 = pOVar2;
            if (cVar3 != '\0') goto LAB_00103abd;
         }
         break;
      }
   }
   goto LAB_00103a9a;
   while (param_1 != pOVar4) {
      LAB_00103abd:pOVar4 = *(OutRec**)( pOVar4 + 8 );
      if (pOVar4 == (OutRec*)0x0) goto LAB_00103ac6;
   };
   if (pOVar4 == (OutRec*)0x0) {
      LAB_00103ac6:if (( ( ( *(long*)( pOVar2 + 0x40 ) <= *(long*)( param_1 + 0x40 ) ) && ( *(long*)( param_1 + 0x50 ) <= *(long*)( pOVar2 + 0x50 ) ) ) && ( *(long*)( pOVar2 + 0x48 ) <= *(long*)( param_1 + 0x48 ) ) ) && ( ( *(long*)( param_1 + 0x58 ) <= *(long*)( pOVar2 + 0x58 ) && ( cVar3 = Path1InsidePath2(*(OutPt**)( param_1 + 0x20 ), *(OutPt**)( pOVar2 + 0x20 )) ),cVar3 != '\0' ) )) {
         *(OutRec**)( param_1 + 8 ) = pOVar2;
         return 1;
      }
   }
   LAB_00103a9a:puVar5 = puVar5 + 1;
   goto joined_r0x00103a3c;
}/* Clipper2Lib::ClipperBase::RecursiveCheckOwners(Clipper2Lib::OutRec*, Clipper2Lib::PolyPath*) */void Clipper2Lib::ClipperBase::RecursiveCheckOwners(ClipperBase *this, OutRec *param_1, PolyPath *param_2) {
   long lVar1;
   char cVar2;
   undefined8 uVar3;
   OutRec *pOVar4;
   long *plVar5;
   if (*(long*)( param_1 + 0x28 ) != 0) {
      return;
   }
   if (( *(long*)( param_1 + 0x48 ) < *(long*)( param_1 + 0x58 ) ) && ( *(long*)( param_1 + 0x40 ) < *(long*)( param_1 + 0x50 ) )) {
      lVar1 = *(long*)( param_1 + 8 );
      while (lVar1 != 0) {
         if (( *(vector**)( lVar1 + 0x30 ) != (vector*)0x0 ) && ( cVar2 = CheckSplitOwner(this, param_1, *(vector**)( lVar1 + 0x30 )) ),cVar2 != '\0') {
            pOVar4 = *(OutRec**)( param_1 + 8 );
            LAB_00103c14:if (pOVar4 != (OutRec*)0x0) {
               plVar5 = *(long**)( pOVar4 + 0x28 );
               if (plVar5 == (long*)0x0) {
                  RecursiveCheckOwners(this, pOVar4, param_2);
                  plVar5 = *(long**)( *(long*)( param_1 + 8 ) + 0x28 );
               }
               uVar3 = ( **(code**)( *plVar5 + 0x10 ) )(plVar5, param_1 + 0x60);
               *(undefined8*)( param_1 + 0x28 ) = uVar3;
               return;
            }
            break;
         }
         pOVar4 = *(OutRec**)( param_1 + 8 );
         if (*(long*)( pOVar4 + 0x20 ) != 0) {
            cVar2 = CheckBounds(this, pOVar4);
            pOVar4 = *(OutRec**)( param_1 + 8 );
            if (( ( ( cVar2 != '\0' ) && ( *(long*)( pOVar4 + 0x40 ) <= *(long*)( param_1 + 0x40 ) ) ) && ( *(long*)( param_1 + 0x50 ) <= *(long*)( pOVar4 + 0x50 ) ) ) && ( ( *(long*)( pOVar4 + 0x48 ) <= *(long*)( param_1 + 0x48 ) && ( *(long*)( param_1 + 0x58 ) <= *(long*)( pOVar4 + 0x58 ) ) ) )) {
               cVar2 = Path1InsidePath2(*(OutPt**)( param_1 + 0x20 ), *(OutPt**)( pOVar4 + 0x20 ));
               pOVar4 = *(OutRec**)( param_1 + 8 );
               if (cVar2 != '\0') goto LAB_00103c14;
            }
         }
         lVar1 = *(long*)( pOVar4 + 8 );
         *(long*)( param_1 + 8 ) = lVar1;
      };
      uVar3 = ( **(code**)( *(long*)param_2 + 0x10 ) )(param_2, param_1 + 0x60);
      *(undefined8*)( param_1 + 0x28 ) = uVar3;
   }
   return;
}/* Clipper2Lib::Clipper64::BuildPaths64(std::vector<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >, std::allocator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > > >&,
   std::vector<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >,
   std::allocator<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >
   > >*) */void Clipper2Lib::Clipper64::BuildPaths64(Clipper64 *this, vector *param_1, vector *param_2) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   void *pvVar3;
   OutRec *pOVar4;
   char cVar5;
   long lVar6;
   ulong uVar7;
   undefined8 *puVar8;
   long in_FS_OFFSET;
   undefined1 local_58[16];
   long local_48;
   long local_40;
   puVar1 = *(undefined8**)( param_1 + 8 );
   puVar2 = *(undefined8**)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar8 = puVar2;
   if (puVar1 != puVar2) {
      do {
         pvVar3 = (void*)*puVar8;
         if (pvVar3 != (void*)0x0) {
            operator_delete(pvVar3, puVar8[2] - (long)pvVar3);
         }
         puVar8 = puVar8 + 3;
      } while ( puVar1 != puVar8 );
      *(undefined8**)( param_1 + 8 ) = puVar2;
   }
   std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > ::reserve(( vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > *)param_1,*(long*)( this + 0xf0 ) - *(long*)( this + 0xe8 ) >> 3 ));
   if (param_2 != (vector*)0x0) {
      puVar1 = *(undefined8**)( param_2 + 8 );
      puVar2 = *(undefined8**)param_2;
      puVar8 = puVar2;
      if (puVar1 != puVar2) {
         do {
            pvVar3 = (void*)*puVar8;
            if (pvVar3 != (void*)0x0) {
               operator_delete(pvVar3, puVar8[2] - (long)pvVar3);
            }
            puVar8 = puVar8 + 3;
         } while ( puVar1 != puVar8 );
         *(undefined8**)( param_2 + 8 ) = puVar2;
      }
      std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > ::reserve(( vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > *)param_2,*(long*)( this + 0xf0 ) - *(long*)( this + 0xe8 ) >> 3 ));
   }
   lVar6 = *(long*)( this + 0xe8 );
   if (*(long*)( this + 0xf0 ) != lVar6) {
      uVar7 = 0;
      do {
         pOVar4 = *(OutRec**)( lVar6 + uVar7 * 8 );
         if (*(OutPt**)( pOVar4 + 0x20 ) != (OutPt*)0x0) {
            local_48 = 0;
            local_58 = (undefined1[16])0x0;
            if (( param_2 == (vector*)0x0 ) || ( pOVar4[0x78] == (OutRec)0x0 )) {
               ClipperBase::CleanCollinear((ClipperBase*)this, pOVar4);
               cVar5 = BuildPath64(*(OutPt**)( pOVar4 + 0x20 ), (bool)this[0xd9], false, (vector*)local_58);
               if (cVar5 != '\0') {
                  std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > ::emplace_back<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>(( vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > *)param_1,(vector*)local_58 ));
               }
            } else {
               cVar5 = BuildPath64(*(OutPt**)( pOVar4 + 0x20 ), (bool)this[0xd9], true, (vector*)local_58);
               if (cVar5 != '\0') {
                  std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > ::emplace_back<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>(( vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > *)param_2,(vector*)local_58 ));
               }
            }
            if ((void*)local_58._0_8_ != (void*)0x0) {
               operator_delete((void*)local_58._0_8_, local_48 - local_58._0_8_);
            }
            lVar6 = *(long*)( this + 0xe8 );
         }
         uVar7 = uVar7 + 1;
      } while ( uVar7 < ( ulong )(*(long*)( this + 0xf0 ) - lVar6 >> 3) );
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* Clipper2Lib::Clipper64::BuildTree64(Clipper2Lib::PolyPath64&,
   std::vector<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >,
   std::allocator<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >
   > >&) */void Clipper2Lib::Clipper64::BuildTree64(Clipper64 *this, PolyPath64 *param_1, vector *param_2) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   long *plVar3;
   undefined8 *puVar4;
   PolyPath64 *this_00;
   OutRec *pOVar5;
   undefined1(*pauVar6)[16];
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   char cVar10;
   void *pvVar11;
   ulong uVar12;
   long lVar13;
   undefined8 *puVar14;
   ulong uVar15;
   undefined1(*pauVar16)[16];
   undefined8 *puVar17;
   long in_FS_OFFSET;
   undefined1 local_58[16];
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( *(long*)param_1 + 0x18 ) == PolyPath64::Clear) {
      puVar1 = *(undefined8**)( param_1 + 0x18 );
      puVar2 = *(undefined8**)( param_1 + 0x10 );
      puVar14 = puVar2;
      if (puVar1 != puVar2) {
         LAB_00103e9c:do {
            plVar3 = (long*)*puVar14;
            if (plVar3 != (long*)0x0) {
               if (*(code**)( *plVar3 + 8 ) != PolyPath64::~PolyPath64) {
                  puVar14 = puVar14 + 1;
                  ( **(code**)( *plVar3 + 8 ) )(plVar3);
                  if (puVar1 == puVar14) break;
                  goto LAB_00103e9c;
               }
               *plVar3 = (long)&PTR__PolyPath64_0010f5c8;
               std::vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>::resize((vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>*)( plVar3 + 2 ), 0);
               pvVar11 = (void*)plVar3[5];
               if (pvVar11 != (void*)0x0) {
                  operator_delete(pvVar11, plVar3[7] - (long)pvVar11);
               }
               puVar4 = (undefined8*)plVar3[3];
               puVar17 = (undefined8*)plVar3[2];
               if (puVar4 != puVar17) {
                  do {
                     while (this_00 = (PolyPath64*)*puVar17,this_00 == (PolyPath64*)0x0) {
                        LAB_00103f11:puVar17 = puVar17 + 1;
                        if (puVar4 == puVar17) goto LAB_00103f40;
                     };
                     if (*(code**)( *(long*)this_00 + 8 ) == PolyPath64::~PolyPath64) {
                        PolyPath64::~PolyPath64(this_00);
                        operator_delete(this_00, 0x40);
                        goto LAB_00103f11;
                     }
                     ( **(code**)( *(long*)this_00 + 8 ) )();
                     puVar17 = puVar17 + 1;
                  } while ( puVar4 != puVar17 );
                  LAB_00103f40:puVar17 = (undefined8*)plVar3[2];
               }
               if (puVar17 != (undefined8*)0x0) {
                  operator_delete(puVar17, plVar3[4] - (long)puVar17);
               }
               operator_delete(plVar3, 0x40);
            }
            puVar14 = puVar14 + 1;
         } while ( puVar1 != puVar14 );
         *(undefined8**)( param_1 + 0x18 ) = puVar2;
      }
   } else {
      ( **(code**)( *(long*)param_1 + 0x18 ) )(param_1);
   }
   puVar1 = *(undefined8**)( param_2 + 8 );
   puVar2 = *(undefined8**)param_2;
   puVar14 = puVar2;
   if (puVar1 != puVar2) {
      do {
         pvVar11 = (void*)*puVar14;
         if (pvVar11 != (void*)0x0) {
            operator_delete(pvVar11, puVar14[2] - (long)pvVar11);
         }
         puVar14 = puVar14 + 3;
      } while ( puVar1 != puVar14 );
      *(undefined8**)( param_2 + 8 ) = puVar2;
   }
   if (this[0xe0] != (Clipper64)0x0) {
      std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > ::reserve(( vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > *)param_2,*(long*)( this + 0xf0 ) - *(long*)( this + 0xe8 ) >> 3 ));
   }
   lVar13 = *(long*)( this + 0xe8 );
   uVar15 = 0;
   if (*(long*)( this + 0xf0 ) != lVar13) {
      do {
         pOVar5 = *(OutRec**)( lVar13 + uVar15 * 8 );
         if (( pOVar5 != (OutRec*)0x0 ) && ( *(OutPt**)( pOVar5 + 0x20 ) != (OutPt*)0x0 )) {
            if (pOVar5[0x78] == (OutRec)0x0) {
               cVar10 = ClipperBase::CheckBounds((ClipperBase*)this, pOVar5);
               if (cVar10 != '\0') {
                  ClipperBase::RecursiveCheckOwners((ClipperBase*)this, pOVar5, (PolyPath*)param_1);
               }
               LAB_00103ffb:lVar13 = *(long*)( this + 0xe8 );
            } else {
               local_58 = (undefined1[16])0x0;
               local_48 = 0;
               cVar10 = BuildPath64(*(OutPt**)( pOVar5 + 0x20 ), (bool)this[0xd9], true, (vector*)local_58);
               uVar8 = local_58._0_8_;
               if (cVar10 == '\0') {
                  LAB_0010406c:if ((void*)uVar8 == (void*)0x0) goto LAB_00103ffb;
               } else {
                  pauVar6 = *(undefined1(**) [16])( param_2 + 8 );
                  if (pauVar6 == *(undefined1(**) [16])( param_2 + 0x10 )) {
                     std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > ::_M_realloc_insert<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>const&>(( vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > *)param_2,pauVar6,(vector*)local_58 ));
                     goto LAB_0010406c;
                  }
                  uVar9 = local_58._8_8_;
                  *(undefined8*)pauVar6[1] = 0;
                  *pauVar6 = (undefined1[16])0x0;
                  uVar12 = local_58._8_8_ - local_58._0_8_;
                  if (uVar12 == 0) {
                     pvVar11 = (void*)0x0;
                     pauVar16 = pauVar6;
                  } else {
                     if (0x7ffffffffffffff0 < uVar12) {
                        if ((long)uVar12 < 0) {
                           std::__throw_bad_array_new_length();
                        }
                        std::__throw_bad_alloc();
                        goto LAB_00104227;
                     }
                     pvVar11 = operator_new(uVar12);
                     pauVar16 = *(undefined1(**) [16])( param_2 + 8 );
                  }
                  *(void**)*pauVar6 = pvVar11;
                  *(ulong*)pauVar6[1] = uVar12 + (long)pvVar11;
                  if (uVar9 == uVar8) {
                     *(void**)( *pauVar6 + 8 ) = pvVar11;
                     *(undefined1**)( param_2 + 8 ) = pauVar16[1] + 8;
                     goto LAB_0010406c;
                  }
                  lVar13 = 0;
                  do {
                     uVar7 = ( (undefined8*)( uVar8 + lVar13 ) )[1];
                     *(undefined8*)( (long)pvVar11 + lVar13 ) = *(undefined8*)( uVar8 + lVar13 );
                     ( (undefined8*)( (long)pvVar11 + lVar13 ) )[1] = uVar7;
                     lVar13 = lVar13 + 0x10;
                  } while ( lVar13 != uVar9 - uVar8 );
                  *(long*)( *pauVar6 + 8 ) = (long)pvVar11 + lVar13;
                  *(undefined1**)( param_2 + 8 ) = pauVar16[1] + 8;
               }
               operator_delete((void*)uVar8, local_48 - uVar8);
               lVar13 = *(long*)( this + 0xe8 );
            }
         }
         uVar15 = uVar15 + 1;
      } while ( uVar15 < ( ulong )(*(long*)( this + 0xf0 ) - lVar13 >> 3) );
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_00104227:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* Clipper2Lib::ReuseableDataContainer64::AddLocMin(Clipper2Lib::Vertex&, Clipper2Lib::PathType,
   bool) */void Clipper2Lib::ReuseableDataContainer64::AddLocMin(ReuseableDataContainer64 *this, long param_1, undefined4 param_3, undefined1 param_4) {
   undefined8 *puVar1;
   long in_FS_OFFSET;
   long *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(uint*)( param_1 + 0x20 ) & 8 ) == 0) {
      *(uint*)( param_1 + 0x20 ) = *(uint*)( param_1 + 0x20 ) | 8;
      local_38 = (long*)operator_new(0x10);
      puVar1 = *(undefined8**)( this + 0x10 );
      *local_38 = param_1;
      *(undefined4*)( local_38 + 1 ) = param_3;
      *(undefined1*)( (long)local_38 + 0xc ) = param_4;
      if (puVar1 == *(undefined8**)( this + 0x18 )) {
         std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>::_M_realloc_insert<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>((vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>*)( this + 8 ), puVar1, &local_38);
         if (local_38 != (long*)0x0) {
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               operator_delete(local_38, 0x10);
               return;
            }
            goto LAB_001042fd;
         }
      } else {
         *puVar1 = local_38;
         *(undefined8**)( this + 0x10 ) = puVar1 + 1;
      }
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_001042fd:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* Clipper2Lib::ClipperBase::AddReuseableData(Clipper2Lib::ReuseableDataContainer64 const&) */void Clipper2Lib::ClipperBase::AddReuseableData(ClipperBase *this, ReuseableDataContainer64 *param_1) {
   undefined1 uVar1;
   undefined4 uVar2;
   undefined8 *puVar3;
   long *plVar4;
   long in_FS_OFFSET;
   undefined8 *local_38;
   long local_30;
   plVar4 = *(long**)( param_1 + 8 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   this[0xe1] = (ClipperBase)0x0;
   this[0x20] = (ClipperBase)0x0;
   if (plVar4 != *(long**)( param_1 + 0x10 )) {
      do {
         puVar3 = (undefined8*)*plVar4;
         local_38 = (undefined8*)operator_new(0x10);
         uVar1 = *(undefined1*)( (long)puVar3 + 0xc );
         uVar2 = *(undefined4*)( puVar3 + 1 );
         *local_38 = *puVar3;
         puVar3 = *(undefined8**)( this + 0x40 );
         *(undefined4*)( local_38 + 1 ) = uVar2;
         *(undefined1*)( (long)local_38 + 0xc ) = uVar1;
         if (puVar3 == *(undefined8**)( this + 0x48 )) {
            std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>::_M_realloc_insert<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>((vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>*)( this + 0x38 ), puVar3, &local_38);
            if (local_38 != (undefined8*)0x0) {
               operator_delete(local_38, 0x10);
            }
         } else {
            *puVar3 = local_38;
            *(undefined8**)( this + 0x40 ) = puVar3 + 1;
         }
         if (*(char*)( *plVar4 + 0xc ) != '\0') {
            this[0xe0] = (ClipperBase)0x1;
         }
         plVar4 = plVar4 + 1;
      } while ( *(long**)( param_1 + 0x10 ) != plVar4 );
   }
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* Clipper2Lib::AddLocMin(std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > >&, Clipper2Lib::Vertex&,
   Clipper2Lib::PathType, bool) */void Clipper2Lib::AddLocMin(vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>> *param_1, long param_2, undefined4 param_3, undefined1 param_4) {
   undefined8 *puVar1;
   long in_FS_OFFSET;
   long *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(uint*)( param_2 + 0x20 ) & 8 ) == 0) {
      *(uint*)( param_2 + 0x20 ) = *(uint*)( param_2 + 0x20 ) | 8;
      local_38 = (long*)operator_new(0x10);
      puVar1 = *(undefined8**)( param_1 + 8 );
      *local_38 = param_2;
      *(undefined4*)( local_38 + 1 ) = param_3;
      *(undefined1*)( (long)local_38 + 0xc ) = param_4;
      if (puVar1 == *(undefined8**)( param_1 + 0x10 )) {
         std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>::_M_realloc_insert<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>(param_1, puVar1, &local_38);
         if (local_38 != (long*)0x0) {
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               operator_delete(local_38, 0x10);
               return;
            }
            goto LAB_001044cc;
         }
      } else {
         *puVar1 = local_38;
         *(undefined8**)( param_1 + 8 ) = puVar1 + 1;
      }
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_001044cc:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* Clipper2Lib::AddPaths_(std::vector<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >, std::allocator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > > > const&, Clipper2Lib::PathType, bool,
   std::vector<Clipper2Lib::Vertex*, std::allocator<Clipper2Lib::Vertex*> >&,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > >&) */void Clipper2Lib::AddPaths_(long *param_1, undefined4 param_2, byte param_3, vector<Clipper2Lib::Vertex*,std::allocator<Clipper2Lib::Vertex*>> *param_4, undefined8 param_5) {
   long lVar1;
   long *plVar2;
   undefined8 *puVar3;
   long lVar4;
   long lVar5;
   undefined1(*pauVar6)[16];
   undefined1(*pauVar7)[16];
   byte bVar8;
   int iVar9;
   uint uVar10;
   long *plVar11;
   long *plVar12;
   undefined1(*pauVar13)[16];
   ulong uVar14;
   byte bVar15;
   undefined1(*pauVar16)[16];
   undefined1(*pauVar17)[16];
   undefined1(*pauVar18)[16];
   long in_FS_OFFSET;
   bool bVar19;
   undefined1(*local_48)[16];
   long local_40;
   plVar11 = (long*)*param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar11 == (long*)param_1[1]) goto LAB_001046b8;
   uVar14 = 0;
   do {
      plVar2 = plVar11 + 1;
      lVar1 = *plVar11;
      plVar11 = plVar11 + 3;
      uVar14 = uVar14 + ( *plVar2 - lVar1 >> 4 );
   } while ( (long*)param_1[1] != plVar11 );
   if (uVar14 == 0) goto LAB_001046b8;
   if (uVar14 < 0x333333333333334) {
      pauVar6 = (undefined1(*) [16])operator_new__(uVar14 * 0x28);
      pauVar18 = pauVar6;
      LAB_00104580:do {
         uVar14 = uVar14 - 1;
         *(undefined4*)pauVar6[2] = 0;
         *pauVar6 = (undefined1[16])0x0;
         pauVar6[1] = (undefined1[16])0x0;
         pauVar6 = (undefined1(*) [16])( pauVar6[2] + 8 );
      } while ( uVar14 != 0 );
   } else {
      pauVar6 = (undefined1(*) [16])operator_new__(0xffffffffffffffff);
      pauVar18 = pauVar6;
      if (-1 < (long)( uVar14 - 1 )) goto LAB_00104580;
   }
   plVar11 = (long*)param_1[1];
   param_1 = (long*)*param_1;
   pauVar6 = pauVar18;
   local_48 = pauVar18;
   joined_r0x001045b6:if (plVar11 != param_1) {
      plVar2 = (long*)param_1[1];
      plVar12 = (long*)*param_1;
      pauVar16 = pauVar6;
      if (plVar2 != plVar12) {
         *(undefined8*)( pauVar6[1] + 8 ) = 0;
         iVar9 = 0;
         pauVar17 = pauVar6;
         pauVar13 = (undefined1(*) [16])0x0;
         do {
            pauVar7 = pauVar17;
            lVar1 = *plVar12;
            lVar4 = plVar12[1];
            *(undefined1(**) [16])( pauVar7[1] + 8 ) = pauVar13;
            pauVar17 = (undefined1(*) [16])( pauVar7[2] + 8 );
            *(undefined4*)pauVar7[2] = 0;
            iVar9 = iVar9 + 1;
            *(long*)*pauVar7 = lVar1;
            *(long*)( *pauVar7 + 8 ) = lVar4;
            do {
               plVar12 = plVar12 + 2;
               if (plVar2 == plVar12) {
                  if (*(undefined1(**) [16])( pauVar7[1] + 8 ) == (undefined1(*) [16])0x0) goto LAB_00104688;
                  if (( ( param_3 == 0 ) && ( *(long*)*pauVar7 == *(long*)*pauVar6 ) ) && ( *(long*)( *pauVar7 + 8 ) == *(long*)( *pauVar6 + 8 ) )) {
                     pauVar7 = *(undefined1(**) [16])( pauVar7[1] + 8 );
                  }
                  *(undefined1(**) [16])pauVar7[1] = pauVar6;
                  *(undefined1(**) [16])( pauVar6[1] + 8 ) = pauVar7;
                  pauVar16 = pauVar17;
                  if (( iVar9 < 2 ) || ( ( ( param_3 ^ 1 ) & iVar9 == 2 ) != 0 )) goto LAB_00104688;
                  if (param_3 != 0) {
                     pauVar17 = *(undefined1(**) [16])pauVar6[1];
                     if (pauVar17 == pauVar6) goto LAB_00104890;
                     pauVar13 = pauVar17;
                     goto LAB_00104851;
                  }
                  if (pauVar7 == pauVar6) goto LAB_00104688;
                  goto LAB_0010479d;
               }
            } while ( ( *(long*)*pauVar7 == *plVar12 ) && ( *(long*)( *pauVar7 + 8 ) == plVar12[1] ) );
            *(undefined1(**) [16])pauVar7[1] = pauVar17;
            pauVar13 = pauVar7;
         } while ( true );
      }
      goto LAB_00104688;
   }
   puVar3 = *(undefined8**)( param_4 + 8 );
   if (puVar3 == *(undefined8**)( param_4 + 0x10 )) {
      std::vector<Clipper2Lib::Vertex*,std::allocator<Clipper2Lib::Vertex*>>::_M_realloc_insert<Clipper2Lib::Vertex*&>(param_4, puVar3, &local_48);
   } else {
      *puVar3 = pauVar18;
      *(undefined8**)( param_4 + 8 ) = puVar3 + 1;
   }
   LAB_001046b8:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
   while (pauVar7 = *(undefined1(**) [16])( pauVar7[1] + 8 ),pauVar7 != pauVar6) {
      LAB_0010479d:if (*(long*)( *pauVar7 + 8 ) != *(long*)( *pauVar6 + 8 )) {
         if (pauVar6 != pauVar7) {
            pauVar17 = *(undefined1(**) [16])pauVar6[1];
            bVar15 = *(long*)( *pauVar6 + 8 ) < *(long*)( *pauVar7 + 8 );
            if (pauVar17 != pauVar6) goto LAB_001047c2;
         }
         break;
      }
   };
   goto LAB_00104688;
   while (pauVar13 = *(undefined1(**) [16])pauVar13[1],pauVar13 != pauVar6) {
      LAB_00104851:if (*(long*)( *pauVar13 + 8 ) != *(long*)( *pauVar6 + 8 )) {
         if (*(long*)( *pauVar6 + 8 ) < *(long*)( *pauVar13 + 8 )) {
            *(undefined4*)pauVar6[2] = 5;
            bVar15 = 0;
            goto LAB_001047c2;
         }
         break;
      }
   };
   LAB_00104890:*(undefined4*)pauVar6[2] = 1;
   AddLocMin(param_5, pauVar6, param_2, 1);
   pauVar17 = *(undefined1(**) [16])pauVar6[1];
   bVar15 = param_3;
   if (pauVar17 != pauVar6) {
      LAB_001047c2:lVar1 = *(long*)( *pauVar6 + 8 );
      lVar4 = *(long*)( *pauVar17 + 8 );
      bVar19 = SBORROW8(lVar4, lVar1);
      lVar5 = lVar4 - lVar1;
      pauVar13 = pauVar6;
      bVar8 = bVar15;
      if (lVar4 <= lVar1) goto LAB_00104807;
      do {
         if (bVar8 != 0) {
            *(uint*)pauVar13[2] = *(uint*)pauVar13[2] | 4;
         }
         bVar8 = 0;
         while (true) {
            pauVar13 = pauVar17;
            pauVar17 = *(undefined1(**) [16])pauVar13[1];
            if (pauVar17 == pauVar6) {
               if (param_3 == 0) {
                  if (bVar8 != bVar15) {
                     if (bVar15 == 0) {
                        *(uint*)pauVar13[2] = *(uint*)pauVar13[2] | 4;
                     } else {
                        AddLocMin(param_5, pauVar13, param_2);
                     }
                  }
               } else {
                  uVar10 = *(uint*)pauVar13[2];
                  *(uint*)pauVar13[2] = uVar10 | 2;
                  pauVar17 = pauVar13;
                  if (bVar8 != 0) goto LAB_00104676;
                  AddLocMin(param_5, pauVar13, param_2);
               }
               goto LAB_00104688;
            }
            lVar1 = *(long*)( *pauVar13 + 8 );
            lVar4 = *(long*)( *pauVar17 + 8 );
            bVar19 = SBORROW8(lVar4, lVar1);
            lVar5 = lVar4 - lVar1;
            if (lVar1 < lVar4) break;
            LAB_00104807:if (bVar19 != lVar5 < 0) {
               if (bVar8 == 0) {
                  AddLocMin(param_5, pauVar13, param_2, param_3);
               }
               bVar8 = 1;
            }
         };
      } while ( true );
   }
   uVar10 = *(uint*)pauVar6[2];
   *(uint*)pauVar6[2] = uVar10 | 2;
   LAB_00104676:*(uint*)pauVar17[2] = uVar10 | 6;
   LAB_00104688:param_1 = param_1 + 3;
   pauVar6 = pauVar16;
   goto joined_r0x001045b6;
}/* Clipper2Lib::ReuseableDataContainer64::AddPaths(std::vector<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >, std::allocator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > > > const&, Clipper2Lib::PathType, bool) */void Clipper2Lib::ReuseableDataContainer64::AddPaths(ReuseableDataContainer64 *this, undefined8 param_1, undefined4 param_3, undefined1 param_4) {
   AddPaths_(param_1, param_3, param_4, this + 0x20, this + 8);
   return;
}/* Clipper2Lib::ClipperBase::AddPaths(std::vector<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >, std::allocator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > > > const&, Clipper2Lib::PathType, bool) */void Clipper2Lib::ClipperBase::AddPaths(ClipperBase *this, undefined8 param_1, undefined4 param_3, char param_4) {
   if (param_4 != '\0') {
      this[0xe0] = (ClipperBase)0x1;
   }
   this[0x20] = (ClipperBase)0x0;
   AddPaths_(param_1, param_3, param_4, this + 0x58, this + 0x38);
   return;
}/* Clipper2Lib::ClipperBase::AddPath(std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > const&, Clipper2Lib::PathType, bool) */void Clipper2Lib::ClipperBase::AddPath(ClipperBase *this, undefined8 param_1, undefined4 param_3, char param_4) {
   void *pvVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 *puVar4;
   long in_FS_OFFSET;
   undefined1 local_48[16];
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = (undefined1[16])0x0;
   local_38 = 0;
   std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > ::_M_realloc_insert<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>const&>(( vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point < long>>>> > *)local_48,0,param_1 ));
   if (param_4 != '\0') {
      this[0xe0] = (ClipperBase)0x1;
   }
   this[0x20] = (ClipperBase)0x0;
   AddPaths_(local_48, param_3, param_4, this + 0x58, this + 0x38);
   uVar3 = local_48._8_8_;
   uVar2 = local_48._0_8_;
   for (puVar4 = (undefined8*)local_48._0_8_; (undefined8*)uVar3 != puVar4; puVar4 = puVar4 + 3) {
      pvVar1 = (void*)*puVar4;
      if (pvVar1 != (void*)0x0) {
         operator_delete(pvVar1, puVar4[2] - (long)pvVar1);
      }
   }
   if ((undefined8*)uVar2 == (undefined8*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
   } else if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      operator_delete((void*)uVar2, local_38 - uVar2);
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Clipper2Lib::ClipperBase::DoTopOfScanbeam(long) */void Clipper2Lib::ClipperBase::DoTopOfScanbeam(ClipperBase *this, long param_1) {
   Active *pAVar1;
   long lVar2;
   double dVar3;
   pAVar1 = *(Active**)( this + 0x28 );
   *(undefined8*)( this + 0x30 ) = 0;
   joined_r0x00104a7d:do {
      if (pAVar1 == (Active*)0x0) {
         return;
      }
      if (*(long*)( pAVar1 + 0x18 ) == param_1) {
         *(long*)( pAVar1 + 0x20 ) = *(long*)( pAVar1 + 0x10 );
         if (( *(byte*)( *(long*)( pAVar1 + 0x70 ) + 0x20 ) & 4 ) != 0) {
            pAVar1 = (Active*)DoMaxima(this, pAVar1);
            goto joined_r0x00104a7d;
         }
         if (*(long*)( pAVar1 + 0x40 ) != 0) {
            AddOutPt(this, pAVar1, (Point_conflict*)( pAVar1 + 0x10 ));
         }
         UpdateEdgeIntoAEL(this, pAVar1);
         if (*(long*)( pAVar1 + 0x18 ) == *(long*)( pAVar1 + 8 )) {
            *(undefined8*)( pAVar1 + 0x60 ) = *(undefined8*)( this + 0x30 );
            *(Active**)( this + 0x30 ) = pAVar1;
         }
      } else {
         lVar2 = *(long*)pAVar1;
         if (( lVar2 != *(long*)( pAVar1 + 0x10 ) ) && ( param_1 != *(long*)( pAVar1 + 8 ) )) {
            dVar3 = nearbyint((double)( param_1 - *(long*)( pAVar1 + 8 ) ) * *(double*)( pAVar1 + 0x28 ));
            lVar2 = lVar2 + (long)dVar3;
         }
         *(long*)( pAVar1 + 0x20 ) = lVar2;
      }
      pAVar1 = *(Active**)( pAVar1 + 0x50 );
   } while ( true );
}/* Clipper2Lib::ClipperBase::InsertLocalMinimaIntoAEL(long) */void Clipper2Lib::ClipperBase::InsertLocalMinimaIntoAEL(ClipperBase *this, long param_1) {
   uint uVar1;
   int iVar2;
   int iVar3;
   long *plVar4;
   undefined8 uVar5;
   long lVar6;
   code *pcVar7;
   char cVar8;
   undefined8 *puVar9;
   Active *pAVar10;
   Active *pAVar11;
   long lVar12;
   long lVar13;
   long lVar14;
   long *plVar15;
   long lVar16;
   Active *pAVar17;
   long *plVar18;
   long in_FS_OFFSET;
   bool bVar19;
   bool bVar20;
   byte bVar21;
   double dVar22;
   long local_38;
   long local_30;
   bVar21 = 0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar9 = *(undefined8**)( this + 0x50 );
   if (*(undefined8**)( this + 0x40 ) != puVar9) {
      do {
         plVar18 = (long*)*puVar9;
         lVar13 = *plVar18;
         if (param_1 != *(long*)( lVar13 + 8 )) break;
         *(undefined8**)( this + 0x50 ) = puVar9 + 1;
         uVar1 = *(uint*)( lVar13 + 0x20 );
         if (( uVar1 & 1 ) == 0) {
            pAVar11 = (Active*)operator_new(0x88);
            pAVar17 = pAVar11;
            for (lVar13 = 0x11; lVar13 != 0; lVar13 = lVar13 + -1) {
               *(long*)pAVar17 = 0;
               pAVar17 = pAVar17 + (ulong)bVar21 * -0x10 + 8;
            }
            plVar15 = (long*)*plVar18;
            plVar4 = (long*)plVar15[3];
            lVar14 = *plVar15;
            lVar6 = plVar15[1];
            lVar13 = *plVar15;
            *(undefined4*)( pAVar11 + 0x30 ) = 0xffffffff;
            lVar12 = *plVar4;
            lVar16 = plVar4[1];
            *(long**)( pAVar11 + 0x70 ) = plVar4;
            *(long*)pAVar11 = lVar14;
            *(long*)( pAVar11 + 8 ) = lVar6;
            *(long*)( pAVar11 + 0x10 ) = lVar12;
            *(long*)( pAVar11 + 0x18 ) = lVar16;
            *(long*)( pAVar11 + 0x20 ) = lVar13;
            *(long**)( pAVar11 + 0x78 ) = plVar18;
            if ((double)( *(long*)( pAVar11 + 0x18 ) - *(long*)( pAVar11 + 8 ) ) == 0.0) {
               dVar22 = _LC12;
               if (lVar13 < *(long*)( pAVar11 + 0x10 )) {
                  dVar22 = _LC11;
               }
            } else {
               dVar22 = (double)( *(long*)( pAVar11 + 0x10 ) - lVar13 ) / (double)( *(long*)( pAVar11 + 0x18 ) - *(long*)( pAVar11 + 8 ) );
            }
            *(double*)( pAVar11 + 0x28 ) = dVar22;
            pAVar17 = (Active*)0x0;
            pAVar10 = pAVar11;
            if (( *(byte*)( plVar15 + 4 ) & 2 ) == 0) goto LAB_00104ba1;
         } else {
            if (( uVar1 & 2 ) != 0) {
               DAT_00000080 = 0;
               /* WARNING: Does not return */
               pcVar7 = (code*)invalidInstructionException();
               ( *pcVar7 )();
            }
            pAVar11 = (Active*)0x0;
            LAB_00104ba1:pAVar10 = (Active*)operator_new(0x88);
            pAVar17 = pAVar10;
            for (lVar13 = 0x11; lVar13 != 0; lVar13 = lVar13 + -1) {
               *(long*)pAVar17 = 0;
               pAVar17 = pAVar17 + (ulong)bVar21 * -0x10 + 8;
            }
            plVar15 = (long*)*plVar18;
            *(undefined4*)( pAVar10 + 0x30 ) = 1;
            lVar13 = *plVar15;
            lVar14 = plVar15[1];
            plVar4 = (long*)plVar15[2];
            *(long*)pAVar10 = *plVar15;
            *(long*)( pAVar10 + 8 ) = lVar14;
            lVar14 = *plVar4;
            lVar6 = plVar4[1];
            *(long**)( pAVar10 + 0x70 ) = plVar4;
            *(long*)( pAVar10 + 0x20 ) = lVar13;
            *(long*)( pAVar10 + 0x10 ) = lVar14;
            *(long*)( pAVar10 + 0x18 ) = lVar6;
            *(long**)( pAVar10 + 0x78 ) = plVar18;
            dVar22 = (double)( *(long*)( pAVar10 + 0x18 ) - *(long*)( pAVar10 + 8 ) );
            if (dVar22 == 0.0) {
               dVar22 = _LC12;
               if (lVar13 < *(long*)( pAVar10 + 0x10 )) {
                  dVar22 = _LC11;
               }
            } else {
               dVar22 = (double)( *(long*)( pAVar10 + 0x10 ) - lVar13 ) / dVar22;
            }
            *(double*)( pAVar10 + 0x28 ) = dVar22;
            pAVar17 = pAVar11;
            if (pAVar11 != (Active*)0x0) {
               if (*(long*)( pAVar11 + 0x18 ) == *(long*)( pAVar11 + 8 )) {
                  if (_LC11 != *(double*)( pAVar11 + 0x28 )) goto LAB_00104c60;
               } else if (*(long*)( pAVar10 + 8 ) == *(long*)( pAVar10 + 0x18 )) {
                  if (dVar22 != _LC12) goto LAB_00104c60;
               } else if (dVar22 < *(double*)( pAVar11 + 0x28 ) || dVar22 == *(double*)( pAVar11 + 0x28 )) {
                  LAB_00104c60:pAVar17 = pAVar10;
                  pAVar10 = pAVar11;
               }
            }
         }
         pAVar10[0x80] = (Active)0x1;
         InsertLeftEdge(this, pAVar10);
         if (*(char*)( *(long*)( pAVar10 + 0x78 ) + 0xc ) == '\0') {
            pAVar11 = pAVar10;
            SetWindCountForClosedPathEdge(this, pAVar10);
            cVar8 = IsContributingClosed(this, pAVar11);
            if (pAVar17 == (Active*)0x0) goto LAB_00104d80;
            LAB_00104e26:uVar5 = *(undefined8*)( pAVar10 + 0x34 );
            pAVar17[0x80] = (Active)0x0;
            *(undefined8*)( pAVar17 + 0x34 ) = uVar5;
            lVar13 = *(long*)( pAVar10 + 0x50 );
            *(long*)( pAVar17 + 0x50 ) = lVar13;
            if (lVar13 != 0) {
               *(Active**)( lVar13 + 0x48 ) = pAVar17;
            }
            *(Active**)( pAVar17 + 0x48 ) = pAVar10;
            *(Active**)( pAVar10 + 0x50 ) = pAVar17;
            if (( cVar8 != '\0' ) && ( AddLocalMinPoly(this, pAVar10, pAVar17, (Point_conflict*)pAVar10, true),*(long*)( pAVar10 + 0x18 ) != *(long*)( pAVar10 + 8 ) )) {
               CheckJoinLeft(this, pAVar10, (Point_conflict*)pAVar10, false);
            }
            pAVar11 = *(Active**)( pAVar17 + 0x50 );
            while (pAVar11 != (Active*)0x0) {
               while (true) {
                  if (*(long*)( pAVar17 + 0x20 ) == *(long*)( pAVar11 + 0x20 )) {
                     cVar8 = IsValidAelOrder(pAVar11, pAVar17);
                     if (cVar8 == '\0') goto LAB_00104ee0;
                  } else if (*(long*)( pAVar17 + 0x20 ) <= *(long*)( pAVar11 + 0x20 )) goto LAB_00104ee0;
                  IntersectEdges(this, pAVar17, pAVar11, (Point_conflict*)pAVar17);
                  lVar13 = *(long*)( pAVar17 + 0x50 );
                  pAVar11 = *(Active**)( lVar13 + 0x50 );
                  if (pAVar11 != (Active*)0x0) {
                     *(Active**)( pAVar11 + 0x48 ) = pAVar17;
                  }
                  lVar14 = *(long*)( pAVar17 + 0x48 );
                  if (lVar14 != 0) {
                     *(long*)( lVar14 + 0x50 ) = lVar13;
                  }
                  *(long*)( lVar13 + 0x48 ) = lVar14;
                  *(Active**)( lVar13 + 0x50 ) = pAVar17;
                  *(long*)( pAVar17 + 0x48 ) = lVar13;
                  *(Active**)( pAVar17 + 0x50 ) = pAVar11;
                  if (*(long*)( lVar13 + 0x48 ) != 0) break;
                  *(long*)( this + 0x28 ) = lVar13;
                  if (pAVar11 == (Active*)0x0) goto LAB_00104ee0;
               };
            };
            LAB_00104ee0:if (*(long*)( pAVar17 + 0x18 ) != *(long*)( pAVar17 + 8 )) {
               CheckJoinRight(this, pAVar17, (Point_conflict*)pAVar17, false);
               local_38 = *(long*)( pAVar17 + 0x18 );
               std::priority_queue<long,std::vector<long,std::allocator<long>>,std::less<long>>::push((priority_queue<long,std::vector<long,std::allocator<long>>,std::less<long>>*)( this + 0x70 ), &local_38);
               goto LAB_00104d88;
            }
            uVar5 = *(undefined8*)( this + 0x30 );
            lVar13 = *(long*)( pAVar10 + 0x18 );
            *(Active**)( this + 0x30 ) = pAVar17;
            *(undefined8*)( pAVar17 + 0x60 ) = uVar5;
            if (lVar13 == *(long*)( pAVar10 + 8 )) goto LAB_00104d96;
            LAB_00104f0a:plVar18 = *(long**)( this + 0x78 );
            local_38 = lVar13;
            if (plVar18 == *(long**)( this + 0x80 )) {
               std::vector<long,std::allocator<long>>::_M_realloc_insert<long_const&>((vector<long,std::allocator<long>>*)( this + 0x70 ), plVar18, &local_38);
               plVar18 = *(long**)( this + 0x78 );
               lVar13 = plVar18[-1];
            } else {
               *plVar18 = lVar13;
               plVar18 = plVar18 + 1;
               *(long**)( this + 0x78 ) = plVar18;
            }
            lVar6 = *(long*)( this + 0x70 );
            lVar12 = (long)plVar18 - lVar6 >> 3;
            lVar14 = lVar12 + -1;
            lVar12 = lVar12 + -2;
            lVar12 = lVar12 - ( lVar12 >> 0x3f );
            if (lVar14 < 1) {
               plVar15 = (long*)( lVar6 + -8 + ( (long)plVar18 - lVar6 ) );
               LAB_00104f8f:*plVar15 = lVar13;
            } else {
               do {
                  lVar16 = lVar12 >> 1;
                  plVar18 = (long*)( lVar6 + lVar16 * 8 );
                  plVar15 = (long*)( lVar6 + lVar14 * 8 );
                  lVar14 = *plVar18;
                  if (lVar13 <= lVar14) goto LAB_00104f8f;
                  *plVar15 = lVar14;
                  lVar12 = ( lVar16 + -1 ) - ( lVar16 + -1 >> 0x3f );
                  lVar14 = lVar16;
               } while ( lVar16 != 0 );
               *plVar18 = lVar13;
            }
         } else {
            SetWindCountForOpenPathEdge(this, pAVar10);
            iVar2 = *(int*)( pAVar10 + 0x34 );
            iVar3 = *(int*)( pAVar10 + 0x38 );
            if (*(int*)( this + 0xc ) == 2) {
               bVar19 = 0 < iVar3;
               bVar20 = 0 < iVar2;
            } else if (*(int*)( this + 0xc ) == 3) {
               bVar19 = SUB41((uint)iVar3 >> 0x1f, 0);
               bVar20 = SUB41((uint)iVar2 >> 0x1f, 0);
            } else {
               bVar19 = iVar3 != 0;
               bVar20 = iVar2 != 0;
            }
            cVar8 = bVar19;
            if (*(int*)( this + 8 ) != 1) {
               cVar8 = bVar19 ^ 1;
               if (*(int*)( this + 8 ) == 2) {
                  cVar8 = ( bVar20 | bVar19 ) ^ 1;
               }
            }
            if (pAVar17 != (Active*)0x0) goto LAB_00104e26;
            LAB_00104d80:if (cVar8 != '\0') {
               StartOpenPath(this, pAVar10, (Point_conflict*)pAVar10);
            }
            LAB_00104d88:lVar13 = *(long*)( pAVar10 + 0x18 );
            if (lVar13 != *(long*)( pAVar10 + 8 )) goto LAB_00104f0a;
            LAB_00104d96:uVar5 = *(undefined8*)( this + 0x30 );
            *(Active**)( this + 0x30 ) = pAVar10;
            *(undefined8*)( pAVar10 + 0x60 ) = uVar5;
         }
         puVar9 = *(undefined8**)( this + 0x50 );
      } while ( *(undefined8**)( this + 0x40 ) != puVar9 );
   }
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* Clipper2Lib::ClipperBase::AddNewIntersectNode(Clipper2Lib::Active&, Clipper2Lib::Active&, long)
    */void Clipper2Lib::ClipperBase::AddNewIntersectNode(ClipperBase *this, Active *param_1, Active *param_2, long param_3) {
   undefined1(*pauVar1)[16];
   bool bVar2;
   undefined8 uVar3;
   long lVar4;
   Point_conflict *pPVar5;
   Point_conflict *pPVar6;
   Point_conflict *pPVar7;
   Point_conflict *pPVar8;
   long in_FS_OFFSET;
   double dVar9;
   double dVar10;
   double dVar11;
   undefined1 local_58[16];
   Active *local_48;
   Active *pAStack_40;
   long local_30;
   pPVar5 = *(Point_conflict**)( param_1 + 0x10 );
   pPVar6 = *(Point_conflict**)param_1;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pPVar8 = *(Point_conflict**)( param_1 + 8 );
   pPVar7 = *(Point_conflict**)( param_1 + 0x18 );
   dVar10 = (double)( *(long*)( param_2 + 0x10 ) - *(long*)param_2 );
   dVar11 = (double)( *(long*)( param_2 + 0x18 ) - *(long*)( param_2 + 8 ) );
   dVar9 = (double)( (long)pPVar7 - (long)pPVar8 ) * dVar10 - (double)( (long)pPVar5 - (long)pPVar6 ) * dVar11;
   if (dVar9 == 0.0) {
      pPVar5 = *(Point_conflict**)( param_1 + 0x20 );
      bVar2 = false;
      pPVar7 = (Point_conflict*)param_3;
      LAB_001052d9:lVar4 = *(long*)( this + 0x18 );
      if ((long)pPVar7 <= lVar4) {
         LAB_001052e6:local_58._8_8_ = pPVar7;
         local_58._0_8_ = pPVar5;
         if (!bVar2) goto LAB_00105263;
      }
   } else {
      dVar9 = ( (double)( (long)pPVar6 - *(long*)param_2 ) * dVar11 - dVar10 * (double)( (long)pPVar8 - *(long*)( param_2 + 8 ) ) ) / dVar9;
      if (dVar9 <= 0.0) {
         LAB_00105354:bVar2 = (long)pPVar8 < param_3;
         pPVar5 = pPVar6;
         pPVar7 = pPVar8;
         goto LAB_001052d9;
      }
      if (dVar9 < _LC1) {
         pPVar6 = (Point_conflict*)(long)( (double)(long)pPVar6 + (double)( (long)pPVar5 - (long)pPVar6 ) * dVar9 );
         pPVar8 = (Point_conflict*)(long)( (double)(long)pPVar8 + (double)( (long)pPVar7 - (long)pPVar8 ) * dVar9 );
         goto LAB_00105354;
      }
      lVar4 = *(long*)( this + 0x18 );
      bVar2 = (long)pPVar7 < param_3;
      if ((long)pPVar7 <= lVar4) goto LAB_001052e6;
   }
   dVar9 = (double)( *(ulong*)( param_1 + 0x28 ) & _LC8 );
   dVar10 = (double)( *(ulong*)( param_2 + 0x28 ) & _LC8 );
   if (dVar9 <= _LC14) {
      if (dVar10 <= _LC14) {
         if (param_3 <= (long)pPVar7) {
            param_3 = lVar4;
         }
         if (dVar10 <= dVar9) {
            uVar3 = TopX(param_2, param_3);
            local_58._8_8_ = param_3;
            local_58._0_8_ = uVar3;
         } else {
            uVar3 = TopX(param_1, param_3);
            local_58._8_8_ = param_3;
            local_58._0_8_ = uVar3;
         }
         goto LAB_00105263;
      }
   } else if (( dVar10 <= _LC14 ) || ( dVar10 < dVar9 )) {
      local_58 = GetClosestPointOnSegment<long>(pPVar5, pPVar7, (Point_conflict*)param_1);
      goto LAB_00105263;
   }
   local_58 = GetClosestPointOnSegment<long>(pPVar5, pPVar7, (Point_conflict*)param_2);
   LAB_00105263:pauVar1 = *(undefined1(**) [16])( this + 0x98 );
   local_48 = param_1;
   pAStack_40 = param_2;
   if (pauVar1 == *(undefined1(**) [16])( this + 0xa0 )) {
      std::vector<Clipper2Lib::IntersectNode,std::allocator<Clipper2Lib::IntersectNode>>::_M_realloc_insert<Clipper2Lib::IntersectNode>((vector<Clipper2Lib::IntersectNode,std::allocator<Clipper2Lib::IntersectNode>>*)( this + 0x90 ), pauVar1, local_58);
   } else {
      *pauVar1 = local_58;
      *(Active**)pauVar1[1] = param_1;
      *(Active**)( pauVar1[1] + 8 ) = param_2;
      *(undefined1(**) [16])( this + 0x98 ) = pauVar1 + 2;
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Clipper2Lib::ClipperBase::BuildIntersectList(long) */undefined8 Clipper2Lib::ClipperBase::BuildIntersectList(ClipperBase *this, long param_1) {
   long lVar1;
   Active *pAVar2;
   Active *pAVar3;
   Active *pAVar4;
   Active *pAVar5;
   long lVar6;
   double dVar7;
   Active *local_48;
   Active *local_40;
   pAVar4 = *(Active**)( this + 0x28 );
   if (pAVar4 == (Active*)0x0) {
      return 0;
   }
   pAVar5 = *(Active**)( pAVar4 + 0x50 );
   if (pAVar5 == (Active*)0x0) {
      return 0;
   }
   *(Active**)( this + 0x30 ) = pAVar4;
   pAVar2 = pAVar4;
   while (true) {
      *(Active**)( pAVar2 + 0x68 ) = pAVar5;
      *(long*)( pAVar2 + 0x58 ) = *(long*)( pAVar2 + 0x48 );
      *(Active**)( pAVar2 + 0x60 ) = pAVar5;
      if (*(int*)( pAVar2 + 0x84 ) == 1) {
         *(long*)( pAVar2 + 0x20 ) = *(long*)( *(long*)( pAVar2 + 0x48 ) + 0x20 );
      } else {
         lVar6 = *(long*)( pAVar2 + 0x10 );
         if (( ( param_1 != *(long*)( pAVar2 + 0x18 ) ) && ( lVar1 = *(long*)pAVar2 ),lVar1 != lVar6 )) {
            dVar7 = nearbyint((double)( param_1 - *(long*)( pAVar2 + 8 ) ) * *(double*)( pAVar2 + 0x28 ));
            lVar6 = lVar1 + (long)dVar7;
         }
         *(long*)( pAVar2 + 0x20 ) = lVar6;
      }
      if (pAVar5 == (Active*)0x0) break;
      pAVar2 = pAVar5;
      pAVar5 = *(Active**)( pAVar5 + 0x50 );
   };
   LAB_00105471:pAVar5 = *(Active**)( pAVar4 + 0x68 );
   if (pAVar5 != (Active*)0x0) {
      local_40 = (Active*)0x0;
      do {
         pAVar2 = *(Active**)( pAVar5 + 0x68 );
         *(Active**)( pAVar4 + 0x68 ) = pAVar2;
         local_48 = pAVar4;
         if (( pAVar2 != pAVar5 ) && ( pAVar5 != pAVar4 )) {
            do {
               if (*(long*)( pAVar5 + 0x20 ) < *(long*)( pAVar4 + 0x20 )) {
                  for (pAVar3 = *(Active**)( pAVar5 + 0x58 ); AddNewIntersectNode(this, pAVar3, pAVar5, param_1),pAVar3 != pAVar4; pAVar3 = *(Active**)( pAVar3 + 0x58 )) {}
                  pAVar3 = *(Active**)( pAVar5 + 0x60 );
                  if (pAVar3 != (Active*)0x0) {
                     *(long*)( pAVar3 + 0x58 ) = *(long*)( pAVar5 + 0x58 );
                  }
                  *(Active**)( *(long*)( pAVar5 + 0x58 ) + 0x60 ) = pAVar3;
                  lVar6 = *(long*)( pAVar4 + 0x58 );
                  *(long*)( pAVar5 + 0x58 ) = lVar6;
                  if (lVar6 != 0) {
                     *(Active**)( lVar6 + 0x60 ) = pAVar5;
                  }
                  *(Active**)( pAVar5 + 0x60 ) = pAVar4;
                  *(Active**)( pAVar4 + 0x58 ) = pAVar5;
                  if (pAVar4 == local_48) {
                     *(Active**)( pAVar5 + 0x68 ) = pAVar2;
                     local_48 = pAVar5;
                     if (local_40 == (Active*)0x0) {
                        *(Active**)( this + 0x30 ) = pAVar5;
                     } else {
                        *(Active**)( local_40 + 0x68 ) = pAVar5;
                     }
                     goto LAB_001054bc;
                  }
                  if (pAVar4 == pAVar3) break;
               } else {
                  pAVar4 = *(Active**)( pAVar4 + 0x60 );
                  pAVar3 = pAVar5;
                  LAB_001054bc:if (pAVar4 == pAVar3) break;
               }
               pAVar5 = pAVar3;
            } while ( pAVar2 != pAVar3 );
         }
         if (( pAVar2 == (Active*)0x0 ) || ( pAVar5 = *(Active**)( pAVar2 + 0x68 ) ),pAVar5 == (Active*)0x0) goto LAB_00105591;
         local_40 = local_48;
         pAVar4 = pAVar2;
      } while ( true );
   }
   goto LAB_0010559e;
   LAB_00105591:pAVar4 = *(Active**)( this + 0x30 );
   if (pAVar4 == (Active*)0x0) {
      LAB_0010559e:return CONCAT71(( int7 )(( ulong ) * (long*)( this + 0x90 ) >> 8), *(long*)( this + 0x98 ) != *(long*)( this + 0x90 ));
   }
   goto LAB_00105471;
}/* Clipper2Lib::ClipperBase::DoHorizontal(Clipper2Lib::Active&) */void Clipper2Lib::ClipperBase::DoHorizontal(ClipperBase *this, Active *param_1) {
   Active *pAVar1;
   Point_conflict *pPVar2;
   char cVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   uint uVar9;
   Active *pAVar10;
   long *plVar11;
   long lVar12;
   long lVar13;
   long in_FS_OFFSET;
   bool bVar14;
   double dVar15;
   long local_a0;
   long local_98;
   long local_68;
   long lStack_60;
   long local_58;
   undefined8 uStack_50;
   undefined1 local_48;
   undefined7 uStack_47;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = 0;
   lStack_60 = 0;
   cVar3 = *(char*)( *(long*)( param_1 + 0x78 ) + 0xc );
   lVar5 = *(long*)( param_1 + 0x70 );
   lVar7 = *(long*)( lVar5 + 8 );
   if (cVar3 == '\0') {
      if (*(int*)( param_1 + 0x30 ) < 1) {
         do {
            lVar13 = lVar5;
            lVar8 = *(long*)( *(long*)( lVar13 + 0x18 ) + 8 );
            bVar14 = lVar8 == lVar7;
            lVar5 = *(long*)( lVar13 + 0x18 );
            lVar7 = lVar8;
         } while ( bVar14 );
      } else {
         do {
            lVar13 = lVar5;
            lVar8 = *(long*)( *(long*)( lVar13 + 0x10 ) + 8 );
            bVar14 = lVar8 == lVar7;
            lVar5 = *(long*)( lVar13 + 0x10 );
            lVar7 = lVar8;
         } while ( bVar14 );
      }
      if (( *(byte*)( lVar13 + 0x20 ) & 4 ) == 0) {
         lVar13 = 0;
      }
      local_a0 = *(long*)( param_1 + 0x10 );
      if (*(long*)param_1 == local_a0) goto LAB_00105c98;
   } else {
      if (*(int*)( param_1 + 0x30 ) < 1) {
         do {
            lVar13 = lVar5;
            uVar9 = *(uint*)( lVar13 + 0x20 );
            lVar8 = *(long*)( *(long*)( lVar13 + 0x18 ) + 8 );
            if (lVar7 != lVar8) break;
            lVar5 = *(long*)( lVar13 + 0x18 );
            lVar7 = lVar8;
         } while ( ( uVar9 & 6 ) == 0 );
      } else {
         do {
            lVar13 = lVar5;
            uVar9 = *(uint*)( lVar13 + 0x20 );
            lVar8 = *(long*)( *(long*)( lVar13 + 0x10 ) + 8 );
            if (lVar7 != lVar8) break;
            lVar5 = *(long*)( lVar13 + 0x10 );
            lVar7 = lVar8;
         } while ( ( uVar9 & 6 ) == 0 );
      }
      if (( uVar9 & 4 ) == 0) {
         lVar13 = 0;
      }
      local_a0 = *(long*)( param_1 + 0x10 );
      if (*(long*)param_1 == local_a0) {
         LAB_00105c98:local_98 = *(long*)( param_1 + 0x20 );
         for (lVar5 = *(long*)( param_1 + 0x50 ); local_a0 = local_98,lVar5 != 0; lVar5 = *(long*)( lVar5 + 0x50 )) {
            if (lVar13 == *(long*)( lVar5 + 0x70 )) {
               bVar14 = true;
               goto LAB_0010568e;
            }
         }
         bVar14 = false;
         goto LAB_0010568e;
      }
   }
   lVar5 = *(long*)( param_1 + 0x20 );
   bVar14 = false;
   local_98 = lVar5;
   if (lVar5 < local_a0) {
      bVar14 = true;
      local_98 = local_a0;
      local_a0 = lVar5;
   }
   LAB_0010568e:if (*(long*)( param_1 + 0x40 ) != 0) {
      local_58 = *(long*)( param_1 + 0x20 );
      uStack_50 = *(undefined8*)( param_1 + 8 );
      lVar5 = AddOutPt(this, param_1, (Point_conflict*)&local_58);
      if (*(char*)( *(long*)( lVar5 + 0x20 ) + 0x78 ) == '\0') {
         plVar11 = *(long**)( this + 0xb0 );
         uStack_50 = 0;
         local_48 = 1;
         local_58 = lVar5;
         if (plVar11 == *(long**)( this + 0xb8 )) {
            std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>::_M_realloc_insert<Clipper2Lib::HorzSegment>((vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>*)( this + 0xa8 ), plVar11, (Point_conflict*)&local_58);
         } else {
            *plVar11 = lVar5;
            plVar11[1] = 0;
            plVar11[2] = CONCAT71(uStack_47, 1);
            *(long**)( this + 0xb0 ) = plVar11 + 3;
         }
      }
   }
   pAVar10 = *(Active**)( param_1 + 0x50 );
   if (bVar14) goto LAB_0010571f;
   pAVar10 = *(Active**)( param_1 + 0x48 );
   LAB_0010571c:bVar14 = false;
   LAB_0010571f:lVar5 = local_98;
   joined_r0x0010572d:local_98 = lVar5;
   if (pAVar10 == (Active*)0x0) {
      lVar5 = *(long*)( param_1 + 0x70 );
      goto LAB_00105a50;
   }
   do {
      if (*(long*)( pAVar10 + 0x70 ) == lVar13) {
         if (( *(long*)( param_1 + 0x40 ) != 0 ) && ( ( *(int*)( pAVar10 + 0x84 ) == 0 || ( Split(this, pAVar10, (Point_conflict*)( pAVar10 + 0x10 )),*(long*)( param_1 + 0x40 ) != 0 ) ) )) {
            pPVar2 = (Point_conflict*)( param_1 + 0x10 );
            lVar5 = *(long*)( param_1 + 0x70 );
            while (lVar13 != lVar5) {
               AddOutPt(this, param_1, pPVar2);
               UpdateEdgeIntoAEL(this, param_1);
               lVar5 = *(long*)( param_1 + 0x70 );
            };
            if (bVar14) {
               AddLocalMaxPoly(this, param_1, pAVar10, pPVar2);
            } else {
               AddLocalMaxPoly(this, pAVar10, param_1, pPVar2);
            }
         }
         DeleteFromAEL(this, pAVar10);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            LAB_00105c40:DeleteFromAEL(this, param_1);
            return;
         }
         LAB_00105ef4:/* WARNING: Subroutine does not return */__stack_chk_fail();
      }
      lVar5 = *(long*)( param_1 + 0x70 );
      lVar7 = *(long*)( pAVar10 + 0x20 );
      if (( lVar5 == lVar13 ) && ( ( *(byte*)( lVar13 + 0x20 ) & 3 ) == 0 )) {
         lStack_60 = *(long*)( param_1 + 8 );
         if (bVar14) {
            LAB_0010588f:local_68 = lVar7;
            IntersectEdges(this, param_1, pAVar10, (Point_conflict*)&local_68);
            lVar5 = *(long*)( pAVar10 + 0x50 );
            if (lVar5 != 0) {
               *(Active**)( lVar5 + 0x48 ) = param_1;
            }
            lVar7 = *(long*)( param_1 + 0x48 );
            if (lVar7 != 0) {
               *(Active**)( lVar7 + 0x50 ) = pAVar10;
            }
            *(long*)( pAVar10 + 0x48 ) = lVar7;
            *(Active**)( pAVar10 + 0x50 ) = param_1;
            *(Active**)( param_1 + 0x48 ) = pAVar10;
            *(long*)( param_1 + 0x50 ) = lVar5;
            if (*(long*)( pAVar10 + 0x48 ) == 0) {
               *(Active**)( this + 0x28 ) = pAVar10;
            }
            CheckJoinLeft(this, pAVar10, (Point_conflict*)&local_68, false);
            pAVar1 = pAVar10 + 0x20;
            pAVar10 = *(Active**)( param_1 + 0x50 );
            *(undefined8*)( param_1 + 0x20 ) = *(undefined8*)pAVar1;
         } else {
            LAB_00105763:local_68 = lVar7;
            IntersectEdges(this, pAVar10, param_1, (Point_conflict*)&local_68);
            lVar5 = *(long*)( param_1 + 0x50 );
            if (lVar5 != 0) {
               *(Active**)( lVar5 + 0x48 ) = pAVar10;
            }
            lVar7 = *(long*)( pAVar10 + 0x48 );
            if (lVar7 != 0) {
               *(Active**)( lVar7 + 0x50 ) = param_1;
            }
            *(long*)( param_1 + 0x48 ) = lVar7;
            *(Active**)( param_1 + 0x50 ) = pAVar10;
            *(Active**)( pAVar10 + 0x48 ) = param_1;
            *(long*)( pAVar10 + 0x50 ) = lVar5;
            if (*(long*)( param_1 + 0x48 ) == 0) {
               *(Active**)( this + 0x28 ) = param_1;
            }
            CheckJoinRight(this, pAVar10, (Point_conflict*)&local_68, false);
            pAVar1 = pAVar10 + 0x20;
            pAVar10 = *(Active**)( param_1 + 0x48 );
            *(undefined8*)( param_1 + 0x20 ) = *(undefined8*)pAVar1;
         }
         lVar7 = *(long*)( param_1 + 0x40 );
         lVar5 = local_98;
         if (lVar7 != 0) {
            lVar8 = *(long*)( lVar7 + 0x20 );
            if (param_1 != *(Active**)( lVar7 + 0x10 )) {
               lVar8 = *(long*)( lVar8 + 0x10 );
            }
            if (*(char*)( *(long*)( lVar8 + 0x20 ) + 0x78 ) == '\0') {
               plVar11 = *(long**)( this + 0xb0 );
               uStack_50 = 0;
               local_48 = 1;
               local_58 = lVar8;
               if (plVar11 == *(long**)( this + 0xb8 )) {
                  std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>::_M_realloc_insert<Clipper2Lib::HorzSegment>((vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>*)( this + 0xa8 ), plVar11, &local_58);
               } else {
                  *plVar11 = lVar8;
                  plVar11[1] = 0;
                  plVar11[2] = CONCAT71(uStack_47, 1);
                  *(long**)( this + 0xb0 ) = plVar11 + 3;
               }
            }
         }
         goto joined_r0x0010572d;
      }
      if (bVar14) {
         if (lVar7 <= local_98) {
            if (*(long*)( param_1 + 0x10 ) == lVar7) {
               lVar8 = *(long*)( pAVar10 + 0x18 );
               lVar6 = *(long*)( pAVar10 + 8 );
               if (lVar6 != lVar8) {
                  LAB_00105991:plVar11 = *(long**)( lVar5 + 0x18 );
                  if (0 < *(int*)( param_1 + 0x30 )) {
                     plVar11 = *(long**)( lVar5 + 0x10 );
                  }
                  lVar4 = *plVar11;
                  lStack_60 = plVar11[1];
                  lVar12 = *(long*)( pAVar10 + 0x78 );
                  local_68 = lVar4;
                  if (bVar14) {
                     if (( ( *(char*)( lVar12 + 0xc ) == '\0' ) || ( *(int*)( lVar12 + 8 ) == *(int*)( *(long*)( param_1 + 0x78 ) + 8 ) ) ) || ( *(long*)( pAVar10 + 0x40 ) != 0 )) {
                        lVar12 = *(long*)( pAVar10 + 0x10 );
                        if (( ( lStack_60 != lVar8 ) && ( lVar8 = *(long*)pAVar10 ),lVar8 != lVar12 )) {
                           dVar15 = nearbyint((double)( lStack_60 - lVar6 ) * *(double*)( pAVar10 + 0x28 ));
                           lVar12 = lVar8 + (long)dVar15;
                        }
                        if (lVar12 < lVar4) goto LAB_00105881;
                     } else {
                        lVar8 = TopX(pAVar10, lStack_60);
                        if (lVar8 <= lVar4) goto LAB_00105881;
                     }
                  } else if (( ( *(char*)( lVar12 + 0xc ) == '\0' ) || ( *(int*)( lVar12 + 8 ) == *(int*)( *(long*)( param_1 + 0x78 ) + 8 ) ) ) || ( *(long*)( pAVar10 + 0x40 ) != 0 )) {
                     lVar12 = *(long*)( pAVar10 + 0x10 );
                     if (( ( lStack_60 != lVar8 ) && ( lVar12 = *(long*)pAVar10 * (long*)( pAVar10 + 0x10 ) != lVar12 ) ) && ( lStack_60 != lVar6 )) {
                        dVar15 = nearbyint((double)( lStack_60 - lVar6 ) * *(double*)( pAVar10 + 0x28 ));
                        lVar12 = lVar12 + (long)dVar15;
                     }
                     if (lVar4 < lVar12) goto LAB_00105755;
                  } else {
                     lVar8 = TopX(pAVar10, lStack_60);
                     if (lVar4 <= lVar8) {
                        lStack_60 = *(long*)( param_1 + 8 );
                        goto LAB_00105763;
                     }
                  }
                  goto LAB_00105a50;
               }
            }
            LAB_00105881:lStack_60 = *(long*)( param_1 + 8 );
            goto LAB_0010588f;
         }
      } else if (local_a0 <= lVar7) {
         if (*(long*)( param_1 + 0x10 ) == lVar7) {
            lVar8 = *(long*)( pAVar10 + 0x18 );
            lVar6 = *(long*)( pAVar10 + 8 );
            if (lVar6 != lVar8) goto LAB_00105991;
         }
         LAB_00105755:lStack_60 = *(long*)( param_1 + 8 );
         goto LAB_00105763;
      }
      LAB_00105a50:if (( cVar3 != '\0' ) && ( ( *(byte*)( lVar5 + 0x20 ) & 3 ) != 0 )) {
         if (*(long*)( param_1 + 0x40 ) != 0) {
            AddOutPt(this, param_1, (Point_conflict*)( param_1 + 0x10 ));
            lVar5 = *(long*)( param_1 + 0x40 );
            if (param_1 == *(Active**)( lVar5 + 0x10 )) {
               *(undefined8*)( lVar5 + 0x10 ) = 0;
            } else {
               *(undefined8*)( lVar5 + 0x18 ) = 0;
            }
            *(undefined8*)( param_1 + 0x40 ) = 0;
         }
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_00105c40;
         goto LAB_00105ef4;
      }
      lVar7 = *(long*)( lVar5 + 0x18 );
      if (0 < *(int*)( param_1 + 0x30 )) {
         lVar7 = *(long*)( lVar5 + 0x10 );
      }
      if (*(long*)( lVar7 + 8 ) != *(long*)( param_1 + 0x18 )) {
         if (( *(long*)( param_1 + 0x40 ) != 0 ) && ( lVar5 = AddOutPt(this, param_1, (Point_conflict*)( param_1 + 0x10 )) * (char*)( *(long*)( lVar5 + 0x20 ) + 0x78 ) == '\0' )) {
            plVar11 = *(long**)( this + 0xb0 );
            uStack_50 = 0;
            local_48 = 1;
            local_58 = lVar5;
            if (plVar11 == *(long**)( this + 0xb8 )) {
               std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>::_M_realloc_insert<Clipper2Lib::HorzSegment>((vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>*)( this + 0xa8 ), plVar11, &local_58);
            } else {
               *plVar11 = lVar5;
               plVar11[1] = 0;
               plVar11[2] = CONCAT71(uStack_47, 1);
               *(long**)( this + 0xb0 ) = plVar11 + 3;
            }
         }
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            UpdateEdgeIntoAEL(this, param_1);
            return;
         }
         goto LAB_00105ef4;
      }
      if (*(long*)( param_1 + 0x40 ) != 0) {
         AddOutPt(this, param_1, (Point_conflict*)( param_1 + 0x10 ));
      }
      UpdateEdgeIntoAEL(this, param_1);
      lVar5 = *(long*)( param_1 + 0x10 );
      if (*(long*)param_1 != lVar5) break;
      local_98 = *(long*)( param_1 + 0x20 );
      pAVar10 = *(Active**)( param_1 + 0x50 );
      pAVar1 = pAVar10;
      while (true) {
         local_a0 = local_98;
         if (pAVar1 == (Active*)0x0) {
            pAVar10 = *(Active**)( param_1 + 0x48 );
            goto LAB_0010571c;
         }
         if (lVar13 == *(long*)( pAVar1 + 0x70 )) break;
         pAVar1 = *(Active**)( pAVar1 + 0x50 );
      };
      bVar14 = true;
   } while ( true );
   local_98 = *(long*)( param_1 + 0x20 );
   pAVar10 = *(Active**)( param_1 + 0x50 );
   bVar14 = true;
   local_a0 = local_98;
   if (lVar5 <= local_98) goto code_r0x00105ac8;
   goto joined_r0x0010572d;
   code_r0x00105ac8:pAVar10 = *(Active**)( param_1 + 0x48 );
   local_a0 = lVar5;
   goto LAB_0010571c;
}/* Clipper2Lib::BuildPathD(Clipper2Lib::OutPt*, bool, bool, std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > >&, double) */uint Clipper2Lib::BuildPathD(OutPt *param_1, bool param_2, bool param_3, vector *param_4, double param_5) {
   OutPt *pOVar1;
   double *pdVar2;
   long lVar3;
   uint uVar4;
   OutPt *pOVar5;
   long lVar6;
   double *pdVar7;
   long lVar8;
   long in_FS_OFFSET;
   double local_58;
   double dStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 == (OutPt*)0x0 ) || ( pOVar1 = *(OutPt**)( param_1 + 0x10 ) ),pOVar1 == param_1 )) {
      uVar4 = 0;
   } else {
      pdVar2 = *(double**)param_4;
      if (*(double**)( param_4 + 8 ) != pdVar2) {
         *(double**)( param_4 + 8 ) = pdVar2;
      }
      if (param_2) {
         lVar6 = *(long*)param_1;
         lVar8 = *(long*)( param_1 + 8 );
         pOVar5 = *(OutPt**)( param_1 + 0x18 );
      } else {
         lVar6 = *(long*)pOVar1;
         lVar8 = *(long*)( pOVar1 + 8 );
         pOVar5 = *(OutPt**)( pOVar1 + 0x10 );
         param_1 = pOVar1;
      }
      local_58 = (double)lVar6 * param_5;
      dStack_50 = (double)lVar8 * param_5;
      if (pdVar2 == *(double**)( param_4 + 0x10 )) {
         std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::_M_realloc_insert<Clipper2Lib::Point<double>>((vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>*)param_4, pdVar2, &local_58);
         pdVar7 = *(double**)( param_4 + 8 );
      } else {
         pdVar7 = pdVar2 + 2;
         *pdVar2 = local_58;
         pdVar2[1] = dStack_50;
         *(double**)( param_4 + 8 ) = pdVar7;
      }
      if (param_1 != pOVar5) {
         do {
            lVar3 = *(long*)pOVar5;
            if (( lVar6 != lVar3 ) || ( *(long*)( pOVar5 + 8 ) != lVar8 )) {
               lVar8 = *(long*)( pOVar5 + 8 );
               local_58 = (double)lVar3 * param_5;
               dStack_50 = (double)lVar8 * param_5;
               if (*(double**)( param_4 + 0x10 ) == pdVar7) {
                  std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::_M_realloc_insert<Clipper2Lib::Point<double>>((vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>*)param_4, pdVar7, &local_58);
                  pdVar7 = *(double**)( param_4 + 8 );
               } else {
                  *pdVar7 = local_58;
                  pdVar7[1] = dStack_50;
                  *(double**)( param_4 + 8 ) = pdVar7 + 2;
                  pdVar7 = pdVar7 + 2;
               }
            }
            pOVar1 = pOVar5 + 0x18;
            pOVar5 = *(OutPt**)( pOVar5 + 0x10 );
            if (param_2) {
               pOVar5 = *(OutPt**)pOVar1;
            }
            lVar6 = lVar3;
         } while ( param_1 != pOVar5 );
      }
      uVar4 = 1;
      if ((long)pdVar7 - *(long*)param_4 == 0x30) {
         uVar4 = IsVerySmallTriangle(pOVar5);
         uVar4 = uVar4 ^ 1;
      }
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar4;
}/* Clipper2Lib::ClipperD::BuildPathsD(std::vector<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > >,
   std::allocator<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double>
   > > > >&, std::vector<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > >,
   std::allocator<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double>
   > > > >*) */void Clipper2Lib::ClipperD::BuildPathsD(ClipperD *this, vector *param_1, vector *param_2) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   void *pvVar3;
   OutRec *pOVar4;
   char cVar5;
   long lVar6;
   ulong uVar7;
   undefined8 *puVar8;
   long in_FS_OFFSET;
   undefined1 local_58[16];
   long local_48;
   long local_40;
   puVar1 = *(undefined8**)( param_1 + 8 );
   puVar2 = *(undefined8**)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar8 = puVar2;
   if (puVar1 != puVar2) {
      do {
         pvVar3 = (void*)*puVar8;
         if (pvVar3 != (void*)0x0) {
            operator_delete(pvVar3, puVar8[2] - (long)pvVar3);
         }
         puVar8 = puVar8 + 3;
      } while ( puVar1 != puVar8 );
      *(undefined8**)( param_1 + 8 ) = puVar2;
   }
   std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>::reserve((vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>*)param_1, *(long*)( this + 0xf0 ) - *(long*)( this + 0xe8 ) >> 3);
   if (param_2 != (vector*)0x0) {
      puVar1 = *(undefined8**)( param_2 + 8 );
      puVar2 = *(undefined8**)param_2;
      puVar8 = puVar2;
      if (puVar1 != puVar2) {
         do {
            pvVar3 = (void*)*puVar8;
            if (pvVar3 != (void*)0x0) {
               operator_delete(pvVar3, puVar8[2] - (long)pvVar3);
            }
            puVar8 = puVar8 + 3;
         } while ( puVar1 != puVar8 );
         *(undefined8**)( param_2 + 8 ) = puVar2;
      }
      std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>::reserve((vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>*)param_2, *(long*)( this + 0xf0 ) - *(long*)( this + 0xe8 ) >> 3);
   }
   lVar6 = *(long*)( this + 0xe8 );
   if (*(long*)( this + 0xf0 ) != lVar6) {
      uVar7 = 0;
      do {
         pOVar4 = *(OutRec**)( lVar6 + uVar7 * 8 );
         if (*(OutPt**)( pOVar4 + 0x20 ) != (OutPt*)0x0) {
            local_48 = 0;
            local_58 = (undefined1[16])0x0;
            if (( param_2 == (vector*)0x0 ) || ( pOVar4[0x78] == (OutRec)0x0 )) {
               ClipperBase::CleanCollinear((ClipperBase*)this, pOVar4);
               cVar5 = BuildPathD(*(OutPt**)( pOVar4 + 0x20 ), (bool)this[0xd9], false, (vector*)local_58, *(double*)( this + 0x108 ));
               if (cVar5 != '\0') {
                  std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator < Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>> > ::emplace_back<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>((vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>*)param_1, (vector*)local_58);
               }
            } else {
               cVar5 = BuildPathD(*(OutPt**)( pOVar4 + 0x20 ), (bool)this[0xd9], true, (vector*)local_58, *(double*)( this + 0x108 ));
               if (cVar5 != '\0') {
                  std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator < Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>> > ::emplace_back<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>((vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>*)param_2, (vector*)local_58);
               }
            }
            if ((void*)local_58._0_8_ != (void*)0x0) {
               operator_delete((void*)local_58._0_8_, local_48 - local_58._0_8_);
            }
            lVar6 = *(long*)( this + 0xe8 );
         }
         uVar7 = uVar7 + 1;
      } while ( uVar7 < ( ulong )(*(long*)( this + 0xf0 ) - lVar6 >> 3) );
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* Clipper2Lib::ClipperD::BuildTreeD(Clipper2Lib::PolyPathD&,
   std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > >&) */void Clipper2Lib::ClipperD::BuildTreeD(PolyPathD *param_1, vector *param_2) {
   undefined1(*pauVar1)[16];
   OutRec *pOVar2;
   undefined1(*pauVar3)[16];
   undefined8 uVar4;
   undefined8 uVar5;
   char cVar6;
   void *pvVar7;
   undefined1(*pauVar8)[16];
   undefined8 *puVar9;
   vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>> *in_RDX;
   ulong uVar10;
   long lVar11;
   undefined1(*extraout_RDX)[16];
   undefined1(*pauVar12)[16];
   undefined8 *puVar13;
   void *pvVar14;
   ulong uVar15;
   undefined8 *puVar16;
   ulong uVar17;
   ulong in_R8;
   long in_FS_OFFSET;
   undefined1 local_58[16];
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( *(long*)param_2 + 0x18 ) == PolyPathD::Clear) {
      std::vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>::resize((vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>*)( param_2 + 0x10 ), 0);
   } else {
      ( **(code**)( *(long*)param_2 + 0x18 ) )(param_2);
   }
   puVar9 = *(undefined8**)( in_RDX + 8 );
   puVar16 = *(undefined8**)in_RDX;
   puVar13 = puVar16;
   if (puVar9 != puVar16) {
      do {
         pvVar14 = (void*)*puVar13;
         if (pvVar14 != (void*)0x0) {
            operator_delete(pvVar14, puVar13[2] - (long)pvVar14);
         }
         puVar13 = puVar13 + 3;
      } while ( puVar9 != puVar13 );
      *(undefined8**)( in_RDX + 8 ) = puVar16;
   }
   if (param_1[0xe0] != (PolyPathD)0x0) {
      std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>::reserve(in_RDX, *(long*)( param_1 + 0xf0 ) - *(long*)( param_1 + 0xe8 ) >> 3);
   }
   lVar11 = *(long*)( param_1 + 0xe8 );
   uVar15 = 0;
   if (lVar11 != *(long*)( param_1 + 0xf0 )) {
      do {
         pOVar2 = *(OutRec**)( lVar11 + uVar15 * 8 );
         if (( pOVar2 != (OutRec*)0x0 ) && ( *(OutPt**)( pOVar2 + 0x20 ) != (OutPt*)0x0 )) {
            if (pOVar2[0x78] == (OutRec)0x0) {
               cVar6 = ClipperBase::CheckBounds((ClipperBase*)param_1, pOVar2);
               if (cVar6 != '\0') {
                  ClipperBase::RecursiveCheckOwners((ClipperBase*)param_1, pOVar2, (PolyPath*)param_2);
               }
               LAB_001063bb:lVar11 = *(long*)( param_1 + 0xe8 );
            } else {
               pauVar8 = (undefined1(*) [16])(ulong)(byte)param_1[0xd9];
               local_58 = (undefined1[16])0x0;
               local_48 = 0;
               cVar6 = BuildPathD(*(OutPt**)( pOVar2 + 0x20 ), (bool)param_1[0xd9], true, (vector*)local_58, *(double*)( param_1 + 0x108 ));
               pvVar14 = (void*)local_58._0_8_;
               if (cVar6 == '\0') {
                  LAB_00106430:if (pvVar14 == (void*)0x0) goto LAB_001063bb;
               } else {
                  pauVar3 = *(undefined1(**) [16])( in_RDX + 8 );
                  if (pauVar3 == *(undefined1(**) [16])( in_RDX + 0x10 )) {
                     pauVar12 = *(undefined1(**) [16])in_RDX;
                     pvVar14 = (void*)( (long)pauVar3 - (long)pauVar12 );
                     uVar17 = ( (long)pvVar14 >> 3 ) * -0x5555555555555555;
                     uVar10 = 0x555555555555555;
                     if (uVar17 == 0x555555555555555) {
                        /* WARNING: Subroutine does not return */
                        std::__throw_length_error("vector::_M_realloc_insert");
                     }
                     if (pauVar3 == pauVar12) {
                        if (uVar17 != 0xffffffffffffffff) {
                           uVar10 = 0x555555555555555;
                           if (uVar17 + 1 < 0x555555555555556) {
                              uVar10 = uVar17 + 1;
                           }
                           uVar17 = uVar10 * 0x18;
                           goto LAB_00106748;
                        }
                     } else {
                        in_R8 = ( (long)pvVar14 >> 3 ) * 0x5555555555555556;
                        if (uVar17 <= in_R8) {
                           if (in_R8 != 0) goto LAB_001067a4;
                           puVar9 = (undefined8*)0x0;
                           goto LAB_001065d3;
                        }
                     }
                     uVar17 = 0x7ffffffffffffff8;
                     goto LAB_00106748;
                  }
                  uVar4 = local_58._8_8_;
                  *(undefined8*)pauVar3[1] = 0;
                  *pauVar3 = (undefined1[16])0x0;
                  uVar10 = local_58._8_8_ - local_58._0_8_;
                  if (uVar10 == 0) {
                     pvVar7 = (void*)0x0;
                     pauVar8 = pauVar3;
                  } else {
                     if (0x7ffffffffffffff0 < uVar10) {
                        do {
                           if ((long)uVar10 < 0) {
                              pvVar7 = (void*)std::__throw_bad_array_new_length();
                              goto LAB_00106771;
                           }
                           std::__throw_bad_alloc();
                           pauVar12 = extraout_RDX;
                           LAB_001067a4:uVar10 = in_R8;
                           if (0x555555555555555 < in_R8) {
                              uVar10 = 0x555555555555555;
                           }
                           uVar17 = uVar10 * 0x18;
                           LAB_00106748:puVar9 = (undefined8*)operator_new(uVar17);
                           in_R8 = uVar10;
                           LAB_001065d3:uVar4 = local_58._8_8_;
                           pauVar1 = (undefined1(*) [16])( (long)puVar9 + (long)pvVar14 );
                           pvVar14 = (void*)local_58._0_8_;
                           *(undefined8*)pauVar1[1] = 0;
                           *pauVar1 = (undefined1[16])0x0;
                           uVar10 = local_58._8_8_ - local_58._0_8_;
                           if (uVar10 == 0) {
                              pvVar7 = (void*)0x0;
                              goto LAB_00106652;
                           }
                        } while ( 0x7ffffffffffffff0 < uVar10 );
                        pvVar7 = operator_new(uVar10);
                        LAB_00106652:*(void**)*pauVar1 = pvVar7;
                        *(ulong*)pauVar1[1] = uVar10 + (long)pvVar7;
                        if ((void*)uVar4 != pvVar14) {
                           lVar11 = 0;
                           do {
                              uVar5 = ( (undefined8*)( (long)pvVar14 + lVar11 ) )[1];
                              *(undefined8*)( (long)pvVar7 + lVar11 ) = *(undefined8*)( (long)pvVar14 + lVar11 );
                              ( (undefined8*)( (long)pvVar7 + lVar11 ) )[1] = uVar5;
                              lVar11 = lVar11 + 0x10;
                           } while ( lVar11 != uVar4 - (long)pvVar14 );
                           pvVar7 = (void*)( (long)pvVar7 + lVar11 );
                        }
                        *(void**)( *pauVar1 + 8 ) = pvVar7;
                        pauVar8 = pauVar12;
                        puVar16 = puVar9;
                        if (pauVar3 != pauVar12) {
                           do {
                              uVar5 = *(undefined8*)( *pauVar8 + 8 );
                              uVar4 = *(undefined8*)pauVar8[1];
                              pauVar1 = pauVar8 + 1;
                              *puVar16 = *(undefined8*)*pauVar8;
                              puVar16[1] = uVar5;
                              puVar16[2] = uVar4;
                              pauVar8 = (undefined1(*) [16])( *pauVar1 + 8 );
                              puVar16 = puVar16 + 3;
                           } while ( pauVar3 != (undefined1(*) [16])( *pauVar1 + 8 ) );
                           puVar16 = (undefined8*)( (long)puVar9 + ( (long)pauVar3 + ( -0x18 - (long)pauVar12 ) & 0xfffffffffffffff8U ) + 0x18 );
                        }
                        if (pauVar12 != (undefined1(*) [16])0x0) {
                           operator_delete(pauVar12, *(long*)( in_RDX + 0x10 ) - (long)pauVar12);
                        }
                        *(undefined8**)in_RDX = puVar9;
                        *(undefined8**)( in_RDX + 8 ) = puVar16 + 3;
                        *(undefined8**)( in_RDX + 0x10 ) = puVar9 + in_R8 * 3;
                        goto LAB_00106430;
                     }
                     pvVar7 = operator_new(uVar10);
                     pauVar8 = *(undefined1(**) [16])( in_RDX + 8 );
                  }
                  *(void**)*pauVar3 = pvVar7;
                  *(ulong*)pauVar3[1] = uVar10 + (long)pvVar7;
                  if ((void*)uVar4 == pvVar14) {
                     LAB_00106771:*(void**)( *pauVar3 + 8 ) = pvVar7;
                     *(undefined1**)( in_RDX + 8 ) = pauVar8[1] + 8;
                     goto LAB_00106430;
                  }
                  lVar11 = 0;
                  do {
                     uVar5 = ( (undefined8*)( (long)pvVar14 + lVar11 ) )[1];
                     *(undefined8*)( (long)pvVar7 + lVar11 ) = *(undefined8*)( (long)pvVar14 + lVar11 );
                     ( (undefined8*)( (long)pvVar7 + lVar11 ) )[1] = uVar5;
                     lVar11 = lVar11 + 0x10;
                  } while ( lVar11 != uVar4 - (long)pvVar14 );
                  *(long*)( *pauVar3 + 8 ) = (long)pvVar7 + lVar11;
                  *(undefined1**)( in_RDX + 8 ) = pauVar8[1] + 8;
               }
               operator_delete(pvVar14, local_48 - (long)pvVar14);
               lVar11 = *(long*)( param_1 + 0xe8 );
            }
         }
         uVar15 = uVar15 + 1;
      } while ( uVar15 < ( ulong )(*(long*)( param_1 + 0xf0 ) - lVar11 >> 3) );
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Clipper2Lib::ClipperBase::ProcessIntersectList() */void Clipper2Lib::ClipperBase::ProcessIntersectList(ClipperBase *this) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   ulong uVar5;
   Point_conflict *pPVar6;
   Point_conflict *pPVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   Active *pAVar11;
   Point_conflict *pPVar12;
   Point_conflict *pPVar13;
   Active *pAVar14;
   lVar8 = *(long*)( this + 0x98 );
   lVar10 = *(long*)( this + 0x90 );
   if (lVar8 != lVar10) {
      lVar9 = -2;
      uVar5 = lVar8 - lVar10 >> 5;
      if (uVar5 != 0) {
         lVar9 = 0x3f;
         if (uVar5 != 0) {
            for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {}
         }
         lVar9 = (long)(int)lVar9 * 2;
      }
      std::__introsort_loop<__gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*,std::vector<Clipper2Lib::IntersectNode,std::allocator<Clipper2Lib::IntersectNode>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(Clipper2Lib::IntersectNode_const &, Clipper2Lib::IntersectNode_const &)>>(lVar10, lVar8, lVar9, 0x100000);
      if (lVar8 - lVar10 < 0x201) {
         std::__insertion_sort<__gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*,std::vector<Clipper2Lib::IntersectNode,std::allocator<Clipper2Lib::IntersectNode>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(Clipper2Lib::IntersectNode_const &, Clipper2Lib::IntersectNode_const &)>>(lVar10, lVar8, 0x100000);
      } else {
         lVar9 = lVar10 + 0x200;
         std::__insertion_sort<__gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*,std::vector<Clipper2Lib::IntersectNode,std::allocator<Clipper2Lib::IntersectNode>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(Clipper2Lib::IntersectNode_const &, Clipper2Lib::IntersectNode_const &)>>(lVar10, lVar9, 0x100000);
         for (; lVar8 != lVar9; lVar9 = lVar9 + 0x20) {
            std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*,std::vector<Clipper2Lib::IntersectNode,std::allocator<Clipper2Lib::IntersectNode>>>,__gnu_cxx::__ops::_Val_comp_iter<bool(*)(Clipper2Lib::IntersectNode_const &, Clipper2Lib::IntersectNode_const &)>>(lVar9, 0x100000);
         }
      }
      pPVar12 = *(Point_conflict**)( this + 0x90 );
      if (*(Point_conflict**)( this + 0x90 ) != *(Point_conflict**)( this + 0x98 )) {
         do {
            uVar1 = *(undefined8*)( pPVar12 + 0x10 );
            pAVar11 = *(Active**)( pPVar12 + 0x18 );
            pAVar14 = *(Active**)( pPVar12 + 0x10 );
            pPVar13 = pPVar12 + 0x20;
            if (( pAVar11 != *(Active**)( pAVar14 + 0x50 ) ) && ( pAVar11 != *(Active**)( pAVar14 + 0x48 ) )) {
               lVar8 = *(long*)( pPVar12 + 0x30 );
               lVar10 = *(long*)( pPVar12 + 0x38 );
               pPVar6 = pPVar13;
               pPVar7 = pPVar13;
               if (*(long*)( lVar8 + 0x50 ) != lVar10) {
                  do {
                     pPVar7 = pPVar6;
                     if (*(long*)( lVar8 + 0x48 ) == lVar10) break;
                     lVar8 = *(long*)( pPVar6 + 0x30 );
                     pPVar7 = pPVar6 + 0x20;
                     lVar10 = *(long*)( pPVar6 + 0x38 );
                     pPVar6 = pPVar7;
                  } while ( *(long*)( lVar8 + 0x50 ) != lVar10 );
               }
               uVar2 = *(undefined8*)( pPVar7 + 8 );
               uVar3 = *(undefined8*)pPVar12;
               uVar4 = *(undefined8*)( pPVar12 + 8 );
               *(undefined8*)pPVar12 = *(undefined8*)pPVar7;
               *(undefined8*)( pPVar12 + 8 ) = uVar2;
               uVar2 = *(undefined8*)( pPVar7 + 0x18 );
               *(undefined8*)( pPVar12 + 0x10 ) = *(undefined8*)( pPVar7 + 0x10 );
               *(undefined8*)( pPVar12 + 0x18 ) = uVar2;
               *(undefined8*)( pPVar7 + 0x10 ) = uVar1;
               *(Active**)( pPVar7 + 0x18 ) = pAVar11;
               pAVar11 = *(Active**)( pPVar12 + 0x18 );
               pAVar14 = *(Active**)( pPVar12 + 0x10 );
               *(undefined8*)pPVar7 = uVar3;
               *(undefined8*)( pPVar7 + 8 ) = uVar4;
            }
            IntersectEdges(this, pAVar14, pAVar11, pPVar12);
            pAVar14 = *(Active**)( pPVar12 + 0x18 );
            lVar8 = *(long*)( pPVar12 + 0x10 );
            lVar10 = *(long*)( pAVar14 + 0x50 );
            if (lVar10 != 0) {
               *(long*)( lVar10 + 0x48 ) = lVar8;
            }
            lVar9 = *(long*)( lVar8 + 0x48 );
            if (lVar9 != 0) {
               *(Active**)( lVar9 + 0x50 ) = pAVar14;
            }
            *(long*)( pAVar14 + 0x48 ) = lVar9;
            *(long*)( pAVar14 + 0x50 ) = lVar8;
            *(Active**)( lVar8 + 0x48 ) = pAVar14;
            *(long*)( lVar8 + 0x50 ) = lVar10;
            if (*(long*)( pAVar14 + 0x48 ) == 0) {
               *(Active**)( this + 0x28 ) = pAVar14;
            }
            uVar1 = *(undefined8*)pPVar12;
            *(undefined8*)( lVar8 + 0x20 ) = uVar1;
            *(undefined8*)( pAVar14 + 0x20 ) = uVar1;
            CheckJoinLeft(this, pAVar14, pPVar12, true);
            CheckJoinRight(this, *(Active**)( pPVar12 + 0x10 ), pPVar12, true);
            pPVar12 = pPVar13;
         } while ( *(Point_conflict**)( this + 0x98 ) != pPVar13 );
      }
   }
   return;
}/* Clipper2Lib::ClipperBase::DoIntersections(long) */void Clipper2Lib::ClipperBase::DoIntersections(ClipperBase *this, long param_1) {
   char cVar1;
   cVar1 = BuildIntersectList(this, param_1);
   if (cVar1 != '\0') {
      ProcessIntersectList(this);
      if (*(long*)( this + 0x90 ) != *(long*)( this + 0x98 )) {
         *(long*)( this + 0x98 ) = *(long*)( this + 0x90 );
         return;
      }
   }
   return;
}/* Clipper2Lib::ClipperBase::Reset() */void Clipper2Lib::ClipperBase::Reset(ClipperBase *this) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   undefined8 *puVar7;
   long *plVar8;
   long lVar9;
   long lVar10;
   ulong uVar11;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined8 *local_48;
   long local_40;
   lVar5 = *(long*)( this + 0x38 );
   lVar10 = *(long*)( this + 0x40 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0x20] == (ClipperBase)0x0) {
      if (lVar5 == lVar10) {
         this[0x20] = (ClipperBase)0x1;
         goto LAB_00106b03;
      }
      std::_Temporary_buffer<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete < Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>> > ::_Temporary_buffer(( _Temporary_buffer < __gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>> > * ) & local_58, lVar5, ( ( lVar10 - lVar5 >> 3 ) + 1 ) / 2);
      if (local_58 == local_50) {
         uVar11 = local_50 * 8;
         std::__stable_sort_adaptive<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete < Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>> * __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter> > ( lVar5,lVar5 + uVar11,lVar10,local_48 );
      } else {
         if (local_48 == (undefined8*)0x0) {
            std::__inplace_stable_sort<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>(lVar5, lVar10);
         } else {
            std::__stable_sort_adaptive_resize<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete < Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>> * ,long,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter> > ( lVar5,lVar10,local_48,local_50 );
         }
         uVar11 = local_50 << 3;
      }
      for (puVar7 = local_48; (undefined8*)( (long)local_48 + uVar11 ) != puVar7; puVar7 = puVar7 + 1) {
         if ((void*)*puVar7 != (void*)0x0) {
            operator_delete((void*)*puVar7, 0x10);
         }
      }
      operator_delete(local_48, uVar11);
      this[0x20] = (ClipperBase)0x1;
      lVar10 = *(long*)( this + 0x40 );
      lVar5 = *(long*)( this + 0x38 );
   }
   if (lVar10 != lVar5) {
      plVar8 = *(long**)( this + 0x78 );
      LAB_00106a60:do {
         lVar9 = *(long*)( **(long**)( lVar10 + -8 ) + 8 );
         local_58 = lVar9;
         if (*(long**)( this + 0x80 ) == plVar8) {
            std::vector<long,std::allocator<long>>::_M_realloc_insert<long_const&>((vector<long,std::allocator<long>>*)( this + 0x70 ), plVar8, &local_58);
            plVar8 = *(long**)( this + 0x78 );
            lVar9 = plVar8[-1];
         } else {
            *plVar8 = lVar9;
            plVar8 = plVar8 + 1;
            *(long**)( this + 0x78 ) = plVar8;
         }
         lVar3 = *(long*)( this + 0x70 );
         lVar4 = (long)plVar8 - lVar3 >> 3;
         lVar5 = lVar4 + -1;
         lVar4 = lVar4 + -2;
         lVar4 = lVar4 - ( lVar4 >> 0x3f );
         if (lVar5 < 1) {
            lVar5 = *(long*)( this + 0x38 );
            lVar10 = lVar10 + -8;
            *(long*)( lVar3 + -8 + ( (long)plVar8 - lVar3 ) ) = lVar9;
            if (lVar10 == lVar5) break;
            goto LAB_00106a60;
         }
         do {
            lVar6 = lVar4 >> 1;
            plVar1 = (long*)( lVar3 + lVar6 * 8 );
            plVar2 = (long*)( lVar3 + lVar5 * 8 );
            lVar5 = *plVar1;
            if (lVar9 <= lVar5) {
               lVar5 = *(long*)( this + 0x38 );
               lVar10 = lVar10 + -8;
               *plVar2 = lVar9;
               if (lVar10 != lVar5) goto LAB_00106a60;
               goto LAB_00106b03;
            }
            *plVar2 = lVar5;
            lVar4 = ( lVar6 + -1 ) - ( lVar6 + -1 >> 0x3f );
            lVar5 = lVar6;
         } while ( lVar6 != 0 );
         lVar5 = *(long*)( this + 0x38 );
         lVar10 = lVar10 + -8;
         *plVar1 = lVar9;
         if (lVar10 == lVar5) break;
      } while ( true );
   }
   LAB_00106b03:*(long*)( this + 0x50 ) = lVar5;
   this[0xe1] = (ClipperBase)0x1;
   *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Clipper2Lib::ClipperBase::ConvertHorzSegsToJoins() */void Clipper2Lib::ClipperBase::ConvertHorzSegsToJoins(ClipperBase *this) {
   long *plVar1;
   long lVar2;
   undefined8 *puVar3;
   long lVar4;
   code *pcVar5;
   long lVar6;
   long *plVar7;
   long *plVar8;
   long *plVar9;
   long *plVar10;
   long *plVar11;
   undefined8 *puVar12;
   long lVar13;
   long *plVar14;
   undefined8 *puVar15;
   undefined8 *puVar16;
   long in_FS_OFFSET;
   long *local_58;
   long *plStack_50;
   void *local_48;
   long local_40;
   undefined8 *puVar17;
   plVar14 = *(long**)( this + 0xb0 );
   plVar8 = *(long**)( this + 0xa8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar8 != plVar14) {
      lVar13 = 0;
      do {
         plVar9 = (long*)*plVar8;
         lVar6 = plVar9[4];
         if (lVar6 == 0) {
            ConvertHorzSegsToJoins();
            return;
         }
         while (plVar1 = *(long**)( lVar6 + 0x20 ),plVar1 == (long*)0x0) {
            lVar6 = *(long*)( lVar6 + 8 );
            if (lVar6 == 0) {
               /* WARNING: Does not return */
               pcVar5 = (code*)invalidInstructionException();
               ( *pcVar5 )();
            }
         };
         lVar2 = plVar9[1];
         plVar11 = plVar9;
         if (*(long*)( lVar6 + 0x10 ) == 0) {
            do {
               plVar10 = plVar11;
               plVar11 = (long*)plVar10[3];
               plVar1 = plVar11;
               if (plVar9 == plVar11) break;
               plVar1 = plVar9;
            } while ( lVar2 == plVar11[1] );
            do {
               plVar11 = plVar1;
               plVar1 = (long*)plVar11[2];
               plVar7 = plVar1;
               if (plVar10 == plVar1) break;
               plVar7 = plVar10;
            } while ( lVar2 == plVar1[1] );
         } else {
            do {
               plVar7 = plVar11;
               if ((long*)plVar1[2] == plVar7) break;
               plVar11 = (long*)plVar7[3];
            } while ( lVar2 == ( (long*)plVar7[3] )[1] );
            do {
               plVar11 = plVar9;
               if (plVar1 == plVar11) break;
               plVar9 = (long*)plVar11[2];
            } while ( lVar2 == ( (long*)plVar11[2] )[1] );
         }
         lVar6 = *plVar11;
         lVar2 = *plVar7;
         if (lVar2 == lVar6) {
            LAB_00106d62:plVar8[1] = 0;
         } else {
            plVar9 = plVar7;
            if (lVar2 >= lVar6) {
               plVar9 = plVar11;
               plVar11 = plVar7;
            }
            lVar4 = plVar9[5];
            *plVar8 = (long)plVar9;
            plVar8[1] = (long)plVar11;
            *(bool*)( plVar8 + 2 ) = lVar2 < lVar6;
            if (lVar4 != 0) goto LAB_00106d62;
            plVar9[5] = (long)plVar8;
            lVar13 = lVar13 + 1;
         }
         plVar8 = plVar8 + 3;
      } while ( plVar14 != plVar8 );
      if (1 < lVar13) {
         puVar3 = *(undefined8**)( this + 0xb0 );
         puVar16 = *(undefined8**)( this + 0xa8 );
         if (puVar16 != puVar3) {
            std::_Temporary_buffer<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,Clipper2Lib::HorzSegment>::_Temporary_buffer((_Temporary_buffer<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,Clipper2Lib::HorzSegment>*)&local_58, puVar16, ( ( (long)puVar3 - (long)puVar16 >> 3 ) * -0x5555555555555555 + 1 ) / 2);
            plVar14 = plStack_50;
            if (local_58 == plStack_50) {
               std::__stable_sort_adaptive<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,Clipper2Lib::HorzSegment*,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>(puVar16, puVar16 + (long)plStack_50 * 3, puVar3, local_48);
            } else if (local_48 == (void*)0x0) {
               std::__inplace_stable_sort<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>(puVar16, puVar3);
            } else {
               std::__stable_sort_adaptive_resize<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,Clipper2Lib::HorzSegment*,long,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>(puVar16, puVar3, local_48, plStack_50);
            }
            operator_delete(local_48, (long)plVar14 * 0x18);
            puVar16 = *(undefined8**)( this + 0xa8 );
         }
         puVar3 = puVar16 + lVar13 * 3;
         if (puVar3 + -3 != puVar16) {
            do {
               puVar17 = puVar16 + 3;
               for (puVar12 = puVar17; puVar3 != puVar12; puVar12 = puVar12 + 3) {
                  plVar14 = (long*)*puVar12;
                  lVar13 = *plVar14;
                  if (( ( lVar13 < *(long*)puVar16[1] ) && ( *(char*)( puVar12 + 2 ) != *(char*)( puVar16 + 2 ) ) ) && ( plVar8 = (long*)*puVar16 * plVar8 < *(long*)puVar12[1] )) {
                     lVar6 = plVar8[1];
                     if (*(char*)( puVar16 + 2 ) == '\0') {
                        plVar9 = (long*)plVar8[3];
                        if (lVar6 == ( (long*)plVar8[3] )[1]) {
                           while (*plVar9 <= lVar13) {
                              *puVar16 = plVar9;
                              plVar14 = (long*)*puVar12;
                              plVar8 = plVar9;
                              if (( (long*)plVar9[3] )[1] != lVar6) goto LAB_00107003;
                              plVar9 = (long*)plVar9[3];
                              lVar13 = *plVar14;
                           };
                           plVar8 = (long*)*puVar16;
                        }
                        LAB_00107003:plVar14 = (long*)plVar14[2];
                        lVar13 = plVar14[1];
                        while (( lVar6 == lVar13 && ( *plVar14 <= *plVar8 ) )) {
                           *puVar12 = plVar14;
                           plVar14 = (long*)plVar14[2];
                           lVar13 = plVar14[1];
                           plVar8 = (long*)*puVar16;
                        };
                        plVar9 = (long*)operator_new(0x30);
                        lVar6 = *plVar8;
                        lVar2 = plVar8[1];
                        lVar13 = plVar8[4];
                        plVar9[5] = 0;
                        plVar9[4] = lVar13;
                        lVar13 = plVar8[3];
                        *plVar9 = lVar6;
                        plVar9[1] = lVar2;
                        plVar9[3] = lVar13;
                        *(long**)( lVar13 + 0x10 ) = plVar9;
                        plVar9[2] = (long)plVar8;
                        plVar8[3] = (long)plVar9;
                        plVar14 = (long*)*puVar12;
                        local_58 = (long*)operator_new(0x30);
                        lVar13 = plVar14[4];
                        lVar6 = *plVar14;
                        lVar2 = plVar14[1];
                        local_58[5] = 0;
                        puVar15 = *(undefined8**)( this + 200 );
                        local_58[4] = lVar13;
                        lVar13 = plVar14[2];
                        *local_58 = lVar6;
                        local_58[1] = lVar2;
                        local_58[2] = lVar13;
                        *(long**)( lVar13 + 0x18 ) = local_58;
                        local_58[3] = (long)plVar14;
                        plVar14[2] = (long)local_58;
                        plStack_50 = plVar9;
                        if (puVar15 == *(undefined8**)( this + 0xd0 )) goto LAB_001070f0;
                        *puVar15 = local_58;
                        puVar15[1] = plVar9;
                        *(undefined8**)( this + 200 ) = puVar15 + 2;
                     } else {
                        plVar8 = (long*)plVar8[2];
                        if (lVar6 == plVar8[1]) {
                           while (*plVar8 <= lVar13) {
                              *puVar16 = plVar8;
                              plVar8 = (long*)plVar8[2];
                              plVar14 = (long*)*puVar12;
                              if (plVar8[1] != lVar6) break;
                              lVar13 = *plVar14;
                           };
                        }
                        lVar13 = ( (long*)plVar14[3] )[1];
                        plVar8 = (long*)plVar14[3];
                        while (( plVar9 = plVar8 ),lVar6 == lVar13 && ( *plVar9 <= *(long*)*puVar16 )) {
                           *puVar12 = plVar9;
                           lVar13 = ( (long*)plVar9[3] )[1];
                           plVar8 = (long*)plVar9[3];
                           plVar14 = plVar9;
                        };
                        plVar8 = (long*)operator_new(0x30);
                        lVar6 = *plVar14;
                        lVar2 = plVar14[1];
                        lVar13 = plVar14[4];
                        plVar8[5] = 0;
                        plVar8[4] = lVar13;
                        lVar13 = plVar14[3];
                        *plVar8 = lVar6;
                        plVar8[1] = lVar2;
                        plVar8[3] = lVar13;
                        *(long**)( lVar13 + 0x10 ) = plVar8;
                        plVar8[2] = (long)plVar14;
                        plVar14[3] = (long)plVar8;
                        plVar14 = (long*)*puVar16;
                        local_58 = (long*)operator_new(0x30);
                        lVar13 = plVar14[4];
                        lVar6 = *plVar14;
                        lVar2 = plVar14[1];
                        local_58[5] = 0;
                        puVar15 = *(undefined8**)( this + 200 );
                        local_58[4] = lVar13;
                        lVar13 = plVar14[2];
                        *local_58 = lVar6;
                        local_58[1] = lVar2;
                        local_58[2] = lVar13;
                        *(long**)( lVar13 + 0x18 ) = local_58;
                        local_58[3] = (long)plVar14;
                        plVar14[2] = (long)local_58;
                        plStack_50 = plVar8;
                        if (puVar15 == *(undefined8**)( this + 0xd0 )) {
                           LAB_001070f0:std::vector<Clipper2Lib::HorzJoin,std::allocator<Clipper2Lib::HorzJoin>>::_M_realloc_insert<Clipper2Lib::HorzJoin_const&>((vector<Clipper2Lib::HorzJoin,std::allocator<Clipper2Lib::HorzJoin>>*)( this + 0xc0 ), puVar15, &local_58);
                        } else {
                           *puVar15 = local_58;
                           puVar15[1] = plVar8;
                           *(undefined8**)( this + 200 ) = puVar15 + 2;
                        }
                     }
                  }
               }
               puVar16 = puVar17;
            } while ( puVar3 + -3 != puVar17 );
         }
      }
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* Clipper2Lib::ClipperBase::ExecuteInternal(Clipper2Lib::ClipType, Clipper2Lib::FillRule, bool) */ClipperBase Clipper2Lib::ClipperBase::ExecuteInternal(ClipperBase *this, int param_2, undefined4 param_3, ClipperBase param_4) {
   ClipperBase CVar1;
   char cVar2;
   long *plVar3;
   long *plVar4;
   Active *pAVar5;
   long *plVar6;
   long lVar7;
   *(int*)( this + 8 ) = param_2;
   *(undefined4*)( this + 0xc ) = param_3;
   this[0x21] = param_4;
   Reset(this);
   if (param_2 != 0) {
      plVar4 = *(long**)( this + 0x78 );
      plVar6 = *(long**)( this + 0x70 );
      if (plVar4 != plVar6) {
         lVar7 = *plVar6;
         plVar3 = plVar4 + -1;
         if (8 < (long)plVar4 - (long)plVar6) {
            plVar4[-1] = lVar7;
            goto LAB_0010722e;
         }
         while (*(long**)( this + 0x78 ) = plVar3,plVar4 = plVar3,plVar6 != plVar3) {
            while (true) {
               if (lVar7 != *plVar6) goto LAB_00107250;
               plVar3 = plVar4 + -1;
               if ((long)plVar4 - (long)plVar6 < 9) break;
               *plVar3 = lVar7;
               LAB_0010722e:std::__adjust_heap<__gnu_cxx::__normal_iterator<long*,std::vector<long,std::allocator<long>>>,long,long,__gnu_cxx::__ops::_Iter_comp_iter<std::less<long>>>();
               *(long**)( this + 0x78 ) = plVar3;
               plVar4 = plVar3;
               if (plVar6 == plVar3) goto LAB_00107250;
            };
         };
         LAB_00107250:CVar1 = this[0xe1];
         do {
            if (CVar1 == (ClipperBase)0x0) {
               return (ClipperBase)0x0;
            }
            InsertLocalMinimaIntoAEL(this, lVar7);
            pAVar5 = *(Active**)( this + 0x30 );
            while (pAVar5 != (Active*)0x0) {
               *(undefined8*)( this + 0x30 ) = *(undefined8*)( pAVar5 + 0x60 );
               DoHorizontal(this, pAVar5);
               pAVar5 = *(Active**)( this + 0x30 );
            };
            if (*(long*)( this + 0xb0 ) != *(long*)( this + 0xa8 )) {
               ConvertHorzSegsToJoins(this);
               if (*(long*)( this + 0xa8 ) != *(long*)( this + 0xb0 )) {
                  *(long*)( this + 0xb0 ) = *(long*)( this + 0xa8 );
               }
            }
            plVar4 = *(long**)( this + 0x78 );
            plVar6 = *(long**)( this + 0x70 );
            *(long*)( this + 0x18 ) = lVar7;
            if (plVar4 == plVar6) {
               if (this[0xe1] == (ClipperBase)0x0) {
                  return (ClipperBase)0x0;
               }
               ProcessHorzJoins(this);
               return this[0xe1];
            }
            lVar7 = *plVar6;
            plVar3 = plVar4 + -1;
            if (8 < (long)plVar4 - (long)plVar6) {
               plVar4[-1] = lVar7;
               goto LAB_00107316;
            }
            while (*(long**)( this + 0x78 ) = plVar3,plVar4 = plVar3,plVar6 != plVar3) {
               while (true) {
                  if (lVar7 != *plVar6) goto LAB_00107330;
                  plVar3 = plVar4 + -1;
                  if ((long)plVar4 - (long)plVar6 < 9) break;
                  *plVar3 = lVar7;
                  LAB_00107316:std::__adjust_heap<__gnu_cxx::__normal_iterator<long*,std::vector<long,std::allocator<long>>>,long,long,__gnu_cxx::__ops::_Iter_comp_iter<std::less<long>>>();
                  *(long**)( this + 0x78 ) = plVar3;
                  plVar4 = plVar3;
                  if (plVar6 == plVar3) goto LAB_00107330;
               };
            };
            LAB_00107330:cVar2 = BuildIntersectList(this, lVar7);
            if (cVar2 != '\0') {
               ProcessIntersectList(this);
               if (*(long*)( this + 0x90 ) != *(long*)( this + 0x98 )) {
                  *(long*)( this + 0x98 ) = *(long*)( this + 0x90 );
               }
            }
            DoTopOfScanbeam(this, lVar7);
            pAVar5 = *(Active**)( this + 0x30 );
            if (pAVar5 == (Active*)0x0) goto LAB_00107250;
            do {
               *(undefined8*)( this + 0x30 ) = *(undefined8*)( pAVar5 + 0x60 );
               DoHorizontal(this, pAVar5);
               pAVar5 = *(Active**)( this + 0x30 );
            } while ( pAVar5 != (Active*)0x0 );
            CVar1 = this[0xe1];
         } while ( true );
      }
   }
   return (ClipperBase)0x1;
}/* Clipper2Lib::PolyPath64::Count() const */long Clipper2Lib::PolyPath64::Count(PolyPath64 *this) {
   return *(long*)( this + 0x18 ) - *(long*)( this + 0x10 ) >> 3;
}/* Clipper2Lib::PolyPathD::Count() const */long Clipper2Lib::PolyPathD::Count(PolyPathD *this) {
   return *(long*)( this + 0x18 ) - *(long*)( this + 0x10 ) >> 3;
}/* __gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >
   std::__move_merge<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   __gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>
   >(std::unique_ptr<Clipper2Lib::LocalMinima, std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::unique_ptr<Clipper2Lib::LocalMinima, std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::unique_ptr<Clipper2Lib::LocalMinima, std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::unique_ptr<Clipper2Lib::LocalMinima, std::default_delete<Clipper2Lib::LocalMinima> >*,
   __gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>) [clone .isra.0] */undefined8 *std::__move_merge<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>(undefined8 *param_1, undefined8 *param_2, undefined8 *param_3, undefined8 *param_4, undefined8 *param_5) {
   long *plVar1;
   long *plVar2;
   long *plVar3;
   long *plVar4;
   long lVar5;
   long lVar6;
   undefined8 uVar7;
   void *pvVar8;
   undefined8 *puVar9;
   undefined8 *puVar10;
   if (param_2 != param_1) {
      do {
         while (true) {
            if (param_4 == param_3) goto LAB_001074f9;
            plVar1 = (long*)*param_1;
            plVar2 = (long*)*param_3;
            plVar3 = (long*)*plVar1;
            plVar4 = (long*)*plVar2;
            lVar5 = plVar4[1];
            lVar6 = plVar3[1];
            if (lVar6 == lVar5) break;
            if (lVar6 < lVar5) goto LAB_00107482;
            LAB_001074cf:*param_1 = 0;
            pvVar8 = (void*)*param_5;
            *param_5 = plVar1;
            if (pvVar8 != (void*)0x0) {
               operator_delete(pvVar8, 0x10);
            }
            param_1 = param_1 + 1;
            param_5 = param_5 + 1;
            if (param_2 == param_1) goto LAB_001074f9;
         };
         if (*plVar3 <= *plVar4) goto LAB_001074cf;
         LAB_00107482:*param_3 = 0;
         pvVar8 = (void*)*param_5;
         *param_5 = plVar2;
         if (pvVar8 != (void*)0x0) {
            operator_delete(pvVar8, 0x10);
         }
         param_3 = param_3 + 1;
         param_5 = param_5 + 1;
      } while ( param_2 != param_1 );
   }
   LAB_001074f9:puVar9 = param_5;
   if (0 < (long)param_2 - (long)param_1) {
      puVar9 = (undefined8*)( ( (long)param_2 - (long)param_1 ) + (long)param_5 );
      do {
         uVar7 = *param_1;
         *param_1 = 0;
         pvVar8 = (void*)*param_5;
         *param_5 = uVar7;
         if (pvVar8 != (void*)0x0) {
            operator_delete(pvVar8, 0x10);
         }
         param_5 = param_5 + 1;
         param_1 = param_1 + 1;
      } while ( puVar9 != param_5 );
   }
   if ((long)param_4 - (long)param_3 < 1) {
      return puVar9;
   }
   puVar10 = (undefined8*)( ( (long)param_4 - (long)param_3 ) + (long)puVar9 );
   do {
      uVar7 = *param_3;
      *param_3 = 0;
      pvVar8 = (void*)*puVar9;
      *puVar9 = uVar7;
      if (pvVar8 != (void*)0x0) {
         operator_delete(pvVar8, 0x10);
      }
      puVar9 = puVar9 + 1;
      param_3 = param_3 + 1;
   } while ( puVar10 != puVar9 );
   return puVar10;
}/* Clipper2Lib::TopX(Clipper2Lib::Active const&, long) */long Clipper2Lib::TopX(Active *param_1, long param_2) {
   long lVar1;
   long lVar2;
   double dVar3;
   lVar2 = *(long*)( param_1 + 0x10 );
   if (( ( *(long*)( param_1 + 0x18 ) != param_2 ) && ( lVar1 = *(long*)param_1 ),lVar1 != lVar2 )) {
      dVar3 = nearbyint((double)( param_2 - *(long*)( param_1 + 8 ) ) * *(double*)( param_1 + 0x28 ));
      lVar2 = lVar1 + (long)dVar3;
   }
   return lVar2;
}/* Clipper2Lib::IsVerySmallTriangle(Clipper2Lib::OutPt const&) */bool Clipper2Lib::IsVerySmallTriangle(OutPt *param_1) {
   long *plVar1;
   long *plVar2;
   bool bVar3;
   plVar1 = *(long**)( param_1 + 0x10 );
   plVar2 = *(long**)( param_1 + 0x18 );
   bVar3 = false;
   if ((long*)plVar1[2] == plVar2) {
      if (( ( ( 2 < ( *plVar2 - *plVar1 ) + 1U ) || ( bVar3 = true ),2 < ( plVar2[1] - plVar1[1] ) + 1U ) ) && ( ( 2 < ( *(long*)param_1 - *plVar1 ) + 1U || ( bVar3 = true ),2 < ( *(long*)( param_1 + 8 ) - plVar1[1] ) + 1U ) )) {
         bVar3 = ( *(long*)( param_1 + 8 ) - plVar2[1] ) + 1U < 3;
      }
   }
   return bVar3;
}/* Clipper2Lib::ClipperBase::DeleteFromAEL(Clipper2Lib::Active&) */void Clipper2Lib::ClipperBase::DeleteFromAEL(ClipperBase *this, Active *param_1) {
   long lVar1;
   long lVar2;
   lVar1 = *(long*)( param_1 + 0x50 );
   lVar2 = *(long*)( param_1 + 0x48 );
   if (lVar1 != 0 || lVar2 != 0) {
      if (lVar2 == 0) {
         *(long*)( this + 0x28 ) = lVar1;
      } else {
         *(long*)( lVar2 + 0x50 ) = lVar1;
      }
      if (lVar1 != 0) {
         *(long*)( lVar1 + 0x48 ) = lVar2;
      }
      operator_delete(param_1, 0x88);
      return;
   }
   if (param_1 != *(Active**)( this + 0x28 )) {
      return;
   }
   *(undefined8*)( this + 0x28 ) = 0;
   operator_delete(param_1, 0x88);
   return;
}/* std::vector<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >,
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
}/* std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > >::reserve(unsigned long) */void std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>::reserve(vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>> *this, ulong param_1) {
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
}/* std::vector<std::unique_ptr<Clipper2Lib::PolyPath64, std::default_delete<Clipper2Lib::PolyPath64>
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
}/* Clipper2Lib::PolyPath64::~PolyPath64() */void Clipper2Lib::PolyPath64::~PolyPath64(PolyPath64 *this) {
   void *pvVar1;
   undefined8 *puVar2;
   long *plVar3;
   undefined8 *puVar4;
   long *plVar5;
   undefined8 *puVar6;
   long *plVar7;
   undefined8 *puVar8;
   long *plVar9;
   undefined8 *puVar10;
   long *plVar11;
   undefined8 *puVar12;
   PolyPath64 *pPVar13;
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
   *(undefined***)this = &PTR__PolyPath64_0010f5c8;
   std::vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>::resize(( vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete < Clipper2Lib::PolyPath64>>> > * )(this + 0x10), 0);
   pvVar1 = *(void**)( this + 0x28 );
   if (pvVar1 != (void*)0x0) {
      operator_delete(pvVar1, *(long*)( this + 0x38 ) - (long)pvVar1);
   }
   puVar2 = *(undefined8**)( this + 0x18 );
   puVar23 = *(undefined8**)( this + 0x10 );
   if (puVar2 != puVar23) {
      LAB_00107af8:do {
         plVar3 = (long*)*puVar23;
         if (plVar3 != (long*)0x0) {
            if (*(code**)( *plVar3 + 8 ) != ~PolyPath64) {
               puVar23 = puVar23 + 1;
               ( **(code**)( *plVar3 + 8 ) )(plVar3);
               if (puVar2 == puVar23) break;
               goto LAB_00107af8;
            }
            puVar4 = (undefined8*)plVar3[2];
            *plVar3 = (long)&PTR__PolyPath64_0010f5c8;
            puVar15 = (undefined8*)plVar3[3];
            puVar16 = puVar4;
            if (puVar15 != puVar4) {
               LAB_00107b49:do {
                  plVar5 = (long*)*puVar16;
                  if (plVar5 != (long*)0x0) {
                     if (*(code**)( *plVar5 + 8 ) != ~PolyPath64) {
                        puVar16 = puVar16 + 1;
                        ( **(code**)( *plVar5 + 8 ) )(plVar5);
                        if (puVar15 == puVar16) break;
                        goto LAB_00107b49;
                     }
                     puVar6 = (undefined8*)plVar5[2];
                     *plVar5 = (long)&PTR__PolyPath64_0010f5c8;
                     puVar22 = (undefined8*)plVar5[3];
                     puVar19 = puVar6;
                     if (puVar22 != puVar6) {
                        LAB_00107b9b:do {
                           plVar7 = (long*)*puVar19;
                           if (plVar7 != (long*)0x0) {
                              if (*(code**)( *plVar7 + 8 ) != ~PolyPath64) {
                                 puVar19 = puVar19 + 1;
                                 ( **(code**)( *plVar7 + 8 ) )(plVar7);
                                 if (puVar22 == puVar19) break;
                                 goto LAB_00107b9b;
                              }
                              puVar8 = (undefined8*)plVar7[3];
                              *plVar7 = (long)&PTR__PolyPath64_0010f5c8;
                              puVar18 = (undefined8*)plVar7[2];
                              puVar17 = puVar18;
                              if (puVar8 != puVar18) {
                                 LAB_00107beb:do {
                                    plVar9 = (long*)*puVar17;
                                    if (plVar9 != (long*)0x0) {
                                       if (*(code**)( *plVar9 + 8 ) != ~PolyPath64) {
                                          puVar17 = puVar17 + 1;
                                          ( **(code**)( *plVar9 + 8 ) )(plVar9);
                                          if (puVar8 == puVar17) break;
                                          goto LAB_00107beb;
                                       }
                                       puVar10 = (undefined8*)plVar9[3];
                                       *plVar9 = (long)&PTR__PolyPath64_0010f5c8;
                                       puVar21 = (undefined8*)plVar9[2];
                                       puVar20 = puVar21;
                                       if (puVar10 != puVar21) {
                                          LAB_00107c3a:do {
                                             plVar11 = (long*)*puVar20;
                                             if (plVar11 != (long*)0x0) {
                                                if (*(code**)( *plVar11 + 8 ) != ~PolyPath64) {
                                                   puVar20 = puVar20 + 1;
                                                   ( **(code**)( *plVar11 + 8 ) )(plVar11);
                                                   if (puVar10 == puVar20) break;
                                                   goto LAB_00107c3a;
                                                }
                                                *plVar11 = (long)&PTR__PolyPath64_0010f5c8;
                                                std::vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>::resize((vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>*)( plVar11 + 2 ), 0);
                                                pvVar1 = (void*)plVar11[5];
                                                if (pvVar1 != (void*)0x0) {
                                                   operator_delete(pvVar1, plVar11[7] - (long)pvVar1);
                                                }
                                                puVar12 = (undefined8*)plVar11[3];
                                                puVar14 = (undefined8*)plVar11[2];
                                                if (puVar12 != puVar14) {
                                                   do {
                                                      while (pPVar13 = (PolyPath64*)*puVar14,pPVar13 == (PolyPath64*)0x0) {
                                                         LAB_00107cb0:puVar14 = puVar14 + 1;
                                                         if (puVar12 == puVar14) goto LAB_00107ce0;
                                                      };
                                                      if (*(code**)( *(long*)pPVar13 + 8 ) == ~PolyPath64) {
                                                         ~PolyPath64(pPVar13)
                                                         ;;
                                                         operator_delete(pPVar13, 0x40);
                                                         goto LAB_00107cb0;
                                                      }
                                                      ( **(code**)( *(long*)pPVar13 + 8 ) )();
                                                      puVar14 = puVar14 + 1;
                                                   } while ( puVar12 != puVar14 );
                                                   LAB_00107ce0:puVar14 = (undefined8*)plVar11[2];
                                                }
                                                if (puVar14 != (undefined8*)0x0) {
                                                   operator_delete(puVar14, plVar11[4] - (long)puVar14);
                                                }
                                                operator_delete(plVar11, 0x40);
                                             }
                                             puVar20 = puVar20 + 1;
                                          } while ( puVar10 != puVar20 );
                                          plVar9[3] = (long)puVar21;
                                       }
                                       pvVar1 = (void*)plVar9[5];
                                       if (pvVar1 != (void*)0x0) {
                                          operator_delete(pvVar1, plVar9[7] - (long)pvVar1);
                                       }
                                       puVar10 = (undefined8*)plVar9[3];
                                       puVar21 = (undefined8*)plVar9[2];
                                       if (puVar10 != puVar21) {
                                          do {
                                             while (pPVar13 = (PolyPath64*)*puVar21,pPVar13 == (PolyPath64*)0x0) {
                                                LAB_00107d80:puVar21 = puVar21 + 1;
                                                if (puVar10 == puVar21) goto LAB_00107db0;
                                             };
                                             if (*(code**)( *(long*)pPVar13 + 8 ) == ~PolyPath64) {
                                                ~PolyPath64(pPVar13)
                                                ;;
                                                operator_delete(pPVar13, 0x40);
                                                goto LAB_00107d80;
                                             }
                                             ( **(code**)( *(long*)pPVar13 + 8 ) )();
                                             puVar21 = puVar21 + 1;
                                          } while ( puVar10 != puVar21 );
                                          LAB_00107db0:puVar21 = (undefined8*)plVar9[2];
                                       }
                                       if (puVar21 != (undefined8*)0x0) {
                                          operator_delete(puVar21, plVar9[4] - (long)puVar21);
                                       }
                                       operator_delete(plVar9, 0x40);
                                    }
                                    puVar17 = puVar17 + 1;
                                 } while ( puVar8 != puVar17 );
                                 plVar7[3] = (long)puVar18;
                              }
                              pvVar1 = (void*)plVar7[5];
                              if (pvVar1 != (void*)0x0) {
                                 operator_delete(pvVar1, plVar7[7] - (long)pvVar1);
                              }
                              puVar8 = (undefined8*)plVar7[3];
                              puVar18 = (undefined8*)plVar7[2];
                              if (puVar8 != puVar18) {
                                 do {
                                    while (pPVar13 = (PolyPath64*)*puVar18,pPVar13 == (PolyPath64*)0x0) {
                                       LAB_00107e50:puVar18 = puVar18 + 1;
                                       if (puVar8 == puVar18) goto LAB_00107e80;
                                    };
                                    if (*(code**)( *(long*)pPVar13 + 8 ) == ~PolyPath64) {
                                       ~PolyPath64(pPVar13)
                                       ;;
                                       operator_delete(pPVar13, 0x40);
                                       goto LAB_00107e50;
                                    }
                                    ( **(code**)( *(long*)pPVar13 + 8 ) )();
                                    puVar18 = puVar18 + 1;
                                 } while ( puVar8 != puVar18 );
                                 LAB_00107e80:puVar18 = (undefined8*)plVar7[2];
                              }
                              if (puVar18 != (undefined8*)0x0) {
                                 operator_delete(puVar18, plVar7[4] - (long)puVar18);
                              }
                              operator_delete(plVar7, 0x40);
                           }
                           puVar19 = puVar19 + 1;
                        } while ( puVar22 != puVar19 );
                        plVar5[3] = (long)puVar6;
                     }
                     pvVar1 = (void*)plVar5[5];
                     if (pvVar1 != (void*)0x0) {
                        operator_delete(pvVar1, plVar5[7] - (long)pvVar1);
                     }
                     puVar6 = (undefined8*)plVar5[3];
                     puVar22 = (undefined8*)plVar5[2];
                     if (puVar6 != puVar22) {
                        do {
                           while (pPVar13 = (PolyPath64*)*puVar22,pPVar13 == (PolyPath64*)0x0) {
                              LAB_00107f10:puVar22 = puVar22 + 1;
                              if (puVar6 == puVar22) goto LAB_00107f40;
                           };
                           if (*(code**)( *(long*)pPVar13 + 8 ) == ~PolyPath64) {
                              ~PolyPath64(pPVar13)
                              ;;
                              operator_delete(pPVar13, 0x40);
                              goto LAB_00107f10;
                           }
                           ( **(code**)( *(long*)pPVar13 + 8 ) )();
                           puVar22 = puVar22 + 1;
                        } while ( puVar6 != puVar22 );
                        LAB_00107f40:puVar22 = (undefined8*)plVar5[2];
                     }
                     if (puVar22 != (undefined8*)0x0) {
                        operator_delete(puVar22, plVar5[4] - (long)puVar22);
                     }
                     operator_delete(plVar5, 0x40);
                  }
                  puVar16 = puVar16 + 1;
               } while ( puVar15 != puVar16 );
               plVar3[3] = (long)puVar4;
            }
            pvVar1 = (void*)plVar3[5];
            if (pvVar1 != (void*)0x0) {
               operator_delete(pvVar1, plVar3[7] - (long)pvVar1);
            }
            puVar4 = (undefined8*)plVar3[3];
            puVar15 = (undefined8*)plVar3[2];
            if (puVar4 != puVar15) {
               do {
                  while (pPVar13 = (PolyPath64*)*puVar15,pPVar13 == (PolyPath64*)0x0) {
                     LAB_00107fd0:puVar15 = puVar15 + 1;
                     if (puVar4 == puVar15) goto LAB_00108000;
                  };
                  if (*(code**)( *(long*)pPVar13 + 8 ) == ~PolyPath64) {
                     ~PolyPath64(pPVar13)
                     ;;
                     operator_delete(pPVar13, 0x40);
                     goto LAB_00107fd0;
                  }
                  ( **(code**)( *(long*)pPVar13 + 8 ) )();
                  puVar15 = puVar15 + 1;
               } while ( puVar4 != puVar15 );
               LAB_00108000:puVar15 = (undefined8*)plVar3[2];
            }
            if (puVar15 != (undefined8*)0x0) {
               operator_delete(puVar15, plVar3[4] - (long)puVar15);
            }
            operator_delete(plVar3, 0x40);
         }
         puVar23 = puVar23 + 1;
      } while ( puVar2 != puVar23 );
      puVar23 = *(undefined8**)( this + 0x10 );
   }
   if (puVar23 == (undefined8*)0x0) {
      return;
   }
   operator_delete(puVar23, *(long*)( this + 0x20 ) - (long)puVar23);
   return;
}/* std::vector<std::unique_ptr<Clipper2Lib::PolyPath64, std::default_delete<Clipper2Lib::PolyPath64>
   >, std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,
   std::default_delete<Clipper2Lib::PolyPath64> > > >::resize(unsigned long) */void std::vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>::resize(vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>> *this, ulong param_1) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   long *plVar3;
   void *pvVar4;
   undefined8 *puVar5;
   PolyPath64 *this_00;
   ulong uVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   puVar2 = *(undefined8**)( this + 8 );
   uVar6 = (long)puVar2 - *(long*)this >> 3;
   if (uVar6 < param_1) {
      _M_default_append(this, param_1 - uVar6);
      return;
   }
   if (( param_1 < uVar6 ) && ( puVar1 = (undefined8*)( *(long*)this + param_1 * 8 ) ),puVar7 = puVar1,puVar1 != puVar2) {
      do {
         plVar3 = (long*)*puVar7;
         if (plVar3 != (long*)0x0) {
            if (*(code**)( *plVar3 + 8 ) == Clipper2Lib::PolyPath64::~PolyPath64) {
               *plVar3 = (long)&PTR__PolyPath64_0010f5c8;
               resize((vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>*)( plVar3 + 2 ), 0);
               pvVar4 = (void*)plVar3[5];
               if (pvVar4 != (void*)0x0) {
                  operator_delete(pvVar4, plVar3[7] - (long)pvVar4);
               }
               puVar5 = (undefined8*)plVar3[3];
               puVar8 = (undefined8*)plVar3[2];
               if (puVar5 != puVar8) {
                  do {
                     while (this_00 = (PolyPath64*)*puVar8,this_00 == (PolyPath64*)0x0) {
                        LAB_001081f2:puVar8 = puVar8 + 1;
                        if (puVar5 == puVar8) goto LAB_00108220;
                     };
                     if (*(code**)( *(long*)this_00 + 8 ) == Clipper2Lib::PolyPath64::~PolyPath64) {
                        Clipper2Lib::PolyPath64::~PolyPath64(this_00);
                        operator_delete(this_00, 0x40);
                        goto LAB_001081f2;
                     }
                     ( **(code**)( *(long*)this_00 + 8 ) )();
                     puVar8 = puVar8 + 1;
                  } while ( puVar5 != puVar8 );
                  LAB_00108220:puVar8 = (undefined8*)plVar3[2];
               }
               if (puVar8 != (undefined8*)0x0) {
                  operator_delete(puVar8, plVar3[4] - (long)puVar8);
               }
               operator_delete(plVar3, 0x40);
            } else {
               ( **(code**)( *plVar3 + 8 ) )(plVar3);
            }
         }
         puVar7 = puVar7 + 1;
      } while ( puVar2 != puVar7 );
      *(undefined8**)( this + 8 ) = puVar1;
   }
   return;
}/* Clipper2Lib::PolyPath64::~PolyPath64() */void Clipper2Lib::PolyPath64::~PolyPath64(PolyPath64 *this) {
   undefined8 *puVar1;
   long *plVar2;
   void *pvVar3;
   undefined8 *puVar4;
   PolyPath64 *pPVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   *(undefined***)this = &PTR__PolyPath64_0010f5c8;
   puVar1 = *(undefined8**)( this + 0x18 );
   puVar6 = *(undefined8**)( this + 0x10 );
   puVar7 = puVar6;
   if (puVar1 != puVar6) {
      LAB_001082e4:do {
         plVar2 = (long*)*puVar7;
         if (plVar2 != (long*)0x0) {
            if (*(code**)( *plVar2 + 8 ) != ~PolyPath64) {
               puVar7 = puVar7 + 1;
               ( **(code**)( *plVar2 + 8 ) )(plVar2);
               if (puVar1 == puVar7) break;
               goto LAB_001082e4;
            }
            *plVar2 = (long)&PTR__PolyPath64_0010f5c8;
            std::vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>::resize((vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>*)( plVar2 + 2 ), 0);
            pvVar3 = (void*)plVar2[5];
            if (pvVar3 != (void*)0x0) {
               operator_delete(pvVar3, plVar2[7] - (long)pvVar3);
            }
            puVar4 = (undefined8*)plVar2[3];
            puVar8 = (undefined8*)plVar2[2];
            if (puVar4 != puVar8) {
               do {
                  while (pPVar5 = (PolyPath64*)*puVar8,pPVar5 == (PolyPath64*)0x0) {
                     LAB_00108359:puVar8 = puVar8 + 1;
                     if (puVar4 == puVar8) goto LAB_00108388;
                  };
                  if (*(code**)( *(long*)pPVar5 + 8 ) == ~PolyPath64) {
                     ~PolyPath64(pPVar5)
                     ;;
                     operator_delete(pPVar5, 0x40);
                     goto LAB_00108359;
                  }
                  ( **(code**)( *(long*)pPVar5 + 8 ) )();
                  puVar8 = puVar8 + 1;
               } while ( puVar4 != puVar8 );
               LAB_00108388:puVar8 = (undefined8*)plVar2[2];
            }
            if (puVar8 != (undefined8*)0x0) {
               operator_delete(puVar8, plVar2[4] - (long)puVar8);
            }
            operator_delete(plVar2, 0x40);
         }
         puVar7 = puVar7 + 1;
      } while ( puVar1 != puVar7 );
      *(undefined8**)( this + 0x18 ) = puVar6;
   }
   pvVar3 = *(void**)( this + 0x28 );
   if (pvVar3 != (void*)0x0) {
      operator_delete(pvVar3, *(long*)( this + 0x38 ) - (long)pvVar3);
   }
   puVar1 = *(undefined8**)( this + 0x18 );
   puVar6 = *(undefined8**)( this + 0x10 );
   if (puVar1 != puVar6) {
      do {
         while (pPVar5 = (PolyPath64*)*puVar6,pPVar5 == (PolyPath64*)0x0) {
            LAB_0010840a:puVar6 = puVar6 + 1;
            if (puVar1 == puVar6) goto LAB_00108440;
         };
         if (*(code**)( *(long*)pPVar5 + 8 ) == ~PolyPath64) {
            ~PolyPath64(pPVar5)
            ;;
            operator_delete(pPVar5, 0x40);
            goto LAB_0010840a;
         }
         ( **(code**)( *(long*)pPVar5 + 8 ) )();
         puVar6 = puVar6 + 1;
      } while ( puVar1 != puVar6 );
      LAB_00108440:puVar6 = *(undefined8**)( this + 0x10 );
   }
   if (puVar6 != (undefined8*)0x0) {
      operator_delete(puVar6, *(long*)( this + 0x20 ) - (long)puVar6);
   }
   operator_delete(this, 0x40);
   return;
}/* Clipper2Lib::PolyPath64::Clear() */void Clipper2Lib::PolyPath64::Clear(PolyPath64 *this) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   long *plVar3;
   undefined8 *puVar4;
   long *plVar5;
   undefined8 *puVar6;
   long *plVar7;
   void *pvVar8;
   undefined8 *puVar9;
   PolyPath64 *pPVar10;
   undefined8 *puVar11;
   undefined8 *puVar12;
   undefined8 *puVar13;
   undefined8 *puVar14;
   undefined8 *puVar15;
   undefined8 *puVar16;
   puVar1 = *(undefined8**)( this + 0x18 );
   puVar2 = *(undefined8**)( this + 0x10 );
   puVar11 = puVar2;
   if (puVar1 != puVar2) {
      LAB_001084da:do {
         plVar3 = (long*)*puVar11;
         if (plVar3 != (long*)0x0) {
            if (*(code**)( *plVar3 + 8 ) != ~PolyPath64) {
               puVar11 = puVar11 + 1;
               ( **(code**)( *plVar3 + 8 ) )(plVar3);
               if (puVar1 == puVar11) break;
               goto LAB_001084da;
            }
            puVar4 = (undefined8*)plVar3[3];
            *plVar3 = (long)&PTR__PolyPath64_0010f5c8;
            puVar15 = (undefined8*)plVar3[2];
            puVar14 = puVar15;
            if (puVar4 != puVar15) {
               LAB_0010852b:do {
                  plVar5 = (long*)*puVar14;
                  if (plVar5 != (long*)0x0) {
                     if (*(code**)( *plVar5 + 8 ) != ~PolyPath64) {
                        puVar14 = puVar14 + 1;
                        ( **(code**)( *plVar5 + 8 ) )(plVar5);
                        if (puVar4 == puVar14) break;
                        goto LAB_0010852b;
                     }
                     puVar6 = (undefined8*)plVar5[3];
                     puVar12 = (undefined8*)plVar5[2];
                     *plVar5 = (long)&PTR__PolyPath64_0010f5c8;
                     puVar13 = puVar12;
                     if (puVar6 != puVar12) {
                        LAB_0010857d:do {
                           plVar7 = (long*)*puVar13;
                           if (plVar7 != (long*)0x0) {
                              if (*(code**)( *plVar7 + 8 ) != ~PolyPath64) {
                                 puVar13 = puVar13 + 1;
                                 ( **(code**)( *plVar7 + 8 ) )(plVar7);
                                 if (puVar6 == puVar13) break;
                                 goto LAB_0010857d;
                              }
                              *plVar7 = (long)&PTR__PolyPath64_0010f5c8;
                              std::vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>::resize((vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>*)( plVar7 + 2 ), 0);
                              pvVar8 = (void*)plVar7[5];
                              if (pvVar8 != (void*)0x0) {
                                 operator_delete(pvVar8, plVar7[7] - (long)pvVar8);
                              }
                              puVar9 = (undefined8*)plVar7[3];
                              puVar16 = (undefined8*)plVar7[2];
                              if (puVar9 != puVar16) {
                                 do {
                                    while (pPVar10 = (PolyPath64*)*puVar16,pPVar10 == (PolyPath64*)0x0) {
                                       LAB_001085f2:puVar16 = puVar16 + 1;
                                       if (puVar9 == puVar16) goto LAB_00108620;
                                    };
                                    if (*(code**)( *(long*)pPVar10 + 8 ) == ~PolyPath64) {
                                       ~PolyPath64(pPVar10)
                                       ;;
                                       operator_delete(pPVar10, 0x40);
                                       goto LAB_001085f2;
                                    }
                                    ( **(code**)( *(long*)pPVar10 + 8 ) )();
                                    puVar16 = puVar16 + 1;
                                 } while ( puVar9 != puVar16 );
                                 LAB_00108620:puVar16 = (undefined8*)plVar7[2];
                              }
                              if (puVar16 != (undefined8*)0x0) {
                                 operator_delete(puVar16, plVar7[4] - (long)puVar16);
                              }
                              operator_delete(plVar7, 0x40);
                           }
                           puVar13 = puVar13 + 1;
                        } while ( puVar6 != puVar13 );
                        plVar5[3] = (long)puVar12;
                     }
                     pvVar8 = (void*)plVar5[5];
                     if (pvVar8 != (void*)0x0) {
                        operator_delete(pvVar8, plVar5[7] - (long)pvVar8);
                     }
                     puVar6 = (undefined8*)plVar5[3];
                     puVar12 = (undefined8*)plVar5[2];
                     if (puVar6 != puVar12) {
                        do {
                           while (pPVar10 = (PolyPath64*)*puVar12,pPVar10 == (PolyPath64*)0x0) {
                              LAB_001086ba:puVar12 = puVar12 + 1;
                              if (puVar6 == puVar12) goto LAB_001086f0;
                           };
                           if (*(code**)( *(long*)pPVar10 + 8 ) == ~PolyPath64) {
                              ~PolyPath64(pPVar10)
                              ;;
                              operator_delete(pPVar10, 0x40);
                              goto LAB_001086ba;
                           }
                           ( **(code**)( *(long*)pPVar10 + 8 ) )();
                           puVar12 = puVar12 + 1;
                        } while ( puVar6 != puVar12 );
                        LAB_001086f0:puVar12 = (undefined8*)plVar5[2];
                     }
                     if (puVar12 != (undefined8*)0x0) {
                        operator_delete(puVar12, plVar5[4] - (long)puVar12);
                     }
                     operator_delete(plVar5, 0x40);
                  }
                  puVar14 = puVar14 + 1;
               } while ( puVar4 != puVar14 );
               plVar3[3] = (long)puVar15;
            }
            pvVar8 = (void*)plVar3[5];
            if (pvVar8 != (void*)0x0) {
               operator_delete(pvVar8, plVar3[7] - (long)pvVar8);
            }
            puVar4 = (undefined8*)plVar3[3];
            puVar15 = (undefined8*)plVar3[2];
            if (puVar4 != puVar15) {
               do {
                  while (pPVar10 = (PolyPath64*)*puVar15,pPVar10 == (PolyPath64*)0x0) {
                     LAB_0010878a:puVar15 = puVar15 + 1;
                     if (puVar4 == puVar15) goto LAB_001087c0;
                  };
                  if (*(code**)( *(long*)pPVar10 + 8 ) == ~PolyPath64) {
                     ~PolyPath64(pPVar10)
                     ;;
                     operator_delete(pPVar10, 0x40);
                     goto LAB_0010878a;
                  }
                  ( **(code**)( *(long*)pPVar10 + 8 ) )();
                  puVar15 = puVar15 + 1;
               } while ( puVar4 != puVar15 );
               LAB_001087c0:puVar15 = (undefined8*)plVar3[2];
            }
            if (puVar15 != (undefined8*)0x0) {
               operator_delete(puVar15, plVar3[4] - (long)puVar15);
            }
            operator_delete(plVar3, 0x40);
         }
         puVar11 = puVar11 + 1;
      } while ( puVar1 != puVar11 );
      *(undefined8**)( this + 0x18 ) = puVar2;
   }
   return;
}/* void std::vector<std::unique_ptr<Clipper2Lib::PolyPath64,
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
      if (0xfffffffffffffffe < uVar5) goto LAB_00108966;
      if (0xfffffffffffffff < uVar9) {
         uVar9 = 0xfffffffffffffff;
      }
      uVar9 = uVar9 * 8;
      LAB_00108970:puVar6 = (undefined8*)operator_new(uVar9);
      local_50 = (long)puVar6 + uVar9;
      uVar3 = *param_3;
      puVar7 = puVar6 + 1;
      *param_3 = 0;
      *(undefined8*)( (long)puVar6 + ( (long)param_2 - (long)puVar2 ) ) = uVar3;
      if (param_2 != puVar2) {
         LAB_001088f2:puVar7 = puVar2;
         puVar8 = puVar6;
         do {
            uVar3 = *puVar7;
            puVar7 = puVar7 + 1;
            *puVar8 = uVar3;
            puVar8 = puVar8 + 1;
         } while ( param_2 != puVar7 );
         puVar7 = (undefined8*)( (long)puVar6 + (long)param_2 + ( 8 - (long)puVar2 ) );
      }
      puVar8 = puVar7;
      if (param_2 == puVar1) goto LAB_00108932;
   } else {
      uVar4 = uVar5 * 2;
      if (uVar4 < uVar5) {
         LAB_00108966:uVar9 = 0x7ffffffffffffff8;
         goto LAB_00108970;
      }
      if (uVar4 != 0) {
         uVar9 = 0xfffffffffffffff;
         if (uVar4 < 0x1000000000000000) {
            uVar9 = uVar4;
         }
         uVar9 = uVar9 << 3;
         goto LAB_00108970;
      }
      uVar3 = *param_3;
      puVar6 = (undefined8*)0x0;
      *param_3 = 0;
      puVar7 = (undefined8*)0x8;
      local_50 = 0;
      *(undefined8*)( (long)param_2 - (long)puVar2 ) = uVar3;
      if (param_2 != puVar2) goto LAB_001088f2;
   }
   puVar8 = (undefined8*)( (long)puVar7 + ( (long)puVar1 - (long)param_2 ) );
   memcpy(puVar7, param_2, (long)puVar1 - (long)param_2);
   LAB_00108932:if (puVar2 != (undefined8*)0x0) {
      operator_delete(puVar2, *(long*)( this + 0x10 ) - (long)puVar2);
   }
   *(undefined8**)this = puVar6;
   *(undefined8**)( this + 8 ) = puVar8;
   *(long*)( this + 0x10 ) = local_50;
   return;
}/* Clipper2Lib::PolyPath64::AddChild(std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > const&) */undefined8 Clipper2Lib::PolyPath64::AddChild(PolyPath64 *this, vector *param_1) {
   long lVar1;
   long lVar2;
   undefined8 *puVar3;
   long *plVar4;
   undefined8 *puVar5;
   PolyPath64 *pPVar6;
   void *pvVar7;
   undefined8 uVar8;
   long *plVar9;
   void *pvVar10;
   ulong uVar11;
   undefined8 *puVar12;
   long lVar13;
   ulong uVar14;
   undefined8 *puVar15;
   undefined8 *puVar16;
   long in_FS_OFFSET;
   undefined8 local_60;
   long *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar9 = (long*)operator_new(0x40);
   plVar9[1] = (long)this;
   *plVar9 = (long)&PTR__PolyPath64_0010f5c8;
   for (int i_1455 = 0; i_1455 < 6; i_1455++) {
      plVar9[( i_1455 + 2 )] = 0;
   }
   if (param_1 != (vector*)( plVar9 + 5 )) {
      lVar1 = *(long*)( param_1 + 8 );
      lVar2 = *(long*)param_1;
      lVar13 = 0;
      uVar14 = lVar1 - lVar2;
      if (uVar14 != 0) {
         if (0x7ffffffffffffff0 < uVar14) {
            std::__throw_bad_array_new_length();
            goto LAB_00108d8f;
         }
         pvVar10 = operator_new(uVar14);
         uVar11 = 0;
         if (lVar1 != lVar2) {
            do {
               uVar8 = ( (undefined8*)( lVar2 + uVar11 ) )[1];
               *(undefined8*)( (long)pvVar10 + uVar11 ) = *(undefined8*)( lVar2 + uVar11 );
               ( (undefined8*)( (long)pvVar10 + uVar11 ) )[1] = uVar8;
               uVar11 = uVar11 + 0x10;
            } while ( uVar14 != uVar11 );
         }
         pvVar7 = (void*)plVar9[5];
         if (pvVar7 != (void*)0x0) {
            operator_delete(pvVar7, plVar9[7] - (long)pvVar7);
         }
         plVar9[5] = (long)pvVar10;
         lVar13 = (long)pvVar10 + uVar14;
         plVar9[7] = lVar13;
      }
      plVar9[6] = lVar13;
   }
   puVar3 = *(undefined8**)( this + 0x18 );
   local_48 = plVar9;
   if (puVar3 == *(undefined8**)( this + 0x20 )) {
      std::vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>::_M_realloc_insert<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>((vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>*)( this + 0x10 ), puVar3, &local_48);
      plVar9 = local_48;
      local_60 = *(undefined8*)( *(long*)( this + 0x18 ) + -8 );
      if (local_48 != (long*)0x0) {
         if (*(code**)( *local_48 + 8 ) == ~PolyPath64) {
            puVar3 = (undefined8*)local_48[3];
            *local_48 = (long)&PTR__PolyPath64_0010f5c8;
            puVar12 = (undefined8*)local_48[2];
            puVar15 = puVar12;
            if (puVar3 != puVar12) {
               LAB_00108b60:do {
                  plVar4 = (long*)*puVar15;
                  if (plVar4 != (long*)0x0) {
                     if (*(code**)( *plVar4 + 8 ) != ~PolyPath64) {
                        puVar15 = puVar15 + 1;
                        ( **(code**)( *plVar4 + 8 ) )(plVar4);
                        if (puVar3 == puVar15) break;
                        goto LAB_00108b60;
                     }
                     *plVar4 = (long)&PTR__PolyPath64_0010f5c8;
                     std::vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>::resize((vector<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPath64,std::default_delete<Clipper2Lib::PolyPath64>>>>*)( plVar4 + 2 ), 0);
                     pvVar10 = (void*)plVar4[5];
                     if (pvVar10 != (void*)0x0) {
                        operator_delete(pvVar10, plVar4[7] - (long)pvVar10);
                     }
                     puVar5 = (undefined8*)plVar4[3];
                     puVar16 = (undefined8*)plVar4[2];
                     if (puVar5 != puVar16) {
                        do {
                           while (pPVar6 = (PolyPath64*)*puVar16,pPVar6 == (PolyPath64*)0x0) {
                              LAB_00108bd7:puVar16 = puVar16 + 1;
                              if (puVar5 == puVar16) goto LAB_00108c00;
                           };
                           if (*(code**)( *(long*)pPVar6 + 8 ) == ~PolyPath64) {
                              ~PolyPath64(pPVar6)
                              ;;
                              operator_delete(pPVar6, 0x40);
                              goto LAB_00108bd7;
                           }
                           ( **(code**)( *(long*)pPVar6 + 8 ) )();
                           puVar16 = puVar16 + 1;
                        } while ( puVar5 != puVar16 );
                        LAB_00108c00:puVar16 = (undefined8*)plVar4[2];
                     }
                     if (puVar16 != (undefined8*)0x0) {
                        operator_delete(puVar16, plVar4[4] - (long)puVar16);
                     }
                     operator_delete(plVar4, 0x40);
                  }
                  puVar15 = puVar15 + 1;
               } while ( puVar3 != puVar15 );
               plVar9[3] = (long)puVar12;
            }
            pvVar10 = (void*)plVar9[5];
            if (pvVar10 != (void*)0x0) {
               operator_delete(pvVar10, plVar9[7] - (long)pvVar10);
            }
            puVar3 = (undefined8*)plVar9[3];
            puVar12 = (undefined8*)plVar9[2];
            if (puVar3 != puVar12) {
               do {
                  while (pPVar6 = (PolyPath64*)*puVar12,pPVar6 == (PolyPath64*)0x0) {
                     LAB_00108caa:puVar12 = puVar12 + 1;
                     if (puVar3 == puVar12) goto LAB_00108ce0;
                  };
                  if (*(code**)( *(long*)pPVar6 + 8 ) == ~PolyPath64) {
                     ~PolyPath64(pPVar6)
                     ;;
                     operator_delete(pPVar6, 0x40);
                     goto LAB_00108caa;
                  }
                  ( **(code**)( *(long*)pPVar6 + 8 ) )();
                  puVar12 = puVar12 + 1;
               } while ( puVar3 != puVar12 );
               LAB_00108ce0:puVar12 = (undefined8*)plVar9[2];
            }
            if (puVar12 != (undefined8*)0x0) {
               operator_delete(puVar12, plVar9[4] - (long)puVar12);
            }
            operator_delete(plVar9, 0x40);
         } else {
            ( **(code**)( *local_48 + 8 ) )(local_48);
         }
      }
   } else {
      *puVar3 = plVar9;
      *(undefined8**)( this + 0x18 ) = puVar3 + 1;
      local_60 = *puVar3;
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_60;
   }
   LAB_00108d8f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* std::vector<std::unique_ptr<Clipper2Lib::PolyPathD, std::default_delete<Clipper2Lib::PolyPathD>
   >, std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,
   std::default_delete<Clipper2Lib::PolyPathD> > > >::_M_default_append(unsigned long) */void std::vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>::_M_default_append(vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>> *this, ulong param_1) {
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
}/* Clipper2Lib::PolyPathD::~PolyPathD() */void Clipper2Lib::PolyPathD::~PolyPathD(PolyPathD *this) {
   void *pvVar1;
   undefined8 *puVar2;
   long *plVar3;
   undefined8 *puVar4;
   long *plVar5;
   undefined8 *puVar6;
   long *plVar7;
   undefined8 *puVar8;
   long *plVar9;
   undefined8 *puVar10;
   long *plVar11;
   undefined8 *puVar12;
   PolyPathD *pPVar13;
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
   *(undefined***)this = &PTR__PolyPathD_0010f600;
   std::vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>::resize(( vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete < Clipper2Lib::PolyPathD>>> > * )(this + 0x10), 0);
   pvVar1 = *(void**)( this + 0x30 );
   if (pvVar1 != (void*)0x0) {
      operator_delete(pvVar1, *(long*)( this + 0x40 ) - (long)pvVar1);
   }
   puVar2 = *(undefined8**)( this + 0x18 );
   puVar23 = *(undefined8**)( this + 0x10 );
   if (puVar2 != puVar23) {
      LAB_00108f78:do {
         plVar3 = (long*)*puVar23;
         if (plVar3 != (long*)0x0) {
            if (*(code**)( *plVar3 + 8 ) != ~PolyPathD) {
               puVar23 = puVar23 + 1;
               ( **(code**)( *plVar3 + 8 ) )(plVar3);
               if (puVar2 == puVar23) break;
               goto LAB_00108f78;
            }
            puVar4 = (undefined8*)plVar3[2];
            *plVar3 = (long)&PTR__PolyPathD_0010f600;
            puVar15 = (undefined8*)plVar3[3];
            puVar16 = puVar4;
            if (puVar15 != puVar4) {
               LAB_00108fc9:do {
                  plVar5 = (long*)*puVar16;
                  if (plVar5 != (long*)0x0) {
                     if (*(code**)( *plVar5 + 8 ) != ~PolyPathD) {
                        puVar16 = puVar16 + 1;
                        ( **(code**)( *plVar5 + 8 ) )(plVar5);
                        if (puVar15 == puVar16) break;
                        goto LAB_00108fc9;
                     }
                     puVar6 = (undefined8*)plVar5[2];
                     *plVar5 = (long)&PTR__PolyPathD_0010f600;
                     puVar22 = (undefined8*)plVar5[3];
                     puVar19 = puVar6;
                     if (puVar22 != puVar6) {
                        LAB_0010901b:do {
                           plVar7 = (long*)*puVar19;
                           if (plVar7 != (long*)0x0) {
                              if (*(code**)( *plVar7 + 8 ) != ~PolyPathD) {
                                 puVar19 = puVar19 + 1;
                                 ( **(code**)( *plVar7 + 8 ) )(plVar7);
                                 if (puVar22 == puVar19) break;
                                 goto LAB_0010901b;
                              }
                              puVar8 = (undefined8*)plVar7[3];
                              *plVar7 = (long)&PTR__PolyPathD_0010f600;
                              puVar18 = (undefined8*)plVar7[2];
                              puVar17 = puVar18;
                              if (puVar8 != puVar18) {
                                 LAB_0010906b:do {
                                    plVar9 = (long*)*puVar17;
                                    if (plVar9 != (long*)0x0) {
                                       if (*(code**)( *plVar9 + 8 ) != ~PolyPathD) {
                                          puVar17 = puVar17 + 1;
                                          ( **(code**)( *plVar9 + 8 ) )(plVar9);
                                          if (puVar8 == puVar17) break;
                                          goto LAB_0010906b;
                                       }
                                       puVar10 = (undefined8*)plVar9[3];
                                       *plVar9 = (long)&PTR__PolyPathD_0010f600;
                                       puVar21 = (undefined8*)plVar9[2];
                                       puVar20 = puVar21;
                                       if (puVar10 != puVar21) {
                                          LAB_001090ba:do {
                                             plVar11 = (long*)*puVar20;
                                             if (plVar11 != (long*)0x0) {
                                                if (*(code**)( *plVar11 + 8 ) != ~PolyPathD) {
                                                   puVar20 = puVar20 + 1;
                                                   ( **(code**)( *plVar11 + 8 ) )(plVar11);
                                                   if (puVar10 == puVar20) break;
                                                   goto LAB_001090ba;
                                                }
                                                *plVar11 = (long)&PTR__PolyPathD_0010f600;
                                                std::vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>::resize((vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>*)( plVar11 + 2 ), 0);
                                                pvVar1 = (void*)plVar11[6];
                                                if (pvVar1 != (void*)0x0) {
                                                   operator_delete(pvVar1, plVar11[8] - (long)pvVar1);
                                                }
                                                puVar12 = (undefined8*)plVar11[3];
                                                puVar14 = (undefined8*)plVar11[2];
                                                if (puVar12 != puVar14) {
                                                   do {
                                                      while (pPVar13 = (PolyPathD*)*puVar14,pPVar13 == (PolyPathD*)0x0) {
                                                         LAB_00109130:puVar14 = puVar14 + 1;
                                                         if (puVar12 == puVar14) goto LAB_00109160;
                                                      };
                                                      if (*(code**)( *(long*)pPVar13 + 8 ) == ~PolyPathD) {
                                                         ~PolyPathD(pPVar13)
                                                         ;;
                                                         operator_delete(pPVar13, 0x48);
                                                         goto LAB_00109130;
                                                      }
                                                      ( **(code**)( *(long*)pPVar13 + 8 ) )();
                                                      puVar14 = puVar14 + 1;
                                                   } while ( puVar12 != puVar14 );
                                                   LAB_00109160:puVar14 = (undefined8*)plVar11[2];
                                                }
                                                if (puVar14 != (undefined8*)0x0) {
                                                   operator_delete(puVar14, plVar11[4] - (long)puVar14);
                                                }
                                                operator_delete(plVar11, 0x48);
                                             }
                                             puVar20 = puVar20 + 1;
                                          } while ( puVar10 != puVar20 );
                                          plVar9[3] = (long)puVar21;
                                       }
                                       pvVar1 = (void*)plVar9[6];
                                       if (pvVar1 != (void*)0x0) {
                                          operator_delete(pvVar1, plVar9[8] - (long)pvVar1);
                                       }
                                       puVar10 = (undefined8*)plVar9[3];
                                       puVar21 = (undefined8*)plVar9[2];
                                       if (puVar10 != puVar21) {
                                          do {
                                             while (pPVar13 = (PolyPathD*)*puVar21,pPVar13 == (PolyPathD*)0x0) {
                                                LAB_00109200:puVar21 = puVar21 + 1;
                                                if (puVar10 == puVar21) goto LAB_00109230;
                                             };
                                             if (*(code**)( *(long*)pPVar13 + 8 ) == ~PolyPathD) {
                                                ~PolyPathD(pPVar13)
                                                ;;
                                                operator_delete(pPVar13, 0x48);
                                                goto LAB_00109200;
                                             }
                                             ( **(code**)( *(long*)pPVar13 + 8 ) )();
                                             puVar21 = puVar21 + 1;
                                          } while ( puVar10 != puVar21 );
                                          LAB_00109230:puVar21 = (undefined8*)plVar9[2];
                                       }
                                       if (puVar21 != (undefined8*)0x0) {
                                          operator_delete(puVar21, plVar9[4] - (long)puVar21);
                                       }
                                       operator_delete(plVar9, 0x48);
                                    }
                                    puVar17 = puVar17 + 1;
                                 } while ( puVar8 != puVar17 );
                                 plVar7[3] = (long)puVar18;
                              }
                              pvVar1 = (void*)plVar7[6];
                              if (pvVar1 != (void*)0x0) {
                                 operator_delete(pvVar1, plVar7[8] - (long)pvVar1);
                              }
                              puVar8 = (undefined8*)plVar7[3];
                              puVar18 = (undefined8*)plVar7[2];
                              if (puVar8 != puVar18) {
                                 do {
                                    while (pPVar13 = (PolyPathD*)*puVar18,pPVar13 == (PolyPathD*)0x0) {
                                       LAB_001092d0:puVar18 = puVar18 + 1;
                                       if (puVar8 == puVar18) goto LAB_00109300;
                                    };
                                    if (*(code**)( *(long*)pPVar13 + 8 ) == ~PolyPathD) {
                                       ~PolyPathD(pPVar13)
                                       ;;
                                       operator_delete(pPVar13, 0x48);
                                       goto LAB_001092d0;
                                    }
                                    ( **(code**)( *(long*)pPVar13 + 8 ) )();
                                    puVar18 = puVar18 + 1;
                                 } while ( puVar8 != puVar18 );
                                 LAB_00109300:puVar18 = (undefined8*)plVar7[2];
                              }
                              if (puVar18 != (undefined8*)0x0) {
                                 operator_delete(puVar18, plVar7[4] - (long)puVar18);
                              }
                              operator_delete(plVar7, 0x48);
                           }
                           puVar19 = puVar19 + 1;
                        } while ( puVar22 != puVar19 );
                        plVar5[3] = (long)puVar6;
                     }
                     pvVar1 = (void*)plVar5[6];
                     if (pvVar1 != (void*)0x0) {
                        operator_delete(pvVar1, plVar5[8] - (long)pvVar1);
                     }
                     puVar6 = (undefined8*)plVar5[3];
                     puVar22 = (undefined8*)plVar5[2];
                     if (puVar6 != puVar22) {
                        do {
                           while (pPVar13 = (PolyPathD*)*puVar22,pPVar13 == (PolyPathD*)0x0) {
                              LAB_00109390:puVar22 = puVar22 + 1;
                              if (puVar6 == puVar22) goto LAB_001093c0;
                           };
                           if (*(code**)( *(long*)pPVar13 + 8 ) == ~PolyPathD) {
                              ~PolyPathD(pPVar13)
                              ;;
                              operator_delete(pPVar13, 0x48);
                              goto LAB_00109390;
                           }
                           ( **(code**)( *(long*)pPVar13 + 8 ) )();
                           puVar22 = puVar22 + 1;
                        } while ( puVar6 != puVar22 );
                        LAB_001093c0:puVar22 = (undefined8*)plVar5[2];
                     }
                     if (puVar22 != (undefined8*)0x0) {
                        operator_delete(puVar22, plVar5[4] - (long)puVar22);
                     }
                     operator_delete(plVar5, 0x48);
                  }
                  puVar16 = puVar16 + 1;
               } while ( puVar15 != puVar16 );
               plVar3[3] = (long)puVar4;
            }
            pvVar1 = (void*)plVar3[6];
            if (pvVar1 != (void*)0x0) {
               operator_delete(pvVar1, plVar3[8] - (long)pvVar1);
            }
            puVar4 = (undefined8*)plVar3[3];
            puVar15 = (undefined8*)plVar3[2];
            if (puVar4 != puVar15) {
               do {
                  while (pPVar13 = (PolyPathD*)*puVar15,pPVar13 == (PolyPathD*)0x0) {
                     LAB_00109450:puVar15 = puVar15 + 1;
                     if (puVar4 == puVar15) goto LAB_00109480;
                  };
                  if (*(code**)( *(long*)pPVar13 + 8 ) == ~PolyPathD) {
                     ~PolyPathD(pPVar13)
                     ;;
                     operator_delete(pPVar13, 0x48);
                     goto LAB_00109450;
                  }
                  ( **(code**)( *(long*)pPVar13 + 8 ) )();
                  puVar15 = puVar15 + 1;
               } while ( puVar4 != puVar15 );
               LAB_00109480:puVar15 = (undefined8*)plVar3[2];
            }
            if (puVar15 != (undefined8*)0x0) {
               operator_delete(puVar15, plVar3[4] - (long)puVar15);
            }
            operator_delete(plVar3, 0x48);
         }
         puVar23 = puVar23 + 1;
      } while ( puVar2 != puVar23 );
      puVar23 = *(undefined8**)( this + 0x10 );
   }
   if (puVar23 == (undefined8*)0x0) {
      return;
   }
   operator_delete(puVar23, *(long*)( this + 0x20 ) - (long)puVar23);
   return;
}/* std::vector<std::unique_ptr<Clipper2Lib::PolyPathD, std::default_delete<Clipper2Lib::PolyPathD>
   >, std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,
   std::default_delete<Clipper2Lib::PolyPathD> > > >::resize(unsigned long) */void std::vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>::resize(vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>> *this, ulong param_1) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   long *plVar3;
   void *pvVar4;
   undefined8 *puVar5;
   PolyPathD *this_00;
   ulong uVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   puVar2 = *(undefined8**)( this + 8 );
   uVar6 = (long)puVar2 - *(long*)this >> 3;
   if (uVar6 < param_1) {
      _M_default_append(this, param_1 - uVar6);
      return;
   }
   if (( param_1 < uVar6 ) && ( puVar1 = (undefined8*)( *(long*)this + param_1 * 8 ) ),puVar7 = puVar1,puVar1 != puVar2) {
      do {
         plVar3 = (long*)*puVar7;
         if (plVar3 != (long*)0x0) {
            if (*(code**)( *plVar3 + 8 ) == Clipper2Lib::PolyPathD::~PolyPathD) {
               *plVar3 = (long)&PTR__PolyPathD_0010f600;
               resize((vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>*)( plVar3 + 2 ), 0);
               pvVar4 = (void*)plVar3[6];
               if (pvVar4 != (void*)0x0) {
                  operator_delete(pvVar4, plVar3[8] - (long)pvVar4);
               }
               puVar5 = (undefined8*)plVar3[3];
               puVar8 = (undefined8*)plVar3[2];
               if (puVar5 != puVar8) {
                  do {
                     while (this_00 = (PolyPathD*)*puVar8,this_00 == (PolyPathD*)0x0) {
                        LAB_00109672:puVar8 = puVar8 + 1;
                        if (puVar5 == puVar8) goto LAB_001096a0;
                     };
                     if (*(code**)( *(long*)this_00 + 8 ) == Clipper2Lib::PolyPathD::~PolyPathD) {
                        Clipper2Lib::PolyPathD::~PolyPathD(this_00);
                        operator_delete(this_00, 0x48);
                        goto LAB_00109672;
                     }
                     ( **(code**)( *(long*)this_00 + 8 ) )();
                     puVar8 = puVar8 + 1;
                  } while ( puVar5 != puVar8 );
                  LAB_001096a0:puVar8 = (undefined8*)plVar3[2];
               }
               if (puVar8 != (undefined8*)0x0) {
                  operator_delete(puVar8, plVar3[4] - (long)puVar8);
               }
               operator_delete(plVar3, 0x48);
            } else {
               ( **(code**)( *plVar3 + 8 ) )(plVar3);
            }
         }
         puVar7 = puVar7 + 1;
      } while ( puVar2 != puVar7 );
      *(undefined8**)( this + 8 ) = puVar1;
   }
   return;
}/* std::unique_ptr<Clipper2Lib::PolyPathD, std::default_delete<Clipper2Lib::PolyPathD>
   >::~unique_ptr() */void std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>::~unique_ptr(unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>> *this) {
   long *plVar1;
   void *pvVar2;
   undefined8 *puVar3;
   PolyPathD *this_00;
   undefined8 *puVar4;
   plVar1 = *(long**)this;
   if (plVar1 == (long*)0x0) {
      return;
   }
   if (*(code**)( *plVar1 + 8 ) != Clipper2Lib::PolyPathD::~PolyPathD) {
      for (int i_1456 = 0; i_1456 < 2; i_1456++) {
         /* WARNING: Could not recover jumptable at 0x0010982b. Too many branches */
      }
      ( **(code**)( *plVar1 + 8 ) )(plVar1);
      return;
   }
   *plVar1 = (long)&PTR__PolyPathD_0010f600;
   vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>::resize((vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>*)( plVar1 + 2 ), 0);
   pvVar2 = (void*)plVar1[6];
   if (pvVar2 != (void*)0x0) {
      operator_delete(pvVar2, plVar1[8] - (long)pvVar2);
   }
   puVar3 = (undefined8*)plVar1[3];
   puVar4 = (undefined8*)plVar1[2];
   if (puVar3 != puVar4) {
      do {
         while (this_00 = (PolyPathD*)*puVar4,this_00 == (PolyPathD*)0x0) {
            LAB_001097d2:puVar4 = puVar4 + 1;
            if (puVar3 == puVar4) goto LAB_00109800;
         };
         if (*(code**)( *(long*)this_00 + 8 ) == Clipper2Lib::PolyPathD::~PolyPathD) {
            Clipper2Lib::PolyPathD::~PolyPathD(this_00);
            operator_delete(this_00, 0x48);
            goto LAB_001097d2;
         }
         ( **(code**)( *(long*)this_00 + 8 ) )();
         puVar4 = puVar4 + 1;
      } while ( puVar3 != puVar4 );
      LAB_00109800:puVar4 = (undefined8*)plVar1[2];
   }
   if (puVar4 != (undefined8*)0x0) {
      operator_delete(puVar4, plVar1[4] - (long)puVar4);
   }
   operator_delete(plVar1, 0x48);
   return;
}/* Clipper2Lib::PolyPathD::~PolyPathD() */void Clipper2Lib::PolyPathD::~PolyPathD(PolyPathD *this) {
   undefined8 *puVar1;
   long *plVar2;
   void *pvVar3;
   undefined8 *puVar4;
   PolyPathD *pPVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   *(undefined***)this = &PTR__PolyPathD_0010f600;
   puVar1 = *(undefined8**)( this + 0x18 );
   puVar6 = *(undefined8**)( this + 0x10 );
   puVar7 = puVar6;
   if (puVar1 != puVar6) {
      LAB_00109874:do {
         plVar2 = (long*)*puVar7;
         if (plVar2 != (long*)0x0) {
            if (*(code**)( *plVar2 + 8 ) != ~PolyPathD) {
               puVar7 = puVar7 + 1;
               ( **(code**)( *plVar2 + 8 ) )(plVar2);
               if (puVar1 == puVar7) break;
               goto LAB_00109874;
            }
            *plVar2 = (long)&PTR__PolyPathD_0010f600;
            std::vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>::resize((vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>*)( plVar2 + 2 ), 0);
            pvVar3 = (void*)plVar2[6];
            if (pvVar3 != (void*)0x0) {
               operator_delete(pvVar3, plVar2[8] - (long)pvVar3);
            }
            puVar4 = (undefined8*)plVar2[3];
            puVar8 = (undefined8*)plVar2[2];
            if (puVar4 != puVar8) {
               do {
                  while (pPVar5 = (PolyPathD*)*puVar8,pPVar5 == (PolyPathD*)0x0) {
                     LAB_001098e9:puVar8 = puVar8 + 1;
                     if (puVar4 == puVar8) goto LAB_00109918;
                  };
                  if (*(code**)( *(long*)pPVar5 + 8 ) == ~PolyPathD) {
                     ~PolyPathD(pPVar5)
                     ;;
                     operator_delete(pPVar5, 0x48);
                     goto LAB_001098e9;
                  }
                  ( **(code**)( *(long*)pPVar5 + 8 ) )();
                  puVar8 = puVar8 + 1;
               } while ( puVar4 != puVar8 );
               LAB_00109918:puVar8 = (undefined8*)plVar2[2];
            }
            if (puVar8 != (undefined8*)0x0) {
               operator_delete(puVar8, plVar2[4] - (long)puVar8);
            }
            operator_delete(plVar2, 0x48);
         }
         puVar7 = puVar7 + 1;
      } while ( puVar1 != puVar7 );
      *(undefined8**)( this + 0x18 ) = puVar6;
   }
   pvVar3 = *(void**)( this + 0x30 );
   if (pvVar3 != (void*)0x0) {
      operator_delete(pvVar3, *(long*)( this + 0x40 ) - (long)pvVar3);
   }
   puVar1 = *(undefined8**)( this + 0x18 );
   puVar6 = *(undefined8**)( this + 0x10 );
   if (puVar1 != puVar6) {
      do {
         while (pPVar5 = (PolyPathD*)*puVar6,pPVar5 == (PolyPathD*)0x0) {
            LAB_0010999a:puVar6 = puVar6 + 1;
            if (puVar1 == puVar6) goto LAB_001099d0;
         };
         if (*(code**)( *(long*)pPVar5 + 8 ) == ~PolyPathD) {
            ~PolyPathD(pPVar5)
            ;;
            operator_delete(pPVar5, 0x48);
            goto LAB_0010999a;
         }
         ( **(code**)( *(long*)pPVar5 + 8 ) )();
         puVar6 = puVar6 + 1;
      } while ( puVar1 != puVar6 );
      LAB_001099d0:puVar6 = *(undefined8**)( this + 0x10 );
   }
   if (puVar6 != (undefined8*)0x0) {
      operator_delete(puVar6, *(long*)( this + 0x20 ) - (long)puVar6);
   }
   operator_delete(this, 0x48);
   return;
}/* Clipper2Lib::PolyPathD::Clear() */void Clipper2Lib::PolyPathD::Clear(PolyPathD *this) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   long *plVar3;
   undefined8 *puVar4;
   long *plVar5;
   undefined8 *puVar6;
   long *plVar7;
   void *pvVar8;
   undefined8 *puVar9;
   PolyPathD *pPVar10;
   undefined8 *puVar11;
   undefined8 *puVar12;
   undefined8 *puVar13;
   undefined8 *puVar14;
   undefined8 *puVar15;
   undefined8 *puVar16;
   puVar1 = *(undefined8**)( this + 0x18 );
   puVar2 = *(undefined8**)( this + 0x10 );
   puVar11 = puVar2;
   if (puVar1 != puVar2) {
      LAB_00109a6a:do {
         plVar3 = (long*)*puVar11;
         if (plVar3 != (long*)0x0) {
            if (*(code**)( *plVar3 + 8 ) != ~PolyPathD) {
               puVar11 = puVar11 + 1;
               ( **(code**)( *plVar3 + 8 ) )(plVar3);
               if (puVar1 == puVar11) break;
               goto LAB_00109a6a;
            }
            puVar4 = (undefined8*)plVar3[3];
            *plVar3 = (long)&PTR__PolyPathD_0010f600;
            puVar15 = (undefined8*)plVar3[2];
            puVar14 = puVar15;
            if (puVar4 != puVar15) {
               LAB_00109abb:do {
                  plVar5 = (long*)*puVar14;
                  if (plVar5 != (long*)0x0) {
                     if (*(code**)( *plVar5 + 8 ) != ~PolyPathD) {
                        puVar14 = puVar14 + 1;
                        ( **(code**)( *plVar5 + 8 ) )(plVar5);
                        if (puVar4 == puVar14) break;
                        goto LAB_00109abb;
                     }
                     puVar6 = (undefined8*)plVar5[3];
                     puVar12 = (undefined8*)plVar5[2];
                     *plVar5 = (long)&PTR__PolyPathD_0010f600;
                     puVar13 = puVar12;
                     if (puVar6 != puVar12) {
                        LAB_00109b0d:do {
                           plVar7 = (long*)*puVar13;
                           if (plVar7 != (long*)0x0) {
                              if (*(code**)( *plVar7 + 8 ) != ~PolyPathD) {
                                 puVar13 = puVar13 + 1;
                                 ( **(code**)( *plVar7 + 8 ) )(plVar7);
                                 if (puVar6 == puVar13) break;
                                 goto LAB_00109b0d;
                              }
                              *plVar7 = (long)&PTR__PolyPathD_0010f600;
                              std::vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>::resize((vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>*)( plVar7 + 2 ), 0);
                              pvVar8 = (void*)plVar7[6];
                              if (pvVar8 != (void*)0x0) {
                                 operator_delete(pvVar8, plVar7[8] - (long)pvVar8);
                              }
                              puVar9 = (undefined8*)plVar7[3];
                              puVar16 = (undefined8*)plVar7[2];
                              if (puVar9 != puVar16) {
                                 do {
                                    while (pPVar10 = (PolyPathD*)*puVar16,pPVar10 == (PolyPathD*)0x0) {
                                       LAB_00109b82:puVar16 = puVar16 + 1;
                                       if (puVar9 == puVar16) goto LAB_00109bb0;
                                    };
                                    if (*(code**)( *(long*)pPVar10 + 8 ) == ~PolyPathD) {
                                       ~PolyPathD(pPVar10)
                                       ;;
                                       operator_delete(pPVar10, 0x48);
                                       goto LAB_00109b82;
                                    }
                                    ( **(code**)( *(long*)pPVar10 + 8 ) )();
                                    puVar16 = puVar16 + 1;
                                 } while ( puVar9 != puVar16 );
                                 LAB_00109bb0:puVar16 = (undefined8*)plVar7[2];
                              }
                              if (puVar16 != (undefined8*)0x0) {
                                 operator_delete(puVar16, plVar7[4] - (long)puVar16);
                              }
                              operator_delete(plVar7, 0x48);
                           }
                           puVar13 = puVar13 + 1;
                        } while ( puVar6 != puVar13 );
                        plVar5[3] = (long)puVar12;
                     }
                     pvVar8 = (void*)plVar5[6];
                     if (pvVar8 != (void*)0x0) {
                        operator_delete(pvVar8, plVar5[8] - (long)pvVar8);
                     }
                     puVar6 = (undefined8*)plVar5[3];
                     puVar12 = (undefined8*)plVar5[2];
                     if (puVar6 != puVar12) {
                        do {
                           while (pPVar10 = (PolyPathD*)*puVar12,pPVar10 == (PolyPathD*)0x0) {
                              LAB_00109c4a:puVar12 = puVar12 + 1;
                              if (puVar6 == puVar12) goto LAB_00109c80;
                           };
                           if (*(code**)( *(long*)pPVar10 + 8 ) == ~PolyPathD) {
                              ~PolyPathD(pPVar10)
                              ;;
                              operator_delete(pPVar10, 0x48);
                              goto LAB_00109c4a;
                           }
                           ( **(code**)( *(long*)pPVar10 + 8 ) )();
                           puVar12 = puVar12 + 1;
                        } while ( puVar6 != puVar12 );
                        LAB_00109c80:puVar12 = (undefined8*)plVar5[2];
                     }
                     if (puVar12 != (undefined8*)0x0) {
                        operator_delete(puVar12, plVar5[4] - (long)puVar12);
                     }
                     operator_delete(plVar5, 0x48);
                  }
                  puVar14 = puVar14 + 1;
               } while ( puVar4 != puVar14 );
               plVar3[3] = (long)puVar15;
            }
            pvVar8 = (void*)plVar3[6];
            if (pvVar8 != (void*)0x0) {
               operator_delete(pvVar8, plVar3[8] - (long)pvVar8);
            }
            puVar4 = (undefined8*)plVar3[3];
            puVar15 = (undefined8*)plVar3[2];
            if (puVar4 != puVar15) {
               do {
                  while (pPVar10 = (PolyPathD*)*puVar15,pPVar10 == (PolyPathD*)0x0) {
                     LAB_00109d1a:puVar15 = puVar15 + 1;
                     if (puVar4 == puVar15) goto LAB_00109d50;
                  };
                  if (*(code**)( *(long*)pPVar10 + 8 ) == ~PolyPathD) {
                     ~PolyPathD(pPVar10)
                     ;;
                     operator_delete(pPVar10, 0x48);
                     goto LAB_00109d1a;
                  }
                  ( **(code**)( *(long*)pPVar10 + 8 ) )();
                  puVar15 = puVar15 + 1;
               } while ( puVar4 != puVar15 );
               LAB_00109d50:puVar15 = (undefined8*)plVar3[2];
            }
            if (puVar15 != (undefined8*)0x0) {
               operator_delete(puVar15, plVar3[4] - (long)puVar15);
            }
            operator_delete(plVar3, 0x48);
         }
         puVar11 = puVar11 + 1;
      } while ( puVar1 != puVar11 );
      *(undefined8**)( this + 0x18 ) = puVar2;
   }
   return;
}/* void std::vector<std::unique_ptr<Clipper2Lib::PolyPathD,
   std::default_delete<Clipper2Lib::PolyPathD> >,
   std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,
   std::default_delete<Clipper2Lib::PolyPathD> > >
   >::_M_realloc_insert<std::unique_ptr<Clipper2Lib::PolyPathD,
   std::default_delete<Clipper2Lib::PolyPathD> >
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::PolyPathD,
   std::default_delete<Clipper2Lib::PolyPathD> >*,
   std::vector<std::unique_ptr<Clipper2Lib::PolyPathD, std::default_delete<Clipper2Lib::PolyPathD>
   >, std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,
   std::default_delete<Clipper2Lib::PolyPathD> > > > >, std::unique_ptr<Clipper2Lib::PolyPathD,
   std::default_delete<Clipper2Lib::PolyPathD> >&&) */void std::vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>::_M_realloc_insert<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>(vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>> *this, undefined8 *param_2, undefined8 *param_3) {
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
      if (0xfffffffffffffffe < uVar5) goto LAB_00109ef6;
      if (0xfffffffffffffff < uVar9) {
         uVar9 = 0xfffffffffffffff;
      }
      uVar9 = uVar9 * 8;
      LAB_00109f00:puVar6 = (undefined8*)operator_new(uVar9);
      local_50 = (long)puVar6 + uVar9;
      uVar3 = *param_3;
      puVar7 = puVar6 + 1;
      *param_3 = 0;
      *(undefined8*)( (long)puVar6 + ( (long)param_2 - (long)puVar2 ) ) = uVar3;
      if (param_2 != puVar2) {
         LAB_00109e82:puVar7 = puVar2;
         puVar8 = puVar6;
         do {
            uVar3 = *puVar7;
            puVar7 = puVar7 + 1;
            *puVar8 = uVar3;
            puVar8 = puVar8 + 1;
         } while ( param_2 != puVar7 );
         puVar7 = (undefined8*)( (long)puVar6 + (long)param_2 + ( 8 - (long)puVar2 ) );
      }
      puVar8 = puVar7;
      if (param_2 == puVar1) goto LAB_00109ec2;
   } else {
      uVar4 = uVar5 * 2;
      if (uVar4 < uVar5) {
         LAB_00109ef6:uVar9 = 0x7ffffffffffffff8;
         goto LAB_00109f00;
      }
      if (uVar4 != 0) {
         uVar9 = 0xfffffffffffffff;
         if (uVar4 < 0x1000000000000000) {
            uVar9 = uVar4;
         }
         uVar9 = uVar9 << 3;
         goto LAB_00109f00;
      }
      uVar3 = *param_3;
      puVar6 = (undefined8*)0x0;
      *param_3 = 0;
      puVar7 = (undefined8*)0x8;
      local_50 = 0;
      *(undefined8*)( (long)param_2 - (long)puVar2 ) = uVar3;
      if (param_2 != puVar2) goto LAB_00109e82;
   }
   puVar8 = (undefined8*)( (long)puVar7 + ( (long)puVar1 - (long)param_2 ) );
   memcpy(puVar7, param_2, (long)puVar1 - (long)param_2);
   LAB_00109ec2:if (puVar2 != (undefined8*)0x0) {
      operator_delete(puVar2, *(long*)( this + 0x10 ) - (long)puVar2);
   }
   *(undefined8**)this = puVar6;
   *(undefined8**)( this + 8 ) = puVar8;
   *(long*)( this + 0x10 ) = local_50;
   return;
}/* void std::vector<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> >
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
         goto LAB_0010a185;
      }
   } else {
      uVar16 = lVar5 * 0x5555555555555556;
      if (uVar6 <= uVar16) {
         if (uVar16 != 0) goto LAB_0010a1f5;
         puVar11 = (undefined8*)0x0;
         goto LAB_0010a012;
      }
   }
   uVar6 = 0x7ffffffffffffff8;
   uVar16 = 0x555555555555555;
   LAB_0010a185:while (true) {
      puVar11 = (undefined8*)operator_new(uVar6);
      LAB_0010a012:lVar5 = param_3[1];
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
         LAB_0010a075:*(void**)*pauVar15 = pvVar7;
         *(ulong*)pauVar15[1] = uVar6 + (long)pvVar7;
         if (lVar5 != lVar14) {
            lVar12 = 0;
            do {
               uVar3 = ( (undefined8*)( lVar14 + lVar12 ) )[1];
               *(undefined8*)( (long)pvVar7 + lVar12 ) = *(undefined8*)( lVar14 + lVar12 );
               ( (undefined8*)( (long)pvVar7 + lVar12 ) )[1] = uVar3;
               lVar12 = lVar12 + 0x10;
            } while ( lVar5 - lVar14 != lVar12 );
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
            } while ( param_2 != puVar9 );
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
            } while ( puVar1 != puVar10 );
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
      LAB_0010a1f5:if (0x555555555555555 < uVar16) {
         uVar16 = 0x555555555555555;
      }
      uVar6 = uVar16 * 0x18;
   };
   pvVar7 = (void*)0x0;
   goto LAB_0010a075;
}/* void std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> >
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
      if (0xfffffffffffffffe < uVar5) goto LAB_0010a328;
      uVar7 = 0x7ffffffffffffff;
      if (uVar5 + 1 < 0x800000000000000) {
         uVar7 = uVar5 + 1;
      }
      uVar7 = uVar7 << 4;
      LAB_0010a332:puVar6 = (undefined8*)operator_new(uVar7);
      uVar3 = param_3[1];
      lVar11 = uVar7 + (long)puVar6;
      puVar10 = puVar6 + 2;
      *(undefined8*)( (long)puVar6 + (long)puVar8 ) = *param_3;
      ( (undefined8*)( (long)puVar6 + (long)puVar8 ) )[1] = uVar3;
      if (param_2 != puVar2) {
         LAB_0010a29a:puVar8 = puVar6;
         puVar9 = puVar2;
         do {
            puVar10 = puVar8;
            uVar3 = *puVar9;
            uVar4 = puVar9[1];
            puVar9 = puVar9 + 2;
            *puVar10 = uVar3;
            puVar10[1] = uVar4;
            puVar8 = puVar10 + 2;
         } while ( puVar10 + 2 != (undefined8*)( ( (long)param_2 - (long)puVar2 ) + (long)puVar6 ) );
         puVar10 = puVar10 + 4;
      }
      puVar8 = puVar10;
      if (param_2 == puVar1) goto LAB_0010a2ec;
   } else {
      uVar7 = uVar5 * 2;
      if (uVar7 < uVar5) {
         LAB_0010a328:uVar7 = 0x7ffffffffffffff0;
         goto LAB_0010a332;
      }
      if (uVar7 != 0) {
         if (0x7ffffffffffffff < uVar7) {
            uVar7 = 0x7ffffffffffffff;
         }
         uVar7 = uVar7 << 4;
         goto LAB_0010a332;
      }
      uVar3 = param_3[1];
      lVar11 = 0;
      puVar6 = (undefined8*)0x0;
      puVar10 = (undefined8*)&DAT_00000010;
      *puVar8 = *param_3;
      puVar8[1] = uVar3;
      if (param_2 != puVar2) goto LAB_0010a29a;
   }
   puVar8 = (undefined8*)( (long)puVar10 + ( (long)puVar1 - (long)param_2 ) );
   memcpy(puVar10, param_2, (long)puVar1 - (long)param_2);
   LAB_0010a2ec:if (puVar2 != (undefined8*)0x0) {
      operator_delete(puVar2, *(long*)( this + 0x10 ) - (long)puVar2);
   }
   *(undefined8**)this = puVar6;
   *(undefined8**)( this + 8 ) = puVar8;
   *(long*)( this + 0x10 ) = lVar11;
   return;
}/* Clipper2Lib::GetCleanPath(Clipper2Lib::OutPt*) */Clipper2Lib * __thiscall Clipper2Lib::GetCleanPath(Clipper2Lib *this,OutPt *param_1){
   OutPt *pOVar1;
   long lVar2;
   long *plVar3;
   OutPt *pOVar4;
   long lVar5;
   OutPt *pOVar6;
   pOVar1 = *(OutPt**)( param_1 + 0x10 );
   *(undefined8*)( this + 0x10 ) = 0;
   *(undefined1(*) [16])this = (undefined1[16])0x0;
   pOVar6 = param_1;
   if (param_1 != pOVar1) {
      lVar5 = *(long*)param_1;
      do {
         pOVar4 = pOVar1;
         lVar2 = *(long*)pOVar4;
         if (lVar2 == lVar5) {
            if (**(long**)( pOVar6 + 0x18 ) != lVar2) {
               lVar5 = *(long*)( pOVar6 + 8 );
               if (lVar5 == *(long*)( pOVar4 + 8 )) goto LAB_0010a3fa;
               break;
            }
         } else {
            lVar5 = *(long*)( pOVar6 + 8 );
            if (lVar5 != *(long*)( pOVar4 + 8 )) break;
            LAB_0010a3fa:if (lVar5 != *(long*)( *(long*)( pOVar6 + 0x18 ) + 8 )) break;
         }
         pOVar1 = *(OutPt**)( pOVar4 + 0x10 );
         lVar5 = lVar2;
         pOVar6 = pOVar4;
      } while ( *(OutPt**)( pOVar4 + 0x10 ) != param_1 );
   }
   std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::_M_realloc_insert<Clipper2Lib::Point<long>const&>((vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>*)this, 0, pOVar6);
   pOVar1 = *(OutPt**)( pOVar6 + 0x10 );
   while (pOVar4 = pOVar1,param_1 != pOVar4) {
      pOVar1 = *(OutPt**)( pOVar4 + 0x10 );
      if (( ( *(long*)pOVar4 != *(long*)pOVar1 ) || ( *(long*)pOVar4 != *(long*)pOVar6 ) ) && ( ( *(long*)( pOVar4 + 8 ) != *(long*)( pOVar1 + 8 ) || ( *(long*)( pOVar4 + 8 ) != *(long*)( pOVar6 + 8 ) ) ) )) {
         plVar3 = *(long**)( this + 8 );
         pOVar6 = pOVar4;
         if (plVar3 == *(long**)( this + 0x10 )) {
            std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::_M_realloc_insert<Clipper2Lib::Point<long>const&>((vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>*)this, plVar3, pOVar4);
            pOVar1 = *(OutPt**)( pOVar4 + 0x10 );
         } else {
            lVar5 = *(long*)( pOVar4 + 8 );
            *plVar3 = *(long*)pOVar4;
            plVar3[1] = lVar5;
            *(long**)( this + 8 ) = plVar3 + 2;
         }
      }
   };
   return this;
}/* Clipper2Lib::Path1InsidePath2(Clipper2Lib::OutPt*, Clipper2Lib::OutPt*) */ulong Clipper2Lib::Path1InsidePath2(OutPt *param_1, OutPt *param_2) {
   OutPt *pOVar1;
   long lVar2;
   byte bVar3;
   uint uVar4;
   OutPt *pOVar5;
   long *plVar6;
   long *plVar7;
   long *plVar8;
   long lVar9;
   OutPt *pOVar10;
   long *plVar11;
   long lVar12;
   long lVar13;
   long lVar14;
   long lVar15;
   long lVar16;
   char cVar17;
   OutPt *pOVar18;
   uint uVar19;
   ulong uVar20;
   long *plVar21;
   long in_FS_OFFSET;
   bool bVar22;
   double dVar23;
   double dVar24;
   long *local_58;
   long *local_50;
   long local_48;
   long local_40;
   dVar24 = 0.0;
   uVar19 = 0;
   pOVar1 = *(OutPt**)( param_2 + 0x10 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pOVar18 = param_1;
   LAB_0010a510:if (( param_2 == pOVar1 ) || ( pOVar1 == *(OutPt**)( param_2 + 0x18 ) )) {
      LAB_0010a9a5:uVar19 = uVar19 + 1;
      LAB_0010a695:pOVar18 = *(OutPt**)( pOVar18 + 0x10 );
      if (param_1 == pOVar18) goto LAB_0010a74d;
      if (2 < uVar19 + 1) goto LAB_0010a6af;
      goto LAB_0010a510;
   }
   lVar9 = *(long*)( pOVar18 + 8 );
   pOVar10 = param_2;
   do {
      lVar12 = *(long*)( pOVar10 + 8 );
      if (lVar12 != lVar9) goto LAB_0010a546;
      pOVar10 = *(OutPt**)( pOVar10 + 0x10 );
   } while ( param_2 != pOVar10 );
   lVar12 = *(long*)( param_2 + 8 );
   if (lVar9 == lVar12) goto LAB_0010a9a5;
   LAB_0010a546:pOVar5 = *(OutPt**)( pOVar10 + 0x10 );
   if (pOVar5 == pOVar10) goto LAB_0010a9a5;
   bVar22 = false;
   cVar17 = lVar12 < lVar9;
   do {
      if ((bool)cVar17 == false) {
         while (true) {
            if (pOVar10 == pOVar5) goto LAB_0010a64c;
            if (*(long*)( pOVar5 + 8 ) <= lVar9) break;
            pOVar5 = *(OutPt**)( pOVar5 + 0x10 );
         };
      } else {
         while (true) {
            if (pOVar10 == pOVar5) goto LAB_0010a64c;
            if (lVar9 <= *(long*)( pOVar5 + 8 )) break;
            pOVar5 = *(OutPt**)( pOVar5 + 0x10 );
         };
      }
      if (pOVar5 == pOVar10) break;
      lVar15 = *(long*)( pOVar5 + 8 );
      lVar16 = *(long*)pOVar18;
      lVar2 = *(long*)pOVar5;
      if (lVar9 == lVar15) {
         if (( lVar2 == lVar16 ) || ( ( lVar9 == ( *(long**)( pOVar5 + 0x18 ) )[1] && ( lVar16 < **(long**)( pOVar5 + 0x18 ) != lVar16 < lVar2 ) ) )) goto LAB_0010a740;
      } else {
         lVar14 = **(long**)( pOVar5 + 0x18 );
         if (lVar16 < lVar2) {
            if (lVar14 <= lVar16) {
               LAB_0010a5cd:dVar23 = (double)( lVar2 - lVar14 ) * (double)( lVar9 - lVar15 ) - (double)( lVar15 - ( *(long**)( pOVar5 + 0x18 ) )[1] ) * (double)( lVar16 - lVar2 );
               if (dVar23 == dVar24) goto LAB_0010a740;
               if ((bool)cVar17 == dVar23 < dVar24) {
                  bVar22 = (bool)( bVar22 ^ 1 );
               }
            }
         } else {
            lVar13 = lVar14;
            if (lVar14 <= lVar2) {
               lVar13 = lVar2;
            }
            if (lVar16 <= lVar13) goto LAB_0010a5cd;
            bVar22 = (bool)( bVar22 ^ 1 );
         }
         cVar17 = cVar17 ^ 1;
      }
      pOVar5 = *(OutPt**)( pOVar5 + 0x10 );
   } while ( pOVar5 != pOVar10 );
   LAB_0010a64c:if ((bool)cVar17 == lVar12 < lVar9) {
      LAB_0010a689:if (!bVar22) goto LAB_0010a9a5;
      uVar19 = uVar19 - 1;
      goto LAB_0010a695;
   }
   dVar23 = CrossProduct<long>((Point_conflict*)**(undefined8**)( pOVar5 + 0x18 ), (Point_conflict*)( *(undefined8**)( pOVar5 + 0x18 ) )[1], *(Point_conflict**)pOVar5);
   if (dVar23 != dVar24) {
      if ((bool)cVar17 == dVar23 < dVar24) {
         bVar22 = (bool)( bVar22 ^ 1 );
      }
      goto LAB_0010a689;
   }
   LAB_0010a740:pOVar18 = *(OutPt**)( pOVar18 + 0x10 );
   if (param_1 != pOVar18) goto LAB_0010a510;
   LAB_0010a74d:uVar4 = -uVar19;
   if (0 < (int)uVar19) {
      uVar4 = uVar19;
   }
   if (uVar4 == 2) goto LAB_0010a6af;
   GetCleanPath((Clipper2Lib*)&local_58, pOVar18);
   if (local_58 == local_50) {
      lVar12 = 0;
      lVar9 = 0;
   } else {
      lVar15 = -0x8000000000000000;
      lVar9 = 0x7fffffffffffffff;
      lVar16 = -0x8000000000000000;
      lVar12 = 0x7fffffffffffffff;
      plVar6 = local_58;
      do {
         lVar2 = *plVar6;
         if (lVar2 < lVar12) {
            lVar12 = lVar2;
         }
         if (lVar16 < lVar2) {
            lVar16 = lVar2;
         }
         lVar2 = plVar6[1];
         if (lVar2 < lVar9) {
            lVar9 = lVar2;
         }
         if (lVar15 < lVar2) {
            lVar15 = lVar2;
         }
         plVar6 = plVar6 + 2;
      } while ( local_50 != plVar6 );
      lVar9 = ( lVar9 + lVar15 ) / 2;
      lVar12 = ( lVar12 + lVar16 ) / 2;
   }
   if (local_58 != (long*)0x0) {
      operator_delete(local_58, local_48 - (long)local_58);
   }
   uVar20 = 0;
   GetCleanPath((Clipper2Lib*)&local_58, param_2);
   if (( ( ulong )((long)local_50 - (long)local_58) < 0x21 ) || ( plVar6 = local_58 == local_50 )) goto LAB_0010a956;
   while (lVar9 == plVar6[1]) {
      plVar6 = plVar6 + 2;
      if (local_50 == plVar6) {
         LAB_0010aaab:uVar20 = 0;
         if (local_58 == (long*)0x0) goto LAB_0010a6b3;
         goto LAB_0010a95f;
      }
   };
   if (local_50 == plVar6) goto LAB_0010aaab;
   plVar7 = plVar6 + 2;
   plVar21 = local_50 + -2;
   bVar3 = 0;
   plVar11 = local_50;
   cVar17 = plVar6[1] < lVar9;
   LAB_0010a880:bVar22 = plVar7 == plVar11;
   plVar8 = plVar7;
   plVar7 = plVar11;
   if (bVar22) goto LAB_0010a8b8;
   do {
    if ((bool)cVar17 == false) {
      do {
        if (plVar8[1] <= lVar9) {
          if (plVar8 != plVar11) {
            cVar17 = false;
            goto LAB_0010a9cf;
          }
          break;
        }
        plVar8 = plVar8 + 2;
      } while (plVar8 != plVar11);
      cVar17 = false;
      plVar7 = plVar8;
    }
    else {
      do {
        plVar7 = plVar11;
        if (lVar9 <= plVar8[1]) {
          cVar17 = true;
          if (plVar8 != plVar11) goto LAB_0010a9cf;
          break;
        }
        plVar8 = plVar8 + 2;
        cVar17 = true;
      } while (plVar8 != plVar11);
    }
LAB_0010a8b8:
  } while ((local_58 != plVar6) &&
          (bVar22 = plVar8 != plVar6, plVar8 = local_58, plVar11 = plVar6, bVar22));
  goto LAB_0010a8f1;
LAB_0010a6af:
  uVar20 = (ulong)(uVar19 >> 0x1f);
  goto LAB_0010a6b3;
LAB_0010a9cf:
  lVar15 = plVar8[1];
  lVar16 = *plVar8;
  plVar7 = plVar8 + -2;
  if (local_58 == plVar8) {
    plVar7 = plVar21;
  }
  if (lVar9 == lVar15) {
    if ((lVar16 != lVar12) && ((lVar9 != plVar7[1] || (lVar12 < *plVar7 == lVar12 < lVar16)))) {
      plVar7 = plVar8 + 2;
      if (plVar7 == plVar6) goto LAB_0010a8f1;
      goto LAB_0010a880;
    }
  }
  else {
    lVar2 = *plVar7;
    if (lVar12 < lVar16) {
      if (lVar12 < lVar2) goto LAB_0010aa64;
    }
    else {
      lVar14 = lVar16;
      if (lVar16 <= lVar2) {
        lVar14 = lVar2;
      }
      if (lVar14 < lVar12) {
        bVar3 = bVar3 ^ 1;
        goto LAB_0010aa64;
      }
    }
    dVar24 = (double)(lVar16 - lVar2) * (double)(lVar9 - lVar15) -
             (double)(lVar15 - plVar7[1]) * (double)(lVar12 - lVar16);
    if (dVar24 != 0.0) {
      if ((bool)cVar17 == dVar24 < 0.0) {
        bVar3 = bVar3 ^ 1;
      }
LAB_0010aa64:
      cVar17 = cVar17 ^ 1;
      plVar7 = plVar8 + 2;
      goto LAB_0010a880;
    }
  }
  uVar20 = 1;
  goto LAB_0010a956;
LAB_0010a8f1:
  if ((bool)cVar17 == plVar6[1] < lVar9) {
LAB_0010a950:
    uVar20 = CONCAT71((int7)((ulong)plVar21 >> 8),bVar3);
  }
  else {
    if ((local_50 == plVar7) || (plVar6 = plVar7, local_58 == plVar7)) {
      plVar7 = local_58;
      plVar6 = local_50;
    }
    dVar24 = CrossProduct<long>((Point_conflict *)plVar6[-2],(Point_conflict *)plVar6[-1],
                                (Point_conflict *)*plVar7);
    uVar20 = 1;
    if (dVar24 != 0.0) {
      plVar21 = (long *)0x0;
      if ((bool)cVar17 == dVar24 < 0.0) {
        bVar3 = bVar3 ^ 1;
      }
      goto LAB_0010a950;
    }
  }
LAB_0010a956:
  if (local_58 != (long *)0x0) {
LAB_0010a95f:
    operator_delete(local_58,local_48 - (long)local_58);
  }
LAB_0010a6b3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar20 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void std::vector<Clipper2Lib::Vertex*, std::allocator<Clipper2Lib::Vertex*>
   >::_M_realloc_insert<Clipper2Lib::Vertex*&>(__gnu_cxx::__normal_iterator<Clipper2Lib::Vertex**,
   std::vector<Clipper2Lib::Vertex*, std::allocator<Clipper2Lib::Vertex*> > >,
   Clipper2Lib::Vertex*&) */

void __thiscall
std::vector<Clipper2Lib::Vertex*,std::allocator<Clipper2Lib::Vertex*>>::
_M_realloc_insert<Clipper2Lib::Vertex*&>
          (vector<Clipper2Lib::Vertex*,std::allocator<Clipper2Lib::Vertex*>> *this,void *param_2,
          undefined8 *param_3)

{
  void *__dest;
  void *pvVar1;
  void *__src;
  ulong uVar2;
  void *__dest_00;
  ulong uVar3;
  size_t __n;
  long lVar4;
  size_t __n_00;
  
  pvVar1 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar2 = (long)pvVar1 - (long)__src >> 3;
  if (uVar2 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_0010abb0;
    uVar3 = 0xfffffffffffffff;
    if (uVar2 + 1 < 0x1000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 3;
LAB_0010abba:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_0010abb0:
      uVar3 = 0x7ffffffffffffff8;
      goto LAB_0010abba;
    }
    if (uVar3 != 0) {
      if (0xfffffffffffffff < uVar3) {
        uVar3 = 0xfffffffffffffff;
      }
      uVar3 = uVar3 * 8;
      goto LAB_0010abba;
    }
    lVar4 = 0;
    __dest_00 = (void *)0x0;
  }
  __dest = (void *)((long)__dest_00 + __n + 8);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined8 *)((long)__dest_00 + __n) = *param_3;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_0010ab8c;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0010ab8c:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* std::vector<Clipper2Lib::OutRec*, std::allocator<Clipper2Lib::OutRec*>
   >::_M_default_append(unsigned long) */

void __thiscall
std::vector<Clipper2Lib::OutRec*,std::allocator<Clipper2Lib::OutRec*>>::_M_default_append
          (vector<Clipper2Lib::OutRec*,std::allocator<Clipper2Lib::OutRec*>> *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  void *__dest;
  void *pvVar3;
  undefined8 *__s;
  size_t sVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if (param_1 == 0) {
    return;
  }
  puVar6 = *(undefined8 **)(this + 8);
  pvVar3 = *(void **)this;
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar6 >> 3)) {
    *puVar6 = 0;
    __s = puVar6 + 1;
    if (param_1 - 1 != 0) {
      sVar4 = (long)__s + ((param_1 - 1) * 8 - (long)puVar6) + -8;
      pvVar3 = memset(__s,0,sVar4);
      __s = (undefined8 *)((long)pvVar3 + sVar4);
    }
    *(undefined8 **)(this + 8) = __s;
    return;
  }
  sVar4 = (long)puVar6 - (long)pvVar3;
  uVar2 = (long)sVar4 >> 3;
  if (0xfffffffffffffff - uVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_default_append");
  }
  uVar1 = param_1 + uVar2;
  if (uVar2 < param_1) {
    uVar2 = 0xfffffffffffffff;
    if (uVar1 < 0x1000000000000000) {
      uVar2 = uVar1;
    }
    uVar2 = uVar2 * 8;
    __dest = operator_new(uVar2);
    puVar6 = (undefined8 *)((long)__dest + sVar4);
    *puVar6 = 0;
    if (param_1 - 1 != 0) goto LAB_0010ad35;
LAB_0010ad49:
    if (sVar4 != 0) goto LAB_0010ae20;
    if (pvVar3 == (void *)0x0) goto LAB_0010ad5b;
    uVar5 = *(long *)(this + 0x10) - (long)pvVar3;
  }
  else {
    uVar2 = uVar2 * 2;
    if (0xfffffffffffffff < uVar2) {
      uVar2 = 0xfffffffffffffff;
    }
    uVar2 = uVar2 * 8;
    __dest = operator_new(uVar2);
    puVar6 = (undefined8 *)((long)__dest + sVar4);
    *puVar6 = 0;
    if (param_1 != 1) {
LAB_0010ad35:
      memset(puVar6 + 1,0,(param_1 - 1) * 8);
      goto LAB_0010ad49;
    }
LAB_0010ae20:
    memmove(__dest,pvVar3,sVar4);
    uVar5 = *(long *)(this + 0x10) - (long)pvVar3;
  }
  operator_delete(pvVar3,uVar5);
LAB_0010ad5b:
  *(void **)this = __dest;
  *(void **)(this + 8) = (void *)((long)__dest + uVar1 * 8);
  *(ulong *)(this + 0x10) = (long)__dest + uVar2;
  return;
}



/* void std::vector<Clipper2Lib::OutRec*, std::allocator<Clipper2Lib::OutRec*>
   >::_M_realloc_insert<Clipper2Lib::OutRec*
   const&>(__gnu_cxx::__normal_iterator<Clipper2Lib::OutRec**, std::vector<Clipper2Lib::OutRec*,
   std::allocator<Clipper2Lib::OutRec*> > >, Clipper2Lib::OutRec* const&) */

void __thiscall
std::vector<Clipper2Lib::OutRec*,std::allocator<Clipper2Lib::OutRec*>>::
_M_realloc_insert<Clipper2Lib::OutRec*const&>
          (vector<Clipper2Lib::OutRec*,std::allocator<Clipper2Lib::OutRec*>> *this,void *param_2,
          undefined8 *param_3)

{
  void *__dest;
  void *pvVar1;
  void *__src;
  ulong uVar2;
  void *__dest_00;
  ulong uVar3;
  size_t __n;
  long lVar4;
  size_t __n_00;
  
  pvVar1 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar2 = (long)pvVar1 - (long)__src >> 3;
  if (uVar2 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_0010af20;
    uVar3 = 0xfffffffffffffff;
    if (uVar2 + 1 < 0x1000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 3;
LAB_0010af2a:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_0010af20:
      uVar3 = 0x7ffffffffffffff8;
      goto LAB_0010af2a;
    }
    if (uVar3 != 0) {
      if (0xfffffffffffffff < uVar3) {
        uVar3 = 0xfffffffffffffff;
      }
      uVar3 = uVar3 * 8;
      goto LAB_0010af2a;
    }
    lVar4 = 0;
    __dest_00 = (void *)0x0;
  }
  __dest = (void *)((long)__dest_00 + __n + 8);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined8 *)((long)__dest_00 + __n) = *param_3;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_0010aefc;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0010aefc:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Clipper2Lib::ClipperBase::CheckJoinLeft(Clipper2Lib::Active&, Clipper2Lib::Point<long> const&,
   bool) */

void __thiscall
Clipper2Lib::ClipperBase::CheckJoinLeft
          (ClipperBase *this,Active *param_1,Point_conflict *param_2,bool param_3)

{
  Active *pAVar1;
  ulong *puVar2;
  ulong *puVar3;
  Point_conflict *pPVar4;
  Point_conflict *pPVar5;
  Point_conflict *pPVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  Point_conflict *pPVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  pAVar1 = *(Active **)(param_1 + 0x48);
  if (((pAVar1 != (Active *)0x0) && (puVar2 = *(ulong **)(param_1 + 0x40), puVar2 != (ulong *)0x0))
     && (puVar3 = *(ulong **)(pAVar1 + 0x40), puVar3 != (ulong *)0x0)) {
    pPVar4 = *(Point_conflict **)(param_1 + 0x18);
    pPVar11 = *(Point_conflict **)(param_1 + 8);
    if (pPVar11 != pPVar4) {
      pPVar5 = *(Point_conflict **)(pAVar1 + 0x18);
      pPVar6 = *(Point_conflict **)(pAVar1 + 8);
      if (((pPVar5 != pPVar6) && (*(char *)(*(long *)(param_1 + 0x78) + 0xc) == '\0')) &&
         (*(char *)(*(long *)(pAVar1 + 0x78) + 0xc) == '\0')) {
        lVar7 = *(long *)(param_2 + 8);
        if ((lVar7 <= (long)(pPVar4 + 1)) || (lVar7 <= (long)(pPVar5 + 1))) {
          if ((long)pPVar11 < (long)pPVar6) {
            pPVar11 = pPVar6;
          }
          if (lVar7 < (long)pPVar11) {
            return;
          }
        }
        if (param_3) {
          pPVar11 = *(Point_conflict **)param_2;
          dVar13 = (double)(*(long *)(pAVar1 + 0x10) - *(long *)pAVar1);
          dVar14 = (double)((long)pPVar5 - (long)pPVar6);
          if (((dVar13 != 0.0) || (dVar14 != 0.0)) &&
             (dVar12 = (double)((long)pPVar11 - *(long *)pAVar1) * dVar14 -
                       (double)(lVar7 - (long)pPVar6) * dVar13,
             __LC6 < (dVar12 * dVar12) / (dVar13 * dVar13 + dVar14 * dVar14))) {
            return;
          }
        }
        else {
          if (*(long *)(param_1 + 0x20) != *(long *)(pAVar1 + 0x20)) {
            return;
          }
          pPVar11 = *(Point_conflict **)param_2;
        }
        bVar10 = IsCollinear<long>(*(Point_conflict **)(param_1 + 0x10),pPVar4,pPVar11);
        if (bVar10) {
          uVar8 = *puVar3;
          uVar9 = *puVar2;
          if (uVar9 == uVar8) {
            AddLocalMaxPoly(this,pAVar1,param_1,param_2);
          }
          else if (uVar9 < uVar8) {
            JoinOutrecPaths(this,param_1,pAVar1);
          }
          else {
            JoinOutrecPaths(this,pAVar1,param_1);
          }
          *(undefined4 *)(pAVar1 + 0x84) = 2;
          *(undefined4 *)(param_1 + 0x84) = 1;
        }
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Clipper2Lib::ClipperBase::CheckJoinRight(Clipper2Lib::Active&, Clipper2Lib::Point<long> const&,
   bool) */

void __thiscall
Clipper2Lib::ClipperBase::CheckJoinRight
          (ClipperBase *this,Active *param_1,Point_conflict *param_2,bool param_3)

{
  Active *pAVar1;
  ulong *puVar2;
  ulong *puVar3;
  Point_conflict *pPVar4;
  Point_conflict *pPVar5;
  Point_conflict *pPVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  Point_conflict *pPVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  pAVar1 = *(Active **)(param_1 + 0x50);
  if (((pAVar1 != (Active *)0x0) && (puVar2 = *(ulong **)(param_1 + 0x40), puVar2 != (ulong *)0x0))
     && (puVar3 = *(ulong **)(pAVar1 + 0x40), puVar3 != (ulong *)0x0)) {
    pPVar4 = *(Point_conflict **)(param_1 + 0x18);
    pPVar11 = *(Point_conflict **)(param_1 + 8);
    if (pPVar11 != pPVar4) {
      pPVar5 = *(Point_conflict **)(pAVar1 + 0x18);
      pPVar6 = *(Point_conflict **)(pAVar1 + 8);
      if (((pPVar5 != pPVar6) && (*(char *)(*(long *)(param_1 + 0x78) + 0xc) == '\0')) &&
         (*(char *)(*(long *)(pAVar1 + 0x78) + 0xc) == '\0')) {
        lVar7 = *(long *)(param_2 + 8);
        if ((lVar7 <= (long)(pPVar4 + 1)) || (lVar7 <= (long)(pPVar5 + 1))) {
          if ((long)pPVar11 < (long)pPVar6) {
            pPVar11 = pPVar6;
          }
          if (lVar7 < (long)pPVar11) {
            return;
          }
        }
        if (param_3) {
          pPVar11 = *(Point_conflict **)param_2;
          dVar13 = (double)(*(long *)(pAVar1 + 0x10) - *(long *)pAVar1);
          dVar14 = (double)((long)pPVar5 - (long)pPVar6);
          if (((dVar13 != 0.0) || (dVar14 != 0.0)) &&
             (dVar12 = (double)((long)pPVar11 - *(long *)pAVar1) * dVar14 -
                       (double)(lVar7 - (long)pPVar6) * dVar13,
             __LC7 < (dVar12 * dVar12) / (dVar13 * dVar13 + dVar14 * dVar14))) {
            return;
          }
        }
        else {
          if (*(long *)(param_1 + 0x20) != *(long *)(pAVar1 + 0x20)) {
            return;
          }
          pPVar11 = *(Point_conflict **)param_2;
        }
        bVar10 = IsCollinear<long>(*(Point_conflict **)(param_1 + 0x10),pPVar4,pPVar11);
        if (bVar10) {
          uVar8 = *puVar3;
          uVar9 = *puVar2;
          if (uVar9 == uVar8) {
            AddLocalMaxPoly(this,param_1,pAVar1,param_2);
          }
          else if (uVar9 < uVar8) {
            JoinOutrecPaths(this,param_1,pAVar1);
          }
          else {
            JoinOutrecPaths(this,pAVar1,param_1);
          }
          *(undefined4 *)(param_1 + 0x84) = 2;
          *(undefined4 *)(pAVar1 + 0x84) = 1;
        }
      }
    }
  }
  return;
}



/* void std::vector<Clipper2Lib::HorzJoin, std::allocator<Clipper2Lib::HorzJoin>
   >::_M_realloc_insert<Clipper2Lib::HorzJoin
   const&>(__gnu_cxx::__normal_iterator<Clipper2Lib::HorzJoin*, std::vector<Clipper2Lib::HorzJoin,
   std::allocator<Clipper2Lib::HorzJoin> > >, Clipper2Lib::HorzJoin const&) */

void __thiscall
std::vector<Clipper2Lib::HorzJoin,std::allocator<Clipper2Lib::HorzJoin>>::
_M_realloc_insert<Clipper2Lib::HorzJoin_const&>
          (vector<Clipper2Lib::HorzJoin,std::allocator<Clipper2Lib::HorzJoin>> *this,
          undefined8 *param_2,undefined8 *param_3)

{
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
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar5 = (long)puVar1 - (long)puVar2 >> 4;
  if (uVar5 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  puVar8 = (undefined8 *)((long)param_2 - (long)puVar2);
  if (puVar2 == puVar1) {
    if (0xfffffffffffffffe < uVar5) goto LAB_0010b4b8;
    uVar7 = 0x7ffffffffffffff;
    if (uVar5 + 1 < 0x800000000000000) {
      uVar7 = uVar5 + 1;
    }
    uVar7 = uVar7 << 4;
LAB_0010b4c2:
    puVar6 = (undefined8 *)operator_new(uVar7);
    uVar3 = param_3[1];
    lVar11 = uVar7 + (long)puVar6;
    puVar10 = puVar6 + 2;
    *(undefined8 *)((long)puVar6 + (long)puVar8) = *param_3;
    ((undefined8 *)((long)puVar6 + (long)puVar8))[1] = uVar3;
    if (param_2 != puVar2) {
LAB_0010b42a:
      puVar8 = puVar6;
      puVar9 = puVar2;
      do {
        puVar10 = puVar8;
        uVar3 = *puVar9;
        uVar4 = puVar9[1];
        puVar9 = puVar9 + 2;
        *puVar10 = uVar3;
        puVar10[1] = uVar4;
        puVar8 = puVar10 + 2;
      } while (puVar10 + 2 != (undefined8 *)(((long)param_2 - (long)puVar2) + (long)puVar6));
      puVar10 = puVar10 + 4;
    }
    puVar8 = puVar10;
    if (param_2 == puVar1) goto LAB_0010b47c;
  }
  else {
    uVar7 = uVar5 * 2;
    if (uVar7 < uVar5) {
LAB_0010b4b8:
      uVar7 = 0x7ffffffffffffff0;
      goto LAB_0010b4c2;
    }
    if (uVar7 != 0) {
      if (0x7ffffffffffffff < uVar7) {
        uVar7 = 0x7ffffffffffffff;
      }
      uVar7 = uVar7 << 4;
      goto LAB_0010b4c2;
    }
    uVar3 = param_3[1];
    lVar11 = 0;
    puVar6 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)&DAT_00000010;
    *puVar8 = *param_3;
    puVar8[1] = uVar3;
    if (param_2 != puVar2) goto LAB_0010b42a;
  }
  puVar8 = (undefined8 *)((long)puVar10 + ((long)puVar1 - (long)param_2));
  memcpy(puVar10,param_2,(long)puVar1 - (long)param_2);
LAB_0010b47c:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar8;
  *(long *)(this + 0x10) = lVar11;
  return;
}



/* std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> >
   >::_M_default_append(unsigned long) */

void __thiscall
std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::_M_default_append
          (vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>> *this,
          ulong param_1)

{
  ulong uVar1;
  undefined1 (*pauVar2) [16];
  undefined8 uVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  ulong uVar12;
  
  if (param_1 == 0) {
    return;
  }
  pauVar11 = *(undefined1 (**) [16])(this + 8);
  pauVar2 = *(undefined1 (**) [16])this;
  if ((ulong)(*(long *)(this + 0x10) - (long)pauVar11 >> 4) < param_1) {
    uVar6 = (long)pauVar11 - (long)pauVar2 >> 4;
    if (0x7ffffffffffffff - uVar6 < param_1) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_default_append");
    }
    uVar1 = param_1 + uVar6;
    uVar12 = 0x7ffffffffffffff;
    if (uVar1 < 0x800000000000000) {
      uVar12 = uVar1;
    }
    if ((param_1 <= uVar6) && (uVar12 = uVar6 * 2, 0x7ffffffffffffff < uVar12)) {
      uVar12 = 0x7ffffffffffffff;
    }
    puVar7 = (undefined8 *)operator_new(uVar12 * 0x10);
    pauVar10 = (undefined1 (*) [16])((long)puVar7 + ((long)pauVar11 - (long)pauVar2));
    pauVar8 = pauVar10;
    pauVar4 = pauVar2;
    puVar5 = puVar7;
    if ((param_1 * 0x10 & 0x10) != 0) {
      *pauVar10 = (undefined1  [16])0x0;
      pauVar8 = pauVar10 + 1;
      if (pauVar10 + 1 == pauVar10 + param_1) goto joined_r0x0010b671;
    }
    do {
      *pauVar8 = (undefined1  [16])0x0;
      pauVar9 = pauVar8 + 2;
      pauVar8[1] = (undefined1  [16])0x0;
      pauVar8 = pauVar9;
    } while (pauVar9 != pauVar10 + param_1);
joined_r0x0010b671:
    for (; pauVar4 != pauVar11; pauVar4 = pauVar4 + 1) {
      uVar3 = *(undefined8 *)(*pauVar4 + 8);
      *puVar5 = *(undefined8 *)*pauVar4;
      puVar5[1] = uVar3;
      puVar5 = puVar5 + 2;
    }
    if (pauVar2 != (undefined1 (*) [16])0x0) {
      operator_delete(pauVar2,*(long *)(this + 0x10) - (long)pauVar2);
    }
    *(undefined8 **)this = puVar7;
    *(undefined8 **)(this + 8) = puVar7 + uVar1 * 2;
    *(undefined8 **)(this + 0x10) = puVar7 + uVar12 * 2;
    return;
  }
  pauVar2 = pauVar11 + param_1;
  pauVar10 = pauVar11;
  if ((param_1 * 0x10 & 0x10) != 0) {
    *pauVar11 = (undefined1  [16])0x0;
    pauVar10 = pauVar11 + 1;
    if (pauVar2 == pauVar11 + 1) goto LAB_0010b5a8;
  }
  do {
    *pauVar10 = (undefined1  [16])0x0;
    pauVar11 = pauVar10 + 2;
    pauVar10[1] = (undefined1  [16])0x0;
    pauVar10 = pauVar11;
  } while (pauVar2 != pauVar11);
LAB_0010b5a8:
  *(undefined1 (**) [16])(this + 8) = pauVar2;
  return;
}



/* std::vector<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >,
   std::allocator<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >
   > >::_M_default_append(unsigned long) */

void __thiscall
std::
vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
::_M_default_append(vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
                    *this,ulong param_1)

{
  ulong uVar1;
  undefined1 (*pauVar2) [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 (*pauVar5) [16];
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  
  if (param_1 == 0) {
    return;
  }
  pauVar2 = *(undefined1 (**) [16])(this + 8);
  pauVar12 = *(undefined1 (**) [16])this;
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - (long)pauVar2 >> 3) * -0x5555555555555555)) {
    pauVar12 = pauVar2;
    do {
      *(undefined8 *)pauVar12[1] = 0;
      pauVar13 = (undefined1 (*) [16])(pauVar12[1] + 8);
      *pauVar12 = (undefined1  [16])0x0;
      pauVar12 = pauVar13;
    } while (pauVar13 != (undefined1 (*) [16])((long)pauVar2 + param_1 * 0x18));
    *(undefined1 (**) [16])(this + 8) = pauVar13;
    return;
  }
  lVar8 = (long)pauVar2 - (long)pauVar12 >> 3;
  if (param_1 <= lVar8 * 0x5555555555555555 + 0x555555555555555U) {
    uVar1 = param_1 + lVar8 * -0x5555555555555555;
    uVar9 = 0x555555555555555;
    if (uVar1 < 0x555555555555556) {
      uVar9 = uVar1;
    }
    if ((param_1 <= (ulong)(lVar8 * -0x5555555555555555)) &&
       (uVar9 = lVar8 * 0x5555555555555556, 0x555555555555555 < uVar9)) {
      uVar9 = 0x555555555555555;
    }
    puVar10 = (undefined8 *)operator_new(uVar9 * 0x18);
    pauVar13 = (undefined1 (*) [16])((long)puVar10 + ((long)pauVar2 - (long)pauVar12));
    pauVar11 = pauVar13;
    do {
      *(undefined8 *)pauVar11[1] = 0;
      pauVar7 = pauVar11 + 1;
      *pauVar11 = (undefined1  [16])0x0;
      pauVar11 = (undefined1 (*) [16])(*pauVar7 + 8);
      pauVar5 = pauVar12;
      puVar6 = puVar10;
    } while ((undefined1 (*) [16])(*pauVar7 + 8) !=
             (undefined1 (*) [16])((long)pauVar13 + param_1 * 0x18));
    for (; pauVar5 != pauVar2; pauVar5 = (undefined1 (*) [16])(pauVar5[1] + 8)) {
      uVar4 = *(undefined8 *)(*pauVar5 + 8);
      uVar3 = *(undefined8 *)pauVar5[1];
      *puVar6 = *(undefined8 *)*pauVar5;
      puVar6[1] = uVar4;
      puVar6[2] = uVar3;
      puVar6 = puVar6 + 3;
    }
    if (pauVar12 != (undefined1 (*) [16])0x0) {
      operator_delete(pauVar12,*(long *)(this + 0x10) - (long)pauVar12);
    }
    *(undefined8 **)this = puVar10;
    *(undefined8 **)(this + 8) = puVar10 + uVar1 * 3;
    *(undefined8 **)(this + 0x10) = puVar10 + uVar9 * 3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_length_error("vector::_M_default_append");
}



/* std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >::_M_default_append(unsigned long) */

void __thiscall
std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::
_M_default_append(vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>
                  *this,ulong param_1)

{
  ulong uVar1;
  undefined1 (*pauVar2) [16];
  undefined8 uVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  ulong uVar12;
  
  if (param_1 == 0) {
    return;
  }
  pauVar11 = *(undefined1 (**) [16])(this + 8);
  pauVar2 = *(undefined1 (**) [16])this;
  if ((ulong)(*(long *)(this + 0x10) - (long)pauVar11 >> 4) < param_1) {
    uVar6 = (long)pauVar11 - (long)pauVar2 >> 4;
    if (0x7ffffffffffffff - uVar6 < param_1) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_default_append");
    }
    uVar1 = param_1 + uVar6;
    uVar12 = 0x7ffffffffffffff;
    if (uVar1 < 0x800000000000000) {
      uVar12 = uVar1;
    }
    if ((param_1 <= uVar6) && (uVar12 = uVar6 * 2, 0x7ffffffffffffff < uVar12)) {
      uVar12 = 0x7ffffffffffffff;
    }
    puVar7 = (undefined8 *)operator_new(uVar12 * 0x10);
    pauVar10 = (undefined1 (*) [16])((long)puVar7 + ((long)pauVar11 - (long)pauVar2));
    pauVar8 = pauVar10;
    pauVar4 = pauVar2;
    puVar5 = puVar7;
    if ((param_1 * 0x10 & 0x10) != 0) {
      *pauVar10 = (undefined1  [16])0x0;
      pauVar8 = pauVar10 + 1;
      if (pauVar10 + 1 == pauVar10 + param_1) goto joined_r0x0010b9c1;
    }
    do {
      *pauVar8 = (undefined1  [16])0x0;
      pauVar9 = pauVar8 + 2;
      pauVar8[1] = (undefined1  [16])0x0;
      pauVar8 = pauVar9;
    } while (pauVar9 != pauVar10 + param_1);
joined_r0x0010b9c1:
    for (; pauVar4 != pauVar11; pauVar4 = pauVar4 + 1) {
      uVar3 = *(undefined8 *)(*pauVar4 + 8);
      *puVar5 = *(undefined8 *)*pauVar4;
      puVar5[1] = uVar3;
      puVar5 = puVar5 + 2;
    }
    if (pauVar2 != (undefined1 (*) [16])0x0) {
      operator_delete(pauVar2,*(long *)(this + 0x10) - (long)pauVar2);
    }
    *(undefined8 **)this = puVar7;
    *(undefined8 **)(this + 8) = puVar7 + uVar1 * 2;
    *(undefined8 **)(this + 0x10) = puVar7 + uVar12 * 2;
    return;
  }
  pauVar2 = pauVar11 + param_1;
  pauVar10 = pauVar11;
  if ((param_1 * 0x10 & 0x10) != 0) {
    *pauVar11 = (undefined1  [16])0x0;
    pauVar10 = pauVar11 + 1;
    if (pauVar2 == pauVar11 + 1) goto LAB_0010b8f8;
  }
  do {
    *pauVar10 = (undefined1  [16])0x0;
    pauVar11 = pauVar10 + 2;
    pauVar10[1] = (undefined1  [16])0x0;
    pauVar10 = pauVar11;
  } while (pauVar2 != pauVar11);
LAB_0010b8f8:
  *(undefined1 (**) [16])(this + 8) = pauVar2;
  return;
}



/* std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > >::_M_default_append(unsigned long) */

void __thiscall
std::
vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
::_M_default_append(vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                    *this,ulong param_1)

{
  ulong uVar1;
  undefined1 (*pauVar2) [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 (*pauVar5) [16];
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  
  if (param_1 == 0) {
    return;
  }
  pauVar2 = *(undefined1 (**) [16])(this + 8);
  pauVar12 = *(undefined1 (**) [16])this;
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - (long)pauVar2 >> 3) * -0x5555555555555555)) {
    pauVar12 = pauVar2;
    do {
      *(undefined8 *)pauVar12[1] = 0;
      pauVar13 = (undefined1 (*) [16])(pauVar12[1] + 8);
      *pauVar12 = (undefined1  [16])0x0;
      pauVar12 = pauVar13;
    } while (pauVar13 != (undefined1 (*) [16])((long)pauVar2 + param_1 * 0x18));
    *(undefined1 (**) [16])(this + 8) = pauVar13;
    return;
  }
  lVar8 = (long)pauVar2 - (long)pauVar12 >> 3;
  if (param_1 <= lVar8 * 0x5555555555555555 + 0x555555555555555U) {
    uVar1 = param_1 + lVar8 * -0x5555555555555555;
    uVar9 = 0x555555555555555;
    if (uVar1 < 0x555555555555556) {
      uVar9 = uVar1;
    }
    if ((param_1 <= (ulong)(lVar8 * -0x5555555555555555)) &&
       (uVar9 = lVar8 * 0x5555555555555556, 0x555555555555555 < uVar9)) {
      uVar9 = 0x555555555555555;
    }
    puVar10 = (undefined8 *)operator_new(uVar9 * 0x18);
    pauVar13 = (undefined1 (*) [16])((long)puVar10 + ((long)pauVar2 - (long)pauVar12));
    pauVar11 = pauVar13;
    do {
      *(undefined8 *)pauVar11[1] = 0;
      pauVar7 = pauVar11 + 1;
      *pauVar11 = (undefined1  [16])0x0;
      pauVar11 = (undefined1 (*) [16])(*pauVar7 + 8);
      pauVar5 = pauVar12;
      puVar6 = puVar10;
    } while ((undefined1 (*) [16])(*pauVar7 + 8) !=
             (undefined1 (*) [16])((long)pauVar13 + param_1 * 0x18));
    for (; pauVar5 != pauVar2; pauVar5 = (undefined1 (*) [16])(pauVar5[1] + 8)) {
      uVar4 = *(undefined8 *)(*pauVar5 + 8);
      uVar3 = *(undefined8 *)pauVar5[1];
      *puVar6 = *(undefined8 *)*pauVar5;
      puVar6[1] = uVar4;
      puVar6[2] = uVar3;
      puVar6 = puVar6 + 3;
    }
    if (pauVar12 != (undefined1 (*) [16])0x0) {
      operator_delete(pauVar12,*(long *)(this + 0x10) - (long)pauVar12);
    }
    *(undefined8 **)this = puVar10;
    *(undefined8 **)(this + 8) = puVar10 + uVar1 * 3;
    *(undefined8 **)(this + 0x10) = puVar10 + uVar9 * 3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_length_error("vector::_M_default_append");
}



/* void std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > >
   >::_M_realloc_insert<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >, std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >&&) */

void __thiscall
std::
vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>
::
_M_realloc_insert<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>
          (vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>
           *this,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long local_50;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar4 = (long)puVar1 - (long)puVar2 >> 3;
  if (uVar4 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (puVar2 == puVar1) {
    if (0xfffffffffffffffe < uVar4) goto LAB_0010bce0;
    uVar8 = 0xfffffffffffffff;
    if (uVar4 + 1 < 0x1000000000000000) {
      uVar8 = uVar4 + 1;
    }
    uVar8 = uVar8 << 3;
LAB_0010bcea:
    puVar5 = (undefined8 *)operator_new(uVar8);
    local_50 = (long)puVar5 + uVar8;
    uVar3 = *param_3;
    puVar6 = puVar5 + 1;
    *param_3 = 0;
    *(undefined8 *)((long)puVar5 + ((long)param_2 - (long)puVar2)) = uVar3;
    if (param_2 != puVar2) {
LAB_0010bc64:
      puVar6 = puVar2;
      puVar7 = puVar5;
      do {
        uVar3 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar7 = uVar3;
        puVar7 = puVar7 + 1;
      } while (puVar6 != param_2);
      puVar6 = (undefined8 *)((long)puVar5 + (long)param_2 + (8 - (long)puVar2));
    }
    puVar7 = puVar6;
    if (param_2 == puVar1) goto LAB_0010bca2;
  }
  else {
    uVar8 = uVar4 * 2;
    if (uVar8 < uVar4) {
LAB_0010bce0:
      uVar8 = 0x7ffffffffffffff8;
      goto LAB_0010bcea;
    }
    if (uVar8 != 0) {
      if (0xfffffffffffffff < uVar8) {
        uVar8 = 0xfffffffffffffff;
      }
      uVar8 = uVar8 * 8;
      goto LAB_0010bcea;
    }
    uVar3 = *param_3;
    puVar5 = (undefined8 *)0x0;
    *param_3 = 0;
    puVar6 = (undefined8 *)0x8;
    local_50 = 0;
    *(undefined8 *)((long)param_2 - (long)puVar2) = uVar3;
    if (param_2 != puVar2) goto LAB_0010bc64;
  }
  puVar7 = (undefined8 *)((long)puVar6 + ((long)puVar1 - (long)param_2));
  memcpy(puVar6,param_2,(long)puVar1 - (long)param_2);
LAB_0010bca2:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar5;
  *(undefined8 **)(this + 8) = puVar7;
  *(long *)(this + 0x10) = local_50;
  return;
}



/* std::_Temporary_buffer<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >, std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >
   >::_Temporary_buffer(__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >, long) */

void __thiscall
std::
_Temporary_buffer<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>
::_Temporary_buffer(_Temporary_buffer<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>
                    *this,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *(long *)this = param_3;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  lVar4 = 0xfffffffffffffff;
  if (param_3 < 0x1000000000000000) {
    lVar4 = param_3;
  }
  if (0 < param_3) {
    while( true ) {
      puVar3 = (undefined8 *)operator_new(lVar4 * 8,(nothrow_t *)&nothrow);
      if (puVar3 != (undefined8 *)0x0) {
        uVar2 = *param_2;
        puVar1 = puVar3 + lVar4;
        *param_2 = 0;
        *puVar3 = uVar2;
        puVar6 = puVar3;
        puVar5 = puVar3 + 1;
        if (puVar1 != puVar3 + 1) {
          do {
            uVar2 = puVar5[-1];
            puVar5[-1] = 0;
            puVar6 = puVar5 + 1;
            *puVar5 = uVar2;
            puVar5 = puVar6;
          } while (puVar1 != puVar6);
          puVar6 = puVar1 + -1;
        }
        uVar2 = *puVar6;
        *(undefined8 **)(this + 0x10) = puVar3;
        *puVar6 = 0;
        *param_2 = uVar2;
        *(long *)(this + 8) = lVar4;
        return;
      }
      if (lVar4 == 1) break;
      lVar4 = lVar4 + 1 >> 1;
    }
    return;
  }
  return;
}



/* void std::vector<long, std::allocator<long> >::_M_realloc_insert<long
   const&>(__gnu_cxx::__normal_iterator<long*, std::vector<long, std::allocator<long> > >, long
   const&) */

void __thiscall
std::vector<long,std::allocator<long>>::_M_realloc_insert<long_const&>
          (vector<long,std::allocator<long>> *this,void *param_2,undefined8 *param_3)

{
  void *__dest;
  void *pvVar1;
  void *__src;
  ulong uVar2;
  void *__dest_00;
  ulong uVar3;
  size_t __n;
  long lVar4;
  size_t __n_00;
  
  pvVar1 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar2 = (long)pvVar1 - (long)__src >> 3;
  if (uVar2 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_0010bf30;
    uVar3 = 0xfffffffffffffff;
    if (uVar2 + 1 < 0x1000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 3;
LAB_0010bf3a:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_0010bf30:
      uVar3 = 0x7ffffffffffffff8;
      goto LAB_0010bf3a;
    }
    if (uVar3 != 0) {
      if (0xfffffffffffffff < uVar3) {
        uVar3 = 0xfffffffffffffff;
      }
      uVar3 = uVar3 * 8;
      goto LAB_0010bf3a;
    }
    lVar4 = 0;
    __dest_00 = (void *)0x0;
  }
  __dest = (void *)((long)__dest_00 + __n + 8);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined8 *)((long)__dest_00 + __n) = *param_3;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_0010bf0c;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0010bf0c:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* std::priority_queue<long, std::vector<long, std::allocator<long> >, std::less<long> >::push(long
   const&) */

void __thiscall
std::priority_queue<long,std::vector<long,std::allocator<long>>,std::less<long>>::push
          (priority_queue<long,std::vector<long,std::allocator<long>>,std::less<long>> *this,
          long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  plVar1 = *(long **)(this + 8);
  if (plVar1 == *(long **)(this + 0x10)) {
    vector<long,std::allocator<long>>::_M_realloc_insert<long_const&>
              ((vector<long,std::allocator<long>> *)this,plVar1,param_1);
    plVar3 = *(long **)(this + 8);
    lVar7 = plVar3[-1];
  }
  else {
    lVar7 = *param_1;
    plVar3 = plVar1 + 1;
    *plVar1 = lVar7;
    *(long **)(this + 8) = plVar3;
  }
  lVar2 = *(long *)this;
  lVar6 = (long)plVar3 - lVar2 >> 3;
  lVar4 = lVar6 + -1;
  lVar6 = lVar6 + -2;
  lVar6 = lVar6 - (lVar6 >> 0x3f);
  if (lVar4 < 1) {
    plVar3 = (long *)(lVar2 + -8 + ((long)plVar3 - lVar2));
  }
  else {
    while( true ) {
      lVar5 = lVar6 >> 1;
      plVar1 = (long *)(lVar2 + lVar5 * 8);
      plVar3 = (long *)(lVar2 + lVar4 * 8);
      lVar4 = *plVar1;
      if (lVar7 <= lVar4) break;
      *plVar3 = lVar4;
      lVar6 = (lVar5 + -1) - (lVar5 + -1 >> 0x3f);
      lVar4 = lVar5;
      if (lVar5 == 0) {
        *plVar1 = lVar7;
        return;
      }
    }
  }
  *plVar3 = lVar7;
  return;
}



/* Clipper2Lib::ClipperBase::UpdateEdgeIntoAEL(Clipper2Lib::Active*) */

void __thiscall Clipper2Lib::ClipperBase::UpdateEdgeIntoAEL(ClipperBase *this,Active *param_1)

{
  ClipperBase CVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long in_FS_OFFSET;
  double dVar13;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar8 = *(long *)(param_1 + 0x10);
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x70) + 0x18);
  if (0 < *(int *)(param_1 + 0x30)) {
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x70) + 0x10);
  }
  *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x18);
  lVar11 = *(long *)(param_1 + 8);
  uVar2 = *puVar5;
  uVar3 = puVar5[1];
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  *(long *)(param_1 + 0x20) = lVar8;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  lVar12 = *(long *)(param_1 + 0x18);
  if ((double)(lVar12 - lVar11) == 0.0) {
    dVar13 = _LC12;
    if (*(long *)(param_1 + 0x10) <= lVar8) goto LAB_0010c13e;
    *(double *)(param_1 + 0x28) = _LC11;
    if (*(int *)(param_1 + 0x84) != 0) goto LAB_0010c243;
LAB_0010c151:
    if (lVar11 == lVar12) {
LAB_0010c262:
      if (*(char *)(*(long *)(param_1 + 0x78) + 0xc) == '\0') {
        CVar1 = this[0xd8];
        plVar7 = *(long **)(*(long *)(param_1 + 0x70) + 0x18);
        if (0 < *(int *)(param_1 + 0x30)) {
          plVar7 = *(long **)(*(long *)(param_1 + 0x70) + 0x10);
        }
        lVar8 = *plVar7;
        bVar4 = false;
        if (plVar7[1] == lVar11) {
          do {
            if ((CVar1 != (ClipperBase)0x0) &&
               (lVar8 < *(long *)(param_1 + 0x10) != *(long *)param_1 < *(long *)(param_1 + 0x10)))
            {
              if (!bVar4) goto LAB_0010c26e;
              break;
            }
            if (*(int *)(param_1 + 0x30) < 1) {
              lVar6 = *(long *)(*(long *)(param_1 + 0x70) + 0x18);
              *(long *)(param_1 + 0x10) = lVar8;
              *(long *)(param_1 + 0x18) = lVar12;
              *(long *)(param_1 + 0x70) = lVar6;
              if ((*(byte *)(lVar6 + 0x20) & 4) != 0) break;
              plVar7 = *(long **)(lVar6 + 0x18);
            }
            else {
              lVar6 = *(long *)(*(long *)(param_1 + 0x70) + 0x10);
              *(long *)(param_1 + 0x10) = lVar8;
              *(long *)(param_1 + 0x18) = lVar12;
              *(long *)(param_1 + 0x70) = lVar6;
              if ((*(byte *)(lVar6 + 0x20) & 4) != 0) break;
              plVar7 = *(long **)(lVar6 + 0x10);
            }
            lVar8 = *plVar7;
            bVar4 = true;
          } while (plVar7[1] == lVar12);
          if ((double)(*(long *)(param_1 + 0x18) - lVar11) == 0.0) {
            dVar13 = _LC12;
            if (*(long *)param_1 < *(long *)(param_1 + 0x10)) {
              dVar13 = _LC11;
            }
          }
          else {
            dVar13 = (double)(*(long *)(param_1 + 0x10) - *(long *)param_1) /
                     (double)(*(long *)(param_1 + 0x18) - lVar11);
          }
          *(double *)(param_1 + 0x28) = dVar13;
        }
      }
LAB_0010c26e:
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010c3e6;
    }
  }
  else {
    dVar13 = (double)(*(long *)(param_1 + 0x10) - lVar8) / (double)(lVar12 - lVar11);
LAB_0010c13e:
    *(double *)(param_1 + 0x28) = dVar13;
    if (*(int *)(param_1 + 0x84) == 0) goto LAB_0010c151;
LAB_0010c243:
    Split(this,param_1,(Point_conflict *)param_1);
    lVar12 = *(long *)(param_1 + 0x18);
    lVar11 = *(long *)(param_1 + 8);
    if (lVar11 == lVar12) goto LAB_0010c262;
  }
  plVar7 = *(long **)(this + 0x78);
  local_28 = lVar12;
  if (plVar7 == *(long **)(this + 0x80)) {
    std::vector<long,std::allocator<long>>::_M_realloc_insert<long_const&>
              ((vector<long,std::allocator<long>> *)(this + 0x70),plVar7,&local_28);
    plVar7 = *(long **)(this + 0x78);
    lVar12 = plVar7[-1];
  }
  else {
    *plVar7 = lVar12;
    plVar7 = plVar7 + 1;
    *(long **)(this + 0x78) = plVar7;
  }
  lVar11 = *(long *)(this + 0x70);
  lVar6 = (long)plVar7 - lVar11 >> 3;
  lVar8 = lVar6 + -1;
  lVar6 = lVar6 + -2;
  lVar6 = lVar6 - (lVar6 >> 0x3f);
  if (lVar8 < 1) {
    plVar9 = (long *)(lVar11 + -8 + ((long)plVar7 - lVar11));
  }
  else {
    do {
      lVar10 = lVar6 >> 1;
      plVar7 = (long *)(lVar11 + lVar10 * 8);
      plVar9 = (long *)(lVar11 + lVar8 * 8);
      lVar8 = *plVar7;
      if (lVar12 <= lVar8) break;
      *plVar9 = lVar8;
      lVar6 = (lVar10 + -1) - (lVar10 + -1 >> 0x3f);
      plVar9 = plVar7;
      lVar8 = lVar10;
    } while (lVar10 != 0);
  }
  *plVar9 = lVar12;
  CheckJoinLeft(this,param_1,(Point_conflict *)param_1,false);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    CheckJoinRight(this,param_1,(Point_conflict *)param_1,true);
    return;
  }
LAB_0010c3e6:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Clipper2Lib::ClipperBase::InsertLocalMinimaIntoAEL(long) [clone .cold] */

void Clipper2Lib::ClipperBase::InsertLocalMinimaIntoAEL(long param_1)

{
  code *pcVar1;
  
  DAT_00000080 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Clipper2Lib::ClipperBase::ConvertHorzSegsToJoins() [clone .cold] */

void Clipper2Lib::ClipperBase::ConvertHorzSegsToJoins(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* std::_Temporary_buffer<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,
   std::vector<Clipper2Lib::HorzSegment, std::allocator<Clipper2Lib::HorzSegment> > >,
   Clipper2Lib::HorzSegment>::_Temporary_buffer(__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,
   std::vector<Clipper2Lib::HorzSegment, std::allocator<Clipper2Lib::HorzSegment> > >, long) */

void __thiscall
std::
_Temporary_buffer<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,Clipper2Lib::HorzSegment>
::_Temporary_buffer(_Temporary_buffer<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,Clipper2Lib::HorzSegment>
                    *this,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  
  lVar8 = 0x555555555555555;
  if (param_3 < 0x555555555555556) {
    lVar8 = param_3;
  }
  *(long *)this = param_3;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (0 < param_3) {
    while (puVar5 = (undefined8 *)operator_new(lVar8 * 0x18,(nothrow_t *)&nothrow),
          puVar5 == (undefined8 *)0x0) {
      if (lVar8 == 1) {
        return;
      }
      lVar8 = lVar8 + 1 >> 1;
    }
    uVar3 = *param_2;
    uVar4 = param_2[1];
    puVar1 = puVar5 + lVar8 * 3;
    puVar5[2] = param_2[2];
    *puVar5 = uVar3;
    puVar5[1] = uVar4;
    puVar7 = puVar5;
    puVar6 = puVar5 + 3;
    if (puVar1 != puVar5 + 3) {
      do {
        puVar7 = puVar6 + 3;
        *puVar6 = puVar6[-3];
        puVar6[1] = puVar6[-2];
        puVar6[2] = puVar6[-1];
        puVar6 = puVar7;
      } while (puVar1 != puVar7);
      puVar7 = (undefined8 *)
               ((long)puVar5 + ((long)puVar1 + (-0x30 - (long)puVar5) & 0xfffffffffffffff8U) + 0x18)
      ;
    }
    uVar3 = *puVar7;
    uVar4 = puVar7[1];
    uVar2 = *(undefined1 *)(puVar7 + 2);
    *(undefined8 **)(this + 0x10) = puVar5;
    *(long *)(this + 8) = lVar8;
    *(undefined1 *)(param_2 + 2) = uVar2;
    *param_2 = uVar3;
    param_2[1] = uVar4;
  }
  return;
}



/* void std::vector<Clipper2Lib::IntersectNode, std::allocator<Clipper2Lib::IntersectNode>
   >::_M_realloc_insert<Clipper2Lib::IntersectNode>(__gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*,
   std::vector<Clipper2Lib::IntersectNode, std::allocator<Clipper2Lib::IntersectNode> > >,
   Clipper2Lib::IntersectNode&&) */

void __thiscall
std::vector<Clipper2Lib::IntersectNode,std::allocator<Clipper2Lib::IntersectNode>>::
_M_realloc_insert<Clipper2Lib::IntersectNode>
          (vector<Clipper2Lib::IntersectNode,std::allocator<Clipper2Lib::IntersectNode>> *this,
          undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar7 = (long)puVar1 - (long)puVar2 >> 5;
  if (uVar7 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  puVar10 = (undefined8 *)((long)param_2 - (long)puVar2);
  if (puVar2 == puVar1) {
    if (0xfffffffffffffffe < uVar7) goto LAB_0010c610;
    uVar9 = 0x3ffffffffffffff;
    if (uVar7 + 1 < 0x400000000000000) {
      uVar9 = uVar7 + 1;
    }
    uVar9 = uVar9 << 5;
LAB_0010c61a:
    puVar8 = (undefined8 *)operator_new(uVar9);
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    lVar13 = uVar9 + (long)puVar8;
    puVar12 = puVar8 + 4;
    *(undefined8 *)((long)puVar8 + (long)puVar10) = *param_3;
    ((undefined8 *)((long)puVar8 + (long)puVar10))[1] = uVar3;
    *(undefined8 *)((long)(puVar8 + 2) + (long)puVar10) = uVar4;
    ((undefined8 *)((long)(puVar8 + 2) + (long)puVar10))[1] = uVar5;
    if (param_2 != puVar2) {
LAB_0010c573:
      puVar10 = puVar8;
      puVar11 = puVar2;
      do {
        puVar12 = puVar10;
        uVar3 = *puVar11;
        uVar4 = puVar11[1];
        uVar5 = puVar11[2];
        uVar6 = puVar11[3];
        puVar11 = puVar11 + 4;
        *puVar12 = uVar3;
        puVar12[1] = uVar4;
        puVar12[2] = uVar5;
        puVar12[3] = uVar6;
        puVar10 = puVar12 + 4;
      } while (puVar12 + 4 != (undefined8 *)(((long)param_2 - (long)puVar2) + (long)puVar8));
      puVar12 = puVar12 + 8;
    }
    puVar10 = puVar12;
    if (param_2 == puVar1) goto LAB_0010c5cd;
  }
  else {
    uVar9 = uVar7 * 2;
    if (uVar9 < uVar7) {
LAB_0010c610:
      uVar9 = 0x7fffffffffffffe0;
      goto LAB_0010c61a;
    }
    if (uVar9 != 0) {
      if (0x3ffffffffffffff < uVar9) {
        uVar9 = 0x3ffffffffffffff;
      }
      uVar9 = uVar9 << 5;
      goto LAB_0010c61a;
    }
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    lVar13 = 0;
    puVar8 = (undefined8 *)0x0;
    puVar12 = (undefined8 *)0x20;
    *puVar10 = *param_3;
    puVar10[1] = uVar3;
    puVar10[2] = uVar4;
    puVar10[3] = uVar5;
    if (param_2 != puVar2) goto LAB_0010c573;
  }
  puVar10 = (undefined8 *)((long)puVar12 + ((long)puVar1 - (long)param_2));
  memcpy(puVar12,param_2,(long)puVar1 - (long)param_2);
LAB_0010c5cd:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar8;
  *(undefined8 **)(this + 8) = puVar10;
  *(long *)(this + 0x10) = lVar13;
  return;
}



/* void std::vector<Clipper2Lib::HorzSegment, std::allocator<Clipper2Lib::HorzSegment>
   >::_M_realloc_insert<Clipper2Lib::HorzSegment>(__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,
   std::vector<Clipper2Lib::HorzSegment, std::allocator<Clipper2Lib::HorzSegment> > >,
   Clipper2Lib::HorzSegment&&) */

void __thiscall
std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>::
_M_realloc_insert<Clipper2Lib::HorzSegment>
          (vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>> *this,
          undefined8 *param_2,undefined8 *param_3)

{
  size_t __n;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long local_50;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  lVar5 = (long)puVar1 - (long)puVar2 >> 3;
  uVar6 = lVar5 * -0x5555555555555555;
  if (uVar6 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  puVar8 = (undefined8 *)((long)param_2 - (long)puVar2);
  if (puVar2 == puVar1) {
    uVar9 = uVar6 + 1;
    if (0xfffffffffffffffe < uVar6) goto LAB_0010c7e0;
    if (0x555555555555555 < uVar9) {
      uVar9 = 0x555555555555555;
    }
    uVar9 = uVar9 * 0x18;
LAB_0010c7ea:
    puVar7 = (undefined8 *)operator_new(uVar9);
    local_50 = (long)puVar7 + uVar9;
    uVar4 = param_3[1];
    puVar10 = puVar7 + 3;
    uVar3 = param_3[2];
    *(undefined8 *)((long)puVar7 + (long)puVar8) = *param_3;
    ((undefined8 *)((long)puVar7 + (long)puVar8))[1] = uVar4;
    *(undefined8 *)((long)(puVar7 + 2) + (long)puVar8) = uVar3;
    puVar8 = puVar2;
    puVar11 = puVar7;
    if (param_2 != puVar2) {
LAB_0010c750:
      do {
        uVar4 = puVar8[1];
        uVar3 = puVar8[2];
        puVar10 = puVar8 + 3;
        *puVar7 = *puVar8;
        puVar7[1] = uVar4;
        puVar7[2] = uVar3;
        puVar8 = puVar10;
        puVar7 = puVar7 + 3;
      } while (puVar10 != param_2);
      puVar10 = (undefined8 *)
                ((long)puVar11 +
                ((long)param_2 + (-0x18 - (long)puVar2) & 0xfffffffffffffff8U) + 0x30);
      puVar7 = puVar11;
    }
    puVar8 = puVar10;
    if (param_2 == puVar1) goto LAB_0010c7a6;
  }
  else {
    uVar9 = lVar5 * 0x5555555555555556;
    if (uVar9 < uVar6) {
LAB_0010c7e0:
      uVar9 = 0x7ffffffffffffff8;
      goto LAB_0010c7ea;
    }
    if (uVar9 != 0) {
      if (0x555555555555555 < uVar9) {
        uVar9 = 0x555555555555555;
      }
      uVar9 = uVar9 * 0x18;
      goto LAB_0010c7ea;
    }
    uVar3 = *param_3;
    uVar4 = param_3[1];
    puVar7 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)&DAT_00000018;
    local_50 = 0;
    puVar8[2] = param_3[2];
    *puVar8 = uVar3;
    puVar8[1] = uVar4;
    puVar8 = puVar2;
    puVar11 = puVar7;
    if (param_2 != puVar2) goto LAB_0010c750;
  }
  __n = ((long)puVar1 + (-0x18 - (long)param_2) & 0xfffffffffffffff8U) + 0x18;
  puVar8 = (undefined8 *)((long)puVar10 + __n);
  memcpy(puVar10,param_2,__n);
LAB_0010c7a6:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar7;
  *(undefined8 **)(this + 8) = puVar8;
  *(long *)(this + 0x10) = local_50;
  return;
}



/* void std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >::_M_realloc_insert<Clipper2Lib::Point<double>
   >(__gnu_cxx::__normal_iterator<Clipper2Lib::Point<double>*,
   std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> > > >,
   Clipper2Lib::Point<double>&&) */

void __thiscall
std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::
_M_realloc_insert<Clipper2Lib::Point<double>>
          (vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *this,
          undefined8 *param_2,undefined8 *param_3)

{
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
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar5 = (long)puVar1 - (long)puVar2 >> 4;
  if (uVar5 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  puVar8 = (undefined8 *)((long)param_2 - (long)puVar2);
  if (puVar2 == puVar1) {
    if (0xfffffffffffffffe < uVar5) goto LAB_0010c998;
    uVar7 = 0x7ffffffffffffff;
    if (uVar5 + 1 < 0x800000000000000) {
      uVar7 = uVar5 + 1;
    }
    uVar7 = uVar7 << 4;
LAB_0010c9a2:
    puVar6 = (undefined8 *)operator_new(uVar7);
    uVar3 = param_3[1];
    lVar11 = uVar7 + (long)puVar6;
    puVar10 = puVar6 + 2;
    *(undefined8 *)((long)puVar6 + (long)puVar8) = *param_3;
    ((undefined8 *)((long)puVar6 + (long)puVar8))[1] = uVar3;
    if (param_2 != puVar2) {
LAB_0010c90a:
      puVar8 = puVar6;
      puVar9 = puVar2;
      do {
        puVar10 = puVar8;
        uVar3 = *puVar9;
        uVar4 = puVar9[1];
        puVar9 = puVar9 + 2;
        *puVar10 = uVar3;
        puVar10[1] = uVar4;
        puVar8 = puVar10 + 2;
      } while (puVar10 + 2 != (undefined8 *)(((long)param_2 - (long)puVar2) + (long)puVar6));
      puVar10 = puVar10 + 4;
    }
    puVar8 = puVar10;
    if (param_2 == puVar1) goto LAB_0010c95c;
  }
  else {
    uVar7 = uVar5 * 2;
    if (uVar7 < uVar5) {
LAB_0010c998:
      uVar7 = 0x7ffffffffffffff0;
      goto LAB_0010c9a2;
    }
    if (uVar7 != 0) {
      if (0x7ffffffffffffff < uVar7) {
        uVar7 = 0x7ffffffffffffff;
      }
      uVar7 = uVar7 << 4;
      goto LAB_0010c9a2;
    }
    uVar3 = param_3[1];
    lVar11 = 0;
    puVar6 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)&DAT_00000010;
    *puVar8 = *param_3;
    puVar8[1] = uVar3;
    if (param_2 != puVar2) goto LAB_0010c90a;
  }
  puVar8 = (undefined8 *)((long)puVar10 + ((long)puVar1 - (long)param_2));
  memcpy(puVar10,param_2,(long)puVar1 - (long)param_2);
LAB_0010c95c:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar8;
  *(long *)(this + 0x10) = lVar11;
  return;
}



/* Clipper2Lib::PolyPathD::AddChild(std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > const&) */

undefined8 __thiscall Clipper2Lib::PolyPathD::AddChild(PolyPathD *this,vector *param_1)

{
  double dVar1;
  void *pvVar2;
  long lVar3;
  PolyPathD *this_00;
  undefined1 auVar4 [8];
  undefined8 *puVar5;
  double *pdVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  double *pdVar10;
  long *plVar11;
  undefined8 uVar12;
  long in_FS_OFFSET;
  double local_68;
  double dStack_60;
  undefined1 local_58 [8];
  double *pdStack_50;
  double *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar5 = (undefined8 *)operator_new(0x48);
  dVar1 = *(double *)(this + 0x28);
  local_48 = (double *)0x0;
  *(undefined1 (*) [16])(puVar5 + 6) = (undefined1  [16])0x0;
  local_58 = (undefined1  [8])0x0;
  pdStack_50 = (double *)0x0;
  puVar5[1] = this;
  *puVar5 = &PTR__PolyPathD_0010f600;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[8] = 0;
  puVar5[5] = dVar1;
  if (dVar1 == 0.0) {
    dVar1 = _LC1;
  }
  plVar11 = *(long **)(param_1 + 8);
  plVar8 = *(long **)param_1;
  uVar7 = (long)plVar11 - (long)plVar8;
  if (0x7ffffffffffffff0 < uVar7) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::reserve");
  }
  if (uVar7 != 0) {
    pdStack_50 = (double *)operator_new(uVar7);
    plVar11 = *(long **)(param_1 + 8);
    plVar8 = *(long **)param_1;
    local_48 = (double *)((long)pdStack_50 + uVar7);
  }
  pdVar10 = local_48;
  local_58 = (undefined1  [8])pdStack_50;
  if (plVar11 != plVar8) {
    do {
      while( true ) {
        local_68 = (double)*plVar8 * dVar1;
        dStack_60 = (double)plVar8[1] * dVar1;
        if (pdVar10 != pdStack_50) break;
        plVar8 = plVar8 + 2;
        std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::
        _M_realloc_insert<Clipper2Lib::Point<double>>
                  ((vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *)
                   local_58,pdVar10,&local_68);
        pdVar10 = local_48;
        if (plVar11 == plVar8) goto LAB_0010cb70;
      }
      pdVar6 = pdStack_50 + 2;
      plVar8 = plVar8 + 2;
      *pdStack_50 = local_68;
      pdStack_50[1] = dStack_60;
      pdStack_50 = pdVar6;
    } while (plVar11 != plVar8);
  }
LAB_0010cb70:
  pvVar2 = (void *)puVar5[6];
  lVar3 = puVar5[8];
  puVar5[8] = pdVar10;
  puVar5[6] = local_58;
  puVar5[7] = pdStack_50;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2,lVar3 - (long)pvVar2);
  }
  local_58 = (undefined1  [8])puVar5;
  puVar9 = *(undefined8 **)(this + 0x18);
  if (puVar9 == *(undefined8 **)(this + 0x20)) {
    std::
    vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>
    ::
    _M_realloc_insert<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>
              ((vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>
                *)(this + 0x10),puVar9,local_58);
    auVar4 = local_58;
    uVar12 = *(undefined8 *)(*(long *)(this + 0x18) + -8);
    if (local_58 != (undefined1  [8])0x0) {
      if (*(code **)(*(long *)local_58 + 8) == ~PolyPathD) {
        *(undefined ***)local_58 = &PTR__PolyPathD_0010f600;
        std::
        vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>
        ::resize((vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>
                  *)((long)local_58 + 0x10),0);
        pvVar2 = *(void **)((long)auVar4 + 0x30);
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2,*(long *)((long)auVar4 + 0x40) - (long)pvVar2);
        }
        puVar5 = *(undefined8 **)((long)auVar4 + 0x18);
        puVar9 = *(undefined8 **)((long)auVar4 + 0x10);
        if (puVar5 != puVar9) {
          do {
            while (this_00 = (PolyPathD *)*puVar9, this_00 == (PolyPathD *)0x0) {
LAB_0010cc9a:
              puVar9 = puVar9 + 1;
              if (puVar5 == puVar9) goto LAB_0010ccd0;
            }
            if (*(code **)(*(long *)this_00 + 8) == ~PolyPathD) {
              ~PolyPathD(this_00);
              operator_delete(this_00,0x48);
              goto LAB_0010cc9a;
            }
            (**(code **)(*(long *)this_00 + 8))();
            puVar9 = puVar9 + 1;
          } while (puVar5 != puVar9);
LAB_0010ccd0:
          puVar9 = *(undefined8 **)((long)auVar4 + 0x10);
        }
        if (puVar9 != (undefined8 *)0x0) {
          operator_delete(puVar9,*(long *)((long)auVar4 + 0x20) - (long)puVar9);
        }
        operator_delete((void *)auVar4,0x48);
      }
      else {
        (**(code **)(*(long *)local_58 + 8))(local_58);
      }
    }
  }
  else {
    *puVar9 = puVar5;
    uVar12 = *puVar9;
    *(undefined8 **)(this + 0x18) = puVar9 + 1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_adaptive<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >, long,
   std::unique_ptr<Clipper2Lib::LocalMinima, std::default_delete<Clipper2Lib::LocalMinima> >*,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >,
   __gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >,
   __gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >, long, long,
   std::unique_ptr<Clipper2Lib::LocalMinima, std::default_delete<Clipper2Lib::LocalMinima> >*,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>) */

void std::
     __merge_adaptive<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,long,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
               long param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  void *pvVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  if (param_5 < param_4) {
    lVar9 = (long)param_3 - (long)param_2;
    puVar10 = param_2;
    puVar11 = param_6;
    if (0 < lVar9) {
      do {
        uVar1 = *puVar10;
        *puVar10 = 0;
        pvVar2 = (void *)*puVar11;
        *puVar11 = uVar1;
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2,0x10);
        }
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      } while (param_3 != puVar10);
      puVar10 = (undefined8 *)((long)param_6 + lVar9);
      if (param_2 == param_1) {
        if (0 < lVar9) {
          puVar11 = puVar10 + -(lVar9 >> 3);
          do {
            param_3 = param_3 + -1;
            uVar1 = puVar10[-1];
            puVar10[-1] = 0;
            puVar10 = puVar10 + -1;
            pvVar2 = (void *)*param_3;
            *param_3 = uVar1;
            if (pvVar2 != (void *)0x0) {
              operator_delete(pvVar2,0x10);
            }
          } while (puVar11 != puVar10);
        }
      }
      else if (param_6 != puVar10) {
        param_2 = param_2 + -1;
        do {
          puVar11 = puVar10 + -1;
          while( true ) {
            plVar3 = (long *)*param_2;
            plVar4 = (long *)*puVar11;
            plVar5 = (long *)*plVar3;
            plVar6 = (long *)*plVar4;
            lVar9 = plVar6[1];
            lVar7 = plVar5[1];
            if (lVar7 == lVar9) {
              bVar8 = *plVar6 < *plVar5;
            }
            else {
              bVar8 = lVar7 < lVar9;
            }
            param_3 = param_3 + -1;
            if (!bVar8) break;
            *param_2 = 0;
            pvVar2 = (void *)*param_3;
            *param_3 = plVar3;
            if (pvVar2 != (void *)0x0) {
              operator_delete(pvVar2,0x10);
            }
            if (param_2 == param_1) {
              if ((long)puVar10 - (long)param_6 < 1) {
                return;
              }
              puVar11 = puVar10 + -((long)puVar10 - (long)param_6 >> 3);
              do {
                param_3 = param_3 + -1;
                uVar1 = puVar10[-1];
                puVar10 = puVar10 + -1;
                *puVar10 = 0;
                pvVar2 = (void *)*param_3;
                *param_3 = uVar1;
                if (pvVar2 != (void *)0x0) {
                  operator_delete(pvVar2,0x10);
                }
              } while (puVar11 != puVar10);
              return;
            }
            param_2 = param_2 + -1;
          }
          *puVar11 = 0;
          pvVar2 = (void *)*param_3;
          *param_3 = plVar4;
          if (pvVar2 != (void *)0x0) {
            operator_delete(pvVar2,0x10);
          }
          puVar10 = puVar11;
          if (param_6 == puVar11) {
            return;
          }
        } while( true );
      }
    }
  }
  else if (0 < (long)param_2 - (long)param_1) {
    puVar12 = (undefined8 *)(((long)param_2 - (long)param_1) + (long)param_6);
    puVar10 = param_6;
    puVar11 = param_1;
    do {
      uVar1 = *puVar11;
      *puVar11 = 0;
      pvVar2 = (void *)*puVar10;
      *puVar10 = uVar1;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2,0x10);
      }
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    } while (puVar12 != puVar10);
    if (param_6 != puVar12) {
      do {
        while( true ) {
          if (param_2 == param_3) {
            if (puVar12 == param_6) {
              return;
            }
            if (puVar12 == param_6 || (long)puVar12 - (long)param_6 < 0) {
              return;
            }
            do {
              uVar1 = *param_6;
              *param_6 = 0;
              pvVar2 = (void *)*param_1;
              *param_1 = uVar1;
              if (pvVar2 != (void *)0x0) {
                operator_delete(pvVar2,0x10);
              }
              param_6 = param_6 + 1;
              param_1 = param_1 + 1;
            } while (puVar12 != param_6);
            return;
          }
          plVar3 = (long *)*param_6;
          plVar4 = (long *)*param_2;
          plVar5 = (long *)*plVar3;
          plVar6 = (long *)*plVar4;
          lVar9 = plVar6[1];
          lVar7 = plVar5[1];
          if (lVar7 == lVar9) break;
          if (lVar7 < lVar9) goto LAB_0010cdd2;
LAB_0010ce2c:
          *param_6 = 0;
          pvVar2 = (void *)*param_1;
          *param_1 = plVar3;
          if (pvVar2 != (void *)0x0) {
            operator_delete(pvVar2,0x10);
          }
          param_6 = param_6 + 1;
          param_1 = param_1 + 1;
          if (puVar12 == param_6) {
            return;
          }
        }
        if (*plVar5 <= *plVar6) goto LAB_0010ce2c;
LAB_0010cdd2:
        *param_2 = 0;
        pvVar2 = (void *)*param_1;
        *param_1 = plVar4;
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2,0x10);
        }
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      } while (puVar12 != param_6);
    }
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >,
   __gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>) */

void std::
     __insertion_sort<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  
  if (param_1 == param_2) {
    return;
  }
  puVar12 = param_1 + 1;
joined_r0x0010d0c8:
  if (param_2 == puVar12) {
    return;
  }
  plVar2 = (long *)*puVar12;
  plVar13 = (long *)*plVar2;
  lVar9 = plVar13[1];
  lVar3 = (*(long **)*param_1)[1];
  if (lVar3 == lVar9) {
    bVar8 = *plVar13 < **(long **)*param_1;
  }
  else {
    bVar8 = lVar3 < lVar9;
  }
  puVar1 = puVar12 + 1;
  if (!bVar8) {
    *puVar12 = 0;
    do {
      plVar6 = (long *)puVar12[-1];
      plVar7 = (long *)*plVar6;
      lVar3 = plVar7[1];
      if (lVar3 == lVar9) {
        if (*plVar7 <= *plVar13) goto LAB_0010d1c0;
      }
      else if (lVar9 <= lVar3) goto LAB_0010d1c0;
      pvVar5 = (void *)*puVar12;
      puVar12[-1] = 0;
      *puVar12 = plVar6;
      if (pvVar5 != (void *)0x0) {
        operator_delete(pvVar5,0x10);
        plVar13 = (long *)*plVar2;
        lVar9 = plVar13[1];
      }
      puVar12 = puVar12 + -1;
    } while( true );
  }
  *puVar12 = 0;
  if (0 < (long)puVar12 - (long)param_1) {
    puVar10 = puVar1;
    do {
      uVar4 = puVar10[-2];
      pvVar5 = (void *)puVar10[-1];
      puVar11 = puVar10 + -1;
      puVar10[-2] = 0;
      *puVar11 = uVar4;
      if (pvVar5 != (void *)0x0) {
        operator_delete(pvVar5,0x10);
      }
      puVar10 = puVar11;
    } while (puVar11 != puVar12 + (1 - ((long)puVar12 - (long)param_1 >> 3)));
  }
  pvVar5 = (void *)*param_1;
  *param_1 = plVar2;
  goto joined_r0x0010d1c9;
LAB_0010d1c0:
  pvVar5 = (void *)*puVar12;
  *puVar12 = plVar2;
joined_r0x0010d1c9:
  puVar12 = puVar1;
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5,0x10);
  }
  goto joined_r0x0010d0c8;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,
   std::vector<Clipper2Lib::HorzSegment, std::allocator<Clipper2Lib::HorzSegment> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>
   >(__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >,
   __gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>) */

void std::
     __insertion_sort<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  size_t __n;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  
  if (param_1 == param_2) {
    return;
  }
  puVar6 = param_1 + 3;
  do {
    while( true ) {
      if (param_2 == puVar6) {
        return;
      }
      puVar7 = puVar6;
      if (puVar6[1] != 0) break;
      local_48 = *puVar6;
      uStack_40 = puVar6[1];
      local_38 = (undefined1)puVar6[2];
LAB_0010d2f1:
      *(undefined1 *)(puVar7 + 2) = local_38;
      *puVar7 = local_48;
      puVar7[1] = uStack_40;
      puVar6 = puVar6 + 3;
    }
    if ((param_1[1] != 0) && (lVar2 = *(long *)*puVar6, *(long *)*param_1 <= lVar2)) {
      local_38 = (undefined1)puVar6[2];
      local_48 = *puVar6;
      uStack_40 = puVar6[1];
      lVar8 = puVar6[-2];
      plVar9 = (long *)puVar6[-3];
      while ((lVar8 == 0 || (lVar2 < *plVar9))) {
        plVar9 = (long *)puVar7[-6];
        *(undefined1 *)(puVar7 + 2) = *(undefined1 *)(puVar7 + -1);
        lVar8 = puVar7[-5];
        *puVar7 = puVar7[-3];
        puVar7[1] = puVar7[-2];
        puVar7 = puVar7 + -3;
      }
      goto LAB_0010d2f1;
    }
    uVar1 = puVar6[2];
    uVar3 = *puVar6;
    uVar4 = puVar6[1];
    __n = (long)puVar6 - (long)param_1;
    if ((long)__n < 0x19) {
      if (__n == 0x18) {
        uVar5 = param_1[1];
        *puVar6 = *param_1;
        puVar6[1] = uVar5;
        *(undefined1 *)(puVar6 + 2) = *(undefined1 *)(param_1 + 2);
      }
    }
    else {
      memmove((void *)((0x18 - __n) + (long)puVar6),param_1,__n);
    }
    local_38 = (undefined1)uVar1;
    *(undefined1 *)(param_1 + 2) = local_38;
    *param_1 = uVar3;
    param_1[1] = uVar4;
    puVar6 = puVar6 + 3;
  } while( true );
}



/* __gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >
   std::__lower_bound<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >, std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   __gnu_cxx::__ops::_Iter_comp_val<Clipper2Lib::LocMinSorter>
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >,
   __gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >, std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > const&,
   __gnu_cxx::__ops::_Iter_comp_val<Clipper2Lib::LocMinSorter>) */

void std::
     __lower_bound<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,__gnu_cxx::__ops::_Iter_comp_val<Clipper2Lib::LocMinSorter>>
               (undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (0 < param_2 - (long)param_1) {
    lVar1 = (*(long **)*param_3)[1];
    lVar4 = param_2 - (long)param_1 >> 3;
    do {
      while( true ) {
        lVar5 = lVar4 >> 1;
        plVar2 = *(long **)param_1[lVar5];
        lVar3 = plVar2[1];
        if (lVar1 != lVar3) break;
        if (*plVar2 < **(long **)*param_3) goto LAB_0010d38a;
LAB_0010d3b8:
        lVar4 = lVar5;
        if (lVar5 < 1) {
          return;
        }
      }
      if (lVar3 <= lVar1) goto LAB_0010d3b8;
LAB_0010d38a:
      param_1 = param_1 + lVar5 + 1;
      lVar4 = (lVar4 - lVar5) + -1;
    } while (0 < lVar4);
  }
  return;
}



/* __gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >
   std::__upper_bound<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >, std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   __gnu_cxx::__ops::_Val_comp_iter<Clipper2Lib::LocMinSorter>
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >,
   __gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >, std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > const&,
   __gnu_cxx::__ops::_Val_comp_iter<Clipper2Lib::LocMinSorter>) */

void std::
     __upper_bound<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,__gnu_cxx::__ops::_Val_comp_iter<Clipper2Lib::LocMinSorter>>
               (undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (0 < param_2 - (long)param_1) {
    lVar1 = (*(long **)*param_3)[1];
    lVar4 = param_2 - (long)param_1 >> 3;
    do {
      while( true ) {
        lVar5 = lVar4 >> 1;
        plVar2 = *(long **)param_1[lVar5];
        lVar3 = plVar2[1];
        if (lVar3 != lVar1) break;
        if (**(long **)*param_3 < *plVar2) goto LAB_0010d3fa;
LAB_0010d420:
        param_1 = param_1 + lVar5 + 1;
        lVar4 = (lVar4 - lVar5) + -1;
        if (lVar4 < 1) {
          return;
        }
      }
      if (lVar1 <= lVar3) goto LAB_0010d420;
LAB_0010d3fa:
      lVar4 = lVar5;
    } while (0 < lVar5);
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void 
   std::__merge_without_buffer<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >, long,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >,
   __gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >,
   __gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >, long, long,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>) */

void std::
     __merge_without_buffer<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4,long param_5
               )

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
  while( true ) {
    if (param_4 == 0) {
      return;
    }
    if (param_5 == 0) break;
    if (param_4 + param_5 == 2) {
      plVar1 = (long *)*param_1;
      plVar2 = (long *)*plVar1;
      plVar3 = *(long **)*param_2;
      lVar7 = plVar3[1];
      lVar8 = plVar2[1];
      if (lVar8 == lVar7) {
        if (*plVar2 <= *plVar3) {
          return;
        }
      }
      else if (lVar7 <= lVar8) {
        return;
      }
      *param_1 = (long *)*param_2;
      *param_2 = plVar1;
      return;
    }
    if (param_5 < param_4) {
      lVar8 = param_4 / 2;
      puVar4 = param_1 + lVar8;
      puVar6 = (undefined8 *)
               __lower_bound<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,__gnu_cxx::__ops::_Iter_comp_val<Clipper2Lib::LocMinSorter>>
                         (param_2,param_3,puVar4);
      lVar7 = (long)puVar6 - (long)param_2 >> 3;
    }
    else {
      lVar7 = param_5 / 2;
      puVar6 = param_2 + lVar7;
      puVar4 = (undefined8 *)
               __upper_bound<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,__gnu_cxx::__ops::_Val_comp_iter<Clipper2Lib::LocMinSorter>>
                         (param_1,param_2,puVar6);
      lVar8 = (long)puVar4 - (long)param_1 >> 3;
    }
    param_4 = param_4 - lVar8;
    puVar5 = (undefined8 *)
             _V2::
             __rotate<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>>
                       (puVar4,param_2,puVar6);
    __merge_without_buffer<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>
              (param_1,puVar4,puVar5,lVar8,lVar7);
    param_5 = param_5 - lVar7;
    param_2 = puVar6;
    param_1 = puVar5;
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void 
   std::__inplace_stable_sort<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >,
   __gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>) */

void std::
     __inplace_stable_sort<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>
               (long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (0x70 < param_2 - param_1) {
    lVar2 = (param_2 - param_1 >> 4) * 8;
    lVar1 = param_1 + lVar2;
    __inplace_stable_sort<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>
              (param_1,lVar1);
    __inplace_stable_sort<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>
              (lVar1,param_2);
    __merge_without_buffer<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>
              (param_1,lVar1,param_2,lVar2 >> 3,param_2 - lVar1 >> 3);
    return;
  }
  __insertion_sort<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>
            ();
  return;
}



/* __gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >
   std::__lower_bound<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,
   std::vector<Clipper2Lib::HorzSegment, std::allocator<Clipper2Lib::HorzSegment> > >,
   Clipper2Lib::HorzSegment, __gnu_cxx::__ops::_Iter_comp_val<Clipper2Lib::HorzSegSorter>
   >(__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >,
   __gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >, Clipper2Lib::HorzSegment const&,
   __gnu_cxx::__ops::_Iter_comp_val<Clipper2Lib::HorzSegSorter>) */

void std::
     __lower_bound<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,Clipper2Lib::HorzSegment,__gnu_cxx::__ops::_Iter_comp_val<Clipper2Lib::HorzSegSorter>>
               (undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (0 < param_2 - (long)param_1) {
    uVar2 = (param_2 - (long)param_1 >> 3) * -0x5555555555555555;
    do {
      while( true ) {
        uVar3 = (long)uVar2 >> 1;
        puVar1 = param_1 + (uVar2 & 0xfffffffffffffffe) + uVar3;
        if ((puVar1[1] != 0) && ((param_3[1] == 0 || (*(long *)*puVar1 < *(long *)*param_3))))
        break;
        uVar2 = uVar3;
        if ((long)uVar3 < 1) {
          return;
        }
      }
      param_1 = puVar1 + 3;
      uVar2 = (uVar2 - uVar3) - 1;
    } while (0 < (long)uVar2);
  }
  return;
}



/* __gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >
   std::__upper_bound<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,
   std::vector<Clipper2Lib::HorzSegment, std::allocator<Clipper2Lib::HorzSegment> > >,
   Clipper2Lib::HorzSegment, __gnu_cxx::__ops::_Val_comp_iter<Clipper2Lib::HorzSegSorter>
   >(__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >,
   __gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >, Clipper2Lib::HorzSegment const&,
   __gnu_cxx::__ops::_Val_comp_iter<Clipper2Lib::HorzSegSorter>) */

void std::
     __upper_bound<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,Clipper2Lib::HorzSegment,__gnu_cxx::__ops::_Val_comp_iter<Clipper2Lib::HorzSegSorter>>
               (undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (0 < param_2 - (long)param_1) {
    uVar2 = (param_2 - (long)param_1 >> 3) * -0x5555555555555555;
    do {
      while( true ) {
        uVar3 = (long)uVar2 >> 1;
        puVar1 = param_1 + (uVar2 & 0xfffffffffffffffe) + uVar3;
        if ((param_3[1] != 0) && ((puVar1[1] == 0 || (*(long *)*param_3 < *(long *)*puVar1))))
        break;
        param_1 = puVar1 + 3;
        uVar2 = (uVar2 - uVar3) - 1;
        if ((long)uVar2 < 1) {
          return;
        }
      }
      uVar2 = uVar3;
    } while (0 < (long)uVar3);
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_without_buffer<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,
   std::vector<Clipper2Lib::HorzSegment, std::allocator<Clipper2Lib::HorzSegment> > >, long,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>
   >(__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >,
   __gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >,
   __gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >, long, long,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>) */

void std::
     __merge_without_buffer<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4,long param_5
               )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  while( true ) {
    if (param_4 == 0) {
      return;
    }
    if (param_5 == 0) break;
    if (param_4 + param_5 == 2) {
      if (param_2[1] != 0) {
        if ((param_1[1] == 0) || (*(long *)*param_2 < *(long *)*param_1)) {
          uVar2 = param_2[1];
          uVar3 = *param_1;
          uVar4 = param_1[1];
          uVar1 = param_1[2];
          *param_1 = *param_2;
          param_1[1] = uVar2;
          *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
          *(char *)(param_2 + 2) = (char)uVar1;
          *param_2 = uVar3;
          param_2[1] = uVar4;
        }
      }
      return;
    }
    if (param_5 < param_4) {
      lVar9 = param_4 / 2;
      puVar5 = param_1 + (param_4 - (param_4 >> 0x3f) & 0xfffffffffffffffeU) + lVar9;
      puVar7 = (undefined8 *)
               __lower_bound<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,Clipper2Lib::HorzSegment,__gnu_cxx::__ops::_Iter_comp_val<Clipper2Lib::HorzSegSorter>>
                         (param_2,param_3,puVar5);
      lVar8 = ((long)puVar7 - (long)param_2 >> 3) * -0x5555555555555555;
    }
    else {
      lVar8 = param_5 / 2;
      puVar7 = param_2 + (param_5 - (param_5 >> 0x3f) & 0xfffffffffffffffeU) + lVar8;
      puVar5 = (undefined8 *)
               __upper_bound<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,Clipper2Lib::HorzSegment,__gnu_cxx::__ops::_Val_comp_iter<Clipper2Lib::HorzSegSorter>>
                         (param_1,param_2,puVar7);
      lVar9 = ((long)puVar5 - (long)param_1 >> 3) * -0x5555555555555555;
    }
    param_4 = param_4 - lVar9;
    puVar6 = (undefined8 *)
             _V2::
             __rotate<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>>
                       (puVar5,param_2,puVar7);
    __merge_without_buffer<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
              (param_1,puVar5,puVar6,lVar9,lVar8);
    param_5 = param_5 - lVar8;
    param_2 = puVar7;
    param_1 = puVar6;
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__inplace_stable_sort<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,
   std::vector<Clipper2Lib::HorzSegment, std::allocator<Clipper2Lib::HorzSegment> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>
   >(__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >,
   __gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>) */

void std::
     __inplace_stable_sort<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
               (long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if (0x150 < param_2 - param_1) {
    uVar2 = (param_2 - param_1 >> 3) * -0x5555555555555555;
    lVar3 = ((uVar2 & 0xfffffffffffffffe) + ((long)uVar2 >> 1)) * 8;
    lVar1 = param_1 + lVar3;
    __inplace_stable_sort<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
              (param_1,lVar1);
    __inplace_stable_sort<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
              (lVar1,param_2);
    __merge_without_buffer<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
              (param_1,lVar1,param_2,(lVar3 >> 3) * -0x5555555555555555,
               (param_2 - lVar1 >> 3) * -0x5555555555555555);
    return;
  }
  __insertion_sort<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
            ();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*,
   std::vector<Clipper2Lib::IntersectNode, std::allocator<Clipper2Lib::IntersectNode> > >,
   __gnu_cxx::__ops::_Val_comp_iter<bool (*)(Clipper2Lib::IntersectNode const&,
   Clipper2Lib::IntersectNode const&)> >(__gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*,
   std::vector<Clipper2Lib::IntersectNode, std::allocator<Clipper2Lib::IntersectNode> > >,
   __gnu_cxx::__ops::_Val_comp_iter<bool (*)(Clipper2Lib::IntersectNode const&,
   Clipper2Lib::IntersectNode const&)>) */

void std::
     __unguarded_linear_insert<__gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*,std::vector<Clipper2Lib::IntersectNode,std::allocator<Clipper2Lib::IntersectNode>>>,__gnu_cxx::__ops::_Val_comp_iter<bool(*)(Clipper2Lib::IntersectNode_const&,Clipper2Lib::IntersectNode_const&)>>
               (undefined8 *param_1,code *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  local_48 = *param_1;
  uStack_40 = param_1[1];
  local_38 = param_1[2];
  uStack_30 = param_1[3];
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = param_1 + -4;
  while( true ) {
    cVar1 = (*param_2)(&local_48,puVar2);
    if (cVar1 == '\0') break;
    puVar2[4] = *puVar2;
    puVar2[5] = puVar2[1];
    puVar2[6] = puVar2[2];
    puVar2[7] = puVar2[3];
    puVar2 = puVar2 + -4;
  }
  puVar2[4] = local_48;
  puVar2[5] = uStack_40;
  puVar2[6] = local_38;
  puVar2[7] = uStack_30;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<__gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*,
   std::vector<Clipper2Lib::IntersectNode, std::allocator<Clipper2Lib::IntersectNode> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Clipper2Lib::IntersectNode const&,
   Clipper2Lib::IntersectNode const&)> >(__gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*,
   std::vector<Clipper2Lib::IntersectNode, std::allocator<Clipper2Lib::IntersectNode> > >,
   __gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*, std::vector<Clipper2Lib::IntersectNode,
   std::allocator<Clipper2Lib::IntersectNode> > >, __gnu_cxx::__ops::_Iter_comp_iter<bool
   (*)(Clipper2Lib::IntersectNode const&, Clipper2Lib::IntersectNode const&)>) */

void std::
     __insertion_sort<__gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*,std::vector<Clipper2Lib::IntersectNode,std::allocator<Clipper2Lib::IntersectNode>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(Clipper2Lib::IntersectNode_const&,Clipper2Lib::IntersectNode_const&)>>
               (undefined8 *param_1,undefined8 *param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  size_t __n;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (param_1 == param_2) {
    return;
  }
  puVar7 = param_1 + 4;
  do {
    if (param_2 == puVar7) {
      return;
    }
    while (cVar6 = (*param_3)(puVar7,param_1), cVar6 == '\0') {
      puVar8 = puVar7 + 4;
      __unguarded_linear_insert<__gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*,std::vector<Clipper2Lib::IntersectNode,std::allocator<Clipper2Lib::IntersectNode>>>,__gnu_cxx::__ops::_Val_comp_iter<bool(*)(Clipper2Lib::IntersectNode_const&,Clipper2Lib::IntersectNode_const&)>>
                (puVar7,param_3);
      puVar7 = puVar8;
      if (param_2 == puVar8) {
        return;
      }
    }
    uVar1 = *puVar7;
    uVar2 = puVar7[1];
    uVar3 = puVar7[2];
    uVar4 = puVar7[3];
    __n = (long)puVar7 - (long)param_1;
    if ((long)__n < 0x21) {
      if (__n == 0x20) {
        uVar5 = param_1[1];
        *puVar7 = *param_1;
        puVar7[1] = uVar5;
        uVar5 = param_1[3];
        puVar7[2] = param_1[2];
        puVar7[3] = uVar5;
      }
    }
    else {
      memmove((void *)((0x20 - __n) + (long)puVar7),param_1,__n);
    }
    puVar7 = puVar7 + 4;
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::unique_ptr<Clipper2Lib::LocalMinima, std::default_delete<Clipper2Lib::LocalMinima> >*
   std::__move_merge<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >, std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >,
   __gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >,
   __gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >,
   __gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >, std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>) */

unique_ptr *
std::
__move_merge<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
          unique_ptr *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  void *pvVar6;
  bool bVar7;
  unique_ptr *puVar8;
  long lVar9;
  long lVar10;
  
  if (param_1 != param_2) {
    do {
      while( true ) {
        if (param_4 == param_3) {
          lVar9 = (long)param_2 - (long)param_1;
          lVar10 = lVar9 >> 3;
          puVar8 = param_5;
          if (0 < lVar9) {
            do {
              uVar5 = *param_1;
              *param_1 = 0;
              pvVar6 = *(void **)puVar8;
              *(undefined8 *)puVar8 = uVar5;
              if (pvVar6 != (void *)0x0) {
                operator_delete(pvVar6,0x10);
              }
              param_1 = param_1 + 1;
              lVar10 = lVar10 + -1;
              puVar8 = puVar8 + 8;
            } while (lVar10 != 0);
            if (lVar9 < 1) {
              lVar9 = 8;
            }
            param_5 = param_5 + lVar9;
          }
          goto joined_r0x0010dc7b;
        }
        plVar1 = (long *)*param_1;
        plVar2 = (long *)*param_3;
        plVar3 = (long *)*plVar1;
        plVar4 = (long *)*plVar2;
        lVar9 = plVar4[1];
        lVar10 = plVar3[1];
        if (lVar10 == lVar9) {
          bVar7 = *plVar4 < *plVar3;
        }
        else {
          bVar7 = lVar10 < lVar9;
        }
        if (!bVar7) break;
        *param_3 = 0;
        pvVar6 = *(void **)param_5;
        *(long **)param_5 = plVar2;
        if (pvVar6 != (void *)0x0) {
          operator_delete(pvVar6,0x10);
        }
        param_3 = param_3 + 1;
        param_5 = param_5 + 8;
        if (param_1 == param_2) goto joined_r0x0010dc7b;
      }
      *param_1 = 0;
      pvVar6 = *(void **)param_5;
      *(long **)param_5 = plVar1;
      if (pvVar6 != (void *)0x0) {
        operator_delete(pvVar6,0x10);
      }
      param_1 = param_1 + 1;
      param_5 = param_5 + 8;
    } while (param_1 != param_2);
  }
joined_r0x0010dc7b:
  puVar8 = param_5;
  if (0 < (long)param_4 - (long)param_3) {
    puVar8 = param_5 + ((long)param_4 - (long)param_3);
    do {
      uVar5 = *param_3;
      *param_3 = 0;
      pvVar6 = *(void **)param_5;
      *(undefined8 *)param_5 = uVar5;
      if (pvVar6 != (void *)0x0) {
        operator_delete(pvVar6,0x10);
      }
      param_5 = param_5 + 8;
      param_3 = param_3 + 1;
    } while (puVar8 != param_5);
  }
  return puVar8;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void 
   std::__merge_sort_with_buffer<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >, std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >,
   __gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >, std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>) */

void std::
     __merge_sort_with_buffer<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>
               (long param_1,long param_2,unique_ptr *param_3)

{
  unique_ptr *puVar1;
  long lVar2;
  unique_ptr *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  unique_ptr *puVar9;
  
  lVar4 = param_2 - param_1;
  puVar1 = param_3 + lVar4;
  lVar2 = lVar4 >> 3;
  lVar5 = param_1;
  if (lVar4 < 0x31) {
    __insertion_sort<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>
              (param_1);
    return;
  }
  do {
    lVar7 = lVar5 + 0x38;
    __insertion_sort<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>
              (lVar5,lVar7);
    lVar5 = lVar7;
  } while (0x30 < param_2 - lVar7);
  __insertion_sort<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>
            (lVar7,param_2);
  if (0x38 < lVar4) {
    lVar5 = 7;
    do {
      lVar4 = lVar5 * 2;
      lVar7 = lVar2;
      puVar3 = param_3;
      lVar8 = param_1;
      if (SBORROW8(lVar2,lVar4) == lVar2 + lVar5 * -2 < 0) {
        lVar6 = param_1;
        do {
          lVar8 = lVar6 + lVar5 * 0x10;
          lVar7 = lVar8 + lVar5 * -8;
          puVar3 = __move_merge<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>
                             (lVar6,lVar7,lVar7,lVar8,puVar3);
          lVar7 = param_2 - lVar8 >> 3;
          lVar6 = lVar8;
        } while (lVar4 <= lVar7);
      }
      if (lVar5 <= lVar7) {
        lVar7 = lVar5;
      }
      lVar6 = lVar5 * 4;
      lVar7 = lVar8 + lVar7 * 8;
      __move_merge<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>
                (lVar8,lVar7,lVar7,param_2,puVar3);
      if (lVar2 < lVar6) {
        if (lVar2 != lVar4 && SBORROW8(lVar2,lVar4) == lVar2 + lVar5 * -2 < 0) {
          lVar2 = lVar4;
        }
        __move_merge<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>
                  (param_3,param_3 + lVar2 * 8,param_3 + lVar2 * 8,puVar1,param_1);
        return;
      }
      lVar7 = param_1;
      puVar3 = param_3;
      do {
        puVar9 = puVar3 + lVar5 * 0x20;
        lVar7 = __move_merge<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>
                          (puVar3,puVar9 + lVar5 * -0x10,puVar9 + lVar5 * -0x10,puVar9,lVar7);
        lVar8 = (long)puVar1 - (long)puVar9 >> 3;
        puVar3 = puVar9;
      } while (lVar6 <= lVar8);
      if (lVar8 != lVar4 && SBORROW8(lVar8,lVar4) == lVar8 + lVar5 * -2 < 0) {
        lVar8 = lVar4;
      }
      __move_merge<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>
                (puVar9,puVar9 + lVar8 * 8,puVar9 + lVar8 * 8,puVar1,lVar7);
      lVar5 = lVar6;
    } while (lVar6 < lVar2);
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void 
   std::__stable_sort_adaptive<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >, std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >,
   __gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >,
   __gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >, std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>) */

void std::
     __stable_sort_adaptive<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>
               (long param_1,long param_2,long param_3,undefined8 param_4)

{
  __merge_sort_with_buffer<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>
            (param_1,param_2,param_4);
  __merge_sort_with_buffer<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>
            (param_2,param_3,param_4);
  __merge_adaptive<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,long,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>
            (param_1,param_2,param_3,param_2 - param_1 >> 3,param_3 - param_2 >> 3,param_4);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Clipper2Lib::HorzSegment*
   std::__move_merge<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,
   std::vector<Clipper2Lib::HorzSegment, std::allocator<Clipper2Lib::HorzSegment> > >,
   Clipper2Lib::HorzSegment*, __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>
   >(__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >,
   __gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >,
   __gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >,
   __gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >, Clipper2Lib::HorzSegment*,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>) */

HorzSegment *
std::
__move_merge<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,Clipper2Lib::HorzSegment*,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
          undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 *__dest;
  undefined8 *puVar2;
  undefined8 *puVar3;
  size_t sVar4;
  
  puVar2 = param_3;
  __dest = param_5;
  if (param_2 != param_1) {
    do {
      while( true ) {
        param_3 = puVar2;
        if (param_4 == puVar2) {
          sVar4 = (long)param_2 - (long)param_1;
          if ((long)sVar4 < 0x19) {
            if (sVar4 == 0x18) {
              uVar1 = param_1[1];
              *__dest = *param_1;
              __dest[1] = uVar1;
              *(undefined1 *)(__dest + 2) = *(undefined1 *)(param_1 + 2);
            }
          }
          else {
            __dest = (undefined8 *)memmove(__dest,param_1,sVar4);
          }
          param_5 = (undefined8 *)((long)__dest + sVar4);
          goto joined_r0x0010dfac;
        }
        if ((puVar2[1] != 0) && ((param_1[1] == 0 || (*(long *)*puVar2 < *(long *)*param_1))))
        break;
        uVar1 = param_1[1];
        puVar3 = param_1 + 3;
        param_5 = __dest + 3;
        *__dest = *param_1;
        __dest[1] = uVar1;
        *(undefined1 *)(__dest + 2) = *(undefined1 *)(param_1 + 2);
        param_1 = puVar3;
        __dest = param_5;
        if (puVar3 == param_2) goto joined_r0x0010dfac;
      }
      uVar1 = puVar2[1];
      param_5 = __dest + 3;
      param_3 = puVar2 + 3;
      *__dest = *puVar2;
      __dest[1] = uVar1;
      *(undefined1 *)(__dest + 2) = *(undefined1 *)(puVar2 + 2);
      puVar2 = param_3;
      __dest = param_5;
    } while (param_1 != param_2);
  }
joined_r0x0010dfac:
  sVar4 = (long)param_4 - (long)param_3;
  if ((long)sVar4 < 0x19) {
    if (sVar4 == 0x18) {
      uVar1 = param_3[1];
      *param_5 = *param_3;
      param_5[1] = uVar1;
      *(undefined1 *)(param_5 + 2) = *(undefined1 *)(param_3 + 2);
    }
  }
  else {
    param_5 = (undefined8 *)memmove(param_5,param_3,sVar4);
  }
  return (HorzSegment *)((long)param_5 + sVar4);
}



/* __gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > > std::__move_merge<Clipper2Lib::HorzSegment*,
   __gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter> >(Clipper2Lib::HorzSegment*,
   Clipper2Lib::HorzSegment*, Clipper2Lib::HorzSegment*, Clipper2Lib::HorzSegment*,
   __gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>) */

long std::
     __move_merge<Clipper2Lib::HorzSegment*,__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 *param_5)

{
  undefined8 uVar1;
  size_t __n;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  size_t __n_00;
  
  puVar2 = param_3;
  puVar4 = param_5;
  if (param_1 != param_2) {
    do {
      while( true ) {
        param_3 = puVar2;
        param_5 = puVar4;
        if (puVar2 == param_4) goto LAB_0010e05f;
        if ((puVar2[1] != 0) && ((param_1[1] == 0 || (*(long *)*puVar2 < *(long *)*param_1))))
        break;
        uVar1 = param_1[1];
        puVar3 = param_1 + 3;
        param_5 = puVar4 + 3;
        *puVar4 = *param_1;
        puVar4[1] = uVar1;
        *(undefined1 *)(puVar4 + 2) = *(undefined1 *)(param_1 + 2);
        param_1 = puVar3;
        puVar4 = param_5;
        if (puVar3 == param_2) goto LAB_0010e05f;
      }
      uVar1 = puVar2[1];
      param_5 = puVar4 + 3;
      param_3 = puVar2 + 3;
      *puVar4 = *puVar2;
      puVar4[1] = uVar1;
      *(undefined1 *)(puVar4 + 2) = *(undefined1 *)(puVar2 + 2);
      puVar2 = param_3;
      puVar4 = param_5;
    } while (param_1 != param_2);
  }
LAB_0010e05f:
  __n = (long)param_2 - (long)param_1;
  if ((long)__n < 0x19) {
    if (__n == 0x18) {
      uVar1 = param_1[1];
      *param_5 = *param_1;
      param_5[1] = uVar1;
      *(undefined1 *)(param_5 + 2) = *(undefined1 *)(param_1 + 2);
    }
  }
  else {
    param_5 = (undefined8 *)memmove(param_5,param_1,__n);
  }
  __n_00 = (long)param_4 - (long)param_3;
  param_5 = (undefined8 *)((long)param_5 + __n);
  if ((long)__n_00 < 0x19) {
    if (__n_00 == 0x18) {
      uVar1 = param_3[1];
      *param_5 = *param_3;
      param_5[1] = uVar1;
      *(undefined1 *)(param_5 + 2) = *(undefined1 *)(param_3 + 2);
    }
  }
  else {
    param_5 = (undefined8 *)memmove(param_5,param_3,__n_00);
  }
  return (long)param_5 + __n_00;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_sort_with_buffer<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,
   std::vector<Clipper2Lib::HorzSegment, std::allocator<Clipper2Lib::HorzSegment> > >,
   Clipper2Lib::HorzSegment*, __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>
   >(__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >,
   __gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >, Clipper2Lib::HorzSegment*,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>) */

void std::
     __merge_sort_with_buffer<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,Clipper2Lib::HorzSegment*,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
               (long param_1,long param_2,HorzSegment *param_3)

{
  HorzSegment *pHVar1;
  HorzSegment *pHVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  HorzSegment *pHVar10;
  long local_68;
  
  lVar8 = param_2 - param_1;
  pHVar1 = param_3 + lVar8;
  lVar3 = (lVar8 >> 3) * -0x5555555555555555;
  lVar6 = param_1;
  if (lVar8 < 0x91) {
    __insertion_sort<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
              (param_1);
    return;
  }
  do {
    lVar7 = lVar6 + 0xa8;
    __insertion_sort<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
              (lVar6,lVar7);
    lVar6 = lVar7;
  } while (0x90 < param_2 - lVar7);
  __insertion_sort<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
            (lVar7,param_2);
  if (0xa8 < lVar8) {
    local_68 = 7;
    lVar6 = 0xe;
    do {
      lVar8 = lVar3;
      pHVar2 = param_3;
      lVar7 = param_1;
      if (lVar6 <= lVar3) {
        lVar9 = local_68 * 4 + lVar6;
        lVar5 = param_1;
        do {
          lVar7 = lVar5 + lVar9 * 8;
          lVar8 = lVar7 + (lVar6 + local_68) * 8 + lVar9 * -8;
          pHVar2 = __move_merge<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,Clipper2Lib::HorzSegment*,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
                             (lVar5,lVar8,lVar8,lVar7,pHVar2);
          lVar4 = param_2 - lVar7 >> 3;
          lVar8 = lVar4 * -0x5555555555555555;
          lVar5 = lVar7;
        } while (lVar6 == lVar8 || SBORROW8(lVar6,lVar8) != lVar6 + lVar4 * 0x5555555555555555 < 0);
      }
      lVar9 = local_68 * 4;
      if (local_68 <= lVar8) {
        lVar8 = local_68;
      }
      lVar8 = lVar7 + lVar8 * 0x18;
      __move_merge<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,Clipper2Lib::HorzSegment*,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
                (lVar7,lVar8,lVar8,param_2,pHVar2);
      if (lVar3 < lVar9) {
        if (lVar6 < lVar3) {
          lVar3 = lVar6;
        }
        __move_merge<Clipper2Lib::HorzSegment*,__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
                  (param_3,param_3 + lVar3 * 0x18,param_3 + lVar3 * 0x18,pHVar1,param_1);
        return;
      }
      lVar8 = param_1;
      pHVar2 = param_3;
      do {
        pHVar10 = pHVar2 + local_68 * 0x60;
        lVar8 = __move_merge<Clipper2Lib::HorzSegment*,__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
                          (pHVar2,pHVar10 + lVar6 * 0x18 + local_68 * -0x60,
                           pHVar10 + lVar6 * 0x18 + local_68 * -0x60,pHVar10,lVar8);
        lVar5 = (long)pHVar1 - (long)pHVar10 >> 3;
        lVar7 = lVar5 * -0x5555555555555555;
        pHVar2 = pHVar10;
      } while (lVar9 == lVar7 || SBORROW8(lVar9,lVar7) != lVar9 + lVar5 * 0x5555555555555555 < 0);
      if (lVar7 - lVar6 != 0 && lVar6 <= lVar7) {
        lVar7 = lVar6;
      }
      __move_merge<Clipper2Lib::HorzSegment*,__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
                (pHVar10,pHVar10 + lVar7 * 0x18,pHVar10 + lVar7 * 0x18,pHVar1,lVar8);
      lVar6 = local_68 << 3;
      local_68 = lVar9;
    } while (lVar9 < lVar3);
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::iter_swap<__gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*,
   std::vector<Clipper2Lib::IntersectNode, std::allocator<Clipper2Lib::IntersectNode> > >,
   __gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*, std::vector<Clipper2Lib::IntersectNode,
   std::allocator<Clipper2Lib::IntersectNode> > >
   >(__gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*,
   std::vector<Clipper2Lib::IntersectNode, std::allocator<Clipper2Lib::IntersectNode> > >,
   __gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*, std::vector<Clipper2Lib::IntersectNode,
   std::allocator<Clipper2Lib::IntersectNode> > >) */

void std::
     iter_swap<__gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*,std::vector<Clipper2Lib::IntersectNode,std::allocator<Clipper2Lib::IntersectNode>>>,__gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*,std::vector<Clipper2Lib::IntersectNode,std::allocator<Clipper2Lib::IntersectNode>>>>
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  *param_2 = uVar2;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  param_2[3] = uVar5;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<__gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*,
   std::vector<Clipper2Lib::IntersectNode, std::allocator<Clipper2Lib::IntersectNode> > >, long,
   Clipper2Lib::IntersectNode, __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Clipper2Lib::IntersectNode
   const&, Clipper2Lib::IntersectNode const&)>
   >(__gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*,
   std::vector<Clipper2Lib::IntersectNode, std::allocator<Clipper2Lib::IntersectNode> > >, long,
   long, Clipper2Lib::IntersectNode, __gnu_cxx::__ops::_Iter_comp_iter<bool
   (*)(Clipper2Lib::IntersectNode const&, Clipper2Lib::IntersectNode const&)>) */

void std::
     __adjust_heap<__gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*,std::vector<Clipper2Lib::IntersectNode,std::allocator<Clipper2Lib::IntersectNode>>>,long,Clipper2Lib::IntersectNode,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(Clipper2Lib::IntersectNode_const&,Clipper2Lib::IntersectNode_const&)>>
               (long param_1,long param_2,ulong param_3,code *param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = (long)(param_3 - 1) / 2;
  lVar8 = param_2;
  if (param_2 < lVar4) {
    do {
      lVar1 = (lVar8 + 1) * 2;
      lVar7 = lVar1 + -1;
      puVar6 = (undefined8 *)((lVar8 + 1) * 0x40 + param_1);
      puVar5 = (undefined8 *)(lVar7 * 0x20 + param_1);
      cVar3 = (*param_4)(puVar6,puVar5);
      if (cVar3 == '\0') {
        lVar7 = lVar1;
        puVar5 = puVar6;
      }
      puVar6 = (undefined8 *)(lVar8 * 0x20 + param_1);
      uVar2 = puVar5[1];
      *puVar6 = *puVar5;
      puVar6[1] = uVar2;
      uVar2 = puVar5[3];
      puVar6[2] = puVar5[2];
      puVar6[3] = uVar2;
      lVar8 = lVar7;
    } while (lVar7 < lVar4);
    puVar6 = puVar5;
    if ((param_3 & 1) == 0) goto LAB_0010e598;
  }
  else {
    puVar5 = (undefined8 *)(param_2 * 0x20 + param_1);
    lVar7 = param_2;
    if ((param_3 & 1) != 0) {
      local_68 = param_7;
      uStack_60 = param_8;
      local_58 = param_9;
      uStack_50 = param_10;
      goto LAB_0010e53e;
    }
LAB_0010e598:
    puVar6 = puVar5;
    if ((long)(param_3 - 2) / 2 == lVar7) {
      lVar7 = lVar7 * 2 + 1;
      puVar6 = (undefined8 *)(lVar7 * 0x20 + param_1);
      uVar2 = puVar6[1];
      *puVar5 = *puVar6;
      puVar5[1] = uVar2;
      uVar2 = puVar6[3];
      puVar5[2] = puVar6[2];
      puVar5[3] = uVar2;
    }
  }
  local_68 = param_7;
  uStack_60 = param_8;
  lVar8 = (lVar7 + -1) - (lVar7 + -1 >> 0x3f);
  local_58 = param_9;
  uStack_50 = param_10;
  puVar5 = puVar6;
  if (param_2 < lVar7) {
    do {
      lVar4 = lVar8 >> 1;
      puVar6 = (undefined8 *)(lVar4 * 0x20 + param_1);
      puVar5 = (undefined8 *)(lVar7 * 0x20 + param_1);
      cVar3 = (*param_4)(puVar6,&local_68);
      if (cVar3 == '\0') break;
      uVar2 = puVar6[1];
      *puVar5 = *puVar6;
      puVar5[1] = uVar2;
      uVar2 = puVar6[3];
      lVar8 = (lVar4 + -1) - (lVar4 + -1 >> 0x3f);
      puVar5[2] = puVar6[2];
      puVar5[3] = uVar2;
      puVar5 = puVar6;
      lVar7 = lVar4;
    } while (param_2 < lVar4);
  }
LAB_0010e53e:
  *puVar5 = local_68;
  puVar5[1] = uStack_60;
  puVar5[2] = local_58;
  puVar5[3] = uStack_50;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introsort_loop<__gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*,
   std::vector<Clipper2Lib::IntersectNode, std::allocator<Clipper2Lib::IntersectNode> > >, long,
   __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Clipper2Lib::IntersectNode const&,
   Clipper2Lib::IntersectNode const&)> >(__gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*,
   std::vector<Clipper2Lib::IntersectNode, std::allocator<Clipper2Lib::IntersectNode> > >,
   __gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*, std::vector<Clipper2Lib::IntersectNode,
   std::allocator<Clipper2Lib::IntersectNode> > >, long, __gnu_cxx::__ops::_Iter_comp_iter<bool
   (*)(Clipper2Lib::IntersectNode const&, Clipper2Lib::IntersectNode const&)>) */

void std::
     __introsort_loop<__gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*,std::vector<Clipper2Lib::IntersectNode,std::allocator<Clipper2Lib::IntersectNode>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(Clipper2Lib::IntersectNode_const&,Clipper2Lib::IntersectNode_const&)>>
               (undefined8 *param_1,undefined8 *param_2,long param_3,code *param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char cVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long local_60;
  
  lVar9 = (long)param_2 - (long)param_1;
  if (0x200 < lVar9) {
    if (param_3 != 0) {
      puVar10 = param_1 + 4;
      puVar13 = param_2;
      local_60 = param_3;
      do {
        local_60 = local_60 + -1;
        puVar7 = puVar13 + -4;
        puVar1 = param_1 + (lVar9 >> 6) * 4;
        cVar8 = (*param_4)(puVar10,puVar1);
        puVar11 = puVar13;
        if (cVar8 == '\0') {
          cVar8 = (*param_4)(puVar10,puVar7);
          if (cVar8 == '\0') {
            cVar8 = (*param_4)(puVar1,puVar7);
            if (cVar8 != '\0') goto LAB_0010e6a2;
            uVar2 = puVar1[1];
            uVar3 = *param_1;
            uVar4 = param_1[1];
            uVar5 = param_1[2];
            uVar6 = param_1[3];
            *param_1 = *puVar1;
            param_1[1] = uVar2;
            uVar2 = puVar1[3];
            param_1[2] = puVar1[2];
            param_1[3] = uVar2;
            *puVar1 = uVar3;
            puVar1[1] = uVar4;
            puVar1[2] = uVar5;
            puVar1[3] = uVar6;
            puVar7 = puVar10;
          }
          else {
LAB_0010e798:
            iter_swap<__gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*,std::vector<Clipper2Lib::IntersectNode,std::allocator<Clipper2Lib::IntersectNode>>>,__gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*,std::vector<Clipper2Lib::IntersectNode,std::allocator<Clipper2Lib::IntersectNode>>>>
                      (param_1,puVar10);
            puVar7 = puVar10;
          }
        }
        else {
          cVar8 = (*param_4)(puVar1);
          if (cVar8 == '\0') {
            cVar8 = (*param_4)(puVar10,puVar7);
            if (cVar8 == '\0') goto LAB_0010e798;
LAB_0010e6a2:
            iter_swap<__gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*,std::vector<Clipper2Lib::IntersectNode,std::allocator<Clipper2Lib::IntersectNode>>>,__gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*,std::vector<Clipper2Lib::IntersectNode,std::allocator<Clipper2Lib::IntersectNode>>>>
                      (param_1,puVar7);
            puVar7 = puVar10;
          }
          else {
            iter_swap<__gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*,std::vector<Clipper2Lib::IntersectNode,std::allocator<Clipper2Lib::IntersectNode>>>,__gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*,std::vector<Clipper2Lib::IntersectNode,std::allocator<Clipper2Lib::IntersectNode>>>>
                      (param_1,puVar1);
            puVar7 = puVar10;
          }
        }
        while( true ) {
          do {
            param_2 = puVar7;
            cVar8 = (*param_4)(param_2,param_1);
            puVar7 = param_2 + 4;
          } while (cVar8 != '\0');
          do {
            puVar7 = puVar11;
            puVar11 = puVar7 + -4;
            cVar8 = (*param_4)(param_1,puVar11);
          } while (cVar8 != '\0');
          if (puVar11 <= param_2) break;
          uVar2 = puVar7[-3];
          uVar3 = *param_2;
          uVar4 = param_2[1];
          uVar5 = param_2[2];
          uVar6 = param_2[3];
          *param_2 = *puVar11;
          param_2[1] = uVar2;
          uVar2 = puVar7[-1];
          param_2[2] = puVar7[-2];
          param_2[3] = uVar2;
          *puVar11 = uVar3;
          puVar7[-3] = uVar4;
          puVar7[-2] = uVar5;
          puVar7[-1] = uVar6;
          puVar7 = param_2 + 4;
        }
        __introsort_loop<__gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*,std::vector<Clipper2Lib::IntersectNode,std::allocator<Clipper2Lib::IntersectNode>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(Clipper2Lib::IntersectNode_const&,Clipper2Lib::IntersectNode_const&)>>
                  (param_2,puVar13,local_60,param_4);
        lVar9 = (long)param_2 - (long)param_1;
        if (lVar9 < 0x201) {
          return;
        }
        puVar13 = param_2;
      } while (local_60 != 0);
    }
    for (lVar12 = (lVar9 >> 5) + -2 >> 1;
        __adjust_heap<__gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*,std::vector<Clipper2Lib::IntersectNode,std::allocator<Clipper2Lib::IntersectNode>>>,long,Clipper2Lib::IntersectNode,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(Clipper2Lib::IntersectNode_const&,Clipper2Lib::IntersectNode_const&)>>
                  (param_1,lVar12,lVar9 >> 5,param_4,param_5,param_6,param_1[lVar12 * 4],
                   (param_1 + lVar12 * 4)[1],param_1[lVar12 * 4 + 2],(param_1 + lVar12 * 4 + 2)[1]),
        lVar12 != 0; lVar12 = lVar12 + -1) {
    }
    do {
      puVar10 = param_2 + -4;
      uVar2 = param_1[1];
      uVar3 = *puVar10;
      uVar4 = param_2[-3];
      uVar5 = param_2[-2];
      uVar6 = param_2[-1];
      *puVar10 = *param_1;
      param_2[-3] = uVar2;
      uVar2 = param_1[3];
      param_2[-2] = param_1[2];
      param_2[-1] = uVar2;
      __adjust_heap<__gnu_cxx::__normal_iterator<Clipper2Lib::IntersectNode*,std::vector<Clipper2Lib::IntersectNode,std::allocator<Clipper2Lib::IntersectNode>>>,long,Clipper2Lib::IntersectNode,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(Clipper2Lib::IntersectNode_const&,Clipper2Lib::IntersectNode_const&)>>
                (param_1,0,(long)puVar10 - (long)param_1 >> 5,param_4,param_5,param_6,uVar3,uVar4,
                 uVar5,uVar6);
      param_2 = puVar10;
    } while (0x20 < (long)puVar10 - (long)param_1);
  }
  return;
}



/* std::unique_ptr<Clipper2Lib::LocalMinima, std::default_delete<Clipper2Lib::LocalMinima> >*
   std::__copy_move<true, false,
   std::random_access_iterator_tag>::__copy_m<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*, std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*>(std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*, std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*, std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*) */

unique_ptr *
std::__copy_move<true,false,std::random_access_iterator_tag>::
__copy_m<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*>
          (unique_ptr *param_1,unique_ptr *param_2,unique_ptr *param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  unique_ptr *puVar3;
  long lVar4;
  
  lVar4 = (long)param_2 - (long)param_1;
  puVar3 = param_3;
  if (lVar4 < 1) {
    return param_3;
  }
  do {
    uVar1 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    pvVar2 = *(void **)puVar3;
    *(undefined8 *)puVar3 = uVar1;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2,0x10);
    }
    param_1 = param_1 + 8;
    puVar3 = puVar3 + 8;
  } while (param_2 != param_1);
  return param_3 + lVar4;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void 
   std::__merge_adaptive_resize<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >, long,
   std::unique_ptr<Clipper2Lib::LocalMinima, std::default_delete<Clipper2Lib::LocalMinima> >*,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >,
   __gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >,
   __gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >, long, long,
   std::unique_ptr<Clipper2Lib::LocalMinima, std::default_delete<Clipper2Lib::LocalMinima> >*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>) */

void std::
     __merge_adaptive_resize<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,long,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>
               (unique_ptr *param_1,unique_ptr *param_2,undefined8 param_3,long param_4,long param_5
               ,unique_ptr *param_6,long param_7)

{
  undefined8 uVar1;
  void *pvVar2;
  unique_ptr *puVar3;
  unique_ptr *puVar4;
  long lVar5;
  unique_ptr *puVar6;
  unique_ptr *puVar7;
  long lVar8;
  long lVar9;
  unique_ptr *local_68;
  long local_60;
  
  local_60 = param_4;
  do {
    lVar5 = param_5;
    if (local_60 <= param_5) {
      lVar5 = local_60;
    }
    if (lVar5 <= param_7) {
      __merge_adaptive<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,long,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>
                ();
      return;
    }
    if (param_5 < local_60) {
      lVar5 = local_60 / 2;
      puVar3 = param_1 + lVar5 * 8;
      local_68 = (unique_ptr *)
                 __lower_bound<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,__gnu_cxx::__ops::_Iter_comp_val<Clipper2Lib::LocMinSorter>>
                           (param_2,param_3,puVar3);
      local_60 = local_60 - lVar5;
      lVar9 = (long)local_68 - (long)param_2 >> 3;
      if (lVar9 < local_60) goto LAB_0010e9a4;
LAB_0010ea77:
      if (param_7 < local_60) {
        puVar4 = (unique_ptr *)
                 _V2::
                 __rotate<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>>
                           (puVar3,param_2,local_68);
      }
      else {
        puVar4 = local_68;
        if (local_60 != 0) {
          puVar7 = __copy_move<true,false,std::random_access_iterator_tag>::
                   __copy_m<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*>
                             (puVar3,param_2,param_6);
          __copy_move<true,false,std::random_access_iterator_tag>::
          __copy_m<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*>
                    (param_2,local_68,puVar3);
          if (0 < (long)puVar7 - (long)param_6) {
            puVar4 = local_68 + ((long)puVar7 - (long)param_6 >> 3) * -8;
            puVar6 = local_68;
            do {
              puVar6 = puVar6 + -8;
              uVar1 = *(undefined8 *)(puVar7 + -8);
              puVar7 = puVar7 + -8;
              *(undefined8 *)puVar7 = 0;
              pvVar2 = *(void **)puVar6;
              *(undefined8 *)puVar6 = uVar1;
              if (pvVar2 != (void *)0x0) {
                operator_delete(pvVar2,0x10);
              }
            } while (puVar6 != puVar4);
          }
        }
      }
    }
    else {
      lVar9 = param_5 / 2;
      local_68 = param_2 + lVar9 * 8;
      puVar3 = (unique_ptr *)
               __upper_bound<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,__gnu_cxx::__ops::_Val_comp_iter<Clipper2Lib::LocMinSorter>>
                         (param_1,param_2,local_68);
      lVar5 = (long)puVar3 - (long)param_1 >> 3;
      local_60 = local_60 - lVar5;
      if (local_60 <= lVar9) goto LAB_0010ea77;
LAB_0010e9a4:
      if (param_7 < lVar9) goto LAB_0010ea77;
      puVar4 = puVar3;
      if (lVar9 != 0) {
        puVar4 = __copy_move<true,false,std::random_access_iterator_tag>::
                 __copy_m<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*>
                           (param_2,local_68,param_6);
        lVar8 = (long)param_2 - (long)puVar3;
        if (0 < lVar8) {
          puVar7 = local_68;
          do {
            puVar7 = puVar7 + -8;
            uVar1 = *(undefined8 *)(param_2 + -8);
            param_2 = param_2 + -8;
            *(undefined8 *)param_2 = 0;
            pvVar2 = *(void **)puVar7;
            *(undefined8 *)puVar7 = uVar1;
            if (pvVar2 != (void *)0x0) {
              operator_delete(pvVar2,0x10);
            }
          } while (local_68 + (lVar8 >> 3) * -8 != puVar7);
        }
        puVar4 = __copy_move<true,false,std::random_access_iterator_tag>::
                 __copy_m<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*>
                           (param_6,puVar4,puVar3);
      }
    }
    param_5 = param_5 - lVar9;
    __merge_adaptive_resize<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,long,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>
              (param_1,puVar3,puVar4,lVar5,lVar9,param_6,param_7);
    param_2 = local_68;
    param_1 = puVar4;
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void 
   std::__stable_sort_adaptive_resize<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >, std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >,
   __gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >, std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>) */

void std::
     __stable_sort_adaptive_resize<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,long,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>
               (long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = ((param_2 - param_1 >> 3) + 1) / 2;
  lVar2 = lVar3 * 8;
  lVar1 = param_1 + lVar2;
  if (param_4 < lVar3) {
    __stable_sort_adaptive_resize<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,long,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>
              (param_1,lVar1,param_3);
    __stable_sort_adaptive_resize<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,long,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>
              (lVar1,param_2,param_3,param_4);
    __merge_adaptive_resize<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,long,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>
              (param_1,lVar1,param_2,lVar2 >> 3,param_2 - lVar1 >> 3,param_3,param_4);
    return;
  }
  __stable_sort_adaptive<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::LocMinSorter>>
            (param_1,lVar1,param_2,param_3);
  return;
}



/* Clipper2Lib::HorzSegment* std::__copy_move<true, true,
   std::random_access_iterator_tag>::__copy_m<Clipper2Lib::HorzSegment,
   Clipper2Lib::HorzSegment>(Clipper2Lib::HorzSegment*, Clipper2Lib::HorzSegment*,
   Clipper2Lib::HorzSegment*) */

HorzSegment *
std::__copy_move<true,true,std::random_access_iterator_tag>::
__copy_m<Clipper2Lib::HorzSegment,Clipper2Lib::HorzSegment>
          (HorzSegment *param_1,HorzSegment *param_2,HorzSegment *param_3)

{
  undefined8 uVar1;
  size_t __n;
  
  __n = (long)param_2 - (long)param_1;
  if ((long)__n < 0x19) {
    if (__n == 0x18) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)param_3 = *(undefined8 *)param_1;
      *(undefined8 *)(param_3 + 8) = uVar1;
      param_3[0x10] = param_1[0x10];
    }
  }
  else {
    param_3 = (HorzSegment *)memmove(param_3,param_1,__n);
  }
  return param_3 + __n;
}



/* Clipper2Lib::HorzSegment* std::__copy_move_backward<true, true,
   std::random_access_iterator_tag>::__copy_move_b<Clipper2Lib::HorzSegment,
   Clipper2Lib::HorzSegment>(Clipper2Lib::HorzSegment*, Clipper2Lib::HorzSegment*,
   Clipper2Lib::HorzSegment*) */

HorzSegment *
std::__copy_move_backward<true,true,std::random_access_iterator_tag>::
__copy_move_b<Clipper2Lib::HorzSegment,Clipper2Lib::HorzSegment>
          (HorzSegment *param_1,HorzSegment *param_2,HorzSegment *param_3)

{
  undefined8 uVar1;
  HorzSegment *pHVar2;
  size_t __n;
  
  __n = (long)param_2 - (long)param_1;
  if (0x18 < (long)__n) {
    pHVar2 = (HorzSegment *)memmove(param_3 + -__n,param_1,__n);
    return pHVar2;
  }
  if (__n == 0x18) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_3 + -0x18) = *(undefined8 *)param_1;
    *(undefined8 *)(param_3 + -0x10) = uVar1;
    param_3[-8] = param_1[0x10];
  }
  return param_3 + -__n;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_adaptive<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,
   std::vector<Clipper2Lib::HorzSegment, std::allocator<Clipper2Lib::HorzSegment> > >, long,
   Clipper2Lib::HorzSegment*, __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>
   >(__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >,
   __gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >,
   __gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >, long, long, Clipper2Lib::HorzSegment*,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>) */

void std::
     __merge_adaptive<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,long,Clipper2Lib::HorzSegment*,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
               (HorzSegment *param_1,HorzSegment *param_2,HorzSegment *param_3,long param_4,
               long param_5,HorzSegment *param_6)

{
  undefined8 uVar1;
  size_t sVar2;
  HorzSegment *pHVar3;
  HorzSegment *pHVar4;
  HorzSegment *__dest;
  
  if (param_5 < param_4) {
    sVar2 = (long)param_3 - (long)param_2;
    if ((long)sVar2 < 0x19) {
      if (sVar2 == 0x18) {
        uVar1 = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)param_6 = *(undefined8 *)param_2;
        *(undefined8 *)(param_6 + 8) = uVar1;
        param_6[0x10] = param_2[0x10];
      }
    }
    else {
      param_6 = (HorzSegment *)memmove(param_6,param_2,sVar2);
    }
    pHVar3 = param_6 + sVar2;
    if (param_2 == param_1) {
      __copy_move_backward<true,true,std::random_access_iterator_tag>::
      __copy_move_b<Clipper2Lib::HorzSegment,Clipper2Lib::HorzSegment>(param_6,pHVar3,param_3);
      return;
    }
    if (param_6 != pHVar3) {
      param_2 = param_2 + -0x18;
      pHVar3 = pHVar3 + -0x18;
      param_3 = param_3 + -0x18;
      do {
        if ((*(long *)(pHVar3 + 8) == 0) ||
           ((*(long *)(param_2 + 8) != 0 && (**(long **)param_2 <= **(long **)pHVar3)))) {
          uVar1 = *(undefined8 *)(pHVar3 + 8);
          *(undefined8 *)param_3 = *(undefined8 *)pHVar3;
          *(undefined8 *)(param_3 + 8) = uVar1;
          param_3[0x10] = pHVar3[0x10];
          if (param_6 == pHVar3) {
            return;
          }
          pHVar3 = pHVar3 + -0x18;
        }
        else {
          uVar1 = *(undefined8 *)(param_2 + 8);
          *(undefined8 *)param_3 = *(undefined8 *)param_2;
          *(undefined8 *)(param_3 + 8) = uVar1;
          param_3[0x10] = param_2[0x10];
          if (param_2 == param_1) {
            pHVar3 = pHVar3 + (0x18 - (long)param_6);
            if (0x18 < (long)pHVar3) {
              memmove(param_3 + -(long)pHVar3,param_6,(size_t)pHVar3);
              return;
            }
            if (pHVar3 != (HorzSegment *)0x18) {
              return;
            }
            uVar1 = *(undefined8 *)(param_6 + 8);
            *(undefined8 *)(param_3 + -0x18) = *(undefined8 *)param_6;
            *(undefined8 *)(param_3 + -0x10) = uVar1;
            param_3[-8] = param_6[0x10];
            return;
          }
          param_2 = param_2 + -0x18;
        }
        param_3 = param_3 + -0x18;
      } while( true );
    }
  }
  else {
    sVar2 = (long)param_2 - (long)param_1;
    if ((long)sVar2 < 0x19) {
      if (sVar2 == 0x18) {
        uVar1 = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)param_6 = *(undefined8 *)param_1;
        *(undefined8 *)(param_6 + 8) = uVar1;
        param_6[0x10] = param_1[0x10];
      }
    }
    else {
      param_6 = (HorzSegment *)memmove(param_6,param_1,sVar2);
    }
    pHVar3 = param_6 + sVar2;
    while (__dest = param_1, param_6 != pHVar3) {
      while( true ) {
        if (param_2 == param_3) {
          if (pHVar3 == param_6) {
            return;
          }
          sVar2 = (long)pHVar3 - (long)param_6;
          if ((long)sVar2 < 0x19) {
            if (sVar2 != 0x18) {
              return;
            }
            uVar1 = *(undefined8 *)(param_6 + 8);
            *(undefined8 *)__dest = *(undefined8 *)param_6;
            *(undefined8 *)(__dest + 8) = uVar1;
            __dest[0x10] = param_6[0x10];
            return;
          }
          memmove(__dest,param_6,sVar2);
          return;
        }
        if ((*(long *)(param_2 + 8) != 0) &&
           ((*(long *)(param_6 + 8) == 0 || (**(long **)param_2 < **(long **)param_6)))) break;
        uVar1 = *(undefined8 *)(param_6 + 8);
        pHVar4 = param_6 + 0x18;
        *(undefined8 *)__dest = *(undefined8 *)param_6;
        *(undefined8 *)(__dest + 8) = uVar1;
        __dest[0x10] = param_6[0x10];
        param_6 = pHVar4;
        __dest = __dest + 0x18;
        if (pHVar4 == pHVar3) {
          return;
        }
      }
      uVar1 = *(undefined8 *)(param_2 + 8);
      param_1 = __dest + 0x18;
      *(undefined8 *)__dest = *(undefined8 *)param_2;
      *(undefined8 *)(__dest + 8) = uVar1;
      __dest[0x10] = param_2[0x10];
      param_2 = param_2 + 0x18;
    }
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__stable_sort_adaptive<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,
   std::vector<Clipper2Lib::HorzSegment, std::allocator<Clipper2Lib::HorzSegment> > >,
   Clipper2Lib::HorzSegment*, __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>
   >(__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >,
   __gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >,
   __gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >, Clipper2Lib::HorzSegment*,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>) */

void std::
     __stable_sort_adaptive<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,Clipper2Lib::HorzSegment*,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
               (long param_1,long param_2,long param_3,undefined8 param_4)

{
  __merge_sort_with_buffer<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,Clipper2Lib::HorzSegment*,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
            (param_1,param_2,param_4);
  __merge_sort_with_buffer<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,Clipper2Lib::HorzSegment*,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
            (param_2,param_3,param_4);
  __merge_adaptive<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,long,Clipper2Lib::HorzSegment*,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
            (param_1,param_2,param_3,(param_2 - param_1 >> 3) * -0x5555555555555555,
             (param_3 - param_2 >> 3) * -0x5555555555555555,param_4);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_adaptive_resize<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,
   std::vector<Clipper2Lib::HorzSegment, std::allocator<Clipper2Lib::HorzSegment> > >, long,
   Clipper2Lib::HorzSegment*, __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>
   >(__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >,
   __gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >,
   __gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >, long, long, Clipper2Lib::HorzSegment*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>) */

void std::
     __merge_adaptive_resize<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,long,Clipper2Lib::HorzSegment*,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
               (HorzSegment *param_1,HorzSegment *param_2,undefined8 param_3,long param_4,
               long param_5,HorzSegment *param_6,long param_7)

{
  undefined8 uVar1;
  HorzSegment *__src;
  HorzSegment *pHVar2;
  long lVar3;
  long lVar4;
  size_t __n;
  long lVar5;
  HorzSegment *local_58;
  
  do {
    lVar4 = param_5;
    if (param_4 <= param_5) {
      lVar4 = param_4;
    }
    if (lVar4 <= param_7) {
      __merge_adaptive<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,long,Clipper2Lib::HorzSegment*,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
                ();
      return;
    }
    if (param_5 < param_4) {
      lVar4 = param_4 / 2;
      __src = param_1 + ((param_4 - (param_4 >> 0x3f) & 0xfffffffffffffffeU) + lVar4) * 8;
      local_58 = (HorzSegment *)
                 __lower_bound<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,Clipper2Lib::HorzSegment,__gnu_cxx::__ops::_Iter_comp_val<Clipper2Lib::HorzSegSorter>>
                           (param_2,param_3,__src);
      param_4 = param_4 - lVar4;
      lVar5 = ((long)local_58 - (long)param_2 >> 3) * -0x5555555555555555;
      if (lVar5 < param_4) goto LAB_0010f137;
LAB_0010f21b:
      if (param_7 < param_4) {
        pHVar2 = (HorzSegment *)
                 _V2::
                 __rotate<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>>
                           (__src,param_2,local_58);
      }
      else {
        pHVar2 = local_58;
        if (param_4 != 0) {
          pHVar2 = __copy_move<true,true,std::random_access_iterator_tag>::
                   __copy_m<Clipper2Lib::HorzSegment,Clipper2Lib::HorzSegment>
                             (__src,param_2,param_6);
          __copy_move<true,true,std::random_access_iterator_tag>::
          __copy_m<Clipper2Lib::HorzSegment,Clipper2Lib::HorzSegment>(param_2,local_58,__src);
          pHVar2 = __copy_move_backward<true,true,std::random_access_iterator_tag>::
                   __copy_move_b<Clipper2Lib::HorzSegment,Clipper2Lib::HorzSegment>
                             (param_6,pHVar2,local_58);
        }
      }
    }
    else {
      lVar5 = param_5 / 2;
      local_58 = param_2 + ((param_5 - (param_5 >> 0x3f) & 0xfffffffffffffffeU) + lVar5) * 8;
      __src = (HorzSegment *)
              __upper_bound<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,Clipper2Lib::HorzSegment,__gnu_cxx::__ops::_Val_comp_iter<Clipper2Lib::HorzSegSorter>>
                        (param_1,param_2,local_58);
      lVar3 = (long)__src - (long)param_1 >> 3;
      lVar4 = lVar3 * -0x5555555555555555;
      param_4 = param_4 + lVar3 * 0x5555555555555555;
      if (param_4 <= lVar5) goto LAB_0010f21b;
LAB_0010f137:
      if (param_7 < lVar5) goto LAB_0010f21b;
      pHVar2 = __src;
      if (lVar5 != 0) {
        pHVar2 = __copy_move<true,true,std::random_access_iterator_tag>::
                 __copy_m<Clipper2Lib::HorzSegment,Clipper2Lib::HorzSegment>
                           (param_2,local_58,param_6);
        __n = (long)param_2 - (long)__src;
        if ((long)__n < 0x19) {
          if (__n == 0x18) {
            uVar1 = *(undefined8 *)(__src + 8);
            *(undefined8 *)(local_58 + -0x18) = *(undefined8 *)__src;
            *(undefined8 *)(local_58 + -0x10) = uVar1;
            local_58[-8] = __src[0x10];
          }
        }
        else {
          memmove(local_58 + -__n,__src,__n);
        }
        pHVar2 = __copy_move<true,true,std::random_access_iterator_tag>::
                 __copy_m<Clipper2Lib::HorzSegment,Clipper2Lib::HorzSegment>(param_6,pHVar2,__src);
      }
    }
    __merge_adaptive_resize<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,long,Clipper2Lib::HorzSegment*,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
              (param_1,__src,pHVar2,lVar4,lVar5,param_6,param_7);
    param_5 = param_5 - lVar5;
    param_2 = local_58;
    param_1 = pHVar2;
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__stable_sort_adaptive_resize<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,
   std::vector<Clipper2Lib::HorzSegment, std::allocator<Clipper2Lib::HorzSegment> > >,
   Clipper2Lib::HorzSegment*, long, __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>
   >(__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >,
   __gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*, std::vector<Clipper2Lib::HorzSegment,
   std::allocator<Clipper2Lib::HorzSegment> > >, Clipper2Lib::HorzSegment*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>) */

void std::
     __stable_sort_adaptive_resize<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,Clipper2Lib::HorzSegment*,long,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
               (long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (param_2 - param_1 >> 3) * -0x5555555555555555 + 1;
  lVar3 = ((lVar2 - (lVar2 >> 0x3f) & 0xfffffffffffffffeU) + lVar2 / 2) * 8;
  lVar1 = param_1 + lVar3;
  if (param_4 < lVar2 / 2) {
    __stable_sort_adaptive_resize<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,Clipper2Lib::HorzSegment*,long,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
              (param_1,lVar1,param_3);
    __stable_sort_adaptive_resize<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,Clipper2Lib::HorzSegment*,long,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
              (lVar1,param_2,param_3,param_4);
    __merge_adaptive_resize<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,long,Clipper2Lib::HorzSegment*,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
              (param_1,lVar1,param_2,(lVar3 >> 3) * -0x5555555555555555,
               (param_2 - lVar1 >> 3) * -0x5555555555555555,param_3,param_4);
    return;
  }
  __stable_sort_adaptive<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,Clipper2Lib::HorzSegment*,__gnu_cxx::__ops::_Iter_comp_iter<Clipper2Lib::HorzSegSorter>>
            (param_1,lVar1,param_2,param_3);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Clipper2Lib::GetMaximaPair(Clipper2Lib::Active const&) */

void Clipper2Lib::_GLOBAL__sub_I_GetMaximaPair(void)

{
  invalid_rect._0_8_ = __LC16;
  invalid_rect._8_8_ = _UNK_0010f6c8;
  invalid_rect._16_8_ = __LC17;
  invalid_rect._24_8_ = _UNK_0010f6d8;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* std::_Temporary_buffer<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,
   std::vector<Clipper2Lib::HorzSegment, std::allocator<Clipper2Lib::HorzSegment> > >,
   Clipper2Lib::HorzSegment>::_Temporary_buffer(__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,
   std::vector<Clipper2Lib::HorzSegment, std::allocator<Clipper2Lib::HorzSegment> > >, long) */

void std::
     _Temporary_buffer<__gnu_cxx::__normal_iterator<Clipper2Lib::HorzSegment*,std::vector<Clipper2Lib::HorzSegment,std::allocator<Clipper2Lib::HorzSegment>>>,Clipper2Lib::HorzSegment>
     ::_Temporary_buffer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::_Temporary_buffer<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >, std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >
   >::_Temporary_buffer(__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >*,
   std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> >,
   std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,
   std::default_delete<Clipper2Lib::LocalMinima> > > > >, long) */

void std::
     _Temporary_buffer<__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>*,std::vector<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>,std::allocator<std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>>>,std::unique_ptr<Clipper2Lib::LocalMinima,std::default_delete<Clipper2Lib::LocalMinima>>>
     ::_Temporary_buffer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::unique_ptr<Clipper2Lib::PolyPathD, std::default_delete<Clipper2Lib::PolyPathD>
   >::~unique_ptr() */

void __thiscall
std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>::~unique_ptr
          (unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Clipper2Lib::PolyPathD::~PolyPathD() */

void __thiscall Clipper2Lib::PolyPathD::~PolyPathD(PolyPathD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Clipper2Lib::PolyPath64::~PolyPath64() */

void __thiscall Clipper2Lib::PolyPath64::~PolyPath64(PolyPath64 *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
