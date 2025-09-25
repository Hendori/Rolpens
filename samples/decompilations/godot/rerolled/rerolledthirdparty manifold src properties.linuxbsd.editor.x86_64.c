/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* (anonymous namespace)::CheckCCW::TEMPNAMEPLACEHOLDERVALUE(unsigned long) const */uint CheckCCW::operator ()(CheckCCW *this, ulong param_1) {
   double *pdVar1;
   double dVar2;
   double dVar3;
   int iVar4;
   long lVar5;
   long lVar6;
   uint uVar7;
   long lVar8;
   uint uVar9;
   int *piVar10;
   long in_FS_OFFSET;
   double dVar11;
   double dVar12;
   double dVar13;
   double dVar14;
   double dVar15;
   double dVar16;
   double dVar17;
   undefined8 local_58;
   undefined4 local_50;
   int local_4c;
   undefined1 local_48[8];
   double dStack_40;
   undefined1 local_38[16];
   undefined1 local_28[24];
   long local_10;
   lVar5 = *(long*)this;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar7 = 1;
   if (-1 < *(int*)( lVar5 + 8 + param_1 * 0x24 )) {
      pdVar1 = (double*)( *(long*)( this + 0x20 ) + param_1 * 0x18 );
      dVar12 = pdVar1[2];
      dVar17 = pdVar1[1];
      dVar11 = (double)( ( ulong ) * pdVar1 & _LC2 );
      if (( (double)( (ulong)dVar12 & _LC2 ) <= dVar11 ) || ( (double)( (ulong)dVar12 & _LC2 ) <= (double)( (ulong)dVar17 & _LC2 ) )) {
         if (dVar11 < (double)( (ulong)dVar17 & _LC2 )) {
            dVar11 = 0.0;
            dVar13 = _LC1;
         }
 else {
            dVar11 = _LC1;
            dVar17 = *pdVar1;
            dVar13 = 0.0;
         }

         dVar14 = 0.0;
         dVar12 = dVar17;
      }
 else {
         dVar13 = 0.0;
         dVar11 = 0.0;
         dVar14 = _LC1;
      }

      dVar17 = dVar14;
      dVar15 = dVar11;
      dVar16 = dVar13;
      if (dVar12 < 0.0) {
         dVar17 = (double)( (ulong)dVar14 ^ _LC3 );
         dVar15 = (double)( (ulong)dVar11 ^ _LC3 );
         dVar16 = (double)( (ulong)dVar13 ^ _LC3 );
      }

      lVar6 = *(long*)( this + 0x10 );
      local_50 = 2;
      _local_48 = (undefined1[16])0x0;
      local_58 = _LC4;
      piVar10 = (int*)&local_58;
      local_38 = (undefined1[16])0x0;
      local_28._0_16_ = (undefined1[16])0x0;
      do {
         iVar4 = *piVar10;
         piVar10 = piVar10 + 1;
         lVar8 = (long)iVar4 * 0x10;
         pdVar1 = (double*)( lVar6 + (long)*(int*)( lVar5 + ( param_1 * 3 + (long)iVar4 ) * 0xc ) * 0x18 );
         dVar12 = pdVar1[1];
         dVar2 = *pdVar1;
         dVar3 = pdVar1[2];
         *(double*)( local_48 + lVar8 ) = dVar15 * dVar12 + dVar17 * dVar2 + dVar16 * dVar3;
         *(double*)( local_48 + lVar8 + 8 ) = dVar12 * dVar14 + dVar2 * dVar13 + dVar3 * dVar11;
      }
 while ( &local_4c != piVar10 );
      dVar17 = *(double*)( this + 0x30 );
      dVar16 = (double)local_38._8_8_ - dStack_40;
      dVar13 = (double)( _LC2 & (ulong)dVar17 );
      dVar15 = (double)local_28._0_8_ - (double)local_48;
      dVar14 = (double)local_38._0_8_ - (double)local_48;
      dVar12 = (double)local_28._8_8_ - dStack_40;
      dVar11 = fma(dVar14, dVar12, (double)( _LC3 ^ (ulong)dVar16 ) * dVar15);
      uVar9 = 0;
      dVar14 = dVar14 * dVar14 + 0.0 + dVar16 * dVar16;
      dVar12 = dVar15 * dVar15 + 0.0 + dVar12 * dVar12;
      if (dVar12 <= dVar14) {
         dVar12 = dVar14;
      }

      if (dVar12 * dVar13 * dVar13 < dVar11 * dVar11 * __LC5) {
         uVar9 = ( ( 0.0 < dVar11 ) - 1 ) + ( uint )(0.0 < dVar11);
      }

      uVar7 = ~uVar9 >> 0x1f;
      if (dVar17 <= 0.0) {
         uVar7 = ( uint )(uVar9 == 0);
      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar7;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* double manifold::AtomicAdd<double>(double&, double) [clone .isra.0] */double manifold::AtomicAdd<double>(double *param_1, double param_2) {
   long lVar1;
   double dVar2;
   long in_FS_OFFSET;
   bool bVar3;
   double local_18;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   local_18 = *param_1;
   do {
      LOCK();
      dVar2 = *param_1;
      bVar3 = local_18 == dVar2;
      if (bVar3) {
         *param_1 = local_18 + param_2;
         dVar2 = local_18;
      }

      UNLOCK();
      local_18 = dVar2;
   }
 while ( !bVar3 );
   if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_2;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* manifold::Halfedge* std::__upper_bound<manifold::Halfedge*, manifold::Halfedge,
   __gnu_cxx::__ops::_Val_less_iter>(manifold::Halfedge*, manifold::Halfedge*, manifold::Halfedge
   const&, __gnu_cxx::__ops::_Val_less_iter) [clone .isra.0] */Halfedge *std::__upper_bound<manifold::Halfedge*,manifold::Halfedge,__gnu_cxx::__ops::_Val_less_iter>(Halfedge *param_1, long param_2, int param_3, int param_4) {
   Halfedge *pHVar1;
   int iVar2;
   ulong uVar3;
   ulong uVar4;
   uVar4 = ( param_2 - (long)param_1 >> 2 ) * -0x5555555555555555;
   joined_r0x00100373:do {
      uVar3 = uVar4;
      if ((long)uVar3 < 1) {
         return param_1;
      }

      uVar4 = (long)uVar3 >> 1;
      pHVar1 = param_1 + ( ( uVar3 & 0xfffffffffffffffe ) + uVar4 ) * 4;
      iVar2 = *(int*)pHVar1;
      if (iVar2 == param_3) goto LAB_001003a8;
   }
 while ( iVar2 != param_3 && param_3 <= iVar2 );
   goto LAB_0010038f;
   LAB_001003a8:if (*(int*)( pHVar1 + 4 ) <= param_4) {
      LAB_0010038f:param_1 = pHVar1 + 0xc;
      uVar4 = ( uVar3 - uVar4 ) - 1;
   }

   goto joined_r0x00100373;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* manifold::Halfedge* std::__lower_bound<manifold::Halfedge*, manifold::Halfedge,
   __gnu_cxx::__ops::_Iter_less_val>(manifold::Halfedge*, manifold::Halfedge*, manifold::Halfedge
   const&, __gnu_cxx::__ops::_Iter_less_val) [clone .isra.0] */Halfedge *std::__lower_bound<manifold::Halfedge*,manifold::Halfedge,__gnu_cxx::__ops::_Iter_less_val>(Halfedge *param_1, long param_2, int param_3, int param_4) {
   Halfedge *pHVar1;
   ulong uVar2;
   ulong uVar3;
   uVar3 = ( param_2 - (long)param_1 >> 2 ) * -0x5555555555555555;
   joined_r0x001003e3:do {
      uVar2 = uVar3;
      if ((long)uVar2 < 1) {
         return param_1;
      }

      uVar3 = (long)uVar2 >> 1;
      pHVar1 = param_1 + ( ( uVar2 & 0xfffffffffffffffe ) + uVar3 ) * 4;
      if (*(int*)pHVar1 == param_3) goto LAB_00100418;
   }
 while ( param_3 <= *(int*)pHVar1 );
   goto LAB_001003ff;
   LAB_00100418:if (*(int*)( pHVar1 + 4 ) < param_4) {
      LAB_001003ff:param_1 = pHVar1 + 0xc;
      uVar3 = ( uVar2 - uVar3 ) - 1;
   }

   goto joined_r0x001003e3;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* void std::__insertion_sort<manifold::Halfedge*,
   __gnu_cxx::__ops::_Iter_less_iter>(manifold::Halfedge*, manifold::Halfedge*,
   __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */void std::__insertion_sort<manifold::Halfedge*,__gnu_cxx::__ops::_Iter_less_iter>(int *param_1, int *param_2) {
   int *piVar1;
   undefined8 uVar2;
   int iVar3;
   bool bVar4;
   int *piVar5;
   int iVar6;
   size_t __n;
   int *piVar7;
   int iVar8;
   if (param_1 == param_2) {
      return;
   }

   piVar7 = param_1 + 3;
   if (param_2 != piVar7) {
      piVar1 = (int*)( (long)param_1 + ( (long)param_2 + ( -0x18 - (long)param_1 ) & 0xfffffffffffffffcU ) + 0x18 );
      do {
         while (true) {
            uVar2 = *(undefined8*)piVar7;
            iVar6 = (int)uVar2;
            iVar8 = (int)( (ulong)uVar2 >> 0x20 );
            bVar4 = iVar6 < *param_1;
            if (*param_1 == iVar6) {
               bVar4 = iVar8 < param_1[1];
            }

            iVar3 = piVar7[2];
            piVar5 = piVar7;
            if (bVar4) break;
            while (true) {
               bVar4 = iVar6 < piVar5[-3];
               if (iVar6 == piVar5[-3]) {
                  bVar4 = iVar8 < piVar5[-2];
               }

               if (!bVar4) break;
               *(undefined8*)piVar5 = *(undefined8*)( piVar5 + -3 );
               piVar5[2] = piVar5[-1];
               piVar5 = piVar5 + -3;
            }
;
            piVar7 = piVar7 + 3;
            piVar5[2] = iVar3;
            *(undefined8*)piVar5 = uVar2;
            if (piVar7 == piVar1) {
               return;
            }

         }
;
         __n = (long)piVar7 - (long)param_1;
         if ((long)__n < 0xd) {
            if (__n == 0xc) {
               *(undefined8*)piVar7 = *(undefined8*)param_1;
               piVar7[2] = param_1[2];
            }

         }
 else {
            memmove((void*)( ( 0xc - __n ) + (long)piVar7 ), param_1, __n);
         }

         piVar7 = piVar7 + 3;
         param_1[2] = iVar3;
         *(undefined8*)param_1 = uVar2;
      }
 while ( piVar7 != piVar1 );
   }

   return;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* manifold::Halfedge* std::__move_merge<manifold::Halfedge*, manifold::Halfedge*,
   __gnu_cxx::__ops::_Iter_less_iter>(manifold::Halfedge*, manifold::Halfedge*, manifold::Halfedge*,
   manifold::Halfedge*, manifold::Halfedge*, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */Halfedge *std::__move_merge<manifold::Halfedge*,manifold::Halfedge*,__gnu_cxx::__ops::_Iter_less_iter>(int *param_1, int *param_2, int *param_3, int *param_4, undefined8 *param_5) {
   int *piVar1;
   size_t __n;
   int *piVar2;
   undefined8 *puVar3;
   size_t __n_00;
   piVar1 = param_3;
   puVar3 = param_5;
   if (param_2 != param_1) {
      do {
         while (true) {
            param_3 = piVar1;
            param_5 = puVar3;
            if (param_4 == piVar1) goto LAB_001005b3;
            if (*piVar1 != *param_1) break;
            if (piVar1[1] < param_1[1]) goto LAB_0010056a;
            LAB_00100598:piVar2 = param_1 + 3;
            param_5 = (undefined8*)( (long)puVar3 + 0xc );
            *puVar3 = *(undefined8*)param_1;
            *(int*)( puVar3 + 1 ) = param_1[2];
            param_1 = piVar2;
            puVar3 = param_5;
            if (param_2 == piVar2) goto LAB_001005b3;
         }
;
         if (*param_1 <= *piVar1) goto LAB_00100598;
         LAB_0010056a:param_5 = (undefined8*)( (long)puVar3 + 0xc );
         param_3 = piVar1 + 3;
         *puVar3 = *(undefined8*)piVar1;
         *(int*)( puVar3 + 1 ) = piVar1[2];
         piVar1 = param_3;
         puVar3 = param_5;
      }
 while ( param_2 != param_1 );
   }

   LAB_001005b3:__n = (long)param_2 - (long)param_1;
   if ((long)__n < 0xd) {
      if (__n == 0xc) {
         *param_5 = *(undefined8*)param_1;
         *(int*)( param_5 + 1 ) = param_1[2];
      }

   }
 else {
      param_5 = (undefined8*)memmove(param_5, param_1, __n);
   }

   __n_00 = (long)param_4 - (long)param_3;
   param_5 = (undefined8*)( (long)param_5 + __n );
   if ((long)__n_00 < 0xd) {
      if (__n_00 == 0xc) {
         *param_5 = *(undefined8*)param_3;
         *(int*)( param_5 + 1 ) = param_3[2];
      }

   }
 else {
      param_5 = (undefined8*)memmove(param_5, param_3, __n_00);
   }

   return (Halfedge*)( (long)param_5 + __n_00 );
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* void std::__merge_sort_loop<manifold::Halfedge*, manifold::Halfedge*, long,
   __gnu_cxx::__ops::_Iter_less_iter>(manifold::Halfedge*, manifold::Halfedge*, manifold::Halfedge*,
   long, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */void std::__merge_sort_loop<manifold::Halfedge*,manifold::Halfedge*,long,__gnu_cxx::__ops::_Iter_less_iter>(long param_1, long param_2, Halfedge *param_3, long param_4) {
   long lVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   lVar2 = param_2 - param_1 >> 2;
   lVar3 = lVar2 * -0x5555555555555555;
   lVar1 = param_4 * 2;
   if (lVar1 == lVar3 || SBORROW8(lVar1, lVar3) != lVar1 + lVar2 * 0x5555555555555555 < 0) {
      lVar2 = param_1;
      do {
         param_1 = lVar2 + param_4 * 0x18;
         lVar3 = param_1 + param_4 * -0xc;
         param_3 = __move_merge<manifold::Halfedge*,manifold::Halfedge*,__gnu_cxx::__ops::_Iter_less_iter>(lVar2, lVar3, lVar3, param_1, param_3);
         lVar4 = param_2 - param_1 >> 2;
         lVar3 = lVar4 * -0x5555555555555555;
         lVar2 = param_1;
      }
 while ( lVar1 == lVar3 || SBORROW8(lVar1, lVar3) != lVar1 + lVar4 * 0x5555555555555555 < 0 );
   }

   if (param_4 <= lVar3) {
      lVar3 = param_4;
   }

   lVar1 = param_1 + lVar3 * 0xc;
   __move_merge<manifold::Halfedge*,manifold::Halfedge*,__gnu_cxx::__ops::_Iter_less_iter>(param_1, lVar1, lVar1, param_2, param_3);
   return;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* void std::__merge_sort_with_buffer<manifold::Halfedge*, manifold::Halfedge*,
   __gnu_cxx::__ops::_Iter_less_iter>(manifold::Halfedge*, manifold::Halfedge*, manifold::Halfedge*,
   __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */void std::__merge_sort_with_buffer<manifold::Halfedge*,manifold::Halfedge*,__gnu_cxx::__ops::_Iter_less_iter>(long param_1, long param_2, long param_3) {
   long lVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   lVar1 = param_2 - param_1;
   lVar2 = ( lVar1 >> 2 ) * -0x5555555555555555;
   lVar4 = param_1;
   if (lVar1 < 0x49) {
      __insertion_sort<manifold::Halfedge*,__gnu_cxx::__ops::_Iter_less_iter>(param_1, param_2);
      return;
   }

   do {
      lVar3 = lVar4 + 0x54;
      __insertion_sort<manifold::Halfedge*,__gnu_cxx::__ops::_Iter_less_iter>(lVar4, lVar3);
      lVar4 = lVar3;
   }
 while ( 0x48 < param_2 - lVar3 );
   __insertion_sort<manifold::Halfedge*,__gnu_cxx::__ops::_Iter_less_iter>(lVar3, param_2);
   if (0x54 < lVar1) {
      lVar4 = 7;
      do {
         __merge_sort_loop<manifold::Halfedge*,manifold::Halfedge*,long,__gnu_cxx::__ops::_Iter_less_iter>(param_1, param_2, param_3, lVar4);
         lVar5 = lVar4 * 4;
         __merge_sort_loop<manifold::Halfedge*,manifold::Halfedge*,long,__gnu_cxx::__ops::_Iter_less_iter>(param_3, param_3 + lVar1, param_1, lVar4 * 2);
         lVar3 = lVar4 * -4;
         lVar4 = lVar5;
      }
 while ( lVar2 + lVar3 != 0 && lVar5 <= lVar2 );
   }

   return;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* void std::__move_merge_adaptive<manifold::Halfedge*, manifold::Halfedge*, manifold::Halfedge*,
   __gnu_cxx::__ops::_Iter_less_iter>(manifold::Halfedge*, manifold::Halfedge*, manifold::Halfedge*,
   manifold::Halfedge*, manifold::Halfedge*, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */void std::__move_merge_adaptive<manifold::Halfedge*,manifold::Halfedge*,manifold::Halfedge*,__gnu_cxx::__ops::_Iter_less_iter>(int *param_1, int *param_2, int *param_3, int *param_4, undefined8 *param_5) {
   int *piVar1;
   size_t __n;
   do {
      if (param_2 == param_1) {
         return;
      }

      if (param_4 == param_3) {
         if (param_2 == param_1) {
            return;
         }

         __n = (long)param_2 - (long)param_1;
         if ((long)__n < 0xd) {
            if (__n != 0xc) {
               return;
            }

            *param_5 = *(undefined8*)param_1;
            *(int*)( param_5 + 1 ) = param_1[2];
            return;
         }

         memmove(param_5, param_1, __n);
         return;
      }

      if (*param_3 == *param_1) {
         if (param_3[1] < param_1[1]) goto LAB_001007ca;
         LAB_001007f7:*param_5 = *(undefined8*)param_1;
         *(int*)( param_5 + 1 ) = param_1[2];
         piVar1 = param_3;
         param_1 = param_1 + 3;
      }
 else {
         if (*param_1 <= *param_3) goto LAB_001007f7;
         LAB_001007ca:piVar1 = param_3 + 3;
         *param_5 = *(undefined8*)param_3;
         *(int*)( param_5 + 1 ) = param_3[2];
      }

      param_5 = (undefined8*)( (long)param_5 + 0xc );
      param_3 = piVar1;
   }
 while ( true );
}
void FUN_001007df(int *param_1, int *param_2, int *param_3, int *param_4, undefined8 *param_5) {
   int *piVar1;
   size_t __n;
   do {
      if (param_2 == param_1) {
         return;
      }

      if (param_4 == param_3) {
         if (param_2 == param_1) {
            return;
         }

         __n = (long)param_2 - (long)param_1;
         if ((long)__n < 0xd) {
            if (__n != 0xc) {
               return;
            }

            *param_5 = *(undefined8*)param_1;
            *(int*)( param_5 + 1 ) = param_1[2];
            return;
         }

         memmove(param_5, param_1, __n);
         return;
      }

      if (*param_3 == *param_1) {
         if (param_3[1] < param_1[1]) goto LAB_001007ca;
         LAB_001007f7:*param_5 = *(undefined8*)param_1;
         *(int*)( param_5 + 1 ) = param_1[2];
         piVar1 = param_3;
         param_1 = param_1 + 3;
      }
 else {
         if (*param_1 <= *param_3) goto LAB_001007f7;
         LAB_001007ca:piVar1 = param_3 + 3;
         *param_5 = *(undefined8*)param_3;
         *(int*)( param_5 + 1 ) = param_3[2];
      }

      param_5 = (undefined8*)( (long)param_5 + 0xc );
      param_3 = piVar1;
   }
 while ( true );
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* void std::__move_merge_adaptive_backward<manifold::Halfedge*, manifold::Halfedge*,
   manifold::Halfedge*, __gnu_cxx::__ops::_Iter_less_iter>(manifold::Halfedge*, manifold::Halfedge*,
   manifold::Halfedge*, manifold::Halfedge*, manifold::Halfedge*, __gnu_cxx::__ops::_Iter_less_iter)
   [clone .isra.0] */void std::__move_merge_adaptive_backward<manifold::Halfedge*,manifold::Halfedge*,manifold::Halfedge*,__gnu_cxx::__ops::_Iter_less_iter>(int *param_1, int *param_2, int *param_3, int *param_4, long param_5) {
   size_t sVar1;
   undefined8 *puVar2;
   if (param_1 == param_2) {
      sVar1 = (long)param_4 - (long)param_3;
      if (0xc < (long)sVar1) {
         memmove((void*)( param_5 - sVar1 ), param_3, sVar1);
         return;
      }

      if (sVar1 == 0xc) {
         *(undefined8*)( param_5 + -0xc ) = *(undefined8*)param_3;
         *(int*)( param_5 + -4 ) = param_3[2];
         return;
      }

   }
 else if (param_3 != param_4) {
      param_2 = param_2 + -3;
      puVar2 = (undefined8*)( param_5 + -0xc );
      param_4 = param_4 + -3;
      do {
         if (*param_4 == *param_2) {
            if (param_4[1] < param_2[1]) goto LAB_0010087a;
            LAB_001008a1:*puVar2 = *(undefined8*)param_4;
            *(int*)( puVar2 + 1 ) = param_4[2];
            if (param_3 == param_4) {
               return;
            }

            param_4 = param_4 + -3;
         }
 else {
            if (*param_2 <= *param_4) goto LAB_001008a1;
            LAB_0010087a:*puVar2 = *(undefined8*)param_2;
            *(int*)( puVar2 + 1 ) = param_2[2];
            if (param_1 == param_2) {
               sVar1 = (long)param_4 + ( 0xc - (long)param_3 );
               if (0xc < (long)sVar1) {
                  memmove((void*)( (long)puVar2 - sVar1 ), param_3, sVar1);
                  return;
               }

               if (sVar1 != 0xc) {
                  return;
               }

               *(undefined8*)( (long)puVar2 + -0xc ) = *(undefined8*)param_3;
               *(int*)( (long)puVar2 + -4 ) = param_3[2];
               return;
            }

            param_2 = param_2 + -3;
         }

         puVar2 = (undefined8*)( (long)puVar2 + -0xc );
      }
 while ( true );
   }

   return;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* void std::__stable_sort_adaptive<manifold::Halfedge*, manifold::Halfedge*,
   __gnu_cxx::__ops::_Iter_less_iter>(manifold::Halfedge*, manifold::Halfedge*, manifold::Halfedge*,
   manifold::Halfedge*, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */void std::__stable_sort_adaptive<manifold::Halfedge*,manifold::Halfedge*,__gnu_cxx::__ops::_Iter_less_iter>(undefined8 *param_1, undefined8 *param_2, long param_3, undefined8 *param_4) {
   size_t __n;
   size_t __n_00;
   __n = param_3 - (long)param_2;
   __n_00 = (long)param_2 - (long)param_1;
   __merge_sort_with_buffer<manifold::Halfedge*,manifold::Halfedge*,__gnu_cxx::__ops::_Iter_less_iter>(param_1, param_2, param_4);
   __merge_sort_with_buffer<manifold::Halfedge*,manifold::Halfedge*,__gnu_cxx::__ops::_Iter_less_iter>(param_2, param_3, param_4);
   if ((long)__n_00 <= (long)__n) {
      if ((long)__n_00 < 0xd) {
         if (__n_00 == 0xc) {
            *param_4 = *param_1;
            *(undefined4*)( param_4 + 1 ) = *(undefined4*)( param_1 + 1 );
         }

      }
 else {
         memmove(param_4, param_1, __n_00);
      }

      __move_merge_adaptive<manifold::Halfedge*,manifold::Halfedge*,manifold::Halfedge*,__gnu_cxx::__ops::_Iter_less_iter>(param_4, (long)param_4 + __n_00, param_2, param_3, param_1);
      return;
   }

   if ((long)__n < 0xd) {
      if (__n == 0xc) {
         *param_4 = *param_2;
         *(undefined4*)( param_4 + 1 ) = *(undefined4*)( param_2 + 1 );
      }

   }
 else {
      memmove(param_4, param_2, __n);
   }

   __move_merge_adaptive_backward<manifold::Halfedge*,manifold::Halfedge*,manifold::Halfedge*,__gnu_cxx::__ops::_Iter_less_iter>(param_1, param_2, param_4, (long)param_4 + __n, param_3);
   return;
}
/* manifold::Halfedge* std::_V2::__rotate<manifold::Halfedge*>(manifold::Halfedge*,
   manifold::Halfedge*, manifold::Halfedge*, std::random_access_iterator_tag) [clone .isra.0] */Halfedge *std::_V2::__rotate<manifold::Halfedge*>(Halfedge *param_1, Halfedge *param_2, Halfedge *param_3) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long lVar4;
   Halfedge *pHVar5;
   Halfedge *pHVar6;
   Halfedge *pHVar7;
   Halfedge *pHVar8;
   size_t sVar9;
   long lVar10;
   long lVar11;
   long lVar12;
   if (param_1 != param_2) {
      if (param_2 == param_3) {
         return param_1;
      }

      lVar10 = (long)param_2 - (long)param_1 >> 2;
      lVar3 = (long)param_3 - (long)param_1 >> 2;
      lVar11 = lVar10 * -0x5555555555555555;
      lVar4 = lVar3 * -0x5555555555555555;
      pHVar5 = param_1;
      pHVar7 = param_2;
      if (lVar3 * 0x5555555555555555 + lVar10 * 0x5555555555555556 != 0) {
         while (true) {
            lVar12 = lVar4 - lVar11;
            lVar3 = lVar4;
            lVar10 = lVar4;
            lVar4 = lVar12;
            if (lVar11 < lVar12) {
               do {
                  lVar10 = lVar11;
                  if (lVar10 == 1) {
                     uVar2 = *(undefined8*)pHVar5;
                     uVar1 = *(undefined4*)( pHVar5 + 8 );
                     sVar9 = lVar3 * 0xc - 0xc;
                     if ((long)sVar9 < 0xd) {
                        if (sVar9 == 0xc) {
                           *(undefined8*)pHVar5 = *(undefined8*)( pHVar5 + 0xc );
                           *(undefined4*)( pHVar5 + 8 ) = *(undefined4*)( pHVar5 + 0x14 );
                        }

                     }
 else {
                        memmove(pHVar5, pHVar5 + 0xc, sVar9);
                     }

                     *(undefined8*)( pHVar5 + sVar9 ) = uVar2;
                     *(undefined4*)( pHVar5 + sVar9 + 8 ) = uVar1;
                     goto LAB_00100bd1;
                  }

                  if (0 < lVar12) {
                     lVar11 = 0;
                     pHVar7 = pHVar5;
                     pHVar6 = pHVar5 + lVar10 * 0xc;
                     do {
                        uVar2 = *(undefined8*)pHVar7;
                        lVar11 = lVar11 + 1;
                        uVar1 = *(undefined4*)( pHVar7 + 8 );
                        *(undefined8*)pHVar7 = *(undefined8*)pHVar6;
                        *(undefined4*)( pHVar7 + 8 ) = *(undefined4*)( pHVar6 + 8 );
                        *(undefined8*)pHVar6 = uVar2;
                        *(undefined4*)( pHVar6 + 8 ) = uVar1;
                        pHVar7 = pHVar7 + 0xc;
                        pHVar6 = pHVar6 + 0xc;
                     }
 while ( lVar12 != lVar11 );
                     pHVar5 = pHVar5 + lVar12 * 0xc;
                  }

                  if (lVar3 % lVar10 == 0) goto LAB_00100bd1;
                  lVar11 = lVar10 - lVar3 % lVar10;
                  lVar12 = lVar10 - lVar11;
                  lVar3 = lVar10;
                  lVar4 = lVar12;
               }
 while ( lVar11 < lVar12 );
            }

            pHVar7 = pHVar5 + lVar10 * 0xc;
            if (lVar4 == 1) break;
            pHVar6 = pHVar5 + lVar11 * 0xc;
            if (0 < lVar11) {
               lVar3 = 0;
               pHVar8 = pHVar6;
               do {
                  uVar2 = *(undefined8*)( pHVar8 + -0xc );
                  lVar3 = lVar3 + 1;
                  uVar1 = *(undefined4*)( pHVar8 + -4 );
                  *(undefined8*)( pHVar8 + -0xc ) = *(undefined8*)( pHVar7 + -0xc );
                  *(undefined4*)( pHVar8 + -4 ) = *(undefined4*)( pHVar7 + -4 );
                  *(undefined8*)( pHVar7 + -0xc ) = uVar2;
                  *(undefined4*)( pHVar7 + -4 ) = uVar1;
                  pHVar7 = pHVar7 + -0xc;
                  pHVar8 = pHVar8 + -0xc;
                  pHVar6 = pHVar5;
               }
 while ( lVar11 != lVar3 );
            }

            lVar11 = lVar10 % lVar4;
            pHVar5 = pHVar6;
            if (lVar11 == 0) {
               LAB_00100bd1:return param_1 + ( (long)param_3 - (long)param_2 );
            }

         }
;
         sVar9 = lVar10 * 0xc - 0xc;
         uVar2 = *(undefined8*)( pHVar5 + sVar9 );
         uVar1 = *(undefined4*)( pHVar5 + sVar9 + 8 );
         if ((long)sVar9 < 0xd) {
            if (sVar9 == 0xc) {
               *(undefined8*)( pHVar7 + -0xc ) = *(undefined8*)pHVar5;
               *(undefined4*)( pHVar7 + -4 ) = *(undefined4*)( pHVar5 + 8 );
            }

         }
 else {
            memmove(pHVar5 + 0xc, pHVar5, sVar9);
         }

         *(undefined8*)pHVar5 = uVar2;
         *(undefined4*)( pHVar5 + 8 ) = uVar1;
         goto LAB_00100bd1;
      }

      do {
         uVar2 = *(undefined8*)pHVar5;
         pHVar6 = pHVar5 + 0xc;
         uVar1 = *(undefined4*)( pHVar5 + 8 );
         *(undefined8*)pHVar5 = *(undefined8*)pHVar7;
         *(undefined4*)( pHVar5 + 8 ) = *(undefined4*)( pHVar7 + 8 );
         *(undefined8*)pHVar7 = uVar2;
         *(undefined4*)( pHVar7 + 8 ) = uVar1;
         pHVar5 = pHVar6;
         pHVar7 = pHVar7 + 0xc;
      }
 while ( param_2 != pHVar6 );
      param_3 = param_1 + ( ( ulong )(param_2 + ( -0xc - (long)param_1 )) & 0xfffffffffffffffc ) + 0xc;
   }

   return param_3;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* void std::__merge_without_buffer<manifold::Halfedge*, long,
   __gnu_cxx::__ops::_Iter_less_iter>(manifold::Halfedge*, manifold::Halfedge*, manifold::Halfedge*,
   long, long, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */void std::__merge_without_buffer<manifold::Halfedge*,long,__gnu_cxx::__ops::_Iter_less_iter>(Halfedge *param_1, Halfedge *param_2, undefined8 param_3, long param_4, long param_5) {
   int iVar1;
   int iVar2;
   Halfedge *pHVar3;
   Halfedge *pHVar4;
   int iVar5;
   Halfedge *pHVar6;
   long lVar7;
   Halfedge *pHVar8;
   long lVar9;
   if (( param_5 != 0 ) && ( param_4 != 0 )) {
      if (param_4 + param_5 != 2) {
         if (param_4 <= param_5) goto LAB_00100d85;
         do {
            lVar7 = param_4 / 2;
            pHVar4 = param_1 + ( ( param_4 - ( param_4 >> 0x3f ) & 0xfffffffffffffffeU ) + lVar7 ) * 4;
            pHVar3 = __lower_bound<manifold::Halfedge*,manifold::Halfedge,__gnu_cxx::__ops::_Iter_less_val>(param_2, param_3, *(undefined4*)pHVar4, *(undefined4*)( pHVar4 + 4 ));
            lVar9 = ( (long)pHVar3 - (long)param_2 >> 2 ) * -0x5555555555555555;
            pHVar6 = param_2;
            pHVar8 = param_1;
            param_2 = pHVar3;
            while (true) {
               param_1 = _V2::__rotate<manifold::Halfedge*>(pHVar4, pHVar6, param_2);
               param_5 = param_5 - lVar9;
               __merge_without_buffer<manifold::Halfedge*,long,__gnu_cxx::__ops::_Iter_less_iter>(pHVar8, pHVar4, param_1, lVar7, lVar9);
               param_4 = param_4 - lVar7;
               if (param_4 == 0) {
                  return;
               }

               if (param_5 == 0) {
                  return;
               }

               if (param_5 + param_4 == 2) goto LAB_00100dde;
               if (param_5 < param_4) break;
               LAB_00100d85:lVar9 = param_5 / 2;
               pHVar3 = param_2 + ( ( param_5 - ( param_5 >> 0x3f ) & 0xfffffffffffffffeU ) + lVar9 ) * 4;
               pHVar4 = __upper_bound<manifold::Halfedge*,manifold::Halfedge,__gnu_cxx::__ops::_Val_less_iter>(param_1, param_2, *(int*)pHVar3, *(int*)( pHVar3 + 4 ));
               lVar7 = ( (long)pHVar4 - (long)param_1 >> 2 ) * -0x5555555555555555;
               pHVar6 = param_2;
               pHVar8 = param_1;
               param_2 = pHVar3;
            }
;
         }
 while ( true );
      }

      LAB_00100dde:iVar1 = *(int*)param_1;
      if (*(int*)param_2 == iVar1) {
         iVar5 = *(int*)( param_1 + 4 );
         if (iVar5 <= *(int*)( param_2 + 4 )) {
            return;
         }

      }
 else {
         if (iVar1 <= *(int*)param_2) {
            return;
         }

         iVar5 = *(int*)( param_1 + 4 );
      }

      iVar2 = *(int*)( param_1 + 8 );
      *(undefined8*)param_1 = *(undefined8*)param_2;
      *(int*)( param_1 + 8 ) = *(int*)( param_2 + 8 );
      *(int*)( param_2 + 8 ) = iVar2;
      *(ulong*)param_2 = CONCAT44(iVar5, iVar1);
   }

   return;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* void std::__inplace_stable_sort<manifold::Halfedge*,
   __gnu_cxx::__ops::_Iter_less_iter>(manifold::Halfedge*, manifold::Halfedge*,
   __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */void std::__inplace_stable_sort<manifold::Halfedge*,__gnu_cxx::__ops::_Iter_less_iter>(long param_1, long param_2) {
   long lVar1;
   ulong uVar2;
   long lVar3;
   if (0xa8 < param_2 - param_1) {
      uVar2 = ( param_2 - param_1 >> 2 ) * -0x5555555555555555;
      lVar3 = ( ( uVar2 & 0xfffffffffffffffe ) + ( (long)uVar2 >> 1 ) ) * 4;
      lVar1 = param_1 + lVar3;
      __inplace_stable_sort<manifold::Halfedge*,__gnu_cxx::__ops::_Iter_less_iter>(param_1, lVar1);
      __inplace_stable_sort<manifold::Halfedge*,__gnu_cxx::__ops::_Iter_less_iter>(lVar1, param_2);
      __merge_without_buffer<manifold::Halfedge*,long,__gnu_cxx::__ops::_Iter_less_iter>(param_1, lVar1, param_2, ( lVar3 >> 2 ) * -0x5555555555555555, ( param_2 - lVar1 >> 2 ) * -0x5555555555555555);
      return;
   }

   __insertion_sort<manifold::Halfedge*,__gnu_cxx::__ops::_Iter_less_iter>();
   return;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* void std::__merge_adaptive_resize<manifold::Halfedge*, long, manifold::Halfedge*,
   __gnu_cxx::__ops::_Iter_less_iter>(manifold::Halfedge*, manifold::Halfedge*, manifold::Halfedge*,
   long, long, manifold::Halfedge*, long, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */void std::__merge_adaptive_resize<manifold::Halfedge*,long,manifold::Halfedge*,__gnu_cxx::__ops::_Iter_less_iter>(Halfedge *param_1, Halfedge *param_2, long param_3, long param_4, long param_5, undefined8 *param_6, long param_7) {
   ulong uVar1;
   Halfedge *pHVar2;
   Halfedge *__src;
   size_t sVar3;
   long lVar4;
   long lVar5;
   size_t sVar6;
   Halfedge *pHVar7;
   long lVar8;
   Halfedge *local_70;
   lVar4 = param_5;
   if (param_4 <= param_5) {
      lVar4 = param_4;
   }

   if (lVar4 <= param_7) {
      LAB_00101108:if (param_5 < param_4) {
         sVar3 = param_3 - (long)param_2;
         if ((long)sVar3 < 0xd) {
            if (sVar3 == 0xc) {
               *param_6 = *(undefined8*)param_2;
               *(undefined4*)( param_6 + 1 ) = *(undefined4*)( param_2 + 8 );
            }

         }
 else {
            param_6 = (undefined8*)memmove(param_6, param_2, sVar3);
         }

         __move_merge_adaptive_backward<manifold::Halfedge*,manifold::Halfedge*,manifold::Halfedge*,__gnu_cxx::__ops::_Iter_less_iter>(param_1, param_2, param_6, (long)param_6 + sVar3, param_3);
         return;
      }

      sVar3 = (long)param_2 - (long)param_1;
      if ((long)sVar3 < 0xd) {
         if (sVar3 == 0xc) {
            *param_6 = *(undefined8*)param_1;
            *(undefined4*)( param_6 + 1 ) = *(undefined4*)( param_1 + 8 );
         }

      }
 else {
         param_6 = (undefined8*)memmove(param_6, param_1, sVar3);
      }

      __move_merge_adaptive<manifold::Halfedge*,manifold::Halfedge*,manifold::Halfedge*,__gnu_cxx::__ops::_Iter_less_iter>(param_6, (long)param_6 + sVar3, param_2, param_3, param_1);
      return;
   }

   local_70 = param_1;
   if (param_4 <= param_5) goto LAB_00100feb;
   LAB_00100f2a:uVar1 = param_4 - ( param_4 >> 0x3f );
   lVar4 = param_4 / 2;
   param_4 = param_4 - lVar4;
   __src = local_70 + ( ( uVar1 & 0xfffffffffffffffe ) + lVar4 ) * 4;
   pHVar2 = __lower_bound<manifold::Halfedge*,manifold::Halfedge,__gnu_cxx::__ops::_Iter_less_val>(param_2, param_3, *(undefined4*)__src, *(undefined4*)( __src + 4 ));
   lVar8 = ( (long)pHVar2 - (long)param_2 >> 2 ) * -0x5555555555555555;
   if (param_4 <= lVar8) goto LAB_00101046;
   do {
      if (param_7 < lVar8) break;
      param_1 = __src;
      if (lVar8 != 0) {
         sVar6 = (long)pHVar2 - (long)param_2;
         sVar3 = (long)param_2 - (long)__src;
         if ((long)sVar6 < 0xd) {
            if (sVar6 == 0xc) {
               *param_6 = *(undefined8*)param_2;
               *(undefined4*)( param_6 + 1 ) = *(undefined4*)( param_2 + 8 );
               if ((long)sVar3 < 0xd) {
                  if (sVar3 == 0xc) {
                     *(undefined8*)( pHVar2 + -0xc ) = *(undefined8*)__src;
                     *(undefined4*)( pHVar2 + -4 ) = *(undefined4*)( __src + 8 );
                  }

               }
 else {
                  memmove(pHVar2 + -sVar3, __src, sVar3);
               }

               *(undefined8*)__src = *param_6;
               *(undefined4*)( __src + 8 ) = *(undefined4*)( param_6 + 1 );
            }
 else if ((long)sVar3 < 0xd) {
               if (sVar3 == 0xc) {
                  *(undefined8*)( pHVar2 + -0xc ) = *(undefined8*)__src;
                  *(undefined4*)( pHVar2 + -4 ) = *(undefined4*)( __src + 8 );
               }

            }
 else {
               memmove(pHVar2 + -sVar3, __src, sVar3);
            }

         }
 else {
            memmove(param_6, param_2, sVar6);
            if ((long)sVar3 < 0xd) {
               if (sVar3 == 0xc) {
                  *(undefined8*)( pHVar2 + -0xc ) = *(undefined8*)__src;
                  *(undefined4*)( pHVar2 + -4 ) = *(undefined4*)( __src + 8 );
               }

            }
 else {
               memmove(pHVar2 + -sVar3, __src, sVar3);
            }

            __src = (Halfedge*)memmove(__src, param_6, sVar6);
         }

         param_1 = __src + sVar6;
      }

      LAB_00100f9b:param_2 = pHVar2;
      param_5 = param_5 - lVar8;
      __merge_adaptive_resize<manifold::Halfedge*,long,manifold::Halfedge*,__gnu_cxx::__ops::_Iter_less_iter>(local_70, __src, param_1, lVar4, lVar8, param_6, param_7);
      lVar4 = param_5;
      if (param_4 <= param_5) {
         lVar4 = param_4;
      }

      if (lVar4 <= param_7) goto LAB_00101108;
      local_70 = param_1;
      if (param_5 < param_4) goto LAB_00100f2a;
      LAB_00100feb:lVar8 = param_5 / 2;
      pHVar2 = param_2 + ( ( param_5 - ( param_5 >> 0x3f ) & 0xfffffffffffffffeU ) + lVar8 ) * 4;
      pHVar7 = local_70;
      __src = __upper_bound<manifold::Halfedge*,manifold::Halfedge,__gnu_cxx::__ops::_Val_less_iter>(local_70, param_2, *(undefined4*)pHVar2, *(undefined4*)( pHVar2 + 4 ));
      lVar5 = (long)__src - (long)pHVar7 >> 2;
      lVar4 = lVar5 * -0x5555555555555555;
      param_4 = param_4 + lVar5 * 0x5555555555555555;
   }
 while ( lVar8 < param_4 );
   LAB_00101046:if (param_7 < param_4) {
      param_1 = _V2::__rotate<manifold::Halfedge*>(__src, param_2, pHVar2);
   }
 else {
      param_1 = pHVar2;
      if (param_4 != 0) {
         sVar3 = (long)param_2 - (long)__src;
         sVar6 = (long)pHVar2 - (long)param_2;
         if ((long)sVar3 < 0xd) {
            if (sVar3 == 0xc) {
               *param_6 = *(undefined8*)__src;
               *(undefined4*)( param_6 + 1 ) = *(undefined4*)( __src + 8 );
               if ((long)sVar6 < 0xd) {
                  if (sVar6 == 0xc) {
                     *(undefined8*)__src = *(undefined8*)param_2;
                     *(undefined4*)( __src + 8 ) = *(undefined4*)( param_2 + 8 );
                  }

               }
 else {
                  __src = (Halfedge*)memmove(__src, param_2, sVar6);
               }

               lVar5 = -0xc;
               *(undefined8*)( pHVar2 + -0xc ) = *param_6;
               *(undefined4*)( pHVar2 + -4 ) = *(undefined4*)( param_6 + 1 );
            }
 else {
               lVar5 = -sVar3;
               if ((long)sVar6 < 0xd) {
                  param_1 = pHVar2 + lVar5;
                  if (sVar6 != 0xc) goto LAB_00100f9b;
                  *(undefined8*)__src = *(undefined8*)param_2;
                  *(undefined4*)( __src + 8 ) = *(undefined4*)( param_2 + 8 );
               }
 else {
                  __src = (Halfedge*)memmove(__src, param_2, sVar6);
               }

            }

            param_1 = pHVar2 + lVar5;
            goto LAB_00100f9b;
         }

         memmove(param_6, __src, sVar3);
         if ((long)sVar6 < 0xd) {
            if (sVar6 == 0xc) {
               *(undefined8*)__src = *(undefined8*)param_2;
               *(undefined4*)( __src + 8 ) = *(undefined4*)( param_2 + 8 );
            }

         }
 else {
            __src = (Halfedge*)memmove(__src, param_2, sVar6);
         }

         param_1 = pHVar2 + -sVar3;
         memmove(param_1, param_6, sVar3);
      }

   }

   goto LAB_00100f9b;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* void std::__stable_sort_adaptive_resize<manifold::Halfedge*, manifold::Halfedge*, long,
   __gnu_cxx::__ops::_Iter_less_iter>(manifold::Halfedge*, manifold::Halfedge*, manifold::Halfedge*,
   long, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */void std::__stable_sort_adaptive_resize<manifold::Halfedge*,manifold::Halfedge*,long,__gnu_cxx::__ops::_Iter_less_iter>(long param_1, long param_2, undefined8 param_3, long param_4) {
   long lVar1;
   long lVar2;
   long lVar3;
   lVar2 = ( param_2 - param_1 >> 2 ) * -0x5555555555555555 + 1;
   lVar3 = ( ( lVar2 - ( lVar2 >> 0x3f ) & 0xfffffffffffffffeU ) + lVar2 / 2 ) * 4;
   lVar1 = param_1 + lVar3;
   if (param_4 < lVar2 / 2) {
      __stable_sort_adaptive_resize<manifold::Halfedge*,manifold::Halfedge*,long,__gnu_cxx::__ops::_Iter_less_iter>(param_1, lVar1, param_3);
      __stable_sort_adaptive_resize<manifold::Halfedge*,manifold::Halfedge*,long,__gnu_cxx::__ops::_Iter_less_iter>(lVar1, param_2, param_3, param_4);
      __merge_adaptive_resize<manifold::Halfedge*,long,manifold::Halfedge*,__gnu_cxx::__ops::_Iter_less_iter>(param_1, lVar1, param_2, ( lVar3 >> 2 ) * -0x5555555555555555, ( param_2 - lVar1 >> 2 ) * -0x5555555555555555, param_3, param_4);
      return;
   }

   __stable_sort_adaptive<manifold::Halfedge*,manifold::Halfedge*,__gnu_cxx::__ops::_Iter_less_iter>(param_1, lVar1, param_2, param_3);
   return;
}
/* manifold::Manifold::Impl::IsSelfIntersecting() const::{lambda(unsigned
   long)#1}::TEMPNAMEPLACEHOLDERVALUE(unsigned long) const */_func_IsSelfIntersecting * __thiscall
const::{lambda(unsigned_long)#1{
   undefined8 *puVar1;
   undefined8 *puVar2;
   double *pdVar3;
   undefined8 uVar4;
   double dVar5;
   double dVar6;
   double dVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   undefined1 auVar11[16];
   long lVar12;
   int *piVar13;
   undefined8 uVar14;
   _func_IsSelfIntersecting *p_Var15;
   array *paVar16;
   long lVar17;
   long lVar18;
   long lVar19;
   int *piVar20;
   long lVar21;
   array *paVar22;
   long lVar23;
   long lVar24;
   long in_FS_OFFSET;
   double dVar25;
   double dVar26;
   double dVar27;
   double extraout_XMM0_Qa;
   undefined8 local_188;
   undefined4 local_180;
   int local_17c;
   array local_178[16];
   undefined1 local_168[16];
   undefined1 local_158[16];
   undefined1 local_148[16];
   undefined8 local_138;
   array local_128[16];
   undefined1 local_118[16];
   undefined1 local_108[16];
   undefined1 local_f8[16];
   undefined8 local_e8;
   undefined1 local_d8[12];
   array aaStack_cc[4];
   undefined1 local_c8[16];
   undefined1 local_b8[16];
   undefined1 local_a8[16];
   undefined8 local_98;
   undefined1 local_88[12];
   undefined4 uStack_7c;
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (int i = 0; i < 16; i++) {
      local_178[i] = (array)0;
   }

   local_138 = 0;
   local_e8 = 0;
   local_168 = (undefined1[16])0x0;
   local_158 = (undefined1[16])0x0;
   local_148 = (undefined1[16])0x0;
   for (int i = 0; i < 16; i++) {
      local_128[i] = (array)0;
   }

   local_118 = (undefined1[16])0x0;
   lVar23 = (long)*(int*)( **(long**)this + param_1 * 8 );
   lVar24 = (long)*(int*)( **(long**)this + 4 + param_1 * 8 );
   local_108 = (undefined1[16])0x0;
   local_f8 = (undefined1[16])0x0;
   uStack_7c = SUB84(local_88._0_8_, 4);
   local_88._8_4_ = 2;
   local_88._0_8_ = _LC4;
   lVar12 = *(long*)( this + 8 );
   lVar17 = *(long*)( lVar12 + 0x60 );
   lVar18 = *(long*)( lVar12 + 0x48 );
   paVar16 = (array*)local_88;
   do {
      lVar19 = (long)*(int*)paVar16;
      paVar16 = paVar16 + 4;
      lVar21 = lVar19 * 0x18;
      puVar1 = (undefined8*)( lVar18 + (long)*(int*)( lVar17 + ( lVar24 * 3 + lVar19 ) * 0xc ) * 0x18 );
      puVar2 = (undefined8*)( lVar18 + (long)*(int*)( lVar17 + ( lVar19 + lVar23 * 3 ) * 0xc ) * 0x18 );
      uVar8 = puVar1[1];
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      uVar14 = puVar1[2];
      uVar4 = puVar2[2];
      *(undefined8*)( local_178 + lVar21 ) = *puVar1;
      *(undefined8*)( local_178 + lVar21 + 8 ) = uVar8;
      *(undefined8*)( local_128 + lVar21 ) = uVar9;
      *(undefined8*)( local_128 + lVar21 + 8 ) = uVar10;
      *(undefined8*)( local_168 + lVar21 ) = uVar14;
      *(undefined8*)( local_118 + lVar21 ) = uVar4;
   }
 while ( (array*)( local_88 + 0xc ) != paVar16 );
   local_d8._8_4_ = 2;
   local_d8._0_8_ = _LC4;
   paVar16 = (array*)local_d8;
   do {
      auVar11 = _local_88;
      uStack_7c = auVar11._12_4_;
      local_88._8_4_ = 2;
      lVar17 = (long)*(int*)paVar16 * 0x18;
      paVar22 = (array*)local_88;
      do {
         lVar18 = (long)*(int*)paVar22 * 0x18;
         if (( *(double*)( local_128 + lVar18 ) - *(double*)( local_178 + lVar17 ) ) * ( *(double*)( local_128 + lVar18 ) - *(double*)( local_178 + lVar17 ) ) + 0.0 + ( *(double*)( local_128 + lVar18 + 8 ) - *(double*)( local_178 + lVar17 + 8 ) ) * ( *(double*)( local_128 + lVar18 + 8 ) - *(double*)( local_178 + lVar17 + 8 ) ) + ( *(double*)( local_118 + lVar18 ) - *(double*)( local_168 + lVar17 ) ) * ( *(double*)( local_118 + lVar18 ) - *(double*)( local_168 + lVar17 ) ) <= **(double**)( this + 0x10 )) goto LAB_00101a60;
         paVar22 = paVar22 + 4;
      }
 while ( paVar22 != (array*)( local_88 + 0xc ) );
      paVar16 = paVar16 + 4;
   }
 while ( paVar16 != (array*)( local_d8 + 0xc ) );
   dVar25 = (double)manifold::DistanceTriangleTriangleSquared(local_178, local_128);
   if (dVar25 == 0.0) {
      lVar17 = *(long*)( lVar12 + 0x90 );
      dVar25 = *(double*)( lVar12 + 0x30 );
      local_98 = 0;
      piVar20 = (int*)&local_188;
      local_48 = 0;
      pdVar3 = (double*)( lVar17 + lVar23 * 0x18 );
      local_180 = 2;
      dVar5 = *pdVar3;
      dVar6 = pdVar3[1];
      dVar27 = pdVar3[2];
      _local_d8 = (undefined1[16])0x0;
      local_c8 = (undefined1[16])0x0;
      local_b8 = (undefined1[16])0x0;
      local_a8 = (undefined1[16])0x0;
      _local_88 = (undefined1[16])0x0;
      local_78 = (undefined1[16])0x0;
      local_68 = (undefined1[16])0x0;
      local_58 = (undefined1[16])0x0;
      local_188 = _LC4;
      piVar13 = piVar20;
      do {
         lVar12 = (long)*piVar13;
         piVar13 = piVar13 + 1;
         dVar7 = *(double*)( local_178 + lVar12 * 0x18 + 8 );
         dVar26 = *(double*)( local_168 + lVar12 * 0x18 );
         *(double*)( (array*)local_d8 + lVar12 * 0x18 ) = *(double*)( local_178 + lVar12 * 0x18 ) + dVar5 * dVar25;
         *(double*)( local_d8 + lVar12 * 0x18 + 8 ) = dVar7 + dVar6 * dVar25;
         *(double*)( local_c8 + lVar12 * 0x18 ) = dVar26 + dVar27 * dVar25;
      }
 while ( piVar13 != &local_17c );
      dVar26 = (double)manifold::DistanceTriangleTriangleSquared((array*)local_d8, local_128);
      if (dVar26 <= 0.0) {
         local_180 = 2;
         local_188 = _LC4;
         piVar13 = piVar20;
         do {
            lVar12 = (long)*piVar13;
            piVar13 = piVar13 + 1;
            dVar7 = *(double*)( local_178 + lVar12 * 0x18 + 8 );
            dVar26 = *(double*)( local_168 + lVar12 * 0x18 );
            *(double*)( (array*)local_d8 + lVar12 * 0x18 ) = *(double*)( local_178 + lVar12 * 0x18 ) - dVar5 * dVar25;
            *(double*)( local_d8 + lVar12 * 0x18 + 8 ) = dVar7 - dVar6 * dVar25;
            *(double*)( local_c8 + lVar12 * 0x18 ) = dVar26 - dVar27 * dVar25;
         }
 while ( &local_17c != piVar13 );
         dVar27 = (double)manifold::DistanceTriangleTriangleSquared((array*)local_d8, local_128);
         if (dVar27 <= 0.0) {
            local_180 = 2;
            pdVar3 = (double*)( lVar17 + lVar24 * 0x18 );
            local_188 = _LC4;
            dVar5 = *pdVar3;
            dVar6 = pdVar3[1];
            dVar27 = pdVar3[2];
            piVar13 = piVar20;
            do {
               lVar12 = (long)*piVar13;
               piVar13 = piVar13 + 1;
               dVar26 = *(double*)( local_118 + lVar12 * 0x18 );
               dVar7 = *(double*)( local_128 + lVar12 * 0x18 + 8 );
               *(double*)( (array*)local_88 + lVar12 * 0x18 ) = *(double*)( local_128 + lVar12 * 0x18 ) + dVar5 * dVar25;
               *(double*)( local_88 + lVar12 * 0x18 + 8 ) = dVar7 + dVar6 * dVar25;
               *(double*)( local_78 + lVar12 * 0x18 ) = dVar26 + dVar25 * dVar27;
            }
 while ( piVar13 != &local_17c );
            dVar26 = (double)manifold::DistanceTriangleTriangleSquared(local_178, (array*)local_88);
            if (dVar26 <= 0.0) {
               local_180 = 2;
               local_188 = _LC4;
               do {
                  lVar12 = (long)*piVar20;
                  piVar20 = piVar20 + 1;
                  dVar7 = *(double*)( local_128 + lVar12 * 0x18 + 8 );
                  dVar26 = *(double*)( local_118 + lVar12 * 0x18 );
                  *(double*)( (array*)local_88 + lVar12 * 0x18 ) = *(double*)( local_128 + lVar12 * 0x18 ) - dVar5 * dVar25;
                  *(double*)( local_88 + lVar12 * 0x18 + 8 ) = dVar7 - dVar6 * dVar25;
                  *(double*)( local_78 + lVar12 * 0x18 ) = dVar26 - dVar25 * dVar27;
               }
 while ( piVar20 != &local_17c );
               uVar14 = manifold::DistanceTriangleTriangleSquared(local_178, (array*)local_88);
               p_Var15 = (_func_IsSelfIntersecting*)CONCAT71(( int7 )((ulong)uVar14 >> 8), 0.0 < extraout_XMM0_Qa);
               goto LAB_00101a65;
            }

         }

      }

   }

   LAB_00101a60:p_Var15 = (_func_IsSelfIntersecting*)0x1;
   LAB_00101a65:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return p_Var15;
}
/* manifold::Manifold::Impl::IsManifold() const */undefined8 manifold::Manifold::Impl::IsManifold(Impl *this) {
   undefined8 *puVar1;
   long lVar2;
   undefined8 *puVar3;
   undefined8 uVar4;
   uint uVar5;
   undefined7 uVar8;
   undefined8 uVar6;
   undefined8 *puVar7;
   long lVar9;
   int iVar10;
   int iVar11;
   long lVar12;
   long lVar13;
   long lVar14;
   int iStack_3c;
   lVar2 = *(long*)( this + 0x68 );
   if (lVar2 == 0) {
      return 1;
   }

   puVar3 = *(undefined8**)( this + 0x60 );
   if (lVar2 >> 2 < 1) {
      lVar9 = 0;
      lVar12 = lVar2;
   }
 else {
      lVar14 = 3;
      lVar9 = 0;
      lVar13 = 2;
      lVar12 = 1;
      puVar7 = puVar3;
      do {
         iVar11 = (int)*puVar7;
         if (( ( iVar11 != -1 ) && ( iStack_3c = (int)( ( ulong ) * puVar7 >> 0x20 ) ),iStack_3c != -1 )) &&( ( *(int*)( puVar7 + 1 ) == -1 || ( puVar1 = (undefined8*)( (long)puVar3 + (long)*(int*)( puVar7 + 1 ) * 0xc ) ),uVar6 = *puVar1,( ( (int)( (ulong)uVar6 >> 0x20 ) != iVar11 || iVar11 == iStack_3c ) || iStack_3c != (int)uVar6 ) || *(int*)( puVar1 + 1 ) != (int)lVar9 ) );
         iVar11 = (int)*(undefined8*)( (long)puVar7 + 0xc );
         uVar8 = ( undefined7 )((ulong)puVar7 >> 8);
         if (( ( iVar11 != -1 ) && ( iStack_3c = (int)( ( ulong ) * (undefined8*)( (long)puVar7 + 0xc ) >> 0x20 ) ),iStack_3c != -1 )) {
            return CONCAT71(uVar8, lVar2 == lVar12);
         }

         iVar11 = (int)puVar7[3];
         if (( ( iVar11 != -1 ) && ( iStack_3c = (int)( (ulong)puVar7[3] >> 0x20 ) ),iStack_3c != -1 )) {
            return CONCAT71(uVar8, lVar2 == lVar13);
         }

         iVar11 = (int)*(undefined8*)( (long)puVar7 + 0x24 );
         if (( ( iVar11 != -1 ) && ( iStack_3c = (int)( ( ulong ) * (undefined8*)( (long)puVar7 + 0x24 ) >> 0x20 ) ),iStack_3c != -1 )) {
            return CONCAT71(uVar8, lVar2 == lVar14);
         }

         lVar9 = lVar9 + 4;
         puVar7 = puVar7 + 6;
         lVar12 = lVar12 + 4;
         lVar13 = lVar13 + 4;
         lVar14 = lVar14 + 4;
      }
 while ( lVar9 != ( lVar2 >> 2 ) * 4 );
      lVar12 = lVar2 - lVar9;
   }

   if (lVar12 == 2) {
      LAB_00101d9e:puVar7 = (undefined8*)( (long)puVar3 + lVar9 * 0xc );
      uVar6 = *puVar7;
      iVar11 = *(int*)( puVar7 + 1 );
      puVar7 = (undefined8*)(long)iVar11;
      iVar10 = (int)uVar6;
      uVar8 = ( undefined7 )((ulong)uVar6 >> 8);
      if (( iVar10 == -1 ) || ( iStack_3c = iStack_3c == -1 )) {
         LAB_00101e10:lVar9 = lVar9 + 1;
         LAB_00101e14:puVar7 = (undefined8*)( (long)puVar3 + lVar9 * 0xc );
         uVar6 = *puVar7;
         iVar11 = *(int*)( puVar7 + 1 );
         puVar7 = (undefined8*)(long)iVar11;
         iVar10 = (int)uVar6;
         if (( iVar10 == -1 ) || ( iStack_3c = iStack_3c == -1 )) goto LAB_00101d20;
         if (iVar11 != -1) {
            puVar3 = (undefined8*)( (long)puVar3 + (long)puVar7 * 0xc );
            uVar4 = *puVar3;
            uVar5 = (uint)CONCAT71(( uint7 )((ulong)uVar4 >> 0x28), (int)( (ulong)uVar4 >> 0x20 ) == iVar10) & (uint)CONCAT71(( int7 )((ulong)uVar6 >> 8), iVar10 != iStack_3c) & CONCAT31(( int3 )((ulong)uVar6 >> 0x28), iStack_3c == (int)uVar4);
            puVar7 = (undefined8*)(ulong)uVar5;
            if (( (byte)uVar5 & *(int*)( puVar3 + 1 ) == (int)lVar9 ) != 0) goto LAB_00101d20;
         }

      }
 else if (iVar11 != -1) {
         puVar1 = (undefined8*)( (long)puVar3 + (long)puVar7 * 0xc );
         uVar5 = (uint)CONCAT71(( int7 )((ulong)puVar1 >> 8), (int)( ( ulong ) * puVar1 >> 0x20 ) == iVar10) & (uint)CONCAT71(uVar8, iVar10 != iStack_3c) & (uint)CONCAT71(uVar8, iStack_3c == (int)*puVar1);
         puVar7 = (undefined8*)(ulong)uVar5;
         if (( (byte)uVar5 & *(int*)( puVar1 + 1 ) == (int)lVar9 ) != 0) goto LAB_00101e10;
      }

      LAB_00101cb4:uVar6 = CONCAT71(( int7 )((ulong)puVar7 >> 8), lVar2 == lVar9);
   }
 else {
      if (lVar12 == 3) {
         puVar7 = (undefined8*)( (long)puVar3 + lVar9 * 0xc );
         uVar6 = *puVar7;
         iVar11 = *(int*)( puVar7 + 1 );
         puVar7 = (undefined8*)(long)iVar11;
         iVar10 = (int)uVar6;
         if (( iVar10 == -1 ) || ( iStack_3c = iStack_3c == -1 )) {
            LAB_00101d9a:lVar9 = lVar9 + 1;
            goto LAB_00101d9e;
         }

         if (iVar11 != -1) {
            puVar1 = (undefined8*)( (long)puVar3 + (long)puVar7 * 0xc );
            uVar5 = (uint)CONCAT71(( int7 )((ulong)puVar1 >> 8), (int)( ( ulong ) * puVar1 >> 0x20 ) == iVar10) & (uint)CONCAT71(( int7 )((ulong)uVar6 >> 8), iVar10 != iStack_3c) & CONCAT31(( int3 )((ulong)uVar6 >> 0x28), iStack_3c == (int)*puVar1);
            puVar7 = (undefined8*)(ulong)uVar5;
            if (( (byte)uVar5 & *(int*)( puVar1 + 1 ) == (int)lVar9 ) != 0) goto LAB_00101d9a;
         }

         goto LAB_00101cb4;
      }

      if (lVar12 == 1) goto LAB_00101e14;
      LAB_00101d20:uVar6 = 1;
   }

   return uVar6;
}
/* manifold::Manifold::Impl::Is2Manifold() const */char manifold::Manifold::Impl::Is2Manifold(Impl *this) {
   uint *puVar1;
   char cVar2;
   undefined8 *__dest;
   void *pvVar3;
   undefined8 *puVar4;
   long lVar5;
   long lVar6;
   uint uVar7;
   uint *puVar8;
   uint uVar9;
   undefined8 *puVar10;
   long lVar11;
   size_t __size;
   ulong uVar12;
   uVar12 = *(ulong*)( this + 0x68 );
   if (uVar12 == 0) {
      return '\x01';
   }

   cVar2 = IsManifold(this);
   if (cVar2 == '\0') {
      return '\0';
   }

   puVar4 = *(undefined8**)( this + 0x60 );
   __size = uVar12 * 0xc;
   __dest = (undefined8*)malloc(__size);
   if ((long)__size < 0xd) {
      if (__size == 0xc) {
         puVar10 = (undefined8*)( (long)__dest + 0xc );
         lVar11 = 1;
         *__dest = *puVar4;
         *(undefined4*)( __dest + 1 ) = *(undefined4*)( puVar4 + 1 );
         lVar6 = lVar11;
         goto LAB_00101f37;
      }

      puVar10 = (undefined8*)( (long)__dest + __size );
      if (puVar10 == __dest) goto LAB_00101f98;
      if (0 < (long)__size) {
         lVar11 = 0;
         lVar6 = lVar11;
         goto LAB_00101f37;
      }

      lVar6 = ( ( (long)__size >> 2 ) * -0x5555555555555555 + 1 ) / 2;
      LAB_0010226a:uVar12 = 0;
      pvVar3 = (void*)0x0;
      puVar4 = __dest;
      if (lVar6 == 0) goto LAB_00101f7a;
      std::__inplace_stable_sort<manifold::Halfedge*,__gnu_cxx::__ops::_Iter_less_iter>(__dest, puVar10);
      LAB_00101f88:operator_delete(pvVar3, uVar12);
      uVar12 = *(ulong*)( this + 0x68 );
   }
 else {
      memmove(__dest, puVar4, __size);
      puVar10 = (undefined8*)( (long)__dest + __size );
      if (__dest != puVar10) {
         lVar11 = ( (long)__size >> 2 ) * -0x5555555555555555 + 1 >> 1;
         lVar6 = lVar11;
         LAB_00101f37:while (true) {
            uVar12 = lVar11 * 0xc;
            pvVar3 = operator_new(uVar12, (nothrow_t*)&std::nothrow);
            if (pvVar3 != (void*)0x0) break;
            if (lVar11 == 1) goto LAB_0010226a;
            lVar11 = lVar11 + 1 >> 1;
         }
;
         puVar4 = (undefined8*)( (long)__dest + uVar12 );
         if (lVar11 == lVar6) {
            LAB_00101f7a:std::__stable_sort_adaptive<manifold::Halfedge*,manifold::Halfedge*,__gnu_cxx::__ops::_Iter_less_iter>(__dest, puVar4, puVar10);
         }
 else {
            std::__stable_sort_adaptive_resize<manifold::Halfedge*,manifold::Halfedge*,long,__gnu_cxx::__ops::_Iter_less_iter>(__dest, puVar10, pvVar3);
         }

         goto LAB_00101f88;
      }

   }

   LAB_00101f98:lVar6 = ( uVar12 & 0xfffffffffffffffe ) - 1;
   if (lVar6 >> 2 < 1) {
      lVar11 = 0;
      lVar5 = lVar6;
   }
 else {
      puVar4 = __dest;
      lVar5 = 0;
      do {
         uVar7 = ( uint ) * puVar4;
         uVar9 = ( uint )(( ulong ) * puVar4 >> 0x20);
         if (( ( ( uVar7 & uVar9 & *(uint*)( puVar4 + 1 ) ) != 0xffffffff ) && ( uVar7 == *(uint*)( (long)puVar4 + 0xc ) ) ) && ( uVar9 == *(uint*)( puVar4 + 2 ) )) goto LAB_001020a5;
         uVar7 = ( uint ) * (undefined8*)( (long)puVar4 + 0xc );
         uVar9 = ( uint )(( ulong ) * (undefined8*)( (long)puVar4 + 0xc ) >> 0x20);
         if (( ( ( uVar7 & uVar9 & *(uint*)( (long)puVar4 + 0x14 ) ) != 0xffffffff ) && ( uVar7 == *(uint*)( puVar4 + 3 ) ) ) && ( uVar9 == *(uint*)( (long)puVar4 + 0x1c ) )) {
            cVar2 = lVar5 + 1 == lVar6;
            goto LAB_001020a7;
         }

         uVar7 = (uint)puVar4[3];
         uVar9 = ( uint )((ulong)puVar4[3] >> 0x20);
         if (( ( ( uVar7 & uVar9 & *(uint*)( puVar4 + 4 ) ) != 0xffffffff ) && ( uVar7 == *(uint*)( (long)puVar4 + 0x24 ) ) ) && ( uVar9 == *(uint*)( puVar4 + 5 ) )) goto LAB_001020a5;
         lVar11 = lVar5 + 4;
         uVar7 = ( uint ) * (undefined8*)( (long)puVar4 + 0x24 );
         uVar9 = ( uint )(( ulong ) * (undefined8*)( (long)puVar4 + 0x24 ) >> 0x20);
         if (( ( ( uVar7 & uVar9 & *(uint*)( (long)puVar4 + 0x2c ) ) != 0xffffffff ) && ( uVar7 == *(uint*)( puVar4 + 6 ) ) ) && ( uVar9 == *(uint*)( (long)puVar4 + 0x34 ) )) {
            cVar2 = lVar5 + 3 == lVar6;
            goto LAB_001020a7;
         }

         puVar4 = puVar4 + 6;
         lVar5 = lVar11;
      }
 while ( ( lVar6 >> 2 ) * 4 != lVar11 );
      lVar5 = lVar6 - lVar11;
   }

   if (lVar5 == 3) {
      lVar5 = lVar11 * 0xc;
      puVar1 = (uint*)( (long)__dest + lVar5 + 0xc );
      uVar7 = ( uint ) * (undefined8*)( (long)__dest + lVar5 );
      uVar9 = ( uint )(( ulong ) * (undefined8*)( (long)__dest + lVar5 ) >> 0x20);
      if (( ( ( uVar7 & uVar9 & *(uint*)( (long)__dest + lVar5 + 8 ) ) == 0xffffffff ) || ( uVar7 != *puVar1 ) ) || ( uVar9 != puVar1[1] )) {
         lVar5 = lVar11 + 2;
         uVar7 = ( uint ) * (undefined8*)puVar1;
         puVar8 = (uint*)( (long)__dest + lVar5 * 0xc );
         uVar9 = ( uint )(( ulong ) * (undefined8*)puVar1 >> 0x20);
         if (( ( ( uVar7 & uVar9 & puVar1[2] ) != 0xffffffff ) && ( uVar7 == *puVar8 ) ) && ( uVar9 == puVar8[1] )) {
            cVar2 = lVar11 + 1 == lVar6;
            goto LAB_001020a7;
         }

         goto LAB_0010212e;
      }

   }
 else {
      if (lVar5 != 1) goto LAB_001020a7;
      puVar8 = (uint*)( (long)__dest + lVar11 * 0xc );
      lVar5 = lVar11;
      LAB_0010212e:uVar7 = ( uint ) * (undefined8*)puVar8;
      uVar9 = ( uint )(( ulong ) * (undefined8*)puVar8 >> 0x20);
      if (( ( ( uVar7 & uVar9 & puVar8[2] ) == 0xffffffff ) || ( puVar1 = (uint*)( (long)__dest + ( lVar5 * 3 + 3 ) * 4 ) ),uVar7 != *puVar1 )) goto LAB_001020a7;
   }

   LAB_001020a5:cVar2 = '\0';
   LAB_001020a7:if (__dest != (undefined8*)0x0) {
      free(__dest);
   }

   return cVar2;
}
/* manifold::Manifold::Impl::IsSelfIntersecting() const */ulong manifold::Manifold::Impl::IsSelfIntersecting(Impl *this) {
   uint *puVar1;
   double dVar2;
   double dVar3;
   uint uVar4;
   long lVar5;
   long lVar6;
   uint uVar7;
   void *pvVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   double *pdVar11;
   long lVar12;
   _func_IsSelfIntersecting *p_Var13;
   undefined1 *puVar14;
   undefined1 *puVar15;
   uint uVar16;
   ulong uVar17;
   ulong uVar18;
   double *pdVar19;
   undefined7 uVar20;
   int iVar21;
   _lambda_unsigned_long__1_ *this_00;
   int iVar22;
   ulong uVar23;
   double *pdVar24;
   int iVar25;
   ulong uVar26;
   long in_FS_OFFSET;
   bool bVar27;
   double dVar28;
   size_t local_240;
   double local_1d0;
   void *local_1c8;
   undefined1 local_1c0[16];
   void *local_1a8;
   undefined1 local_1a0[16];
   undefined1 *local_188;
   undefined1 local_180[16];
   undefined1 **local_168;
   Impl *local_160;
   double *local_158;
   uint auStack_148[66];
   long local_40;
   this_00 = (_lambda_unsigned_long__1_*)0x0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_1c8 = (void*)0x0;
   local_1a8 = (void*)0x0;
   local_1d0 = *(double*)( this + 0x30 ) * *(double*)( this + 0x30 );
   local_1c0 = (undefined1[16])0x0;
   local_1a0 = (undefined1[16])0x0;
   manifold::Manifold::Impl::GetFaceBoxMorton((Vec*)this, (Vec*)&local_1c8);
   pvVar8 = local_1c8;
   lVar5 = *(long*)( this + 0x170 );
   uVar9 = local_1c0._0_8_;
   lVar6 = *(long*)( this + 0x140 );
   local_188 = (undefined1*)0x0;
   local_180 = (undefined1[16])0x0;
   if ((_lambda_unsigned_long__1_*)local_1c0._0_8_ == (_lambda_unsigned_long__1_*)0x0) {
      manifold::ManifoldParams();
      goto LAB_001029f4;
   }

   puVar15 = (undefined1*)0x0;
   do {
      iVar21 = (int)this_00;
      iVar25 = -1;
      uVar23 = (long)iVar21 << 0x20;
      pdVar19 = (double*)( (long)iVar21 * 0x30 + (long)pvVar8 );
      dVar2 = pdVar19[3];
      uVar16 = 1;
      LAB_001023f0:puVar1 = (uint*)( lVar5 + (long)( (int)( uVar16 - 1 ) / 2 ) * 8 );
      uVar4 = *puVar1;
      uVar16 = puVar1[1];
      uVar17 = (ulong)(int)uVar16;
      pdVar24 = (double*)( uVar17 * 0x30 + lVar6 );
      pdVar11 = (double*)( (long)(int)uVar4 * 0x30 + lVar6 );
      puVar14 = puVar15;
      if (dVar2 < *pdVar11) {
         if (dVar2 < *pdVar24) goto LAB_00102498;
         dVar28 = pdVar19[4];
         LAB_0010243f:if (( ( pdVar24[1] <= dVar28 ) && ( pdVar24[2] <= pdVar19[5] ) ) && ( *pdVar19 <= pdVar24[3] )) {
            bVar27 = false;
            LAB_00102464:if (( pdVar24[4] < pdVar19[1] ) || ( pdVar24[5] < pdVar19[2] )) goto LAB_00102488;
            if (( ( uVar17 & 1 ) == 0 ) && ( iVar22 = iVar22 != iVar21 )) {
               uVar10 = local_180._0_8_;
               uVar18 = local_180._0_8_ + 8;
               puVar15 = puVar14;
               if ((ulong)local_180._8_8_ <= uVar18) {
                  if (local_180._8_8_ == 0) {
                     local_240 = 0x80;
                  }
 else {
                     local_240 = local_180._8_8_ * 2;
                     if (( ulong )(local_180._8_8_ * 2) < uVar18) {
                        local_240 = uVar18;
                     }

                     if (local_240 <= (ulong)local_180._8_8_) goto LAB_001026f5;
                  }

                  puVar15 = (undefined1*)malloc(local_240);
                  if (uVar10 == 0) {
                     LAB_00102868:if (puVar14 != (undefined1*)0x0) goto LAB_00102996;
                  }
 else {
                     if ((long)uVar10 < 2) {
                        if (uVar10 != 1) goto LAB_00102868;
                        *puVar15 = *puVar14;
                     }
 else {
                        memmove(puVar15, puVar14, uVar10);
                     }

                     LAB_00102996:free(puVar14);
                  }

                  uVar17 = uVar17 & 0xffffffff;
                  local_180._8_8_ = local_240;
                  local_188 = puVar15;
               }

               LAB_001026f5:local_180._0_8_ = uVar18;
               *(ulong*)( puVar15 + ( ( uVar18 & 0xfffffffffffffff8 ) - 8 ) ) = (long)iVar22 | uVar23;
               puVar14 = puVar15;
            }

            uVar16 = (uint)uVar17;
            uVar7 = ( uint )(uVar17 >> 0x1f) & 1;
            if (( uVar16 + uVar7 & 1 ) - uVar7 != 1) goto LAB_00102488;
            puVar15 = puVar14;
            if (bVar27) {
               iVar25 = iVar25 + 1;
               auStack_148[iVar25] = uVar16;
               uVar16 = uVar4;
            }

            goto LAB_001023f0;
         }

         LAB_00102498:puVar15 = puVar14;
         if (iVar25 < 0) goto LAB_00102500;
         LAB_0010249d:lVar12 = (long)iVar25;
         iVar25 = iVar25 + -1;
         uVar16 = auStack_148[lVar12];
         goto LAB_001023f0;
      }

      dVar28 = pdVar19[4];
      if (( ( ( pdVar11[1] <= dVar28 ) && ( dVar3 = pdVar19[5] ),pdVar11[2] <= dVar3 ) ) && ( *pdVar19 <= pdVar11[3] )) {
         if (( ( uVar4 & 1 ) == 0 ) && ( (int)uVar4 / 2 != iVar21 )) {
            uVar10 = local_180._0_8_;
            uVar18 = local_180._0_8_ + 8;
            if ((ulong)local_180._8_8_ <= uVar18) {
               if (local_180._8_8_ == 0) {
                  local_240 = 0x80;
               }
 else {
                  local_240 = local_180._8_8_ * 2;
                  if (( ulong )(local_180._8_8_ * 2) < uVar18) {
                     local_240 = uVar18;
                  }

                  if (local_240 <= (ulong)local_180._8_8_) goto LAB_00102635;
               }

               puVar14 = (undefined1*)malloc(local_240);
               if (uVar10 == 0) {
                  LAB_001027cf:if (puVar15 != (undefined1*)0x0) goto LAB_001028ec;
               }
 else {
                  if ((long)uVar10 < 2) {
                     if (uVar10 != 1) goto LAB_001027cf;
                     *puVar14 = *puVar15;
                  }
 else {
                     memmove(puVar14, puVar15, uVar10);
                  }

                  LAB_001028ec:free(puVar15);
               }

               uVar17 = (ulong)uVar16;
               local_180._8_8_ = local_240;
               local_188 = puVar14;
            }

            LAB_00102635:local_180._0_8_ = uVar18;
            *(ulong*)( puVar14 + ( ( uVar18 & 0xfffffffffffffff8 ) - 8 ) ) = (long)( (int)uVar4 / 2 ) | uVar23;
         }

         bVar27 = (int)uVar4 % 2 == 1;
         if (( ( *pdVar24 <= dVar2 ) && ( pdVar24[1] <= dVar28 ) ) && ( ( pdVar24[2] <= dVar3 && ( *pdVar19 <= pdVar24[3] ) ) )) goto LAB_00102464;
         LAB_00102488:puVar15 = puVar14;
         uVar16 = uVar4;
         if (bVar27) goto LAB_001023f0;
         goto LAB_00102498;
      }

      if (*pdVar24 <= dVar2) goto LAB_0010243f;
      if (-1 < iVar25) goto LAB_0010249d;
      LAB_00102500:this_00 = this_00 + 1;
   }
 while ( (_lambda_unsigned_long__1_*)uVar9 != this_00 );
   uVar9 = local_180._0_8_;
   manifold::ManifoldParams();
   local_168 = &local_188;
   uVar23 = (ulong)uVar9 >> 5;
   local_158 = &local_1d0;
   uVar17 = (ulong)uVar9 >> 3;
   local_160 = this;
   if (uVar23 == 0) {
      uVar18 = 0;
      uVar23 = uVar17;
   }
 else {
      uVar18 = 0;
      do {
         p_Var13 = const::{lambda(unsigned_long);
         #1
         ( (_lambda_unsigned_long__1_*)&local_168,uVar18 );
         uVar20 = ( undefined7 )((ulong)&local_168 >> 8);
         if ((char)p_Var13 == '\0') {
            this_00 = (_lambda_unsigned_long__1_*)CONCAT71(uVar20, uVar18 != uVar17);
            goto LAB_001029e7;
         }

         uVar26 = uVar18 + 1;
         p_Var13 = const::{lambda(unsigned_long);
         #1
         ( (_lambda_unsigned_long__1_*)&local_168,uVar26 );
         if ((char)p_Var13 == '\0') {
            LAB_001029e0:this_00 = (_lambda_unsigned_long__1_*)CONCAT71(uVar20, uVar17 != uVar26);
            goto LAB_001029e7;
         }

         uVar26 = uVar18 + 2;
         p_Var13 = const::{lambda(unsigned_long);
         #1
         ( (_lambda_unsigned_long__1_*)&local_168,uVar26 );
         if ((char)p_Var13 == '\0') goto LAB_001029e0;
         uVar26 = uVar18 + 3;
         p_Var13 = const::{lambda(unsigned_long);
         #1
         ( (_lambda_unsigned_long__1_*)&local_168,uVar26 );
         if ((char)p_Var13 == '\0') goto LAB_001029e0;
         uVar18 = uVar18 + 4;
         uVar23 = uVar23 - 1;
      }
 while ( uVar23 != 0 );
      uVar23 = uVar17 - uVar18;
   }

   if (uVar23 == 2) {
      LAB_00102ae5:this_00 = (_lambda_unsigned_long__1_*)&local_168;
      p_Var13 = const::{lambda(unsigned_long);
      #1
      if ((char)p_Var13 != '\0') {
         uVar18 = uVar18 + 1;
         LAB_00102a73:this_00 = (_lambda_unsigned_long__1_*)0x0;
         p_Var13 = const::{lambda(unsigned_long);
         #1
         ( (_lambda_unsigned_long__1_*)&local_168,uVar18 );
         if ((char)p_Var13 != '\0') goto LAB_001029e7;
      }

      LAB_00102a88:this_00 = (_lambda_unsigned_long__1_*)CONCAT71(( int7 )((ulong)this_00 >> 8), uVar17 != uVar18);
   }
 else {
      if (uVar23 == 3) {
         this_00 = (_lambda_unsigned_long__1_*)&local_168;
         p_Var13 = const::{lambda(unsigned_long);
         #1
         if ((char)p_Var13 != '\0') {
            uVar18 = uVar18 + 1;
            goto LAB_00102ae5;
         }

         goto LAB_00102a88;
      }

      if (uVar23 == 1) goto LAB_00102a73;
      this_00 = (_lambda_unsigned_long__1_*)0x0;
   }

   LAB_001029e7:if (puVar15 != (undefined1*)0x0) {
      free(puVar15);
   }

   LAB_001029f4:if (local_1a8 != (void*)0x0) {
      free(local_1a8);
   }

   if (local_1c8 != (void*)0x0) {
      free(local_1c8);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return (ulong)this_00 & 0xffffffff;
}
/* manifold::Manifold::Impl::MatchesTriNormals() const */ulong manifold::Manifold::Impl::MatchesTriNormals(Impl *this) {
   char cVar1;
   uint uVar2;
   ulong uVar3;
   ulong uVar4;
   ulong uVar5;
   ulong uVar6;
   long in_FS_OFFSET;
   ulong local_68[2];
   undefined8 local_58;
   undefined8 local_48;
   double local_38;
   long local_30;
   uVar4 = 1;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(ulong*)( this + 0x68 ) == 0 ) || ( uVar5 = *(ulong*)( this + 0x68 ) / 3 * (ulong*)( this + 0x98 ) != uVar5 )) goto LAB_00102c20;
   local_58 = *(undefined8*)( this + 0x48 );
   local_48 = *(undefined8*)( this + 0x90 );
   uVar4 = *(ulong*)( this + 0x60 );
   local_38 = *(double*)( this + 0x30 ) + *(double*)( this + 0x30 );
   local_68[0] = uVar4;
   if ((long)uVar5 >> 2 == 0) {
      uVar6 = 0;
      uVar3 = uVar5;
   }
 else {
      uVar6 = 0;
      do {
         cVar1 = (anonymous_namespace)::CheckCCW::operator ()((CheckCCW*)local_68, uVar6);
         if (cVar1 == '\0') goto LAB_00102c11;
         uVar3 = uVar6 + 1;
         cVar1 = (anonymous_namespace)::CheckCCW::operator ()((CheckCCW*)local_68, uVar3);
         if (cVar1 == '\0') {
            LAB_00102c48:uVar4 = CONCAT71(( int7 )(uVar4 >> 8), uVar5 == uVar3);
            goto LAB_00102c20;
         }

         uVar3 = uVar6 + 2;
         cVar1 = (anonymous_namespace)::CheckCCW::operator ()((CheckCCW*)local_68, uVar3);
         if (cVar1 == '\0') goto LAB_00102c48;
         uVar3 = uVar6 + 3;
         cVar1 = (anonymous_namespace)::CheckCCW::operator ()((CheckCCW*)local_68, uVar3);
         if (cVar1 == '\0') goto LAB_00102c48;
         uVar6 = uVar6 + 4;
      }
 while ( uVar6 != ( (long)uVar5 >> 2 ) * 4 );
      uVar3 = uVar5 - uVar6;
   }

   if (uVar3 == 2) {
      LAB_00102ca0:cVar1 = (anonymous_namespace)::CheckCCW::operator ()((CheckCCW*)local_68, uVar6);
      if (cVar1 != '\0') {
         uVar6 = uVar6 + 1;
         LAB_00102c73:uVar2 = (anonymous_namespace)::CheckCCW::operator ()((CheckCCW*)local_68, uVar6);
         uVar4 = (ulong)uVar2;
         if ((char)uVar2 != '\0') goto LAB_00102c20;
      }

   }
 else {
      if (uVar3 != 3) {
         uVar4 = 1;
         if (uVar3 != 1) goto LAB_00102c20;
         goto LAB_00102c73;
      }

      cVar1 = (anonymous_namespace)::CheckCCW::operator ()((CheckCCW*)local_68, uVar6);
      if (cVar1 != '\0') {
         uVar6 = uVar6 + 1;
         goto LAB_00102ca0;
      }

   }

   LAB_00102c11:uVar4 = CONCAT71(( int7 )(uVar4 >> 8), uVar5 == uVar6);
   LAB_00102c20:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4 & 0xffffffff;
}
/* manifold::Manifold::Impl::NumDegenerateTris() const */int manifold::Manifold::Impl::NumDegenerateTris(Impl *this) {
   ulong uVar1;
   char cVar2;
   ulong uVar3;
   int iVar4;
   long in_FS_OFFSET;
   undefined8 local_68[2];
   undefined8 local_58;
   undefined8 local_48;
   double local_38;
   long local_30;
   iVar4 = 1;
   uVar1 = *(ulong*)( this + 0x68 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( uVar1 != 0 ) && ( *(ulong*)( this + 0x98 ) == uVar1 / 3 )) {
      local_38 = _LC11 * *(double*)( this + 0x30 );
      local_58 = *(undefined8*)( this + 0x48 );
      local_48 = *(undefined8*)( this + 0x90 );
      local_68[0] = *(undefined8*)( this + 0x60 );
      if (uVar1 < 3) {
         iVar4 = 0;
      }
 else {
         uVar3 = 0;
         iVar4 = 0;
         do {
            cVar2 = (anonymous_namespace)::CheckCCW::operator ()((CheckCCW*)local_68, uVar3);
            iVar4 = ( iVar4 + 1 ) - ( uint )(cVar2 == '\0');
            uVar3 = uVar3 + 1;
         }
 while ( uVar1 / 3 != uVar3 );
      }

   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar4;
}
/* manifold::Manifold::Impl::GetProperty(manifold::Manifold::Impl::Property) const */double manifold::Manifold::Impl::GetProperty(Impl *this, int param_2) {
   double *pdVar1;
   double *pdVar2;
   double *pdVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   ulong uVar7;
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
   dVar8 = 0.0;
   if (2 < *(ulong*)( this + 0x68 )) {
      lVar4 = *(long*)( this + 0x48 );
      lVar5 = *(long*)( this + 0x60 );
      uVar7 = 0;
      dVar12 = 0.0;
      lVar6 = 0;
      dVar11 = dVar12;
      do {
         pdVar1 = (double*)( lVar4 + (long)*(int*)( lVar5 + lVar6 ) * 0x18 );
         dVar16 = *pdVar1;
         dVar14 = pdVar1[1];
         pdVar2 = (double*)( lVar4 + (long)*(int*)( lVar5 + 0x18 + lVar6 ) * 0x18 );
         pdVar3 = (double*)( lVar4 + (long)*(int*)( lVar5 + 0xc + lVar6 ) * 0x18 );
         dVar8 = pdVar1[2];
         if (param_2 == 1) {
            dVar9 = pdVar2[1] - dVar14;
            dVar14 = pdVar3[1] - dVar14;
            dVar13 = *pdVar2 - dVar16;
            dVar16 = *pdVar3 - dVar16;
            dVar18 = pdVar2[2] - dVar8;
            dVar8 = pdVar3[2] - dVar8;
            dVar10 = dVar18 * dVar14 - dVar9 * dVar8;
            dVar8 = dVar8 * dVar13 - dVar18 * dVar16;
            dVar16 = dVar16 * dVar9 - dVar13 * dVar14;
            dVar16 = SQRT(dVar10 * dVar10 + 0.0 + dVar8 * dVar8 + dVar16 * dVar16) * _LC10;
         }
 else {
            dVar10 = pdVar2[1] - dVar14;
            dVar17 = pdVar2[2] - dVar8;
            dVar18 = pdVar3[1] - dVar14;
            dVar9 = pdVar3[2] - dVar8;
            dVar13 = *pdVar2 - dVar16;
            dVar15 = *pdVar3 - dVar16;
            dVar16 = ( ( dVar17 * dVar18 - dVar10 * dVar9 ) * dVar16 + 0.0 + ( dVar9 * dVar13 - dVar17 * dVar15 ) * dVar14 + ( dVar10 * dVar15 - dVar13 * dVar18 ) * dVar8 ) / _LC12;
         }

         uVar7 = uVar7 + 1;
         lVar6 = lVar6 + 0x24;
         dVar8 = dVar16 + dVar11;
         dVar12 = dVar12 + ( dVar11 - dVar8 ) + dVar16;
         dVar11 = dVar8;
      }
 while ( *(ulong*)( this + 0x68 ) / 3 != uVar7 );
      dVar8 = dVar8 + dVar12;
   }

   return dVar8;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* manifold::Manifold::Impl::CalculateCurvature(int, int) */void manifold::Manifold::Impl::CalculateCurvature(Impl *this, int param_1, int param_2) {
   double *pdVar1;
   double *pdVar2;
   char cVar3;
   double dVar4;
   int iVar5;
   int iVar6;
   undefined1 auVar7[16];
   undefined8 uVar8;
   undefined1 auVar9[8];
   undefined8 uVar10;
   undefined8 uVar11;
   undefined8 uVar12;
   ulong uVar13;
   undefined8 *puVar14;
   undefined8 *puVar15;
   size_t sVar16;
   undefined8 *puVar17;
   void *pvVar18;
   long lVar19;
   ulong uVar20;
   long lVar21;
   int *piVar22;
   int iVar23;
   int *piVar24;
   long lVar25;
   int iVar26;
   int iVar27;
   long lVar28;
   long lVar29;
   long in_FS_OFFSET;
   double dVar30;
   double dVar31;
   double dVar32;
   double dVar33;
   double dVar34;
   double dVar35;
   void *local_138;
   void *local_128;
   undefined8 *local_110;
   double local_108;
   void *local_100;
   void *local_f8;
   double local_f0;
   undefined8 *local_e0;
   undefined8 local_98;
   undefined4 local_90;
   int local_8c;
   undefined1 local_88[8];
   undefined8 uStack_80;
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   double local_48;
   long local_40;
   uVar13 = *(ulong*)( this + 0x68 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( 2 < uVar13 ) && ( -1 < ( param_2 & param_1 ) )) {
      lVar19 = *(long*)( this + 0x50 );
      if (lVar19 == 0) {
         local_128 = (void*)0x0;
         local_f8 = (void*)0x0;
         local_100 = (void*)0x0;
         local_110 = (undefined8*)0x0;
      }
 else {
         sVar16 = lVar19 * 8;
         local_128 = calloc(sVar16, 1);
         local_110 = (undefined8*)malloc(sVar16);
         uVar8 = _LC13;
         puVar17 = local_110 + lVar19;
         if (puVar17 != local_110) {
            puVar14 = local_110;
            if (( (int)puVar17 - (int)local_110 & 8U ) != 0) {
               *local_110 = _LC13;
               puVar14 = local_110 + 1;
               if (puVar17 == puVar14) goto LAB_001039f2;
            }

            do {
               *puVar14 = uVar8;
               puVar15 = puVar14 + 2;
               puVar14[1] = uVar8;
               puVar14 = puVar15;
            }
 while ( puVar17 != puVar15 );
         }

         LAB_001039f2:local_100 = calloc(sVar16, 1);
         local_f8 = calloc(sVar16, 1);
      }

      lVar19 = *(long*)( this + 0x48 );
      lVar21 = 0;
      lVar28 = *(long*)( this + 0x60 );
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar13;
      lVar29 = *(long*)( this + 0x90 );
      do {
         local_48 = 0.0;
         local_90 = 2;
         local_f0 = 0.0;
         local_108 = 0.0;
         local_98 = _LC4;
         _local_88 = (undefined1[16])0x0;
         local_78 = (undefined1[16])0x0;
         local_68 = (undefined1[16])0x0;
         local_58 = (undefined1[16])0x0;
         piVar24 = (int*)&local_98;
         do {
            iVar5 = *piVar24;
            piVar22 = (int*)( lVar28 + ( iVar5 + lVar21 ) * 0xc );
            iVar26 = *piVar22;
            iVar27 = piVar22[1];
            pdVar1 = (double*)( lVar19 + (long)iVar26 * 0x18 );
            pdVar2 = (double*)( lVar19 + (long)iVar27 * 0x18 );
            dVar34 = *pdVar2 - *pdVar1;
            dVar33 = pdVar2[1] - pdVar1[1];
            dVar31 = pdVar2[2] - pdVar1[2];
            lVar25 = (long)iVar5 * 0x18;
            iVar6 = piVar22[2];
            *(double*)( local_88 + lVar25 + 8 ) = dVar33;
            *(double*)( local_78 + lVar25 ) = dVar31;
            dVar30 = SQRT(dVar34 * dVar34 + 0.0 + dVar33 * dVar33 + dVar31 * dVar31);
            if (iVar5 == 0) {
               uStack_80 = dVar33 / dVar30;
               local_88 = ( undefined1[8] )(dVar34 / dVar30);
               local_78._0_8_ = dVar31 / dVar30;
               local_108 = dVar30;
            }
 else if (iVar5 == 1) {
               local_78._8_8_ = dVar34 / dVar30;
               local_68._8_8_ = dVar31 / dVar30;
               local_68._0_8_ = dVar33 / dVar30;
               local_f0 = dVar30;
            }
 else {
               *(double*)( local_88 + lVar25 ) = dVar34 / dVar30;
               *(double*)( local_88 + lVar25 + 8 ) = dVar33 / dVar30;
               *(double*)( local_78 + lVar25 ) = dVar31 / dVar30;
            }

            dVar32 = *(double*)( lVar29 + lVar21 * 8 );
            lVar25 = (long)iVar26 * 8;
            piVar24 = piVar24 + 1;
            dVar35 = *(double*)( lVar29 + 8 + lVar21 * 8 );
            dVar4 = *(double*)( lVar29 + 0x10 + lVar21 * 8 );
            pdVar1 = (double*)( lVar29 + (long)( iVar6 / 3 ) * 0x18 );
            dVar31 = asin(( dVar35 * pdVar1[2] - dVar4 * pdVar1[1] ) * ( dVar34 / dVar30 ) + 0.0 + ( dVar4 * *pdVar1 - pdVar1[2] * dVar32 ) * ( dVar33 / dVar30 ) + ( pdVar1[1] * dVar32 - dVar35 * *pdVar1 ) * ( dVar31 / dVar30 ));
            dVar31 = dVar31 * dVar30 * __LC14;
            AtomicAdd<double>((double*)( (long)local_128 + lVar25 ), dVar31);
            AtomicAdd<double>((double*)( (long)local_128 + (long)iVar27 * 8 ), dVar31);
            AtomicAdd<double>((double*)( (long)local_f8 + lVar25 ), _LC1);
         }
 while ( piVar24 != &local_8c );
         auVar9 = local_88;
         dVar30 = uStack_80;
         uVar8 = local_78._0_8_;
         dVar31 = acos((double)( ( ulong )((double)local_88 * (double)local_58._0_8_ + 0.0 + uStack_80 * (double)local_58._8_8_ + (double)local_78._0_8_ * local_48) ^ _LC3 ));
         uVar10 = local_78._8_8_;
         uVar11 = local_68._0_8_;
         uVar12 = local_68._8_8_;
         dVar33 = acos((double)( ( ulong )((double)auVar9 * (double)local_78._8_8_ + 0.0 + dVar30 * (double)local_68._0_8_ + (double)uVar8 * (double)local_68._8_8_) ^ _LC3 ));
         local_90 = 2;
         dVar35 = _LC15 - dVar31;
         local_98 = _LC4;
         dVar34 = dVar30 * (double)uVar12 - (double)uVar8 * (double)uVar11;
         dVar32 = (double)uVar8 * (double)uVar10 - (double)uVar12 * (double)auVar9;
         dVar30 = (double)auVar9 * (double)uVar11 - dVar30 * (double)uVar10;
         dVar30 = ( local_108 * local_f0 * SQRT(dVar34 * dVar34 + 0.0 + dVar32 * dVar32 + dVar30 * dVar30) ) / _LC12;
         piVar24 = (int*)&local_98;
         do {
            iVar5 = *piVar24;
            lVar25 = (long)*(int*)( lVar28 + ( iVar5 + lVar21 ) * 0xc );
            dVar34 = dVar31;
            if (( iVar5 != 0 ) && ( dVar34 = iVar5 == 1 )) {
               dVar34 = dVar33;
            }

            piVar24 = piVar24 + 1;
            AtomicAdd<double>((double*)( local_110 + lVar25 ), (double)( (ulong)dVar34 ^ _LC3 ));
            AtomicAdd<double>((double*)( (long)local_100 + lVar25 * 8 ), dVar30);
         }
 while ( piVar24 != &local_8c );
         lVar21 = lVar21 + 3;
      }
 while ( uVar13 / 3 + ( SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar7, 8) & 0xfffffffffffffffe ) != lVar21 );
      uVar20 = 0;
      uVar13 = *(ulong*)( this + 0x50 );
      if (uVar13 != 0) {
         do {
            lVar19 = (long)(int)uVar20;
            uVar20 = uVar20 + 1;
            pdVar1 = (double*)( (long)local_128 + lVar19 * 8 );
            dVar31 = *(double*)( (long)local_f8 + lVar19 * 8 ) / ( _LC12 * *(double*)( (long)local_100 + lVar19 * 8 ) );
            dVar30 = (double)local_110[lVar19];
            *pdVar1 = *pdVar1 * dVar31;
            local_110[lVar19] = dVar31 * dVar30;
         }
 while ( uVar13 != uVar20 );
      }

      iVar5 = *(int*)( this + 0xc4 );
      uVar20 = *(ulong*)( this + 0xd0 );
      puVar17 = *(undefined8**)( this + 200 );
      iVar26 = param_1;
      if (param_1 <= param_2) {
         iVar26 = param_2;
      }

      iVar27 = iVar26 + 1;
      if (iVar26 + 1 < iVar5) {
         iVar27 = iVar5;
      }

      if (uVar20 == 0) {
         local_e0 = (undefined8*)0x0;
         pvVar18 = (void*)0x0;
         lVar19 = 0;
         if (iVar5 == 0) goto LAB_0010394b;
      }
 else {
         sVar16 = uVar20 * 8;
         local_e0 = (undefined8*)malloc(sVar16);
         if ((long)sVar16 < 9) {
            if (sVar16 == 8) {
               *local_e0 = *puVar17;
            }

         }
 else {
            memcpy(local_e0, puVar17, sVar16);
         }

         if (iVar5 != 0) {
            uVar13 = uVar20 / (ulong)(long)iVar5;
         }

         LAB_0010394b:pvVar18 = (void*)0x0;
         lVar19 = (long)iVar27 * uVar13;
         if (lVar19 != 0) {
            pvVar18 = calloc(lVar19 * 8, 1);
         }

      }

      if (puVar17 != (undefined8*)0x0) {
         free(puVar17);
      }

      *(void**)( this + 200 ) = pvVar18;
      *(int*)( this + 0xc4 ) = iVar27;
      *(long*)( this + 0xd0 ) = lVar19;
      *(long*)( this + 0xd8 ) = lVar19;
      iVar26 = iVar27;
      if (*(long*)( this + 0x130 ) == 0) {
         uVar20 = *(ulong*)( this + 0x68 ) / 3;
         uVar13 = 0;
         if (*(ulong*)( this + 0x138 ) < uVar20) {
            pvVar18 = malloc(uVar20 * 0xc);
            if (*(void**)( this + 0x128 ) != (void*)0x0) {
               free(*(void**)( this + 0x128 ));
               *(void**)( this + 0x128 ) = pvVar18;
               uVar13 = *(ulong*)( this + 0x130 );
               *(ulong*)( this + 0x138 ) = uVar20;
               iVar26 = *(int*)( this + 0xc4 );
               goto LAB_00103b94;
            }

            *(void**)( this + 0x128 ) = pvVar18;
            *(ulong*)( this + 0x138 ) = uVar20;
            LAB_00103baa:lVar19 = *(long*)( this + 0x128 );
            for (puVar17 = (undefined8*)( lVar19 + uVar13 * 0xc ); (undefined8*)( lVar19 + uVar20 * 0xc ) != puVar17; puVar17 = (undefined8*)( (long)puVar17 + 0xc )) {
               *puVar17 = 0;
               *(undefined4*)( puVar17 + 1 ) = 0;
            }

         }
 else {
            LAB_00103b94:if (uVar13 < uVar20) goto LAB_00103baa;
         }

         *(ulong*)( this + 0x130 ) = uVar20;
      }

      if (iVar26 == 0) {
         sVar16 = *(size_t*)( this + 0x50 );
         if (sVar16 == 0) goto LAB_001036ad;
         LAB_00103b24:local_138 = calloc(sVar16, 1);
         uVar13 = *(ulong*)( this + 0x68 );
         piVar24 = *(int**)( this + 0x128 );
         lVar19 = *(long*)( this + 200 );
         lVar28 = *(long*)( this + 0x60 );
         if (2 < uVar13) goto LAB_001036e5;
         LAB_0010384b:free(local_138);
      }
 else {
         sVar16 = *(ulong*)( this + 0xd0 ) / (ulong)(long)iVar26;
         if (sVar16 != 0) goto LAB_00103b24;
         LAB_001036ad:uVar13 = *(ulong*)( this + 0x68 );
         local_138 = (void*)0x0;
         piVar24 = *(int**)( this + 0x128 );
         lVar19 = *(long*)( this + 200 );
         lVar28 = *(long*)( this + 0x60 );
         if (2 < uVar13) {
            LAB_001036e5:lVar29 = 0;
            do {
               uStack_80._0_4_ = 2;
               local_88 = (undefined1[8])_LC4;
               piVar22 = (int*)local_88;
               do {
                  iVar26 = *piVar22;
                  iVar6 = *(int*)( lVar28 + ( iVar26 + lVar29 ) * 0xc );
                  if (iVar5 == 0) {
                     iVar23 = iVar6;
                     if (iVar26 == 0) {
                        *piVar24 = iVar6;
                     }
 else if (iVar26 == 1) {
                        piVar24[1] = iVar6;
                     }
 else {
                        piVar24[2] = iVar6;
                     }

                  }
 else if (iVar26 == 0) {
                     iVar23 = *piVar24;
                  }
 else if (iVar26 == 1) {
                     iVar23 = piVar24[1];
                  }
 else {
                     iVar23 = piVar24[2];
                  }

                  LOCK();
                  cVar3 = *(char*)( (long)local_138 + (long)iVar23 );
                  *(char*)( (long)local_138 + (long)iVar23 ) = '\x01';
                  UNLOCK();
                  if (cVar3 != '\x01') {
                     if (0 < iVar5) {
                        memcpy((void*)( lVar19 + (long)( iVar23 * iVar27 ) * 8 ), local_e0 + iVar5 * iVar23, ( ulong )(iVar5 - 1) * 8 + 8);
                     }

                     if (-1 < param_1) {
                        *(undefined8*)( lVar19 + (long)( iVar23 * iVar27 + param_1 ) * 8 ) = local_110[iVar6];
                     }

                     if (-1 < param_2) {
                        *(undefined8*)( lVar19 + (long)( iVar23 * iVar27 + param_2 ) * 8 ) = *(undefined8*)( (long)local_128 + (long)iVar6 * 8 );
                     }

                  }

                  piVar22 = piVar22 + 1;
               }
 while ( piVar22 != (int*)( local_88 + 0xc ) );
               piVar24 = piVar24 + 3;
               lVar29 = lVar29 + 3;
            }
 while ( ( uVar13 / 3 ) * 3 != lVar29 );
            if (local_138 != (void*)0x0) goto LAB_0010384b;
         }

      }

      if (local_e0 != (undefined8*)0x0) {
         free(local_e0);
      }

      if (local_f8 != (void*)0x0) {
         free(local_f8);
      }

      if (local_100 != (void*)0x0) {
         free(local_100);
      }

      if (local_110 != (undefined8*)0x0) {
         free(local_110);
      }

      if (local_128 != (void*)0x0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            free(local_128);
            return;
         }

         goto LAB_00103c75;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00103c75:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Type propagation algorithm not settling *//* manifold::Manifold::Impl::CalculateBBox() */void manifold::Manifold::Impl::CalculateBBox(Impl *this) {
   double *pdVar1;
   double dVar2;
   double dVar3;
   double dVar4;
   double dVar5;
   double dVar6;
   double *pdVar7;
   double *pdVar8;
   long lVar9;
   long lVar10;
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
   double dVar21;
   double dVar22;
   double dVar23;
   double dVar24;
   double dVar25;
   pdVar7 = *(double**)( this + 0x48 );
   pdVar1 = pdVar7 + *(long*)( this + 0x50 ) * 3;
   lVar10 = *(long*)( this + 0x50 ) * 0x18;
   pdVar8 = pdVar7;
   dVar16 = _LC16;
   dVar14 = _LC16;
   dVar24 = _LC16;
   lVar9 = lVar10;
   while (0x48 < lVar9) {
      dVar11 = *pdVar8;
      dVar21 = pdVar8[1];
      dVar19 = pdVar8[2];
      dVar13 = pdVar8[3];
      dVar18 = pdVar8[4];
      dVar20 = pdVar8[5];
      if (NAN(dVar11)) {
         dVar17 = pdVar8[6];
         dVar25 = pdVar8[7];
         dVar12 = pdVar8[8];
         dVar15 = pdVar8[9];
         dVar22 = pdVar8[10];
         dVar23 = pdVar8[0xb];
         if (!NAN(dVar17)) goto LAB_00103d29;
         dVar11 = dVar13;
         dVar2 = dVar15;
         dVar19 = dVar20;
         dVar3 = dVar23;
         dVar21 = dVar18;
         dVar4 = dVar22;
         dVar5 = dVar15;
         if (!NAN(dVar13)) goto joined_r0x00103d45;
         dVar11 = dVar15;
         dVar21 = dVar22;
         dVar19 = dVar23;
         dVar25 = dVar16;
         dVar12 = dVar14;
         dVar6 = dVar24;
         dVar17 = dVar15;
         if (!NAN(dVar16)) goto joined_r0x00103fca;
      }
 else {
         if (!NAN(dVar13)) {
            if (dVar13 <= dVar11) {
               dVar11 = dVar13;
            }

            if (dVar18 <= dVar21) {
               dVar21 = dVar18;
            }

            if (dVar20 <= dVar19) {
               dVar19 = dVar20;
            }

         }

         dVar17 = pdVar8[6];
         dVar25 = pdVar8[7];
         dVar12 = pdVar8[8];
         dVar15 = pdVar8[9];
         dVar22 = pdVar8[10];
         dVar23 = pdVar8[0xb];
         dVar13 = dVar11;
         dVar20 = dVar19;
         dVar18 = dVar21;
         dVar2 = dVar15;
         dVar3 = dVar23;
         dVar4 = dVar22;
         dVar5 = dVar15;
         if (!NAN(dVar17)) {
            LAB_00103d29:dVar11 = dVar17;
            dVar2 = dVar17;
            dVar19 = dVar12;
            dVar3 = dVar12;
            dVar21 = dVar25;
            dVar4 = dVar25;
            dVar5 = dVar13;
            if (!NAN(dVar15)) {
               if (dVar15 <= dVar17) {
                  dVar11 = dVar15;
               }

               if (dVar22 <= dVar25) {
                  dVar21 = dVar22;
               }

               dVar2 = dVar11;
               dVar4 = dVar21;
               if (dVar23 <= dVar12) {
                  dVar19 = dVar23;
                  dVar3 = dVar23;
               }

            }

         }

         joined_r0x00103d45:dVar25 = dVar11;
         dVar12 = dVar19;
         dVar6 = dVar21;
         dVar17 = dVar16;
         if (!NAN(dVar5)) {
            dVar11 = dVar13;
            if (dVar2 <= dVar13) {
               dVar11 = dVar2;
            }

            dVar21 = dVar18;
            if (dVar4 <= dVar18) {
               dVar21 = dVar4;
            }

            dVar19 = dVar20;
            dVar25 = dVar11;
            dVar12 = dVar20;
            dVar6 = dVar21;
            if (dVar3 <= dVar20) {
               dVar19 = dVar3;
               dVar12 = dVar3;
            }

         }

         joined_r0x00103fca:dVar22 = dVar6;
         dVar23 = dVar12;
         dVar15 = dVar25;
         if (!NAN(dVar17)) {
            dVar15 = dVar16;
            if (dVar11 <= dVar16) {
               dVar15 = dVar11;
            }

            dVar22 = dVar24;
            if (dVar21 <= dVar24) {
               dVar22 = dVar21;
            }

            dVar23 = dVar14;
            if (dVar19 <= dVar14) {
               dVar23 = dVar19;
            }

         }

      }

      pdVar8 = pdVar8 + 0xc;
      dVar16 = dVar15;
      dVar14 = dVar23;
      dVar24 = dVar22;
      lVar9 = (long)pdVar1 - (long)pdVar8;
   }
;
   for (; pdVar1 != pdVar8; pdVar8 = pdVar8 + 3) {
      dVar11 = *pdVar8;
      dVar21 = pdVar8[1];
      dVar19 = pdVar8[2];
      dVar13 = dVar11;
      dVar18 = dVar19;
      dVar20 = dVar21;
      if (( !NAN(dVar16) ) && ( dVar13 = dVar16 ),dVar18 = dVar14,dVar20 = dVar24,!NAN(dVar11)) {
         if (dVar11 <= dVar16) {
            dVar16 = dVar11;
         }

         if (dVar21 <= dVar24) {
            dVar24 = dVar21;
         }

         dVar13 = dVar16;
         dVar20 = dVar24;
         if (dVar19 <= dVar14) {
            dVar18 = dVar19;
         }

      }

      dVar16 = dVar13;
      dVar14 = dVar18;
      dVar24 = dVar20;
   }

   *(double*)( this + 0x10 ) = dVar14;
   dVar14 = _LC17;
   *(double*)this = dVar16;
   *(double*)( this + 8 ) = dVar24;
   dVar16 = dVar14;
   dVar24 = dVar14;
   do {
      if (lVar10 < 0x49) {
         for (; pdVar1 != pdVar7; pdVar7 = pdVar7 + 3) {
            dVar11 = *pdVar7;
            dVar21 = pdVar7[1];
            dVar19 = pdVar7[2];
            dVar13 = dVar11;
            dVar20 = dVar19;
            dVar18 = dVar21;
            if (( !NAN(dVar14) ) && ( dVar13 = dVar14 ),dVar20 = dVar16,dVar18 = dVar24,!NAN(dVar11)) {
               dVar13 = dVar11;
               if (dVar11 <= dVar14) {
                  dVar13 = dVar14;
               }

               dVar18 = dVar21;
               if (dVar21 <= dVar24) {
                  dVar18 = dVar24;
               }

               dVar20 = dVar19;
               if (dVar19 <= dVar16) {
                  dVar20 = dVar16;
               }

            }

            dVar14 = dVar13;
            dVar16 = dVar20;
            dVar24 = dVar18;
         }

         *(double*)( this + 0x18 ) = dVar14;
         *(double*)( this + 0x20 ) = dVar24;
         *(double*)( this + 0x28 ) = dVar16;
         return;
      }

      dVar11 = *pdVar7;
      dVar21 = pdVar7[1];
      dVar19 = pdVar7[2];
      dVar13 = pdVar7[3];
      dVar18 = pdVar7[4];
      dVar20 = pdVar7[5];
      if (NAN(dVar11)) {
         dVar19 = pdVar7[6];
         dVar17 = pdVar7[7];
         dVar25 = pdVar7[8];
         dVar12 = pdVar7[9];
         dVar15 = pdVar7[10];
         dVar22 = pdVar7[0xb];
         if (!NAN(dVar19)) goto LAB_00103e5b;
         dVar2 = dVar12;
         dVar11 = dVar13;
         dVar3 = dVar15;
         dVar4 = dVar22;
         dVar21 = dVar18;
         dVar23 = dVar20;
         dVar5 = dVar12;
         if (!NAN(dVar13)) goto joined_r0x0010408c;
         dVar11 = dVar12;
         dVar21 = dVar15;
         dVar23 = dVar22;
         dVar25 = dVar14;
         dVar19 = dVar16;
         dVar6 = dVar24;
         dVar17 = dVar12;
         if (!NAN(dVar14)) goto joined_r0x00104042;
      }
 else {
         dVar23 = dVar19;
         if (!NAN(dVar13)) {
            if (dVar13 <= dVar11) {
               dVar13 = dVar11;
            }

            if (dVar18 <= dVar21) {
               dVar18 = dVar21;
            }

            dVar11 = dVar13;
            dVar21 = dVar18;
            dVar23 = dVar20;
            if (dVar20 <= dVar19) {
               dVar23 = dVar19;
            }

         }

         dVar19 = pdVar7[6];
         dVar17 = pdVar7[7];
         dVar25 = pdVar7[8];
         dVar12 = pdVar7[9];
         dVar15 = pdVar7[10];
         dVar22 = pdVar7[0xb];
         dVar13 = dVar11;
         dVar18 = dVar21;
         dVar20 = dVar23;
         dVar2 = dVar12;
         dVar3 = dVar15;
         dVar4 = dVar22;
         dVar5 = dVar12;
         if (!NAN(dVar19)) {
            LAB_00103e5b:dVar2 = dVar19;
            dVar11 = dVar19;
            dVar3 = dVar17;
            dVar4 = dVar25;
            dVar21 = dVar17;
            dVar23 = dVar25;
            dVar5 = dVar13;
            if (!NAN(dVar12)) {
               if (dVar12 <= dVar19) {
                  dVar12 = dVar19;
               }

               if (dVar15 <= dVar17) {
                  dVar15 = dVar17;
               }

               dVar2 = dVar12;
               dVar11 = dVar12;
               dVar3 = dVar15;
               dVar4 = dVar22;
               dVar21 = dVar15;
               dVar23 = dVar22;
               if (dVar22 <= dVar25) {
                  dVar4 = dVar25;
                  dVar23 = dVar25;
               }

            }

         }

         joined_r0x0010408c:dVar25 = dVar11;
         dVar19 = dVar23;
         dVar6 = dVar21;
         dVar17 = dVar14;
         if (!NAN(dVar5)) {
            dVar11 = dVar2;
            if (dVar2 <= dVar13) {
               dVar11 = dVar13;
            }

            dVar21 = dVar3;
            if (dVar3 <= dVar18) {
               dVar21 = dVar18;
            }

            dVar23 = dVar4;
            dVar25 = dVar11;
            dVar19 = dVar4;
            dVar6 = dVar21;
            if (dVar4 <= dVar20) {
               dVar23 = dVar20;
               dVar19 = dVar20;
            }

         }

         joined_r0x00104042:dVar15 = dVar6;
         dVar12 = dVar25;
         dVar22 = dVar19;
         if (!NAN(dVar17)) {
            dVar12 = dVar11;
            if (dVar11 <= dVar14) {
               dVar12 = dVar14;
            }

            dVar15 = dVar21;
            if (dVar21 <= dVar24) {
               dVar15 = dVar24;
            }

            dVar22 = dVar23;
            if (dVar23 <= dVar16) {
               dVar22 = dVar16;
            }

         }

      }

      pdVar7 = pdVar7 + 0xc;
      lVar10 = (long)pdVar1 - (long)pdVar7;
      dVar14 = dVar12;
      dVar16 = dVar22;
      dVar24 = dVar15;
   }
 while ( true );
}
/* manifold::Manifold::Impl::IsFinite() const */byte manifold::Manifold::Impl::IsFinite(Impl *this) {
   ulong *puVar1;
   ulong *puVar2;
   ulong *puVar3;
   ulong *puVar4;
   ulong *puVar5;
   ulong *puVar6;
   ulong *puVar7;
   ulong *puVar8;
   ulong *puVar9;
   ulong *puVar10;
   ulong *puVar11;
   ulong *puVar12;
   ulong uVar13;
   long lVar14;
   byte bVar15;
   ulong *puVar16;
   puVar16 = *(ulong**)( this + 0x48 );
   bVar15 = 1;
   puVar12 = puVar16 + *(long*)( this + 0x50 ) * 3;
   lVar14 = *(long*)( this + 0x50 ) * 0x18;
   while (0x48 < lVar14) {
      puVar1 = puVar16 + 3;
      uVar13 = *puVar16;
      puVar2 = puVar16 + 1;
      puVar3 = puVar16 + 2;
      puVar4 = puVar16 + 9;
      puVar5 = puVar16 + 10;
      puVar6 = puVar16 + 0xb;
      puVar7 = puVar16 + 6;
      puVar8 = puVar16 + 7;
      puVar9 = puVar16 + 8;
      puVar10 = puVar16 + 4;
      puVar11 = puVar16 + 5;
      puVar16 = puVar16 + 0xc;
      bVar15 = bVar15 & ( ( ( ( ( ( ( ( ( ( (double)( *puVar1 & _LC2 ) <= _LC7 && (double)( uVar13 & _LC2 ) <= _LC7 ) && (double)( *puVar2 & _LC2 ) <= _LC7 ) && (double)( *puVar3 & _LC2 ) <= _LC7 ) && (double)( *puVar4 & _LC2 ) <= _LC7 ) && (double)( *puVar5 & _LC2 ) <= _LC7 ) && (double)( *puVar6 & _LC2 ) <= _LC7 ) && (double)( *puVar7 & _LC2 ) <= _LC7 ) && (double)( *puVar8 & _LC2 ) <= _LC7 ) && (double)( *puVar9 & _LC2 ) <= _LC7 ) && ( (double)( *puVar10 & _LC2 ) <= _LC7 && (double)( *puVar11 & _LC2 ) <= _LC7 ) );
      lVar14 = (long)puVar12 - (long)puVar16;
   }
;
   for (; puVar12 != puVar16; puVar16 = puVar16 + 3) {
      bVar15 = bVar15 & ( ( (double)( puVar16[1] & _LC2 ) <= _LC7 && (double)( puVar16[2] & _LC2 ) <= _LC7 ) && (double)( *puVar16 & _LC2 ) <= _LC7 );
   }

   return bVar15;
}
/* manifold::Manifold::Impl::IsIndexInBounds(manifold::VecView<linalg::vec<int, 3> const>) const */undefined8 manifold::Manifold::Impl::IsIndexInBounds(Impl *this, undefined8 *param_2) {
   int iVar1;
   int iVar2;
   int *piVar3;
   int iVar4;
   int *piVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   int iVar9;
   int iVar10;
   int iVar11;
   int iVar12;
   int iVar13;
   int iVar14;
   int iVar15;
   int iVar16;
   int local_44;
   piVar5 = (int*)*param_2;
   piVar3 = piVar5 + param_2[1] * 3;
   if (param_2[1] * 0xc < 0x25) {
      iVar11 = 0x7fffffff;
      iVar14 = -0x80000000;
      if (piVar5 != piVar3) goto LAB_00104492;
   }
 else {
      iVar14 = -0x80000000;
      iVar11 = 0x7fffffff;
      do {
         iVar9 = piVar5[4];
         iVar1 = piVar5[5];
         iVar2 = piVar5[3];
         if (iVar9 < iVar1) {
            iVar8 = piVar5[1];
            iVar4 = piVar5[2];
            iVar16 = iVar1;
            if (iVar1 < iVar2) {
               iVar16 = iVar2;
            }

            iVar1 = *piVar5;
            if (iVar8 < iVar4) goto LAB_00104400;
            LAB_00104321:iVar12 = piVar5[9];
            local_44 = iVar8;
            if (iVar8 <= iVar1) {
               local_44 = iVar1;
            }

            if (iVar4 < iVar8) {
               iVar8 = iVar4;
            }

            iVar4 = piVar5[0xb];
            iVar7 = piVar5[10];
            if (iVar4 <= iVar7) goto LAB_00104343;
            LAB_0010441b:iVar6 = piVar5[8];
            iVar10 = piVar5[6];
            iVar15 = iVar4;
            if (iVar4 < iVar12) {
               iVar15 = iVar12;
            }

            iVar4 = piVar5[7];
            if (iVar4 < iVar6) goto LAB_00104437;
            LAB_00104364:iVar13 = iVar4;
            if (iVar4 <= iVar10) {
               iVar13 = iVar10;
            }

            if (iVar6 < iVar4) {
               iVar4 = iVar6;
            }

         }
 else {
            iVar8 = piVar5[1];
            iVar4 = piVar5[2];
            iVar16 = iVar2;
            if (iVar2 <= iVar9) {
               iVar16 = iVar9;
            }

            if (iVar1 < iVar9) {
               iVar9 = iVar1;
            }

            iVar1 = *piVar5;
            if (iVar4 <= iVar8) goto LAB_00104321;
            LAB_00104400:iVar7 = piVar5[10];
            iVar12 = piVar5[9];
            local_44 = iVar4;
            if (iVar4 <= iVar1) {
               local_44 = iVar1;
            }

            iVar4 = piVar5[0xb];
            if (iVar7 < iVar4) goto LAB_0010441b;
            LAB_00104343:iVar6 = piVar5[8];
            iVar10 = piVar5[6];
            iVar15 = iVar7;
            if (iVar7 <= iVar12) {
               iVar15 = iVar12;
            }

            if (iVar4 < iVar7) {
               iVar7 = iVar4;
            }

            iVar4 = piVar5[7];
            if (iVar6 <= iVar4) goto LAB_00104364;
            LAB_00104437:iVar13 = iVar6;
            if (iVar6 <= iVar10) {
               iVar13 = iVar10;
            }

         }

         if (iVar2 < iVar1) {
            iVar1 = iVar2;
         }

         if (iVar12 < iVar1) {
            iVar1 = iVar12;
         }

         if (iVar10 < iVar1) {
            iVar1 = iVar10;
         }

         if (iVar9 < iVar1) {
            iVar1 = iVar9;
         }

         if (iVar8 < iVar1) {
            iVar1 = iVar8;
         }

         if (iVar7 < iVar1) {
            iVar1 = iVar7;
         }

         if (iVar4 < iVar1) {
            iVar1 = iVar4;
         }

         if (iVar1 < iVar11) {
            iVar11 = iVar1;
         }

         if (local_44 < iVar16) {
            local_44 = iVar16;
         }

         if (local_44 < iVar15) {
            local_44 = iVar15;
         }

         if (local_44 < iVar13) {
            local_44 = iVar13;
         }

         if (iVar14 < local_44) {
            iVar14 = local_44;
         }

         piVar5 = piVar5 + 0xc;
      }
 while ( 0x24 < (long)piVar3 - (long)piVar5 );
      for (; piVar3 != piVar5; piVar5 = piVar5 + 3) {
         LAB_00104492:iVar9 = piVar5[1];
         iVar1 = piVar5[2];
         iVar2 = *piVar5;
         if (iVar9 < iVar1) {
            iVar8 = iVar1;
            if (iVar1 < iVar2) {
               iVar8 = iVar2;
            }

         }
 else {
            iVar8 = iVar2;
            if (iVar2 <= iVar9) {
               iVar8 = iVar9;
            }

            if (iVar1 < iVar9) {
               iVar9 = iVar1;
            }

         }

         if (iVar9 < iVar2) {
            iVar2 = iVar9;
         }

         if (iVar2 < iVar11) {
            iVar11 = iVar2;
         }

         if (iVar14 < iVar8) {
            iVar14 = iVar8;
         }

      }

      piVar3 = (int*)0x0;
      if (iVar11 < 0) {
         return 0;
      }

   }

   return CONCAT71(( int7 )((ulong)piVar3 >> 8), iVar14 < *(int*)( this + 0x50 ));
}
/* manifold::Manifold::Impl::MinGap(manifold::Manifold::Impl const&, double) const */double manifold::Manifold::Impl::MinGap(Impl *this, Impl *param_1, double param_2) {
   ulong uVar1;
   uint *puVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   uint uVar5;
   int iVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   uint uVar9;
   undefined8 uVar10;
   undefined8 uVar11;
   undefined8 uVar12;
   undefined8 uVar13;
   undefined1 *puVar14;
   double *pdVar15;
   int iVar16;
   double *pdVar17;
   long lVar18;
   undefined1 *puVar19;
   uint uVar20;
   int iVar21;
   double *pdVar22;
   ulong uVar23;
   long lVar24;
   long lVar25;
   long lVar26;
   int *piVar27;
   double *pdVar28;
   ulong __size;
   ulong uVar29;
   int iVar30;
   long lVar31;
   ulong uVar32;
   long in_FS_OFFSET;
   bool bVar33;
   double dVar34;
   double dVar35;
   double dVar36;
   double dVar37;
   double dVar38;
   double dVar39;
   double dVar40;
   double dVar41;
   double dVar42;
   double dVar43;
   ulong local_290;
   int *local_288;
   array *local_280;
   array *local_278;
   double local_268;
   double *local_208;
   undefined1 local_200[16];
   void *local_1e8;
   undefined1 local_1e0[16];
   undefined1 *local_1c8;
   undefined1 local_1c0[16];
   undefined8 local_1a8;
   undefined4 local_1a0;
   int local_19c;
   array local_198[16];
   undefined1 local_188[16];
   undefined1 local_178[16];
   undefined1 local_168[16];
   undefined8 local_158;
   array local_148[16];
   undefined1 local_138[16];
   undefined1 local_128[16];
   undefined1 local_118[16];
   undefined8 local_108;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_200 = (undefined1[16])0x0;
   local_208 = (double*)0x0;
   local_1e8 = (void*)0x0;
   local_1e0 = (undefined1[16])0x0;
   manifold::Manifold::Impl::GetFaceBoxMorton((Vec*)param_1, (Vec*)&local_208);
   pdVar15 = local_208;
   uVar7 = local_200._0_8_;
   for (pdVar22 = local_208; local_208 + local_200._0_8_ * 6 != pdVar22; pdVar22 = pdVar22 + 6) {
      dVar40 = pdVar22[3] + param_2;
      dVar39 = *pdVar22 - param_2;
      dVar41 = pdVar22[4] + param_2;
      dVar42 = pdVar22[5] + param_2;
      dVar34 = pdVar22[1] - param_2;
      dVar38 = pdVar22[2] - param_2;
      dVar37 = dVar42;
      dVar35 = dVar41;
      dVar36 = dVar42;
      if (dVar39 < dVar40) {
         dVar43 = dVar39;
         if (dVar34 < dVar41) {
            dVar35 = dVar34;
            if (dVar38 < dVar42) goto LAB_0010468b;
         }
 else {
            dVar36 = dVar38;
            if (dVar42 <= dVar38) {
               dVar36 = dVar42;
            }

         }

         LAB_001045bc:if (dVar34 < dVar41) {
            LAB_0010465c:dVar34 = dVar41;
         }

         bVar33 = dVar38 < dVar42;
         dVar37 = dVar38;
         dVar41 = dVar34;
         dVar38 = dVar36;
         dVar39 = dVar40;
         if (bVar33) {
            dVar37 = dVar42;
         }

      }
 else {
         dVar43 = dVar40;
         if (dVar41 <= dVar34) {
            if (dVar42 <= dVar38) {
               if (dVar40 <= dVar39) {
                  dVar40 = dVar39;
               }

               goto LAB_001045bc;
            }

         }
 else {
            dVar35 = dVar34;
            if (dVar42 <= dVar38) {
               if (dVar40 <= dVar39) {
                  dVar40 = dVar39;
               }

               goto LAB_0010465c;
            }

         }

         LAB_0010468b:if (dVar39 < dVar40) {
            dVar39 = dVar40;
            if (dVar41 <= dVar34) {
               dVar41 = dVar34;
            }

         }
 else if (dVar41 <= dVar34) {
            dVar41 = dVar34;
         }

      }

      *pdVar22 = dVar43;
      pdVar22[1] = dVar35;
      pdVar22[2] = dVar38;
      pdVar22[3] = dVar39;
      pdVar22[4] = dVar41;
      pdVar22[5] = dVar37;
   }

   lVar26 = *(long*)( this + 0x170 );
   lVar31 = *(long*)( this + 0x140 );
   lVar25 = 0;
   local_1c8 = (undefined1*)0x0;
   local_1c0 = (undefined1[16])0x0;
   if (local_200._0_8_ == 0) {
      local_268 = param_2 * param_2;
   }
 else {
      do {
         iVar30 = -1;
         uVar32 = (long)(int)lVar25 << 0x20;
         pdVar22 = pdVar15 + (long)(int)lVar25 * 6;
         dVar34 = pdVar22[3];
         uVar20 = 1;
         LAB_00104770:do {
            puVar14 = local_1c8;
            puVar2 = (uint*)( lVar26 + (long)( (int)( uVar20 - 1 ) / 2 ) * 8 );
            uVar5 = *puVar2;
            uVar20 = puVar2[1];
            uVar23 = (ulong)(int)uVar20;
            pdVar28 = (double*)( uVar23 * 0x30 + lVar31 );
            pdVar17 = (double*)( (long)(int)uVar5 * 0x30 + lVar31 );
            uVar13 = _LC4;
            if (dVar34 < *pdVar17) {
               if (*pdVar28 <= dVar34) {
                  dVar35 = pdVar22[4];
                  LAB_001047c0:if (( ( pdVar28[1] <= dVar35 ) && ( pdVar28[2] <= pdVar22[5] ) ) && ( *pdVar22 <= pdVar28[3] )) {
                     bVar33 = false;
                     goto LAB_001047e6;
                  }

               }

               break;
            }

            dVar35 = pdVar22[4];
            if (( ( ( dVar35 < pdVar17[1] ) || ( dVar36 = pdVar22[5] ),dVar36 < pdVar17[2] ) ) || ( pdVar17[3] < *pdVar22 )) {
               if (*pdVar28 <= dVar34) goto LAB_001047c0;
               break;
            }

            if (( uVar5 & 1 ) == 0) {
               uVar13 = local_1c0._0_8_;
               uVar1 = local_1c0._0_8_ + 8;
               if ((ulong)local_1c0._8_8_ <= uVar1) {
                  if (local_1c0._8_8_ == 0) {
                     uVar29 = 0x80;
                  }
 else {
                     uVar29 = local_1c0._8_8_ * 2;
                     if (( ulong )(local_1c0._8_8_ * 2) < uVar1) {
                        uVar29 = uVar1;
                     }

                     if (uVar29 <= (ulong)local_1c0._8_8_) goto LAB_0010518b;
                  }

                  puVar19 = (undefined1*)malloc(uVar29);
                  if (uVar13 == 0) {
                     LAB_001052cc:if (puVar14 != (undefined1*)0x0) goto LAB_001053fb;
                  }
 else {
                     if ((long)uVar13 < 2) {
                        if (uVar13 != 1) goto LAB_001052cc;
                        *puVar19 = *puVar14;
                     }
 else {
                        memmove(puVar19, puVar14, uVar13);
                     }

                     LAB_001053fb:free(puVar14);
                  }

                  uVar23 = (ulong)uVar20;
                  local_1c8 = puVar19;
                  local_1c0._8_8_ = uVar29;
               }

               LAB_0010518b:local_1c0._0_8_ = uVar1;
               *(ulong*)( local_1c8 + ( ( uVar1 & 0xfffffffffffffff8 ) - 8 ) ) = (long)( (int)uVar5 / 2 ) | uVar32;
            }

            bVar33 = (int)uVar5 % 2 == 1;
            if (( ( ( *pdVar28 <= dVar34 ) && ( pdVar28[1] <= dVar35 ) ) && ( pdVar28[2] <= dVar36 ) ) && ( *pdVar22 <= pdVar28[3] )) {
               LAB_001047e6:puVar14 = local_1c8;
               if (( pdVar22[1] <= pdVar28[4] ) && ( pdVar22[2] <= pdVar28[5] )) {
                  if (( uVar23 & 1 ) == 0) {
                     uVar13 = local_1c0._0_8_;
                     iVar21 = (int)uVar23;
                     uVar29 = uVar23 >> 0x1f;
                     uVar1 = local_1c0._0_8_ + 8;
                     if ((ulong)local_1c0._8_8_ <= uVar1) {
                        if (local_1c0._8_8_ == 0) {
                           __size = 0x80;
                        }
 else {
                           __size = local_1c0._8_8_ * 2;
                           if (( ulong )(local_1c0._8_8_ * 2) < uVar1) {
                              __size = uVar1;
                           }

                           if (__size <= (ulong)local_1c0._8_8_) goto LAB_00105123;
                        }

                        puVar19 = (undefined1*)malloc(__size);
                        if (uVar13 == 0) {
                           LAB_0010521d:if (puVar14 != (undefined1*)0x0) goto LAB_00105346;
                        }
 else {
                           if ((long)uVar13 < 2) {
                              if (uVar13 != 1) goto LAB_0010521d;
                              *puVar19 = *puVar14;
                           }
 else {
                              memmove(puVar19, puVar14, uVar13);
                           }

                           LAB_00105346:free(puVar14);
                        }

                        uVar23 = uVar23 & 0xffffffff;
                        local_1c8 = puVar19;
                        local_1c0._8_8_ = __size;
                     }

                     LAB_00105123:local_1c0._0_8_ = uVar1;
                     *(ulong*)( local_1c8 + ( ( uVar1 & 0xfffffffffffffff8 ) - 8 ) ) = (long)( (int)( ( (uint)uVar29 & 1 ) + iVar21 ) >> 1 ) | uVar32;
                  }

                  uVar20 = (uint)uVar23;
                  uVar9 = ( uint )(uVar23 >> 0x1f) & 1;
                  if (( uVar20 + uVar9 & 1 ) - uVar9 != 1) goto LAB_00104810;
                  if (bVar33) {
                     iVar30 = iVar30 + 1;
                     *(uint*)( local_148 + (long)iVar30 * 4 ) = uVar20;
                     uVar20 = uVar5;
                  }

                  goto LAB_00104770;
               }

            }

            LAB_00104810:uVar20 = uVar5;
            uVar13 = _LC4;
            puVar14 = local_1c8;
         }
 while ( bVar33 );
         _LC4 = uVar13;
         local_1c8 = puVar14;
         if (-1 < iVar30) {
            lVar18 = (long)iVar30;
            iVar30 = iVar30 + -1;
            uVar20 = *(uint*)( local_148 + lVar18 * 4 );
            goto LAB_00104770;
         }

         lVar25 = lVar25 + 1;
      }
 while ( uVar7 != lVar25 );
      local_268 = param_2 * param_2;
      uVar32 = (ulong)local_1c0._0_8_ >> 3;
      if ((ulong)local_1c0._0_8_ < 0x20) {
         if (uVar32 != 0) {
            lVar26 = *(long*)( this + 0x60 );
            local_290 = 0;
            lVar31 = *(long*)( this + 0x48 );
            lVar18 = *(long*)( param_1 + 0x48 );
            lVar25 = *(long*)( param_1 + 0x60 );
            goto LAB_00104e5a;
         }

      }
 else {
         lVar26 = *(long*)( this + 0x60 );
         lVar31 = *(long*)( this + 0x48 );
         lVar25 = *(long*)( param_1 + 0x60 );
         local_290 = 0;
         lVar18 = *(long*)( param_1 + 0x48 );
         do {
            local_158 = 0;
            local_108 = 0;
            iVar16 = (int)local_290;
            iVar30 = *(int*)( puVar14 + (long)( iVar16 + 1 ) * 8 );
            iVar21 = *(int*)( puVar14 + (long)( iVar16 + 1 ) * 8 + 4 );
            local_1a0 = 2;
            for (int i = 0; i < 16; i++) {
               local_198[i] = (array)0;
            }

            local_188 = (undefined1[16])0x0;
            local_178 = (undefined1[16])0x0;
            local_168 = (undefined1[16])0x0;
            for (int i = 0; i < 16; i++) {
               local_148[i] = (array)0;
            }

            local_138 = (undefined1[16])0x0;
            local_128 = (undefined1[16])0x0;
            local_118 = (undefined1[16])0x0;
            piVar27 = (int*)&local_1a8;
            local_1a8 = uVar13;
            do {
               iVar6 = *piVar27;
               piVar27 = piVar27 + 1;
               lVar24 = (long)iVar6 * 0x18;
               puVar4 = (undefined8*)( lVar31 + (long)*(int*)( lVar26 + (long)( iVar6 + iVar30 * 3 ) * 0xc ) * 0x18 );
               puVar3 = (undefined8*)( lVar18 + (long)*(int*)( lVar25 + (long)( iVar6 + iVar21 * 3 ) * 0xc ) * 0x18 );
               uVar10 = puVar4[1];
               uVar11 = *puVar3;
               uVar12 = puVar3[1];
               uVar7 = puVar4[2];
               uVar8 = puVar3[2];
               *(undefined8*)( local_198 + lVar24 ) = *puVar4;
               *(undefined8*)( local_198 + lVar24 + 8 ) = uVar10;
               *(undefined8*)( local_148 + lVar24 ) = uVar11;
               *(undefined8*)( local_148 + lVar24 + 8 ) = uVar12;
               *(undefined8*)( local_188 + lVar24 ) = uVar7;
               *(undefined8*)( local_138 + lVar24 ) = uVar8;
            }
 while ( piVar27 != &local_19c );
            dVar34 = (double)DistanceTriangleTriangleSquared(local_198, local_148);
            local_158 = 0;
            local_108 = 0;
            iVar30 = *(int*)( puVar14 + (long)iVar16 * 8 );
            iVar21 = *(int*)( puVar14 + (long)iVar16 * 8 + 4 );
            local_1a0 = 2;
            for (int i = 0; i < 16; i++) {
               local_198[i] = (array)0;
            }

            local_188 = (undefined1[16])0x0;
            local_178 = (undefined1[16])0x0;
            local_168 = (undefined1[16])0x0;
            for (int i = 0; i < 16; i++) {
               local_148[i] = (array)0;
            }

            local_138 = (undefined1[16])0x0;
            local_128 = (undefined1[16])0x0;
            local_118 = (undefined1[16])0x0;
            piVar27 = (int*)&local_1a8;
            local_1a8 = uVar13;
            do {
               iVar6 = *piVar27;
               piVar27 = piVar27 + 1;
               lVar24 = (long)iVar6 * 0x18;
               puVar4 = (undefined8*)( lVar31 + (long)*(int*)( lVar26 + (long)( iVar6 + iVar30 * 3 ) * 0xc ) * 0x18 );
               puVar3 = (undefined8*)( lVar18 + (long)*(int*)( lVar25 + (long)( iVar6 + iVar21 * 3 ) * 0xc ) * 0x18 );
               uVar10 = puVar4[1];
               uVar11 = *puVar3;
               uVar12 = puVar3[1];
               uVar7 = puVar4[2];
               uVar8 = puVar3[2];
               *(undefined8*)( local_198 + lVar24 ) = *puVar4;
               *(undefined8*)( local_198 + lVar24 + 8 ) = uVar10;
               *(undefined8*)( local_148 + lVar24 ) = uVar11;
               *(undefined8*)( local_148 + lVar24 + 8 ) = uVar12;
               *(undefined8*)( local_188 + lVar24 ) = uVar7;
               *(undefined8*)( local_138 + lVar24 ) = uVar8;
            }
 while ( piVar27 != &local_19c );
            dVar35 = (double)DistanceTriangleTriangleSquared(local_198, local_148);
            local_158 = 0;
            local_108 = 0;
            if (dVar35 <= dVar34) {
               dVar34 = dVar35;
            }

            local_1a0 = 2;
            iVar30 = *(int*)( puVar14 + (long)( iVar16 + 3 ) * 8 );
            iVar21 = *(int*)( puVar14 + (long)( iVar16 + 3 ) * 8 + 4 );
            for (int i = 0; i < 16; i++) {
               local_198[i] = (array)0;
            }

            local_188 = (undefined1[16])0x0;
            local_178 = (undefined1[16])0x0;
            local_168 = (undefined1[16])0x0;
            for (int i = 0; i < 16; i++) {
               local_148[i] = (array)0;
            }

            local_138 = (undefined1[16])0x0;
            local_128 = (undefined1[16])0x0;
            local_118 = (undefined1[16])0x0;
            piVar27 = (int*)&local_1a8;
            local_1a8 = uVar13;
            do {
               iVar6 = *piVar27;
               piVar27 = piVar27 + 1;
               lVar24 = (long)iVar6 * 0x18;
               puVar4 = (undefined8*)( lVar31 + (long)*(int*)( lVar26 + (long)( iVar6 + iVar30 * 3 ) * 0xc ) * 0x18 );
               puVar3 = (undefined8*)( lVar18 + (long)*(int*)( lVar25 + (long)( iVar6 + iVar21 * 3 ) * 0xc ) * 0x18 );
               uVar10 = puVar4[1];
               uVar11 = *puVar3;
               uVar12 = puVar3[1];
               uVar7 = puVar4[2];
               uVar8 = puVar3[2];
               *(undefined8*)( local_198 + lVar24 ) = *puVar4;
               *(undefined8*)( local_198 + lVar24 + 8 ) = uVar10;
               *(undefined8*)( local_148 + lVar24 ) = uVar11;
               *(undefined8*)( local_148 + lVar24 + 8 ) = uVar12;
               *(undefined8*)( local_188 + lVar24 ) = uVar7;
               *(undefined8*)( local_138 + lVar24 ) = uVar8;
            }
 while ( piVar27 != &local_19c );
            dVar35 = (double)DistanceTriangleTriangleSquared(local_198, local_148);
            local_158 = 0;
            local_108 = 0;
            for (int i = 0; i < 16; i++) {
               local_198[i] = (array)0;
            }

            iVar30 = *(int*)( puVar14 + (long)( iVar16 + 2 ) * 8 );
            iVar21 = *(int*)( puVar14 + (long)( iVar16 + 2 ) * 8 + 4 );
            local_1a0 = 2;
            local_188 = (undefined1[16])0x0;
            local_178 = (undefined1[16])0x0;
            local_168 = (undefined1[16])0x0;
            for (int i = 0; i < 16; i++) {
               local_148[i] = (array)0;
            }

            local_138 = (undefined1[16])0x0;
            local_128 = (undefined1[16])0x0;
            local_118 = (undefined1[16])0x0;
            piVar27 = (int*)&local_1a8;
            local_1a8 = uVar13;
            do {
               iVar16 = *piVar27;
               piVar27 = piVar27 + 1;
               lVar24 = (long)iVar16 * 0x18;
               puVar4 = (undefined8*)( lVar31 + (long)*(int*)( lVar26 + (long)( iVar16 + iVar30 * 3 ) * 0xc ) * 0x18 );
               puVar3 = (undefined8*)( lVar18 + (long)*(int*)( lVar25 + (long)( iVar16 + iVar21 * 3 ) * 0xc ) * 0x18 );
               uVar10 = puVar4[1];
               uVar11 = *puVar3;
               uVar12 = puVar3[1];
               uVar7 = puVar4[2];
               uVar8 = puVar3[2];
               *(undefined8*)( local_198 + lVar24 ) = *puVar4;
               *(undefined8*)( local_198 + lVar24 + 8 ) = uVar10;
               *(undefined8*)( local_148 + lVar24 ) = uVar11;
               *(undefined8*)( local_148 + lVar24 + 8 ) = uVar12;
               *(undefined8*)( local_188 + lVar24 ) = uVar7;
               *(undefined8*)( local_138 + lVar24 ) = uVar8;
            }
 while ( piVar27 != &local_19c );
            dVar36 = (double)DistanceTriangleTriangleSquared(local_198, local_148);
            local_290 = local_290 + 4;
            if (dVar36 <= dVar35) {
               dVar35 = dVar36;
            }

            if (dVar34 <= dVar35) {
               dVar35 = dVar34;
            }

            if (local_268 <= dVar35) {
               dVar35 = local_268;
            }

            local_268 = dVar35;
         }
 while ( 3 < (long)( uVar32 - local_290 ) );
         if (local_290 != uVar32) {
            LAB_00104e5a:local_278 = local_148;
            local_280 = local_198;
            local_288 = (int*)&local_1a8;
            do {
               local_158 = 0;
               iVar30 = *(int*)( puVar14 + (long)(int)local_290 * 8 );
               iVar21 = *(int*)( puVar14 + (long)(int)local_290 * 8 + 4 );
               local_108 = 0;
               local_1a0 = 2;
               for (int i = 0; i < 16; i++) {
                  local_198[i] = (array)0;
               }

               local_188 = (undefined1[16])0x0;
               local_178 = (undefined1[16])0x0;
               local_168 = (undefined1[16])0x0;
               for (int i = 0; i < 16; i++) {
                  local_148[i] = (array)0;
               }

               local_138 = (undefined1[16])0x0;
               local_128 = (undefined1[16])0x0;
               local_118 = (undefined1[16])0x0;
               piVar27 = local_288;
               local_1a8 = uVar13;
               do {
                  iVar16 = *piVar27;
                  piVar27 = piVar27 + 1;
                  lVar24 = (long)iVar16 * 0x18;
                  puVar4 = (undefined8*)( lVar31 + (long)*(int*)( lVar26 + (long)( iVar16 + iVar30 * 3 ) * 0xc ) * 0x18 );
                  puVar3 = (undefined8*)( lVar18 + (long)*(int*)( lVar25 + (long)( iVar16 + iVar21 * 3 ) * 0xc ) * 0x18 );
                  uVar10 = puVar4[1];
                  uVar11 = *puVar3;
                  uVar12 = puVar3[1];
                  uVar7 = puVar4[2];
                  uVar8 = puVar3[2];
                  *(undefined8*)( local_198 + lVar24 ) = *puVar4;
                  *(undefined8*)( local_198 + lVar24 + 8 ) = uVar10;
                  *(undefined8*)( local_148 + lVar24 ) = uVar11;
                  *(undefined8*)( local_148 + lVar24 + 8 ) = uVar12;
                  *(undefined8*)( local_188 + lVar24 ) = uVar7;
                  *(undefined8*)( local_138 + lVar24 ) = uVar8;
               }
 while ( piVar27 != &local_19c );
               local_290 = local_290 + 1;
               dVar34 = (double)DistanceTriangleTriangleSquared(local_280, local_278);
               if (local_268 <= dVar34) {
                  dVar34 = local_268;
               }

               local_268 = dVar34;
            }
 while ( local_290 != uVar32 );
         }

         if (local_268 < 0.0) {
            local_268 = sqrt(local_268);
            goto LAB_00104fd1;
         }

      }

   }

   local_268 = SQRT(local_268);
   LAB_00104fd1:if (local_1c8 != (undefined1*)0x0) {
      free(local_1c8);
   }

   if (local_1e8 != (void*)0x0) {
      free(local_1e8);
   }

   if (local_208 != (double*)0x0) {
      free(local_208);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_268;
}
/* manifold::EdgeEdgeDist(linalg::vec<double, 3>&, linalg::vec<double, 3>&, linalg::vec<double, 3>
   const&, linalg::vec<double, 3> const&, linalg::vec<double, 3> const&, linalg::vec<double, 3>
   const&) */void manifold::EdgeEdgeDist(vec *param_1, vec *param_2, vec *param_3, vec *param_4, vec *param_5, vec *param_6) {
   double dVar1;
   double dVar2;
   double dVar3;
   double dVar4;
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
   dVar13 = *(double*)param_4;
   dVar14 = *(double*)( param_4 + 8 );
   dVar8 = *(double*)param_4;
   dVar2 = *(double*)( param_3 + 8 );
   dVar4 = *(double*)( param_6 + 8 );
   dVar1 = *(double*)( param_3 + 0x10 );
   dVar12 = *(double*)( param_5 + 8 ) - dVar2;
   dVar7 = *(double*)( param_4 + 0x10 );
   dVar11 = *(double*)( param_5 + 0x10 ) - dVar1;
   dVar6 = dVar8 * dVar8 + 0.0 + dVar14 * dVar14 + dVar7 * dVar7;
   dVar9 = *(double*)param_6;
   dVar5 = dVar9 * dVar9 + 0.0 + dVar4 * dVar4 + *(double*)( param_6 + 0x10 ) * *(double*)( param_6 + 0x10 );
   dVar10 = *(double*)( param_6 + 0x10 ) * dVar7 + dVar4 * dVar14 + dVar9 * dVar8 + 0.0;
   dVar3 = dVar8 * ( *(double*)param_5 - *(double*)param_3 ) + 0.0 + dVar14 * dVar12 + dVar7 * dVar11;
   dVar4 = dVar9 * ( *(double*)param_5 - *(double*)param_3 ) + 0.0 + dVar4 * dVar12 + *(double*)( param_6 + 0x10 ) * dVar11;
   dVar9 = dVar5 * dVar6 - dVar10 * dVar10;
   dVar8 = 0.0;
   if (dVar9 != 0.0) {
      dVar8 = ( dVar3 * dVar5 - dVar4 * dVar10 ) / dVar9;
      if (dVar8 < 0.0) {
         dVar8 = 0.0;
      }
 else if (_LC1 <= dVar8) {
         dVar8 = _LC1;
      }

   }

   if (dVar5 == 0.0) {
      if (dVar6 == 0.0) {
         dVar7 = dVar7 * 0.0;
         dVar13 = dVar13 * 0.0;
         dVar14 = dVar14 * 0.0;
         dVar5 = 0.0;
         goto LAB_00105695;
      }

   }
 else {
      dVar5 = ( dVar8 * dVar10 - dVar4 ) / dVar5;
      if (0.0 <= dVar5) {
         if (dVar5 <= _LC1) {
            dVar7 = dVar7 * dVar8;
            dVar13 = dVar13 * dVar8;
            dVar14 = dVar14 * dVar8;
         }
 else {
            dVar5 = _LC1;
            if (dVar6 == 0.0) {
               dVar7 = dVar7 * 0.0;
               dVar13 = dVar13 * 0.0;
               dVar14 = dVar14 * 0.0;
            }
 else {
               dVar6 = ( dVar10 + dVar3 ) / dVar6;
               if (dVar6 < 0.0) {
                  dVar7 = dVar7 * 0.0;
                  dVar13 = dVar13 * 0.0;
                  dVar14 = dVar14 * 0.0;
               }
 else if (dVar6 < _LC1) {
                  dVar7 = dVar7 * dVar6;
                  dVar13 = dVar13 * dVar6;
                  dVar14 = dVar14 * dVar6;
               }

            }

         }

         goto LAB_00105695;
      }

      if (dVar6 == 0.0) {
         dVar7 = dVar7 * 0.0;
         dVar5 = 0.0;
         dVar13 = dVar13 * 0.0;
         dVar14 = dVar14 * 0.0;
         goto LAB_00105695;
      }

   }

   dVar3 = dVar3 / dVar6;
   if (dVar3 < 0.0) {
      dVar7 = dVar7 * 0.0;
      dVar13 = dVar13 * 0.0;
      dVar14 = dVar14 * 0.0;
      dVar5 = 0.0;
   }
 else if (_LC1 <= dVar3) {
      dVar5 = 0.0;
   }
 else {
      dVar7 = dVar7 * dVar3;
      dVar13 = dVar13 * dVar3;
      dVar14 = dVar14 * dVar3;
      dVar5 = 0.0;
   }

   LAB_00105695:*(double*)param_1 = *(double*)param_3 + dVar13;
   *(double*)( param_1 + 8 ) = dVar2 + dVar14;
   *(double*)( param_1 + 0x10 ) = dVar1 + dVar7;
   dVar8 = *(double*)param_6;
   dVar4 = *(double*)( param_6 + 8 );
   dVar1 = *(double*)param_5;
   dVar7 = *(double*)( param_5 + 8 );
   *(double*)( param_2 + 0x10 ) = *(double*)( param_6 + 0x10 ) * dVar5 + *(double*)( param_5 + 0x10 );
   *(double*)param_2 = dVar8 * dVar5 + dVar1;
   *(double*)( param_2 + 8 ) = dVar4 * dVar5 + dVar7;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* manifold::DistanceTriangleTriangleSquared(std::array<linalg::vec<double, 3>, 3ul> const&,
   std::array<linalg::vec<double, 3>, 3ul> const&) */double manifold::DistanceTriangleTriangleSquared(array *param_1, array *param_2) {
   array *paVar1;
   double dVar2;
   bool bVar3;
   uint uVar4;
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
   char cVar17;
   int iVar18;
   int iVar19;
   long lVar20;
   long lVar21;
   long in_FS_OFFSET;
   bool bVar22;
   double dVar23;
   double dVar24;
   double dVar25;
   double dVar26;
   double dVar27;
   double dVar28;
   double dVar29;
   double dVar30;
   double dVar31;
   double dVar32;
   double dVar33;
   double dVar34;
   double dVar35;
   double dVar36;
   double dVar37;
   double dVar38;
   double dVar39;
   double dVar40;
   double dVar41;
   double dVar42;
   double dVar43;
   double dVar44;
   double dVar45;
   double dVar46;
   double dVar47;
   double dVar48;
   double dVar49;
   double dVar50;
   double dVar51;
   double local_280;
   double local_268;
   double local_260;
   double local_258;
   double local_188;
   double local_180;
   undefined1 local_118[16];
   double local_108;
   undefined1 local_f8[16];
   double local_e8;
   double local_d8;
   double dStack_d0;
   double local_c8;
   double dStack_c0;
   double local_b8;
   double dStack_b0;
   double local_a8;
   double dStack_a0;
   double local_98;
   double local_88;
   double dStack_80;
   double local_78;
   double dStack_70;
   double local_68;
   double dStack_60;
   double local_58;
   double dStack_50;
   double local_48;
   long local_40;
   dVar46 = *(double*)( param_1 + 0x20 );
   dVar41 = *(double*)( param_1 + 0x28 );
   dVar39 = *(double*)( param_1 + 0x40 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_180 = *(double*)( param_1 + 0x30 );
   local_188 = *(double*)( param_1 + 0x38 );
   dVar5 = *(double*)( param_1 + 0x10 );
   dVar6 = *(double*)( param_1 + 0x18 );
   dVar7 = *(double*)param_1;
   dVar8 = *(double*)( param_1 + 8 );
   lVar20 = 0;
   dVar27 = dVar41 - dVar5;
   dVar30 = local_180 - dVar6;
   dVar23 = local_188 - dVar46;
   dVar25 = dVar39 - dVar41;
   dVar49 = dVar5 - dVar39;
   dVar34 = dVar6 - dVar7;
   dVar37 = dVar46 - dVar8;
   dVar42 = dVar7 - local_180;
   dVar47 = dVar8 - local_188;
   dVar2 = *(double*)( param_2 + 0x40 );
   dVar9 = *(double*)( param_2 + 0x30 );
   dVar10 = *(double*)( param_2 + 0x38 );
   dVar11 = *(double*)( param_2 + 0x10 );
   dVar12 = *(double*)( param_2 + 0x18 );
   dVar13 = *(double*)param_2;
   dVar14 = *(double*)( param_2 + 8 );
   dVar15 = *(double*)( param_2 + 0x20 );
   dVar16 = *(double*)( param_2 + 0x28 );
   dVar35 = dVar12 - dVar13;
   dVar38 = dVar15 - dVar14;
   dVar28 = dVar16 - dVar11;
   dVar31 = dVar9 - dVar12;
   dVar24 = dVar10 - dVar15;
   dVar26 = dVar2 - dVar16;
   dVar50 = dVar13 - dVar9;
   dVar51 = dVar14 - dVar10;
   dVar48 = dVar11 - dVar2;
   local_280 = _LC7;
   bVar22 = false;
   iVar18 = 0;
   local_d8 = dVar34;
   dStack_d0 = dVar37;
   local_c8 = dVar27;
   dStack_c0 = dVar30;
   local_b8 = dVar23;
   dStack_b0 = dVar25;
   local_a8 = dVar42;
   dStack_a0 = dVar47;
   local_98 = dVar49;
   local_88 = dVar35;
   dStack_80 = dVar38;
   local_78 = dVar28;
   dStack_70 = dVar31;
   local_68 = dVar24;
   dStack_60 = dVar26;
   local_58 = dVar50;
   dStack_50 = dVar51;
   local_48 = dVar48;
   do {
      uVar4 = iVar18 - 1;
      if (iVar18 == 0) {
         uVar4 = 2;
      }

      lVar21 = 0;
      iVar19 = 0;
      do {
         local_108 = 0.0;
         local_118 = (undefined1[16])0x0;
         local_f8 = (undefined1[16])0x0;
         local_e8 = 0.0;
         EdgeEdgeDist((vec*)local_118, (vec*)local_f8, (vec*)( param_1 + lVar20 ), (vec*)( (long)&local_d8 + lVar20 ), (vec*)( param_2 + lVar21 ), (vec*)( (long)&local_88 + lVar21 ));
         dVar40 = (double)local_f8._0_8_ - (double)local_118._0_8_;
         dVar36 = (double)local_f8._8_8_ - (double)local_118._8_8_;
         dVar33 = local_e8 - local_108;
         dVar29 = dVar40 * dVar40 + 0.0 + dVar36 * dVar36 + dVar33 * dVar33;
         if (dVar29 <= local_280) {
            paVar1 = param_1 + (ulong)uVar4 * 0x18;
            dVar32 = ( *(double*)paVar1 - (double)local_118._0_8_ ) * dVar40 + 0.0 + ( *(double*)( paVar1 + 8 ) - (double)local_118._8_8_ ) * dVar36 + ( *(double*)( paVar1 + 0x10 ) - local_108 ) * dVar33;
            dVar45 = dVar2;
            dVar43 = dVar9;
            dVar44 = dVar10;
            if (iVar19 != 0) {
               dVar45 = *(double*)( param_2 + ( ulong )(iVar19 - 1U) * 0x18 + 0x10 );
               dVar43 = *(double*)( param_2 + ( -(iVar19 - 1U) & 0x18 ) );
               dVar44 = *(double*)( param_2 + ( -(iVar19 - 1U) & 0x18 ) + 8 );
            }

            dVar33 = ( dVar43 - (double)local_f8._0_8_ ) * dVar40 + 0.0 + dVar36 * ( dVar44 - (double)local_f8._8_8_ ) + dVar33 * ( dVar45 - local_e8 );
            local_280 = dVar29;
            if (dVar32 <= 0.0) {
               if (0.0 <= dVar33) goto LAB_00106280;
            }
 else {
               dVar29 = dVar29 - dVar32;
               if (0.0 < dVar33) {
                  dVar33 = 0.0;
               }

            }

            if (0.0 < dVar33 + dVar29) {
               bVar22 = true;
            }

         }

         iVar19 = iVar19 + 1;
         lVar21 = lVar21 + 0x18;
      }
 while ( iVar19 != 3 );
      iVar18 = iVar18 + 1;
      lVar20 = lVar20 + 0x18;
   }
 while ( iVar18 != 3 );
   dVar29 = dVar25 * dVar37 - dVar23 * dVar27;
   dVar33 = dVar30 * dVar27 - dVar25 * dVar34;
   dVar36 = dVar23 * dVar34 - dVar30 * dVar37;
   dVar40 = dVar33 * dVar33 + dVar29 * dVar29 + 0.0 + dVar36 * dVar36;
   if (__LC8 < dVar40) {
      dVar43 = ( dVar8 - dVar10 ) * dVar33 + ( dVar7 - dVar9 ) * dVar29 + 0.0 + ( dVar5 - dVar2 ) * dVar36;
      dVar44 = ( dVar8 - dVar15 ) * dVar33 + ( dVar7 - dVar12 ) * dVar29 + 0.0 + ( dVar5 - dVar16 ) * dVar36;
      dVar45 = ( dVar8 - dVar14 ) * dVar33 + ( dVar7 - dVar13 ) * dVar29 + 0.0 + ( dVar5 - dVar11 ) * dVar36;
      if (dVar45 <= 0.0) {
         if (( ( dVar45 < 0.0 ) && ( dVar44 < 0.0 ) ) && ( dVar43 < 0.0 )) {
            dVar32 = dVar45;
            if (dVar45 <= dVar44) {
               dVar32 = dVar44;
            }

            if (dVar32 < dVar43) goto LAB_00105fba;
            bVar22 = dVar45 < dVar44;
            LAB_001067d1:bVar3 = bVar22 || dVar44 == dVar45;
            cVar17 = bVar22 || dVar44 == dVar45;
            local_268 = *(double*)( param_2 + ( -(uint)bVar3 & 0x18 ) );
            local_260 = *(double*)( param_2 + ( -(uint)bVar3 & 0x18 ) + 8 );
            local_258 = *(double*)( param_2 + (ulong)bVar3 * 0x18 + 0x10 );
            goto LAB_00105fe2;
         }

      }
 else if (( 0.0 < dVar44 ) && ( 0.0 < dVar43 )) {
         dVar32 = dVar45;
         if (dVar44 <= dVar45) {
            dVar32 = dVar44;
         }

         if (dVar32 <= dVar43) {
            bVar22 = dVar44 < dVar45;
            goto LAB_001067d1;
         }

         LAB_00105fba:cVar17 = '\x02';
         local_268 = dVar9;
         local_260 = dVar10;
         local_258 = dVar2;
         LAB_00105fe2:if (( ( 0.0 < ( dVar36 * dVar34 - dVar27 * dVar29 ) * ( local_260 - dVar8 ) + ( dVar33 * dVar27 - dVar37 * dVar36 ) * ( local_268 - dVar7 ) + 0.0 + ( dVar37 * dVar29 - dVar34 * dVar33 ) * ( local_258 - dVar5 ) ) && ( 0.0 < ( dVar25 * dVar33 - dVar23 * dVar36 ) * ( local_268 - dVar6 ) + 0.0 + ( dVar30 * dVar36 - dVar25 * dVar29 ) * ( local_260 - dVar46 ) + ( dVar23 * dVar29 - dVar30 * dVar33 ) * ( local_258 - dVar41 ) ) ) && ( 0.0 < ( local_268 - local_180 ) * ( dVar49 * dVar33 - dVar47 * dVar36 ) + 0.0 + ( dVar36 * dVar42 - dVar49 * dVar29 ) * ( local_260 - local_188 ) + ( dVar47 * dVar29 - dVar42 * dVar33 ) * ( local_258 - dVar39 ) )) {
            if (( cVar17 != '\0' ) && ( dVar45 = cVar17 != '\x01' )) {
               dVar45 = dVar43;
            }

            local_268 = ( ( dVar29 * dVar45 ) / dVar40 + local_268 ) - local_268;
            local_260 = ( ( dVar33 * dVar45 ) / dVar40 + local_260 ) - local_260;
            local_258 = ( ( dVar45 * dVar36 ) / dVar40 + local_258 ) - local_258;
            local_280 = local_268 * local_268 + 0.0 + local_260 * local_260 + local_258 * local_258;
            goto LAB_00106280;
         }

         bVar22 = true;
      }

   }

   dVar25 = dVar26 * dVar38 - dVar28 * dVar24;
   dVar23 = dVar31 * dVar28 - dVar26 * dVar35;
   dVar27 = dVar35 * dVar24 - dVar31 * dVar38;
   dVar30 = dVar23 * dVar23 + dVar25 * dVar25 + 0.0 + dVar27 * dVar27;
   if (dVar30 <= __LC8) {
      LAB_00106730:if (!bVar22) {
         local_280 = 0.0;
      }

   }
 else {
      dVar34 = ( dVar14 - local_188 ) * dVar23 + ( dVar13 - local_180 ) * dVar25 + 0.0 + ( dVar11 - dVar39 ) * dVar27;
      dVar41 = ( dVar11 - dVar41 ) * dVar27 + ( dVar14 - dVar46 ) * dVar23 + ( dVar13 - dVar6 ) * dVar25 + 0.0;
      dVar46 = ( dVar11 - dVar5 ) * dVar27 + ( dVar13 - dVar7 ) * dVar25 + 0.0 + ( dVar14 - dVar8 ) * dVar23;
      if (dVar46 <= 0.0) {
         if (( ( 0.0 <= dVar46 ) || ( 0.0 <= dVar41 ) ) || ( 0.0 <= dVar34 )) goto LAB_00106730;
         dVar5 = dVar46;
         if (dVar46 <= dVar41) {
            dVar5 = dVar41;
         }

         if (dVar5 < dVar34) goto LAB_00106479;
         bVar22 = dVar46 < dVar41;
         LAB_00106845:bVar3 = bVar22 || dVar41 == dVar46;
         cVar17 = bVar22 || dVar41 == dVar46;
         local_180 = *(double*)( param_1 + ( -(uint)bVar3 & 0x18 ) );
         local_188 = *(double*)( param_1 + ( -(uint)bVar3 & 0x18 ) + 8 );
         dVar39 = *(double*)( param_1 + (ulong)bVar3 * 0x18 + 0x10 );
      }
 else {
         if (( dVar41 <= 0.0 ) || ( dVar34 <= 0.0 )) goto LAB_00106730;
         dVar5 = dVar46;
         if (dVar41 <= dVar46) {
            dVar5 = dVar41;
         }

         if (dVar5 <= dVar34) {
            bVar22 = dVar41 < dVar46;
            goto LAB_00106845;
         }

         LAB_00106479:cVar17 = '\x02';
      }

      if (( ( 0.0 < ( dVar35 * dVar27 - dVar28 * dVar25 ) * ( local_188 - dVar14 ) + ( dVar28 * dVar23 - dVar38 * dVar27 ) * ( local_180 - dVar13 ) + 0.0 + ( dVar38 * dVar25 - dVar35 * dVar23 ) * ( dVar39 - dVar11 ) ) && ( 0.0 < ( dVar31 * dVar27 - dVar26 * dVar25 ) * ( local_188 - dVar15 ) + ( dVar26 * dVar23 - dVar27 * dVar24 ) * ( local_180 - dVar12 ) + 0.0 + ( dVar24 * dVar25 - dVar31 * dVar23 ) * ( dVar39 - dVar16 ) ) ) && ( 0.0 < ( dVar48 * dVar23 - dVar27 * dVar51 ) * ( local_180 - dVar9 ) + 0.0 + ( dVar27 * dVar50 - dVar48 * dVar25 ) * ( local_188 - dVar10 ) + ( dVar51 * dVar25 - dVar50 * dVar23 ) * ( dVar39 - dVar2 ) )) {
         if (( cVar17 != '\0' ) && ( dVar46 = cVar17 != '\x01' )) {
            dVar46 = dVar34;
         }

         local_180 = local_180 - ( ( dVar25 * dVar46 ) / dVar30 + local_180 );
         local_188 = local_188 - ( ( dVar23 * dVar46 ) / dVar30 + local_188 );
         dVar39 = dVar39 - ( ( dVar46 * dVar27 ) / dVar30 + dVar39 );
         local_280 = local_180 * local_180 + 0.0 + local_188 * local_188 + dVar39 * dVar39;
      }

   }

   LAB_00106280:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_280;
}

