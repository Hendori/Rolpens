/* HashMap<int, DisjointSet<int, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultAllocator>::Element*, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, DisjointSet<int, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultAllocator>::Element*> > >::_lookup_pos(int const&, unsigned
   int&) const [clone .isra.0] */undefined8 HashMap<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*>>>::_lookup_pos(HashMap<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*>>> *this, int *param_1, uint *param_2) {
   ulong uVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   uint uVar10;
   uint uVar11;
   ulong uVar12;
   long lVar13;
   uint uVar14;
   ulong uVar15;
   uint uVar16;
   if (( *(long*)( this + 8 ) == 0 ) || ( *(int*)( this + 0x2c ) == 0 )) {
      return 0;
   }

   uVar1 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   uVar10 = ( ( uint )((ulong)param_1 >> 0x10) & 0xffff ^ (uint)param_1 ) * -0x7a143595;
   uVar10 = ( uVar10 ^ uVar10 >> 0xd ) * -0x3d4d51cb;
   uVar14 = uVar10 ^ uVar10 >> 0x10;
   if (uVar10 == uVar10 >> 0x10) {
      uVar14 = 1;
      uVar12 = uVar1;
   }
 else {
      uVar12 = uVar14 * uVar1;
   }

   uVar15 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 ));
   auVar2._8_8_ = 0;
   auVar2._0_8_ = uVar15;
   auVar6._8_8_ = 0;
   auVar6._0_8_ = uVar12;
   lVar13 = SUB168(auVar2 * auVar6, 8);
   uVar10 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
   uVar11 = SUB164(auVar2 * auVar6, 8);
   if (uVar10 != 0) {
      uVar16 = 0;
      do {
         if (( uVar14 == uVar10 ) && ( *(uint*)( *(long*)( *(long*)( this + 8 ) + lVar13 * 8 ) + 0x10 ) == (uint)param_1 )) {
            *param_2 = uVar11;
            return 1;
         }

         uVar16 = uVar16 + 1;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = ( uVar11 + 1 ) * uVar1;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar15;
         lVar13 = SUB168(auVar3 * auVar7, 8);
         uVar10 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
         uVar11 = SUB164(auVar3 * auVar7, 8);
      }
 while ( ( uVar10 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = uVar10 * uVar1,auVar8._8_8_ = 0,auVar8._0_8_ = uVar15,auVar5._8_8_ = 0,auVar5._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 ) + uVar11 ) - SUB164(auVar4 * auVar8, 8) ) * uVar1,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,uVar16 <= SUB164(auVar5 * auVar9, 8) );
   }

   return 0;
}
/* CowData<int>::find(int const&, long) const [clone .isra.0] */long CowData<int>::find(CowData<int> *this, int *param_1, long param_2) {
   long lVar1;
   if (( ( ( this != (CowData<int>*)0x0 ) && ( -1 < param_2 ) ) && ( lVar1 = *(long*)( this + -8 ) ),lVar1 != 0 )) {
      do {
         if (*(int*)( this + param_2 * 4 ) == (int)param_1) {
            return param_2;
         }

         param_2 = param_2 + 1;
      }
 while ( lVar1 != param_2 );
   }

   return -1;
}
/* DisjointSet<int, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultAllocator>::get_parent(DisjointSet<int, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultAllocator>::Element*) [clone .isra.0] */Element *DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::get_parent(Element *param_1) {
   Element *pEVar1;
   Element *pEVar2;
   Element *pEVar3;
   Element *pEVar4;
   pEVar1 = *(Element**)( param_1 + 8 );
   pEVar4 = pEVar1;
   if (param_1 != pEVar1) {
      pEVar2 = *(Element**)( pEVar1 + 8 );
      if (pEVar1 != pEVar2) {
         pEVar3 = *(Element**)( pEVar2 + 8 );
         pEVar4 = pEVar3;
         if (pEVar2 != pEVar3) {
            if (pEVar3 != *(Element**)( pEVar3 + 8 )) {
               pEVar4 = (Element*)get_parent(*(Element**)( pEVar3 + 8 ));
               *(Element**)( pEVar3 + 8 ) = pEVar4;
            }

            *(Element**)( pEVar2 + 8 ) = pEVar4;
         }

         *(Element**)( pEVar1 + 8 ) = pEVar4;
      }

      *(Element**)( param_1 + 8 ) = pEVar4;
   }

   return pEVar4;
}
/* SortArray<int, _DefaultComparator<int>, true>::introsort(long, long, int*, long) const [clone
   .isra.0] */void SortArray<int,_DefaultComparator<int>,true>::introsort(long param_1, long param_2, int *param_3, long param_4) {
   int iVar1;
   long lVar2;
   int *piVar3;
   int *piVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   int iVar9;
   long lVar10;
   int *piVar11;
   int iVar12;
   long lVar13;
   long local_58;
   lVar10 = param_2 - param_1;
   if (lVar10 < 0x11) {
      return;
   }

   if (param_4 == 0) {
      LAB_001003ac:lVar6 = lVar10 + -2 >> 1;
      lVar13 = lVar6 * 2 + 2;
      piVar4 = param_3 + param_1 + lVar6;
      iVar12 = *piVar4;
      lVar5 = lVar6;
      lVar8 = lVar13;
      if (lVar10 <= lVar13) goto LAB_0010049c;
      LAB_001003eb:do {
         iVar9 = param_3[param_1 + lVar13 + -1];
         iVar1 = param_3[param_1 + lVar13];
         lVar2 = lVar13 + -1;
         lVar7 = lVar13;
         piVar3 = param_3 + param_1 + lVar13 + -1;
         if (iVar9 <= iVar1) {
            lVar7 = lVar13 + 1;
            lVar2 = lVar13;
            piVar3 = param_3 + param_1 + lVar13;
            iVar9 = iVar1;
         }

         lVar13 = lVar7 * 2;
         param_3[lVar5 + param_1] = iVar9;
         lVar5 = lVar2;
      }
 while ( lVar10 != lVar13 && SBORROW8(lVar10, lVar13) == lVar10 + lVar7 * -2 < 0 );
      piVar11 = piVar3;
      if (lVar10 == lVar13) goto LAB_001004a2;
      do {
         lVar13 = lVar8;
         lVar5 = lVar2 + -1;
         if (lVar2 <= lVar6) goto LAB_001005c8;
         do {
            lVar8 = lVar5 >> 1;
            iVar9 = param_3[param_1 + lVar8];
            if (iVar12 <= iVar9) {
               param_3[lVar2 + param_1] = iVar12;
               goto joined_r0x0010047c;
            }

            param_3[lVar2 + param_1] = iVar9;
            lVar5 = ( lVar8 + -1 ) - ( lVar8 + -1 >> 0x3f );
            lVar2 = lVar8;
         }
 while ( lVar6 < lVar8 );
         param_3[param_1 + lVar8] = iVar12;
         joined_r0x0010047c:if (lVar6 == 0) {
            piVar4 = param_3 + param_1;
            lVar10 = ( param_2 + -1 ) - param_1;
            goto LAB_001004d8;
         }

         while (true) {
            piVar4 = piVar4 + -1;
            lVar13 = lVar13 + -2;
            lVar6 = lVar6 + -1;
            iVar12 = *piVar4;
            lVar5 = lVar6;
            lVar8 = lVar13;
            if (lVar13 < lVar10) goto LAB_001003eb;
            LAB_0010049c:piVar11 = piVar4;
            piVar3 = piVar4;
            lVar8 = lVar13;
            if (lVar13 == lVar10) break;
            LAB_001005c8:*piVar3 = iVar12;
         }
;
         LAB_001004a2:lVar2 = lVar13 + -1;
         piVar3 = param_3 + param_1 + lVar2;
         *piVar11 = *piVar3;
      }
 while ( true );
   }

   lVar13 = param_2;
   local_58 = param_4;
   LAB_00100217:local_58 = local_58 + -1;
   iVar12 = param_3[lVar13 + -1];
   iVar9 = param_3[param_1];
   iVar1 = param_3[( lVar10 >> 1 ) + param_1];
   if (iVar9 < iVar1) {
      if (iVar9 < iVar12) {
         iVar9 = iVar12;
      }

      if (iVar1 < iVar12) {
         iVar9 = iVar1;
      }

   }
 else {
      if (iVar1 < iVar12) {
         iVar1 = iVar12;
      }

      if (iVar12 <= iVar9) {
         iVar9 = iVar1;
      }

   }

   lVar10 = lVar13;
   param_2 = param_1;
   do {
      if (param_3[param_2] < iVar9) {
         if (lVar13 + -1 == param_2) {
            _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
            goto LAB_00100280;
         }

      }
 else {
         LAB_00100280:lVar5 = lVar10 + -1;
         piVar4 = param_3 + lVar5;
         if (iVar9 < *piVar4) {
            piVar3 = param_3 + lVar10 + -2;
            while (param_1 != lVar5) {
               lVar5 = lVar5 + -1;
               piVar4 = piVar3;
               if (*piVar3 <= iVar9) goto LAB_001002e2;
               piVar3 = piVar3 + -1;
            }
;
            _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
         }

         LAB_001002e2:if (lVar5 <= param_2) break;
         iVar12 = param_3[param_2];
         param_3[param_2] = *piVar4;
         *piVar4 = iVar12;
         lVar10 = lVar5;
      }

      param_2 = param_2 + 1;
   }
 while ( true );
   introsort(param_2, lVar13, param_3, local_58);
   lVar10 = param_2 - param_1;
   if (lVar10 < 0x11) {
      return;
   }

   lVar13 = param_2;
   if (local_58 == 0) goto LAB_001003ac;
   goto LAB_00100217;
   LAB_001004d8:iVar12 = piVar4[lVar10];
   piVar4[lVar10] = *piVar4;
   if (lVar10 < 3) {
      if (lVar10 != 2) {
         *piVar4 = iVar12;
         return;
      }

      lVar13 = param_1 + 1;
      lVar5 = 0;
      lVar10 = 1;
      *piVar4 = param_3[lVar13];
      LAB_00100585:while (true) {
         piVar3 = param_3 + lVar13;
         iVar9 = param_3[param_1 + lVar5];
         if (iVar12 <= iVar9) break;
         *piVar3 = iVar9;
         if (lVar5 == 0) {
            param_3[param_1 + lVar5] = iVar12;
            goto LAB_001004d8;
         }

         lVar13 = param_1 + lVar5;
         lVar5 = ( lVar5 + -1 ) / 2;
      }
;
   }
 else {
      lVar13 = 2;
      lVar5 = 0;
      do {
         iVar9 = param_3[param_1 + lVar13 + -1];
         iVar1 = param_3[param_1 + lVar13];
         lVar8 = lVar13 + -1;
         piVar3 = param_3 + param_1 + lVar13 + -1;
         lVar6 = lVar13;
         if (iVar9 <= iVar1) {
            lVar6 = lVar13 + 1;
            lVar8 = lVar13;
            piVar3 = param_3 + param_1 + lVar13;
            iVar9 = iVar1;
         }

         lVar13 = lVar6 * 2;
         param_3[lVar5 + param_1] = iVar9;
         lVar5 = lVar8;
      }
 while ( lVar10 != lVar13 && SBORROW8(lVar10, lVar13) == lVar10 + lVar6 * -2 < 0 );
      if (lVar10 == lVar13) {
         lVar13 = param_1 + lVar10 + -1;
         lVar5 = lVar10 + -2 >> 1;
         *piVar3 = param_3[lVar13];
         lVar10 = lVar10 + -1;
         goto LAB_00100585;
      }

      lVar13 = param_1 + lVar8;
      lVar10 = lVar10 + -1;
      lVar5 = ( lVar8 + -1 ) / 2;
      if (0 < lVar8) goto LAB_00100585;
   }

   *piVar3 = iVar12;
   goto LAB_001004d8;
}
/* SortArray<int, _DefaultComparator<int>, true>::sort(int*, long) const [clone .part.0] [clone
   .isra.0] */void SortArray<int,_DefaultComparator<int>,true>::sort(int *param_1, long param_2) {
   int iVar1;
   long lVar2;
   int *piVar3;
   int *piVar4;
   int iVar5;
   long lVar6;
   int *piVar7;
   long lVar8;
   if (param_2 == 1) {
      introsort(0, 1, param_1, 0);
      return;
   }

   lVar2 = 0;
   lVar8 = param_2;
   do {
      lVar8 = lVar8 >> 1;
      lVar2 = lVar2 + 1;
   }
 while ( lVar8 != 1 );
   introsort(0, param_2, param_1, lVar2 * 2);
   if (param_2 < 0x11) {
      if (param_2 != 0) {
         piVar3 = param_1 + 1;
         lVar8 = 1;
         piVar7 = piVar3;
         do {
            iVar1 = *piVar7;
            if (iVar1 < *param_1) {
               memmove(piVar3, param_1, lVar8 * 4);
               *param_1 = iVar1;
            }
 else {
               iVar5 = piVar7[-1];
               lVar2 = lVar8 + -1;
               piVar4 = piVar7;
               if (iVar1 < iVar5) {
                  do {
                     lVar6 = lVar2;
                     if (lVar6 == 0) {
                        _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                        piVar4 = piVar3;
                        goto LAB_00100810;
                     }

                     param_1[lVar6 + 1] = iVar5;
                     iVar5 = param_1[lVar6 + -1];
                     lVar2 = lVar6 + -1;
                  }
 while ( iVar1 < iVar5 );
                  piVar4 = param_1 + lVar6;
               }

               LAB_00100810:*piVar4 = iVar1;
            }

            lVar8 = lVar8 + 1;
            piVar7 = piVar7 + 1;
         }
 while ( param_2 != lVar8 );
      }

   }
 else {
      lVar8 = 1;
      do {
         while (true) {
            lVar2 = lVar8;
            iVar1 = param_1[lVar2];
            if (iVar1 < *param_1) break;
            iVar5 = param_1[lVar2 + -1];
            piVar3 = param_1 + lVar2;
            lVar8 = lVar2 + -1;
            if (iVar1 < iVar5) {
               do {
                  lVar6 = lVar8;
                  if (lVar6 == 0) {
                     _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                     piVar3 = param_1 + 1;
                     goto LAB_001006e0;
                  }

                  param_1[lVar6 + 1] = iVar5;
                  iVar5 = param_1[lVar6 + -1];
                  lVar8 = lVar6 + -1;
               }
 while ( iVar1 < iVar5 );
               piVar3 = param_1 + lVar6;
            }

            LAB_001006e0:*piVar3 = iVar1;
            lVar8 = lVar2 + 1;
            if (lVar2 + 1 == 0x10) goto LAB_001006ed;
         }
;
         memmove(param_1 + 1, param_1, lVar2 * 4);
         *param_1 = iVar1;
         lVar8 = lVar2 + 1;
      }
 while ( lVar2 + 1 != 0x10 );
      LAB_001006ed:lVar2 = lVar2 + 1;
      piVar3 = param_1 + 0x10;
      do {
         iVar1 = *piVar3;
         iVar5 = piVar3[-1];
         lVar8 = lVar2 + -1;
         piVar7 = piVar3;
         if (iVar1 < iVar5) {
            do {
               param_1[lVar8 + 1] = iVar5;
               lVar6 = lVar8 + -1;
               iVar5 = param_1[lVar6];
               if (iVar5 <= iVar1) {
                  piVar7 = param_1 + lVar8;
                  goto LAB_00100754;
               }

               lVar8 = lVar6;
            }
 while ( lVar6 != 0 );
            _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
            piVar7 = param_1 + 1;
         }

         LAB_00100754:lVar2 = lVar2 + 1;
         *piVar7 = iVar1;
         piVar3 = piVar3 + 1;
      }
 while ( param_2 != lVar2 );
   }

   return;
}
/* Ref<Skin>::TEMPNAMEPLACEHOLDERVALUE(Ref<Skin> const&) [clone .isra.0] */void Ref<Skin>::operator =(Ref<Skin> *this, Ref *param_1) {
   Object *pOVar1;
   char cVar2;
   pOVar1 = *(Object**)this;
   if (pOVar1 != (Object*)param_1) {
      *(Ref**)this = param_1;
      if (param_1 != (Ref*)0x0) {
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *(undefined8*)this = 0;
         }

      }

      if (pOVar1 != (Object*)0x0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
               return;
            }

         }

      }

   }

   return;
}
/* Ref<GLTFSkeleton>::TEMPNAMEPLACEHOLDERVALUE(Ref<GLTFSkeleton> const&) [clone .isra.0] */void Ref<GLTFSkeleton>::operator =(Ref<GLTFSkeleton> *this, Ref *param_1) {
   Object *pOVar1;
   char cVar2;
   pOVar1 = *(Object**)this;
   if (pOVar1 != (Object*)param_1) {
      *(Ref**)this = param_1;
      if (param_1 != (Ref*)0x0) {
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *(undefined8*)this = 0;
         }

      }

      if (pOVar1 != (Object*)0x0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
               return;
            }

         }

      }

   }

   return;
}
/* Ref<GLTFSkin>::TEMPNAMEPLACEHOLDERVALUE(Ref<GLTFSkin> const&) [clone .isra.0] */void Ref<GLTFSkin>::operator =(Ref<GLTFSkin> *this, Ref *param_1) {
   Object *pOVar1;
   char cVar2;
   pOVar1 = *(Object**)this;
   if (pOVar1 != (Object*)param_1) {
      *(Ref**)this = param_1;
      if (param_1 != (Ref*)0x0) {
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *(undefined8*)this = 0;
         }

      }

      if (pOVar1 != (Object*)0x0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
               return;
            }

         }

      }

   }

   return;
}
/* SkinTool::_find_highest_node(Vector<Ref<GLTFNode> >&, Vector<int> const&) */int SkinTool::_find_highest_node(Vector *param_1, Vector *param_2) {
   int iVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   long lVar5;
   Object *pOVar6;
   int iVar7;
   long lVar8;
   int local_4c;
   Object *local_40;
   lVar4 = *(long*)( param_2 + 8 );
   if (lVar4 == 0) {
      local_4c = -1;
   }
 else {
      lVar8 = 0;
      iVar7 = -1;
      local_4c = -1;
      do {
         if (*(long*)( lVar4 + -8 ) <= lVar8) {
            return local_4c;
         }

         iVar1 = *(int*)( lVar4 + lVar8 * 4 );
         lVar5 = (long)iVar1;
         lVar4 = *(long*)( param_1 + 8 );
         if (lVar5 < 0) {
            if (lVar4 != 0) {
               LAB_00100af5:lVar4 = *(long*)( lVar4 + -8 );
               goto LAB_00100af9;
            }

            LAB_00100b40:lVar4 = 0;
            LAB_00100af9:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar5, lVar4, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         if (lVar4 == 0) goto LAB_00100b40;
         if (*(long*)( lVar4 + -8 ) <= lVar5) goto LAB_00100af5;
         local_40 = (Object*)0x0;
         pOVar6 = *(Object**)( lVar4 + lVar5 * 8 );
         if (( pOVar6 != (Object*)0x0 ) && ( cVar3 = RefCounted::reference() ),local_40 = pOVar6,cVar3 == '\0') {
            pOVar6 = (Object*)0x0;
            local_40 = pOVar6;
         }

         if (( iVar7 == -1 ) || ( *(int*)( pOVar6 + 0x24c ) < iVar7 )) {
            iVar7 = *(int*)( local_40 + 0x24c );
            cVar3 = RefCounted::unreference();
            local_4c = iVar1;
         }
 else {
            cVar3 = RefCounted::unreference();
         }

         if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler(pOVar6) ),cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
            Memory::free_static(pOVar6, false);
         }

         lVar4 = *(long*)( param_2 + 8 );
         lVar8 = lVar8 + 1;
      }
 while ( lVar4 != 0 );
   }

   return local_4c;
}
/* SkinTool::_skins_are_same(Ref<Skin>, Ref<Skin>) */undefined8 SkinTool::_skins_are_same(long *param_1, long *param_2) {
   undefined8 *puVar1;
   int iVar2;
   int iVar3;
   undefined8 uVar4;
   char cVar5;
   long lVar6;
   undefined8 uVar7;
   long lVar8;
   long lVar9;
   int iVar10;
   long lVar11;
   int *piVar12;
   long in_FS_OFFSET;
   long local_c8;
   long local_b8;
   long local_b0;
   Transform3D local_a8[16];
   undefined1 local_98[16];
   undefined4 local_88;
   undefined4 uStack_84;
   undefined4 uStack_80;
   undefined4 uStack_7c;
   Transform3D local_78[16];
   undefined1 local_68[16];
   undefined4 local_58;
   undefined4 uStack_54;
   undefined4 uStack_50;
   undefined4 uStack_4c;
   long local_40;
   lVar8 = *param_2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar6 = *param_1;
   iVar2 = *(int*)( lVar8 + 600 );
   if (*(int*)( lVar6 + 600 ) == iVar2) {
      lVar11 = 0;
      if (0 < iVar2) {
         do {
            iVar10 = (int)lVar11;
            lVar9 = lVar11 * 0x40;
            iVar3 = *(int*)( *(long*)( lVar6 + 0x250 ) + lVar9 );
            if (iVar10 < iVar2) {
               piVar12 = (int*)( *(long*)( lVar8 + 0x250 ) + lVar9 );
               if (*piVar12 != iVar3) goto LAB_00100b9c;
               LAB_00100bf8:StringName::StringName((StringName*)&local_b0, (StringName*)( piVar12 + 2 ));
            }
 else {
               _err_print_index_error("get_bind_bone", "./scene/resources/3d/skin.h", 0x46, lVar11, (long)iVar2, "p_index", "bind_count", "", false, false);
               if (iVar3 != -1) goto LAB_00100b9c;
               iVar2 = *(int*)( *param_2 + 600 );
               if (iVar10 < iVar2) {
                  piVar12 = (int*)( *(long*)( *param_2 + 0x250 ) + lVar9 );
                  goto LAB_00100bf8;
               }

               _err_print_index_error("get_bind_name", "./scene/resources/3d/skin.h", 0x4b, lVar11, (long)iVar2, "p_index", "bind_count", "", false, false);
               local_b0 = 0;
            }

            iVar2 = *(int*)( *param_1 + 600 );
            if (iVar10 < iVar2) {
               StringName::StringName((StringName*)&local_b8, (StringName*)( *(long*)( *param_1 + 0x250 ) + 8 + lVar9 ));
               lVar6 = local_b8;
               local_c8 = local_b0;
               if (local_b8 == 0) goto LAB_00100c64;
               if (StringName::configured != '\0') {
                  StringName::unref();
                  goto LAB_00100c64;
               }

            }
 else {
               lVar6 = 0;
               _err_print_index_error("get_bind_name", "./scene/resources/3d/skin.h", 0x4b, lVar11, (long)iVar2, "p_index", "bind_count", "", false, false);
               local_c8 = local_b0;
               LAB_00100c64:if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                  StringName::unref();
               }

            }

            if (local_c8 != lVar6) goto LAB_00100b9c;
            iVar2 = *(int*)( *param_1 + 600 );
            lVar6 = *(long*)( *param_1 + 0x250 );
            if (iVar10 < iVar2) {
               local_a8 = *(Transform3D(*) [16])( lVar6 + 0x10 + lVar9 );
               local_98 = *(undefined1(*) [16])( lVar6 + 0x20 + lVar9 );
               puVar1 = (undefined8*)( lVar6 + 0x30 + lVar9 );
               uVar7 = *puVar1;
               uVar4 = puVar1[1];
               local_88 = (undefined4)uVar7;
               uStack_84 = ( undefined4 )((ulong)uVar7 >> 0x20);
               uStack_80 = (undefined4)uVar4;
               uStack_7c = ( undefined4 )((ulong)uVar4 >> 0x20);
            }
 else {
               _err_print_index_error("get_bind_pose", "./scene/resources/3d/skin.h", 0x50, lVar11, (long)iVar2, "p_index", "bind_count", "", false, false);
               local_88 = 0x3f800000;
               uStack_84 = 0;
               uStack_80 = 0;
               uStack_7c = 0;
               local_a8 = (Transform3D[16])ZEXT416(_LC17);
               local_98 = ZEXT416(_LC17);
            }

            iVar2 = *(int*)( *param_2 + 600 );
            lVar6 = *(long*)( *param_2 + 0x250 );
            if (iVar10 < iVar2) {
               local_78 = *(Transform3D(*) [16])( lVar6 + 0x10 + lVar9 );
               local_68 = *(undefined1(*) [16])( lVar6 + 0x20 + lVar9 );
               puVar1 = (undefined8*)( lVar6 + 0x30 + lVar9 );
               uVar7 = *puVar1;
               uVar4 = puVar1[1];
               local_58 = (undefined4)uVar7;
               uStack_54 = ( undefined4 )((ulong)uVar7 >> 0x20);
               uStack_50 = (undefined4)uVar4;
               uStack_4c = ( undefined4 )((ulong)uVar4 >> 0x20);
            }
 else {
               _err_print_index_error("get_bind_pose", "./scene/resources/3d/skin.h", 0x50, lVar11, (long)iVar2, "p_index", "bind_count", "", false, false);
               local_58 = 0x3f800000;
               uStack_54 = 0;
               uStack_50 = 0;
               uStack_4c = 0;
               local_78 = (Transform3D[16])ZEXT416(_LC17);
               local_68 = ZEXT416(_LC17);
            }

            cVar5 = Transform3D::operator !=(local_a8, local_78);
            if (cVar5 != '\0') goto LAB_00100b9c;
            lVar6 = *param_1;
            lVar11 = lVar11 + 1;
            if (*(int*)( lVar6 + 600 ) <= (int)lVar11) break;
            lVar8 = *param_2;
            iVar2 = *(int*)( lVar8 + 600 );
         }
 while ( true );
      }

      uVar7 = 1;
   }
 else {
      LAB_00100b9c:uVar7 = 0;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar7;
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   _unref(this);
   if (*(long*)param_1 != 0) {
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
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
/* SkinTool::_gen_unique_name(HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String>
   >&, String const&) */HashSet *SkinTool::_gen_unique_name(HashSet *param_1, String *param_2) {
   long *plVar1;
   uint uVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   ulong uVar11;
   char cVar12;
   uint uVar13;
   long lVar14;
   uint uVar15;
   int iVar16;
   long lVar17;
   long lVar18;
   uint uVar19;
   long in_FS_OFFSET;
   long local_88;
   long local_60;
   long local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   String::validate_node_name();
   *(undefined8*)param_1 = 0;
   lVar14 = 0;
   local_88 = 1;
   LAB_00101010:if (local_60 != lVar14) {
      CowData<char32_t>::_ref((CowData<char32_t>*)param_1, (CowData*)&local_60);
   }

   if (local_88 != 1) {
      itos((long)local_58);
      String::operator +=((String*)param_1, (String*)local_58);
      lVar14 = local_58[0];
      if (local_58[0] != 0) {
         LOCK();
         plVar1 = (long*)( local_58[0] + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_58[0] = 0;
            Memory::free_static((void*)( lVar14 + -0x10 ), false);
         }

      }

   }

   if (( *(long*)param_2 != 0 ) && ( *(int*)( param_2 + 0x24 ) != 0 )) {
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x20 ) * 4 );
      lVar14 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x20 ) * 8 );
      uVar13 = String::hash();
      uVar11 = CONCAT44(0, uVar2);
      lVar18 = *(long*)( param_2 + 0x18 );
      uVar15 = 1;
      if (uVar13 != 0) {
         uVar15 = uVar13;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar15 * lVar14;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar11;
      lVar17 = SUB168(auVar3 * auVar7, 8);
      uVar13 = *(uint*)( lVar18 + lVar17 * 4 );
      if (uVar13 != 0) {
         uVar19 = 0;
         iVar16 = SUB164(auVar3 * auVar7, 8);
         do {
            if (uVar15 == uVar13) {
               cVar12 = String::operator ==((String*)( *(long*)param_2 + ( ulong ) * (uint*)( *(long*)( param_2 + 8 ) + lVar17 * 4 ) * 8 ), (String*)param_1);
               if (cVar12 != '\0') goto LAB_00101187;
               lVar18 = *(long*)( param_2 + 0x18 );
            }

            uVar19 = uVar19 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar16 + 1) * lVar14;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar11;
            lVar17 = SUB168(auVar4 * auVar8, 8);
            uVar13 = *(uint*)( lVar18 + lVar17 * 4 );
            iVar16 = SUB164(auVar4 * auVar8, 8);
            if (( uVar13 == 0 ) || ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar13 * lVar14,auVar9._8_8_ = 0,auVar9._0_8_ = uVar11,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar2 + iVar16 ) - SUB164(auVar5 * auVar9, 8)) * lVar14,auVar10._8_8_ = 0,auVar10._0_8_ = uVar11,SUB164(auVar6 * auVar10, 8) < uVar19) break;
         }
 while ( true );
      }

   }

   HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String*)local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
   LAB_00101187:local_88 = local_88 + 1;
   lVar14 = *(long*)param_1;
   goto LAB_00101010;
}
/* SkinTool::_sanitize_bone_name(String const&) */SkinTool * __thiscall SkinTool::_sanitize_bone_name(SkinTool *this,String *param_1){
   long lVar1;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   if (*(long*)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)this, (CowData*)param_1);
   }

   String::replace((char*)&local_28, (char*)this);
   if (*(long*)this != local_28) {
      CowData<char32_t>::_unref((CowData<char32_t>*)this);
      lVar1 = local_28;
      local_28 = 0;
      *(long*)this = lVar1;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_28);
   String::replace((char*)&local_28, (char*)this);
   if (*(long*)this != local_28) {
      CowData<char32_t>::_unref((CowData<char32_t>*)this);
      lVar1 = local_28;
      local_28 = 0;
      *(long*)this = lVar1;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_28);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SkinTool::_gen_unique_bone_name(HashSet<String, HashMapHasherDefault,
   HashMapComparatorDefault<String> >&, String const&) */SkinTool * __thiscall
SkinTool::_gen_unique_bone_name(SkinTool *this,HashSet *param_1,String *param_2){
   long *plVar1;
   uint uVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   ulong uVar11;
   undefined *puVar12;
   char cVar13;
   uint uVar14;
   uint uVar15;
   int iVar16;
   long lVar17;
   long lVar18;
   long lVar19;
   uint uVar20;
   long in_FS_OFFSET;
   long local_90;
   String *local_78;
   long local_68;
   long local_60;
   undefined *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _sanitize_bone_name((SkinTool*)&local_68, param_2);
   if (( local_68 == 0 ) || ( *(uint*)( local_68 + -8 ) < 2 )) {
      local_50 = 4;
      local_58 = &_LC34;
      String::parse_latin1((StrRange*)&local_68);
   }

   local_78 = (String*)&local_58;
   *(undefined8*)this = 0;
   lVar17 = 0;
   local_90 = 1;
   LAB_00101378:if (lVar17 != local_68) {
      CowData<char32_t>::_ref((CowData<char32_t>*)this, (CowData*)&local_68);
   }

   if (local_90 != 1) {
      itos((long)&local_60);
      operator+((char *)
      local_78,(String*)&_LC31;
      String::operator +=((String*)this, local_78);
      puVar12 = local_58;
      if (local_58 != (undefined*)0x0) {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_58 = (undefined*)0x0;
            Memory::free_static(puVar12 + -0x10, false);
         }

      }

      lVar17 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar17 + -0x10 ), false);
         }

      }

   }

   if (( *(long*)param_1 != 0 ) && ( *(int*)( param_1 + 0x24 ) != 0 )) {
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x20 ) * 4 );
      lVar17 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 0x20 ) * 8 );
      uVar14 = String::hash();
      uVar11 = CONCAT44(0, uVar2);
      lVar19 = *(long*)( param_1 + 0x18 );
      uVar15 = 1;
      if (uVar14 != 0) {
         uVar15 = uVar14;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar15 * lVar17;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar11;
      lVar18 = SUB168(auVar3 * auVar7, 8);
      uVar14 = *(uint*)( lVar19 + lVar18 * 4 );
      if (uVar14 != 0) {
         uVar20 = 0;
         iVar16 = SUB164(auVar3 * auVar7, 8);
         do {
            if (uVar14 == uVar15) {
               cVar13 = String::operator ==((String*)( *(long*)param_1 + ( ulong ) * (uint*)( *(long*)( param_1 + 8 ) + lVar18 * 4 ) * 8 ), (String*)this);
               if (cVar13 != '\0') goto LAB_00101527;
               lVar19 = *(long*)( param_1 + 0x18 );
            }

            uVar20 = uVar20 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar16 + 1) * lVar17;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar11;
            lVar18 = SUB168(auVar4 * auVar8, 8);
            uVar14 = *(uint*)( lVar19 + lVar18 * 4 );
            iVar16 = SUB164(auVar4 * auVar8, 8);
            if (( uVar14 == 0 ) || ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar17,auVar9._8_8_ = 0,auVar9._0_8_ = uVar11,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar2 + iVar16 ) - SUB164(auVar5 * auVar9, 8)) * lVar17,auVar10._8_8_ = 0,auVar10._0_8_ = uVar11,SUB164(auVar6 * auVar10, 8) < uVar20) break;
         }
 while ( true );
      }

   }

   HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert(local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
   LAB_00101527:local_90 = local_90 + 1;
   lVar17 = *(long*)this;
   goto LAB_00101378;
}
/* CowData<int>::_ref(CowData<int> const&) [clone .part.0] */void CowData<int>::_ref(CowData<int> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   _unref(this);
   if (*(long*)param_1 != 0) {
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
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
/* CowData<int>::_copy_on_write() [clone .isra.0] */void CowData<int>::_copy_on_write(CowData<int> *this) {
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   ulong uVar4;
   size_t __n;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar4 = 0x10;
   __n = lVar1 * 4;
   if (__n != 0) {
      uVar4 = __n - 1 | __n - 1 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = ( uVar4 | uVar4 >> 0x20 ) + 0x11;
   }

   puVar3 = (undefined8*)Memory::alloc_static(uVar4, false);
   if (puVar3 != (undefined8*)0x0) {
      *puVar3 = 1;
      puVar3[1] = lVar1;
      memcpy(puVar3 + 2, *(void**)this, __n);
      _unref(this);
      *(undefined8**)this = puVar3 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* Vector<int>::push_back(int) [clone .isra.0] */void Vector<int>::push_back(Vector<int> *this, int param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<int>::resize<false>((CowData<int>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<int>::_copy_on_write((CowData<int>*)( this + 8 ));
            *(int*)( *(long*)( this + 8 ) + lVar3 * 4 ) = param_1;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* SkinTool::_capture_nodes_in_skin(Vector<Ref<GLTFNode> > const&, Ref<GLTFSkin>, int) */ulong SkinTool::_capture_nodes_in_skin(long param_1, long *param_2, uint param_3) {
   undefined4 uVar1;
   Object *pOVar2;
   code *pcVar3;
   char cVar4;
   byte bVar5;
   long lVar6;
   long lVar7;
   ulong uVar8;
   Object *pOVar9;
   uint uVar10;
   byte bVar11;
   long lVar12;
   long in_FS_OFFSET;
   Object *local_48;
   long local_40;
   lVar7 = (long)(int)param_3;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar12 = *(long*)( param_1 + 8 );
   if (lVar7 < 0) {
      if (lVar12 != 0) {
         lVar6 = *(long*)( lVar12 + -8 );
         goto LAB_00101a51;
      }

   }
 else if (lVar12 != 0) {
      lVar6 = *(long*)( lVar12 + -8 );
      if (lVar6 <= lVar7) goto LAB_00101a51;
      pOVar9 = *(Object**)( lVar12 + lVar7 * 8 );
      if (pOVar9 == (Object*)0x0) {
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      cVar4 = RefCounted::reference();
      lVar12 = *param_2;
      if (cVar4 == '\0') {
         pOVar9 = (Object*)0x0;
      }

      lVar7 = *(long*)( pOVar9 + 0x2a0 );
      if (lVar7 != 0) {
         lVar12 = 0;
         bVar11 = 0;
         do {
            pOVar2 = (Object*)*param_2;
            if (*(long*)( lVar7 + -8 ) <= lVar12) break;
            uVar1 = *(undefined4*)( lVar7 + lVar12 * 4 );
            if (pOVar2 == (Object*)0x0) {
               LAB_001018b8:local_48 = (Object*)0x0;
               bVar5 = _capture_nodes_in_skin(param_1, &local_48, uVar1);
               bVar11 = bVar11 | bVar5;
            }
 else {
               local_48 = pOVar2;
               cVar4 = RefCounted::reference();
               if (cVar4 == '\0') goto LAB_001018b8;
               bVar5 = _capture_nodes_in_skin(param_1, &local_48, uVar1);
               bVar11 = bVar11 | bVar5;
               cVar4 = RefCounted::unreference();
               if (cVar4 != '\0') {
                  cVar4 = predelete_handler(pOVar2);
                  if (cVar4 != '\0') {
                     ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                     Memory::free_static(pOVar2, false);
                  }

               }

            }

            lVar7 = *(long*)( pOVar9 + 0x2a0 );
            lVar12 = lVar12 + 1;
         }
 while ( lVar7 != 0 );
         lVar12 = *param_2;
         if (bVar11 != 0) {
            if (pOVar9[0x290] != (Object)0x0) {
               uVar10 = param_3;
               lVar7 = CowData<int>::find(*(CowData<int>**)( lVar12 + 0x270 ), (int*)(ulong)param_3, 0);
               if (lVar7 == -1) {
                  Vector<int>::push_back((Vector<int>*)( lVar12 + 0x268 ), uVar10);
                  lVar12 = *param_2;
                  goto LAB_00101929;
               }

            }

            uVar10 = param_3;
            lVar7 = CowData<int>::find(*(CowData<int>**)( lVar12 + 0x280 ), (int*)(ulong)param_3, 0);
            if (lVar7 == -1) {
               Vector<int>::push_back((Vector<int>*)( lVar12 + 0x278 ), uVar10);
               lVar12 = *param_2;
            }

         }

      }

      LAB_00101929:lVar12 = *(long*)( lVar12 + 0x270 );
      if (( ( lVar12 != 0 ) && ( lVar7 = *(long*)( lVar12 + -8 ) ),lVar7 != 0 )) {
         lVar6 = 0;
         do {
            if (*(uint*)( lVar12 + lVar6 * 4 ) == param_3) {
               uVar8 = CONCAT71(( int7 )(int3)(param_3 >> 8), 0 < lVar6);
               cVar4 = RefCounted::unreference();
               if (cVar4 == '\0') goto LAB_00101978;
               goto LAB_00101a02;
            }

            lVar6 = lVar6 + 1;
         }
 while ( lVar7 != lVar6 );
      }

      uVar8 = 0;
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         LAB_00101a02:cVar4 = predelete_handler(pOVar9);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar9 + 0x140 ) )(pOVar9);
            Memory::free_static(pOVar9, false);
         }

      }

      LAB_00101978:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return uVar8 & 0xffffffff;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   lVar6 = 0;
   LAB_00101a51:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar6, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar3 = (code*)invalidInstructionException();
   ( *pcVar3 )();
}
/* SkinTool::_capture_nodes_for_multirooted_skin(Vector<Ref<GLTFNode> >&, Ref<GLTFSkin>) */void SkinTool::_capture_nodes_for_multirooted_skin(long param_1, long *param_2) {
   uint uVar1;
   ulong uVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   code *pcVar11;
   bool bVar12;
   uint uVar13;
   long lVar14;
   long lVar15;
   long lVar16;
   long lVar17;
   uint uVar18;
   ulong uVar19;
   long lVar20;
   uint uVar21;
   long lVar22;
   int *piVar23;
   uint uVar24;
   ulong uVar25;
   int iVar26;
   long in_FS_OFFSET;
   long local_c0;
   uint local_94;
   uint *local_90;
   Vector local_88[8];
   int *local_80;
   DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator> local_78[8];
   undefined1 local_70[16];
   undefined1 local_60[16];
   undefined8 local_50;
   long local_40;
   lVar22 = *param_2;
   lVar20 = *(long*)( lVar22 + 0x270 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = (undefined1[16])0x0;
   local_50 = 2;
   local_c0 = 0;
   local_60 = (undefined1[16])0x0;
   joined_r0x00101b1c:if (lVar20 != 0) {
      for (; local_c0 < *(long*)( lVar20 + -8 ); local_c0 = local_c0 + 1) {
         uVar21 = *(uint*)( lVar20 + local_c0 * 4 );
         lVar16 = (long)(int)uVar21;
         lVar20 = *(long*)( param_1 + 8 );
         if (lVar16 < 0) goto LAB_00101eb8;
         if (lVar20 == 0) goto LAB_00101f08;
         if (*(long*)( lVar20 + -8 ) <= lVar16) goto LAB_00101ebd;
         iVar26 = *(int*)( *(long*)( lVar20 + lVar16 * 8 ) + 0x248 );
         local_94 = uVar21;
         if (( local_70._0_8_ != 0 ) && ( local_50._4_4_ != 0 )) {
            uVar25 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ));
            uVar2 = *(ulong*)( hash_table_size_primes_inv + ( local_50 & 0xffffffff ) * 8 );
            uVar13 = ( uVar21 >> 0x10 ^ uVar21 ) * -0x7a143595;
            uVar13 = ( uVar13 ^ uVar13 >> 0xd ) * -0x3d4d51cb;
            uVar24 = uVar13 ^ uVar13 >> 0x10;
            if (uVar13 == uVar13 >> 0x10) {
               uVar24 = 1;
               uVar19 = uVar2;
            }
 else {
               uVar19 = uVar24 * uVar2;
            }

            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar25;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar19;
            lVar20 = SUB168(auVar3 * auVar7, 8);
            uVar13 = *(uint*)( local_70._8_8_ + lVar20 * 4 );
            uVar19 = (ulong)uVar13;
            uVar18 = SUB164(auVar3 * auVar7, 8);
            if (uVar13 != 0) {
               uVar13 = 0;
               while (( (uint)uVar19 != uVar24 || ( uVar21 != *(uint*)( *(long*)( local_70._0_8_ + lVar20 * 8 ) + 0x10 ) ) )) {
                  uVar13 = uVar13 + 1;
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = ( uVar18 + 1 ) * uVar2;
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = uVar25;
                  lVar20 = SUB168(auVar4 * auVar8, 8);
                  uVar1 = *(uint*)( local_70._8_8_ + lVar20 * 4 );
                  uVar19 = (ulong)uVar1;
                  uVar18 = SUB164(auVar4 * auVar8, 8);
                  if (( uVar1 == 0 ) || ( auVar5._8_8_ = 0 ),auVar5._0_8_ = uVar19 * uVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar25,auVar6._8_8_ = 0,auVar6._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ) + uVar18 ) - SUB164(auVar5 * auVar9, 8) ) * uVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar25,SUB164(auVar6 * auVar10, 8) < uVar13) goto LAB_00101cd8;
               }
;
               if (*(long*)( local_70._0_8_ + (ulong)uVar18 * 8 ) != 0) {
                  lVar20 = *(long*)( lVar22 + 0x270 );
                  goto joined_r0x00101c77;
               }

            }

         }

         LAB_00101cd8:local_90 = (uint*)operator_new(0x18, DefaultAllocator::alloc);
         *local_90 = uVar21;
         local_90[4] = 0;
         *(uint**)( local_90 + 2 ) = local_90;
         HashMap<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*>>>::insert((int*)local_88, (Element**)local_78, SUB81(&local_94, 0));
         lVar22 = *param_2;
         lVar20 = *(long*)( lVar22 + 0x270 );
         joined_r0x00101c77:if (lVar20 == 0) break;
         if (0 < *(long*)( lVar20 + -8 )) {
            lVar16 = 0;
            do {
               if (iVar26 == *(int*)( lVar20 + lVar16 * 4 )) {
                  DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::create_union(local_78, iVar26, uVar21);
                  local_c0 = local_c0 + 1;
                  lVar22 = *param_2;
                  lVar20 = *(long*)( lVar22 + 0x270 );
                  goto joined_r0x00101b1c;
               }

               lVar16 = lVar16 + 1;
            }
 while ( *(long*)( lVar20 + -8 ) != lVar16 );
         }

      }

   }

   local_80 = (int*)0x0;
   DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::get_representatives(local_78, local_88);
   if (( local_80 == (int*)0x0 ) || ( lVar20 = lVar20 < 2 )) {
      LAB_00101f19:CowData<int>::_unref((CowData<int>*)&local_80);
      DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::~DisjointSet(local_78);
      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   iVar26 = -1;
   lVar22 = *(long*)( param_1 + 8 );
   lVar14 = 0;
   do {
      lVar16 = (long)local_80[lVar14];
      if (iVar26 == -1) {
         if (lVar16 < 0) {
            LAB_00101eff:if (lVar22 == 0) goto LAB_00101f08;
         }
 else {
            if (lVar22 == 0) goto LAB_00101f08;
            if (lVar16 < *(long*)( lVar22 + -8 )) {
               LAB_00101db3:iVar26 = *(int*)( *(long*)( lVar22 + lVar16 * 8 ) + 0x24c );
               goto LAB_00101dbe;
            }

         }

         LAB_00101f76:lVar22 = *(long*)( lVar22 + -8 );
         goto LAB_00101edc;
      }

      if (local_80[lVar14] < 0) goto LAB_00101eff;
      if (lVar22 == 0) goto LAB_00101f08;
      if (*(long*)( lVar22 + -8 ) <= lVar16) goto LAB_00101f76;
      if (*(int*)( *(long*)( lVar22 + lVar16 * 8 ) + 0x24c ) < iVar26) goto LAB_00101db3;
      LAB_00101dbe:lVar14 = lVar14 + 1;
   }
 while ( lVar20 != lVar14 );
   lVar14 = 0;
   LAB_00101dd0:piVar23 = local_80;
   if (lVar14 < lVar20) {
      lVar16 = (long)local_80[lVar14];
      lVar20 = *(long*)( param_1 + 8 );
      if (-1 < lVar16) {
         LAB_00101e00:do {
            if (lVar20 == 0) {
               lVar22 = 0;
               goto LAB_00101edc;
            }

            lVar22 = *(long*)( lVar20 + -8 );
            do {
               if (lVar22 <= lVar16) goto LAB_00102002;
               lVar17 = *(long*)( lVar20 + lVar16 * 8 );
               if (*(int*)( lVar17 + 0x24c ) <= iVar26) {
                  lVar20 = *(long*)( piVar23 + -2 );
                  if (lVar20 <= lVar14) goto LAB_0010204e;
                  CowData<int>::_copy_on_write((CowData<int>*)&local_80);
                  local_80[lVar14] = (int)lVar16;
                  if (local_80 == (int*)0x0) goto LAB_0010200b;
                  lVar20 = *(long*)( local_80 + -2 );
                  lVar14 = lVar14 + 1;
                  goto LAB_00101dd0;
               }

               uVar21 = *(uint*)( lVar17 + 0x248 );
               lVar16 = (long)(int)uVar21;
               if (( lVar16 < 0 ) || ( lVar22 <= lVar16 )) goto LAB_00101edc;
               lVar17 = *param_2;
               if (( *(char*)( *(long*)( lVar20 + lVar16 * 8 ) + 0x290 ) != '\0' ) && ( uVar13 = uVar21 ),lVar15 = CowData<int>::find(*(CowData<int>**)( lVar17 + 0x270 ), (int*)(ulong)uVar21, 0),lVar15 == -1) {
                  Vector<int>::push_back((Vector<int>*)( lVar17 + 0x268 ), uVar13);
                  lVar20 = *(long*)( param_1 + 8 );
                  goto LAB_00101e00;
               }

               lVar15 = CowData<int>::find(*(CowData<int>**)( lVar17 + 0x280 ), (int*)(ulong)uVar21, 0);
            }
 while ( lVar15 != -1 );
            Vector<int>::push_back((Vector<int>*)( lVar17 + 0x278 ), uVar21);
            lVar20 = *(long*)( param_1 + 8 );
         }
 while ( true );
      }

      if (lVar20 == 0) {
         lVar22 = 0;
      }
 else {
         LAB_00102002:lVar22 = *(long*)( lVar20 + -8 );
      }

      goto LAB_00101edc;
   }

   while (piVar23 != (int*)0x0) {
      lVar14 = *(long*)( piVar23 + -2 );
      if (lVar14 < 1) goto LAB_0010200e;
      lVar16 = (long)*piVar23;
      lVar20 = *(long*)( param_1 + 8 );
      if (lVar16 < 0) goto LAB_00101eb8;
      if (lVar20 == 0) goto LAB_00101f08;
      lVar22 = *(long*)( lVar20 + -8 );
      if (lVar22 <= lVar16) goto LAB_00101edc;
      lVar17 = lVar16 * 8;
      bVar12 = true;
      lVar15 = 1;
      while (lVar14 != lVar15) {
         lVar16 = (long)piVar23[lVar15];
         lVar15 = lVar15 + 1;
         if (( lVar16 < 0 ) || ( lVar22 <= lVar16 )) goto LAB_00101edc;
         bVar12 = (bool)( bVar12 & *(int*)( *(long*)( lVar20 + lVar16 * 8 ) + 0x248 ) == *(int*)( *(long*)( lVar20 + lVar17 ) + 0x248 ) );
      }
;
      if (bVar12) goto LAB_00101f19;
      lVar14 = 0;
      while (true) {
         if (piVar23 == (int*)0x0) goto LAB_0010200b;
         if (*(long*)( piVar23 + -2 ) <= lVar14) break;
         lVar16 = (long)piVar23[lVar14];
         lVar20 = *(long*)( param_1 + 8 );
         if (lVar16 < 0) goto LAB_00101eb8;
         if (lVar20 == 0) goto LAB_00101f08;
         lVar22 = *(long*)( lVar20 + -8 );
         if (lVar22 <= lVar16) goto LAB_00101edc;
         uVar21 = *(uint*)( *(long*)( lVar20 + lVar16 * 8 ) + 0x248 );
         lVar16 = (long)(int)uVar21;
         if (( lVar22 <= lVar16 ) || ( lVar16 < 0 )) goto LAB_00101edc;
         lVar22 = *param_2;
         if (( *(char*)( *(long*)( lVar20 + lVar16 * 8 ) + 0x290 ) == '\0' ) || ( uVar13 = uVar21 ),lVar20 = CowData<int>::find(*(CowData<int>**)( lVar22 + 0x270 ), (int*)(ulong)uVar21, 0),lVar20 != -1) {
            uVar13 = uVar21;
            lVar20 = CowData<int>::find(*(CowData<int>**)( lVar22 + 0x280 ), (int*)(ulong)uVar21, 0);
            if (lVar20 == -1) {
               Vector<int>::push_back((Vector<int>*)( lVar22 + 0x278 ), uVar13);
               goto LAB_001021e6;
            }

         }
 else {
            Vector<int>::push_back((Vector<int>*)( lVar22 + 0x268 ), uVar13);
            LAB_001021e6:lVar20 = *(long*)( piVar23 + -2 );
            if (lVar20 <= lVar14) {
               LAB_0010204e:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar14, lVar20, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar11 = (code*)invalidInstructionException();
               ( *pcVar11 )();
            }

         }

         CowData<int>::_copy_on_write((CowData<int>*)&local_80);
         local_80[lVar14] = uVar21;
         lVar14 = lVar14 + 1;
         piVar23 = local_80;
      }
;
   }
;
   LAB_0010200b:lVar14 = 0;
   LAB_0010200e:lVar16 = 0;
   lVar22 = lVar14;
   LAB_00101edc:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar16, lVar22, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar11 = (code*)invalidInstructionException();
   ( *pcVar11 )();
   LAB_00101eb8:if (lVar20 == 0) {
      LAB_00101f08:lVar22 = 0;
   }
 else {
      LAB_00101ebd:lVar22 = *(long*)( lVar20 + -8 );
   }

   goto LAB_00101edc;
}
/* SkinTool::_reparent_non_joint_skeleton_subtrees(Vector<Ref<GLTFNode> >&, Ref<GLTFSkeleton>,
   Vector<int> const&) */undefined8 SkinTool::_reparent_non_joint_skeleton_subtrees(long param_1, long *param_2, long param_3) {
   uint uVar1;
   int iVar2;
   ulong uVar3;
   long lVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   code *pcVar13;
   char cVar14;
   uint uVar15;
   long lVar16;
   uint uVar17;
   ulong uVar18;
   long lVar19;
   Object *pOVar20;
   long lVar21;
   long lVar22;
   uint uVar23;
   uint uVar24;
   ulong uVar25;
   long in_FS_OFFSET;
   long local_c0;
   uint local_9c;
   uint *local_98;
   long local_90;
   Vector local_88[8];
   long local_80;
   DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator> local_78[8];
   undefined1 local_70[16];
   undefined1 local_60[16];
   undefined8 local_50;
   long local_40;
   lVar19 = *(long*)( param_3 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = (undefined1[16])0x0;
   local_50 = 2;
   local_60 = (undefined1[16])0x0;
   if (lVar19 != 0) {
      lVar21 = 0;
      LAB_00102299:do {
         if (*(long*)( lVar19 + -8 ) <= lVar21) break;
         uVar1 = *(uint*)( lVar19 + lVar21 * 4 );
         local_9c = uVar1;
         if (( local_70._0_8_ != 0 ) && ( local_50._4_4_ != 0 )) {
            uVar25 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ));
            uVar3 = *(ulong*)( hash_table_size_primes_inv + ( local_50 & 0xffffffff ) * 8 );
            uVar15 = ( uVar1 >> 0x10 ^ uVar1 ) * -0x7a143595;
            uVar15 = ( uVar15 ^ uVar15 >> 0xd ) * -0x3d4d51cb;
            uVar24 = uVar15 ^ uVar15 >> 0x10;
            if (uVar15 == uVar15 >> 0x10) {
               uVar24 = 1;
               uVar18 = uVar3;
            }
 else {
               uVar18 = uVar24 * uVar3;
            }

            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar25;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar18;
            lVar19 = SUB168(auVar5 * auVar9, 8);
            uVar15 = *(uint*)( local_70._8_8_ + lVar19 * 4 );
            uVar17 = SUB164(auVar5 * auVar9, 8);
            if (uVar15 != 0) {
               uVar23 = 0;
               while (( uVar24 != uVar15 || ( uVar1 != *(uint*)( *(long*)( local_70._0_8_ + lVar19 * 8 ) + 0x10 ) ) )) {
                  uVar23 = uVar23 + 1;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = ( uVar17 + 1 ) * uVar3;
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = uVar25;
                  lVar19 = SUB168(auVar6 * auVar10, 8);
                  uVar15 = *(uint*)( local_70._8_8_ + lVar19 * 4 );
                  uVar17 = SUB164(auVar6 * auVar10, 8);
                  if (( uVar15 == 0 ) || ( auVar7._8_8_ = 0 ),auVar7._0_8_ = uVar15 * uVar3,auVar11._8_8_ = 0,auVar11._0_8_ = uVar25,auVar8._8_8_ = 0,auVar8._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ) + uVar17 ) - SUB164(auVar7 * auVar11, 8) ) * uVar3,auVar12._8_8_ = 0,auVar12._0_8_ = uVar25,SUB164(auVar8 * auVar12, 8) < uVar23) goto LAB_00102430;
               }
;
               if (*(long*)( local_70._0_8_ + (ulong)uVar17 * 8 ) != 0) {
                  lVar4 = *(long*)( param_1 + 8 );
                  goto joined_r0x001023b1;
               }

            }

         }

         LAB_00102430:local_98 = (uint*)operator_new(0x18, DefaultAllocator::alloc);
         *local_98 = uVar1;
         local_98[4] = 0;
         *(uint**)( local_98 + 2 ) = local_98;
         HashMap<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*>>>::insert((int*)local_88, (Element**)local_78, SUB81(&local_9c, 0));
         lVar4 = *(long*)( param_1 + 8 );
         joined_r0x001023b1:if ((int)uVar1 < 0) {
            lVar16 = (long)(int)uVar1;
            lVar19 = lVar16;
            if (lVar4 == 0) {
               LAB_00102620:lVar16 = lVar19;
               lVar22 = 0;
            }
 else {
               lVar22 = *(long*)( lVar4 + -8 );
            }

            LAB_001024ab:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar16, lVar22, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar13 = (code*)invalidInstructionException();
            ( *pcVar13 )();
         }

         lVar19 = (long)(int)uVar1;
         if (lVar4 == 0) goto LAB_00102620;
         lVar22 = *(long*)( lVar4 + -8 );
         lVar16 = lVar19;
         if (lVar22 <= lVar19) goto LAB_001024ab;
         iVar2 = *(int*)( *(long*)( lVar4 + lVar19 * 8 ) + 0x248 );
         lVar19 = *(long*)( param_3 + 8 );
         if (-1 < iVar2) {
            if (lVar19 == 0) break;
            if (0 < *(long*)( lVar19 + -8 )) {
               lVar16 = 0;
               do {
                  if (iVar2 == *(int*)( lVar19 + lVar16 * 4 )) {
                     lVar16 = (long)iVar2;
                     if (lVar22 <= lVar16) goto LAB_001024ab;
                     if (*(char*)( *(long*)( lVar4 + lVar16 * 8 ) + 0x290 ) == '\0') {
                        DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::create_union(local_78, iVar2, uVar1);
                        lVar19 = *(long*)( param_3 + 8 );
                        goto LAB_001024e5;
                     }

                     break;
                  }

                  lVar16 = lVar16 + 1;
               }
 while ( *(long*)( lVar19 + -8 ) != lVar16 );
            }

            lVar21 = lVar21 + 1;
            goto LAB_00102299;
         }

         LAB_001024e5:lVar21 = lVar21 + 1;
      }
 while ( lVar19 != 0 );
   }

   local_90 = 0;
   DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::get_representatives(local_78, (Vector*)&local_98);
   lVar21 = local_90;
   if (local_90 != 0) {
      for (local_c0 = 0; local_c0 < *(long*)( lVar21 + -8 ); local_c0 = local_c0 + 1) {
         lVar16 = 0;
         local_80 = 0;
         DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::get_members(local_78, local_88, *(int*)( lVar21 + local_c0 * 4 ));
         lVar4 = local_80;
         if (( local_80 != 0 ) && ( 0 < *(long*)( local_80 + -8 ) )) {
            do {
               lVar19 = (long)*(int*)( lVar4 + lVar16 * 4 );
               lVar22 = *(long*)( param_1 + 8 );
               if (lVar19 < 0) {
                  if (lVar22 == 0) goto LAB_00102620;
                  LAB_00102636:lVar22 = *(long*)( lVar22 + -8 );
                  lVar16 = lVar19;
                  goto LAB_001024ab;
               }

               if (lVar22 == 0) goto LAB_00102620;
               if (*(long*)( lVar22 + -8 ) <= lVar19) goto LAB_00102636;
               pOVar20 = *(Object**)( lVar22 + lVar19 * 8 );
               if (pOVar20 == (Object*)0x0) {
                  DAT_00000290 = 0;
                  /* WARNING: Does not return */
                  pcVar13 = (code*)invalidInstructionException();
                  ( *pcVar13 )();
               }

               cVar14 = RefCounted::reference();
               lVar22 = *(long*)( lVar4 + -8 );
               if (cVar14 == '\0') {
                  pOVar20 = (Object*)0x0;
               }

               lVar19 = *param_2;
               pOVar20[0x290] = (Object)0x1;
               if (lVar22 <= lVar16) goto LAB_001024ab;
               Vector<int>::push_back((Vector<int>*)( lVar19 + 0x240 ), *(int*)( lVar4 + lVar16 * 4 ));
               cVar14 = RefCounted::unreference();
               if (( cVar14 != '\0' ) && ( cVar14 = predelete_handler(pOVar20) ),cVar14 != '\0') {
                  ( **(code**)( *(long*)pOVar20 + 0x140 ) )(pOVar20);
                  Memory::free_static(pOVar20, false);
               }

               lVar16 = lVar16 + 1;
            }
 while ( lVar16 < *(long*)( lVar4 + -8 ) );
         }

         CowData<int>::_unref((CowData<int>*)&local_80);
      }

   }

   CowData<int>::_unref((CowData<int>*)&local_90);
   DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::~DisjointSet(local_78);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SkinTool::_expand_skin(Vector<Ref<GLTFNode> >&, Ref<GLTFSkin>) */undefined8 SkinTool::_expand_skin(Vector *param_1, long *param_2) {
   uint uVar1;
   uint uVar2;
   Object *pOVar3;
   ulong uVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   code *pcVar13;
   char cVar14;
   uint uVar15;
   int iVar16;
   long lVar17;
   uint uVar18;
   ulong uVar19;
   long lVar20;
   undefined8 uVar21;
   long lVar22;
   Ref *pRVar23;
   uint uVar24;
   int *piVar25;
   ulong uVar26;
   long lVar27;
   long in_FS_OFFSET;
   long local_108;
   DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator> *local_f0;
   Vector<int> local_b8[8];
   long local_b0;
   uint local_a8[2];
   long local_a0;
   uint *local_98;
   int *local_90;
   undefined8 local_88;
   undefined8 local_80;
   Object *local_78;
   undefined1 local_70[16];
   undefined1 local_60[16];
   undefined8 local_50;
   long local_40;
   pOVar3 = (Object*)*param_2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( pOVar3 == (Object*)0x0 ) || ( local_78 = pOVar3 ),cVar14 = RefCounted::reference(),cVar14 == '\0') {
      local_78 = (Object*)0x0;
      _capture_nodes_for_multirooted_skin(param_1, &local_78);
   }
 else {
      _capture_nodes_for_multirooted_skin(param_1);
      cVar14 = RefCounted::unreference();
      if (( cVar14 != '\0' ) && ( cVar14 = predelete_handler(pOVar3) ),cVar14 != '\0') {
         ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
         Memory::free_static(pOVar3, false);
      }

   }

   local_f0 = (DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>*)&local_78;
   local_50 = 2;
   local_b0 = 0;
   local_70 = (undefined1[16])0x0;
   local_80 = 0;
   local_60 = (undefined1[16])0x0;
   if (*(long*)( *param_2 + 0x270 ) != 0) {
      CowData<int>::_ref((CowData<int>*)&local_80, (CowData*)( *param_2 + 0x270 ));
   }

   Vector<int>::append_array(local_b8, (Ref<GLTFSkin>*)&local_88);
   CowData<int>::_unref((CowData<int>*)&local_80);
   local_80 = 0;
   if (*(long*)( *param_2 + 0x280 ) != 0) {
      CowData<int>::_ref((CowData<int>*)&local_80, (CowData*)( *param_2 + 0x280 ));
   }

   Vector<int>::append_array(local_b8, (Ref<GLTFSkin>*)&local_88);
   CowData<int>::_unref((CowData<int>*)&local_80);
   lVar22 = local_b0;
   if (local_b0 != 0) {
      lVar27 = *(long*)( local_b0 + -8 );
      for (local_108 = 0; local_108 < lVar27; local_108 = local_108 + 1) {
         uVar1 = *(uint*)( lVar22 + local_108 * 4 );
         lVar17 = (long)(int)uVar1;
         lVar20 = *(long*)( param_1 + 8 );
         if (lVar17 < 0) {
            if (lVar20 != 0) {
               LAB_00102a3d:lVar22 = *(long*)( lVar20 + -8 );
               goto LAB_00102a41;
            }

            LAB_00102ab0:lVar22 = 0;
            LAB_00102a41:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar17, lVar22, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar13 = (code*)invalidInstructionException();
            ( *pcVar13 )();
         }

         if (lVar20 == 0) goto LAB_00102ab0;
         if (*(long*)( lVar20 + -8 ) <= lVar17) goto LAB_00102a3d;
         iVar16 = *(int*)( *(long*)( lVar20 + lVar17 * 8 ) + 0x248 );
         local_a8[0] = uVar1;
         if (( local_70._0_8_ != 0 ) && ( local_50._4_4_ != 0 )) {
            uVar26 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ));
            uVar4 = *(ulong*)( hash_table_size_primes_inv + ( local_50 & 0xffffffff ) * 8 );
            uVar15 = ( uVar1 >> 0x10 ^ uVar1 ) * -0x7a143595;
            uVar15 = ( uVar15 ^ uVar15 >> 0xd ) * -0x3d4d51cb;
            uVar24 = uVar15 ^ uVar15 >> 0x10;
            if (uVar15 == uVar15 >> 0x10) {
               uVar24 = 1;
               uVar19 = uVar4;
            }
 else {
               uVar19 = uVar24 * uVar4;
            }

            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar26;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar19;
            lVar20 = SUB168(auVar5 * auVar9, 8);
            uVar15 = *(uint*)( local_70._8_8_ + lVar20 * 4 );
            uVar19 = (ulong)uVar15;
            uVar18 = SUB164(auVar5 * auVar9, 8);
            if (uVar15 != 0) {
               uVar15 = 0;
               while (( uVar24 != (uint)uVar19 || ( uVar1 != *(uint*)( *(long*)( local_70._0_8_ + lVar20 * 8 ) + 0x10 ) ) )) {
                  uVar15 = uVar15 + 1;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = ( uVar18 + 1 ) * uVar4;
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = uVar26;
                  lVar20 = SUB168(auVar6 * auVar10, 8);
                  uVar2 = *(uint*)( local_70._8_8_ + lVar20 * 4 );
                  uVar19 = (ulong)uVar2;
                  uVar18 = SUB164(auVar6 * auVar10, 8);
                  if (( uVar2 == 0 ) || ( auVar7._8_8_ = 0 ),auVar7._0_8_ = uVar19 * uVar4,auVar11._8_8_ = 0,auVar11._0_8_ = uVar26,auVar8._8_8_ = 0,auVar8._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ) + uVar18 ) - SUB164(auVar7 * auVar11, 8) ) * uVar4,auVar12._8_8_ = 0,auVar12._0_8_ = uVar26,SUB164(auVar8 * auVar12, 8) < uVar15) goto LAB_001029ec;
               }
;
               if (*(long*)( local_70._0_8_ + (ulong)uVar18 * 8 ) != 0) goto LAB_001029aa;
            }

         }

         LAB_001029ec:local_98 = (uint*)operator_new(0x18, DefaultAllocator::alloc);
         *local_98 = uVar1;
         local_98[4] = 0;
         *(uint**)( local_98 + 2 ) = local_98;
         HashMap<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*>>>::insert((int*)&local_88, (Element**)local_f0, SUB81(local_a8, 0));
         lVar27 = *(long*)( lVar22 + -8 );
         LAB_001029aa:if (0 < lVar27) {
            lVar20 = 0;
            do {
               if (iVar16 == *(int*)( lVar22 + lVar20 * 4 )) {
                  DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::create_union(local_f0, iVar16, uVar1);
                  lVar27 = *(long*)( lVar22 + -8 );
                  break;
               }

               lVar20 = lVar20 + 1;
            }
 while ( lVar27 != lVar20 );
         }

      }

   }

   local_a0 = 0;
   DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::get_representatives(local_f0, (Vector*)local_a8);
   lVar22 = local_a0;
   local_90 = (int*)0x0;
   if (local_a0 != 0) {
      lVar27 = 0;
      while (lVar27 < *(long*)( lVar22 + -8 )) {
         lVar20 = lVar27 * 4;
         local_80 = 0;
         lVar27 = lVar27 + 1;
         DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::get_members(local_f0, (Vector*)&local_88, *(int*)( lVar22 + lVar20 ));
         iVar16 = _find_highest_node(param_1, (Vector*)&local_88);
         if (iVar16 < 0) {
            uVar21 = 1;
            _err_print_error("_expand_skin", "modules/gltf/skin_tool.cpp", 0xb8, "Condition \"root < 0\" is true. Returning: FAILED", 0, 0);
            CowData<int>::_unref((CowData<int>*)&local_80);
            goto LAB_00102bcb;
         }

         Vector<int>::push_back((Vector<int>*)&local_98, iVar16);
         CowData<int>::_unref((CowData<int>*)&local_80);
      }
;
      if (local_90 != (int*)0x0) {
         lVar22 = *(long*)( local_90 + -2 );
         piVar25 = local_90;
         if (lVar22 == 0) goto LAB_00102c3d;
         CowData<int>::_copy_on_write((CowData<int>*)&local_90);
         piVar25 = local_90;
         SortArray<int,_DefaultComparator<int>,true>::sort(local_90, lVar22);
         if (piVar25 != (int*)0x0) {
            pRVar23 = (Ref*)*param_2;
            if (0 < *(long*)( piVar25 + -2 )) {
               lVar22 = 0;
               do {
                  iVar16 = piVar25[lVar22];
                  local_88 = 0;
                  lVar22 = lVar22 + 1;
                  Ref<GLTFSkin>::operator =((Ref<GLTFSkin>*)&local_88, pRVar23);
                  _capture_nodes_in_skin(param_1, (Ref<GLTFSkin>*)&local_88, iVar16);
                  Ref<GLTFSkin>::unref((Ref<GLTFSkin>*)&local_88);
                  pRVar23 = (Ref*)*param_2;
               }
 while ( lVar22 < *(long*)( piVar25 + -2 ) );
            }

            goto LAB_00102c3d;
         }

      }

   }

   piVar25 = (int*)0x0;
   LAB_00102c3d:if (piVar25 != *(int**)( *param_2 + 0x290 )) {
      CowData<int>::_ref((CowData<int>*)( *param_2 + 0x290 ), (CowData*)&local_90);
   }

   uVar21 = 0;
   LAB_00102bcb:CowData<int>::_unref((CowData<int>*)&local_90);
   CowData<int>::_unref((CowData<int>*)&local_a0);
   CowData<int>::_unref((CowData<int>*)&local_b0);
   DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::~DisjointSet(local_f0);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar21;
}
/* SkinTool::_verify_skin(Vector<Ref<GLTFNode> >&, Ref<GLTFSkin>) */undefined8 SkinTool::_verify_skin(Vector *param_1, long *param_2) {
   long lVar1;
   uint uVar2;
   uint uVar3;
   ulong uVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   code *pcVar13;
   int *piVar14;
   uint uVar15;
   int iVar16;
   long lVar17;
   uint uVar18;
   ulong uVar19;
   long lVar20;
   undefined8 uVar21;
   long lVar22;
   uint uVar23;
   long lVar24;
   ulong uVar25;
   long lVar26;
   long in_FS_OFFSET;
   long local_100;
   Vector<int> local_b8[8];
   long local_b0;
   uint local_a8[2];
   long local_a0;
   uint *local_98;
   int *local_90;
   Vector local_88[8];
   undefined8 local_80;
   DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator> local_78[8];
   undefined1 local_70[16];
   undefined1 local_60[16];
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 2;
   local_b0 = 0;
   local_80 = 0;
   local_70 = (undefined1[16])0x0;
   local_60 = (undefined1[16])0x0;
   if (*(long*)( *param_2 + 0x270 ) != 0) {
      CowData<int>::_ref((CowData<int>*)&local_80, (CowData*)( *param_2 + 0x270 ));
   }

   Vector<int>::append_array(local_b8, local_88);
   CowData<int>::_unref((CowData<int>*)&local_80);
   local_80 = 0;
   if (*(long*)( *param_2 + 0x280 ) != 0) {
      CowData<int>::_ref((CowData<int>*)&local_80, (CowData*)( *param_2 + 0x280 ));
   }

   Vector<int>::append_array(local_b8, local_88);
   CowData<int>::_unref((CowData<int>*)&local_80);
   lVar24 = local_b0;
   if (local_b0 != 0) {
      lVar26 = *(long*)( local_b0 + -8 );
      for (local_100 = 0; local_100 < lVar26; local_100 = local_100 + 1) {
         uVar2 = *(uint*)( lVar24 + local_100 * 4 );
         lVar17 = (long)(int)uVar2;
         lVar20 = *(long*)( param_1 + 8 );
         if (lVar17 < 0) goto LAB_00103020;
         if (lVar20 == 0) goto LAB_00103070;
         if (*(long*)( lVar20 + -8 ) <= lVar17) goto LAB_00103025;
         iVar16 = *(int*)( *(long*)( lVar20 + lVar17 * 8 ) + 0x248 );
         local_a8[0] = uVar2;
         if (( local_70._0_8_ != 0 ) && ( local_50._4_4_ != 0 )) {
            uVar25 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ));
            uVar4 = *(ulong*)( hash_table_size_primes_inv + ( local_50 & 0xffffffff ) * 8 );
            uVar15 = ( uVar2 >> 0x10 ^ uVar2 ) * -0x7a143595;
            uVar15 = ( uVar15 ^ uVar15 >> 0xd ) * -0x3d4d51cb;
            uVar23 = uVar15 ^ uVar15 >> 0x10;
            if (uVar15 == uVar15 >> 0x10) {
               uVar23 = 1;
               uVar19 = uVar4;
            }
 else {
               uVar19 = uVar23 * uVar4;
            }

            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar25;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar19;
            lVar20 = SUB168(auVar5 * auVar9, 8);
            uVar15 = *(uint*)( local_70._8_8_ + lVar20 * 4 );
            uVar19 = (ulong)uVar15;
            uVar18 = SUB164(auVar5 * auVar9, 8);
            if (uVar15 != 0) {
               uVar15 = 0;
               while (( uVar23 != (uint)uVar19 || ( uVar2 != *(uint*)( *(long*)( local_70._0_8_ + lVar20 * 8 ) + 0x10 ) ) )) {
                  uVar15 = uVar15 + 1;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = ( uVar18 + 1 ) * uVar4;
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = uVar25;
                  lVar20 = SUB168(auVar6 * auVar10, 8);
                  uVar3 = *(uint*)( local_70._8_8_ + lVar20 * 4 );
                  uVar19 = (ulong)uVar3;
                  uVar18 = SUB164(auVar6 * auVar10, 8);
                  if (( uVar3 == 0 ) || ( auVar7._8_8_ = 0 ),auVar7._0_8_ = uVar19 * uVar4,auVar11._8_8_ = 0,auVar11._0_8_ = uVar25,auVar8._8_8_ = 0,auVar8._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ) + uVar18 ) - SUB164(auVar7 * auVar11, 8) ) * uVar4,auVar12._8_8_ = 0,auVar12._0_8_ = uVar25,SUB164(auVar8 * auVar12, 8) < uVar15) goto LAB_00102fd4;
               }
;
               if (*(long*)( local_70._0_8_ + (ulong)uVar18 * 8 ) != 0) goto LAB_00102f93;
            }

         }

         LAB_00102fd4:local_98 = (uint*)operator_new(0x18, DefaultAllocator::alloc);
         *local_98 = uVar2;
         local_98[4] = 0;
         *(uint**)( local_98 + 2 ) = local_98;
         HashMap<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*>>>::insert((int*)local_88, (Element**)local_78, SUB81(local_a8, 0));
         lVar26 = *(long*)( lVar24 + -8 );
         LAB_00102f93:if (0 < lVar26) {
            lVar20 = 0;
            do {
               if (iVar16 == *(int*)( lVar24 + lVar20 * 4 )) {
                  DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::create_union(local_78, iVar16, uVar2);
                  lVar26 = *(long*)( lVar24 + -8 );
                  break;
               }

               lVar20 = lVar20 + 1;
            }
 while ( lVar26 != lVar20 );
         }

      }

   }

   local_a0 = 0;
   DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::get_representatives(local_78, (Vector*)local_a8);
   lVar24 = local_a0;
   local_90 = (int*)0x0;
   if (local_a0 == 0) {
      LAB_001032a5:_err_print_error("_verify_skin", "modules/gltf/skin_tool.cpp", 0xf0, "Condition \"out_roots.is_empty()\" is true. Returning: FAILED", 0, 0);
   }
 else {
      lVar26 = 0;
      while (lVar26 < *(long*)( lVar24 + -8 )) {
         lVar20 = lVar26 * 4;
         local_80 = 0;
         lVar26 = lVar26 + 1;
         DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::get_members(local_78, local_88, *(int*)( lVar24 + lVar20 ));
         iVar16 = _find_highest_node(param_1, local_88);
         if (iVar16 < 0) {
            _err_print_error("_verify_skin", "modules/gltf/skin_tool.cpp", 0xea, "Condition \"root < 0\" is true. Returning: FAILED", 0, 0);
            CowData<int>::_unref((CowData<int>*)&local_80);
            goto LAB_00103156;
         }

         Vector<int>::push_back((Vector<int>*)&local_98, iVar16);
         CowData<int>::_unref((CowData<int>*)&local_80);
      }
;
      if (local_90 == (int*)0x0) goto LAB_001032a5;
      lVar24 = *(long*)( local_90 + -2 );
      if (lVar24 != 0) {
         CowData<int>::_copy_on_write((CowData<int>*)&local_90);
         piVar14 = local_90;
         SortArray<int,_DefaultComparator<int>,true>::sort(local_90, lVar24);
         if (piVar14 == (int*)0x0) goto LAB_001032a5;
         lVar24 = *(long*)( piVar14 + -2 );
         lVar26 = *(long*)( *param_2 + 0x290 );
         if (lVar26 == 0) goto joined_r0x0010334a;
         if (*(long*)( lVar26 + -8 ) != lVar24) goto LAB_001031ea;
         if (0 < lVar24) {
            lVar20 = 0;
            do {
               if (piVar14[lVar20] != *(int*)( lVar26 + lVar20 * 4 )) {
                  _err_print_error("_verify_skin", "modules/gltf/skin_tool.cpp", 0xf5, "Condition \"out_roots[i] != p_skin->roots[i]\" is true. Returning: FAILED", 0, 0);
                  goto LAB_00103156;
               }

               lVar20 = lVar20 + 1;
            }
 while ( lVar20 != lVar24 );
            if (lVar24 != 1) {
               lVar17 = (long)*piVar14;
               lVar20 = *(long*)( param_1 + 8 );
               if (lVar17 < 0) {
                  LAB_00103020:if (lVar20 != 0) {
                     LAB_00103025:lVar26 = *(long*)( lVar20 + -8 );
                     goto LAB_00103044;
                  }

               }
 else if (lVar20 != 0) {
                  lVar26 = *(long*)( lVar20 + -8 );
                  if (lVar26 <= lVar17) goto LAB_00103044;
                  lVar1 = lVar17 * 8;
                  lVar22 = 1;
                  do {
                     lVar17 = (long)piVar14[lVar22];
                     if (( lVar17 < 0 ) || ( lVar26 <= lVar17 )) goto LAB_00103044;
                     if (*(int*)( *(long*)( lVar20 + lVar17 * 8 ) + 0x248 ) != *(int*)( *(long*)( lVar20 + lVar1 ) + 0x248 )) goto LAB_00103156;
                     lVar22 = lVar22 + 1;
                  }
 while ( lVar22 < lVar24 );
                  goto LAB_00103340;
               }

               LAB_00103070:lVar26 = 0;
               goto LAB_00103044;
            }

            LAB_00103340:uVar21 = 0;
            goto LAB_0010315b;
         }

         LAB_00103353:lVar17 = 0;
         lVar26 = lVar24;
         LAB_00103044:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar17, lVar26, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar13 = (code*)invalidInstructionException();
         ( *pcVar13 )();
      }

      if (*(long*)( *param_2 + 0x290 ) == 0) {
         LAB_00103350:lVar24 = 0;
         goto LAB_00103353;
      }

      lVar24 = *(long*)( *(long*)( *param_2 + 0x290 ) + -8 );
      joined_r0x0010334a:if (lVar24 == 0) goto LAB_00103350;
      LAB_001031ea:_err_print_error("_verify_skin", "modules/gltf/skin_tool.cpp", 0xf3, "Condition \"out_roots.size() != p_skin->roots.size()\" is true. Returning: FAILED", 0, 0);
   }

   LAB_00103156:uVar21 = 1;
   LAB_0010315b:CowData<int>::_unref((CowData<int>*)&local_90);
   CowData<int>::_unref((CowData<int>*)&local_a0);
   CowData<int>::_unref((CowData<int>*)&local_b0);
   DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::~DisjointSet(local_78);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar21;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RBSet<int, Comparator<int>, DefaultAllocator>::insert(int const&) [clone .isra.0] */void RBSet<int,Comparator<int>,DefaultAllocator>::insert(RBSet<int,Comparator<int>,DefaultAllocator> *this, int *param_1) {
   undefined8 uVar1;
   int iVar2;
   Element *pEVar3;
   Element *pEVar4;
   Element *pEVar5;
   Element *pEVar6;
   Element *pEVar7;
   Element *pEVar8;
   Element *pEVar9;
   Element *pEVar10;
   bool bVar11;
   pEVar6 = *(Element**)this;
   if (pEVar6 == (Element*)0x0) {
      pEVar6 = (Element*)operator_new(0x38, DefaultAllocator::alloc);
      *(undefined1(*) [16])( pEVar6 + 0x20 ) = (undefined1[16])0x0;
      uVar1 = *(undefined8*)( this + 8 );
      *(Element**)this = pEVar6;
      *(undefined4*)pEVar6 = 1;
      *(undefined8*)( pEVar6 + 0x18 ) = uVar1;
      *(undefined8*)( pEVar6 + 8 ) = uVar1;
      *(undefined8*)( pEVar6 + 0x10 ) = uVar1;
   }
 else if (*(Element**)( pEVar6 + 0x10 ) != *(Element**)( this + 8 )) {
      pEVar7 = *(Element**)( pEVar6 + 0x10 );
      do {
         pEVar6 = pEVar7;
         if (*param_1 < *(int*)( pEVar6 + 0x30 )) {
            pEVar7 = *(Element**)( pEVar6 + 0x10 );
         }
 else {
            if (*param_1 <= *(int*)( pEVar6 + 0x30 )) {
               return;
            }

            pEVar7 = *(Element**)( pEVar6 + 8 );
         }

      }
 while ( pEVar7 != *(Element**)( this + 8 ) );
   }

   pEVar3 = (Element*)operator_new(0x38, DefaultAllocator::alloc);
   *(Element**)( pEVar3 + 0x18 ) = pEVar6;
   *(undefined1(*) [16])( pEVar3 + 0x20 ) = (undefined1[16])0x0;
   pEVar7 = *(Element**)( this + 8 );
   *(undefined4*)pEVar3 = 0;
   *(Element**)( pEVar3 + 8 ) = pEVar7;
   *(Element**)( pEVar3 + 0x10 ) = pEVar7;
   iVar2 = *param_1;
   *(int*)( pEVar3 + 0x30 ) = iVar2;
   if (( pEVar6 == *(Element**)this ) || ( iVar2 < *(int*)( pEVar6 + 0x30 ) )) {
      *(Element**)( pEVar6 + 0x10 ) = pEVar3;
      pEVar9 = *(Element**)( this + 8 );
      pEVar8 = *(Element**)( pEVar3 + 0x10 );
      pEVar10 = *(Element**)this;
      pEVar4 = pEVar7;
      if (pEVar7 == pEVar9) {
         pEVar5 = pEVar6;
         pEVar4 = pEVar6;
         if (pEVar3 == *(Element**)( pEVar6 + 8 )) goto LAB_001034f0;
         goto LAB_001034fd;
      }

      LAB_001034d0:do {
         pEVar5 = pEVar4;
         pEVar7 = pEVar8;
         pEVar4 = *(Element**)( pEVar5 + 0x10 );
      }
 while ( *(Element**)( pEVar5 + 0x10 ) != pEVar9 );
   }
 else {
      *(Element**)( pEVar6 + 8 ) = pEVar3;
      pEVar5 = *(Element**)( pEVar3 + 8 );
      pEVar9 = *(Element**)( this + 8 );
      pEVar10 = *(Element**)this;
      pEVar4 = pEVar6;
      pEVar8 = pEVar7;
      if (pEVar5 == pEVar9) {
         LAB_001034f0:do {
            pEVar5 = *(Element**)( pEVar4 + 0x18 );
            bVar11 = pEVar4 == *(Element**)( pEVar5 + 8 );
            pEVar4 = pEVar5;
         }
 while ( bVar11 );
         LAB_001034fd:pEVar7 = pEVar8;
         if (pEVar5 == pEVar10) {
            pEVar5 = (Element*)0x0;
         }

      }
 else {
         pEVar4 = *(Element**)( pEVar5 + 0x10 );
         if (*(Element**)( pEVar5 + 0x10 ) != pEVar9) goto LAB_001034d0;
      }

   }

   *(Element**)( pEVar3 + 0x20 ) = pEVar5;
   if (*(Element**)( this + 8 ) == pEVar7) {
      pEVar7 = pEVar3;
      pEVar9 = pEVar6;
      if (pEVar3 == *(Element**)( pEVar6 + 0x10 )) {
         do {
            pEVar6 = *(Element**)( pEVar9 + 0x18 );
            bVar11 = pEVar9 == *(Element**)( pEVar6 + 0x10 );
            pEVar7 = pEVar9;
            pEVar9 = pEVar6;
         }
 while ( bVar11 );
      }

      if (pEVar7 != *(Element**)this) goto LAB_00103484;
      *(undefined8*)( pEVar3 + 0x28 ) = 0;
      if (pEVar5 == (Element*)0x0) goto LAB_0010349e;
      LAB_0010348d:*(Element**)( pEVar5 + 0x28 ) = pEVar3;
      pEVar6 = *(Element**)( pEVar3 + 0x28 );
      if (pEVar6 == (Element*)0x0) goto LAB_0010349e;
   }
 else {
      do {
         pEVar6 = pEVar7;
         pEVar7 = *(Element**)( pEVar6 + 8 );
      }
 while ( *(Element**)( this + 8 ) != *(Element**)( pEVar6 + 8 ) );
      LAB_00103484:*(Element**)( pEVar3 + 0x28 ) = pEVar6;
      if (pEVar5 != (Element*)0x0) goto LAB_0010348d;
   }

   *(Element**)( pEVar6 + 0x20 ) = pEVar3;
   LAB_0010349e:*(int*)( this + 0x10 ) = *(int*)( this + 0x10 ) + 1;
   _insert_rb_fix(this, pEVar3);
   return;
}
/* SkinTool::_recurse_children(Vector<Ref<GLTFNode> >&, int, RBSet<int, Comparator<int>,
   DefaultAllocator>&, HashSet<int, HashMapHasherDefault, HashMapComparatorDefault<int> >&) */void SkinTool::_recurse_children(Vector *param_1, int param_2, RBSet *param_3, HashSet *param_4) {
   ulong uVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   code *pcVar10;
   char cVar11;
   uint uVar12;
   long lVar13;
   int iVar14;
   ulong uVar15;
   long lVar16;
   Object *pOVar17;
   long lVar18;
   uint uVar19;
   uint uVar20;
   ulong uVar21;
   long in_FS_OFFSET;
   int local_5c;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_5c = param_2;
   if (( *(long*)param_4 != 0 ) && ( *(int*)( param_4 + 0x24 ) != 0 )) {
      uVar21 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_4 + 0x20 ) * 4 ));
      uVar1 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_4 + 0x20 ) * 8 );
      uVar12 = ( (uint)param_2 >> 0x10 ^ param_2 ) * -0x7a143595;
      uVar12 = ( uVar12 ^ uVar12 >> 0xd ) * -0x3d4d51cb;
      uVar20 = uVar12 ^ uVar12 >> 0x10;
      if (uVar12 == uVar12 >> 0x10) {
         uVar20 = 1;
         uVar15 = uVar1;
      }
 else {
         uVar15 = uVar20 * uVar1;
      }

      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar21;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar15;
      lVar16 = SUB168(auVar2 * auVar6, 8);
      uVar12 = *(uint*)( *(long*)( param_4 + 0x18 ) + lVar16 * 4 );
      iVar14 = SUB164(auVar2 * auVar6, 8);
      if (uVar12 != 0) {
         uVar19 = 0;
         do {
            if (( uVar12 == uVar20 ) && ( param_2 == *(int*)( *(long*)param_4 + ( ulong ) * (uint*)( *(long*)( param_4 + 8 ) + lVar16 * 4 ) * 4 ) )) goto LAB_001036e2;
            uVar19 = uVar19 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = ( iVar14 + 1 ) * uVar1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar21;
            lVar16 = SUB168(auVar3 * auVar7, 8);
            uVar12 = *(uint*)( *(long*)( param_4 + 0x18 ) + lVar16 * 4 );
            iVar14 = SUB164(auVar3 * auVar7, 8);
         }
 while ( ( uVar12 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = uVar12 * uVar1,auVar8._8_8_ = 0,auVar8._0_8_ = uVar21,auVar5._8_8_ = 0,auVar5._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_4 + 0x20 ) * 4 ) + iVar14 ) - SUB164(auVar4 * auVar8, 8) ) * uVar1,auVar9._8_8_ = 0,auVar9._0_8_ = uVar21,uVar19 <= SUB164(auVar5 * auVar9, 8) );
      }

   }

   HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert(local_58);
   lVar13 = (long)param_2;
   lVar16 = *(long*)( param_1 + 8 );
   if (lVar13 < 0) {
      if (lVar16 != 0) {
         lVar18 = *(long*)( lVar16 + -8 );
         goto LAB_00103828;
      }

   }
 else if (lVar16 != 0) {
      lVar18 = *(long*)( lVar16 + -8 );
      if (lVar13 < lVar18) {
         pOVar17 = *(Object**)( lVar16 + lVar13 * 8 );
         if (pOVar17 == (Object*)0x0) {
            /* WARNING: Does not return */
            pcVar10 = (code*)invalidInstructionException();
            ( *pcVar10 )();
         }

         cVar11 = RefCounted::reference();
         if (cVar11 == '\0') {
            pOVar17 = (Object*)0x0;
         }

         lVar13 = 0;
         lVar16 = *(long*)( pOVar17 + 0x2a0 );
         while (lVar16 != 0) {
            if (*(long*)( lVar16 + -8 ) <= lVar13) goto LAB_001037c8;
            lVar18 = lVar13 * 4;
            lVar13 = lVar13 + 1;
            _recurse_children(param_1, *(int*)( lVar16 + lVar18 ), param_3, param_4);
            lVar16 = *(long*)( pOVar17 + 0x2a0 );
         }
;
         if (( *(int*)( pOVar17 + 0x288 ) < 0 ) || ( *(int*)( pOVar17 + 0x280 ) < 0 )) {
            LAB_001037c8:RBSet<int,Comparator<int>,DefaultAllocator>::insert((RBSet<int,Comparator<int>,DefaultAllocator>*)param_3, &local_5c);
         }

         cVar11 = RefCounted::unreference();
         if (( cVar11 != '\0' ) && ( cVar11 = predelete_handler(pOVar17) ),cVar11 != '\0') {
            ( **(code**)( *(long*)pOVar17 + 0x140 ) )(pOVar17);
            Memory::free_static(pOVar17, false);
         }

         LAB_001036e2:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      goto LAB_00103828;
   }

   lVar18 = 0;
   LAB_00103828:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar13, lVar18, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar10 = (code*)invalidInstructionException();
   ( *pcVar10 )();
}
/* CowData<Vector<int> >::_copy_on_write() [clone .isra.0] */void CowData<Vector<int>>::_copy_on_write(CowData<Vector<int>> *this) {
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   long lVar4;
   ulong uVar5;
   CowData<int> *this_00;
   long lVar6;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   if (lVar1 * 0x10 != 0) {
      uVar5 = lVar1 * 0x10 - 1;
      uVar5 = uVar5 | uVar5 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar3 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar3 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   this_00 = (CowData<int>*)( puVar3 + 3 );
   lVar6 = 0;
   *puVar3 = 1;
   puVar3[1] = lVar1;
   if (lVar1 != 0) {
      do {
         lVar4 = lVar6 * 0x10 + *(long*)this;
         *(undefined8*)this_00 = 0;
         if (*(long*)( lVar4 + 8 ) != 0) {
            CowData<int>::_ref(this_00, (CowData*)( lVar4 + 8 ));
         }

         lVar6 = lVar6 + 1;
         this_00 = this_00 + 0x10;
      }
 while ( lVar1 != lVar6 );
   }

   _unref(this);
   *(undefined8**)this = puVar3 + 2;
   return;
}
/* CowData<Ref<GLTFSkin> >::_copy_on_write() [clone .isra.0] */void CowData<Ref<GLTFSkin>>::_copy_on_write(CowData<Ref<GLTFSkin>> *this) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   char cVar4;
   undefined8 *puVar5;
   long *plVar6;
   ulong uVar7;
   long lVar8;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar7 = 0x10;
   if (lVar1 * 8 != 0) {
      uVar7 = lVar1 * 8 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
   }

   puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
   if (puVar5 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   lVar8 = 0;
   *puVar5 = 1;
   puVar5[1] = lVar1;
   plVar6 = puVar5 + 2;
   if (lVar1 != 0) {
      do {
         lVar2 = *(long*)this;
         *plVar6 = 0;
         lVar2 = *(long*)( lVar2 + lVar8 * 8 );
         if (lVar2 != 0) {
            *plVar6 = lVar2;
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
               *plVar6 = 0;
            }

         }

         lVar8 = lVar8 + 1;
         plVar6 = plVar6 + 1;
      }
 while ( lVar1 != lVar8 );
   }

   _unref(this);
   *(undefined8**)this = puVar5 + 2;
   return;
}
/* SkinTool::_map_skin_joints_indices_to_skeleton_bone_indices(Vector<Ref<GLTFSkin> >&,
   Vector<Ref<GLTFSkeleton> >&, Vector<Ref<GLTFNode> >&) */undefined8 SkinTool::_map_skin_joints_indices_to_skeleton_bone_indices(Vector *param_1, Vector *param_2, Vector *param_3) {
   String *pSVar1;
   code *pcVar2;
   char cVar3;
   int iVar4;
   long lVar5;
   undefined8 uVar6;
   long lVar7;
   Object *pOVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   long in_FS_OFFSET;
   int local_68;
   int local_64;
   long local_60;
   long local_58;
   Object *local_50;
   CowData<char32_t> local_48[8];
   long local_40;
   lVar11 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar10 = *(long*)( param_1 + 8 );
   do {
      if (( lVar10 == 0 ) || ( *(long*)( lVar10 + -8 ) <= lVar11 )) {
         uVar6 = 0;
         LAB_00103d7a:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return uVar6;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      CowData<Ref<GLTFSkin>>::_copy_on_write((CowData<Ref<GLTFSkin>>*)( param_1 + 8 ));
      lVar10 = *(long*)( *(long*)( param_1 + 8 ) + lVar11 * 8 );
      if (( lVar10 != 0 ) && ( local_60 = lVar10 ),cVar3 = RefCounted::reference(),cVar3 != '\0') {
         lVar7 = (long)*(int*)( lVar10 + 0x298 );
         lVar5 = *(long*)( param_2 + 8 );
         if (lVar7 < 0) {
            LAB_00103cd8:if (lVar5 != 0) {
               LAB_00103ce1:lVar10 = *(long*)( lVar5 + -8 );
               goto LAB_00103ce5;
            }

         }
 else if (lVar5 != 0) {
            if (*(long*)( lVar5 + -8 ) <= lVar7) goto LAB_00103ce1;
            local_58 = 0;
            lVar5 = *(long*)( lVar5 + lVar7 * 8 );
            if (( lVar5 != 0 ) && ( local_58 = lVar5 ),cVar3 = RefCounted::reference(),cVar3 == '\0') {
               local_58 = 0;
            }

            lVar5 = *(long*)( lVar10 + 0x250 );
            local_68 = 0;
            for (lVar9 = 0; ( lVar5 != 0 && ( lVar9 < *(long*)( lVar5 + -8 ) ) ); lVar9 = lVar9 + 1) {
               lVar7 = (long)*(int*)( lVar5 + lVar9 * 4 );
               lVar5 = *(long*)( param_3 + 8 );
               if (lVar7 < 0) goto LAB_00103cd8;
               if (lVar5 == 0) goto LAB_00103da0;
               if (*(long*)( lVar5 + -8 ) <= lVar7) goto LAB_00103ce1;
               pOVar8 = *(Object**)( lVar5 + lVar7 * 8 );
               if (( pOVar8 == (Object*)0x0 ) || ( local_50 = pOVar8 ),cVar3 = RefCounted::reference(),cVar3 == '\0') {
                  local_50 = (Object*)0x0;
                  pOVar8 = (Object*)0x0;
               }

               pSVar1 = *(String**)( local_58 + 0x260 );
               Resource::get_name();
               iVar4 = Skeleton3D::find_bone(pSVar1);
               local_64 = iVar4;
               CowData<char32_t>::_unref(local_48);
               if (iVar4 < 0) {
                  _err_print_error("_map_skin_joints_indices_to_skeleton_bone_indices", "modules/gltf/skin_tool.cpp", 0x280, "Condition \"bone_index < 0\" is true. Returning: FAILED", 0, 0);
                  Ref<GLTFNode>::unref((Ref<GLTFNode>*)&local_50);
                  Ref<GLTFSkeleton>::unref((Ref<GLTFSkeleton>*)&local_58);
                  Ref<GLTFSkin>::unref((Ref<GLTFSkin>*)&local_60);
                  uVar6 = 1;
                  goto LAB_00103d7a;
               }

               HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>::insert((int*)local_48, (int*)( lVar10 + 0x2a0 ), SUB81(&local_68, 0));
               if (( ( pOVar8 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar8 + 0x140 ))(pOVar8);
               Memory::free_static(pOVar8, false);
            }

            local_68 = (int)lVar9 + 1;
            lVar5 = *(long*)( lVar10 + 0x250 );
         }

         Ref<GLTFSkeleton>::unref((Ref<GLTFSkeleton>*)&local_58);
         Ref<GLTFSkin>::unref((Ref<GLTFSkin>*)&local_60);
         goto LAB_00103d60;
      }

      LAB_00103da0:lVar10 = 0;
      LAB_00103ce5:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar10, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }
 while ( true );
}
/* SkinTool::_remove_duplicate_skins(Vector<Ref<GLTFSkin> >&) */void SkinTool::_remove_duplicate_skins(Vector *param_1) {
   code *pcVar1;
   char cVar2;
   char cVar3;
   long lVar4;
   long lVar5;
   Object *pOVar6;
   Object *pOVar7;
   long lVar8;
   long lVar9;
   long in_FS_OFFSET;
   long local_68;
   Object *local_58;
   Object *local_50;
   Object *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar4 = *(long*)( param_1 + 8 );
   if (lVar4 != 0) {
      local_68 = 0;
      while (( local_68 < *(long*)( lVar4 + -8 ) && ( lVar4 != 0 ) )) {
         lVar9 = local_68 + 1;
         while (lVar8 = *(long*)( lVar4 + -8 ),lVar9 < lVar8) {
            lVar5 = local_68;
            if (lVar8 <= local_68) {
               LAB_001041e8:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar5, lVar8, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }

            local_58 = (Object*)0x0;
            pOVar6 = *(Object**)( *(long*)( lVar4 + local_68 * 8 ) + 0x300 );
            if (pOVar6 != (Object*)0x0) {
               cVar2 = RefCounted::reference();
               if (cVar2 == '\0') {
                  pOVar6 = (Object*)0x0;
               }

               lVar4 = *(long*)( param_1 + 8 );
               local_58 = pOVar6;
            }

            lVar5 = lVar9;
            if (lVar4 == 0) {
               lVar8 = 0;
               goto LAB_001041e8;
            }

            lVar8 = *(long*)( lVar4 + -8 );
            if (lVar8 <= lVar9) goto LAB_001041e8;
            pOVar6 = *(Object**)( *(long*)( lVar4 + lVar9 * 8 ) + 0x300 );
            if (( pOVar6 == (Object*)0x0 ) || ( cVar2 = RefCounted::reference() ),cVar2 == '\0') {
               pOVar7 = (Object*)0x0;
               LAB_00103f67:local_48 = (Object*)0x0;
               pOVar6 = (Object*)0x0;
            }
 else {
               local_48 = pOVar6;
               cVar2 = RefCounted::reference();
               pOVar7 = pOVar6;
               if (cVar2 == '\0') goto LAB_00103f67;
            }

            if (local_58 == (Object*)0x0) {
               LAB_00103f9d:local_50 = (Object*)0x0;
               cVar2 = _skins_are_same(&local_50);
            }
 else {
               local_50 = local_58;
               cVar2 = RefCounted::reference();
               if (cVar2 == '\0') goto LAB_00103f9d;
               cVar2 = _skins_are_same(&local_50);
               cVar3 = RefCounted::unreference();
               if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler(local_58) ),cVar3 != '\0') {
                  ( **(code**)( *(long*)local_58 + 0x140 ) )(local_58);
                  Memory::free_static(local_58, false);
               }

            }

            if (( ( pOVar6 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar6 + 0x140 ))(pOVar6);
            Memory::free_static(pOVar6, false);
         }
;
         if (cVar2 != '\0') {
            if (*(long*)( param_1 + 8 ) == 0) {
               lVar4 = 0;
               LAB_0010427b:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar9, lVar4, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }

            lVar4 = *(long*)( *(long*)( param_1 + 8 ) + -8 );
            if (lVar4 <= lVar9) goto LAB_0010427b;
            CowData<Ref<GLTFSkin>>::_copy_on_write((CowData<Ref<GLTFSkin>>*)( param_1 + 8 ));
            lVar4 = *(long*)( *(long*)( param_1 + 8 ) + lVar9 * 8 );
            pOVar6 = *(Object**)( lVar4 + 0x300 );
            if (local_58 != pOVar6) {
               *(Object**)( lVar4 + 0x300 ) = local_58;
               if (( local_58 != (Object*)0x0 ) && ( cVar2 = RefCounted::reference() ),cVar2 == '\0') {
                  *(undefined8*)( lVar4 + 0x300 ) = 0;
               }

               if (( ( pOVar6 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar6 + 0x140 ))(pOVar6);
               Memory::free_static(pOVar6, false);
            }

         }

      }
;
      if (( ( pOVar7 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar7 + 0x140 ))(pOVar7);
      Memory::free_static(pOVar7, false);
   }

   if (( ( local_58 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)local_58 + 0x140 ))(local_58);
   Memory::free_static(local_58, false);
}
lVar4 = *(long*)( param_1 + 8 );lVar9 = lVar9 + 1;if (lVar4 == 0) goto LAB_0010407b;}local_68 = local_68 + 1;if (lVar4 == 0) break;}
  }LAB_0010407b:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* SkinTool::_create_skins(Vector<Ref<GLTFSkin> >&, Vector<Ref<GLTFNode> >&, bool, HashSet<String,
   HashMapHasherDefault, HashMapComparatorDefault<String> >&) */undefined8 SkinTool::_create_skins(Vector *param_1, Vector *param_2, bool param_3, HashSet *param_4) {
   String *pSVar1;
   code *pcVar2;
   Ref *pRVar3;
   char cVar4;
   long lVar5;
   Skin *this;
   undefined1(*pauVar6)[16];
   uint *puVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   int iVar11;
   long lVar12;
   long in_FS_OFFSET;
   int local_94;
   String *local_90;
   Ref *local_88;
   long local_80;
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined4 local_58;
   undefined4 uStack_54;
   undefined4 uStack_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar5 = *(long*)( param_1 + 8 );
   for (lVar10 = 0; ( lVar5 != 0 && ( lVar10 < *(long*)( lVar5 + -8 ) ) ); lVar10 = lVar10 + 1) {
      CowData<Ref<GLTFSkin>>::_copy_on_write((CowData<Ref<GLTFSkin>>*)( param_1 + 8 ));
      pSVar1 = *(String**)( *(long*)( param_1 + 8 ) + lVar10 * 8 );
      if (( pSVar1 == (String*)0x0 ) || ( local_90 = pSVar1 ),cVar4 = RefCounted::reference(),cVar4 == '\0') {
         local_90 = (String*)0x0;
         _err_print_error("_create_skins", "modules/gltf/skin_tool.cpp", 0x28c, "Condition \"gltf_skin.is_null()\" is true. Continuing.", 0, 0);
         Ref<GLTFSkin>::unref((Ref<GLTFSkin>*)&local_90);
      }
 else {
         local_88 = (Ref*)0x0;
         this(Skin * operator_new(0x260, ""));
         Skin::Skin(this);
         postinitialize_handler((Object*)this);
         cVar4 = RefCounted::init_ref();
         if (cVar4 != '\0') {
            local_88 = (Ref*)this;
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
               local_88 = (Ref*)0x0;
               cVar4 = RefCounted::unreference();
            }
 else {
               cVar4 = RefCounted::unreference();
            }

            if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler((Object*)this) ),cVar4 != '\0') {
               ( **(code**)( *(long*)this + 0x140 ) )(this);
               Memory::free_static(this, false);
            }

         }

         lVar5 = *(long*)( pSVar1 + 0x260 );
         local_94 = 0;
         lVar9 = *(long*)( pSVar1 + 0x250 );
         for (lVar12 = 0; ( lVar9 != 0 && ( lVar12 < *(long*)( lVar9 + -8 ) ) ); lVar12 = lVar12 + 1) {
            lVar8 = (long)*(int*)( lVar9 + lVar12 * 4 );
            lVar9 = *(long*)( param_2 + 8 );
            if (lVar8 < 0) {
               if (lVar9 != 0) {
                  LAB_0010471d:lVar9 = *(long*)( lVar9 + -8 );
                  lVar12 = lVar8;
                  goto LAB_0010473c;
               }

               LAB_00104760:lVar9 = 0;
               lVar12 = lVar8;
               LAB_0010473c:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar12, lVar9, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            if (lVar9 == 0) goto LAB_00104760;
            if (*(long*)( lVar9 + -8 ) <= lVar8) goto LAB_0010471d;
            Resource::get_name();
            pRVar3 = local_88;
            local_58 = 0x3f800000;
            uStack_54 = 0;
            uStack_50 = 0;
            uStack_4c = 0;
            local_78 = ZEXT416(_LC17);
            local_68 = ZEXT416(_LC17);
            if (lVar5 != 0) {
               lVar8 = *(long*)( pSVar1 + 0x260 );
               if (lVar8 == 0) {
                  lVar9 = 0;
                  goto LAB_0010473c;
               }

               lVar9 = *(long*)( lVar8 + -8 );
               if (lVar9 <= lVar12) goto LAB_0010473c;
               pauVar6 = (undefined1(*) [16])( lVar8 + lVar12 * 0x30 );
               local_78 = *pauVar6;
               local_68 = pauVar6[1];
               local_58 = ( undefined4 ) * (undefined8*)pauVar6[2];
               uStack_54 = ( undefined4 )(( ulong ) * (undefined8*)pauVar6[2] >> 0x20);
               uStack_50 = ( undefined4 ) * (undefined8*)( pauVar6[2] + 8 );
               uStack_4c = ( undefined4 )(( ulong ) * (undefined8*)( pauVar6[2] + 8 ) >> 0x20);
            }

            if (param_3) {
               Skin::add_named_bind((String*)local_88, (Transform3D*)&local_80);
            }
 else {
               puVar7 = (uint*)HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>::operator []((HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>*)( pSVar1 + 0x2a0 ), &local_94);
               Skin::add_bind((int)pRVar3, (Transform3D*)( ulong ) * puVar7);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
            local_94 = (int)lVar12 + 1;
            lVar9 = *(long*)( pSVar1 + 0x250 );
         }

         Ref<Skin>::operator =((Ref<Skin>*)( pSVar1 + 0x300 ), local_88);
         Ref<Skin>::unref((Ref<Skin>*)&local_88);
         Ref<GLTFSkin>::unref((Ref<GLTFSkin>*)&local_90);
      }

      lVar5 = *(long*)( param_1 + 8 );
   }

   _remove_duplicate_skins(param_1);
   lVar5 = *(long*)( param_1 + 8 );
   if (lVar5 != 0) {
      lVar10 = 0;
      do {
         if (*(long*)( lVar5 + -8 ) <= lVar10) break;
         local_80 = 0;
         Ref<GLTFSkin>::operator =((Ref<GLTFSkin>*)&local_80, *(Ref**)( lVar5 + lVar10 * 8 ));
         lVar5 = local_80;
         Ref<GLTFSkin>::unref((Ref<GLTFSkin>*)&local_80);
         if (lVar5 == 0) {
            _err_print_error("_create_skins", "modules/gltf/skin_tool.cpp", 0x2ad, "Condition \"skins.get(skin_i).is_null()\" is true. Continuing.", 0, 0);
         }
 else {
            if (*(long*)( param_1 + 8 ) == 0) {
               lVar5 = 0;
               LAB_001047e3:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar10, lVar5, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            lVar5 = *(long*)( *(long*)( param_1 + 8 ) + -8 );
            if (lVar5 <= lVar10) goto LAB_001047e3;
            CowData<Ref<GLTFSkin>>::_copy_on_write((CowData<Ref<GLTFSkin>>*)( param_1 + 8 ));
            local_90 = (String*)0x0;
            Ref<Skin>::operator =((Ref<Skin>*)&local_90, *(Ref**)( *(long*)( *(long*)( param_1 + 8 ) + lVar10 * 8 ) + 0x300 ));
            pSVar1 = local_90;
            if (local_90 == (String*)0x0) {
               _err_print_error("_create_skins", "modules/gltf/skin_tool.cpp", 0x2af, "Condition \"skin.is_null()\" is true. Continuing.", 0, 0);
               Ref<Skin>::unref((Ref<Skin>*)&local_90);
               goto LAB_001043c7;
            }

            Resource::get_name();
            if (( local_80 == 0 ) || ( iVar11 = iVar11 == 0 )) {
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
               LAB_00104495:local_88 = (Ref*)0x0;
               String::parse_latin1((String*)&local_88, "Skin");
               _gen_unique_name((HashSet*)&local_80, (String*)param_4);
               Resource::set_name(pSVar1);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            }
 else {
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
               if (iVar11 == 1) goto LAB_00104495;
            }

            Ref<Skin>::unref((Ref<Skin>*)&local_90);
         }

         LAB_001043c7:lVar5 = *(long*)( param_1 + 8 );
         lVar10 = lVar10 + 1;
      }
 while ( lVar5 != 0 );
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Vector<Ref<GLTFSkin> >::push_back(Ref<GLTFSkin>) [clone .isra.0] */void Vector<Ref<GLTFSkin>>::push_back(Vector<Ref<GLTFSkin>> *this, long *param_2) {
   long *plVar1;
   Object *pOVar2;
   Object *pOVar3;
   char cVar4;
   int iVar5;
   long lVar6;
   long lVar7;
   if (*(long*)( this + 8 ) == 0) {
      lVar6 = 1;
   }
 else {
      lVar6 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar5 = CowData<Ref<GLTFSkin>>::resize<false>((CowData<Ref<GLTFSkin>>*)( this + 8 ), lVar6);
   if (iVar5 != 0) {
      _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
      return;
   }

   if (*(long*)( this + 8 ) == 0) {
      lVar7 = -1;
      lVar6 = 0;
   }
 else {
      lVar6 = *(long*)( *(long*)( this + 8 ) + -8 );
      lVar7 = lVar6 + -1;
      if (-1 < lVar7) {
         CowData<Ref<GLTFSkin>>::_copy_on_write((CowData<Ref<GLTFSkin>>*)( this + 8 ));
         pOVar2 = (Object*)*param_2;
         plVar1 = (long*)( *(long*)( this + 8 ) + lVar7 * 8 );
         pOVar3 = (Object*)*plVar1;
         if (pOVar2 == pOVar3) {
            return;
         }

         *plVar1 = (long)pOVar2;
         if (( pOVar2 != (Object*)0x0 ) && ( cVar4 = RefCounted::reference() ),cVar4 == '\0') {
            *plVar1 = 0;
         }

         if (pOVar3 == (Object*)0x0) {
            return;
         }

         cVar4 = RefCounted::unreference();
         if (cVar4 == '\0') {
            return;
         }

         cVar4 = predelete_handler(pOVar3);
         if (cVar4 == '\0') {
            return;
         }

         ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
         Memory::free_static(pOVar3, false);
         return;
      }

   }

   _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar7, lVar6, "p_index", "size()", "", false, false);
   return;
}
/* SkinTool::_asset_parse_skins(Vector<int> const&, Vector<Ref<GLTFSkin> > const&,
   Vector<Ref<GLTFNode> > const&, Vector<int>&, Vector<Ref<GLTFSkin> >&, HashMap<int, bool,
   HashMapHasherDefault, HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int,
   bool> > >&) */undefined8 SkinTool::_asset_parse_skins(Vector *param_1, Vector *param_2, Vector *param_3, Vector *param_4, Vector *param_5, HashMap *param_6) {
   uint uVar1;
   int iVar2;
   code *pcVar3;
   char cVar4;
   undefined1 *puVar5;
   long lVar6;
   long lVar7;
   Object *pOVar8;
   long lVar9;
   long lVar10;
   long in_FS_OFFSET;
   int local_5c;
   Object *local_58;
   long local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   CowData<int>::resize<false>((CowData<int>*)( param_4 + 8 ), 0);
   if (( *(long*)( param_5 + 8 ) != 0 ) && ( *(long*)( *(long*)( param_5 + 8 ) + -8 ) != 0 )) {
      CowData<Ref<GLTFSkin>>::_unref((CowData<Ref<GLTFSkin>>*)( param_5 + 8 ));
   }

   if (( *(long*)( param_6 + 8 ) != 0 ) && ( *(int*)( param_6 + 0x2c ) != 0 )) {
      lVar7 = 0;
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_6 + 0x28 ) * 4 );
      if (uVar1 != 0) {
         do {
            if (*(int*)( *(long*)( param_6 + 0x10 ) + lVar7 ) != 0) {
               *(int*)( *(long*)( param_6 + 0x10 ) + lVar7 ) = 0;
               Memory::free_static(*(void**)( *(long*)( param_6 + 8 ) + lVar7 * 2 ), false);
               *(undefined8*)( *(long*)( param_6 + 8 ) + lVar7 * 2 ) = 0;
            }

            lVar7 = lVar7 + 4;
         }
 while ( (ulong)uVar1 << 2 != lVar7 );
      }

      *(undefined4*)( param_6 + 0x2c ) = 0;
      *(undefined1(*) [16])( param_6 + 0x18 ) = (undefined1[16])0x0;
   }

   lVar9 = 0;
   lVar7 = *(long*)( param_1 + 8 );
   do {
      if (( lVar7 == 0 ) || ( *(long*)( lVar7 + -8 ) <= lVar9 )) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return 0;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      iVar2 = *(int*)( lVar7 + lVar9 * 4 );
      if (-1 < iVar2) {
         lVar10 = (long)iVar2;
         if (( *(long*)( param_2 + 8 ) != 0 ) && ( lVar10 < *(long*)( *(long*)( param_2 + 8 ) + -8 ) )) {
            Vector<int>::push_back((Vector<int>*)param_4, iVar2);
            lVar7 = *(long*)( param_2 + 8 );
            if (lVar7 != 0) {
               lVar6 = *(long*)( lVar7 + -8 );
               if (lVar6 <= lVar10) goto LAB_00104b73;
               pOVar8 = *(Object**)( lVar7 + lVar10 * 8 );
               if (( pOVar8 == (Object*)0x0 ) || ( local_58 = pOVar8 ),cVar4 = RefCounted::reference(),cVar4 == '\0') {
                  local_58 = (Object*)0x0;
                  Vector<Ref<GLTFSkin>>::push_back((Vector<Ref<GLTFSkin>>*)param_5, &local_58);
                  lVar7 = *(long*)( param_2 + 8 );
               }
 else {
                  Vector<Ref<GLTFSkin>>::push_back((Vector<Ref<GLTFSkin>>*)param_5);
                  cVar4 = RefCounted::unreference();
                  if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler(pOVar8) ),cVar4 != '\0') {
                     ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
                     Memory::free_static(pOVar8, false);
                  }

                  lVar7 = *(long*)( param_2 + 8 );
               }

               if (lVar7 != 0) {
                  lVar6 = *(long*)( lVar7 + -8 );
                  if (lVar6 <= lVar10) goto LAB_00104b73;
                  pOVar8 = *(Object**)( lVar7 + lVar10 * 8 );
                  if (( pOVar8 != (Object*)0x0 ) && ( cVar4 = RefCounted::reference() ),cVar4 == '\0') {
                     pOVar8 = (Object*)0x0;
                  }

                  GLTFSkin::get_joints();
                  for (lVar7 = 0; ( local_50[0] != 0 && ( lVar7 < *(long*)( local_50[0] + -8 ) ) ); lVar7 = lVar7 + 1) {
                     local_5c = *(int*)( local_50[0] + lVar7 * 4 );
                     puVar5 = (undefined1*)HashMap<int,bool,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,bool>>>::operator []((HashMap<int,bool,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,bool>>>*)param_6, &local_5c);
                     *puVar5 = 1;
                  }

                  CowData<int>::_unref((CowData<int>*)local_50);
                  cVar4 = RefCounted::unreference();
                  if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler(pOVar8) ),cVar4 != '\0') {
                     ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
                     Memory::free_static(pOVar8, false);
                  }

                  lVar7 = *(long*)( param_1 + 8 );
                  goto LAB_00104ac8;
               }

            }

            lVar6 = 0;
            LAB_00104b73:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar6, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

      }

      LAB_00104ac8:lVar9 = lVar9 + 1;
   }
 while ( true );
}
/* CowData<Ref<GLTFSkeleton> >::_copy_on_write() [clone .isra.0] */void CowData<Ref<GLTFSkeleton>>::_copy_on_write(CowData<Ref<GLTFSkeleton>> *this) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   char cVar4;
   undefined8 *puVar5;
   long *plVar6;
   ulong uVar7;
   long lVar8;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar7 = 0x10;
   if (lVar1 * 8 != 0) {
      uVar7 = lVar1 * 8 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
   }

   puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
   if (puVar5 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   lVar8 = 0;
   *puVar5 = 1;
   puVar5[1] = lVar1;
   plVar6 = puVar5 + 2;
   if (lVar1 != 0) {
      do {
         lVar2 = *(long*)this;
         *plVar6 = 0;
         lVar2 = *(long*)( lVar2 + lVar8 * 8 );
         if (lVar2 != 0) {
            *plVar6 = lVar2;
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
               *plVar6 = 0;
            }

         }

         lVar8 = lVar8 + 1;
         plVar6 = plVar6 + 1;
      }
 while ( lVar1 != lVar8 );
   }

   _unref(this);
   *(undefined8**)this = puVar5 + 2;
   return;
}
/* SkinTool::_create_skeletons(HashSet<String, HashMapHasherDefault,
   HashMapComparatorDefault<String> >&, Vector<Ref<GLTFSkin> >&, Vector<Ref<GLTFNode> >&,
   HashMap<ObjectID, int, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, int> > >&, Vector<Ref<GLTFSkeleton> >&,
   HashMap<int, Node*, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Node*> > >&) */undefined8 SkinTool::_create_skeletons(HashSet *param_1, Vector *param_2, Vector *param_3, HashMap *param_4, Vector *param_5, HashMap *param_6) {
   undefined1(*pauVar1)[16];
   undefined4 uVar2;
   void *pvVar3;
   code *pcVar4;
   char cVar5;
   int iVar6;
   Skeleton3D *this;
   int *piVar7;
   undefined1(*pauVar8)[16];
   undefined4 *puVar9;
   undefined8 uVar10;
   long lVar11;
   int *piVar12;
   ulong uVar13;
   Object *pOVar14;
   int iVar15;
   long lVar16;
   int iVar17;
   uint uVar18;
   undefined4 *puVar19;
   String *pSVar20;
   long lVar21;
   long in_FS_OFFSET;
   undefined1 auVar22[12];
   long local_168;
   int local_ec;
   Object *local_e8;
   undefined1(*local_e0)[16];
   String *local_d8;
   Skeleton3D *local_d0;
   char *local_c8;
   int *local_c0;
   undefined8 local_b8;
   undefined1 local_b0[16];
   undefined1 local_98[2][12];
   Variant local_78[56];
   long local_40;
   lVar21 = *(long*)( param_5 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_168 = 0;
   if (lVar21 != 0) {
      LAB_00104eb1:if (local_168 < *(long*)( lVar21 + -8 )) {
         CowData<Ref<GLTFSkeleton>>::_copy_on_write((CowData<Ref<GLTFSkeleton>>*)( param_5 + 8 ));
         pOVar14 = *(Object**)( *(long*)( param_5 + 8 ) + local_168 * 8 );
         if (pOVar14 == (Object*)0x0) {
            LAB_00104f0d:local_e8 = (Object*)0x0;
            pOVar14 = (Object*)0x0;
         }
 else {
            local_e8 = pOVar14;
            cVar5 = RefCounted::reference();
            if (cVar5 == '\0') goto LAB_00104f0d;
         }

         this(Skeleton3D * operator_new(0x600, ""));
         Skeleton3D::Skeleton3D(this);
         postinitialize_handler((Object*)this);
         *(Skeleton3D**)( pOVar14 + 0x260 ) = this;
         local_c8 = *(char**)( this + 0x60 );
         piVar7 = (int*)HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>::operator []((HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>*)param_4, (ObjectID*)&local_c8);
         iVar15 = (int)local_168;
         *piVar7 = iVar15;
         local_c8 = "Skeleton3D";
         local_d0 = (Skeleton3D*)0x0;
         local_c0 = (int*)0xa;
         String::parse_latin1((StrRange*)&local_d0);
         Node::set_name((String*)this);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
         puVar19 = *(undefined4**)( pOVar14 + 600 );
         local_e0 = (undefined1(*) [16])0x0;
         if (( puVar19 == (undefined4*)0x0 ) || ( *(long*)( puVar19 + -2 ) < 1 )) {
            List<int,DefaultAllocator>::sort_custom<Comparator<int>>((List<int,DefaultAllocator>*)&local_e0);
         }
 else {
            lVar21 = 0;
            pauVar8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined4*)pauVar8[1] = 0;
            *pauVar8 = (undefined1[16])0x0;
            local_e0 = pauVar8;
            while (true) {
               puVar9 = (undefined4*)operator_new(0x20, DefaultAllocator::alloc);
               uVar2 = *puVar19;
               *(undefined8*)( puVar9 + 2 ) = 0;
               *puVar9 = uVar2;
               lVar11 = *(long*)( *pauVar8 + 8 );
               *(undefined1(**) [16])( puVar9 + 6 ) = pauVar8;
               *(long*)( puVar9 + 4 ) = lVar11;
               if (lVar11 != 0) {
                  *(undefined4**)( lVar11 + 8 ) = puVar9;
               }

               lVar11 = *(long*)*pauVar8;
               *(undefined4**)( *pauVar8 + 8 ) = puVar9;
               if (lVar11 == 0) {
                  *(undefined4**)*pauVar8 = puVar9;
               }

               lVar11 = *(long*)( pOVar14 + 600 );
               *(int*)pauVar8[1] = *(int*)pauVar8[1] + 1;
               lVar21 = lVar21 + 1;
               if (( lVar11 == 0 ) || ( *(long*)( lVar11 + -8 ) <= lVar21 )) break;
               puVar19 = (undefined4*)( lVar11 + lVar21 * 4 );
            }
;
            List<int,DefaultAllocator>::sort_custom<Comparator<int>>((List<int,DefaultAllocator>*)&local_e0);
            do {
               pauVar1 = local_e0;
               if (*(int*)pauVar8[1] == 0) {
                  if (local_e0 != (undefined1(*) [16])0x0) goto LAB_0010509a;
                  break;
               }

               piVar7 = *(int**)*pauVar8;
               iVar17 = *piVar7;
               local_ec = iVar17;
               if (pauVar8 == *(undefined1(**) [16])( piVar7 + 6 )) {
                  lVar21 = *(long*)( piVar7 + 2 );
                  lVar11 = *(long*)( piVar7 + 4 );
                  *(long*)*pauVar8 = lVar21;
                  if (piVar7 == *(int**)( *pauVar8 + 8 )) {
                     *(long*)( *pauVar8 + 8 ) = lVar11;
                  }

                  if (lVar11 != 0) {
                     *(long*)( lVar11 + 8 ) = lVar21;
                     lVar21 = *(long*)( piVar7 + 2 );
                  }

                  if (lVar21 != 0) {
                     *(long*)( lVar21 + 0x10 ) = lVar11;
                  }

                  Memory::free_static(piVar7, false);
                  iVar6 = *(int*)pauVar8[1] + -1;
                  *(int*)pauVar8[1] = iVar6;
               }
 else {
                  _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                  iVar6 = *(int*)pauVar8[1];
               }

               if (iVar6 == 0) {
                  Memory::free_static(pauVar8, false);
                  local_e0 = (undefined1(*) [16])0x0;
               }

               uVar13 = (ulong)iVar17;
               lVar21 = *(long*)( param_3 + 8 );
               if ((long)uVar13 < 0) {
                  LAB_00105468:if (lVar21 != 0) {
                     LAB_0010546d:lVar21 = *(long*)( lVar21 + -8 );
                     goto LAB_0010548c;
                  }

                  LAB_001054d0:lVar21 = 0;
                  LAB_0010548c:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar13, lVar21, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar4 = (code*)invalidInstructionException();
                  ( *pcVar4 )();
               }

               if (lVar21 == 0) goto LAB_001054d0;
               if (*(long*)( lVar21 + -8 ) <= (long)uVar13) goto LAB_0010546d;
               pSVar20 = *(String**)( lVar21 + uVar13 * 8 );
               if (pSVar20 == (String*)0x0) {
                  LAB_00105297:local_d8 = (String*)0x0;
                  pSVar20 = (String*)0x0;
               }
 else {
                  local_d8 = pSVar20;
                  cVar5 = RefCounted::reference();
                  if (cVar5 == '\0') goto LAB_00105297;
               }

               if (*(int*)( pSVar20 + 0x28c ) != iVar15) {
                  _err_print_error("_create_skeletons", "modules/gltf/skin_tool.cpp", 0x23c, "Condition \"node->skeleton != skel_i\" is true. Returning: FAILED", 0, 0);
                  LAB_00105525:Ref<GLTFNode>::unref((Ref<GLTFNode>*)&local_d8);
                  pauVar8 = local_e0;
                  if (local_e0 == (undefined1(*) [16])0x0) goto LAB_00105597;
                  goto LAB_0010553f;
               }

               local_c0 = (int*)0x0;
               lVar11 = *(long*)( pSVar20 + 0x2a0 );
               if (lVar11 != 0) {
                  lVar16 = 0;
                  do {
                     if (*(long*)( lVar11 + -8 ) <= lVar16) break;
                     iVar17 = *(int*)( lVar11 + lVar16 * 4 );
                     uVar13 = (ulong)iVar17;
                     lVar21 = *(long*)( param_3 + 8 );
                     if ((long)uVar13 < 0) goto LAB_00105468;
                     if (lVar21 == 0) goto LAB_001054d0;
                     if (*(long*)( lVar21 + -8 ) <= (long)uVar13) goto LAB_0010546d;
                     if (*(int*)( *(long*)( lVar21 + uVar13 * 8 ) + 0x28c ) == iVar15) {
                        Vector<int>::push_back((Vector<int>*)&local_c8, iVar17);
                        lVar11 = *(long*)( pSVar20 + 0x2a0 );
                     }

                     lVar16 = lVar16 + 1;
                  }
 while ( lVar11 != 0 );
                  if (local_c0 != (int*)0x0) {
                     lVar21 = *(long*)( local_c0 + -2 );
                     if (lVar21 != 0) {
                        CowData<int>::_copy_on_write((CowData<int>*)&local_c0);
                        piVar7 = local_c0;
                        SortArray<int,_DefaultComparator<int>,true>::sort(local_c0, lVar21);
                        if (piVar7 != (int*)0x0) {
                           lVar21 = *(long*)( piVar7 + -2 );
                           uVar18 = (int)lVar21 - 1;
                           if (-1 < (int)uVar18) {
                              uVar13 = (ulong)uVar18;
                              while (true) {
                                 if (lVar21 <= (long)uVar13) goto LAB_0010548c;
                                 if (local_e0 == (undefined1(*) [16])0x0) {
                                    local_e0 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                                    *(undefined4*)local_e0[1] = 0;
                                    *local_e0 = (undefined1[16])0x0;
                                 }

                                 pauVar8 = local_e0;
                                 piVar12 = (int*)operator_new(0x20, DefaultAllocator::alloc);
                                 iVar17 = piVar7[uVar13];
                                 piVar12[4] = 0;
                                 piVar12[5] = 0;
                                 *piVar12 = iVar17;
                                 lVar21 = *(long*)*pauVar8;
                                 *(undefined1(**) [16])( piVar12 + 6 ) = pauVar8;
                                 *(long*)( piVar12 + 2 ) = lVar21;
                                 if (lVar21 != 0) {
                                    *(int**)( lVar21 + 0x10 ) = piVar12;
                                 }

                                 lVar21 = *(long*)( *pauVar8 + 8 );
                                 *(int**)*pauVar8 = piVar12;
                                 if (lVar21 == 0) {
                                    *(int**)( *pauVar8 + 8 ) = piVar12;
                                 }

                                 uVar13 = uVar13 - 1;
                                 *(int*)pauVar8[1] = *(int*)pauVar8[1] + 1;
                                 if ((int)uVar13 < 0) break;
                                 lVar21 = *(long*)( piVar7 + -2 );
                              }
;
                           }

                        }

                     }

                  }

               }

               CowData<int>::_unref((CowData<int>*)&local_c0);
               uVar18 = Skeleton3D::get_bone_count();
               Resource::get_name();
               if (( local_c8 == (char*)0x0 ) || ( uVar10 = *(undefined8*)( local_c8 + -8 ) ),(int)uVar10 == 0) {
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
                  LAB_001058f4:local_c8 = (char*)0x0;
                  String::parse_latin1((String*)&local_c8, "bone");
                  Resource::set_name(pSVar20);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
               }
 else {
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
                  if ((int)uVar10 == 1) goto LAB_001058f4;
               }

               Resource::get_name();
               _gen_unique_bone_name((SkinTool*)&local_c8, param_1, (String*)&local_d0);
               Resource::set_name(pSVar20);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
               Resource::get_name();
               Skeleton3D::add_bone((String*)this);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
               StringName::StringName((StringName*)&local_c8, "GODOT_rest_transform", false);
               GLTFNode::get_additional_data((StringName*)local_98);
               Variant::operator_cast_to_Transform3D(local_78);
               if (Variant::needs_deinit[(int)local_98[0]._0_4_] != '\0') {
                  Variant::_clear_internal();
               }

               if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
                  StringName::unref();
               }

               iVar17 = (int)this;
               Skeleton3D::set_bone_rest(iVar17, (Transform3D*)(ulong)uVar18);
               Skeleton3D::set_bone_pose_position(iVar17, (Vector3*)(ulong)uVar18);
               Basis::get_rotation_quaternion();
               Skeleton3D::set_bone_pose_rotation(iVar17, (Quaternion*)(ulong)uVar18);
               auVar22 = Basis::get_scale();
               local_98[0] = auVar22;
               Skeleton3D::set_bone_pose_scale(iVar17, (Vector3*)(ulong)uVar18);
               pcVar4 = *(code**)( *(long*)pSVar20 + 0xa0 );
               StringName::StringName((StringName*)&local_c8, "extras", false);
               cVar5 = ( *pcVar4 )(pSVar20, (ObjectID*)&local_c8);
               if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
                  StringName::unref();
               }

               if (cVar5 != '\0') {
                  pcVar4 = *(code**)( *(long*)pSVar20 + 0xb8 );
                  local_b0 = (undefined1[16])0x0;
                  local_b8 = 0;
                  StringName::StringName((StringName*)&local_d0, "extras", false);
                  ( *pcVar4 )((StringName*)local_98, pSVar20, (StrRange*)&local_d0, &local_b8);
                  StringName::StringName((StringName*)&local_c8, "extras", false);
                  Skeleton3D::set_bone_meta(iVar17, (StringName*)(ulong)uVar18, (Variant*)&local_c8);
                  if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  if (Variant::needs_deinit[(int)local_98[0]._0_4_] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( StringName::configured != '\0' ) && ( local_d0 != (Skeleton3D*)0x0 )) {
                     StringName::unref();
                  }

                  if (Variant::needs_deinit[(int)local_b8] != '\0') {
                     Variant::_clear_internal();
                  }

               }

               uVar13 = ( ulong ) * (int*)( pSVar20 + 0x248 );
               if (-1 < *(int*)( pSVar20 + 0x248 )) {
                  lVar11 = *(long*)( param_3 + 8 );
                  if (lVar11 == 0) goto LAB_001054d0;
                  lVar21 = *(long*)( lVar11 + -8 );
                  if (lVar21 <= (long)uVar13) goto LAB_0010548c;
                  if (*(int*)( *(long*)( lVar11 + uVar13 * 8 ) + 0x28c ) == iVar15) {
                     Resource::get_name();
                     iVar6 = Skeleton3D::find_bone((String*)this);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
                     if (iVar6 < 0) {
                        _err_print_error("_create_skeletons", "modules/gltf/skin_tool.cpp", 0x264, "Condition \"bone_parent < 0\" is true. Returning: FAILED", 0, 0);
                        goto LAB_00105525;
                     }

                     uVar13 = ( ulong ) * (int*)( pSVar20 + 0x248 );
                     lVar21 = *(long*)( param_3 + 8 );
                     if ((long)uVar13 < 0) goto LAB_00105468;
                     if (lVar21 == 0) goto LAB_001054d0;
                     if (*(long*)( lVar21 + -8 ) <= (long)uVar13) goto LAB_0010546d;
                     Resource::get_name();
                     Skeleton3D::find_bone((String*)this);
                     Skeleton3D::set_bone_parent(iVar17, uVar18);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
                  }

               }

               local_d0 = this;
               HashMap<int,Node*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Node*>>>::insert((int*)&local_c8, (Node**)param_6, SUB81(&local_ec, 0));
               Ref<GLTFNode>::unref((Ref<GLTFNode>*)&local_d8);
               pauVar8 = local_e0;
            }
 while ( local_e0 != (undefined1(*) [16])0x0 );
         }

         goto LAB_001050f4;
      }

   }

   LAB_00105125:uVar10 = _map_skin_joints_indices_to_skeleton_bone_indices(param_2, param_5, param_3);
   if ((int)uVar10 != 0) {
      _err_print_error("_create_skeletons", "modules/gltf/skin_tool.cpp", 0x26c, "Condition \"_map_skin_joints_indices_to_skeleton_bone_indices(skins, skeletons, nodes)\" is true. Returning: ERR_PARSE_ERROR", 0, 0);
      uVar10 = 0x2b;
   }

   goto LAB_0010513d;
   while (true) {
      if (pauVar1 == *(undefined1(**) [16])( (long)pvVar3 + 0x18 )) {
         lVar21 = *(long*)( (long)pvVar3 + 8 );
         lVar11 = *(long*)( (long)pvVar3 + 0x10 );
         *(long*)*pauVar1 = lVar21;
         if (pvVar3 == *(void**)( *pauVar1 + 8 )) {
            *(long*)( *pauVar1 + 8 ) = lVar11;
         }

         if (lVar11 != 0) {
            *(long*)( lVar11 + 8 ) = lVar21;
            lVar21 = *(long*)( (long)pvVar3 + 8 );
         }

         if (lVar21 != 0) {
            *(long*)( lVar21 + 0x10 ) = lVar11;
         }

         Memory::free_static(pvVar3, false);
         pauVar8 = pauVar1 + 1;
         *(int*)*pauVar8 = *(int*)*pauVar8 + -1;
         iVar15 = *(int*)*pauVar8;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         iVar15 = *(int*)pauVar1[1];
      }

      if (iVar15 == 0) break;
      LAB_0010509a:pvVar3 = *(void**)*pauVar1;
      if (pvVar3 == (void*)0x0) {
         if (*(int*)pauVar1[1] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            cVar5 = RefCounted::unreference();
            goto joined_r0x001051aa;
         }

         break;
      }

   }
;
   Memory::free_static(pauVar1, false);
   LAB_001050f4:cVar5 = RefCounted::unreference();
   joined_r0x001051aa:if (cVar5 != '\0') {
      cVar5 = predelete_handler(pOVar14);
      if (cVar5 != '\0') {
         ( **(code**)( *(long*)pOVar14 + 0x140 ) )(pOVar14);
         Memory::free_static(pOVar14, false);
      }

   }

   local_168 = local_168 + 1;
   lVar21 = *(long*)( param_5 + 8 );
   if (lVar21 == 0) goto LAB_00105125;
   goto LAB_00104eb1;
   while (true) {
      if (pauVar8 == *(undefined1(**) [16])( (long)pvVar3 + 0x18 )) {
         lVar21 = *(long*)( (long)pvVar3 + 8 );
         lVar11 = *(long*)( (long)pvVar3 + 0x10 );
         *(long*)*pauVar8 = lVar21;
         if (pvVar3 == *(void**)( *pauVar8 + 8 )) {
            *(long*)( *pauVar8 + 8 ) = lVar11;
         }

         if (lVar11 != 0) {
            *(long*)( lVar11 + 8 ) = lVar21;
            lVar21 = *(long*)( (long)pvVar3 + 8 );
         }

         if (lVar21 != 0) {
            *(long*)( lVar21 + 0x10 ) = lVar11;
         }

         Memory::free_static(pvVar3, false);
         pauVar1 = pauVar8 + 1;
         *(int*)*pauVar1 = *(int*)*pauVar1 + -1;
         iVar15 = *(int*)*pauVar1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         iVar15 = *(int*)pauVar8[1];
      }

      if (iVar15 == 0) break;
      LAB_0010553f:pvVar3 = *(void**)*pauVar8;
      if (pvVar3 == (void*)0x0) {
         if (*(int*)pauVar8[1] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            goto LAB_00105597;
         }

         break;
      }

   }
;
   Memory::free_static(pauVar8, false);
   LAB_00105597:Ref<GLTFSkeleton>::unref((Ref<GLTFSkeleton>*)&local_e8);
   uVar10 = 1;
   LAB_0010513d:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar10;
}
/* SkinTool::_determine_skeleton_roots(Vector<Ref<GLTFNode> >&, Vector<Ref<GLTFSkeleton> >&, int) */undefined8 SkinTool::_determine_skeleton_roots(Vector *param_1, Vector *param_2, int param_3) {
   long lVar1;
   ulong uVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   code *pcVar11;
   char cVar12;
   uint uVar13;
   int iVar14;
   long lVar15;
   ulong uVar16;
   long lVar17;
   uint uVar18;
   long lVar19;
   Object *pOVar20;
   long *plVar21;
   undefined8 uVar22;
   int *piVar23;
   uint uVar24;
   long lVar25;
   long lVar26;
   uint uVar27;
   uint uVar28;
   ulong uVar29;
   long in_FS_OFFSET;
   long local_b0;
   uint local_a8[2];
   long local_a0;
   uint *local_98;
   int *local_90;
   Vector local_88[8];
   undefined8 local_80;
   DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator> local_78[8];
   undefined1 local_70[16];
   undefined1 local_60[16];
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar19 = *(long*)( param_1 + 8 );
   local_70 = (undefined1[16])0x0;
   local_50 = 2;
   local_60 = (undefined1[16])0x0;
   if (lVar19 != 0) {
      lVar25 = 0;
      do {
         if (*(long*)( lVar19 + -8 ) <= lVar25) break;
         pOVar20 = *(Object**)( lVar19 + lVar25 * 8 );
         if (( pOVar20 != (Object*)0x0 ) && ( cVar12 = RefCounted::reference() ),cVar12 == '\0') {
            pOVar20 = (Object*)0x0;
         }

         if (*(int*)( pOVar20 + 0x28c ) == param_3) {
            uVar24 = (uint)lVar25;
            local_a8[0] = uVar24;
            if (( local_70._0_8_ != 0 ) && ( local_50._4_4_ != 0 )) {
               uVar29 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ));
               uVar2 = *(ulong*)( hash_table_size_primes_inv + ( local_50 & 0xffffffff ) * 8 );
               uVar13 = ( ( uint )((ulong)lVar25 >> 0x10) & 0xffff ^ uVar24 ) * -0x7a143595;
               uVar13 = ( uVar13 ^ uVar13 >> 0xd ) * -0x3d4d51cb;
               uVar28 = uVar13 ^ uVar13 >> 0x10;
               if (uVar13 == uVar13 >> 0x10) {
                  uVar28 = 1;
                  uVar16 = uVar2;
               }
 else {
                  uVar16 = uVar28 * uVar2;
               }

               auVar3._8_8_ = 0;
               auVar3._0_8_ = uVar29;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = uVar16;
               lVar19 = SUB168(auVar3 * auVar7, 8);
               uVar13 = *(uint*)( local_70._8_8_ + lVar19 * 4 );
               uVar18 = SUB164(auVar3 * auVar7, 8);
               if (uVar13 != 0) {
                  uVar27 = 0;
                  while (( uVar28 != uVar13 || ( *(uint*)( *(long*)( local_70._0_8_ + lVar19 * 8 ) + 0x10 ) != uVar24 ) )) {
                     uVar27 = uVar27 + 1;
                     auVar4._8_8_ = 0;
                     auVar4._0_8_ = ( uVar18 + 1 ) * uVar2;
                     auVar8._8_8_ = 0;
                     auVar8._0_8_ = uVar29;
                     lVar19 = SUB168(auVar4 * auVar8, 8);
                     uVar13 = *(uint*)( local_70._8_8_ + lVar19 * 4 );
                     uVar18 = SUB164(auVar4 * auVar8, 8);
                     if (( uVar13 == 0 ) || ( auVar5._8_8_ = 0 ),auVar5._0_8_ = uVar13 * uVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar29,auVar6._8_8_ = 0,auVar6._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ) + uVar18 ) - SUB164(auVar5 * auVar9, 8) ) * uVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar29,SUB164(auVar6 * auVar10, 8) < uVar27) goto LAB_00105e58;
                  }
;
                  if (*(long*)( local_70._0_8_ + (ulong)uVar18 * 8 ) != 0) goto LAB_00105dc3;
               }

            }

            LAB_00105e58:local_98 = (uint*)operator_new(0x18, DefaultAllocator::alloc);
            local_98[4] = 0;
            *local_98 = uVar24;
            *(uint**)( local_98 + 2 ) = local_98;
            HashMap<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*>>>::insert((int*)local_88, (Element**)local_78, SUB81(local_a8, 0));
            LAB_00105dc3:iVar14 = *(int*)( pOVar20 + 0x248 );
            if (iVar14 < 0) goto LAB_00105c68;
            lVar17 = (long)iVar14;
            lVar19 = *(long*)( param_1 + 8 );
            if (lVar19 == 0) goto LAB_00106061;
            lVar26 = *(long*)( lVar19 + -8 );
            if (lVar26 <= lVar17) goto LAB_0010607f;
            if (*(int*)( *(long*)( lVar19 + lVar17 * 8 ) + 0x28c ) != param_3) goto LAB_00105c68;
            DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::create_union(local_78, iVar14, uVar24);
            cVar12 = RefCounted::unreference();
         }
 else {
            LAB_00105c68:cVar12 = RefCounted::unreference();
         }

         if (( cVar12 != '\0' ) && ( cVar12 = predelete_handler(pOVar20) ),cVar12 != '\0') {
            ( **(code**)( *(long*)pOVar20 + 0x140 ) )(pOVar20);
            Memory::free_static(pOVar20, false);
         }

         lVar25 = lVar25 + 1;
         lVar19 = *(long*)( param_1 + 8 );
      }
 while ( lVar19 != 0 );
   }

   lVar25 = (long)param_3;
   lVar19 = *(long*)( param_2 + 8 );
   if (lVar25 < 0) {
      if (lVar19 != 0) {
         lVar19 = *(long*)( lVar19 + -8 );
         goto LAB_001061ac;
      }

   }
 else if (lVar19 != 0) {
      lVar19 = *(long*)( lVar19 + -8 );
      if (lVar19 <= lVar25) goto LAB_001061ac;
      CowData<Ref<GLTFSkeleton>>::_copy_on_write((CowData<Ref<GLTFSkeleton>>*)( param_2 + 8 ));
      local_b0 = 0;
      lVar19 = *(long*)( *(long*)( param_2 + 8 ) + lVar25 * 8 );
      if (( lVar19 != 0 ) && ( local_b0 = lVar19 ),cVar12 = RefCounted::reference(),cVar12 == '\0') {
         local_b0 = 0;
      }

      local_a0 = 0;
      plVar21 = (long*)local_60._0_8_;
      if ((long*)local_60._0_8_ == (long*)0x0) {
         local_90 = (int*)0x0;
         LAB_0010621d:if (*(long*)( local_b0 + 600 ) != 0) {
            CowData<int>::_ref((CowData<int>*)( local_b0 + 600 ), (CowData*)&local_90);
         }

      }
 else {
         do {
            while (piVar23 = (int*)plVar21[3],piVar23 == *(int**)( piVar23 + 2 )) {
               Vector<int>::push_back((Vector<int>*)local_a8, *piVar23);
               plVar21 = (long*)*plVar21;
               if (plVar21 == (long*)0x0) goto LAB_00105f58;
            }
;
            plVar21 = (long*)*plVar21;
         }
 while ( plVar21 != (long*)0x0 );
         LAB_00105f58:lVar19 = local_a0;
         local_90 = (int*)0x0;
         if (local_a0 == 0) goto LAB_0010621d;
         lVar25 = 0;
         while (piVar23 = local_90,lVar17 = local_b0,lVar25 < *(long*)( lVar19 + -8 )) {
            lVar17 = lVar25 * 4;
            local_80 = 0;
            lVar25 = lVar25 + 1;
            DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::get_members(local_78, local_88, *(int*)( lVar19 + lVar17 ));
            iVar14 = _find_highest_node(param_1, local_88);
            if (iVar14 < 0) {
               _err_print_error("_determine_skeleton_roots", "modules/gltf/skin_tool.cpp", 0x203, "Condition \"root < 0\" is true. Returning: FAILED", 0, 0);
               CowData<int>::_unref((CowData<int>*)&local_80);
               goto LAB_0010600d;
            }

            Vector<int>::push_back((Vector<int>*)&local_98, iVar14);
            CowData<int>::_unref((CowData<int>*)&local_80);
         }
;
         if (local_90 == (int*)0x0) goto LAB_0010621d;
         lVar19 = *(long*)( local_90 + -2 );
         if (lVar19 == 0) {
            if (*(int**)( local_b0 + 600 ) != local_90) {
               CowData<int>::_ref((CowData<int>*)( local_b0 + 600 ), (CowData*)&local_90);
               goto LAB_0010610e;
            }

         }
 else {
            CowData<int>::_copy_on_write((CowData<int>*)&local_90);
            piVar23 = local_90;
            SortArray<int,_DefaultComparator<int>,true>::sort(local_90, lVar19);
            if (*(int**)( lVar17 + 600 ) != piVar23) {
               CowData<int>::_ref((CowData<int>*)( lVar17 + 600 ), (CowData*)&local_90);
            }

            if (piVar23 != (int*)0x0) {
               LAB_0010610e:lVar19 = *(long*)( piVar23 + -2 );
               if (lVar19 != 0) {
                  if (lVar19 != 1) {
                     if (lVar19 < 1) {
                        lVar17 = 0;
                        lVar26 = lVar19;
                        goto LAB_0010607f;
                     }

                     lVar17 = (long)*piVar23;
                     lVar25 = *(long*)( param_1 + 8 );
                     if (lVar17 < 0) {
                        if (lVar25 != 0) {
                           lVar26 = *(long*)( lVar25 + -8 );
                           goto LAB_0010607f;
                        }

                     }
 else if (lVar25 != 0) {
                        lVar26 = *(long*)( lVar25 + -8 );
                        if (lVar26 <= lVar17) goto LAB_0010607f;
                        lVar1 = lVar17 * 8;
                        lVar15 = 1;
                        do {
                           lVar17 = (long)piVar23[lVar15];
                           if (( lVar17 < 0 ) || ( lVar26 <= lVar17 )) goto LAB_0010607f;
                           if (*(int*)( *(long*)( lVar25 + lVar17 * 8 ) + 0x248 ) != *(int*)( *(long*)( lVar25 + lVar1 ) + 0x248 )) goto LAB_0010600d;
                           lVar15 = lVar15 + 1;
                        }
 while ( lVar19 != lVar15 );
                        goto LAB_00106193;
                     }

                     LAB_00106061:lVar26 = 0;
                     LAB_0010607f:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar17, lVar26, "p_index", "size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar11 = (code*)invalidInstructionException();
                     ( *pcVar11 )();
                  }

                  LAB_00106193:uVar22 = 0;
                  goto LAB_00106012;
               }

            }

         }

      }

      LAB_0010600d:uVar22 = 1;
      LAB_00106012:CowData<int>::_unref((CowData<int>*)&local_90);
      CowData<int>::_unref((CowData<int>*)&local_a0);
      Ref<GLTFSkeleton>::unref((Ref<GLTFSkeleton>*)&local_b0);
      DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::~DisjointSet(local_78);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return uVar22;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   lVar19 = 0;
   LAB_001061ac:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar25, lVar19, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar11 = (code*)invalidInstructionException();
   ( *pcVar11 )();
}
/* SkinTool::_determine_skeletons(Vector<Ref<GLTFSkin> >&, Vector<Ref<GLTFNode> >&,
   Vector<Ref<GLTFSkeleton> >&, Vector<int> const&) */undefined8 SkinTool::_determine_skeletons(Vector *param_1, Vector *param_2, Vector *param_3, Vector *param_4) {
   CowData<Ref<GLTFSkeleton>> *this;
   int *piVar1;
   undefined8 *puVar2;
   uint uVar3;
   int iVar4;
   Object *pOVar5;
   code *pcVar6;
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   Ref *pRVar11;
   long lVar12;
   char cVar13;
   int iVar14;
   Resource *pRVar15;
   Resource *pRVar16;
   int *piVar17;
   long lVar18;
   long lVar19;
   long lVar20;
   Resource *pRVar21;
   undefined8 uVar22;
   long lVar23;
   ulong uVar24;
   CowData<int> *pCVar25;
   long lVar26;
   ulong uVar27;
   ulong uVar28;
   int iVar29;
   long in_FS_OFFSET;
   byte bVar30;
   CowData<Vector<int>> *local_128;
   uint local_fc;
   Ref *local_f8;
   long local_f0;
   Object *local_e8;
   long local_e0;
   uint local_d8[2];
   long local_d0;
   Resource *local_c8;
   Resource *local_c0;
   undefined4 local_b8;
   undefined1 local_a8[16];
   undefined1 local_98[16];
   undefined8 local_88;
   undefined8 local_78;
   undefined1 local_70[16];
   undefined1 local_60[16];
   ulong local_50;
   long local_40;
   bVar30 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( param_4 + 8 ) != 0) {
      local_c8 = (Resource*)0x0;
      pRVar15 = (Resource*)operator_new(0x308, "");
      pRVar16 = pRVar15;
      for (lVar20 = 0x61; lVar20 != 0; lVar20 = lVar20 + -1) {
         *(undefined8*)pRVar16 = 0;
         pRVar16 = pRVar16 + (ulong)bVar30 * -0x10 + 8;
      }

      Resource::Resource(pRVar15);
      *(undefined***)pRVar15 = &PTR__initialize_classv_00110870;
      uVar27 = _LC24;
      *(undefined4*)( pRVar15 + 0x240 ) = 0xffffffff;
      for (int i = 0; i < 5; i++) {
         *(undefined8*)( pRVar15 + ( 16*i + 592 ) ) = 0;
      }

      *(undefined4*)( pRVar15 + 0x298 ) = 0xffffffff;
      *(ulong*)( pRVar15 + 0x2c8 ) = uVar27;
      *(ulong*)( pRVar15 + 0x2f8 ) = uVar27;
      *(undefined8*)( pRVar15 + 0x300 ) = 0;
      *(undefined1(*) [16])( pRVar15 + 0x2a8 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( pRVar15 + 0x2b8 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( pRVar15 + 0x2d8 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( pRVar15 + 0x2e8 ) = (undefined1[16])0x0;
      postinitialize_handler((Object*)pRVar15);
      local_a8._0_8_ = pRVar15;
      local_78 = 0;
      cVar13 = RefCounted::init_ref();
      if (cVar13 == '\0') {
         pRVar15 = (Resource*)0x0;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = local_a8._8_8_;
         local_a8 = auVar7 << 0x40;
         Ref<GLTFSkin>::unref((Ref<GLTFSkin>*)&local_78);
      }
 else {
         Ref<GLTFSkin>::unref((Ref<GLTFSkin>*)&local_78);
         local_78 = 0;
         local_c8 = pRVar15;
         cVar13 = RefCounted::reference();
         if (cVar13 == '\0') {
            local_c8 = (Resource*)0x0;
            pRVar15 = (Resource*)0x0;
         }

         Ref<GLTFSkin>::unref((Ref<GLTFSkin>*)&local_78);
      }

      Ref<GLTFSkin>::unref((Ref<GLTFSkin>*)local_a8);
      local_78 = 0;
      String::parse_latin1((String*)&local_78, "godot_single_skeleton_root");
      Resource::set_name((String*)pRVar15);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      lVar20 = *(long*)( param_4 + 8 );
      for (lVar26 = 0; ( lVar20 != 0 && ( lVar26 < *(long*)( lVar20 + -8 ) ) ); lVar26 = lVar26 + 1) {
         Vector<int>::push_back((Vector<int>*)( (String*)pRVar15 + 0x268 ), *(int*)( lVar20 + lVar26 * 4 ));
         lVar20 = *(long*)( param_4 + 8 );
      }

      local_78 = 0;
      Ref<GLTFSkin>::operator =((Ref<GLTFSkin>*)&local_78, (Ref*)pRVar15);
      Vector<Ref<GLTFSkin>>::push_back((Vector<Ref<GLTFSkin>>*)param_1, (String*)&local_78);
      Ref<GLTFSkin>::unref((Ref<GLTFSkin>*)&local_78);
      Ref<GLTFSkin>::unref((Ref<GLTFSkin>*)&local_c8);
   }

   local_70 = (undefined1[16])0x0;
   lVar20 = *(long*)( param_1 + 8 );
   local_60 = (undefined1[16])0x0;
   local_50 = _LC24;
   for (lVar26 = 0; ( lVar20 != 0 && ( lVar26 < *(long*)( lVar20 + -8 ) ) ); lVar26 = lVar26 + 1) {
      local_f8 = (Ref*)0x0;
      Ref<GLTFSkin>::operator =((Ref<GLTFSkin>*)&local_f8, *(Ref**)( lVar20 + lVar26 * 8 ));
      pRVar11 = local_f8;
      if (local_f8 == (Ref*)0x0) {
         _err_print_error("_determine_skeletons", "modules/gltf/skin_tool.cpp", 0x134, "Condition \"skin.is_null()\" is true. Continuing.");
         Ref<GLTFSkin>::unref((Ref<GLTFSkin>*)&local_f8);
      }
 else {
         local_c8 = (Resource*)0x0;
         local_a8 = (undefined1[16])0x0;
         local_88 = _LC24;
         local_c0 = (Resource*)&_GlobalNilClass::_nil;
         local_98 = (undefined1[16])0x0;
         lVar20 = *(long*)( local_f8 + 0x270 );
         local_b8 = 0;
         if (lVar20 == 0) {
            lVar20 = *(long*)( local_f8 + 0x280 );
            if (lVar20 != 0) goto LAB_0010666c;
         }
 else {
            uVar27 = 0;
            do {
               if (*(long*)( lVar20 + -8 ) <= (long)uVar27) break;
               lVar23 = uVar27 * 4;
               RBSet<int,Comparator<int>,DefaultAllocator>::insert((RBSet<int,Comparator<int>,DefaultAllocator>*)&local_c8, (int*)( lVar20 + lVar23 ));
               lVar20 = *(long*)( pRVar11 + 0x270 );
               if (lVar20 == 0) goto LAB_00106616;
               lVar19 = *(long*)( lVar20 + -8 );
               if (lVar19 <= (long)uVar27) goto LAB_00106637;
               uVar27 = uVar27 + 1;
               _recurse_children(param_2, *(int*)( lVar20 + lVar23 ), (RBSet*)&local_c8, (HashSet*)local_a8);
               lVar20 = *(long*)( pRVar11 + 0x270 );
            }
 while ( lVar20 != 0 );
            lVar20 = *(long*)( pRVar11 + 0x280 );
            if (lVar20 != 0) {
               LAB_0010666c:uVar27 = 0;
               do {
                  if (*(long*)( lVar20 + -8 ) <= (long)uVar27) break;
                  lVar23 = uVar27 * 4;
                  RBSet<int,Comparator<int>,DefaultAllocator>::insert((RBSet<int,Comparator<int>,DefaultAllocator>*)&local_c8, (int*)( lVar20 + lVar23 ));
                  lVar20 = *(long*)( pRVar11 + 0x280 );
                  if (lVar20 == 0) goto LAB_00106616;
                  lVar19 = *(long*)( lVar20 + -8 );
                  if (lVar19 <= (long)uVar27) goto LAB_00106637;
                  uVar27 = uVar27 + 1;
                  _recurse_children(param_2, *(int*)( lVar20 + lVar23 ), (RBSet*)&local_c8, (HashSet*)local_a8);
                  lVar20 = *(long*)( pRVar11 + 0x280 );
               }
 while ( lVar20 != 0 );
            }

            if (( local_c8 != (Resource*)0x0 ) && ( pRVar16 = *(Resource**)( local_c8 + 0x10 ) * (Resource**)( local_c8 + 0x10 ) != local_c0 )) {
               do {
                  pRVar15 = pRVar16;
                  pRVar16 = *(Resource**)( pRVar15 + 0x10 );
               }
 while ( local_c0 != *(Resource**)( pRVar15 + 0x10 ) );
               LAB_00106730:do {
                  uVar3 = *(uint*)( pRVar15 + 0x30 );
                  uVar27 = (ulong)(int)uVar3;
                  lVar20 = *(long*)( param_2 + 8 );
                  if ((long)uVar27 < 0) goto LAB_00106b66;
                  if (lVar20 == 0) goto LAB_00106bae;
                  if (*(long*)( lVar20 + -8 ) <= (long)uVar27) goto LAB_00106b6b;
                  local_d8[0] = 0;
                  iVar14 = *(int*)( *(long*)( lVar20 + uVar27 * 8 ) + 0x248 );
                  local_fc = uVar3;
                  cVar13 = HashMap<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*>>>::_lookup_pos((HashMap<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*>>>*)&local_78, (int*)(ulong)uVar3, local_d8);
                  if (( cVar13 == '\0' ) || ( *(long*)( local_70._0_8_ + (ulong)local_d8[0] * 8 ) == 0 )) {
                     local_e8 = (Object*)operator_new(0x18, DefaultAllocator::alloc);
                     *(uint*)( (long)local_e8 + 0x10 ) = 0;
                     *(uint*)local_e8 = uVar3;
                     *(Object**)( (long)local_e8 + 8 ) = local_e8;
                     HashMap<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*>>>::insert((int*)local_d8, (Element**)&local_78, SUB81(&local_fc, 0));
                  }

                  pRVar16 = local_c8;
                  if (local_c8 != (Resource*)0x0) {
                     while (pRVar16 = *(Resource**)( pRVar16 + 0x10 ),local_c0 != pRVar16) {
                        while ((int)*(uint*)( pRVar16 + 0x30 ) <= iVar14) {
                           if (iVar14 <= (int)*(uint*)( pRVar16 + 0x30 )) {
                              DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::create_union((DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>*)&local_78, iVar14, uVar3);
                              pRVar15 = *(Resource**)( pRVar15 + 0x20 );
                              if (pRVar15 == (Resource*)0x0) goto LAB_001067f5;
                              goto LAB_00106730;
                           }

                           pRVar16 = *(Resource**)( pRVar16 + 8 );
                           if (local_c0 == pRVar16) goto LAB_001067de;
                        }
;
                     }
;
                  }

                  LAB_001067de:pRVar15 = *(Resource**)( pRVar15 + 0x20 );
               }
 while ( pRVar15 != (Resource*)0x0 );
            }

         }

         LAB_001067f5:piVar17 = *(int**)( pRVar11 + 0x290 );
         if (piVar17 != (int*)0x0) {
            lVar20 = 1;
            do {
               if (*(long*)( piVar17 + -2 ) <= lVar20) break;
               piVar1 = piVar17 + lVar20;
               lVar20 = lVar20 + 1;
               DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::create_union((DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>*)&local_78, *piVar17, *piVar1);
               piVar17 = *(int**)( pRVar11 + 0x290 );
            }
 while ( piVar17 != (int*)0x0 );
         }

         RBSet<int,Comparator<int>,DefaultAllocator>::clear((RBSet<int,Comparator<int>,DefaultAllocator>*)&local_c8);
         if (local_c8 != (Resource*)0x0) {
            Memory::free_static(local_c8, false);
         }

         uVar22 = local_a8._0_8_;
         if ((void*)local_a8._0_8_ != (void*)0x0) {
            if (local_88._4_4_ != 0) {
               if (*(uint*)( hash_table_size_primes + ( local_88 & 0xffffffff ) * 4 ) != 0) {
                  memset((void*)local_98._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_88 & 0xffffffff ) * 4 ) * 4);
               }

               local_88 = local_88 & 0xffffffff;
            }

            Memory::free_static((void*)uVar22, false);
            Memory::free_static((void*)local_98._0_8_, false);
            Memory::free_static((void*)local_a8._8_8_, false);
            Memory::free_static((void*)local_98._8_8_, false);
         }

         Ref<GLTFSkin>::unref((Ref<GLTFSkin>*)&local_f8);
      }

      lVar20 = *(long*)( param_1 + 8 );
   }

   local_f0 = 0;
   DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::get_representatives((DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>*)&local_78, (Vector*)&local_f8);
   lVar20 = local_f0;
   local_e0 = 0;
   local_d0 = 0;
   if (( local_f0 != 0 ) && ( 0 < *(long*)( local_f0 + -8 ) )) {
      lVar26 = 0;
      pCVar25 = (CowData<int>*)( local_a8 + 8 );
      do {
         local_c0 = (Resource*)0x0;
         DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::get_members((DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>*)&local_78, (Vector*)&local_c8, *(int*)( lVar20 + lVar26 * 4 ));
         iVar14 = _find_highest_node(param_2, (Vector*)&local_c8);
         Vector<int>::push_back((Vector<int>*)&local_e8, iVar14);
         local_a8._8_8_ = 0;
         if (local_c0 != (Resource*)0x0) {
            CowData<int>::_ref(pCVar25, (CowData*)&local_c0);
         }

         if (local_d0 == 0) {
            lVar23 = 1;
         }
 else {
            lVar23 = *(long*)( local_d0 + -8 ) + 1;
         }

         iVar14 = CowData<Vector<int>>::resize<false>((CowData<Vector<int>>*)&local_d0, lVar23);
         if (iVar14 == 0) {
            if (local_d0 == 0) {
               lVar19 = -1;
               lVar23 = 0;
            }
 else {
               lVar23 = *(long*)( local_d0 + -8 );
               lVar19 = lVar23 + -1;
               if (-1 < lVar19) {
                  CowData<Vector<int>>::_copy_on_write((CowData<Vector<int>>*)&local_d0);
                  lVar23 = lVar19 * 0x10 + local_d0;
                  if (*(long*)( lVar23 + 8 ) != local_a8._8_8_) {
                     CowData<int>::_ref((CowData<int>*)( lVar23 + 8 ), (CowData*)pCVar25);
                  }

                  goto LAB_00106a9c;
               }

            }

            _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar19, lVar23, "p_index", "size()", "", false, false);
         }
 else {
            _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true");
         }

         LAB_00106a9c:lVar26 = lVar26 + 1;
         CowData<int>::_unref(pCVar25);
         CowData<int>::_unref((CowData<int>*)&local_c0);
         lVar23 = local_e0;
      }
 while ( lVar26 < *(long*)( lVar20 + -8 ) );
      if (local_e0 != 0) {
         lVar19 = *(long*)( local_e0 + -8 );
         lVar20 = 0;
         while (lVar20 < lVar19) {
            iVar14 = *(int*)( lVar23 + lVar20 * 4 );
            uVar28 = (ulong)iVar14;
            lVar26 = lVar20 + 1;
            lVar18 = *(long*)( param_2 + 8 );
            iVar29 = (int)lVar20;
            if (lVar26 < lVar19) {
               iVar4 = *(int*)( lVar23 + 4 + lVar20 * 4 );
               if (iVar14 < 0) goto LAB_00106cf5;
               lVar20 = (long)( iVar29 + 2 );
               uVar24 = uVar28;
               if (lVar18 != 0) {
                  while (true) {
                     lVar19 = *(long*)( lVar18 + -8 );
                     if (lVar19 <= (long)uVar28) goto LAB_00106d01;
                     uVar27 = (ulong)iVar4;
                     if (( (long)uVar27 < 0 ) || ( lVar19 <= (long)uVar27 )) goto LAB_00106637;
                     if (*(int*)( *(long*)( lVar18 + uVar28 * 8 ) + 0x248 ) == *(int*)( *(long*)( lVar18 + uVar27 * 8 ) + 0x248 )) {
                        DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::create_union((DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>*)&local_78, (int)uVar24, iVar4);
                        uVar24 = uVar24 & 0xffffffff;
                        lVar18 = *(long*)( param_2 + 8 );
                     }

                     iVar14 = (int)uVar24;
                     if (*(long*)( lVar23 + -8 ) <= lVar20) break;
                     iVar4 = *(int*)( lVar23 + lVar20 * 4 );
                     lVar20 = lVar20 + 1;
                     if (lVar18 == 0) goto LAB_00106c73;
                  }
;
                  goto LAB_00106f56;
               }

               LAB_00106c73:lVar19 = 0;
               uVar27 = uVar28;
               goto LAB_00106637;
            }

            if ((long)uVar28 < 0) {
               LAB_00106cf5:if (lVar18 == 0) goto LAB_00106c73;
               LAB_00106d01:lVar19 = *(long*)( lVar18 + -8 );
               uVar27 = uVar28;
               goto LAB_00106637;
            }

            LAB_00106f56:lVar12 = local_d0;
            if (lVar18 == 0) goto LAB_00106c73;
            if (*(long*)( lVar18 + -8 ) <= (long)uVar28) goto LAB_00106d01;
            uVar3 = *(uint*)( *(long*)( lVar18 + uVar28 * 8 ) + 0x248 );
            lVar20 = lVar26;
            if (( ( ( (int)uVar3 < 0 ) || ( local_d0 == 0 ) ) || ( *(long*)( local_d0 + -8 ) < 1 ) ) || ( iVar29 == 0 )) {
               lVar19 = *(long*)( lVar23 + -8 );
            }
 else {
               lVar19 = *(long*)( lVar23 + -8 );
               uVar27 = 0;
               do {
                  lVar26 = CowData<int>::find(*(CowData<int>**)( lVar12 + 8 + uVar27 * 0x10 ), (int*)(ulong)uVar3, 0);
                  if (lVar26 != -1) {
                     if (lVar19 <= (long)uVar27) goto LAB_00106637;
                     DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::create_union((DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>*)&local_78, iVar14, *(int*)( lVar23 + uVar27 * 4 ));
                     lVar19 = *(long*)( lVar23 + -8 );
                  }

                  uVar27 = uVar27 + 1;
               }
 while ( ( (long)uVar27 < *(long*)( lVar12 + -8 ) ) && ( iVar29 != (int)uVar27 ) );
            }

         }
;
      }

   }

   local_128 = (CowData<Vector<int>>*)&local_d0;
   CowData<Vector<int>>::_unref(local_128);
   CowData<int>::_unref((CowData<int>*)&local_e0);
   CowData<int>::_unref((CowData<int>*)&local_f0);
   local_d0 = 0;
   DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::get_representatives((DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>*)&local_78, (Vector*)local_d8);
   for (lVar26 = 0; ( local_d0 != 0 && ( lVar26 < *(long*)( local_d0 + -8 ) ) ); lVar26 = lVar26 + 1) {
      iVar14 = *(int*)( local_d0 + lVar26 * 4 );
      local_f8 = (Ref*)0x0;
      Ref<GLTFSkeleton>::instantiate<>((Ref<GLTFSkeleton>*)&local_f8);
      local_c0 = (Resource*)0x0;
      DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::get_members((DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>*)&local_78, (Vector*)&local_c8, iVar14);
      pRVar16 = local_c0;
      lVar20 = *(long*)( param_1 + 8 );
      if (lVar20 != 0) {
         lVar23 = 0;
         do {
            if (*(long*)( lVar20 + -8 ) <= lVar23) break;
            CowData<Ref<GLTFSkin>>::_copy_on_write((CowData<Ref<GLTFSkin>>*)( param_1 + 8 ));
            auVar8._8_8_ = 0;
            auVar8._0_8_ = local_a8._8_8_;
            local_a8 = auVar8 << 0x40;
            Ref<GLTFSkin>::operator =((Ref<GLTFSkin>*)local_a8, *(Ref**)( *(long*)( param_1 + 8 ) + lVar23 * 8 ));
            if (pRVar16 != (Resource*)0x0) {
               if (0 < *(long*)( pRVar16 + -8 )) {
                  pCVar25 = *(CowData<int>**)( local_a8._0_8_ + 0x270 );
                  pRVar15 = pRVar16 + *(long*)( pRVar16 + -8 ) * 4;
                  pRVar21 = pRVar16;
                  lVar20 = local_a8._0_8_;
                  do {
                     piVar17 = (int*)( ulong ) * (uint*)pRVar21;
                     lVar19 = CowData<int>::find(pCVar25, piVar17, 0);
                     if (( lVar19 != -1 ) || ( lVar19 = CowData<int>::find(*(CowData<int>**)( lVar20 + 0x280 ), piVar17, 0) ),lVar19 != -1) {
                        *(int*)( lVar20 + 0x298 ) = (int)lVar26;
                     }

                     pRVar21 = pRVar21 + 4;
                  }
 while ( pRVar21 != pRVar15 );
               }

            }

            lVar23 = lVar23 + 1;
            Ref<GLTFSkin>::unref((Ref<GLTFSkin>*)local_a8);
            lVar20 = *(long*)( param_1 + 8 );
         }
 while ( lVar20 != 0 );
      }

      pRVar16 = local_c0;
      local_a8._8_8_ = 0;
      if (local_c0 != (Resource*)0x0) {
         for (lVar23 = 0; lVar23 < *(long*)( pRVar16 + -8 ); lVar23 = lVar23 + 1) {
            iVar14 = *(int*)( pRVar16 + lVar23 * 4 );
            uVar27 = (ulong)iVar14;
            lVar20 = *(long*)( param_2 + 8 );
            if ((long)uVar27 < 0) goto LAB_00106b66;
            if (lVar20 == 0) goto LAB_00106bae;
            if (*(long*)( lVar20 + -8 ) <= (long)uVar27) goto LAB_00106b6b;
            if (*(char*)( *(long*)( lVar20 + uVar27 * 8 ) + 0x290 ) == '\0') {
               Vector<int>::push_back((Vector<int>*)local_a8, iVar14);
            }
 else {
               Vector<int>::push_back((Vector<int>*)( local_f8 + 0x240 ), iVar14);
            }

         }

      }

      local_e8 = (Object*)0x0;
      Ref<GLTFSkeleton>::operator =((Ref<GLTFSkeleton>*)&local_e8, local_f8);
      if (*(long*)( param_3 + 8 ) == 0) {
         lVar20 = 0;
      }
 else {
         lVar20 = *(long*)( *(long*)( param_3 + 8 ) + -8 );
      }

      this(CowData<Ref<GLTFSkeleton>> * )(param_3 + 8);
      iVar14 = CowData<Ref<GLTFSkeleton>>::resize<false>(this, lVar20 + 1);
      if (iVar14 == 0) {
         if (*(long*)( param_3 + 8 ) == 0) {
            lVar23 = -1;
            lVar20 = 0;
         }
 else {
            lVar20 = *(long*)( *(long*)( param_3 + 8 ) + -8 );
            lVar23 = lVar20 + -1;
            if (-1 < lVar23) {
               CowData<Ref<GLTFSkeleton>>::_copy_on_write(this);
               puVar2 = (undefined8*)( *(long*)( param_3 + 8 ) + lVar23 * 8 );
               pOVar5 = (Object*)*puVar2;
               if (local_e8 != pOVar5) {
                  *puVar2 = local_e8;
                  if (( local_e8 != (Object*)0x0 ) && ( cVar13 = RefCounted::reference() ),cVar13 == '\0') {
                     *puVar2 = 0;
                  }

                  if (( ( pOVar5 != (Object*)0x0 ) && ( cVar13 = RefCounted::unreference() ),cVar13 != '\0' )) &&( cVar13 = cVar13 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

            goto LAB_001072dc;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar23, lVar20, "p_index", "size()", "", false, false);
   }

   else{_err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true");
}
LAB_001072dc:Ref<GLTFSkeleton>::unref((Ref<GLTFSkeleton>*)&local_e8);if (*(long*)( param_3 + 8 ) == 0) {
   lVar20 = 0;
   LAB_001073db:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar26, lVar20, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar6 = (code*)invalidInstructionException();
   ( *pcVar6 )();
}
lVar20 = *(long*)( *(long*)( param_3 + 8 ) + -8 );if (lVar20 <= lVar26) goto LAB_001073db;CowData<Ref<GLTFSkeleton>>::_copy_on_write(this);local_e8 = (Object*)0x0;Ref<GLTFSkeleton>::operator =((Ref<GLTFSkeleton>*)&local_e8, *(Ref**)( *(long*)( param_3 + 8 ) + lVar26 * 8 ));_reparent_non_joint_skeleton_subtrees(param_2, (Ref<GLTFSkeleton>*)&local_e8, local_a8);Ref<GLTFSkeleton>::unref((Ref<GLTFSkeleton>*)&local_e8);CowData<int>::_unref((CowData<int>*)( local_a8 + 8 ));CowData<int>::_unref((CowData<int>*)&local_c0);Ref<GLTFSkeleton>::unref((Ref<GLTFSkeleton>*)&local_f8);}lVar20 = 0;do {
   if (( *(long*)( param_3 + 8 ) == 0 ) || ( *(long*)( *(long*)( param_3 + 8 ) + -8 ) <= lVar20 )) {
      uVar22 = 0;
      LAB_0010718b:CowData<int>::_unref((CowData<int>*)local_128);
      DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::~DisjointSet((DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>*)&local_78);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return uVar22;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   lVar26 = 0;
   CowData<Ref<GLTFSkeleton>>::_copy_on_write((CowData<Ref<GLTFSkeleton>>*)( param_3 + 8 ));
   local_c8 = (Resource*)0x0;
   Ref<GLTFSkeleton>::operator =((Ref<GLTFSkeleton>*)&local_c8, *(Ref**)( *(long*)( param_3 + 8 ) + lVar20 * 8 ));
   while (true) {
      lVar23 = *(long*)( local_c8 + 0x248 );
      iVar14 = (int)lVar20;
      if (( lVar23 == 0 ) || ( *(long*)( lVar23 + -8 ) <= lVar26 )) break;
      uVar27 = ( ulong ) * (int*)( lVar23 + lVar26 * 4 );
      lVar23 = *(long*)( param_2 + 8 );
      if ((long)uVar27 < 0) {
         if (lVar23 == 0) goto LAB_00106bae;
         LAB_0010713e:lVar19 = *(long*)( lVar23 + -8 );
         goto LAB_00106637;
      }

      if (lVar23 == 0) goto LAB_00106bae;
      if (*(long*)( lVar23 + -8 ) <= (long)uVar27) goto LAB_0010713e;
      uVar22 = local_a8._8_8_;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = local_a8._8_8_;
      local_a8 = auVar9 << 0x40;
      lVar23 = *(long*)( lVar23 + uVar27 * 8 );
      if (lVar23 != 0) {
         local_a8._0_8_ = lVar23;
         local_a8 = CONCAT88(uVar22, local_a8._0_8_);
         cVar13 = RefCounted::reference();
         if (cVar13 == '\0') {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = local_a8._8_8_;
            local_a8 = auVar10 << 0x40;
         }

      }

      if (*(char*)( local_a8._0_8_ + 0x290 ) == '\0') {
         _err_print_error("_determine_skeletons", "modules/gltf/skin_tool.cpp", 0x1aa, "Condition \"!node->joint\" is true. Returning: ERR_PARSE_ERROR", 0, 0);
         LAB_00107171:Ref<GLTFNode>::unref((Ref<GLTFNode>*)local_a8);
         goto LAB_0010717e;
      }

      lVar26 = lVar26 + 1;
      if (-1 < *(int*)( local_a8._0_8_ + 0x28c )) {
         _err_print_error("_determine_skeletons", "modules/gltf/skin_tool.cpp", 0x1ab, "Condition \"node->skeleton >= 0\" is true. Returning: ERR_PARSE_ERROR", 0, 0);
         goto LAB_00107171;
      }

      *(int*)( local_a8._0_8_ + 0x28c ) = iVar14;
      Ref<GLTFNode>::unref((Ref<GLTFNode>*)local_a8);
   }
;
   lVar20 = lVar20 + 1;
   iVar14 = _determine_skeleton_roots(param_2, param_3, iVar14);
   if (iVar14 != 0) {
      _err_print_error("_determine_skeletons", "modules/gltf/skin_tool.cpp", 0x1af, "Condition \"SkinTool::_determine_skeleton_roots(nodes, skeletons, skel_i)\" is true. Returning: ERR_PARSE_ERROR", 0, 0);
      LAB_0010717e:uVar22 = 0x2b;
      Ref<GLTFSkeleton>::unref((Ref<GLTFSkeleton>*)&local_c8);
      goto LAB_0010718b;
   }

   Ref<GLTFSkeleton>::unref((Ref<GLTFSkeleton>*)&local_c8);
}
 while ( true );LAB_00106616:lVar19 = 0;goto LAB_00106637;LAB_00106b66:if (lVar20 == 0) {
   LAB_00106bae:lVar19 = 0;
}
 else {
   LAB_00106b6b:lVar19 = *(long*)( lVar20 + -8 );
}
LAB_00106637:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar27, lVar19, "p_index", "size()", "", false, true);_err_flush_stdout();/* WARNING: Does not return */pcVar6 = (code*)invalidInstructionException();( *pcVar6 )();}/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
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
/* Resource::set_last_modified_time(unsigned long) */void Resource::set_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x198 ) = param_1;
   return;
}
/* Resource::set_import_last_modified_time(unsigned long) */void Resource::set_import_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x1a0 ) = param_1;
   return;
}
/* GLTFSkeleton::is_class_ptr(void*) const */uint GLTFSkeleton::is_class_ptr(GLTFSkeleton *this, void *param_1) {
   return (uint)CONCAT71(0x110a, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x110a, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x110a, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x110a, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* GLTFSkeleton::_getv(StringName const&, Variant&) const */undefined8 GLTFSkeleton::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFSkeleton::_setv(StringName const&, Variant const&) */undefined8 GLTFSkeleton::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFSkeleton::_validate_propertyv(PropertyInfo&) const */void GLTFSkeleton::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* GLTFSkeleton::_property_can_revertv(StringName const&) const */undefined8 GLTFSkeleton::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* GLTFSkeleton::_property_get_revertv(StringName const&, Variant&) const */undefined8 GLTFSkeleton::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFSkeleton::_notificationv(int, bool) */void GLTFSkeleton::_notificationv(int param_1, bool param_2) {
   return;
}
/* GLTFSkin::is_class_ptr(void*) const */uint GLTFSkin::is_class_ptr(GLTFSkin *this, void *param_1) {
   return (uint)CONCAT71(0x110a, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x110a, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x110a, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x110a, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* GLTFSkin::_getv(StringName const&, Variant&) const */undefined8 GLTFSkin::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFSkin::_setv(StringName const&, Variant const&) */undefined8 GLTFSkin::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFSkin::_validate_propertyv(PropertyInfo&) const */void GLTFSkin::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* GLTFSkin::_property_can_revertv(StringName const&) const */undefined8 GLTFSkin::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* GLTFSkin::_property_get_revertv(StringName const&, Variant&) const */undefined8 GLTFSkin::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFSkin::_notificationv(int, bool) */void GLTFSkin::_notificationv(int param_1, bool param_2) {
   return;
}
/* GLTFSkin::_get_class_namev() const */undefined8 *GLTFSkin::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00107693:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00107693;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFSkin");
         goto LAB_001076fe;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFSkin");
   LAB_001076fe:return &_get_class_namev();
}
/* RBSet<int, Comparator<int>, DefaultAllocator>::_cleanup_tree(RBSet<int, Comparator<int>,
   DefaultAllocator>::Element*) [clone .part.0] */void RBSet<int,Comparator<int>,DefaultAllocator>::_cleanup_tree(RBSet<int,Comparator<int>,DefaultAllocator> *this, Element *param_1) {
   Element *pEVar1;
   Element *pEVar2;
   Element *pEVar3;
   Element *pEVar4;
   Element *pEVar5;
   Element *pEVar6;
   pEVar1 = *(Element**)( param_1 + 0x10 );
   pEVar2 = *(Element**)( this + 8 );
   if (pEVar1 != pEVar2) {
      pEVar3 = *(Element**)( pEVar1 + 0x10 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar3 + 0x10 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (pEVar4 != *(Element**)( pEVar6 + 8 )) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar5 + 8 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar2 + 0x10 );
               if (pEVar6 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               Memory::free_static(pEVar2, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar5 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar3 + 8 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar2 + 8 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar2, false);
         }

         Memory::free_static(pEVar3, false);
         pEVar3 = *(Element**)( this + 8 );
      }

      pEVar2 = *(Element**)( pEVar1 + 8 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar2 + 0x10 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar5 = *(Element**)( pEVar2 + 8 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
         }

         Memory::free_static(pEVar2, false);
      }

      Memory::free_static(pEVar1, false);
      pEVar2 = *(Element**)( this + 8 );
   }

   pEVar1 = *(Element**)( param_1 + 8 );
   if (pEVar1 != pEVar2) {
      pEVar3 = *(Element**)( pEVar1 + 0x10 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar3 + 0x10 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar5 + 8 );
            if (pEVar2 != pEVar6) {
               if (*(Element**)( pEVar2 + 0x10 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 0x10 ));
                  pEVar6 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               Memory::free_static(pEVar2, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar5 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar3 + 8 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar2 + 8 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar2, false);
         }

         Memory::free_static(pEVar3, false);
         pEVar3 = *(Element**)( this + 8 );
      }

      pEVar2 = *(Element**)( pEVar1 + 8 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar2 + 0x10 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar5 = *(Element**)( pEVar2 + 8 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
         }

         Memory::free_static(pEVar2, false);
      }

      Memory::free_static(pEVar1, false);
   }

   Memory::free_static(param_1, false);
   return;
}
/* GLTFSkeleton::_get_class_namev() const */undefined8 *GLTFSkeleton::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00107de3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00107de3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFSkeleton");
         goto LAB_00107e4e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFSkeleton");
   LAB_00107e4e:return &_get_class_namev();
}
/* SortArray<List<int, DefaultAllocator>::Element*, List<int,
   DefaultAllocator>::AuxiliaryComparator<Comparator<int> >, true>::introsort(long, long, List<int,
   DefaultAllocator>::Element**, long) const [clone .isra.0] */void SortArray<List<int,DefaultAllocator>::Element*,List<int,DefaultAllocator>::AuxiliaryComparator<Comparator<int>>,true>::introsort(long param_1, long param_2, Element **param_3, long param_4) {
   int iVar1;
   Element *pEVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   Element **ppEVar6;
   int iVar7;
   Element **ppEVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   Element *pEVar12;
   int iVar13;
   Element *pEVar14;
   Element **ppEVar15;
   long lVar16;
   long local_58;
   lVar16 = param_2 - param_1;
   if (lVar16 < 0x11) {
      return;
   }

   if (param_4 == 0) {
      LAB_0010879d:lVar10 = lVar16 + -2 >> 1;
      lVar11 = lVar10 * 2 + 2;
      ppEVar8 = param_3 + param_1 + lVar10;
      pEVar12 = *ppEVar8;
      lVar5 = lVar10;
      lVar9 = lVar11;
      if (lVar16 <= lVar11) goto LAB_001088a5;
      LAB_001087e3:do {
         pEVar2 = param_3[param_1 + lVar11];
         pEVar14 = param_3[param_1 + lVar11 + -1];
         lVar3 = lVar11 + -1;
         lVar4 = lVar11;
         ppEVar6 = param_3 + param_1 + lVar11 + -1;
         if (*(int*)pEVar14 <= *(int*)pEVar2) {
            lVar4 = lVar11 + 1;
            lVar3 = lVar11;
            pEVar14 = pEVar2;
            ppEVar6 = param_3 + param_1 + lVar11;
         }

         lVar11 = lVar4 * 2;
         param_3[lVar5 + param_1] = pEVar14;
         lVar5 = lVar3;
      }
 while ( lVar16 != lVar11 && SBORROW8(lVar16, lVar11) == lVar16 + lVar4 * -2 < 0 );
      ppEVar15 = ppEVar6;
      if (lVar16 == lVar11) goto LAB_001088ab;
      do {
         lVar11 = lVar9;
         lVar9 = lVar3 + -1;
         if (lVar3 <= lVar10) goto LAB_001089e1;
         iVar13 = *(int*)pEVar12;
         do {
            lVar5 = lVar9 >> 1;
            pEVar2 = param_3[param_1 + lVar5];
            if (iVar13 <= *(int*)pEVar2) {
               param_3[lVar3 + param_1] = pEVar12;
               goto joined_r0x00108885;
            }

            param_3[lVar3 + param_1] = pEVar2;
            lVar9 = ( lVar5 + -1 ) - ( lVar5 + -1 >> 0x3f );
            lVar3 = lVar5;
         }
 while ( lVar10 < lVar5 );
         param_3[param_1 + lVar5] = pEVar12;
         joined_r0x00108885:if (lVar10 == 0) {
            ppEVar8 = param_3 + param_1;
            lVar16 = ( param_2 + -1 ) - param_1;
            goto LAB_001088e0;
         }

         while (true) {
            ppEVar8 = ppEVar8 + -1;
            lVar11 = lVar11 + -2;
            lVar10 = lVar10 + -1;
            pEVar12 = *ppEVar8;
            lVar5 = lVar10;
            lVar9 = lVar11;
            if (lVar11 < lVar16) goto LAB_001087e3;
            LAB_001088a5:lVar9 = lVar11;
            ppEVar15 = ppEVar8;
            ppEVar6 = ppEVar8;
            if (lVar11 == lVar16) break;
            LAB_001089e1:*ppEVar6 = pEVar12;
         }
;
         LAB_001088ab:lVar3 = lVar11 + -1;
         ppEVar6 = param_3 + param_1 + lVar3;
         *ppEVar15 = *ppEVar6;
      }
 while ( true );
   }

   lVar11 = param_2;
   local_58 = param_4;
   LAB_001085f1:pEVar12 = param_3[lVar11 + -1];
   local_58 = local_58 + -1;
   iVar13 = *(int*)pEVar12;
   iVar7 = *(int*)param_3[param_1];
   iVar1 = *(int*)param_3[( lVar16 >> 1 ) + param_1];
   if (iVar7 < iVar1) {
      if (iVar1 < iVar13) {
         LAB_00108770:pEVar12 = param_3[( lVar16 >> 1 ) + param_1];
         iVar13 = iVar1;
         goto LAB_0010862f;
      }

      if (iVar7 < iVar13) goto LAB_0010862f;
   }
 else if (iVar13 <= iVar7) {
      if (iVar1 < iVar13) goto LAB_0010862f;
      goto LAB_00108770;
   }

   pEVar12 = param_3[param_1];
   iVar13 = iVar7;
   LAB_0010862f:lVar16 = lVar11;
   param_2 = param_1;
   do {
      if (iVar7 < iVar13) {
         if (lVar11 + -1 == param_2) {
            _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
            iVar13 = *(int*)pEVar12;
            goto LAB_0010866d;
         }

      }
 else {
         LAB_0010866d:lVar9 = lVar16 + -1;
         ppEVar8 = param_3 + lVar9;
         if (iVar13 < *(int*)*ppEVar8) {
            ppEVar6 = param_3 + lVar16 + -2;
            while (param_1 != lVar9) {
               lVar9 = lVar9 + -1;
               ppEVar8 = ppEVar6;
               if (*(int*)*ppEVar6 <= iVar13) goto LAB_001086cc;
               ppEVar6 = ppEVar6 + -1;
            }
;
            _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
         }

         LAB_001086cc:if (lVar9 <= param_2) break;
         pEVar2 = param_3[param_2];
         param_3[param_2] = *ppEVar8;
         iVar13 = *(int*)pEVar12;
         *ppEVar8 = pEVar2;
         lVar16 = lVar9;
      }

      lVar9 = param_2 + 1;
      param_2 = param_2 + 1;
      iVar7 = *(int*)param_3[lVar9];
   }
 while ( true );
   introsort(param_2, lVar11, param_3, local_58);
   lVar16 = param_2 - param_1;
   if (lVar16 < 0x11) {
      return;
   }

   lVar11 = param_2;
   if (local_58 == 0) goto LAB_0010879d;
   goto LAB_001085f1;
   LAB_001088e0:pEVar12 = ppEVar8[lVar16];
   ppEVar8[lVar16] = *ppEVar8;
   if (lVar16 < 3) {
      if (lVar16 != 2) {
         *ppEVar8 = pEVar12;
         return;
      }

      lVar11 = param_1 + 1;
      lVar9 = 0;
      lVar16 = 1;
      *ppEVar8 = param_3[lVar11];
      LAB_00108968:iVar13 = *(int*)pEVar12;
      while (true) {
         ppEVar6 = param_3 + lVar11;
         pEVar2 = param_3[param_1 + lVar9];
         if (iVar13 <= *(int*)pEVar2) break;
         *ppEVar6 = pEVar2;
         if (lVar9 == 0) {
            param_3[param_1 + lVar9] = pEVar12;
            goto LAB_001088e0;
         }

         lVar11 = param_1 + lVar9;
         lVar9 = ( lVar9 + -1 ) / 2;
      }
;
   }
 else {
      lVar11 = 2;
      lVar9 = 0;
      do {
         pEVar2 = param_3[param_1 + lVar11];
         pEVar14 = param_3[param_1 + lVar11 + -1];
         lVar5 = lVar11 + -1;
         ppEVar6 = param_3 + param_1 + lVar11 + -1;
         lVar10 = lVar11;
         if (*(int*)pEVar14 <= *(int*)pEVar2) {
            lVar10 = lVar11 + 1;
            lVar5 = lVar11;
            ppEVar6 = param_3 + param_1 + lVar11;
            pEVar14 = pEVar2;
         }

         lVar11 = lVar10 * 2;
         param_3[lVar9 + param_1] = pEVar14;
         lVar9 = lVar5;
      }
 while ( lVar16 != lVar11 && SBORROW8(lVar16, lVar11) == lVar16 + lVar10 * -2 < 0 );
      if (lVar16 == lVar11) {
         lVar11 = param_1 + lVar16 + -1;
         lVar9 = lVar16 + -2 >> 1;
         *ppEVar6 = param_3[lVar11];
         lVar16 = lVar16 + -1;
         goto LAB_00108968;
      }

      lVar11 = param_1 + lVar5;
      lVar16 = lVar16 + -1;
      lVar9 = ( lVar5 + -1 ) / 2;
      if (0 < lVar5) goto LAB_00108968;
   }

   *ppEVar6 = pEVar12;
   goto LAB_001088e0;
}
/* Resource::get_base_extension() const */Resource * __thiscall Resource::get_base_extension(Resource *this){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   String::parse_latin1((StrRange*)this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
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
/* DisjointSet<int, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultAllocator>::~DisjointSet() */void DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::~DisjointSet(DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator> *this) {
   uint uVar1;
   undefined8 *puVar2;
   long lVar3;
   void *pvVar4;
   for (puVar2 = *(undefined8**)( this + 0x18 ); puVar2 != (undefined8*)0x0; puVar2 = (undefined8*)*puVar2) {
      Memory::free_static((void*)puVar2[3], false);
   }

   pvVar4 = *(void**)( this + 8 );
   if (pvVar4 == (void*)0x0) {
      return;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (uVar1 == 0) {
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
      }
 else {
         lVar3 = 0;
         do {
            if (*(int*)( *(long*)( this + 0x10 ) + lVar3 ) != 0) {
               *(int*)( *(long*)( this + 0x10 ) + lVar3 ) = 0;
               Memory::free_static(*(void**)( (long)pvVar4 + lVar3 * 2 ), false);
               pvVar4 = *(void**)( this + 8 );
               *(undefined8*)( (long)pvVar4 + lVar3 * 2 ) = 0;
            }

            lVar3 = lVar3 + 4;
         }
 while ( lVar3 != (ulong)uVar1 << 2 );
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
         if (pvVar4 == (void*)0x0) {
            return;
         }

      }

   }

   Memory::free_static(pvVar4, false);
   Memory::free_static(*(void**)( this + 0x10 ), false);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<int, HashMapHasherDefault, HashMapComparatorDefault<int> >::insert(int const&) */undefined1[16];HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert(int *param_1) {
   void *pvVar1;
   void *pvVar2;
   long lVar3;
   long lVar4;
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
   uint uVar29;
   uint uVar30;
   uint uVar31;
   uint uVar32;
   ulong uVar33;
   long lVar34;
   long lVar35;
   long lVar36;
   uint *puVar37;
   int iVar38;
   uint *in_RDX;
   long lVar39;
   ulong uVar40;
   uint uVar41;
   long *in_RSI;
   uint uVar42;
   ulong uVar43;
   undefined4 uVar44;
   ulong uVar45;
   uint uVar46;
   uint *puVar47;
   undefined1 auVar48[16];
   long *plStack_98;
   lVar34 = *in_RSI;
   uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
   if (lVar34 == 0) {
      uVar33 = (ulong)uVar30 * 4;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[3] = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      *in_RSI = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[2] = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[1] = lVar34;
      if (uVar30 != 0) {
         memset((void*)in_RSI[3], 0, uVar33);
      }

      uVar31 = *in_RDX;
      uVar42 = *(uint*)( (long)in_RSI + 0x24 );
      lVar34 = *in_RSI;
      if (lVar34 != 0) goto LAB_00108cba;
   }
 else {
      uVar31 = *in_RDX;
      uVar42 = *(uint*)( (long)in_RSI + 0x24 );
      LAB_00108cba:if (uVar42 != 0) {
         uVar33 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
         uVar29 = ( uVar31 >> 0x10 ^ uVar31 ) * -0x7a143595;
         uVar29 = ( uVar29 ^ uVar29 >> 0xd ) * -0x3d4d51cb;
         uVar41 = uVar29 ^ uVar29 >> 0x10;
         if (uVar29 == uVar29 >> 0x10) {
            uVar41 = 1;
            uVar40 = uVar33;
         }
 else {
            uVar40 = uVar41 * uVar33;
         }

         uVar43 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 ));
         auVar5._8_8_ = 0;
         auVar5._0_8_ = uVar43;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = uVar40;
         lVar39 = SUB168(auVar5 * auVar17, 8);
         iVar38 = SUB164(auVar5 * auVar17, 8);
         uVar29 = *(uint*)( in_RSI[3] + lVar39 * 4 );
         uVar40 = (ulong)uVar29;
         if (uVar29 != 0) {
            uVar29 = 0;
            do {
               if (uVar41 == (uint)uVar40) {
                  uVar32 = *(uint*)( in_RSI[1] + lVar39 * 4 );
                  plStack_98 = (long*)(ulong)uVar32;
                  if (*(uint*)( lVar34 + (long)plStack_98 * 4 ) == uVar31) goto LAB_00108daf;
               }

               uVar29 = uVar29 + 1;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( iVar38 + 1 ) * uVar33;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = uVar43;
               lVar39 = SUB168(auVar6 * auVar18, 8);
               uVar32 = *(uint*)( in_RSI[3] + lVar39 * 4 );
               uVar40 = (ulong)uVar32;
               iVar38 = SUB164(auVar6 * auVar18, 8);
            }
 while ( ( uVar32 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = uVar40 * uVar33,auVar19._8_8_ = 0,auVar19._0_8_ = uVar43,auVar8._8_8_ = 0,auVar8._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 ) + iVar38 ) - SUB164(auVar7 * auVar19, 8) ) * uVar33,auVar20._8_8_ = 0,auVar20._0_8_ = uVar43,uVar29 <= SUB164(auVar8 * auVar20, 8) );
         }

      }

   }

   if ((float)uVar30 * __LC19 < (float)( uVar42 + 1 )) {
      if ((int)in_RSI[4] == 0x1c) {
         plStack_98 = (long*)0x0;
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0);
         uVar42 = *(uint*)( (long)in_RSI + 0x24 );
         lVar34 = *in_RSI;
         uVar32 = 0xffffffff;
         goto LAB_00108daf;
      }

      uVar30 = (int)in_RSI[4] + 1;
      uVar33 = (ulong)uVar30;
      if (uVar30 < 2) {
         uVar33 = 2;
      }

      uVar30 = *(uint*)( hash_table_size_primes + uVar33 * 4 );
      *(int*)( in_RSI + 4 ) = (int)uVar33;
      pvVar1 = (void*)in_RSI[3];
      uVar33 = (ulong)uVar30 << 2;
      pvVar2 = (void*)in_RSI[2];
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[3] = lVar34;
      lVar34 = Memory::realloc_static((void*)*in_RSI, uVar33, false);
      *in_RSI = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[2] = lVar34;
      lVar34 = Memory::realloc_static((void*)in_RSI[1], uVar33, false);
      in_RSI[1] = lVar34;
      if (uVar30 != 0) {
         memset((void*)in_RSI[3], 0, uVar33);
      }

      if (*(int*)( (long)in_RSI + 0x24 ) != 0) {
         uVar33 = 0;
         lVar39 = in_RSI[3];
         lVar3 = in_RSI[2];
         do {
            uVar45 = uVar33 & 0xffffffff;
            uVar44 = (undefined4)uVar33;
            uVar29 = 0;
            uVar30 = *(uint*)( (long)pvVar1 + ( ulong ) * (uint*)( (long)pvVar2 + uVar33 * 4 ) * 4 );
            uVar40 = (ulong)uVar30;
            lVar35 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
            uVar42 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
            uVar43 = CONCAT44(0, uVar42);
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar40 * lVar35;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar43;
            lVar36 = SUB168(auVar9 * auVar21, 8) * 4;
            iVar38 = SUB164(auVar9 * auVar21, 8);
            puVar47 = (uint*)( lVar39 + lVar36 );
            uVar31 = *puVar47;
            if (uVar31 == 0) {
               lVar35 = uVar33 * 4;
            }
 else {
               do {
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = (ulong)uVar31 * lVar35;
                  auVar22._8_8_ = 0;
                  auVar22._0_8_ = uVar43;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = ( ulong )(( uVar42 + iVar38 ) - SUB164(auVar10 * auVar22, 8)) * lVar35;
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = uVar43;
                  uVar30 = SUB164(auVar11 * auVar23, 8);
                  if (uVar30 < uVar29) {
                     *(int*)( lVar3 + uVar45 * 4 ) = iVar38;
                     uVar31 = *puVar47;
                     *puVar47 = (uint)uVar40;
                     uVar29 = *(uint*)( lVar36 + lVar34 );
                     uVar40 = (ulong)uVar31;
                     *(uint*)( lVar36 + lVar34 ) = (uint)uVar45;
                     uVar45 = (ulong)uVar29;
                     uVar29 = uVar30;
                  }

                  uVar44 = (undefined4)uVar45;
                  uVar30 = (uint)uVar40;
                  uVar29 = uVar29 + 1;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = ( ulong )(iVar38 + 1) * lVar35;
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = uVar43;
                  lVar36 = SUB168(auVar12 * auVar24, 8) * 4;
                  iVar38 = SUB164(auVar12 * auVar24, 8);
                  puVar47 = (uint*)( lVar39 + lVar36 );
                  uVar31 = *puVar47;
               }
 while ( uVar31 != 0 );
               lVar35 = uVar45 << 2;
            }

            *puVar47 = uVar30;
            uVar33 = uVar33 + 1;
            *(int*)( lVar3 + lVar35 ) = iVar38;
            *(undefined4*)( lVar34 + lVar36 ) = uVar44;
         }
 while ( (uint)uVar33 < *(uint*)( (long)in_RSI + 0x24 ) );
      }

      Memory::free_static(pvVar1, false);
      Memory::free_static(pvVar2, false);
      uVar42 = *(uint*)( (long)in_RSI + 0x24 );
      lVar34 = *in_RSI;
      uVar31 = *in_RDX;
   }

   uVar30 = ( uVar31 >> 0x10 ^ uVar31 ) * -0x7a143595;
   uVar29 = ( uVar30 ^ uVar30 >> 0xd ) * -0x3d4d51cb;
   uVar30 = uVar29 ^ uVar29 >> 0x10;
   if (uVar29 == uVar29 >> 0x10) {
      uVar33 = 1;
      uVar30 = 1;
   }
 else {
      uVar33 = (ulong)uVar30;
   }

   uVar41 = 0;
   *(uint*)( lVar34 + (ulong)uVar42 * 4 ) = uVar31;
   lVar3 = in_RSI[3];
   uVar42 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
   uVar40 = CONCAT44(0, uVar42);
   lVar36 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
   auVar13._8_8_ = 0;
   auVar13._0_8_ = uVar33 * lVar36;
   auVar25._8_8_ = 0;
   auVar25._0_8_ = uVar40;
   lVar39 = SUB168(auVar13 * auVar25, 8) * 4;
   iVar38 = SUB164(auVar13 * auVar25, 8);
   lVar35 = in_RSI[2];
   puVar47 = (uint*)( lVar3 + lVar39 );
   lVar4 = in_RSI[1];
   uVar31 = *puVar47;
   uVar29 = *(uint*)( (long)in_RSI + 0x24 );
   plStack_98 = in_RSI;
   while (uVar31 != 0) {
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)uVar31 * lVar36;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar40;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = ( ulong )(( uVar42 + iVar38 ) - SUB164(auVar14 * auVar26, 8)) * lVar36;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar40;
      uVar31 = SUB164(auVar15 * auVar27, 8);
      uVar32 = uVar30;
      uVar46 = uVar29;
      if (uVar31 < uVar41) {
         puVar37 = (uint*)( lVar39 + lVar4 );
         *(int*)( lVar35 + (ulong)uVar29 * 4 ) = iVar38;
         uVar32 = *puVar47;
         *puVar47 = uVar30;
         uVar46 = *puVar37;
         *puVar37 = uVar29;
         uVar41 = uVar31;
      }

      uVar41 = uVar41 + 1;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = ( ulong )(iVar38 + 1) * lVar36;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar40;
      plStack_98 = SUB168(auVar16 * auVar28, 8);
      lVar39 = (long)plStack_98 * 4;
      iVar38 = SUB164(auVar16 * auVar28, 8);
      puVar47 = (uint*)( lVar3 + lVar39 );
      uVar29 = uVar46;
      uVar30 = uVar32;
      uVar31 = *puVar47;
   }
;
   *puVar47 = uVar30;
   *(int*)( lVar35 + (ulong)uVar29 * 4 ) = iVar38;
   *(uint*)( lVar4 + lVar39 ) = uVar29;
   uVar32 = *(uint*)( (long)in_RSI + 0x24 );
   uVar42 = uVar32 + 1;
   *(uint*)( (long)in_RSI + 0x24 ) = uVar42;
   LAB_00108daf:param_1[3] = uVar32;
   *(long*)param_1 = lVar34;
   param_1[2] = uVar42;
   auVar48._8_8_ = plStack_98;
   auVar48._0_8_ = param_1;
   return auVar48;
}
/* void Ref<GLTFSkeleton>::instantiate<>() */void Ref<GLTFSkeleton>::instantiate<>(Ref<GLTFSkeleton> *this) {
   undefined8 uVar1;
   char cVar2;
   Resource *this_00;
   long lVar3;
   Resource *pRVar4;
   Object *pOVar5;
   Object *pOVar6;
   byte bVar7;
   bVar7 = 0;
   this_00 = (Resource*)operator_new(0x2d0, "");
   pRVar4 = this_00;
   for (lVar3 = 0x5a; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(undefined8*)pRVar4 = 0;
      pRVar4 = pRVar4 + (ulong)bVar7 * -0x10 + 8;
   }

   Resource::Resource(this_00);
   *(undefined***)this_00 = &PTR__initialize_classv_00110698;
   uVar1 = _LC24;
   *(undefined8*)( this_00 + 0x248 ) = 0;
   *(undefined8*)( this_00 + 0x288 ) = uVar1;
   *(undefined8*)( this_00 + 0x2b8 ) = uVar1;
   *(undefined8*)( this_00 + 0x2c8 ) = 0;
   *(undefined1(*) [16])( this_00 + 600 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x268 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x278 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x298 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x2a8 ) = (undefined1[16])0x0;
   postinitialize_handler((Object*)this_00);
   cVar2 = RefCounted::init_ref();
   if (cVar2 == '\0') {
      pOVar6 = *(Object**)this;
      if (pOVar6 == (Object*)0x0) {
         return;
      }

      *(undefined8*)this = 0;
      cVar2 = RefCounted::unreference();
      if (cVar2 == '\0') {
         return;
      }

      this_00 = (Resource*)0x0;
      cVar2 = predelete_handler(pOVar6);
      if (cVar2 == '\0') {
         return;
      }

   }
 else {
      pOVar6 = *(Object**)this;
      pOVar5 = pOVar6;
      if (this_00 == (Resource*)pOVar6) goto LAB_00109385;
      *(Resource**)this = this_00;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
         *(undefined8*)this = 0;
      }

      pOVar5 = (Object*)this_00;
      if (( ( pOVar6 == (Object*)0x0 ) || ( cVar2 = RefCounted::unreference() ),cVar2 == '\0' )) goto LAB_00109385;
   }

   ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
   Memory::free_static(pOVar6, false);
   pOVar5 = (Object*)this_00;
   if (this_00 == (Resource*)0x0) {
      return;
   }

   LAB_00109385:cVar2 = RefCounted::unreference();
   if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar5) ),cVar2 != '\0') {
      ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
      Memory::free_static(pOVar5, false);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<ObjectID, int, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, int> > >::operator[](ObjectID const&) */undefined1[16];HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>::operator [](HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>
             *this,ObjectID*param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined1 auVar4 [16];
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
  undefined1 auVar29[16];
  undefined1 auVar30[16];
  undefined1 auVar31[16];
  undefined1 auVar32[16];
  undefined1 auVar33[16];
  undefined1 auVar34[16];
  undefined1 auVar35[16](*, pauVar36)[16](*, pauVar41)[16](*, pauVar57)[16];
  undefined1 auVar58[16];
  undefined1 auVar59[16](ulong)(local_90 = = (void*)0x0) {
   uVar39 = uVar55 * 4;
   uVar38 = uVar55 * 8;
   uVar40 = Memory::alloc_static(uVar39, false);
   *(undefined8*)( this + 0x10 ) = uVar40;
   lStack_b0 = 0x109ac2;
   local_90 = (void*)Memory::alloc_static(uVar38, false);
   *(void**)( this + 8 ) = local_90;
   if (uVar47 == 0) {
      iVar42 = *(int*)( this + 0x2c );
      lVar56 = *(long*)param_1;
      if (local_90 == (void*)0x0) goto LAB_001095db;
   }
 else {
      pvVar3 = *(void**)( this + 0x10 );
      if (( pvVar3 < (void*)( (long)local_90 + uVar38 ) ) && ( local_90 < (void*)( (long)pvVar3 + uVar39 ) )) {
         uVar39 = 0;
         do {
            *(undefined4*)( (long)pvVar3 + uVar39 * 4 ) = 0;
            *(undefined8*)( (long)local_90 + uVar39 * 8 ) = 0;
            uVar39 = uVar39 + 1;
         }
 while ( uVar55 != uVar39 );
         iVar42 = *(int*)( this + 0x2c );
         lVar56 = *(long*)param_1;
      }
 else {
         memset(pvVar3, 0, uVar39);
         lStack_b0 = 0x109b0a;
         memset(local_90, 0, uVar38);
         iVar42 = *(int*)( this + 0x2c );
         lVar56 = *(long*)param_1;
      }

   }

   if (iVar42 != 0) {
      uVar39 = ( ulong ) * (uint*)( this + 0x28 );
      lVar52 = *(long*)( this + 0x10 );
      goto LAB_00109993;
   }

}
else{iVar42 = *(int*)( this + 0x2c );if (iVar42 != 0) {
   lVar52 = *(long*)( this + 0x10 );
   lVar46 = *(long*)( hash_table_size_primes_inv + uVar39 * 8 );
   uVar38 = lVar56 * 0x3ffff - 1;
   uVar38 = ( uVar38 ^ uVar38 >> 0x1f ) * 0x15;
   uVar38 = ( uVar38 ^ uVar38 >> 0xb ) * 0x41;
   uVar38 = uVar38 >> 0x16 ^ uVar38;
   uVar54 = uVar38 & 0xffffffff;
   if ((int)uVar38 == 0) {
      uVar54 = 1;
   }

   auVar4._8_8_ = 0;
   auVar4._0_8_ = uVar54 * lVar46;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = uVar55;
   lVar44 = SUB168(auVar4 * auVar20, 8);
   uVar43 = *(uint*)( lVar52 + lVar44 * 4 );
   uVar53 = SUB164(auVar4 * auVar20, 8);
   if (uVar43 != 0) {
      uVar50 = 0;
      lVar45 = lVar44;
      do {
         if (( (uint)uVar54 == uVar43 ) && ( lVar56 == *(long*)( *(long*)( (long)local_90 + lVar44 * 8 ) + 0x10 ) )) {
            auVar58._0_8_ = *(long*)( (long)local_90 + (ulong)uVar53 * 8 ) + 0x18;
            auVar58._8_8_ = lVar45;
            return auVar58;
         }

         uVar50 = uVar50 + 1;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = ( ulong )(uVar53 + 1) * lVar46;
         auVar21._8_8_ = 0;
         auVar21._0_8_ = uVar55;
         lVar44 = SUB168(auVar5 * auVar21, 8);
         uVar43 = *(uint*)( lVar52 + lVar44 * 4 );
         uVar53 = SUB164(auVar5 * auVar21, 8);
      }
 while ( ( uVar43 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar43 * lVar46,auVar22._8_8_ = 0,auVar22._0_8_ = uVar55,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar53 + uVar47 ) - SUB164(auVar6 * auVar22, 8)) * lVar46,auVar23._8_8_ = 0,auVar23._0_8_ = uVar55,lVar45 = SUB168(auVar7 * auVar23, 8),uVar50 <= SUB164(auVar7 * auVar23, 8) );
   }

   LAB_00109993:uVar51 = CONCAT44(0, *(uint*)( hash_table_size_primes + uVar39 * 4 ));
   lVar46 = *(long*)( hash_table_size_primes_inv + uVar39 * 8 );
   uVar38 = lVar56 * 0x3ffff - 1;
   uVar38 = ( uVar38 ^ uVar38 >> 0x1f ) * 0x15;
   uVar38 = ( uVar38 ^ uVar38 >> 0xb ) * 0x41;
   uVar38 = uVar38 >> 0x16 ^ uVar38;
   uVar54 = uVar38 & 0xffffffff;
   if ((int)uVar38 == 0) {
      uVar54 = 1;
   }

   auVar16._8_8_ = 0;
   auVar16._0_8_ = uVar54 * lVar46;
   auVar32._8_8_ = 0;
   auVar32._0_8_ = uVar51;
   lVar44 = SUB168(auVar16 * auVar32, 8);
   uVar47 = *(uint*)( lVar52 + lVar44 * 4 );
   uVar43 = SUB164(auVar16 * auVar32, 8);
   if (uVar47 != 0) {
      uVar53 = 0;
      lVar45 = lVar44;
      do {
         if (( (uint)uVar54 == uVar47 ) && ( *(long*)( *(long*)( (long)local_90 + lVar44 * 8 ) + 0x10 ) == lVar56 )) {
            pauVar41 = *(undefined1(**) [16])( (long)local_90 + (ulong)uVar43 * 8 );
            *(undefined4*)( pauVar41[1] + 8 ) = 0;
            lStack_b0 = lVar45;
            goto LAB_00109974;
         }

         uVar53 = uVar53 + 1;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = ( ulong )(uVar43 + 1) * lVar46;
         auVar33._8_8_ = 0;
         auVar33._0_8_ = uVar51;
         lVar44 = SUB168(auVar17 * auVar33, 8);
         uVar47 = *(uint*)( lVar52 + lVar44 * 4 );
         uVar43 = SUB164(auVar17 * auVar33, 8);
      }
 while ( ( uVar47 != 0 ) && ( auVar18._8_8_ = 0 ),auVar18._0_8_ = (ulong)uVar47 * lVar46,auVar34._8_8_ = 0,auVar34._0_8_ = uVar51,auVar19._8_8_ = 0,auVar19._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + uVar39 * 4 ) + uVar43 ) - SUB164(auVar18 * auVar34, 8)) * lVar46,auVar35._8_8_ = 0,auVar35._0_8_ = uVar51,lVar45 = SUB168(auVar19 * auVar35, 8),uVar53 <= SUB164(auVar19 * auVar35, 8) );
   }

}
}LAB_001095db:if ((float)uVar55 * __LC19 < (float)( iVar42 + 1 )) {
   uVar47 = *(uint*)( this + 0x28 );
   if (uVar47 == 0x1c) {
      pauVar41 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_00109974;
   }

   uVar39 = ( ulong )(uVar47 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar43 = *(uint*)( hash_table_size_primes + (ulong)uVar47 * 4 );
   if (uVar47 + 1 < 2) {
      uVar39 = 2;
   }

   uVar47 = *(uint*)( hash_table_size_primes + uVar39 * 4 );
   uVar38 = (ulong)uVar47;
   *(int*)( this + 0x28 ) = (int)uVar39;
   pvVar3 = *(void**)( this + 0x10 );
   uVar39 = uVar38 * 4;
   uVar55 = uVar38 * 8;
   uVar40 = Memory::alloc_static(uVar39, false);
   *(undefined8*)( this + 0x10 ) = uVar40;
   __s_00 = (void*)Memory::alloc_static(uVar55, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar47 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar55 ) ) && ( __s_00 < (void*)( (long)__s + uVar39 ) )) {
         uVar39 = 0;
         do {
            *(undefined4*)( (long)__s + uVar39 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar39 * 8 ) = 0;
            uVar39 = uVar39 + 1;
         }
 while ( uVar38 != uVar39 );
      }
 else {
         memset(__s, 0, uVar39);
         memset(__s_00, 0, uVar55);
      }

   }

   if (uVar43 != 0) {
      uVar39 = 0;
      do {
         uVar47 = *(uint*)( (long)pvVar3 + uVar39 * 4 );
         if (uVar47 != 0) {
            lVar56 = *(long*)( this + 0x10 );
            uVar49 = 0;
            uVar53 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar55 = CONCAT44(0, uVar53);
            lVar52 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar47 * lVar52;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar55;
            lVar46 = SUB168(auVar8 * auVar24, 8);
            puVar1 = (uint*)( lVar56 + lVar46 * 4 );
            iVar42 = SUB164(auVar8 * auVar24, 8);
            uVar50 = *puVar1;
            uVar40 = *(undefined8*)( (long)local_90 + uVar39 * 8 );
            while (uVar50 != 0) {
               auVar9._8_8_ = 0;
               auVar9._0_8_ = (ulong)uVar50 * lVar52;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = uVar55;
               auVar10._8_8_ = 0;
               auVar10._0_8_ = ( ulong )(( uVar53 + iVar42 ) - SUB164(auVar9 * auVar25, 8)) * lVar52;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar55;
               uVar37 = SUB164(auVar10 * auVar26, 8);
               uVar48 = uVar40;
               if (uVar37 < uVar49) {
                  *puVar1 = uVar47;
                  puVar2 = (undefined8*)( (long)__s_00 + lVar46 * 8 );
                  uVar48 = *puVar2;
                  *puVar2 = uVar40;
                  uVar47 = uVar50;
                  uVar49 = uVar37;
               }

               uVar49 = uVar49 + 1;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = ( ulong )(iVar42 + 1) * lVar52;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar55;
               lVar46 = SUB168(auVar11 * auVar27, 8);
               puVar1 = (uint*)( lVar56 + lVar46 * 4 );
               iVar42 = SUB164(auVar11 * auVar27, 8);
               uVar40 = uVar48;
               uVar50 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar46 * 8 ) = uVar40;
            *puVar1 = uVar47;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar39 = uVar39 + 1;
      }
 while ( uVar39 != uVar43 );
      Memory::free_static(local_90, false);
      Memory::free_static(pvVar3, false);
   }

}
uVar40 = *(undefined8*)param_1;pauVar41 = (undefined1(*) [16])operator_new(0x20, "");*pauVar41 = (undefined1[16])0x0;*(undefined4*)( pauVar41[1] + 8 ) = 0;*(undefined8*)pauVar41[1] = uVar40;puVar2 = *(undefined8**)( this + 0x20 );if (puVar2 == (undefined8*)0x0) {
   *(undefined1(**) [16])( this + 0x18 ) = pauVar41;
}
 else {
   *puVar2 = pauVar41;
   *(undefined8**)( *pauVar41 + 8 ) = puVar2;
}
lVar56 = *(long*)( this + 0x10 );*(undefined1(**) [16])( this + 0x20 ) = pauVar41;uVar39 = *(long*)param_1 * 0x3ffff - 1;uVar39 = ( uVar39 ^ uVar39 >> 0x1f ) * 0x15;uVar39 = ( uVar39 ^ uVar39 >> 0xb ) * 0x41;uVar39 = uVar39 >> 0x16 ^ uVar39;uVar55 = uVar39 & 0xffffffff;if ((int)uVar39 == 0) {
   uVar55 = 1;
}
uVar50 = 0;lVar52 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar53 = (uint)uVar55;uVar47 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar39 = CONCAT44(0, uVar47);auVar12._8_8_ = 0;auVar12._0_8_ = uVar55 * lVar52;auVar28._8_8_ = 0;auVar28._0_8_ = uVar39;lStack_b0 = SUB168(auVar12 * auVar28, 8);lVar46 = *(long*)( this + 8 );puVar1 = (uint*)( lVar56 + lStack_b0 * 4 );iVar42 = SUB164(auVar12 * auVar28, 8);uVar43 = *puVar1;pauVar36 = pauVar41;while (uVar43 != 0) {
   auVar13._8_8_ = 0;
   auVar13._0_8_ = (ulong)uVar43 * lVar52;
   auVar29._8_8_ = 0;
   auVar29._0_8_ = uVar39;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = ( ulong )(( uVar47 + iVar42 ) - SUB164(auVar13 * auVar29, 8)) * lVar52;
   auVar30._8_8_ = 0;
   auVar30._0_8_ = uVar39;
   uVar53 = SUB164(auVar14 * auVar30, 8);
   pauVar57 = pauVar36;
   if (uVar53 < uVar50) {
      *puVar1 = (uint)uVar55;
      uVar55 = (ulong)uVar43;
      puVar2 = (undefined8*)( lVar46 + lStack_b0 * 8 );
      pauVar57 = (undefined1(*) [16])*puVar2;
      *puVar2 = pauVar36;
      uVar50 = uVar53;
   }

   uVar53 = (uint)uVar55;
   uVar50 = uVar50 + 1;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(iVar42 + 1) * lVar52;
   auVar31._8_8_ = 0;
   auVar31._0_8_ = uVar39;
   lStack_b0 = SUB168(auVar15 * auVar31, 8);
   puVar1 = (uint*)( lVar56 + lStack_b0 * 4 );
   iVar42 = SUB164(auVar15 * auVar31, 8);
   pauVar36 = pauVar57;
   uVar43 = *puVar1;
}
;*(undefined1(**) [16])( lVar46 + lStack_b0 * 8 ) = pauVar36;*puVar1 = uVar53;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_00109974:auVar59._8_8_ = lStack_b0;auVar59._0_8_ = pauVar41[1] + 8;return auVar59;}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<int, Node*, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Node*> > >::insert(int const&, Node* const&, bool) */void HashMap<int,Node*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Node*>>>::insert(int *param_1, Node **param_2, bool param_3) {
   Node *pNVar1;
   Node *pNVar2;
   undefined8 uVar3;
   undefined1 auVar4[16];
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
   Node *pNVar28;
   uint uVar29;
   uint uVar30;
   uint uVar31;
   ulong uVar32;
   Node *pNVar33;
   Node *pNVar34;
   undefined8 *in_RCX;
   int iVar35;
   undefined7 in_register_00000011;
   uint *puVar36;
   ulong uVar37;
   long lVar38;
   long lVar39;
   ulong uVar40;
   undefined8 uVar41;
   char in_R8B;
   uint uVar42;
   uint uVar43;
   uint uVar44;
   Node *pNVar45;
   Node *local_78;
   puVar36 = (uint*)CONCAT71(in_register_00000011, param_3);
   uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 );
   local_78 = param_2[1];
   if (local_78 == (Node*)0x0) {
      uVar40 = (ulong)uVar30;
      uVar32 = uVar40 * 4;
      uVar37 = uVar40 * 8;
      pNVar34 = (Node*)Memory::alloc_static(uVar32, false);
      param_2[2] = pNVar34;
      local_78 = (Node*)Memory::alloc_static(uVar37, false);
      param_2[1] = local_78;
      if (uVar30 != 0) {
         pNVar34 = param_2[2];
         if (( pNVar34 < local_78 + uVar37 ) && ( local_78 < pNVar34 + uVar32 )) {
            uVar32 = 0;
            do {
               *(undefined4*)( pNVar34 + uVar32 * 4 ) = 0;
               *(undefined8*)( local_78 + uVar32 * 8 ) = 0;
               uVar32 = uVar32 + 1;
            }
 while ( uVar40 != uVar32 );
            goto LAB_00109c5b;
         }

         memset(pNVar34, 0, uVar32);
         memset(local_78, 0, uVar37);
         uVar31 = *puVar36;
         iVar35 = *(int*)( (long)param_2 + 0x2c );
         goto LAB_00109c6b;
      }

      uVar31 = *puVar36;
      iVar35 = *(int*)( (long)param_2 + 0x2c );
      if (local_78 != (Node*)0x0) goto LAB_00109c6b;
   }
 else {
      LAB_00109c5b:uVar31 = *puVar36;
      iVar35 = *(int*)( (long)param_2 + 0x2c );
      LAB_00109c6b:if (iVar35 != 0) {
         uVar32 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 5 ) * 8 );
         uVar29 = ( uVar31 >> 0x10 ^ uVar31 ) * -0x7a143595;
         uVar29 = ( uVar29 ^ uVar29 >> 0xd ) * -0x3d4d51cb;
         uVar44 = uVar29 ^ uVar29 >> 0x10;
         if (uVar29 == uVar29 >> 0x10) {
            uVar44 = 1;
            uVar37 = uVar32;
         }
 else {
            uVar37 = uVar44 * uVar32;
         }

         uVar40 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 ));
         uVar43 = 0;
         auVar4._8_8_ = 0;
         auVar4._0_8_ = uVar40;
         auVar16._8_8_ = 0;
         auVar16._0_8_ = uVar37;
         lVar38 = SUB168(auVar4 * auVar16, 8);
         uVar42 = SUB164(auVar4 * auVar16, 8);
         uVar29 = *(uint*)( param_2[2] + lVar38 * 4 );
         if (uVar29 != 0) {
            do {
               if (( uVar44 == uVar29 ) && ( *(uint*)( *(long*)( local_78 + lVar38 * 8 ) + 0x10 ) == uVar31 )) {
                  pNVar34 = *(Node**)( local_78 + (ulong)uVar42 * 8 );
                  *(undefined8*)( pNVar34 + 0x18 ) = *in_RCX;
                  goto LAB_0010a0e8;
               }

               uVar43 = uVar43 + 1;
               auVar5._8_8_ = 0;
               auVar5._0_8_ = ( uVar42 + 1 ) * uVar32;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = uVar40;
               lVar38 = SUB168(auVar5 * auVar17, 8);
               uVar29 = *(uint*)( param_2[2] + lVar38 * 4 );
               uVar42 = SUB164(auVar5 * auVar17, 8);
            }
 while ( ( uVar29 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = uVar29 * uVar32,auVar18._8_8_ = 0,auVar18._0_8_ = uVar40,auVar7._8_8_ = 0,auVar7._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 ) + uVar42 ) - SUB164(auVar6 * auVar18, 8) ) * uVar32,auVar19._8_8_ = 0,auVar19._0_8_ = uVar40,uVar43 <= SUB164(auVar7 * auVar19, 8) );
         }

      }

   }

   if ((float)uVar30 * __LC19 < (float)( iVar35 + 1 )) {
      uVar30 = *(uint*)( param_2 + 5 );
      if (uVar30 == 0x1c) {
         pNVar34 = (Node*)0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_0010a0e8;
      }

      uVar32 = ( ulong )(uVar30 + 1);
      uVar31 = *(uint*)( hash_table_size_primes + (ulong)uVar30 * 4 );
      *(undefined4*)( (long)param_2 + 0x2c ) = 0;
      if (uVar30 + 1 < 2) {
         uVar32 = 2;
      }

      uVar30 = *(uint*)( hash_table_size_primes + uVar32 * 4 );
      *(int*)( param_2 + 5 ) = (int)uVar32;
      pNVar34 = param_2[2];
      uVar40 = (ulong)uVar30;
      uVar32 = uVar40 * 4;
      uVar37 = uVar40 * 8;
      pNVar33 = (Node*)Memory::alloc_static(uVar32, false);
      param_2[2] = pNVar33;
      pNVar33 = (Node*)Memory::alloc_static(uVar37, false);
      param_2[1] = pNVar33;
      if (uVar30 != 0) {
         pNVar1 = param_2[2];
         if (( pNVar1 < pNVar33 + uVar37 ) && ( pNVar33 < pNVar1 + uVar32 )) {
            uVar32 = 0;
            do {
               *(undefined4*)( pNVar1 + uVar32 * 4 ) = 0;
               *(undefined8*)( pNVar33 + uVar32 * 8 ) = 0;
               uVar32 = uVar32 + 1;
            }
 while ( uVar32 != uVar40 );
         }
 else {
            memset(pNVar1, 0, uVar32);
            memset(pNVar33, 0, uVar37);
         }

      }

      uVar32 = 0;
      if (uVar31 != 0) {
         do {
            uVar30 = *(uint*)( pNVar34 + uVar32 * 4 );
            if (uVar30 != 0) {
               uVar42 = 0;
               pNVar2 = param_2[2];
               uVar29 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 );
               uVar37 = CONCAT44(0, uVar29);
               lVar38 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 5 ) * 8 );
               auVar8._8_8_ = 0;
               auVar8._0_8_ = (ulong)uVar30 * lVar38;
               auVar20._8_8_ = 0;
               auVar20._0_8_ = uVar37;
               lVar39 = SUB168(auVar8 * auVar20, 8);
               pNVar1 = pNVar2 + lVar39 * 4;
               iVar35 = SUB164(auVar8 * auVar20, 8);
               uVar44 = *(uint*)pNVar1;
               uVar3 = *(undefined8*)( local_78 + uVar32 * 8 );
               while (uVar44 != 0) {
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = (ulong)uVar44 * lVar38;
                  auVar21._8_8_ = 0;
                  auVar21._0_8_ = uVar37;
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = ( ulong )(( uVar29 + iVar35 ) - SUB164(auVar9 * auVar21, 8)) * lVar38;
                  auVar22._8_8_ = 0;
                  auVar22._0_8_ = uVar37;
                  uVar43 = SUB164(auVar10 * auVar22, 8);
                  uVar41 = uVar3;
                  if (uVar43 < uVar42) {
                     *(uint*)pNVar1 = uVar30;
                     uVar41 = *(undefined8*)( pNVar33 + lVar39 * 8 );
                     *(undefined8*)( pNVar33 + lVar39 * 8 ) = uVar3;
                     uVar30 = uVar44;
                     uVar42 = uVar43;
                  }

                  uVar42 = uVar42 + 1;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = ( ulong )(iVar35 + 1) * lVar38;
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = uVar37;
                  lVar39 = SUB168(auVar11 * auVar23, 8);
                  pNVar1 = pNVar2 + lVar39 * 4;
                  iVar35 = SUB164(auVar11 * auVar23, 8);
                  uVar3 = uVar41;
                  uVar44 = *(uint*)pNVar1;
               }
;
               *(undefined8*)( pNVar33 + lVar39 * 8 ) = uVar3;
               *(uint*)pNVar1 = uVar30;
               *(int*)( (long)param_2 + 0x2c ) = *(int*)( (long)param_2 + 0x2c ) + 1;
            }

            uVar32 = uVar32 + 1;
         }
 while ( uVar31 != uVar32 );
         Memory::free_static(local_78, false);
         Memory::free_static(pNVar34, false);
      }

   }

   uVar30 = *puVar36;
   uVar3 = *in_RCX;
   pNVar34 = (Node*)operator_new(0x20, "");
   *(uint*)( pNVar34 + 0x10 ) = uVar30;
   *(undefined8*)( pNVar34 + 0x18 ) = uVar3;
   *(undefined1(*) [16])pNVar34 = (undefined1[16])0x0;
   pNVar33 = param_2[4];
   if (pNVar33 == (Node*)0x0) {
      param_2[3] = pNVar34;
      param_2[4] = pNVar34;
   }
 else if (in_R8B == '\0') {
      *(Node**)pNVar33 = pNVar34;
      *(Node**)( pNVar34 + 8 ) = pNVar33;
      param_2[4] = pNVar34;
   }
 else {
      pNVar33 = param_2[3];
      *(Node**)( pNVar33 + 8 ) = pNVar34;
      *(Node**)pNVar34 = pNVar33;
      param_2[3] = pNVar34;
   }

   uVar30 = ( *puVar36 >> 0x10 ^ *puVar36 ) * -0x7a143595;
   uVar31 = ( uVar30 ^ uVar30 >> 0xd ) * -0x3d4d51cb;
   uVar30 = uVar31 ^ uVar31 >> 0x10;
   if (uVar31 == uVar31 >> 0x10) {
      uVar32 = 1;
      uVar30 = 1;
   }
 else {
      uVar32 = (ulong)uVar30;
   }

   uVar44 = 0;
   pNVar1 = param_2[2];
   uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 );
   uVar37 = CONCAT44(0, uVar31);
   lVar38 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 5 ) * 8 );
   auVar12._8_8_ = 0;
   auVar12._0_8_ = uVar32 * lVar38;
   auVar24._8_8_ = 0;
   auVar24._0_8_ = uVar37;
   lVar39 = SUB168(auVar12 * auVar24, 8);
   pNVar2 = param_2[1];
   pNVar33 = pNVar1 + lVar39 * 4;
   iVar35 = SUB164(auVar12 * auVar24, 8);
   uVar29 = *(uint*)pNVar33;
   pNVar28 = pNVar34;
   while (uVar29 != 0) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar29 * lVar38;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar37;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = ( ulong )(( uVar31 + iVar35 ) - SUB164(auVar13 * auVar25, 8)) * lVar38;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar37;
      uVar42 = SUB164(auVar14 * auVar26, 8);
      pNVar45 = pNVar28;
      if (uVar42 < uVar44) {
         *(uint*)pNVar33 = uVar30;
         pNVar33 = pNVar2 + lVar39 * 8;
         pNVar45 = *(Node**)pNVar33;
         *(Node**)pNVar33 = pNVar28;
         uVar30 = uVar29;
         uVar44 = uVar42;
      }

      uVar44 = uVar44 + 1;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = ( ulong )(iVar35 + 1) * lVar38;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar37;
      lVar39 = SUB168(auVar15 * auVar27, 8);
      pNVar33 = pNVar1 + lVar39 * 4;
      iVar35 = SUB164(auVar15 * auVar27, 8);
      pNVar28 = pNVar45;
      uVar29 = *(uint*)pNVar33;
   }
;
   *(Node**)( pNVar2 + lVar39 * 8 ) = pNVar28;
   *(uint*)pNVar33 = uVar30;
   *(int*)( (long)param_2 + 0x2c ) = *(int*)( (long)param_2 + 0x2c ) + 1;
   LAB_0010a0e8:*(Node**)param_1 = pNVar34;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<int, bool, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, bool> > >::operator[](int const&) */undefined1[16];HashMap<int,bool,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,bool>>>::operator [](HashMap<int,bool,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,bool>>>
             *this,int*param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined1 auVar4 [16];
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
  undefined1 auVar29[16];
  undefined1 auVar30[16];
  undefined1 auVar31[16];
  undefined1 auVar32[16];
  undefined1 auVar33[16];
  undefined1 auVar34[16];
  undefined1 auVar35[16](*, pauVar36)[16](*, pauVar42)[16](*, pauVar55)[16];
  undefined1 auVar56[16];
  undefined1 auVar57[16](ulong)(local_70 = = (void*)0x0) {
   uVar40 = uVar51 * 4;
   uVar48 = uVar51 * 8;
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   lStack_90 = 0x10a87b;
   local_70 = (void*)Memory::alloc_static(uVar48, false);
   *(void**)( this + 8 ) = local_70;
   if (uVar39 == 0) {
      iVar44 = *(int*)( this + 0x2c );
      uVar38 = *param_1;
      if (local_70 == (void*)0x0) goto LAB_0010a3e3;
   }
 else {
      pvVar3 = *(void**)( this + 0x10 );
      if (( pvVar3 < (void*)( (long)local_70 + uVar48 ) ) && ( local_70 < (void*)( (long)pvVar3 + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)pvVar3 + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)local_70 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar51 != uVar40 );
         iVar44 = *(int*)( this + 0x2c );
         uVar38 = *param_1;
      }
 else {
         memset(pvVar3, 0, uVar40);
         lStack_90 = 0x10a8c4;
         memset(local_70, 0, uVar48);
         iVar44 = *(int*)( this + 0x2c );
         uVar38 = *param_1;
      }

   }

   if (iVar44 != 0) {
      uVar40 = ( ulong ) * (uint*)( this + 0x28 );
      lVar52 = *(long*)( this + 0x10 );
      goto LAB_0010a763;
   }

}
else{iVar44 = *(int*)( this + 0x2c );if (iVar44 != 0) {
   uVar48 = *(ulong*)( hash_table_size_primes_inv + uVar40 * 8 );
   uVar37 = ( uVar38 >> 0x10 ^ uVar38 ) * -0x7a143595;
   uVar37 = ( uVar37 ^ uVar37 >> 0xd ) * -0x3d4d51cb;
   uVar53 = uVar37 ^ uVar37 >> 0x10;
   if (uVar37 == uVar37 >> 0x10) {
      uVar53 = 1;
      uVar45 = uVar48;
   }
 else {
      uVar45 = uVar53 * uVar48;
   }

   lVar52 = *(long*)( this + 0x10 );
   auVar4._8_8_ = 0;
   auVar4._0_8_ = uVar51;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = uVar45;
   lVar46 = SUB168(auVar4 * auVar20, 8);
   uVar37 = *(uint*)( lVar52 + lVar46 * 4 );
   uVar54 = SUB164(auVar4 * auVar20, 8);
   if (uVar37 != 0) {
      uVar50 = 0;
      lVar47 = lVar46;
      do {
         if (( uVar53 == uVar37 ) && ( uVar38 == *(uint*)( *(long*)( (long)local_70 + lVar46 * 8 ) + 0x10 ) )) {
            auVar56._0_8_ = *(long*)( (long)local_70 + (ulong)uVar54 * 8 ) + 0x14;
            auVar56._8_8_ = lVar47;
            return auVar56;
         }

         uVar50 = uVar50 + 1;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = ( uVar54 + 1 ) * uVar48;
         auVar21._8_8_ = 0;
         auVar21._0_8_ = uVar51;
         lVar46 = SUB168(auVar5 * auVar21, 8);
         uVar37 = *(uint*)( lVar52 + lVar46 * 4 );
         uVar54 = SUB164(auVar5 * auVar21, 8);
      }
 while ( ( uVar37 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = uVar37 * uVar48,auVar22._8_8_ = 0,auVar22._0_8_ = uVar51,auVar7._8_8_ = 0,auVar7._0_8_ = ( ( uVar54 + uVar39 ) - SUB164(auVar6 * auVar22, 8) ) * uVar48,auVar23._8_8_ = 0,auVar23._0_8_ = uVar51,lVar47 = SUB168(auVar7 * auVar23, 8),uVar50 <= SUB164(auVar7 * auVar23, 8) );
   }

   LAB_0010a763:uVar45 = CONCAT44(0, *(uint*)( hash_table_size_primes + uVar40 * 4 ));
   uVar48 = *(ulong*)( hash_table_size_primes_inv + uVar40 * 8 );
   uVar39 = ( uVar38 >> 0x10 ^ uVar38 ) * -0x7a143595;
   uVar39 = ( uVar39 ^ uVar39 >> 0xd ) * -0x3d4d51cb;
   uVar37 = uVar39 ^ uVar39 >> 0x10;
   if (uVar39 == uVar39 >> 0x10) {
      uVar37 = 1;
      uVar43 = uVar48;
   }
 else {
      uVar43 = uVar37 * uVar48;
   }

   auVar16._8_8_ = 0;
   auVar16._0_8_ = uVar45;
   auVar32._8_8_ = 0;
   auVar32._0_8_ = uVar43;
   lVar46 = SUB168(auVar16 * auVar32, 8);
   uVar39 = *(uint*)( lVar52 + lVar46 * 4 );
   uVar53 = SUB164(auVar16 * auVar32, 8);
   if (uVar39 != 0) {
      uVar54 = 0;
      lVar47 = lVar46;
      do {
         if (( uVar37 == uVar39 ) && ( *(uint*)( *(long*)( (long)local_70 + lVar46 * 8 ) + 0x10 ) == uVar38 )) {
            pauVar42 = *(undefined1(**) [16])( (long)local_70 + (ulong)uVar53 * 8 );
            pauVar42[1][4] = 0;
            lStack_90 = lVar47;
            goto LAB_0010a744;
         }

         uVar54 = uVar54 + 1;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = ( uVar53 + 1 ) * uVar48;
         auVar33._8_8_ = 0;
         auVar33._0_8_ = uVar45;
         lVar46 = SUB168(auVar17 * auVar33, 8);
         uVar39 = *(uint*)( lVar52 + lVar46 * 4 );
         uVar53 = SUB164(auVar17 * auVar33, 8);
      }
 while ( ( uVar39 != 0 ) && ( auVar18._8_8_ = 0 ),auVar18._0_8_ = uVar39 * uVar48,auVar34._8_8_ = 0,auVar34._0_8_ = uVar45,auVar19._8_8_ = 0,auVar19._0_8_ = ( ( *(uint*)( hash_table_size_primes + uVar40 * 4 ) + uVar53 ) - SUB164(auVar18 * auVar34, 8) ) * uVar48,auVar35._8_8_ = 0,auVar35._0_8_ = uVar45,lVar47 = SUB168(auVar19 * auVar35, 8),uVar54 <= SUB164(auVar19 * auVar35, 8) );
   }

}
}LAB_0010a3e3:if ((float)uVar51 * __LC19 < (float)( iVar44 + 1 )) {
   uVar38 = *(uint*)( this + 0x28 );
   if (uVar38 == 0x1c) {
      pauVar42 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_0010a744;
   }

   uVar40 = ( ulong )(uVar38 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar39 = *(uint*)( hash_table_size_primes + (ulong)uVar38 * 4 );
   if (uVar38 + 1 < 2) {
      uVar40 = 2;
   }

   uVar38 = *(uint*)( hash_table_size_primes + uVar40 * 4 );
   uVar48 = (ulong)uVar38;
   *(int*)( this + 0x28 ) = (int)uVar40;
   pvVar3 = *(void**)( this + 0x10 );
   uVar40 = uVar48 * 4;
   uVar51 = uVar48 * 8;
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   __s_00 = (void*)Memory::alloc_static(uVar51, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar38 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar51 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar40 != uVar48 );
      }
 else {
         memset(__s, 0, uVar40);
         memset(__s_00, 0, uVar51);
      }

   }

   if (uVar39 != 0) {
      uVar40 = 0;
      do {
         uVar38 = *(uint*)( (long)pvVar3 + uVar40 * 4 );
         if (uVar38 != 0) {
            lVar52 = *(long*)( this + 0x10 );
            uVar54 = 0;
            uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar51 = CONCAT44(0, uVar37);
            lVar46 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar38 * lVar46;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar51;
            lVar47 = SUB168(auVar8 * auVar24, 8);
            puVar1 = (uint*)( lVar52 + lVar47 * 4 );
            iVar44 = SUB164(auVar8 * auVar24, 8);
            uVar53 = *puVar1;
            uVar41 = *(undefined8*)( (long)local_70 + uVar40 * 8 );
            while (uVar53 != 0) {
               auVar9._8_8_ = 0;
               auVar9._0_8_ = (ulong)uVar53 * lVar46;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = uVar51;
               auVar10._8_8_ = 0;
               auVar10._0_8_ = ( ulong )(( uVar37 + iVar44 ) - SUB164(auVar9 * auVar25, 8)) * lVar46;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar51;
               uVar50 = SUB164(auVar10 * auVar26, 8);
               uVar49 = uVar41;
               if (uVar50 < uVar54) {
                  *puVar1 = uVar38;
                  puVar2 = (undefined8*)( (long)__s_00 + lVar47 * 8 );
                  uVar49 = *puVar2;
                  *puVar2 = uVar41;
                  uVar38 = uVar53;
                  uVar54 = uVar50;
               }

               uVar54 = uVar54 + 1;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = ( ulong )(iVar44 + 1) * lVar46;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar51;
               lVar47 = SUB168(auVar11 * auVar27, 8);
               puVar1 = (uint*)( lVar52 + lVar47 * 4 );
               iVar44 = SUB164(auVar11 * auVar27, 8);
               uVar41 = uVar49;
               uVar53 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar47 * 8 ) = uVar41;
            *puVar1 = uVar38;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar40 = uVar40 + 1;
      }
 while ( uVar39 != uVar40 );
      Memory::free_static(local_70, false);
      Memory::free_static(pvVar3, false);
   }

}
iVar44 = *param_1;pauVar42 = (undefined1(*) [16])operator_new(0x18, "");*(int*)pauVar42[1] = iVar44;pauVar42[1][4] = 0;*pauVar42 = (undefined1[16])0x0;puVar2 = *(undefined8**)( this + 0x20 );if (puVar2 == (undefined8*)0x0) {
   *(undefined1(**) [16])( this + 0x18 ) = pauVar42;
}
 else {
   *puVar2 = pauVar42;
   *(undefined8**)( *pauVar42 + 8 ) = puVar2;
}
*(undefined1(**) [16])( this + 0x20 ) = pauVar42;uVar38 = ( ( uint ) * param_1 >> 0x10 ^ *param_1 ) * -0x7a143595;uVar39 = ( uVar38 ^ uVar38 >> 0xd ) * -0x3d4d51cb;uVar38 = uVar39 ^ uVar39 >> 0x10;if (uVar39 == uVar39 >> 0x10) {
   uVar40 = 1;
   uVar38 = 1;
}
 else {
   uVar40 = (ulong)uVar38;
}
uVar53 = 0;lVar52 = *(long*)( this + 0x10 );lVar46 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar51 = CONCAT44(0, uVar39);auVar12._8_8_ = 0;auVar12._0_8_ = uVar40 * lVar46;auVar28._8_8_ = 0;auVar28._0_8_ = uVar51;lStack_90 = SUB168(auVar12 * auVar28, 8);lVar47 = *(long*)( this + 8 );puVar1 = (uint*)( lVar52 + lStack_90 * 4 );iVar44 = SUB164(auVar12 * auVar28, 8);uVar37 = *puVar1;pauVar36 = pauVar42;while (uVar37 != 0) {
   auVar13._8_8_ = 0;
   auVar13._0_8_ = (ulong)uVar37 * lVar46;
   auVar29._8_8_ = 0;
   auVar29._0_8_ = uVar51;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = ( ulong )(( uVar39 + iVar44 ) - SUB164(auVar13 * auVar29, 8)) * lVar46;
   auVar30._8_8_ = 0;
   auVar30._0_8_ = uVar51;
   uVar54 = SUB164(auVar14 * auVar30, 8);
   pauVar55 = pauVar36;
   if (uVar54 < uVar53) {
      *puVar1 = uVar38;
      puVar2 = (undefined8*)( lVar47 + lStack_90 * 8 );
      pauVar55 = (undefined1(*) [16])*puVar2;
      *puVar2 = pauVar36;
      uVar38 = uVar37;
      uVar53 = uVar54;
   }

   uVar53 = uVar53 + 1;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(iVar44 + 1) * lVar46;
   auVar31._8_8_ = 0;
   auVar31._0_8_ = uVar51;
   lStack_90 = SUB168(auVar15 * auVar31, 8);
   puVar1 = (uint*)( lVar52 + lStack_90 * 4 );
   iVar44 = SUB164(auVar15 * auVar31, 8);
   pauVar36 = pauVar55;
   uVar37 = *puVar1;
}
;*(undefined1(**) [16])( lVar47 + lStack_90 * 8 ) = pauVar36;*puVar1 = uVar38;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0010a744:auVar57._8_8_ = lStack_90;auVar57._0_8_ = pauVar42[1] + 4;return auVar57;}/* CowData<char32_t>::_unref() */void CowData<char32_t>::_unref(CowData<char32_t> *this) {
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
/* GLTFSkeleton::_initialize_classv() */void GLTFSkeleton::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_68 = 0;
        local_50 = 6;
        local_58 = "Object";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "RefCounted";
        local_70 = 0;
        local_50 = 10;
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
        if ((code *)PTR__bind_methods_00114008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "RefCounted";
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Resource";
      local_70 = 0;
      local_50 = 8;
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
      Resource::_bind_methods();
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "GLTFSkeleton";
    local_70 = 0;
    local_50 = 0xc;
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
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Resource::_bind_methods) {
      GLTFSkeleton::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* GLTFSkin::get_class() const */

void GLTFSkin::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFSkeleton::get_class() const */

void GLTFSkeleton::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::insert(String const&)
    */

String * HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                   (String *param_1)

{
  CowData<char32_t> *this;
  void *pvVar1;
  void *pvVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  char cVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  int iVar35;
  uint uVar36;
  String *in_RDX;
  ulong uVar37;
  long lVar38;
  long *in_RSI;
  long lVar39;
  uint uVar40;
  ulong uVar41;
  undefined4 uVar42;
  ulong uVar43;
  uint uVar44;
  uint *puVar45;
  uint local_88;
  long local_68;
  
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (*in_RSI == 0) {
    uVar31 = (ulong)uVar28 * 4;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[3] = lVar32;
    lVar32 = Memory::alloc_static((ulong)uVar28 * 8,false);
    *in_RSI = lVar32;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[2] = lVar32;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[1] = lVar32;
    if (uVar28 != 0) {
      memset((void *)in_RSI[3],0,uVar31);
    }
    iVar35 = *(int *)((long)in_RSI + 0x24);
    if (*in_RSI != 0) goto LAB_0010af9c;
  }
  else {
    iVar35 = *(int *)((long)in_RSI + 0x24);
LAB_0010af9c:
    if (iVar35 != 0) {
      uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
      lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      uVar44 = String::hash();
      uVar31 = CONCAT44(0,uVar29);
      lVar39 = in_RSI[3];
      uVar36 = 1;
      if (uVar44 != 0) {
        uVar36 = uVar44;
      }
      uVar40 = 0;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar36 * lVar32;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar31;
      lVar38 = SUB168(auVar11 * auVar23,8);
      uVar44 = *(uint *)(lVar39 + lVar38 * 4);
      iVar35 = SUB164(auVar11 * auVar23,8);
      if (uVar44 == 0) {
        iVar35 = *(int *)((long)in_RSI + 0x24);
      }
      else {
        do {
          if (uVar36 == uVar44) {
            cVar27 = String::operator==((String *)
                                        (*in_RSI + (ulong)*(uint *)(in_RSI[1] + lVar38 * 4) * 8),
                                        in_RDX);
            if (cVar27 != '\0') {
              iVar35 = *(int *)((long)in_RSI + 0x24);
              iVar30 = *(int *)(in_RSI[1] + lVar38 * 4);
              goto LAB_0010b2fb;
            }
            lVar39 = in_RSI[3];
          }
          uVar40 = uVar40 + 1;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)(iVar35 + 1) * lVar32;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar31;
          lVar38 = SUB168(auVar12 * auVar24,8);
          uVar44 = *(uint *)(lVar39 + lVar38 * 4);
          iVar35 = SUB164(auVar12 * auVar24,8);
        } while ((uVar44 != 0) &&
                (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar44 * lVar32, auVar25._8_8_ = 0,
                auVar25._0_8_ = uVar31, auVar14._8_8_ = 0,
                auVar14._0_8_ = (ulong)((uVar29 + iVar35) - SUB164(auVar13 * auVar25,8)) * lVar32,
                auVar26._8_8_ = 0, auVar26._0_8_ = uVar31, uVar40 <= SUB164(auVar14 * auVar26,8)));
        iVar35 = *(int *)((long)in_RSI + 0x24);
      }
    }
  }
  if ((float)uVar28 * __LC19 < (float)(iVar35 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      iVar35 = *(int *)((long)in_RSI + 0x24);
      iVar30 = -1;
      goto LAB_0010b2fb;
    }
    uVar28 = (int)in_RSI[4] + 1;
    uVar31 = (ulong)uVar28;
    if (uVar28 < 2) {
      uVar31 = 2;
    }
    uVar28 = *(uint *)(hash_table_size_primes + uVar31 * 4);
    *(int *)(in_RSI + 4) = (int)uVar31;
    pvVar1 = (void *)in_RSI[3];
    uVar31 = (ulong)uVar28 * 4;
    pvVar2 = (void *)in_RSI[2];
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[3] = lVar32;
    lVar32 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar28 * 8,false);
    *in_RSI = lVar32;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[2] = lVar32;
    lVar32 = Memory::realloc_static((void *)in_RSI[1],uVar31,false);
    in_RSI[1] = lVar32;
    if (uVar28 != 0) {
      memset((void *)in_RSI[3],0,uVar31);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar31 = 0;
      lVar39 = in_RSI[3];
      lVar38 = in_RSI[2];
      do {
        uVar43 = uVar31 & 0xffffffff;
        uVar42 = (undefined4)uVar31;
        uVar44 = 0;
        uVar28 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar31 * 4) * 4);
        uVar37 = (ulong)uVar28;
        uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar41 = CONCAT44(0,uVar29);
        lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar37 * lVar33;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar41;
        lVar34 = SUB168(auVar3 * auVar15,8) * 4;
        iVar35 = SUB164(auVar3 * auVar15,8);
        puVar45 = (uint *)(lVar39 + lVar34);
        uVar36 = *puVar45;
        if (uVar36 == 0) {
          lVar33 = uVar31 * 4;
        }
        else {
          do {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar36 * lVar33;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar41;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)((uVar29 + iVar35) - SUB164(auVar4 * auVar16,8)) * lVar33;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar41;
            local_88 = SUB164(auVar5 * auVar17,8);
            if (local_88 < uVar44) {
              *(int *)(lVar38 + uVar43 * 4) = iVar35;
              uVar28 = *puVar45;
              *puVar45 = (uint)uVar37;
              uVar36 = *(uint *)(lVar34 + lVar32);
              uVar37 = (ulong)uVar28;
              *(uint *)(lVar34 + lVar32) = (uint)uVar43;
              uVar43 = (ulong)uVar36;
              uVar44 = local_88;
            }
            uVar42 = (undefined4)uVar43;
            uVar28 = (uint)uVar37;
            uVar44 = uVar44 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)(iVar35 + 1) * lVar33;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar41;
            lVar34 = SUB168(auVar6 * auVar18,8) * 4;
            iVar35 = SUB164(auVar6 * auVar18,8);
            puVar45 = (uint *)(lVar39 + lVar34);
            uVar36 = *puVar45;
          } while (uVar36 != 0);
          lVar33 = uVar43 << 2;
        }
        *puVar45 = uVar28;
        uVar31 = uVar31 + 1;
        *(int *)(lVar38 + lVar33) = iVar35;
        *(undefined4 *)(lVar32 + lVar34) = uVar42;
      } while ((uint)uVar31 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
  }
  uVar29 = String::hash();
  uVar28 = 1;
  if (uVar29 != 0) {
    uVar28 = uVar29;
  }
  uVar31 = (ulong)uVar28;
  this = (CowData<char32_t> *)(*in_RSI + (ulong)*(uint *)((long)in_RSI + 0x24) * 8);
  *(undefined8 *)this = 0;
  CowData<char32_t>::_ref(this,(CowData *)in_RDX);
  uVar29 = *(uint *)((long)in_RSI + 0x24);
  lVar39 = in_RSI[3];
  uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar37 = CONCAT44(0,uVar36);
  lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar31 * lVar38;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar37;
  lVar32 = SUB168(auVar7 * auVar19,8) * 4;
  iVar35 = SUB164(auVar7 * auVar19,8);
  puVar45 = (uint *)(lVar39 + lVar32);
  uVar44 = *puVar45;
  if (uVar44 == 0) {
    local_68 = in_RSI[2];
    lVar34 = in_RSI[1];
  }
  else {
    uVar40 = 0;
    local_68 = in_RSI[2];
    lVar34 = in_RSI[1];
    do {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar44 * lVar38;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar37;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)((uVar36 + iVar35) - SUB164(auVar8 * auVar20,8)) * lVar38;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar37;
      local_88 = SUB164(auVar9 * auVar21,8);
      if (local_88 < uVar40) {
        *(int *)(local_68 + (ulong)uVar29 * 4) = iVar35;
        uVar28 = *puVar45;
        *puVar45 = (uint)uVar31;
        uVar44 = *(uint *)(lVar32 + lVar34);
        uVar31 = (ulong)uVar28;
        *(uint *)(lVar32 + lVar34) = uVar29;
        uVar29 = uVar44;
        uVar40 = local_88;
      }
      uVar28 = (uint)uVar31;
      uVar40 = uVar40 + 1;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)(iVar35 + 1) * lVar38;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar37;
      lVar32 = SUB168(auVar10 * auVar22,8) * 4;
      iVar35 = SUB164(auVar10 * auVar22,8);
      puVar45 = (uint *)(lVar39 + lVar32);
      uVar44 = *puVar45;
    } while (uVar44 != 0);
  }
  *puVar45 = uVar28;
  *(int *)(local_68 + (ulong)uVar29 * 4) = iVar35;
  *(uint *)(lVar34 + lVar32) = uVar29;
  iVar30 = *(int *)((long)in_RSI + 0x24);
  iVar35 = iVar30 + 1;
  *(int *)((long)in_RSI + 0x24) = iVar35;
LAB_0010b2fb:
  lVar32 = *in_RSI;
  *(int *)(param_1 + 0xc) = iVar30;
  *(long *)param_1 = lVar32;
  *(int *)(param_1 + 8) = iVar35;
  return param_1;
}



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_0010b69b;
  }
  cVar5 = String::operator==(param_1,"Resource");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0010b69b;
    }
    cVar5 = String::operator==(param_1,"RefCounted");
    if (cVar5 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar4 = *(long *)(lVar2 + 0x20);
        if (lVar4 == 0) {
          local_58 = (char *)0x0;
        }
        else {
          local_58 = (char *)0x0;
          if (*(char **)(lVar4 + 8) == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar4 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_58,*(char **)(lVar4 + 8));
          }
        }
        cVar5 = String::operator==(param_1,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        if (cVar5 != '\0') goto LAB_0010b69b;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = String::operator==(param_1,"Object");
        return uVar6;
      }
      goto LAB_0010b82e;
    }
  }
LAB_0010b69b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b82e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFSkin::is_class(String const&) const */

undefined8 __thiscall GLTFSkin::is_class(GLTFSkin *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar4 != '\0') goto LAB_0010b93b;
  }
  cVar4 = String::operator==(param_1,"GLTFSkin");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Resource::is_class((Resource *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010b93b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFSkeleton::is_class(String const&) const */

undefined8 __thiscall GLTFSkeleton::is_class(GLTFSkeleton *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar4 != '\0') goto LAB_0010ba8b;
  }
  cVar4 = String::operator==(param_1,"GLTFSkeleton");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Resource::is_class((Resource *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010ba8b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFSkin::_initialize_classv() */

void GLTFSkin::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_68 = 0;
        String::parse_latin1((String *)&local_68,"Object");
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "RefCounted";
        local_70 = 0;
        local_50 = 10;
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
        if ((code *)PTR__bind_methods_00114008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "RefCounted";
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Resource";
      local_70 = 0;
      local_50 = 8;
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
      Resource::_bind_methods();
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "GLTFSkin";
    local_70 = 0;
    local_50 = 8;
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
    if ((code *)PTR__bind_methods_00114010 != Resource::_bind_methods) {
      GLTFSkin::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined7 in_register_00000031;
  List *pLVar5;
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
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = "RefCounted";
  local_88 = 0;
  local_90 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RefCounted";
  local_98 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_0010bfbd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010bfbd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0010bfdf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0010bfdf:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar5 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)pLVar5;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Resource";
  local_98 = 0;
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_0010c33d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010c33d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010c35f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010c35f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Resource",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFSkeleton::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall GLTFSkeleton::_get_property_listv(GLTFSkeleton *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GLTFSkeleton";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GLTFSkeleton";
  local_98 = 0;
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_0010c71d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010c71d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010c73f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010c73f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"GLTFSkeleton",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFSkin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall GLTFSkin::_get_property_listv(GLTFSkin *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GLTFSkin";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GLTFSkin";
  local_98 = 0;
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_0010cafd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010cafd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010cb1f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010cb1f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"GLTFSkin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<GLTFNode>::unref() */

void __thiscall Ref<GLTFNode>::unref(Ref<GLTFNode> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* Ref<GLTFSkin>::unref() */

void __thiscall Ref<GLTFSkin>::unref(Ref<GLTFSkin> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* RBSet<int, Comparator<int>, DefaultAllocator>::clear() */

void __thiscall
RBSet<int,Comparator<int>,DefaultAllocator>::clear
          (RBSet<int,Comparator<int>,DefaultAllocator> *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  void *pvVar6;
  Element *pEVar7;
  
  pvVar6 = *(void **)this;
  if (pvVar6 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar6 + 0x10);
    pEVar2 = *(Element **)(this + 8);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar7) {
          pEVar4 = *(Element **)(pEVar7 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar7) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar7 != pEVar4) {
            pEVar5 = *(Element **)(pEVar4 + 0x10);
            if (pEVar7 != pEVar5) {
              _cleanup_tree(this,pEVar5);
              pEVar5 = *(Element **)(this + 8);
            }
            if (pEVar5 != *(Element **)(pEVar4 + 8)) {
              _cleanup_tree(this,*(Element **)(pEVar4 + 8));
            }
            Memory::free_static(pEVar4,false);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar2 + 0x10);
        if (pEVar7 != pEVar3) {
          if (*(Element **)(pEVar7 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar7 = *(Element **)(pEVar2 + 8);
        if (pEVar3 != pEVar7) {
          pEVar4 = *(Element **)(pEVar7 + 0x10);
          if (pEVar3 != pEVar4) {
            pEVar5 = *(Element **)(pEVar4 + 0x10);
            if (pEVar3 != pEVar5) {
              _cleanup_tree(this,pEVar5);
              pEVar5 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar4 + 8) != pEVar5) {
              _cleanup_tree(this,*(Element **)(pEVar4 + 8));
            }
            Memory::free_static(pEVar4,false);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar1,false);
      pvVar6 = *(void **)this;
      pEVar2 = *(Element **)(this + 8);
    }
    *(Element **)((long)pvVar6 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x10) = 0;
    Memory::free_static(pvVar6,false);
    *(undefined8 *)this = 0;
  }
  return;
}



/* Ref<GLTFSkeleton>::unref() */

void __thiscall Ref<GLTFSkeleton>::unref(Ref<GLTFSkeleton> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* void List<int, DefaultAllocator>::sort_custom<Comparator<int> >() */

void __thiscall
List<int,DefaultAllocator>::sort_custom<Comparator<int>>(List<int,DefaultAllocator> *this)

{
  size_t __n;
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  Element *pEVar4;
  Element **__src;
  long lVar5;
  Element *pEVar6;
  Element **ppEVar7;
  Element *pEVar8;
  long lVar9;
  Element *pEVar10;
  Element *pEVar11;
  Element **ppEVar12;
  Element *pEVar13;
  long lVar14;
  Element **local_60;
  
  if (*(long *)this == 0) {
    return;
  }
  iVar1 = *(int *)(*(long *)this + 0x10);
  if (iVar1 < 2) {
    return;
  }
  pEVar4 = (Element *)(long)iVar1;
  __src = (Element **)Memory::alloc_static((long)pEVar4 * 8,true);
  if (__src == (Element **)0x0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
    local_60 = (Element **)0x8;
  }
  else {
    __src[-1] = pEVar4;
    local_60 = __src + 1;
  }
  if (*(long **)this != (long *)0x0) {
    ppEVar7 = __src;
    for (pEVar13 = (Element *)**(long **)this; pEVar13 != (Element *)0x0;
        pEVar13 = *(Element **)(pEVar13 + 8)) {
      *ppEVar7 = pEVar13;
      ppEVar7 = ppEVar7 + 1;
    }
  }
  lVar9 = 0;
  pEVar13 = pEVar4;
  do {
    pEVar13 = (Element *)((long)pEVar13 >> 1);
    lVar9 = lVar9 + 1;
  } while (pEVar13 != (Element *)0x1);
  SortArray<List<int,DefaultAllocator>::Element*,List<int,DefaultAllocator>::AuxiliaryComparator<Comparator<int>>,true>
  ::introsort(0,(long)pEVar4,__src,lVar9 * 2);
  if ((long)pEVar4 < 0x11) {
    pEVar13 = (Element *)0x1;
    pEVar8 = *__src;
    do {
      while( true ) {
        pEVar6 = __src[(long)pEVar13];
        __n = (long)pEVar13 * 8;
        iVar2 = *(int *)pEVar6;
        if (iVar2 < *(int *)pEVar8) break;
        pEVar8 = __src[(long)(pEVar13 + -1)];
        ppEVar7 = __src + (long)pEVar13;
        pEVar10 = pEVar13 + -1;
        if (iVar2 < *(int *)pEVar8) {
          do {
            pEVar11 = pEVar10;
            if (pEVar11 == (Element *)0x0) {
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              ppEVar7 = local_60;
              goto LAB_0010d433;
            }
            __src[(long)(pEVar11 + 1)] = pEVar8;
            pEVar8 = __src[(long)(pEVar11 + -1)];
            pEVar10 = pEVar11 + -1;
          } while (iVar2 < *(int *)pEVar8);
          ppEVar7 = __src + (long)pEVar11;
        }
LAB_0010d433:
        pEVar13 = pEVar13 + 1;
        *ppEVar7 = pEVar6;
        pEVar6 = *__src;
        pEVar8 = pEVar6;
        if (pEVar4 == pEVar13) goto LAB_0010d2e0;
      }
      pEVar13 = pEVar13 + 1;
      memmove(__src + 1,__src,__n);
      *__src = pEVar6;
      pEVar8 = pEVar6;
    } while (pEVar4 != pEVar13);
  }
  else {
    ppEVar7 = __src + 1;
    lVar9 = 1;
    do {
      while( true ) {
        lVar14 = lVar9;
        pEVar13 = *ppEVar7;
        iVar2 = *(int *)pEVar13;
        if (iVar2 < *(int *)*__src) break;
        pEVar8 = ppEVar7[-1];
        lVar9 = lVar14 + -1;
        ppEVar12 = ppEVar7;
        if (iVar2 < *(int *)pEVar8) {
          do {
            lVar5 = lVar9;
            if (lVar5 == 0) {
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              ppEVar12 = local_60;
              goto LAB_0010d22f;
            }
            __src[lVar5 + 1] = pEVar8;
            pEVar8 = __src[lVar5 + -1];
            lVar9 = lVar5 + -1;
          } while (iVar2 < *(int *)pEVar8);
          ppEVar12 = __src + lVar5;
        }
LAB_0010d22f:
        *ppEVar12 = pEVar13;
        ppEVar7 = ppEVar7 + 1;
        lVar9 = lVar14 + 1;
        if (lVar14 + 1 == 0x10) goto LAB_0010d240;
      }
      memmove(__src + 1,__src,lVar14 * 8);
      ppEVar7 = ppEVar7 + 1;
      *__src = pEVar13;
      lVar9 = lVar14 + 1;
    } while (lVar14 + 1 != 0x10);
LAB_0010d240:
    pEVar13 = (Element *)(lVar14 + 1);
    ppEVar7 = __src + 0x10;
    do {
      pEVar6 = *ppEVar7;
      pEVar10 = ppEVar7[-1];
      pEVar8 = pEVar13 + -1;
      iVar2 = *(int *)pEVar6;
      ppEVar12 = ppEVar7;
      if (iVar2 < *(int *)pEVar10) {
        do {
          __src[(long)(pEVar8 + 1)] = pEVar10;
          pEVar11 = pEVar8 + -1;
          pEVar10 = __src[(long)pEVar11];
          if (*(int *)pEVar10 <= iVar2) {
            ppEVar12 = __src + (long)pEVar8;
            goto LAB_0010d2c3;
          }
          pEVar8 = pEVar11;
        } while (pEVar11 != (Element *)0x0);
        _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                         "bad comparison function; sorting will be broken",0,0);
        ppEVar12 = local_60;
      }
LAB_0010d2c3:
      pEVar13 = pEVar13 + 1;
      *ppEVar12 = pEVar6;
      ppEVar7 = ppEVar7 + 1;
    } while (pEVar4 != pEVar13);
    pEVar6 = *__src;
  }
LAB_0010d2e0:
  puVar3 = *(undefined8 **)this;
  *puVar3 = pEVar6;
  *(undefined8 *)(pEVar6 + 0x10) = 0;
  *(Element **)(*__src + 8) = __src[1];
  pEVar13 = __src[(long)(pEVar4 + -1)];
  puVar3[1] = pEVar13;
  *(Element **)(pEVar13 + 0x10) = __src[(long)(pEVar4 + -2)];
  *(undefined8 *)(__src[(long)(pEVar4 + -1)] + 8) = 0;
  if (iVar1 != 2) {
    ppEVar7 = __src;
    do {
      ppEVar12 = ppEVar7 + 1;
      *(Element **)(ppEVar7[1] + 0x10) = *ppEVar7;
      *(Element **)(*ppEVar12 + 8) = ppEVar7[2];
      ppEVar7 = ppEVar12;
    } while (ppEVar12 != __src + (iVar1 - 2));
  }
  Memory::free_static(__src,true);
  return;
}



/* Ref<Skin>::unref() */

void __thiscall Ref<Skin>::unref(Ref<Skin> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<int>::_unref() */

void __thiscall CowData<int>::_unref(CowData<int> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* GLTFSkeleton::~GLTFSkeleton() */

void __thiscall GLTFSkeleton::~GLTFSkeleton(GLTFSkeleton *this)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  
  *(undefined ***)this = &PTR__initialize_classv_00110698;
  if (*(long *)(this + 0x2c8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2c8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar5 = *(long *)(this + 0x2c8);
      *(undefined8 *)(this + 0x2c8) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  pvVar6 = *(void **)(this + 0x298);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 700) != 0) {
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x2b8) * 4);
      if (uVar3 == 0) {
        *(undefined4 *)(this + 700) = 0;
        *(undefined1 (*) [16])(this + 0x2a8) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x2a0) + lVar5) != 0) {
            *(int *)(*(long *)(this + 0x2a0) + lVar5) = 0;
            Memory::free_static(*(void **)((long)pvVar6 + lVar5 * 2),false);
            pvVar6 = *(void **)(this + 0x298);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar3 << 2);
        *(undefined4 *)(this + 700) = 0;
        *(undefined1 (*) [16])(this + 0x2a8) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_0010d627;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x2a0),false);
  }
LAB_0010d627:
  pvVar6 = *(void **)(this + 0x268);
  if (pvVar6 == (void *)0x0) goto LAB_0010d6cb;
  if (*(int *)(this + 0x28c) != 0) {
    if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x288) * 4) != 0) {
      memset(*(void **)(this + 0x280),0,
             (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x288) * 4) << 2);
      if (*(int *)(this + 0x28c) == 0) goto LAB_0010d728;
    }
    lVar5 = 0;
    do {
      plVar1 = (long *)((long)pvVar6 + lVar5 * 8);
      if (*plVar1 != 0) {
        LOCK();
        plVar2 = (long *)(*plVar1 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          lVar4 = *plVar1;
          *plVar1 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
        pvVar6 = *(void **)(this + 0x268);
      }
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < *(uint *)(this + 0x28c));
    *(undefined4 *)(this + 0x28c) = 0;
    if (pvVar6 == (void *)0x0) goto LAB_0010d6cb;
  }
LAB_0010d728:
  Memory::free_static(pvVar6,false);
  Memory::free_static(*(void **)(this + 0x278),false);
  Memory::free_static(*(void **)(this + 0x270),false);
  Memory::free_static(*(void **)(this + 0x280),false);
LAB_0010d6cb:
  CowData<int>::_unref((CowData<int> *)(this + 600));
  CowData<int>::_unref((CowData<int> *)(this + 0x248));
  Resource::~Resource((Resource *)this);
  return;
}



/* GLTFSkeleton::~GLTFSkeleton() */

void __thiscall GLTFSkeleton::~GLTFSkeleton(GLTFSkeleton *this)

{
  ~GLTFSkeleton(this);
  operator_delete(this,0x2d0);
  return;
}



/* GLTFSkin::~GLTFSkin() */

void __thiscall GLTFSkin::~GLTFSkin(GLTFSkin *this)

{
  long *plVar1;
  uint uVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  void *pvVar6;
  bool bVar7;
  
  *(undefined ***)this = &PTR__initialize_classv_00110870;
  if (*(long *)(this + 0x300) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x300);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  pvVar6 = *(void **)(this + 0x2d8);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x2fc) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x2f8) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x2fc) = 0;
        *(undefined1 (*) [16])(this + 0x2e8) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x2e0) + lVar5) != 0) {
            bVar7 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0x2e0) + lVar5) = 0;
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            if ((bVar7) && (*(long *)((long)pvVar6 + 0x18) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0x2d8);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while ((ulong)uVar2 << 2 != lVar5);
        *(undefined4 *)(this + 0x2fc) = 0;
        *(undefined1 (*) [16])(this + 0x2e8) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_0010d8a2;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x2e0),false);
  }
LAB_0010d8a2:
  pvVar6 = *(void **)(this + 0x2a8);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x2cc) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x2c8) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x2cc) = 0;
        *(undefined1 (*) [16])(this + 0x2b8) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x2b0) + lVar5) != 0) {
            *(int *)(*(long *)(this + 0x2b0) + lVar5) = 0;
            Memory::free_static(*(void **)((long)pvVar6 + lVar5 * 2),false);
            pvVar6 = *(void **)(this + 0x2a8);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x2cc) = 0;
        *(undefined1 (*) [16])(this + 0x2b8) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_0010d937;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x2b0),false);
  }
LAB_0010d937:
  CowData<int>::_unref((CowData<int> *)(this + 0x290));
  CowData<int>::_unref((CowData<int> *)(this + 0x280));
  CowData<int>::_unref((CowData<int> *)(this + 0x270));
  if (*(long *)(this + 0x260) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x260) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar5 = *(long *)(this + 0x260);
      *(undefined8 *)(this + 0x260) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  CowData<int>::_unref((CowData<int> *)(this + 0x250));
  Resource::~Resource((Resource *)this);
  return;
}



/* GLTFSkin::~GLTFSkin() */

void __thiscall GLTFSkin::~GLTFSkin(GLTFSkin *this)

{
  ~GLTFSkin(this);
  operator_delete(this,0x308);
  return;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* SkinTool::_capture_nodes_in_skin(Vector<Ref<GLTFNode> > const&, Ref<GLTFSkin>, int) [clone .cold]
    */

void SkinTool::_capture_nodes_in_skin(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* SkinTool::_reparent_non_joint_skeleton_subtrees(Vector<Ref<GLTFNode> >&, Ref<GLTFSkeleton>,
   Vector<int> const&) [clone .cold] */

void SkinTool::_reparent_non_joint_skeleton_subtrees(void)

{
  code *pcVar1;
  
  DAT_00000290 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* SkinTool::_recurse_children(Vector<Ref<GLTFNode> >&, int, RBSet<int, Comparator<int>,
   DefaultAllocator>&, HashSet<int, HashMapHasherDefault, HashMapComparatorDefault<int> >&) [clone
   .cold] */

void SkinTool::_recurse_children(Vector *param_1,int param_2,RBSet *param_3,HashSet *param_4)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector<int> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector<int>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Ref<GLTFSkin> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<GLTFSkin>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Ref<GLTFSkeleton> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<GLTFSkeleton>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<int>::_realloc(long) */

undefined8 __thiscall CowData<int>::_realloc(CowData<int> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<int>::resize<false>(long) */

undefined8 __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar8 = 0;
    lVar2 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar8) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar2 = lVar8 * 4;
    if (lVar2 != 0) {
      uVar3 = lVar2 - 1U | lVar2 - 1U >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      lVar2 = (uVar3 | uVar3 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 == 0) {
LAB_0010dde0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar3 = param_1 * 4 - 1;
  uVar3 = uVar3 | uVar3 >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar3 = uVar3 | uVar3 >> 0x20;
  lVar7 = uVar3 + 1;
  if (lVar7 == 0) goto LAB_0010dde0;
  if (lVar8 < param_1) {
    if (lVar7 != lVar2) {
      if (lVar8 == 0) {
        puVar4 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
        if (puVar4 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar6 = puVar4 + 2;
        *puVar4 = 1;
        puVar4[1] = 0;
        *(undefined8 **)this = puVar6;
        goto LAB_0010dd11;
      }
      uVar5 = _realloc(this,lVar7);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    puVar6 = *(undefined8 **)this;
    if (puVar6 != (undefined8 *)0x0) {
LAB_0010dd11:
      puVar6[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar7 != lVar2) && (uVar5 = _realloc(this,lVar7), (int)uVar5 != 0)) {
      return uVar5;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Vector<int>::append_array(Vector<int>) */

void __thiscall Vector<int>::append_array(Vector<int> *this,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(param_2 + 8) == 0) {
    return;
  }
  lVar2 = *(long *)(*(long *)(param_2 + 8) + -8);
  if (lVar2 != 0) {
    if (*(long *)(this + 8) == 0) {
      lVar6 = 0;
      lVar5 = lVar2;
    }
    else {
      lVar6 = *(long *)(*(long *)(this + 8) + -8);
      lVar5 = lVar2 + lVar6;
    }
    CowData<int>::resize<false>((CowData<int> *)(this + 8),lVar5);
    if (0 < lVar2) {
      lVar6 = lVar6 << 2;
      lVar5 = 0;
      do {
        lVar3 = *(long *)(param_2 + 8);
        if (lVar3 == 0) {
          lVar7 = 0;
LAB_0010dee9:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar7,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar3 + -8);
        if (lVar7 <= lVar5) goto LAB_0010dee9;
        uVar1 = *(undefined4 *)(lVar3 + lVar5 * 4);
        lVar5 = lVar5 + 1;
        CowData<int>::_copy_on_write((CowData<int> *)(this + 8));
        *(undefined4 *)(*(long *)(this + 8) + lVar6) = uVar1;
        lVar6 = lVar6 + 4;
      } while (lVar5 != lVar2);
    }
  }
  return;
}



/* DisjointSet<int, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultAllocator>::get_members(Vector<int>&, int) */

void __thiscall
DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::get_members
          (DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>
           *this,Vector *param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  Element *pEVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  Element *pEVar14;
  char *pcVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  Element *pEVar19;
  undefined8 uVar20;
  uint uVar21;
  Element *pEVar22;
  Element *pEVar23;
  Element *pEVar24;
  ulong uVar25;
  Element *pEVar26;
  uint uVar27;
  undefined1 auVar28 [16];
  
  lVar1 = *(long *)(this + 8);
  if ((lVar1 != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar2 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar13 = ((uint)param_2 >> 0x10 ^ param_2) * -0x7a143595;
    uVar13 = (uVar13 ^ uVar13 >> 0xd) * -0x3d4d51cb;
    uVar21 = uVar13 ^ uVar13 >> 0x10;
    if (uVar13 == uVar13 >> 0x10) {
      uVar21 = 1;
      uVar17 = uVar2;
    }
    else {
      uVar17 = uVar21 * uVar2;
    }
    uVar25 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar25;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar17;
    lVar18 = SUB168(auVar5 * auVar9,8);
    uVar13 = *(uint *)(*(long *)(this + 0x10) + lVar18 * 4);
    uVar16 = SUB164(auVar5 * auVar9,8);
    if (uVar13 != 0) {
      uVar27 = 0;
      while ((uVar21 != uVar13 || (*(int *)(*(long *)(lVar1 + lVar18 * 8) + 0x10) != param_2))) {
        uVar27 = uVar27 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (uVar16 + 1) * uVar2;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar25;
        lVar18 = SUB168(auVar6 * auVar10,8);
        uVar13 = *(uint *)(*(long *)(this + 0x10) + lVar18 * 4);
        uVar16 = SUB164(auVar6 * auVar10,8);
        if ((uVar13 == 0) ||
           (auVar7._8_8_ = 0, auVar7._0_8_ = uVar13 * uVar2, auVar11._8_8_ = 0,
           auVar11._0_8_ = uVar25, auVar8._8_8_ = 0,
           auVar8._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4) +
                           uVar16) - SUB164(auVar7 * auVar11,8)) * uVar2, auVar12._8_8_ = 0,
           auVar12._0_8_ = uVar25, SUB164(auVar8 * auVar12,8) < uVar27)) goto LAB_0010e1a0;
      }
      lVar1 = *(long *)(lVar1 + (ulong)uVar16 * 8);
      if (lVar1 != 0) {
        pEVar3 = *(Element **)(lVar1 + 0x18);
        if (*(Element **)(pEVar3 + 8) == pEVar3) {
          for (puVar4 = *(undefined8 **)(this + 0x18); puVar4 != (undefined8 *)0x0;
              puVar4 = (undefined8 *)*puVar4) {
            pEVar14 = (Element *)puVar4[3];
            pEVar19 = *(Element **)(pEVar14 + 8);
            if (pEVar14 != pEVar19) {
              pEVar22 = *(Element **)(pEVar19 + 8);
              if (pEVar19 != pEVar22) {
                pEVar23 = *(Element **)(pEVar22 + 8);
                auVar28._8_8_ = pEVar19;
                auVar28._0_8_ = pEVar23;
                if (pEVar22 != pEVar23) {
                  pEVar24 = *(Element **)(pEVar23 + 8);
                  if (pEVar23 != pEVar24) {
                    pEVar26 = *(Element **)(pEVar24 + 8);
                    auVar28._0_8_ = pEVar26;
                    if (pEVar24 != pEVar26) {
                      if (pEVar26 != *(Element **)(pEVar26 + 8)) {
                        auVar28 = get_parent(*(Element **)(pEVar26 + 8));
                        *(long *)(pEVar26 + 8) = auVar28._0_8_;
                      }
                      *(long *)(pEVar24 + 8) = auVar28._0_8_;
                    }
                    *(long *)(pEVar23 + 8) = auVar28._0_8_;
                  }
                  *(long *)(pEVar22 + 8) = auVar28._0_8_;
                }
                pEVar19 = auVar28._0_8_;
                *(Element **)(auVar28._8_8_ + 8) = pEVar19;
              }
              *(Element **)(pEVar14 + 8) = pEVar19;
            }
            if (pEVar3 == pEVar19) {
              Vector<int>::push_back((Vector<int> *)param_1,*(int *)(puVar4 + 2));
            }
          }
          return;
        }
        uVar20 = 0x8c;
        pcVar15 = "Condition \"rep_element->parent != rep_element\" is true.";
        goto LAB_0010e1b2;
      }
    }
  }
LAB_0010e1a0:
  uVar20 = 0x89;
  pcVar15 = "Parameter \"rep_itr\" is null.";
LAB_0010e1b2:
  _err_print_error("get_members","./core/math/disjoint_set.h",uVar20,pcVar15,0,0);
  return;
}



/* DisjointSet<int, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultAllocator>::get_representatives(Vector<int>&) */

void __thiscall
DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::
get_representatives(DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>
                    *this,Vector *param_1)

{
  int *piVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x18);
  do {
    if (plVar2 == (long *)0x0) {
      return;
    }
    while (piVar1 = (int *)plVar2[3], *(int **)(piVar1 + 2) != piVar1) {
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        return;
      }
    }
    Vector<int>::push_back((Vector<int> *)param_1,*piVar1);
    plVar2 = (long *)*plVar2;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, DisjointSet<int, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultAllocator>::Element*, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, DisjointSet<int, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultAllocator>::Element*> > >::insert(int const&,
   DisjointSet<int, HashMapHasherDefault, HashMapComparatorDefault<int>, DefaultAllocator>::Element*
   const&, bool) */

int * HashMap<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*>>>
      ::insert(int *param_1,Element **param_2,bool param_3)

{
  uint uVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  char cVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  Element *pEVar28;
  Element *pEVar29;
  undefined8 *in_RCX;
  int iVar30;
  undefined7 in_register_00000011;
  uint *puVar31;
  long lVar32;
  ulong uVar33;
  undefined8 uVar34;
  char in_R8B;
  uint uVar35;
  uint uVar36;
  ulong uVar37;
  Element *pEVar38;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  puVar31 = (uint *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar25 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  if (param_2[1] == (Element *)0x0) {
    uVar33 = (ulong)uVar25;
    uVar27 = uVar33 * 4;
    uVar37 = uVar33 * 8;
    pEVar29 = (Element *)Memory::alloc_static(uVar27,false);
    param_2[2] = pEVar29;
    pEVar29 = (Element *)Memory::alloc_static(uVar37,false);
    param_2[1] = pEVar29;
    if (uVar25 != 0) {
      pEVar2 = param_2[2];
      if ((pEVar2 < pEVar29 + uVar37) && (pEVar29 < pEVar2 + uVar27)) {
        uVar27 = 0;
        do {
          *(undefined4 *)(pEVar2 + uVar27 * 4) = 0;
          *(undefined8 *)(pEVar29 + uVar27 * 8) = 0;
          uVar27 = uVar27 + 1;
        } while (uVar33 != uVar27);
      }
      else {
        memset(pEVar2,0,uVar27);
        memset(pEVar29,0,uVar37);
      }
    }
  }
  uVar26 = *puVar31;
  local_44 = 0;
  cVar23 = _lookup_pos((HashMap<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*>>>
                        *)param_2,(int *)(ulong)uVar26,&local_44);
  if (cVar23 == '\0') {
    if ((float)uVar25 * __LC19 < (float)(*(int *)((long)param_2 + 0x2c) + 1)) {
      uVar25 = *(uint *)(param_2 + 5);
      if (uVar25 == 0x1c) {
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        pEVar29 = (Element *)0x0;
        goto LAB_0010e651;
      }
      uVar27 = (ulong)(uVar25 + 1);
      *(undefined4 *)((long)param_2 + 0x2c) = 0;
      uVar26 = *(uint *)(hash_table_size_primes + (ulong)uVar25 * 4);
      if (uVar25 + 1 < 2) {
        uVar27 = 2;
      }
      uVar25 = *(uint *)(hash_table_size_primes + uVar27 * 4);
      uVar33 = (ulong)uVar25;
      *(int *)(param_2 + 5) = (int)uVar27;
      pEVar29 = param_2[1];
      uVar27 = uVar33 * 4;
      uVar37 = uVar33 * 8;
      pEVar2 = param_2[2];
      pEVar28 = (Element *)Memory::alloc_static(uVar27,false);
      param_2[2] = pEVar28;
      pEVar28 = (Element *)Memory::alloc_static(uVar37,false);
      param_2[1] = pEVar28;
      if (uVar25 != 0) {
        pEVar3 = param_2[2];
        if ((pEVar3 < pEVar28 + uVar37) && (pEVar28 < pEVar3 + uVar27)) {
          uVar27 = 0;
          do {
            *(undefined4 *)(pEVar3 + uVar27 * 4) = 0;
            *(undefined8 *)(pEVar28 + uVar27 * 8) = 0;
            uVar27 = uVar27 + 1;
          } while (uVar33 != uVar27);
        }
        else {
          memset(pEVar3,0,uVar27);
          memset(pEVar28,0,uVar37);
        }
      }
      if (uVar26 == 0) {
        uVar26 = *puVar31;
      }
      else {
        uVar27 = 0;
        do {
          uVar25 = *(uint *)(pEVar2 + uVar27 * 4);
          if (uVar25 != 0) {
            uVar35 = 0;
            pEVar4 = param_2[2];
            lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
            uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
            uVar37 = CONCAT44(0,uVar1);
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)uVar25 * lVar5;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar37;
            lVar32 = SUB168(auVar7 * auVar15,8);
            pEVar3 = pEVar4 + lVar32 * 4;
            iVar30 = SUB164(auVar7 * auVar15,8);
            uVar36 = *(uint *)pEVar3;
            uVar6 = *(undefined8 *)(pEVar29 + uVar27 * 8);
            while (uVar36 != 0) {
              auVar8._8_8_ = 0;
              auVar8._0_8_ = (ulong)uVar36 * lVar5;
              auVar16._8_8_ = 0;
              auVar16._0_8_ = uVar37;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = (ulong)((uVar1 + iVar30) - SUB164(auVar8 * auVar16,8)) * lVar5;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = uVar37;
              uVar24 = SUB164(auVar9 * auVar17,8);
              uVar34 = uVar6;
              if (uVar24 < uVar35) {
                *(uint *)pEVar3 = uVar25;
                uVar34 = *(undefined8 *)(pEVar28 + lVar32 * 8);
                *(undefined8 *)(pEVar28 + lVar32 * 8) = uVar6;
                uVar25 = uVar36;
                uVar35 = uVar24;
              }
              uVar35 = uVar35 + 1;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = (ulong)(iVar30 + 1) * lVar5;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = uVar37;
              lVar32 = SUB168(auVar10 * auVar18,8);
              pEVar3 = pEVar4 + lVar32 * 4;
              iVar30 = SUB164(auVar10 * auVar18,8);
              uVar6 = uVar34;
              uVar36 = *(uint *)pEVar3;
            }
            *(undefined8 *)(pEVar28 + lVar32 * 8) = uVar6;
            *(uint *)pEVar3 = uVar25;
            *(int *)((long)param_2 + 0x2c) = *(int *)((long)param_2 + 0x2c) + 1;
          }
          uVar27 = uVar27 + 1;
        } while (uVar26 != uVar27);
        Memory::free_static(pEVar29,false);
        Memory::free_static(pEVar2,false);
        uVar26 = *puVar31;
      }
    }
    uVar6 = *in_RCX;
    pEVar29 = (Element *)operator_new(0x20,"");
    *(uint *)(pEVar29 + 0x10) = uVar26;
    *(undefined8 *)(pEVar29 + 0x18) = uVar6;
    *(undefined1 (*) [16])pEVar29 = (undefined1  [16])0x0;
    pEVar2 = param_2[4];
    if (pEVar2 == (Element *)0x0) {
      param_2[3] = pEVar29;
      param_2[4] = pEVar29;
    }
    else if (in_R8B == '\0') {
      *(Element **)pEVar2 = pEVar29;
      *(Element **)(pEVar29 + 8) = pEVar2;
      param_2[4] = pEVar29;
    }
    else {
      pEVar2 = param_2[3];
      *(Element **)(pEVar2 + 8) = pEVar29;
      *(Element **)pEVar29 = pEVar2;
      param_2[3] = pEVar29;
    }
    uVar25 = (*puVar31 >> 0x10 ^ *puVar31) * -0x7a143595;
    uVar26 = (uVar25 ^ uVar25 >> 0xd) * -0x3d4d51cb;
    uVar25 = uVar26 ^ uVar26 >> 0x10;
    if (uVar26 == uVar26 >> 0x10) {
      uVar27 = 1;
      uVar25 = 1;
    }
    else {
      uVar27 = (ulong)uVar25;
    }
    pEVar28 = param_2[2];
    uVar36 = 0;
    uVar26 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
    uVar37 = CONCAT44(0,uVar26);
    lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar27 * lVar5;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar37;
    lVar32 = SUB168(auVar11 * auVar19,8);
    pEVar3 = param_2[1];
    pEVar2 = pEVar28 + lVar32 * 4;
    iVar30 = SUB164(auVar11 * auVar19,8);
    uVar1 = *(uint *)pEVar2;
    pEVar4 = pEVar29;
    while (uVar1 != 0) {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar1 * lVar5;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar37;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)((uVar26 + iVar30) - SUB164(auVar12 * auVar20,8)) * lVar5;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar37;
      uVar35 = SUB164(auVar13 * auVar21,8);
      pEVar38 = pEVar4;
      if (uVar35 < uVar36) {
        *(uint *)pEVar2 = uVar25;
        pEVar2 = pEVar3 + lVar32 * 8;
        pEVar38 = *(Element **)pEVar2;
        *(Element **)pEVar2 = pEVar4;
        uVar25 = uVar1;
        uVar36 = uVar35;
      }
      uVar36 = uVar36 + 1;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)(iVar30 + 1) * lVar5;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar37;
      lVar32 = SUB168(auVar14 * auVar22,8);
      pEVar2 = pEVar28 + lVar32 * 4;
      iVar30 = SUB164(auVar14 * auVar22,8);
      pEVar4 = pEVar38;
      uVar1 = *(uint *)pEVar2;
    }
    *(Element **)(pEVar3 + lVar32 * 8) = pEVar4;
    *(uint *)pEVar2 = uVar25;
    *(int *)((long)param_2 + 0x2c) = *(int *)((long)param_2 + 0x2c) + 1;
  }
  else {
    pEVar29 = *(Element **)(param_2[1] + (ulong)local_44 * 8);
    *(undefined8 *)(pEVar29 + 0x18) = *in_RCX;
  }
LAB_0010e651:
  *(Element **)param_1 = pEVar29;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DisjointSet<int, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultAllocator>::create_union(int, int) */

void __thiscall
DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::create_union
          (DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>
           *this,int param_1,int param_2)

{
  int iVar1;
  Element *pEVar2;
  char cVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  long lVar7;
  Element *pEVar8;
  long lVar9;
  undefined4 in_register_00000034;
  Element *pEVar10;
  Element *pEVar11;
  Element *pEVar12;
  Element *pEVar13;
  long in_FS_OFFSET;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int local_44;
  Element *local_40;
  uint local_38 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38[0] = 0;
  local_44 = param_1;
  cVar3 = HashMap<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*>>>
          ::_lookup_pos((HashMap<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*>>>
                         *)this,(int *)CONCAT44(in_register_00000034,param_1),local_38);
  if ((cVar3 == '\0') ||
     (lVar7 = *(long *)(*(long *)(this + 8) + (ulong)local_38[0] * 8), lVar7 == 0)) {
    pEVar4 = (Element *)operator_new(0x18,DefaultAllocator::alloc);
    *(int *)pEVar4 = param_1;
    *(undefined4 *)(pEVar4 + 0x10) = 0;
    *(Element **)(pEVar4 + 8) = pEVar4;
    local_40 = pEVar4;
    HashMap<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*>>>
    ::insert((int *)local_38,(Element **)this,SUB81(&local_44,0));
  }
  else {
    pEVar4 = *(Element **)(lVar7 + 0x18);
  }
  local_38[0] = 0;
  local_44 = param_2;
  cVar3 = HashMap<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*>>>
          ::_lookup_pos((HashMap<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*>>>
                         *)this,(int *)(ulong)(uint)param_2,local_38);
  if ((cVar3 == '\0') ||
     (lVar7 = *(long *)(*(long *)(this + 8) + (ulong)local_38[0] * 8), lVar7 == 0)) {
    pEVar5 = (Element *)operator_new(0x18,DefaultAllocator::alloc);
    *(int *)pEVar5 = param_2;
    *(undefined4 *)(pEVar5 + 0x10) = 0;
    *(Element **)(pEVar5 + 8) = pEVar5;
    local_40 = pEVar5;
    HashMap<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::Element*>>>
    ::insert((int *)local_38,(Element **)this,SUB81(&local_44,0));
  }
  else {
    pEVar5 = *(Element **)(lVar7 + 0x18);
  }
  pEVar8 = *(Element **)(pEVar4 + 8);
  if (pEVar4 != pEVar8) {
    pEVar6 = *(Element **)(pEVar8 + 8);
    if (pEVar8 != pEVar6) {
      pEVar10 = *(Element **)(pEVar6 + 8);
      auVar14._8_8_ = pEVar8;
      auVar14._0_8_ = pEVar10;
      if (pEVar6 != pEVar10) {
        pEVar11 = *(Element **)(pEVar10 + 8);
        if (pEVar10 != pEVar11) {
          pEVar12 = *(Element **)(pEVar11 + 8);
          auVar14._0_8_ = pEVar12;
          if (pEVar11 != pEVar12) {
            pEVar13 = *(Element **)(pEVar12 + 8);
            if (pEVar12 != pEVar13) {
              pEVar2 = *(Element **)(pEVar13 + 8);
              auVar14._0_8_ = pEVar2;
              if (pEVar13 != pEVar2) {
                auVar14 = get_parent(pEVar2);
                *(long *)(pEVar13 + 8) = auVar14._0_8_;
              }
              *(long *)(pEVar12 + 8) = auVar14._0_8_;
            }
            *(long *)(pEVar11 + 8) = auVar14._0_8_;
          }
          *(long *)(pEVar10 + 8) = auVar14._0_8_;
        }
        *(long *)(pEVar6 + 8) = auVar14._0_8_;
      }
      pEVar8 = auVar14._0_8_;
      *(Element **)(auVar14._8_8_ + 8) = pEVar8;
    }
    *(Element **)(pEVar4 + 8) = pEVar8;
  }
  pEVar4 = *(Element **)(pEVar5 + 8);
  auVar15._8_8_ = pEVar8;
  auVar15._0_8_ = pEVar4;
  if (pEVar5 != pEVar4) {
    pEVar6 = *(Element **)(pEVar4 + 8);
    if (pEVar4 != pEVar6) {
      pEVar10 = *(Element **)(pEVar6 + 8);
      auVar15._0_8_ = pEVar10;
      if (pEVar6 != pEVar10) {
        pEVar11 = *(Element **)(pEVar10 + 8);
        if (pEVar10 != pEVar11) {
          pEVar12 = *(Element **)(pEVar11 + 8);
          auVar15._0_8_ = pEVar12;
          if (pEVar11 != pEVar12) {
            pEVar13 = *(Element **)(pEVar12 + 8);
            if (pEVar12 != pEVar13) {
              pEVar2 = *(Element **)(pEVar13 + 8);
              auVar15._0_8_ = pEVar2;
              if (pEVar13 != pEVar2) {
                auVar15 = get_parent(pEVar2);
                *(long *)(pEVar13 + 8) = auVar15._0_8_;
              }
              *(long *)(pEVar12 + 8) = auVar15._0_8_;
            }
            *(long *)(pEVar11 + 8) = auVar15._0_8_;
          }
          *(long *)(pEVar10 + 8) = auVar15._0_8_;
        }
        *(long *)(pEVar6 + 8) = auVar15._0_8_;
      }
      *(long *)(pEVar4 + 8) = auVar15._0_8_;
    }
    *(long *)(pEVar5 + 8) = auVar15._0_8_;
  }
  lVar9 = auVar15._8_8_;
  lVar7 = auVar15._0_8_;
  if (lVar9 != lVar7) {
    iVar1 = *(int *)(lVar9 + 0x10);
    if (iVar1 < *(int *)(lVar7 + 0x10)) {
      *(long *)(lVar9 + 8) = lVar7;
    }
    else {
      *(long *)(lVar7 + 8) = lVar9;
      if (iVar1 == *(int *)(lVar7 + 0x10)) {
        *(int *)(lVar9 + 0x10) = iVar1 + 1;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RBSet<int, Comparator<int>, DefaultAllocator>::_insert_rb_fix(RBSet<int, Comparator<int>,
   DefaultAllocator>::Element*) */

void __thiscall
RBSet<int,Comparator<int>,DefaultAllocator>::_insert_rb_fix
          (RBSet<int,Comparator<int>,DefaultAllocator> *this,Element *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  
  iVar1 = *(int *)*(Element **)(param_1 + 0x18);
  pEVar7 = *(Element **)(param_1 + 0x18);
  do {
    while( true ) {
      pEVar8 = pEVar7;
      if (iVar1 != 0) {
        **(undefined4 **)(*(long *)this + 0x10) = 1;
        return;
      }
      pEVar5 = *(Element **)(pEVar8 + 0x18);
      pEVar6 = *(Element **)(pEVar5 + 0x10);
      pEVar7 = pEVar8;
      if (pEVar6 == pEVar8) break;
      if (*(int *)pEVar6 == 0) goto LAB_0010eb2d;
      if (*(Element **)(pEVar8 + 0x10) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 8);
        *(long *)(pEVar8 + 0x10) = lVar3;
        pEVar7 = pEVar5;
        if (lVar2 != lVar3) {
          *(Element **)(lVar3 + 0x18) = pEVar8;
          pEVar7 = *(Element **)(pEVar8 + 0x18);
        }
        *(Element **)(param_1 + 0x18) = pEVar7;
        if (pEVar8 == *(Element **)(pEVar7 + 8)) {
          *(Element **)(pEVar7 + 8) = param_1;
        }
        else {
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        *(Element **)(param_1 + 8) = pEVar8;
        *(Element **)(pEVar8 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(int *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0010ec50;
LAB_0010ead6:
        *(int *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(int *)pEVar8 = 1;
        pEVar8 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0010ead6;
LAB_0010ec50:
        _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      }
      lVar2 = *(long *)(pEVar5 + 8);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 0x10);
      *(long *)(pEVar5 + 8) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 0x10)) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      else {
        *(long *)(lVar3 + 8) = lVar2;
      }
      *(Element **)(lVar2 + 0x10) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
LAB_0010eb13:
      iVar1 = *(int *)pEVar7;
      param_1 = pEVar8;
    }
    pEVar6 = *(Element **)(pEVar5 + 8);
    if (*(int *)pEVar6 != 0) {
      if (*(Element **)(pEVar8 + 8) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 0x10);
        *(long *)(pEVar8 + 8) = lVar3;
        if (lVar2 == lVar3) {
          *(Element **)(param_1 + 0x18) = pEVar5;
          pEVar7 = pEVar5;
LAB_0010ed42:
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        else {
          *(Element **)(lVar3 + 0x18) = pEVar8;
          pEVar7 = *(Element **)(pEVar8 + 0x18);
          *(Element **)(param_1 + 0x18) = pEVar7;
          if (pEVar8 == *(Element **)(pEVar7 + 0x10)) goto LAB_0010ed42;
          *(Element **)(pEVar7 + 8) = param_1;
        }
        *(Element **)(param_1 + 0x10) = pEVar8;
        *(Element **)(pEVar8 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(int *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0010ed10;
LAB_0010eba0:
        *(int *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(int *)pEVar8 = 1;
        pEVar8 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0010eba0;
LAB_0010ed10:
        _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      }
      lVar2 = *(long *)(pEVar5 + 0x10);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 8);
      *(long *)(pEVar5 + 0x10) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 8)) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      else {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      *(Element **)(lVar2 + 8) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
      goto LAB_0010eb13;
    }
LAB_0010eb2d:
    pEVar7 = *(Element **)(this + 8);
    *(int *)pEVar8 = 1;
    *(int *)pEVar6 = 1;
    if (pEVar5 == pEVar7) {
      _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                       "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
    }
    else {
      *(int *)pEVar5 = 0;
    }
    iVar1 = *(int *)*(Element **)(pEVar5 + 0x18);
    pEVar7 = *(Element **)(pEVar5 + 0x18);
    param_1 = pEVar5;
  } while( true );
}



/* CowData<Vector<int> >::_unref() */

void __thiscall CowData<Vector<int>>::_unref(CowData<Vector<int>> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x10;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* HashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, int> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
::_resize_and_rehash
          (HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
           *this,uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  void *__s;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  void *__s_00;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint local_78;
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)param_1 * 4);
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, int> > >::insert(int const&, int const&, bool) */

void HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
     ::insert(int *param_1,int *param_2,bool param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  void *__s;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 (*pauVar21) [16];
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 (*pauVar26) [16];
  undefined8 uVar27;
  void *__s_00;
  undefined4 *in_RCX;
  int iVar28;
  undefined7 in_register_00000011;
  uint *puVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  uint uVar34;
  char in_R8B;
  ulong uVar35;
  uint uVar36;
  undefined1 (*pauVar37) [16];
  
  puVar29 = (uint *)CONCAT71(in_register_00000011,param_3);
  __s_00 = *(void **)(param_2 + 2);
  uVar23 = *(uint *)(hash_table_size_primes + (ulong)(uint)param_2[10] * 4);
  if (__s_00 == (void *)0x0) {
    uVar30 = (ulong)uVar23;
    uVar33 = uVar30 * 4;
    uVar35 = uVar30 * 8;
    uVar27 = Memory::alloc_static(uVar33,false);
    *(undefined8 *)(param_2 + 4) = uVar27;
    __s_00 = (void *)Memory::alloc_static(uVar35,false);
    *(void **)(param_2 + 2) = __s_00;
    if (uVar23 != 0) {
      __s = *(void **)(param_2 + 4);
      if ((__s < (void *)((long)__s_00 + uVar35)) && (__s_00 < (void *)((long)__s + uVar33))) {
        uVar33 = 0;
        do {
          *(undefined4 *)((long)__s + uVar33 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar33 * 8) = 0;
          uVar33 = uVar33 + 1;
        } while (uVar30 != uVar33);
        goto LAB_0010f0a6;
      }
      memset(__s,0,uVar33);
      memset(__s_00,0,uVar35);
      iVar28 = param_2[0xb];
      uVar24 = *puVar29;
      goto LAB_0010f0b1;
    }
    iVar28 = param_2[0xb];
    uVar24 = *puVar29;
    if (__s_00 != (void *)0x0) goto LAB_0010f0b1;
  }
  else {
LAB_0010f0a6:
    iVar28 = param_2[0xb];
    uVar24 = *puVar29;
LAB_0010f0b1:
    if (iVar28 != 0) {
      uVar35 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)(uint)param_2[10] * 4));
      uVar33 = *(ulong *)(hash_table_size_primes_inv + (ulong)(uint)param_2[10] * 8);
      uVar22 = (uVar24 >> 0x10 ^ uVar24) * -0x7a143595;
      uVar22 = (uVar22 ^ uVar22 >> 0xd) * -0x3d4d51cb;
      uVar34 = uVar22 ^ uVar22 >> 0x10;
      if (uVar22 == uVar22 >> 0x10) {
        uVar34 = 1;
        uVar30 = uVar33;
      }
      else {
        uVar30 = uVar34 * uVar33;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar35;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar30;
      lVar31 = SUB168(auVar5 * auVar13,8);
      uVar22 = *(uint *)(*(long *)(param_2 + 4) + lVar31 * 4);
      uVar25 = SUB164(auVar5 * auVar13,8);
      if (uVar22 != 0) {
        uVar36 = 0;
        do {
          if ((uVar34 == uVar22) &&
             (*(uint *)(*(long *)((long)__s_00 + lVar31 * 8) + 0x10) == uVar24)) {
            pauVar26 = *(undefined1 (**) [16])((long)__s_00 + (ulong)uVar25 * 8);
            *(undefined4 *)(pauVar26[1] + 4) = *in_RCX;
            goto LAB_0010f340;
          }
          uVar36 = uVar36 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (uVar25 + 1) * uVar33;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar35;
          lVar31 = SUB168(auVar6 * auVar14,8);
          uVar22 = *(uint *)(*(long *)(param_2 + 4) + lVar31 * 4);
          uVar25 = SUB164(auVar6 * auVar14,8);
        } while ((uVar22 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = uVar22 * uVar33, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar35, auVar8._8_8_ = 0,
                auVar8._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)(uint)param_2[10] * 4) +
                                uVar25) - SUB164(auVar7 * auVar15,8)) * uVar33, auVar16._8_8_ = 0,
                auVar16._0_8_ = uVar35, uVar36 <= SUB164(auVar8 * auVar16,8)));
      }
    }
  }
  if ((float)uVar23 * __LC19 < (float)(iVar28 + 1)) {
    if (param_2[10] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      pauVar26 = (undefined1 (*) [16])0x0;
      goto LAB_0010f340;
    }
    _resize_and_rehash((HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                        *)param_2,param_2[10] + 1);
  }
  uVar1 = *in_RCX;
  uVar23 = *puVar29;
  pauVar26 = (undefined1 (*) [16])operator_new(0x18,"");
  *(ulong *)pauVar26[1] = CONCAT44(uVar1,uVar23);
  *pauVar26 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(param_2 + 8);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(param_2 + 6) = pauVar26;
    *(undefined1 (**) [16])(param_2 + 8) = pauVar26;
  }
  else if (in_R8B == '\0') {
    *puVar2 = pauVar26;
    *(undefined8 **)(*pauVar26 + 8) = puVar2;
    *(undefined1 (**) [16])(param_2 + 8) = pauVar26;
  }
  else {
    lVar31 = *(long *)(param_2 + 6);
    *(undefined1 (**) [16])(lVar31 + 8) = pauVar26;
    *(long *)*pauVar26 = lVar31;
    *(undefined1 (**) [16])(param_2 + 6) = pauVar26;
  }
  uVar23 = (*puVar29 >> 0x10 ^ *puVar29) * -0x7a143595;
  uVar24 = (uVar23 ^ uVar23 >> 0xd) * -0x3d4d51cb;
  uVar23 = uVar24 ^ uVar24 >> 0x10;
  if (uVar24 == uVar24 >> 0x10) {
    uVar33 = 1;
    uVar23 = 1;
  }
  else {
    uVar33 = (ulong)uVar23;
  }
  lVar31 = *(long *)(param_2 + 4);
  uVar34 = 0;
  lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)param_2[10] * 8);
  uVar24 = *(uint *)(hash_table_size_primes + (ulong)(uint)param_2[10] * 4);
  uVar35 = CONCAT44(0,uVar24);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar33 * lVar3;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar35;
  lVar32 = SUB168(auVar9 * auVar17,8);
  lVar4 = *(long *)(param_2 + 2);
  puVar29 = (uint *)(lVar31 + lVar32 * 4);
  iVar28 = SUB164(auVar9 * auVar17,8);
  uVar22 = *puVar29;
  pauVar21 = pauVar26;
  while (uVar22 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar22 * lVar3;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar35;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((uVar24 + iVar28) - SUB164(auVar10 * auVar18,8)) * lVar3;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar35;
    uVar25 = SUB164(auVar11 * auVar19,8);
    pauVar37 = pauVar21;
    if (uVar25 < uVar34) {
      *puVar29 = uVar23;
      puVar2 = (undefined8 *)(lVar4 + lVar32 * 8);
      pauVar37 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar21;
      uVar23 = uVar22;
      uVar34 = uVar25;
    }
    uVar34 = uVar34 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar28 + 1) * lVar3;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar35;
    lVar32 = SUB168(auVar12 * auVar20,8);
    puVar29 = (uint *)(lVar31 + lVar32 * 4);
    iVar28 = SUB164(auVar12 * auVar20,8);
    pauVar21 = pauVar37;
    uVar22 = *puVar29;
  }
  *(undefined1 (**) [16])(lVar4 + lVar32 * 8) = pauVar21;
  *puVar29 = uVar23;
  param_2[0xb] = param_2[0xb] + 1;
LAB_0010f340:
  *(undefined1 (**) [16])param_1 = pauVar26;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, int> > >::operator[](int const&) */

undefined1  [16] __thiscall
HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
::operator[](HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
             *this,int *param_1)

{
  uint *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  void *__s;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 (*pauVar28) [16];
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined1 (*pauVar32) [16];
  undefined8 uVar33;
  void *__s_00;
  ulong uVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  int iVar39;
  uint uVar40;
  ulong uVar41;
  long lVar42;
  uint uVar43;
  uint uVar44;
  undefined1 (*pauVar45) [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  long lStack_70;
  uint local_68;
  
  uVar38 = (ulong)*(uint *)(this + 0x28);
  __s_00 = *(void **)(this + 8);
  uVar31 = *param_1;
  uVar30 = *(uint *)(hash_table_size_primes + uVar38 * 4);
  uVar41 = CONCAT44(0,uVar30);
  if (__s_00 == (void *)0x0) {
    uVar38 = uVar41 * 4;
    uVar2 = uVar41 * 8;
    uVar33 = Memory::alloc_static(uVar38,false);
    *(undefined8 *)(this + 0x10) = uVar33;
    lStack_70 = 0x10f8a0;
    __s_00 = (void *)Memory::alloc_static(uVar2,false);
    *(void **)(this + 8) = __s_00;
    if (uVar30 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar2)) && (__s_00 < (void *)((long)__s + uVar38))) {
        uVar38 = 0;
        do {
          *(undefined4 *)((long)__s + uVar38 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar38 * 8) = 0;
          uVar38 = uVar38 + 1;
        } while (uVar41 != uVar38);
        uVar31 = *param_1;
        iVar39 = *(int *)(this + 0x2c);
      }
      else {
        memset(__s,0,uVar38);
        lStack_70 = 0x10f8ea;
        memset(__s_00,0,uVar2);
        uVar31 = *param_1;
        iVar39 = *(int *)(this + 0x2c);
      }
LAB_0010f8f9:
      if (iVar39 == 0) goto LAB_0010f9b0;
      uVar38 = (ulong)*(uint *)(this + 0x28);
      lVar42 = *(long *)(this + 0x10);
      goto LAB_0010f5c4;
    }
    uVar31 = *param_1;
    iVar39 = *(int *)(this + 0x2c);
    if (__s_00 != (void *)0x0) goto LAB_0010f8f9;
  }
  else {
    iVar39 = *(int *)(this + 0x2c);
    if (iVar39 == 0) {
LAB_0010f9b0:
      iVar39 = 0;
    }
    else {
      uVar2 = *(ulong *)(hash_table_size_primes_inv + uVar38 * 8);
      uVar29 = (uVar31 >> 0x10 ^ uVar31) * -0x7a143595;
      uVar29 = (uVar29 ^ uVar29 >> 0xd) * -0x3d4d51cb;
      uVar43 = uVar29 ^ uVar29 >> 0x10;
      if (uVar29 == uVar29 >> 0x10) {
        uVar43 = 1;
        uVar35 = uVar2;
      }
      else {
        uVar35 = uVar43 * uVar2;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar41;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar35;
      lVar36 = SUB168(auVar4 * auVar16,8);
      lVar42 = *(long *)(this + 0x10);
      uVar44 = SUB164(auVar4 * auVar16,8);
      uVar29 = *(uint *)(lVar42 + lVar36 * 4);
      if (uVar29 != 0) {
        uVar40 = 0;
        lVar37 = lVar36;
        do {
          if ((uVar43 == uVar29) &&
             (uVar31 == *(uint *)(*(long *)((long)__s_00 + lVar36 * 8) + 0x10))) {
            auVar46._0_8_ = *(long *)((long)__s_00 + (ulong)uVar44 * 8) + 0x14;
            auVar46._8_8_ = lVar37;
            return auVar46;
          }
          uVar40 = uVar40 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (uVar44 + 1) * uVar2;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar41;
          lVar36 = SUB168(auVar5 * auVar17,8);
          uVar29 = *(uint *)(lVar42 + lVar36 * 4);
          uVar44 = SUB164(auVar5 * auVar17,8);
        } while ((uVar29 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar29 * uVar2, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar41, auVar7._8_8_ = 0,
                auVar7._0_8_ = ((uVar44 + uVar30) - SUB164(auVar6 * auVar18,8)) * uVar2,
                auVar19._8_8_ = 0, auVar19._0_8_ = uVar41, lVar37 = SUB168(auVar7 * auVar19,8),
                uVar40 <= SUB164(auVar7 * auVar19,8)));
      }
LAB_0010f5c4:
      uVar35 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar38 * 4));
      uVar2 = *(ulong *)(hash_table_size_primes_inv + uVar38 * 8);
      uVar30 = (uVar31 >> 0x10 ^ uVar31) * -0x7a143595;
      uVar30 = (uVar30 ^ uVar30 >> 0xd) * -0x3d4d51cb;
      uVar29 = uVar30 ^ uVar30 >> 0x10;
      if (uVar30 == uVar30 >> 0x10) {
        uVar29 = 1;
        uVar34 = uVar2;
      }
      else {
        uVar34 = uVar29 * uVar2;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar35;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar34;
      lVar36 = SUB168(auVar8 * auVar20,8);
      uVar30 = *(uint *)(lVar42 + lVar36 * 4);
      uVar43 = SUB164(auVar8 * auVar20,8);
      if (uVar30 != 0) {
        uVar44 = 0;
        lVar37 = lVar36;
        do {
          if ((uVar29 == uVar30) &&
             (uVar31 == *(uint *)(*(long *)((long)__s_00 + lVar36 * 8) + 0x10))) {
            pauVar32 = *(undefined1 (**) [16])((long)__s_00 + (ulong)uVar43 * 8);
            *(undefined4 *)(pauVar32[1] + 4) = 0;
            lStack_70 = lVar37;
            goto LAB_0010f696;
          }
          uVar44 = uVar44 + 1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (uVar43 + 1) * uVar2;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar35;
          lVar36 = SUB168(auVar9 * auVar21,8);
          uVar30 = *(uint *)(lVar42 + lVar36 * 4);
          uVar43 = SUB164(auVar9 * auVar21,8);
        } while ((uVar30 != 0) &&
                (auVar10._8_8_ = 0, auVar10._0_8_ = uVar30 * uVar2, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar35, auVar11._8_8_ = 0,
                auVar11._0_8_ =
                     ((*(uint *)(hash_table_size_primes + uVar38 * 4) + uVar43) -
                     SUB164(auVar10 * auVar22,8)) * uVar2, auVar23._8_8_ = 0, auVar23._0_8_ = uVar35
                , lVar37 = SUB168(auVar11 * auVar23,8), uVar44 <= SUB164(auVar11 * auVar23,8)));
      }
    }
  }
  if ((float)uVar41 * __LC19 < (float)(iVar39 + 1)) {
    if (*(int *)(this + 0x28) == 0x1c) {
      pauVar32 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010f696;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  iVar39 = *param_1;
  pauVar32 = (undefined1 (*) [16])operator_new(0x18,"");
  *(int *)pauVar32[1] = iVar39;
  *(undefined4 *)(pauVar32[1] + 4) = 0;
  *pauVar32 = (undefined1  [16])0x0;
  puVar3 = *(undefined8 **)(this + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar32;
  }
  else {
    *puVar3 = pauVar32;
    *(undefined8 **)(*pauVar32 + 8) = puVar3;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar32;
  uVar31 = ((uint)*param_1 >> 0x10 ^ *param_1) * -0x7a143595;
  uVar30 = (uVar31 ^ uVar31 >> 0xd) * -0x3d4d51cb;
  uVar31 = uVar30 ^ uVar30 >> 0x10;
  if (uVar30 == uVar30 >> 0x10) {
    uVar38 = 1;
    uVar31 = 1;
  }
  else {
    uVar38 = (ulong)uVar31;
  }
  uVar43 = 0;
  lVar42 = *(long *)(this + 0x10);
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar41 = CONCAT44(0,uVar30);
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar38 * lVar36;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar41;
  lStack_70 = SUB168(auVar12 * auVar24,8);
  lVar37 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar42 + lStack_70 * 4);
  iVar39 = SUB164(auVar12 * auVar24,8);
  uVar29 = *puVar1;
  pauVar28 = pauVar32;
  while (uVar29 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar29 * lVar36;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar41;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar30 + iVar39) - SUB164(auVar13 * auVar25,8)) * lVar36;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar41;
    local_68 = SUB164(auVar14 * auVar26,8);
    pauVar45 = pauVar28;
    if (local_68 < uVar43) {
      *puVar1 = uVar31;
      puVar3 = (undefined8 *)(lVar37 + lStack_70 * 8);
      pauVar45 = (undefined1 (*) [16])*puVar3;
      *puVar3 = pauVar28;
      uVar31 = uVar29;
      uVar43 = local_68;
    }
    uVar43 = uVar43 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar39 + 1) * lVar36;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar41;
    lStack_70 = SUB168(auVar15 * auVar27,8);
    puVar1 = (uint *)(lVar42 + lStack_70 * 4);
    iVar39 = SUB164(auVar15 * auVar27,8);
    pauVar28 = pauVar45;
    uVar29 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar37 + lStack_70 * 8) = pauVar28;
  *puVar1 = uVar31;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010f696:
  auVar47._8_8_ = lStack_70;
  auVar47._0_8_ = pauVar32[1] + 4;
  return auVar47;
}



/* CowData<Ref<GLTFSkin> >::_unref() */

void __thiscall CowData<Ref<GLTFSkin>>::_unref(CowData<Ref<GLTFSkin>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_0010fa4d:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_0010fa4d;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* CowData<Ref<GLTFSkin> >::_realloc(long) */

undefined8 __thiscall CowData<Ref<GLTFSkin>>::_realloc(CowData<Ref<GLTFSkin>> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Ref<GLTFSkin> >::resize<false>(long) */

undefined8 __thiscall
CowData<Ref<GLTFSkin>>::resize<false>(CowData<Ref<GLTFSkin>> *this,long param_1)

{
  long *plVar1;
  Object *pOVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar7 = 0;
    lVar8 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar8 = lVar7 * 8;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0010fe00:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 8 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar11 = uVar9 + 1;
  if (lVar11 == 0) goto LAB_0010fe00;
  if (param_1 <= lVar7) {
    lVar7 = *(long *)this;
    uVar9 = param_1;
    while (lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar9) {
LAB_0010fcaa:
        if (lVar11 != lVar8) {
          uVar5 = _realloc(this,lVar11);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          lVar7 = *(long *)this;
          if (lVar7 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar7 + -8) = param_1;
        return 0;
      }
      while (plVar1 = (long *)(lVar7 + uVar9 * 8), *plVar1 == 0) {
        uVar9 = uVar9 + 1;
        if (*(ulong *)(lVar7 + -8) <= uVar9) goto LAB_0010fcaa;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        pOVar2 = (Object *)*plVar1;
        cVar4 = predelete_handler(pOVar2);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
      uVar9 = uVar9 + 1;
      lVar7 = *(long *)this;
    }
    goto LAB_0010fc70;
  }
  if (lVar11 == lVar8) {
LAB_0010fd7b:
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) {
LAB_0010fc70:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar10[-1];
    if (param_1 <= lVar7) goto LAB_0010fd5b;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0010fd7b;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar10 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar10;
    lVar7 = 0;
  }
  memset(puVar10 + lVar7,0,(param_1 - lVar7) * 8);
LAB_0010fd5b:
  puVar10[-1] = param_1;
  return 0;
}



/* CowData<Vector<int> >::_realloc(long) */

undefined8 __thiscall CowData<Vector<int>>::_realloc(CowData<Vector<int>> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector<int> >::resize<false>(long) */

undefined8 __thiscall CowData<Vector<int>>::resize<false>(CowData<Vector<int>> *this,long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar5 = 0;
    lVar7 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar5) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar5 * 0x10;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_00110170:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 0x10 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar10 = uVar8 + 1;
  if (lVar10 == 0) goto LAB_00110170;
  uVar9 = param_1;
  if (param_1 <= lVar5) {
    while (lVar5 = *(long *)this, lVar5 != 0) {
      if (*(ulong *)(lVar5 + -8) <= uVar9) {
        if (lVar10 != lVar7) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar5 = *(long *)this;
          if (lVar5 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar5 + -8) = param_1;
        return 0;
      }
      CowData<int>::_unref((CowData<int> *)(lVar5 + 8 + uVar9 * 0x10));
      uVar9 = uVar9 + 1;
    }
    goto LAB_001101c6;
  }
  if (lVar10 == lVar7) {
LAB_001100e3:
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) {
LAB_001101c6:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar5 = puVar6[-1];
    if (param_1 <= lVar5) goto LAB_00110049;
  }
  else {
    if (lVar5 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_001100e3;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar6 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar6;
    lVar5 = 0;
  }
  puVar11 = puVar6 + param_1 * 2;
  puVar2 = puVar6 + lVar5 * 2;
  if (((int)puVar11 - (int)puVar2 & 0x10U) != 0) {
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
    if (puVar2 == puVar11) goto LAB_00110049;
  }
  do {
    puVar2[1] = 0;
    puVar3 = puVar2 + 4;
    puVar2[3] = 0;
    puVar2 = puVar3;
  } while (puVar3 != puVar11);
LAB_00110049:
  puVar6[-1] = param_1;
  return 0;
}



/* CowData<Ref<GLTFSkeleton> >::_unref() */

void __thiscall CowData<Ref<GLTFSkeleton>>::_unref(CowData<Ref<GLTFSkeleton>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_0011022d:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_0011022d;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* CowData<Ref<GLTFSkeleton> >::_realloc(long) */

undefined8 __thiscall
CowData<Ref<GLTFSkeleton>>::_realloc(CowData<Ref<GLTFSkeleton>> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Ref<GLTFSkeleton> >::resize<false>(long) */

undefined8 __thiscall
CowData<Ref<GLTFSkeleton>>::resize<false>(CowData<Ref<GLTFSkeleton>> *this,long param_1)

{
  long *plVar1;
  Object *pOVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar7 = 0;
    lVar8 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar8 = lVar7 * 8;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_001105e0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 8 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar11 = uVar9 + 1;
  if (lVar11 == 0) goto LAB_001105e0;
  if (param_1 <= lVar7) {
    lVar7 = *(long *)this;
    uVar9 = param_1;
    while (lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar9) {
LAB_0011048a:
        if (lVar11 != lVar8) {
          uVar5 = _realloc(this,lVar11);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          lVar7 = *(long *)this;
          if (lVar7 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar7 + -8) = param_1;
        return 0;
      }
      while (plVar1 = (long *)(lVar7 + uVar9 * 8), *plVar1 == 0) {
        uVar9 = uVar9 + 1;
        if (*(ulong *)(lVar7 + -8) <= uVar9) goto LAB_0011048a;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        pOVar2 = (Object *)*plVar1;
        cVar4 = predelete_handler(pOVar2);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
      uVar9 = uVar9 + 1;
      lVar7 = *(long *)this;
    }
    goto LAB_00110450;
  }
  if (lVar11 == lVar8) {
LAB_0011055b:
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) {
LAB_00110450:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar10[-1];
    if (param_1 <= lVar7) goto LAB_0011053b;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0011055b;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar10 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar10;
    lVar7 = 0;
  }
  memset(puVar10 + lVar7,0,(param_1 - lVar7) * 8);
LAB_0011053b:
  puVar10[-1] = param_1;
  return 0;
}



/* WARNING: Control flow encountered bad instruction data */
/* GLTFSkin::~GLTFSkin() */

void __thiscall GLTFSkin::~GLTFSkin(GLTFSkin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GLTFSkeleton::~GLTFSkeleton() */

void __thiscall GLTFSkeleton::~GLTFSkeleton(GLTFSkeleton *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* DisjointSet<int, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultAllocator>::~DisjointSet() */

void __thiscall
DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>::~DisjointSet
          (DisjointSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultAllocator>
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
