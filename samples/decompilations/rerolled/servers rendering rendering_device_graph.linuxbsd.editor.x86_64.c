/* RenderingDeviceGraph::_check_discardable_attachment_dependency(RenderingDeviceGraph::ResourceTracker*,
   int, int) [clone .part.0] */void RenderingDeviceGraph::_check_discardable_attachment_dependency(RenderingDeviceGraph *this, ResourceTracker *param_1, int param_2, int param_3) {
   int *piVar1;
   uint uVar2;
   uint uVar3;
   uint uVar4;
   code *pcVar5;
   ulong uVar6;
   int *piVar7;
   ulong uVar8;
   uVar2 = *(uint*)( this + 0x40 );
   if ((uint)param_3 < uVar2) {
      uVar3 = *(uint*)( this + 0x30 );
      uVar4 = *(uint*)( *(long*)( this + 0x48 ) + (ulong)(uint)param_3 * 4 );
      uVar6 = (ulong)uVar4;
      if (uVar4 < uVar3) {
         piVar1 = (int*)( *(long*)( this + 0x38 ) + uVar6 );
         if (*piVar1 == 6) {
            uVar6 = (ulong)(uint)piVar1[0x20];
            if (piVar1[0x21] != 0) {
               uVar8 = (ulong)(uint)piVar1[0x21];
               piVar7 = piVar1 + uVar8 * 2 + uVar6 * 4 + 0x24;
               do {
                  if (( *(ResourceTracker**)( ( uVar6 * -0x10 - (long)piVar1 ) + (long)piVar7 * 2 + uVar8 * -0x10 + -0x90 ) == param_1 ) && ( *piVar7 == 1 )) {
                     return;
                  }
                  piVar7 = piVar7 + 1;
               } while ( piVar7 != piVar1 + uVar8 * 3 + uVar6 * 4 + 0x24 );
            }
         }
         if ((uint)param_2 < uVar2) {
            uVar2 = *(uint*)( *(long*)( this + 0x48 ) + (ulong)(uint)param_2 * 4 );
            uVar6 = (ulong)uVar2;
            if (uVar2 < uVar3) {
               piVar1 = (int*)( *(long*)( this + 0x38 ) + uVar6 );
               if (*piVar1 == 6) {
                  uVar2 = piVar1[0x21];
                  if (uVar2 != 0) {
                     uVar6 = 0;
                     do {
                        if (param_1 == *(ResourceTracker**)( piVar1 + (ulong)(uint)piVar1[0x20] * 4 + uVar6 * 2 + 0x24 )) {
                           piVar1[(ulong)uVar2 * 3 + uVar6 + (ulong)(uint)piVar1[0x20] * 4 + 0x24] = 0;
                           return;
                        }
                        uVar6 = uVar6 + 1;
                     } while ( uVar6 != uVar2 );
                  }
               }
               return;
            }
         } else {
            uVar6 = (ulong)(uint)param_2;
            uVar3 = uVar2;
         }
      }
   } else {
      uVar6 = (ulong)(uint)param_3;
      uVar3 = uVar2;
   }
   _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar6, (ulong)uVar3, "p_index", "count", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar5 = (code*)invalidInstructionException();
   ( *pcVar5 )();
}/* LocalVector<RenderingDeviceGraph::AttachmentOperation, unsigned int, false,
   false>::resize(unsigned int) [clone .part.0] */void LocalVector<RenderingDeviceGraph::AttachmentOperation,unsigned_int,false,false>::resize(uint param_1) {
   code *pcVar1;
   _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* SortArray<RenderingDeviceGraph::RecordedCommandSort,
   _DefaultComparator<RenderingDeviceGraph::RecordedCommandSort>, true>::adjust_heap(long, long,
   long, RenderingDeviceGraph::RecordedCommandSort, RenderingDeviceGraph::RecordedCommandSort*)
   const [clone .isra.0] */void SortArray<RenderingDeviceGraph::RecordedCommandSort,_DefaultComparator<RenderingDeviceGraph::RecordedCommandSort>,true>::adjust_heap(SortArray<RenderingDeviceGraph::RecordedCommandSort,_DefaultComparator<RenderingDeviceGraph::RecordedCommandSort>,true> *this, long param_1, long param_2, undefined8 param_3, uint param_5, long param_6) {
   undefined8 *puVar1;
   long lVar2;
   long lVar3;
   uint *puVar4;
   uint *puVar5;
   long lVar6;
   long lVar7;
   uint uVar8;
   lVar6 = param_1 * 2 + 2;
   lVar7 = param_1;
   if (lVar6 < param_2) {
      do {
         lVar2 = lVar6 + -1;
         puVar5 = (uint*)( param_6 + (long)( this + lVar6 ) * 0xc );
         puVar4 = (uint*)( param_6 + (long)( this + lVar2 ) * 0xc );
         lVar3 = lVar6;
         if (*puVar4 <= *puVar5) {
            if (*puVar5 <= *puVar4) {
               if (( puVar5[1] < puVar4[1] ) || ( ( puVar5[1] <= puVar4[1] && ( (int)puVar5[2] < (int)puVar4[2] ) ) )) goto LAB_00100243;
            }
            lVar3 = lVar6 + 1;
            lVar2 = lVar6;
            puVar4 = puVar5;
         }
         LAB_00100243:lVar6 = lVar3 * 2;
         puVar1 = (undefined8*)( param_6 + (long)( this + lVar7 ) * 0xc );
         *puVar1 = *(undefined8*)puVar4;
         *(uint*)( puVar1 + 1 ) = puVar4[2];
         lVar7 = lVar2;
      } while ( lVar6 < param_2 );
   } else {
      puVar4 = (uint*)( param_6 + (long)( this + param_1 ) * 0xc );
      lVar2 = param_1;
   }
   puVar5 = puVar4;
   if (lVar6 == param_2) {
      lVar2 = lVar6 + -1;
      puVar5 = (uint*)( param_6 + (long)( this + lVar2 ) * 0xc );
      *(undefined8*)puVar4 = *(undefined8*)puVar5;
      puVar4[2] = puVar5[2];
   }
   uVar8 = ( uint )((ulong)param_3 >> 0x20);
   lVar6 = ( lVar2 + -1 ) - ( lVar2 + -1 >> 0x3f );
   do {
      if (lVar2 <= param_1) {
         LAB_0010032a:puVar5[2] = param_5;
         *(undefined8*)puVar5 = param_3;
         return;
      }
      lVar7 = lVar6 >> 1;
      puVar5 = (uint*)( param_6 + (long)( this + lVar7 ) * 0xc );
      if ((uint)param_3 <= *puVar5) {
         if ((uint)param_3 < *puVar5) {
            LAB_0010031f:puVar5 = (uint*)( param_6 + (long)( this + lVar2 ) * 0xc );
            goto LAB_0010032a;
         }
         if (uVar8 <= puVar5[1]) {
            if (uVar8 < puVar5[1]) goto LAB_0010031f;
            if ((int)param_5 <= (int)puVar5[2]) {
               puVar5 = (uint*)( param_6 + (long)( this + lVar2 ) * 0xc );
               goto LAB_0010032a;
            }
         }
      }
      puVar1 = (undefined8*)( param_6 + (long)( this + lVar2 ) * 0xc );
      *puVar1 = *(undefined8*)puVar5;
      *(uint*)( puVar1 + 1 ) = puVar5[2];
      lVar6 = ( lVar7 + -1 ) - ( lVar7 + -1 >> 0x3f );
      lVar2 = lVar7;
   } while ( true );
}/* SortArray<RenderingDeviceGraph::RecordedCommandSort,
   _DefaultComparator<RenderingDeviceGraph::RecordedCommandSort>, true>::introsort(long, long,
   RenderingDeviceGraph::RecordedCommandSort*, long) const [clone .isra.0] */void SortArray<RenderingDeviceGraph::RecordedCommandSort,_DefaultComparator<RenderingDeviceGraph::RecordedCommandSort>,true>::introsort(long param_1, long param_2, RecordedCommandSort_conflict *param_3, long param_4) {
   RecordedCommandSort_conflict *pRVar1;
   uint uVar2;
   undefined8 uVar3;
   bool bVar4;
   RecordedCommandSort_conflict *pRVar5;
   long lVar6;
   uint uVar7;
   uint uVar8;
   uint uVar9;
   uint uVar10;
   uint uVar11;
   uint uVar12;
   long lVar13;
   RecordedCommandSort_conflict *pRVar14;
   RecordedCommandSort_conflict *pRVar15;
   lVar13 = param_2 - param_1;
   if (0x10 < lVar13) {
      if (param_4 != 0) {
         pRVar14 = param_3 + param_1 * 0xc;
         lVar6 = param_2;
         LAB_001003ac:param_4 = param_4 + -1;
         pRVar1 = param_3 + lVar6 * 0xc + -0xc;
         pRVar15 = param_3 + ( ( lVar13 >> 1 ) + param_1 ) * 0xc;
         uVar2 = *(uint*)pRVar14;
         uVar7 = *(uint*)pRVar15;
         if (uVar2 < uVar7) {
            LAB_00100490:uVar8 = *(uint*)pRVar1;
            if (uVar7 < uVar8) {
               uVar10 = *(uint*)( pRVar15 + 4 );
               uVar12 = *(uint*)( pRVar15 + 8 );
               goto LAB_001005d0;
            }
            if (uVar7 <= uVar8) {
               uVar10 = *(uint*)( pRVar15 + 4 );
               if (uVar10 < *(uint*)( pRVar1 + 4 )) goto LAB_0010078f;
               if (( uVar10 <= *(uint*)( pRVar1 + 4 ) ) && ( uVar12 = *(uint*)( pRVar15 + 8 ) ),(int)uVar12 < (int)*(uint*)( pRVar1 + 8 )) goto LAB_001005d0;
            }
            if (uVar8 <= uVar2) {
               uVar9 = *(uint*)( pRVar14 + 4 );
               if (uVar8 < uVar2) {
                  uVar12 = *(uint*)( pRVar14 + 8 );
                  uVar7 = uVar2;
                  uVar10 = uVar9;
                  goto LAB_001005d0;
               }
               uVar10 = *(uint*)( pRVar1 + 4 );
               uVar7 = uVar8;
               if (uVar9 < uVar10) {
                  uVar12 = *(uint*)( pRVar1 + 8 );
                  goto LAB_001005d0;
               }
               uVar11 = *(uint*)( pRVar14 + 8 );
               if (( uVar9 <= uVar10 ) && ( uVar12 = *(uint*)( pRVar1 + 8 ) ),(int)uVar11 < (int)uVar12) goto LAB_001005d0;
               LAB_00100501:uVar7 = uVar2;
               uVar10 = uVar9;
               uVar12 = uVar11;
               goto LAB_001005d0;
            }
         } else {
            if (uVar2 <= uVar7) {
               if (( *(uint*)( pRVar14 + 4 ) < *(uint*)( pRVar15 + 4 ) ) || ( ( *(uint*)( pRVar14 + 4 ) <= *(uint*)( pRVar15 + 4 ) && ( (int)*(uint*)( pRVar14 + 8 ) < (int)*(uint*)( pRVar15 + 8 ) ) ) )) goto LAB_00100490;
            }
            uVar8 = *(uint*)pRVar1;
            if (uVar2 < uVar8) {
               uVar12 = *(uint*)( pRVar14 + 8 );
               uVar7 = uVar2;
               uVar10 = *(uint*)( pRVar14 + 4 );
               goto LAB_001005d0;
            }
            if (uVar2 <= uVar8) {
               uVar9 = *(uint*)( pRVar14 + 4 );
               if (uVar9 < *(uint*)( pRVar1 + 4 )) {
                  uVar12 = *(uint*)( pRVar14 + 8 );
                  uVar7 = uVar2;
                  uVar10 = uVar9;
                  goto LAB_001005d0;
               }
               if (( *(uint*)( pRVar1 + 4 ) < uVar9 ) || ( uVar11 = *(uint*)( pRVar14 + 8 ) ),(int)*(uint*)( pRVar1 + 8 ) <= (int)uVar11) goto LAB_00100441;
               goto LAB_00100501;
            }
            LAB_00100441:if (uVar8 <= uVar7) {
               uVar10 = *(uint*)( pRVar15 + 4 );
               if (uVar7 <= uVar8) {
                  uVar2 = *(uint*)( pRVar1 + 4 );
                  if (uVar10 < uVar2) {
                     uVar7 = uVar8;
                     uVar10 = uVar2;
                     uVar12 = *(uint*)( pRVar1 + 8 );
                  } else {
                     uVar12 = *(uint*)( pRVar15 + 8 );
                     if (( uVar10 <= uVar2 ) && ( (int)uVar12 < (int)*(uint*)( pRVar1 + 8 ) )) {
                        uVar7 = uVar8;
                        uVar10 = uVar2;
                        uVar12 = *(uint*)( pRVar1 + 8 );
                     }
                  }
                  goto LAB_001005d0;
               }
               LAB_0010078f:uVar12 = *(uint*)( pRVar15 + 8 );
               goto LAB_001005d0;
            }
         }
         uVar7 = uVar8;
         uVar10 = *(uint*)( pRVar1 + 4 );
         uVar12 = *(uint*)( pRVar1 + 8 );
         LAB_001005d0:lVar13 = lVar6;
         pRVar15 = pRVar14;
         param_2 = param_1;
         do {
            if (( *(uint*)pRVar15 < uVar7 ) || ( ( *(uint*)pRVar15 <= uVar7 && ( ( *(uint*)( pRVar15 + 4 ) < uVar10 || ( ( *(uint*)( pRVar15 + 4 ) <= uVar10 && ( (int)*(uint*)( pRVar15 + 8 ) < (int)uVar12 ) ) ) ) ) ) )) {
               if (lVar6 + -1 == param_2) {
                  _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
                  goto LAB_0010062a;
               }
            } else {
               LAB_0010062a:pRVar1 = param_3 + lVar13 * 0xc + -0xc;
               do {
                  pRVar5 = pRVar1;
                  lVar13 = lVar13 + -1;
                  if (( *(uint*)pRVar5 <= uVar7 ) && ( ( *(uint*)pRVar5 < uVar7 || ( ( *(uint*)( pRVar5 + 4 ) <= uVar10 && ( ( *(uint*)( pRVar5 + 4 ) < uVar10 || ( (int)*(uint*)( pRVar5 + 8 ) <= (int)uVar12 ) ) ) ) ) ) )) goto joined_r0x00100670;
                  pRVar1 = pRVar5 + -0xc;
               } while ( param_1 != lVar13 );
               _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
               joined_r0x00100670:if (lVar13 <= param_2) goto LAB_001006e6;
               uVar3 = *(undefined8*)pRVar15;
               uVar2 = *(uint*)( pRVar15 + 8 );
               *(undefined8*)pRVar15 = *(undefined8*)pRVar5;
               *(uint*)( pRVar15 + 8 ) = *(uint*)( pRVar5 + 8 );
               *(undefined8*)pRVar5 = uVar3;
               *(uint*)( pRVar5 + 8 ) = uVar2;
            }
            pRVar15 = pRVar15 + 0xc;
            param_2 = param_2 + 1;
         } while ( true );
      }
      LAB_00100515:lVar6 = lVar13 + -2 >> 1;
      pRVar14 = param_3 + ( param_1 + lVar6 ) * 0xc;
      while (true) {
         uVar3 = *(undefined8*)pRVar14;
         pRVar15 = pRVar14 + 8;
         pRVar14 = pRVar14 + -0xc;
         adjust_heap((SortArray<RenderingDeviceGraph::RecordedCommandSort,_DefaultComparator<RenderingDeviceGraph::RecordedCommandSort>,true>*)param_1, lVar6, lVar13, uVar3, *(undefined4*)pRVar15);
         if (lVar6 == 0) break;
         lVar6 = lVar6 + -1;
      };
      lVar13 = ( param_2 + -1 ) - param_1;
      pRVar14 = param_3 + param_2 * 0xc + -0xc;
      do {
         *(undefined8*)pRVar14 = *(undefined8*)( param_3 + param_1 * 0xc );
         *(undefined4*)( pRVar14 + 8 ) = *(undefined4*)( param_3 + param_1 * 0xc + 8 );
         adjust_heap((SortArray<RenderingDeviceGraph::RecordedCommandSort,_DefaultComparator<RenderingDeviceGraph::RecordedCommandSort>,true>*)param_1, 0, lVar13);
         bVar4 = 1 < lVar13;
         lVar13 = lVar13 + -1;
         pRVar14 = pRVar14 + -0xc;
      } while ( bVar4 );
   }
   return;
   LAB_001006e6:lVar13 = param_2 - param_1;
   introsort(param_2, lVar6, param_3, param_4);
   if (lVar13 < 0x11) {
      return;
   }
   lVar6 = param_2;
   if (param_4 == 0) goto LAB_00100515;
   goto LAB_001003ac;
}/* RenderingDeviceGraph::_boost_priority_for_render_commands(RenderingDeviceGraph::RecordedCommandSort*,
   unsigned int, unsigned int&) [clone .part.0] */void RenderingDeviceGraph::_boost_priority_for_render_commands(RecordedCommandSort_conflict *param_1, uint param_2, uint *param_3) {
   undefined8 uVar1;
   int iVar2;
   bool bVar3;
   RecordedCommandSort_conflict *pRVar4;
   uint uVar5;
   long lVar6;
   RecordedCommandSort_conflict *pRVar7;
   ulong uVar8;
   ulong uVar9;
   long lVar10;
   ulong uVar11;
   uint uVar12;
   uVar5 = *param_3;
   if (( uVar5 != 0 ) && ( param_2 != 0 )) {
      uVar8 = (ulong)param_2;
      pRVar4 = param_1 + 4;
      bVar3 = false;
      while (true) {
         if (*(uint*)pRVar4 == uVar5) {
            *(uint*)pRVar4 = 0;
            bVar3 = true;
         }
         pRVar4 = pRVar4 + 0xc;
         if (pRVar4 == param_1 + uVar8 * 0xc + 4) break;
         uVar5 = *param_3;
      };
      if (bVar3) {
         if (uVar8 == 1) {
            SortArray<RenderingDeviceGraph::RecordedCommandSort,_DefaultComparator<RenderingDeviceGraph::RecordedCommandSort>,true>::introsort(0, 1, param_1, 0);
         } else {
            lVar6 = 0;
            uVar9 = uVar8;
            do {
               uVar9 = (long)uVar9 >> 1;
               lVar6 = lVar6 + 1;
            } while ( uVar9 != 1 );
            SortArray<RenderingDeviceGraph::RecordedCommandSort,_DefaultComparator<RenderingDeviceGraph::RecordedCommandSort>,true>::introsort(0, uVar8, param_1, lVar6 * 2);
            if (uVar8 < 0x11) {
               uVar9 = 1;
               pRVar4 = param_1 + 0xc;
               do {
                  uVar1 = *(undefined8*)pRVar4;
                  iVar2 = *(int*)( pRVar4 + 8 );
                  uVar5 = (uint)uVar1;
                  if (( uVar5 < *(uint*)param_1 ) || ( ( uVar12 = ( uint )((ulong)uVar1 >> 0x20) ),uVar11 = uVar9,pRVar7 = pRVar4,uVar5 <= *(uint*)param_1 && ( ( uVar12 < *(uint*)( param_1 + 4 ) || ( ( uVar12 <= *(uint*)( param_1 + 4 ) && ( iVar2 < *(int*)( param_1 + 8 ) ) ) ) ) ) )) {
                     memmove(param_1 + 0xc, param_1, (long)pRVar4 - (long)param_1);
                     *(int*)( param_1 + 8 ) = iVar2;
                     *(undefined8*)param_1 = uVar1;
                  } else {
                     while (true) {
                        if (( *(uint*)( pRVar7 + -0xc ) <= uVar5 ) && ( ( *(uint*)( pRVar7 + -0xc ) < uVar5 || ( ( *(uint*)( pRVar7 + -8 ) <= uVar12 && ( ( *(uint*)( pRVar7 + -8 ) < uVar12 || ( *(int*)( pRVar7 + -4 ) <= iVar2 ) ) ) ) ) ) )) goto LAB_00100bc7;
                        if (uVar11 == 1) break;
                        *(undefined8*)pRVar7 = *(undefined8*)( pRVar7 + -0xc );
                        *(undefined4*)( pRVar7 + 8 ) = *(undefined4*)( pRVar7 + -4 );
                        uVar11 = uVar11 - 1;
                        pRVar7 = pRVar7 + -0xc;
                     };
                     _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                     LAB_00100bc7:*(int*)( param_1 + uVar11 * 0xc + 8 ) = iVar2;
                     *(undefined8*)( param_1 + uVar11 * 0xc ) = uVar1;
                  }
                  uVar9 = uVar9 + 1;
                  pRVar4 = pRVar4 + 0xc;
               } while ( uVar8 != uVar9 );
            } else {
               lVar6 = 1;
               pRVar4 = param_1 + 0xc;
               do {
                  uVar1 = *(undefined8*)pRVar4;
                  iVar2 = *(int*)( pRVar4 + 8 );
                  uVar5 = (uint)uVar1;
                  if (( uVar5 < *(uint*)param_1 ) || ( ( uVar12 = ( uint )((ulong)uVar1 >> 0x20) ),pRVar7 = pRVar4,lVar10 = lVar6,uVar5 <= *(uint*)param_1 && ( ( uVar12 < *(uint*)( param_1 + 4 ) || ( ( uVar12 <= *(uint*)( param_1 + 4 ) && ( iVar2 < *(int*)( param_1 + 8 ) ) ) ) ) ) )) {
                     memmove(param_1 + 0xc, param_1, (long)pRVar4 - (long)param_1);
                     *(int*)( param_1 + 8 ) = iVar2;
                     *(undefined8*)param_1 = uVar1;
                  } else {
                     while (true) {
                        if (( *(uint*)( pRVar7 + -0xc ) <= uVar5 ) && ( ( *(uint*)( pRVar7 + -0xc ) < uVar5 || ( ( *(uint*)( pRVar7 + -8 ) <= uVar12 && ( ( *(uint*)( pRVar7 + -8 ) < uVar12 || ( *(int*)( pRVar7 + -4 ) <= iVar2 ) ) ) ) ) ) )) goto LAB_0010095b;
                        if (lVar10 == 1) break;
                        *(undefined8*)pRVar7 = *(undefined8*)( pRVar7 + -0xc );
                        *(undefined4*)( pRVar7 + 8 ) = *(undefined4*)( pRVar7 + -4 );
                        pRVar7 = pRVar7 + -0xc;
                        lVar10 = lVar10 + -1;
                     };
                     _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                     LAB_0010095b:*(int*)( param_1 + lVar10 * 0xc + 8 ) = iVar2;
                     *(undefined8*)( param_1 + lVar10 * 0xc ) = uVar1;
                  }
                  lVar6 = lVar6 + 1;
                  pRVar4 = pRVar4 + 0xc;
               } while ( lVar6 != 0x10 );
               pRVar4 = param_1 + 0xc0;
               uVar9 = 0x10;
               do {
                  uVar1 = *(undefined8*)pRVar4;
                  iVar2 = *(int*)( pRVar4 + 8 );
                  uVar5 = ( uint )((ulong)uVar1 >> 0x20);
                  pRVar7 = pRVar4;
                  uVar11 = uVar9;
                  while (true) {
                     if (( *(uint*)( pRVar7 + -0xc ) <= (uint)uVar1 ) && ( ( *(uint*)( pRVar7 + -0xc ) < (uint)uVar1 || ( ( *(uint*)( pRVar7 + -8 ) <= uVar5 && ( ( *(uint*)( pRVar7 + -8 ) < uVar5 || ( *(int*)( pRVar7 + -4 ) <= iVar2 ) ) ) ) ) ) )) goto LAB_00100a17;
                     if (uVar11 == 1) break;
                     uVar11 = uVar11 - 1;
                     *(undefined8*)pRVar7 = *(undefined8*)( pRVar7 + -0xc );
                     *(undefined4*)( pRVar7 + 8 ) = *(undefined4*)( pRVar7 + -4 );
                     pRVar7 = pRVar7 + -0xc;
                  };
                  _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                  LAB_00100a17:uVar9 = uVar9 + 1;
                  pRVar4 = pRVar4 + 0xc;
                  *(int*)( param_1 + uVar11 * 0xc + 8 ) = iVar2;
                  *(undefined8*)( param_1 + uVar11 * 0xc ) = uVar1;
               } while ( uVar8 != uVar9 );
            }
         }
      }
   }
   if (*(uint*)( param_1 + ( ulong )(param_2 - 1) * 0xc + 4 ) != 0) {
      *param_3 = *(uint*)( param_1 + ( ulong )(param_2 - 1) * 0xc + 4 );
   }
   return;
}/* RenderingDeviceGraph::_check_command_intersection(RenderingDeviceGraph::ResourceTracker*, int,
   int) const [clone .part.0] */bool RenderingDeviceGraph::_check_command_intersection(ResourceTracker *param_1, int param_2, int param_3) {
   int *piVar1;
   int *piVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   code *pcVar6;
   int iVar7;
   bool bVar8;
   ulong uVar9;
   ulong uVar10;
   uVar9 = (ulong)(uint)param_2;
   uVar3 = *(uint*)( param_1 + 0x40 );
   uVar10 = (ulong)uVar3;
   if ((uint)param_2 < uVar3) {
      uVar4 = *(uint*)( *(long*)( param_1 + 0x48 ) + (ulong)(uint)param_2 * 4 );
      uVar9 = (ulong)uVar4;
      if ((uint)param_3 < uVar3) {
         uVar3 = *(uint*)( param_1 + 0x30 );
         uVar10 = (ulong)uVar3;
         uVar5 = *(uint*)( *(long*)( param_1 + 0x48 ) + (ulong)(uint)param_3 * 4 );
         if (uVar4 < uVar3) {
            piVar1 = (int*)( *(long*)( param_1 + 0x38 ) + uVar9 );
            uVar9 = (ulong)uVar5;
            if (uVar5 < uVar3) {
               bVar8 = true;
               if (( *piVar1 == 6 ) && ( piVar2 = (int*)( *(long*)( param_1 + 0x38 ) + (ulong)uVar5 ) * piVar2 == 6 )) {
                  if (( piVar1[0x1e] < 0 ) || ( ( ( piVar1[0x1f] < 0 || ( iVar7 = piVar2[0x1e] ),iVar7 < 0 ) ) || ( piVar2[0x1f] < 0 ) )) {
                     _err_print_error("intersects", "./core/math/rect2i.h", 0x38, "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size.", 0, 0);
                     iVar7 = piVar2[0x1e];
                  }
                  bVar8 = false;
                  if (( piVar1[0x1c] < iVar7 + piVar2[0x1c] ) && ( piVar2[0x1c] < piVar1[0x1c] + piVar1[0x1e] )) {
                     if (piVar1[0x1d] < piVar2[0x1f] + piVar2[0x1d]) {
                        bVar8 = piVar2[0x1d] < piVar1[0x1d] + piVar1[0x1f];
                     }
                  }
               }
               return bVar8;
            }
         }
      } else {
         uVar9 = (ulong)(uint)param_3;
      }
   }
   _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xae, uVar9, uVar10, "p_index", "count", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar6 = (code*)invalidInstructionException();
   ( *pcVar6 )();
}/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
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
      } else {
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
      } while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }
   }
   return;
}/* RenderingDeviceGraph::RenderingDeviceGraph() */void RenderingDeviceGraph::RenderingDeviceGraph(RenderingDeviceGraph *this) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])this = (undefined1[16])0x0;
   String::parse_latin1((StrRange*)( this + 8 ));
   *(undefined8*)( this + 0x10 ) = 0;
   this[0x18] = (RenderingDeviceGraph)0x0;
   for (int i = 0; i < 18; i++) {
      *(undefined8*)( this + ( 8*i + 32 ) ) = 0;
   }
   *(undefined4*)( this + 0xb0 ) = 0xffffffff;
   for (int i = 0; i < 7; i++) {
      *(undefined8*)( this + ( 8*i + 184 ) ) = 0;
   }
   *(undefined4*)( this + 0xf0 ) = 0;
   *(undefined8*)( this + 0xf8 ) = 0;
   *(undefined8*)( this + 0x110 ) = 0;
   *(undefined1(*) [16])( this + 0x100 ) = (undefined1[16])0x0;
   for (int i = 0; i < 5; i++) {
      *(undefined8*)( this + ( 8*i + 280 ) ) = 0;
   }
   this[0x144] = (RenderingDeviceGraph)0x0;
   for (int i = 0; i < 7; i++) {
      *(undefined8*)( this + ( 8*i + 328 ) ) = 0;
   }
   *(undefined4*)( this + 0x180 ) = 0;
   *(undefined8*)( this + 0x198 ) = 0;
   *(undefined8*)( this + 0x1a0 ) = 0;
   *(undefined8*)( this + 0x1a8 ) = 0;
   *(undefined8*)( this + 0x1b0 ) = 0;
   *(undefined8*)( this + 0x1b8 ) = 0;
   *(undefined8*)( this + 0x1c0 ) = 0xffffffffffffffff;
   this[0x1c8] = (RenderingDeviceGraph)0x0;
   for (int i = 0; i < 6; i++) {
      *(undefined8*)( this + ( 8*i + 496 ) ) = 0;
   }
   this[0x221] = (RenderingDeviceGraph)0x0;
   *(undefined8*)( this + 0x228 ) = 0;
   *(undefined8*)( this + 0x230 ) = 0;
   *(undefined1(*) [16])( this + 0x188 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1d0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1e0 ) = (undefined1[16])0x0;
   *(undefined4*)( this + 0x238 ) = 0;
   this[0x220] = ( RenderingDeviceGraph )((byte)this[0x220] & 0xfc);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RenderingDeviceGraph::_is_write_usage(RenderingDeviceGraph::ResourceUsage) */undefined8 RenderingDeviceGraph::_is_write_usage(uint param_1) {
   undefined8 uVar1;
   uVar1 = 0;
   if (param_1 < 0x12) {
      uVar1 = CONCAT71(0x385, ( 0x38514UL >> ( (ulong)param_1 & 0x3f ) & 1 ) != 0);
   }
   return uVar1;
}/* RenderingDeviceGraph::_usage_to_image_layout(RenderingDeviceGraph::ResourceUsage) */undefined4 RenderingDeviceGraph::_usage_to_image_layout(int param_1) {
   undefined4 uVar1;
   uVar1 = 0;
   if (param_1 - 1U < 0x11) {
      uVar1 = *(undefined4*)( CSWTCH_346 + ( ulong )(param_1 - 1U) * 4 );
   }
   return uVar1;
}/* RenderingDeviceGraph::_usage_to_access_bits(RenderingDeviceGraph::ResourceUsage) */undefined4 RenderingDeviceGraph::_usage_to_access_bits(int param_1) {
   undefined4 uVar1;
   uVar1 = 0;
   if (param_1 - 1U < 0x11) {
      uVar1 = *(undefined4*)( CSWTCH_348 + ( ulong )(param_1 - 1U) * 4 );
   }
   return uVar1;
}/* RenderingDeviceGraph::_check_command_intersection(RenderingDeviceGraph::ResourceTracker*, int,
   int) const */undefined8 RenderingDeviceGraph::_check_command_intersection(RenderingDeviceGraph *this, ResourceTracker *param_1, int param_2, int param_3) {
   undefined8 uVar1;
   if (*(int*)( param_1 + 0x3c ) - 0x10U < 2) {
      uVar1 = _check_command_intersection((ResourceTracker*)this, param_2, param_3);
      return uVar1;
   }
   return 1;
}/* RenderingDeviceGraph::_check_command_partial_coverage(RenderingDeviceGraph::ResourceTracker*,
   int) const */bool RenderingDeviceGraph::_check_command_partial_coverage(RenderingDeviceGraph *this, ResourceTracker *param_1, int param_2) {
   uint uVar1;
   uint uVar2;
   code *pcVar3;
   bool bVar4;
   int *piVar5;
   if (1 < *(int*)( param_1 + 0x3c ) - 0x10U) {
      return false;
   }
   if ((uint)param_2 < *(uint*)( this + 0x40 )) {
      uVar1 = *(uint*)( *(long*)( this + 0x48 ) + (ulong)(uint)param_2 * 4 );
      if (uVar1 < *(uint*)( this + 0x30 )) {
         piVar5 = (int*)( (ulong)uVar1 + *(long*)( this + 0x38 ) );
         bVar4 = false;
         if (*piVar5 == 6) {
            uVar1 = *(uint*)( param_1 + 0x70 );
            uVar2 = *(uint*)( param_1 + 0x74 );
            if (( piVar5[0x1e] < 0 ) || ( (int)( uVar1 | uVar2 | piVar5[0x1f] ) < 0 )) {
               _err_print_error("encloses", "./core/math/rect2i.h", 0x4e, "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size.", 0, 0);
            }
            bVar4 = true;
            if (( ( piVar5[0x1c] < 1 ) && ( piVar5[0x1d] < 1 ) ) && ( (int)uVar1 <= piVar5[0x1c] + piVar5[0x1e] )) {
               bVar4 = piVar5[0x1d] + piVar5[0x1f] < (int)uVar2;
            }
         }
         return bVar4;
      }
      _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xae, (ulong)uVar1, ( ulong ) * (uint*)( this + 0x30 ), "p_index", "count", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }
   _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xae, (ulong)(uint)param_2, ( ulong ) * (uint*)( this + 0x40 ), "p_index", "count", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar3 = (code*)invalidInstructionException();
   ( *pcVar3 )();
}/* RenderingDeviceGraph::_add_to_command_list(int, int) */uint RenderingDeviceGraph::_add_to_command_list(RenderingDeviceGraph *this, int param_1, int param_2) {
   uint uVar1;
   int *piVar2;
   undefined8 *puVar3;
   uint uVar4;
   code *pcVar5;
   undefined8 uVar6;
   uint uVar7;
   undefined8 *puVar8;
   undefined8 *puVar9;
   void *pvVar10;
   uVar4 = *(uint*)( this + 400 );
   uVar1 = uVar4 + 1;
   if (uVar4 == 0xffffffff) {
      *(uint*)( this + 400 ) = uVar1;
      uVar7 = uVar1;
      LAB_00101305:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)uVar4, (ulong)uVar7, "p_index", "count", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }
   uVar7 = uVar4;
   if (uVar1 <= uVar4) goto LAB_00101305;
   pvVar10 = *(void**)( this + 0x198 );
   if (*(uint*)( this + 0x194 ) < uVar1) {
      uVar7 = uVar4 >> 1 | uVar4;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = ( uVar7 | uVar7 >> 0x10 ) + 1;
      *(uint*)( this + 0x194 ) = uVar7;
      pvVar10 = (void*)Memory::realloc_static(pvVar10, (ulong)uVar7 * 8, false);
      *(void**)( this + 0x198 ) = pvVar10;
      if (pvVar10 == (void*)0x0) {
         /* WARNING: Subroutine does not return */
         LocalVector<RenderingDeviceGraph::AttachmentOperation,unsigned_int,false,false>::resize(0);
      }
      uVar7 = *(uint*)( this + 400 );
      if (uVar1 <= uVar7) goto LAB_001013b0;
   }
   uVar6 = _LC17;
   puVar9 = (undefined8*)( (long)pvVar10 + (ulong)uVar7 * 8 );
   puVar3 = (undefined8*)( (long)pvVar10 + ( ( ulong )(uVar4 - uVar7) + (ulong)uVar7 ) * 8 + 8 );
   puVar8 = puVar9;
   if (( (int)puVar3 - (int)puVar9 & 8U ) != 0) {
      *puVar9 = _LC17;
      puVar8 = puVar9 + 1;
      if (puVar9 + 1 == puVar3) goto LAB_001013b0;
   }
   do {
      *puVar8 = uVar6;
      puVar9 = puVar8 + 2;
      puVar8[1] = uVar6;
      puVar8 = puVar9;
   } while ( puVar9 != puVar3 );
   LAB_001013b0:*(uint*)( this + 400 ) = uVar1;
   piVar2 = (int*)( (long)pvVar10 + (ulong)uVar4 * 8 );
   *piVar2 = param_1;
   piVar2[1] = param_2;
   return uVar4;
}/* RenderingDeviceGraph::_add_adjacent_command(int, int, RenderingDeviceGraph::RecordedCommand*) */void RenderingDeviceGraph::_add_adjacent_command(RenderingDeviceGraph *this, int param_1, int param_2, RecordedCommand *param_3) {
   uint uVar1;
   uint uVar2;
   code *pcVar3;
   undefined4 uVar4;
   ulong uVar5;
   long lVar6;
   uVar5 = (ulong)(uint)param_1;
   uVar1 = *(uint*)( this + 0x40 );
   if ((uint)param_1 < uVar1) {
      uVar1 = *(uint*)( this + 0x30 );
      uVar2 = *(uint*)( *(long*)( this + 0x48 ) + uVar5 * 4 );
      if (uVar2 < uVar1) {
         lVar6 = (ulong)uVar2 + *(long*)( this + 0x38 );
         uVar4 = _add_to_command_list(this, param_2, *(int*)( lVar6 + 4 ));
         *(undefined4*)( lVar6 + 4 ) = uVar4;
         *(ulong*)( lVar6 + 0x40 ) = *(ulong*)( lVar6 + 0x40 ) | *(ulong*)( param_3 + 0x48 );
         *(ulong*)( param_3 + 0x38 ) = *(ulong*)( param_3 + 0x38 ) | *(ulong*)( lVar6 + 0x48 );
         return;
      }
      uVar5 = (ulong)uVar2;
   }
   _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar5, (ulong)uVar1, "p_index", "count", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar3 = (code*)invalidInstructionException();
   ( *pcVar3 )();
}/* RenderingDeviceGraph::_add_to_slice_read_list(int, Rect2i, int) */uint RenderingDeviceGraph::_add_to_slice_read_list(long param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, undefined4 param_5) {
   uint uVar1;
   undefined4 *puVar2;
   uint uVar3;
   code *pcVar4;
   undefined8 uVar5;
   uint uVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   void *pvVar9;
   uVar3 = *(uint*)( param_1 + 0x1a0 );
   uVar1 = uVar3 + 1;
   if (uVar3 == 0xffffffff) {
      *(uint*)( param_1 + 0x1a0 ) = uVar1;
      uVar6 = uVar1;
      LAB_0010151b:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)uVar3, (ulong)uVar6, "p_index", "count", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }
   uVar6 = uVar3;
   if (uVar1 <= uVar3) goto LAB_0010151b;
   pvVar9 = *(void**)( param_1 + 0x1a8 );
   if (*(uint*)( param_1 + 0x1a4 ) < uVar1) {
      uVar6 = uVar3 >> 1 | uVar3;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = ( uVar6 | uVar6 >> 0x10 ) + 1;
      *(uint*)( param_1 + 0x1a4 ) = uVar6;
      pvVar9 = (void*)Memory::realloc_static(pvVar9, (ulong)uVar6 * 0x1c, false);
      *(void**)( param_1 + 0x1a8 ) = pvVar9;
      if (pvVar9 == (void*)0x0) {
         /* WARNING: Subroutine does not return */
         LocalVector<RenderingDeviceGraph::AttachmentOperation,unsigned_int,false,false>::resize(0);
      }
      uVar6 = *(uint*)( param_1 + 0x1a0 );
      if (uVar1 <= uVar6) goto LAB_001015e0;
   }
   uVar5 = _LC17;
   puVar7 = (undefined8*)( (long)pvVar9 + (ulong)uVar6 * 0x1c );
   do {
      *puVar7 = uVar5;
      puVar8 = (undefined8*)( (long)puVar7 + 0x1c );
      puVar7[1] = 0;
      puVar7[2] = 0;
      *(undefined1*)( puVar7 + 3 ) = 0;
      puVar7 = puVar8;
   } while ( puVar8 != (undefined8*)( (long)pvVar9 + ( ( ulong )(uVar3 - uVar6) + (ulong)uVar6 ) * 0x1c + 0x1c ) );
   LAB_001015e0:*(uint*)( param_1 + 0x1a0 ) = uVar1;
   puVar2 = (undefined4*)( (long)pvVar9 + (ulong)uVar3 * 0x1c );
   *puVar2 = param_2;
   puVar2[1] = param_5;
   *(undefined8*)( puVar2 + 2 ) = param_3;
   *(undefined8*)( puVar2 + 4 ) = param_4;
   return uVar3;
}/* RenderingDeviceGraph::_add_to_write_list(int, Rect2i, int, bool) */uint RenderingDeviceGraph::_add_to_write_list(long param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, undefined4 param_5, undefined1 param_6) {
   uint uVar1;
   undefined4 *puVar2;
   uint uVar3;
   code *pcVar4;
   undefined8 uVar5;
   uint uVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   void *pvVar9;
   uVar3 = *(uint*)( param_1 + 0x1b0 );
   uVar1 = uVar3 + 1;
   if (uVar3 == 0xffffffff) {
      *(uint*)( param_1 + 0x1b0 ) = uVar1;
      uVar6 = uVar1;
      LAB_001016db:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)uVar3, (ulong)uVar6, "p_index", "count", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }
   uVar6 = uVar3;
   if (uVar1 <= uVar3) goto LAB_001016db;
   pvVar9 = *(void**)( param_1 + 0x1b8 );
   if (*(uint*)( param_1 + 0x1b4 ) < uVar1) {
      uVar6 = uVar3 >> 1 | uVar3;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = ( uVar6 | uVar6 >> 0x10 ) + 1;
      *(uint*)( param_1 + 0x1b4 ) = uVar6;
      pvVar9 = (void*)Memory::realloc_static(pvVar9, (ulong)uVar6 * 0x1c, false);
      *(void**)( param_1 + 0x1b8 ) = pvVar9;
      if (pvVar9 == (void*)0x0) {
         /* WARNING: Subroutine does not return */
         LocalVector<RenderingDeviceGraph::AttachmentOperation,unsigned_int,false,false>::resize(0);
      }
      uVar6 = *(uint*)( param_1 + 0x1b0 );
      if (uVar1 <= uVar6) goto LAB_001017a0;
   }
   uVar5 = _LC17;
   puVar7 = (undefined8*)( (long)pvVar9 + (ulong)uVar6 * 0x1c );
   do {
      *puVar7 = uVar5;
      puVar8 = (undefined8*)( (long)puVar7 + 0x1c );
      puVar7[1] = 0;
      puVar7[2] = 0;
      *(undefined1*)( puVar7 + 3 ) = 0;
      puVar7 = puVar8;
   } while ( puVar8 != (undefined8*)( (long)pvVar9 + ( ( ulong )(uVar3 - uVar6) + (ulong)uVar6 ) * 0x1c + 0x1c ) );
   LAB_001017a0:*(uint*)( param_1 + 0x1b0 ) = uVar1;
   puVar2 = (undefined4*)( (long)pvVar9 + (ulong)uVar3 * 0x1c );
   *puVar2 = param_2;
   puVar2[1] = param_5;
   *(undefined8*)( puVar2 + 2 ) = param_3;
   *(undefined8*)( puVar2 + 4 ) = param_4;
   *(undefined1*)( puVar2 + 6 ) = param_6;
   return uVar3;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RenderingDeviceGraph::_allocate_command(unsigned int, int&) */void RenderingDeviceGraph::_allocate_command(RenderingDeviceGraph *this, uint param_1, int *param_2) {
   int iVar1;
   code *pcVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 *puVar5;
   long lVar6;
   void *pvVar7;
   ulong uVar8;
   uint uVar9;
   uint uVar10;
   uint uVar11;
   uVar10 = *(uint*)( this + 0x40 );
   pvVar7 = *(void**)( this + 0x48 );
   uVar9 = *(int*)( this + 0x30 ) + 7U & 0xfffffff8;
   if (uVar10 == *(uint*)( this + 0x44 )) {
      uVar8 = ( ulong )(uVar10 * 2);
      if (uVar10 * 2 == 0) {
         uVar8 = 1;
      }
      *(int*)( this + 0x44 ) = (int)uVar8;
      pvVar7 = (void*)Memory::realloc_static(pvVar7, uVar8 * 4, false);
      *(void**)( this + 0x48 ) = pvVar7;
      if (pvVar7 == (void*)0x0) {
         _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }
      uVar10 = *(uint*)( this + 0x40 );
   }
   uVar11 = param_1 + uVar9;
   *(uint*)( this + 0x40 ) = uVar10 + 1;
   *(uint*)( (long)pvVar7 + (ulong)uVar10 * 4 ) = uVar9;
   if (*(uint*)( this + 0x30 ) <= uVar11) {
      if (uVar11 <= *(uint*)( this + 0x30 )) goto LAB_001018c8;
      if (*(uint*)( this + 0x34 ) < uVar11) {
         pvVar7 = *(void**)( this + 0x38 );
         uVar10 = uVar11 - 1 | uVar11 - 1 >> 1;
         uVar10 = uVar10 | uVar10 >> 2;
         uVar10 = uVar10 | uVar10 >> 4;
         uVar10 = uVar10 | uVar10 >> 8;
         uVar10 = ( uVar10 | uVar10 >> 0x10 ) + 1;
         *(uint*)( this + 0x34 ) = uVar10;
         lVar6 = Memory::realloc_static(pvVar7, (ulong)uVar10, false);
         *(long*)( this + 0x38 ) = lVar6;
         if (lVar6 == 0) {
            /* WARNING: Subroutine does not return */
            LocalVector<RenderingDeviceGraph::AttachmentOperation,unsigned_int,false,false>::resize((uint)pvVar7);
         }
      }
   }
   *(uint*)( this + 0x30 ) = uVar11;
   LAB_001018c8:iVar1 = *(int*)( this + 0x188 );
   *(int*)( this + 0x188 ) = iVar1 + 1;
   *param_2 = iVar1;
   uVar4 = _UNK_001129a8;
   uVar3 = _LC23;
   if (uVar9 < *(uint*)( this + 0x30 )) {
      puVar5 = (undefined8*)( (ulong)uVar9 + *(long*)( this + 0x38 ) );
      *puVar5 = 0xffffffff00000000;
      puVar5[5] = uVar3;
      *(undefined4*)( puVar5 + 6 ) = 0xffffffff;
      puVar5[9] = 0;
      *(undefined1(*) [16])( puVar5 + 1 ) = (undefined1[16])0x0;
      puVar5[3] = uVar3;
      puVar5[4] = uVar4;
      *(undefined1(*) [16])( puVar5 + 7 ) = (undefined1[16])0x0;
      return;
   }
   _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)uVar9, ( ulong ) * (uint*)( this + 0x30 ), "p_index", "count", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}/* RenderingDeviceGraph::_allocate_draw_list_instruction(unsigned int) */long RenderingDeviceGraph::_allocate_draw_list_instruction(RenderingDeviceGraph *this, uint param_1) {
   uint uVar1;
   code *pcVar2;
   void *pvVar3;
   uint uVar4;
   uint uVar5;
   void *pvVar6;
   uVar1 = *(uint*)( this + 0xb8 );
   uVar4 = param_1 + uVar1;
   if (CARRY4(param_1, uVar1)) {
      *(uint*)( this + 0xb8 ) = uVar4;
      uVar5 = uVar4;
   } else {
      uVar5 = uVar1;
      if (uVar1 < uVar4) {
         pvVar3 = *(void**)( this + 0xc0 );
         if (*(uint*)( this + 0xbc ) < uVar4) {
            uVar5 = uVar4 - 1 | uVar4 - 1 >> 1;
            uVar5 = uVar5 | uVar5 >> 2;
            uVar5 = uVar5 | uVar5 >> 4;
            uVar5 = uVar5 | uVar5 >> 8;
            uVar5 = ( uVar5 | uVar5 >> 0x10 ) + 1;
            *(uint*)( this + 0xbc ) = uVar5;
            pvVar6 = pvVar3;
            pvVar3 = (void*)Memory::realloc_static(pvVar3, (ulong)uVar5, false);
            *(void**)( this + 0xc0 ) = pvVar3;
            if (pvVar3 == (void*)0x0) {
               /* WARNING: Subroutine does not return */
               LocalVector<RenderingDeviceGraph::AttachmentOperation,unsigned_int,false,false>::resize((uint)pvVar6);
            }
         }
         *(uint*)( this + 0xb8 ) = uVar4;
         return (long)pvVar3 + (ulong)uVar1;
      }
   }
   _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)uVar1, (ulong)uVar5, "p_index", "count", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}/* RenderingDeviceGraph::_allocate_compute_list_instruction(unsigned int) */long RenderingDeviceGraph::_allocate_compute_list_instruction(RenderingDeviceGraph *this, uint param_1) {
   uint uVar1;
   code *pcVar2;
   void *pvVar3;
   uint uVar4;
   uint uVar5;
   void *pvVar6;
   uVar1 = *(uint*)( this + 0x148 );
   uVar4 = param_1 + uVar1;
   if (CARRY4(param_1, uVar1)) {
      *(uint*)( this + 0x148 ) = uVar4;
      uVar5 = uVar4;
   } else {
      uVar5 = uVar1;
      if (uVar1 < uVar4) {
         pvVar3 = *(void**)( this + 0x150 );
         if (*(uint*)( this + 0x14c ) < uVar4) {
            uVar5 = uVar4 - 1 | uVar4 - 1 >> 1;
            uVar5 = uVar5 | uVar5 >> 2;
            uVar5 = uVar5 | uVar5 >> 4;
            uVar5 = uVar5 | uVar5 >> 8;
            uVar5 = ( uVar5 | uVar5 >> 0x10 ) + 1;
            *(uint*)( this + 0x14c ) = uVar5;
            pvVar6 = pvVar3;
            pvVar3 = (void*)Memory::realloc_static(pvVar3, (ulong)uVar5, false);
            *(void**)( this + 0x150 ) = pvVar3;
            if (pvVar3 == (void*)0x0) {
               /* WARNING: Subroutine does not return */
               LocalVector<RenderingDeviceGraph::AttachmentOperation,unsigned_int,false,false>::resize((uint)pvVar6);
            }
         }
         *(uint*)( this + 0x148 ) = uVar4;
         return (long)pvVar3 + (ulong)uVar1;
      }
   }
   _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)uVar1, (ulong)uVar5, "p_index", "count", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}/* RenderingDeviceGraph::_check_discardable_attachment_dependency(RenderingDeviceGraph::ResourceTracker*,
   int, int) */void RenderingDeviceGraph::_check_discardable_attachment_dependency(RenderingDeviceGraph *this, ResourceTracker *param_1, int param_2, int param_3) {
   if (param_1[0xaa] != (ResourceTracker)0x0) {
      _check_discardable_attachment_dependency(this, param_1, param_2, param_3);
      return;
   }
   return;
}/* RenderingDeviceGraph::_add_texture_barrier_to_command(RenderingDeviceDriver::TextureID,
   BitField<RenderingDeviceDriver::BarrierAccessBits>,
   BitField<RenderingDeviceDriver::BarrierAccessBits>, RenderingDeviceGraph::ResourceUsage,
   RenderingDeviceGraph::ResourceUsage, RenderingDeviceDriver::TextureSubresourceRange,
   LocalVector<RenderingDeviceDriver::TextureBarrier, unsigned int, false, false>&, int&, int&) */void RenderingDeviceGraph::_add_texture_barrier_to_command(long param_1, undefined8 *param_2, undefined8 param_3, undefined8 param_4, int param_5, int param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, uint *param_10, uint *param_11, int *param_12) {
   undefined8 *puVar1;
   uint uVar2;
   undefined8 uVar3;
   code *pcVar4;
   ulong uVar5;
   void *pvVar6;
   undefined4 uVar7;
   undefined4 uVar8;
   if (( *(byte*)( param_1 + 0x220 ) & 1 ) != 0) {
      if ((int)*param_11 < 0) {
         *param_11 = *param_10;
      }
      uVar3 = *param_2;
      uVar7 = 0;
      if (param_5 - 1U < 0x11) {
         uVar7 = *(undefined4*)( CSWTCH_346 + ( ulong )(param_5 - 1U) * 4 );
      }
      uVar8 = 0;
      if (param_6 - 1U < 0x11) {
         uVar8 = *(undefined4*)( CSWTCH_346 + ( ulong )(param_6 - 1) * 4 );
      }
      uVar2 = *param_10;
      pvVar6 = *(void**)( param_10 + 2 );
      if (param_10[1] == uVar2) {
         uVar5 = ( ulong )(uVar2 * 2);
         if (uVar2 * 2 == 0) {
            uVar5 = 1;
         }
         param_10[1] = (uint)uVar5;
         pvVar6 = (void*)Memory::realloc_static(pvVar6, uVar5 * 0x38, false);
         *(void**)( param_10 + 2 ) = pvVar6;
         if (pvVar6 == (void*)0x0) {
            _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }
         uVar2 = *param_10;
      }
      *param_10 = uVar2 + 1;
      puVar1 = (undefined8*)( (long)pvVar6 + (ulong)uVar2 * 0x38 );
      *puVar1 = uVar3;
      *(undefined4*)( puVar1 + 3 ) = uVar7;
      *(undefined4*)( (long)puVar1 + 0x1c ) = uVar8;
      puVar1[4] = param_7;
      puVar1[1] = param_3;
      puVar1[2] = param_4;
      puVar1[5] = param_8;
      puVar1[6] = param_9;
      *param_12 = *param_12 + 1;
   }
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RenderingDeviceGraph::_add_buffer_barrier_to_command(RenderingDeviceDriver::BufferID,
   BitField<RenderingDeviceDriver::BarrierAccessBits>,
   BitField<RenderingDeviceDriver::BarrierAccessBits>, int&, int&) */void RenderingDeviceGraph::_add_buffer_barrier_to_command(RenderingDeviceGraph *this, undefined8 *param_2, undefined8 param_3, undefined8 param_4, int *param_5, int *param_6) {
   undefined8 *puVar1;
   uint uVar2;
   undefined8 uVar3;
   code *pcVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   void *pvVar7;
   ulong uVar8;
   if (( (byte)this[0x220] & 1 ) != 0) {
      if (*param_5 < 0) {
         *param_5 = *(int*)( this + 0x70 );
      }
      uVar3 = *param_2;
      uVar2 = *(uint*)( this + 0x70 );
      pvVar7 = *(void**)( this + 0x78 );
      if (uVar2 == *(uint*)( this + 0x74 )) {
         uVar8 = ( ulong )(uVar2 * 2);
         if (uVar2 * 2 == 0) {
            uVar8 = 1;
         }
         *(int*)( this + 0x74 ) = (int)uVar8;
         pvVar7 = (void*)Memory::realloc_static(pvVar7, uVar8 * 0x28, false);
         *(void**)( this + 0x78 ) = pvVar7;
         if (pvVar7 == (void*)0x0) {
            _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }
         uVar2 = *(uint*)( this + 0x70 );
      }
      *(uint*)( this + 0x70 ) = uVar2 + 1;
      puVar1 = (undefined8*)( (long)pvVar7 + (ulong)uVar2 * 0x28 );
      puVar1[1] = param_3;
      puVar1[2] = param_4;
      uVar6 = _LC17;
      uVar5 = __LC24;
      *puVar1 = uVar3;
      puVar1[3] = uVar5;
      puVar1[4] = uVar6;
      *param_6 = *param_6 + 1;
   }
   return;
}/* RenderingDeviceGraph::_add_command_to_graph(RenderingDeviceGraph::ResourceTracker**,
   RenderingDeviceGraph::ResourceUsage*, unsigned int, int, RenderingDeviceGraph::RecordedCommand*)
    */void RenderingDeviceGraph::_add_command_to_graph(RenderingDeviceGraph *this, ResourceTracker **param_1, ResourceUsage *param_2, uint param_3, int param_4, RecordedCommand *param_5) {
   int *piVar1;
   RenderingDeviceGraph RVar2;
   ResourceTracker *pRVar3;
   undefined8 uVar4;
   code *pcVar5;
   undefined4 uVar6;
   undefined4 uVar7;
   undefined1 auVar8[16];
   ResourceTracker RVar9;
   ResourceTracker RVar10;
   char cVar11;
   undefined4 uVar12;
   int iVar13;
   long lVar14;
   ulong uVar15;
   int iVar16;
   long lVar17;
   long lVar18;
   ResourceTracker *pRVar19;
   ResourceTracker *pRVar20;
   uint uVar21;
   ulong uVar22;
   ResourceTracker *pRVar23;
   bool bVar24;
   uint uVar25;
   ulong uVar26;
   long in_FS_OFFSET;
   bool bVar27;
   byte bVar28;
   undefined1 auVar29[16];
   undefined1 auVar30[16];
   undefined1 auVar31[16];
   ResourceTracker **local_d0;
   undefined8 local_c8;
   uint *local_b8;
   ResourceTracker *local_b0;
   long local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( param_5 + 0x40 ) = *(undefined8*)( param_5 + 0x48 );
   if (-1 < *(int*)( this + 0xb0 )) {
      *(int*)( param_5 + 0x30 ) = *(int*)( this + 0xb0 );
   }
   iVar13 = *(int*)( this + 0x1c0 );
   if (*(int*)param_5 == 0xc) {
      iVar16 = 0;
      if (-1 < iVar13) {
         iVar16 = iVar13;
      }
      if (iVar16 < param_4) {
         do {
            _add_adjacent_command(this, iVar16, param_4, param_5);
            iVar16 = iVar16 + 1;
         } while ( param_4 != iVar16 );
      }
      *(int*)( this + 0x1c0 ) = param_4;
   } else if (-1 < iVar13) {
      _add_adjacent_command(this, iVar13, param_4, param_5);
   }
   iVar13 = *(int*)( this + 0x1c4 );
   if (this[0x1c8] == (RenderingDeviceGraph)0x0) {
      if (-1 < iVar13) {
         _add_adjacent_command(this, iVar13, param_4, param_5);
      }
   } else {
      iVar16 = 0;
      if (-1 < iVar13) {
         iVar16 = iVar13;
      }
      if (iVar16 < param_4) {
         do {
            _add_adjacent_command(this, iVar16, param_4, param_5);
            iVar16 = iVar16 + 1;
         } while ( param_4 != iVar16 );
      }
      *(int*)( this + 0x1c4 ) = param_4;
      this[0x1c8] = (RenderingDeviceGraph)0x0;
   }
   if (param_3 != 0) {
      local_d0 = param_1;
      local_b8 = (uint*)param_2;
      do {
         lVar14 = *(long*)( this + 0x28 );
         pRVar3 = *local_d0;
         if (lVar14 != *(long*)( pRVar3 + 8 )) {
            uVar4 = *(undefined8*)( pRVar3 + 0x18 );
            *(long*)( pRVar3 + 8 ) = lVar14;
            auVar29._8_4_ = 0xffffffff;
            auVar29._0_8_ = 0xffffffffffffffff;
            auVar29._12_4_ = 0xffffffff;
            *(undefined8*)( pRVar3 + 0x18 ) = 0;
            *(undefined8*)( pRVar3 + 0x10 ) = uVar4;
            *(undefined4*)( pRVar3 + 0x34 ) = 0xffffffff;
            *(undefined4*)( pRVar3 + 0x7c ) = 0xffffffff;
            pRVar3[0xa9] = (ResourceTracker)0x0;
            *(undefined1(*) [16])( pRVar3 + 0x20 ) = auVar29;
         }
         auVar29 = *(undefined1(*) [16])( pRVar3 + 0x60 );
         uVar25 = *local_b8;
         local_58._4_4_ = auVar29._8_4_;
         local_58._0_4_ = auVar29._0_4_;
         local_58._12_4_ = auVar29._12_4_;
         local_58._8_4_ = auVar29._4_4_;
         auVar31._8_8_ = local_58._8_8_;
         auVar31._0_8_ = local_58._0_8_;
         if (( uVar25 < 0x12 ) && ( bVar27 = bVar27 )) {
            LAB_00102062:pRVar20 = *(ResourceTracker**)( pRVar3 + 0x80 );
            local_c8 = ( ulong ) * (uint*)( CSWTCH_348 + ( ulong )(uVar25 - 1) * 4 );
            if (pRVar20 == (ResourceTracker*)0x0) goto LAB_0010230d;
            LAB_00102081:if (lVar14 != *(long*)( pRVar20 + 8 )) {
               uVar4 = *(undefined8*)( pRVar20 + 0x18 );
               *(long*)( pRVar20 + 8 ) = lVar14;
               *(undefined8*)( pRVar20 + 0x18 ) = 0;
               *(undefined8*)( pRVar20 + 0x10 ) = uVar4;
               *(undefined4*)( pRVar20 + 0x34 ) = 0xffffffff;
               *(undefined4*)( pRVar20 + 0x7c ) = 0xffffffff;
               pRVar20[0xa9] = (ResourceTracker)0x0;
               for (int i = 0; i < 4; i++) {
                  *(undefined4*)( pRVar20 + ( 4*i + 32 ) ) = 4294967295;
               }
            }
            if (*(int*)( pRVar3 + 0x7c ) != param_4) {
               *(int*)( pRVar3 + 0x7c ) = param_4;
            }
            uVar21 = *(uint*)( pRVar20 + 0x3c );
            if (uVar21 != 0) {
               RVar10 = pRVar3[0xa8];
               local_b0 = pRVar20;
               if (RVar10 == (ResourceTracker)0x0) {
                  if (*(long*)( pRVar20 + 0x88 ) != 0) {
                     if (( ( ( *(int*)( pRVar20 + 0xa0 ) < 0 ) || ( *(int*)( pRVar20 + 0xa4 ) < 0 ) ) || ( iVar13 = iVar13 < 0 ) ) || ( *(int*)( pRVar3 + 0xa4 ) < 0 )) {
                        _err_print_error("intersects", "./core/math/rect2i.h", 0x38, "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size.", 0);
                        local_b0 = *(ResourceTracker**)( pRVar3 + 0x80 );
                        iVar13 = *(int*)( pRVar3 + 0xa0 );
                     }
                     auVar31._8_8_ = local_58._8_8_;
                     auVar31._0_8_ = local_58._0_8_;
                     if (( *(int*)( pRVar20 + 0x98 ) < iVar13 + *(int*)( pRVar3 + 0x98 ) ) && ( *(int*)( pRVar3 + 0x98 ) < *(int*)( pRVar20 + 0x98 ) + *(int*)( pRVar20 + 0xa0 ) )) {
                        if (( *(int*)( pRVar20 + 0x9c ) < *(int*)( pRVar3 + 0xa4 ) + *(int*)( pRVar3 + 0x9c ) ) && ( *(int*)( pRVar3 + 0x9c ) < *(int*)( pRVar20 + 0x9c ) + *(int*)( pRVar20 + 0xa4 ) )) {
                           lVar14 = 0;
                           if (*(long*)( local_b0 + 0x88 ) != 0) {
                              bVar24 = false;
                              lVar18 = *(long*)( local_b0 + 0x88 );
                              do {
                                 if (*(long*)( this + 0x28 ) != *(long*)( lVar18 + 8 )) {
                                    *(long*)( lVar18 + 8 ) = *(long*)( this + 0x28 );
                                    uVar4 = *(undefined8*)( lVar18 + 0x18 );
                                    auVar30._8_4_ = 0xffffffff;
                                    auVar30._0_8_ = 0xffffffffffffffff;
                                    auVar30._12_4_ = 0xffffffff;
                                    *(undefined8*)( lVar18 + 0x18 ) = 0;
                                    *(undefined8*)( lVar18 + 0x10 ) = uVar4;
                                    *(undefined4*)( lVar18 + 0x34 ) = 0xffffffff;
                                    *(undefined4*)( lVar18 + 0x7c ) = 0xffffffff;
                                    *(undefined1*)( lVar18 + 0xa9 ) = 0;
                                    *(undefined1(*) [16])( lVar18 + 0x20 ) = auVar30;
                                 }
                                 if (( ( *(int*)( lVar18 + 0xa0 ) < 0 ) || ( *(int*)( lVar18 + 0xa4 ) < 0 ) ) || ( ( iVar13 = *(int*)( pRVar3 + 0xa0 ) ),iVar13 < 0 || ( *(int*)( pRVar3 + 0xa4 ) < 0 ) )) {
                                    local_58 = auVar31;
                                    _err_print_error("intersects", "./core/math/rect2i.h", 0x38, "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size.", 0);
                                    iVar13 = *(int*)( pRVar3 + 0xa0 );
                                    auVar31 = local_58;
                                 }
                                 local_58 = auVar31;
                                 if (( *(int*)( lVar18 + 0x98 ) < iVar13 + *(int*)( pRVar3 + 0x98 ) ) && ( *(int*)( pRVar3 + 0x98 ) < *(int*)( lVar18 + 0x98 ) + *(int*)( lVar18 + 0xa0 ) )) {
                                    if (( *(int*)( pRVar3 + 0xa4 ) + *(int*)( pRVar3 + 0x9c ) <= *(int*)( lVar18 + 0x9c ) ) || ( *(int*)( lVar18 + 0x9c ) + *(int*)( lVar18 + 0xa4 ) <= *(int*)( pRVar3 + 0x9c ) )) goto LAB_00102891;
                                    if (( *(long*)( lVar18 + 8 ) == *(long*)( this + 0x28 ) ) && ( *(int*)( lVar18 + 0x7c ) == param_4 )) {
                                       _err_print_error("_add_command_to_graph", "servers/rendering/rendering_device_graph.cpp", 0x1c2, "Method/function failed.", "Texture slices that overlap can\'t be used in the same command.", 0, 0);
                                       goto LAB_001022b8;
                                    }
                                    if (*(long*)( lVar18 + 0x50 ) != 0) {
                                       local_60 = *(long*)( lVar18 + 0x50 );
                                       _add_texture_barrier_to_command(this, &local_60, *(undefined8*)( lVar18 + 0x40 ), local_c8, *(undefined4*)( lVar18 + 0x3c ), *(undefined4*)( *(long*)( pRVar3 + 0x80 ) + 0x3c ), *(undefined8*)( lVar18 + 0x58 ), *(undefined8*)( lVar18 + 0x60 ), *(undefined8*)( lVar18 + 0x68 ), this + 0x50, param_5 + 0x18, param_5 + 0x1c);
                                       auVar31 = Rect2i::merge((Rect2i*)local_58, (Rect2i*)( lVar18 + 0x98 ));
                                       bVar27 = true;
                                    }
                                    *(undefined1*)( lVar18 + 0xa8 ) = 0;
                                    lVar17 = *(long*)( lVar18 + 0x90 );
                                    if (lVar14 == 0) {
                                       *(long*)( *(long*)( pRVar3 + 0x80 ) + 0x88 ) = lVar17;
                                    } else {
                                       *(long*)( lVar14 + 0x90 ) = lVar17;
                                    }
                                 } else {
                                    LAB_00102891:lVar14 = *(long*)( pRVar3 + 0x80 );
                                    if (bVar24) {
                                       auVar31 = Rect2i::merge((Rect2i*)( lVar14 + 0x98 ), (Rect2i*)( lVar18 + 0x98 ));
                                       *(undefined1(*) [16])( lVar14 + 0x98 ) = auVar31;
                                       auVar31 = local_58;
                                    } else {
                                       uVar12 = *(undefined4*)( lVar18 + 0x9c );
                                       uVar6 = *(undefined4*)( lVar18 + 0xa0 );
                                       uVar7 = *(undefined4*)( lVar18 + 0xa4 );
                                       *(undefined4*)( lVar14 + 0x98 ) = *(undefined4*)( lVar18 + 0x98 );
                                       *(undefined4*)( lVar14 + 0x9c ) = uVar12;
                                       *(undefined4*)( lVar14 + 0xa0 ) = uVar6;
                                       *(undefined4*)( lVar14 + 0xa4 ) = uVar7;
                                    }
                                    bVar24 = true;
                                    lVar17 = *(long*)( lVar18 + 0x90 );
                                    lVar14 = lVar18;
                                 }
                                 lVar18 = lVar17;
                              } while ( lVar17 != 0 );
                              local_b0 = *(ResourceTracker**)( pRVar3 + 0x80 );
                              uVar21 = *(uint*)( local_b0 + 0x3c );
                              goto LAB_001028d6;
                           }
                        }
                     }
                     uVar21 = *(uint*)( local_b0 + 0x3c );
                  }
                  LAB_001028d6:uVar4 = *(undefined8*)( local_b0 + 0x40 );
                  *(uint*)( pRVar3 + 0x3c ) = uVar21;
                  *(undefined8*)( pRVar3 + 0x40 ) = uVar4;
                  if (uVar25 == uVar21) goto LAB_001023f5;
                  *(undefined8*)( pRVar3 + 0x90 ) = *(undefined8*)( local_b0 + 0x88 );
                  *(ResourceTracker**)( local_b0 + 0x88 ) = pRVar3;
                  pRVar3[0xa8] = (ResourceTracker)0x1;
                  local_58 = auVar31;
                  auVar31 = Rect2i::merge((Rect2i*)( local_b0 + 0x98 ), pRVar3 + 0x98);
                  *(undefined1(*) [16])( local_b0 + 0x98 ) = auVar31;
                  local_b0 = *(ResourceTracker**)( pRVar3 + 0x80 );
                  auVar31 = local_58;
                  LAB_00102939:uVar21 = *(uint*)( pRVar3 + 0x3c );
                  if (local_b0 != (ResourceTracker*)0x0) goto LAB_001023f5;
                  goto LAB_00102945;
               }
               if (uVar21 == uVar25) {
                  pRVar20 = *(ResourceTracker**)( pRVar20 + 0x88 );
                  RVar9 = (ResourceTracker)0x0;
                  pRVar23 = (ResourceTracker*)0x0;
                  if (pRVar20 != (ResourceTracker*)0x0) {
                     while (true) {
                        if (lVar14 != *(long*)( pRVar20 + 8 )) {
                           *(long*)( pRVar20 + 8 ) = lVar14;
                           *(undefined4*)( pRVar20 + 0x34 ) = 0xffffffff;
                           *(undefined8*)( pRVar20 + 0x10 ) = *(undefined8*)( pRVar20 + 0x18 );
                           *(undefined8*)( pRVar20 + 0x18 ) = 0;
                           *(undefined4*)( pRVar20 + 0x7c ) = 0xffffffff;
                           pRVar20[0xa9] = (ResourceTracker)0x0;
                           for (int i = 0; i < 4; i++) {
                              *(undefined4*)( pRVar20 + ( 4*i + 32 ) ) = 4294967295;
                           }
                        }
                        if (pRVar3 == pRVar20) {
                           pRVar3[0xa8] = (ResourceTracker)0x0;
                           pRVar19 = *(ResourceTracker**)( pRVar3 + 0x90 );
                           if (pRVar23 == (ResourceTracker*)0x0) {
                              *(ResourceTracker**)( *(long*)( pRVar3 + 0x80 ) + 0x88 ) = pRVar19;
                           } else {
                              *(ResourceTracker**)( pRVar23 + 0x90 ) = pRVar19;
                           }
                        } else {
                           if (RVar9 == (ResourceTracker)0x0) {
                              *(undefined1(*) [16])( local_b0 + 0x98 ) = *(undefined1(*) [16])( pRVar20 + 0x98 );
                           } else {
                              auVar31 = Rect2i::merge((Rect2i*)( local_b0 + 0x98 ), pRVar20 + 0x98);
                              *(undefined1(*) [16])( local_b0 + 0x98 ) = auVar31;
                              local_b0 = *(ResourceTracker**)( pRVar3 + 0x80 );
                           }
                           pRVar19 = *(ResourceTracker**)( pRVar20 + 0x90 );
                           pRVar23 = pRVar20;
                           RVar9 = RVar10;
                        }
                        auVar31._8_8_ = local_58._8_8_;
                        auVar31._0_8_ = local_58._0_8_;
                        if (pRVar19 == (ResourceTracker*)0x0) break;
                        lVar14 = *(long*)( this + 0x28 );
                        pRVar20 = pRVar19;
                     };
                     goto LAB_00102939;
                  }
               }
               uVar21 = *(uint*)( pRVar3 + 0x3c );
               LAB_001023f5:bVar28 = true;
               pRVar20 = local_b0;
               goto LAB_001023ff;
            }
            if (*(long*)( pRVar20 + 0x50 ) != 0) {
               local_60 = *(long*)( pRVar20 + 0x50 );
               _add_texture_barrier_to_command(this, &local_60, 0, local_c8, 0, uVar25, *(undefined1(*) [16])( pRVar20 + 0x58 ), *(undefined8*)( pRVar20 + 0x68 ), this + 0x50, param_5 + 0x18);
               pRVar20 = *(ResourceTracker**)( pRVar3 + 0x80 );
            }
            local_58._0_4_ = *(undefined4*)( pRVar20 + 0x60 );
            local_58._8_4_ = *(undefined4*)( pRVar20 + 100 );
            local_58._4_4_ = *(undefined4*)( pRVar20 + 0x68 );
            local_58._12_4_ = *(undefined4*)( pRVar20 + 0x6c );
            uVar4 = *(undefined8*)( pRVar20 + 0x40 );
            *(uint*)( pRVar20 + 0x3c ) = uVar25;
            iVar13 = *(int*)( pRVar20 + 0x28 );
            *(uint*)( pRVar3 + 0x3c ) = uVar25;
            *(undefined8*)( pRVar3 + 0x40 ) = uVar4;
            auVar31._8_8_ = local_58._8_8_;
            auVar31._0_8_ = local_58._0_8_;
            local_b0 = pRVar20;
            uVar21 = uVar25;
            if (-1 < iVar13) {
               bVar28 = true;
               goto LAB_00102118;
            }
            bVar27 = true;
            bVar28 = true;
            local_58 = auVar31;
         } else {
            local_c8 = 0;
            bVar27 = false;
            if (uVar25 - 1 < 0x11) goto LAB_00102062;
            pRVar20 = *(ResourceTracker**)( pRVar3 + 0x80 );
            if (pRVar20 != (ResourceTracker*)0x0) goto LAB_00102081;
            LAB_0010230d:lVar18 = *(long*)( pRVar3 + 0x88 );
            if (lVar18 == 0) {
               uVar21 = *(uint*)( pRVar3 + 0x3c );
               LAB_00102945:bVar28 = false;
               local_b0 = (ResourceTracker*)0x0;
               pRVar20 = pRVar3;
               LAB_001023ff:if (bVar27 != false) goto LAB_00102eb4;
               LAB_00102408:local_58 = auVar31;
               if (uVar21 != uVar25) {
                  lVar14 = *(long*)( pRVar3 + 0x50 );
                  bVar24 = bVar27;
                  if (lVar14 != 0) goto LAB_00102125;
                  LAB_00102430:bVar27 = bVar24;
                  if (*(long*)( pRVar3 + 0x48 ) != 0) {
                     local_60 = *(long*)( pRVar3 + 0x48 );
                     _add_buffer_barrier_to_command(this, &local_60, *(undefined8*)( pRVar3 + 0x40 ), local_c8);
                     *(ulong*)( param_5 + 8 ) = *(ulong*)( param_5 + 8 ) | *(ulong*)( pRVar3 + 0x40 );
                     *(ulong*)( param_5 + 0x10 ) = *(ulong*)( param_5 + 0x10 ) | local_c8;
                  }
               }
            } else {
               while (true) {
                  if (lVar14 != *(long*)( lVar18 + 8 )) {
                     uVar4 = *(undefined8*)( lVar18 + 0x18 );
                     *(long*)( lVar18 + 8 ) = lVar14;
                     *(undefined8*)( lVar18 + 0x18 ) = 0;
                     *(undefined8*)( lVar18 + 0x10 ) = uVar4;
                     *(undefined4*)( lVar18 + 0x34 ) = 0xffffffff;
                     *(undefined4*)( lVar18 + 0x7c ) = 0xffffffff;
                     *(undefined1*)( lVar18 + 0xa9 ) = 0;
                     for (int i = 0; i < 4; i++) {
                        *(undefined4*)( lVar18 + ( 4*i + 32 ) ) = 4294967295;
                     }
                  }
                  if (*(long*)( lVar18 + 0x50 ) != 0) {
                     local_60 = *(long*)( lVar18 + 0x50 );
                     _add_texture_barrier_to_command(this, &local_60, *(undefined8*)( lVar18 + 0x40 ), local_c8, *(undefined4*)( lVar18 + 0x3c ), *(undefined4*)( pRVar3 + 0x3c ), *(undefined1(*) [16])( lVar18 + 0x58 ), *(undefined8*)( lVar18 + 0x68 ), this + 0x50, param_5 + 0x18);
                  }
                  auVar8._8_8_ = local_58._8_8_;
                  auVar8._0_8_ = local_58._0_8_;
                  auVar31._8_8_ = local_58._8_8_;
                  auVar31._0_8_ = local_58._0_8_;
                  *(undefined1*)( lVar18 + 0xa8 ) = 0;
                  lVar18 = *(long*)( lVar18 + 0x90 );
                  if (lVar18 == 0) break;
                  lVar14 = *(long*)( this + 0x28 );
               };
               local_b0 = *(ResourceTracker**)( pRVar3 + 0x80 );
               uVar21 = *(uint*)( pRVar3 + 0x3c );
               *(undefined8*)( pRVar3 + 0x88 ) = 0;
               bVar28 = local_b0 != (ResourceTracker*)0x0;
               pRVar20 = local_b0;
               if (!(bool)bVar28) {
                  pRVar20 = pRVar3;
                  auVar31 = auVar8;
               }
               LAB_00102eb4:bVar27 = true;
               if (*(int*)( pRVar20 + 0x28 ) < 0) goto LAB_00102408;
               LAB_00102118:bVar27 = true;
               lVar14 = *(long*)( pRVar3 + 0x50 );
               bVar24 = true;
               local_58 = auVar31;
               if (lVar14 == 0) goto LAB_00102430;
               LAB_00102125:if (*(long*)( pRVar3 + 0x40 ) == 0) {
                  *(undefined8*)( pRVar3 + 0x40 ) = 0x10000;
               }
               local_60 = lVar14;
               local_58 = auVar31;
               _add_texture_barrier_to_command(this, &local_60, *(undefined8*)( pRVar3 + 0x40 ), local_c8, uVar21, uVar25, *(undefined8*)( pRVar3 + 0x58 ), *(undefined8*)( pRVar3 + 0x60 ), *(undefined8*)( pRVar3 + 0x68 ), this + 0x60, param_5 + 0x20);
            }
         }
         uVar15 = *(ulong*)( param_5 + 0x48 );
         *(ulong*)( pRVar3 + 0x40 ) = local_c8;
         *(ulong*)( pRVar20 + 0x18 ) = *(ulong*)( pRVar20 + 0x18 ) | uVar15;
         if (*(ulong*)( pRVar20 + 0x10 ) != 0) {
            *(ulong*)( param_5 + 0x38 ) = *(ulong*)( param_5 + 0x38 ) | *(ulong*)( pRVar20 + 0x10 );
            *(undefined8*)( pRVar20 + 0x10 ) = 0;
         }
         if (uVar25 == uVar21) {
            RVar10 = (ResourceTracker)_check_command_partial_coverage(this, pRVar3, param_4);
            if (RVar10 == (ResourceTracker)0x0) {
               uVar21 = *(uint*)( pRVar20 + 0x28 );
               if ((int)uVar21 < 0) goto LAB_001029cf;
               LAB_001024c7:RVar10 = pRVar20[0xa9];
               bVar24 = bVar27;
               if (pRVar20[0xa9] == (ResourceTracker)0x0) goto LAB_00102207;
               RVar9 = (ResourceTracker)0x0;
               LAB_001024d8:uVar26 = 0xffffffff;
               uVar15 = (ulong)uVar21;
               do {
                  uVar22 = ( ulong ) * (uint*)( this + 0x1b0 );
                  if (*(uint*)( this + 0x1b0 ) <= (uint)uVar15) goto LAB_00102be2;
                  piVar1 = (int*)( *(long*)( this + 0x1b8 ) + (long)(int)(uint)uVar15 * 0x1c );
                  if (local_b0 == (ResourceTracker*)0x0) {
                     iVar13 = *piVar1;
                     if (iVar13 == param_4) {
                        _err_print_error("_add_command_to_graph", "servers/rendering/rendering_device_graph.cpp", 0x245, "Condition \"!resource_has_parent\" is true.", "Command can\'t have itself as a dependency.", 0, 0);
                        goto LAB_001022b8;
                     }
                     LAB_001025ac:if (( (char)piVar1[6] != '\0' ) && ( *(int*)( pRVar3 + 0x3c ) - 0x10U < 2 )) {
                        cVar11 = _check_command_intersection((ResourceTracker*)this, iVar13, param_4);
                        if (cVar11 == '\0') goto LAB_001025e8;
                        iVar13 = *piVar1;
                     }
                     if (pRVar20[0xaa] != (ResourceTracker)0x0) {
                        _check_discardable_attachment_dependency(this, pRVar20, iVar13, param_4);
                        iVar13 = *piVar1;
                     }
                     _add_adjacent_command(this, iVar13, param_4, param_5);
                     if (( bVar27 == false ) || ( (bool)bVar28 == false )) goto LAB_001025e8;
                     if (( (int)( local_58._8_4_ | local_58._12_4_ ) < 0 ) || ( ( piVar1[4] < 0 || ( piVar1[5] < 0 ) ) )) {
                        _err_print_error("encloses", "./core/math/rect2i.h", 0x4e, "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size.", 0);
                     }
                     if (piVar1[2] < (int)local_58._0_4_) goto LAB_001025e8;
                     if (( ( ( piVar1[3] < (int)local_58._4_4_ ) || ( (int)( local_58._0_4_ + local_58._8_4_ ) < piVar1[2] + piVar1[4] ) ) || ( (int)( local_58._4_4_ + local_58._12_4_ ) < piVar1[3] + piVar1[5] ) ) || ( RVar9 != (ResourceTracker)0x0 )) goto LAB_001025e8;
                     uVar25 = (uint)uVar26;
                     if ((int)uVar25 < 0) {
                        uVar22 = (ulong)(uint)piVar1[1];
                        *(int*)( pRVar20 + 0x28 ) = piVar1[1];
                     } else {
                        uVar22 = ( ulong ) * (uint*)( this + 0x1b0 );
                        uVar15 = uVar26;
                        if (*(uint*)( this + 0x1b0 ) <= uVar25) goto LAB_00102be2;
                        uVar22 = (ulong)(uint)piVar1[1];
                        *(int*)( *(long*)( this + 0x1b8 ) + (long)(int)uVar25 * 0x1c + 4 ) = piVar1[1];
                     }
                  } else {
                     if (( ( (int)( local_58._8_4_ | local_58._12_4_ ) < 0 ) || ( iVar13 = iVar13 < 0 ) ) || ( piVar1[5] < 0 )) {
                        _err_print_error("intersects", "./core/math/rect2i.h", 0x38, "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size.", 0);
                        iVar13 = piVar1[4];
                     }
                     if (( (int)local_58._0_4_ < iVar13 + piVar1[2] ) && ( piVar1[2] < (int)( local_58._0_4_ + local_58._8_4_ ) )) {
                        if (( (int)local_58._4_4_ < piVar1[5] + piVar1[3] ) && ( ( piVar1[3] < (int)( local_58._4_4_ + local_58._12_4_ ) && ( iVar13 = *piVar1 ),param_4 != iVar13 ) )) goto LAB_001025ac;
                     }
                     LAB_001025e8:uVar22 = (ulong)(uint)piVar1[1];
                     uVar26 = uVar15;
                  }
                  uVar15 = uVar22;
               } while ( -1 < (int)uVar22 );
               goto LAB_00102262;
            }
            uVar21 = *(uint*)( pRVar20 + 0x28 );
            if (-1 < (int)uVar21) {
               RVar9 = pRVar20[0xa9];
               bVar24 = bVar27;
               if (RVar9 == (ResourceTracker)0x0) goto LAB_00102207;
               goto LAB_001024d8;
            }
            if (bVar27 == false) goto LAB_0010226b;
            LAB_00102a58:uVar12 = _add_to_write_list(this, param_4, local_58._0_8_, local_58._8_8_);
            uVar25 = *(uint*)( pRVar20 + 0x20 );
            bVar27 = true;
            *(undefined4*)( pRVar20 + 0x28 ) = uVar12;
            pRVar20[0xa9] = (ResourceTracker)0x1;
            if (-1 < (int)uVar25) {
               LAB_0010263d:uVar15 = (ulong)uVar25;
               do {
                  while (true) {
                     uVar22 = ( ulong ) * (uint*)( this + 400 );
                     if (*(uint*)( this + 400 ) <= (uint)uVar15) goto LAB_00102be2;
                     piVar1 = (int*)( *(long*)( this + 0x198 ) + (long)(int)(uint)uVar15 * 8 );
                     iVar13 = *piVar1;
                     uVar25 = piVar1[1];
                     uVar15 = (ulong)uVar25;
                     if (param_4 == iVar13) break;
                     _add_adjacent_command(this, iVar13, param_4, param_5);
                     if ((int)uVar25 < 0) goto LAB_0010268f;
                  };
                  if (local_b0 == (ResourceTracker*)0x0) {
                     _err_print_error("_add_command_to_graph", "servers/rendering/rendering_device_graph.cpp", 0x282, "Method/function failed.", "Command can\'t have itself as a dependency.", 0, 0);
                     goto LAB_001022b8;
                  }
               } while ( -1 < (int)uVar25 );
               LAB_0010268f:if (!bVar27) goto LAB_0010269a;
            }
            bVar27 = true;
            LAB_00102a9e:uVar25 = *(uint*)( pRVar20 + 0x24 );
            if (-1 < (int)uVar25) {
               uVar15 = 0xffffffff;
               do {
                  uVar22 = ( ulong ) * (uint*)( this + 0x1a0 );
                  if (*(uint*)( this + 0x1a0 ) <= uVar25) {
                     uVar15 = (ulong)uVar25;
                     LAB_00102be2:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar15, uVar22, "p_index", "count", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar5 = (code*)invalidInstructionException();
                     ( *pcVar5 )();
                  }
                  piVar1 = (int*)( *(long*)( this + 0x1a8 ) + (long)(int)uVar25 * 0x1c );
                  if (bVar27) {
                     if (( ( (int)( local_58._8_4_ | local_58._12_4_ ) < 0 ) || ( piVar1[4] < 0 ) ) || ( piVar1[5] < 0 )) {
                        _err_print_error("encloses", "./core/math/rect2i.h", 0x4e, "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size.", 0);
                     }
                     if ((int)local_58._0_4_ <= piVar1[2]) {
                        if (( ( (int)local_58._4_4_ <= piVar1[3] ) && ( piVar1[2] + piVar1[4] <= (int)( local_58._0_4_ + local_58._8_4_ ) ) ) && ( piVar1[3] + piVar1[5] <= (int)( local_58._4_4_ + local_58._12_4_ ) )) goto LAB_00102bc0;
                     }
                     uVar15 = (ulong)uVar25;
                     uVar25 = piVar1[1];
                  } else {
                     LAB_00102bc0:uVar25 = piVar1[1];
                     uVar21 = (uint)uVar15;
                     if ((int)uVar21 < 0) {
                        *(uint*)( pRVar20 + 0x24 ) = uVar25;
                     } else {
                        uVar22 = ( ulong ) * (uint*)( this + 0x1a0 );
                        if (*(uint*)( this + 0x1a0 ) <= uVar21) goto LAB_00102be2;
                        *(uint*)( *(long*)( this + 0x1a8 ) + (long)(int)uVar21 * 0x1c + 4 ) = uVar25;
                     }
                  }
                  if (local_b0 == (ResourceTracker*)0x0) {
                     LAB_00102b72:_add_adjacent_command(this, *piVar1, param_4, param_5);
                  } else {
                     if (( ( (int)( local_58._8_4_ | local_58._12_4_ ) < 0 ) || ( iVar13 = iVar13 < 0 ) ) || ( piVar1[5] < 0 )) {
                        _err_print_error("intersects", "./core/math/rect2i.h", 0x38, "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size.", 0);
                        iVar13 = piVar1[4];
                     }
                     if (( (int)local_58._0_4_ < iVar13 + piVar1[2] ) && ( piVar1[2] < (int)( local_58._0_4_ + local_58._8_4_ ) )) {
                        if (( (int)local_58._4_4_ < piVar1[5] + piVar1[3] ) && ( piVar1[3] < (int)( local_58._4_4_ + local_58._12_4_ ) )) goto LAB_00102b72;
                     }
                  }
               } while ( -1 < (int)uVar25 );
            }
         } else {
            uVar21 = *(uint*)( pRVar20 + 0x28 );
            if (( bVar27 != false ) || ( *(long*)( pRVar3 + 0x50 ) != 0 )) {
               *(uint*)( pRVar3 + 0x3c ) = uVar25;
               if ((int)uVar21 < 0) {
                  LAB_00102620:if (bVar28 != 0) {
                     if (( pRVar20[0xa9] == (ResourceTracker)0x0 ) && ( -1 < *(int*)( pRVar20 + 0x28 ) )) {
                        local_c8 = CONCAT44(*(undefined4*)( pRVar20 + 0x68 ), *(undefined4*)( pRVar20 + 0x60 ));
                        uVar12 = _add_to_write_list(this, *(int*)( pRVar20 + 0x28 ), local_c8, CONCAT44(*(undefined4*)( pRVar20 + 0x6c ), *(undefined4*)( pRVar20 + 100 )), 0xffffffff, 0);
                        *(undefined4*)( pRVar20 + 0x28 ) = uVar12;
                     }
                     goto LAB_00102a58;
                  }
                  uVar25 = *(uint*)( pRVar20 + 0x20 );
                  *(int*)( pRVar20 + 0x28 ) = param_4;
                  pRVar20[0xa9] = (ResourceTracker)0x0;
                  bVar27 = false;
                  if (-1 < (int)uVar25) goto LAB_0010263d;
                  LAB_0010269a:*(undefined4*)( pRVar20 + 0x20 ) = 0xffffffff;
                  bVar27 = false;
                  goto LAB_00102a9e;
               }
               RVar9 = (ResourceTracker)0x0;
               bVar27 = true;
               RVar10 = (ResourceTracker)0x0;
               bVar24 = true;
               if (pRVar20[0xa9] != (ResourceTracker)0x0) goto LAB_001024d8;
               LAB_00102207:RVar9 = RVar10;
               if (uVar21 != param_4) {
                  if (pRVar20[0xaa] != (ResourceTracker)0x0) {
                     _check_discardable_attachment_dependency(this, pRVar20, uVar21, param_4);
                     uVar21 = *(uint*)( pRVar20 + 0x28 );
                  }
                  _add_adjacent_command(this, uVar21, param_4, param_5);
                  bVar27 = bVar24;
                  goto LAB_00102262;
               }
               _err_print_error("_add_command_to_graph", "servers/rendering/rendering_device_graph.cpp", 0x261, "Method/function failed.", "Command can\'t have itself as a dependency.", 0, 0);
               break;
            }
            RVar2 = this[0x220];
            *(uint*)( pRVar3 + 0x3c ) = uVar25;
            bVar27 = (bool)( (byte)RVar2 >> 2 & 1 );
            if (-1 < (int)uVar21) goto LAB_001024c7;
            LAB_001029cf:RVar9 = (ResourceTracker)0x0;
            LAB_00102262:if (bVar27 != false) {
               bVar28 = bVar28 | (byte)RVar9;
               goto LAB_00102620;
            }
            LAB_0010226b:if (local_b0 == (ResourceTracker*)0x0) {
               uVar12 = _add_to_command_list(this, param_4, *(int*)( pRVar20 + 0x20 ));
               *(undefined4*)( pRVar20 + 0x20 ) = uVar12;
            } else {
               uVar12 = _add_to_slice_read_list(this, param_4, CONCAT44(auVar29._8_4_, auVar29._0_4_), CONCAT44(auVar29._12_4_, auVar29._4_4_));
               *(undefined4*)( pRVar20 + 0x24 ) = uVar12;
            }
         }
         local_d0 = local_d0 + 1;
         local_b8 = local_b8 + 1;
      } while ( local_d0 != param_1 + param_3 );
   }
   LAB_001022b8:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* RenderingDeviceGraph::_run_compute_list_command(RenderingDeviceDriver::CommandBufferID, unsigned
   char const*, unsigned int) */void RenderingDeviceGraph::_run_compute_list_command(RenderingDeviceGraph *this, undefined8 *param_2, long param_3, uint param_4) {
   undefined4 *puVar1;
   int iVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_4 != 0) {
      uVar3 = 0;
      do {
         iVar2 = (int)uVar3;
         puVar1 = (undefined4*)( uVar3 + param_3 );
         switch (*puVar1) {
            default:
        goto switchD_00103428_caseD_0;
            case 1:
        local_48 = *(undefined8 *)(puVar1 + 2);
        uVar3 = (ulong)(iVar2 + 0x10);
        local_50 = *param_2;
        (**(code **)(**(long **)this + 0x460))(*(long **)this,&local_50,&local_48);
        break;
            case 2:
        local_48 = *(undefined8 *)(puVar1 + 2);
        local_50 = *param_2;
        (**(code **)(**(long **)this + 0x470))
                  (*(long **)this,&local_50,puVar1 + 6,puVar1[5],&local_48,puVar1[4],puVar1[5]);
        uVar3 = (ulong)(uint)(iVar2 + 0x18 + puVar1[5] * 8);
        break;
            case 3:
        local_48 = *param_2;
        uVar3 = (ulong)(iVar2 + 0x10);
        (**(code **)(**(long **)this + 0x478))
                  (*(long **)this,&local_48,puVar1[1],puVar1[2],puVar1[3]);
        break;
            case 4:
        local_48 = *(undefined8 *)(puVar1 + 2);
        uVar3 = (ulong)(iVar2 + 0x18);
        local_50 = *param_2;
        (**(code **)(**(long **)this + 0x480))(*(long **)this,&local_50,&local_48);
        break;
            case 5:
        local_48 = *(undefined8 *)(puVar1 + 2);
        local_50 = *param_2;
        (**(code **)(**(long **)this + 0x388))
                  (*(long **)this,&local_50,&local_48,0,puVar1 + 4,(uint)puVar1[1] >> 2);
        uVar3 = (ulong)(uint)(iVar2 + 0x10 + puVar1[1]);
        break;
            case 6:
        local_48 = *(undefined8 *)(puVar1 + 4);
        uVar3 = (ulong)(iVar2 + 0x20);
        local_50 = *(undefined8 *)(puVar1 + 2);
        local_58 = *param_2;
        (**(code **)(**(long **)this + 0x340))
                  (*(long **)this,&local_58,&local_50,&local_48,puVar1[6]);
         }
      } while ( (uint)uVar3 < param_4 );
   }
   switchD_00103428_caseD_0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RenderingDeviceGraph::_run_draw_list_command(RenderingDeviceDriver::CommandBufferID, unsigned
   char const*, unsigned int) */void RenderingDeviceGraph::_run_draw_list_command(RenderingDeviceGraph *this, undefined8 *param_2, long param_3, uint param_4) {
   code *pcVar1;
   undefined4 *puVar2;
   int iVar3;
   ulong uVar4;
   long *plVar5;
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_4 != 0) {
      uVar4 = 0;
      do {
         iVar3 = (int)uVar4;
         puVar2 = (undefined4*)( uVar4 + param_3 );
         switch (*puVar2) {
            default:
        goto switchD_00103648_caseD_0;
            case 1:
        local_48 = *(undefined8 *)(puVar2 + 2);
        uVar4 = (ulong)(iVar3 + 0x18);
        local_50 = *param_2;
        (**(code **)(**(long **)this + 0x440))(*(long **)this,&local_50,&local_48);
        break;
            case 2:
        local_48 = *(undefined8 *)(puVar2 + 2);
        uVar4 = (ulong)(iVar3 + 0x10);
        local_50 = *param_2;
        (**(code **)(**(long **)this + 0x3f0))(*(long **)this,&local_50,&local_48);
        break;
            case 3:
        local_48 = *(undefined8 *)(puVar2 + 2);
        local_50 = *param_2;
        (**(code **)(**(long **)this + 0x400))
                  (*(long **)this,&local_50,puVar2 + 6,puVar2[5],&local_48,puVar2[4],puVar2[5]);
        uVar4 = (ulong)(uint)(iVar3 + 0x18 + puVar2[5] * 8);
        break;
            case 4:
        local_48 = *param_2;
        (**(code **)(**(long **)this + 0x438))(*(long **)this,&local_48,puVar2[1]);
        uVar4 = (ulong)(uint)(iVar3 + 8 + puVar2[1] * 0x10);
        break;
            case 5:
        local_48 = *param_2;
        (**(code **)(**(long **)this + 1000))(*(long **)this,&local_48,puVar2 + 3);
        uVar4 = (ulong)(uint)(puVar2[2] * 0x10 + iVar3 + 0xc + puVar2[1] * 0x20);
        break;
            case 6:
        local_48 = *param_2;
        uVar4 = (ulong)(iVar3 + 0xc);
        (**(code **)(**(long **)this + 0x408))(*(long **)this,&local_48,puVar2[1],puVar2[2],0);
        break;
            case 7:
        local_48 = *param_2;
        uVar4 = (ulong)(iVar3 + 0x10);
        (**(code **)(**(long **)this + 0x410))
                  (*(long **)this,&local_48,puVar2[1],puVar2[2],puVar2[3],0,0);
        break;
            case 8:
        plVar5 = *(long **)this;
        pcVar1 = *(code **)(*plVar5 + 0x428);
        goto LAB_0010381d;
            case 9:
        plVar5 = *(long **)this;
        pcVar1 = *(code **)(*plVar5 + 0x418);
LAB_0010381d:
        local_48 = *(undefined8 *)(puVar2 + 2);
        uVar4 = (ulong)(iVar3 + 0x20);
        local_50 = *param_2;
        (*pcVar1)(plVar5,&local_50,&local_48,puVar2[4],puVar2[5],puVar2[6]);
        break;
            case 10:
        local_48 = *param_2;
        uVar4 = (ulong)(iVar3 + 0x10);
        (**(code **)(**(long **)this + 0x298))(*(long **)this,&local_48,puVar2 + 2);
        break;
            case 0xb:
        local_48 = *param_2;
        uVar4 = (ulong)(iVar3 + 8);
        (**(code **)(**(long **)this + 0x3d0))(*(long **)this,&local_48,puVar2[1]);
        break;
            case 0xc:
        local_48 = *param_2;
        uVar4 = (ulong)(iVar3 + 0x14);
        (**(code **)(**(long **)this + 0x448))(*(long **)this,&local_48,puVar2 + 1);
        break;
            case 0xd:
        local_48 = *param_2;
        uVar4 = (ulong)(iVar3 + 8);
        (**(code **)(**(long **)this + 0x450))(puVar2[1],*(long **)this,&local_48);
        break;
            case 0xe:
        local_48 = *(undefined8 *)(puVar2 + 2);
        local_50 = *param_2;
        (**(code **)(**(long **)this + 0x388))
                  (*(long **)this,&local_50,&local_48,0,puVar2 + 4,(uint)puVar2[1] >> 2);
        uVar4 = (ulong)(uint)(iVar3 + 0x10 + puVar2[1]);
        break;
            case 0xf:
        plVar5 = *(long **)this;
        pcVar1 = *(code **)(*plVar5 + 0x3e0);
        goto LAB_001036cd;
            case 0x10:
        plVar5 = *(long **)this;
        pcVar1 = *(code **)(*plVar5 + 0x3d8);
LAB_001036cd:
        local_48 = *param_2;
        uVar4 = (ulong)(iVar3 + 0x14);
        (*pcVar1)(plVar5,&local_48,puVar2 + 1,1);
        break;
            case 0x11:
        local_48 = *(undefined8 *)(puVar2 + 4);
        uVar4 = (ulong)(iVar3 + 0x20);
        local_50 = *(undefined8 *)(puVar2 + 2);
        local_58 = *param_2;
        (**(code **)(**(long **)this + 0x340))
                  (*(long **)this,&local_58,&local_50,&local_48,puVar2[6]);
         }
      } while ( (uint)uVar4 < param_4 );
   }
   switchD_00103648_caseD_0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RenderingDeviceGraph::_add_draw_list_begin(RenderingDeviceGraph::FramebufferCache*,
   RenderingDeviceDriver::RenderPassID, RenderingDeviceDriver::FramebufferID, Rect2i,
   VectorView<RenderingDeviceGraph::AttachmentOperation>,
   VectorView<RenderingDeviceDriver::RenderPassClearValue>, bool, bool, unsigned int, bool) */void RenderingDeviceGraph::_add_draw_list_begin(long param_1, undefined8 param_2, undefined8 *param_3, undefined8 *param_4, undefined8 param_5, undefined8 param_6, long param_7, uint param_8, long param_9, uint param_10, char param_11, char param_12, undefined4 param_13, undefined1 param_14) {
   undefined8 uVar1;
   undefined8 uVar2;
   uint uVar3;
   code *pcVar4;
   uint uVar5;
   long lVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   undefined8 *puVar9;
   ulong uVar10;
   uint uVar11;
   void *pvVar12;
   ulong uVar13;
   for (int i = 0; i < 3; i++) {
      if (*(int*)( param_1 + ( 16*i + 184 ) ) != 0) {
         *(undefined4*)( param_1 + ( 16*i + 184 ) ) = 0;
      }
   }
   uVar1 = *param_3;
   *(undefined8*)( param_1 + 0xf8 ) = param_2;
   *(int*)( param_1 + 0xf0 ) = *(int*)( param_1 + 0xf0 ) + 1;
   *(undefined8*)( param_1 + 0xe8 ) = 0;
   uVar2 = *param_4;
   *(undefined8*)( param_1 + 0x100 ) = uVar1;
   *(undefined8*)( param_1 + 0x108 ) = uVar2;
   *(undefined8*)( param_1 + 0x110 ) = param_5;
   *(undefined8*)( param_1 + 0x118 ) = param_6;
   if (param_8 < *(uint*)( param_1 + 0x120 )) {
      *(uint*)( param_1 + 0x120 ) = param_8;
      LAB_00103b0a:uVar5 = *(uint*)( param_1 + 0x130 );
      if (param_10 < uVar5) {
         *(uint*)( param_1 + 0x130 ) = param_10;
      } else if (uVar5 < param_10) {
         LAB_00103c09:if (*(uint*)( param_1 + 0x134 ) < param_10) {
            pvVar12 = *(void**)( param_1 + 0x138 );
            uVar5 = param_10 - 1 >> 1 | param_10 - 1;
            uVar5 = uVar5 | uVar5 >> 2;
            uVar5 = uVar5 >> 4 | uVar5;
            uVar5 = uVar5 >> 8 | uVar5;
            uVar5 = ( uVar5 | uVar5 >> 0x10 ) + 1;
            *(uint*)( param_1 + 0x134 ) = uVar5;
            lVar6 = Memory::realloc_static(pvVar12, (ulong)uVar5 << 4, false);
            *(long*)( param_1 + 0x138 ) = lVar6;
            if (lVar6 == 0) {
               /* WARNING: Subroutine does not return */
               LocalVector<RenderingDeviceGraph::AttachmentOperation,unsigned_int,false,false>::resize((uint)pvVar12);
            }
            uVar5 = *(uint*)( param_1 + 0x130 );
            if (uVar5 < param_10) goto LAB_00103c15;
         } else {
            LAB_00103c15:uVar2 = _UNK_001129c8;
            uVar1 = __LC31;
            puVar7 = (undefined8*)( (ulong)uVar5 * 0x10 + *(long*)( param_1 + 0x138 ) );
            puVar8 = puVar7;
            if (( ( ulong )(param_10 - uVar5) * 0x10 & 0x10 ) != 0) {
               *puVar7 = __LC31;
               puVar7[1] = uVar2;
               puVar8 = puVar7 + 2;
               if (puVar8 == puVar7 + ( ulong )(param_10 - uVar5) * 2) goto LAB_00103c60;
            }
            do {
               *puVar8 = uVar1;
               puVar8[1] = uVar2;
               puVar9 = puVar8 + 4;
               puVar8[2] = uVar1;
               puVar8[3] = uVar2;
               puVar8 = puVar9;
            } while ( puVar9 != puVar7 + ( ulong )(param_10 - uVar5) * 2 );
         }
         LAB_00103c60:*(uint*)( param_1 + 0x130 ) = param_10;
      }
      if (param_8 == 0) goto LAB_00103b75;
   } else {
      if (param_8 <= *(uint*)( param_1 + 0x120 )) goto LAB_00103b0a;
      if (*(uint*)( param_1 + 0x124 ) < param_8) {
         pvVar12 = *(void**)( param_1 + 0x128 );
         uVar5 = param_8 - 1 | param_8 - 1 >> 1;
         uVar5 = uVar5 >> 2 | uVar5;
         uVar5 = uVar5 | uVar5 >> 4;
         uVar5 = uVar5 >> 8 | uVar5;
         uVar5 = ( uVar5 >> 0x10 | uVar5 ) + 1;
         *(uint*)( param_1 + 0x124 ) = uVar5;
         lVar6 = Memory::realloc_static(pvVar12, (ulong)uVar5 * 4, false);
         *(long*)( param_1 + 0x128 ) = lVar6;
         if (lVar6 == 0) {
            /* WARNING: Subroutine does not return */
            LocalVector<RenderingDeviceGraph::AttachmentOperation,unsigned_int,false,false>::resize((uint)pvVar12);
         }
      }
      uVar5 = *(uint*)( param_1 + 0x130 );
      *(uint*)( param_1 + 0x120 ) = param_8;
      if (uVar5 <= param_10) {
         if (param_10 <= uVar5) goto LAB_00103b28;
         goto LAB_00103c09;
      }
      *(uint*)( param_1 + 0x130 ) = param_10;
   }
   LAB_00103b28:uVar5 = *(uint*)( param_1 + 0x120 );
   uVar10 = (ulong)uVar5;
   lVar6 = 0;
   uVar11 = 0;
   do {
      uVar13 = uVar10;
      if (uVar5 == uVar11) {
         LAB_00103c8e:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar10, uVar13, "p_index", "count", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar4 = (code*)invalidInstructionException();
         ( *pcVar4 )();
      }
      uVar3 = *(uint*)( param_1 + 0x130 );
      *(undefined4*)( *(long*)( param_1 + 0x128 ) + lVar6 ) = *(undefined4*)( param_7 + lVar6 );
      if (uVar3 <= uVar11) {
         uVar10 = (ulong)uVar11;
         uVar13 = (ulong)uVar3;
         goto LAB_00103c8e;
      }
      puVar8 = (undefined8*)( param_9 + lVar6 * 4 );
      uVar1 = puVar8[1];
      uVar11 = uVar11 + 1;
      puVar7 = (undefined8*)( *(long*)( param_1 + 0x138 ) + lVar6 * 4 );
      *puVar7 = *puVar8;
      puVar7[1] = uVar1;
      lVar6 = lVar6 + 4;
   } while ( uVar11 != param_8 );
   LAB_00103b75:if (param_11 != '\0') {
      *(ulong*)( param_1 + 0xe8 ) = *(ulong*)( param_1 + 0xe8 ) | 0x400;
   }
   if (param_12 != '\0') {
      *(ulong*)( param_1 + 0xe8 ) = *(ulong*)( param_1 + 0xe8 ) | 0x300;
   }
   *(undefined1*)( param_1 + 0x144 ) = param_14;
   *(undefined4*)( param_1 + 0x140 ) = param_13;
   return;
}/* RenderingDeviceGraph::_run_secondary_command_buffer_task(RenderingDeviceGraph::SecondaryCommandBuffer
   const*) */void RenderingDeviceGraph::_run_secondary_command_buffer_task(RenderingDeviceGraph *this, SecondaryCommandBuffer *param_1) {
   long in_FS_OFFSET;
   undefined8 local_38;
   undefined8 local_30;
   undefined8 local_28;
   long local_20;
   local_28 = *(undefined8*)( param_1 + 0x28 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_30 = *(undefined8*)( param_1 + 0x20 );
   local_38 = *(undefined8*)( param_1 + 0x10 );
   ( **(code**)( **(long**)this + 0x288 ) )(*(long**)this, &local_38, &local_30, 0, &local_28);
   local_28 = *(undefined8*)( param_1 + 0x10 );
   _run_draw_list_command(this, &local_28, *(undefined8*)( param_1 + 8 ), *(undefined4*)param_1);
   local_28 = *(undefined8*)( param_1 + 0x10 );
   ( **(code**)( **(long**)this + 0x290 ) )(*(long**)this, &local_28);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RenderingDeviceGraph::_wait_for_secondary_command_buffer_tasks() */void RenderingDeviceGraph::_wait_for_secondary_command_buffer_tasks(RenderingDeviceGraph *this) {
   uint *puVar1;
   long lVar2;
   code *pcVar3;
   ulong uVar4;
   uint uVar5;
   ulong uVar6;
   uVar4 = ( ulong ) * (uint*)( this + 0x238 );
   uVar6 = ( ulong ) * (uint*)( this + 0x228 );
   if (*(uint*)( this + 0x238 ) < *(uint*)( this + 0x228 )) {
      uVar5 = 0;
      do {
         puVar1 = (uint*)( *(long*)( this + 0x230 ) + uVar4 * 0x18 );
         if (puVar1[4] <= uVar5) {
            return;
         }
         if (*puVar1 <= uVar5) {
            uVar4 = (ulong)uVar5;
            uVar6 = ( ulong ) * puVar1;
            break;
         }
         lVar2 = *(long*)( puVar1 + 2 ) + (ulong)uVar5 * 0x38;
         if (*(long*)( lVar2 + 0x30 ) != -1) {
            WorkerThreadPool::wait_for_task_completion(WorkerThreadPool::singleton);
            uVar4 = ( ulong ) * (uint*)( this + 0x238 );
            *(undefined8*)( lVar2 + 0x30 ) = 0xffffffffffffffff;
            uVar6 = ( ulong ) * (uint*)( this + 0x228 );
         }
         uVar5 = uVar5 + 1;
      } while ( (uint)uVar4 < (uint)uVar6 );
   }
   _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar4, uVar6, "p_index", "count", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar3 = (code*)invalidInstructionException();
   ( *pcVar3 )();
}/* RenderingDeviceGraph::_boost_priority_for_render_commands(RenderingDeviceGraph::RecordedCommandSort*,
   unsigned int, unsigned int&) */void RenderingDeviceGraph::_boost_priority_for_render_commands(RenderingDeviceGraph *this, RecordedCommandSort_conflict *param_1, uint param_2, uint *param_3) {
   if (param_2 != 0) {
      _boost_priority_for_render_commands(param_1, param_2, param_3);
      return;
   }
   return;
}/* RenderingDeviceGraph::begin() */void RenderingDeviceGraph::begin(RenderingDeviceGraph *this) {
   uint uVar1;
   code *pcVar2;
   if (*(int*)( this + 0x30 ) != 0) {
      *(undefined4*)( this + 0x30 ) = 0;
   }
   if (*(int*)( this + 0x40 ) != 0) {
      *(undefined4*)( this + 0x40 ) = 0;
   }
   if (*(int*)( this + 0x50 ) != 0) {
      *(undefined4*)( this + 0x50 ) = 0;
   }
   if (*(int*)( this + 0x60 ) != 0) {
      *(undefined4*)( this + 0x60 ) = 0;
   }
   if (*(int*)( this + 0x70 ) != 0) {
      *(undefined4*)( this + 0x70 ) = 0;
   }
   if (*(int*)( this + 0x80 ) != 0) {
      *(undefined4*)( this + 0x80 ) = 0;
   }
   if (*(int*)( this + 0x90 ) != 0) {
      *(undefined4*)( this + 0x90 ) = 0;
   }
   if (*(int*)( this + 0xa0 ) != 0) {
      *(undefined4*)( this + 0xa0 ) = 0;
   }
   if (*(int*)( this + 400 ) != 0) {
      *(undefined4*)( this + 400 ) = 0;
   }
   if (*(int*)( this + 0x1a0 ) != 0) {
      *(undefined4*)( this + 0x1a0 ) = 0;
   }
   if (*(int*)( this + 0x1b0 ) != 0) {
      *(undefined4*)( this + 0x1b0 ) = 0;
   }
   uVar1 = *(uint*)( this + 0x238 );
   *(undefined8*)( this + 0x188 ) = 0;
   *(undefined8*)( this + 0x1c0 ) = 0xffffffffffffffff;
   this[0x1c8] = (RenderingDeviceGraph)0x0;
   *(undefined4*)( this + 0xb0 ) = 0xffffffff;
   if (uVar1 < *(uint*)( this + 0x228 )) {
      *(undefined4*)( *(long*)( this + 0x230 ) + (ulong)uVar1 * 0x18 + 0x10 ) = 0;
      *(long*)( this + 0x28 ) = *(long*)( this + 0x28 ) + 1;
      *(undefined4*)( this + 0xf0 ) = 0;
      *(undefined4*)( this + 0x180 ) = 0;
      return;
   }
   _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)uVar1, ( ulong ) * (uint*)( this + 0x228 ), "p_index", "count", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}/* WARNING: Type propagation algorithm not settling *//* RenderingDeviceGraph::add_buffer_clear(RenderingDeviceDriver::BufferID,
   RenderingDeviceGraph::ResourceTracker*, unsigned int, unsigned int) */void RenderingDeviceGraph::add_buffer_clear(RenderingDeviceGraph *this, undefined8 *param_2, ResourceTracker *param_3, undefined4 param_4, undefined4 param_5) {
   undefined8 uVar1;
   RecordedCommand *pRVar2;
   long in_FS_OFFSET;
   ResourceTracker *local_40;
   int local_38[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = param_3;
   pRVar2 = (RecordedCommand*)_allocate_command(this, 0x60, local_38);
   *(undefined4*)pRVar2 = 1;
   *(undefined8*)( pRVar2 + 0x48 ) = 0x1000;
   uVar1 = *param_2;
   *(undefined4*)( pRVar2 + 0x58 ) = param_4;
   *(undefined8*)( pRVar2 + 0x50 ) = uVar1;
   *(undefined4*)( pRVar2 + 0x5c ) = param_5;
   local_38[1] = 2;
   _add_command_to_graph(this, &local_40, (ResourceUsage*)( local_38 + 1 ), 1, local_38[0], pRVar2);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RenderingDeviceGraph::add_buffer_copy(RenderingDeviceDriver::BufferID,
   RenderingDeviceGraph::ResourceTracker*, RenderingDeviceDriver::BufferID,
   RenderingDeviceGraph::ResourceTracker*, RenderingDeviceDriver::BufferCopyRegion) */void RenderingDeviceGraph::add_buffer_copy(RenderingDeviceGraph *param_1, undefined8 *param_2, long param_3, undefined8 *param_4, ResourceTracker *param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9) {
   undefined8 uVar1;
   RecordedCommand *pRVar2;
   long in_FS_OFFSET;
   int local_54;
   undefined8 local_50;
   ResourceTracker *local_48;
   long local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pRVar2 = (RecordedCommand*)_allocate_command(param_1, 0x78, &local_54);
   *(undefined4*)pRVar2 = 2;
   *(undefined8*)( pRVar2 + 0x48 ) = 0x1000;
   *(undefined8*)( pRVar2 + 0x50 ) = *param_2;
   uVar1 = *param_4;
   *(undefined8*)( pRVar2 + 0x60 ) = param_7;
   *(undefined8*)( pRVar2 + 0x68 ) = param_8;
   *(undefined8*)( pRVar2 + 0x58 ) = uVar1;
   *(undefined8*)( pRVar2 + 0x70 ) = param_9;
   local_50 = _LC32;
   local_48 = param_5;
   local_40 = param_3;
   _add_command_to_graph(param_1, &local_48, (ResourceUsage*)&local_50, 2 - ( param_3 == 0 ), local_54, pRVar2);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Type propagation algorithm not settling *//* RenderingDeviceGraph::add_buffer_get_data(RenderingDeviceDriver::BufferID,
   RenderingDeviceGraph::ResourceTracker*, RenderingDeviceDriver::BufferID,
   RenderingDeviceDriver::BufferCopyRegion) */void RenderingDeviceGraph::add_buffer_get_data(RenderingDeviceGraph *param_1, undefined8 *param_2, ResourceTracker *param_3, undefined8 *param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9) {
   undefined8 uVar1;
   RecordedCommand *pRVar2;
   long in_FS_OFFSET;
   ResourceTracker *local_30;
   int local_28[2];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_30 = param_3;
   pRVar2 = (RecordedCommand*)_allocate_command(param_1, 0x78, local_28);
   *(undefined4*)pRVar2 = 3;
   *(undefined8*)( pRVar2 + 0x48 ) = 0x1000;
   *(undefined8*)( pRVar2 + 0x50 ) = *param_2;
   uVar1 = *param_4;
   *(undefined8*)( pRVar2 + 0x60 ) = param_7;
   *(undefined8*)( pRVar2 + 0x68 ) = param_8;
   *(undefined8*)( pRVar2 + 0x58 ) = uVar1;
   *(undefined8*)( pRVar2 + 0x70 ) = param_9;
   if (local_30 == (ResourceTracker*)0x0) {
      _add_command_to_graph(param_1, (ResourceTracker**)0x0, (ResourceUsage*)0x0, 0, local_28[0], pRVar2);
   } else {
      local_28[1] = 1;
      _add_command_to_graph(param_1, &local_30, (ResourceUsage*)( local_28 + 1 ), 1, local_28[0], pRVar2);
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Type propagation algorithm not settling *//* RenderingDeviceGraph::add_buffer_update(RenderingDeviceDriver::BufferID,
   RenderingDeviceGraph::ResourceTracker*, VectorView<RenderingDeviceGraph::RecordedBufferCopy>) */void RenderingDeviceGraph::add_buffer_update(RenderingDeviceGraph *param_1, undefined8 *param_2, ResourceTracker *param_3, long param_4, uint param_5) {
   undefined8 *puVar1;
   undefined8 uVar2;
   RecordedCommand *pRVar3;
   long lVar4;
   long in_FS_OFFSET;
   ResourceTracker *local_40;
   int local_38[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = param_3;
   pRVar3 = (RecordedCommand*)_allocate_command(param_1, (int)( (ulong)param_5 << 5 ) + 0x60, local_38);
   *(undefined4*)pRVar3 = 4;
   *(undefined8*)( pRVar3 + 0x48 ) = 0x1000;
   uVar2 = *param_2;
   *(uint*)( pRVar3 + 0x58 ) = param_5;
   *(undefined8*)( pRVar3 + 0x50 ) = uVar2;
   if (param_5 != 0) {
      lVar4 = 0;
      do {
         *(undefined8*)( pRVar3 + lVar4 + 0x60 ) = *(undefined8*)( param_4 + lVar4 );
         puVar1 = (undefined8*)( param_4 + 8 + lVar4 );
         uVar2 = puVar1[1];
         *(undefined8*)( pRVar3 + lVar4 + 0x68 ) = *puVar1;
         *(undefined8*)( pRVar3 + lVar4 + 0x68 + 8 ) = uVar2;
         *(undefined8*)( pRVar3 + lVar4 + 0x78 ) = *(undefined8*)( param_4 + 0x18 + lVar4 );
         lVar4 = lVar4 + 0x20;
      } while ( (ulong)param_5 << 5 != lVar4 );
   }
   local_38[1] = 2;
   _add_command_to_graph(param_1, &local_40, (ResourceUsage*)( local_38 + 1 ), 1, local_38[0], pRVar3);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RenderingDeviceGraph::add_driver_callback(void (*)(RenderingDeviceDriver*,
   RenderingDeviceDriver::CommandBufferID, void*), void*,
   VectorView<RenderingDeviceGraph::ResourceTracker*>,
   VectorView<RenderingDeviceGraph::ResourceUsage>) */void RenderingDeviceGraph::add_driver_callback(RenderingDeviceGraph *param_1, undefined8 param_2, undefined8 param_3, ResourceTracker **param_4, uint param_5, undefined8 param_6, ResourceUsage *param_7) {
   RecordedCommand *pRVar1;
   long in_FS_OFFSET;
   int local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pRVar1 = (RecordedCommand*)_allocate_command(param_1, 0x60, &local_44);
   *(undefined4*)pRVar1 = 0xd;
   *(undefined8*)( pRVar1 + 0x50 ) = param_2;
   *(undefined8*)( pRVar1 + 0x58 ) = param_3;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _add_command_to_graph(param_1, param_4, param_7, param_5, local_44, pRVar1);
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RenderingDeviceGraph::add_compute_list_begin(RenderingDeviceCommons::BreadcrumbMarker, unsigned
   int) */void RenderingDeviceGraph::add_compute_list_begin(RenderingDeviceGraph *this, ushort param_2, uint param_3) {
   for (int i = 0; i < 3; i++) {
      if (*(int*)( this + ( 16*i + 328 ) ) != 0) {
         *(undefined4*)( this + ( 16*i + 328 ) ) = 0;
      }
   }
   *(int*)( this + 0x180 ) = *(int*)( this + 0x180 ) + 1;
   *(undefined8*)( this + 0x178 ) = 0;
   *(uint*)( this + 0x184 ) = param_2 | param_3;
   return;
}/* RenderingDeviceGraph::add_compute_list_bind_pipeline(RenderingDeviceDriver::PipelineID) */void RenderingDeviceGraph::add_compute_list_bind_pipeline(RenderingDeviceGraph *this, undefined8 *param_2) {
   undefined8 uVar1;
   undefined4 *puVar2;
   puVar2 = (undefined4*)_allocate_compute_list_instruction(this, 0x10);
   uVar1 = *param_2;
   *puVar2 = 1;
   *(undefined8*)( puVar2 + 2 ) = uVar1;
   *(ulong*)( this + 0x178 ) = *(ulong*)( this + 0x178 ) | 0x800;
   return;
}/* RenderingDeviceGraph::add_compute_list_bind_uniform_set(RenderingDeviceDriver::ShaderID,
   RenderingDeviceDriver::UniformSetID, unsigned int) */void RenderingDeviceGraph::add_compute_list_bind_uniform_set(RenderingDeviceGraph *this, undefined8 *param_2, undefined8 *param_3, undefined4 param_4) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined4 *puVar3;
   uVar1 = *param_2;
   puVar3 = (undefined4*)_allocate_compute_list_instruction(this, 0x20);
   uVar2 = *param_3;
   *puVar3 = 2;
   *(undefined8*)( puVar3 + 2 ) = uVar1;
   puVar3[4] = param_4;
   puVar3[5] = 1;
   *(undefined8*)( puVar3 + 6 ) = uVar2;
   return;
}/* RenderingDeviceGraph::add_compute_list_bind_uniform_sets(RenderingDeviceDriver::ShaderID,
   VectorView<RenderingDeviceDriver::UniformSetID>, unsigned int, unsigned int) */void RenderingDeviceGraph::add_compute_list_bind_uniform_sets(RenderingDeviceGraph *param_1, undefined8 *param_2, long param_3, undefined8 param_4, undefined4 param_5, uint param_6) {
   undefined8 uVar1;
   undefined4 *puVar2;
   long lVar3;
   puVar2 = (undefined4*)_allocate_compute_list_instruction(param_1, param_6 * 8 + 0x18);
   uVar1 = *param_2;
   *puVar2 = 2;
   *(undefined8*)( puVar2 + 2 ) = uVar1;
   puVar2[4] = param_5;
   puVar2[5] = param_6;
   if (param_6 != 0) {
      lVar3 = 0;
      do {
         *(undefined8*)( (long)puVar2 + lVar3 + 0x18 ) = *(undefined8*)( param_3 + lVar3 );
         lVar3 = lVar3 + 8;
      } while ( (ulong)param_6 << 3 != lVar3 );
   }
   return;
}/* RenderingDeviceGraph::add_compute_list_dispatch(unsigned int, unsigned int, unsigned int) */void RenderingDeviceGraph::add_compute_list_dispatch(RenderingDeviceGraph *this, uint param_1, uint param_2, uint param_3) {
   undefined4 *puVar1;
   puVar1 = (undefined4*)_allocate_compute_list_instruction(this, 0x10);
   *puVar1 = 3;
   puVar1[1] = param_1;
   puVar1[2] = param_2;
   puVar1[3] = param_3;
   return;
}/* RenderingDeviceGraph::add_compute_list_dispatch_indirect(RenderingDeviceDriver::BufferID,
   unsigned int) */void RenderingDeviceGraph::add_compute_list_dispatch_indirect(RenderingDeviceGraph *this, undefined8 *param_2, undefined4 param_3) {
   undefined8 uVar1;
   undefined4 *puVar2;
   puVar2 = (undefined4*)_allocate_compute_list_instruction(this, 0x18);
   uVar1 = *param_2;
   *puVar2 = 4;
   *(undefined8*)( puVar2 + 2 ) = uVar1;
   puVar2[4] = param_3;
   *(ulong*)( this + 0x178 ) = *(ulong*)( this + 0x178 ) | 2;
   return;
}/* RenderingDeviceGraph::add_compute_list_set_push_constant(RenderingDeviceDriver::ShaderID, void
   const*, unsigned int) */void RenderingDeviceGraph::add_compute_list_set_push_constant(RenderingDeviceGraph *this, undefined8 *param_2, void *param_3, uint param_4) {
   undefined8 uVar1;
   undefined4 *puVar2;
   puVar2 = (undefined4*)_allocate_compute_list_instruction(this, param_4 + 0x10);
   uVar1 = *param_2;
   *puVar2 = 5;
   *(undefined8*)( puVar2 + 2 ) = uVar1;
   puVar2[1] = param_4;
   memcpy(puVar2 + 4, param_3, (ulong)param_4);
   return;
}/* RenderingDeviceGraph::add_compute_list_uniform_set_prepare_for_use(RenderingDeviceDriver::ShaderID,
   RenderingDeviceDriver::UniformSetID, unsigned int) */void RenderingDeviceGraph::add_compute_list_uniform_set_prepare_for_use(RenderingDeviceGraph *this, undefined8 *param_2, undefined8 *param_3, undefined4 param_4) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined4 *puVar3;
   puVar3 = (undefined4*)_allocate_compute_list_instruction(this, 0x20);
   uVar1 = *param_3;
   *puVar3 = 6;
   uVar2 = *param_2;
   puVar3[6] = param_4;
   *(undefined8*)( puVar3 + 2 ) = uVar1;
   *(undefined8*)( puVar3 + 4 ) = uVar2;
   return;
}/* RenderingDeviceGraph::add_compute_list_usage(RenderingDeviceGraph::ResourceTracker*,
   RenderingDeviceGraph::ResourceUsage) */void RenderingDeviceGraph::add_compute_list_usage(RenderingDeviceGraph *this, long param_1, undefined4 param_3) {
   uint uVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   code *pcVar4;
   int iVar5;
   void *pvVar6;
   ulong uVar7;
   if (*(long*)( this + 0x28 ) == *(long*)( param_1 + 8 )) {
      iVar5 = *(int*)( param_1 + 0x34 );
   } else {
      *(long*)( param_1 + 8 ) = *(long*)( this + 0x28 );
      uVar3 = *(undefined8*)( param_1 + 0x18 );
      *(undefined8*)( param_1 + 0x18 ) = 0;
      *(undefined4*)( param_1 + 0x34 ) = 0xffffffff;
      *(undefined4*)( param_1 + 0x7c ) = 0xffffffff;
      *(undefined1*)( param_1 + 0xa9 ) = 0;
      *(undefined8*)( param_1 + 0x10 ) = uVar3;
      iVar5 = -1;
      for (int i = 0; i < 4; i++) {
         *(undefined4*)( param_1 + ( 4*i + 32 ) ) = 4294967295;
      }
   }
   if (*(int*)( this + 0x180 ) != iVar5) {
      uVar1 = *(uint*)( this + 0x158 );
      pvVar6 = *(void**)( this + 0x160 );
      if (uVar1 == *(uint*)( this + 0x15c )) {
         uVar7 = ( ulong )(uVar1 * 2);
         if (uVar1 * 2 == 0) {
            uVar7 = 1;
         }
         *(int*)( this + 0x15c ) = (int)uVar7;
         pvVar6 = (void*)Memory::realloc_static(pvVar6, uVar7 * 8, false);
         *(void**)( this + 0x160 ) = pvVar6;
         if (pvVar6 == (void*)0x0) goto LAB_001048a0;
         uVar1 = *(uint*)( this + 0x158 );
      }
      *(uint*)( this + 0x158 ) = uVar1 + 1;
      *(long*)( (long)pvVar6 + (ulong)uVar1 * 8 ) = param_1;
      uVar1 = *(uint*)( this + 0x168 );
      pvVar6 = *(void**)( this + 0x170 );
      if (uVar1 == *(uint*)( this + 0x16c )) {
         uVar7 = ( ulong )(uVar1 * 2);
         if (uVar1 * 2 == 0) {
            uVar7 = 1;
         }
         *(int*)( this + 0x16c ) = (int)uVar7;
         pvVar6 = (void*)Memory::realloc_static(pvVar6, uVar7 * 4, false);
         *(void**)( this + 0x170 ) = pvVar6;
         if (pvVar6 == (void*)0x0) {
            LAB_001048a0:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }
         uVar1 = *(uint*)( this + 0x168 );
      }
      *(uint*)( this + 0x168 ) = uVar1 + 1;
      uVar2 = *(undefined4*)( this + 0x180 );
      *(undefined4*)( (long)pvVar6 + (ulong)uVar1 * 4 ) = param_3;
      *(undefined4*)( param_1 + 0x34 ) = uVar2;
      *(undefined4*)( param_1 + 0x38 ) = param_3;
   }
   return;
}/* RenderingDeviceGraph::add_compute_list_usages(VectorView<RenderingDeviceGraph::ResourceTracker*>,
   VectorView<RenderingDeviceGraph::ResourceUsage>) */void RenderingDeviceGraph::add_compute_list_usages(RenderingDeviceGraph *param_1, undefined8 *param_2, uint param_3, undefined4 *param_4) {
   undefined4 *puVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   if (param_3 != 0) {
      puVar1 = param_4 + param_3;
      do {
         uVar2 = *param_4;
         uVar3 = *param_2;
         param_4 = param_4 + 1;
         param_2 = param_2 + 1;
         add_compute_list_usage(param_1, uVar3, uVar2);
      } while ( param_4 != puVar1 );
      return;
   }
   return;
}/* RenderingDeviceGraph::add_compute_list_end() */void RenderingDeviceGraph::add_compute_list_end(RenderingDeviceGraph *this) {
   uint uVar1;
   void *__src;
   undefined8 uVar2;
   RecordedCommand *pRVar3;
   long in_FS_OFFSET;
   int local_24;
   long local_20;
   uVar1 = *(uint*)( this + 0x148 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   pRVar3 = (RecordedCommand*)_allocate_command(this, uVar1 + 0x58, &local_24);
   __src = *(void**)( this + 0x150 );
   *(undefined4*)pRVar3 = 5;
   uVar2 = *(undefined8*)( this + 0x178 );
   *(uint*)( pRVar3 + 0x50 ) = uVar1;
   *(undefined8*)( pRVar3 + 0x48 ) = uVar2;
   memcpy(pRVar3 + 0x58, __src, (ulong)uVar1);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _add_command_to_graph(this, *(ResourceTracker***)( this + 0x160 ), *(ResourceUsage**)( this + 0x170 ), *(uint*)( this + 0x158 ), local_24, pRVar3);
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RenderingDeviceGraph::add_draw_list_begin(RenderingDeviceGraph::FramebufferCache*, Rect2i,
   VectorView<RenderingDeviceGraph::AttachmentOperation>,
   VectorView<RenderingDeviceDriver::RenderPassClearValue>, bool, bool, unsigned int, bool) */void RenderingDeviceGraph::add_draw_list_begin(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined1 param_9, undefined1 param_10, undefined4 param_11, undefined1 param_12) {
   long in_FS_OFFSET;
   undefined8 local_20;
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_18 = 0;
   local_20 = 0;
   _add_draw_list_begin(param_1, param_2, &local_20, &local_18, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10, param_11, param_12);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RenderingDeviceGraph::add_draw_list_begin(RenderingDeviceDriver::RenderPassID,
   RenderingDeviceDriver::FramebufferID, Rect2i,
   VectorView<RenderingDeviceGraph::AttachmentOperation>,
   VectorView<RenderingDeviceDriver::RenderPassClearValue>, bool, bool, unsigned int, bool) */void RenderingDeviceGraph::add_draw_list_begin(undefined8 param_1, undefined8 *param_2, undefined8 *param_3, undefined8 param_4, undefined8 param_5, undefined1 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined1 param_11, undefined4 param_12, undefined1 param_13) {
   long in_FS_OFFSET;
   undefined8 local_20;
   undefined8 local_18;
   long local_10;
   local_18 = *param_3;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_20 = *param_2;
   _add_draw_list_begin(param_1, 0, &local_20, &local_18, param_4, param_5, param_7, param_8, param_9, param_10, param_6, param_11, param_12, param_13);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RenderingDeviceGraph::add_draw_list_bind_index_buffer(RenderingDeviceDriver::BufferID,
   RenderingDeviceCommons::IndexBufferFormat, unsigned int) */void RenderingDeviceGraph::add_draw_list_bind_index_buffer(RenderingDeviceGraph *this, long *param_2, undefined4 param_3, undefined4 param_4) {
   long lVar1;
   undefined4 *puVar2;
   puVar2 = (undefined4*)_allocate_draw_list_instruction(this, 0x18);
   lVar1 = *param_2;
   *puVar2 = 1;
   *(long*)( puVar2 + 2 ) = lVar1;
   puVar2[4] = param_3;
   puVar2[5] = param_4;
   if (lVar1 != 0) {
      *(ulong*)( this + 0xe8 ) = *(ulong*)( this + 0xe8 ) | 4;
   }
   return;
}/* RenderingDeviceGraph::add_draw_list_bind_pipeline(RenderingDeviceDriver::PipelineID,
   BitField<RenderingDeviceDriver::PipelineStageBits>) */void RenderingDeviceGraph::add_draw_list_bind_pipeline(RenderingDeviceGraph *this, undefined8 *param_2, ulong param_3) {
   undefined8 uVar1;
   undefined4 *puVar2;
   puVar2 = (undefined4*)_allocate_draw_list_instruction(this, 0x10);
   uVar1 = *param_2;
   *puVar2 = 2;
   *(undefined8*)( puVar2 + 2 ) = uVar1;
   *(ulong*)( this + 0xe8 ) = *(ulong*)( this + 0xe8 ) | param_3;
   return;
}/* RenderingDeviceGraph::add_draw_list_bind_uniform_set(RenderingDeviceDriver::ShaderID,
   RenderingDeviceDriver::UniformSetID, unsigned int) */void RenderingDeviceGraph::add_draw_list_bind_uniform_set(RenderingDeviceGraph *this, undefined8 *param_2, undefined8 *param_3, undefined4 param_4) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined4 *puVar3;
   uVar1 = *param_2;
   puVar3 = (undefined4*)_allocate_draw_list_instruction(this, 0x20);
   uVar2 = *param_3;
   *puVar3 = 3;
   *(undefined8*)( puVar3 + 2 ) = uVar1;
   puVar3[4] = param_4;
   puVar3[5] = 1;
   *(undefined8*)( puVar3 + 6 ) = uVar2;
   return;
}/* RenderingDeviceGraph::add_draw_list_bind_uniform_sets(RenderingDeviceDriver::ShaderID,
   VectorView<RenderingDeviceDriver::UniformSetID>, unsigned int, unsigned int) */void RenderingDeviceGraph::add_draw_list_bind_uniform_sets(RenderingDeviceGraph *param_1, undefined8 *param_2, long param_3, undefined8 param_4, undefined4 param_5, uint param_6) {
   undefined8 uVar1;
   undefined4 *puVar2;
   long lVar3;
   puVar2 = (undefined4*)_allocate_draw_list_instruction(param_1, param_6 * 8 + 0x18);
   uVar1 = *param_2;
   *puVar2 = 3;
   *(undefined8*)( puVar2 + 2 ) = uVar1;
   puVar2[4] = param_5;
   puVar2[5] = param_6;
   if (param_6 != 0) {
      lVar3 = 0;
      do {
         *(undefined8*)( (long)puVar2 + lVar3 + 0x18 ) = *(undefined8*)( param_3 + lVar3 );
         lVar3 = lVar3 + 8;
      } while ( (ulong)param_6 << 3 != lVar3 );
   }
   return;
}/* RenderingDeviceGraph::add_draw_list_bind_vertex_buffers(VectorView<RenderingDeviceDriver::BufferID>,
   VectorView<unsigned long>) */void RenderingDeviceGraph::add_draw_list_bind_vertex_buffers(RenderingDeviceGraph *param_1, long param_2, uint param_3, long param_4, int param_5) {
   undefined4 *puVar1;
   long lVar2;
   puVar1 = (undefined4*)_allocate_draw_list_instruction(param_1, ( param_3 + 1 + param_5 ) * 8);
   *puVar1 = 4;
   puVar1[1] = param_3;
   if (param_3 != 0) {
      lVar2 = 0;
      do {
         *(undefined8*)( (long)puVar1 + lVar2 + 8 ) = *(undefined8*)( param_2 + lVar2 );
         *(undefined8*)( (long)puVar1 + lVar2 + (ulong)param_3 * 8 + 8 ) = *(undefined8*)( param_4 + lVar2 );
         lVar2 = lVar2 + 8;
      } while ( (ulong)param_3 * 8 - lVar2 != 0 );
      *(ulong*)( param_1 + 0xe8 ) = *(ulong*)( param_1 + 0xe8 ) | 4;
   }
   return;
}/* RenderingDeviceGraph::add_draw_list_clear_attachments(VectorView<RenderingDeviceDriver::AttachmentClear>,
   VectorView<Rect2i>) */void RenderingDeviceGraph::add_draw_list_clear_attachments(RenderingDeviceGraph *param_1, long param_2, uint param_3, long param_4, uint param_5) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   undefined4 *puVar4;
   long lVar5;
   puVar4 = (undefined4*)_allocate_draw_list_instruction(param_1, ( param_5 + param_3 * 2 ) * 0x10 + 0xc);
   *puVar4 = 5;
   puVar4[1] = param_3;
   puVar4[2] = param_5;
   if (param_3 != 0) {
      lVar5 = 0;
      do {
         uVar3 = ( (undefined8*)( param_2 + lVar5 ) )[1];
         puVar1 = (undefined8*)( (long)puVar4 + lVar5 + 0xc );
         *puVar1 = *(undefined8*)( param_2 + lVar5 );
         puVar1[1] = uVar3;
         puVar1 = (undefined8*)( param_2 + 0xc + lVar5 );
         uVar3 = puVar1[1];
         puVar2 = (undefined8*)( (long)puVar4 + lVar5 + 0x18 );
         *puVar2 = *puVar1;
         puVar2[1] = uVar3;
         lVar5 = lVar5 + 0x20;
      } while ( (ulong)param_3 * 0x20 != lVar5 );
   }
   if (param_5 != 0) {
      lVar5 = 0;
      do {
         uVar3 = ( (undefined8*)( param_4 + lVar5 ) )[1];
         puVar1 = (undefined8*)( (long)puVar4 + lVar5 + (ulong)param_3 * 0x20 + 0xc );
         *puVar1 = *(undefined8*)( param_4 + lVar5 );
         puVar1[1] = uVar3;
         lVar5 = lVar5 + 0x10;
      } while ( (ulong)param_5 << 4 != lVar5 );
   }
   return;
}/* RenderingDeviceGraph::add_draw_list_draw(unsigned int, unsigned int) */void RenderingDeviceGraph::add_draw_list_draw(RenderingDeviceGraph *this, uint param_1, uint param_2) {
   undefined4 *puVar1;
   puVar1 = (undefined4*)_allocate_draw_list_instruction(this, 0xc);
   *puVar1 = 6;
   puVar1[1] = param_1;
   puVar1[2] = param_2;
   return;
}/* RenderingDeviceGraph::add_draw_list_draw_indexed(unsigned int, unsigned int, unsigned int) */void RenderingDeviceGraph::add_draw_list_draw_indexed(RenderingDeviceGraph *this, uint param_1, uint param_2, uint param_3) {
   undefined4 *puVar1;
   puVar1 = (undefined4*)_allocate_draw_list_instruction(this, 0x10);
   *puVar1 = 7;
   puVar1[1] = param_1;
   puVar1[2] = param_2;
   puVar1[3] = param_3;
   return;
}/* RenderingDeviceGraph::add_draw_list_draw_indirect(RenderingDeviceDriver::BufferID, unsigned int,
   unsigned int, unsigned int) */void RenderingDeviceGraph::add_draw_list_draw_indirect(RenderingDeviceGraph *this, undefined8 *param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5) {
   undefined8 uVar1;
   undefined4 *puVar2;
   puVar2 = (undefined4*)_allocate_draw_list_instruction(this, 0x20);
   uVar1 = *param_2;
   *puVar2 = 8;
   *(undefined8*)( puVar2 + 2 ) = uVar1;
   puVar2[4] = param_3;
   puVar2[5] = param_4;
   puVar2[6] = param_5;
   *(ulong*)( this + 0xe8 ) = *(ulong*)( this + 0xe8 ) | 2;
   return;
}/* RenderingDeviceGraph::add_draw_list_draw_indexed_indirect(RenderingDeviceDriver::BufferID,
   unsigned int, unsigned int, unsigned int) */void RenderingDeviceGraph::add_draw_list_draw_indexed_indirect(RenderingDeviceGraph *this, undefined8 *param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5) {
   undefined8 uVar1;
   undefined4 *puVar2;
   puVar2 = (undefined4*)_allocate_draw_list_instruction(this, 0x20);
   uVar1 = *param_2;
   *puVar2 = 9;
   *(undefined8*)( puVar2 + 2 ) = uVar1;
   puVar2[4] = param_3;
   puVar2[5] = param_4;
   puVar2[6] = param_5;
   *(ulong*)( this + 0xe8 ) = *(ulong*)( this + 0xe8 ) | 2;
   return;
}/* RenderingDeviceGraph::add_draw_list_execute_commands(RenderingDeviceDriver::CommandBufferID) */void RenderingDeviceGraph::add_draw_list_execute_commands(RenderingDeviceGraph *this, undefined8 *param_2) {
   undefined8 uVar1;
   undefined4 *puVar2;
   puVar2 = (undefined4*)_allocate_draw_list_instruction(this, 0x10);
   uVar1 = *param_2;
   *puVar2 = 10;
   *(undefined8*)( puVar2 + 2 ) = uVar1;
   return;
}/* RenderingDeviceGraph::add_draw_list_next_subpass(RenderingDeviceDriver::CommandBufferType) */void RenderingDeviceGraph::add_draw_list_next_subpass(RenderingDeviceGraph *this, undefined4 param_2) {
   undefined4 *puVar1;
   puVar1 = (undefined4*)_allocate_draw_list_instruction(this, 8);
   *puVar1 = 0xb;
   puVar1[1] = param_2;
   return;
}/* RenderingDeviceGraph::add_draw_list_set_blend_constants(Color const&) */void RenderingDeviceGraph::add_draw_list_set_blend_constants(RenderingDeviceGraph *this, Color *param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined4 *puVar3;
   puVar3 = (undefined4*)_allocate_draw_list_instruction(this, 0x14);
   uVar1 = *(undefined8*)param_1;
   uVar2 = *(undefined8*)( param_1 + 8 );
   *puVar3 = 0xc;
   *(undefined8*)( puVar3 + 1 ) = uVar1;
   *(undefined8*)( puVar3 + 3 ) = uVar2;
   return;
}/* RenderingDeviceGraph::add_draw_list_set_line_width(float) */void RenderingDeviceGraph::add_draw_list_set_line_width(RenderingDeviceGraph *this, float param_1) {
   undefined4 *puVar1;
   puVar1 = (undefined4*)_allocate_draw_list_instruction(this, 8);
   *puVar1 = 0xd;
   puVar1[1] = param_1;
   return;
}/* RenderingDeviceGraph::add_draw_list_set_push_constant(RenderingDeviceDriver::ShaderID, void
   const*, unsigned int) */void RenderingDeviceGraph::add_draw_list_set_push_constant(RenderingDeviceGraph *this, undefined8 *param_2, void *param_3, uint param_4) {
   undefined8 uVar1;
   undefined4 *puVar2;
   puVar2 = (undefined4*)_allocate_draw_list_instruction(this, param_4 + 0x10);
   uVar1 = *param_2;
   *puVar2 = 0xe;
   *(undefined8*)( puVar2 + 2 ) = uVar1;
   puVar2[1] = param_4;
   memcpy(puVar2 + 4, param_3, (ulong)param_4);
   return;
}/* RenderingDeviceGraph::add_draw_list_set_scissor(Rect2i) */void RenderingDeviceGraph::add_draw_list_set_scissor(RenderingDeviceGraph *param_1, undefined8 param_2, undefined8 param_3) {
   undefined4 *puVar1;
   puVar1 = (undefined4*)_allocate_draw_list_instruction(param_1, 0x14);
   *puVar1 = 0xf;
   *(undefined8*)( puVar1 + 1 ) = param_2;
   *(undefined8*)( puVar1 + 3 ) = param_3;
   return;
}/* RenderingDeviceGraph::add_draw_list_set_viewport(Rect2i) */void RenderingDeviceGraph::add_draw_list_set_viewport(RenderingDeviceGraph *param_1, undefined8 param_2, undefined8 param_3) {
   undefined4 *puVar1;
   puVar1 = (undefined4*)_allocate_draw_list_instruction(param_1, 0x14);
   *puVar1 = 0x10;
   *(undefined8*)( puVar1 + 1 ) = param_2;
   *(undefined8*)( puVar1 + 3 ) = param_3;
   return;
}/* RenderingDeviceGraph::add_draw_list_uniform_set_prepare_for_use(RenderingDeviceDriver::ShaderID,
   RenderingDeviceDriver::UniformSetID, unsigned int) */void RenderingDeviceGraph::add_draw_list_uniform_set_prepare_for_use(RenderingDeviceGraph *this, undefined8 *param_2, undefined8 *param_3, undefined4 param_4) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined4 *puVar3;
   puVar3 = (undefined4*)_allocate_draw_list_instruction(this, 0x20);
   uVar1 = *param_3;
   *puVar3 = 0x11;
   uVar2 = *param_2;
   puVar3[6] = param_4;
   *(undefined8*)( puVar3 + 2 ) = uVar1;
   *(undefined8*)( puVar3 + 4 ) = uVar2;
   return;
}/* RenderingDeviceGraph::add_draw_list_usage(RenderingDeviceGraph::ResourceTracker*,
   RenderingDeviceGraph::ResourceUsage) */void RenderingDeviceGraph::add_draw_list_usage(RenderingDeviceGraph *this, long param_1, undefined4 param_3) {
   uint uVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   code *pcVar4;
   int iVar5;
   void *pvVar6;
   ulong uVar7;
   if (*(long*)( this + 0x28 ) == *(long*)( param_1 + 8 )) {
      iVar5 = *(int*)( param_1 + 0x2c );
   } else {
      *(long*)( param_1 + 8 ) = *(long*)( this + 0x28 );
      uVar3 = *(undefined8*)( param_1 + 0x18 );
      *(undefined8*)( param_1 + 0x18 ) = 0;
      *(undefined4*)( param_1 + 0x34 ) = 0xffffffff;
      *(undefined4*)( param_1 + 0x7c ) = 0xffffffff;
      *(undefined1*)( param_1 + 0xa9 ) = 0;
      *(undefined8*)( param_1 + 0x10 ) = uVar3;
      iVar5 = -1;
      for (int i = 0; i < 4; i++) {
         *(undefined4*)( param_1 + ( 4*i + 32 ) ) = 4294967295;
      }
   }
   if (*(int*)( this + 0xf0 ) != iVar5) {
      uVar1 = *(uint*)( this + 200 );
      pvVar6 = *(void**)( this + 0xd0 );
      if (uVar1 == *(uint*)( this + 0xcc )) {
         uVar7 = ( ulong )(uVar1 * 2);
         if (uVar1 * 2 == 0) {
            uVar7 = 1;
         }
         *(int*)( this + 0xcc ) = (int)uVar7;
         pvVar6 = (void*)Memory::realloc_static(pvVar6, uVar7 * 8, false);
         *(void**)( this + 0xd0 ) = pvVar6;
         if (pvVar6 == (void*)0x0) goto LAB_00105160;
         uVar1 = *(uint*)( this + 200 );
      }
      *(uint*)( this + 200 ) = uVar1 + 1;
      *(long*)( (long)pvVar6 + (ulong)uVar1 * 8 ) = param_1;
      uVar1 = *(uint*)( this + 0xd8 );
      pvVar6 = *(void**)( this + 0xe0 );
      if (uVar1 == *(uint*)( this + 0xdc )) {
         uVar7 = ( ulong )(uVar1 * 2);
         if (uVar1 * 2 == 0) {
            uVar7 = 1;
         }
         *(int*)( this + 0xdc ) = (int)uVar7;
         pvVar6 = (void*)Memory::realloc_static(pvVar6, uVar7 * 4, false);
         *(void**)( this + 0xe0 ) = pvVar6;
         if (pvVar6 == (void*)0x0) {
            LAB_00105160:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }
         uVar1 = *(uint*)( this + 0xd8 );
      }
      *(uint*)( this + 0xd8 ) = uVar1 + 1;
      uVar2 = *(undefined4*)( this + 0xf0 );
      *(undefined4*)( (long)pvVar6 + (ulong)uVar1 * 4 ) = param_3;
      *(undefined4*)( param_1 + 0x2c ) = uVar2;
      *(undefined4*)( param_1 + 0x30 ) = param_3;
   }
   return;
}/* RenderingDeviceGraph::add_draw_list_usages(VectorView<RenderingDeviceGraph::ResourceTracker*>,
   VectorView<RenderingDeviceGraph::ResourceUsage>) */void RenderingDeviceGraph::add_draw_list_usages(RenderingDeviceGraph *param_1, undefined8 *param_2, uint param_3, undefined4 *param_4) {
   undefined4 *puVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   if (param_3 != 0) {
      puVar1 = param_4 + param_3;
      do {
         uVar2 = *param_4;
         uVar3 = *param_2;
         param_4 = param_4 + 1;
         param_2 = param_2 + 1;
         add_draw_list_usage(param_1, uVar3, uVar2);
      } while ( param_4 != puVar1 );
      return;
   }
   return;
}/* RenderingDeviceGraph::add_draw_list_end() */void RenderingDeviceGraph::add_draw_list_end(RenderingDeviceGraph *this) {
   RecordedCommand RVar1;
   byte bVar2;
   uint uVar3;
   uint uVar4;
   undefined4 uVar5;
   uint uVar6;
   uint uVar7;
   long lVar8;
   undefined8 uVar9;
   long lVar10;
   code *pcVar11;
   undefined8 uVar12;
   undefined8 uVar13;
   undefined8 uVar14;
   int iVar15;
   RecordedCommand *pRVar16;
   long lVar17;
   uint uVar18;
   ulong uVar19;
   uint uVar20;
   long lVar21;
   long lVar22;
   long lVar23;
   uint uVar24;
   long in_FS_OFFSET;
   long local_68;
   int local_44;
   long local_40;
   lVar8 = *(long*)( this + 0xf8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar15 = *(int*)( this + 0x130 );
   if (lVar8 == 0) {
      local_68 = 0;
      lVar23 = 0;
      uVar24 = 0;
   } else {
      uVar24 = *(uint*)( lVar8 + 0x18 );
      local_68 = (ulong)uVar24 * 4;
      iVar15 = iVar15 + uVar24;
      lVar23 = (ulong)uVar24 << 3;
   }
   uVar3 = *(uint*)( this + 0xb8 );
   pRVar16 = (RecordedCommand*)_allocate_command(this, uVar3 + 0x90 + iVar15 * 0x10, &local_44);
   uVar4 = *(uint*)( this + 0x130 );
   *(undefined4*)pRVar16 = 6;
   uVar9 = *(undefined8*)( this + 0xe8 );
   uVar13 = *(undefined8*)( this + 0x110 );
   uVar14 = *(undefined8*)( this + 0x118 );
   *(long*)( pRVar16 + 0x50 ) = lVar8;
   *(undefined8*)( pRVar16 + 0x48 ) = uVar9;
   uVar5 = *(undefined4*)( this + 0x140 );
   uVar9 = *(undefined8*)( this + 0x100 );
   uVar12 = *(undefined8*)( this + 0x108 );
   *(uint*)( pRVar16 + 0x68 ) = uVar3;
   *(undefined4*)( pRVar16 + 0x88 ) = uVar5;
   RVar1 = *(RecordedCommand*)( this + 0x144 );
   *(undefined8*)( pRVar16 + 0x58 ) = uVar12;
   *(undefined8*)( pRVar16 + 0x60 ) = uVar9;
   lVar22 = (ulong)uVar4 * 0x10;
   pRVar16[0x8c] = RVar1;
   lVar23 = lVar22 + 0x90 + lVar23;
   lVar17 = lVar23 + local_68;
   *(undefined4*)( pRVar16 + 0x6c ) = 0;
   *(ulong*)( pRVar16 + 0x80 ) = CONCAT44(uVar24, uVar4);
   uVar6 = *(uint*)( this + 0x120 );
   *(undefined8*)( pRVar16 + 0x70 ) = uVar13;
   *(undefined8*)( pRVar16 + 0x78 ) = uVar14;
   if (uVar24 != 0) {
      uVar7 = *(uint*)( lVar8 + 0x18 );
      uVar19 = 0;
      do {
         if (uVar19 == uVar7) {
            _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar19, uVar19, "p_index", "count", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar11 = (code*)invalidInstructionException();
            ( *pcVar11 )();
         }
         lVar10 = *(long*)( *(long*)( lVar8 + 0x20 ) + uVar19 * 8 );
         if (lVar10 == 0) {
            iVar15 = 2;
            uVar18 = 1;
         } else {
            bVar2 = *(byte*)( lVar10 + 0xaa );
            uVar20 = (uint)bVar2;
            uVar18 = (uint)uVar19;
            if (uVar18 < uVar4) {
               if (uVar18 < uVar6) {
                  iVar15 = *(int*)( *(long*)( this + 0x128 ) + uVar19 * 4 );
                  uVar18 = uVar20;
                  if (iVar15 != 1) goto LAB_00105355;
                  goto LAB_001053b0;
               }
            } else if (uVar18 < uVar6) {
               iVar15 = *(int*)( *(long*)( this + 0x128 ) + uVar19 * 4 );
               LAB_00105355:uVar18 = (uint)bVar2;
               if (iVar15 == 2) goto LAB_001053b0;
            }
            iVar15 = 0;
            uVar18 = (uint)bVar2;
            if (bVar2 != 0) {
               lVar21 = *(long*)( lVar10 + 0x80 );
               if (*(long*)( lVar10 + 0x80 ) == 0) {
                  lVar21 = lVar10;
               }
               if (*(long*)( this + 0x28 ) == *(long*)( lVar21 + 8 )) {
                  iVar15 = ( *(int*)( lVar21 + 0x28 ) >> 0x1f ) * -2;
                  uVar18 = uVar20;
               } else {
                  *(long*)( lVar21 + 8 ) = *(long*)( this + 0x28 );
                  *(undefined4*)( lVar21 + 0x34 ) = 0xffffffff;
                  *(undefined8*)( lVar21 + 0x10 ) = *(undefined8*)( lVar21 + 0x18 );
                  *(undefined8*)( lVar21 + 0x18 ) = 0;
                  *(undefined4*)( lVar21 + 0x7c ) = 0xffffffff;
                  *(undefined1*)( lVar21 + 0xa9 ) = 0;
                  for (int i = 0; i < 4; i++) {
                     *(undefined4*)( lVar21 + ( 4*i + 32 ) ) = 4294967295;
                  }
                  iVar15 = 2;
                  uVar18 = uVar20;
               }
            }
         }
         LAB_001053b0:*(int*)( pRVar16 + uVar19 * 4 + lVar23 ) = iVar15;
         *(uint*)( pRVar16 + uVar19 * 4 + lVar17 ) = uVar18;
         *(long*)( pRVar16 + uVar19 * 8 + lVar22 + 0x90 ) = lVar10;
         uVar19 = uVar19 + 1;
      } while ( uVar24 != uVar19 );
   }
   if (uVar4 != 0) {
      lVar8 = *(long*)( this + 0x138 );
      lVar23 = 0;
      do {
         uVar9 = ( (undefined8*)( lVar8 + lVar23 ) )[1];
         *(undefined8*)( pRVar16 + lVar23 + 0x90 ) = *(undefined8*)( lVar8 + lVar23 );
         *(undefined8*)( pRVar16 + lVar23 + 0x90 + 8 ) = uVar9;
         lVar23 = lVar23 + 0x10;
      } while ( lVar22 != lVar23 );
   }
   memcpy(pRVar16 + local_68 + lVar17, *(void**)( this + 0xc0 ), (ulong)uVar3);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   _add_command_to_graph(this, *(ResourceTracker***)( this + 0xd0 ), *(ResourceUsage**)( this + 0xe0 ), *(uint*)( this + 200 ), local_44, pRVar16);
   return;
}/* RenderingDeviceGraph::add_texture_clear(RenderingDeviceDriver::TextureID,
   RenderingDeviceGraph::ResourceTracker*, Color const&,
   RenderingDeviceDriver::TextureSubresourceRange const&) */void RenderingDeviceGraph::add_texture_clear(RenderingDeviceGraph *this, undefined8 *param_2, ResourceTracker *param_3, undefined8 *param_4, undefined8 *param_5) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   RecordedCommand *pRVar6;
   long lVar7;
   long in_FS_OFFSET;
   ResourceTracker *local_40;
   int local_38;
   int local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = param_3;
   pRVar6 = (RecordedCommand*)_allocate_command(this, 0x80, &local_38);
   uVar2 = *param_5;
   uVar3 = param_5[1];
   uVar4 = *param_4;
   uVar5 = param_4[1];
   *(undefined4*)pRVar6 = 7;
   uVar1 = *param_2;
   *(undefined8*)( pRVar6 + 0x58 ) = uVar2;
   *(undefined8*)( pRVar6 + 0x60 ) = uVar3;
   *(undefined8*)( pRVar6 + 0x50 ) = uVar1;
   uVar1 = param_5[2];
   *(undefined8*)( pRVar6 + 0x70 ) = uVar4;
   *(undefined8*)( pRVar6 + 0x78 ) = uVar5;
   *(undefined8*)( pRVar6 + 0x68 ) = uVar1;
   if (( (byte)this[0x220] & 2 ) == 0) {
      lVar7 = ( ulong )(-(uint)((*(uint *)(local_40 + 0x78) & 2) == 0) & 0x1fc00) + 0x400;
      local_34 = 0x10 - ( uint )(( *(uint*)( local_40 + 0x78 ) & 2 ) == 0);
   } else {
      lVar7 = 0x1000;
      local_34 = 2;
   }
   *(long*)( pRVar6 + 0x48 ) = lVar7;
   _add_command_to_graph(this, &local_40, (ResourceUsage*)&local_34, 1, local_38, pRVar6);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RenderingDeviceGraph::add_texture_copy(RenderingDeviceDriver::TextureID,
   RenderingDeviceGraph::ResourceTracker*, RenderingDeviceDriver::TextureID,
   RenderingDeviceGraph::ResourceTracker*, VectorView<RenderingDeviceDriver::TextureCopyRegion>) */void RenderingDeviceGraph::add_texture_copy(RenderingDeviceGraph *param_1, undefined8 *param_2, undefined8 param_3, undefined8 *param_4, ResourceTracker *param_5, undefined8 param_6, long param_7, uint param_8) {
   undefined8 *puVar1;
   undefined8 uVar2;
   RecordedCommand *pRVar3;
   long lVar4;
   long in_FS_OFFSET;
   int local_64;
   undefined8 local_60;
   ResourceTracker *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pRVar3 = (RecordedCommand*)_allocate_command(param_1, (int)( (ulong)param_8 * 0x58 ) + 0x68, &local_64);
   *(undefined4*)pRVar3 = 8;
   *(undefined8*)( pRVar3 + 0x48 ) = 0x1000;
   *(undefined8*)( pRVar3 + 0x50 ) = *param_2;
   uVar2 = *param_4;
   *(uint*)( pRVar3 + 0x60 ) = param_8;
   *(undefined8*)( pRVar3 + 0x58 ) = uVar2;
   if (param_8 != 0) {
      lVar4 = 0;
      do {
         uVar2 = ( (undefined8*)( param_7 + lVar4 ) )[1];
         *(undefined8*)( pRVar3 + lVar4 + 0x68 ) = *(undefined8*)( param_7 + lVar4 );
         *(undefined8*)( pRVar3 + lVar4 + 0x68 + 8 ) = uVar2;
         for (int i = 0; i < 4; i++) {
            puVar1 = (undefined8*)( param_7 + ( 16*i + 16 ) + lVar4 );
            uVar2 = puVar1[1];
            *(undefined8*)( pRVar3 + lVar4 + ( 16*i + 120 ) ) = *puVar1;
            *(undefined8*)( pRVar3 + lVar4 + ( 16*i + 120 ) + 8 ) = uVar2;
         }
         *(undefined8*)( pRVar3 + lVar4 + 0xb8 ) = *(undefined8*)( param_7 + 0x50 + lVar4 );
         lVar4 = lVar4 + 0x58;
      } while ( (ulong)param_8 * 0x58 != lVar4 );
   }
   local_60 = _LC32;
   local_58 = param_5;
   local_50 = param_3;
   _add_command_to_graph(param_1, &local_58, (ResourceUsage*)&local_60, 2, local_64, pRVar3);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Type propagation algorithm not settling *//* RenderingDeviceGraph::add_texture_get_data(RenderingDeviceDriver::TextureID,
   RenderingDeviceGraph::ResourceTracker*, RenderingDeviceDriver::BufferID,
   VectorView<RenderingDeviceDriver::BufferTextureCopyRegion>,
   RenderingDeviceGraph::ResourceTracker*) */void RenderingDeviceGraph::add_texture_get_data(RenderingDeviceGraph *param_1, undefined8 *param_2, ResourceTracker *param_3, undefined8 *param_4, long param_5, uint param_6, ResourceTracker *param_7) {
   undefined8 *puVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   RecordedCommand *pRVar4;
   long lVar5;
   long in_FS_OFFSET;
   ResourceTracker *local_70;
   int local_68[2];
   undefined8 local_60;
   ResourceTracker *local_58;
   ResourceTracker *pRStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = param_3;
   pRVar4 = (RecordedCommand*)_allocate_command(param_1, (int)( (ulong)param_6 * 0x38 ) + 0x68, local_68);
   uVar2 = *param_2;
   *(undefined4*)pRVar4 = 9;
   uVar3 = *param_4;
   *(undefined8*)( pRVar4 + 0x48 ) = 0x1000;
   *(uint*)( pRVar4 + 0x60 ) = param_6;
   *(undefined8*)( pRVar4 + 0x50 ) = uVar2;
   *(undefined8*)( pRVar4 + 0x58 ) = uVar3;
   lVar5 = 0;
   if (param_6 != 0) {
      do {
         uVar2 = ( (undefined8*)( param_5 + lVar5 ) )[1];
         *(undefined8*)( pRVar4 + lVar5 + 0x68 ) = *(undefined8*)( param_5 + lVar5 );
         *(undefined8*)( pRVar4 + lVar5 + 0x68 + 8 ) = uVar2;
         puVar1 = (undefined8*)( param_5 + 0x10 + lVar5 );
         uVar2 = puVar1[1];
         *(undefined8*)( pRVar4 + lVar5 + 0x78 ) = *puVar1;
         *(undefined8*)( pRVar4 + lVar5 + 0x78 + 8 ) = uVar2;
         puVar1 = (undefined8*)( param_5 + 0x20 + lVar5 );
         uVar2 = puVar1[1];
         *(undefined8*)( pRVar4 + lVar5 + 0x88 ) = *puVar1;
         *(undefined8*)( pRVar4 + lVar5 + 0x88 + 8 ) = uVar2;
         *(undefined8*)( pRVar4 + lVar5 + 0x98 ) = *(undefined8*)( param_5 + 0x30 + lVar5 );
         lVar5 = lVar5 + 0x38;
      } while ( (ulong)param_6 * 0x38 != lVar5 );
   }
   if (param_7 == (ResourceTracker*)0x0) {
      local_68[1] = 1;
      _add_command_to_graph(param_1, &local_70, (ResourceUsage*)( local_68 + 1 ), 1, local_68[0], pRVar4);
   } else {
      local_60 = _LC32;
      local_58 = param_7;
      pRStack_50 = local_70;
      _add_command_to_graph(param_1, &local_58, (ResourceUsage*)&local_60, 2, local_68[0], pRVar4);
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RenderingDeviceGraph::add_texture_resolve(RenderingDeviceDriver::TextureID,
   RenderingDeviceGraph::ResourceTracker*, RenderingDeviceDriver::TextureID,
   RenderingDeviceGraph::ResourceTracker*, unsigned int, unsigned int, unsigned int, unsigned int)
    */void RenderingDeviceGraph::add_texture_resolve(RenderingDeviceGraph *this, undefined8 *param_2, undefined8 param_3, undefined8 *param_4, ResourceTracker *param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9) {
   undefined8 uVar1;
   RecordedCommand *pRVar2;
   long in_FS_OFFSET;
   int local_54;
   undefined8 local_50;
   ResourceTracker *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pRVar2 = (RecordedCommand*)_allocate_command(this, 0x70, &local_54);
   *(undefined4*)pRVar2 = 10;
   *(undefined8*)( pRVar2 + 0x48 ) = 0x4000;
   *(undefined8*)( pRVar2 + 0x50 ) = *param_2;
   uVar1 = *param_4;
   *(ulong*)( pRVar2 + 0x60 ) = CONCAT44(param_7, param_6);
   *(ulong*)( pRVar2 + 0x68 ) = CONCAT44(param_9, param_8);
   *(undefined8*)( pRVar2 + 0x58 ) = uVar1;
   local_50 = _LC33;
   local_48 = param_5;
   local_40 = param_3;
   _add_command_to_graph(this, &local_48, (ResourceUsage*)&local_50, 2, local_54, pRVar2);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RenderingDeviceGraph::add_texture_update(RenderingDeviceDriver::TextureID,
   RenderingDeviceGraph::ResourceTracker*,
   VectorView<RenderingDeviceGraph::RecordedBufferToTextureCopy>,
   VectorView<RenderingDeviceGraph::ResourceTracker*>) */void RenderingDeviceGraph::add_texture_update(RenderingDeviceGraph *param_1, undefined8 *param_2, ResourceTracker *param_3, long param_4, uint param_5, undefined8 param_6, undefined8 *param_7, uint param_8) {
   undefined8 *puVar1;
   undefined8 uVar2;
   ResourceTracker *pRVar3;
   code *pcVar4;
   RecordedCommand *pRVar5;
   long lVar6;
   ulong uVar7;
   ResourceTracker **ppRVar8;
   ResourceUsage *pRVar9;
   uint uVar10;
   uint uVar11;
   uint uVar12;
   uint *in_FS_OFFSET;
   ResourceTracker *local_50;
   int local_48;
   undefined4 local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 10 );
   local_50 = param_3;
   pRVar5 = (RecordedCommand*)_allocate_command(param_1, (int)( (ulong)param_5 << 6 ) + 0x60, &local_48);
   *(undefined4*)pRVar5 = 0xb;
   *(undefined8*)( pRVar5 + 0x48 ) = 0x1000;
   uVar2 = *param_2;
   *(uint*)( pRVar5 + 0x58 ) = param_5;
   *(undefined8*)( pRVar5 + 0x50 ) = uVar2;
   lVar6 = 0;
   if (param_5 != 0) {
      do {
         *(undefined8*)( pRVar5 + lVar6 + 0x60 ) = *(undefined8*)( param_4 + lVar6 );
         for (int i = 0; i < 3; i++) {
            puVar1 = (undefined8*)( param_4 + ( 16*i + 8 ) + lVar6 );
            uVar2 = puVar1[1];
            *(undefined8*)( pRVar5 + lVar6 + ( 16*i + 104 ) ) = *puVar1;
            *(undefined8*)( pRVar5 + lVar6 + ( 16*i + 104 ) + 8 ) = uVar2;
         }
         *(undefined8*)( pRVar5 + lVar6 + 0x98 ) = *(undefined8*)( param_4 + 0x38 + lVar6 );
         lVar6 = lVar6 + 0x40;
      } while ( (ulong)param_5 << 6 != lVar6 );
   }
   if (param_8 == 0) {
      local_44 = 2;
      _add_command_to_graph(param_1, &local_50, (ResourceUsage*)&local_44, 1, local_48, pRVar5);
      goto LAB_00105d3b;
   }
   if ((char)*in_FS_OFFSET == '\0') {
      uVar2 = *(undefined8*)in_FS_OFFSET;
      in_FS_OFFSET[0] = 0;
      in_FS_OFFSET[1] = 0;
      in_FS_OFFSET[0] = 0;
      in_FS_OFFSET[1] = 0;
      *(char*)in_FS_OFFSET = '\x01';
      __cxa_thread_atexit(LocalVector<RenderingDeviceGraph::ResourceTracker*,unsigned_int,false,false>::~LocalVector, uVar2, &__dso_handle);
      if ((char)*in_FS_OFFSET == '\0') goto LAB_00105c20;
      LAB_00105ac8:uVar12 = *in_FS_OFFSET;
   } else {
      if ((char)*in_FS_OFFSET != '\0') goto LAB_00105ac8;
      LAB_00105c20:uVar2 = *(undefined8*)in_FS_OFFSET;
      in_FS_OFFSET[0] = 0;
      in_FS_OFFSET[1] = 0;
      in_FS_OFFSET[0] = 0;
      in_FS_OFFSET[1] = 0;
      *(char*)in_FS_OFFSET = '\x01';
      __cxa_thread_atexit(LocalVector<RenderingDeviceGraph::ResourceUsage,unsigned_int,false,false>::~LocalVector, uVar2, &__dso_handle);
      uVar12 = *in_FS_OFFSET;
   }
   if (uVar12 != 0) {
      *in_FS_OFFSET = 0;
   }
   if (*in_FS_OFFSET != 0) {
      *in_FS_OFFSET = 0;
   }
   uVar7 = 0;
   ppRVar8 = *(ResourceTracker***)in_FS_OFFSET;
   puVar1 = param_7 + param_8;
   do {
      pRVar3 = (ResourceTracker*)*param_7;
      if (in_FS_OFFSET[1] == (uint)uVar7) {
         uVar12 = (uint)uVar7 * 2;
         uVar7 = (ulong)uVar12;
         if (uVar12 == 0) {
            uVar7 = 1;
         }
         in_FS_OFFSET[1] = (uint)uVar7;
         ppRVar8 = (ResourceTracker**)Memory::realloc_static(ppRVar8, uVar7 * 8, false);
         *(ResourceTracker***)( in_FS_OFFSET + 2 ) = ppRVar8;
         if (ppRVar8 == (ResourceTracker**)0x0) goto LAB_00105d90;
         uVar7 = ( ulong ) * in_FS_OFFSET;
      }
      uVar10 = (int)uVar7 + 1;
      *in_FS_OFFSET = uVar10;
      ppRVar8[uVar7] = pRVar3;
      uVar12 = *in_FS_OFFSET;
      pRVar9 = *(ResourceUsage**)in_FS_OFFSET;
      if (*in_FS_OFFSET == uVar12) {
         uVar7 = ( ulong )(uVar12 * 2);
         if (uVar12 * 2 == 0) {
            uVar7 = 1;
         }
         *in_FS_OFFSET = (uint)uVar7;
         pRVar9 = (ResourceUsage*)Memory::realloc_static(pRVar9, uVar7 * 4, false);
         *(ResourceUsage**)in_FS_OFFSET = pRVar9;
         if (pRVar9 == (ResourceUsage*)0x0) goto LAB_00105d90;
         uVar12 = *in_FS_OFFSET;
         uVar10 = *in_FS_OFFSET;
         ppRVar8 = *(ResourceTracker***)( in_FS_OFFSET + 2 );
      }
      pRVar3 = local_50;
      uVar7 = (ulong)uVar10;
      uVar11 = uVar12 + 1;
      param_7 = param_7 + 1;
      *in_FS_OFFSET = uVar11;
      *(undefined4*)( pRVar9 + (ulong)uVar12 * 4 ) = 1;
   } while ( param_7 != puVar1 );
   if (*in_FS_OFFSET == uVar10) {
      uVar7 = ( ulong )(uVar10 * 2);
      if (uVar10 * 2 == 0) {
         uVar7 = 1;
      }
      *in_FS_OFFSET = (uint)uVar7;
      ppRVar8 = (ResourceTracker**)Memory::realloc_static(ppRVar8, uVar7 * 8, false);
      *(ResourceTracker***)in_FS_OFFSET = ppRVar8;
      if (ppRVar8 == (ResourceTracker**)0x0) goto LAB_00105d90;
      uVar11 = *in_FS_OFFSET;
      uVar7 = ( ulong ) * in_FS_OFFSET;
      pRVar9 = *(ResourceUsage**)in_FS_OFFSET;
   }
   uVar12 = (int)uVar7 + 1;
   *in_FS_OFFSET = uVar12;
   ppRVar8[uVar7] = pRVar3;
   if (*in_FS_OFFSET == uVar11) {
      uVar7 = ( ulong )(uVar11 * 2);
      if (uVar11 * 2 == 0) {
         uVar7 = 1;
      }
      *in_FS_OFFSET = (uint)uVar7;
      pRVar9 = (ResourceUsage*)Memory::realloc_static(pRVar9, uVar7 * 4, false);
      *(ResourceUsage**)in_FS_OFFSET = pRVar9;
      if (pRVar9 == (ResourceUsage*)0x0) {
         LAB_00105d90:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar4 = (code*)invalidInstructionException();
         ( *pcVar4 )();
      }
      uVar12 = *in_FS_OFFSET;
      uVar11 = *in_FS_OFFSET;
      ppRVar8 = *(ResourceTracker***)in_FS_OFFSET;
   }
   *in_FS_OFFSET = uVar11 + 1;
   *(undefined4*)( pRVar9 + (ulong)uVar11 * 4 ) = 2;
   _add_command_to_graph(param_1, ppRVar8, pRVar9, uVar12, local_48, pRVar5);
   LAB_00105d3b:if (local_40 == *(long*)( in_FS_OFFSET + 10 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RenderingDeviceGraph::add_capture_timestamp(RenderingDeviceDriver::QueryPoolID, unsigned int) */void RenderingDeviceGraph::add_capture_timestamp(RenderingDeviceGraph *this, undefined8 *param_2, undefined4 param_3) {
   undefined8 uVar1;
   RecordedCommand *pRVar2;
   long in_FS_OFFSET;
   int local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   pRVar2 = (RecordedCommand*)_allocate_command(this, 0x60, &local_24);
   *(undefined4*)pRVar2 = 0xc;
   *(undefined8*)( pRVar2 + 0x48 ) = 0;
   uVar1 = *param_2;
   *(undefined4*)( pRVar2 + 0x58 ) = param_3;
   *(undefined8*)( pRVar2 + 0x50 ) = uVar1;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _add_command_to_graph(this, (ResourceTracker**)0x0, (ResourceUsage*)0x0, 0, local_24, pRVar2);
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RenderingDeviceGraph::add_synchronization() */void RenderingDeviceGraph::add_synchronization(RenderingDeviceGraph *this) {
   if (*(int*)( this + 0x188 ) != 0) {
      this[0x1c8] = (RenderingDeviceGraph)0x1;
   }
   return;
}/* RenderingDeviceGraph::begin_label(String const&, Color const&) */void RenderingDeviceGraph::begin_label(RenderingDeviceGraph *this, String *param_1, Color *param_2) {
   long *plVar1;
   undefined8 *puVar2;
   uint uVar3;
   long lVar4;
   code *pcVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   long lVar8;
   void *pvVar9;
   size_t __n;
   ulong uVar10;
   uint uVar11;
   uint uVar12;
   long in_FS_OFFSET;
   void *local_40;
   uVar3 = *(uint*)( this + 0x80 );
   lVar4 = *(long*)( in_FS_OFFSET + 0x28 );
   String::to_utf8_buffer();
   if (local_40 == (void*)0x0) {
      uVar11 = *(uint*)( this + 0x80 );
      uVar12 = uVar3 + 1;
      if (uVar11 <= uVar12) {
         if (uVar12 <= uVar11) {
            uVar10 = (ulong)uVar3;
            __n = 0;
            uVar12 = uVar11;
            goto LAB_00105f8a;
         }
         if (*(uint*)( this + 0x84 ) < uVar12) {
            uVar10 = (ulong)uVar3;
            goto LAB_0010609d;
         }
      }
      *(uint*)( this + 0x80 ) = uVar12;
      uVar10 = (ulong)uVar3;
      __n = 0;
   } else {
      uVar11 = *(uint*)( this + 0x80 );
      uVar12 = uVar3 + *(int*)( (long)local_40 + -8 );
      uVar10 = (ulong)uVar12;
      uVar12 = uVar12 + 1;
      if (uVar12 < uVar11) {
         LAB_00105f7f:*(uint*)( this + 0x80 ) = uVar12;
         uVar11 = uVar12;
      } else if (uVar11 < uVar12) {
         if (uVar12 <= *(uint*)( this + 0x84 )) goto LAB_00105f7f;
         LAB_0010609d:pvVar9 = *(void**)( this + 0x88 );
         uVar11 = ( uint )(uVar10 >> 1) | (uint)uVar10;
         uVar11 = uVar11 | uVar11 >> 2;
         uVar11 = uVar11 | uVar11 >> 4;
         uVar11 = uVar11 | uVar11 >> 8;
         uVar11 = ( uVar11 | uVar11 >> 0x10 ) + 1;
         *(uint*)( this + 0x84 ) = uVar11;
         lVar8 = Memory::realloc_static(pvVar9, (ulong)uVar11, false);
         *(long*)( this + 0x88 ) = lVar8;
         if (lVar8 == 0) {
            /* WARNING: Subroutine does not return */
            LocalVector<RenderingDeviceGraph::AttachmentOperation,unsigned_int,false,false>::resize((uint)pvVar9);
         }
         *(uint*)( this + 0x80 ) = uVar12;
         uVar11 = uVar12;
         if (local_40 == (void*)0x0) {
            __n = 0;
            goto LAB_00105f8a;
         }
      }
      __n = *(size_t*)( (long)local_40 + -8 );
      uVar12 = uVar11;
   }
   LAB_00105f8a:if (uVar12 <= uVar3) {
      uVar10 = (ulong)uVar3;
      LAB_00106128:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar10, (ulong)uVar12, "p_index", "count", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }
   memcpy((void*)( (ulong)uVar3 + *(long*)( this + 0x88 ) ), local_40, __n);
   uVar12 = *(uint*)( this + 0x80 );
   if (uVar12 <= (uint)uVar10) goto LAB_00106128;
   *(undefined1*)( *(long*)( this + 0x88 ) + uVar10 ) = 0;
   uVar6 = *(undefined8*)param_2;
   uVar7 = *(undefined8*)( param_2 + 8 );
   uVar12 = *(uint*)( this + 0x90 );
   if (uVar12 == *(uint*)( this + 0x94 )) {
      uVar12 = uVar12 * 2;
      if (uVar12 == 0) {
         uVar12 = 1;
      }
      *(uint*)( this + 0x94 ) = uVar12;
      lVar8 = Memory::realloc_static(*(void**)( this + 0x98 ), (ulong)uVar12 << 4, false);
      *(long*)( this + 0x98 ) = lVar8;
      if (lVar8 == 0) goto LAB_00106250;
      uVar12 = *(uint*)( this + 0x90 );
   } else {
      lVar8 = *(long*)( this + 0x98 );
   }
   pvVar9 = *(void**)( this + 0xa8 );
   *(uint*)( this + 0x90 ) = uVar12 + 1;
   puVar2 = (undefined8*)( lVar8 + (ulong)uVar12 * 0x10 );
   *puVar2 = uVar6;
   puVar2[1] = uVar7;
   uVar12 = *(uint*)( this + 0xa0 );
   if (*(uint*)( this + 0xa4 ) == uVar12) {
      uVar10 = ( ulong )(uVar12 * 2);
      if (uVar12 * 2 == 0) {
         uVar10 = 1;
      }
      *(int*)( this + 0xa4 ) = (int)uVar10;
      pvVar9 = (void*)Memory::realloc_static(pvVar9, uVar10 * 4, false);
      *(void**)( this + 0xa8 ) = pvVar9;
      if (pvVar9 == (void*)0x0) {
         LAB_00106250:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar5 = (code*)invalidInstructionException();
         ( *pcVar5 )();
      }
      uVar12 = *(uint*)( this + 0xa0 );
   }
   *(uint*)( this + 0xa0 ) = uVar12 + 1;
   *(uint*)( (long)pvVar9 + (ulong)uVar12 * 4 ) = uVar3;
   *(int*)( this + 0xb0 ) = *(int*)( this + 0x18c );
   *(int*)( this + 0x18c ) = *(int*)( this + 0x18c ) + 1;
   if (local_40 != (void*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( (long)local_40 + -0x10 ), false);
      }
   }
   if (lVar4 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* RenderingDeviceGraph::end_label() */void RenderingDeviceGraph::end_label(RenderingDeviceGraph *this) {
   *(undefined4*)( this + 0xb0 ) = 0xffffffff;
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RenderingDeviceGraph::resource_tracker_create() */void RenderingDeviceGraph::resource_tracker_create(void) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined4 *puVar3;
   puVar3 = (undefined4*)operator_new(0xb0, "");
   uVar2 = _UNK_001129d8;
   uVar1 = __LC34;
   *(undefined8*)( puVar3 + 0xc ) = 0xffffffff00000000;
   *(undefined8*)( puVar3 + 2 ) = uVar1;
   *(undefined8*)( puVar3 + 4 ) = uVar2;
   *(undefined8*)( puVar3 + 0x1e ) = 0xffffffff00000000;
   for (int i = 0; i < 4; i++) {
      puVar3[( i + 8 )] = 4294967295;
   }
   *puVar3 = 0;
   *(undefined8*)( puVar3 + 6 ) = 0;
   *(undefined8*)( puVar3 + 0xe ) = 0;
   *(undefined8*)( puVar3 + 0x10 ) = 0;
   *(undefined8*)( puVar3 + 0x16 ) = 0;
   *(undefined8*)( puVar3 + 0x1c ) = 0;
   *(undefined8*)( puVar3 + 0x24 ) = 0;
   *(undefined8*)( puVar3 + 0x26 ) = 0;
   *(undefined8*)( puVar3 + 0x28 ) = 0;
   *(undefined2*)( puVar3 + 0x2a ) = 0;
   *(undefined1*)( (long)puVar3 + 0xaa ) = 0;
   *(undefined1(*) [16])( puVar3 + 0x12 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar3 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar3 + 0x20 ) = (undefined1[16])0x0;
   return;
}/* RenderingDeviceGraph::resource_tracker_free(RenderingDeviceGraph::ResourceTracker*) */void RenderingDeviceGraph::resource_tracker_free(ResourceTracker *param_1) {
   ResourceTracker *pRVar1;
   ResourceTracker *pRVar2;
   if (param_1 == (ResourceTracker*)0x0) {
      return;
   }
   if (param_1[0xa8] != (ResourceTracker)0x0) {
      pRVar1 = *(ResourceTracker**)( *(long*)( param_1 + 0x80 ) + 0x88 );
      if (pRVar1 == param_1) {
         *(undefined8*)( *(long*)( param_1 + 0x80 ) + 0x88 ) = *(undefined8*)( param_1 + 0x90 );
         Memory::free_static(param_1, false);
         return;
      }
      while (pRVar2 = pRVar1,pRVar2 != (ResourceTracker*)0x0) {
         pRVar1 = *(ResourceTracker**)( pRVar2 + 0x90 );
         if (*(ResourceTracker**)( pRVar2 + 0x90 ) == param_1) {
            *(undefined8*)( pRVar2 + 0x90 ) = *(undefined8*)( param_1 + 0x90 );
            Memory::free_static(param_1, false);
            return;
         }
      };
   }
   Memory::free_static(param_1, false);
   return;
}/* RenderingDeviceGraph::framebuffer_cache_create() */void RenderingDeviceGraph::framebuffer_cache_create(void) {
   undefined1(*pauVar1)[16];
   pauVar1 = (undefined1(*) [16])operator_new(0x60, "");
   *pauVar1 = (undefined1[16])0x0;
   *(undefined8*)pauVar1[1] = 0;
   *(undefined8*)( pauVar1[1] + 8 ) = 0;
   *(undefined8*)pauVar1[2] = 0;
   *(undefined8*)pauVar1[5] = 2;
   *(undefined8*)( pauVar1[5] + 8 ) = 0;
   pauVar1[3] = (undefined1[16])0x0;
   pauVar1[4] = (undefined1[16])0x0;
   return;
}/* RenderingDeviceGraph::_get_draw_list_render_pass_and_framebuffer(RenderingDeviceGraph::RecordedDrawListCommand
   const*, RenderingDeviceDriver::RenderPassID&, RenderingDeviceDriver::FramebufferID&) */void RenderingDeviceGraph::_get_draw_list_render_pass_and_framebuffer(RenderingDeviceGraph *this, RecordedDrawListCommand *param_1, RenderPassID *param_2, FramebufferID *param_3) {
   RecordedDrawListCommand *pRVar1;
   RecordedDrawListCommand *pRVar2;
   long lVar3;
   undefined4 *puVar4;
   long lVar5;
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   byte bVar14;
   ulong uVar15;
   char *pcVar16;
   int iVar17;
   uint uVar18;
   long lVar19;
   undefined8 uVar20;
   uint uVar21;
   ulong uVar22;
   uint uVar23;
   long lVar24;
   ulong uVar25;
   ulong uVar26;
   long in_FS_OFFSET;
   ulong local_70;
   ulong local_68;
   ulong local_60;
   ulong local_58;
   ulong local_50;
   long local_40;
   uVar23 = *(uint*)( param_1 + 0x84 );
   uVar22 = (ulong)uVar23;
   lVar3 = ( ulong ) * (uint*)( param_1 + 0x80 ) * 0x10 + 0x90 + uVar22 * 8;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   if (uVar23 != 0) {
      lVar24 = 0;
      iVar17 = 0;
      local_70 = 0;
      do {
         pRVar1 = param_1 + lVar3 + uVar22 * 4 + lVar24;
         bVar14 = (byte)iVar17;
         pRVar2 = param_1 + lVar3 + lVar24;
         lVar24 = lVar24 + 4;
         iVar17 = iVar17 + 3;
         local_70 = local_70 | ( ulong ) * (uint*)pRVar1 << ( bVar14 + 2 & 0x3f ) | ( ulong ) * (uint*)pRVar2 << ( bVar14 & 0x3f );
      } while ( iVar17 != uVar23 * 3 );
   }
   puVar4 = *(undefined4**)( param_1 + 0x50 );
   lVar24 = *(long*)( puVar4 + 0xc );
   if (( lVar24 != 0 ) && ( puVar4[0x15] != 0 )) {
      uVar26 = CONCAT44(0, *(uint*)( hash_table_size_primes + (ulong)(uint)puVar4[0x14] * 4 ));
      lVar5 = *(long*)( hash_table_size_primes_inv + (ulong)(uint)puVar4[0x14] * 8 );
      uVar15 = local_70 * 0x3ffff - 1;
      uVar15 = ( uVar15 ^ uVar15 >> 0x1f ) * 0x15;
      uVar15 = ( uVar15 ^ uVar15 >> 0xb ) * 0x41;
      uVar15 = uVar15 >> 0x16 ^ uVar15;
      uVar25 = uVar15 & 0xffffffff;
      if ((int)uVar15 == 0) {
         uVar25 = 1;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar25 * lVar5;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar26;
      lVar19 = SUB168(auVar6 * auVar10, 8);
      uVar23 = *(uint*)( *(long*)( puVar4 + 0xe ) + lVar19 * 4 );
      uVar18 = SUB164(auVar6 * auVar10, 8);
      if (uVar23 != 0) {
         uVar21 = 0;
         while (( (uint)uVar25 != uVar23 || ( *(ulong*)( *(long*)( lVar24 + lVar19 * 8 ) + 0x10 ) != local_70 ) )) {
            uVar21 = uVar21 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = ( ulong )(uVar18 + 1) * lVar5;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar26;
            lVar19 = SUB168(auVar7 * auVar11, 8);
            uVar23 = *(uint*)( *(long*)( puVar4 + 0xe ) + lVar19 * 4 );
            uVar18 = SUB164(auVar7 * auVar11, 8);
            if (( uVar23 == 0 ) || ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar23 * lVar5,auVar12._8_8_ = 0,auVar12._0_8_ = uVar26,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + (ulong)(uint)puVar4[0x14] * 4 ) + uVar18 ) - SUB164(auVar8 * auVar12, 8)) * lVar5,auVar13._8_8_ = 0,auVar13._0_8_ = uVar26,SUB164(auVar9 * auVar13, 8) < uVar21) goto LAB_00106682;
         };
         uVar15 = *(ulong*)( lVar24 + (ulong)uVar18 * 8 );
         if (uVar15 != 0) goto LAB_00106633;
      }
   }
   LAB_00106682:local_58 = 0;
   ( **(code**)( this + 0x20 ) )(&local_60, *(undefined8*)this, param_1 + lVar3, uVar22, param_1 + lVar3 + uVar22 * 4, uVar22, *(undefined8*)( puVar4 + 0x16 ));
   local_50 = local_60;
   if (local_60 == 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar20 = 0x322;
         pcVar16 = "Condition \"!storage.render_pass\" is true.";
         LAB_0010676a:_err_print_error("_get_draw_list_render_pass_and_framebuffer", "servers/rendering/rendering_device_graph.cpp", uVar20, pcVar16, 0, 0);
         return;
      }
   } else {
      local_68 = local_60;
      ( **(code**)( **(long**)this + 0x2e0 ) )(&local_60, *(long**)this, &local_68, *(undefined8*)( puVar4 + 4 ), puVar4[2], *puVar4);
      local_58 = local_60;
      if (local_60 == 0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar20 = 0x325;
            pcVar16 = "Condition \"!storage.framebuffer\" is true.";
            goto LAB_0010676a;
         }
      } else {
         HashMap<unsigned_long,RenderingDeviceGraph::FramebufferStorage,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,RenderingDeviceGraph::FramebufferStorage>>>::insert(&local_60, (FramebufferStorage*)( puVar4 + 10 ), SUB81(&local_70, 0));
         uVar15 = local_60;
         LAB_00106633:uVar20 = *(undefined8*)( uVar15 + 0x18 );
         *(undefined8*)param_2 = *(undefined8*)( uVar15 + 0x20 );
         *(undefined8*)param_3 = uVar20;
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RenderingDeviceGraph::finalize() */void RenderingDeviceGraph::finalize(RenderingDeviceGraph *this) {
   long lVar1;
   uint *puVar2;
   long lVar3;
   long lVar4;
   uint *puVar5;
   long in_FS_OFFSET;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   _wait_for_secondary_command_buffer_tasks(this);
   puVar5 = *(uint**)( this + 0x230 );
   puVar2 = puVar5 + ( ulong ) * (uint*)( this + 0x228 ) * 6;
   for (; puVar2 != puVar5; puVar5 = puVar5 + 6) {
      lVar4 = *(long*)( puVar5 + 2 );
      lVar1 = lVar4 + ( ulong ) * puVar5 * 0x38;
      for (; lVar1 != lVar4; lVar4 = lVar4 + 0x38) {
         if (*(long*)( lVar4 + 0x18 ) != 0) {
            ( **(code**)( **(long**)this + 0x270 ) )();
         }
      }
   }
   if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
      LocalVector<RenderingDeviceGraph::Frame,unsigned_int,false,true>::resize((LocalVector<RenderingDeviceGraph::Frame,unsigned_int,false,true>*)( this + 0x228 ), 0);
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RenderingDeviceGraph::initialize(RenderingDeviceDriver*, RenderingContextDriver::Device,
   RenderingDeviceDriver::RenderPassID (*)(RenderingDeviceDriver*,
   VectorView<RenderingDeviceDriver::AttachmentLoadOp>,
   VectorView<RenderingDeviceDriver::AttachmentStoreOp>, void*), unsigned int,
   RenderingDeviceDriver::CommandQueueFamilyID, unsigned int) */void RenderingDeviceGraph::initialize(RenderingDeviceGraph *this, undefined8 param_1, CowData *param_3, undefined8 param_4, uint param_5, undefined8 *param_6, uint param_7) {
   CowData CVar1;
   long *plVar2;
   long lVar3;
   code *pcVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   ulong uVar7;
   ulong uVar8;
   int *piVar9;
   uint uVar10;
   long lVar11;
   ulong uVar12;
   ulong uVar13;
   void *pvVar14;
   uint uVar15;
   uint *puVar16;
   long lVar17;
   long in_FS_OFFSET;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = param_1;
   if (*(long*)( this + 8 ) != *(long*)param_3) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 8 ), param_3);
   }
   *(undefined8*)( this + 0x10 ) = *(undefined8*)( param_3 + 8 );
   CVar1 = param_3[0x10];
   *(undefined8*)( this + 0x20 ) = param_4;
   *(CowData*)( this + 0x18 ) = CVar1;
   LocalVector<RenderingDeviceGraph::Frame,unsigned_int,false,true>::resize((LocalVector<RenderingDeviceGraph::Frame,unsigned_int,false,true>*)( this + 0x228 ), param_5);
   lVar17 = 0;
   uVar7 = 0;
   if (param_5 != 0) {
      uVar8 = (ulong)param_7;
      do {
         uVar10 = *(uint*)( this + 0x228 );
         uVar15 = (uint)uVar7;
         uVar13 = uVar7;
         if (uVar10 <= uVar15) {
            LAB_00106c0e:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar13, (ulong)uVar10, "p_index", "count", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }
         puVar16 = (uint*)( *(long*)( this + 0x230 ) + lVar17 );
         uVar10 = *puVar16;
         if (param_7 < uVar10) {
            lVar11 = uVar8 * 0x38;
            uVar13 = uVar8;
            do {
               piVar9 = (int*)( *(long*)( puVar16 + 2 ) + lVar11 );
               if (*(void**)( piVar9 + 2 ) != (void*)0x0) {
                  if (*piVar9 != 0) {
                     *piVar9 = 0;
                  }
                  Memory::free_static(*(void**)( piVar9 + 2 ), false);
               }
               uVar10 = (int)uVar13 + 1;
               uVar13 = (ulong)uVar10;
               lVar11 = lVar11 + 0x38;
            } while ( uVar10 < *puVar16 );
            *puVar16 = param_7;
            LAB_001069c5:if (param_7 != 0) goto LAB_001069d0;
         } else {
            if (param_7 <= uVar10) goto LAB_001069c5;
            if (puVar16[1] < param_7) {
               puVar16[1] = param_7;
               pvVar14 = *(void**)( puVar16 + 2 );
               lVar11 = Memory::realloc_static(pvVar14, uVar8 * 0x38, false);
               *(long*)( puVar16 + 2 ) = lVar11;
               if (lVar11 == 0) {
                  /* WARNING: Subroutine does not return */
                  LocalVector<RenderingDeviceGraph::AttachmentOperation,unsigned_int,false,false>::resize((uint)pvVar14);
               }
               uVar10 = *puVar16;
               if (uVar10 < param_7) goto LAB_00106b85;
            } else {
               LAB_00106b85:lVar11 = *(long*)( puVar16 + 2 );
               puVar5 = (undefined8*)( lVar11 + (ulong)uVar10 * 0x38 );
               do {
                  *puVar5 = 0;
                  puVar6 = puVar5 + 7;
                  puVar5[1] = 0;
                  *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
                  *(undefined1(*) [16])( puVar5 + 4 ) = (undefined1[16])0x0;
                  puVar5 = puVar6;
               } while ( puVar6 != (undefined8*)( lVar11 + 0x38 + ( ( ulong )(( param_7 - 1 ) - uVar10) + (ulong)uVar10 ) * 0x38 ) );
            }
            *puVar16 = param_7;
            LAB_001069d0:uVar12 = 0;
            do {
               uVar10 = *(uint*)( this + 0x228 );
               uVar13 = uVar7;
               if (uVar10 <= uVar15) goto LAB_00106c0e;
               uVar10 = *(uint*)( lVar17 + *(long*)( this + 0x230 ) );
               uVar13 = uVar12;
               if (uVar10 <= (uint)uVar12) goto LAB_00106c0e;
               uVar13 = uVar12 + 1;
               lVar11 = *(long*)( (uint*)( lVar17 + *(long*)( this + 0x230 ) ) + 2 ) + uVar12 * 0x38;
               local_50 = *param_6;
               ( **(code**)( **(long**)this + 0x260 ) )(&local_48, *(long**)this, &local_50, 1);
               plVar2 = *(long**)this;
               lVar3 = *plVar2;
               *(undefined8*)( lVar11 + 0x18 ) = local_48;
               local_50 = local_48;
               ( **(code**)( lVar3 + 0x278 ) )(&local_48, plVar2, &local_50);
               *(undefined8*)( lVar11 + 0x30 ) = 0xffffffffffffffff;
               *(undefined8*)( lVar11 + 0x10 ) = local_48;
               uVar12 = uVar13;
            } while ( uVar13 != uVar8 );
         }
         uVar7 = ( ulong )(uVar15 + 1);
         lVar17 = lVar17 + 0x18;
      } while ( param_5 != uVar15 + 1 );
   }
   lVar17 = ( **(code**)( **(long**)this + 0x510 ) )(*(long**)this, 0);
   this[0x220] = ( RenderingDeviceGraph )((byte)this[0x220] & 0xfe | lVar17 != 0);
   lVar17 = ( **(code**)( **(long**)this + 0x510 ) )(*(long**)this, 5);
   this[0x220] = ( RenderingDeviceGraph )((byte)this[0x220] & 0xfd | ( lVar17 != 0 ) * '\x02');
   lVar17 = ( **(code**)( **(long**)this + 0x510 ) )(*(long**)this, 7);
   this[0x220] = ( RenderingDeviceGraph )((byte)this[0x220] & 0xfb | ( lVar17 != 0 ) << 2);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* RenderingDeviceGraph::framebuffer_cache_free(RenderingDeviceDriver*,
   RenderingDeviceGraph::FramebufferCache*) */void RenderingDeviceGraph::framebuffer_cache_free(RenderingDeviceDriver *param_1, FramebufferCache *param_2) {
   undefined8 *puVar1;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == (FramebufferCache*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
   } else {
      for (puVar1 = *(undefined8**)( param_2 + 0x40 ); puVar1 != (undefined8*)0x0; puVar1 = (undefined8*)*puVar1) {
         local_38 = puVar1[3];
         ( **(code**)( *(long*)param_1 + 0x2e8 ) )(param_1, &local_38);
         local_38 = puVar1[4];
         ( **(code**)( *(long*)param_1 + 0x3b8 ) )(param_1);
      }
      FramebufferCache::~FramebufferCache(param_2);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(param_2, false);
         return;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RenderingDeviceGraph::_usage_to_string(RenderingDeviceGraph::ResourceUsage) */RenderingDeviceGraph * __thiscall
RenderingDeviceGraph::_usage_to_string(RenderingDeviceGraph *this,uint param_2){
   long in_FS_OFFSET;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (0x11 < param_2) {
      local_50 = 0;
      local_40 = 0x1a;
      local_48 = "Invalid resource usage %d.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<RenderingDeviceGraph::ResourceUsage>((CowData<char32_t>*)&local_48, (StrRange*)&local_50, param_2);
      _err_print_error("_usage_to_string", "servers/rendering/rendering_device_graph.cpp", 0x55, "Method/function failed. Returning: \"Invalid\"", (CowData<char32_t>*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      *(undefined8*)this = 0;
      local_40 = 7;
      local_48 = "Invalid";
      String::parse_latin1((StrRange*)this);
      goto LAB_00106e10;
   }
   *(undefined8*)this = 0;
   switch (param_2) {
      case 0:
    local_40 = 4;
    local_48 = "None";
    String::parse_latin1((StrRange *)this);
    break;
      case 1:
    local_40 = 9;
    local_48 = "Copy From";
    String::parse_latin1((StrRange *)this);
    break;
      case 2:
    local_40 = 7;
    local_48 = "Copy To";
    String::parse_latin1((StrRange *)this);
    break;
      case 3:
    local_40 = 0xc;
    local_48 = "Resolve From";
    String::parse_latin1((StrRange *)this);
    break;
      case 4:
    local_40 = 10;
    local_48 = "Resolve To";
    String::parse_latin1((StrRange *)this);
    break;
      case 5:
    local_48 = "Uniform Buffer Read";
    goto LAB_00106f2f;
      case 6:
    local_40 = 0x14;
    local_48 = "Indirect Buffer Read";
    String::parse_latin1((StrRange *)this);
    break;
      case 7:
    local_48 = "Texture Buffer Read";
    goto LAB_00106f2f;
      case 8:
    local_48 = "Texture Buffer Read Write";
    goto LAB_00106f8f;
      case 9:
    local_48 = "Storage Buffer Read";
LAB_00106f2f:
    local_40 = 0x13;
    String::parse_latin1((StrRange *)this);
    break;
      case 10:
    local_48 = "Storage Buffer Read Write";
LAB_00106f8f:
    local_40 = 0x19;
    String::parse_latin1((StrRange *)this);
    break;
      case 0xb:
    local_48 = "Vertex Buffer Read";
    goto LAB_00106fd7;
      case 0xc:
    local_40 = 0x11;
    local_48 = "Index Buffer Read";
    String::parse_latin1((StrRange *)this);
    break;
      case 0xd:
    local_40 = 0xe;
    local_48 = "Texture Sample";
    String::parse_latin1((StrRange *)this);
    break;
      case 0xe:
    local_48 = "Storage Image Read";
LAB_00106fd7:
    local_40 = 0x12;
    String::parse_latin1((StrRange *)this);
    break;
      case 0xf:
    local_40 = 0x18;
    local_48 = "Storage Image Read Write";
    String::parse_latin1((StrRange *)this);
    break;
      case 0x10:
    local_40 = 0x1b;
    local_48 = "Attachment Color Read Write";
    String::parse_latin1((StrRange *)this);
    break;
      case 0x11:
    local_40 = 0x23;
    local_48 = "Attachment Depth Stencil Read Write";
    String::parse_latin1((StrRange *)this);
   }
   LAB_00106e10:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RenderingDeviceGraph::_run_label_command_change(RenderingDeviceDriver::CommandBufferID, int, int,
   bool, bool, RenderingDeviceGraph::RecordedCommandSort const*, unsigned int, int&, int&) [clone
   .part.0] */void RenderingDeviceGraph::_run_label_command_change(RenderingDeviceGraph *this, undefined8 *param_2, uint param_3, int param_4, char param_5, char param_6, long param_7, uint param_8, uint *param_9, int *param_10) {
   uint uVar1;
   long *plVar2;
   code *pcVar3;
   bool bVar4;
   bool bVar5;
   bool bVar6;
   bool bVar7;
   bool bVar8;
   bool bVar9;
   long lVar10;
   uint uVar11;
   undefined8 uVar12;
   bool bVar13;
   bool bVar14;
   uint *puVar15;
   ulong uVar16;
   undefined8 *puVar17;
   char *pcVar18;
   ulong uVar19;
   long in_FS_OFFSET;
   undefined8 local_88;
   CowData<char32_t> local_80[8];
   String local_78[8];
   long local_70;
   char *local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 uStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_5 == '\0') {
      if (( *param_9 == param_3 ) && ( *param_10 == param_4 )) goto LAB_00107534;
      if (( -1 < (int)*param_9 ) || ( ( param_6 != '\0' || ( -1 < *param_10 ) ) )) {
         local_68 = (char*)*param_2;
         ( **(code**)( **(long**)this + 0x4c8 ) )(*(long**)this, &local_68);
         goto LAB_001071d7;
      }
      local_88 = 0;
      local_58 = CONCAT44(_UNK_001129c4, __LC31);
      uStack_50 = CONCAT44(_LC78, _UNK_001129c8);
      if ((int)param_3 < 0) goto LAB_00107534;
      LAB_001071f5:local_88 = 0;
      uVar19 = ( ulong ) * (uint*)( this + 0xa0 );
      if (*(uint*)( this + 0xa0 ) <= param_3) {
         uVar16 = (ulong)(int)param_3;
         LAB_001075fb:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar16, uVar19, "p_index", "count", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }
      uVar16 = (ulong)(int)param_3;
      uVar19 = ( ulong ) * (uint*)( this + 0x80 );
      uVar11 = *(uint*)( *(long*)( this + 0xa8 ) + uVar16 * 4 );
      if (*(uint*)( this + 0x80 ) <= uVar11) {
         uVar16 = (ulong)uVar11;
         goto LAB_001075fb;
      }
      String::parse_utf8((char*)&local_88, uVar11 + (int)*(undefined8*)( this + 0x88 ), true);
      uVar19 = ( ulong ) * (uint*)( this + 0x90 );
      if (*(uint*)( this + 0x90 ) <= param_3) goto LAB_001075fb;
      puVar17 = (undefined8*)( uVar16 * 0x10 + *(long*)( this + 0x98 ) );
      local_58 = *puVar17;
      uStack_50 = puVar17[1];
   } else {
      LAB_001071d7:local_88 = 0;
      local_58 = CONCAT44(_UNK_001129c4, __LC31);
      uStack_50 = CONCAT44(_LC78, _UNK_001129c8);
      if (-1 < (int)param_3) goto LAB_001071f5;
      if (param_6 == '\0') goto LAB_00107534;
      local_60 = 0xd;
      local_68 = "Command graph";
      String::parse_latin1((StrRange*)&local_88);
      local_58 = CONCAT44(_LC78, _LC78);
      uStack_50 = CONCAT44(_LC78, _LC78);
   }
   local_70 = 0;
   local_68 = ")";
   local_60 = 1;
   String::parse_latin1((StrRange*)&local_70);
   itos((long)local_80);
   operator+((char *)
   local_78,(String*)&_LC80;
   String::operator +((String*)&local_68, local_78);
   String::operator +=((String*)&local_88, (String*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref(local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   bVar14 = param_7 != 0 && param_8 != 0;
   if (param_7 != 0 && param_8 != 0) {
      uVar19 = ( ulong ) * (uint*)( this + 0x40 );
      puVar15 = (uint*)( param_7 + 8 );
      uVar11 = 0;
      bVar9 = false;
      bVar6 = false;
      bVar7 = false;
      bVar8 = false;
      do {
         uVar16 = ( ulong ) * puVar15;
         if (*(uint*)( this + 0x40 ) <= *puVar15) goto LAB_001075fb;
         uVar1 = *(uint*)( *(long*)( this + 0x48 ) + uVar16 * 4 );
         uVar16 = (ulong)uVar1;
         if (*(uint*)( this + 0x30 ) <= uVar1) {
            uVar19 = ( ulong ) * (uint*)( this + 0x30 );
            goto LAB_001075fb;
         }
         bVar13 = bVar7;
         bVar5 = bVar9;
         if (param_3 != ( (undefined4*)( uVar16 + *(long*)( this + 0x38 ) ) )[0xc]) break;
         switch (*(undefined4*)( uVar16 + *(long*)( this + 0x38 ) )) {
            default:
        bVar13 = (bool)(bVar8 & bVar7);
        break;
            case 1:
            case 2:
            case 3:
            case 4:
            case 7:
            case 8:
            case 9:
            case 10:
            case 0xb:
        bVar8 = bVar14;
        break;
            case 5:
        bVar7 = bVar14;
        bVar13 = bVar8;
        break;
            case 6:
        bVar13 = (bool)(bVar8 & bVar7);
        bVar6 = bVar14;
        break;
            case 0xd:
        bVar13 = (bool)(bVar8 & bVar7);
        bVar9 = bVar14;
         }
         if (( bVar13 ) && ( bVar13 = (bool)( bVar6 & bVar9 ) ),bVar4 = bVar13,bVar5 = bVar13,bVar13) goto LAB_001077ec;
         uVar11 = uVar11 + 1;
         puVar15 = puVar15 + 3;
         bVar13 = bVar7;
         bVar5 = bVar9;
      } while ( uVar11 < param_8 );
      if (bVar8 || bVar13) {
         if (bVar8) {
            bVar4 = bVar6;
            if ((bool)( bVar13 | bVar6 )) {
               LAB_001077ec:bVar6 = bVar4;
               if (bVar13) {
                  bVar4 = (bool)( bVar4 | bVar5 );
                  String::operator +=((String*)&local_88, " (");
                  String::operator +=((String*)&local_88, "Copy");
                  String::operator +=((String*)&local_88, "+");
                  goto LAB_00107841;
               }
               String::operator +=((String*)&local_88, " (");
               String::operator +=((String*)&local_88, "Copy");
            } else {
               String::operator +=((String*)&local_88, " (");
               String::operator +=((String*)&local_88, "Copy");
               bVar6 = false;
               if (!bVar5) {
                  pcVar18 = "";
                  String::operator +=((String*)&local_88, "");
                  bVar4 = false;
                  bVar6 = false;
                  goto LAB_00107739;
               }
            }
            String::operator +=((String*)&local_88, "+");
            String::operator +=((String*)&local_88, "");
            pcVar18 = "";
         } else {
            bVar4 = (bool)( bVar6 | bVar5 );
            String::operator +=((String*)&local_88, " (");
            String::operator +=((String*)&local_88, "");
            String::operator +=((String*)&local_88, "");
            pcVar18 = "";
            if (bVar13) {
               LAB_00107841:pcVar18 = "Compute";
            }
            LAB_00107739:String::operator +=((String*)&local_88, pcVar18);
            pcVar18 = "+";
            if (!bVar4) {
               pcVar18 = "";
            }
         }
      } else {
         if (( !bVar6 ) && ( !bVar5 )) goto LAB_001074c2;
         String::operator +=((String*)&local_88, " (");
         String::operator +=((String*)&local_88, "");
         String::operator +=((String*)&local_88, "");
         pcVar18 = "";
         if (bVar13) {
            pcVar18 = "Compute";
         }
         String::operator +=((String*)&local_88, pcVar18);
         pcVar18 = "";
      }
      String::operator +=((String*)&local_88, pcVar18);
      if (bVar6) {
         String::operator +=((String*)&local_88, "Draw");
         if (bVar5) {
            String::operator +=((String*)&local_88, "+");
            goto LAB_001077d5;
         }
         String::operator +=((String*)&local_88, "");
         LAB_001074a4:pcVar18 = "";
      } else {
         String::operator +=((String*)&local_88, "");
         String::operator +=((String*)&local_88, "");
         if (!bVar5) goto LAB_001074a4;
         LAB_001077d5:pcVar18 = "Custom";
      }
      String::operator +=((String*)&local_88, pcVar18);
      String::operator +=((String*)&local_88, ")");
   }
   LAB_001074c2:String::utf8();
   plVar2 = *(long**)this;
   pcVar3 = *(code**)( *plVar2 + 0x4c0 );
   uVar12 = CharString::get_data();
   local_68 = (char*)*param_2;
   ( *pcVar3 )(plVar2, (String*)&local_68, uVar12, &local_58);
   lVar10 = local_70;
   *param_9 = param_3;
   *param_10 = param_4;
   if (local_70 != 0) {
      LOCK();
      plVar2 = (long*)( local_70 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar10 + -0x10 ), false);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         goto LAB_00107534;
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   LAB_00107534:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RenderingDeviceGraph::_run_label_command_change(RenderingDeviceDriver::CommandBufferID, int, int,
   bool, bool, RenderingDeviceGraph::RecordedCommandSort const*, unsigned int, int&, int&) */void RenderingDeviceGraph::_run_label_command_change(long param_1) {
   if (*(int*)( param_1 + 0x18c ) != 0) {
      _run_label_command_change();
      return;
   }
   return;
}/* RenderingDeviceGraph::_run_render_commands(int, RenderingDeviceGraph::RecordedCommandSort const*,
   unsigned int, RenderingDeviceDriver::CommandBufferID&, RenderingDeviceGraph::CommandBufferPool&,
   int&, int&) */void RenderingDeviceGraph::_run_render_commands(RenderingDeviceGraph *this, int param_1, RecordedCommandSort_conflict *param_2, uint param_3, CommandBufferID *param_4, CommandBufferPool *param_5, int *param_6, int *param_7) {
   undefined4 uVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   long lVar5;
   long lVar6;
   void *pvVar7;
   uint uVar8;
   ulong uVar9;
   RecordedDrawListCommand *pRVar10;
   RecordedDrawListCommand *pRVar11;
   long *plVar12;
   uint uVar13;
   long in_FS_OFFSET;
   RecordedCommandSort_conflict *local_d8;
   uint local_d0;
   ulong local_a0;
   ulong local_80;
   long local_68;
   long local_60;
   undefined8 local_58;
   long local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_d8 = param_2;
   local_d0 = param_3;
   if (param_3 != 0) {
      do {
         uVar13 = *(uint*)( this + 0x40 );
         uVar9 = ( ulong ) * (uint*)( local_d8 + 8 );
         if (uVar13 <= *(uint*)( local_d8 + 8 )) {
            LAB_00107a9a:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar9, (ulong)uVar13, "p_index", "count", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         uVar13 = *(uint*)( this + 0x30 );
         uVar8 = *(uint*)( *(long*)( this + 0x48 ) + uVar9 * 4 );
         if (uVar13 <= uVar8) {
            uVar9 = (ulong)uVar8;
            goto LAB_00107a9a;
         }
         local_48 = *(long*)param_4;
         pRVar10 = (RecordedDrawListCommand*)( (ulong)uVar8 + *(long*)( this + 0x38 ) );
         if (*(int*)( this + 0x18c ) != 0) {
            _run_label_command_change(this, &local_48, *(undefined4*)( pRVar10 + 0x30 ), param_1, 0, 1, local_d8, local_d0, param_6, param_7);
         }
         switch (*(undefined4*)pRVar10) {
            default:
        goto switchD_00107a91_caseD_0;
            case 1:
        local_48 = *(long *)(pRVar10 + 0x50);
        local_50 = *(long *)param_4;
        (**(code **)(**(long **)this + 0x348))
                  (*(long **)this,&local_50,&local_48,*(undefined4 *)(pRVar10 + 0x58),
                   *(undefined4 *)(pRVar10 + 0x5c));
        break;
            case 2:
            case 3:
        local_48 = *(long *)(pRVar10 + 0x58);
        local_50 = *(long *)(pRVar10 + 0x50);
        local_58 = *(undefined8 *)param_4;
        (**(code **)(**(long **)this + 0x350))
                  (*(long **)this,&local_58,&local_50,&local_48,pRVar10 + 0x60);
        break;
            case 4:
        if (*(int *)(pRVar10 + 0x58) != 0) {
          uVar13 = 0;
          pRVar11 = pRVar10 + 0x68;
          do {
            local_48 = *(long *)(pRVar10 + 0x50);
            uVar13 = uVar13 + 1;
            local_50 = *(long *)(pRVar11 + -8);
            local_58 = *(undefined8 *)param_4;
            (**(code **)(**(long **)this + 0x350))
                      (*(long **)this,&local_58,&local_50,&local_48,pRVar11);
            pRVar11 = pRVar11 + 0x20;
          } while (uVar13 < *(uint *)(pRVar10 + 0x58));
        }
        break;
            case 5:
        local_48 = *(long *)param_4;
        if ((this[0x18] != (RenderingDeviceGraph)0x0) && (this[0x221] != (RenderingDeviceGraph)0x0))
        {
          this[0x221] = (RenderingDeviceGraph)0x0;
          (**(code **)(**(long **)this + 0x290))(*(long **)this,&local_48);
          uVar13 = *(uint *)(param_5 + 0x28);
          if (*(uint *)(param_5 + 8) <= uVar13) {
            do {
              local_48 = *(long *)param_5;
              (**(code **)(**(long **)this + 0x278))(&local_60,*(long **)this,&local_48);
              (**(code **)(**(long **)this + 0x230))(&local_58);
              lVar2 = local_60;
              uVar13 = *(uint *)(param_5 + 8);
              if (uVar13 == *(uint *)(param_5 + 0xc)) {
                uVar9 = (ulong)(uVar13 * 2);
                if (uVar13 * 2 == 0) {
                  uVar9 = 1;
                }
                *(int *)(param_5 + 0xc) = (int)uVar9;
                lVar6 = Memory::realloc_static(*(void **)(param_5 + 0x10),uVar9 * 8,false);
                *(long *)(param_5 + 0x10) = lVar6;
                if (lVar6 == 0) {
LAB_001084f7:
                  _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                                   "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar3 = (code *)invalidInstructionException();
                  (*pcVar3)();
                }
                uVar13 = *(uint *)(param_5 + 8);
              }
              else {
                lVar6 = *(long *)(param_5 + 0x10);
              }
              uVar4 = local_58;
              uVar8 = uVar13 + 1;
              pvVar7 = *(void **)(param_5 + 0x20);
              *(uint *)(param_5 + 8) = uVar8;
              *(long *)(lVar6 + (ulong)uVar13 * 8) = lVar2;
              uVar13 = *(uint *)(param_5 + 0x18);
              if (uVar13 == *(uint *)(param_5 + 0x1c)) {
                uVar9 = (ulong)(uVar13 * 2);
                if (uVar13 * 2 == 0) {
                  uVar9 = 1;
                }
                *(int *)(param_5 + 0x1c) = (int)uVar9;
                pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar9 * 8,false);
                *(void **)(param_5 + 0x20) = pvVar7;
                if (pvVar7 == (void *)0x0) goto LAB_001084f7;
                uVar13 = *(uint *)(param_5 + 0x18);
                uVar8 = *(uint *)(param_5 + 8);
              }
              *(uint *)(param_5 + 0x18) = uVar13 + 1;
              *(undefined8 *)((long)pvVar7 + (ulong)uVar13 * 8) = uVar4;
              uVar13 = *(uint *)(param_5 + 0x28);
            } while (uVar8 <= uVar13);
          }
          plVar12 = *(long **)this;
          *(uint *)(param_5 + 0x28) = uVar13 + 1;
          local_48 = *(long *)(*(long *)(param_5 + 0x10) + (ulong)uVar13 * 8);
          lVar2 = *plVar12;
          *(long *)param_4 = local_48;
          (**(code **)(lVar2 + 0x280))(plVar12,&local_48);
        }
        local_48 = *(long *)param_4;
        _run_compute_list_command(this,&local_48,pRVar10 + 0x58,*(undefined4 *)(pRVar10 + 0x50));
        break;
            case 6:
        if (this[0x18] != (RenderingDeviceGraph)0x0) {
          this[0x221] = (RenderingDeviceGraph)0x1;
        }
        plVar12 = *(long **)this;
        local_48 = *(long *)param_4;
        if (pRVar10[0x8c] != (RecordedDrawListCommand)0x0) {
          (**(code **)(*plVar12 + 0x290))(plVar12,&local_48);
          uVar13 = *(uint *)(param_5 + 0x28);
          if (*(uint *)(param_5 + 8) <= uVar13) {
            do {
              local_48 = *(long *)param_5;
              (**(code **)(**(long **)this + 0x278))(&local_50,*(long **)this,&local_48);
              (**(code **)(**(long **)this + 0x230))(&local_48);
              lVar2 = local_50;
              uVar13 = *(uint *)(param_5 + 8);
              if (uVar13 == *(uint *)(param_5 + 0xc)) {
                uVar9 = (ulong)(uVar13 * 2);
                if (uVar13 * 2 == 0) {
                  uVar9 = 1;
                }
                *(int *)(param_5 + 0xc) = (int)uVar9;
                lVar6 = Memory::realloc_static(*(void **)(param_5 + 0x10),uVar9 * 8,false);
                *(long *)(param_5 + 0x10) = lVar6;
                if (lVar6 == 0) goto LAB_001084f7;
                uVar13 = *(uint *)(param_5 + 8);
              }
              else {
                lVar6 = *(long *)(param_5 + 0x10);
              }
              lVar5 = local_48;
              uVar8 = uVar13 + 1;
              pvVar7 = *(void **)(param_5 + 0x20);
              *(uint *)(param_5 + 8) = uVar8;
              *(long *)(lVar6 + (ulong)uVar13 * 8) = lVar2;
              uVar13 = *(uint *)(param_5 + 0x18);
              if (uVar13 == *(uint *)(param_5 + 0x1c)) {
                uVar9 = (ulong)(uVar13 * 2);
                if (uVar13 * 2 == 0) {
                  uVar9 = 1;
                }
                *(int *)(param_5 + 0x1c) = (int)uVar9;
                pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar9 * 8,false);
                *(void **)(param_5 + 0x20) = pvVar7;
                if (pvVar7 == (void *)0x0) goto LAB_001084f7;
                uVar13 = *(uint *)(param_5 + 0x18);
                uVar8 = *(uint *)(param_5 + 8);
              }
              *(uint *)(param_5 + 0x18) = uVar13 + 1;
              *(long *)((long)pvVar7 + (ulong)uVar13 * 8) = lVar5;
              uVar13 = *(uint *)(param_5 + 0x28);
            } while (uVar8 <= uVar13);
          }
          plVar12 = *(long **)this;
          *(uint *)(param_5 + 0x28) = uVar13 + 1;
          local_48 = *(long *)(*(long *)(param_5 + 0x10) + (ulong)uVar13 * 8);
          lVar2 = *plVar12;
          *(long *)param_4 = local_48;
          (**(code **)(lVar2 + 0x280))(plVar12,&local_48);
          plVar12 = *(long **)this;
        }
        uVar1 = *(undefined4 *)(pRVar10 + 0x80);
        local_48 = *(long *)param_4;
        (**(code **)(*plVar12 + 0x4d0))(plVar12,&local_48,*(undefined4 *)(pRVar10 + 0x88));
        local_68 = 0;
        local_60 = 0;
        if (*(long *)(pRVar10 + 0x50) == 0) {
          local_68 = *(long *)(pRVar10 + 0x60);
          local_60 = *(long *)(pRVar10 + 0x58);
        }
        else {
          _get_draw_list_render_pass_and_framebuffer
                    (this,pRVar10,(RenderPassID *)&local_68,(FramebufferID *)&local_60);
        }
        if ((local_60 != 0) && (local_68 != 0)) {
          local_58 = *(undefined8 *)param_4;
          local_50 = local_68;
          local_48 = local_60;
          (**(code **)(**(long **)this + 0x3c0))
                    (*(long **)this,&local_58,&local_50,&local_48,*(undefined4 *)(pRVar10 + 0x6c),
                     pRVar10 + 0x70,pRVar10 + 0x90,uVar1);
          local_48 = *(long *)param_4;
          _run_draw_list_command
                    (this,&local_48,
                     pRVar10 + (ulong)*(uint *)(pRVar10 + 0x84) * 0x10 + 0x90 +
                               (ulong)*(uint *)(pRVar10 + 0x80) * 0x10,
                     *(undefined4 *)(pRVar10 + 0x68));
          local_48 = *(long *)param_4;
          (**(code **)(**(long **)this + 0x3c8))(*(long **)this,&local_48);
        }
        break;
            case 7:
        local_48 = *(long *)(pRVar10 + 0x50);
        local_50 = *(long *)param_4;
        (**(code **)(**(long **)this + 0x368))
                  (*(long **)this,&local_50,&local_48,8,pRVar10 + 0x70,pRVar10 + 0x58);
        break;
            case 8:
        local_a0 = local_a0 & 0xffffffff00000000 | (ulong)*(uint *)(pRVar10 + 0x60);
        local_48 = *(long *)(pRVar10 + 0x58);
        local_50 = *(long *)(pRVar10 + 0x50);
        local_58 = *(undefined8 *)param_4;
        (**(code **)(**(long **)this + 0x358))
                  (*(long **)this,&local_58,&local_50,7,&local_48,8,pRVar10 + 0x68,local_a0);
        break;
            case 9:
        local_48 = *(long *)(pRVar10 + 0x58);
        local_50 = *(long *)(pRVar10 + 0x50);
        local_58 = *(undefined8 *)param_4;
        (**(code **)(**(long **)this + 0x378))(*(long **)this,&local_58,&local_50,7,&local_48);
        break;
            case 10:
        local_48 = *(long *)(pRVar10 + 0x58);
        local_50 = *(long *)(pRVar10 + 0x50);
        local_58 = *(undefined8 *)param_4;
        (**(code **)(**(long **)this + 0x360))
                  (*(long **)this,&local_58,&local_50,9,*(undefined4 *)(pRVar10 + 0x60),
                   *(undefined4 *)(pRVar10 + 100),&local_48,10,*(undefined4 *)(pRVar10 + 0x68),
                   *(undefined4 *)(pRVar10 + 0x6c));
        break;
            case 0xb:
        if (*(int *)(pRVar10 + 0x58) != 0) {
          uVar13 = 0;
          pRVar11 = pRVar10 + 0x68;
          do {
            uVar13 = uVar13 + 1;
            pcVar3 = *(code **)(**(long **)this + 0x370);
            local_80 = local_80 & 0xffffffff00000000 | 1;
            local_48 = *(long *)(pRVar10 + 0x50);
            local_50 = *(long *)(pRVar11 + -8);
            local_58 = *(undefined8 *)param_4;
            (*pcVar3)(*(long **)this,&local_58,&local_50,&local_48,8,pcVar3,pRVar11,local_80);
            pRVar11 = pRVar11 + 0x40;
          } while (uVar13 < *(uint *)(pRVar10 + 0x58));
        }
        break;
            case 0xc:
        local_48 = *(long *)(pRVar10 + 0x50);
        local_50 = *(long *)param_4;
        (**(code **)(**(long **)this + 0x4b8))
                  (*(long **)this,&local_50,&local_48,*(undefined4 *)(pRVar10 + 0x58));
        break;
            case 0xd:
        local_48 = *(long *)param_4;
        (**(code **)(pRVar10 + 0x50))(*(undefined8 *)this,&local_48,*(undefined8 *)(pRVar10 + 0x58))
        ;
         }
         local_d8 = local_d8 + 0xc;
         local_d0 = local_d0 - 1;
      } while ( local_d0 != 0 );
   }
   switchD_00107a91_caseD_0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RenderingDeviceGraph::_group_barriers_for_render_commands(RenderingDeviceDriver::CommandBufferID,
   RenderingDeviceGraph::RecordedCommandSort const*, unsigned int, bool) */void RenderingDeviceGraph::_group_barriers_for_render_commands(RenderingDeviceGraph *this, undefined8 *param_2, long param_3, uint param_4, char param_5) {
   LocalVector<RenderingDeviceDriver::TextureBarrier,unsigned_int,false,false> *this_00;
   uint *puVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   code *pcVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   uint uVar9;
   ulong uVar10;
   void *pvVar11;
   int iVar12;
   undefined8 uVar13;
   ulong uVar14;
   RenderingDeviceGraph *pRVar15;
   long lVar16;
   int iVar17;
   undefined8 uVar18;
   uint *puVar19;
   LocalVector<RenderingDeviceDriver::TextureBarrier,unsigned_int,false,false> *this_01;
   long in_FS_OFFSET;
   bool bVar20;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( (byte)this[0x220] & 1 ) == 0) goto LAB_001085a3;
   this_01 = (LocalVector<RenderingDeviceDriver::TextureBarrier,unsigned_int,false,false>*)( this + 0x1f0 );
   *(undefined1(*) [16])( this + 0x1d0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1e0 ) = (undefined1[16])0x0;
   this_00 = (LocalVector<RenderingDeviceDriver::TextureBarrier,unsigned_int,false,false>*)( this + 0x200 );
   LocalVector<RenderingDeviceDriver::TextureBarrier,unsigned_int,false,false>::resize(this_01, 0);
   LocalVector<RenderingDeviceDriver::TextureBarrier,unsigned_int,false,false>::resize(this_00, 0);
   if (*(int*)( this + 0x210 ) != 0) {
      *(undefined4*)( this + 0x210 ) = 0;
   }
   uVar13 = _UNK_001129e8;
   *(undefined8*)( this + 0x1d0 ) = __LC84;
   *(undefined8*)( this + 0x1d8 ) = uVar13;
   if (param_4 != 0) {
      puVar19 = (uint*)( param_3 + 8 );
      puVar1 = puVar19 + (ulong)param_4 * 3;
      do {
         uVar10 = ( ulong ) * puVar19;
         uVar14 = ( ulong ) * (uint*)( this + 0x40 );
         if (*(uint*)( this + 0x40 ) <= *puVar19) {
            LAB_00108758:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar10, uVar14, "p_index", "count", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }
         uVar14 = ( ulong ) * (uint*)( this + 0x30 );
         uVar9 = *(uint*)( *(long*)( this + 0x48 ) + uVar10 * 4 );
         if (*(uint*)( this + 0x30 ) <= uVar9) {
            uVar10 = (ulong)uVar9;
            goto LAB_00108758;
         }
         lVar16 = (ulong)uVar9 + *(long*)( this + 0x38 );
         iVar17 = 0;
         iVar12 = *(int*)( lVar16 + 0x1c );
         *(ulong*)( this + 0x1d0 ) = *(ulong*)( this + 0x1d0 ) | *(ulong*)( lVar16 + 0x38 );
         *(ulong*)( this + 0x1d8 ) = *(ulong*)( this + 0x1d8 ) | *(ulong*)( lVar16 + 0x40 );
         *(ulong*)( this + 0x1e0 ) = *(ulong*)( this + 0x1e0 ) | *(ulong*)( lVar16 + 8 );
         *(ulong*)( this + 0x1e8 ) = *(ulong*)( this + 0x1e8 ) | *(ulong*)( lVar16 + 0x10 );
         if (0 < iVar12) {
            do {
               uVar14 = ( ulong ) * (uint*)( this + 0x50 );
               uVar9 = iVar17 + *(int*)( lVar16 + 0x18 );
               uVar10 = (ulong)uVar9;
               if (*(uint*)( this + 0x50 ) <= uVar9) goto LAB_00108758;
               pvVar11 = *(void**)( this + 0x1f8 );
               puVar2 = (undefined8*)( *(long*)( this + 0x58 ) + uVar10 * 0x38 );
               uVar18 = *puVar2;
               uVar7 = puVar2[1];
               uVar8 = puVar2[2];
               uVar13 = puVar2[3];
               uVar3 = puVar2[4];
               uVar5 = puVar2[5];
               uVar6 = puVar2[6];
               uVar9 = *(uint*)( this + 0x1f0 );
               if (uVar9 == *(uint*)( this + 500 )) {
                  uVar10 = ( ulong )(uVar9 * 2);
                  if (uVar9 * 2 == 0) {
                     uVar10 = 1;
                  }
                  *(int*)( this + 500 ) = (int)uVar10;
                  pvVar11 = (void*)Memory::realloc_static(pvVar11, uVar10 * 0x38, false);
                  *(void**)( this + 0x1f8 ) = pvVar11;
                  if (pvVar11 == (void*)0x0) goto LAB_00108970;
                  uVar9 = *(uint*)( this + 0x1f0 );
               }
               iVar17 = iVar17 + 1;
               *(uint*)( this + 0x1f0 ) = uVar9 + 1;
               puVar2 = (undefined8*)( (long)pvVar11 + (ulong)uVar9 * 0x38 );
               *puVar2 = uVar18;
               puVar2[4] = uVar3;
               puVar2[1] = uVar7;
               puVar2[2] = uVar8;
               puVar2[3] = uVar13;
               puVar2[5] = uVar5;
               puVar2[6] = uVar6;
            } while ( iVar17 < *(int*)( lVar16 + 0x1c ) );
         }
         iVar12 = 0;
         if (0 < *(int*)( lVar16 + 0x24 )) {
            do {
               uVar14 = ( ulong ) * (uint*)( this + 0x60 );
               uVar9 = iVar12 + *(int*)( lVar16 + 0x20 );
               uVar10 = (ulong)uVar9;
               if (*(uint*)( this + 0x60 ) <= uVar9) goto LAB_00108758;
               pvVar11 = *(void**)( this + 0x208 );
               puVar2 = (undefined8*)( *(long*)( this + 0x68 ) + uVar10 * 0x38 );
               uVar18 = *puVar2;
               uVar7 = puVar2[1];
               uVar8 = puVar2[2];
               uVar13 = puVar2[3];
               uVar3 = puVar2[4];
               uVar5 = puVar2[5];
               uVar6 = puVar2[6];
               uVar9 = *(uint*)( this + 0x200 );
               if (uVar9 == *(uint*)( this + 0x204 )) {
                  uVar10 = ( ulong )(uVar9 * 2);
                  if (uVar9 * 2 == 0) {
                     uVar10 = 1;
                  }
                  *(int*)( this + 0x204 ) = (int)uVar10;
                  pvVar11 = (void*)Memory::realloc_static(pvVar11, uVar10 * 0x38, false);
                  *(void**)( this + 0x208 ) = pvVar11;
                  if (pvVar11 == (void*)0x0) goto LAB_00108970;
                  uVar9 = *(uint*)( this + 0x200 );
               }
               iVar12 = iVar12 + 1;
               *(uint*)( this + 0x200 ) = uVar9 + 1;
               puVar2 = (undefined8*)( (long)pvVar11 + (ulong)uVar9 * 0x38 );
               *puVar2 = uVar18;
               puVar2[4] = uVar3;
               puVar2[1] = uVar7;
               puVar2[2] = uVar8;
               puVar2[3] = uVar13;
               puVar2[5] = uVar5;
               puVar2[6] = uVar6;
            } while ( iVar12 < *(int*)( lVar16 + 0x24 ) );
         }
         iVar12 = 0;
         if (0 < *(int*)( lVar16 + 0x2c )) {
            do {
               uVar14 = ( ulong ) * (uint*)( this + 0x70 );
               uVar9 = iVar12 + *(int*)( lVar16 + 0x28 );
               if (*(uint*)( this + 0x70 ) <= uVar9) {
                  uVar10 = (ulong)uVar9;
                  goto LAB_00108758;
               }
               pvVar11 = *(void**)( this + 0x218 );
               puVar2 = (undefined8*)( *(long*)( this + 0x78 ) + (ulong)uVar9 * 0x28 );
               uVar13 = *puVar2;
               uVar5 = puVar2[1];
               uVar6 = puVar2[2];
               uVar18 = puVar2[3];
               uVar3 = puVar2[4];
               uVar9 = *(uint*)( this + 0x210 );
               if (uVar9 == *(uint*)( this + 0x214 )) {
                  uVar10 = ( ulong )(uVar9 * 2);
                  if (uVar9 * 2 == 0) {
                     uVar10 = 1;
                  }
                  *(int*)( this + 0x214 ) = (int)uVar10;
                  pvVar11 = (void*)Memory::realloc_static(pvVar11, uVar10 * 0x28, false);
                  *(void**)( this + 0x218 ) = pvVar11;
                  if (pvVar11 == (void*)0x0) {
                     LAB_00108970:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar4 = (code*)invalidInstructionException();
                     ( *pcVar4 )();
                  }
                  uVar9 = *(uint*)( this + 0x210 );
               }
               iVar12 = iVar12 + 1;
               puVar2 = (undefined8*)( (long)pvVar11 + (ulong)uVar9 * 0x28 );
               *(uint*)( this + 0x210 ) = uVar9 + 1;
               *puVar2 = uVar13;
               puVar2[1] = uVar5;
               puVar2[2] = uVar6;
               puVar2[3] = uVar18;
               puVar2[4] = uVar3;
            } while ( iVar12 < *(int*)( lVar16 + 0x2c ) );
         }
         puVar19 = puVar19 + 3;
      } while ( puVar19 != puVar1 );
   }
   uVar13 = _UNK_001129f8;
   pRVar15 = this + 0x1e0;
   if (param_5 == '\0') {
      iVar12 = *(int*)( this + 0x1f0 );
      iVar17 = *(int*)( this + 0x210 );
      if (*(long*)( this + 0x1e0 ) != 0) goto LAB_00108ae1;
      lVar16 = *(long*)( this + 0x1e8 );
      if (iVar12 != 0) {
         if (lVar16 == 0) {
            pRVar15 = (RenderingDeviceGraph*)0x0;
         }
         bVar20 = lVar16 != 0;
         goto LAB_00108b06;
      }
      iVar12 = *(int*)( this + 0x200 );
      if (iVar12 != 0) {
         if (lVar16 != 0) goto LAB_00108b01;
         pRVar15 = (RenderingDeviceGraph*)0x0;
         bVar20 = false;
         this_01 = this_00;
         goto LAB_00108b06;
      }
      if (lVar16 != 0) goto LAB_00108b01;
      if (iVar17 == 0) goto LAB_001085a3;
      uVar13 = *(undefined8*)( this + 0x208 );
      pRVar15 = (RenderingDeviceGraph*)0x0;
      bVar20 = false;
      iVar12 = 0;
      LAB_00108c63:uVar18 = *(undefined8*)( this + 0x218 );
   } else {
      iVar12 = *(int*)( this + 0x1f0 );
      iVar17 = *(int*)( this + 0x210 );
      *(undefined8*)( this + 0x1d0 ) = __LC85;
      *(undefined8*)( this + 0x1d8 ) = uVar13;
      uVar13 = _UNK_00112a08;
      *(undefined8*)( this + 0x1e0 ) = __LC86;
      *(undefined8*)( this + 0x1e8 ) = uVar13;
      LAB_00108ae1:bVar20 = true;
      if (iVar12 == 0) {
         if (*(int*)( this + 0x200 ) == 0) {
            iVar12 = 0;
         } else {
            iVar12 = *(int*)( this + 0x200 );
         }
         LAB_00108b01:bVar20 = true;
         this_01 = this_00;
      }
      LAB_00108b06:uVar13 = *(undefined8*)( this_01 + 8 );
      if (iVar17 != 0) goto LAB_00108c63;
      uVar18 = 0;
      iVar17 = 0;
   }
   local_48 = *param_2;
   ( **(code**)( **(long**)this + 0x210 ) )(*(long**)this, &local_48, *(undefined8*)( this + 0x1d0 ), *(undefined8*)( this + 0x1d8 ), pRVar15, bVar20, uVar18, iVar17, uVar13, iVar12);
   if (( *(int*)( this + 0x1f0 ) != 0 ) && ( *(int*)( this + 0x200 ) != 0 )) {
      local_48 = *param_2;
      ( **(code**)( **(long**)this + 0x210 ) )(*(long**)this, &local_48, *(undefined8*)( this + 0x1d0 ), *(undefined8*)( this + 0x1d8 ), 0, 0, 0, 0, *(undefined8*)( this + 0x208 ), *(int*)( this + 0x200 ));
   }
   LAB_001085a3:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* RenderingDeviceGraph::~RenderingDeviceGraph() */void RenderingDeviceGraph::~RenderingDeviceGraph(RenderingDeviceGraph *this) {
   if (*(long*)( this + 0x230 ) != 0) {
      LocalVector<RenderingDeviceGraph::Frame,unsigned_int,false,true>::resize((LocalVector<RenderingDeviceGraph::Frame,unsigned_int,false,true>*)( this + 0x228 ), 0);
      if (*(void**)( this + 0x230 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 0x230 ), false);
      }
   }
   if (*(void**)( this + 0x218 ) != (void*)0x0) {
      if (*(int*)( this + 0x210 ) != 0) {
         *(undefined4*)( this + 0x210 ) = 0;
      }
      Memory::free_static(*(void**)( this + 0x218 ), false);
   }
   if (*(long*)( this + 0x208 ) != 0) {
      LocalVector<RenderingDeviceDriver::TextureBarrier,unsigned_int,false,false>::resize((LocalVector<RenderingDeviceDriver::TextureBarrier,unsigned_int,false,false>*)( this + 0x200 ), 0);
      if (*(void**)( this + 0x208 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 0x208 ), false);
      }
   }
   if (*(long*)( this + 0x1f8 ) != 0) {
      LocalVector<RenderingDeviceDriver::TextureBarrier,unsigned_int,false,false>::resize((LocalVector<RenderingDeviceDriver::TextureBarrier,unsigned_int,false,false>*)( this + 0x1f0 ), 0);
      if (*(void**)( this + 0x1f8 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 0x1f8 ), false);
      }
   }
   if (*(void**)( this + 0x1b8 ) != (void*)0x0) {
      if (*(int*)( this + 0x1b0 ) != 0) {
         *(undefined4*)( this + 0x1b0 ) = 0;
      }
      Memory::free_static(*(void**)( this + 0x1b8 ), false);
   }
   if (*(void**)( this + 0x1a8 ) != (void*)0x0) {
      if (*(int*)( this + 0x1a0 ) != 0) {
         *(undefined4*)( this + 0x1a0 ) = 0;
      }
      Memory::free_static(*(void**)( this + 0x1a8 ), false);
   }
   if (*(void**)( this + 0x198 ) != (void*)0x0) {
      if (*(int*)( this + 400 ) != 0) {
         *(undefined4*)( this + 400 ) = 0;
      }
      Memory::free_static(*(void**)( this + 0x198 ), false);
   }
   if (*(void**)( this + 0x170 ) != (void*)0x0) {
      if (*(int*)( this + 0x168 ) != 0) {
         *(undefined4*)( this + 0x168 ) = 0;
      }
      Memory::free_static(*(void**)( this + 0x170 ), false);
   }
   if (*(void**)( this + 0x160 ) != (void*)0x0) {
      if (*(int*)( this + 0x158 ) != 0) {
         *(undefined4*)( this + 0x158 ) = 0;
      }
      Memory::free_static(*(void**)( this + 0x160 ), false);
   }
   if (*(void**)( this + 0x150 ) != (void*)0x0) {
      if (*(int*)( this + 0x148 ) != 0) {
         *(undefined4*)( this + 0x148 ) = 0;
      }
      Memory::free_static(*(void**)( this + 0x150 ), false);
   }
   if (*(void**)( this + 0x138 ) != (void*)0x0) {
      if (*(int*)( this + 0x130 ) != 0) {
         *(undefined4*)( this + 0x130 ) = 0;
      }
      Memory::free_static(*(void**)( this + 0x138 ), false);
   }
   if (*(void**)( this + 0x128 ) != (void*)0x0) {
      if (*(int*)( this + 0x120 ) != 0) {
         *(undefined4*)( this + 0x120 ) = 0;
      }
      Memory::free_static(*(void**)( this + 0x128 ), false);
   }
   if (*(void**)( this + 0xe0 ) != (void*)0x0) {
      if (*(int*)( this + 0xd8 ) != 0) {
         *(undefined4*)( this + 0xd8 ) = 0;
      }
      Memory::free_static(*(void**)( this + 0xe0 ), false);
   }
   if (*(void**)( this + 0xd0 ) != (void*)0x0) {
      if (*(int*)( this + 200 ) != 0) {
         *(undefined4*)( this + 200 ) = 0;
      }
      Memory::free_static(*(void**)( this + 0xd0 ), false);
   }
   if (*(void**)( this + 0xc0 ) != (void*)0x0) {
      if (*(int*)( this + 0xb8 ) != 0) {
         *(undefined4*)( this + 0xb8 ) = 0;
      }
      Memory::free_static(*(void**)( this + 0xc0 ), false);
   }
   if (*(void**)( this + 0xa8 ) != (void*)0x0) {
      if (*(int*)( this + 0xa0 ) != 0) {
         *(undefined4*)( this + 0xa0 ) = 0;
      }
      Memory::free_static(*(void**)( this + 0xa8 ), false);
   }
   if (*(void**)( this + 0x98 ) != (void*)0x0) {
      if (*(int*)( this + 0x90 ) != 0) {
         *(undefined4*)( this + 0x90 ) = 0;
      }
      Memory::free_static(*(void**)( this + 0x98 ), false);
   }
   if (*(void**)( this + 0x88 ) != (void*)0x0) {
      if (*(int*)( this + 0x80 ) != 0) {
         *(undefined4*)( this + 0x80 ) = 0;
      }
      Memory::free_static(*(void**)( this + 0x88 ), false);
   }
   if (*(void**)( this + 0x78 ) != (void*)0x0) {
      if (*(int*)( this + 0x70 ) != 0) {
         *(undefined4*)( this + 0x70 ) = 0;
      }
      Memory::free_static(*(void**)( this + 0x78 ), false);
   }
   if (*(long*)( this + 0x68 ) != 0) {
      LocalVector<RenderingDeviceDriver::TextureBarrier,unsigned_int,false,false>::resize((LocalVector<RenderingDeviceDriver::TextureBarrier,unsigned_int,false,false>*)( this + 0x60 ), 0);
      if (*(void**)( this + 0x68 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 0x68 ), false);
      }
   }
   if (*(long*)( this + 0x58 ) != 0) {
      LocalVector<RenderingDeviceDriver::TextureBarrier,unsigned_int,false,false>::resize((LocalVector<RenderingDeviceDriver::TextureBarrier,unsigned_int,false,false>*)( this + 0x50 ), 0);
      if (*(void**)( this + 0x58 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 0x58 ), false);
      }
   }
   if (*(void**)( this + 0x48 ) != (void*)0x0) {
      if (*(int*)( this + 0x40 ) != 0) {
         *(undefined4*)( this + 0x40 ) = 0;
      }
      Memory::free_static(*(void**)( this + 0x48 ), false);
   }
   if (*(void**)( this + 0x38 ) != (void*)0x0) {
      if (*(int*)( this + 0x30 ) != 0) {
         *(undefined4*)( this + 0x30 ) = 0;
      }
      Memory::free_static(*(void**)( this + 0x38 ), false);
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 8 ));
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RenderingDeviceGraph::end(bool, bool, RenderingDeviceDriver::CommandBufferID&,
   RenderingDeviceGraph::CommandBufferPool&) */void RenderingDeviceGraph::end(RenderingDeviceGraph *this, bool param_1, bool param_2, CommandBufferID *param_3, CommandBufferPool *param_4) {
   undefined8 uVar1;
   code *pcVar2;
   uint *puVar3;
   uint *puVar4;
   void *pvVar5;
   long lVar6;
   int *piVar7;
   uint uVar8;
   RecordedCommandSort_conflict *pRVar9;
   uint uVar10;
   undefined4 *puVar11;
   ulong uVar12;
   undefined8 *puVar13;
   uint uVar14;
   ulong uVar15;
   int iVar16;
   ulong uVar17;
   uint *in_FS_OFFSET;
   byte bVar18;
   LocalVector<RenderingDeviceGraph::RecordedCommandSort,unsigned_int,false,false> *local_100;
   int local_d4;
   int local_d0;
   uint local_cc;
   undefined8 local_c8;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   long local_40;
   bVar18 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 10 );
   if (*(int*)( this + 0x188 ) == 0) goto LAB_00109458;
   if ((char)*in_FS_OFFSET == '\0') {
      uVar1 = *(undefined8*)in_FS_OFFSET;
      in_FS_OFFSET[0] = 0;
      in_FS_OFFSET[1] = 0;
      in_FS_OFFSET[0] = 0;
      in_FS_OFFSET[1] = 0;
      *(undefined1*)in_FS_OFFSET = 1;
      __cxa_thread_atexit(LocalVector<RenderingDeviceGraph::RecordedCommandSort,unsigned_int,false,false>::~LocalVector, uVar1, &__dso_handle);
      if (param_1) goto LAB_00109161;
      LAB_0010938f:local_100 = *(LocalVector<RenderingDeviceGraph::RecordedCommandSort,unsigned_int,false,false>**)in_FS_OFFSET;
      LocalVector<RenderingDeviceGraph::RecordedCommandSort,unsigned_int,false,false>::resize(local_100, 0);
      LocalVector<RenderingDeviceGraph::RecordedCommandSort,unsigned_int,false,false>::resize(local_100, *(uint*)( this + 0x188 ));
      uVar8 = *(uint*)( this + 0x188 );
      if (uVar8 != 0) {
         uVar10 = *in_FS_OFFSET;
         uVar17 = 0;
         puVar3 = (uint*)( *(long*)in_FS_OFFSET + 8 );
         do {
            uVar14 = (uint)uVar17;
            uVar15 = uVar17;
            if (uVar14 == uVar10) goto LAB_00109313;
            *puVar3 = uVar14;
            uVar17 = ( ulong )(uVar14 + 1);
            puVar3 = puVar3 + 3;
         } while ( uVar14 + 1 != uVar8 );
      }
   } else {
      if (!param_1) goto LAB_0010938f;
      LAB_00109161:if ((char)*in_FS_OFFSET == '\0') {
         uVar1 = *(undefined8*)in_FS_OFFSET;
         in_FS_OFFSET[0] = 0;
         in_FS_OFFSET[1] = 0;
         in_FS_OFFSET[0] = 0;
         in_FS_OFFSET[1] = 0;
         *(undefined1*)in_FS_OFFSET = 1;
         __cxa_thread_atexit(LocalVector<long,unsigned_int,false,false>::~LocalVector, uVar1, &__dso_handle);
      }
      if ((char)*in_FS_OFFSET == '\0') {
         uVar1 = *(undefined8*)in_FS_OFFSET;
         in_FS_OFFSET[0] = 0;
         in_FS_OFFSET[1] = 0;
         in_FS_OFFSET[0] = 0;
         in_FS_OFFSET[1] = 0;
         *(undefined1*)in_FS_OFFSET = 1;
         __cxa_thread_atexit(LocalVector<int,unsigned_int,false,false>::~LocalVector, uVar1, &__dso_handle);
      }
      if ((char)*in_FS_OFFSET == '\0') {
         uVar1 = *(undefined8*)in_FS_OFFSET;
         in_FS_OFFSET[0] = 0;
         in_FS_OFFSET[1] = 0;
         in_FS_OFFSET[0] = 0;
         in_FS_OFFSET[1] = 0;
         *(undefined1*)in_FS_OFFSET = 1;
         __cxa_thread_atexit(LocalVector<unsigned_int,unsigned_int,false,false>::~LocalVector, uVar1, &__dso_handle);
      }
      uVar8 = *(uint*)( this + 0x188 );
      uVar10 = *in_FS_OFFSET;
      pvVar5 = *(void**)in_FS_OFFSET;
      if (uVar8 < uVar10) {
         LAB_001091bf:*in_FS_OFFSET = uVar8;
         uVar10 = uVar8;
      } else if (uVar10 < uVar8) {
         if (*in_FS_OFFSET < uVar8) {
            uVar10 = uVar8 - 1 >> 1 | uVar8 - 1;
            uVar10 = uVar10 | uVar10 >> 2;
            uVar10 = uVar10 >> 4 | uVar10;
            uVar10 = uVar10 >> 8 | uVar10;
            uVar10 = ( uVar10 | uVar10 >> 0x10 ) + 1;
            *in_FS_OFFSET = uVar10;
            pvVar5 = (void*)Memory::realloc_static(pvVar5, (ulong)uVar10 * 4, false);
            *(void**)in_FS_OFFSET = pvVar5;
            if (pvVar5 == (void*)0x0) {
               /* WARNING: Subroutine does not return */
               LocalVector<RenderingDeviceGraph::AttachmentOperation,unsigned_int,false,false>::resize(0);
            }
         }
         goto LAB_001091bf;
      }
      memset(pvVar5, 0, (ulong)uVar10 << 2);
      uVar12 = 0;
      if (*(int*)( this + 0x188 ) != 0) {
         do {
            uVar15 = ( ulong ) * (uint*)( this + 0x40 );
            if (*(uint*)( this + 0x40 ) <= (uint)uVar12) {
               uVar17 = uVar12 & 0xffffffff;
               goto LAB_00109313;
            }
            uVar15 = ( ulong ) * (uint*)( this + 0x30 );
            uVar8 = *(uint*)( *(long*)( this + 0x48 ) + uVar12 * 4 );
            uVar17 = (ulong)uVar8;
            if (*(uint*)( this + 0x30 ) <= uVar8) goto LAB_00109313;
            uVar8 = *(uint*)( *(long*)( this + 0x38 ) + 4 + uVar17 );
            if (-1 < (int)uVar8) {
               lVar6 = *(long*)in_FS_OFFSET;
               do {
                  uVar17 = (ulong)uVar8;
                  uVar15 = ( ulong ) * (uint*)( this + 400 );
                  if (*(uint*)( this + 400 ) <= uVar8) goto LAB_00109313;
                  uVar15 = ( ulong ) * in_FS_OFFSET;
                  puVar3 = (uint*)( *(long*)( this + 0x198 ) + (long)(int)uVar8 * 8 );
                  uVar8 = *puVar3;
                  uVar17 = (ulong)uVar8;
                  if (*in_FS_OFFSET <= uVar8) goto LAB_00109313;
                  piVar7 = (int*)( lVar6 + uVar17 * 4 );
                  *piVar7 = *piVar7 + 1;
                  uVar8 = puVar3[1];
               } while ( -1 < (int)uVar8 );
            }
            uVar12 = uVar12 + 1;
         } while ( (uint)uVar12 < *(uint*)( this + 0x188 ) );
      }
      local_100 = *(LocalVector<RenderingDeviceGraph::RecordedCommandSort,unsigned_int,false,false>**)in_FS_OFFSET;
      LocalVector<long,unsigned_int,false,false>::resize((LocalVector<long,unsigned_int,false,false>*)local_100, 0);
      uVar17 = 0;
      if (*(int*)( this + 0x188 ) != 0) {
         do {
            uVar15 = ( ulong ) * in_FS_OFFSET;
            if (*in_FS_OFFSET <= (uint)uVar17) {
               uVar17 = uVar17 & 0xffffffff;
               goto LAB_00109313;
            }
            if (*(int*)( *(long*)( in_FS_OFFSET + 2 ) + uVar17 * 4 ) == 0) {
               uVar8 = *in_FS_OFFSET;
               pvVar5 = *(void**)in_FS_OFFSET;
               if (uVar8 == *in_FS_OFFSET) {
                  uVar12 = ( ulong )(uVar8 * 2);
                  if (uVar8 * 2 == 0) {
                     uVar12 = 1;
                  }
                  *in_FS_OFFSET = (uint)uVar12;
                  pvVar5 = (void*)Memory::realloc_static(pvVar5, uVar12 * 8, false);
                  *(void**)in_FS_OFFSET = pvVar5;
                  if (pvVar5 == (void*)0x0) goto LAB_00109cb3;
                  uVar8 = *in_FS_OFFSET;
               }
               *in_FS_OFFSET = uVar8 + 1;
               *(ulong*)( (long)pvVar5 + (ulong)uVar8 * 8 ) = uVar17;
            }
            uVar17 = uVar17 + 1;
         } while ( (uint)uVar17 < *(uint*)( this + 0x188 ) );
      }
      if (*in_FS_OFFSET != 0) {
         *in_FS_OFFSET = 0;
      }
      uVar8 = *in_FS_OFFSET;
      while (uVar8 != 0) {
         uVar17 = *(ulong*)( *(long*)( in_FS_OFFSET + 2 ) + ( ulong )(uVar8 - 1) * 8 );
         LocalVector<long,unsigned_int,false,false>::resize((LocalVector<long,unsigned_int,false,false>*)local_100, uVar8 - 1);
         uVar8 = *in_FS_OFFSET;
         if (uVar8 == in_FS_OFFSET[1]) {
            uVar12 = ( ulong )(uVar8 * 2);
            if (uVar8 * 2 == 0) {
               uVar12 = 1;
            }
            in_FS_OFFSET[1] = (uint)uVar12;
            pvVar5 = (void*)Memory::realloc_static(*(void**)( in_FS_OFFSET + 2 ), uVar12 * 4, false);
            *(void**)( in_FS_OFFSET + 2 ) = pvVar5;
            if (pvVar5 == (void*)0x0) {
               LAB_00109cb3:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0, pvVar5);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }
            uVar8 = *in_FS_OFFSET;
         }
         *in_FS_OFFSET = uVar8 + 1;
         uVar10 = (uint)uVar17;
         *(uint*)( *(long*)( in_FS_OFFSET + 2 ) + (ulong)uVar8 * 4 ) = uVar10;
         uVar15 = ( ulong ) * (uint*)( this + 0x40 );
         uVar17 = uVar17 & 0xffffffff;
         if (*(uint*)( this + 0x40 ) <= uVar10) goto LAB_00109313;
         uVar15 = ( ulong ) * (uint*)( this + 0x30 );
         uVar8 = *(uint*)( *(long*)( this + 0x48 ) + uVar17 * 4 );
         uVar17 = (ulong)uVar8;
         if (*(uint*)( this + 0x30 ) <= uVar8) goto LAB_00109313;
         uVar8 = *(uint*)( *(long*)( this + 0x38 ) + 4 + uVar17 );
         while (-1 < (int)uVar8) {
            uVar17 = (ulong)uVar8;
            uVar15 = ( ulong ) * (uint*)( this + 400 );
            if (*(uint*)( this + 400 ) <= uVar8) goto LAB_00109313;
            uVar15 = ( ulong ) * in_FS_OFFSET;
            puVar3 = (uint*)( *(long*)( this + 0x198 ) + (long)(int)uVar8 * 8 );
            uVar17 = ( ulong ) * puVar3;
            if (*in_FS_OFFSET <= *puVar3) goto LAB_00109313;
            piVar7 = (int*)( *(long*)in_FS_OFFSET + uVar17 * 4 );
            *piVar7 = *piVar7 + -1;
            if (*piVar7 == 0) {
               uVar8 = *puVar3;
               uVar10 = *in_FS_OFFSET;
               if (uVar10 == in_FS_OFFSET[1]) {
                  uVar12 = ( ulong )(uVar10 * 2);
                  if (uVar10 * 2 == 0) {
                     uVar12 = 1;
                  }
                  in_FS_OFFSET[1] = (uint)uVar12;
                  pvVar5 = (void*)Memory::realloc_static(*(void**)( in_FS_OFFSET + 2 ), uVar12 * 8, false);
                  *(void**)( in_FS_OFFSET + 2 ) = pvVar5;
                  if (pvVar5 == (void*)0x0) goto LAB_00109cb3;
                  uVar10 = *in_FS_OFFSET;
               }
               *in_FS_OFFSET = uVar10 + 1;
               *(long*)( *(long*)( in_FS_OFFSET + 2 ) + (ulong)uVar10 * 8 ) = (long)(int)uVar8;
            }
            uVar8 = puVar3[1];
         };
         uVar8 = *in_FS_OFFSET;
      };
      local_78 = __LC88;
      uStack_70 = _UNK_00112a18;
      local_68 = __LC89;
      uStack_60 = _UNK_00112a28;
      local_58 = __LC90;
      uStack_50 = _UNK_00112a38;
      local_48 = _LC91;
      LocalVector<RenderingDeviceGraph::RecordedCommandSort,unsigned_int,false,false>::resize(local_100, 0);
      LocalVector<RenderingDeviceGraph::RecordedCommandSort,unsigned_int,false,false>::resize(local_100, *(uint*)( this + 0x188 ));
      for (uVar8 = 0; uVar8 < *(uint*)( this + 0x188 ); uVar8 = uVar8 + 1) {
         uVar15 = ( ulong ) * in_FS_OFFSET;
         if (*in_FS_OFFSET <= uVar8) goto LAB_0010999e;
         uVar15 = ( ulong ) * (uint*)( this + 0x40 );
         uVar10 = *(uint*)( *(long*)in_FS_OFFSET + (ulong)uVar8 * 4 );
         if (*(uint*)( this + 0x40 ) <= uVar10) {
            uVar17 = (ulong)uVar10;
            goto LAB_00109313;
         }
         uVar12 = (ulong)uVar10;
         uVar15 = ( ulong ) * (uint*)( this + 0x30 );
         uVar14 = *(uint*)( *(long*)( this + 0x48 ) + uVar12 * 4 );
         uVar17 = (ulong)uVar14;
         if (*(uint*)( this + 0x30 ) <= uVar14) goto LAB_00109313;
         puVar11 = (undefined4*)( uVar17 + *(long*)( this + 0x38 ) );
         puVar13 = &local_c8;
         for (lVar6 = 0x14; lVar6 != 0; lVar6 = lVar6 + -1) {
            *(undefined4*)puVar13 = *puVar11;
            puVar11 = puVar11 + (ulong)bVar18 * -2 + 1;
            puVar13 = (undefined8*)( (long)puVar13 + (ulong)bVar18 * -8 + 4 );
         }
         uVar14 = *in_FS_OFFSET;
         if (uVar14 <= uVar10) {
            LAB_00109d6f:uVar17 = uVar12;
            uVar15 = (ulong)uVar14;
            goto LAB_00109313;
         }
         lVar6 = *(long*)in_FS_OFFSET;
         piVar7 = (int*)( uVar12 * 0xc + lVar6 );
         iVar16 = *piVar7;
         uVar14 = local_c8._4_4_;
         while (uVar17 = (ulong)uVar14,-1 < (int)uVar14) {
            uVar15 = ( ulong ) * (uint*)( this + 400 );
            if (*(uint*)( this + 400 ) <= uVar14) goto LAB_00109313;
            puVar3 = (uint*)( *(long*)( this + 0x198 ) + (long)(int)uVar14 * 8 );
            uVar14 = *puVar3;
            uVar17 = (ulong)uVar14;
            uVar15 = ( ulong ) * in_FS_OFFSET;
            if (*in_FS_OFFSET <= uVar14) goto LAB_00109313;
            puVar4 = (uint*)( uVar17 * 0xc + lVar6 );
            if (*puVar4 < iVar16 + 1U) {
               *puVar4 = iVar16 + 1U;
            }
            uVar14 = puVar3[1];
         };
         uVar14 = *in_FS_OFFSET;
         if (uVar14 <= uVar10) goto LAB_00109d6f;
         piVar7[2] = uVar10;
         piVar7[1] = *(int*)( (long)&local_78 + (long)(int)local_c8 * 4 );
      }
   }
   _wait_for_secondary_command_buffer_tasks(this);
   if (*(int*)( this + 0x188 ) != 0) {
      local_c8 = *(undefined8*)param_3;
      local_d4 = -1;
      local_d0 = -1;
      if (*(int*)( this + 0x18c ) != 0) {
         _run_label_command_change(this, &local_c8, 0xffffffff, 0xffffffff, 1, 1, 0, 0, &local_d4, &local_d0);
      }
      if (this[0x18] != (RenderingDeviceGraph)0x0) {
         this[0x221] = (RenderingDeviceGraph)0x0;
      }
      if (param_1) {
         LocalVector<RenderingDeviceGraph::RecordedCommandSort,unsigned_int,false,false>::sort_custom<_DefaultComparator<RenderingDeviceGraph::RecordedCommandSort>>(local_100);
         local_cc = 0;
         uVar15 = ( ulong ) * in_FS_OFFSET;
         if (*in_FS_OFFSET == 0) {
            uVar17 = 0;
            uVar15 = 0;
            LAB_00109313:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar17, uVar15, "p_index", "count", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }
         pRVar9 = *(RecordedCommandSort_conflict**)in_FS_OFFSET;
         uVar10 = *(uint*)( this + 0x188 );
         iVar16 = *(int*)pRVar9;
         if (uVar10 != 0) {
            uVar17 = 0;
            uVar8 = 0;
            do {
               uVar14 = (uint)uVar17;
               if ((uint)uVar15 <= uVar14) {
                  LAB_00109940:uVar17 = uVar17 & 0xffffffff;
                  goto LAB_00109313;
               }
               if (*(int*)( *(long*)in_FS_OFFSET + uVar17 * 0xc ) != iVar16) {
                  if ((uint)uVar15 <= uVar8) goto LAB_0010999e;
                  uVar10 = uVar14 - uVar8;
                  pRVar9 = (RecordedCommandSort_conflict*)( *(long*)in_FS_OFFSET + (ulong)uVar8 * 0xc );
                  if (uVar10 != 0) {
                     _boost_priority_for_render_commands(pRVar9, uVar10, &local_cc);
                  }
                  local_c8 = *(undefined8*)param_3;
                  _group_barriers_for_render_commands(this, &local_c8, pRVar9, uVar10, param_2);
                  _run_render_commands(this, iVar16, pRVar9, uVar10, param_3, param_4, &local_d4, &local_d0);
                  uVar15 = ( ulong ) * in_FS_OFFSET;
                  if (*in_FS_OFFSET <= uVar14) goto LAB_00109940;
                  uVar10 = *(uint*)( this + 0x188 );
                  iVar16 = *(int*)( *(long*)in_FS_OFFSET + uVar17 * 0xc );
                  uVar8 = uVar14;
               }
               uVar17 = uVar17 + 1;
            } while ( (uint)uVar17 < uVar10 );
            if ((uint)uVar15 <= uVar8) {
               LAB_0010999e:uVar17 = (ulong)uVar8;
               goto LAB_00109313;
            }
            pRVar9 = (RecordedCommandSort_conflict*)( (ulong)uVar8 * 0xc + *(long*)in_FS_OFFSET );
            uVar10 = uVar10 - uVar8;
            if (uVar10 != 0) {
               _boost_priority_for_render_commands(pRVar9, uVar10, &local_cc);
            }
         }
         local_c8 = *(undefined8*)param_3;
         _group_barriers_for_render_commands(this, &local_c8, pRVar9, uVar10, param_2);
         _run_render_commands(this, iVar16, pRVar9, uVar10, param_3, param_4, &local_d4, &local_d0);
      } else if (*(int*)( this + 0x188 ) != 0) {
         lVar6 = 0;
         uVar8 = 0;
         do {
            uVar10 = *in_FS_OFFSET;
            if (uVar10 <= uVar8) {
               LAB_00109760:uVar15 = (ulong)uVar10;
               uVar17 = (ulong)uVar8;
               goto LAB_00109313;
            }
            local_c8 = *(undefined8*)param_3;
            _group_barriers_for_render_commands(this, &local_c8, *(long*)( in_FS_OFFSET + 2 ) + lVar6, 1, param_2);
            uVar10 = *in_FS_OFFSET;
            if (uVar10 <= uVar8) goto LAB_00109760;
            uVar10 = uVar8 + 1;
            pRVar9 = (RecordedCommandSort_conflict*)( *(long*)( in_FS_OFFSET + 2 ) + lVar6 );
            lVar6 = lVar6 + 0xc;
            _run_render_commands(this, uVar8, pRVar9, 1, param_3, param_4, &local_d4, &local_d0);
            uVar8 = uVar10;
         } while ( uVar10 < *(uint*)( this + 0x188 ) );
      }
      local_c8 = *(undefined8*)param_3;
      if (*(int*)( this + 0x18c ) != 0) {
         _run_label_command_change(this, &local_c8, 0xffffffff, 0xffffffff, 0, 0, 0, 0, &local_d4, &local_d0);
      }
   }
   *(uint*)( this + 0x238 ) = ( *(int*)( this + 0x238 ) + 1U ) % *(uint*)( this + 0x228 );
   LAB_00109458:if (local_40 != *(long*)( in_FS_OFFSET + 10 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* RenderingDeviceGraph::_print_draw_list(unsigned char const*, unsigned int) */void RenderingDeviceGraph::_print_draw_list(RenderingDeviceGraph *this, uchar *param_1, uint param_2) {
   long *plVar1;
   float fVar2;
   char cVar3;
   undefined4 uVar4;
   uint uVar5;
   long lVar6;
   int iVar7;
   long lVar8;
   uchar *puVar9;
   undefined4 uVar10;
   char *pcVar11;
   uint uVar12;
   uint uVar13;
   undefined4 uVar14;
   long in_FS_OFFSET;
   bool bVar15;
   long local_70;
   long local_68;
   long local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 != 0) {
      uVar12 = 0;
      do {
         puVar9 = param_1 + uVar12;
         switch (*(undefined4*)puVar9) {
            default:
        goto switchD_00109dfc_caseD_0;
            case 1:
        uVar10 = *(undefined4 *)(puVar9 + 0x14);
        uVar14 = *(undefined4 *)(puVar9 + 0x10);
        itos((long)&local_60);
        Variant::Variant((Variant *)local_58,"\tBIND INDEX BUFFER ID");
        print_line<String,char_const*,RenderingDeviceCommons::IndexBufferFormat,char_const*,unsigned_int>
                  ((Variant *)local_58,(CowData<char32_t> *)&local_60,"FORMAT",uVar14,"OFFSET",
                   uVar10);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        uVar12 = uVar12 + 0x18;
        break;
            case 2:
        itos((long)&local_70);
        Variant::Variant((Variant *)local_58,"\tBIND PIPELINE ID");
        local_68 = 0;
        if (local_70 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_70);
        }
        stringify_variants<String>
                  ((String *)&local_60,(Variant *)local_58,(CowData<char32_t> *)&local_68);
        __print_line((String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        uVar12 = uVar12 + 0x10;
        break;
            case 3:
        Variant::Variant((Variant *)local_58,"\tBIND UNIFORM SETS COUNT");
        stringify_variants<unsigned_int>((Variant *)&local_60,(uint)(Variant *)local_58);
        __print_line((String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (*(int *)(puVar9 + 0x14) == 0) {
          iVar7 = 0x18;
        }
        else {
          uVar13 = 0;
          do {
            uVar10 = *(undefined4 *)(puVar9 + 0x10);
            itos((long)&local_70);
            Variant::Variant((Variant *)local_58,"\tBIND UNIFORM SET ID");
            local_68 = 0;
            plVar1 = (long *)(local_70 + -0x10);
            if (local_70 != 0) {
              do {
                lVar6 = *plVar1;
                if (lVar6 == 0) goto LAB_0010a503;
                LOCK();
                lVar8 = *plVar1;
                bVar15 = lVar6 == lVar8;
                if (bVar15) {
                  *plVar1 = lVar6 + 1;
                  lVar8 = lVar6;
                }
                UNLOCK();
              } while (!bVar15);
              if (lVar8 != -1) {
                local_68 = local_70;
              }
            }
LAB_0010a503:
            stringify_variants<String,char_const*,unsigned_int>
                      ((Variant *)&local_60,(Variant *)local_58,&local_68,"START INDEX",uVar10);
            __print_line((String *)&local_60);
            lVar6 = local_60;
            if (local_60 != 0) {
              LOCK();
              plVar1 = (long *)(local_60 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_60 = 0;
                Memory::free_static((void *)(lVar6 + -0x10),false);
              }
            }
            lVar6 = local_68;
            if (local_68 != 0) {
              LOCK();
              plVar1 = (long *)(local_68 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_68 = 0;
                Memory::free_static((void *)(lVar6 + -0x10),false);
              }
            }
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            lVar6 = local_70;
            if (local_70 != 0) {
              LOCK();
              plVar1 = (long *)(local_70 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_70 = 0;
                Memory::free_static((void *)(lVar6 + -0x10),false);
              }
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < *(uint *)(puVar9 + 0x14));
          iVar7 = *(uint *)(puVar9 + 0x14) * 8 + 0x18;
        }
        uVar12 = uVar12 + iVar7;
        break;
            case 4:
        Variant::Variant((Variant *)local_58,"\tBIND VERTEX BUFFERS COUNT");
        stringify_variants<unsigned_int>((Variant *)&local_60,(uint)(Variant *)local_58);
        __print_line((String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        uVar12 = uVar12 + 8 + *(int *)(puVar9 + 4) * 0x10;
        break;
            case 5:
        uVar13 = *(uint *)(puVar9 + 4);
        Variant::Variant((Variant *)local_58,"\tATTACHMENTS CLEAR COUNT");
        stringify_variants<unsigned_int,char_const*,unsigned_int>
                  ((Variant *)&local_60,(uint)(Variant *)local_58,(char *)(ulong)uVar13,0x10b7dd);
        __print_line((String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        uVar12 = *(int *)(puVar9 + 8) * 0x10 + uVar12 + 0xc + *(int *)(puVar9 + 4) * 0x20;
        break;
            case 6:
        uVar13 = *(uint *)(puVar9 + 4);
        Variant::Variant((Variant *)local_58,"\tDRAW VERTICES");
        stringify_variants<unsigned_int,char_const*,unsigned_int>
                  ((Variant *)&local_60,(uint)(Variant *)local_58,(char *)(ulong)uVar13,0x10b7f7);
        __print_line((String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        uVar12 = uVar12 + 0xc;
        break;
            case 7:
        uVar13 = *(uint *)(puVar9 + 8);
        uVar5 = *(uint *)(puVar9 + 4);
        Variant::Variant((Variant *)local_58,"\tDRAW INDICES");
        stringify_variants<unsigned_int,char_const*,unsigned_int,char_const*,unsigned_int>
                  ((Variant *)&local_60,(uint)(Variant *)local_58,(char *)(ulong)uVar5,0x10b7f7,
                   (char *)(ulong)uVar13,0x10b80f);
        __print_line((String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        cVar3 = Variant::needs_deinit[local_58[0]];
        goto joined_r0x0010a12e;
            case 8:
        uVar10 = *(undefined4 *)(puVar9 + 0x14);
        uVar4 = *(undefined4 *)(puVar9 + 0x18);
        uVar14 = *(undefined4 *)(puVar9 + 0x10);
        itos((long)&local_60);
        pcVar11 = "\tDRAW INDIRECT BUFFER ID";
        goto LAB_0010a16d;
            case 9:
        uVar10 = *(undefined4 *)(puVar9 + 0x14);
        uVar4 = *(undefined4 *)(puVar9 + 0x18);
        uVar14 = *(undefined4 *)(puVar9 + 0x10);
        itos((long)&local_60);
        pcVar11 = "\tDRAW INDEXED INDIRECT BUFFER ID";
LAB_0010a16d:
        Variant::Variant((Variant *)local_58,pcVar11);
        print_line<String,char_const*,unsigned_int,char_const*,unsigned_int,char_const*,unsigned_int>
                  ((Variant *)local_58,(CowData<char32_t> *)&local_60,"OFFSET",uVar14,"DRAW COUNT",
                   uVar10,"STRIDE",uVar4);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        uVar12 = uVar12 + 0x20;
        break;
            case 10:
        Variant::Variant((Variant *)local_58,"\tEXECUTE COMMANDS");
        stringify_variants((Variant *)&local_60);
        __print_line((String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        cVar3 = Variant::needs_deinit[local_58[0]];
joined_r0x0010a12e:
        if (cVar3 != '\0') {
          Variant::_clear_internal();
        }
        uVar12 = uVar12 + 0x10;
        break;
            case 0xb:
        Variant::Variant((Variant *)local_58,"\tNEXT SUBPASS");
        stringify_variants((Variant *)&local_60);
        __print_line((String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        cVar3 = Variant::needs_deinit[local_58[0]];
        goto joined_r0x0010a01f;
            case 0xc:
        Variant::Variant((Variant *)local_58,"\tSET BLEND CONSTANTS COLOR");
        stringify_variants<Color>
                  (*(undefined8 *)(puVar9 + 4),*(undefined8 *)(puVar9 + 0xc),&local_60,
                   (Variant *)local_58);
        goto LAB_00109f07;
            case 0xd:
        fVar2 = *(float *)(puVar9 + 4);
        Variant::Variant((Variant *)local_58,"\tSET LINE WIDTH");
        stringify_variants<float>((Variant *)&local_60,fVar2);
        __print_line((String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        cVar3 = Variant::needs_deinit[local_58[0]];
joined_r0x0010a01f:
        if (cVar3 != '\0') {
          Variant::_clear_internal();
        }
        uVar12 = uVar12 + 8;
        break;
            case 0xe:
        Variant::Variant((Variant *)local_58,"\tSET PUSH CONSTANT SIZE");
        stringify_variants<unsigned_int>((Variant *)&local_60,(uint)(Variant *)local_58);
        __print_line((String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        uVar12 = uVar12 + 0x10 + *(int *)(puVar9 + 4);
        break;
            case 0xf:
        pcVar11 = "\tSET SCISSOR";
        goto LAB_00109ee1;
            case 0x10:
        pcVar11 = "\tSET VIEWPORT";
LAB_00109ee1:
        Variant::Variant((Variant *)local_58,pcVar11);
        stringify_variants<Rect2i>
                  (&local_60,(Variant *)local_58,*(undefined8 *)(puVar9 + 4),
                   *(undefined8 *)(puVar9 + 0xc));
LAB_00109f07:
        __print_line((String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        uVar12 = uVar12 + 0x14;
        break;
            case 0x11:
        uVar10 = *(undefined4 *)(puVar9 + 0x18);
        itos((long)&local_60);
        itos((long)&local_68);
        Variant::Variant((Variant *)local_58,"\tUNIFORM SET PREPARE FOR USE ID");
        print_line<String,char_const*,String,char_const*,unsigned_int>
                  ((Variant *)local_58,(CowData<char32_t> *)&local_68,"SHADER ID",
                   (CowData<char32_t> *)&local_60,"INDEX",uVar10);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        uVar12 = uVar12 + 0x20;
         }
      } while ( uVar12 < param_2 );
   }
   switchD_00109dfc_caseD_0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* RenderingDeviceGraph::_print_compute_list(unsigned char const*, unsigned int) */void RenderingDeviceGraph::_print_compute_list(RenderingDeviceGraph *this, uchar *param_1, uint param_2) {
   long *plVar1;
   uchar *puVar2;
   undefined4 uVar3;
   uint uVar4;
   long lVar5;
   int iVar6;
   long lVar7;
   uint uVar8;
   int iVar9;
   ulong uVar10;
   long in_FS_OFFSET;
   bool bVar11;
   long local_70;
   long local_68;
   long local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 != 0) {
      uVar10 = 0;
      do {
         iVar9 = (int)uVar10;
         puVar2 = param_1 + uVar10;
         switch (*(undefined4*)puVar2) {
            default:
        goto switchD_0010a897_caseD_0;
            case 1:
        itos((long)&local_70);
        Variant::Variant((Variant *)local_58,"\tBIND PIPELINE ID");
        local_68 = 0;
        if (local_70 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_70);
        }
        stringify_variants<String>
                  ((String *)&local_60,(Variant *)local_58,(CowData<char32_t> *)&local_68);
        __print_line((String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        uVar10 = (ulong)(iVar9 + 0x10);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        break;
            case 2:
        Variant::Variant((Variant *)local_58,"\tBIND UNIFORM SETS COUNT");
        stringify_variants<unsigned_int>((Variant *)&local_60,(uint)(Variant *)local_58);
        __print_line((String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (*(int *)(puVar2 + 0x14) == 0) {
          iVar6 = 0x18;
        }
        else {
          uVar8 = 0;
          do {
            uVar3 = *(undefined4 *)(puVar2 + 0x10);
            itos((long)&local_70);
            Variant::Variant((Variant *)local_58,"\tBIND UNIFORM SET ID");
            local_68 = 0;
            plVar1 = (long *)(local_70 + -0x10);
            if (local_70 != 0) {
              do {
                lVar5 = *plVar1;
                if (lVar5 == 0) goto LAB_0010ac74;
                LOCK();
                lVar7 = *plVar1;
                bVar11 = lVar5 == lVar7;
                if (bVar11) {
                  *plVar1 = lVar5 + 1;
                  lVar7 = lVar5;
                }
                UNLOCK();
              } while (!bVar11);
              if (lVar7 != -1) {
                local_68 = local_70;
              }
            }
LAB_0010ac74:
            stringify_variants<String,char_const*,unsigned_int>
                      ((Variant *)&local_60,(Variant *)local_58,&local_68,"START INDEX",uVar3);
            __print_line((String *)&local_60);
            lVar5 = local_60;
            if (local_60 != 0) {
              LOCK();
              plVar1 = (long *)(local_60 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_60 = 0;
                Memory::free_static((void *)(lVar5 + -0x10),false);
              }
            }
            lVar5 = local_68;
            if (local_68 != 0) {
              LOCK();
              plVar1 = (long *)(local_68 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_68 = 0;
                Memory::free_static((void *)(lVar5 + -0x10),false);
              }
            }
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            lVar5 = local_70;
            if (local_70 != 0) {
              LOCK();
              plVar1 = (long *)(local_70 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_70 = 0;
                Memory::free_static((void *)(lVar5 + -0x10),false);
              }
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(uint *)(puVar2 + 0x14));
          iVar6 = *(uint *)(puVar2 + 0x14) * 8 + 0x18;
        }
        uVar10 = (ulong)(uint)(iVar9 + iVar6);
        break;
            case 3:
        uVar8 = *(uint *)(puVar2 + 8);
        uVar4 = *(uint *)(puVar2 + 4);
        Variant::Variant((Variant *)local_58,"\tDISPATCH");
        stringify_variants<unsigned_int,unsigned_int,unsigned_int>
                  ((Variant *)&local_60,(uint)(Variant *)local_58,uVar4,uVar8);
        __print_line((String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        uVar10 = (ulong)(iVar9 + 0x10);
        break;
            case 4:
        uVar3 = *(undefined4 *)(puVar2 + 0x10);
        itos((long)&local_70);
        Variant::Variant((Variant *)local_58,"\tDISPATCH INDIRECT BUFFER ID");
        local_68 = 0;
        if (local_70 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_70);
        }
        stringify_variants<String,char_const*,unsigned_int>
                  ((String *)&local_60,(Variant *)local_58,(CowData<char32_t> *)&local_68,"OFFSET",
                   uVar3);
        __print_line((String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        uVar10 = (ulong)(iVar9 + 0x18);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        break;
            case 5:
        Variant::Variant((Variant *)local_58,"\tSET PUSH CONSTANT SIZE");
        stringify_variants<unsigned_int>((Variant *)&local_60,(uint)(Variant *)local_58);
        __print_line((String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        uVar10 = (ulong)(uint)(iVar9 + 0x10 + *(int *)(puVar2 + 4));
        break;
            case 6:
        itos((long)&local_60);
        itos((long)&local_68);
        itos((long)&local_70);
        Variant::Variant((Variant *)local_58,"\tUNIFORM SET PREPARE FOR USE ID");
        print_line<String,char_const*,String,char_const*,String>
                  ((Variant *)local_58,(CowData<char32_t> *)&local_70,"SHADER ID",
                   (CowData<char32_t> *)&local_68,"INDEX",(CowData<char32_t> *)&local_60);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        uVar10 = (ulong)(iVar9 + 0x20);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
         }
      } while ( (uint)uVar10 < param_2 );
   }
   switchD_0010a897_caseD_0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RenderingDeviceGraph::_print_render_commands(RenderingDeviceGraph::RecordedCommandSort const*,
   unsigned int) */void RenderingDeviceGraph::_print_render_commands(RenderingDeviceGraph *this, RecordedCommandSort_conflict *param_1, uint param_2) {
   RecordedCommandSort_conflict *pRVar1;
   char cVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   undefined4 uVar6;
   code *pcVar7;
   ulong uVar8;
   char *pcVar9;
   undefined4 *puVar10;
   uint uVar11;
   char *pcVar12;
   long in_FS_OFFSET;
   CowData<char32_t> local_68[8];
   CowData<char32_t> local_60[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 != 0) {
      pRVar1 = param_1 + (ulong)param_2 * 0xc;
      do {
         uVar11 = *(uint*)( param_1 + 8 );
         uVar3 = *(uint*)( this + 0x40 );
         uVar4 = *(uint*)param_1;
         uVar8 = (ulong)uVar11;
         if (uVar3 <= uVar11) {
            LAB_0010ae6a:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar8, (ulong)uVar3, "p_index", "count", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar7 = (code*)invalidInstructionException();
            ( *pcVar7 )();
         }
         uVar3 = *(uint*)( this + 0x30 );
         uVar5 = *(uint*)( *(long*)( this + 0x48 ) + uVar8 * 4 );
         if (uVar3 <= uVar5) {
            uVar8 = (ulong)uVar5;
            goto LAB_0010ae6a;
         }
         puVar10 = (undefined4*)( (ulong)uVar5 + *(long*)( this + 0x38 ) );
         switch (*puVar10) {
            default:
        goto switchD_0010ae60_caseD_0;
            case 1:
        itos((long)local_60);
        Variant::Variant((Variant *)local_58,uVar11);
        pcVar9 = "BUFFER CLEAR DESTINATION";
        break;
            case 2:
        itos((long)local_60);
        itos((long)local_68);
        Variant::Variant((Variant *)local_58,uVar11);
        pcVar12 = "DESTINATION";
        pcVar9 = "BUFFER COPY SOURCE";
        goto LAB_0010b064;
            case 3:
        itos((long)local_60);
        Variant::Variant((Variant *)local_58,uVar11);
        pcVar9 = "BUFFER GET DATA DESTINATION";
        break;
            case 4:
        uVar6 = puVar10[0x16];
        itos((long)local_60);
        Variant::Variant((Variant *)local_58,uVar11);
        pcVar12 = "COPIES";
        pcVar9 = "BUFFER UPDATE DESTINATION";
        goto LAB_0010af76;
            case 5:
        Variant::Variant((Variant *)local_58,uVar11);
        uVar11 = 0x10b986;
        goto LAB_0010b1de;
            case 6:
        Variant::Variant((Variant *)local_58,uVar11);
        uVar11 = 0x10b998;
LAB_0010b1de:
        stringify_variants<char_const*,unsigned_int,char_const*,unsigned_int>
                  ((Variant *)local_60,(char *)local_58,0x10b914,(char *)(ulong)uVar4,uVar11);
        __print_line((String *)local_60);
        CowData<char32_t>::_unref(local_60);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_0010aef8;
            case 7:
        itos((long)local_60);
        Variant::Variant((Variant *)local_58,uVar11);
        print_line<char_const*,unsigned_int,char_const*,String,char_const*,Color>
                  (*(undefined8 *)(puVar10 + 0x1c),*(undefined8 *)(puVar10 + 0x1e),
                   (Variant *)local_58,"LEVEL",uVar4,"TEXTURE CLEAR",local_60,"COLOR");
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_0010af9d;
            case 8:
        itos((long)local_60);
        itos((long)local_68);
        Variant::Variant((Variant *)local_58,uVar11);
        pcVar12 = "TO";
        pcVar9 = "TEXTURE COPY FROM";
        goto LAB_0010b064;
            case 9:
        Variant::Variant((Variant *)local_58,uVar11);
        pcVar9 = "TEXTURE GET DATA";
        goto LAB_0010aecb;
            case 10:
        itos((long)local_60);
        itos((long)local_68);
        Variant::Variant((Variant *)local_58,uVar11);
        pcVar12 = "TO";
        pcVar9 = "TEXTURE RESOLVE FROM";
LAB_0010b064:
        print_line<char_const*,unsigned_int,char_const*,String,char_const*,String>
                  (local_58,"LEVEL",uVar4,pcVar9,local_68,pcVar12,local_60);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref(local_68);
        CowData<char32_t>::_unref(local_60);
        goto LAB_0010aef8;
            case 0xb:
        itos((long)local_60);
        Variant::Variant((Variant *)local_58,uVar11);
        pcVar9 = "TEXTURE UPDATE TO";
        break;
            case 0xc:
        uVar6 = puVar10[0x16];
        itos((long)local_60);
        Variant::Variant((Variant *)local_58,uVar11);
        pcVar12 = "INDEX";
        pcVar9 = "CAPTURE TIMESTAMP POOL";
LAB_0010af76:
        print_line<char_const*,unsigned_int,char_const*,String,char_const*,unsigned_int>
                  (local_58,"LEVEL",uVar4,pcVar9,local_60,pcVar12,uVar6);
        cVar2 = Variant::needs_deinit[local_58[0]];
        goto joined_r0x0010af9b;
            case 0xd:
        Variant::Variant((Variant *)local_58,uVar11);
        pcVar9 = "DRIVER CALLBACK";
LAB_0010aecb:
        print_line<char_const*,unsigned_int,char_const*>((Variant *)local_58,"LEVEL",uVar4,pcVar9);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_0010aef8;
         }
         print_line<char_const*,unsigned_int,char_const*,String>(local_58, "LEVEL", uVar4, pcVar9, local_60);
         cVar2 = Variant::needs_deinit[local_58[0]];
         joined_r0x0010af9b:if (cVar2 != '\0') {
            Variant::_clear_internal();
         }
         LAB_0010af9d:CowData<char32_t>::_unref(local_60);
         LAB_0010aef8:param_1 = param_1 + 0xc;
      } while ( param_1 != pRVar1 );
   }
   switchD_0010ae60_caseD_0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* LocalVector<unsigned int, unsigned int, false, false>::~LocalVector() */void LocalVector<unsigned_int,unsigned_int,false,false>::~LocalVector(LocalVector<unsigned_int,unsigned_int,false,false> *this) {
   if (*(void**)( this + 8 ) != (void*)0x0) {
      if (*(int*)this != 0) {
         *(undefined4*)this = 0;
      }
      Memory::free_static(*(void**)( this + 8 ), false);
      return;
   }
   return;
}/* LocalVector<RenderingDeviceGraph::ResourceTracker*, unsigned int, false, false>::~LocalVector()
    */void LocalVector<RenderingDeviceGraph::ResourceTracker*,unsigned_int,false,false>::~LocalVector(LocalVector<RenderingDeviceGraph::ResourceTracker*,unsigned_int,false,false> *this) {
   if (*(void**)( this + 8 ) != (void*)0x0) {
      if (*(int*)this != 0) {
         *(undefined4*)this = 0;
      }
      Memory::free_static(*(void**)( this + 8 ), false);
      return;
   }
   return;
}/* LocalVector<RenderingDeviceGraph::ResourceUsage, unsigned int, false, false>::~LocalVector() */void LocalVector<RenderingDeviceGraph::ResourceUsage,unsigned_int,false,false>::~LocalVector(LocalVector<RenderingDeviceGraph::ResourceUsage,unsigned_int,false,false> *this) {
   if (*(void**)( this + 8 ) != (void*)0x0) {
      if (*(int*)this != 0) {
         *(undefined4*)this = 0;
      }
      Memory::free_static(*(void**)( this + 8 ), false);
      return;
   }
   return;
}/* LocalVector<RenderingDeviceGraph::RecordedCommandSort, unsigned int, false,
   false>::~LocalVector() */void LocalVector<RenderingDeviceGraph::RecordedCommandSort,unsigned_int,false,false>::~LocalVector(LocalVector<RenderingDeviceGraph::RecordedCommandSort,unsigned_int,false,false> *this) {
   if (*(void**)( this + 8 ) != (void*)0x0) {
      if (*(int*)this != 0) {
         *(undefined4*)this = 0;
      }
      Memory::free_static(*(void**)( this + 8 ), false);
      return;
   }
   return;
}/* LocalVector<long, unsigned int, false, false>::~LocalVector() */void LocalVector<long,unsigned_int,false,false>::~LocalVector(LocalVector<long,unsigned_int,false,false> *this) {
   if (*(void**)( this + 8 ) != (void*)0x0) {
      if (*(int*)this != 0) {
         *(undefined4*)this = 0;
      }
      Memory::free_static(*(void**)( this + 8 ), false);
      return;
   }
   return;
}/* LocalVector<int, unsigned int, false, false>::~LocalVector() */void LocalVector<int,unsigned_int,false,false>::~LocalVector(LocalVector<int,unsigned_int,false,false> *this) {
   if (*(void**)( this + 8 ) != (void*)0x0) {
      if (*(int*)this != 0) {
         *(undefined4*)this = 0;
      }
      Memory::free_static(*(void**)( this + 8 ), false);
      return;
   }
   return;
}/* Rect2i::merge(Rect2i const&) const */undefined8 Rect2i::merge(Rect2i *this, Rect2i *param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   int iVar4;
   long in_FS_OFFSET;
   int local_38;
   int iStack_34;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( ( *(int*)( this + 8 ) < 0 ) || ( *(int*)( this + 0xc ) < 0 ) ) || ( *(int*)( param_1 + 8 ) < 0 ) ) || ( *(int*)( param_1 + 0xc ) < 0 )) {
      _err_print_error("merge", "./core/math/rect2i.h", 0x6f, "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size.", 0, 0);
   }
   local_30 = 0;
   iStack_34 = *(int*)( this + 4 );
   if (*(int*)( param_1 + 4 ) < *(int*)( this + 4 )) {
      iStack_34 = *(int*)( param_1 + 4 );
   }
   local_38 = *(int*)this;
   if (*(int*)param_1 < *(int*)this) {
      local_38 = *(int*)param_1;
   }
   uVar1 = Vector2i::operator +((Vector2i*)param_1, (Vector2i*)( param_1 + 8 ));
   uVar2 = Vector2i::operator +((Vector2i*)this, (Vector2i*)( this + 8 ));
   iVar4 = (int)( (ulong)uVar2 >> 0x20 );
   iVar3 = (int)( (ulong)uVar1 >> 0x20 );
   if (iVar4 < iVar3) {
      iVar4 = iVar3;
   }
   if ((int)uVar2 < (int)uVar1) {
      uVar2 = uVar1;
   }
   local_30 = CONCAT44(iVar4, (int)uVar2);
   local_30 = Vector2i::operator -((Vector2i*)&local_30, (Vector2i*)&local_38);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return CONCAT44(iStack_34, local_38);
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<unsigned long, RenderingDeviceGraph::FramebufferStorage, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned long>, DefaultTypedAllocator<HashMapElement<unsigned long,
   RenderingDeviceGraph::FramebufferStorage> > >::insert(unsigned long const&,
   RenderingDeviceGraph::FramebufferStorage const&, bool) */void HashMap<unsigned_long,RenderingDeviceGraph::FramebufferStorage,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,RenderingDeviceGraph::FramebufferStorage>>>::insert(ulong *param_1, FramebufferStorage *param_2, bool param_3) {
   uint *puVar1;
   undefined8 *puVar2;
   long lVar3;
   void *pvVar4;
   void *__s;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   undefined1(*pauVar29)[16];
   uint uVar30;
   uint uVar31;
   ulong uVar32;
   undefined8 uVar33;
   void *__s_00;
   undefined1(*pauVar34)[16];
   undefined8 *in_RCX;
   int iVar35;
   undefined7 in_register_00000011;
   long *plVar36;
   long lVar37;
   long lVar38;
   uint uVar39;
   long lVar40;
   undefined8 uVar41;
   ulong uVar42;
   uint uVar43;
   char in_R8B;
   uint uVar44;
   uint uVar45;
   ulong uVar46;
   undefined1(*pauVar47)[16];
   void *local_78;
   plVar36 = (long*)CONCAT71(in_register_00000011, param_3);
   uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   local_78 = *(void**)( param_2 + 8 );
   if (local_78 == (void*)0x0) {
      uVar46 = (ulong)uVar39;
      uVar32 = uVar46 * 4;
      uVar42 = uVar46 * 8;
      uVar33 = Memory::alloc_static(uVar32, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar33;
      local_78 = (void*)Memory::alloc_static(uVar42, false);
      *(void**)( param_2 + 8 ) = local_78;
      if (uVar39 != 0) {
         pvVar4 = *(void**)( param_2 + 0x10 );
         if (( pvVar4 < (void*)( (long)local_78 + uVar42 ) ) && ( local_78 < (void*)( (long)pvVar4 + uVar32 ) )) {
            uVar32 = 0;
            do {
               *(undefined4*)( (long)pvVar4 + uVar32 * 4 ) = 0;
               *(undefined8*)( (long)local_78 + uVar32 * 8 ) = 0;
               uVar32 = uVar32 + 1;
            } while ( uVar46 != uVar32 );
            goto LAB_0010c18b;
         }
         memset(pvVar4, 0, uVar32);
         memset(local_78, 0, uVar42);
         lVar40 = *plVar36;
         iVar35 = *(int*)( param_2 + 0x2c );
         goto LAB_0010c19c;
      }
      lVar40 = *plVar36;
      iVar35 = *(int*)( param_2 + 0x2c );
      if (local_78 != (void*)0x0) goto LAB_0010c19c;
   } else {
      LAB_0010c18b:lVar40 = *plVar36;
      iVar35 = *(int*)( param_2 + 0x2c );
      LAB_0010c19c:if (iVar35 != 0) {
         uVar42 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 ));
         lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         uVar32 = lVar40 * 0x3ffff - 1;
         uVar32 = ( uVar32 ^ uVar32 >> 0x1f ) * 0x15;
         uVar32 = ( uVar32 ^ uVar32 >> 0xb ) * 0x41;
         uVar32 = uVar32 >> 0x16 ^ uVar32;
         uVar46 = uVar32 & 0xffffffff;
         if ((int)uVar32 == 0) {
            uVar46 = 1;
         }
         uVar45 = 0;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = uVar46 * lVar3;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = uVar42;
         lVar37 = SUB168(auVar5 * auVar17, 8);
         uVar43 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar37 * 4 );
         uVar31 = SUB164(auVar5 * auVar17, 8);
         if (uVar43 != 0) {
            do {
               if (( (uint)uVar46 == uVar43 ) && ( *(long*)( *(long*)( (long)local_78 + lVar37 * 8 ) + 0x10 ) == lVar40 )) {
                  pauVar34 = *(undefined1(**) [16])( (long)local_78 + (ulong)uVar31 * 8 );
                  uVar33 = in_RCX[1];
                  *(undefined8*)( pauVar34[1] + 8 ) = *in_RCX;
                  *(undefined8*)pauVar34[2] = uVar33;
                  goto LAB_0010c670;
               }
               uVar45 = uVar45 + 1;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( ulong )(uVar31 + 1) * lVar3;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = uVar42;
               lVar37 = SUB168(auVar6 * auVar18, 8);
               uVar43 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar37 * 4 );
               uVar31 = SUB164(auVar6 * auVar18, 8);
            } while ( ( uVar43 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar43 * lVar3,auVar19._8_8_ = 0,auVar19._0_8_ = uVar42,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 ) + uVar31 ) - SUB164(auVar7 * auVar19, 8)) * lVar3,auVar20._8_8_ = 0,auVar20._0_8_ = uVar42,uVar45 <= SUB164(auVar8 * auVar20, 8) );
         }
      }
   }
   if ((float)uVar39 * __LC37 < (float)( iVar35 + 1 )) {
      uVar39 = *(uint*)( param_2 + 0x28 );
      if (uVar39 == 0x1c) {
         pauVar34 = (undefined1(*) [16])0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_0010c670;
      }
      uVar32 = ( ulong )(uVar39 + 1);
      uVar43 = *(uint*)( hash_table_size_primes + (ulong)uVar39 * 4 );
      *(undefined4*)( param_2 + 0x2c ) = 0;
      if (uVar39 + 1 < 2) {
         uVar32 = 2;
      }
      uVar39 = *(uint*)( hash_table_size_primes + uVar32 * 4 );
      *(int*)( param_2 + 0x28 ) = (int)uVar32;
      pvVar4 = *(void**)( param_2 + 0x10 );
      uVar46 = (ulong)uVar39;
      uVar32 = uVar46 * 4;
      uVar42 = uVar46 * 8;
      uVar33 = Memory::alloc_static(uVar32, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar33;
      __s_00 = (void*)Memory::alloc_static(uVar42, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar39 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar42 ) ) && ( __s_00 < (void*)( (long)__s + uVar32 ) )) {
            uVar32 = 0;
            do {
               *(undefined4*)( (long)__s + uVar32 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar32 * 8 ) = 0;
               uVar32 = uVar32 + 1;
            } while ( uVar46 != uVar32 );
         } else {
            memset(__s, 0, uVar32);
            memset(__s_00, 0, uVar42);
         }
      }
      uVar32 = 0;
      if (uVar43 != 0) {
         do {
            uVar39 = *(uint*)( (long)pvVar4 + uVar32 * 4 );
            if (uVar39 != 0) {
               uVar44 = 0;
               lVar40 = *(long*)( param_2 + 0x10 );
               uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
               uVar42 = CONCAT44(0, uVar31);
               lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
               auVar9._8_8_ = 0;
               auVar9._0_8_ = (ulong)uVar39 * lVar3;
               auVar21._8_8_ = 0;
               auVar21._0_8_ = uVar42;
               lVar37 = SUB168(auVar9 * auVar21, 8);
               puVar1 = (uint*)( lVar40 + lVar37 * 4 );
               iVar35 = SUB164(auVar9 * auVar21, 8);
               uVar45 = *puVar1;
               uVar33 = *(undefined8*)( (long)local_78 + uVar32 * 8 );
               while (uVar45 != 0) {
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = (ulong)uVar45 * lVar3;
                  auVar22._8_8_ = 0;
                  auVar22._0_8_ = uVar42;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = ( ulong )(( uVar31 + iVar35 ) - SUB164(auVar10 * auVar22, 8)) * lVar3;
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = uVar42;
                  uVar30 = SUB164(auVar11 * auVar23, 8);
                  uVar41 = uVar33;
                  if (uVar30 < uVar44) {
                     *puVar1 = uVar39;
                     puVar2 = (undefined8*)( (long)__s_00 + lVar37 * 8 );
                     uVar41 = *puVar2;
                     *puVar2 = uVar33;
                     uVar39 = uVar45;
                     uVar44 = uVar30;
                  }
                  uVar44 = uVar44 + 1;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = ( ulong )(iVar35 + 1) * lVar3;
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = uVar42;
                  lVar37 = SUB168(auVar12 * auVar24, 8);
                  puVar1 = (uint*)( lVar40 + lVar37 * 4 );
                  iVar35 = SUB164(auVar12 * auVar24, 8);
                  uVar33 = uVar41;
                  uVar45 = *puVar1;
               };
               *(undefined8*)( (long)__s_00 + lVar37 * 8 ) = uVar33;
               *puVar1 = uVar39;
               *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
            }
            uVar32 = uVar32 + 1;
         } while ( uVar32 != uVar43 );
         Memory::free_static(local_78, false);
         Memory::free_static(pvVar4, false);
      }
   }
   lVar40 = *plVar36;
   uVar41 = in_RCX[1];
   uVar33 = *in_RCX;
   pauVar34 = (undefined1(*) [16])operator_new(0x28, "");
   *(undefined8*)pauVar34[2] = uVar41;
   *pauVar34 = (undefined1[16])0x0;
   *(long*)pauVar34[1] = lVar40;
   *(undefined8*)( pauVar34[1] + 8 ) = uVar33;
   puVar2 = *(undefined8**)( param_2 + 0x20 );
   if (puVar2 == (undefined8*)0x0) {
      *(undefined1(**) [16])( param_2 + 0x18 ) = pauVar34;
      *(undefined1(**) [16])( param_2 + 0x20 ) = pauVar34;
   } else if (in_R8B == '\0') {
      *puVar2 = pauVar34;
      *(undefined8**)( *pauVar34 + 8 ) = puVar2;
      *(undefined1(**) [16])( param_2 + 0x20 ) = pauVar34;
   } else {
      lVar40 = *(long*)( param_2 + 0x18 );
      *(undefined1(**) [16])( lVar40 + 8 ) = pauVar34;
      *(long*)*pauVar34 = lVar40;
      *(undefined1(**) [16])( param_2 + 0x18 ) = pauVar34;
   }
   lVar40 = *(long*)( param_2 + 0x10 );
   uVar32 = *plVar36 * 0x3ffff - 1;
   uVar32 = ( uVar32 ^ uVar32 >> 0x1f ) * 0x15;
   uVar32 = ( uVar32 ^ uVar32 >> 0xb ) * 0x41;
   uVar32 = uVar32 >> 0x16 ^ uVar32;
   uVar42 = uVar32 & 0xffffffff;
   if ((int)uVar32 == 0) {
      uVar42 = 1;
   }
   uVar45 = 0;
   lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   uVar31 = (uint)uVar42;
   uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar32 = CONCAT44(0, uVar39);
   auVar13._8_8_ = 0;
   auVar13._0_8_ = uVar42 * lVar3;
   auVar25._8_8_ = 0;
   auVar25._0_8_ = uVar32;
   lVar38 = SUB168(auVar13 * auVar25, 8);
   lVar37 = *(long*)( param_2 + 8 );
   puVar1 = (uint*)( lVar40 + lVar38 * 4 );
   iVar35 = SUB164(auVar13 * auVar25, 8);
   uVar43 = *puVar1;
   pauVar29 = pauVar34;
   while (uVar43 != 0) {
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)uVar43 * lVar3;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar32;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = ( ulong )(( uVar39 + iVar35 ) - SUB164(auVar14 * auVar26, 8)) * lVar3;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar32;
      uVar31 = SUB164(auVar15 * auVar27, 8);
      pauVar47 = pauVar29;
      if (uVar31 < uVar45) {
         *puVar1 = (uint)uVar42;
         uVar42 = (ulong)uVar43;
         puVar2 = (undefined8*)( lVar37 + lVar38 * 8 );
         pauVar47 = (undefined1(*) [16])*puVar2;
         *puVar2 = pauVar29;
         uVar45 = uVar31;
      }
      uVar31 = (uint)uVar42;
      uVar45 = uVar45 + 1;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = ( ulong )(iVar35 + 1) * lVar3;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar32;
      lVar38 = SUB168(auVar16 * auVar28, 8);
      puVar1 = (uint*)( lVar40 + lVar38 * 4 );
      iVar35 = SUB164(auVar16 * auVar28, 8);
      pauVar29 = pauVar47;
      uVar43 = *puVar1;
   };
   *(undefined1(**) [16])( lVar37 + lVar38 * 8 ) = pauVar29;
   *puVar1 = uVar31;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_0010c670:*param_1 = (ulong)pauVar34;
   return;
}/* LocalVector<RenderingDeviceGraph::Frame, unsigned int, false, true>::resize(unsigned int) */void LocalVector<RenderingDeviceGraph::Frame,unsigned_int,false,true>::resize(LocalVector<RenderingDeviceGraph::Frame,unsigned_int,false,true> *this, uint param_1) {
   int *piVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   uint uVar4;
   long lVar5;
   void *pvVar6;
   long lVar7;
   uint uVar8;
   uint *puVar9;
   uVar8 = *(uint*)this;
   if (param_1 < uVar8) {
      lVar7 = (ulong)param_1 * 0x18;
      uVar8 = param_1;
      do {
         puVar9 = (uint*)( *(long*)( this + 8 ) + lVar7 );
         pvVar6 = *(void**)( puVar9 + 2 );
         if (pvVar6 != (void*)0x0) {
            if (*puVar9 != 0) {
               lVar5 = 0;
               uVar4 = 0;
               do {
                  piVar1 = (int*)( (long)pvVar6 + lVar5 );
                  if (*(void**)( piVar1 + 2 ) != (void*)0x0) {
                     if (*piVar1 != 0) {
                        *piVar1 = 0;
                     }
                     Memory::free_static(*(void**)( piVar1 + 2 ), false);
                     pvVar6 = *(void**)( puVar9 + 2 );
                  }
                  uVar4 = uVar4 + 1;
                  lVar5 = lVar5 + 0x38;
               } while ( uVar4 < *puVar9 );
               *puVar9 = 0;
               if (pvVar6 == (void*)0x0) goto LAB_0010c8af;
            }
            Memory::free_static(pvVar6, false);
         }
         LAB_0010c8af:uVar8 = uVar8 + 1;
         lVar7 = lVar7 + 0x18;
      } while ( uVar8 < *(uint*)this );
   } else {
      if (param_1 <= uVar8) {
         return;
      }
      if (*(uint*)( this + 4 ) < param_1) {
         pvVar6 = *(void**)( this + 8 );
         *(uint*)( this + 4 ) = param_1;
         lVar7 = Memory::realloc_static(pvVar6, (ulong)param_1 * 0x18, false);
         *(long*)( this + 8 ) = lVar7;
         if (lVar7 == 0) {
            /* WARNING: Subroutine does not return */
            LocalVector<RenderingDeviceGraph::AttachmentOperation,unsigned_int,false,false>::resize((uint)pvVar6);
         }
         uVar8 = *(uint*)this;
         if (param_1 <= uVar8) goto LAB_0010c8bd;
      }
      lVar7 = *(long*)( this + 8 );
      puVar2 = (undefined8*)( lVar7 + (ulong)uVar8 * 0x18 );
      do {
         *puVar2 = 0;
         puVar3 = puVar2 + 3;
         puVar2[1] = 0;
         *(undefined4*)( puVar2 + 2 ) = 0;
         puVar2 = puVar3;
      } while ( puVar3 != (undefined8*)( lVar7 + 0x18 + ( ( ulong )(( param_1 - 1 ) - uVar8) + (ulong)uVar8 ) * 0x18 ) );
   }
   LAB_0010c8bd:*(uint*)this = param_1;
   return;
}/* LocalVector<long, unsigned int, false, false>::resize(unsigned int) */void LocalVector<long,unsigned_int,false,false>::resize(LocalVector<long,unsigned_int,false,false> *this, uint param_1) {
   uint uVar1;
   long lVar2;
   void *pvVar3;
   if (*(uint*)this <= param_1) {
      if (param_1 <= *(uint*)this) {
         return;
      }
      if (*(uint*)( this + 4 ) < param_1) {
         uVar1 = param_1 - 1 | param_1 - 1 >> 1;
         uVar1 = uVar1 | uVar1 >> 2;
         uVar1 = uVar1 | uVar1 >> 4;
         uVar1 = uVar1 | uVar1 >> 8;
         uVar1 = ( uVar1 | uVar1 >> 0x10 ) + 1;
         *(uint*)( this + 4 ) = uVar1;
         pvVar3 = *(void**)( this + 8 );
         lVar2 = Memory::realloc_static(pvVar3, (ulong)uVar1 * 8, false);
         *(long*)( this + 8 ) = lVar2;
         if (lVar2 == 0) {
            /* WARNING: Subroutine does not return */
            LocalVector<RenderingDeviceGraph::AttachmentOperation,unsigned_int,false,false>::resize((uint)pvVar3);
         }
      }
   }
   *(uint*)this = param_1;
   return;
}/* LocalVector<RenderingDeviceGraph::RecordedCommandSort, unsigned int, false,
   false>::resize(unsigned int) */void LocalVector<RenderingDeviceGraph::RecordedCommandSort,unsigned_int,false,false>::resize(LocalVector<RenderingDeviceGraph::RecordedCommandSort,unsigned_int,false,false> *this, uint param_1) {
   uint uVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   long lVar4;
   void *pvVar5;
   uint uVar6;
   uVar1 = *(uint*)this;
   if (uVar1 <= param_1) {
      if (param_1 <= uVar1) {
         return;
      }
      uVar6 = param_1 - 1;
      if (*(uint*)( this + 4 ) < param_1) {
         uVar1 = uVar6 >> 1 | uVar6;
         uVar1 = uVar1 | uVar1 >> 2;
         uVar1 = uVar1 | uVar1 >> 4;
         uVar1 = uVar1 | uVar1 >> 8;
         uVar1 = ( uVar1 | uVar1 >> 0x10 ) + 1;
         *(uint*)( this + 4 ) = uVar1;
         pvVar5 = *(void**)( this + 8 );
         lVar4 = Memory::realloc_static(pvVar5, (ulong)uVar1 * 0xc, false);
         *(long*)( this + 8 ) = lVar4;
         if (lVar4 == 0) {
            /* WARNING: Subroutine does not return */
            LocalVector<RenderingDeviceGraph::AttachmentOperation,unsigned_int,false,false>::resize((uint)pvVar5);
         }
         uVar1 = *(uint*)this;
         if (param_1 <= uVar1) goto LAB_0010ca67;
      }
      lVar4 = *(long*)( this + 8 );
      puVar2 = (undefined8*)( lVar4 + (ulong)uVar1 * 0xc );
      do {
         *puVar2 = 0;
         puVar3 = (undefined8*)( (long)puVar2 + 0xc );
         *(undefined4*)( puVar2 + 1 ) = 0xffffffff;
         puVar2 = puVar3;
      } while ( puVar3 != (undefined8*)( lVar4 + 0xc + ( ( ulong )(uVar6 - uVar1) + (ulong)uVar1 ) * 0xc ) );
   }
   LAB_0010ca67:*(uint*)this = param_1;
   return;
}/* RenderingDeviceGraph::FramebufferCache::~FramebufferCache() */void RenderingDeviceGraph::FramebufferCache::~FramebufferCache(FramebufferCache *this) {
   uint uVar1;
   long lVar2;
   void *pvVar3;
   pvVar3 = *(void**)( this + 0x30 );
   if (pvVar3 != (void*)0x0) {
      if (*(int*)( this + 0x54 ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x50 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x54 ) = 0;
            *(undefined1(*) [16])( this + 0x40 ) = (undefined1[16])0x0;
         } else {
            lVar2 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x38 ) + lVar2 ) != 0) {
                  *(int*)( *(long*)( this + 0x38 ) + lVar2 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar3 + lVar2 * 2 ), false);
                  pvVar3 = *(void**)( this + 0x30 );
                  *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
               }
               lVar2 = lVar2 + 4;
            } while ( lVar2 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0x54 ) = 0;
            *(undefined1(*) [16])( this + 0x40 ) = (undefined1[16])0x0;
            if (pvVar3 == (void*)0x0) goto LAB_0010cb57;
         }
      }
      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0x38 ), false);
   }
   LAB_0010cb57:if (*(void**)( this + 0x20 ) != (void*)0x0) {
      if (*(int*)( this + 0x18 ) != 0) {
         *(undefined4*)( this + 0x18 ) = 0;
      }
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }
   if (*(void**)( this + 0x10 ) != (void*)0x0) {
      if (*(int*)( this + 8 ) != 0) {
         *(undefined4*)( this + 8 ) = 0;
      }
      Memory::free_static(*(void**)( this + 0x10 ), false);
      return;
   }
   return;
}/* CowData<char32_t>::_unref() */void CowData<char32_t>::_unref(CowData<char32_t> *this) {
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
}/* WARNING: Removing unreachable block (ram,0x0010cda8) *//* WARNING: Removing unreachable block (ram,0x0010cf3d) *//* WARNING: Removing unreachable block (ram,0x0010cf49) *//* String vformat<RenderingDeviceGraph::ResourceUsage>(String const&,
   RenderingDeviceGraph::ResourceUsage const) */undefined8 *vformat<RenderingDeviceGraph::ResourceUsage>(undefined8 *param_1, bool *param_2, int param_3) {
   Variant *this;
   int iVar1;
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
   iVar1 = (int)local_c8;
   Array::resize(iVar1);
   this(Variant * Array::operator [](iVar1));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, param_2);
   *param_1 = local_c0[0];
   Array::~Array(local_c8);
   if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
   }
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* LocalVector<RenderingDeviceDriver::TextureBarrier, unsigned int, false, false>::resize(unsigned
   int) */void LocalVector<RenderingDeviceDriver::TextureBarrier,unsigned_int,false,false>::resize(LocalVector<RenderingDeviceDriver::TextureBarrier,unsigned_int,false,false> *this, uint param_1) {
   uint uVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   long lVar4;
   void *pvVar5;
   uint uVar6;
   uVar1 = *(uint*)this;
   if (uVar1 <= param_1) {
      if (param_1 <= uVar1) {
         return;
      }
      uVar6 = param_1 - 1;
      if (*(uint*)( this + 4 ) < param_1) {
         uVar1 = uVar6 >> 1 | uVar6;
         uVar1 = uVar1 | uVar1 >> 2;
         uVar1 = uVar1 | uVar1 >> 4;
         uVar1 = uVar1 | uVar1 >> 8;
         uVar1 = ( uVar1 | uVar1 >> 0x10 ) + 1;
         *(uint*)( this + 4 ) = uVar1;
         pvVar5 = *(void**)( this + 8 );
         lVar4 = Memory::realloc_static(pvVar5, (ulong)uVar1 * 0x38, false);
         *(long*)( this + 8 ) = lVar4;
         if (lVar4 == 0) {
            /* WARNING: Subroutine does not return */
            LocalVector<RenderingDeviceGraph::AttachmentOperation,unsigned_int,false,false>::resize((uint)pvVar5);
         }
         uVar1 = *(uint*)this;
         if (param_1 <= uVar1) goto LAB_0010d020;
      }
      lVar4 = *(long*)( this + 8 );
      puVar2 = (undefined8*)( lVar4 + (ulong)uVar1 * 0x38 );
      do {
         *puVar2 = 0;
         puVar3 = puVar2 + 7;
         *(undefined1(*) [16])( puVar2 + 1 ) = (undefined1[16])0x0;
         puVar2[3] = 0;
         puVar2[4] = 0;
         *(undefined1(*) [16])( puVar2 + 5 ) = (undefined1[16])0x0;
         puVar2 = puVar3;
      } while ( (undefined8*)( lVar4 + 0x38 + ( ( ulong )(uVar6 - uVar1) + (ulong)uVar1 ) * 0x38 ) != puVar3 );
   }
   LAB_0010d020:*(uint*)this = param_1;
   return;
}/* String stringify_variants<String>(Variant const&, String) */String *stringify_variants<String>(String *param_1, undefined8 param_2, String *param_3) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   long in_FS_OFFSET;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_58, param_3);
   stringify_variants((Variant*)&local_70);
   local_68 = &_LC87;
   local_78 = 0;
   local_60 = 1;
   String::parse_latin1((StrRange*)&local_78);
   Variant::operator_cast_to_String((Variant*)&local_80);
   String::operator +((String*)&local_68, (String*)&local_80);
   String::operator +(param_1, (String*)&local_68);
   puVar3 = local_68;
   if (local_68 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (undefined*)0x0;
         Memory::free_static(puVar3 + -0x10, false);
      }
   }
   lVar2 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   lVar2 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
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
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* String stringify_variants<unsigned int>(Variant const&, unsigned int) */Variant *stringify_variants<unsigned_int>(Variant *param_1, uint param_2) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   uint in_EDX;
   long in_FS_OFFSET;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_58, in_EDX);
   stringify_variants((Variant*)&local_70);
   local_68 = &_LC87;
   local_78 = 0;
   local_60 = 1;
   String::parse_latin1((StrRange*)&local_78);
   Variant::operator_cast_to_String((Variant*)&local_80);
   String::operator +((String*)&local_68, (String*)&local_80);
   String::operator +((String*)param_1, (String*)&local_68);
   puVar3 = local_68;
   if (local_68 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (undefined*)0x0;
         Memory::free_static(puVar3 + -0x10, false);
      }
   }
   lVar2 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   lVar2 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
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
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* String stringify_variants<Color>(Variant const&, Color) */String *stringify_variants<Color>(undefined8 param_1_00, undefined8 param_2, String *param_1) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   long in_FS_OFFSET;
   undefined8 local_98;
   undefined8 local_90;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = param_1_00;
   local_90 = param_2;
   Variant::Variant((Variant*)local_58, (Color*)&local_98);
   stringify_variants((Variant*)&local_70);
   local_68 = &_LC87;
   local_78 = 0;
   local_60 = 1;
   String::parse_latin1((StrRange*)&local_78);
   Variant::operator_cast_to_String((Variant*)&local_80);
   String::operator +((String*)&local_68, (String*)&local_80);
   String::operator +(param_1, (String*)&local_68);
   puVar3 = local_68;
   if (local_68 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (undefined*)0x0;
         Memory::free_static(puVar3 + -0x10, false);
      }
   }
   lVar2 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   lVar2 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
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
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* String stringify_variants<float>(Variant const&, float) */Variant *stringify_variants<float>(Variant *param_1, float param_2) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   long in_FS_OFFSET;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_58, param_2);
   stringify_variants((Variant*)&local_70);
   local_68 = &_LC87;
   local_78 = 0;
   local_60 = 1;
   String::parse_latin1((StrRange*)&local_78);
   Variant::operator_cast_to_String((Variant*)&local_80);
   String::operator +((String*)&local_68, (String*)&local_80);
   String::operator +((String*)param_1, (String*)&local_68);
   puVar3 = local_68;
   if (local_68 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (undefined*)0x0;
         Memory::free_static(puVar3 + -0x10, false);
      }
   }
   lVar2 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   lVar2 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
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
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* String stringify_variants<Rect2i>(Variant const&, Rect2i) */String *stringify_variants<Rect2i>(String *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   long in_FS_OFFSET;
   undefined8 local_98;
   undefined8 local_90;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = param_3;
   local_90 = param_4;
   Variant::Variant((Variant*)local_58, (Rect2i*)&local_98);
   stringify_variants((Variant*)&local_70);
   local_68 = &_LC87;
   local_78 = 0;
   local_60 = 1;
   String::parse_latin1((StrRange*)&local_78);
   Variant::operator_cast_to_String((Variant*)&local_80);
   String::operator +((String*)&local_68, (String*)&local_80);
   String::operator +(param_1, (String*)&local_68);
   puVar3 = local_68;
   if (local_68 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (undefined*)0x0;
         Memory::free_static(puVar3 + -0x10, false);
      }
   }
   lVar2 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   lVar2 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
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
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* String stringify_variants<unsigned int, unsigned int, unsigned int>(Variant const&, unsigned int,
   unsigned int, unsigned int) */Variant *stringify_variants<unsigned_int,unsigned_int,unsigned_int>(Variant *param_1, uint param_2, uint param_3, uint param_4) {
   long *plVar1;
   char cVar2;
   long lVar3;
   undefined *puVar4;
   long in_FS_OFFSET;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   undefined *local_88;
   undefined8 local_80;
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_3);
   Variant::Variant((Variant*)local_58, param_4);
   stringify_variants<unsigned_int>((Variant*)&local_90, (uint)(Variant*)local_58);
   local_88 = &_LC87;
   local_98 = 0;
   local_80 = 1;
   String::parse_latin1((StrRange*)&local_98);
   Variant::operator_cast_to_String((Variant*)&local_a0);
   String::operator +((String*)&local_88, (String*)&local_a0);
   String::operator +((String*)&local_a8, (String*)&local_88);
   puVar4 = local_88;
   if (local_88 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = (undefined*)0x0;
         Memory::free_static(puVar4 + -0x10, false);
      }
   }
   lVar3 = local_a0;
   if (local_a0 != 0) {
      LOCK();
      plVar1 = (long*)( local_a0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   lVar3 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   lVar3 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   local_88 = &_LC87;
   local_90 = 0;
   local_80 = 1;
   String::parse_latin1((StrRange*)&local_90);
   Variant::operator_cast_to_String((Variant*)&local_98);
   String::operator +((String*)&local_88, (String*)&local_98);
   String::operator +((String*)param_1, (String*)&local_88);
   puVar4 = local_88;
   if (local_88 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = (undefined*)0x0;
         Memory::free_static(puVar4 + -0x10, false);
      }
   }
   lVar3 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   lVar3 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   lVar3 = local_a8;
   if (local_a8 != 0) {
      LOCK();
      plVar1 = (long*)( local_a8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a8 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         cVar2 = Variant::needs_deinit[local_78[0]];
         goto joined_r0x0010dc63;
      }
   }
   cVar2 = Variant::needs_deinit[local_78[0]];
   joined_r0x0010dc63:if (cVar2 != '\0') {
      Variant::_clear_internal();
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* void LocalVector<RenderingDeviceGraph::RecordedCommandSort, unsigned int, false,
   false>::sort_custom<_DefaultComparator<RenderingDeviceGraph::RecordedCommandSort> >() */void LocalVector<RenderingDeviceGraph::RecordedCommandSort,unsigned_int,false,false>::sort_custom<_DefaultComparator<RenderingDeviceGraph::RecordedCommandSort>>(LocalVector<RenderingDeviceGraph::RecordedCommandSort,unsigned_int,false,false> *this) {
   undefined8 uVar1;
   int iVar2;
   RecordedCommandSort_conflict *__src;
   RecordedCommandSort_conflict *pRVar3;
   long lVar4;
   uint uVar5;
   ulong uVar6;
   ulong uVar7;
   ulong uVar8;
   long lVar9;
   RecordedCommandSort_conflict *pRVar10;
   RecordedCommandSort_conflict *pRVar11;
   uint uVar12;
   uVar5 = *(uint*)this;
   if (uVar5 == 0) {
      return;
   }
   uVar7 = (ulong)uVar5;
   __src = *(RecordedCommandSort_conflict**)( this + 8 );
   if (uVar5 == 1) {
      SortArray<RenderingDeviceGraph::RecordedCommandSort,_DefaultComparator<RenderingDeviceGraph::RecordedCommandSort>,true>::introsort(0, 1, __src, 0);
      return;
   }
   lVar4 = 0;
   uVar8 = uVar7;
   do {
      uVar8 = (long)uVar8 >> 1;
      lVar4 = lVar4 + 1;
   } while ( uVar8 != 1 );
   SortArray<RenderingDeviceGraph::RecordedCommandSort,_DefaultComparator<RenderingDeviceGraph::RecordedCommandSort>,true>::introsort(0, uVar7, __src, lVar4 * 2);
   pRVar10 = __src + 0xc;
   if (uVar7 < 0x11) {
      uVar8 = 1;
      pRVar11 = pRVar10;
      do {
         uVar1 = *(undefined8*)pRVar11;
         iVar2 = *(int*)( pRVar11 + 8 );
         uVar5 = (uint)uVar1;
         if (( uVar5 < *(uint*)__src ) || ( ( uVar12 = ( uint )((ulong)uVar1 >> 0x20) ),pRVar3 = pRVar11,uVar6 = uVar8,uVar5 <= *(uint*)__src && ( ( uVar12 < *(uint*)( __src + 4 ) || ( ( uVar12 <= *(uint*)( __src + 4 ) && ( iVar2 < *(int*)( __src + 8 ) ) ) ) ) ) )) {
            memmove(pRVar10, __src, (long)pRVar11 - (long)__src);
            *(int*)( __src + 8 ) = iVar2;
            *(undefined8*)__src = uVar1;
         } else {
            while (true) {
               if (( *(uint*)( pRVar3 + -0xc ) <= uVar5 ) && ( ( *(uint*)( pRVar3 + -0xc ) < uVar5 || ( ( *(uint*)( pRVar3 + -8 ) <= uVar12 && ( ( *(uint*)( pRVar3 + -8 ) < uVar12 || ( *(int*)( pRVar3 + -4 ) <= iVar2 ) ) ) ) ) ) )) goto LAB_0010e09e;
               if (uVar6 == 1) break;
               *(undefined8*)pRVar3 = *(undefined8*)( pRVar3 + -0xc );
               *(undefined4*)( pRVar3 + 8 ) = *(undefined4*)( pRVar3 + -4 );
               pRVar3 = pRVar3 + -0xc;
               uVar6 = uVar6 - 1;
            };
            _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
            LAB_0010e09e:*(int*)( __src + uVar6 * 0xc + 8 ) = iVar2;
            *(undefined8*)( __src + uVar6 * 0xc ) = uVar1;
         }
         uVar8 = uVar8 + 1;
         pRVar11 = pRVar11 + 0xc;
      } while ( uVar7 != uVar8 );
   } else {
      lVar4 = 1;
      pRVar11 = pRVar10;
      do {
         uVar1 = *(undefined8*)pRVar11;
         iVar2 = *(int*)( pRVar11 + 8 );
         uVar5 = (uint)uVar1;
         if (( uVar5 < *(uint*)__src ) || ( ( uVar12 = ( uint )((ulong)uVar1 >> 0x20) ),pRVar3 = pRVar11,lVar9 = lVar4,uVar5 <= *(uint*)__src && ( ( uVar12 < *(uint*)( __src + 4 ) || ( ( uVar12 <= *(uint*)( __src + 4 ) && ( iVar2 < *(int*)( __src + 8 ) ) ) ) ) ) )) {
            memmove(pRVar10, __src, (long)pRVar11 - (long)__src);
            *(int*)( __src + 8 ) = iVar2;
            *(undefined8*)__src = uVar1;
         } else {
            while (true) {
               if (( *(uint*)( pRVar3 + -0xc ) <= uVar5 ) && ( ( *(uint*)( pRVar3 + -0xc ) < uVar5 || ( ( *(uint*)( pRVar3 + -8 ) <= uVar12 && ( ( *(uint*)( pRVar3 + -8 ) < uVar12 || ( *(int*)( pRVar3 + -4 ) <= iVar2 ) ) ) ) ) ) )) goto LAB_0010de7a;
               if (lVar9 == 1) break;
               *(undefined8*)pRVar3 = *(undefined8*)( pRVar3 + -0xc );
               *(undefined4*)( pRVar3 + 8 ) = *(undefined4*)( pRVar3 + -4 );
               pRVar3 = pRVar3 + -0xc;
               lVar9 = lVar9 + -1;
            };
            _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
            LAB_0010de7a:*(int*)( __src + lVar9 * 0xc + 8 ) = iVar2;
            *(undefined8*)( __src + lVar9 * 0xc ) = uVar1;
         }
         lVar4 = lVar4 + 1;
         pRVar11 = pRVar11 + 0xc;
      } while ( lVar4 != 0x10 );
      pRVar10 = __src + 0xc0;
      uVar8 = 0x10;
      do {
         uVar1 = *(undefined8*)pRVar10;
         iVar2 = *(int*)( pRVar10 + 8 );
         uVar5 = ( uint )((ulong)uVar1 >> 0x20);
         pRVar11 = pRVar10;
         uVar6 = uVar8;
         while (true) {
            if (( *(uint*)( pRVar11 + -0xc ) <= (uint)uVar1 ) && ( ( *(uint*)( pRVar11 + -0xc ) < (uint)uVar1 || ( ( *(uint*)( pRVar11 + -8 ) <= uVar5 && ( ( *(uint*)( pRVar11 + -8 ) < uVar5 || ( *(int*)( pRVar11 + -4 ) <= iVar2 ) ) ) ) ) ) )) goto LAB_0010df0b;
            if (uVar6 == 1) break;
            uVar6 = uVar6 - 1;
            *(undefined8*)pRVar11 = *(undefined8*)( pRVar11 + -0xc );
            *(undefined4*)( pRVar11 + 8 ) = *(undefined4*)( pRVar11 + -4 );
            pRVar11 = pRVar11 + -0xc;
         };
         _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
         LAB_0010df0b:uVar8 = uVar8 + 1;
         pRVar10 = pRVar10 + 0xc;
         *(int*)( __src + uVar6 * 0xc + 8 ) = iVar2;
         *(undefined8*)( __src + uVar6 * 0xc ) = uVar1;
      } while ( uVar7 != uVar8 );
   }
   return;
}/* String stringify_variants<char const*, unsigned int>(Variant const&, char const*, unsigned int)
    */Variant *stringify_variants<char_const*,unsigned_int>(Variant *param_1, char *param_2, uint param_3) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   undefined4 in_register_00000014;
   long in_FS_OFFSET;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_58, (char*)CONCAT44(in_register_00000014, param_3));
   stringify_variants<unsigned_int>((Variant*)&local_70, (uint)(Variant*)local_58);
   local_78 = 0;
   local_68 = &_LC87;
   local_60 = 1;
   String::parse_latin1((StrRange*)&local_78);
   Variant::operator_cast_to_String((Variant*)&local_80);
   String::operator +((String*)&local_68, (String*)&local_80);
   String::operator +((String*)param_1, (String*)&local_68);
   puVar3 = local_68;
   if (local_68 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (undefined*)0x0;
         Memory::free_static(puVar3 + -0x10, false);
      }
   }
   lVar2 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   lVar2 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
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
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* String stringify_variants<unsigned int, char const*, unsigned int>(Variant const&, unsigned int,
   char const*, unsigned int) */Variant *stringify_variants<unsigned_int,char_const*,unsigned_int>(Variant *param_1, uint param_2, char *param_3, uint param_4) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   long in_FS_OFFSET;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_58, (uint)param_3);
   stringify_variants<char_const*,unsigned_int>((Variant*)&local_70, (char*)local_58, param_4);
   local_68 = &_LC87;
   local_78 = 0;
   local_60 = 1;
   String::parse_latin1((StrRange*)&local_78);
   Variant::operator_cast_to_String((Variant*)&local_80);
   String::operator +((String*)&local_68, (String*)&local_80);
   String::operator +((String*)param_1, (String*)&local_68);
   puVar3 = local_68;
   if (local_68 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (undefined*)0x0;
         Memory::free_static(puVar3 + -0x10, false);
      }
   }
   lVar2 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   lVar2 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
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
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* String stringify_variants<char const*, unsigned int, char const*, unsigned int>(Variant const&,
   char const*, unsigned int, char const*, unsigned int) */Variant *stringify_variants<char_const*,unsigned_int,char_const*,unsigned_int>(Variant *param_1, char *param_2, uint param_3, char *param_4, uint param_5) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   undefined4 in_register_00000014;
   long in_FS_OFFSET;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_58, (char*)CONCAT44(in_register_00000014, param_3));
   stringify_variants<unsigned_int,char_const*,unsigned_int>((Variant*)&local_70, (uint)(Variant*)local_58, (char*)( (ulong)param_4 & 0xffffffff ), param_5);
   local_78 = 0;
   local_68 = &_LC87;
   local_60 = 1;
   String::parse_latin1((StrRange*)&local_78);
   Variant::operator_cast_to_String((Variant*)&local_80);
   String::operator +((String*)&local_68, (String*)&local_80);
   String::operator +((String*)param_1, (String*)&local_68);
   puVar3 = local_68;
   if (local_68 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (undefined*)0x0;
         Memory::free_static(puVar3 + -0x10, false);
      }
   }
   lVar2 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   lVar2 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
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
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* String stringify_variants<unsigned int, char const*, unsigned int, char const*, unsigned
   int>(Variant const&, unsigned int, char const*, unsigned int, char const*, unsigned int) */Variant *stringify_variants<unsigned_int,char_const*,unsigned_int,char_const*,unsigned_int>(Variant *param_1, uint param_2, char *param_3, uint param_4, char *param_5, uint param_6) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   long in_FS_OFFSET;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_58, (uint)param_3);
   stringify_variants<char_const*,unsigned_int,char_const*,unsigned_int>((Variant*)&local_70, (char*)local_58, param_4, (char*)( (ulong)param_5 & 0xffffffff ), param_6);
   local_68 = &_LC87;
   local_78 = 0;
   local_60 = 1;
   String::parse_latin1((StrRange*)&local_78);
   Variant::operator_cast_to_String((Variant*)&local_80);
   String::operator +((String*)&local_68, (String*)&local_80);
   String::operator +((String*)param_1, (String*)&local_68);
   puVar3 = local_68;
   if (local_68 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (undefined*)0x0;
         Memory::free_static(puVar3 + -0x10, false);
      }
   }
   lVar2 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   lVar2 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
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
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* void print_line<String, char const*, unsigned int, char const*, unsigned int, char const*,
   unsigned int>(Variant const&, String, char const*, unsigned int, char const*, unsigned int, char
   const*, unsigned int) */void print_line<String,char_const*,unsigned_int,char_const*,unsigned_int,char_const*,unsigned_int>(undefined8 param_1, CowData *param_2, char *param_3, uint param_4, uint param_5, uint param_6, uint param_7) {
   long *plVar1;
   char cVar2;
   long lVar3;
   undefined *puVar4;
   long in_FS_OFFSET;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   undefined *local_88;
   undefined8 local_80;
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_b0 = 0;
   if (*(long*)param_2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b0, param_2);
   }
   Variant::Variant((Variant*)local_78, (String*)&local_b0);
   Variant::Variant((Variant*)local_58, param_3);
   stringify_variants<unsigned_int,char_const*,unsigned_int,char_const*,unsigned_int>((Variant*)&local_90, (uint)(Variant*)local_58, (char*)(ulong)param_4, param_5, (char*)(ulong)param_6, param_7);
   local_98 = 0;
   local_88 = &_LC87;
   local_80 = 1;
   String::parse_latin1((StrRange*)&local_98);
   Variant::operator_cast_to_String((Variant*)&local_a0);
   String::operator +((String*)&local_88, (String*)&local_a0);
   String::operator +((String*)&local_a8, (String*)&local_88);
   puVar4 = local_88;
   if (local_88 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = (undefined*)0x0;
         Memory::free_static(puVar4 + -0x10, false);
      }
   }
   lVar3 = local_a0;
   if (local_a0 != 0) {
      LOCK();
      plVar1 = (long*)( local_a0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   lVar3 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   lVar3 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   local_88 = &_LC87;
   local_90 = 0;
   local_80 = 1;
   String::parse_latin1((StrRange*)&local_90);
   Variant::operator_cast_to_String((Variant*)&local_98);
   String::operator +((String*)&local_88, (String*)&local_98);
   String::operator +((String*)&local_a0, (String*)&local_88);
   puVar4 = local_88;
   if (local_88 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = (undefined*)0x0;
         Memory::free_static(puVar4 + -0x10, false);
      }
   }
   lVar3 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   lVar3 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   lVar3 = local_a8;
   if (local_a8 != 0) {
      LOCK();
      plVar1 = (long*)( local_a8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a8 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         cVar2 = Variant::needs_deinit[local_78[0]];
         goto joined_r0x0010ebc3;
      }
   }
   cVar2 = Variant::needs_deinit[local_78[0]];
   joined_r0x0010ebc3:if (cVar2 != '\0') {
      Variant::_clear_internal();
   }
   __print_line((String*)&local_a0);
   lVar3 = local_a0;
   if (local_a0 != 0) {
      LOCK();
      plVar1 = (long*)( local_a0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   lVar3 = local_b0;
   if (local_b0 != 0) {
      LOCK();
      plVar1 = (long*)( local_b0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* String stringify_variants<String, char const*, unsigned int>(Variant const&, String, char const*,
   unsigned int) */String *stringify_variants<String,char_const*,unsigned_int>(String *param_1, undefined8 param_2, String *param_3, uint param_4) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   long in_FS_OFFSET;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_58, param_3);
   stringify_variants<char_const*,unsigned_int>((Variant*)&local_70, (char*)local_58, param_4);
   local_68 = &_LC87;
   local_78 = 0;
   local_60 = 1;
   String::parse_latin1((StrRange*)&local_78);
   Variant::operator_cast_to_String((Variant*)&local_80);
   String::operator +((String*)&local_68, (String*)&local_80);
   String::operator +(param_1, (String*)&local_68);
   puVar3 = local_68;
   if (local_68 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (undefined*)0x0;
         Memory::free_static(puVar3 + -0x10, false);
      }
   }
   lVar2 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   lVar2 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
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
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* String stringify_variants<char const*, RenderingDeviceCommons::IndexBufferFormat, char const*,
   unsigned int>(Variant const&, char const*, RenderingDeviceCommons::IndexBufferFormat, char
   const*, unsigned int) */String *stringify_variants<char_const*,RenderingDeviceCommons::IndexBufferFormat,char_const*,unsigned_int>(String *param_1, undefined8 param_2, char *param_3, int param_4, uint param_5) {
   long *plVar1;
   char cVar2;
   long lVar3;
   undefined *puVar4;
   long in_FS_OFFSET;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   undefined *local_88;
   undefined8 local_80;
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_3);
   Variant::Variant((Variant*)local_58, param_4);
   stringify_variants<char_const*,unsigned_int>((Variant*)&local_90, (char*)local_58, param_5);
   local_88 = &_LC87;
   local_98 = 0;
   local_80 = 1;
   String::parse_latin1((StrRange*)&local_98);
   Variant::operator_cast_to_String((Variant*)&local_a0);
   String::operator +((String*)&local_88, (String*)&local_a0);
   String::operator +((String*)&local_a8, (String*)&local_88);
   puVar4 = local_88;
   if (local_88 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = (undefined*)0x0;
         Memory::free_static(puVar4 + -0x10, false);
      }
   }
   lVar3 = local_a0;
   if (local_a0 != 0) {
      LOCK();
      plVar1 = (long*)( local_a0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   lVar3 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   lVar3 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   local_88 = &_LC87;
   local_90 = 0;
   local_80 = 1;
   String::parse_latin1((StrRange*)&local_90);
   Variant::operator_cast_to_String((Variant*)&local_98);
   String::operator +((String*)&local_88, (String*)&local_98);
   String::operator +(param_1, (String*)&local_88);
   puVar4 = local_88;
   if (local_88 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = (undefined*)0x0;
         Memory::free_static(puVar4 + -0x10, false);
      }
   }
   lVar3 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   lVar3 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   lVar3 = local_a8;
   if (local_a8 != 0) {
      LOCK();
      plVar1 = (long*)( local_a8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a8 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         cVar2 = Variant::needs_deinit[local_78[0]];
         goto joined_r0x0010f11b;
      }
   }
   cVar2 = Variant::needs_deinit[local_78[0]];
   joined_r0x0010f11b:if (cVar2 != '\0') {
      Variant::_clear_internal();
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* void print_line<String, char const*, RenderingDeviceCommons::IndexBufferFormat, char const*,
   unsigned int>(Variant const&, String, char const*, RenderingDeviceCommons::IndexBufferFormat,
   char const*, unsigned int) */void print_line<String,char_const*,RenderingDeviceCommons::IndexBufferFormat,char_const*,unsigned_int>(undefined8 param_1, long *param_2, undefined8 param_3, undefined4 param_4, undefined8 param_5, undefined4 param_6) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   long lVar4;
   long in_FS_OFFSET;
   bool bVar5;
   long local_90;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_90 = 0;
   if (*param_2 != 0) {
      plVar1 = (long*)( *param_2 + -0x10 );
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_0010f294;
         LOCK();
         lVar4 = *plVar1;
         bVar5 = lVar2 == lVar4;
         if (bVar5) {
            *plVar1 = lVar2 + 1;
            lVar4 = lVar2;
         }
         UNLOCK();
      } while ( !bVar5 );
      if (lVar4 != -1) {
         local_90 = *param_2;
      }
   }
   LAB_0010f294:Variant::Variant((Variant*)local_58, (String*)&local_90);
   stringify_variants<char_const*,RenderingDeviceCommons::IndexBufferFormat,char_const*,unsigned_int>(&local_70, (Variant*)local_58, param_3, param_4, param_5, param_6);
   local_78 = 0;
   local_68 = &_LC87;
   local_60 = 1;
   String::parse_latin1((StrRange*)&local_78);
   Variant::operator_cast_to_String((Variant*)&local_80);
   String::operator +((String*)&local_68, (String*)&local_80);
   String::operator +((String*)&local_88, (String*)&local_68);
   puVar3 = local_68;
   if (local_68 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (undefined*)0x0;
         Memory::free_static(puVar3 + -0x10, false);
      }
   }
   lVar2 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   lVar2 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
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
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   __print_line((String*)&local_88);
   lVar2 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = 0;
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
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* String stringify_variants<char const*, String, char const*, unsigned int>(Variant const&, char
   const*, String, char const*, unsigned int) */String *stringify_variants<char_const*,String,char_const*,unsigned_int>(String *param_1, undefined8 param_2, char *param_3, long *param_4, undefined8 param_5, undefined4 param_6) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   long lVar4;
   long in_FS_OFFSET;
   bool bVar5;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = 0;
   if (*param_4 != 0) {
      plVar1 = (long*)( *param_4 + -0x10 );
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_0010f53a;
         LOCK();
         lVar4 = *plVar1;
         bVar5 = lVar2 == lVar4;
         if (bVar5) {
            *plVar1 = lVar2 + 1;
            lVar4 = lVar2;
         }
         UNLOCK();
      } while ( !bVar5 );
      if (lVar4 != -1) {
         local_78 = *param_4;
      }
   }
   LAB_0010f53a:Variant::Variant((Variant*)local_58, param_3);
   stringify_variants<String,char_const*,unsigned_int>(&local_70, (Variant*)local_58, &local_78, param_5, param_6);
   local_68 = &_LC87;
   local_80 = 0;
   local_60 = 1;
   String::parse_latin1((StrRange*)&local_80);
   Variant::operator_cast_to_String((Variant*)&local_88);
   String::operator +((String*)&local_68, (String*)&local_88);
   String::operator +(param_1, (String*)&local_68);
   puVar3 = local_68;
   if (local_68 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (undefined*)0x0;
         Memory::free_static(puVar3 + -0x10, false);
      }
   }
   lVar2 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   lVar2 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
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
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   lVar2 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* void print_line<char const*, unsigned int, char const*, String, char const*, unsigned
   int>(Variant const&, char const*, unsigned int, char const*, String, char const*, unsigned int)
    */void print_line<char_const*,unsigned_int,char_const*,String,char_const*,unsigned_int>(undefined8 param_1, char *param_2, uint param_3, undefined8 param_4, CowData *param_5, undefined8 param_6, undefined4 param_7) {
   long *plVar1;
   char cVar2;
   long lVar3;
   undefined *puVar4;
   long in_FS_OFFSET;
   CowData<char32_t> *this;
   Variant *this_00;
   long local_c0;
   long local_b8;
   long local_b0;
   Variant local_a8[8];
   undefined8 local_a0;
   long local_98;
   long local_90;
   undefined *local_88;
   undefined8 local_80;
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_c0 = 0;
   if (*(long*)param_5 == 0) {
      LAB_0010fb79:local_b8 = 0;
      this_00 = (Variant*)local_78;
      Variant::Variant(this_00, param_2);
      local_98 = 0;
   } else {
      this(CowData<char32_t> * ) & local_c0;
      CowData<char32_t>::_ref(this, param_5);
      local_b8 = 0;
      if (local_c0 == 0) goto LAB_0010fb79;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)this);
      lVar3 = local_b8;
      this_00 = (Variant*)local_78;
      Variant::Variant(this_00, param_2);
      local_98 = 0;
      if (lVar3 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_98, (CowData*)&local_b8);
      }
   }
   Variant::Variant((Variant*)local_58, param_3);
   stringify_variants<char_const*,String,char_const*,unsigned_int>((StrRange*)&local_90, (Variant*)local_58, param_4, (Variant*)&local_98, param_6, param_7, this_00, param_1);
   local_88 = &_LC87;
   local_a0 = 0;
   local_80 = 1;
   String::parse_latin1((StrRange*)&local_a0);
   Variant::operator_cast_to_String(local_a8);
   String::operator +((String*)&local_88, (String*)local_a8);
   String::operator +((String*)&local_b0, (String*)&local_88);
   puVar4 = local_88;
   if (local_88 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = (undefined*)0x0;
         Memory::free_static(puVar4 + -0x10, false);
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   lVar3 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_98 + -0x10 ), false);
      }
   }
   local_88 = &_LC87;
   local_90 = 0;
   local_80 = 1;
   String::parse_latin1((StrRange*)&local_90);
   Variant::operator_cast_to_String((Variant*)&local_98);
   String::operator +((String*)&local_88, (String*)&local_98);
   String::operator +((String*)&local_a0, (String*)&local_88);
   puVar4 = local_88;
   if (local_88 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = (undefined*)0x0;
         Memory::free_static(puVar4 + -0x10, false);
      }
   }
   lVar3 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   lVar3 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   lVar3 = local_b0;
   if (local_b0 == 0) {
      LAB_0010f9b3:cVar2 = Variant::needs_deinit[local_78[0]];
   } else {
      LOCK();
      plVar1 = (long*)( local_b0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010f9b3;
      local_b0 = 0;
      Memory::free_static((void*)( lVar3 + -0x10 ), false);
      cVar2 = Variant::needs_deinit[local_78[0]];
   }
   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }
   if (local_b8 != 0) {
      LOCK();
      plVar1 = (long*)( local_b8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_b8 + -0x10 ), false);
      }
   }
   __print_line((String*)&local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   if (local_c0 != 0) {
      LOCK();
      plVar1 = (long*)( local_c0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static((void*)( local_c0 + -0x10 ), false);
            return;
         }
         goto LAB_0010fbaf;
      }
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_0010fbaf:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* void print_line<String, char const*, String, char const*, unsigned int>(Variant const&, String,
   char const*, String, char const*, unsigned int) */void print_line<String,char_const*,String,char_const*,unsigned_int>(undefined8 param_1, CowData *param_2, undefined8 param_3, CowData *param_4, undefined8 param_5, undefined4 param_6) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   long in_FS_OFFSET;
   long local_a0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = 0;
   if (*(long*)param_4 == 0) {
      local_a0 = 0;
      if (*(long*)param_2 == 0) {
         local_78 = 0;
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_a0, param_2);
         local_78 = 0;
      }
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_98, param_4);
      lVar2 = local_98;
      local_a0 = 0;
      if (*(long*)param_2 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_a0, param_2);
      }
      local_78 = 0;
      if (lVar2 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)&local_98);
      }
   }
   Variant::Variant((Variant*)local_58, (String*)&local_a0);
   stringify_variants<char_const*,String,char_const*,unsigned_int>(&local_70, (Variant*)local_58, param_3, &local_78, param_5, param_6, param_1);
   local_68 = &_LC87;
   local_80 = 0;
   local_60 = 1;
   String::parse_latin1((StrRange*)&local_80);
   Variant::operator_cast_to_String((Variant*)&local_88);
   String::operator +((String*)&local_68, (String*)&local_88);
   String::operator +((String*)&local_90, (String*)&local_68);
   puVar3 = local_68;
   if (local_68 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (undefined*)0x0;
         Memory::free_static(puVar3 + -0x10, false);
      }
   }
   lVar2 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   lVar2 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
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
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_78 + -0x10 ), false);
      }
   }
   __print_line((String*)&local_90);
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
   lVar2 = local_a0;
   if (local_a0 != 0) {
      LOCK();
      plVar1 = (long*)( local_a0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a0 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static((void*)( local_98 + -0x10 ), false);
            return;
         }
         goto LAB_0010ff58;
      }
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_0010ff58:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* String stringify_variants<char const*, String>(Variant const&, char const*, String) */String *stringify_variants<char_const*,String>(String *param_1, undefined8 param_2, char *param_3, long *param_4) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   long lVar4;
   long in_FS_OFFSET;
   bool bVar5;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = 0;
   if (*param_4 != 0) {
      plVar1 = (long*)( *param_4 + -0x10 );
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_0010ffc1;
         LOCK();
         lVar4 = *plVar1;
         bVar5 = lVar2 == lVar4;
         if (bVar5) {
            *plVar1 = lVar2 + 1;
            lVar4 = lVar2;
         }
         UNLOCK();
      } while ( !bVar5 );
      if (lVar4 != -1) {
         local_78 = *param_4;
      }
   }
   LAB_0010ffc1:Variant::Variant((Variant*)local_58, param_3);
   stringify_variants<String>(&local_70, (Variant*)local_58, &local_78);
   local_68 = &_LC87;
   local_80 = 0;
   local_60 = 1;
   String::parse_latin1((StrRange*)&local_80);
   Variant::operator_cast_to_String((Variant*)&local_88);
   String::operator +((String*)&local_68, (String*)&local_88);
   String::operator +(param_1, (String*)&local_68);
   puVar3 = local_68;
   if (local_68 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (undefined*)0x0;
         Memory::free_static(puVar3 + -0x10, false);
      }
   }
   lVar2 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   lVar2 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
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
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   lVar2 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* String stringify_variants<unsigned int, char const*, String>(Variant const&, unsigned int, char
   const*, String) */String *stringify_variants<unsigned_int,char_const*,String>(String *param_1, undefined8 param_2, uint param_3, undefined8 param_4, long *param_5) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   long lVar4;
   long in_FS_OFFSET;
   bool bVar5;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = 0;
   if (*param_5 != 0) {
      plVar1 = (long*)( *param_5 + -0x10 );
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_00110213;
         LOCK();
         lVar4 = *plVar1;
         bVar5 = lVar2 == lVar4;
         if (bVar5) {
            *plVar1 = lVar2 + 1;
            lVar4 = lVar2;
         }
         UNLOCK();
      } while ( !bVar5 );
      if (lVar4 != -1) {
         local_78 = *param_5;
      }
   }
   LAB_00110213:Variant::Variant((Variant*)local_58, param_3);
   stringify_variants<char_const*,String>(&local_70, (Variant*)local_58, param_4, &local_78);
   local_68 = &_LC87;
   local_80 = 0;
   local_60 = 1;
   String::parse_latin1((StrRange*)&local_80);
   Variant::operator_cast_to_String((Variant*)&local_88);
   String::operator +((String*)&local_68, (String*)&local_88);
   String::operator +(param_1, (String*)&local_68);
   puVar3 = local_68;
   if (local_68 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (undefined*)0x0;
         Memory::free_static(puVar3 + -0x10, false);
      }
   }
   lVar2 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   lVar2 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
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
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_78 + -0x10 ), false);
      }
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* void print_line<char const*, unsigned int, char const*, String>(Variant const&, char const*,
   unsigned int, char const*, String) */void print_line<char_const*,unsigned_int,char_const*,String>(undefined8 param_1, char *param_2, undefined4 param_3, undefined8 param_4, CowData *param_5) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = 0;
   if (*(long*)param_5 == 0) {
      local_78 = 0;
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_98, param_5);
      local_78 = 0;
      if (local_98 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)&local_98);
      }
   }
   Variant::Variant((Variant*)local_58, param_2);
   stringify_variants<unsigned_int,char_const*,String>(&local_70, (Variant*)local_58, param_3, param_4, &local_78);
   local_80 = 0;
   local_68 = &_LC87;
   local_60 = 1;
   String::parse_latin1((StrRange*)&local_80);
   Variant::operator_cast_to_String((Variant*)&local_88);
   String::operator +((String*)&local_68, (String*)&local_88);
   String::operator +((String*)&local_90, (String*)&local_68);
   puVar3 = local_68;
   if (local_68 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (undefined*)0x0;
         Memory::free_static(puVar3 + -0x10, false);
      }
   }
   lVar2 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   lVar2 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
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
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_78 + -0x10 ), false);
      }
   }
   __print_line((String*)&local_90);
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
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static((void*)( local_98 + -0x10 ), false);
            return;
         }
         goto LAB_001106f5;
      }
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_001106f5:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* String stringify_variants<char const*>(Variant const&, char const*) */Variant *stringify_variants<char_const*>(Variant *param_1, char *param_2) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   char *in_RDX;
   long in_FS_OFFSET;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_58, in_RDX);
   stringify_variants((Variant*)&local_70);
   local_68 = &_LC87;
   local_78 = 0;
   local_60 = 1;
   String::parse_latin1((StrRange*)&local_78);
   Variant::operator_cast_to_String((Variant*)&local_80);
   String::operator +((String*)&local_68, (String*)&local_80);
   String::operator +((String*)param_1, (String*)&local_68);
   puVar3 = local_68;
   if (local_68 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (undefined*)0x0;
         Memory::free_static(puVar3 + -0x10, false);
      }
   }
   lVar2 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   lVar2 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
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
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* void print_line<char const*, unsigned int, char const*>(Variant const&, char const*, unsigned
   int, char const*) */void print_line<char_const*,unsigned_int,char_const*>(Variant *param_1, char *param_2, uint param_3, char *param_4) {
   long *plVar1;
   char cVar2;
   long lVar3;
   undefined *puVar4;
   long in_FS_OFFSET;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   undefined *local_88;
   undefined8 local_80;
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_2);
   Variant::Variant((Variant*)local_58, param_3);
   stringify_variants<char_const*>((Variant*)&local_90, (char*)local_58);
   local_88 = &_LC87;
   local_98 = 0;
   local_80 = 1;
   String::parse_latin1((StrRange*)&local_98);
   Variant::operator_cast_to_String((Variant*)&local_a0);
   String::operator +((String*)&local_88, (String*)&local_a0);
   String::operator +((String*)&local_a8, (String*)&local_88);
   puVar4 = local_88;
   if (local_88 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = (undefined*)0x0;
         Memory::free_static(puVar4 + -0x10, false);
      }
   }
   lVar3 = local_a0;
   if (local_a0 != 0) {
      LOCK();
      plVar1 = (long*)( local_a0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   lVar3 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   lVar3 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   local_88 = &_LC87;
   local_90 = 0;
   local_80 = 1;
   String::parse_latin1((StrRange*)&local_90);
   Variant::operator_cast_to_String((Variant*)&local_98);
   String::operator +((String*)&local_88, (String*)&local_98);
   String::operator +((String*)&local_a0, (String*)&local_88);
   puVar4 = local_88;
   if (local_88 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = (undefined*)0x0;
         Memory::free_static(puVar4 + -0x10, false);
      }
   }
   lVar3 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   lVar3 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   lVar3 = local_a8;
   if (local_a8 != 0) {
      LOCK();
      plVar1 = (long*)( local_a8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a8 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         cVar2 = Variant::needs_deinit[local_78[0]];
         goto joined_r0x00110b5b;
      }
   }
   cVar2 = Variant::needs_deinit[local_78[0]];
   joined_r0x00110b5b:if (cVar2 != '\0') {
      Variant::_clear_internal();
   }
   __print_line((String*)&local_a0);
   lVar3 = local_a0;
   if (local_a0 != 0) {
      LOCK();
      plVar1 = (long*)( local_a0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* String stringify_variants<String, char const*, String>(Variant const&, String, char const*,
   String) */String *stringify_variants<String,char_const*,String>(String *param_1, undefined8 param_2, String *param_3, undefined8 param_4, long *param_5) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   long lVar4;
   long in_FS_OFFSET;
   bool bVar5;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = 0;
   if (*param_5 != 0) {
      plVar1 = (long*)( *param_5 + -0x10 );
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_00110cd4;
         LOCK();
         lVar4 = *plVar1;
         bVar5 = lVar2 == lVar4;
         if (bVar5) {
            *plVar1 = lVar2 + 1;
            lVar4 = lVar2;
         }
         UNLOCK();
      } while ( !bVar5 );
      if (lVar4 != -1) {
         local_78 = *param_5;
      }
   }
   LAB_00110cd4:Variant::Variant((Variant*)local_58, param_3);
   stringify_variants<char_const*,String>(&local_70, (Variant*)local_58, param_4, &local_78);
   local_68 = &_LC87;
   local_80 = 0;
   local_60 = 1;
   String::parse_latin1((StrRange*)&local_80);
   Variant::operator_cast_to_String((Variant*)&local_88);
   String::operator +((String*)&local_68, (String*)&local_88);
   String::operator +(param_1, (String*)&local_68);
   puVar3 = local_68;
   if (local_68 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (undefined*)0x0;
         Memory::free_static(puVar3 + -0x10, false);
      }
   }
   lVar2 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   lVar2 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
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
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_78 + -0x10 ), false);
      }
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* String stringify_variants<char const*, String, char const*, String>(Variant const&, char const*,
   String, char const*, String) */String *stringify_variants<char_const*,String,char_const*,String>(String *param_1, undefined8 param_2, char *param_3, long *param_4, undefined8 param_5, long *param_6) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   long lVar4;
   long in_FS_OFFSET;
   bool bVar5;
   long local_90;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = 0;
   if (*param_6 != 0) {
      plVar1 = (long*)( *param_6 + -0x10 );
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_00110f27;
         LOCK();
         lVar4 = *plVar1;
         bVar5 = lVar2 == lVar4;
         if (bVar5) {
            *plVar1 = lVar2 + 1;
            lVar4 = lVar2;
         }
         UNLOCK();
      } while ( !bVar5 );
      if (lVar4 != -1) {
         local_78 = *param_6;
      }
   }
   LAB_00110f27:local_80 = 0;
   plVar1 = (long*)( *param_4 + -0x10 );
   if (*param_4 != 0) {
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_00110f5d;
         LOCK();
         lVar4 = *plVar1;
         bVar5 = lVar2 == lVar4;
         if (bVar5) {
            *plVar1 = lVar2 + 1;
            lVar4 = lVar2;
         }
         UNLOCK();
      } while ( !bVar5 );
      if (lVar4 != -1) {
         local_80 = *param_4;
      }
   }
   LAB_00110f5d:Variant::Variant((Variant*)local_58, param_3);
   stringify_variants<String,char_const*,String>(&local_70, (Variant*)local_58, &local_80, param_5, &local_78);
   local_68 = &_LC87;
   local_88 = 0;
   local_60 = 1;
   String::parse_latin1((StrRange*)&local_88);
   Variant::operator_cast_to_String((Variant*)&local_90);
   String::operator +((String*)&local_68, (String*)&local_90);
   String::operator +(param_1, (String*)&local_68);
   puVar3 = local_68;
   if (local_68 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (undefined*)0x0;
         Memory::free_static(puVar3 + -0x10, false);
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
   lVar2 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
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
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   lVar2 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_78 + -0x10 ), false);
      }
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* void print_line<char const*, unsigned int, char const*, String, char const*, String>(Variant
   const&, char const*, unsigned int, char const*, String, char const*, String) */void print_line<char_const*,unsigned_int,char_const*,String,char_const*,String>(undefined8 param_1, char *param_2, uint param_3, undefined8 param_4, CowData *param_5, undefined8 param_6, CowData *param_7) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined *puVar4;
   long in_FS_OFFSET;
   Variant *local_118;
   CowData *local_110;
   CowData<char32_t> *local_108;
   CowData *local_100;
   CowData<char32_t> *local_f8;
   long local_d8;
   long local_d0;
   long local_c8;
   long local_c0;
   String local_b8[8];
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   undefined *local_88;
   undefined8 local_80;
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_d0 = 0;
   if (*(long*)param_7 == 0) {
      local_d8 = 0;
      if (*(long*)param_5 == 0) {
         local_c0 = 0;
         local_c8 = 0;
         Variant::Variant((Variant*)local_78, param_2);
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, param_5);
         LAB_001116f9:local_c0 = 0;
         local_c8 = 0;
         if (local_d8 != 0) goto LAB_00111258;
         Variant::Variant((Variant*)local_78, param_2);
      }
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d0, param_7);
      lVar3 = local_d0;
      local_d8 = 0;
      if (*(long*)param_5 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, param_5);
         lVar2 = local_d8;
         local_c0 = 0;
         if (lVar3 == 0) goto LAB_001116f9;
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_c0, (CowData*)&local_d0);
         if (lVar2 == 0) goto LAB_00111659;
         LAB_00111258:lVar2 = local_c0;
         local_100 = (CowData*)&local_c0;
         local_110 = (CowData*)&local_d8;
         local_c8 = 0;
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, local_110);
         lVar3 = local_c8;
         Variant::Variant((Variant*)local_78, param_2);
         local_98 = 0;
         if (lVar2 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_98, local_100);
         }
         local_a0 = 0;
         if (lVar3 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_a0, (CowData*)&local_c8);
         }
         goto LAB_001112d6;
      }
      local_c0 = 0;
      if (local_d0 == 0) {
         local_c8 = 0;
         Variant::Variant((Variant*)local_78, param_2);
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_c0, (CowData*)&local_d0);
         LAB_00111659:lVar3 = local_c0;
         local_100 = (CowData*)&local_c0;
         local_c8 = 0;
         Variant::Variant((Variant*)local_78, param_2);
         local_98 = 0;
         if (lVar3 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_98, local_100);
            local_a0 = 0;
            goto LAB_001112d6;
         }
      }
   }
   local_98 = 0;
   local_a0 = 0;
   LAB_001112d6:local_108 = (CowData<char32_t>*)&local_c8;
   local_118 = (Variant*)&local_98;
   local_f8 = (CowData<char32_t>*)&local_d0;
   local_100 = (CowData*)&local_c0;
   local_110 = (CowData*)&local_d8;
   Variant::Variant((Variant*)local_58, param_3);
   stringify_variants<char_const*,String,char_const*,String>((StrRange*)&local_90, (Variant*)local_58, param_4, (CowData<char32_t>*)&local_a0, param_6, local_118);
   local_a8 = 0;
   local_88 = &_LC87;
   local_80 = 1;
   String::parse_latin1((StrRange*)&local_a8);
   Variant::operator_cast_to_String((Variant*)&local_b0);
   String::operator +((String*)&local_88, (String*)&local_b0);
   String::operator +(local_b8, (String*)&local_88);
   puVar4 = local_88;
   if (local_88 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = (undefined*)0x0;
         Memory::free_static(puVar4 + -0x10, false);
      }
   }
   lVar3 = local_b0;
   if (local_b0 != 0) {
      LOCK();
      plVar1 = (long*)( local_b0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   lVar3 = local_a8;
   if (local_a8 != 0) {
      LOCK();
      plVar1 = (long*)( local_a8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a8 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   lVar3 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_98 + -0x10 ), false);
      }
   }
   local_88 = &_LC87;
   local_90 = 0;
   local_80 = 1;
   String::parse_latin1((StrRange*)&local_90);
   Variant::operator_cast_to_String(local_118);
   String::operator +((String*)&local_88, (String*)local_118);
   String::operator +((String*)&local_a0, (String*)&local_88);
   puVar4 = local_88;
   if (local_88 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = (undefined*)0x0;
         Memory::free_static(puVar4 + -0x10, false);
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }
   CowData<char32_t>::_unref(local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_100);
   __print_line((String*)&local_a0);
   lVar3 = local_a0;
   if (local_a0 != 0) {
      LOCK();
      plVar1 = (long*)( local_a0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
   CowData<char32_t>::_unref(local_f8);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* void print_line<String, char const*, String, char const*, String>(Variant const&, String, char
   const*, String, char const*, String) */void print_line<String,char_const*,String,char_const*,String>(undefined8 param_1, CowData *param_2, undefined8 param_3, CowData *param_4, undefined8 param_5, CowData *param_6) {
   long *plVar1;
   undefined *puVar2;
   long lVar3;
   long lVar4;
   long in_FS_OFFSET;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a0 = 0;
   lVar4 = *(long*)param_6;
   if (*(long*)param_6 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_a0, param_6);
      lVar4 = local_a0;
   }
   local_a8 = 0;
   lVar3 = *(long*)param_4;
   if (*(long*)param_4 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, param_4);
      lVar3 = local_a8;
   }
   local_b0 = 0;
   if (*(long*)param_2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b0, param_2);
   }
   local_78 = 0;
   if (lVar4 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)&local_a0);
   }
   local_80 = 0;
   if (lVar3 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)&local_a8);
   }
   Variant::Variant((Variant*)local_58, (String*)&local_b0);
   stringify_variants<char_const*,String,char_const*,String>(&local_70, (Variant*)local_58, param_3, (CowData<char32_t>*)&local_80, param_5, (CowData<char32_t>*)&local_78);
   local_68 = &_LC87;
   local_88 = 0;
   local_60 = 1;
   String::parse_latin1((StrRange*)&local_88);
   Variant::operator_cast_to_String((Variant*)&local_90);
   String::operator +((String*)&local_68, (String*)&local_90);
   String::operator +((String*)&local_98, (String*)&local_68);
   puVar2 = local_68;
   if (local_68 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (undefined*)0x0;
         Memory::free_static(puVar2 + -0x10, false);
      }
   }
   lVar4 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }
   }
   lVar4 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }
   }
   lVar4 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }
   }
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_80 + -0x10 ), false);
      }
   }
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_78 + -0x10 ), false);
      }
   }
   __print_line((String*)&local_98);
   lVar4 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }
   }
   lVar4 = local_b0;
   if (local_b0 != 0) {
      LOCK();
      plVar1 = (long*)( local_b0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b0 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }
   }
   if (local_a8 != 0) {
      LOCK();
      plVar1 = (long*)( local_a8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_a8 + -0x10 ), false);
      }
   }
   if (local_a0 != 0) {
      LOCK();
      plVar1 = (long*)( local_a0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static((void*)( local_a0 + -0x10 ), false);
            return;
         }
         goto LAB_00111c3d;
      }
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_00111c3d:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* String stringify_variants<String, char const*, Color>(Variant const&, String, char const*, Color)
    */String *stringify_variants<String,char_const*,Color>(undefined8 param_1_00, undefined8 param_2, String *param_1, undefined8 param_4, String *param_5, char *param_6) {
   long *plVar1;
   char cVar2;
   long lVar3;
   undefined *puVar4;
   long in_FS_OFFSET;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   undefined *local_88;
   undefined8 local_80;
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_5);
   Variant::Variant((Variant*)local_58, param_6);
   stringify_variants<Color>(param_1_00, param_2, (StrRange*)&local_90, (Variant*)local_58);
   local_88 = &_LC87;
   local_98 = 0;
   local_80 = 1;
   String::parse_latin1((StrRange*)&local_98);
   Variant::operator_cast_to_String((Variant*)&local_a0);
   String::operator +((String*)&local_88, (String*)&local_a0);
   String::operator +((String*)&local_a8, (String*)&local_88);
   puVar4 = local_88;
   if (local_88 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = (undefined*)0x0;
         Memory::free_static(puVar4 + -0x10, false);
      }
   }
   lVar3 = local_a0;
   if (local_a0 != 0) {
      LOCK();
      plVar1 = (long*)( local_a0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   lVar3 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   lVar3 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   local_88 = &_LC87;
   local_90 = 0;
   local_80 = 1;
   String::parse_latin1((StrRange*)&local_90);
   Variant::operator_cast_to_String((Variant*)&local_98);
   String::operator +((String*)&local_88, (String*)&local_98);
   String::operator +(param_1, (String*)&local_88);
   puVar4 = local_88;
   if (local_88 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = (undefined*)0x0;
         Memory::free_static(puVar4 + -0x10, false);
      }
   }
   lVar3 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   lVar3 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   lVar3 = local_a8;
   if (local_a8 != 0) {
      LOCK();
      plVar1 = (long*)( local_a8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a8 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         cVar2 = Variant::needs_deinit[local_78[0]];
         goto joined_r0x00111eb3;
      }
   }
   cVar2 = Variant::needs_deinit[local_78[0]];
   joined_r0x00111eb3:if (cVar2 != '\0') {
      Variant::_clear_internal();
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* String stringify_variants<unsigned int, char const*, String, char const*, Color>(Variant const&,
   unsigned int, char const*, String, char const*, Color) */String *stringify_variants<unsigned_int,char_const*,String,char_const*,Color>(undefined8 param_1_00, undefined8 param_2, String *param_1, undefined8 param_4, uint param_5, char *param_6, CowData *param_7, undefined8 param_8) {
   long *plVar1;
   char cVar2;
   long lVar3;
   undefined *puVar4;
   long in_FS_OFFSET;
   long local_b8;
   long local_b0;
   long local_a8;
   undefined8 local_a0;
   long local_98;
   long local_90;
   undefined *local_88;
   undefined8 local_80;
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_b8 = 0;
   if (*(long*)param_7 == 0) {
      Variant::Variant((Variant*)local_78, param_5);
      local_98 = 0;
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, param_7);
      lVar3 = local_b8;
      Variant::Variant((Variant*)local_78, param_5);
      local_98 = 0;
      if (lVar3 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_98, (CowData*)&local_b8);
      }
   }
   Variant::Variant((Variant*)local_58, param_6);
   stringify_variants<String,char_const*,Color>(param_1_00, param_2, (StrRange*)&local_90, (Variant*)local_58, (Variant*)&local_98, param_8);
   local_88 = &_LC87;
   local_a0 = 0;
   local_80 = 1;
   String::parse_latin1((StrRange*)&local_a0);
   Variant::operator_cast_to_String((Variant*)&local_a8);
   String::operator +((String*)&local_88, (String*)&local_a8);
   String::operator +((String*)&local_b0, (String*)&local_88);
   puVar4 = local_88;
   if (local_88 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = (undefined*)0x0;
         Memory::free_static(puVar4 + -0x10, false);
      }
   }
   lVar3 = local_a8;
   if (local_a8 != 0) {
      LOCK();
      plVar1 = (long*)( local_a8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a8 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   lVar3 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   lVar3 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   local_88 = &_LC87;
   local_90 = 0;
   local_80 = 1;
   String::parse_latin1((StrRange*)&local_90);
   Variant::operator_cast_to_String((Variant*)&local_98);
   String::operator +((String*)&local_88, (String*)&local_98);
   String::operator +(param_1, (String*)&local_88);
   puVar4 = local_88;
   if (local_88 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = (undefined*)0x0;
         Memory::free_static(puVar4 + -0x10, false);
      }
   }
   lVar3 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   lVar3 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   lVar3 = local_b0;
   if (local_b0 != 0) {
      LOCK();
      plVar1 = (long*)( local_b0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         cVar2 = Variant::needs_deinit[local_78[0]];
         goto joined_r0x001122cc;
      }
   }
   cVar2 = Variant::needs_deinit[local_78[0]];
   joined_r0x001122cc:if (cVar2 != '\0') {
      Variant::_clear_internal();
   }
   if (local_b8 != 0) {
      LOCK();
      plVar1 = (long*)( local_b8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_b8 + -0x10 ), false);
      }
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* void print_line<char const*, unsigned int, char const*, String, char const*, Color>(Variant
   const&, char const*, unsigned int, char const*, String, char const*, Color) */void print_line<char_const*,unsigned_int,char_const*,String,char_const*,Color>(undefined8 param_1, undefined8 param_2_00, undefined8 param_3_00, char *param_2, undefined4 param_3, undefined8 param_4, CowData *param_7, undefined8 param_8) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = 0;
   if (*(long*)param_7 == 0) {
      local_78 = 0;
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_98, param_7);
      local_78 = 0;
      if (local_98 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)&local_98);
      }
   }
   Variant::Variant((Variant*)local_58, param_2);
   stringify_variants<unsigned_int,char_const*,String,char_const*,Color>(param_1, param_2_00, &local_70, (Variant*)local_58, param_3, param_4, &local_78, param_8);
   local_68 = &_LC87;
   local_80 = 0;
   local_60 = 1;
   String::parse_latin1((StrRange*)&local_80);
   Variant::operator_cast_to_String((Variant*)&local_88);
   String::operator +((String*)&local_68, (String*)&local_88);
   String::operator +((String*)&local_90, (String*)&local_68);
   puVar3 = local_68;
   if (local_68 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (undefined*)0x0;
         Memory::free_static(puVar3 + -0x10, false);
      }
   }
   lVar2 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   lVar2 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
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
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_78 + -0x10 ), false);
      }
   }
   __print_line((String*)&local_90);
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
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static((void*)( local_98 + -0x10 ), false);
            return;
         }
         goto LAB_00112745;
      }
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_00112745:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* WARNING: Control flow encountered bad instruction data *//* RenderingDeviceGraph::FramebufferCache::~FramebufferCache() */void RenderingDeviceGraph::FramebufferCache::~FramebufferCache(FramebufferCache *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* LocalVector<int, unsigned int, false, false>::~LocalVector() */void LocalVector<int,unsigned_int,false,false>::~LocalVector(LocalVector<int,unsigned_int,false,false> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* LocalVector<long, unsigned int, false, false>::~LocalVector() */void LocalVector<long,unsigned_int,false,false>::~LocalVector(LocalVector<long,unsigned_int,false,false> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* LocalVector<RenderingDeviceGraph::RecordedCommandSort, unsigned int, false,
   false>::~LocalVector() */void LocalVector<RenderingDeviceGraph::RecordedCommandSort,unsigned_int,false,false>::~LocalVector(LocalVector<RenderingDeviceGraph::RecordedCommandSort,unsigned_int,false,false> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* LocalVector<RenderingDeviceGraph::ResourceUsage, unsigned int, false, false>::~LocalVector() */void LocalVector<RenderingDeviceGraph::ResourceUsage,unsigned_int,false,false>::~LocalVector(LocalVector<RenderingDeviceGraph::ResourceUsage,unsigned_int,false,false> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* LocalVector<RenderingDeviceGraph::ResourceTracker*, unsigned int, false, false>::~LocalVector()
    */void LocalVector<RenderingDeviceGraph::ResourceTracker*,unsigned_int,false,false>::~LocalVector(LocalVector<RenderingDeviceGraph::ResourceTracker*,unsigned_int,false,false> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* LocalVector<unsigned int, unsigned int, false, false>::~LocalVector() */void LocalVector<unsigned_int,unsigned_int,false,false>::~LocalVector(LocalVector<unsigned_int,unsigned_int,false,false> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
