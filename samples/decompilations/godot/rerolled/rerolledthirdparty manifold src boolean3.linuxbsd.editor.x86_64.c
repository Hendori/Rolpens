/* (anonymous namespace)::Interpolate(linalg::vec<double, 3>, linalg::vec<double, 3>, double) */undefined1[16](anonymous_namespace) {
   undefined1 auVar1[16];
   ulong uVar2;
   double __y;
   double __x;
   double dVar3;
   double dVar4;
   double __y_00;
   double in_stack_00000008;
   double in_stack_00000010;
   double in_stack_00000018;
   double in_stack_00000020;
   double in_stack_00000028;
   double in_stack_00000030;
   undefined8 local_28;
   undefined8 uStack_20;
   dVar3 = (double)( ( ulong )(param_1 - in_stack_00000008) & _LC0 );
   dVar4 = (double)( ( ulong )(param_1 - in_stack_00000020) & _LC0 );
   uVar2 = -(ulong)(dVar4 <= dVar3);
   __x = (double)( ( ulong )(param_1 - in_stack_00000020) & uVar2 | ~uVar2 & ( ulong )(param_1 - in_stack_00000008) ) / ( in_stack_00000020 - in_stack_00000008 );
   if (( ( _LC1 < (double)( (ulong)__x & _LC0 ) ) || ( __y = in_stack_00000028 - in_stack_00000010 ),_LC1 < (double)( (ulong)__y & _LC0 ) )) ( __y_00 = in_stack_00000030 - in_stack_00000018 ),_LC1<(double)(_LC0 & (ulong)__y_00))) {
    local_28 = in_stack_00000010;
    uStack_20 = in_stack_00000018;
  }else{if (dVar4 <= dVar3) {
      local_28 = fma(__x,__y,in_stack_00000028);
      in_stack_00000018 = in_stack_00000030;
    }
    else {
      local_28 = fma(__x,__y,in_stack_00000010);
    }uStack_20 = fma(__x, __y_00, in_stack_00000018);}._8_8_ = uStack_20;
   auVar1._0_8_ = local_28;
   return auVar1;
}
/* (anonymous namespace)::monobound_quaternary_search(manifold::VecView<long const>, long) [clone
   .isra.0] */long monobound_quaternary_search(_anonymous_namespace_ *this, ulong param_2, long param_3) {
   long lVar1;
   long lVar2;
   long lVar3;
   ulong uVar4;
   lVar3 = -1;
   if (param_2 != 0) {
      lVar2 = 0;
      while (0xffff < param_2) {
         while (true) {
            uVar4 = param_2 >> 2;
            lVar3 = uVar4 * 2 + lVar2;
            param_2 = param_2 + uVar4 * -3;
            if (*(long*)( this + lVar3 * 8 ) <= param_3) break;
            if (*(long*)( this + ( lVar3 - uVar4 ) * 8 ) <= param_3) {
               lVar2 = lVar3 - uVar4;
            }

            if (param_2 < 0x10000) goto LAB_001001fd;
         }
;
         lVar2 = uVar4 + lVar3;
         if (param_3 < *(long*)( this + ( uVar4 + lVar3 ) * 8 )) {
            lVar2 = lVar3;
         }

      }
;
      LAB_001001fd:for (; 3 < param_2; param_2 = param_2 - ( param_2 >> 1 )) {
         lVar3 = ( param_2 >> 1 ) + lVar2;
         if (*(long*)( this + lVar3 * 8 ) <= param_3) {
            lVar2 = lVar3;
         }

      }

      lVar1 = lVar2 + -1 + param_2;
      do {
         lVar3 = lVar1;
         if (lVar2 + -1 == lVar3) {
            return -1;
         }

         lVar1 = lVar3 + -1;
      }
 while ( param_3 != *(long*)( this + lVar3 * 8 ) );
   }

   return lVar3;
}
/* (anonymous namespace)::Shadow01(int, int, manifold::VecView<linalg::vec<double, 3> const>,
   manifold::VecView<linalg::vec<double, 3> const>, manifold::VecView<manifold::Halfedge const>,
   double, manifold::VecView<linalg::vec<double, 3> const>, bool) [clone .isra.0] */_anonymous_namespace_ * __thiscall
(anonymous_namespace)::Shadow01
          (double param_1_00,_anonymous_namespace_ *this,int param_1,int param_2,long param_5,
          long param_6,long param_7,long param_8,char param_9){
   int *piVar1;
   double *pdVar2;
   double *pdVar3;
   double *pdVar4;
   double *pdVar5;
   double dVar6;
   double dVar7;
   double dVar8;
   undefined1 auVar9[16];
   bool bVar10;
   long lVar11;
   double *pdVar12;
   long lVar13;
   bool bVar14;
   int iVar15;
   double dVar17;
   double dVar18;
   double dVar19;
   undefined1 auVar20[16];
   double dVar16;
   auVar20._8_8_ = _LC3;
   auVar20._0_8_ = _LC3;
   auVar9._8_8_ = _LC3;
   auVar9._0_8_ = _LC3;
   piVar1 = (int*)( param_7 + (long)param_2 * 0xc );
   pdVar2 = (double*)( param_5 + (long)param_1 * 0x18 );
   dVar6 = *pdVar2;
   lVar11 = (long)*piVar1 * 0x18;
   lVar13 = (long)piVar1[1] * 0x18;
   pdVar3 = (double*)( param_6 + lVar11 );
   pdVar4 = (double*)( param_6 + lVar13 );
   dVar7 = *pdVar3;
   dVar8 = *pdVar4;
   if (param_9 == '\0') {
      pdVar3 = (double*)( param_8 + (long)param_1 * 0x18 );
      dVar17 = *pdVar3 * param_1_00;
      if (dVar6 == dVar8) {
         bVar14 = dVar17 < 0.0;
      }
 else {
         bVar14 = dVar6 < dVar8;
      }

      if (dVar6 == dVar7) {
         bVar10 = dVar17 < 0.0;
      }
 else {
         bVar10 = dVar6 < dVar7;
      }

      iVar15 = (uint)bVar14 - (uint)bVar10;
      if (iVar15 != 0) {
         auVar20 = Interpolate(dVar6);
         if (auVar20._0_8_ == pdVar2[1]) {
            bVar14 = pdVar3[1] * param_1_00 < 0.0;
         }
 else {
            bVar14 = pdVar2[1] < auVar20._0_8_;
         }

         if (!bVar14) {
            iVar15 = 0;
         }

      }

   }
 else {
      pdVar12 = (double*)( lVar11 + param_8 );
      if (dVar6 == dVar7) {
         bVar14 = *pdVar12 * param_1_00 < 0.0;
      }
 else {
         bVar14 = dVar7 < dVar6;
      }

      pdVar5 = (double*)( param_8 + lVar13 );
      if (dVar6 == dVar8) {
         bVar10 = *pdVar5 * param_1_00 < 0.0;
      }
 else {
         bVar10 = dVar8 < dVar6;
      }

      iVar15 = (uint)bVar14 - (uint)bVar10;
      auVar20 = auVar9;
      if (iVar15 != 0) {
         auVar20 = Interpolate(dVar6);
         dVar16 = auVar20._0_8_;
         dVar17 = pdVar2[1];
         dVar19 = pdVar3[2] - pdVar2[2];
         dVar18 = pdVar4[2] - pdVar2[2];
         if (( dVar7 - dVar6 ) * ( dVar7 - dVar6 ) + 0.0 + ( pdVar3[1] - dVar17 ) * ( pdVar3[1] - dVar17 ) + dVar19 * dVar19 < ( dVar8 - dVar6 ) * ( dVar8 - dVar6 ) + 0.0 + ( pdVar4[1] - dVar17 ) * ( pdVar4[1] - dVar17 ) + dVar18 * dVar18) {
            dVar6 = pdVar12[1];
         }
 else {
            dVar6 = pdVar5[1];
         }

         if (!NAN(dVar17) && !NAN(dVar16)) {
            if (dVar17 == dVar16) {
               if (0.0 <= dVar6 * param_1_00) {
                  iVar15 = 0;
               }

               goto LAB_0010056c;
            }

            if (dVar16 <= dVar17 && dVar17 != dVar16) goto LAB_0010056c;
         }

         iVar15 = 0;
      }

   }

   LAB_0010056c:*(int*)this = iVar15;
   *(undefined1(*) [16])( this + 8 ) = auVar20;
   return this;
}
/* (anonymous namespace)::Intersect(linalg::vec<double, 3> const&, linalg::vec<double, 3> const&,
   linalg::vec<double, 3> const&, linalg::vec<double, 3> const&) [clone .isra.0] */vec * (anonymous_namespace)::Intersect(vec *param_1,vec *param_2,vec *param_3,vec *param_4){ulong uVar1;
  double in_XMM0_Qa;
  double dVar2;
  double dVar3;
  double dVar4;
  double in_XMM1_Qa;
  double dVar5;
  double in_XMM2_Qa;
  double in_XMM3_Qa;
  double __x;
  
  dVar4 = *(double *)(param_2 + 8);
  dVar3 = *(double *)(param_3 + 8);
  dVar2 = in_XMM0_Qa - dVar4;
  dVar5 = in_XMM2_Qa - dVar3;
  __x = *(double *)param_3 - *(double *)param_2;
  if ((double)((ulong)dVar5 & _LC0) <= (double)((ulong)dVar2 & _LC0)) {
    dVar2 = dVar5 / (dVar2 - dVar5);
    if (_LC1 < (double)((ulong)dVar2 & _LC0)) {
      dVar2 = 0.0;
    }
    dVar5 = fma(__x,dVar2,*(double *)param_3);
    uVar1 = _LC0;
    *(double *)param_1 = dVar5;
    uVar1 = -(ulong)((double)(uVar1 & (ulong)(in_XMM2_Qa - in_XMM0_Qa)) <=
                    (double)((ulong)(dVar3 - dVar4) & uVar1));
    dVar3 = fma(dVar2,(double)((ulong)(in_XMM2_Qa - in_XMM0_Qa) & uVar1 |
                              ~uVar1 & (ulong)(dVar3 - dVar4)),
                (double)(~uVar1 & (ulong)dVar3 | (ulong)in_XMM2_Qa & uVar1));
    dVar4 = *(double *)(param_3 + 0x10);
    *(double *)(param_1 + 8) = dVar3;
    dVar3 = fma(dVar2,dVar4 - *(double *)(param_2 + 0x10),dVar4);
    dVar4 = in_XMM3_Qa;
  }else{dVar2 = dVar2 / (dVar2 - dVar5);
    if (_LC1 < (double)((ulong)dVar2 & _LC0)) {
      dVar2 = 0.0;
    }
    dVar5 = fma(__x,dVar2,*(double *)param_2);
    *(double *)param_1 = dVar5;
    uVar1 = -(ulong)((double)(_LC0 & (ulong)(in_XMM2_Qa - in_XMM0_Qa)) <=
                    (double)((ulong)(dVar3 - dVar4) & _LC0));
    dVar3 = fma((double)((ulong)(in_XMM2_Qa - in_XMM0_Qa) & uVar1 | ~uVar1 & (ulong)(dVar3 - dVar4))
                ,dVar2,(double)(~uVar1 & (ulong)dVar4 | (ulong)in_XMM0_Qa & uVar1));
    dVar4 = *(double *)(param_2 + 0x10);
    *(double *)(param_1 + 8) = dVar3;
    dVar3 = fma(*(double *)(param_3 + 0x10) - dVar4,dVar2,dVar4);dVar4 = in_XMM1_Qa;} - in_XMM1_Qa,dVar2,dVar4 * (double*)( param_1 + 0x10 ) = dVar3 * (double*)( param_1 + 0x18 ) = dVar4;
  return param_1;} * std::__upper_bound<long*,long,__gnu_cxx::__ops::_Val_less_iter>(long * param_1, long, param_2, long, param_3) = param_2 - (long)param_1 >> 3 ;do {
   lVar2 = lVar1;
   if (lVar1 < 1) {
      return param_1;
   }

   while (true) {
      lVar1 = lVar2 >> 1;
      if (param_3 < param_1[lVar1]) break;
      param_1 = param_1 + lVar1 + 1;
      lVar2 = ( lVar2 - lVar1 ) + -1;
      if (lVar2 < 1) {
         return param_1;
      }

   }
;
}
 while ( true );}/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* long* std::__lower_bound<long*, long, __gnu_cxx::__ops::_Iter_less_val>(long*, long*, long
   const&, __gnu_cxx::__ops::_Iter_less_val) [clone .isra.0] */long *std::__lower_bound<long*,long,__gnu_cxx::__ops::_Iter_less_val>(long *param_1, long param_2, long param_3) {
   long lVar1;
   long lVar2;
   lVar1 = param_2 - (long)param_1 >> 3;
   do {
      lVar2 = lVar1;
      if (lVar1 < 1) {
         return param_1;
      }

      while (true) {
         lVar1 = lVar2 >> 1;
         if (param_3 <= param_1[lVar1]) break;
         param_1 = param_1 + lVar1 + 1;
         lVar2 = ( lVar2 - lVar1 ) + -1;
         if (lVar2 < 1) {
            return param_1;
         }

      }
;
   }
 while ( true );
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* void std::__insertion_sort<long*, __gnu_cxx::__ops::_Iter_less_iter>(long*, long*,
   __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */void std::__insertion_sort<long*,__gnu_cxx::__ops::_Iter_less_iter>(long *param_1, long *param_2) {
   long lVar1;
   long lVar2;
   size_t __n;
   long *plVar3;
   long *plVar4;
   if (param_1 == param_2) {
      return;
   }

   plVar3 = param_1 + 1;
   do {
      if (param_2 == plVar3) {
         return;
      }

      while (true) {
         lVar1 = *plVar3;
         plVar4 = plVar3 + 1;
         if (lVar1 < *param_1) break;
         lVar2 = plVar3[-1];
         while (lVar1 < lVar2) {
            *plVar3 = lVar2;
            lVar2 = plVar3[-2];
            plVar3 = plVar3 + -1;
         }
;
         *plVar3 = lVar1;
         plVar3 = plVar4;
         if (param_2 == plVar4) {
            return;
         }

      }
;
      __n = (long)plVar3 - (long)param_1;
      if ((long)__n < 9) {
         if (__n == 8) {
            *plVar3 = *param_1;
         }

      }
 else {
         memmove((void*)( (long)plVar3 + ( 8 - __n ) ), param_1, __n);
      }

      *param_1 = lVar1;
      plVar3 = plVar4;
   }
 while ( true );
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* long* std::__move_merge<long*, long*, __gnu_cxx::__ops::_Iter_less_iter>(long*, long*, long*,
   long*, long*, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */long *std::__move_merge<long*,long*,__gnu_cxx::__ops::_Iter_less_iter>(long *param_1, long *param_2, long *param_3, long *param_4, long *param_5) {
   long lVar1;
   size_t __n;
   size_t __n_00;
   long *plVar2;
   if (( param_2 != param_1 ) && ( plVar2 = param_4 != param_3 )) {
      do {
         lVar1 = *param_3;
         if (lVar1 < *param_1) {
            param_3 = param_3 + 1;
            *plVar2 = lVar1;
         }
 else {
            *plVar2 = *param_1;
            param_1 = param_1 + 1;
         }

         param_5 = plVar2 + 1;
      }
 while ( ( param_4 != param_3 ) && ( param_5 = plVar2 + 1 ),plVar2 = param_5,param_2 != param_1 );
   }

   __n_00 = (long)param_2 - (long)param_1;
   if ((long)__n_00 < 9) {
      if (__n_00 == 8) {
         *param_5 = *param_1;
      }

   }
 else {
      param_5 = (long*)memmove(param_5, param_1, __n_00);
   }

   __n = (long)param_4 - (long)param_3;
   param_5 = (long*)( (long)param_5 + __n_00 );
   if ((long)__n < 9) {
      if (__n == 8) {
         *param_5 = *param_3;
      }

   }
 else {
      param_5 = (long*)memmove(param_5, param_3, __n);
   }

   return (long*)( (long)param_5 + __n );
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* void std::__merge_sort_loop<long*, long*, long, __gnu_cxx::__ops::_Iter_less_iter>(long*, long*,
   long*, long, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */void std::__merge_sort_loop<long*,long*,long,__gnu_cxx::__ops::_Iter_less_iter>(long param_1, long param_2, long *param_3, long param_4) {
   long lVar1;
   long lVar2;
   lVar1 = param_2 - param_1 >> 3;
   if (param_4 * 2 <= lVar1) {
      lVar2 = param_1;
      do {
         param_1 = lVar2 + param_4 * 0x10;
         lVar1 = param_1 + param_4 * -8;
         param_3 = __move_merge<long*,long*,__gnu_cxx::__ops::_Iter_less_iter>(lVar2, lVar1, lVar1, param_1, param_3);
         lVar1 = param_2 - param_1 >> 3;
         lVar2 = param_1;
      }
 while ( param_4 * 2 <= lVar1 );
   }

   if (lVar1 < param_4) {
      param_4 = lVar1;
   }

   lVar1 = param_1 + param_4 * 8;
   __move_merge<long*,long*,__gnu_cxx::__ops::_Iter_less_iter>(param_1, lVar1, lVar1, param_2, param_3);
   return;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* void std::__merge_sort_with_buffer<long*, long*, __gnu_cxx::__ops::_Iter_less_iter>(long*, long*,
   long*, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */void std::__merge_sort_with_buffer<long*,long*,__gnu_cxx::__ops::_Iter_less_iter>(long param_1, long param_2, long param_3) {
   long lVar1;
   long lVar2;
   long lVar3;
   lVar1 = param_2 - param_1;
   lVar3 = param_1;
   if (lVar1 < 0x31) {
      __insertion_sort<long*,__gnu_cxx::__ops::_Iter_less_iter>();
      return;
   }

   do {
      lVar2 = lVar3 + 0x38;
      __insertion_sort<long*,__gnu_cxx::__ops::_Iter_less_iter>(lVar3, lVar2);
      lVar3 = lVar2;
   }
 while ( 0x30 < param_2 - lVar2 );
   __insertion_sort<long*,__gnu_cxx::__ops::_Iter_less_iter>(lVar2, param_2);
   if (0x38 < lVar1) {
      lVar3 = 7;
      do {
         __merge_sort_loop<long*,long*,long,__gnu_cxx::__ops::_Iter_less_iter>(param_1, param_2, param_3, lVar3);
         lVar2 = lVar3 * 2;
         lVar3 = lVar3 * 4;
         __merge_sort_loop<long*,long*,long,__gnu_cxx::__ops::_Iter_less_iter>(param_3, param_3 + lVar1, param_1, lVar2);
      }
 while ( lVar3<lVar1> > 3 );
   }

   return;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* void std::__merge_adaptive<long*, long, long*, __gnu_cxx::__ops::_Iter_less_iter>(long*, long*,
   long*, long, long, long*, __gnu_cxx::__ops::_Iter_less_iter) [clone .part.0] */void std::__merge_adaptive<long*,long,long*,__gnu_cxx::__ops::_Iter_less_iter>(long *param_1, long *param_2, long *param_3, long *param_4) {
   long *plVar1;
   long lVar2;
   long lVar3;
   size_t sVar4;
   sVar4 = (long)param_2 - (long)param_1;
   if ((long)sVar4 < 9) {
      if (sVar4 == 8) {
         *param_4 = *param_1;
      }

   }
 else {
      param_4 = (long*)memmove(param_4, param_1, sVar4);
   }

   plVar1 = (long*)( (long)param_4 + sVar4 );
   if (( param_2 != param_3 ) && ( param_4 != plVar1 )) {
      do {
         lVar2 = *param_2;
         lVar3 = *param_4;
         if (lVar2 < lVar3) {
            param_2 = param_2 + 1;
            *param_1 = lVar2;
         }
 else {
            param_4 = param_4 + 1;
            *param_1 = lVar3;
         }

         if (plVar1 == param_4) {
            return;
         }

         param_1 = param_1 + 1;
      }
 while ( param_3 != param_2 );
   }

   if (plVar1 != param_4) {
      sVar4 = (long)plVar1 - (long)param_4;
      if (8 < (long)sVar4) {
         memmove(param_1, param_4, sVar4);
         return;
      }

      if (sVar4 == 8) {
         *param_1 = *param_4;
      }

   }

   return;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* void std::__move_merge_adaptive_backward<long*, long*, long*,
   __gnu_cxx::__ops::_Iter_less_iter>(long*, long*, long*, long*, long*,
   __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */void std::__move_merge_adaptive_backward<long*,long*,long*,__gnu_cxx::__ops::_Iter_less_iter>(long *param_1, long *param_2, long *param_3, long *param_4, long param_5) {
   long lVar1;
   size_t sVar2;
   if (param_1 == param_2) {
      sVar2 = (long)param_4 - (long)param_3;
      if (8 < (long)sVar2) {
         memmove((void*)( param_5 - sVar2 ), param_3, sVar2);
         return;
      }

      if (sVar2 == 8) {
         *(long*)( param_5 + -8 ) = *param_3;
         return;
      }

   }
 else if (param_3 != param_4) {
      param_2 = param_2 + -1;
      param_4 = param_4 + -1;
      while (true) {
         while (true) {
            lVar1 = param_5 + -8;
            if (*param_4 < *param_2) break;
            *(long*)( param_5 + -8 ) = *param_4;
            if (param_3 == param_4) {
               return;
            }

            param_4 = param_4 + -1;
            param_5 = lVar1;
         }
;
         *(long*)( param_5 + -8 ) = *param_2;
         if (param_1 == param_2) break;
         param_2 = param_2 + -1;
         param_5 = lVar1;
      }
;
      sVar2 = (long)param_4 + ( 8 - (long)param_3 );
      if (8 < (long)sVar2) {
         memmove((void*)( lVar1 - sVar2 ), param_3, sVar2);
         return;
      }

      if (sVar2 == 8) {
         *(long*)( param_5 + -0x10 ) = *param_3;
         return;
      }

   }

   return;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* void std::__stable_sort_adaptive<long*, long*, __gnu_cxx::__ops::_Iter_less_iter>(long*, long*,
   long*, long*, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */void std::__stable_sort_adaptive<long*,long*,__gnu_cxx::__ops::_Iter_less_iter>(long param_1, undefined8 *param_2, long param_3, undefined8 *param_4) {
   size_t __n;
   __n = param_3 - (long)param_2;
   __merge_sort_with_buffer<long*,long*,__gnu_cxx::__ops::_Iter_less_iter>(param_1, param_2, param_4);
   __merge_sort_with_buffer<long*,long*,__gnu_cxx::__ops::_Iter_less_iter>(param_2, param_3, param_4);
   if ((long)param_2 - param_1 <= (long)__n) {
      __merge_adaptive<long*,long,long*,__gnu_cxx::__ops::_Iter_less_iter>(param_1, param_2, param_3, param_4);
      return;
   }

   if ((long)__n < 9) {
      if (__n == 8) {
         *param_4 = *param_2;
      }

   }
 else {
      memmove(param_4, param_2, __n);
   }

   __move_merge_adaptive_backward<long*,long*,long*,__gnu_cxx::__ops::_Iter_less_iter>(param_1, param_2, param_4, (long)param_4 + __n, param_3);
   return;
}
/* long* std::_V2::__rotate<long*>(long*, long*, long*, std::random_access_iterator_tag) [clone
   .isra.0] */long *std::_V2::__rotate<long*>(long *param_1, long *param_2, long *param_3) {
   size_t sVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   long *plVar5;
   long *plVar6;
   long *plVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   if (param_1 == param_2) {
      return param_3;
   }

   if (param_2 == param_3) {
      return param_1;
   }

   lVar2 = (long)param_3 - (long)param_1 >> 3;
   lVar9 = (long)param_2 - (long)param_1 >> 3;
   plVar4 = param_2;
   plVar6 = param_1;
   if (lVar9 == lVar2 - lVar9) {
      do {
         lVar9 = *param_1;
         plVar6 = param_1 + 1;
         *param_1 = *plVar4;
         *plVar4 = lVar9;
         plVar4 = plVar4 + 1;
         param_1 = plVar6;
      }
 while ( param_2 != plVar6 );
      return param_2;
   }

   while (true) {
      lVar10 = lVar2 - lVar9;
      lVar8 = lVar2;
      lVar3 = lVar2;
      lVar2 = lVar10;
      if (lVar9 < lVar10) {
         do {
            lVar3 = lVar9;
            if (lVar3 == 1) {
               lVar9 = *plVar6;
               sVar1 = lVar8 * 8 - 8;
               if ((long)sVar1 < 9) {
                  if (sVar1 == 8) {
                     *plVar6 = plVar6[1];
                  }

               }
 else {
                  memmove(plVar6, plVar6 + 1, sVar1);
               }

               plVar6[lVar8 + -1] = lVar9;
               goto LAB_00100fc4;
            }

            if (0 < lVar10) {
               lVar9 = 0;
               do {
                  lVar2 = plVar6[lVar9];
                  plVar6[lVar9] = plVar6[lVar3 + lVar9];
                  plVar6[lVar3 + lVar9] = lVar2;
                  lVar9 = lVar9 + 1;
               }
 while ( lVar10 != lVar9 );
               plVar6 = plVar6 + lVar10;
            }

            if (lVar8 % lVar3 == 0) goto LAB_00100fc4;
            lVar9 = lVar3 - lVar8 % lVar3;
            lVar10 = lVar3 - lVar9;
            lVar8 = lVar3;
            lVar2 = lVar10;
         }
 while ( lVar9 < lVar10 );
      }

      plVar4 = plVar6 + lVar3;
      if (lVar2 == 1) break;
      plVar5 = plVar6 + lVar9;
      plVar7 = plVar5;
      if (0 < lVar9) {
         lVar8 = 0;
         do {
            lVar10 = plVar5[-1];
            plVar7 = plVar4 + -1;
            lVar8 = lVar8 + 1;
            plVar5 = plVar5 + -1;
            plVar4 = plVar4 + -1;
            *plVar5 = *plVar7;
            *plVar4 = lVar10;
            plVar7 = plVar6;
         }
 while ( lVar9 != lVar8 );
      }

      lVar9 = lVar3 % lVar2;
      plVar6 = plVar7;
      if (lVar9 == 0) {
         LAB_00100fc4:return (long*)( (long)param_1 + ( (long)param_3 - (long)param_2 ) );
      }

   }
;
   sVar1 = lVar3 * 8 - 8;
   lVar9 = plVar6[lVar3 + -1];
   if ((long)sVar1 < 9) {
      if (sVar1 == 8) {
         plVar4[-1] = *plVar6;
      }

   }
 else {
      memmove(plVar6 + 1, plVar6, sVar1);
   }

   *plVar6 = lVar9;
   goto LAB_00100fc4;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* void std::__merge_without_buffer<long*, long, __gnu_cxx::__ops::_Iter_less_iter>(long*, long*,
   long*, long, long, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */void std::__merge_without_buffer<long*,long,__gnu_cxx::__ops::_Iter_less_iter>(long *param_1, long *param_2, undefined8 param_3, long param_4, long param_5) {
   long *plVar1;
   long *plVar2;
   long *plVar3;
   long lVar4;
   long lVar5;
   long *plVar6;
   if (( param_5 != 0 ) && ( param_4 != 0 )) {
      if (param_4 + param_5 != 2) {
         if (param_4 <= param_5) goto LAB_001010f0;
         do {
            lVar4 = param_4 / 2;
            plVar2 = param_1 + lVar4;
            plVar1 = __lower_bound<long*,long,__gnu_cxx::__ops::_Iter_less_val>(param_2, param_3, *plVar2);
            lVar5 = (long)plVar1 - (long)param_2 >> 3;
            plVar3 = param_2;
            plVar6 = param_1;
            param_2 = plVar1;
            while (true) {
               param_1 = _V2::__rotate<long*>(plVar2, plVar3, param_2);
               param_5 = param_5 - lVar5;
               __merge_without_buffer<long*,long,__gnu_cxx::__ops::_Iter_less_iter>(plVar6, plVar2, param_1, lVar4, lVar5);
               param_4 = param_4 - lVar4;
               if (param_4 == 0) {
                  return;
               }

               if (param_5 == 0) {
                  return;
               }

               if (param_5 + param_4 == 2) goto LAB_0010112e;
               if (param_5 < param_4) break;
               LAB_001010f0:lVar5 = param_5 / 2;
               plVar1 = param_2 + lVar5;
               plVar2 = __upper_bound<long*,long,__gnu_cxx::__ops::_Val_less_iter>(param_1, param_2, *plVar1);
               lVar4 = (long)plVar2 - (long)param_1 >> 3;
               plVar3 = param_2;
               plVar6 = param_1;
               param_2 = plVar1;
            }
;
         }
 while ( true );
      }

      LAB_0010112e:lVar4 = *param_1;
      if (*param_2 < lVar4) {
         *param_1 = *param_2;
         *param_2 = lVar4;
      }

   }

   return;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* void std::__inplace_stable_sort<long*, __gnu_cxx::__ops::_Iter_less_iter>(long*, long*,
   __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */void std::__inplace_stable_sort<long*,__gnu_cxx::__ops::_Iter_less_iter>(long param_1, long param_2) {
   long lVar1;
   long lVar2;
   if (0x70 < param_2 - param_1) {
      lVar2 = ( param_2 - param_1 >> 4 ) * 8;
      lVar1 = param_1 + lVar2;
      __inplace_stable_sort<long*,__gnu_cxx::__ops::_Iter_less_iter>(param_1, lVar1);
      __inplace_stable_sort<long*,__gnu_cxx::__ops::_Iter_less_iter>(lVar1, param_2);
      __merge_without_buffer<long*,long,__gnu_cxx::__ops::_Iter_less_iter>(param_1, lVar1, param_2, lVar2 >> 3, param_2 - lVar1 >> 3);
      return;
   }

   __insertion_sort<long*,__gnu_cxx::__ops::_Iter_less_iter>();
   return;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* void std::__merge_adaptive_resize<long*, long, long*, __gnu_cxx::__ops::_Iter_less_iter>(long*,
   long*, long*, long, long, long*, long, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */void std::__merge_adaptive_resize<long*,long,long*,__gnu_cxx::__ops::_Iter_less_iter>(long *param_1, long *param_2, long param_3, long param_4, long param_5, long *param_6, long param_7) {
   long *plVar1;
   long *__src;
   long lVar2;
   long *plVar3;
   size_t sVar4;
   size_t sVar5;
   long lVar6;
   long lVar7;
   long *local_70;
   lVar2 = param_5;
   if (param_4 <= param_5) {
      lVar2 = param_4;
   }

   if (lVar2 <= param_7) {
      LAB_001013d8:if (param_5 < param_4) {
         sVar4 = param_3 - (long)param_2;
         if ((long)sVar4 < 9) {
            if (sVar4 == 8) {
               *param_6 = *param_2;
            }

         }
 else {
            param_6 = (long*)memmove(param_6, param_2, sVar4);
         }

         __move_merge_adaptive_backward<long*,long*,long*,__gnu_cxx::__ops::_Iter_less_iter>(param_1, param_2, param_6, (long)param_6 + sVar4, param_3);
         return;
      }

      __merge_adaptive<long*,long,long*,__gnu_cxx::__ops::_Iter_less_iter>(param_1, param_2, param_3, param_6);
      return;
   }

   local_70 = param_1;
   if (param_4 <= param_5) goto LAB_001012d4;
   LAB_00101224:lVar2 = param_4 / 2;
   __src = local_70 + lVar2;
   param_4 = param_4 - lVar2;
   plVar1 = __lower_bound<long*,long,__gnu_cxx::__ops::_Iter_less_val>(param_2, param_3, *__src);
   lVar7 = (long)plVar1 - (long)param_2 >> 3;
   if (param_4 <= lVar7) goto LAB_0010131c;
   do {
      if (param_7 < lVar7) break;
      param_1 = __src;
      if (lVar7 != 0) {
         sVar5 = (long)plVar1 - (long)param_2;
         sVar4 = (long)param_2 - (long)__src;
         if ((long)sVar5 < 9) {
            if (sVar5 == 8) {
               *param_6 = *param_2;
               if ((long)sVar4 < 9) {
                  if (sVar4 == 8) {
                     plVar1[-1] = *__src;
                  }

               }
 else {
                  memmove((void*)( (long)plVar1 - sVar4 ), __src, sVar4);
               }

               *__src = *param_6;
            }
 else if ((long)sVar4 < 9) {
               if (sVar4 == 8) {
                  plVar1[-1] = *__src;
               }

            }
 else {
               memmove((void*)( (long)plVar1 - sVar4 ), __src, sVar4);
            }

         }
 else {
            memmove(param_6, param_2, sVar5);
            if ((long)sVar4 < 9) {
               if (sVar4 == 8) {
                  plVar1[-1] = *__src;
               }

            }
 else {
               memmove((void*)( (long)plVar1 - sVar4 ), __src, sVar4);
            }

            __src = (long*)memmove(__src, param_6, sVar5);
         }

         param_1 = (long*)( sVar5 + (long)__src );
      }

      LAB_00101284:param_2 = plVar1;
      param_5 = param_5 - lVar7;
      __merge_adaptive_resize<long*,long,long*,__gnu_cxx::__ops::_Iter_less_iter>(local_70, __src, param_1, lVar2, lVar7, param_6, param_7);
      lVar2 = param_5;
      if (param_4 <= param_5) {
         lVar2 = param_4;
      }

      if (lVar2 <= param_7) goto LAB_001013d8;
      local_70 = param_1;
      if (param_5 < param_4) goto LAB_00101224;
      LAB_001012d4:lVar7 = param_5 / 2;
      plVar1 = param_2 + lVar7;
      plVar3 = local_70;
      __src = __upper_bound<long*,long,__gnu_cxx::__ops::_Val_less_iter>(local_70, param_2, *plVar1);
      lVar2 = (long)__src - (long)plVar3 >> 3;
      param_4 = param_4 - lVar2;
   }
 while ( lVar7 < param_4 );
   LAB_0010131c:if (param_7 < param_4) {
      param_1 = _V2::__rotate<long*>(__src, param_2, plVar1);
   }
 else {
      param_1 = plVar1;
      if (param_4 != 0) {
         sVar5 = (long)param_2 - (long)__src;
         sVar4 = (long)plVar1 - (long)param_2;
         if ((long)sVar5 < 9) {
            if (sVar5 == 8) {
               *param_6 = *__src;
               if ((long)sVar4 < 9) {
                  if (sVar4 == 8) {
                     *__src = *param_2;
                  }

               }
 else {
                  __src = (long*)memmove(__src, param_2, sVar4);
               }

               lVar6 = -8;
               plVar1[-1] = *param_6;
            }
 else {
               lVar6 = -sVar5;
               if ((long)sVar4 < 9) {
                  param_1 = (long*)( (long)plVar1 + lVar6 );
                  if (sVar4 != 8) goto LAB_00101284;
                  *__src = *param_2;
               }
 else {
                  __src = (long*)memmove(__src, param_2, sVar4);
               }

            }

            param_1 = (long*)( (long)plVar1 + lVar6 );
            goto LAB_00101284;
         }

         memmove(param_6, __src, sVar5);
         if ((long)sVar4 < 9) {
            if (sVar4 == 8) {
               *__src = *param_2;
            }

         }
 else {
            __src = (long*)memmove(__src, param_2, sVar4);
         }

         param_1 = (long*)( (long)plVar1 - sVar5 );
         memmove(param_1, param_6, sVar5);
      }

   }

   goto LAB_00101284;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* void std::__stable_sort_adaptive_resize<long*, long*, long,
   __gnu_cxx::__ops::_Iter_less_iter>(long*, long*, long*, long, __gnu_cxx::__ops::_Iter_less_iter)
   [clone .isra.0] */void std::__stable_sort_adaptive_resize<long*,long*,long,__gnu_cxx::__ops::_Iter_less_iter>(long param_1, long param_2, undefined8 param_3, long param_4) {
   long lVar1;
   long lVar2;
   long lVar3;
   lVar3 = ( ( param_2 - param_1 >> 3 ) + 1 ) / 2;
   lVar2 = lVar3 * 8;
   lVar1 = param_1 + lVar2;
   if (param_4 < lVar3) {
      __stable_sort_adaptive_resize<long*,long*,long,__gnu_cxx::__ops::_Iter_less_iter>(param_1, lVar1, param_3);
      __stable_sort_adaptive_resize<long*,long*,long,__gnu_cxx::__ops::_Iter_less_iter>(lVar1, param_2, param_3, param_4);
      __merge_adaptive_resize<long*,long,long*,__gnu_cxx::__ops::_Iter_less_iter>(param_1, lVar1, param_2, lVar2 >> 3, param_2 - lVar1 >> 3, param_3, param_4);
      return;
   }

   __stable_sort_adaptive<long*,long*,__gnu_cxx::__ops::_Iter_less_iter>(param_1, lVar1, param_2, param_3);
   return;
}
/* (anonymous namespace)::Winding03(manifold::Manifold::Impl const&, manifold::Vec<int>&,
   manifold::Vec<int>&, bool) */_anonymous_namespace_ * __thiscall
(anonymous_namespace)::Winding03
          (_anonymous_namespace_ *this,Impl *param_1,Vec *param_2,Vec *param_3,bool param_4){
   int *piVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   int iVar5;
   void *pvVar6;
   long lVar7;
   long lVar8;
   lVar2 = *(long*)( param_1 + 0x50 );
   *(undefined8*)this = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (lVar2 != 0) {
      pvVar6 = calloc(lVar2 * 4, 1);
      *(long*)( this + 0x10 ) = lVar2;
      *(void**)this = pvVar6;
   }

   *(long*)( this + 8 ) = lVar2;
   if (_LC5 < (double)*(ulong*)( param_2 + 8 )) {
      lVar2 = *(long*)( param_3 + 8 );
      if (lVar2 != 0) {
         lVar8 = 0;
         do {
            LOCK();
            piVar1 = (int*)( *(long*)this + (long)*(int*)( *(long*)param_2 + (long)(int)lVar8 * 4 ) * 4 );
            *piVar1 = *piVar1 + *(int*)( *(long*)param_3 + (long)(int)lVar8 * 4 ) * ( ( -(uint)!param_4 & 2 ) - 1 );
            UNLOCK();
            lVar8 = lVar8 + 1;
         }
 while ( lVar2 != lVar8 );
         return this;
      }

   }
 else {
      lVar2 = *(long*)( param_3 + 8 );
      if (lVar2 != 0) {
         lVar8 = *(long*)param_3;
         lVar3 = *(long*)param_2;
         lVar4 = *(long*)this;
         lVar7 = 0;
         do {
            iVar5 = (int)lVar7;
            lVar7 = lVar7 + 1;
            piVar1 = (int*)( lVar4 + (long)*(int*)( lVar3 + (long)iVar5 * 4 ) * 4 );
            *piVar1 = *piVar1 + *(int*)( lVar8 + (long)iVar5 * 4 ) * ( ( -(uint)!param_4 & 2 ) - 1 );
         }
 while ( lVar2 != lVar7 );
      }

   }

   return this;
}
/* (anonymous namespace)::Shadow02(manifold::Manifold::Impl const&, manifold::Manifold::Impl const&,
   manifold::SparseIndices&, bool, double) */_anonymous_namespace_ * __thiscall
(anonymous_namespace)::Shadow02
          (_anonymous_namespace_ *this,Impl *param_1,Impl *param_2,SparseIndices *param_3,
          bool param_4,double param_5){
   double *pdVar1;
   double *pdVar2;
   double dVar3;
   double dVar4;
   int iVar5;
   int iVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   undefined8 uVar10;
   long *__ptr;
   bool bVar11;
   undefined8 *puVar12;
   int iVar13;
   int iVar14;
   Impl *pIVar15;
   int *piVar16;
   ulong uVar17;
   int *piVar18;
   undefined8 *puVar19;
   void *__s;
   long *plVar20;
   int iVar21;
   long lVar22;
   long lVar23;
   size_t sVar24;
   int *piVar25;
   size_t __size;
   int iVar26;
   int iVar27;
   ulong uVar28;
   long in_FS_OFFSET;
   double dVar29;
   double local_1b8;
   undefined8 *local_1a8;
   int local_19c;
   Vec *local_190;
   bool local_152;
   int *local_108;
   ulong local_100;
   ulong uStack_f8;
   undefined8 *local_e8;
   ulong local_e0;
   ulong local_d8;
   double local_c8;
   double dStack_c0;
   double local_b8;
   int *local_a8;
   ulong local_a0;
   double dStack_98;
   undefined8 local_88;
   undefined4 local_80;
   int local_7c;
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_108 = (int*)0x0;
   uStack_f8 = 0;
   uVar28 = *(ulong*)( param_3 + 8 ) >> 3;
   if (uVar28 == 0) {
      local_100 = 0;
      piVar16 = (int*)0x0;
      local_e8 = (undefined8*)0x0;
      local_d8 = 0;
   }
 else {
      piVar16 = (int*)malloc(uVar28 * 4);
      local_108 = piVar16;
      local_100 = uVar28;
      uStack_f8 = uVar28;
      local_e8 = (undefined8*)malloc(uVar28 * 8);
      local_d8 = uVar28;
   }

   puVar12 = local_e8;
   local_1a8 = (undefined8*)0x0;
   pIVar15 = param_2 + 0x78;
   if (param_4) {
      pIVar15 = param_1 + 0x78;
   }

   puVar19 = *(undefined8**)pIVar15;
   local_e0 = uVar28;
   if (*(long*)( pIVar15 + 8 ) != 0) {
      sVar24 = *(long*)( pIVar15 + 8 ) * 0x18;
      local_1a8 = (undefined8*)malloc(sVar24);
      if ((long)sVar24 < 0x19) {
         if (sVar24 == 0x18) {
            uVar10 = puVar19[1];
            *local_1a8 = *puVar19;
            local_1a8[1] = uVar10;
            local_1a8[2] = puVar19[2];
         }

      }
 else {
         memmove(local_1a8, puVar19, sVar24);
      }

   }

   lVar7 = *(long*)( param_1 + 0x48 );
   lVar8 = *(long*)( param_2 + 0x60 );
   lVar9 = *(long*)( param_2 + 0x48 );
   if (uVar28 == 0) {
      sVar24 = 0;
      local_a8 = (int*)0x0;
      dStack_98 = 0.0;
      local_a0 = 0;
   }
 else {
      lVar22 = 0;
      piVar18 = piVar16 + uVar28;
      do {
         local_88 = _LC8;
         local_1b8 = _LC7;
         iVar5 = *(int*)( *(long*)param_3 + lVar22 );
         iVar13 = *(int*)( *(long*)param_3 + 4 + lVar22 );
         iVar26 = iVar5;
         if (param_4) {
            iVar26 = iVar13;
            iVar13 = iVar5;
         }

         local_78 = (undefined1[16])0x0;
         local_68 = (undefined1[16])0x0;
         pdVar1 = (double*)( lVar7 + (long)iVar26 * 0x18 );
         local_58 = (undefined1[16])0x0;
         local_b8 = pdVar1[2];
         local_c8 = *pdVar1;
         dStack_c0 = pdVar1[1];
         *piVar16 = 0;
         local_80 = 2;
         iVar5 = -1;
         local_152 = false;
         local_19c = 0;
         piVar25 = (int*)&local_88;
         do {
            iVar21 = *piVar25 + iVar13 * 3;
            puVar19 = (undefined8*)( lVar8 + (long)iVar21 * 0xc );
            uVar10 = *puVar19;
            iVar27 = (int)uVar10;
            iVar14 = (int)( (ulong)uVar10 >> 0x20 );
            if (iVar14 <= iVar27) {
               iVar21 = *(int*)( puVar19 + 1 );
            }

            dVar29 = local_1b8;
            iVar6 = iVar5;
            if (!param_4) {
               iVar6 = *(int*)( lVar8 + (long)iVar21 * 0xc );
               pdVar2 = (double*)( lVar9 + (long)iVar6 * 0x18 );
               dVar29 = ( local_c8 - *pdVar2 ) * ( local_c8 - *pdVar2 ) + 0.0 + ( dStack_c0 - pdVar2[1] ) * ( dStack_c0 - pdVar2[1] ) + ( local_b8 - pdVar2[2] ) * ( local_b8 - pdVar2[2] );
               if (local_1b8 <= dVar29) {
                  dVar29 = local_1b8;
                  iVar6 = iVar5;
               }

            }

            iVar5 = iVar6;
            local_1b8 = dVar29;
            Shadow01((_anonymous_namespace_*)param_5, &local_a8, iVar26, iVar21, lVar7, lVar9, lVar8, local_1a8, !param_4);
            dVar29 = (double)( local_a0 & _LC0 );
            if ((double)( local_a0 & _LC0 ) <= _LC1) {
               iVar21 = -(int)local_a8;
               if (param_4 != iVar27 < iVar14) {
                  iVar21 = (int)local_a8;
               }

               *piVar16 = *piVar16 + iVar21;
               dVar29 = dStack_98;
               if (( local_19c < 2 ) && ( ( local_19c == 0 || ( ( (int)local_a8 != 0 ) != local_152 ) ) )) {
                  local_152 = (int)local_a8 != 0;
                  lVar23 = (long)local_19c * 0x18;
                  local_19c = local_19c + 1;
                  *(ulong*)( local_78 + lVar23 ) = local_a0;
                  *(double*)( local_78 + lVar23 + 8 ) = dStack_98;
                  *(double*)( local_68 + lVar23 ) = dStack_98;
               }

            }

            piVar25 = piVar25 + 1;
         }
 while ( &local_7c != piVar25 );
         if (*piVar16 == 0) {
            *(undefined8*)( (long)puVar12 + lVar22 ) = _LC3;
         }
 else {
            dVar3 = pdVar1[2];
            Interpolate(pdVar1[1]);
            *(double*)( (long)puVar12 + lVar22 ) = dVar29;
            if (param_4) {
               dVar4 = (double)local_1a8[(long)iVar26 * 3 + 2];
               if (dVar3 == dVar29) {
                  LAB_00102000:bVar11 = dVar4 * param_5 < 0.0;
               }
 else {
                  bVar11 = dVar3 < dVar29;
               }

            }
 else {
               dVar4 = (double)local_1a8[(long)iVar5 * 3 + 2];
               if (dVar3 == dVar29) goto LAB_00102000;
               bVar11 = dVar29 < dVar3;
            }

            if (!bVar11) {
               *piVar16 = 0;
            }

         }

         piVar16 = piVar16 + 1;
         lVar22 = lVar22 + 8;
      }
 while ( piVar16 != piVar18 );
      piVar16 = (int*)malloc(uVar28 * 4);
      uVar17 = 0;
      piVar18 = piVar16;
      do {
         if ((double)( puVar12[uVar17] & _LC0 ) <= _LC1) {
            *piVar18 = (int)uVar17;
            piVar18 = piVar18 + 1;
         }

         uVar17 = uVar17 + 1;
      }
 while ( uVar28 != uVar17 );
      __size = (long)piVar18 - (long)piVar16;
      uVar17 = (long)__size >> 2;
      sVar24 = uVar17 * 8;
      local_a8 = piVar16;
      local_a0 = uVar17;
      dStack_98 = (double)uVar28;
      if (uVar28 < uVar17) {
         local_a0 = uVar28;
         piVar18 = (int*)malloc(__size);
         if (uVar28 == 1) {
            *piVar18 = *piVar16;
         }
 else {
            memcpy(piVar18, piVar16, uVar28 * 4);
         }

         free(piVar16);
         dStack_98 = (double)uVar17;
         local_a8 = piVar18;
         if (piVar18 + uVar28 != (int*)( (long)piVar18 + __size )) {
            memset(piVar18 + uVar28, 0, __size + uVar28 * -4);
         }

         local_a0 = uVar17;
         if (uVar17 * 2 < uVar28) {
            LAB_001020af:piVar16 = local_a8;
            local_a0 = uVar17;
            piVar18 = (int*)malloc(__size);
            if ((long)__size < 5) {
               if (__size != 4) goto LAB_0010222d;
               *piVar18 = *piVar16;
            }
 else {
               memmove(piVar18, piVar16, __size);
            }

            LAB_001020d2:free(piVar16);
            goto LAB_00102236;
         }

      }
 else if (uVar17 * 2 < uVar28) {
         if (uVar17 != 0) goto LAB_001020af;
         sVar24 = 0;
         piVar18 = (int*)0x0;
         LAB_0010222d:if (piVar16 != (int*)0x0) goto LAB_001020d2;
         LAB_00102236:dStack_98 = (double)local_a0;
         local_a8 = piVar18;
      }

   }

   local_190 = (Vec*)&local_a8;
   manifold::Permute<double,int>((Vec*)&local_e8, local_190);
   manifold::Permute<int,int>((Vec*)&local_108, local_190);
   plVar20 = (long*)0x0;
   __ptr = *(long**)param_3;
   *(undefined1(*) [16])( param_3 + 8 ) = (undefined1[16])0x0;
   *(undefined8*)param_3 = 0;
   if (sVar24 != 0) {
      __s = malloc(sVar24);
      *(void**)param_3 = __s;
      *(size_t*)( param_3 + 0x10 ) = sVar24;
      plVar20 = (long*)memset(__s, 0xff, sVar24);
   }

   piVar16 = local_a8;
   *(size_t*)( param_3 + 8 ) = sVar24;
   manifold::gather<int*,long*,long*>(local_a8, local_a8 + local_a0, __ptr, plVar20);
   if (__ptr != (long*)0x0) {
      free(__ptr);
      piVar16 = local_a8;
   }

   if (piVar16 != (int*)0x0) {
      free(piVar16);
   }

   uVar28 = local_e0;
   puVar12 = local_e8;
   puVar19 = (undefined8*)0x0;
   *(undefined8*)this = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_e0 != 0) {
      sVar24 = local_e0 * 8;
      puVar19 = (undefined8*)malloc(sVar24);
      if ((long)sVar24 < 9) {
         if (sVar24 == 8) {
            *puVar19 = *puVar12;
         }

      }
 else {
         puVar19 = (undefined8*)memmove(puVar19, puVar12, sVar24);
      }

   }

   uVar17 = local_100;
   piVar16 = local_108;
   *(ulong*)( this + 8 ) = uVar28;
   *(ulong*)( this + 0x10 ) = uVar28;
   *(undefined1(*) [16])( this + 0x20 ) = (undefined1[16])0x0;
   piVar18 = (int*)0x0;
   *(undefined8**)this = puVar19;
   *(undefined8*)( this + 0x18 ) = 0;
   if (local_100 == 0) {
      LAB_00101de6:*(int**)( this + 0x18 ) = piVar18;
      *(ulong*)( this + 0x20 ) = uVar17;
      *(ulong*)( this + 0x28 ) = uVar17;
      if (local_1a8 != (undefined8*)0x0) {
         free(local_1a8);
      }

      if (puVar12 != (undefined8*)0x0) {
         LAB_00101e06:free(puVar12);
         piVar16 = local_108;
      }

      if (piVar16 == (int*)0x0) goto LAB_00101e1f;
   }
 else {
      sVar24 = local_100 * 4;
      piVar18 = (int*)malloc(sVar24);
      if ((long)sVar24 < 5) {
         if (sVar24 != 4) goto LAB_00101de6;
         *piVar18 = *piVar16;
      }
 else {
         piVar18 = (int*)memmove(piVar18, piVar16, sVar24);
      }

      *(int**)( this + 0x18 ) = piVar18;
      *(ulong*)( this + 0x20 ) = uVar17;
      *(ulong*)( this + 0x28 ) = uVar17;
      if (local_1a8 != (undefined8*)0x0) {
         free(local_1a8);
      }

      if (puVar12 != (undefined8*)0x0) goto LAB_00101e06;
   }

   free(piVar16);
   LAB_00101e1f:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* (anonymous namespace)::Intersect12(manifold::Manifold::Impl const&, manifold::Manifold::Impl
   const&, manifold::Vec<int> const&, manifold::SparseIndices const&, manifold::Vec<int> const&,
   manifold::SparseIndices const&, manifold::Vec<double> const&, manifold::Vec<linalg::vec<double,
   4> > const&, manifold::SparseIndices&, bool) */_anonymous_namespace_ * __thiscall
(anonymous_namespace)::Intersect12
          (_anonymous_namespace_ *this,Impl *param_1,Impl *param_2,Vec *param_3,
          SparseIndices *param_4,Vec *param_5,SparseIndices *param_6,Vec *param_7,Vec *param_8,
          SparseIndices *param_9,bool param_10){
   undefined8 *puVar1;
   uint uVar2;
   int iVar3;
   long *__ptr;
   _anonymous_namespace_ *p_Var4;
   long lVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   vec *pvVar10;
   long lVar11;
   undefined8 uVar12;
   uint uVar13;
   undefined8 uVar14;
   double dVar15;
   ulong *puVar16;
   long lVar17;
   int *piVar18;
   ulong *puVar19;
   int *piVar20;
   void *pvVar21;
   ulong *puVar22;
   long *plVar23;
   int iVar24;
   vec *pvVar25;
   int iVar26;
   ulong uVar27;
   long lVar28;
   uint uVar29;
   size_t __size;
   size_t sVar30;
   uint uVar31;
   ulong uVar32;
   ulong uVar33;
   size_t __size_00;
   int iVar34;
   ulong uVar35;
   ulong uVar36;
   ulong uVar37;
   long in_FS_OFFSET;
   bool bVar38;
   ulong *local_1e8;
   long local_1e0;
   Vec *local_188;
   int *local_118;
   ulong local_110;
   ulong uStack_108;
   ulong *local_f8;
   ulong local_f0;
   ulong local_e8;
   int *local_d8;
   ulong uStack_d0;
   ulong uStack_c8;
   ulong uStack_c0;
   ulong local_b8;
   undefined4 local_b0;
   undefined1 local_ac[4];
   undefined1 local_a8[16];
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   uVar31 = (uint)param_10;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_118 = (int*)0x0;
   uStack_108 = 0;
   uVar33 = *(ulong*)( param_9 + 8 ) >> 3;
   if (uVar33 == 0) {
      local_110 = 0;
      local_f8 = (ulong*)0x0;
      local_e8 = 0;
      local_f0 = 0;
      local_d8 = (int*)0x0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      __size_00 = 0;
   }
 else {
      sVar30 = uVar33 * 4;
      piVar20 = (int*)malloc(sVar30);
      local_118 = piVar20;
      local_110 = uVar33;
      uStack_108 = uVar33;
      puVar16 = (ulong*)malloc(uVar33 * 0x18);
      p_Var4 = *(_anonymous_namespace_**)param_4;
      uVar32 = *(ulong*)( param_4 + 8 );
      lVar5 = *(long*)param_3;
      lVar6 = *(long*)param_7;
      lVar7 = *(long*)param_8;
      lVar8 = *(long*)( param_1 + 0x48 );
      lVar9 = *(long*)( param_1 + 0x60 );
      pvVar10 = *(vec**)param_5;
      lVar11 = *(long*)( param_2 + 0x60 );
      piVar18 = piVar20 + uVar33;
      local_1e0 = 0;
      local_1e8 = puVar16;
      local_f8 = puVar16;
      local_f0 = uVar33;
      local_e8 = uVar33;
      do {
         uVar29 = *(uint*)( *(long*)param_9 + local_1e0 );
         uVar2 = *(uint*)( *(long*)param_9 + 4 + local_1e0 );
         uVar13 = uVar29;
         if ((char)uVar31 != '\0') {
            uVar13 = uVar2;
            uVar2 = uVar29;
         }

         bVar38 = false;
         uVar36 = (ulong)uVar2 << 0x20;
         local_a8 = (undefined1[16])0x0;
         local_98 = (undefined1[16])0x0;
         local_88 = (undefined1[16])0x0;
         *piVar20 = 0;
         local_b8 = *(ulong*)( lVar9 + (long)(int)uVar13 * 0xc );
         iVar24 = (int)local_b8;
         uVar37 = local_b8 & 0xffffffff;
         uVar29 = 0;
         local_78 = (undefined1[16])0x0;
         uVar35 = (ulong)uVar31;
         local_68 = (undefined1[16])0x0;
         local_58 = (undefined1[16])0x0;
         puVar22 = &local_b8;
         while (true) {
            iVar34 = (int)uVar37;
            uVar27 = uVar36 | (long)iVar34;
            if ((char)uVar35 != '\0') {
               uVar27 = uVar37 << 0x20 | (long)(int)uVar2;
            }

            lVar17 = monobound_quaternary_search(p_Var4, uVar32 >> 3, uVar27);
            if (lVar17 != -1) {
               iVar3 = *(int*)( lVar5 + lVar17 * 4 );
               iVar26 = -iVar3;
               if ((bool)(char)uVar35 == ( iVar34 == iVar24 )) {
                  iVar26 = iVar3;
               }

               *piVar20 = *piVar20 + iVar26;
               if (( (int)uVar29 < 2 ) && ( ( uVar29 == 0 || ( ( iVar3 != 0 ) != bVar38 ) ) )) {
                  lVar28 = (long)(int)uVar29;
                  bVar38 = iVar3 != 0;
                  uVar29 = uVar29 + 1;
                  puVar1 = (undefined8*)( lVar8 + (long)iVar34 * 0x18 );
                  lVar28 = lVar28 * 0x18;
                  uVar12 = puVar1[1];
                  *(undefined8*)( local_a8 + lVar28 ) = *puVar1;
                  *(undefined8*)( local_a8 + lVar28 + 8 ) = uVar12;
                  *(undefined8*)( local_98 + lVar28 ) = puVar1[2];
                  uVar12 = *(undefined8*)( local_a8 + lVar28 + 8 );
                  *(undefined8*)( local_a8 + lVar28 + 8 ) = *(undefined8*)( local_98 + lVar28 );
                  *(undefined8*)( local_98 + lVar28 ) = uVar12;
                  uVar12 = *(undefined8*)( local_98 + lVar28 );
                  uVar14 = *(undefined8*)( local_a8 + lVar28 + 8 );
                  *(undefined8*)( local_78 + lVar28 ) = *(undefined8*)( local_a8 + lVar28 );
                  *(undefined8*)( local_78 + lVar28 + 8 ) = uVar14;
                  *(undefined8*)( local_68 + lVar28 ) = uVar12;
                  *(undefined8*)( local_78 + lVar28 + 8 ) = *(undefined8*)( lVar6 + lVar17 * 8 );
               }

            }

            puVar22 = (ulong*)( (long)puVar22 + 4 );
            if ((ulong*)&local_b0 == puVar22) break;
            uVar37 = ( ulong ) * (uint*)puVar22;
         }
;
         uVar31 = (uint)uVar35;
         uVar36 = (ulong)uVar29;
         local_b0 = 2;
         local_b8 = _LC8;
         puVar22 = &local_b8;
         do {
            uVar37 = *(ulong*)( lVar11 + (long)(int)( ( uint ) * puVar22 + uVar2 * 3 ) * 0xc );
            pvVar25 = (vec*)( uVar37 >> 0x20 );
            lVar17 = monobound_quaternary_search();
            if (lVar17 != -1) {
               iVar24 = *(int*)( pvVar10 + lVar17 * 4 );
               iVar34 = -iVar24;
               if ((int)uVar37 < (int)( uVar37 >> 0x20 )) {
                  iVar34 = iVar24;
               }

               *piVar20 = *piVar20 - iVar34;
               iVar34 = (int)uVar36;
               pvVar25 = pvVar10;
               if (( iVar34 < 2 ) && ( ( iVar34 == 0 || ( ( iVar24 != 0 ) != bVar38 ) ) )) {
                  puVar19 = (ulong*)( lVar17 * 0x20 + lVar7 );
                  uStack_d0 = puVar19[1];
                  local_d8 = (int*)*puVar19;
                  uVar36 = puVar19[2];
                  uVar37 = puVar19[3];
                  uStack_c8 = uVar36;
                  uStack_c0 = uVar37;
                  lVar17 = (long)iVar34 * 0x18;
                  pvVar25 = (vec*)( lVar17 + 0x1f0 );
                  *(int**)( local_a8 + lVar17 ) = (int*)*puVar19;
                  *(ulong*)( local_a8 + lVar17 + 8 ) = uVar36;
                  uVar14 = *(undefined8*)( local_a8 + lVar17 + 8 );
                  *(ulong*)( local_98 + lVar17 ) = uStack_d0;
                  uVar12 = *(undefined8*)( &stack0xfffffffffffffd78 + (long)pvVar25 );
                  *(undefined8*)( local_78 + lVar17 ) = *(undefined8*)( local_a8 + lVar17 );
                  *(undefined8*)( local_78 + lVar17 + 8 ) = uVar14;
                  *(undefined8*)( &stack0xfffffffffffffda8 + (long)pvVar25 ) = uVar12;
                  *(ulong*)( local_78 + lVar17 + 8 ) = uVar37;
                  if ((char)uVar35 == '\0') {
                     *(ulong*)( local_a8 + lVar17 + 8 ) = uVar37;
                     *(ulong*)( local_78 + lVar17 + 8 ) = uVar36;
                  }

                  uVar36 = ( ulong )(iVar34 + 1);
                  bVar38 = iVar24 != 0;
               }

            }

            uVar37 = _LC3;
            local_188 = (Vec*)&local_d8;
            puVar22 = (ulong*)( (long)puVar22 + 4 );
         }
 while ( puVar22 != (ulong*)local_ac );
         if (*piVar20 == 0) {
            local_1e8[2] = _LC3;
            *local_1e8 = uVar37;
            local_1e8[1] = uVar37;
         }
 else {
            Intersect(local_188, local_a8, local_98 + 8, pvVar25);
            *local_1e8 = (ulong)local_d8;
            local_1e8[1] = uStack_c8;
            local_1e8[2] = uStack_d0;
         }

         local_1e0 = local_1e0 + 8;
         piVar20 = piVar20 + 1;
         local_1e8 = local_1e8 + 3;
      }
 while ( piVar18 != piVar20 );
      piVar18 = (int*)malloc(sVar30);
      dVar15 = _LC1;
      uVar32 = _LC0;
      uVar36 = 0;
      piVar20 = piVar18;
      do {
         if ((double)( *puVar16 & uVar32 ) <= dVar15) {
            *piVar20 = (int)uVar36;
            piVar20 = piVar20 + 1;
         }

         uVar36 = uVar36 + 1;
         puVar16 = puVar16 + 3;
      }
 while ( uVar33 != uVar36 );
      __size = (long)piVar20 - (long)piVar18;
      uVar32 = (long)__size >> 2;
      __size_00 = uVar32 * 8;
      local_d8 = piVar18;
      uStack_d0 = uVar32;
      uStack_c8 = uVar33;
      if (uVar33 < uVar32) {
         uStack_d0 = uVar33;
         piVar20 = (int*)malloc(__size);
         if (uVar33 == 1) {
            *piVar20 = *piVar18;
         }
 else {
            memcpy(piVar20, piVar18, sVar30);
         }

         free(piVar18);
         uStack_c8 = uVar32;
         local_d8 = piVar20;
         if (piVar20 + uVar33 != (int*)( (long)piVar20 + __size )) {
            memset(piVar20 + uVar33, 0, __size + uVar33 * -4);
         }

         uStack_d0 = uVar32;
         if (uVar32 * 2 < uVar33) {
            LAB_00102cc3:piVar18 = local_d8;
            uStack_d0 = uVar32;
            piVar20 = (int*)malloc(__size);
            if ((long)__size < 5) {
               sVar30 = __size_00;
               if (__size != 4) goto LAB_00102df9;
               *piVar20 = *piVar18;
            }
 else {
               memmove(piVar20, piVar18, __size);
            }

            LAB_00102ce9:free(piVar18);
            goto LAB_00102e02;
         }

      }
 else if (uVar32 * 2 < uVar33) {
         piVar20 = (int*)0x0;
         sVar30 = 0;
         if (uVar32 != 0) goto LAB_00102cc3;
         LAB_00102df9:__size_00 = sVar30;
         if (piVar18 != (int*)0x0) goto LAB_00102ce9;
         LAB_00102e02:local_d8 = piVar20;
         uStack_c8 = uStack_d0;
      }

   }

   local_188 = (Vec*)&local_d8;
   manifold::Permute<linalg::vec<double,3>,int>((Vec*)&local_f8, local_188);
   manifold::Permute<int,int>((Vec*)&local_118, local_188);
   plVar23 = (long*)0x0;
   __ptr = *(long**)param_9;
   *(undefined1(*) [16])( param_9 + 8 ) = (undefined1[16])0x0;
   *(undefined8*)param_9 = 0;
   if (__size_00 != 0) {
      pvVar21 = malloc(__size_00);
      *(void**)param_9 = pvVar21;
      *(size_t*)( param_9 + 0x10 ) = __size_00;
      plVar23 = (long*)memset(pvVar21, 0xff, __size_00);
   }

   piVar18 = local_d8;
   *(size_t*)( param_9 + 8 ) = __size_00;
   manifold::gather<int*,long*,long*>(local_d8, local_d8 + uStack_d0, __ptr, plVar23);
   if (__ptr != (long*)0x0) {
      free(__ptr);
      piVar18 = local_d8;
   }

   if (piVar18 != (int*)0x0) {
      free(piVar18);
   }

   uVar33 = local_f0;
   puVar16 = local_f8;
   puVar22 = (ulong*)0x0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   *(undefined8*)this = 0;
   if (local_f0 != 0) {
      sVar30 = local_f0 * 0x18;
      puVar22 = (ulong*)malloc(sVar30);
      if ((long)sVar30 < 0x19) {
         if (sVar30 == 0x18) {
            uVar32 = puVar16[1];
            *puVar22 = *puVar16;
            puVar22[1] = uVar32;
            puVar22[2] = puVar16[2];
         }

      }
 else {
         puVar22 = (ulong*)memmove(puVar22, puVar16, sVar30);
      }

   }

   uVar32 = local_110;
   piVar18 = local_118;
   piVar20 = (int*)0x0;
   *(ulong*)( this + 8 ) = uVar33;
   *(ulong*)( this + 0x10 ) = uVar33;
   *(undefined1(*) [16])( this + 0x20 ) = (undefined1[16])0x0;
   *(ulong**)this = puVar22;
   *(undefined8*)( this + 0x18 ) = 0;
   if (local_110 == 0) {
      LAB_00102548:*(int**)( this + 0x18 ) = piVar20;
      *(ulong*)( this + 0x20 ) = uVar32;
      *(ulong*)( this + 0x28 ) = uVar32;
      if (puVar16 != (ulong*)0x0) {
         LAB_0010255d:free(puVar16);
         piVar18 = local_118;
      }

      if (piVar18 == (int*)0x0) goto LAB_0010257a;
   }
 else {
      sVar30 = local_110 * 4;
      piVar20 = (int*)malloc(sVar30);
      if ((long)sVar30 < 5) {
         if (sVar30 != 4) goto LAB_00102548;
         *piVar20 = *piVar18;
         *(int**)( this + 0x18 ) = piVar20;
         *(ulong*)( this + 0x20 ) = uVar32;
         *(ulong*)( this + 0x28 ) = uVar32;
      }
 else {
         pvVar21 = memmove(piVar20, piVar18, sVar30);
         *(void**)( this + 0x18 ) = pvVar21;
         *(ulong*)( this + 0x20 ) = uVar32;
         *(ulong*)( this + 0x28 ) = uVar32;
      }

      if (puVar16 != (ulong*)0x0) goto LAB_0010255d;
   }

   free(piVar18);
   LAB_0010257a:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* manifold::Boolean3::Boolean3(manifold::Manifold::Impl const&, manifold::Manifold::Impl const&,
   manifold::OpType) */void manifold::Boolean3::Boolean3(Boolean3 *this, Impl *param_1, Impl *param_2, int param_4) {
   double *pdVar1;
   double *pdVar2;
   undefined8 *puVar3;
   ulong *puVar4;
   _anonymous_namespace_ *p_Var5;
   double dVar6;
   uint uVar7;
   int iVar8;
   int iVar9;
   ulong uVar10;
   undefined8 uVar11;
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   void *pvVar17;
   ulong uVar18;
   void *pvVar19;
   long lVar20;
   void *pvVar21;
   ulong uVar22;
   int *piVar23;
   long lVar24;
   long *plVar25;
   double *pdVar26;
   int *piVar27;
   long *plVar28;
   int *piVar29;
   long *plVar30;
   int iVar31;
   long lVar32;
   ulong uVar33;
   long lVar34;
   long lVar35;
   size_t sVar36;
   int iVar37;
   long *plVar38;
   size_t __size;
   long lVar39;
   void *pvVar40;
   int iVar41;
   size_t __size_00;
   long lVar42;
   long lVar43;
   ulong uVar44;
   double *pdVar45;
   long in_FS_OFFSET;
   undefined8 uVar46;
   double dVar47;
   double dVar48;
   double dVar49;
   double dVar50;
   vec *pvVar51;
   bool local_2e9;
   double local_278;
   double dStack_270;
   double local_268;
   double dStack_260;
   void *local_258;
   ulong local_250;
   ulong local_248;
   void *local_238;
   ulong local_230;
   ulong local_228;
   long *local_218;
   undefined1 local_210[16];
   int *local_1f8;
   undefined1 local_1f0[16];
   double *local_1d8;
   undefined1 local_1d0[16];
   void *local_1b8;
   undefined1 local_1b0[16];
   int *local_198;
   undefined1 local_190[16];
   void *local_178;
   undefined1 local_170[16];
   int *local_158;
   undefined1 local_150[16];
   int *local_138;
   ulong local_130;
   ulong uStack_128;
   double *local_118;
   ulong local_110;
   ulong uStack_108;
   undefined8 local_f8;
   ulong local_f0;
   ulong uStack_e8;
   void *local_e0;
   undefined1 local_d8[16];
   ulong local_c0;
   ulong local_b8;
   undefined8 local_b0;
   undefined1 local_a8[16];
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   uVar46 = _LC12;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(Impl**)this = param_1;
   *(Impl**)( this + 8 ) = param_2;
   if (param_4 == 0) {
      uVar46 = _LC11;
   }

   *(undefined8*)( this + 0x10 ) = uVar46;
   for (int i = 0; i < 8; i++) {
      *(undefined1(*) [16])( this + ( 24*i + 32 ) ) = (undefined1[16])0;
   }

   uVar18 = *(ulong*)( param_1 + 0x68 );
   for (int i = 0; i < 8; i++) {
      *(undefined8*)( this + ( 24*i + 24 ) ) = 0;
   }

   if (( ( ( ( uVar18 < 3 ) || ( *(ulong*)( param_2 + 0x68 ) < 3 ) ) || ( *(double*)( param_2 + 0x18 ) < *(double*)param_1 ) ) || ( ( *(double*)( param_2 + 0x20 ) < *(double*)( param_1 + 8 ) || ( *(double*)( param_2 + 0x28 ) < *(double*)( param_1 + 0x10 ) ) ) ) ) || ( ( *(double*)( param_1 + 0x18 ) < *(double*)param_2 || ( ( *(double*)( param_1 + 0x20 ) < *(double*)( param_2 + 8 ) || ( *(double*)( param_1 + 0x28 ) < *(double*)( param_2 + 0x10 ) ) ) ) ) )) {
      lVar42 = *(long*)( param_1 + 0x50 );
      if (lVar42 != 0) {
         pvVar19 = calloc(lVar42 * 4, 1);
         *(void**)( this + 0x78 ) = pvVar19;
         *(long*)( this + 0x88 ) = lVar42;
      }

      *(long*)( this + 0x80 ) = lVar42;
      lVar42 = *(long*)( param_2 + 0x50 );
      if (lVar42 != 0) {
         pvVar19 = calloc(lVar42 * 4, 1);
         *(void**)( this + 0x90 ) = pvVar19;
         *(long*)( this + 0xa0 ) = lVar42;
      }

      *(long*)( this + 0x98 ) = lVar42;
      goto LAB_00104214;
   }

   manifold::Manifold::Impl::EdgeCollisions((Impl*)&local_f8, SUB81(param_2, 0));
   if ((SparseIndices*)( this + 0x18 ) == (SparseIndices*)&local_f8) {
      if (local_f8 != (int*)0x0) {
         free(local_f8);
      }

   }
 else {
      if (*(void**)( this + 0x18 ) != (void*)0x0) {
         free(*(void**)( this + 0x18 ));
      }

      *(int**)( this + 0x18 ) = local_f8;
      *(ulong*)( this + 0x20 ) = local_f0;
      *(ulong*)( this + 0x28 ) = uStack_e8;
   }

   manifold::Manifold::Impl::EdgeCollisions((Impl*)&local_f8, SUB81(*(undefined8*)this, 0));
   if ((SparseIndices*)( this + 0x30 ) == (SparseIndices*)&local_f8) {
      if (local_f8 != (int*)0x0) {
         free(local_f8);
      }

   }
 else {
      if (*(void**)( this + 0x30 ) != (void*)0x0) {
         free(*(void**)( this + 0x30 ));
      }

      *(int**)( this + 0x30 ) = local_f8;
      *(ulong*)( this + 0x38 ) = local_f0;
      *(ulong*)( this + 0x40 ) = uStack_e8;
   }

   lVar20 = *(long*)( this + 0x18 );
   uVar18 = *(ulong*)( this + 0x20 ) & 0xfffffffffffffff8;
   lVar42 = lVar20 + uVar18;
   if (lVar20 != lVar42) {
      lVar32 = ( ( (long)*(ulong*)( this + 0x20 ) >> 3 ) + 1 ) / 2;
      lVar43 = lVar32;
      if ((long)uVar18 < 1) {
         uVar18 = 0;
         pvVar19 = (void*)0x0;
         lVar39 = lVar20;
         if (lVar32 == 0) goto LAB_00103153;
         LAB_00104eed:uVar18 = 0;
         std::__inplace_stable_sort<long*,__gnu_cxx::__ops::_Iter_less_iter>(lVar20, lVar42);
         pvVar19 = (void*)0x0;
      }
 else {
         while (true) {
            uVar18 = lVar43 * 8;
            pvVar19 = operator_new(uVar18, (nothrow_t*)&std::nothrow);
            if (pvVar19 != (void*)0x0) break;
            if (lVar43 == 1) goto LAB_00104eed;
            lVar43 = lVar43 + 1 >> 1;
         }
;
         lVar39 = lVar20 + uVar18;
         if (lVar32 == lVar43) {
            LAB_00103153:std::__stable_sort_adaptive<long*,long*,__gnu_cxx::__ops::_Iter_less_iter>(lVar20, lVar39, lVar42, pvVar19);
         }
 else {
            std::__stable_sort_adaptive_resize<long*,long*,long,__gnu_cxx::__ops::_Iter_less_iter>(lVar20, lVar42, pvVar19, lVar43);
         }

      }

      operator_delete(pvVar19, uVar18);
   }

   lVar20 = *(long*)( this + 0x30 );
   uVar18 = *(ulong*)( this + 0x38 ) & 0xfffffffffffffff8;
   lVar42 = lVar20 + uVar18;
   if (lVar20 != lVar42) {
      lVar32 = ( ( (long)*(ulong*)( this + 0x38 ) >> 3 ) + 1 ) / 2;
      lVar43 = lVar32;
      if ((long)uVar18 < 1) {
         uVar18 = 0;
         pvVar19 = (void*)0x0;
         lVar39 = lVar20;
         if (lVar32 == 0) goto LAB_00103201;
         LAB_00104f77:uVar18 = 0;
         std::__inplace_stable_sort<long*,__gnu_cxx::__ops::_Iter_less_iter>(lVar20, lVar42);
         pvVar19 = (void*)0x0;
      }
 else {
         while (true) {
            uVar18 = lVar43 * 8;
            pvVar19 = operator_new(uVar18, (nothrow_t*)&std::nothrow);
            if (pvVar19 != (void*)0x0) break;
            if (lVar43 == 1) goto LAB_00104f77;
            lVar43 = lVar43 + 1 >> 1;
         }
;
         lVar39 = lVar20 + uVar18;
         if (lVar32 == lVar43) {
            LAB_00103201:std::__stable_sort_adaptive<long*,long*,__gnu_cxx::__ops::_Iter_less_iter>(lVar20, lVar39, lVar42, pvVar19);
         }
 else {
            std::__stable_sort_adaptive_resize<long*,long*,long,__gnu_cxx::__ops::_Iter_less_iter>(lVar20, lVar42, pvVar19, lVar43);
         }

      }

      operator_delete(pvVar19, uVar18);
   }

   local_f0 = *(ulong*)( param_1 + 0x50 );
   local_f8 = *(int**)( param_1 + 0x48 );
   manifold::Manifold::Impl::VertexCollisionsZ((SparseIndices*)&local_258, param_2, (Impl*)&local_f8, 0);
   pvVar17 = local_258;
   pvVar19 = (void*)( (long)local_258 + ( local_250 & 0xfffffffffffffff8 ) );
   if (local_258 != pvVar19) {
      lVar20 = ( ( (long)local_250 >> 3 ) + 1 ) / 2;
      lVar42 = lVar20;
      if ((long)( local_250 & 0xfffffffffffffff8 ) < 1) {
         uVar18 = 0;
         pvVar21 = (void*)0x0;
         pvVar40 = local_258;
         if (lVar20 == 0) goto LAB_00103300;
         LAB_00104f49:uVar18 = 0;
         std::__inplace_stable_sort<long*,__gnu_cxx::__ops::_Iter_less_iter>(pvVar17, pvVar19);
         pvVar21 = (void*)0x0;
      }
 else {
         while (true) {
            uVar18 = lVar42 * 8;
            pvVar21 = operator_new(uVar18, (nothrow_t*)&std::nothrow);
            if (pvVar21 != (void*)0x0) break;
            if (lVar42 == 1) goto LAB_00104f49;
            lVar42 = lVar42 + 1 >> 1;
         }
;
         pvVar40 = (void*)( (long)pvVar17 + uVar18 );
         if (lVar20 == lVar42) {
            LAB_00103300:std::__stable_sort_adaptive<long*,long*,__gnu_cxx::__ops::_Iter_less_iter>(pvVar17, pvVar40, pvVar19, pvVar21);
         }
 else {
            std::__stable_sort_adaptive_resize<long*,long*,long,__gnu_cxx::__ops::_Iter_less_iter>(pvVar17, pvVar19, pvVar21, lVar42);
         }

      }

      operator_delete(pvVar21, uVar18);
   }

   local_f0 = *(ulong*)( param_2 + 0x50 );
   local_f8 = *(int**)( param_2 + 0x48 );
   manifold::Manifold::Impl::VertexCollisionsZ((SparseIndices*)&local_238, param_1, (Impl*)&local_f8, 1);
   pvVar17 = local_238;
   pvVar19 = (void*)( (long)local_238 + ( local_230 & 0xfffffffffffffff8 ) );
   if (local_238 != pvVar19) {
      lVar20 = ( ( (long)local_230 >> 3 ) + 1 ) / 2;
      lVar42 = lVar20;
      if ((long)( local_230 & 0xfffffffffffffff8 ) < 1) {
         uVar18 = 0;
         pvVar21 = (void*)0x0;
         pvVar40 = local_238;
         if (lVar20 == 0) goto LAB_00103402;
         LAB_00104f1b:uVar18 = 0;
         std::__inplace_stable_sort<long*,__gnu_cxx::__ops::_Iter_less_iter>(pvVar17, pvVar19);
         pvVar21 = (void*)0x0;
      }
 else {
         while (true) {
            uVar18 = lVar42 * 8;
            pvVar21 = operator_new(uVar18, (nothrow_t*)&std::nothrow);
            if (pvVar21 != (void*)0x0) break;
            if (lVar42 == 1) goto LAB_00104f1b;
            lVar42 = lVar42 + 1 >> 1;
         }
;
         pvVar40 = (void*)( (long)pvVar17 + uVar18 );
         if (lVar20 == lVar42) {
            LAB_00103402:std::__stable_sort_adaptive<long*,long*,__gnu_cxx::__ops::_Iter_less_iter>(pvVar17, pvVar40, pvVar19, pvVar21);
         }
 else {
            std::__stable_sort_adaptive_resize<long*,long*,long,__gnu_cxx::__ops::_Iter_less_iter>(pvVar17, pvVar19, pvVar21, lVar42);
         }

      }

      operator_delete(pvVar21, uVar18);
   }

   plVar38 = (long*)0x0;
   lVar42 = *(long*)( this + 8 );
   lVar20 = *(long*)this;
   uVar44 = *(ulong*)( this + 0x20 ) >> 3;
   uVar33 = *(ulong*)( this + 0x38 ) >> 3;
   uVar18 = ( uVar44 + uVar33 ) * 0x18;
   if (uVar18 != 0) {
      plVar38 = (long*)malloc(uVar18);
   }

   uVar46 = _LC8;
   lVar42 = *(long*)( lVar42 + 0x60 );
   if (uVar44 != 0) {
      piVar27 = *(int**)( this + 0x18 );
      iVar41 = 0;
      piVar23 = piVar27 + uVar44 * 2;
      do {
         uVar7 = piVar27[1];
         iVar37 = *piVar27;
         local_78._8_4_ = 2;
         local_78._0_8_ = uVar46;
         piVar29 = (int*)local_78;
         do {
            iVar8 = *piVar29;
            uVar22 = ( ulong )(iVar8 + iVar37 * 3);
            puVar4 = (ulong*)( lVar42 + uVar22 * 0xc );
            uVar10 = *puVar4;
            iVar31 = (int)puVar4[1];
            local_f8._0_4_ = (int)uVar10;
            local_f0 = CONCAT44(local_f0._4_4_, iVar31);
            local_f8._4_4_ = (int)( uVar10 >> 0x20 );
            if (local_f8._4_4_ <= (int)local_f8) {
               uVar22 = (ulong)iVar31;
            }

            piVar29 = piVar29 + 1;
            plVar38[(long)iVar8 + (long)iVar41] = uVar22 | (ulong)uVar7 << 0x20;
         }
 while ( (int*)( local_78 + 0xc ) != piVar29 );
         iVar41 = iVar41 + 3;
         piVar27 = piVar27 + 2;
         local_f8 = (int*)uVar10;
      }
 while ( piVar23 != piVar27 );
   }

   uVar46 = _LC8;
   lVar42 = *(long*)( lVar20 + 0x60 );
   if (uVar33 != 0) {
      piVar27 = *(int**)( this + 0x30 );
      iVar41 = (int)uVar44 * 3;
      piVar23 = piVar27 + uVar33 * 2;
      do {
         iVar37 = piVar27[1];
         iVar8 = *piVar27;
         local_78._8_4_ = 2;
         local_78._0_8_ = uVar46;
         piVar29 = (int*)local_78;
         do {
            iVar31 = *piVar29;
            lVar20 = (long)( iVar37 * 3 + iVar31 );
            puVar4 = (ulong*)( lVar42 + lVar20 * 0xc );
            uVar10 = *puVar4;
            iVar9 = (int)puVar4[1];
            local_f8._0_4_ = (int)uVar10;
            local_f0 = CONCAT44(local_f0._4_4_, iVar9);
            local_f8._4_4_ = (int)( uVar10 >> 0x20 );
            if (local_f8._4_4_ <= (int)local_f8) {
               lVar20 = (long)iVar9;
            }

            piVar29 = piVar29 + 1;
            plVar38[(long)iVar31 + (long)iVar41] = lVar20 << 0x20 | (long)iVar8;
         }
 while ( piVar29 != (int*)( local_78 + 0xc ) );
         iVar41 = iVar41 + 3;
         piVar27 = piVar27 + 2;
         local_f8 = (int*)uVar10;
      }
 while ( piVar23 != piVar27 );
   }

   plVar28 = plVar38 + ( uVar44 + uVar33 ) * 3;
   local_218 = plVar38;
   local_210._8_8_ = uVar18;
   if (plVar28 == plVar38) {
      LAB_00104fe7:auVar16._8_8_ = 0;
      auVar16._0_8_ = local_210._8_8_;
      local_210 = auVar16 << 0x40;
      if (uVar18 != 0) {
         plVar28 = (long*)0x0;
         plVar38 = local_218;
         LAB_00104e77:if (plVar38 != (long*)0x0) {
            LAB_00104df9:free(plVar38);
         }

         local_210._8_8_ = local_210._0_8_;
         uVar18 = local_210._0_8_;
         local_218 = plVar28;
      }

   }
 else {
      lVar20 = ( ( (long)uVar18 >> 3 ) + 1 ) / 2;
      lVar42 = lVar20;
      local_210._0_8_ = uVar18;
      if ((long)uVar18 < 1) {
         uVar18 = 0;
         pvVar19 = (void*)0x0;
         plVar30 = plVar38;
         if (lVar20 == 0) goto LAB_001036a8;
         LAB_00104ebf:uVar18 = 0;
         std::__inplace_stable_sort<long*,__gnu_cxx::__ops::_Iter_less_iter>(plVar38, plVar28);
         pvVar19 = (void*)0x0;
      }
 else {
         while (true) {
            uVar18 = lVar42 * 8;
            pvVar19 = operator_new(uVar18, (nothrow_t*)&std::nothrow);
            if (pvVar19 != (void*)0x0) break;
            if (lVar42 == 1) goto LAB_00104ebf;
            lVar42 = lVar42 + 1 >> 1;
         }
;
         plVar30 = plVar38 + lVar42;
         if (lVar20 == lVar42) {
            LAB_001036a8:std::__stable_sort_adaptive<long*,long*,__gnu_cxx::__ops::_Iter_less_iter>(plVar38, plVar30, plVar28, pvVar19);
         }
 else {
            std::__stable_sort_adaptive_resize<long*,long*,long,__gnu_cxx::__ops::_Iter_less_iter>(plVar38, plVar28, pvVar19, lVar42);
         }

      }

      operator_delete(pvVar19, uVar18);
      uVar46 = local_210._0_8_;
      plVar28 = local_218;
      plVar30 = (long*)( ( local_210._0_8_ & 0xfffffffffffffff8 ) + (long)local_218 );
      plVar38 = local_218;
      uVar18 = local_210._0_8_;
      if (local_218 == plVar30) goto LAB_00104fe7;
      do {
         plVar25 = plVar38;
         plVar38 = plVar25 + 1;
         if (plVar30 == plVar38) goto LAB_0010371a;
      }
 while ( *plVar25 != plVar25[1] );
      plVar38 = plVar30;
      if (plVar30 != plVar25) {
         for (plVar38 = plVar25 + 2; plVar30 != plVar38; plVar38 = plVar38 + 1) {
            if (*plVar25 != *plVar38) {
               plVar25[1] = *plVar38;
               plVar25 = plVar25 + 1;
            }

         }

         plVar38 = plVar25 + 1;
      }

      LAB_0010371a:uVar18 = (long)plVar38 - (long)local_218;
      uVar33 = uVar18 * 2;
      if ((ulong)local_210._8_8_ < uVar18) {
         plVar38 = (long*)malloc(uVar18);
         if (uVar46 != 0) {
            if ((long)uVar46 < 2) {
               if (uVar46 == 1) {
                  *(char*)plVar38 = (char)*plVar28;
                  goto LAB_00105027;
               }

               uVar44 = uVar46;
               if (plVar28 != (long*)0x0) goto LAB_00105027;
            }
 else {
               memmove(plVar38, plVar28, uVar46);
               LAB_00105027:free(plVar28);
               uVar44 = local_210._0_8_;
            }

            local_218 = plVar38;
            local_210._8_8_ = uVar18;
            if (uVar44 < uVar18) goto LAB_00104e8c;
            goto LAB_00104e98;
         }

         if (plVar28 != (long*)0x0) goto LAB_00105027;
         uVar44 = 0;
         sVar36 = uVar18;
         local_218 = plVar38;
         local_210._8_8_ = uVar18;
         LAB_00104d9a:memset((undefined1*)( (long)local_218 + uVar44 ), 0xff, sVar36);
         local_210._0_8_ = uVar18;
         if ((ulong)uVar46 <= uVar33) goto LAB_00103750;
         LAB_00104dca:plVar38 = local_218;
         plVar28 = (long*)malloc(uVar18);
         if ((long)uVar18 < 2) goto LAB_00104e77;
         memmove(plVar28, plVar38, uVar18);
         goto LAB_00104df9;
      }

      uVar44 = local_210._0_8_;
      if ((ulong)local_210._0_8_ < uVar18) {
         LAB_00104e8c:sVar36 = uVar18 - uVar44;
         if (uVar18 - uVar44 != 0) goto LAB_00104d9a;
         LAB_00104e98:local_210._0_8_ = uVar18;
         if (uVar33 < (ulong)uVar46) goto LAB_00104dca;
      }
 else {
         local_210._0_8_ = uVar18;
         if (uVar33 < (ulong)uVar46) {
            if (uVar18 != 0) goto LAB_00104dca;
            plVar28 = (long*)0x0;
            plVar38 = local_218;
            goto LAB_00104e77;
         }

      }

   }

   LAB_00103750:p_Var5 = *(_anonymous_namespace_**)( this + 0x10 );
   uVar18 = uVar18 >> 3;
   local_1f8 = (int*)0x0;
   local_1d8 = (double*)0x0;
   local_1f0 = (undefined1[16])0x0;
   local_138 = (int*)0x0;
   uStack_128 = 0;
   local_1d0 = (undefined1[16])0x0;
   if (uVar18 == 0) {
      local_130 = 0;
      local_118 = (double*)0x0;
      uStack_108 = 0;
      local_110 = 0;
      local_f8 = (int*)0x0;
      uStack_e8 = 0;
      local_f0 = 0;
      __size_00 = 0;
   }
 else {
      sVar36 = uVar18 * 4;
      piVar23 = (int*)malloc(sVar36);
      piVar27 = piVar23 + uVar18;
      local_138 = piVar23;
      local_130 = uVar18;
      uStack_128 = uVar18;
      pdVar26 = (double*)malloc(uVar18 << 5);
      uVar46 = _LC8;
      lVar42 = *(long*)( param_2 + 0x48 );
      lVar20 = *(long*)( param_2 + 0x60 );
      lVar43 = *(long*)( param_1 + 0x48 );
      lVar32 = *(long*)( param_1 + 0x60 );
      lVar39 = *(long*)( param_1 + 0x78 );
      plVar38 = local_218;
      pdVar45 = pdVar26;
      local_118 = pdVar26;
      local_110 = uVar18;
      uStack_108 = uVar18;
      do {
         iVar41 = *(int*)( (long)plVar38 + 4 );
         iVar37 = 0;
         lVar24 = *plVar38;
         local_a8 = (undefined1[16])0x0;
         puVar4 = (ulong*)( lVar32 + (long)iVar41 * 0xc );
         local_98 = (undefined1[16])0x0;
         local_88 = (undefined1[16])0x0;
         local_78 = (undefined1[16])0x0;
         local_68 = (undefined1[16])0x0;
         local_58 = (undefined1[16])0x0;
         *piVar23 = 0;
         local_c0 = *puVar4;
         local_2e9 = false;
         local_b0 = uVar46;
         uVar33 = local_c0 & 0xffffffff;
         piVar29 = (int*)&local_b0;
         while (true) {
            iVar8 = *piVar29;
            (anonymous_namespace)::Shadow01(p_Var5, (Impl*)&local_f8, uVar33, (int)lVar24, lVar43, lVar42, lVar20, lVar39, 0);
            if ((double)( local_f0 & _LC0 ) <= _LC1) {
               iVar31 = -(int)local_f8;
               if (iVar8 != 0) {
                  iVar31 = (int)local_f8;
               }

               *piVar23 = *piVar23 + iVar31;
               if (( iVar37 < 2 ) && ( ( iVar37 == 0 || ( ( (int)local_f8 != 0 ) != local_2e9 ) ) )) {
                  lVar35 = (long)iVar37;
                  local_2e9 = (int)local_f8 != 0;
                  iVar37 = iVar37 + 1;
                  puVar3 = (undefined8*)( lVar43 + (long)(int)uVar33 * 0x18 );
                  lVar34 = lVar35 * 0x18;
                  uVar11 = puVar3[1];
                  *(undefined8*)( local_a8 + lVar34 ) = *puVar3;
                  *(undefined8*)( local_a8 + lVar34 + 8 ) = uVar11;
                  *(undefined8*)( local_98 + lVar34 ) = puVar3[2];
                  lVar35 = lVar35 * 0x18;
                  *(undefined8*)( local_78 + lVar35 ) = *(undefined8*)( local_a8 + lVar34 );
                  *(ulong*)( local_78 + lVar35 + 8 ) = local_f0;
                  *(ulong*)( local_68 + lVar34 ) = uStack_e8;
               }

            }

            piVar29 = piVar29 + 1;
            if ((int*)local_a8 == piVar29) break;
            uVar33 = ( ulong ) * (uint*)( (long)&local_c0 + (long)*piVar29 * 4 );
         }
;
         local_b8 = *(ulong*)( lVar20 + (long)(int)lVar24 * 0xc );
         local_b0 = uVar46;
         uVar33 = local_b8 & 0xffffffff;
         piVar29 = (int*)&local_b0;
         while (true) {
            iVar8 = *piVar29;
            pvVar51 = (vec*)0x1;
            (anonymous_namespace)::Shadow01(p_Var5, (Impl*)&local_f8, uVar33, iVar41, lVar42, lVar43, lVar32, lVar39);
            if ((double)( local_f0 & _LC0 ) <= _LC1) {
               pvVar51 = (vec*)( (ulong)local_f8 & 0xffffffff );
               iVar31 = -(int)local_f8;
               if (iVar8 != 0) {
                  iVar31 = (int)local_f8;
               }

               *piVar23 = *piVar23 + iVar31;
               if (( iVar37 < 2 ) && ( ( iVar37 == 0 || ( ( (int)local_f8 != 0 ) != local_2e9 ) ) )) {
                  lVar34 = (long)iVar37;
                  pvVar51 = (vec*)( lVar34 * 3 );
                  iVar37 = iVar37 + 1;
                  puVar3 = (undefined8*)( lVar42 + (long)(int)uVar33 * 0x18 );
                  lVar24 = lVar34 * 0x18;
                  uVar11 = puVar3[1];
                  *(undefined8*)( local_78 + lVar24 ) = *puVar3;
                  *(undefined8*)( local_78 + lVar24 + 8 ) = uVar11;
                  *(undefined8*)( local_68 + lVar24 ) = puVar3[2];
                  *(undefined8*)( (long)local_a8 + lVar34 * 6 * 4 ) = *(undefined8*)( local_78 + lVar24 );
                  *(ulong*)( local_a8 + lVar34 * 0x18 + 8 ) = local_f0;
                  *(ulong*)( local_98 + lVar24 ) = uStack_e8;
                  local_2e9 = (int)local_f8 != 0;
               }

            }

            dVar6 = _LC3;
            piVar29 = piVar29 + 1;
            if ((int*)local_a8 == piVar29) break;
            uVar33 = ( ulong ) * (uint*)( (long)&local_b8 + (long)*piVar29 * 4 );
         }
;
         if (*piVar23 == 0) {
            *pdVar45 = _LC3;
            for (int i = 0; i < 3; i++) {
               pdVar45[( i + 1 )] = dVar6;
            }

            goto LAB_001045d2;
         }

         (anonymous_namespace)::Intersect((vec*)&local_278, local_a8, local_98 + 8, pvVar51);
         uVar33 = *puVar4;
         *pdVar45 = local_278;
         pdVar45[1] = dStack_270;
         lVar34 = (long)(int)uVar33 * 0x18;
         pdVar45[2] = local_268;
         pdVar45[3] = dStack_260;
         dVar6 = pdVar45[2];
         pdVar1 = (double*)( lVar43 + lVar34 );
         dVar47 = *pdVar1 - *pdVar45;
         dVar50 = pdVar1[1] - pdVar45[1];
         lVar24 = (long)*(int*)( (long)puVar4 + 4 ) * 0x18;
         pdVar2 = (double*)( lVar43 + lVar24 );
         dVar48 = *pdVar2 - *pdVar45;
         dVar49 = pdVar2[1] - pdVar45[1];
         if (dVar48 * dVar48 + 0.0 + dVar49 * dVar49 + ( pdVar2[2] - dVar6 ) * ( pdVar2[2] - dVar6 ) <= dVar47 * dVar47 + 0.0 + dVar50 * dVar50 + ( pdVar1[2] - dVar6 ) * ( pdVar1[2] - dVar6 )) {
            dVar47 = *(double*)( lVar39 + 0x10 + lVar24 );
         }
 else {
            dVar47 = *(double*)( lVar39 + 0x10 + lVar34 );
         }

         pdVar1 = pdVar45 + 3;
         if (NAN(dVar6) || NAN(*pdVar1)) {
            LAB_00104810:*piVar23 = 0;
         }
 else if (dVar6 == *pdVar1) {
            if (0.0 <= dVar47 * (double)p_Var5) goto LAB_00104810;
         }
 else if (*pdVar1 <= dVar6 && dVar6 != *pdVar1) goto LAB_00104810;
         LAB_001045d2:piVar23 = piVar23 + 1;
         plVar38 = plVar38 + 1;
         pdVar45 = pdVar45 + 4;
      }
 while ( piVar23 != piVar27 );
      piVar23 = (int*)malloc(sVar36);
      uVar33 = 0;
      piVar27 = piVar23;
      do {
         if ((double)( (ulong)pdVar26[uVar33 * 4] & _LC0 ) <= _LC1) {
            *piVar27 = (int)uVar33;
            piVar27 = piVar27 + 1;
         }

         uVar33 = uVar33 + 1;
      }
 while ( uVar18 != uVar33 );
      __size = (long)piVar27 - (long)piVar23;
      uVar33 = (long)__size >> 2;
      __size_00 = uVar33 * 8;
      local_f8 = piVar23;
      local_f0 = uVar33;
      uStack_e8 = uVar18;
      if (uVar18 < uVar33) {
         local_f0 = uVar18;
         piVar27 = (int*)malloc(__size);
         if (uVar18 == 1) {
            *piVar27 = *piVar23;
         }
 else {
            memcpy(piVar27, piVar23, sVar36);
         }

         free(piVar23);
         uStack_e8 = uVar33;
         local_f8 = piVar27;
         if (piVar27 + uVar18 != (int*)( (long)piVar27 + __size )) {
            memset(piVar27 + uVar18, 0, __size + uVar18 * -4);
         }

         local_f0 = uVar33;
         if (uVar33 * 2 < uVar18) {
            LAB_00104bdd:piVar23 = local_f8;
            local_f0 = uVar33;
            piVar27 = (int*)malloc(__size);
            if ((long)__size < 5) {
               sVar36 = __size_00;
               if (__size != 4) goto LAB_001046c0;
               *piVar27 = *piVar23;
            }
 else {
               memmove(piVar27, piVar23, __size);
            }

            LAB_00104c0f:free(piVar23);
            goto LAB_001046c9;
         }

      }
 else if (uVar33 * 2 < uVar18) {
         piVar27 = (int*)0x0;
         sVar36 = 0;
         if (uVar33 != 0) goto LAB_00104bdd;
         LAB_001046c0:__size_00 = sVar36;
         if (piVar23 != (int*)0x0) goto LAB_00104c0f;
         LAB_001046c9:local_f8 = piVar27;
         uStack_e8 = local_f0;
      }

   }

   Permute<linalg::vec<double,4>,int>((Vec*)&local_118, (Vec*)&local_f8);
   Permute<int,int>((Vec*)&local_138, (Vec*)&local_f8);
   plVar38 = local_218;
   plVar28 = (long*)0x0;
   local_218 = (long*)0x0;
   local_210._0_8_ = 0;
   local_210._8_8_ = 0;
   uVar46 = local_210._8_8_;
   local_210._8_8_ = 0;
   if (__size_00 != 0) {
      local_210._8_8_ = uVar46;
      local_218 = (long*)malloc(__size_00);
      local_210._8_8_ = __size_00;
      plVar28 = (long*)memset(local_218, 0xff, __size_00);
   }

   piVar23 = local_f8;
   local_210._0_8_ = __size_00;
   gather<int*,long*,long*>(local_f8, local_f8 + local_f0, plVar38, plVar28);
   if (plVar38 != (long*)0x0) {
      free(plVar38);
      piVar23 = local_f8;
   }

   if (piVar23 != (int*)0x0) {
      free(piVar23);
   }

   uVar33 = local_110;
   pdVar45 = local_118;
   uVar18 = local_130;
   piVar23 = local_138;
   pdVar26 = (double*)0x0;
   if (local_110 == 0) {
      LAB_0010390c:piVar27 = (int*)0x0;
      if (uVar18 != 0) goto LAB_00104af0;
      LAB_00103918:if (pdVar45 != (double*)0x0) goto LAB_001049d7;
   }
 else {
      sVar36 = local_110 * 0x20;
      pdVar26 = (double*)malloc(sVar36);
      if ((long)sVar36 < 0x21) {
         if (sVar36 != 0x20) goto LAB_0010390c;
         dVar6 = pdVar45[1];
         *pdVar26 = *pdVar45;
         pdVar26[1] = dVar6;
         dVar6 = pdVar45[3];
         pdVar26[2] = pdVar45[2];
         pdVar26[3] = dVar6;
         if (uVar18 == 0) goto LAB_001049d2;
         LAB_00104af0:sVar36 = uVar18 * 4;
         piVar27 = (int*)malloc(sVar36);
         if ((long)sVar36 < 5) {
            if (sVar36 == 4) {
               *piVar27 = *piVar23;
            }

         }
 else {
            memmove(piVar27, piVar23, sVar36);
         }

         goto LAB_00103918;
      }

      memmove(pdVar26, pdVar45, sVar36);
      if (uVar18 != 0) goto LAB_00104af0;
      LAB_001049d2:piVar27 = (int*)0x0;
      uVar18 = 0;
      LAB_001049d7:free(pdVar45);
   }

   if (local_138 != (int*)0x0) {
      free(local_138);
   }

   if (local_1f8 != (int*)0x0) {
      free(local_1f8);
   }

   local_1f0._8_8_ = uVar18;
   local_1f0._0_8_ = uVar18;
   local_1f8 = piVar27;
   if (local_1d8 != (double*)0x0) {
      free(local_1d8);
   }

   local_1b0 = (undefined1[16])0x0;
   local_190 = (undefined1[16])0x0;
   local_1b8 = (void*)0x0;
   local_198 = (int*)0x0;
   local_1d0._8_8_ = uVar33;
   local_1d0._0_8_ = uVar33;
   local_1d8 = pdVar26;
   (anonymous_namespace)::Shadow02((_anonymous_namespace_*)&local_f8, param_1, param_2, (SparseIndices*)&local_258, true, *(double*)( this + 0x10 ));
   if (local_1b8 != (void*)0x0) {
      free(local_1b8);
   }

   local_1b8 = local_e0;
   local_e0 = (void*)0x0;
   if (local_198 == (int*)0x0) {
      local_198 = local_f8;
      local_190._8_8_ = uStack_e8;
      local_190._0_8_ = local_f0;
   }
 else {
      free(local_198);
      local_198 = local_f8;
      local_f8 = (int*)0x0;
      local_190._8_8_ = uStack_e8;
      local_190._0_8_ = local_f0;
      if (( local_e0 != (void*)0x0 ) && ( free(local_e0),local_f8 != (int*)0x0 )) {
         free(local_f8);
      }

   }

   local_170 = (undefined1[16])0x0;
   local_150 = (undefined1[16])0x0;
   local_178 = (void*)0x0;
   local_158 = (int*)0x0;
   (anonymous_namespace)::Shadow02((_anonymous_namespace_*)&local_f8, param_2, param_1, (SparseIndices*)&local_238, false, *(double*)( this + 0x10 ));
   if (local_178 != (void*)0x0) {
      free(local_178);
   }

   local_178 = local_e0;
   local_e0 = (void*)0x0;
   if (local_158 == (int*)0x0) {
      local_158 = local_f8;
      local_150._8_8_ = uStack_e8;
      local_150._0_8_ = local_f0;
   }
 else {
      free(local_158);
      local_158 = local_f8;
      local_f8 = (int*)0x0;
      local_150._8_8_ = uStack_e8;
      local_150._0_8_ = local_f0;
      if (( local_e0 != (void*)0x0 ) && ( free(local_e0),local_f8 != (int*)0x0 )) {
         free(local_f8);
      }

   }

   (anonymous_namespace)::Intersect12((_anonymous_namespace_*)&local_f8, param_1, param_2, (Vec*)&local_1b8, (SparseIndices*)&local_258, (Vec*)&local_1f8, (SparseIndices*)&local_218, (Vec*)&local_198, (Vec*)&local_1d8, (SparseIndices*)( this + 0x18 ), true);
   if ((Boolean3*)&local_e0 == this + 0x48) {
      if ((Impl*)( this + 0xa8 ) != (Impl*)&local_f8) goto LAB_00103cba;
      if (local_e0 == (void*)0x0) goto LAB_00103d19;
      LAB_00103d0c:free(local_e0);
      LAB_00103d19:if (local_f8 != (int*)0x0) {
         free(local_f8);
      }

   }
 else {
      if (*(void**)( this + 0x48 ) != (void*)0x0) {
         free(*(void**)( this + 0x48 ));
      }

      pvVar19 = local_e0;
      uVar46 = local_d8._0_8_;
      uVar11 = local_d8._8_8_;
      local_e0 = (void*)0x0;
      local_d8 = (undefined1[16])0x0;
      *(void**)( this + 0x48 ) = pvVar19;
      *(undefined8*)( this + 0x50 ) = uVar46;
      *(undefined8*)( this + 0x58 ) = uVar11;
      if ((Impl*)( this + 0xa8 ) == (Impl*)&local_f8) goto LAB_00103d19;
      LAB_00103cba:if (*(void**)( this + 0xa8 ) != (void*)0x0) {
         free(*(void**)( this + 0xa8 ));
      }

      piVar23 = local_f8;
      local_f8 = (int*)0x0;
      *(int**)( this + 0xa8 ) = piVar23;
      *(ulong*)( this + 0xb0 ) = local_f0;
      *(ulong*)( this + 0xb8 ) = uStack_e8;
      if (local_e0 != (void*)0x0) goto LAB_00103d0c;
   }

   (anonymous_namespace)::Intersect12((_anonymous_namespace_*)&local_f8, param_2, param_1, (Vec*)&local_178, (SparseIndices*)&local_238, (Vec*)&local_1f8, (SparseIndices*)&local_218, (Vec*)&local_158, (Vec*)&local_1d8, (SparseIndices*)( this + 0x30 ), false);
   if ((Boolean3*)&local_e0 == this + 0x60) {
      if ((Impl*)( this + 0xc0 ) != (Impl*)&local_f8) goto LAB_00103deb;
      if (local_e0 == (void*)0x0) goto LAB_00103e4a;
      LAB_00103e3d:free(local_e0);
      LAB_00103e4a:if (local_f8 != (int*)0x0) {
         free(local_f8);
      }

   }
 else {
      if (*(void**)( this + 0x60 ) != (void*)0x0) {
         free(*(void**)( this + 0x60 ));
      }

      pvVar19 = local_e0;
      uVar46 = local_d8._0_8_;
      uVar11 = local_d8._8_8_;
      local_e0 = (void*)0x0;
      local_d8 = (undefined1[16])0x0;
      *(void**)( this + 0x60 ) = pvVar19;
      *(undefined8*)( this + 0x68 ) = uVar46;
      *(undefined8*)( this + 0x70 ) = uVar11;
      if ((Impl*)( this + 0xc0 ) == (Impl*)&local_f8) goto LAB_00103e4a;
      LAB_00103deb:if (*(void**)( this + 0xc0 ) != (void*)0x0) {
         free(*(void**)( this + 0xc0 ));
      }

      piVar23 = local_f8;
      local_f8 = (int*)0x0;
      *(int**)( this + 0xc0 ) = piVar23;
      *(ulong*)( this + 200 ) = local_f0;
      *(ulong*)( this + 0xd0 ) = uStack_e8;
      if (local_e0 != (void*)0x0) goto LAB_00103e3d;
   }

   auVar12._8_8_ = 0;
   auVar12._0_8_ = local_1f0._8_8_;
   local_1f0 = auVar12 << 0x40;
   uVar46 = 0;
   if (local_1f8 != (int*)0x0) {
      free(local_1f8);
      uVar46 = local_1f0._0_8_;
   }

   local_1f0._0_8_ = uVar46;
   local_1f0._8_8_ = local_1f0._0_8_;
   local_1f8 = (int*)0x0;
   auVar13._8_8_ = 0;
   auVar13._0_8_ = local_1d0._8_8_;
   local_1d0 = auVar13 << 0x40;
   uVar46 = 0;
   if (local_1d8 != (double*)0x0) {
      free(local_1d8);
      uVar46 = local_1d0._0_8_;
   }

   local_1d0._0_8_ = uVar46;
   local_1d0._8_8_ = local_1d0._0_8_;
   local_1d8 = (double*)0x0;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = local_190._8_8_;
   local_190 = auVar14 << 0x40;
   uVar46 = 0;
   if (local_198 != (int*)0x0) {
      free(local_198);
      uVar46 = local_190._0_8_;
   }

   local_190._0_8_ = uVar46;
   local_190._8_8_ = local_190._0_8_;
   local_198 = (int*)0x0;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = local_150._8_8_;
   local_150 = auVar15 << 0x40;
   uVar46 = 0;
   if (local_158 != (int*)0x0) {
      free(local_158);
      uVar46 = local_150._0_8_;
   }

   local_150._0_8_ = uVar46;
   uVar18 = local_250;
   local_150._8_8_ = local_150._0_8_;
   local_158 = (int*)0x0;
   local_138 = (int*)0x0;
   uStack_128 = 0;
   uVar33 = local_250 >> 3;
   if (uVar33 == 0) {
      local_130 = 0;
      local_250 = 0;
      if (uVar18 != 0) {
         if (local_258 != (void*)0x0) goto LAB_00104d2d;
         goto LAB_00104d45;
      }

   }
 else {
      local_138 = (int*)malloc(uVar33 * 4);
      uVar18 = 0;
      do {
         *(undefined4*)( (long)local_138 + uVar18 * 4 ) = *(undefined4*)( (long)local_258 + uVar18 * 8 + 4 );
         uVar18 = uVar18 + 1;
         uStack_128 = uVar33;
      }
 while ( uVar33 != uVar18 );
      LAB_00104d2d:local_250 = 0;
      local_130 = uStack_128;
      free(local_258);
      LAB_00104d45:local_258 = (void*)0x0;
      local_248 = local_250;
   }

   uVar18 = local_230;
   local_118 = (double*)0x0;
   uStack_108 = 0;
   uVar33 = local_230 >> 3;
   if (uVar33 == 0) {
      local_110 = 0;
      local_230 = 0;
      if (uVar18 != 0) {
         if (local_238 != (void*)0x0) goto LAB_00104cad;
         goto LAB_00104cc5;
      }

   }
 else {
      local_118 = (double*)malloc(uVar33 * 4);
      uVar18 = 0;
      do {
         *(undefined4*)( (long)local_118 + uVar18 * 4 ) = *(undefined4*)( (long)local_238 + uVar18 * 8 );
         uVar18 = uVar18 + 1;
         uStack_108 = uVar33;
      }
 while ( uVar33 != uVar18 );
      LAB_00104cad:local_230 = 0;
      local_110 = uStack_108;
      free(local_238);
      LAB_00104cc5:local_238 = (void*)0x0;
      local_228 = local_230;
   }

   (anonymous_namespace)::Winding03((_anonymous_namespace_*)&local_f8, param_1, (Vec*)&local_138, (Vec*)&local_1b8, false);
   if ((Impl*)&local_f8 == (Impl*)( this + 0x78 )) {
      if (local_f8 != (int*)0x0) {
         free(local_f8);
      }

   }
 else {
      if (*(void**)( this + 0x78 ) != (void*)0x0) {
         free(*(void**)( this + 0x78 ));
      }

      *(int**)( this + 0x78 ) = local_f8;
      *(ulong*)( this + 0x80 ) = local_f0;
      *(ulong*)( this + 0x88 ) = uStack_e8;
   }

   (anonymous_namespace)::Winding03((_anonymous_namespace_*)&local_f8, param_2, (Vec*)&local_118, (Vec*)&local_178, true);
   if ((Impl*)&local_f8 == (Impl*)( this + 0x90 )) {
      if (local_f8 != (int*)0x0) {
         free(local_f8);
      }

   }
 else {
      if (*(void**)( this + 0x90 ) != (void*)0x0) {
         free(*(void**)( this + 0x90 ));
      }

      *(int**)( this + 0x90 ) = local_f8;
      *(ulong*)( this + 0x98 ) = local_f0;
      *(ulong*)( this + 0xa0 ) = uStack_e8;
   }

   if (local_118 != (double*)0x0) {
      free(local_118);
   }

   if (local_138 != (int*)0x0) {
      free(local_138);
   }

   if (local_158 != (int*)0x0) {
      free(local_158);
   }

   if (local_178 != (void*)0x0) {
      free(local_178);
   }

   if (local_198 != (int*)0x0) {
      free(local_198);
   }

   if (local_1b8 != (void*)0x0) {
      free(local_1b8);
   }

   if (local_1d8 != (double*)0x0) {
      free(local_1d8);
   }

   if (local_1f8 != (int*)0x0) {
      free(local_1f8);
   }

   if (local_218 != (long*)0x0) {
      free(local_218);
   }

   if (local_238 != (void*)0x0) {
      free(local_238);
   }

   if (local_258 != (void*)0x0) {
      free(local_258);
   }

   LAB_00104214:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void manifold::Permute<linalg::vec<double, 4>, int>(manifold::Vec<linalg::vec<double, 4> >&,
   manifold::Vec<int> const&) */void manifold::Permute<linalg::vec<double,4>,int>(Vec *param_1, Vec *param_2) {
   int *piVar1;
   int iVar2;
   void *__ptr;
   ulong uVar3;
   undefined8 uVar4;
   undefined1(*pauVar5)[16];
   ulong uVar6;
   int *piVar7;
   undefined1(*pauVar8)[16];
   undefined8 *puVar9;
   size_t __size;
   __ptr = *(void**)param_1;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   uVar3 = *(ulong*)( param_2 + 8 );
   *(undefined8*)param_1 = 0;
   if (uVar3 == 0) {
      *(undefined8*)( param_1 + 8 ) = 0;
   }
 else {
      __size = uVar3 * 0x20;
      pauVar5 = (undefined1(*) [16])malloc(__size);
      *(ulong*)( param_1 + 0x10 ) = uVar3;
      *(undefined1(**) [16])param_1 = pauVar5;
      if (__size != 0) {
         uVar6 = 0;
         pauVar8 = pauVar5;
         do {
            uVar6 = uVar6 + 1;
            *pauVar8 = (undefined1[16])0x0;
            pauVar8[1] = (undefined1[16])0x0;
            pauVar8 = pauVar8 + 2;
         }
 while ( uVar6 < ( __size - 0x20 >> 5 ) + 1 );
      }

      *(ulong*)( param_1 + 8 ) = uVar3;
      piVar7 = *(int**)param_2;
      if (( uVar3 & 0x3fffffffffffffff ) != 0) {
         piVar1 = piVar7 + uVar3;
         do {
            iVar2 = *piVar7;
            piVar7 = piVar7 + 1;
            puVar9 = (undefined8*)( (long)iVar2 * 0x20 + (long)__ptr );
            uVar4 = puVar9[1];
            *(undefined8*)*pauVar5 = *puVar9;
            *(undefined8*)( *pauVar5 + 8 ) = uVar4;
            uVar4 = puVar9[3];
            *(undefined8*)pauVar5[1] = puVar9[2];
            *(undefined8*)( pauVar5[1] + 8 ) = uVar4;
            pauVar5 = pauVar5 + 2;
         }
 while ( piVar7 != piVar1 );
      }

   }

   if (__ptr == (void*)0x0) {
      return;
   }

   free(__ptr);
   return;
}
/* void manifold::Permute<int, int>(manifold::Vec<int>&, manifold::Vec<int> const&) */void manifold::Permute<int,int>(Vec *param_1, Vec *param_2) {
   long lVar1;
   void *__ptr;
   long lVar2;
   void *pvVar3;
   long lVar4;
   pvVar3 = (void*)0x0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   lVar1 = *(long*)( param_2 + 8 );
   __ptr = *(void**)param_1;
   *(undefined8*)param_1 = 0;
   if (lVar1 != 0) {
      pvVar3 = calloc(lVar1 * 4, 1);
      *(long*)( param_1 + 0x10 ) = lVar1;
      *(void**)param_1 = pvVar3;
   }

   *(long*)( param_1 + 8 ) = lVar1;
   lVar1 = *(long*)( param_2 + 8 );
   lVar4 = 0;
   lVar2 = *(long*)param_2;
   if (lVar1 << 2 != 0) {
      do {
         *(undefined4*)( (long)pvVar3 + lVar4 ) = *(undefined4*)( (long)__ptr + (long)*(int*)( lVar2 + lVar4 ) * 4 );
         lVar4 = lVar4 + 4;
      }
 while ( lVar1 << 2 != lVar4 );
   }

   if (__ptr != (void*)0x0) {
      free(__ptr);
      return;
   }

   return;
}
/* void manifold::gather<int*, long*, long*>(int*, int*, long*, long*) */void manifold::gather<int*,long*,long*>(int *param_1, int *param_2, long *param_3, long *param_4) {
   long lVar1;
   long lVar2;
   lVar2 = (long)param_2 - (long)param_1 >> 2;
   if (lVar2 != 0) {
      lVar1 = 0;
      do {
         param_4[lVar1] = param_3[param_1[lVar1]];
         lVar1 = lVar1 + 1;
      }
 while ( lVar2 != lVar1 );
   }

   return;
}
/* void manifold::Permute<double, int>(manifold::Vec<double>&, manifold::Vec<int> const&) */void manifold::Permute<double,int>(Vec *param_1, Vec *param_2) {
   void *__ptr;
   long lVar1;
   void *pvVar2;
   long lVar3;
   long lVar4;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   lVar4 = *(long*)( param_2 + 8 );
   __ptr = *(void**)param_1;
   *(undefined8*)param_1 = 0;
   if (lVar4 == 0) {
      *(undefined8*)( param_1 + 8 ) = 0;
   }
 else {
      pvVar2 = calloc(lVar4 * 8, 1);
      *(long*)( param_1 + 0x10 ) = lVar4;
      lVar1 = *(long*)param_2;
      lVar3 = lVar4 * 4 >> 2;
      *(void**)param_1 = pvVar2;
      *(long*)( param_1 + 8 ) = lVar4;
      if (lVar3 != 0) {
         lVar4 = 0;
         do {
            *(undefined8*)( (long)pvVar2 + lVar4 * 8 ) = *(undefined8*)( (long)__ptr + (long)*(int*)( lVar1 + lVar4 * 4 ) * 8 );
            lVar4 = lVar4 + 1;
         }
 while ( lVar3 != lVar4 );
      }

   }

   if (__ptr == (void*)0x0) {
      return;
   }

   free(__ptr);
   return;
}
/* void manifold::Permute<linalg::vec<double, 3>, int>(manifold::Vec<linalg::vec<double, 3> >&,
   manifold::Vec<int> const&) */void manifold::Permute<linalg::vec<double,3>,int>(Vec *param_1, Vec *param_2) {
   int *piVar1;
   undefined8 *puVar2;
   int iVar3;
   void *__ptr;
   ulong uVar4;
   undefined8 uVar5;
   undefined1(*pauVar6)[16];
   undefined1(*pauVar7)[16];
   int *piVar8;
   __ptr = *(void**)param_1;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   uVar4 = *(ulong*)( param_2 + 8 );
   *(undefined8*)param_1 = 0;
   if (uVar4 == 0) {
      *(undefined8*)( param_1 + 8 ) = 0;
   }
 else {
      pauVar6 = (undefined1(*) [16])malloc(uVar4 * 0x18);
      *(ulong*)( param_1 + 0x10 ) = uVar4;
      *(undefined1(**) [16])param_1 = pauVar6;
      for (pauVar7 = pauVar6; (undefined1(*) [16])( (long)pauVar6 + uVar4 * 0x18 ) != pauVar7; pauVar7 = (undefined1(*) [16])( pauVar7[1] + 8 )) {
         *(undefined8*)pauVar7[1] = 0;
         *pauVar7 = (undefined1[16])0x0;
      }

      *(ulong*)( param_1 + 8 ) = uVar4;
      piVar8 = *(int**)param_2;
      if (( uVar4 & 0x3fffffffffffffff ) != 0) {
         piVar1 = piVar8 + uVar4;
         do {
            iVar3 = *piVar8;
            piVar8 = piVar8 + 1;
            puVar2 = (undefined8*)( (long)__ptr + (long)iVar3 * 0x18 );
            uVar5 = puVar2[1];
            *(undefined8*)*pauVar6 = *puVar2;
            *(undefined8*)( *pauVar6 + 8 ) = uVar5;
            *(undefined8*)pauVar6[1] = puVar2[2];
            pauVar6 = (undefined1(*) [16])( pauVar6[1] + 8 );
         }
 while ( piVar1 != piVar8 );
      }

   }

   if (__ptr == (void*)0x0) {
      return;
   }

   free(__ptr);
   return;
}

