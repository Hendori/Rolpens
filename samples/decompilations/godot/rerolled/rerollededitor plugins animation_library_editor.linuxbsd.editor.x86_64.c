/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::adjust_heap(long, long,
   long, List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::Element**) const [clone .isra.0] */void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::adjust_heap(long param_1, long param_2, long param_3, Element *param_4, Element **param_5) {
   byte *pbVar1;
   byte *pbVar2;
   Element *pEVar3;
   uint uVar4;
   byte bVar5;
   long lVar6;
   long lVar7;
   uint uVar8;
   Element **ppEVar9;
   long lVar10;
   Element *pEVar11;
   long lVar12;
   long lVar13;
   byte *pbVar14;
   byte *pbVar15;
   long lVar16;
   lVar12 = param_2 * 2 + 2;
   lVar16 = param_2;
   if (lVar12 < param_3) {
      do {
         lVar10 = lVar12 + -1;
         ppEVar9 = param_5 + lVar10 + param_1;
         pEVar11 = *ppEVar9;
         pEVar3 = param_5[param_1 + lVar12];
         lVar13 = *(long*)pEVar11;
         lVar6 = *(long*)pEVar3;
         if (lVar6 == 0) {
            if (lVar13 != 0) {
               pbVar14 = *(byte**)( lVar13 + 8 );
               uVar8 = 0;
               pbVar15 = &_LC0;
               LAB_00100114:if (pbVar14 == (byte*)0x0) {
                  lVar6 = 0;
                  uVar4 = **(uint**)( lVar13 + 0x10 );
                  if (uVar4 != 0 || uVar8 != 0) {
                     do {
                        if (uVar8 == 0) goto LAB_001000c0;
                        if (uVar4 == 0) break;
                        if (uVar8 < uVar4) goto LAB_001000c0;
                        if (uVar4 < uVar8) break;
                        uVar8 = (uint)(char)pbVar15[lVar6 + 1];
                        uVar4 = ( *(uint**)( lVar13 + 0x10 ) )[lVar6 + 1];
                        lVar6 = lVar6 + 1;
                     }
 while ( uVar8 != 0 || uVar4 != 0 );
                  }

               }
 else {
                  uVar4 = (uint)(char)*pbVar14;
                  bVar5 = (byte)uVar8 | *pbVar14;
                  LAB_00100166:if (bVar5 != 0) {
                     lVar13 = 1;
                     do {
                        if (uVar8 == 0) goto LAB_001000c0;
                        if (uVar4 == 0) break;
                        if (uVar8 < uVar4) goto LAB_001000c0;
                        if (uVar4 < uVar8) break;
                        pbVar1 = pbVar14 + lVar13;
                        uVar4 = (uint)(char)*pbVar1;
                        pbVar2 = pbVar15 + lVar13;
                        uVar8 = (uint)(char)*pbVar2;
                        lVar13 = lVar13 + 1;
                     }
 while ( *pbVar1 != 0 || *pbVar2 != 0 );
                  }

               }

            }

         }
 else {
            pbVar15 = *(byte**)( lVar6 + 8 );
            if (lVar13 == 0) {
               if (pbVar15 != (byte*)0x0) {
                  bVar5 = *pbVar15;
                  uVar8 = (uint)(char)bVar5;
                  pbVar14 = &_LC0;
                  uVar4 = 0;
                  goto LAB_00100166;
               }

               uVar8 = 0;
               pbVar14 = &_LC0;
            }
 else {
               pbVar14 = *(byte**)( lVar13 + 8 );
               if (pbVar15 != (byte*)0x0) {
                  uVar8 = (uint)(char)*pbVar15;
                  goto LAB_00100114;
               }

               if (pbVar14 == (byte*)0x0) {
                  lVar7 = 4;
                  uVar8 = **(uint**)( lVar13 + 0x10 );
                  uVar4 = **(uint**)( lVar6 + 0x10 );
                  if (uVar8 != 0 || uVar4 != 0) {
                     do {
                        if (uVar4 == 0) goto LAB_001000c0;
                        if (uVar8 == 0) break;
                        if (uVar4 < uVar8) goto LAB_001000c0;
                        if (uVar8 < uVar4) break;
                        uVar4 = *(uint*)( (long)*(uint**)( lVar6 + 0x10 ) + lVar7 );
                        uVar8 = *(uint*)( (long)*(uint**)( lVar13 + 0x10 ) + lVar7 );
                        lVar7 = lVar7 + 4;
                     }
 while ( uVar4 != 0 || uVar8 != 0 );
                  }

                  goto LAB_001000e8;
               }

               uVar8 = (uint)(char)*pbVar14;
            }

            lVar13 = 0;
            uVar4 = **(uint**)( lVar6 + 0x10 );
            if (uVar4 != 0 || uVar8 != 0) {
               do {
                  if (uVar4 == 0) goto LAB_001000c0;
                  if (uVar8 == 0) break;
                  if (uVar4 < uVar8) goto LAB_001000c0;
                  if (uVar8 < uVar4) break;
                  uVar4 = ( *(uint**)( lVar6 + 0x10 ) )[lVar13 + 1];
                  uVar8 = (uint)(char)pbVar14[lVar13 + 1];
                  lVar13 = lVar13 + 1;
               }
 while ( uVar4 != 0 || uVar8 != 0 );
            }

         }

         LAB_001000e8:ppEVar9 = param_5 + param_1 + lVar12;
         lVar10 = lVar12;
         pEVar11 = pEVar3;
         lVar12 = lVar12 + 1;
         LAB_001000c0:lVar12 = lVar12 * 2;
         param_5[param_1 + lVar16] = pEVar11;
         lVar16 = lVar10;
      }
 while ( lVar12 < param_3 );
      if (lVar12 == param_3) goto LAB_001004ed;
   }
 else {
      ppEVar9 = param_5 + param_2 + param_1;
      if (lVar12 != param_3) goto LAB_001002ea;
      LAB_001004ed:lVar10 = lVar12 + -1;
      *ppEVar9 = param_5[param_1 + lVar10];
      ppEVar9 = param_5 + param_1 + lVar10;
   }

   lVar12 = ( lVar10 + -1 ) - ( lVar10 + -1 >> 0x3f );
   if (param_2 < lVar10) {
      lVar16 = *(long*)param_4;
      while (true) {
         lVar13 = lVar12 >> 1;
         pEVar11 = param_5[param_1 + lVar13];
         lVar12 = *(long*)pEVar11;
         if (lVar12 == 0) break;
         pbVar15 = *(byte**)( lVar12 + 8 );
         if (lVar16 == 0) {
            uVar8 = 0;
            pbVar14 = &_LC0;
            if (pbVar15 != (byte*)0x0) {
               bVar5 = *pbVar15;
               uVar8 = (uint)(char)bVar5;
               uVar4 = 0;
               pbVar14 = &_LC0;
               goto LAB_0010036a;
            }

            LAB_001003ca:uVar4 = **(uint**)( lVar12 + 0x10 );
            if (uVar4 == 0 && uVar8 == 0) goto LAB_001002e0;
            lVar6 = 0;
            while (uVar4 != 0) {
               if (uVar8 == 0) goto LAB_001002e0;
               if (uVar4 < uVar8) break;
               if (uVar8 < uVar4) goto LAB_001002e0;
               uVar4 = ( *(uint**)( lVar12 + 0x10 ) )[lVar6 + 1];
               uVar8 = (uint)(char)pbVar14[lVar6 + 1];
               lVar6 = lVar6 + 1;
               if (uVar4 == 0 && uVar8 == 0) goto LAB_001002e0;
            }
;
         }
 else {
            pbVar14 = *(byte**)( lVar16 + 8 );
            if (pbVar15 == (byte*)0x0) {
               if (pbVar14 != (byte*)0x0) {
                  uVar8 = (uint)(char)*pbVar14;
                  goto LAB_001003ca;
               }

               uVar8 = **(uint**)( lVar16 + 0x10 );
               uVar4 = **(uint**)( lVar12 + 0x10 );
               if (uVar8 == 0 && uVar4 == 0) goto LAB_001002e0;
               lVar6 = 4;
               while (uVar4 != 0) {
                  if (uVar8 == 0) goto LAB_001002e0;
                  if (uVar4 < uVar8) break;
                  if (uVar8 < uVar4) goto LAB_001002e0;
                  uVar4 = *(uint*)( (long)*(uint**)( lVar12 + 0x10 ) + lVar6 );
                  uVar8 = *(uint*)( (long)*(uint**)( lVar16 + 0x10 ) + lVar6 );
                  lVar6 = lVar6 + 4;
                  if (uVar4 == 0 && uVar8 == 0) {
                     param_5[param_1 + lVar10] = param_4;
                     return;
                  }

               }
;
            }
 else {
               uVar4 = (uint)(char)*pbVar15;
               uVar8 = uVar4;
               if (pbVar14 == (byte*)0x0) goto LAB_00100315;
               LAB_00100364:uVar4 = (uint)(char)*pbVar14;
               bVar5 = (byte)uVar8 | *pbVar14;
               LAB_0010036a:if (bVar5 == 0) goto LAB_001002e0;
               lVar12 = 1;
               while (uVar8 != 0) {
                  if (uVar4 == 0) goto LAB_001002e0;
                  if (uVar8 < uVar4) break;
                  if (uVar4 < uVar8) goto LAB_001002e0;
                  pbVar1 = pbVar14 + lVar12;
                  uVar4 = (uint)(char)*pbVar1;
                  pbVar2 = pbVar15 + lVar12;
                  uVar8 = (uint)(char)*pbVar2;
                  lVar12 = lVar12 + 1;
                  if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_001002e0;
               }
;
            }

         }

         LAB_001002b0:param_5[lVar10 + param_1] = pEVar11;
         lVar12 = ( lVar13 + -1 ) - ( lVar13 + -1 >> 0x3f );
         lVar10 = lVar13;
         if (lVar13 <= param_2) {
            param_5[param_1 + lVar13] = param_4;
            return;
         }

      }
;
      if (lVar16 != 0) {
         pbVar14 = *(byte**)( lVar16 + 8 );
         uVar4 = 0;
         uVar8 = 0;
         pbVar15 = &_LC0;
         if (pbVar14 != (byte*)0x0) goto LAB_00100364;
         LAB_00100315:uVar8 = **(uint**)( lVar16 + 0x10 );
         if (uVar8 != 0 || uVar4 != 0) {
            lVar12 = 0;
            while (uVar4 != 0) {
               if (uVar8 == 0) goto LAB_001002e0;
               if (uVar4 < uVar8) break;
               if (uVar8 < uVar4) goto LAB_001002e0;
               uVar4 = (uint)(char)pbVar15[lVar12 + 1];
               uVar8 = ( *(uint**)( lVar16 + 0x10 ) )[lVar12 + 1];
               lVar12 = lVar12 + 1;
               if (uVar4 == 0 && uVar8 == 0) goto LAB_001002e0;
            }
;
            goto LAB_001002b0;
         }

      }

      LAB_001002e0:ppEVar9 = param_5 + lVar10 + param_1;
   }

   LAB_001002ea:*ppEVar9 = param_4;
   return;
}
/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,
   true>::unguarded_linear_insert(long, List<StringName, DefaultAllocator>::Element*,
   List<StringName, DefaultAllocator>::Element**) const [clone .isra.0] */void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::unguarded_linear_insert(long param_1, Element *param_2, Element **param_3) {
   byte *pbVar1;
   byte *pbVar2;
   long lVar3;
   byte bVar4;
   long lVar5;
   long lVar6;
   uint uVar7;
   uint uVar8;
   byte *pbVar9;
   Element *pEVar10;
   byte *pbVar11;
   lVar3 = *(long*)param_2;
   LAB_00100550:pEVar10 = param_3[param_1 + -1];
   lVar5 = *(long*)pEVar10;
   if (lVar3 != 0) {
      pbVar9 = *(byte**)( lVar3 + 8 );
      do {
         if (lVar5 == 0) {
            if (pbVar9 != (byte*)0x0) goto code_r0x00100601;
            uVar7 = 0;
            pbVar11 = &_LC0;
            LAB_0010058c:uVar8 = **(uint**)( lVar3 + 0x10 );
            if (uVar8 == 0 && uVar7 == 0) goto LAB_0010071b;
            lVar5 = 0;
            while (uVar8 != 0) {
               if (uVar7 == 0) goto LAB_0010071b;
               if (uVar8 < uVar7) break;
               if (uVar7 < uVar8) goto LAB_0010071b;
               uVar8 = ( *(uint**)( lVar3 + 0x10 ) )[lVar5 + 1];
               uVar7 = (uint)(char)pbVar11[lVar5 + 1];
               lVar5 = lVar5 + 1;
               if (uVar8 == 0 && uVar7 == 0) goto LAB_0010071b;
            }
;
         }
 else {
            pbVar11 = *(byte**)( lVar5 + 8 );
            if (pbVar9 != (byte*)0x0) {
               uVar7 = (uint)(char)*pbVar9;
               goto LAB_0010062c;
            }

            if (pbVar11 != (byte*)0x0) {
               uVar7 = (uint)(char)*pbVar11;
               goto LAB_0010058c;
            }

            uVar7 = **(uint**)( lVar5 + 0x10 );
            uVar8 = **(uint**)( lVar3 + 0x10 );
            if (uVar7 == 0 && uVar8 == 0) goto LAB_0010071b;
            lVar6 = 4;
            while (uVar8 != 0) {
               if (uVar7 == 0) goto LAB_0010071b;
               if (uVar8 < uVar7) break;
               if (uVar7 < uVar8) goto LAB_0010071b;
               uVar8 = *(uint*)( (long)*(uint**)( lVar3 + 0x10 ) + lVar6 );
               uVar7 = *(uint*)( (long)*(uint**)( lVar5 + 0x10 ) + lVar6 );
               lVar6 = lVar6 + 4;
               if (uVar8 == 0 && uVar7 == 0) goto LAB_0010071b;
            }
;
         }

         if (param_1 == 1) goto LAB_001006f0;
         param_3[param_1] = pEVar10;
         pEVar10 = param_3[param_1 + -2];
         lVar5 = *(long*)pEVar10;
         param_1 = param_1 + -1;
      }
 while ( true );
   }

   if (lVar5 != 0) {
      pbVar11 = *(byte**)( lVar5 + 8 );
      uVar7 = 0;
      pbVar9 = &_LC0;
      LAB_0010062c:if (pbVar11 != (byte*)0x0) {
         uVar8 = (uint)(char)*pbVar11;
         bVar4 = (byte)uVar7 | *pbVar11;
         goto LAB_0010069f;
      }

      uVar8 = **(uint**)( lVar5 + 0x10 );
      if (uVar8 != 0 || uVar7 != 0) {
         lVar6 = 0;
         while (uVar7 != 0) {
            if (uVar8 == 0) goto LAB_0010071b;
            if (uVar7 < uVar8) break;
            if (uVar8 < uVar7) goto LAB_0010071b;
            uVar7 = (uint)(char)pbVar9[lVar6 + 1];
            uVar8 = ( *(uint**)( lVar5 + 0x10 ) )[lVar6 + 1];
            lVar6 = lVar6 + 1;
            if (uVar7 == 0 && uVar8 == 0) goto LAB_0010071b;
         }
;
         goto LAB_00100680;
      }

   }

   goto LAB_0010071b;
   code_r0x00100601:bVar4 = *pbVar9;
   uVar7 = (uint)(char)bVar4;
   pbVar11 = &_LC0;
   uVar8 = 0;
   LAB_0010069f:if (bVar4 == 0) goto LAB_0010071b;
   lVar5 = 1;
   while (uVar7 != 0) {
      if (uVar8 == 0) goto LAB_0010071b;
      if (uVar7 < uVar8) break;
      if (uVar8 < uVar7) goto LAB_0010071b;
      pbVar1 = pbVar9 + lVar5;
      uVar7 = (uint)(char)*pbVar1;
      pbVar2 = pbVar11 + lVar5;
      uVar8 = (uint)(char)*pbVar2;
      lVar5 = lVar5 + 1;
      if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_0010071b;
   }
;
   LAB_00100680:if (param_1 == 1) {
      LAB_001006f0:_err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
      param_1 = 1;
      LAB_0010071b:param_3[param_1] = param_2;
      return;
   }

   param_3[param_1] = pEVar10;
   param_1 = param_1 + -1;
   goto LAB_00100550;
}
/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::linear_insert(long, long,
   List<StringName, DefaultAllocator>::Element**) const [clone .isra.0] */void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::linear_insert(long param_1, long param_2, Element **param_3) {
   Element **__src;
   byte *pbVar1;
   byte *pbVar2;
   Element *pEVar3;
   byte bVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   uint uVar8;
   uint uVar9;
   byte *pbVar10;
   byte *pbVar11;
   __src = param_3 + param_1;
   pEVar3 = param_3[param_2];
   lVar6 = *(long*)pEVar3;
   lVar5 = *(long*)*__src;
   if (lVar6 == 0) {
      if (lVar5 == 0) goto LAB_001008f0;
      pbVar10 = *(byte**)( lVar5 + 8 );
      uVar8 = 0;
      pbVar11 = &_LC0;
      LAB_001008a4:if (pbVar10 == (byte*)0x0) {
         uVar9 = **(uint**)( lVar5 + 0x10 );
         if (uVar8 != 0 || uVar9 != 0) {
            lVar6 = 0;
            do {
               if (uVar8 == 0) goto LAB_00100840;
               if (uVar9 == 0) break;
               if (uVar8 < uVar9) goto LAB_00100840;
               if (uVar9 < uVar8) break;
               uVar8 = (uint)(char)pbVar11[lVar6 + 1];
               uVar9 = ( *(uint**)( lVar5 + 0x10 ) )[lVar6 + 1];
               lVar6 = lVar6 + 1;
            }
 while ( uVar8 != 0 || uVar9 != 0 );
         }

         goto LAB_001008f0;
      }

      uVar9 = (uint)(char)*pbVar10;
      bVar4 = (byte)uVar8 | *pbVar10;
      LAB_00100917:if (bVar4 != 0) {
         lVar6 = 1;
         do {
            if (uVar8 == 0) goto LAB_00100840;
            if (uVar9 == 0) break;
            if (uVar8 < uVar9) goto LAB_00100840;
            if (uVar9 < uVar8) break;
            pbVar2 = pbVar11 + lVar6;
            uVar8 = (uint)(char)*pbVar2;
            pbVar1 = pbVar10 + lVar6;
            uVar9 = (uint)(char)*pbVar1;
            lVar6 = lVar6 + 1;
         }
 while ( *pbVar2 != 0 || *pbVar1 != 0 );
      }

   }
 else {
      pbVar11 = *(byte**)( lVar6 + 8 );
      if (lVar5 == 0) {
         if (pbVar11 != (byte*)0x0) {
            bVar4 = *pbVar11;
            uVar8 = (uint)(char)bVar4;
            pbVar10 = &_LC0;
            uVar9 = 0;
            goto LAB_00100917;
         }

         uVar8 = 0;
         pbVar10 = &_LC0;
      }
 else {
         pbVar10 = *(byte**)( lVar5 + 8 );
         if (pbVar11 != (byte*)0x0) {
            uVar8 = (uint)(char)*pbVar11;
            goto LAB_001008a4;
         }

         if (pbVar10 == (byte*)0x0) {
            uVar8 = **(uint**)( lVar5 + 0x10 );
            uVar9 = **(uint**)( lVar6 + 0x10 );
            if (uVar8 != 0 || uVar9 != 0) {
               lVar7 = 4;
               do {
                  if (uVar9 == 0) goto LAB_00100840;
                  if (uVar8 == 0) break;
                  if (uVar9 < uVar8) goto LAB_00100840;
                  if (uVar8 < uVar9) break;
                  uVar9 = *(uint*)( (long)*(uint**)( lVar6 + 0x10 ) + lVar7 );
                  uVar8 = *(uint*)( (long)*(uint**)( lVar5 + 0x10 ) + lVar7 );
                  lVar7 = lVar7 + 4;
               }
 while ( uVar9 != 0 || uVar8 != 0 );
            }

            goto LAB_001008f0;
         }

         uVar8 = (uint)(char)*pbVar10;
      }

      uVar9 = **(uint**)( lVar6 + 0x10 );
      if (uVar8 != 0 || uVar9 != 0) {
         lVar5 = 0;
         do {
            if (uVar9 == 0) {
               LAB_00100840:if (param_1 < param_2) {
                  memmove(param_3 + param_1 + 1, __src, ( param_2 - param_1 ) * 8);
               }

               *__src = pEVar3;
               return;
            }

            if (uVar8 == 0) break;
            if (uVar9 < uVar8) goto LAB_00100840;
            if (uVar8 < uVar9) break;
            uVar9 = ( *(uint**)( lVar6 + 0x10 ) )[lVar5 + 1];
            uVar8 = (uint)(char)pbVar10[lVar5 + 1];
            lVar5 = lVar5 + 1;
         }
 while ( uVar9 != 0 || uVar8 != 0 );
      }

   }

   LAB_001008f0:unguarded_linear_insert(param_2, pEVar3, param_3);
   return;
}
/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,
   true>::median_of_3(List<StringName, DefaultAllocator>::Element* const&, List<StringName,
   DefaultAllocator>::Element* const&, List<StringName, DefaultAllocator>::Element* const&) const
   [clone .isra.0] */Element **SortArray<List<StringName,DefaultAllocator>::Element*,List < StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>byte *pbVar2byte bVar3uint uVar4uint uVar5uint uVar6uint *puVar7long lVar8long lVar9uint *puVar10byte bVar11uint uVar12long lVar13long lVar14byte *pbVar15byte *pbVar16byte *pbVar17lVar8 = *(long*)*param_1;lVar9 = *(long*)*param_3;lVar13 = *(long*)*param_2;if (lVar8 == 0) {
   pbVar15 = &_LC0;
   pbVar16 = &_LC0;
   if (lVar13 == 0) {
      LAB_00101300:if (lVar9 != 0) {
         pbVar17 = *(byte**)( lVar9 + 8 );
         LAB_00100bce:uVar5 = (uint)(char)*pbVar16;
         uVar4 = uVar5;
         goto LAB_00100bd4;
      }

      uVar5 = (uint)(char)*pbVar16;
      uVar6 = 0;
      uVar12 = 0;
      pbVar17 = &_LC0;
      if (*pbVar16 == 0) goto LAB_00100ec9;
      LAB_00100d22:lVar8 = 1;
      do {
         if (uVar5 == 0) {
            return param_1;
         }

         if (uVar6 == 0) break;
         if (uVar5 < uVar6) {
            return param_1;
         }

         if (uVar6 < uVar5) break;
         pbVar2 = pbVar16 + lVar8;
         uVar5 = (uint)(char)*pbVar2;
         pbVar1 = pbVar17 + lVar8;
         uVar6 = (uint)(char)*pbVar1;
         lVar8 = lVar8 + 1;
      }
 while ( *pbVar2 != 0 || *pbVar1 != 0 );
   }
 else {
      pbVar15 = *(byte**)( lVar13 + 8 );
      uVar4 = 0;
      pbVar16 = &_LC0;
      LAB_00100b52:if (pbVar15 != (byte*)0x0) {
         uVar12 = (uint)(char)*pbVar15;
         bVar11 = *pbVar15 | (byte)uVar4;
         LAB_00100c40:if (bVar11 != 0) {
            lVar14 = 1;
            do {
               if (uVar4 == 0) goto joined_r0x00100c88;
               if (uVar12 == 0) break;
               if (uVar4 < uVar12) goto joined_r0x00100c88;
               if (uVar12 < uVar4) break;
               pbVar17 = pbVar16 + lVar14;
               uVar4 = (uint)(char)*pbVar17;
               pbVar2 = pbVar15 + lVar14;
               uVar12 = (uint)(char)*pbVar2;
               lVar14 = lVar14 + 1;
            }
 while ( *pbVar17 != 0 || *pbVar2 != 0 );
            goto LAB_00100bb8;
         }

         goto LAB_00101300;
      }

      uVar12 = **(uint**)( lVar13 + 0x10 );
      if (uVar4 != 0 || uVar12 != 0) {
         lVar14 = 0;
         do {
            if (uVar4 == 0) goto joined_r0x00100c88;
            if (uVar12 == 0) break;
            if (uVar4 < uVar12) goto joined_r0x00100c88;
            if (uVar12 < uVar4) break;
            uVar4 = (uint)(char)pbVar16[lVar14 + 1];
            uVar12 = ( *(uint**)( lVar13 + 0x10 ) )[lVar14 + 1];
            lVar14 = lVar14 + 1;
         }
 while ( uVar4 != 0 || uVar12 != 0 );
         goto LAB_00100bb8;
      }

      if (lVar9 == 0) goto LAB_00100f21;
      pbVar17 = *(byte**)( lVar9 + 8 );
      uVar5 = 0;
      LAB_00100bd4:if (pbVar17 != (byte*)0x0) {
         uVar6 = (uint)(char)*pbVar17;
         bVar11 = (byte)uVar4 | *pbVar17;
         goto LAB_00100d19;
      }

      puVar10 = *(uint**)( lVar9 + 0x10 );
      uVar4 = *puVar10;
      uVar6 = uVar4 | uVar5;
      if (uVar6 == 0) goto LAB_00101206;
      lVar8 = 0;
      do {
         if (uVar5 == 0) {
            return param_1;
         }

         if (uVar4 == 0) break;
         if (uVar5 < uVar4) {
            return param_1;
         }

         if (uVar4 < uVar5) break;
         uVar5 = (uint)(char)pbVar16[lVar8 + 1];
         uVar4 = puVar10[lVar8 + 1];
         lVar8 = lVar8 + 1;
      }
 while ( uVar5 != 0 || uVar4 != 0 );
   }

   LAB_00100eb0:if (pbVar15 == (byte*)0x0) {
      if (pbVar17 == (byte*)0x0) {
         puVar10 = *(uint**)( lVar9 + 0x10 );
         LAB_0010120f:uVar4 = *puVar10;
         uVar12 = **(uint**)( lVar13 + 0x10 );
         if (uVar12 == 0 && uVar4 == 0) {
            return param_2;
         }

         lVar8 = 4;
         while (true) {
            if (uVar12 == 0) {
               return param_3;
            }

            if (uVar4 == 0) {
               return param_2;
            }

            if (uVar12 < uVar4) {
               return param_3;
            }

            if (uVar4 < uVar12) break;
            uVar12 = *(uint*)( (long)*(uint**)( lVar13 + 0x10 ) + lVar8 );
            uVar4 = *(uint*)( (long)puVar10 + lVar8 );
            lVar8 = lVar8 + 4;
            if (uVar12 == 0 && uVar4 == 0) {
               return param_2;
            }

         }
;
         return param_2;
      }

      uVar12 = (uint)(char)*pbVar17;
      LAB_00101096:uVar4 = **(uint**)( lVar13 + 0x10 );
      if (uVar4 != 0 || uVar12 != 0) {
         lVar8 = 0;
         do {
            if (uVar4 == 0) {
               return param_3;
            }

            if (uVar12 == 0) {
               return param_2;
            }

            if (uVar4 < uVar12) {
               return param_3;
            }

            if (uVar12 < uVar4) {
               return param_2;
            }

            uVar4 = ( *(uint**)( lVar13 + 0x10 ) )[lVar8 + 1];
            uVar12 = (uint)(char)pbVar17[lVar8 + 1];
            lVar8 = lVar8 + 1;
         }
 while ( uVar4 != 0 || uVar12 != 0 );
      }

      return param_2;
   }

   if (pbVar17 == (byte*)0x0) {
      puVar10 = *(uint**)( lVar9 + 0x10 );
      uVar6 = *puVar10;
      LAB_001010f8:uVar4 = (uint)(char)*pbVar15;
      if (uVar4 == 0 && uVar6 == 0) {
         return param_2;
      }

      lVar8 = 0;
      while (true) {
         if (uVar4 == 0) {
            return param_3;
         }

         if (uVar6 == 0) {
            return param_2;
         }

         if (uVar4 < uVar6) {
            return param_3;
         }

         if (uVar6 < uVar4) break;
         uVar4 = (uint)(char)pbVar15[lVar8 + 1];
         uVar6 = puVar10[lVar8 + 1];
         lVar8 = lVar8 + 1;
         if (uVar4 == 0 && uVar6 == 0) {
            return param_2;
         }

      }
;
      return param_2;
   }

   uVar12 = (uint)(char)*pbVar17;
   uVar5 = uVar12;
}
 else {
   pbVar16 = *(byte**)( lVar8 + 8 );
   if (lVar13 == 0) {
      if (pbVar16 != (byte*)0x0) {
         bVar11 = *pbVar16;
         uVar4 = (uint)(char)bVar11;
         uVar12 = 0;
         pbVar15 = &_LC0;
         goto LAB_00100c40;
      }

      uVar4 = 0;
      pbVar15 = &_LC0;
      LAB_00100a32:uVar12 = **(uint**)( lVar8 + 0x10 );
      if (uVar4 != 0 || uVar12 != 0) {
         lVar14 = 0;
         do {
            if (uVar12 == 0) goto joined_r0x00100c88;
            if (uVar4 == 0) break;
            if (uVar12 < uVar4) goto joined_r0x00100c88;
            if (uVar4 < uVar12) break;
            uVar12 = ( *(uint**)( lVar8 + 0x10 ) )[lVar14 + 1];
            uVar4 = (uint)(char)pbVar15[lVar14 + 1];
            lVar14 = lVar14 + 1;
         }
 while ( uVar12 != 0 || uVar4 != 0 );
      }

      LAB_00100bb8:if (lVar9 != 0) {
         pbVar17 = *(byte**)( lVar9 + 8 );
         if (pbVar16 != (byte*)0x0) goto LAB_00100bce;
         puVar7 = *(uint**)( lVar8 + 0x10 );
         uVar4 = *puVar7;
         LAB_00100fb8:if (pbVar17 != (byte*)0x0) {
            uVar12 = (uint)(char)*pbVar17;
            uVar6 = uVar4 | uVar12;
            goto LAB_00101273;
         }

         puVar10 = *(uint**)( lVar9 + 0x10 );
         uVar12 = *puVar10;
         uVar6 = uVar12 | uVar4;
         if (uVar6 != 0) {
            lVar8 = 4;
            do {
               if (uVar4 == 0) {
                  return param_1;
               }

               if (uVar12 == 0) break;
               if (uVar4 < uVar12) {
                  return param_1;
               }

               if (uVar12 < uVar4) break;
               uVar4 = *(uint*)( (long)puVar7 + lVar8 );
               uVar12 = *(uint*)( (long)puVar10 + lVar8 );
               lVar8 = lVar8 + 4;
            }
 while ( uVar4 != 0 || uVar12 != 0 );
            goto LAB_00100eb0;
         }

         LAB_00101206:if (pbVar15 != (byte*)0x0) goto LAB_001010f8;
         goto LAB_0010120f;
      }

      if (pbVar16 == (byte*)0x0) {
         puVar7 = *(uint**)( lVar8 + 0x10 );
         goto LAB_001012d1;
      }

      LAB_00100f21:bVar11 = *pbVar16;
      uVar5 = (uint)(char)bVar11;
      uVar6 = 0;
      pbVar17 = &_LC0;
      LAB_00100d19:uVar12 = uVar6;
      if (bVar11 != 0) goto LAB_00100d22;
   }
 else {
      pbVar15 = *(byte**)( lVar13 + 8 );
      if (pbVar16 != (byte*)0x0) {
         uVar4 = (uint)(char)*pbVar16;
         goto LAB_00100b52;
      }

      if (pbVar15 != (byte*)0x0) {
         uVar4 = (uint)(char)*pbVar15;
         goto LAB_00100a32;
      }

      puVar7 = *(uint**)( lVar8 + 0x10 );
      uVar12 = **(uint**)( lVar13 + 0x10 );
      uVar4 = *puVar7;
      if (uVar12 != 0 || uVar4 != 0) {
         lVar14 = 4;
         do {
            if (uVar4 == 0) {
               LAB_00100e28:pbVar16 = (byte*)0x0;
               goto joined_r0x00100c88;
            }

            if (uVar12 == 0) break;
            if (uVar4 < uVar12) goto LAB_00100e28;
            if (uVar12 < uVar4) break;
            uVar4 = *(uint*)( (long)puVar7 + lVar14 );
            uVar12 = *(uint*)( (long)*(uint**)( lVar13 + 0x10 ) + lVar14 );
            lVar14 = lVar14 + 4;
         }
 while ( uVar4 != 0 || uVar12 != 0 );
         pbVar16 = (byte*)0x0;
         goto LAB_00100bb8;
      }

      if (lVar9 != 0) {
         pbVar17 = *(byte**)( lVar9 + 8 );
         uVar4 = 0;
         goto LAB_00100fb8;
      }

      LAB_001012d1:uVar4 = *puVar7;
      uVar12 = 0;
      pbVar17 = &_LC0;
      uVar6 = uVar4;
      LAB_00101273:if (uVar6 != 0) {
         lVar8 = 0;
         do {
            if (uVar4 == 0) {
               return param_1;
            }

            if (uVar12 == 0) break;
            if (uVar4 < uVar12) {
               return param_1;
            }

            if (uVar12 < uVar4) break;
            uVar4 = puVar7[lVar8 + 1];
            uVar12 = (uint)(char)pbVar17[lVar8 + 1];
            lVar8 = lVar8 + 1;
         }
 while ( uVar4 != 0 || uVar12 != 0 );
         goto LAB_00100eb0;
      }

   }

   uVar5 = uVar12;
   if (pbVar15 == (byte*)0x0) goto LAB_00101096;
}
LAB_00100ec9:bVar11 = *pbVar15;if (bVar11 == 0 && (char)uVar5 == '\0') {
   return param_2;
}
lVar8 = 1;while (true) {
   uVar4 = (uint)(char)bVar11;
   if (uVar4 == 0) {
      return param_3;
   }

   if (uVar12 == 0) {
      return param_2;
   }

   if (uVar4 < uVar12) {
      return param_3;
   }

   if (uVar12 < uVar4) break;
   bVar11 = pbVar15[lVar8];
   pbVar16 = pbVar17 + lVar8;
   uVar12 = (uint)(char)*pbVar16;
   lVar8 = lVar8 + 1;
   if (bVar11 == 0 && *pbVar16 == 0) {
      return param_2;
   }

}
;return param_2;joined_r0x00100c88:if (lVar9 == 0) {
   uVar4 = 0;
   uVar12 = 0;
   bVar11 = 0;
   pbVar17 = &_LC0;
   if (pbVar15 != (byte*)0x0) goto LAB_00100d77;
   LAB_00100ca4:uVar6 = **(uint**)( lVar13 + 0x10 );
   uVar4 = uVar6 | uVar12;
   if (uVar4 != 0) {
      lVar14 = 0;
      do {
         if (uVar6 == 0) {
            return param_2;
         }

         if (uVar12 == 0) break;
         if (uVar6 < uVar12) {
            return param_2;
         }

         if (uVar12 < uVar6) break;
         uVar6 = ( *(uint**)( lVar13 + 0x10 ) )[lVar14 + 1];
         uVar12 = (uint)(char)pbVar17[lVar14 + 1];
         lVar14 = lVar14 + 1;
      }
 while ( uVar6 != 0 || uVar12 != 0 );
      goto LAB_00100e40;
   }

   LAB_0010130e:bVar11 = (byte)uVar12;
   if (pbVar16 == (byte*)0x0) goto LAB_0010102e;
}
 else {
   pbVar17 = *(byte**)( lVar9 + 8 );
   if (pbVar15 == (byte*)0x0) {
      if (pbVar17 != (byte*)0x0) {
         uVar12 = (uint)(char)*pbVar17;
         goto LAB_00100ca4;
      }

      puVar7 = *(uint**)( lVar9 + 0x10 );
      uVar4 = *puVar7;
      uVar6 = **(uint**)( lVar13 + 0x10 );
      uVar12 = uVar4 | uVar6;
      if (uVar12 == 0) goto LAB_001011a9;
      lVar14 = 4;
      do {
         if (uVar6 == 0) {
            return param_2;
         }

         if (uVar4 == 0) break;
         if (uVar6 < uVar4) {
            return param_2;
         }

         if (uVar4 < uVar6) break;
         uVar6 = *(uint*)( (long)*(uint**)( lVar13 + 0x10 ) + lVar14 );
         uVar4 = *(uint*)( (long)puVar7 + lVar14 );
         lVar14 = lVar14 + 4;
      }
 while ( uVar6 != 0 || uVar4 != 0 );
   }
 else {
      if (pbVar17 == (byte*)0x0) {
         puVar7 = *(uint**)( lVar9 + 0x10 );
         uVar6 = (uint)(char)*pbVar15;
         uVar4 = *puVar7;
         uVar12 = uVar4 | uVar6;
         if (uVar12 != 0) {
            lVar13 = 0;
            do {
               if (uVar6 == 0) {
                  return param_2;
               }

               if (uVar4 == 0) break;
               if (uVar6 < uVar4) {
                  return param_2;
               }

               if (uVar4 < uVar6) break;
               uVar6 = (uint)(char)pbVar15[lVar13 + 1];
               uVar4 = puVar7[lVar13 + 1];
               lVar13 = lVar13 + 1;
            }
 while ( uVar6 != 0 || uVar4 != 0 );
            goto LAB_00100e40;
         }

         LAB_001011a9:if (pbVar16 == (byte*)0x0) goto LAB_001011ae;
         goto LAB_00101156;
      }

      bVar11 = *pbVar17;
      uVar4 = (uint)(char)bVar11;
      LAB_00100d77:bVar3 = *pbVar15;
      uVar12 = ( uint )(bVar11 | bVar3);
      if (( bVar11 | bVar3 ) == 0) goto LAB_0010130e;
      lVar13 = 1;
      do {
         uVar12 = (uint)(char)bVar3;
         if (uVar12 == 0) {
            return param_2;
         }

         if (uVar4 == 0) break;
         if (uVar12 < uVar4) {
            return param_2;
         }

         if (uVar4 < uVar12) break;
         bVar3 = pbVar15[lVar13];
         pbVar2 = pbVar17 + lVar13;
         uVar4 = (uint)(char)*pbVar2;
         lVar13 = lVar13 + 1;
      }
 while ( bVar3 != 0 || *pbVar2 != 0 );
   }

   LAB_00100e40:if (pbVar16 == (byte*)0x0) {
      if (pbVar17 == (byte*)0x0) {
         puVar7 = *(uint**)( lVar9 + 0x10 );
         LAB_001011ae:uVar4 = *puVar7;
         uVar12 = **(uint**)( lVar8 + 0x10 );
         if (uVar12 == 0 && uVar4 == 0) {
            return param_1;
         }

         lVar9 = 4;
         while (true) {
            if (uVar12 == 0) {
               return param_3;
            }

            if (uVar4 == 0) {
               return param_1;
            }

            if (uVar12 < uVar4) {
               return param_3;
            }

            if (uVar4 < uVar12) break;
            uVar12 = *(uint*)( (long)*(uint**)( lVar8 + 0x10 ) + lVar9 );
            uVar4 = *(uint*)( (long)puVar7 + lVar9 );
            lVar9 = lVar9 + 4;
            if (uVar12 == 0 && uVar4 == 0) {
               return param_1;
            }

         }
;
         return param_1;
      }

      uVar4 = (uint)(char)*pbVar17;
      LAB_0010102e:uVar12 = **(uint**)( lVar8 + 0x10 );
      if (uVar12 == 0 && uVar4 == 0) {
         return param_1;
      }

      lVar9 = 0;
      while (true) {
         if (uVar12 == 0) {
            return param_3;
         }

         if (uVar4 == 0) {
            return param_1;
         }

         if (uVar12 < uVar4) {
            return param_3;
         }

         if (uVar4 < uVar12) break;
         uVar12 = ( *(uint**)( lVar8 + 0x10 ) )[lVar9 + 1];
         uVar4 = (uint)(char)pbVar17[lVar9 + 1];
         lVar9 = lVar9 + 1;
         if (uVar12 == 0 && uVar4 == 0) {
            return param_1;
         }

      }
;
      return param_1;
   }

   if (pbVar17 == (byte*)0x0) {
      puVar7 = *(uint**)( lVar9 + 0x10 );
      uVar12 = *puVar7;
      LAB_00101156:uVar4 = (uint)(char)*pbVar16;
      if (uVar12 == 0 && uVar4 == 0) {
         return param_1;
      }

      lVar8 = 0;
      while (true) {
         if (uVar4 == 0) {
            return param_3;
         }

         if (uVar12 == 0) {
            return param_1;
         }

         if (uVar4 < uVar12) {
            return param_3;
         }

         if (uVar12 < uVar4) break;
         uVar4 = (uint)(char)pbVar16[lVar8 + 1];
         uVar12 = puVar7[lVar8 + 1];
         lVar8 = lVar8 + 1;
         if (uVar4 == 0 && uVar12 == 0) {
            return param_1;
         }

      }
;
      return param_1;
   }

   bVar11 = *pbVar17;
   uVar4 = (uint)(char)bVar11;
}
bVar3 = *pbVar16;if (bVar3 == 0 && bVar11 == 0) {
   return param_1;
}
lVar8 = 1;while (true) {
   uVar12 = (uint)(char)bVar3;
   if (uVar12 == 0) {
      return param_3;
   }

   if (uVar4 == 0) {
      return param_1;
   }

   if (uVar12 < uVar4) {
      return param_3;
   }

   if (uVar4 < uVar12) break;
   bVar3 = pbVar16[lVar8];
   pbVar15 = pbVar17 + lVar8;
   uVar4 = (uint)(char)*pbVar15;
   lVar8 = lVar8 + 1;
   if (bVar3 == 0 && *pbVar15 == 0) {
      return param_1;
   }

}
;return param_1;}/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::partitioner(long, long,
   List<StringName, DefaultAllocator>::Element*, List<StringName, DefaultAllocator>::Element**)
   const [clone .isra.0] */long SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::partitioner(long param_1, long param_2, Element *param_3, Element **param_4) {
   byte *pbVar1;
   byte *pbVar2;
   Element *pEVar3;
   Element **ppEVar4;
   uint uVar5;
   byte bVar6;
   long lVar7;
   long lVar8;
   uint uVar9;
   long lVar10;
   long lVar11;
   byte *pbVar12;
   byte *pbVar13;
   long lVar14;
   lVar14 = *(long*)param_3;
   lVar7 = *(long*)param_4[param_1];
   lVar11 = param_1;
   lVar10 = param_2;
   joined_r0x001013b7:if (lVar7 == 0) {
      if (lVar14 == 0) goto LAB_001014e8;
      pbVar13 = *(byte**)( lVar14 + 8 );
      uVar9 = 0;
      pbVar12 = &_LC0;
      LAB_0010146e:if (pbVar13 == (byte*)0x0) {
         uVar5 = **(uint**)( lVar14 + 0x10 );
         if (uVar5 != 0 || uVar9 != 0) {
            lVar7 = 0;
            do {
               if (uVar9 == 0) goto LAB_00101438;
               if (uVar5 == 0) break;
               if (uVar9 < uVar5) goto LAB_00101438;
               if (uVar5 < uVar9) break;
               uVar9 = (uint)(char)pbVar12[lVar7 + 1];
               uVar5 = ( *(uint**)( lVar14 + 0x10 ) )[lVar7 + 1];
               lVar7 = lVar7 + 1;
            }
 while ( uVar9 != 0 || uVar5 != 0 );
         }

         goto LAB_001014e8;
      }

      uVar5 = (uint)(char)*pbVar13;
      bVar6 = (byte)uVar9 | *pbVar13;
      LAB_00101735:if (bVar6 != 0) {
         lVar7 = 1;
         do {
            if (uVar9 == 0) goto LAB_00101438;
            if (uVar5 == 0) break;
            if (uVar9 < uVar5) goto LAB_00101438;
            if (uVar5 < uVar9) break;
            pbVar1 = pbVar12 + lVar7;
            uVar9 = (uint)(char)*pbVar1;
            pbVar2 = pbVar13 + lVar7;
            uVar5 = (uint)(char)*pbVar2;
            lVar7 = lVar7 + 1;
         }
 while ( *pbVar1 != 0 || *pbVar2 != 0 );
      }

   }
 else {
      pbVar12 = *(byte**)( lVar7 + 8 );
      if (lVar14 == 0) {
         if (pbVar12 != (byte*)0x0) {
            bVar6 = *pbVar12;
            uVar9 = (uint)(char)bVar6;
            uVar5 = 0;
            pbVar13 = &_LC0;
            goto LAB_00101735;
         }

         uVar9 = 0;
         pbVar13 = &_LC0;
      }
 else {
         pbVar13 = *(byte**)( lVar14 + 8 );
         if (pbVar12 != (byte*)0x0) {
            uVar9 = (uint)(char)*pbVar12;
            goto LAB_0010146e;
         }

         if (pbVar13 == (byte*)0x0) {
            uVar9 = **(uint**)( lVar14 + 0x10 );
            uVar5 = **(uint**)( lVar7 + 0x10 );
            if (uVar9 != 0 || uVar5 != 0) {
               lVar8 = 4;
               do {
                  if (uVar5 == 0) goto LAB_00101438;
                  if (uVar9 == 0) break;
                  if (uVar5 < uVar9) goto LAB_00101438;
                  if (uVar9 < uVar5) break;
                  uVar5 = *(uint*)( (long)*(uint**)( lVar7 + 0x10 ) + lVar8 );
                  uVar9 = *(uint*)( (long)*(uint**)( lVar14 + 0x10 ) + lVar8 );
                  lVar8 = lVar8 + 4;
               }
 while ( uVar5 != 0 || uVar9 != 0 );
            }

            goto LAB_001014e8;
         }

         uVar9 = (uint)(char)*pbVar13;
      }

      uVar5 = **(uint**)( lVar7 + 0x10 );
      if (uVar5 != 0 || uVar9 != 0) {
         lVar8 = 0;
         do {
            if (uVar5 == 0) goto LAB_00101438;
            if (uVar9 == 0) break;
            if (uVar5 < uVar9) goto LAB_00101438;
            if (uVar9 < uVar5) break;
            uVar5 = ( *(uint**)( lVar7 + 0x10 ) )[lVar8 + 1];
            uVar9 = (uint)(char)pbVar13[lVar8 + 1];
            lVar8 = lVar8 + 1;
         }
 while ( uVar5 != 0 || uVar9 != 0 );
      }

   }

   goto LAB_001014e8;
   LAB_00101438:if (param_2 + -1 == lVar11) {
      _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
      lVar14 = *(long*)param_3;
      LAB_001014e8:lVar10 = lVar10 + -1;
      lVar7 = *(long*)param_4[lVar10];
      ppEVar4 = param_4 + lVar10;
      do {
         if (lVar14 == 0) {
            if (lVar7 == 0) goto LAB_001016e8;
            pbVar13 = *(byte**)( lVar7 + 8 );
            uVar5 = 0;
            pbVar12 = &_LC0;
            uVar9 = 0;
            if (pbVar13 == (byte*)0x0) {
               LAB_001015bc:uVar9 = **(uint**)( lVar7 + 0x10 );
               if (uVar9 == 0 && uVar5 == 0) goto LAB_001016e8;
               lVar8 = 0;
               while (uVar5 != 0) {
                  if (uVar9 == 0) goto LAB_001016e8;
                  if (uVar5 < uVar9) break;
                  if (uVar9 < uVar5) goto LAB_001016e8;
                  uVar5 = (uint)(char)pbVar12[lVar8 + 1];
                  uVar9 = ( *(uint**)( lVar7 + 0x10 ) )[lVar8 + 1];
                  lVar8 = lVar8 + 1;
                  if (uVar5 == 0 && uVar9 == 0) goto LAB_001016e8;
               }
;
            }
 else {
               LAB_0010161b:uVar5 = (uint)(char)*pbVar13;
               bVar6 = (byte)uVar9 | *pbVar13;
               LAB_00101621:if (bVar6 == 0) goto LAB_001016e8;
               lVar7 = 1;
               while (uVar9 != 0) {
                  if (uVar5 == 0) goto LAB_001016e8;
                  if (uVar9 < uVar5) break;
                  if (uVar5 < uVar9) goto LAB_001016e8;
                  pbVar1 = pbVar12 + lVar7;
                  uVar9 = (uint)(char)*pbVar1;
                  pbVar2 = pbVar13 + lVar7;
                  uVar5 = (uint)(char)*pbVar2;
                  lVar7 = lVar7 + 1;
                  if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_001016e8;
               }
;
            }

         }
 else {
            pbVar12 = *(byte**)( lVar14 + 8 );
            if (lVar7 == 0) {
               uVar9 = 0;
               pbVar13 = &_LC0;
               if (pbVar12 != (byte*)0x0) {
                  bVar6 = *pbVar12;
                  uVar9 = (uint)(char)bVar6;
                  uVar5 = 0;
                  pbVar13 = &_LC0;
                  goto LAB_00101621;
               }

            }
 else {
               pbVar13 = *(byte**)( lVar7 + 8 );
               if (pbVar12 != (byte*)0x0) {
                  uVar5 = (uint)(char)*pbVar12;
                  uVar9 = uVar5;
                  if (pbVar13 == (byte*)0x0) goto LAB_001015bc;
                  goto LAB_0010161b;
               }

               if (pbVar13 == (byte*)0x0) {
                  uVar9 = **(uint**)( lVar7 + 0x10 );
                  uVar5 = **(uint**)( lVar14 + 0x10 );
                  if (uVar9 != 0 || uVar5 != 0) {
                     lVar8 = 4;
                     while (uVar5 != 0) {
                        if (uVar9 == 0) goto LAB_001016e8;
                        if (uVar5 < uVar9) break;
                        if (uVar9 < uVar5) goto LAB_001016e8;
                        uVar5 = *(uint*)( (long)*(uint**)( lVar14 + 0x10 ) + lVar8 );
                        uVar9 = *(uint*)( (long)*(uint**)( lVar7 + 0x10 ) + lVar8 );
                        lVar8 = lVar8 + 4;
                        if (uVar5 == 0 && uVar9 == 0) goto LAB_001016e8;
                     }
;
                     goto LAB_00101580;
                  }

                  goto LAB_001016e8;
               }

               uVar9 = (uint)(char)*pbVar13;
            }

            uVar5 = **(uint**)( lVar14 + 0x10 );
            if (uVar5 == 0 && uVar9 == 0) goto LAB_001016e8;
            lVar7 = 0;
            while (uVar5 != 0) {
               if (uVar9 == 0) goto LAB_001016e8;
               if (uVar5 < uVar9) break;
               if (uVar9 < uVar5) goto LAB_001016e8;
               uVar5 = ( *(uint**)( lVar14 + 0x10 ) )[lVar7 + 1];
               uVar9 = (uint)(char)pbVar13[lVar7 + 1];
               lVar7 = lVar7 + 1;
               if (uVar5 == 0 && uVar9 == 0) goto LAB_001016e8;
            }
;
         }

         LAB_00101580:if (lVar10 == param_1) goto LAB_001016c0;
         lVar10 = lVar10 + -1;
         lVar7 = *(long*)ppEVar4[-1];
         ppEVar4 = ppEVar4 + -1;
      }
 while ( true );
   }

   LAB_00101446:lVar11 = lVar11 + 1;
   lVar7 = *(long*)param_4[lVar11];
   goto joined_r0x001013b7;
   LAB_001016c0:_err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
   LAB_001016e8:if (lVar10 <= lVar11) {
      return lVar11;
   }

   pEVar3 = param_4[lVar11];
   param_4[lVar11] = *ppEVar4;
   *ppEVar4 = pEVar3;
   lVar14 = *(long*)param_3;
   goto LAB_00101446;
}
/* CowData<unsigned long>::_copy_on_write() [clone .isra.0] */void CowData<unsigned_long>::_copy_on_write(CowData<unsigned_long> *this) {
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
/* AnimationLibraryEditor::_update_editor(Object*) */void AnimationLibraryEditor::_update_editor(AnimationLibraryEditor *this, Object *param_1) {
   long in_FS_OFFSET;
   long local_80;
   Variant *local_78[2];
   int local_68[6];
   undefined8 local_50;
   undefined1 local_48[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_80, "update_editor", false);
   Variant::Variant((Variant*)local_68, param_1);
   local_50 = 0;
   local_48 = (undefined1[16])0x0;
   local_78[0] = (Variant*)local_68;
   ( **(code**)( *(long*)this + 0xd0 ) )(this, (StringName*)&local_80, local_78, 1);
   if (Variant::needs_deinit[(int)local_50] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_68[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::partial_sort(long, long,
   long, List<StringName, DefaultAllocator>::Element**) const [clone .isra.0] */void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::partial_sort(long param_1, long param_2, long param_3, Element **param_4) {
   Element **ppEVar1;
   byte *pbVar2;
   byte *pbVar3;
   Element *pEVar4;
   bool bVar5;
   byte bVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   uint uVar10;
   uint uVar11;
   long lVar12;
   Element **ppEVar13;
   byte *pbVar14;
   byte *pbVar15;
   long lVar16;
   lVar16 = param_3 - param_1;
   ppEVar13 = param_4;
   if (lVar16 < 2) {
      if (param_2 <= param_3) {
         return;
      }

   }
 else {
      for (lVar12 = lVar16 + -2 >> 1; adjust_heap(param_1, lVar12, lVar16, param_4[param_1 + lVar12], ppEVar13),lVar12 != 0; lVar12 = lVar12 + -1) {}
      if (param_2 <= param_3) goto LAB_00101b8c;
   }

   ppEVar1 = ppEVar13 + param_1;
   lVar12 = param_3;
   LAB_00101ae0:pEVar4 = ppEVar13[lVar12];
   lVar8 = *(long*)pEVar4;
   lVar7 = *(long*)*ppEVar1;
   if (lVar8 == 0) {
      if (lVar7 != 0) {
         pbVar14 = *(byte**)( lVar7 + 8 );
         uVar10 = 0;
         pbVar15 = &_LC0;
         LAB_00101bf4:if (pbVar14 == (byte*)0x0) {
            uVar11 = **(uint**)( lVar7 + 0x10 );
            if (uVar11 != 0 || uVar10 != 0) {
               lVar8 = 0;
               do {
                  if (uVar10 == 0) goto LAB_00101b60;
                  if (uVar11 == 0) break;
                  if (uVar10 < uVar11) goto LAB_00101b60;
                  if (uVar11 < uVar10) break;
                  uVar10 = (uint)(char)pbVar15[lVar8 + 1];
                  uVar11 = ( *(uint**)( lVar7 + 0x10 ) )[lVar8 + 1];
                  lVar8 = lVar8 + 1;
               }
 while ( uVar10 != 0 || uVar11 != 0 );
            }

         }
 else {
            uVar11 = (uint)(char)*pbVar14;
            bVar6 = (byte)uVar10 | *pbVar14;
            LAB_00101c56:if (bVar6 != 0) {
               lVar8 = 1;
               do {
                  if (uVar10 == 0) goto LAB_00101b60;
                  if (uVar11 == 0) break;
                  if (uVar10 < uVar11) goto LAB_00101b60;
                  if (uVar11 < uVar10) break;
                  pbVar2 = pbVar14 + lVar8;
                  uVar11 = (uint)(char)*pbVar2;
                  pbVar3 = pbVar15 + lVar8;
                  uVar10 = (uint)(char)*pbVar3;
                  lVar8 = lVar8 + 1;
               }
 while ( *pbVar2 != 0 || *pbVar3 != 0 );
            }

         }

      }

   }
 else {
      pbVar15 = *(byte**)( lVar8 + 8 );
      if (lVar7 == 0) {
         if (pbVar15 != (byte*)0x0) {
            bVar6 = *pbVar15;
            uVar10 = (uint)(char)bVar6;
            pbVar14 = &_LC0;
            uVar11 = 0;
            goto LAB_00101c56;
         }

         uVar10 = 0;
         pbVar14 = &_LC0;
      }
 else {
         pbVar14 = *(byte**)( lVar7 + 8 );
         if (pbVar15 != (byte*)0x0) {
            uVar10 = (uint)(char)*pbVar15;
            goto LAB_00101bf4;
         }

         if (pbVar14 == (byte*)0x0) {
            uVar10 = **(uint**)( lVar7 + 0x10 );
            uVar11 = **(uint**)( lVar8 + 0x10 );
            if (uVar10 != 0 || uVar11 != 0) {
               lVar9 = 4;
               do {
                  if (uVar11 == 0) goto LAB_00101b60;
                  if (uVar10 == 0) break;
                  if (uVar11 < uVar10) goto LAB_00101b60;
                  if (uVar10 < uVar11) break;
                  uVar11 = *(uint*)( (long)*(uint**)( lVar8 + 0x10 ) + lVar9 );
                  uVar10 = *(uint*)( (long)*(uint**)( lVar7 + 0x10 ) + lVar9 );
                  lVar9 = lVar9 + 4;
               }
 while ( uVar11 != 0 || uVar10 != 0 );
            }

            goto LAB_00101b74;
         }

         uVar10 = (uint)(char)*pbVar14;
      }

      uVar11 = **(uint**)( lVar8 + 0x10 );
      if (uVar11 != 0 || uVar10 != 0) {
         lVar7 = 0;
         do {
            if (uVar11 == 0) goto LAB_00101b60;
            if (uVar10 == 0) break;
            if (uVar11 < uVar10) goto LAB_00101b60;
            if (uVar10 < uVar11) break;
            uVar11 = ( *(uint**)( lVar8 + 0x10 ) )[lVar7 + 1];
            uVar10 = (uint)(char)pbVar14[lVar7 + 1];
            lVar7 = lVar7 + 1;
         }
 while ( uVar11 != 0 || uVar10 != 0 );
      }

   }

   goto LAB_00101b74;
   LAB_00101b60:ppEVar13[lVar12] = *ppEVar1;
   adjust_heap(param_1, 0, lVar16, pEVar4, ppEVar13);
   LAB_00101b74:lVar12 = lVar12 + 1;
   if (param_2 <= lVar12) goto code_r0x00101b81;
   goto LAB_00101ae0;
   code_r0x00101b81:if (lVar16 < 2) {
      return;
   }

   LAB_00101b8c:ppEVar1 = ppEVar13 + param_1;
   lVar16 = ( param_3 + -1 ) - param_1;
   do {
      pEVar4 = ppEVar1[lVar16];
      ppEVar1[lVar16] = *ppEVar1;
      adjust_heap(param_1, 0, lVar16, pEVar4, ppEVar13);
      bVar5 = 1 < lVar16;
      lVar16 = lVar16 + -1;
   }
 while ( bVar5 );
   return;
}
/* AnimationLibraryEditor::_notification(int) [clone .part.0] */void AnimationLibraryEditor::_notification(int param_1) {
   Ref *pRVar1;
   Object *pOVar2;
   char cVar3;
   int iVar4;
   undefined4 in_register_0000003c;
   long in_FS_OFFSET;
   Object *local_38;
   long local_30;
   pRVar1 = *(Ref**)( CONCAT44(in_register_0000003c, param_1) + 0xdc8 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (_notification(int)::{lambda()
   #1
   iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()
   #1
   if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()
      #1
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
  }
  Window::get_editor_theme_icon((StringName *)&local_38);
  Button::set_button_icon(pRVar1);
  if (local_38 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_38;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_38);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  pRVar1 = *(Ref **)(CONCAT44(in_register_0000003c,param_1) + 0xdd0);
  if (_notification(int)::{lambda()
      #2
      iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()
      #2
      if (iVar4 != 0) {
         _scs_create((char *)&_notification(int)::{lambda()
         #2
         __cxa_atexit(StringName::~StringName, &_notification(int)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
    }
  }
  Window::get_editor_theme_icon((StringName *)&local_38);
  Button::set_button_icon(pRVar1);
  if (local_38 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_38);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)local_38 + 0x140))(local_38);
        Memory::free_static(local_38,false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }, /* WARNING: Subroutine does not return */, __stack_chk_fail();
}, /* Ref<Animation>::TEMPNAMEPLACEHOLDERVALUE(Ref<Animation> const&) [clone .isra.0] */, void __thiscall Ref<Animation>::operator=(Ref<Animation> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (pOVar1 != (Object *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          return;
        }
      }
    }
  }
  return;
}



/* Ref<AnimationLibrary>::TEMPNAMEPLACEHOLDERVALUE(Ref<AnimationLibrary> const&) [clone .isra.0] */

void __thiscall Ref<AnimationLibrary>::operator=(Ref<AnimationLibrary> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (pOVar1 != (Object *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          return;
        }
      }
    }
  }
  return;
}



/* void Ref<Animation>::TEMPNAMEPLACEHOLDERVALUE(Ref<Resource> const&) [clone .isra.0] */

void __thiscall Ref<Animation>::operator=(Ref<Animation> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar1 = *(Object **)this;
  if (param_1 == (Ref *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&Animation::typeinfo,0);
    if (pOVar3 == pOVar1) {
      return;
    }
    *(Object **)this = pOVar3;
    if ((pOVar3 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      *(undefined8 *)this = 0;
    }
    if (pOVar1 == (Object *)0x0) {
      return;
    }
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
    return;
  }
  return;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::introsort(long, long,
   List<StringName, DefaultAllocator>::Element**, long) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::introsort(long param_1,long param_2,Element **param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long local_118;
  long local_110;
  long local_108;
  long local_f8;
  
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
    return;
  }
  if (param_4 == 0) {
LAB_00102a13:
    partial_sort(param_1,param_2,param_2,param_3);
    return;
  }
  lVar11 = param_2 * 8;
  lVar3 = param_2;
LAB_00102163:
  param_4 = param_4 + -1;
  puVar2 = (undefined8 *)
           median_of_3(param_3 + param_1,param_3 + (lVar1 >> 1) + param_1,
                       (Element **)((long)param_3 + lVar11 + -8));
  param_2 = partitioner(param_1,lVar3,(Element *)*puVar2,param_3);
  lVar1 = lVar3 - param_2;
  if (0x10 < lVar1) {
    if (param_4 != 0) {
      lVar11 = param_4;
      lVar4 = lVar3;
LAB_001021ec:
      do {
        lVar11 = lVar11 + -1;
        puVar2 = (undefined8 *)
                 median_of_3(param_3 + param_2,param_3 + (lVar1 >> 1) + param_2,param_3 + lVar4 + -1
                            );
        lVar3 = partitioner(param_2,lVar4,(Element *)*puVar2,param_3);
        lVar1 = lVar4 - lVar3;
        if (0x10 < lVar1) {
          if (lVar11 != 0) {
            local_118 = lVar4;
            lVar15 = lVar11;
LAB_00102284:
            lVar15 = lVar15 + -1;
            puVar2 = (undefined8 *)
                     median_of_3(param_3 + lVar3,param_3 + (lVar1 >> 1) + lVar3,
                                 param_3 + local_118 + -1);
            lVar4 = partitioner(lVar3,local_118,(Element *)*puVar2,param_3);
            lVar1 = local_118 - lVar4;
            if (0x10 < lVar1) goto code_r0x001022d0;
LAB_00102766:
            lVar1 = lVar4 - lVar3;
            if (0x10 < lVar1) goto LAB_00102776;
            goto LAB_00102913;
          }
LAB_00102988:
          partial_sort(lVar3,lVar4,lVar4,param_3);
        }
LAB_0010289f:
        lVar1 = lVar3 - param_2;
        if (lVar1 < 0x11) goto joined_r0x00102951;
        lVar4 = lVar3;
        if (lVar11 == 0) break;
      } while( true );
    }
    partial_sort(param_2,lVar3,lVar3,param_3);
  }
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
    return;
  }
  if (param_4 != 0) goto LAB_001029ec;
  goto LAB_00102a13;
code_r0x001022d0:
  if (lVar15 != 0) {
    lVar13 = lVar15;
    lVar6 = local_118;
LAB_0010230c:
    do {
      lVar13 = lVar13 + -1;
      puVar2 = (undefined8 *)
               median_of_3(param_3 + lVar4,param_3 + (lVar1 >> 1) + lVar4,param_3 + lVar6 + -1);
      lVar5 = partitioner(lVar4,lVar6,(Element *)*puVar2,param_3);
      lVar1 = lVar6 - lVar5;
      if (0x10 < lVar1) {
        if (lVar13 != 0) {
          lVar7 = lVar6;
          local_f8 = lVar13;
LAB_00102392:
          do {
            local_f8 = local_f8 + -1;
            puVar2 = (undefined8 *)
                     median_of_3(param_3 + lVar5,param_3 + (lVar1 >> 1) + lVar5,param_3 + lVar7 + -1
                                );
            lVar6 = partitioner(lVar5,lVar7,(Element *)*puVar2,param_3);
            lVar1 = lVar7 - lVar6;
            if (0x10 < lVar1) {
              if (local_f8 != 0) {
                lVar8 = lVar7;
                local_110 = local_f8;
LAB_00102413:
                do {
                  local_110 = local_110 + -1;
                  puVar2 = (undefined8 *)
                           median_of_3(param_3 + lVar6,param_3 + (lVar1 >> 1) + lVar6,
                                       param_3 + lVar8 + -1);
                  lVar7 = partitioner(lVar6,lVar8,(Element *)*puVar2,param_3);
                  lVar1 = lVar8 - lVar7;
                  if (0x10 < lVar1) {
                    if (local_110 != 0) {
                      lVar9 = lVar8;
                      local_118 = local_110;
LAB_00102491:
                      do {
                        local_118 = local_118 + -1;
                        puVar2 = (undefined8 *)
                                 median_of_3(param_3 + lVar7,param_3 + (lVar1 >> 1) + lVar7,
                                             param_3 + lVar9 + -1);
                        lVar8 = partitioner(lVar7,lVar9,(Element *)*puVar2,param_3);
                        lVar1 = lVar9 - lVar8;
                        if (0x10 < lVar1) {
                          if (local_118 != 0) {
                            lVar10 = lVar9;
                            local_108 = local_118;
LAB_00102507:
                            do {
                              local_108 = local_108 + -1;
                              puVar2 = (undefined8 *)
                                       median_of_3(param_3 + lVar8,param_3 + (lVar1 >> 1) + lVar8,
                                                   param_3 + lVar10 + -1);
                              lVar9 = partitioner(lVar8,lVar10,(Element *)*puVar2,param_3);
                              lVar1 = lVar10 - lVar9;
                              if (0x10 < lVar1) {
                                if (local_108 != 0) {
                                  lVar12 = local_108;
                                  lVar14 = lVar10;
                                  do {
                                    lVar12 = lVar12 + -1;
                                    puVar2 = (undefined8 *)
                                             median_of_3(param_3 + lVar9,
                                                         param_3 + (lVar1 >> 1) + lVar9,
                                                         param_3 + lVar14 + -1);
                                    lVar10 = partitioner(lVar9,lVar14,(Element *)*puVar2,param_3);
                                    introsort(lVar10,lVar14,param_3,lVar12);
                                    lVar1 = lVar10 - lVar9;
                                    if (lVar1 < 0x11) {
                                      lVar1 = lVar9 - lVar8;
                                      lVar10 = lVar9;
                                      if (lVar1 < 0x11) goto LAB_0010269c;
                                      goto LAB_00102507;
                                    }
                                    lVar14 = lVar10;
                                  } while (lVar12 != 0);
                                }
                                partial_sort(lVar9,lVar10,lVar10,param_3);
                              }
                              lVar1 = lVar9 - lVar8;
                              if (lVar1 < 0x11) {
                                lVar1 = lVar8 - lVar7;
                                lVar9 = lVar8;
                                if (lVar1 < 0x11) goto joined_r0x001027b0;
                                goto LAB_00102491;
                              }
                              lVar10 = lVar9;
                            } while (local_108 != 0);
                          }
                          partial_sort(lVar8,lVar9,lVar9,param_3);
                        }
LAB_0010269c:
                        lVar1 = lVar8 - lVar7;
                        if (lVar1 < 0x11) {
                          lVar1 = lVar7 - lVar6;
                          lVar8 = lVar7;
                          if (lVar1 < 0x11) goto joined_r0x0010272b;
                          goto LAB_00102413;
                        }
                        lVar9 = lVar8;
                      } while (local_118 != 0);
                    }
                    partial_sort(lVar7,lVar8,lVar8,param_3);
                  }
joined_r0x001027b0:
                  lVar1 = lVar7 - lVar6;
                  if (lVar1 < 0x11) {
                    lVar1 = lVar6 - lVar5;
                    lVar7 = lVar6;
                    if (lVar1 < 0x11) goto joined_r0x001027f0;
                    goto LAB_00102392;
                  }
                  lVar8 = lVar7;
                } while (local_110 != 0);
              }
              partial_sort(lVar6,lVar7,lVar7,param_3);
            }
joined_r0x0010272b:
            lVar1 = lVar6 - lVar5;
            if (lVar1 < 0x11) {
              lVar1 = lVar5 - lVar4;
              lVar6 = lVar5;
              if (lVar1 < 0x11) goto LAB_00102766;
              goto LAB_0010230c;
            }
            lVar7 = lVar6;
          } while (local_f8 != 0);
        }
        partial_sort(lVar5,lVar6,lVar6,param_3);
      }
joined_r0x001027f0:
      lVar1 = lVar5 - lVar4;
      if (lVar1 < 0x11) {
        lVar1 = lVar4 - lVar3;
        local_118 = lVar4;
        if (lVar1 < 0x11) goto LAB_0010289f;
        goto LAB_00102284;
      }
      lVar6 = lVar5;
      local_118 = lVar5;
    } while (lVar13 != 0);
  }
  partial_sort(lVar4,local_118,local_118,param_3);
  lVar1 = lVar4 - lVar3;
  if (lVar1 < 0x11) {
LAB_00102913:
    lVar1 = lVar3 - param_2;
    lVar4 = lVar3;
    if (0x10 < lVar1) goto LAB_001021ec;
    goto joined_r0x00102951;
  }
LAB_00102776:
  local_118 = lVar4;
  if (lVar15 == 0) goto LAB_00102988;
  goto LAB_00102284;
joined_r0x00102951:
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
    return;
  }
LAB_001029ec:
  lVar11 = param_2 * 8;
  lVar3 = param_2;
  goto LAB_00102163;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::sort(List<StringName,
   DefaultAllocator>::Element**, long) const [clone .part.0] [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::sort(Element **param_1,long param_2), {
                  long lVar1;
                  undefined8 *puVar2;
                  long lVar3;
                  long lVar4;
                  long lVar5;
                  lVar1 = 0;
                  lVar4 = param_2;
                  do {
                     lVar4 = lVar4 >> 1;
                     lVar1 = lVar1 + 1;
                  }
 while ( lVar4 != 1 );
                  lVar1 = lVar1 * 2;
                  lVar4 = 1;
                  lVar5 = param_2;
                  if (param_2 < 0x11) {
                     do {
                        lVar1 = lVar4 + 1;
                        linear_insert(0, lVar4, param_1);
                        lVar4 = lVar1;
                     }
 while ( param_2 != lVar1 );
                  }
 else {
                     do {
                        lVar1 = lVar1 + -1;
                        puVar2 = (undefined8*)median_of_3(param_1, param_1 + ( lVar5 >> 1 ), param_1 + lVar5 + -1);
                        lVar3 = partitioner(0, lVar5, (Element*)*puVar2, param_1);
                        introsort(lVar3, lVar5, param_1, lVar1);
                        lVar4 = 1;
                        if (lVar3 < 0x11) goto LAB_00102ae0;
                        lVar5 = lVar3;
                     }
 while ( lVar1 != 0 );
                     partial_sort(0, lVar3, lVar3, param_1);
                     LAB_00102ae0:do {
                        lVar1 = lVar4 + 1;
                        linear_insert(0, lVar4, param_1);
                        lVar4 = lVar1;
                     }
 while ( lVar1 != 0x10 );
                     lVar1 = 0x10;
                     do {
                        lVar4 = lVar1 + 1;
                        unguarded_linear_insert(lVar1, param_1[lVar1], param_1);
                        lVar1 = lVar4;
                     }
 while ( param_2 != lVar4 );
                  }

                  return;
               }
, /* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */, void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this, CowData * param_1) * plVar1);
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

      /* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */
      void List<PropertyInfo,DefaultAllocator>::push_back(List<PropertyInfo,DefaultAllocator> *this, PropertyInfo *param_1) {
         long *plVar1;
         long lVar2;
         undefined4 *puVar3;
         undefined1(*pauVar4)[16];
         if (*(long*)this == 0) {
            pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])this = pauVar4;
            *(undefined4*)pauVar4[1] = 0;
            *pauVar4 = (undefined1[16])0x0;
         }

         puVar3 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
         *(undefined8*)( puVar3 + 8 ) = 0;
         *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
         lVar2 = *(long*)( param_1 + 8 );
         *puVar3 = 0;
         puVar3[6] = 0;
         puVar3[10] = 6;
         *(undefined8*)( puVar3 + 0x10 ) = 0;
         *(undefined1(*) [16])( puVar3 + 0xc ) = (undefined1[16])0x0;
         *puVar3 = *(undefined4*)param_1;
         if (lVar2 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 2 ), (CowData*)( param_1 + 8 ));
         }

         StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)( param_1 + 0x10 ));
         puVar3[6] = *(undefined4*)( param_1 + 0x18 );
         if (*(long*)( puVar3 + 8 ) != *(long*)( param_1 + 0x20 )) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)( param_1 + 0x20 ));
         }

         puVar3[10] = *(undefined4*)( param_1 + 0x28 );
         plVar1 = *(long**)this;
         lVar2 = plVar1[1];
         *(undefined8*)( puVar3 + 0xc ) = 0;
         *(long**)( puVar3 + 0x10 ) = plVar1;
         *(long*)( puVar3 + 0xe ) = lVar2;
         if (lVar2 != 0) {
            *(undefined4**)( lVar2 + 0x30 ) = puVar3;
         }

         plVar1[1] = (long)puVar3;
         if (*plVar1 != 0) {
            *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
            return;
         }

         *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
         *plVar1 = (long)puVar3;
         return;
      }

      /* AnimationLibraryEditor::set_animation_mixer(Object*) */
      void AnimationLibraryEditor::set_animation_mixer(AnimationLibraryEditor *this, Object *param_1) {
         if (param_1 != (Object*)0x0) {
            param_1 = (Object*)__dynamic_cast(param_1, &Object::typeinfo, &AnimationMixer::typeinfo, 0);
         }

         *(Object**)( this + 0xe20 ) = param_1;
         return;
      }

      /* AnimationLibraryEditor::_notification(int) */
      void AnimationLibraryEditor::_notification(AnimationLibraryEditor *this, int param_1) {
         if (param_1 != 0x20) {
            return;
         }

         _notification((int)this);
         return;
      }

      /* AnimationLibraryEditor::AnimationLibraryEditor() */
      void AnimationLibraryEditor::AnimationLibraryEditor(AnimationLibraryEditor *this) {
         long *plVar1;
         code *pcVar2;
         undefined8 uVar3;
         String *pSVar4;
         EditorFileDialog *this_00;
         CallableCustom *pCVar5;
         ConfirmationDialog *this_01;
         BoxContainer *pBVar6;
         LineEdit *this_02;
         Label *this_03;
         BoxContainer *this_04;
         Button *pBVar7;
         Tree *this_05;
         PopupMenu *this_06;
         AcceptDialog *this_07;
         long in_FS_OFFSET;
         undefined8 local_68;
         long local_60;
         char *local_58;
         undefined8 local_50;
         long local_40;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         AcceptDialog::AcceptDialog((AcceptDialog*)this);
         *(undefined***)this = &PTR__initialize_classv_0011d9b8;
         *(undefined4*)( this + 0xdb0 ) = 2;
         *(undefined8*)( this + 0xdd8 ) = 0;
         this[0xde0] = (AnimationLibraryEditor)0x0;
         this[0xe28] = (AnimationLibraryEditor)0x0;
         *(undefined1(*) [16])( this + 0xdb8 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this + 0xdc8 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this + 0xde8 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this + 0xdf8 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this + 0xe08 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this + 0xe18 ) = (undefined1[16])0x0;
         local_60 = 0;
         local_58 = "";
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_60);
         local_58 = "Edit Animation Libraries";
         local_68 = 0;
         local_50 = 0x18;
         String::parse_latin1((StrRange*)&local_68);
         TTR((String*)&local_58, (String*)&local_68);
         Window::set_title((String*)this);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         Node::set_process_shortcut_input(SUB81(this, 0));
         this_00 = (EditorFileDialog*)operator_new(0x1108, "");
         EditorFileDialog::EditorFileDialog(this_00);
         postinitialize_handler((Object*)this_00);
         *(EditorFileDialog**)( this + 0xdf0 ) = this_00;
         Node::add_child(this, this_00, 0, 0);
         plVar1 = *(long**)( this + 0xdf0 );
         pcVar2 = *(code**)( *plVar1 + 0x108 );
         create_custom_callable_function_pointer<AnimationLibraryEditor,String_const&>((AnimationLibraryEditor*)&local_58, (char*)this, (_func_void_String_ptr*)"&AnimationLibraryEditor::_load_file");
         StringName::StringName((StringName*)&local_60, "file_selected", false);
         ( *pcVar2 )(plVar1, (StrRange*)&local_60, (String*)&local_58, 0);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         Callable::~Callable((Callable*)&local_58);
         plVar1 = *(long**)( this + 0xdf0 );
         pcVar2 = *(code**)( *plVar1 + 0x108 );
         pCVar5 = (CallableCustom*)operator_new(0x48, "");
         CallableCustom::CallableCustom(pCVar5);
         *(undefined**)( pCVar5 + 0x20 ) = &_LC0;
         *(AnimationLibraryEditor**)( pCVar5 + 0x28 ) = this;
         *(undefined1(*) [16])( pCVar5 + 0x30 ) = (undefined1[16])0x0;
         *(undefined***)pCVar5 = &PTR_hash_0011dcc0;
         *(undefined8*)( pCVar5 + 0x40 ) = 0;
         uVar3 = *(undefined8*)( this + 0x60 );
         *(undefined8*)( pCVar5 + 0x10 ) = 0;
         *(undefined8*)( pCVar5 + 0x30 ) = uVar3;
         *(code**)( pCVar5 + 0x38 ) = _load_files;
         CallableCustomMethodPointerBase::_setup((uint*)pCVar5, (int)pCVar5 + 0x28);
         *(char**)( pCVar5 + 0x20 ) = "AnimationLibraryEditor::_load_files";
         Callable::Callable((Callable*)&local_58, pCVar5);
         StringName::StringName((StringName*)&local_60, "files_selected", false);
         ( *pcVar2 )(plVar1, (StrRange*)&local_60, (String*)&local_58, 0);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         Callable::~Callable((Callable*)&local_58);
         this_01 = (ConfirmationDialog*)operator_new(0xdb8, "");
         ConfirmationDialog::ConfirmationDialog(this_01);
         postinitialize_handler((Object*)this_01);
         *(ConfirmationDialog**)( this + 0xdf8 ) = this_01;
         pBVar6 = (BoxContainer*)operator_new(0xa10, "");
         BoxContainer::BoxContainer(pBVar6, true);
         pBVar6[0xa0c] = (BoxContainer)0x1;
         *(undefined***)pBVar6 = &PTR__initialize_classv_0011d640;
         postinitialize_handler((Object*)pBVar6);
         this_02 = (LineEdit*)operator_new(0xbb0, "");
         local_58 = (char*)0x0;
         LineEdit::LineEdit(this_02, (String*)&local_58);
         postinitialize_handler((Object*)this_02);
         *(LineEdit**)( this + 0xe00 ) = this_02;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         Node::add_child(pBVar6, *(undefined8*)( this + 0xe00 ), 0, 0);
         plVar1 = *(long**)( this + 0xe00 );
         pcVar2 = *(code**)( *plVar1 + 0x108 );
         create_custom_callable_function_pointer<AnimationLibraryEditor,String_const&>((AnimationLibraryEditor*)&local_58, (char*)this, (_func_void_String_ptr*)"&AnimationLibraryEditor::_add_library_validate");
         ( *pcVar2 )(plVar1, SceneStringNames::singleton + 0x270, (String*)&local_58, 0);
         Callable::~Callable((Callable*)&local_58);
         Node::add_child(this, *(undefined8*)( this + 0xdf8 ), 0, 0);
         this_03 = (Label*)operator_new(0xad8, "");
         local_58 = (char*)0x0;
         Label::Label(this_03, (String*)&local_58);
         postinitialize_handler((Object*)this_03);
         *(Label**)( this + 0xe08 ) = this_03;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         Node::add_child(pBVar6, *(undefined8*)( this + 0xe08 ), 0, 0);
         Node::add_child(*(undefined8*)( this + 0xdf8 ), pBVar6, 0, 0);
         plVar1 = *(long**)( this + 0xdf8 );
         pcVar2 = *(code**)( *plVar1 + 0x108 );
         create_custom_callable_function_pointer<AnimationLibraryEditor>((AnimationLibraryEditor*)&local_58, (char*)this, (_func_void*)"&AnimationLibraryEditor::_add_library_confirm");
         ( *pcVar2 )(plVar1, SceneStringNames::singleton + 0x268, (String*)&local_58, 0);
         Callable::~Callable((Callable*)&local_58);
         AcceptDialog::register_text_enter(*(LineEdit**)( this + 0xdf8 ));
         pBVar6 = (BoxContainer*)operator_new(0xa10, "");
         BoxContainer::BoxContainer(pBVar6, true);
         pBVar6[0xa0c] = (BoxContainer)0x1;
         *(undefined***)pBVar6 = &PTR__initialize_classv_0011d640;
         postinitialize_handler((Object*)pBVar6);
         this_04 = (BoxContainer*)operator_new(0xa10, "");
         BoxContainer::BoxContainer(this_04, false);
         this_04[0xa0c] = (BoxContainer)0x1;
         *(undefined***)this_04 = &PTR__initialize_classv_0011d2c8;
         postinitialize_handler((Object*)this_04);
         BoxContainer::add_spacer(SUB81(this_04, 0));
         pBVar7 = (Button*)operator_new(0xc10, "");
         local_58 = "";
         local_60 = 0;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_60);
         local_58 = "New Library";
         local_68 = 0;
         local_50 = 0xb;
         String::parse_latin1((StrRange*)&local_68);
         TTR((String*)&local_58, (String*)&local_68);
         Button::Button(pBVar7, (String*)&local_58);
         postinitialize_handler((Object*)pBVar7);
         *(Button**)( this + 0xdc8 ) = pBVar7;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         local_58 = "";
         local_60 = 0;
         pSVar4 = *(String**)( this + 0xdc8 );
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_60);
         local_58 = "Create new empty animation library.";
         local_68 = 0;
         local_50 = 0x23;
         String::parse_latin1((StrRange*)&local_68);
         TTR((String*)&local_58, (String*)&local_68);
         Control::set_tooltip_text(pSVar4);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         plVar1 = *(long**)( this + 0xdc8 );
         pcVar2 = *(code**)( *plVar1 + 0x108 );
         create_custom_callable_function_pointer<AnimationLibraryEditor>((AnimationLibraryEditor*)&local_58, (char*)this, (_func_void*)"&AnimationLibraryEditor::_add_library");
         ( *pcVar2 )(plVar1, SceneStringNames::singleton + 0x238, (String*)&local_58, 0);
         Callable::~Callable((Callable*)&local_58);
         Node::add_child(this_04, *(undefined8*)( this + 0xdc8 ), 0, 0);
         pBVar7 = (Button*)operator_new(0xc10, "");
         local_58 = "";
         local_60 = 0;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_60);
         local_58 = "Load Library";
         local_68 = 0;
         local_50 = 0xc;
         String::parse_latin1((StrRange*)&local_68);
         TTR((String*)&local_58, (String*)&local_68);
         Button::Button(pBVar7, (String*)&local_58);
         postinitialize_handler((Object*)pBVar7);
         *(Button**)( this + 0xdd0 ) = pBVar7;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         local_58 = "";
         local_60 = 0;
         pSVar4 = *(String**)( this + 0xdd0 );
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_60);
         local_58 = "Load animation library from disk.";
         local_68 = 0;
         local_50 = 0x21;
         String::parse_latin1((StrRange*)&local_68);
         TTR((String*)&local_58, (String*)&local_68);
         Control::set_tooltip_text(pSVar4);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         plVar1 = *(long**)( this + 0xdd0 );
         pcVar2 = *(code**)( *plVar1 + 0x108 );
         create_custom_callable_function_pointer<AnimationLibraryEditor>((AnimationLibraryEditor*)&local_58, (char*)this, (_func_void*)"&AnimationLibraryEditor::_load_library");
         ( *pcVar2 )(plVar1, SceneStringNames::singleton + 0x238, (String*)&local_58);
         Callable::~Callable((Callable*)&local_58);
         Node::add_child(this_04, *(undefined8*)( this + 0xdd0 ), 0, 0);
         Node::add_child(pBVar6, this_04, 0, 0);
         this_05 = (Tree*)operator_new(0xdc8, "");
         Tree::Tree(this_05);
         postinitialize_handler((Object*)this_05);
         *(Tree**)( this + 0xe18 ) = this_05;
         Node::add_child(pBVar6, this_05, 0, 0);
         Node::set_auto_translate_mode(*(undefined8*)( this + 0xe18 ), 2);
         Tree::set_columns((int)*(undefined8*)( this + 0xe18 ));
         Tree::set_column_titles_visible(SUB81(*(undefined8*)( this + 0xe18 ), 0));
         local_58 = "";
         local_60 = 0;
         uVar3 = *(undefined8*)( this + 0xe18 );
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_60);
         local_58 = "Resource";
         local_68 = 0;
         local_50 = 8;
         String::parse_latin1((StrRange*)&local_68);
         TTR((String*)&local_58, (String*)&local_68);
         Tree::set_column_title((int)uVar3, (String*)0x0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         local_58 = "";
         local_60 = 0;
         uVar3 = *(undefined8*)( this + 0xe18 );
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_60);
         local_58 = "Storage";
         local_68 = 0;
         local_50 = 7;
         String::parse_latin1((StrRange*)&local_68);
         TTR((String*)&local_58, (String*)&local_68);
         Tree::set_column_title((int)uVar3, (String*)0x1);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         Tree::set_column_expand((int)*(undefined8*)( this + 0xe18 ), false);
         uVar3 = *(undefined8*)( this + 0xe18 );
         EditorScale::get_scale();
         Tree::set_column_custom_minimum_width((int)uVar3, 1);
         Tree::set_column_expand((int)*(undefined8*)( this + 0xe18 ), true);
         Tree::set_hide_root(SUB81(*(undefined8*)( this + 0xe18 ), 0));
         Tree::set_hide_folding(SUB81(*(undefined8*)( this + 0xe18 ), 0));
         Control::set_v_size_flags(*(undefined8*)( this + 0xe18 ), 3);
         plVar1 = *(long**)( this + 0xe18 );
         pcVar2 = *(code**)( *plVar1 + 0x108 );
         create_custom_callable_function_pointer<AnimationLibraryEditor>((AnimationLibraryEditor*)&local_58, (char*)this, (_func_void*)"&AnimationLibraryEditor::_item_renamed");
         StringName::StringName((StringName*)&local_60, "item_edited", false);
         ( *pcVar2 )(plVar1, (StrRange*)&local_60, (String*)&local_58, 0);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         Callable::~Callable((Callable*)&local_58);
         plVar1 = *(long**)( this + 0xe18 );
         pcVar2 = *(code**)( *plVar1 + 0x108 );
         pCVar5 = (CallableCustom*)operator_new(0x48, "");
         CallableCustom::CallableCustom(pCVar5);
         *(undefined**)( pCVar5 + 0x20 ) = &_LC0;
         *(AnimationLibraryEditor**)( pCVar5 + 0x28 ) = this;
         *(undefined1(*) [16])( pCVar5 + 0x30 ) = (undefined1[16])0x0;
         *(undefined***)pCVar5 = &PTR_hash_0011dde0;
         *(undefined8*)( pCVar5 + 0x40 ) = 0;
         uVar3 = *(undefined8*)( this + 0x60 );
         *(undefined8*)( pCVar5 + 0x10 ) = 0;
         *(undefined8*)( pCVar5 + 0x30 ) = uVar3;
         *(code**)( pCVar5 + 0x38 ) = _button_pressed;
         CallableCustomMethodPointerBase::_setup((uint*)pCVar5, (int)pCVar5 + 0x28);
         *(char**)( pCVar5 + 0x20 ) = "AnimationLibraryEditor::_button_pressed";
         Callable::Callable((Callable*)&local_58, pCVar5);
         StringName::StringName((StringName*)&local_60, "button_clicked", false);
         ( *pcVar2 )(plVar1, (StrRange*)&local_60, (String*)&local_58, 0);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         Callable::~Callable((Callable*)&local_58);
         plVar1 = *(long**)( this + 0xe18 );
         pcVar2 = *(code**)( *plVar1 + 0x108 );
         pCVar5 = (CallableCustom*)operator_new(0x48, "");
         CallableCustom::CallableCustom(pCVar5);
         *(undefined**)( pCVar5 + 0x20 ) = &_LC0;
         *(AnimationLibraryEditor**)( pCVar5 + 0x28 ) = this;
         *(undefined1(*) [16])( pCVar5 + 0x30 ) = (undefined1[16])0x0;
         *(undefined***)pCVar5 = &PTR_hash_0011de70;
         *(undefined8*)( pCVar5 + 0x40 ) = 0;
         uVar3 = *(undefined8*)( this + 0x60 );
         *(undefined8*)( pCVar5 + 0x10 ) = 0;
         *(undefined8*)( pCVar5 + 0x30 ) = uVar3;
         *(code**)( pCVar5 + 0x38 ) = _save_mixer_lib_folding;
         CallableCustomMethodPointerBase::_setup((uint*)pCVar5, (int)pCVar5 + 0x28);
         *(char**)( pCVar5 + 0x20 ) = "AnimationLibraryEditor::_save_mixer_lib_folding";
         Callable::Callable((Callable*)&local_58, pCVar5);
         StringName::StringName((StringName*)&local_60, "item_collapsed", false);
         ( *pcVar2 )(plVar1, (StrRange*)&local_60, (String*)&local_58, 0);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         Callable::~Callable((Callable*)&local_58);
         this_06 = (PopupMenu*)operator_new(0xfe0, "");
         PopupMenu::PopupMenu(this_06);
         postinitialize_handler((Object*)this_06);
         *(PopupMenu**)( this + 0xe10 ) = this_06;
         Node::add_child(this, this_06, 0, 0);
         plVar1 = *(long**)( this + 0xe10 );
         pcVar2 = *(code**)( *plVar1 + 0x108 );
         pCVar5 = (CallableCustom*)operator_new(0x48, "");
         CallableCustom::CallableCustom(pCVar5);
         *(undefined**)( pCVar5 + 0x20 ) = &_LC0;
         *(AnimationLibraryEditor**)( pCVar5 + 0x28 ) = this;
         *(undefined1(*) [16])( pCVar5 + 0x30 ) = (undefined1[16])0x0;
         *(undefined***)pCVar5 = &PTR_hash_0011df00;
         *(undefined8*)( pCVar5 + 0x40 ) = 0;
         uVar3 = *(undefined8*)( this + 0x60 );
         *(undefined8*)( pCVar5 + 0x10 ) = 0;
         *(undefined8*)( pCVar5 + 0x30 ) = uVar3;
         *(code**)( pCVar5 + 0x38 ) = _file_popup_selected;
         CallableCustomMethodPointerBase::_setup((uint*)pCVar5, (int)pCVar5 + 0x28);
         *(char**)( pCVar5 + 0x20 ) = "AnimationLibraryEditor::_file_popup_selected";
         Callable::Callable((Callable*)&local_58, pCVar5);
         ( *pcVar2 )(plVar1, SceneStringNames::singleton + 0x240, (String*)&local_58, 0);
         Callable::~Callable((Callable*)&local_58);
         Node::add_child(this, pBVar6, 0, 0);
         this_07 = (AcceptDialog*)operator_new(0xdb0, "");
         AcceptDialog::AcceptDialog(this_07);
         postinitialize_handler((Object*)this_07);
         local_58 = "";
         *(AcceptDialog**)( this + 0xdd8 ) = this_07;
         local_60 = 0;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_60);
         local_58 = "Error:";
         local_68 = 0;
         local_50 = 6;
         String::parse_latin1((StrRange*)&local_68);
         TTR((String*)&local_58, (String*)&local_68);
         Window::set_title((String*)this_07);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Node::add_child(this, *(undefined8*)( this + 0xdd8 ), 0, 0);
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* AnimationLibraryEditor::shortcut_input(Ref<InputEvent> const&) */
      void AnimationLibraryEditor::shortcut_input(AnimationLibraryEditor *this, Ref *param_1) {
         char cVar1;
         Object *pOVar2;
         String *pSVar3;
         long in_FS_OFFSET;
         undefined8 local_60;
         char *local_58;
         undefined8 local_50;
         long local_40;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         if (( ( *(long*)param_1 != 0 ) && ( pOVar2 = (Object*)__dynamic_cast(*(long*)param_1, &Object::typeinfo, &InputEventKey::typeinfo, 0) ),pOVar2 != (Object*)0x0 )) {
            cVar1 = InputEvent::is_pressed();
            if (cVar1 == '\0') {
               LAB_00103c5c:cVar1 = RefCounted::unreference();
            }
 else {
               pSVar3 = (String*)EditorSettings::get_singleton();
               local_60 = 0;
               local_58 = "ui_undo";
               local_50 = 7;
               String::parse_latin1((StrRange*)&local_60);
               cVar1 = EditorSettings::is_shortcut(pSVar3, (Ref*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               if (cVar1 == '\0') {
                  pSVar3 = (String*)EditorSettings::get_singleton();
                  local_60 = 0;
                  local_50 = 7;
                  local_58 = "ui_redo";
                  String::parse_latin1((StrRange*)&local_60);
                  cVar1 = EditorSettings::is_shortcut(pSVar3, (Ref*)&local_60);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  if (cVar1 == '\0') goto LAB_00103c5c;
                  LAB_00103d5b:EditorNode::redo();
               }
 else {
                  EditorNode::undo();
                  pSVar3 = (String*)EditorSettings::get_singleton();
                  local_60 = 0;
                  local_50 = 7;
                  local_58 = "ui_redo";
                  String::parse_latin1((StrRange*)&local_60);
                  cVar1 = EditorSettings::is_shortcut(pSVar3, (Ref*)&local_60);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  if (cVar1 != '\0') goto LAB_00103d5b;
               }

               Viewport::set_input_as_handled();
               cVar1 = RefCounted::unreference();
            }

            if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  Memory::free_static(pOVar2, false);
                  return;
               }

               goto LAB_00103de7;
            }

         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         LAB_00103de7:/* WARNING: Subroutine does not return */__stack_chk_fail();
      }

      /* AnimationLibraryEditor::_load_library() */
      void AnimationLibraryEditor::_load_library(AnimationLibraryEditor *this) {
         long *plVar1;
         String *pSVar2;
         long lVar3;
         long lVar4;
         char *pcVar5;
         long in_FS_OFFSET;
         long *local_70;
         undefined8 local_68;
         long local_60;
         char *local_58;
         undefined8 local_50;
         long local_40;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         local_70 = (long*)0x0;
         local_60 = 0;
         local_58 = "AnimationLibrary";
         local_50 = 0x10;
         String::parse_latin1((StrRange*)&local_60);
         ResourceLoader::get_recognized_extensions_for_type((String*)&local_60, (List*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         local_58 = "";
         local_60 = 0;
         pSVar2 = *(String**)( this + 0xdf0 );
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_60);
         local_58 = "Load Animation";
         local_68 = 0;
         local_50 = 0xe;
         String::parse_latin1((StrRange*)&local_68);
         TTR((String*)&local_58, (String*)&local_68);
         Window::set_title(pSVar2);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         EditorFileDialog::clear_filters();
         if (local_70 != (long*)0x0) {
            for (lVar3 = *local_70; lVar3 != 0; lVar3 = *(long*)( lVar3 + 8 )) {
               pSVar2 = *(String**)( this + 0xdf0 );
               local_60 = 0;
               local_58 = "";
               local_50 = 0;
               String::parse_latin1((StrRange*)&local_60);
               operator+((char *)&
               local_58,(String*)&_LC75;
               EditorFileDialog::add_filter(pSVar2, (String*)&local_58);
               pcVar5 = local_58;
               if (local_58 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_58 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_58 = (char*)0x0;
                     Memory::free_static(pcVar5 + -0x10, false);
                  }

               }

               lVar4 = local_60;
               if (local_60 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_60 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_60 = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

            }

         }

         EditorFileDialog::set_file_mode(*(undefined8*)( this + 0xdf0 ), 1);
         local_58 = "";
         local_60 = 0;
         pSVar2 = *(String**)( this + 0xdf0 );
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_60);
         EditorFileDialog::set_current_file(pSVar2);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         Window::popup_centered_ratio(_LC74);
         *(undefined4*)( this + 0xdb0 ) = 0;
         List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_70);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* AnimationLibraryEditor::_get_mixer_signature() const */
      undefined8 AnimationLibraryEditor::_get_mixer_signature(void) {
         long *plVar1;
         long *plVar2;
         int iVar3;
         long lVar4;
         Element *pEVar5;
         char *pcVar6;
         List *pLVar7;
         char cVar8;
         Element **ppEVar9;
         Element **ppEVar10;
         Element **ppEVar11;
         long in_RSI;
         undefined8 in_RDI;
         Element *pEVar12;
         long *plVar13;
         long in_FS_OFFSET;
         undefined8 local_80;
         long *local_78;
         List *local_70;
         long *local_68;
         long local_60;
         char *local_58;
         size_t local_50;
         long local_40;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         local_80 = 0;
         local_78 = (long*)0x0;
         AnimationMixer::get_animation_library_list(*(List**)( in_RSI + 0xe20 ));
         List<StringName,DefaultAllocator>::sort_custom<StringName::AlphCompare>((List<StringName,DefaultAllocator>*)&local_78);
         if (( local_78 != (long*)0x0 ) && ( plVar13 = (long*)*local_78 ),plVar13 != (long*)0x0) {
            do {
               while (true) {
                  lVar4 = *plVar13;
                  if (lVar4 == 0) {
                     local_60 = 0;
                  }
 else {
                     pcVar6 = *(char**)( lVar4 + 8 );
                     local_60 = 0;
                     if (pcVar6 == (char*)0x0) {
                        if (*(long*)( lVar4 + 0x10 ) != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
                        }

                     }
 else {
                        local_50 = strlen(pcVar6);
                        local_58 = pcVar6;
                        String::parse_latin1((StrRange*)&local_60);
                     }

                  }

                  operator+((char *)&
                  local_58,(String*)&_LC76;
                  String::operator +=((String*)&local_80, (String*)&local_58);
                  pcVar6 = local_58;
                  if (local_58 != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_58 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_58 = (char*)0x0;
                        Memory::free_static(pcVar6 + -0x10, false);
                     }

                  }

                  lVar4 = local_60;
                  if (local_60 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_60 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_60 = 0;
                        Memory::free_static((void*)( lVar4 + -0x10 ), false);
                     }

                  }

                  AnimationMixer::get_animation_library((StringName*)&local_70);
                  if (local_70 != (List*)0x0) break;
                  LAB_001041e4:plVar13 = (long*)plVar13[1];
                  if (plVar13 == (long*)0x0) goto LAB_001044b2;
               }
;
               local_68 = (long*)0x0;
               AnimationLibrary::get_animation_list(local_70);
               if (local_68 != (long*)0x0) {
                  iVar3 = (int)local_68[2];
                  if (1 < iVar3) {
                     pEVar12 = (Element*)(long)iVar3;
                     ppEVar9 = (Element**)Memory::alloc_static((long)pEVar12 * 8, true);
                     if (ppEVar9 == (Element**)0x0) {
                        _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
                     }
 else {
                        ppEVar9[-1] = pEVar12;
                     }

                     if (local_68 != (long*)0x0) {
                        ppEVar10 = ppEVar9;
                        for (pEVar5 = (Element*)*local_68; pEVar5 != (Element*)0x0; pEVar5 = *(Element**)( pEVar5 + 8 )) {
                           *ppEVar10 = pEVar5;
                           ppEVar10 = ppEVar10 + 1;
                        }

                     }

                     SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::sort(ppEVar9, (long)pEVar12);
                     pEVar5 = *ppEVar9;
                     *local_68 = (long)pEVar5;
                     *(undefined8*)( pEVar5 + 0x10 ) = 0;
                     *(Element**)( *ppEVar9 + 8 ) = ppEVar9[1];
                     pEVar5 = ppEVar9[(long)( pEVar12 + -1 )];
                     local_68[1] = (long)pEVar5;
                     *(Element**)( pEVar5 + 0x10 ) = ppEVar9[(long)( pEVar12 + -2 )];
                     *(undefined8*)( ppEVar9[(long)( pEVar12 + -1 )] + 8 ) = 0;
                     if (iVar3 != 2) {
                        ppEVar10 = ppEVar9;
                        do {
                           ppEVar11 = ppEVar10 + 1;
                           *(Element**)( ppEVar10[1] + 0x10 ) = *ppEVar10;
                           *(Element**)( *ppEVar11 + 8 ) = ppEVar10[2];
                           ppEVar10 = ppEVar11;
                        }
 while ( ppEVar11 != ppEVar9 + ( iVar3 - 2 ) );
                     }

                     Memory::free_static(ppEVar9, true);
                     if (local_68 == (long*)0x0) goto LAB_00104445;
                  }

                  for (plVar1 = (long*)*local_68; plVar1 != (long*)0x0; plVar1 = (long*)plVar1[1]) {
                     lVar4 = *plVar1;
                     if (lVar4 == 0) {
                        local_60 = 0;
                     }
 else {
                        pcVar6 = *(char**)( lVar4 + 8 );
                        local_60 = 0;
                        if (pcVar6 == (char*)0x0) {
                           if (*(long*)( lVar4 + 0x10 ) != 0) {
                              CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
                           }

                        }
 else {
                           local_50 = strlen(pcVar6);
                           local_58 = pcVar6;
                           String::parse_latin1((StrRange*)&local_60);
                        }

                     }

                     operator+((char *)&
                     local_58,(String*)&_LC77;
                     String::operator +=((String*)&local_80, (String*)&local_58);
                     pcVar6 = local_58;
                     if (local_58 != (char*)0x0) {
                        LOCK();
                        plVar2 = (long*)( local_58 + -0x10 );
                        *plVar2 = *plVar2 + -1;
                        UNLOCK();
                        if (*plVar2 == 0) {
                           local_58 = (char*)0x0;
                           Memory::free_static(pcVar6 + -0x10, false);
                        }

                     }

                     lVar4 = local_60;
                     if (local_60 != 0) {
                        LOCK();
                        plVar2 = (long*)( local_60 + -0x10 );
                        *plVar2 = *plVar2 + -1;
                        UNLOCK();
                        if (*plVar2 == 0) {
                           local_60 = 0;
                           Memory::free_static((void*)( lVar4 + -0x10 ), false);
                        }

                     }

                  }

               }

               LAB_00104445:List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_68);
               if (( ( local_70 == (List*)0x0 ) || ( cVar8 = RefCounted::unreference() ),pLVar7 = local_70,cVar8 == '\0' )) goto LAB_001041e4;
               ( **(code**)( *(long*)pLVar7 + 0x140 ) )(pLVar7);
               Memory::free_static(pLVar7, false);
               plVar13 = (long*)plVar13[1];
            }
 while ( plVar13 != (long*)0x0 );
         }

         LAB_001044b2:String::md5_text();
         List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return in_RDI;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* AnimationLibraryEditor::_add_library_validate(String const&) */
      void AnimationLibraryEditor::_add_library_validate(String *param_1) {
         String *pSVar1;
         StringName *pSVar2;
         char cVar3;
         int iVar4;
         String *in_RSI;
         char *pcVar5;
         long in_FS_OFFSET;
         char *local_88;
         StringName *local_80;
         undefined8 local_78;
         undefined8 local_70;
         char *local_68;
         undefined8 local_60;
         undefined8 local_58;
         long local_40;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         local_88 = (char*)0x0;
         if (param_1[0xde0] == (String)0x0) {
            cVar3 = String::operator ==(in_RSI, "");
            if (cVar3 == '\0') {
               LAB_00104838:cVar3 = AnimationLibrary::is_valid_library_name(in_RSI);
               if (cVar3 == '\0') {
                  local_70 = 0;
                  String::parse_latin1((String*)&local_70, "");
                  local_78 = 0;
                  String::parse_latin1((String*)&local_78, "Library name contains invalid characters: \'/\', \':\', \',\' or \'[\'.");
                  goto LAB_0010487f;
               }

               pSVar2 = *(StringName**)( param_1 + 0xe20 );
               StringName::StringName((StringName*)&local_68, in_RSI, false);
               cVar3 = AnimationMixer::has_animation_library(pSVar2);
               if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
                  StringName::unref();
               }

               if (cVar3 == '\0') goto LAB_001046cc;
               local_70 = 0;
               String::parse_latin1((String*)&local_70, "");
               local_78 = 0;
               String::parse_latin1((String*)&local_78, "Library with the same name already exists.");
               TTR((String*)&local_68, (String*)&local_78);
               if (local_88 != local_68) goto LAB_0010489e;
            }
 else {
               pSVar2 = *(StringName**)( param_1 + 0xe20 );
               StringName::StringName((StringName*)&local_68, "", false);
               cVar3 = AnimationMixer::has_animation_library(pSVar2);
               if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
                  StringName::unref();
               }

               if (cVar3 == '\0') goto LAB_00104838;
               local_70 = 0;
               local_68 = "";
               local_60 = 0;
               String::parse_latin1((StrRange*)&local_70);
               local_78 = 0;
               local_68 = "Enter a library name.";
               local_60 = 0x15;
               String::parse_latin1((StrRange*)&local_78);
               LAB_0010487f:TTR((String*)&local_68, (String*)&local_78);
               if (local_88 != local_68) {
                  LAB_0010489e:CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                  local_88 = local_68;
                  local_68 = (char*)0x0;
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            cVar3 = String::operator !=((String*)&local_88, "");
            if (cVar3 == '\0') goto LAB_001046df;
            LAB_001048e4:pSVar2 = *(StringName**)( param_1 + 0xe08 );
            if ((_add_library_validate(String_const&)::{lambda()
            #1
            ( iVar4 = __cxa_guard_acquire(&_add_library_validate(String_const & sname), iVar4 != 0) );
            {
               _scs_create((char*)&_add_library_validate(String_const & ::sname, true));
               __cxa_atexit(StringName::~StringName, &_add_library_validate(String_const & ::sname, &__dso_handle));
               __cxa_guard_release(&_add_library_validate(String_const&)::{lambda()
               #1
            }

            local_58 = Window::get_theme_color
                         ((StringName *)param_1,
                          (StringName *)
                          &_add_library_validate(String_const&)::{lambda()
            #1
            Control::add_theme_color_override(pSVar2, (Color*)( SceneStringNames::singleton + 0xb0 ));
            Label::set_text(*(String**)( param_1 + 0xe08 ));
            BaseButton::set_disabled(SUB81(*(undefined8*)( *(long*)( param_1 + 0xdf8 ) + 0xd88 ), 0));
         }
 else {
            AnimationMixer::get_animation_library((StringName*)&local_80);
            if (local_80 == (StringName*)0x0) {
               _err_print_error("_add_library_validate", "editor/plugins/animation_library_editor.cpp", 0x41, "Condition \"al.is_null()\" is true.", 0, 0);
               Ref<AnimationLibrary>::unref((Ref<AnimationLibrary>*)&local_80);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
               goto LAB_001047ef;
            }

            cVar3 = String::operator ==(in_RSI, "");
            if (cVar3 == '\0') {
               cVar3 = AnimationLibrary::is_valid_animation_name(in_RSI);
               if (cVar3 == '\0') {
                  local_70 = 0;
                  String::parse_latin1((String*)&local_70, "");
                  local_78 = 0;
                  String::parse_latin1((String*)&local_78, "Animation name contains invalid characters: \'/\', \':\', \',\' or \'[\'.");
                  goto LAB_00104670;
               }

               StringName::StringName((StringName*)&local_68, in_RSI, false);
               cVar3 = AnimationLibrary::has_animation(local_80);
               if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
                  StringName::unref();
               }

               if (cVar3 != '\0') {
                  local_70 = 0;
                  String::parse_latin1((String*)&local_70, "");
                  local_78 = 0;
                  String::parse_latin1((String*)&local_78, "Animation with the same name already exists.");
                  TTR((String*)&local_68, (String*)&local_78);
                  if (local_88 != local_68) goto LAB_0010468f;
                  goto LAB_001046aa;
               }

            }
 else {
               local_70 = 0;
               local_68 = "";
               local_60 = 0;
               String::parse_latin1((StrRange*)&local_70);
               local_78 = 0;
               local_68 = "Animation name can\'t be empty.";
               local_60 = 0x1e;
               String::parse_latin1((StrRange*)&local_78);
               LAB_00104670:TTR((String*)&local_68, (String*)&local_78);
               if (local_88 != local_68) {
                  LAB_0010468f:CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                  local_88 = local_68;
                  local_68 = (char*)0x0;
               }

               LAB_001046aa:CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            }

            Ref<AnimationLibrary>::unref((Ref<AnimationLibrary>*)&local_80);
            LAB_001046cc:cVar3 = String::operator !=((String*)&local_88, "");
            if (cVar3 != '\0') goto LAB_001048e4;
            LAB_001046df:if (param_1[0xde0] == (String)0x0) {
               cVar3 = String::operator ==(in_RSI, "");
               pSVar1 = *(String**)( param_1 + 0xe08 );
               local_70 = 0;
               if (cVar3 == '\0') {
                  String::parse_latin1((String*)&local_70, "");
                  pcVar5 = "Library name is valid.";
               }
 else {
                  String::parse_latin1((String*)&local_70, "");
                  pcVar5 = "Global library will be created.";
               }

               local_78 = 0;
               String::parse_latin1((String*)&local_78, pcVar5);
               TTR((String*)&local_68, (String*)&local_78);
               Label::set_text(pSVar1);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            }
 else {
               local_68 = "";
               pSVar1 = *(String**)( param_1 + 0xe08 );
               local_70 = 0;
               local_60 = 0;
               String::parse_latin1((StrRange*)&local_70);
               local_68 = "Animation name is valid.";
               local_78 = 0;
               local_60 = 0x18;
               String::parse_latin1((StrRange*)&local_78);
               TTR((String*)&local_68, (String*)&local_78);
               Label::set_text(pSVar1);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            }

            pSVar2 = *(StringName**)( param_1 + 0xe08 );
            if ((_add_library_validate(String_const&)::{lambda()
            #2
            ( iVar4 = __cxa_guard_acquire(&_add_library_validate(String_const & sname), iVar4 != 0) );
            {
               _scs_create((char*)&_add_library_validate(String_const & ::sname, true));
               __cxa_atexit(StringName::~StringName, &_add_library_validate(String_const & ::sname, &__dso_handle));
               __cxa_guard_release(&_add_library_validate(String_const&)::{lambda()
               #2
            }

            local_58 = Window::get_theme_color
                         ((StringName *)param_1,
                          (StringName *)
                          &_add_library_validate(String_const&)::{lambda()
            #2
            Control::add_theme_color_override(pSVar2, (Color*)( SceneStringNames::singleton + 0xb0 ));
            BaseButton::set_disabled(SUB81(*(undefined8*)( *(long*)( param_1 + 0xdf8 ) + 0xd88 ), 0));
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         LAB_001047ef:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return;
      }

      /* AnimationLibraryEditor::_add_library() */
      void AnimationLibraryEditor::_add_library(AnimationLibraryEditor *this) {
         String *pSVar1;
         undefined8 uVar2;
         long in_FS_OFFSET;
         undefined8 local_68;
         undefined8 local_60;
         char *local_58;
         undefined8 local_50;
         undefined8 local_48;
         long local_40;
         pSVar1 = *(String**)( this + 0xdf8 );
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         local_58 = "";
         local_60 = 0;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_60);
         local_58 = "Library Name:";
         local_68 = 0;
         local_50 = 0xd;
         String::parse_latin1((StrRange*)&local_68);
         TTR((String*)&local_58, (String*)&local_68);
         Window::set_title(pSVar1);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         local_58 = "";
         local_60 = 0;
         uVar2 = *(undefined8*)( this + 0xe00 );
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_60);
         LineEdit::set_text(uVar2, (StrRange*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         local_48 = 0;
         Window::popup_centered(*(Vector2i**)( this + 0xdf8 ));
         Control::grab_focus();
         this[0xde0] = (AnimationLibraryEditor)0x0;
         if (*(long*)( this + 0xde8 ) != 0) {
            StringName::unref();
            *(undefined8*)( this + 0xde8 ) = 0;
         }

         local_58 = "";
         local_60 = 0;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_60);
         _add_library_validate((String*)this);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* AnimationLibraryEditor::_load_file(String const&) */
      void AnimationLibraryEditor::_load_file(String *param_1) {
         AnimationMixer *pAVar1;
         Ref *pRVar2;
         char cVar3;
         StringName *pSVar4;
         StringName *pSVar5;
         Object *pOVar6;
         long in_FS_OFFSET;
         Ref *local_f0;
         StringName local_c8[8];
         StringName *local_c0;
         CowData<char32_t> local_b8[8];
         undefined8 local_b0;
         undefined8 local_a8;
         String local_a0[8];
         long local_98;
         StringName *local_90;
         Variant *local_88[2];
         int local_78[6];
         undefined8 local_60;
         undefined1 local_58[16];
         long local_40;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         if (*(int*)( param_1 + 0xdb0 ) == 1) {
            AnimationMixer::get_animation_library((StringName*)&local_c0);
            Resource::get_path();
            pRVar2 = EditorNode::singleton;
            local_90 = (StringName*)0x0;
            if (local_c0 != (StringName*)0x0) {
               pSVar4 = (StringName*)__dynamic_cast(local_c0, &Object::typeinfo, &Resource::typeinfo, 0);
               if (pSVar4 != (StringName*)0x0) {
                  local_90 = pSVar4;
                  cVar3 = RefCounted::reference();
                  if (cVar3 == '\0') {
                     local_90 = (StringName*)0x0;
                  }

               }

            }

            EditorNode::save_resource_in_path(pRVar2, (String*)&local_90);
            if (local_90 != (StringName*)0x0) {
               cVar3 = RefCounted::unreference();
               pSVar4 = local_90;
               if (cVar3 != '\0') {
                  cVar3 = predelete_handler((Object*)local_90);
                  if (cVar3 != '\0') {
                     ( **(code**)( *(long*)pSVar4 + 0x140 ) )(pSVar4);
                     Memory::free_static(pSVar4, false);
                  }

               }

            }

            Resource::get_path();
            cVar3 = String::operator !=((String*)&local_90, (String*)local_b8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
            if (cVar3 != '\0') {
               pOVar6 = (Object*)EditorUndoRedoManager::get_singleton();
               StringName::StringName((StringName*)&local_98, (StringName*)( param_1 + 0xdc0 ));
               local_a8 = 0;
               String::parse_latin1((String*)&local_a8, "");
               local_b0 = 0;
               String::parse_latin1((String*)&local_b0, "Save Animation library to File: %s");
               TTR(local_a0, (String*)&local_b0);
               vformat<StringName>((String*)&local_90, local_a0, (StringName*)&local_98);
               EditorUndoRedoManager::create_action(pOVar6, (String*)&local_90, 0, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
               if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
                  StringName::unref();
               }

               Resource::get_path();
               StringName::StringName((StringName*)&local_90, "set_path", false);
               pSVar4 = local_c0;
               Variant::Variant((Variant*)local_78, (String*)&local_98);
               local_60 = 0;
               local_58 = (undefined1[16])0x0;
               local_88[0] = (Variant*)local_78;
               EditorUndoRedoManager::add_do_methodp(pOVar6, pSVar4, (Variant**)&local_90, (int)local_88);
               if (Variant::needs_deinit[(int)local_60] != '\0') {
                  Variant::_clear_internal();
               }

               if (Variant::needs_deinit[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }

               if (( StringName::configured != '\0' ) && ( local_90 != (StringName*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
               local_90 = (StringName*)0x0;
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_90, (CowData*)local_b8);
               StringName::StringName((StringName*)&local_98, "set_path", false);
               EditorUndoRedoManager::add_undo_method<String>((EditorUndoRedoManager*)pOVar6, local_c0, (StringName*)&local_98, (String*)&local_90);
               if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
               pAVar1 = *(AnimationMixer**)( param_1 + 0xe20 );
               StringName::StringName((StringName*)&local_90, "_update_editor", false);
               EditorUndoRedoManager::add_do_method<AnimationMixer*>((EditorUndoRedoManager*)pOVar6, (Object*)param_1, (StringName*)&local_90, pAVar1);
               if (( StringName::configured != '\0' ) && ( local_90 != (StringName*)0x0 )) {
                  StringName::unref();
               }

               pAVar1 = *(AnimationMixer**)( param_1 + 0xe20 );
               StringName::StringName((StringName*)&local_90, "_update_editor", false);
               EditorUndoRedoManager::add_undo_method<AnimationMixer*>((EditorUndoRedoManager*)pOVar6, (Object*)param_1, (StringName*)&local_90, pAVar1);
               if (( StringName::configured != '\0' ) && ( local_90 != (StringName*)0x0 )) {
                  StringName::unref();
               }

               EditorUndoRedoManager::commit_action(SUB81(pOVar6, 0));
            }

            CowData<char32_t>::_unref(local_b8);
            Ref<AnimationLibrary>::unref((Ref<AnimationLibrary>*)&local_c0);
            goto LAB_00104f60;
         }

         if (*(int*)( param_1 + 0xdb0 ) != 3) goto LAB_00104f60;
         AnimationMixer::get_animation_library(local_c8);
         local_c0 = (StringName*)0x0;
         if (*(long*)( param_1 + 0xdb8 ) == 0) {
            pSVar4 = (StringName*)0x0;
            Resource::get_path();
            local_f0 = EditorNode::singleton;
            local_90 = (StringName*)0x0;
            LAB_001051d7:EditorNode::save_resource_in_path(local_f0, (String*)&local_90);
            if (local_90 != (StringName*)0x0) {
               cVar3 = RefCounted::unreference();
               pSVar5 = local_90;
               if (cVar3 != '\0') {
                  cVar3 = predelete_handler((Object*)local_90);
                  if (cVar3 != '\0') {
                     ( **(code**)( *(long*)pSVar5 + 0x140 ) )(pSVar5);
                     Memory::free_static(pSVar5, false);
                  }

               }

            }

            Resource::get_path();
            cVar3 = String::operator !=((String*)&local_90, (String*)local_b8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
            if (cVar3 != '\0') {
               pOVar6 = (Object*)EditorUndoRedoManager::get_singleton();
               StringName::StringName((StringName*)&local_98, (StringName*)( param_1 + 0xdb8 ));
               local_a8 = 0;
               String::parse_latin1((String*)&local_a8, "");
               local_b0 = 0;
               String::parse_latin1((String*)&local_b0, "Save Animation to File: %s");
               TTR(local_a0, (String*)&local_b0);
               vformat<StringName>((String*)&local_90, local_a0, (StringName*)&local_98);
               EditorUndoRedoManager::create_action(pOVar6, (String*)&local_90, 0, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
               if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
                  StringName::unref();
               }

               Resource::get_path();
               StringName::StringName((StringName*)&local_90, "set_path", false);
               Variant::Variant((Variant*)local_78, (String*)&local_98);
               local_60 = 0;
               local_58 = (undefined1[16])0x0;
               local_88[0] = (Variant*)local_78;
               EditorUndoRedoManager::add_do_methodp(pOVar6, pSVar4, (Variant**)&local_90, (int)local_88);
               if (Variant::needs_deinit[(int)local_60] != '\0') {
                  Variant::_clear_internal();
               }

               if (Variant::needs_deinit[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }

               if (( StringName::configured != '\0' ) && ( local_90 != (StringName*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
               local_90 = (StringName*)0x0;
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_90, (CowData*)local_b8);
               StringName::StringName((StringName*)&local_98, "set_path", false);
               EditorUndoRedoManager::add_undo_method<String>((EditorUndoRedoManager*)pOVar6, pSVar4, (StringName*)&local_98, (String*)&local_90);
               if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
               pAVar1 = *(AnimationMixer**)( param_1 + 0xe20 );
               StringName::StringName((StringName*)&local_90, "_update_editor", false);
               EditorUndoRedoManager::add_do_method<AnimationMixer*>((EditorUndoRedoManager*)pOVar6, (Object*)param_1, (StringName*)&local_90, pAVar1);
               if (( StringName::configured != '\0' ) && ( local_90 != (StringName*)0x0 )) {
                  StringName::unref();
               }

               pAVar1 = *(AnimationMixer**)( param_1 + 0xe20 );
               StringName::StringName((StringName*)&local_90, "_update_editor", false);
               EditorUndoRedoManager::add_undo_method<AnimationMixer*>((EditorUndoRedoManager*)pOVar6, (Object*)param_1, (StringName*)&local_90, pAVar1);
               if (( StringName::configured != '\0' ) && ( local_90 != (StringName*)0x0 )) {
                  StringName::unref();
               }

               EditorUndoRedoManager::commit_action(SUB81(pOVar6, 0));
            }

            CowData<char32_t>::_unref(local_b8);
            Ref<Animation>::unref((Ref<Animation>*)&local_c0);
            Ref<AnimationLibrary>::unref((Ref<AnimationLibrary>*)local_c8);
         }
 else {
            AnimationLibrary::get_animation((StringName*)&local_90);
            pSVar4 = local_90;
            if (local_90 != (StringName*)0x0) {
               local_c0 = local_90;
               cVar3 = RefCounted::reference();
               if (cVar3 != '\0') {
                  Ref<Animation>::unref((Ref<Animation>*)&local_90);
                  Resource::get_path();
                  local_90 = (StringName*)0x0;
                  local_f0 = EditorNode::singleton;
                  pSVar5 = (StringName*)__dynamic_cast(pSVar4, &Object::typeinfo, &Resource::typeinfo, 0);
                  if (pSVar5 != (StringName*)0x0) {
                     local_90 = pSVar5;
                     cVar3 = RefCounted::reference();
                     if (cVar3 == '\0') {
                        local_90 = (StringName*)0x0;
                     }

                  }

                  goto LAB_001051d7;
               }

               local_c0 = (StringName*)0x0;
            }

            Ref<Animation>::unref((Ref<Animation>*)&local_90);
            _err_print_error("_load_file", "editor/plugins/animation_library_editor.cpp", 0x14d, "Condition \"anim.is_null()\" is true.", 0, 0);
            Ref<Animation>::unref((Ref<Animation>*)&local_c0);
            Ref<AnimationLibrary>::unref((Ref<AnimationLibrary>*)local_c8);
         }

         LAB_00104f60:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* AnimationLibraryEditor::_load_files(Vector<String> const&) */
      void AnimationLibraryEditor::_load_files(AnimationLibraryEditor *this, Vector *param_1) {
         Variant *pVVar1;
         long lVar2;
         long lVar3;
         String *pSVar4;
         undefined8 uVar5;
         StringName *pSVar6;
         AnimationMixer *pAVar7;
         bool bVar8;
         bool bVar9;
         List *pLVar10;
         Object *pOVar11;
         Object *pOVar12;
         char cVar13;
         EditorUndoRedoManager *this_00;
         Object *pOVar14;
         CowData<char32_t> *pCVar15;
         undefined1(*pauVar16)[16];
         Variant *pVVar17;
         long in_FS_OFFSET;
         long local_1e0;
         long local_1d8;
         undefined1(*local_148)[16];
         List *local_140;
         Object *local_138;
         long *local_130;
         Object *local_128;
         CowData<char32_t> local_120[8];
         undefined8 local_118;
         undefined8 local_110;
         long local_108;
         long local_100;
         Object *local_f8;
         undefined8 local_f0;
         undefined8 local_e0;
         Variant *local_d8;
         Variant *pVStack_d0;
         Variant local_c0[24];
         undefined8 local_a8;
         undefined1 local_a0[16];
         Variant local_90[8];
         Variant *local_88;
         Variant *pVStack_80;
         undefined8 local_70;
         undefined1 local_68[16];
         undefined8 local_58;
         undefined1 local_50[16];
         long local_40[2];
         local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
         this_00 = (EditorUndoRedoManager*)EditorUndoRedoManager::get_singleton();
         local_148 = (undefined1(*) [16])0x0;
         if (*(int*)( this + 0xdb0 ) == 0) {
            local_1d8 = *(long*)( param_1 + 8 );
            if (( local_1d8 == 0 ) || ( lVar2 = local_1d8 == lVar2 )) goto LAB_00106068;
            bVar8 = false;
            bVar9 = false;
            do {
               local_100 = 0;
               local_f0 = 0;
               local_f8 = (Object*)&_LC0;
               String::parse_latin1((StrRange*)&local_100);
               ResourceLoader::load((StringName*)&local_f8, local_1d8, (StrRange*)&local_100, 1, 0);
               local_138 = (Object*)0x0;
               if (local_f8 == (Object*)0x0) {
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
                  LAB_00106b5a:uVar5 = *(undefined8*)( this + 0xdd8 );
                  local_100 = 0;
                  local_f8 = (Object*)&_LC0;
                  local_f0 = 0;
                  String::parse_latin1((StrRange*)&local_100);
                  local_f8 = (Object*)0x111cf8;
                  local_108 = 0;
                  local_f0 = 0x29;
                  String::parse_latin1((StrRange*)&local_108);
                  TTR((String*)&local_f8, (String*)&local_108);
                  AcceptDialog::set_text(uVar5, (StringName*)&local_f8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
                  LAB_00106a75:bVar8 = true;
               }
 else {
                  pOVar14 = (Object*)__dynamic_cast(local_f8, &Object::typeinfo, &AnimationLibrary::typeinfo, 0);
                  if (pOVar14 == (Object*)0x0) {
                     LAB_001063cc:cVar13 = RefCounted::unreference();
                     pOVar11 = local_f8;
                     pOVar14 = local_138;
                     if (( cVar13 != '\0' ) && ( cVar13 = predelete_handler(local_f8) ),pOVar14 = local_138,cVar13 != '\0') {
                        ( **(code**)( *(long*)pOVar11 + 0x140 ) )(pOVar11);
                        Memory::free_static(pOVar11, false);
                     }

                  }
 else {
                     local_138 = pOVar14;
                     cVar13 = RefCounted::reference();
                     if (cVar13 == '\0') {
                        local_138 = (Object*)0x0;
                     }

                     pOVar14 = local_138;
                     if (local_f8 != (Object*)0x0) goto LAB_001063cc;
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
                  if (pOVar14 == (Object*)0x0) goto LAB_00106b5a;
                  local_130 = (long*)0x0;
                  AnimationMixer::get_animation_library_list(*(List**)( this + 0xe20 ));
                  if (local_130 != (long*)0x0) {
                     for (lVar3 = *local_130; lVar3 != 0; lVar3 = *(long*)( lVar3 + 8 )) {
                        AnimationMixer::get_animation_library((StringName*)&local_f8);
                        pOVar11 = local_f8;
                        if (local_f8 != (Object*)0x0) {
                           cVar13 = RefCounted::unreference();
                           pOVar12 = local_f8;
                           if (( cVar13 != '\0' ) && ( cVar13 = cVar13 != '\0' )) {
                              ( **(code**)( *(long*)pOVar12 + 0x140 ) )(pOVar12);
                              Memory::free_static(pOVar12, false);
                           }

                           if (pOVar11 == pOVar14) {
                              if (!bVar8) {
                                 local_100 = 0;
                                 uVar5 = *(undefined8*)( this + 0xdd8 );
                                 String::parse_latin1((String*)&local_100, "");
                                 local_108 = 0;
                                 String::parse_latin1((String*)&local_108, "Some of the selected libraries were already added to the mixer.");
                                 TTR((String*)&local_f8, (String*)&local_108);
                                 AcceptDialog::set_text(uVar5);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
                              }

                              List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_130);
                              cVar13 = RefCounted::unreference();
                              if (( cVar13 != '\0' ) && ( cVar13 = cVar13 != '\0' )) {
                                 ( **(code**)( *(long*)pOVar14 + 0x140 ) )(pOVar14);
                                 Memory::free_static(pOVar14, false);
                              }

                              goto LAB_00106a75;
                           }

                        }

                     }

                  }

                  String::get_file();
                  String::get_basename();
                  AnimationLibrary::validate_library_name((String*)&local_128);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
                  pauVar16 = local_148;
                  while (true) {
                     pSVar6 = *(StringName**)( this + 0xe20 );
                     StringName::StringName((StringName*)&local_f8, (String*)&local_128, false);
                     cVar13 = AnimationMixer::has_animation_library(pSVar6);
                     if (cVar13 == '\0') break;
                     LAB_001064f0:if (( StringName::configured != '\0' ) && ( local_f8 != (Object*)0x0 )) {
                        StringName::unref();
                     }

                     itos((long)&local_100);
                     local_f8 = (Object*)&_LC122;
                     local_110 = 0;
                     local_f0 = 1;
                     String::parse_latin1((StrRange*)&local_110);
                     String::get_file();
                     String::get_basename();
                     String::operator +((String*)&local_108, (String*)&local_118);
                     String::operator +((String*)&local_f8, (String*)&local_108);
                     if (local_128 != local_f8) {
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
                        local_128 = local_f8;
                        local_f8 = (Object*)0x0;
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
                     CowData<char32_t>::_unref(local_120);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
                  }
;
                  if (pauVar16 != (undefined1(*) [16])0x0) {
                     pSVar4 = *(String**)*pauVar16;
                     while (true) {
                        if (pSVar4 == (String*)0x0) {
                           if (( StringName::configured != '\0' ) && ( local_f8 != (Object*)0x0 )) {
                              StringName::unref();
                           }

                           goto LAB_001066a8;
                        }

                        cVar13 = String::operator ==(pSVar4, (String*)&local_128);
                        if (cVar13 != '\0') break;
                        pSVar4 = *(String**)( pSVar4 + 8 );
                     }
;
                     goto LAB_001064f0;
                  }

                  if (( StringName::configured != '\0' ) && ( local_f8 != (Object*)0x0 )) {
                     StringName::unref();
                  }

                  pauVar16 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined4*)pauVar16[1] = 0;
                  *pauVar16 = (undefined1[16])0x0;
                  local_148 = pauVar16;
                  LAB_001066a8:pCVar15 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
                  *(undefined1(*) [16])pCVar15 = (undefined1[16])0x0;
                  *(undefined1(*) [16])( pCVar15 + 0x10 ) = (undefined1[16])0x0;
                  CowData<char32_t>::_ref(pCVar15, (CowData*)&local_128);
                  lVar3 = *(long*)( *pauVar16 + 8 );
                  *(undefined8*)( pCVar15 + 8 ) = 0;
                  *(undefined1(**) [16])( pCVar15 + 0x18 ) = pauVar16;
                  *(long*)( pCVar15 + 0x10 ) = lVar3;
                  if (lVar3 != 0) {
                     *(CowData<char32_t>**)( lVar3 + 8 ) = pCVar15;
                  }

                  lVar3 = *(long*)*pauVar16;
                  *(CowData<char32_t>**)( *pauVar16 + 8 ) = pCVar15;
                  if (lVar3 == 0) {
                     *(CowData<char32_t>**)*pauVar16 = pCVar15;
                  }

                  *(int*)pauVar16[1] = *(int*)pauVar16[1] + 1;
                  if (!bVar9) {
                     if (( *(long*)( param_1 + 8 ) == 0 ) || ( *(long*)( *(long*)( param_1 + 8 ) + -8 ) < 2 )) {
                        local_100 = 0;
                        if (local_128 != (Object*)0x0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_100, (CowData*)&local_128);
                        }

                        local_110 = 0;
                        String::parse_latin1((String*)&local_110, "");
                        local_118 = 0;
                        String::parse_latin1((String*)&local_118, "Add Animation Library: %s");
                        TTR((String*)&local_108, (String*)&local_118);
                        vformat<String>((StringName*)&local_f8, (String*)&local_108, (StrRange*)&local_100);
                        EditorUndoRedoManager::create_action(this_00, (StringName*)&local_f8, 0, 0, 0);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
                     }
 else {
                        local_100 = 0;
                        String::parse_latin1((String*)&local_100, "");
                        local_108 = 0;
                        String::parse_latin1((String*)&local_108, "Add Animation Libraries");
                        TTR((String*)&local_f8, (String*)&local_108);
                        EditorUndoRedoManager::create_action(this_00, (StringName*)&local_f8, 0, 0, 0);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
                     }

                  }

                  local_f8 = pOVar14;
                  cVar13 = RefCounted::reference();
                  if (cVar13 == '\0') {
                     local_f8 = (Object*)0x0;
                     pOVar14 = (Object*)0x0;
                  }

                  local_100 = 0;
                  if (local_128 != (Object*)0x0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_100, (CowData*)&local_128);
                  }

                  StringName::StringName((StringName*)&local_108, "add_animation_library", false);
                  pSVar6 = *(StringName**)( this + 0xe20 );
                  Variant::Variant((Variant*)&local_d8, (String*)&local_100);
                  pVVar17 = local_90;
                  Variant::Variant(local_c0, pOVar14);
                  local_a0 = (undefined1[16])0x0;
                  local_a8 = 0;
                  local_88 = (Variant*)&local_d8;
                  pVStack_80 = local_c0;
                  EditorUndoRedoManager::add_do_methodp((Object*)this_00, pSVar6, (Variant**)&local_108, (int)(Variant*)&local_88);
                  do {
                     pVVar1 = pVVar17 + -0x18;
                     pVVar17 = pVVar17 + -0x18;
                     if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                        Variant::_clear_internal();
                     }

                  }
 while ( pVVar17 != (Variant*)&local_d8 );
                  if (( StringName::configured != '\0' ) && ( local_108 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
                  Ref<AnimationLibrary>::unref((Ref<AnimationLibrary>*)&local_f8);
                  local_f8 = (Object*)0x0;
                  if (local_128 != (Object*)0x0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_128);
                  }

                  StringName::StringName((StringName*)&local_100, "remove_animation_library", false);
                  pSVar6 = *(StringName**)( this + 0xe20 );
                  Variant::Variant((Variant*)&local_88, (String*)&local_f8);
                  local_70 = 0;
                  local_68 = (undefined1[16])0x0;
                  local_d8 = (Variant*)&local_88;
                  EditorUndoRedoManager::add_undo_methodp((Object*)this_00, pSVar6, (Variant**)&local_100, (int)(Variant*)&local_d8);
                  if (Variant::needs_deinit[(int)local_70] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (Variant::needs_deinit[(int)local_88] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
                  List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_130);
                  Ref<AnimationLibrary>::unref((Ref<AnimationLibrary>*)&local_138);
                  bVar9 = true;
               }

               local_1d8 = local_1d8 + 8;
            }
 while ( lVar2 != local_1d8 );
         }
 else {
            if (*(int*)( this + 0xdb0 ) != 2) goto LAB_00106068;
            AnimationMixer::get_animation_library((StringName*)&local_140);
            local_1e0 = *(long*)( param_1 + 8 );
            if (( local_1e0 == 0 ) || ( lVar2 = lVar2 == local_1e0 )) {
               Ref<AnimationLibrary>::unref((Ref<AnimationLibrary>*)&local_140);
               goto LAB_00106068;
            }

            bVar8 = false;
            bVar9 = false;
            do {
               local_100 = 0;
               local_f0 = 0;
               local_f8 = (Object*)&_LC0;
               String::parse_latin1((StrRange*)&local_100);
               ResourceLoader::load((StringName*)&local_f8, local_1e0, (StrRange*)&local_100, 1, 0);
               local_138 = (Object*)0x0;
               if (local_f8 == (Object*)0x0) {
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
                  LAB_001060e0:local_100 = 0;
                  uVar5 = *(undefined8*)( this + 0xdd8 );
                  local_f0 = 0;
                  local_f8 = (Object*)&_LC0;
                  String::parse_latin1((StrRange*)&local_100);
                  local_f8 = (Object*)0x111d68;
                  local_108 = 0;
                  local_f0 = 0x22;
                  String::parse_latin1((StrRange*)&local_108);
                  TTR((String*)&local_f8, (String*)&local_108);
                  AcceptDialog::set_text(uVar5, (StringName*)&local_f8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
                  LAB_00106005:bVar8 = true;
               }
 else {
                  pOVar14 = (Object*)__dynamic_cast(local_f8, &Object::typeinfo, &Animation::typeinfo, 0);
                  if (pOVar14 == (Object*)0x0) {
                     LAB_00105a1f:cVar13 = RefCounted::unreference();
                     pOVar11 = local_f8;
                     pOVar14 = local_138;
                     if (( cVar13 != '\0' ) && ( cVar13 = predelete_handler(local_f8) ),pOVar14 = local_138,cVar13 != '\0') {
                        ( **(code**)( *(long*)pOVar11 + 0x140 ) )(pOVar11);
                        Memory::free_static(pOVar11, false);
                     }

                  }
 else {
                     local_138 = pOVar14;
                     cVar13 = RefCounted::reference();
                     if (cVar13 == '\0') {
                        local_138 = (Object*)0x0;
                     }

                     pOVar14 = local_138;
                     if (local_f8 != (Object*)0x0) goto LAB_00105a1f;
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
                  if (pOVar14 == (Object*)0x0) goto LAB_001060e0;
                  local_130 = (long*)0x0;
                  AnimationLibrary::get_animation_list(local_140);
                  if (local_130 != (long*)0x0) {
                     for (lVar3 = *local_130; lVar3 != 0; lVar3 = *(long*)( lVar3 + 8 )) {
                        AnimationLibrary::get_animation((StringName*)&local_f8);
                        pOVar11 = local_f8;
                        if (local_f8 != (Object*)0x0) {
                           cVar13 = RefCounted::unreference();
                           pOVar12 = local_f8;
                           if (( cVar13 != '\0' ) && ( cVar13 = cVar13 != '\0' )) {
                              ( **(code**)( *(long*)pOVar12 + 0x140 ) )(pOVar12);
                              Memory::free_static(pOVar12, false);
                           }

                           if (pOVar11 == pOVar14) {
                              if (!bVar8) {
                                 local_100 = 0;
                                 uVar5 = *(undefined8*)( this + 0xdd8 );
                                 String::parse_latin1((String*)&local_100, "");
                                 local_108 = 0;
                                 String::parse_latin1((String*)&local_108, "Some of the selected animations were already added to the library.");
                                 TTR((String*)&local_f8, (String*)&local_108);
                                 AcceptDialog::set_text(uVar5);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
                              }

                              List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_130);
                              cVar13 = RefCounted::unreference();
                              if (( cVar13 != '\0' ) && ( cVar13 = cVar13 != '\0' )) {
                                 ( **(code**)( *(long*)pOVar14 + 0x140 ) )(pOVar14);
                                 Memory::free_static(pOVar14, false);
                              }

                              goto LAB_00106005;
                           }

                        }

                     }

                  }

                  String::get_file();
                  String::get_basename();
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
                  pauVar16 = local_148;
                  while (true) {
                     pLVar10 = local_140;
                     StringName::StringName((StringName*)&local_f8, (String*)&local_128, false);
                     cVar13 = AnimationLibrary::has_animation((StringName*)pLVar10);
                     if (cVar13 == '\0') break;
                     LAB_00105b30:if (( StringName::configured != '\0' ) && ( local_f8 != (Object*)0x0 )) {
                        StringName::unref();
                     }

                     itos((long)&local_100);
                     local_f8 = (Object*)&_LC122;
                     local_110 = 0;
                     local_f0 = 1;
                     String::parse_latin1((StrRange*)&local_110);
                     String::get_file();
                     String::get_basename();
                     String::operator +((String*)&local_108, (String*)&local_118);
                     String::operator +((String*)&local_f8, (String*)&local_108);
                     if (local_128 != local_f8) {
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
                        local_128 = local_f8;
                        local_f8 = (Object*)0x0;
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
                     CowData<char32_t>::_unref(local_120);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
                  }
;
                  if (pauVar16 != (undefined1(*) [16])0x0) {
                     pSVar4 = *(String**)*pauVar16;
                     while (true) {
                        if (pSVar4 == (String*)0x0) {
                           if (( StringName::configured != '\0' ) && ( local_f8 != (Object*)0x0 )) {
                              StringName::unref();
                           }

                           goto LAB_00105ce8;
                        }

                        cVar13 = String::operator ==(pSVar4, (String*)&local_128);
                        if (cVar13 != '\0') break;
                        pSVar4 = *(String**)( pSVar4 + 8 );
                     }
;
                     goto LAB_00105b30;
                  }

                  if (( StringName::configured != '\0' ) && ( local_f8 != (Object*)0x0 )) {
                     StringName::unref();
                  }

                  pauVar16 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined4*)pauVar16[1] = 0;
                  *pauVar16 = (undefined1[16])0x0;
                  local_148 = pauVar16;
                  LAB_00105ce8:pCVar15 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
                  *(undefined1(*) [16])pCVar15 = (undefined1[16])0x0;
                  *(undefined1(*) [16])( pCVar15 + 0x10 ) = (undefined1[16])0x0;
                  CowData<char32_t>::_ref(pCVar15, (CowData*)&local_128);
                  lVar3 = *(long*)( *pauVar16 + 8 );
                  *(undefined8*)( pCVar15 + 8 ) = 0;
                  *(undefined1(**) [16])( pCVar15 + 0x18 ) = pauVar16;
                  *(long*)( pCVar15 + 0x10 ) = lVar3;
                  if (lVar3 != 0) {
                     *(CowData<char32_t>**)( lVar3 + 8 ) = pCVar15;
                  }

                  lVar3 = *(long*)*pauVar16;
                  *(CowData<char32_t>**)( *pauVar16 + 8 ) = pCVar15;
                  if (lVar3 == 0) {
                     *(CowData<char32_t>**)*pauVar16 = pCVar15;
                  }

                  *(int*)pauVar16[1] = *(int*)pauVar16[1] + 1;
                  if (!bVar9) {
                     if (( *(long*)( param_1 + 8 ) == 0 ) || ( *(long*)( *(long*)( param_1 + 8 ) + -8 ) < 2 )) {
                        local_100 = 0;
                        if (local_128 != (Object*)0x0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_100, (CowData*)&local_128);
                        }

                        local_110 = 0;
                        String::parse_latin1((String*)&local_110, "");
                        local_118 = 0;
                        String::parse_latin1((String*)&local_118, "Load Animation into Library: %s");
                        TTR((String*)&local_108, (String*)&local_118);
                        vformat<String>((StringName*)&local_f8, (String*)&local_108, (StrRange*)&local_100);
                        EditorUndoRedoManager::create_action(this_00, (StringName*)&local_f8, 0, 0, 0);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
                     }
 else {
                        local_100 = 0;
                        String::parse_latin1((String*)&local_100, "");
                        local_108 = 0;
                        String::parse_latin1((String*)&local_108, "Load Animations into Library");
                        TTR((String*)&local_f8, (String*)&local_108);
                        EditorUndoRedoManager::create_action(this_00, (StringName*)&local_f8, 0, 0, 0);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
                     }

                  }

                  local_f8 = pOVar14;
                  cVar13 = RefCounted::reference();
                  if (cVar13 == '\0') {
                     local_f8 = (Object*)0x0;
                     pOVar14 = (Object*)0x0;
                  }

                  local_100 = 0;
                  if (local_128 != (Object*)0x0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_100, (CowData*)&local_128);
                  }

                  StringName::StringName((StringName*)&local_108, "add_animation", false);
                  pLVar10 = local_140;
                  Variant::Variant((Variant*)&local_88, (String*)&local_100);
                  Variant::Variant((Variant*)&local_70, pOVar14);
                  local_50 = (undefined1[16])0x0;
                  pVVar17 = (Variant*)local_40;
                  local_58 = 0;
                  local_d8 = (Variant*)&local_88;
                  pVStack_d0 = (Variant*)&local_70;
                  EditorUndoRedoManager::add_do_methodp((Object*)this_00, (StringName*)pLVar10, (Variant**)&local_108, (int)&local_d8);
                  do {
                     pVVar1 = pVVar17 + -0x18;
                     pVVar17 = pVVar17 + -0x18;
                     if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                        Variant::_clear_internal();
                     }

                  }
 while ( pVVar17 != (Variant*)&local_88 );
                  if (( StringName::configured != '\0' ) && ( local_108 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
                  Ref<Animation>::unref((Ref<Animation>*)&local_f8);
                  local_f8 = (Object*)0x0;
                  if (local_128 != (Object*)0x0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_128);
                  }

                  StringName::StringName((StringName*)&local_100, "remove_animation", false);
                  EditorUndoRedoManager::add_undo_method<String>(this_00, local_140, (StrRange*)&local_100, (StringName*)&local_f8);
                  if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
                  List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_130);
                  Ref<Animation>::unref((Ref<Animation>*)&local_138);
                  bVar9 = true;
               }

               local_1e0 = local_1e0 + 8;
            }
 while ( lVar2 != local_1e0 );
            Ref<AnimationLibrary>::unref((Ref<AnimationLibrary>*)&local_140);
         }

         if (bVar9) {
            pAVar7 = *(AnimationMixer**)( this + 0xe20 );
            StringName::StringName((StringName*)&local_f8, "_update_editor", false);
            EditorUndoRedoManager::add_do_method<AnimationMixer*>(this_00, (Object*)this, (StringName*)&local_f8, pAVar7);
            if (( StringName::configured != '\0' ) && ( local_f8 != (Object*)0x0 )) {
               StringName::unref();
            }

            pAVar7 = *(AnimationMixer**)( this + 0xe20 );
            StringName::StringName((StringName*)&local_f8, "_update_editor", false);
            EditorUndoRedoManager::add_undo_method<AnimationMixer*>(this_00, (Object*)this, (StringName*)&local_f8, pAVar7);
            if (( StringName::configured != '\0' ) && ( local_f8 != (Object*)0x0 )) {
               StringName::unref();
            }

            EditorUndoRedoManager::commit_action(SUB81(this_00, 0));
         }

         if (bVar8) {
            local_e0 = 0;
            Window::popup_centered(*(Vector2i**)( this + 0xdd8 ));
         }

         LAB_00106068:List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_148);
         if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return;
      }

      /* AnimationLibraryEditor::_button_pressed(TreeItem*, int, int, MouseButton) */
      void AnimationLibraryEditor::_button_pressed(String *param_1, int param_2, undefined8 param_3, int param_4) {
         Variant *pVVar1;
         String *pSVar2;
         long *plVar3;
         code *pcVar4;
         AnimationMixer *pAVar5;
         StringName *pSVar6;
         Ref *pRVar7;
         char cVar8;
         long lVar9;
         long lVar10;
         StringName *pSVar11;
         Object *pOVar12;
         Ref *pRVar13;
         int iVar14;
         Variant *pVVar15;
         long in_FS_OFFSET;
         float fVar16;
         undefined8 uVar17;
         float fVar18;
         float extraout_XMM1_Db;
         float extraout_XMM1_Db_00;
         CowData *local_168;
         String *local_158;
         long local_100;
         Ref *local_f8;
         Ref *local_f0;
         StringName *local_e8;
         StringName *local_e0;
         String *local_d8;
         undefined8 local_d0;
         long *local_c8;
         long local_c0;
         StringName *local_b8;
         StringName *local_b0;
         Variant *local_a8;
         Variant *pVStack_a0;
         undefined1 local_88[16];
         undefined8 local_78;
         int local_70[2];
         undefined1 local_68[16];
         undefined8 local_58;
         undefined1 local_50[16];
         long local_40[2];
         local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
         lVar9 = TreeItem::get_parent();
         lVar10 = Tree::get_root();
         if (lVar9 == lVar10) {
            iVar14 = (int)(Variant*)local_88;
            TreeItem::get_metadata(iVar14);
            Variant::operator_cast_to_StringName((Variant*)&local_100);
            if (Variant::needs_deinit[(int)local_88._0_4_] != '\0') {
               Variant::_clear_internal();
            }

            AnimationMixer::get_animation_library((StringName*)&local_f8);
            switch (param_4) {
               case 0:
      pSVar2 = *(String **)(param_1 + 0xdf8);
      local_b8 = (StringName *)0x0;
      String::parse_latin1((String *)&local_b8,"");
      local_c0 = 0;
      String::parse_latin1((String *)&local_c0,"Animation Name:");
      TTR((String *)&local_b0,(String *)&local_c0);
      Window::set_title(pSVar2);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      uVar17 = *(undefined8 *)(param_1 + 0xe00);
      local_b0 = (StringName *)0x0;
      String::parse_latin1((String *)&local_b0,"");
      LineEdit::set_text(uVar17,(String *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      local_88._0_8_ = 0;
      Window::popup_centered(*(Vector2i **)(param_1 + 0xdf8));
      Control::grab_focus();
      param_1[0xde0] = (String)0x1;
      TreeItem::get_metadata(iVar14);
      Variant::operator_cast_to_StringName((Variant *)&local_b0);
      if ((StringName *)*(long *)(param_1 + 0xde8) == local_b0) {
        if ((StringName::configured != '\0') && (local_b0 != (StringName *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(StringName **)(param_1 + 0xde8) = local_b0;
      }
      if (Variant::needs_deinit[(int)local_88._0_4_] != '\0') {
        Variant::_clear_internal();
      }
      local_b0 = (StringName *)0x0;
      String::parse_latin1((String *)&local_b0,"");
      _add_library_validate(param_1);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      break;
               case 1:
      TreeItem::get_metadata(iVar14);
      Variant::operator_cast_to_StringName((Variant *)&local_b0);
      if (*(StringName **)(param_1 + 0xde8) == local_b0) {
        if ((StringName::configured != '\0') && (local_b0 != (StringName *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(StringName **)(param_1 + 0xde8) = local_b0;
      }
      if (Variant::needs_deinit[(int)local_88._0_4_] != '\0') {
        Variant::_clear_internal();
      }
      local_c8 = (long *)0x0;
      local_b0 = (StringName *)0x0;
      String::parse_latin1((String *)&local_b0,"Animation");
      ResourceLoader::get_recognized_extensions_for_type((String *)&local_b0,(List *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      EditorFileDialog::clear_filters();
      if ((local_c8 != (long *)0x0) && (lVar9 = *local_c8, lVar9 != 0)) {
        do {
          pSVar2 = *(String **)(param_1 + 0xdf0);
          local_b0 = (StringName *)0x0;
          String::parse_latin1((String *)&local_b0,"");
          operator+((char *)&local_b8,(String *)&_LC75);
          EditorFileDialog::add_filter(pSVar2,(String *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          lVar9 = *(long *)(lVar9 + 8);
        } while (lVar9 != 0);
      }
      pSVar2 = *(String **)(param_1 + 0xdf0);
      local_b8 = (StringName *)0x0;
      String::parse_latin1((String *)&local_b8,"");
      local_c0 = 0;
      String::parse_latin1((String *)&local_c0,"Load Animation");
      TTR((String *)&local_b0,(String *)&local_c0);
      Window::set_title(pSVar2);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      EditorFileDialog::set_file_mode(*(undefined8 *)(param_1 + 0xdf0),1);
      pSVar2 = *(String **)(param_1 + 0xdf0);
      local_b0 = (StringName *)0x0;
      String::parse_latin1((String *)&local_b0,"");
      EditorFileDialog::set_current_file(pSVar2);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      Window::popup_centered_ratio(_LC74);
      *(undefined4 *)(param_1 + 0xdb0) = 2;
      List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_c8);
      break;
               case 2:
      lVar9 = EditorSettings::get_singleton();
      local_b8 = (StringName *)0x0;
      pRVar13 = *(Ref **)(lVar9 + 0x300);
      if (pRVar13 != (Ref *)0x0) {
        local_b0 = (StringName *)0x0;
        local_b8 = (StringName *)pRVar13;
        cVar8 = RefCounted::reference();
        if (cVar8 == '\0') {
          local_b8 = (StringName *)0x0;
          pRVar13 = (Ref *)0x0;
        }
        Ref<Resource>::unref((Ref<Resource> *)&local_b0);
      }
      local_f0 = (Ref *)0x0;
      Ref<Animation>::operator=((Ref<Animation> *)&local_f0,pRVar13);
      Ref<Resource>::unref((Ref<Resource> *)&local_b8);
      pRVar13 = local_f0;
      if (local_f0 == (Ref *)0x0) {
        uVar17 = *(undefined8 *)(param_1 + 0xdd8);
        local_b8 = (StringName *)0x0;
        String::parse_latin1((String *)&local_b8,"");
        local_c0 = 0;
        String::parse_latin1((String *)&local_c0,"No animation resource in clipboard!");
        TTR((String *)&local_b0,(String *)&local_c0);
        AcceptDialog::set_text(uVar17,(CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        local_88._0_8_ = 0;
        Window::popup_centered(*(Vector2i **)(param_1 + 0xdd8));
        Ref<Animation>::unref((Ref<Animation> *)&local_f0);
      }
      else {
        Resource::get_path();
        cVar8 = String::is_resource_file();
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        if (cVar8 == '\0') {
          (**(code **)(*(long *)pRVar13 + 0x198))((CowData<char32_t> *)&local_b0,pRVar13,0);
          Ref<Animation>::operator=((Ref<Animation> *)&local_f0,(Ref *)local_b0);
          Ref<Resource>::unref((Ref<Resource> *)&local_b0);
          pRVar13 = local_f0;
        }
        local_e8 = (StringName *)0x0;
        Resource::get_name();
        cVar8 = String::operator!=((String *)&local_b0,"");
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        if (cVar8 == '\0') {
          local_b8 = (StringName *)0x0;
          String::parse_latin1((String *)&local_b8,"");
          local_c0 = 0;
          String::parse_latin1((String *)&local_c0,"Pasted Animation");
          TTR((String *)&local_b0,(String *)&local_c0);
          if (local_e8 != local_b0) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
            local_e8 = local_b0;
            local_b0 = (StringName *)0x0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        }
        else {
          Resource::get_name();
          if (local_e8 != local_b0) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
            local_e8 = local_b0;
            local_b0 = (StringName *)0x0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        }
        local_158 = (String *)&local_c0;
        local_168 = (CowData *)&local_e8;
        local_e0 = (StringName *)0x0;
        if (local_e8 != (StringName *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,local_168);
        }
        while( true ) {
          pRVar7 = local_f8;
          StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
          cVar8 = AnimationLibrary::has_animation((StringName *)pRVar7);
          if ((StringName::configured != '\0') && (local_b0 != (StringName *)0x0)) {
            StringName::unref();
          }
          if (cVar8 == '\0') break;
          local_b8 = (StringName *)0x0;
          String::parse_latin1((String *)&local_b8,")");
          itos((long)&local_c8);
          local_d8 = (String *)0x0;
          String::parse_latin1((String *)&local_d8," (");
          String::operator+((String *)&local_d0,(String *)local_168);
          String::operator+(local_158,(String *)&local_d0);
          String::operator+((String *)&local_b0,local_158);
          if (local_e0 != local_b0) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
            local_e0 = local_b0;
            local_b0 = (StringName *)0x0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_158);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        }
        pOVar12 = (Object *)EditorUndoRedoManager::get_singleton();
        local_b8 = (StringName *)0x0;
        if (local_e0 != (StringName *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e0);
        }
        local_c8 = (long *)0x0;
        String::parse_latin1((String *)&local_c8,"");
        local_d0 = 0;
        String::parse_latin1((String *)&local_d0,"Add Animation to Library: %s");
        TTR(local_158,(String *)&local_d0);
        vformat<String>((CowData<char32_t> *)&local_b0,local_158,(Ref<Resource> *)&local_b8);
        EditorUndoRedoManager::create_action(pOVar12,(CowData<char32_t> *)&local_b0,0,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_158);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        local_b0 = (StringName *)0x0;
        Ref<Animation>::operator=((Ref<Animation> *)&local_b0,pRVar13);
        local_b8 = (StringName *)0x0;
        if (local_e0 != (StringName *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e0);
        }
        StringName::StringName((StringName *)local_158,"add_animation",false);
        pRVar13 = local_f8;
        Variant::Variant((Variant *)local_88,(String *)&local_b8);
        Variant::Variant((Variant *)local_70,(Object *)local_b0);
        local_50 = (undefined1  [16])0x0;
        local_58 = 0;
        pVVar15 = (Variant *)local_40;
        local_a8 = (Variant *)local_88;
        pVStack_a0 = (Variant *)local_70;
        EditorUndoRedoManager::add_do_methodp
                  (pOVar12,(StringName *)pRVar13,(Variant **)local_158,(int)&local_a8);
        do {
          pVVar1 = pVVar15 + -0x18;
          pVVar15 = pVVar15 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar15 != (Variant *)local_88);
        if ((StringName::configured != '\0') && (local_c0 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        Ref<Animation>::unref((Ref<Animation> *)&local_b0);
        local_b0 = (StringName *)0x0;
        if (local_e0 != (StringName *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_e0);
        }
        StringName::StringName((StringName *)&local_b8,"remove_animation",false);
        EditorUndoRedoManager::add_undo_method<String>
                  ((EditorUndoRedoManager *)pOVar12,local_f8,(Ref<Resource> *)&local_b8,
                   (CowData<char32_t> *)&local_b0);
        if ((StringName::configured != '\0') && (local_b8 != (StringName *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        pAVar5 = *(AnimationMixer **)(param_1 + 0xe20);
        StringName::StringName((StringName *)&local_b0,"_update_editor",false);
        EditorUndoRedoManager::add_do_method<AnimationMixer*>
                  ((EditorUndoRedoManager *)pOVar12,(Object *)param_1,(StringName *)&local_b0,pAVar5
                  );
        if ((StringName::configured != '\0') && (local_b0 != (StringName *)0x0)) {
          StringName::unref();
        }
        pAVar5 = *(AnimationMixer **)(param_1 + 0xe20);
        StringName::StringName((StringName *)&local_b0,"_update_editor",false);
        EditorUndoRedoManager::add_undo_method<AnimationMixer*>
                  ((EditorUndoRedoManager *)pOVar12,(Object *)param_1,(StringName *)&local_b0,pAVar5
                  );
        if ((StringName::configured != '\0') && (local_b0 != (StringName *)0x0)) {
          StringName::unref();
        }
        EditorUndoRedoManager::commit_action(SUB81(pOVar12,0));
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_168);
        Ref<Animation>::unref((Ref<Animation> *)&local_f0);
      }
      break;
               case 3:
      PopupMenu::clear(SUB81(*(undefined8 *)(param_1 + 0xe10),0));
      uVar17 = *(undefined8 *)(param_1 + 0xe10);
      local_b8 = (StringName *)0x0;
      String::parse_latin1((String *)&local_b8,"");
      local_c0 = 0;
      String::parse_latin1((String *)&local_c0,"Save");
      TTR((String *)&local_b0,(String *)&local_c0);
      PopupMenu::add_item(uVar17,(String *)&local_b0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      uVar17 = *(undefined8 *)(param_1 + 0xe10);
      local_b8 = (StringName *)0x0;
      String::parse_latin1((String *)&local_b8,"");
      local_c0 = 0;
      String::parse_latin1((String *)&local_c0,"Save As");
      TTR((String *)&local_b0,(String *)&local_c0);
      PopupMenu::add_item(uVar17,(String *)&local_b0,1,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      local_b0 = (StringName *)0x0;
      iVar14 = (int)(String *)&local_b0;
      PopupMenu::add_separator(*(String **)(param_1 + 0xe10),iVar14);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      uVar17 = *(undefined8 *)(param_1 + 0xe10);
      local_b8 = (StringName *)0x0;
      String::parse_latin1((String *)&local_b8,"");
      local_c0 = 0;
      String::parse_latin1((String *)&local_c0,"Make Unique");
      TTR((String *)&local_b0,(String *)&local_c0);
      PopupMenu::add_item(uVar17,(String *)&local_b0,2,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      local_b0 = (StringName *)0x0;
      PopupMenu::add_separator(*(String **)(param_1 + 0xe10),iVar14);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      uVar17 = *(undefined8 *)(param_1 + 0xe10);
      local_b8 = (StringName *)0x0;
      String::parse_latin1((String *)&local_b8,"");
      local_c0 = 0;
      String::parse_latin1((String *)&local_c0,"Open in Inspector");
      TTR((String *)&local_b0,(String *)&local_c0);
      PopupMenu::add_item(uVar17,(String *)&local_b0,3,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      uVar17 = Tree::get_item_rect(*(TreeItem **)(param_1 + 0xe18),param_2,1);
      (**(code **)(**(long **)(param_1 + 0xe18) + 0x2b0))((Variant *)local_88);
      fVar16 = (float)uVar17 + 0.0;
      plVar3 = *(long **)(param_1 + 0xe10);
      fVar18 = extraout_XMM1_Db_00 + (float)((ulong)uVar17 >> 0x20);
      pcVar4 = *(code **)(*plVar3 + 0x240);
      pVStack_a0 = (Variant *)0x0;
      local_a8 = (Variant *)
                 CONCAT44(fVar16 * SUB84(local_88._0_8_,4) + fVar18 * SUB84(local_88._8_8_,4) +
                          (float)((ulong)local_78 >> 0x20),
                          fVar16 * (float)local_88._0_8_ + fVar18 * (float)local_88._8_8_ +
                          (float)local_78);
      local_88 = Rect2::operator_cast_to_Rect2i((Rect2 *)&local_a8);
      (*pcVar4)(plVar3,(Variant *)local_88);
      if (*(long *)(param_1 + 0xdb8) != 0) {
        StringName::unref();
        *(undefined8 *)(param_1 + 0xdb8) = 0;
      }
      StringName::operator=((StringName *)(param_1 + 0xdc0),(StringName *)&local_100);
      break;
               case 4:
      pOVar12 = (Object *)EditorUndoRedoManager::get_singleton();
      StringName::StringName((StringName *)&local_b8,(StringName *)&local_100);
      local_c8 = (long *)0x0;
      String::parse_latin1((String *)&local_c8,"");
      local_d0 = 0;
      String::parse_latin1((String *)&local_d0,"Remove Animation Library: %s");
      TTR((String *)&local_c0,(String *)&local_d0);
      vformat<StringName>((CowData<char32_t> *)&local_b0,(String *)&local_c0,(StringName *)&local_b8
                         );
      EditorUndoRedoManager::create_action(pOVar12,(CowData<char32_t> *)&local_b0,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      if ((StringName::configured != '\0') && (local_b8 != (StringName *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_b0,(StringName *)&local_100);
      StringName::StringName((StringName *)&local_b8,"remove_animation_library",false);
      EditorUndoRedoManager::add_do_method<StringName>
                ((EditorUndoRedoManager *)pOVar12,*(undefined8 *)(param_1 + 0xe20),
                 (StringName *)&local_b8,(CowData<char32_t> *)&local_b0);
      if ((StringName::configured != '\0') &&
         (((local_b8 == (StringName *)0x0 || (StringName::unref(), StringName::configured != '\0'))
          && (local_b0 != (StringName *)0x0)))) {
        StringName::unref();
      }
      local_b0 = (StringName *)0x0;
      Ref<AnimationLibrary>::operator=((Ref<AnimationLibrary> *)&local_b0,local_f8);
      StringName::StringName((StringName *)&local_b8,(StringName *)&local_100);
      StringName::StringName((StringName *)&local_c0,"add_animation_library",false);
      pSVar11 = *(StringName **)(param_1 + 0xe20);
      Variant::Variant((Variant *)local_88,(StringName *)&local_b8);
      Variant::Variant((Variant *)local_70,(Object *)local_b0);
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      pVVar15 = (Variant *)local_40;
      local_a8 = (Variant *)local_88;
      pVStack_a0 = (Variant *)local_70;
      EditorUndoRedoManager::add_undo_methodp(pOVar12,pSVar11,(Variant **)&local_c0,(int)&local_a8);
      do {
        pVVar1 = pVVar15 + -0x18;
        pVVar15 = pVVar15 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar15 != (Variant *)local_88);
      if (((StringName::configured != '\0') &&
          ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
         (local_b8 != (StringName *)0x0)) {
        StringName::unref();
      }
      Ref<AnimationLibrary>::unref((Ref<AnimationLibrary> *)&local_b0);
      pAVar5 = *(AnimationMixer **)(param_1 + 0xe20);
      StringName::StringName((StringName *)&local_b0,"_update_editor",false);
      EditorUndoRedoManager::add_do_method<AnimationMixer*>
                ((EditorUndoRedoManager *)pOVar12,(Object *)param_1,(StringName *)&local_b0,pAVar5);
      if ((StringName::configured != '\0') && (local_b0 != (StringName *)0x0)) {
        StringName::unref();
      }
      pAVar5 = *(AnimationMixer **)(param_1 + 0xe20);
      StringName::StringName((StringName *)&local_b0,"_update_editor",false);
      EditorUndoRedoManager::add_undo_method<AnimationMixer*>
                ((EditorUndoRedoManager *)pOVar12,(Object *)param_1,(StringName *)&local_b0,pAVar5);
      if ((StringName::configured != '\0') && (local_b0 != (StringName *)0x0)) {
        StringName::unref();
      }
      EditorUndoRedoManager::commit_action(SUB81(pOVar12,0));
            }

            Ref<AnimationLibrary>::unref((Ref<AnimationLibrary>*)&local_f8);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               StringName::unref();
            }

            goto LAB_001070d7;
         }

         TreeItem::get_parent();
         iVar14 = (int)(Variant*)local_88;
         TreeItem::get_metadata(iVar14);
         Variant::operator_cast_to_StringName((Variant*)&local_f0);
         if (Variant::needs_deinit[(int)local_88._0_4_] != '\0') {
            Variant::_clear_internal();
         }

         TreeItem::get_metadata(iVar14);
         Variant::operator_cast_to_StringName((Variant*)&local_e8);
         if (Variant::needs_deinit[(int)local_88._0_4_] != '\0') {
            Variant::_clear_internal();
         }

         AnimationMixer::get_animation_library((StringName*)&local_e0);
         AnimationLibrary::get_animation((StringName*)&local_d8);
         if (local_d8 == (String*)0x0) {
            _err_print_error("_button_pressed", "editor/plugins/animation_library_editor.cpp", 0x277, "Condition \"anim.is_null()\" is true.", 0, 0);
         }
 else if (param_4 == 1) {
            PopupMenu::clear(SUB81(*(undefined8*)( param_1 + 0xe10 ), 0));
            uVar17 = *(undefined8*)( param_1 + 0xe10 );
            local_b8 = (StringName*)0x0;
            String::parse_latin1((String*)&local_b8, "");
            local_c0 = 0;
            String::parse_latin1((String*)&local_c0, "Save");
            TTR((String*)&local_b0, (String*)&local_c0);
            PopupMenu::add_item(uVar17, (String*)&local_b0, 4, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
            uVar17 = *(undefined8*)( param_1 + 0xe10 );
            local_b8 = (StringName*)0x0;
            String::parse_latin1((String*)&local_b8, "");
            local_c0 = 0;
            String::parse_latin1((String*)&local_c0, "Save As");
            TTR((String*)&local_b0, (String*)&local_c0);
            PopupMenu::add_item(uVar17, (String*)&local_b0, 5, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
            local_b0 = (StringName*)0x0;
            iVar14 = (int)(String*)&local_b0;
            PopupMenu::add_separator(*(String**)( param_1 + 0xe10 ), iVar14);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
            uVar17 = *(undefined8*)( param_1 + 0xe10 );
            local_b8 = (StringName*)0x0;
            String::parse_latin1((String*)&local_b8, "");
            local_c0 = 0;
            String::parse_latin1((String*)&local_c0, "Make Unique");
            TTR((String*)&local_b0, (String*)&local_c0);
            PopupMenu::add_item(uVar17, (String*)&local_b0, 6, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
            local_b0 = (StringName*)0x0;
            PopupMenu::add_separator(*(String**)( param_1 + 0xe10 ), iVar14);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
            uVar17 = *(undefined8*)( param_1 + 0xe10 );
            local_b8 = (StringName*)0x0;
            String::parse_latin1((String*)&local_b8, "");
            local_c0 = 0;
            String::parse_latin1((String*)&local_c0, "Open in Inspector");
            TTR((String*)&local_b0, (String*)&local_c0);
            PopupMenu::add_item(uVar17, (String*)&local_b0, 7, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
            uVar17 = Tree::get_item_rect(*(TreeItem**)( param_1 + 0xe18 ), param_2, 1);
            ( **(code**)( **(long**)( param_1 + 0xe18 ) + 0x2b0 ) )((Variant*)local_88);
            fVar18 = (float)uVar17 + 0.0;
            plVar3 = *(long**)( param_1 + 0xe10 );
            fVar16 = extraout_XMM1_Db + (float)( (ulong)uVar17 >> 0x20 );
            pcVar4 = *(code**)( *plVar3 + 0x240 );
            pVStack_a0 = (Variant*)0x0;
            local_a8 = (Variant*)CONCAT44(fVar16 * SUB84(local_88._8_8_, 4) + fVar18 * SUB84(local_88._0_8_, 4) + (float)( (ulong)local_78 >> 0x20 ), fVar16 * (float)local_88._8_8_ + fVar18 * (float)local_88._0_8_ + (float)local_78);
            local_88 = Rect2::operator_cast_to_Rect2i((Rect2*)&local_a8);
            ( *pcVar4 )(plVar3, (Variant*)local_88);
            StringName::operator =((StringName*)( param_1 + 0xdb8 ), (StringName*)&local_e8);
            StringName::operator =((StringName*)( param_1 + 0xdc0 ), (StringName*)&local_f0);
         }
 else if (param_4 == 2) {
            pOVar12 = (Object*)EditorUndoRedoManager::get_singleton();
            StringName::StringName((StringName*)&local_b8, (StringName*)&local_e8);
            local_c8 = (long*)0x0;
            String::parse_latin1((String*)&local_c8, "");
            local_d0 = 0;
            String::parse_latin1((String*)&local_d0, "Remove Animation from Library: %s");
            TTR((String*)&local_c0, (String*)&local_d0);
            vformat<StringName>((CowData<char32_t>*)&local_b0, (String*)&local_c0, (StringName*)&local_b8);
            EditorUndoRedoManager::create_action(pOVar12, (CowData<char32_t>*)&local_b0, 0, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
            if (( StringName::configured != '\0' ) && ( local_b8 != (StringName*)0x0 )) {
               StringName::unref();
            }

            StringName::StringName((StringName*)&local_b0, (StringName*)&local_e8);
            StringName::StringName((StringName*)&local_b8, "remove_animation", false);
            pSVar11 = local_e0;
            Variant::Variant((Variant*)local_88, (StringName*)&local_b0);
            local_70[0] = 0;
            local_70[1] = 0;
            local_68 = (undefined1[16])0x0;
            local_a8 = (Variant*)local_88;
            EditorUndoRedoManager::add_do_methodp(pOVar12, pSVar11, (Variant**)&local_b8, (int)&local_a8);
            if (Variant::needs_deinit[local_70[0]] != '\0') {
               Variant::_clear_internal();
            }

            if (Variant::needs_deinit[(int)local_88._0_4_] != '\0') {
               Variant::_clear_internal();
            }

            if (( StringName::configured != '\0' ) && ( ( ( local_b8 == (StringName*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_b0 != (StringName*)0x0 ) ) )) {
               StringName::unref();
            }

            local_b0 = (StringName*)0x0;
            Ref<Animation>::operator =((Ref<Animation>*)&local_b0, (Ref*)local_d8);
            StringName::StringName((StringName*)&local_b8, (StringName*)&local_e8);
            StringName::StringName((StringName*)&local_c0, "add_animation", false);
            pSVar11 = local_e0;
            Variant::Variant((Variant*)local_88, (StringName*)&local_b8);
            Variant::Variant((Variant*)local_70, (Object*)local_b0);
            local_50 = (undefined1[16])0x0;
            local_58 = 0;
            pVVar15 = (Variant*)local_40;
            local_a8 = (Variant*)local_88;
            pVStack_a0 = (Variant*)local_70;
            EditorUndoRedoManager::add_undo_methodp(pOVar12, pSVar11, (Variant**)&local_c0, (int)&local_a8);
            do {
               pVVar1 = pVVar15 + -0x18;
               pVVar15 = pVVar15 + -0x18;
               if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                  Variant::_clear_internal();
               }

            }
 while ( pVVar15 != (Variant*)local_88 );
            if (( ( StringName::configured != '\0' ) && ( ( local_c0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_b8 != (StringName*)0x0 )) {
               StringName::unref();
            }

            Ref<Animation>::unref((Ref<Animation>*)&local_b0);
            pAVar5 = *(AnimationMixer**)( param_1 + 0xe20 );
            StringName::StringName((StringName*)&local_b0, "_update_editor", false);
            EditorUndoRedoManager::add_do_method<AnimationMixer*>((EditorUndoRedoManager*)pOVar12, (Object*)param_1, (StringName*)&local_b0, pAVar5);
            if (( StringName::configured != '\0' ) && ( local_b0 != (StringName*)0x0 )) {
               StringName::unref();
            }

            pAVar5 = *(AnimationMixer**)( param_1 + 0xe20 );
            StringName::StringName((StringName*)&local_b0, "_update_editor", false);
            EditorUndoRedoManager::add_undo_method<AnimationMixer*>((EditorUndoRedoManager*)pOVar12, (Object*)param_1, (StringName*)&local_b0, pAVar5);
            if (( StringName::configured != '\0' ) && ( local_b0 != (StringName*)0x0 )) {
               StringName::unref();
            }

            EditorUndoRedoManager::commit_action(SUB81(pOVar12, 0));
         }
 else if (param_4 == 0) {
            Resource::get_name();
            cVar8 = String::operator ==((String*)&local_b0, "");
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
            pSVar2 = local_d8;
            if (cVar8 != '\0') {
               if (local_e8 == (StringName*)0x0) {
                  local_b0 = (StringName*)0x0;
               }
 else {
                  local_b0 = (StringName*)0x0;
                  if (*(char**)( local_e8 + 8 ) == (char*)0x0) {
                     if (*(long*)( local_e8 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_b0, (CowData*)( local_e8 + 0x10 ));
                     }

                  }
 else {
                     String::parse_latin1((String*)&local_b0, *(char**)( local_e8 + 8 ));
                  }

               }

               Resource::set_name(pSVar2);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
            }

            lVar9 = EditorSettings::get_singleton();
            local_b8 = (StringName*)0x0;
            if (( local_d8 == (String*)0x0 ) || ( pSVar11 = (StringName*)__dynamic_cast(local_d8, &Object::typeinfo, &Resource::typeinfo, 0) ),pSVar11 == (StringName*)0x0) {
               LAB_001074cc:pSVar11 = *(StringName**)( lVar9 + 0x300 );
               if (pSVar11 != (StringName*)0x0) {
                  *(undefined8*)( lVar9 + 0x300 ) = 0;
                  local_b0 = pSVar11;
                  LAB_001074eb:Ref<Resource>::unref((Ref<Resource>*)&local_b0);
               }

            }
 else {
               local_b8 = pSVar11;
               cVar8 = RefCounted::reference();
               if (cVar8 == '\0') {
                  local_b8 = (StringName*)0x0;
                  goto LAB_001074cc;
               }

               pSVar6 = *(StringName**)( lVar9 + 0x300 );
               if (pSVar11 != pSVar6) {
                  *(StringName**)( lVar9 + 0x300 ) = pSVar11;
                  local_b0 = pSVar6;
                  cVar8 = RefCounted::reference();
                  if (cVar8 == '\0') {
                     *(undefined8*)( lVar9 + 0x300 ) = 0;
                  }

                  goto LAB_001074eb;
               }

            }

            Ref<Resource>::unref((Ref<Resource>*)&local_b8);
         }

         Ref<Animation>::unref((Ref<Animation>*)&local_d8);
         Ref<AnimationLibrary>::unref((Ref<AnimationLibrary>*)&local_e0);
         if (StringName::configured != '\0') {
            if (local_e8 != (StringName*)0x0) {
               StringName::unref();
               if (StringName::configured == '\0') goto LAB_001070d7;
            }

            if (local_f0 != (Ref*)0x0) {
               StringName::unref();
            }

         }

         LAB_001070d7:if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return;
      }

      /* AnimationLibraryEditor::_add_library_confirm() */
      void AnimationLibraryEditor::_add_library_confirm(AnimationLibraryEditor *this) {
         Variant *pVVar1;
         AnimationMixer *pAVar2;
         StringName *pSVar3;
         char cVar4;
         Object *pOVar5;
         Animation *this_00;
         Variant *pVVar6;
         AnimationLibrary *this_01;
         long in_FS_OFFSET;
         long local_f0;
         StringName *local_e8;
         Animation *local_e0;
         undefined8 local_d8;
         undefined8 local_d0;
         long local_c8;
         Animation *local_c0;
         Animation *local_b8;
         undefined8 local_b0;
         Variant *local_a8;
         Variant *pVStack_a0;
         int local_88[6];
         int local_70[2];
         undefined1 local_68[16];
         undefined8 local_58;
         undefined1 local_50[16];
         long local_40[2];
         local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
         if (this[0xde0] == (AnimationLibraryEditor)0x0) {
            LineEdit::get_text();
            pOVar5 = (Object*)EditorUndoRedoManager::get_singleton();
            local_e0 = (Animation*)0x0;
            this_01 = (AnimationLibrary*)operator_new(0x270, "");
            AnimationLibrary::AnimationLibrary(this_01);
            postinitialize_handler((Object*)this_01);
            local_b8 = (Animation*)0x0;
            local_c0 = (Animation*)this_01;
            cVar4 = RefCounted::init_ref();
            if (cVar4 == '\0') {
               this_01 = (AnimationLibrary*)0x0;
               local_c0 = (Animation*)0x0;
               Ref<AnimationLibrary>::unref((Ref<AnimationLibrary>*)&local_b8);
            }
 else {
               Ref<AnimationLibrary>::unref((Ref<AnimationLibrary>*)&local_b8);
               local_b8 = (Animation*)0x0;
               local_e0 = (Animation*)this_01;
               cVar4 = RefCounted::reference();
               if (cVar4 == '\0') {
                  local_e0 = (Animation*)0x0;
                  this_01 = (AnimationLibrary*)0x0;
               }

               Ref<AnimationLibrary>::unref((Ref<AnimationLibrary>*)&local_b8);
            }

            Ref<AnimationLibrary>::unref((Ref<AnimationLibrary>*)&local_c0);
            local_c0 = (Animation*)0x0;
            if (local_e8 != (StringName*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_c0, (CowData*)&local_e8);
            }

            local_b8 = (Animation*)&_LC0;
            local_d0 = 0;
            local_b0 = 0;
            String::parse_latin1((StrRange*)&local_d0);
            local_b8 = (Animation*)0x111529;
            local_d8 = 0;
            local_b0 = 0x19;
            String::parse_latin1((StrRange*)&local_d8);
            TTR((String*)&local_c8, (String*)&local_d8);
            vformat<String>((CowData<char32_t>*)&local_b8, (String*)&local_c8, (Ref<AnimationLibrary>*)&local_c0);
            EditorUndoRedoManager::create_action(pOVar5, (CowData<char32_t>*)&local_b8, 0, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
            local_c0 = (Animation*)0x0;
            if (this_01 != (AnimationLibrary*)0x0) {
               local_b8 = (Animation*)0x0;
               local_c0 = (Animation*)this_01;
               cVar4 = RefCounted::reference();
               if (cVar4 == '\0') {
                  local_c0 = (Animation*)0x0;
                  this_01 = (AnimationLibrary*)0x0;
               }

               Ref<AnimationLibrary>::unref((Ref<AnimationLibrary>*)&local_b8);
            }

            local_b8 = (Animation*)0x0;
            if (local_e8 != (StringName*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_e8);
            }

            StringName::StringName((StringName*)&local_c8, "add_animation_library", false);
            pSVar3 = *(StringName**)( this + 0xe20 );
            Variant::Variant((Variant*)local_88, (String*)&local_b8);
            Variant::Variant((Variant*)local_70, (Object*)this_01);
            local_50 = (undefined1[16])0x0;
            local_58 = 0;
            local_a8 = (Variant*)local_88;
            pVStack_a0 = (Variant*)local_70;
            EditorUndoRedoManager::add_do_methodp(pOVar5, pSVar3, (Variant**)&local_c8, (int)&local_a8);
            pVVar6 = (Variant*)local_40;
            do {
               pVVar1 = pVVar6 + -0x18;
               pVVar6 = pVVar6 + -0x18;
               if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                  Variant::_clear_internal();
               }

            }
 while ( pVVar6 != (Variant*)local_88 );
            if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
            Ref<AnimationLibrary>::unref((Ref<AnimationLibrary>*)&local_c0);
            local_b8 = (Animation*)0x0;
            if (local_e8 != (StringName*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_e8);
            }

            StringName::StringName((StringName*)&local_c0, "remove_animation_library", false);
            pSVar3 = *(StringName**)( this + 0xe20 );
            Variant::Variant((Variant*)local_88, (String*)&local_b8);
            local_70[0] = 0;
            local_70[1] = 0;
            local_68 = (undefined1[16])0x0;
            local_a8 = (Variant*)local_88;
            EditorUndoRedoManager::add_undo_methodp(pOVar5, pSVar3, (Variant**)&local_c0, (int)&local_a8);
            if (Variant::needs_deinit[local_70[0]] != '\0') {
               Variant::_clear_internal();
            }

            if (Variant::needs_deinit[local_88[0]] != '\0') {
               Variant::_clear_internal();
            }

            if (( StringName::configured != '\0' ) && ( local_c0 != (Animation*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
            pAVar2 = *(AnimationMixer**)( this + 0xe20 );
            StringName::StringName((StringName*)&local_b8, "_update_editor", false);
            EditorUndoRedoManager::add_do_method<AnimationMixer*>((EditorUndoRedoManager*)pOVar5, (Object*)this, (StringName*)&local_b8, pAVar2);
            if (( StringName::configured != '\0' ) && ( local_b8 != (Animation*)0x0 )) {
               StringName::unref();
            }

            pAVar2 = *(AnimationMixer**)( this + 0xe20 );
            StringName::StringName((StringName*)&local_b8, "_update_editor", false);
            EditorUndoRedoManager::add_undo_method<AnimationMixer*>((EditorUndoRedoManager*)pOVar5, (Object*)this, (StringName*)&local_b8, pAVar2);
            if (( StringName::configured != '\0' ) && ( local_b8 != (Animation*)0x0 )) {
               StringName::unref();
            }

            EditorUndoRedoManager::commit_action(SUB81(pOVar5, 0));
            Ref<AnimationLibrary>::unref((Ref<AnimationLibrary>*)&local_e0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
            goto LAB_001091e6;
         }

         LineEdit::get_text();
         pOVar5 = (Object*)EditorUndoRedoManager::get_singleton();
         AnimationMixer::get_animation_library((StringName*)&local_e8);
         if (local_e8 == (StringName*)0x0) {
            _err_print_error("_add_library_confirm", "editor/plugins/animation_library_editor.cpp", 0x6c, "Condition \"al.is_null()\" is true.", 0, 0);
            Ref<AnimationLibrary>::unref((Ref<AnimationLibrary>*)&local_e8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
            goto LAB_001091e6;
         }

         local_e0 = (Animation*)0x0;
         this_00 = (Animation*)operator_new(0x310, "");
         Animation::Animation(this_00);
         postinitialize_handler((Object*)this_00);
         local_b8 = (Animation*)0x0;
         local_c0 = this_00;
         cVar4 = RefCounted::init_ref();
         if (cVar4 == '\0') {
            this_00 = (Animation*)0x0;
            local_c0 = (Animation*)0x0;
            Ref<Animation>::unref((Ref<Animation>*)&local_b8);
         }
 else {
            Ref<Animation>::unref((Ref<Animation>*)&local_b8);
            local_b8 = (Animation*)0x0;
            local_e0 = this_00;
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
               local_e0 = (Animation*)0x0;
               this_00 = (Animation*)0x0;
            }

            Ref<Animation>::unref((Ref<Animation>*)&local_b8);
         }

         Ref<Animation>::unref((Ref<Animation>*)&local_c0);
         local_c0 = (Animation*)0x0;
         if (local_f0 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_c0, (CowData*)&local_f0);
         }

         local_b8 = (Animation*)&_LC0;
         local_d0 = 0;
         local_b0 = 0;
         String::parse_latin1((StrRange*)&local_d0);
         local_b8 = (Animation*)0x1115de;
         local_d8 = 0;
         local_b0 = 0x1c;
         String::parse_latin1((StrRange*)&local_d8);
         TTR((String*)&local_c8, (String*)&local_d8);
         vformat<String>((CowData<char32_t>*)&local_b8, (String*)&local_c8, (Ref<Animation>*)&local_c0);
         EditorUndoRedoManager::create_action(pOVar5, (CowData<char32_t>*)&local_b8, 0, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
         if (this_00 == (Animation*)0x0) {
            LAB_001096b0:local_b8 = (Animation*)0x0;
            this_00 = (Animation*)0x0;
         }
 else {
            local_b8 = this_00;
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') goto LAB_001096b0;
         }

         local_c0 = (Animation*)0x0;
         if (local_f0 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_c0, (CowData*)&local_f0);
         }

         StringName::StringName((StringName*)&local_c8, "add_animation", false);
         pSVar3 = local_e8;
         Variant::Variant((Variant*)local_88, (String*)&local_c0);
         Variant::Variant((Variant*)local_70, (Object*)this_00);
         local_50 = (undefined1[16])0x0;
         local_58 = 0;
         local_a8 = (Variant*)local_88;
         pVStack_a0 = (Variant*)local_70;
         EditorUndoRedoManager::add_do_methodp(pOVar5, pSVar3, (Variant**)&local_c8, (int)&local_a8);
         pVVar6 = (Variant*)local_40;
         do {
            pVVar1 = pVVar6 + -0x18;
            pVVar6 = pVVar6 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar6 != (Variant*)local_88 );
         if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
         Ref<Animation>::unref((Ref<Animation>*)&local_b8);
         local_b8 = (Animation*)0x0;
         if (local_f0 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_f0);
         }

         StringName::StringName((StringName*)&local_c0, "remove_animation", false);
         Variant::Variant((Variant*)local_88, (String*)&local_b8);
         local_70[0] = 0;
         local_70[1] = 0;
         local_68 = (undefined1[16])0x0;
         local_a8 = (Variant*)local_88;
         EditorUndoRedoManager::add_undo_methodp(pOVar5, local_e8, (Variant**)&local_c0, (int)&local_a8);
         if (Variant::needs_deinit[local_70[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_88[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (( StringName::configured != '\0' ) && ( local_c0 != (Animation*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
         pAVar2 = *(AnimationMixer**)( this + 0xe20 );
         StringName::StringName((StringName*)&local_b8, "_update_editor", false);
         EditorUndoRedoManager::add_do_method<AnimationMixer*>((EditorUndoRedoManager*)pOVar5, (Object*)this, (StringName*)&local_b8, pAVar2);
         if (( StringName::configured != '\0' ) && ( local_b8 != (Animation*)0x0 )) {
            StringName::unref();
         }

         pAVar2 = *(AnimationMixer**)( this + 0xe20 );
         StringName::StringName((StringName*)&local_b8, "_update_editor", false);
         EditorUndoRedoManager::add_undo_method<AnimationMixer*>((EditorUndoRedoManager*)pOVar5, (Object*)this, (StringName*)&local_b8, pAVar2);
         if (( StringName::configured != '\0' ) && ( local_b8 != (Animation*)0x0 )) {
            StringName::unref();
         }

         EditorUndoRedoManager::commit_action(SUB81(pOVar5, 0));
         Ref<Animation>::unref((Ref<Animation>*)&local_e0);
         Ref<AnimationLibrary>::unref((Ref<AnimationLibrary>*)&local_e8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
         LAB_001091e6:if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* AnimationLibraryEditor::_bind_methods() */
      void AnimationLibraryEditor::_bind_methods(void) {
         long lVar1;
         code *pcVar2;
         undefined1 auVar3[16];
         undefined8 uVar4;
         int *piVar5;
         MethodBind *pMVar6;
         long *plVar7;
         int *piVar8;
         long lVar9;
         long in_FS_OFFSET;
         undefined8 local_f8;
         long local_f0;
         char *local_e8;
         undefined8 local_e0;
         char *local_d8;
         undefined8 local_d0;
         undefined1 local_c8[16];
         undefined8 local_b8;
         undefined8 local_b0;
         undefined8 local_a8;
         undefined8 local_a0;
         undefined8 local_98[2];
         int *local_88;
         undefined8 local_80;
         long local_70;
         char *local_68;
         undefined8 local_60;
         char **local_58;
         undefined1 local_50[16];
         long local_40;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         local_60 = 0;
         local_68 = "mixer";
         local_58 = &local_68;
         D_METHODP((char*)&local_d8, (char***)"_update_editor", ( uint ) & local_58);
         local_50 = (undefined1[16])0x0;
         local_58 = (char**)0x0;
         pMVar6 = create_method_bind<AnimationLibraryEditor,Object*>(_update_editor);
         ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_d8, (Variant**)0x0, 0);
         if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
         }

         uVar4 = local_c8._0_8_;
         if ((long*)local_c8._0_8_ != (long*)0x0) {
            LOCK();
            plVar7 = (long*)( local_c8._0_8_ + -0x10 );
            *plVar7 = *plVar7 + -1;
            UNLOCK();
            if (*plVar7 == 0) {
               if ((long*)local_c8._0_8_ == (long*)0x0) {
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

               lVar1 = *(long*)( local_c8._0_8_ + -8 );
               auVar3._8_8_ = 0;
               auVar3._0_8_ = local_c8._8_8_;
               local_c8 = auVar3 << 0x40;
               if (lVar1 != 0) {
                  lVar9 = 0;
                  plVar7 = (long*)uVar4;
                  do {
                     if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                        StringName::unref();
                     }

                     lVar9 = lVar9 + 1;
                     plVar7 = plVar7 + 1;
                  }
 while ( lVar1 != lVar9 );
               }

               Memory::free_static((long*)( uVar4 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
            StringName::unref();
         }

         local_f0 = 0;
         local_d8 = "update_editor";
         local_d0 = 0xd;
         String::parse_latin1((StrRange*)&local_f0);
         local_d8 = (char*)0x0;
         local_d0 = 0;
         local_b8 = 0;
         local_b0 = 0;
         local_a8 = 6;
         local_a0 = 1;
         local_98[0] = 0;
         local_88 = (int*)0x0;
         local_80 = 0;
         local_70 = 0;
         local_c8 = (undefined1[16])0x0;
         if (local_f0 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_f0);
         }

         local_f8 = 0;
         local_e0 = 0x16;
         local_e8 = "AnimationLibraryEditor";
         String::parse_latin1((StrRange*)&local_f8);
         StringName::StringName((StringName*)&local_e8, (String*)&local_f8, false);
         ClassDB::add_signal((StringName*)&local_e8, (MethodInfo*)&local_d8);
         if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         lVar1 = local_70;
         if (local_70 != 0) {
            LOCK();
            plVar7 = (long*)( local_70 + -0x10 );
            *plVar7 = *plVar7 + -1;
            UNLOCK();
            if (*plVar7 == 0) {
               local_70 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         piVar5 = local_88;
         if (local_88 != (int*)0x0) {
            LOCK();
            plVar7 = (long*)( local_88 + -4 );
            *plVar7 = *plVar7 + -1;
            UNLOCK();
            if (*plVar7 == 0) {
               if (local_88 == (int*)0x0) {
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

               lVar1 = *(long*)( local_88 + -2 );
               local_88 = (int*)0x0;
               if (lVar1 != 0) {
                  lVar9 = 0;
                  piVar8 = piVar5;
                  do {
                     if (Variant::needs_deinit[*piVar8] != '\0') {
                        Variant::_clear_internal();
                     }

                     lVar9 = lVar9 + 1;
                     piVar8 = piVar8 + 6;
                  }
 while ( lVar1 != lVar9 );
               }

               Memory::free_static(piVar5 + -4, false);
            }

         }

         List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
         if (( StringName::configured != '\0' ) && ( local_c8._8_8_ != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* CowData<String>::_copy_on_write() [clone .isra.0] */
      void CowData<String>::_copy_on_write(CowData<String> *this) {
         CowData *pCVar1;
         long lVar2;
         long lVar3;
         code *pcVar4;
         undefined8 *puVar5;
         long lVar6;
         ulong uVar7;
         CowData<char32_t> *this_00;
         if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
            return;
         }

         if (*(long*)this == 0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar2 = *(long*)( *(long*)this + -8 );
         uVar7 = 0x10;
         if (lVar2 * 8 != 0) {
            uVar7 = lVar2 * 8 - 1;
            uVar7 = uVar7 | uVar7 >> 1;
            uVar7 = uVar7 | uVar7 >> 2;
            uVar7 = uVar7 | uVar7 >> 4;
            uVar7 = uVar7 | uVar7 >> 8;
            uVar7 = uVar7 | uVar7 >> 0x10;
            uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
         }

         puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
         if (puVar5 != (undefined8*)0x0) {
            lVar6 = 0;
            *puVar5 = 1;
            puVar5[1] = lVar2;
            this_00 = (CowData<char32_t>*)( puVar5 + 2 );
            if (lVar2 != 0) {
               do {
                  lVar3 = *(long*)this;
                  *(undefined8*)this_00 = 0;
                  pCVar1 = (CowData*)( lVar3 + lVar6 * 8 );
                  if (*(long*)pCVar1 != 0) {
                     CowData<char32_t>::_ref(this_00, pCVar1);
                  }

                  lVar6 = lVar6 + 1;
                  this_00 = this_00 + 8;
               }
 while ( lVar2 != lVar6 );
            }

            _unref(this);
            *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar5 + 2 );
            return;
         }

         _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
         return;
      }

      /* Vector<String>::push_back(String) [clone .isra.0] */
      void Vector<String>::push_back(Vector<String> *this, CowData *param_2) {
         CowData<char32_t> *this_00;
         int iVar1;
         long lVar2;
         long lVar3;
         if (*(long*)( this + 8 ) == 0) {
            lVar2 = 1;
         }
 else {
            lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
         }

         iVar1 = CowData<String>::resize<false>((CowData<String>*)( this + 8 ), lVar2);
         if (iVar1 == 0) {
            if (*(long*)( this + 8 ) == 0) {
               lVar3 = -1;
               lVar2 = 0;
            }
 else {
               lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
               lVar3 = lVar2 + -1;
               if (-1 < lVar3) {
                  CowData<String>::_copy_on_write((CowData<String>*)( this + 8 ));
                  this_00 = (CowData<char32_t>*)( *(long*)( this + 8 ) + lVar3 * 8 );
                  if (*(long*)this_00 == *(long*)param_2) {
                     return;
                  }

                  CowData<char32_t>::_ref(this_00, param_2);
                  return;
               }

            }

            _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
            return;
         }

         _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
         return;
      }

      /* AnimationLibraryEditor::_save_mixer_lib_folding(TreeItem*) */
      void AnimationLibraryEditor::_save_mixer_lib_folding(TreeItem *param_1) {
         long *plVar1;
         CowData<char32_t> *pCVar2;
         StringName *pSVar3;
         String *pSVar4;
         char cVar5;
         int iVar6;
         int iVar7;
         long lVar8;
         long lVar9;
         long lVar10;
         long lVar11;
         bool bVar12;
         String *pSVar13;
         long lVar14;
         long *plVar15;
         long in_FS_OFFSET;
         CowData<String> *local_118;
         String *local_e0;
         String local_d8[8];
         CowData<char32_t> local_d0[8];
         long local_c8;
         long local_c0;
         undefined8 local_b8;
         long local_b0;
         NodePath local_a8[8];
         long local_a0;
         CowData<char32_t> local_98[8];
         long local_90;
         long local_88;
         long local_80;
         undefined8 local_78;
         undefined1 local_70[16];
         int local_58[6];
         long local_40;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         TreeItem::get_parent();
         lVar8 = TreeItem::get_parent();
         if (lVar8 == 0) {
            local_e0 = (String*)0x0;
            Ref<ConfigFile>::instantiate<>((Ref<ConfigFile>*)&local_e0);
            EditorPaths::get_project_settings_dir();
            local_88 = 0;
            String::parse_latin1((String*)&local_88, "lib_folding.cfg");
            String::path_join(local_d8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            CowData<char32_t>::_unref(local_98);
            pSVar4 = local_e0;
            iVar6 = ConfigFile::load(local_e0);
            if (( iVar6 != 0 ) && ( iVar6 != 7 )) {
               itos((long)local_98);
               operator+((char *)&
               local_88,(String*)"Error loading lib_folding.cfg: ";
               _err_print_error("_save_mixer_lib_folding", "editor/plugins/animation_library_editor.cpp", 800, (String*)&local_88, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
               CowData<char32_t>::_unref(local_98);
            }

            Node::get_path();
            NodePath::operator_cast_to_String((NodePath*)local_98);
            if (*(long*)( *(long*)( param_1 + 0xe20 ) + 0x240 ) == 0) {
               _err_print_error("get_tree", "./scene/main/node.h", 0x1e5, "Parameter \"data.tree\" is null.", 0, 0);
            }

            SceneTree::get_edited_scene_root();
            Node::get_scene_file_path();
            String::operator +((String*)&local_88, (String*)&local_b0);
            String::md5_text();
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
            CowData<char32_t>::_unref(local_98);
            NodePath::~NodePath(local_a8);
            local_a0 = 0;
            local_90 = 0;
            cVar5 = ConfigFile::has_section(pSVar4);
            if (cVar5 != '\0') {
               local_78 = 0;
               local_70 = (undefined1[16])0x0;
               local_b8 = 0;
               String::parse_latin1((String*)&local_b8, "folding");
               ConfigFile::get_value((String*)local_58, pSVar4, (Variant*)local_d0);
               Variant::operator_cast_to_String((Variant*)&local_b0);
               bVar12 = SUB81((CowData<char32_t>*)&local_b0, 0);
               String::split((char*)&local_88, bVar12, 0x1116e3);
               if (local_a0 != local_80) {
                  CowData<String>::_unref((CowData<String>*)&local_a0);
                  local_a0 = local_80;
                  local_80 = 0;
               }

               CowData<String>::_unref((CowData<String>*)&local_80);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
               if (Variant::needs_deinit[(int)local_78] != '\0') {
                  Variant::_clear_internal();
               }

               local_78 = 0;
               local_70 = (undefined1[16])0x0;
               local_b8 = 0;
               String::parse_latin1((String*)&local_b8, "id");
               ConfigFile::get_value((String*)local_58, pSVar4, (Variant*)local_d0);
               Variant::operator_cast_to_String((Variant*)&local_b0);
               String::split((char*)&local_88, bVar12, 0x1116e3);
               if (local_90 != local_80) {
                  CowData<String>::_unref((CowData<String>*)&local_90);
                  local_90 = local_80;
                  local_80 = 0;
               }

               CowData<String>::_unref((CowData<String>*)&local_80);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
               if (Variant::needs_deinit[(int)local_78] != '\0') {
                  Variant::_clear_internal();
               }

            }

            local_118 = (CowData<String>*)&local_90;
            TreeItem::get_text((int)(String*)&local_c8);
            pSVar3 = *(StringName**)( param_1 + 0xe20 );
            local_c0 = 0;
            StringName::StringName((StringName*)&local_88, (String*)&local_c8, false);
            cVar5 = AnimationMixer::has_animation_library(pSVar3);
            if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
               StringName::unref();
            }

            pSVar13 = pSVar4;
            if (cVar5 == '\0') {
               iVar6 = 0;
               operator+((char *)&
               local_88,(String*)"Library not found: ";
               _err_print_error("_save_mixer_lib_folding", "editor/plugins/animation_library_editor.cpp", 0x339, (String*)&local_88, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
               LAB_0010a095:iVar7 = CowData<String>::find((CowData<String>*)&local_a0, (String*)&local_c8, 0);
               cVar5 = TreeItem::is_collapsed();
               if (cVar5 == '\0') {
                  if (iVar7 == -1) goto LAB_0010a140;
                  lVar8 = (long)iVar7;
                  if (lVar8 < 0) {
                     if (local_a0 == 0) {
                        _err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, lVar8, 0, "p_index", "size()", "", false, false);
                     }
 else {
                        LAB_0010ac66:_err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, lVar8, *(long*)( local_a0 + -8 ), "p_index", "size()", "", false, false);
                        if (-1 < lVar8) goto LAB_0010a8e8;
                     }

                     if (local_90 != 0) goto LAB_0010ace9;
                     lVar14 = 0;
                  }
 else {
                     if (local_a0 == 0) {
                        _err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, lVar8, 0, "p_index", "size()", "", false, false);
                     }
 else {
                        if (*(long*)( local_a0 + -8 ) <= lVar8) goto LAB_0010ac66;
                        CowData<String>::_copy_on_write((CowData<String>*)&local_a0);
                        if (local_a0 == 0) {
                           lVar14 = -1;
                        }
 else {
                           lVar14 = *(long*)( local_a0 + -8 ) + -1;
                           if (lVar8 < lVar14) {
                              plVar15 = (long*)( local_a0 + lVar8 * 8 );
                              lVar11 = lVar8;
                              do {
                                 lVar10 = *plVar15;
                                 lVar9 = plVar15[1];
                                 if (lVar10 != lVar9) {
                                    if (lVar10 != 0) {
                                       LOCK();
                                       plVar1 = (long*)( lVar10 + -0x10 );
                                       *plVar1 = *plVar1 + -1;
                                       UNLOCK();
                                       if (*plVar1 == 0) {
                                          lVar10 = *plVar15;
                                          *plVar15 = 0;
                                          Memory::free_static((void*)( lVar10 + -0x10 ), false);
                                       }

                                       lVar9 = plVar15[1];
                                    }

                                    *plVar15 = lVar9;
                                    plVar15[1] = 0;
                                 }

                                 lVar11 = lVar11 + 1;
                                 plVar15 = plVar15 + 1;
                              }
 while ( lVar11 != lVar14 );
                           }

                        }

                        CowData<String>::resize<false>((CowData<String>*)&local_a0, lVar14);
                     }

                     LAB_0010a8e8:pSVar13 = local_e0;
                     if (local_90 == 0) {
                        lVar14 = 0;
                     }
 else {
                        if (lVar8 < *(long*)( local_90 + -8 )) {
                           CowData<String>::_copy_on_write(local_118);
                           if (local_90 == 0) {
                              lVar14 = -1;
                           }
 else {
                              lVar11 = *(long*)( local_90 + -8 ) + -1;
                              lVar14 = lVar11;
                              if (lVar8 < lVar11) {
                                 plVar15 = (long*)( local_90 + lVar8 * 8 );
                                 do {
                                    lVar14 = *plVar15;
                                    lVar10 = plVar15[1];
                                    if (lVar14 != lVar10) {
                                       if (lVar14 != 0) {
                                          LOCK();
                                          plVar1 = (long*)( lVar14 + -0x10 );
                                          *plVar1 = *plVar1 + -1;
                                          UNLOCK();
                                          if (*plVar1 == 0) {
                                             lVar14 = *plVar15;
                                             *plVar15 = 0;
                                             Memory::free_static((void*)( lVar14 + -0x10 ), false);
                                          }

                                          lVar10 = plVar15[1];
                                       }

                                       *plVar15 = lVar10;
                                       plVar15[1] = 0;
                                    }

                                    lVar8 = lVar8 + 1;
                                    plVar15 = plVar15 + 1;
                                    lVar14 = lVar8;
                                 }
 while ( lVar11 != lVar8 );
                              }

                           }

                           CowData<String>::resize<false>(local_118, lVar14);
                           pSVar13 = local_e0;
                           goto LAB_0010a140;
                        }

                        LAB_0010ace9:lVar14 = *(long*)( local_90 + -8 );
                     }

                  }

                  _err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, lVar8, lVar14, "p_index", "size()", "", false, false);
               }
 else if (iVar7 == -1) {
                  String::num_int64((long)&local_88, iVar6, true);
                  iVar7 = CowData<String>::find(local_118, (String*)&local_88, 0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                  if (iVar7 == -1) {
                     local_88 = 0;
                     if (local_c8 != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, (CowData*)&local_c8);
                     }

                     Vector<String>::push_back((Vector<String>*)local_a8, (String*)&local_88);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                     String::num_int64((long)&local_b0, iVar6, true);
                     local_88 = 0;
                     if (local_b0 != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, (CowData*)&local_b0);
                     }

                     Vector<String>::push_back((Vector<String>*)local_98, (String*)&local_88);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
                  }
 else {
                     lVar8 = (long)iVar7;
                     if (lVar8 < 0) {
                        if (local_a0 == 0) goto LAB_0010ad80;
                        LAB_0010ad38:lVar14 = *(long*)( local_a0 + -8 );
                     }
 else {
                        if (local_a0 != 0) {
                           if (*(long*)( local_a0 + -8 ) <= lVar8) goto LAB_0010ad38;
                           CowData<String>::_copy_on_write((CowData<String>*)&local_a0);
                           pCVar2 = (CowData<char32_t>*)( local_a0 + lVar8 * 8 );
                           if (*(long*)pCVar2 != local_c8) {
                              CowData<char32_t>::_ref(pCVar2, (CowData*)&local_c8);
                           }

                           goto LAB_0010a140;
                        }

                        LAB_0010ad80:lVar14 = 0;
                     }

                     _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar8, lVar14, "p_index", "size()", "", false, false);
                  }

               }
 else {
                  String::num_int64((long)&local_88, iVar6, true);
                  lVar8 = (long)iVar7;
                  if (lVar8 < 0) {
                     if (local_90 == 0) goto LAB_0010ac58;
                     LAB_0010ac10:lVar14 = *(long*)( local_90 + -8 );
                     LAB_0010ac14:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar8, lVar14, "p_index", "size()", "", false, false);
                  }
 else {
                     if (local_90 == 0) {
                        LAB_0010ac58:lVar14 = 0;
                        goto LAB_0010ac14;
                     }

                     if (*(long*)( local_90 + -8 ) <= lVar8) goto LAB_0010ac10;
                     CowData<String>::_copy_on_write(local_118);
                     pCVar2 = (CowData<char32_t>*)( local_90 + lVar8 * 8 );
                     if (*(long*)pCVar2 != local_88) {
                        CowData<char32_t>::_ref(pCVar2, (CowData*)&local_88);
                     }

                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
               }

               LAB_0010a140:if (*(long*)( *(long*)( param_1 + 0xe20 ) + 0x240 ) == 0) {
                  _err_print_error("get_tree", "./scene/main/node.h", 0x1e5, "Parameter \"data.tree\" is null.", 0, 0);
               }

               lVar8 = SceneTree::get_edited_scene_root();
               Variant::Variant((Variant*)local_58, *(ulong*)( lVar8 + 0x60 ));
               local_88 = 0;
               String::parse_latin1((String*)&local_88, "root");
               ConfigFile::set_value(pSVar4, (String*)local_d0, (Variant*)&local_88);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               Variant::Variant((Variant*)local_58, *(ulong*)( *(long*)( param_1 + 0xe20 ) + 0x60 ));
               local_88 = 0;
               String::parse_latin1((String*)&local_88, "mixer");
               ConfigFile::set_value(pSVar4, (String*)local_d0, (Variant*)&local_88);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               _get_mixer_signature();
               Variant::Variant((Variant*)local_58, (String*)&local_b0);
               local_88 = 0;
               String::parse_latin1((String*)&local_88, "mixer_signature");
               ConfigFile::set_value(pSVar4, (String*)local_d0, (Variant*)&local_88);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
               local_b8 = 0;
               String::parse_latin1((String*)&local_b8, "\n");
               String::join((Vector*)&local_b0);
               Variant::Variant((Variant*)local_58, (String*)&local_b0);
               local_88 = 0;
               String::parse_latin1((String*)&local_88, "folding");
               ConfigFile::set_value(pSVar4, (String*)local_d0, (Variant*)&local_88);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
               local_b8 = 0;
               String::parse_latin1((String*)&local_b8, "\n");
               String::join((Vector*)&local_b0);
               Variant::Variant((Variant*)local_58, (String*)&local_b0);
               local_88 = 0;
               String::parse_latin1((String*)&local_88, "id");
               ConfigFile::set_value(pSVar4, (String*)local_d0, (Variant*)&local_88);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
               iVar6 = ConfigFile::save(pSVar4);
               if (iVar6 != 0) {
                  itos((long)&local_b0);
                  operator+((char *)&
                  local_88,(String*)"Error saving lib_folding.cfg: ";
                  _err_print_error("_save_mixer_lib_folding", "editor/plugins/animation_library_editor.cpp", 0x361, (String*)&local_88, 0, 0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
               }

               Ref<AnimationLibrary>::unref((Ref<AnimationLibrary>*)&local_c0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
               CowData<String>::_unref(local_118);
               CowData<String>::_unref((CowData<String>*)&local_a0);
               CowData<char32_t>::_unref(local_d0);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_d8);
               if (( ( pSVar13 != (String*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pSVar13 + 0x140 ))(pSVar13);
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  LAB_0010a46d:Memory::free_static(pSVar13, false);
                  return;
               }

               goto LAB_0010ae35;
            }

         }
 else {
            StringName::StringName((StringName*)&local_b0, (String*)&local_c8, false);
            AnimationMixer::get_animation_library((StringName*)&local_88);
            lVar8 = local_88;
            if (local_88 != 0) {
               local_c0 = local_88;
               cVar5 = RefCounted::reference();
               if (cVar5 != '\0') {
                  Ref<AnimationLibrary>::unref((Ref<AnimationLibrary>*)&local_88);
                  if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                     StringName::unref();
                  }

                  iVar6 = (int)*(undefined8*)( lVar8 + 0x60 );
                  goto LAB_0010a095;
               }

               local_c0 = 0;
            }

            Ref<AnimationLibrary>::unref((Ref<AnimationLibrary>*)&local_88);
            if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
               StringName::unref();
            }

            _err_print_error("_save_mixer_lib_folding", "editor/plugins/animation_library_editor.cpp", 0x336, "Condition \"al.is_null()\" is true.", 0, 0);
            Ref<AnimationLibrary>::unref((Ref<AnimationLibrary>*)&local_c0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
            CowData<String>::_unref(local_118);
            CowData<String>::_unref((CowData<String>*)&local_a0);
            CowData<char32_t>::_unref(local_d0);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_d8);
            cVar5 = RefCounted::unreference();
            if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler((Object*)pSVar4) ),cVar5 != '\0') {
               ( **(code**)( *(long*)pSVar4 + 0x140 ) )(pSVar4);
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_0010a46d;
               goto LAB_0010ae35;
            }

         }

      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      LAB_0010ae35:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* AnimationLibraryEditor::_item_renamed() */
   void AnimationLibraryEditor::_item_renamed(AnimationLibraryEditor *this) {
      Variant *pVVar1;
      AnimationMixer *pAVar2;
      StringName *pSVar3;
      char cVar4;
      int iVar5;
      undefined8 uVar6;
      Object *this_00;
      long lVar7;
      long lVar8;
      int iVar9;
      Variant *pVVar10;
      Variant *pVVar11;
      long in_FS_OFFSET;
      long local_f0;
      long local_e8;
      long local_e0;
      StringName *local_d8;
      undefined8 local_d0;
      undefined8 local_c8;
      long local_c0;
      undefined8 local_b8;
      long local_b0;
      Variant *local_a8;
      Variant *pVStack_a0;
      int local_88[6];
      Variant local_70[24];
      undefined8 local_58;
      undefined1 local_50[16];
      long local_40[2];
      local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
      uVar6 = Tree::get_edited();
      TreeItem::get_text((int)(CowData<char32_t>*)&local_f0);
      iVar9 = (int)(Variant*)local_88;
      TreeItem::get_metadata(iVar9);
      Variant::operator_cast_to_String((Variant*)&local_e8);
      if (Variant::needs_deinit[local_88[0]] != '\0') {
         Variant::_clear_internal();
      }

      this_00 = (Object*)EditorUndoRedoManager::get_singleton();
      local_c8 = 0;
      if (local_f0 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_f0);
      }

      iVar5 = String::find_char((wchar32)(CowData<char32_t>*)&local_c8, 0x2f);
      if (iVar5 == -1) {
         local_c0 = 0;
         if (local_f0 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_c0, (CowData*)&local_f0);
         }

         iVar5 = String::find_char((wchar32)(CowData<char32_t>*)&local_c0, 0x3a);
         if (iVar5 == -1) {
            local_b8 = 0;
            if (local_f0 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_f0);
            }

            iVar5 = String::find_char((wchar32)(CowData<char32_t>*)&local_b8, 0x2c);
            if (iVar5 != -1) {
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
               goto LAB_0010af88;
            }

            local_b0 = 0;
            if (local_f0 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_b0, (CowData*)&local_f0);
            }

            iVar5 = String::find_char((wchar32)(CowData<char32_t>*)&local_b0, 0x5b);
            if (iVar5 == -1) {
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
               lVar7 = TreeItem::get_parent();
               lVar8 = Tree::get_root();
               if (lVar7 == lVar8) {
                  pSVar3 = *(StringName**)( this + 0xe20 );
                  StringName::StringName((StringName*)&local_b0, (String*)&local_f0, false);
                  cVar4 = AnimationMixer::has_animation_library(pSVar3);
                  if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                     StringName::unref();
                  }

                  if (cVar4 == '\0') {
                     local_b8 = 0;
                     if (local_f0 != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_f0);
                     }

                     local_c8 = 0;
                     String::parse_latin1((String*)&local_c8, "");
                     local_d0 = 0;
                     String::parse_latin1((String*)&local_d0, "Rename Animation Library: %s");
                     TTR((String*)&local_c0, (String*)&local_d0);
                     vformat<String>((CowData<char32_t>*)&local_b0, (CowData<char32_t>*)&local_c0, (CowData<char32_t>*)&local_b8);
                     EditorUndoRedoManager::create_action(this_00, (CowData<char32_t>*)&local_b0, 0, 0, 0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                     local_b0 = 0;
                     if (local_f0 != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_b0, (CowData*)&local_f0);
                     }

                     local_b8 = 0;
                     if (local_e8 != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_e8);
                     }

                     StringName::StringName((StringName*)&local_c0, "rename_animation_library", false);
                     pSVar3 = *(StringName**)( this + 0xe20 );
                     Variant::Variant((Variant*)local_88, (String*)&local_b8);
                     Variant::Variant(local_70, (String*)&local_b0);
                     local_50 = (undefined1[16])0x0;
                     local_58 = 0;
                     local_a8 = (Variant*)local_88;
                     pVStack_a0 = local_70;
                     EditorUndoRedoManager::add_do_methodp(this_00, pSVar3, (Variant**)&local_c0, (int)&local_a8);
                     pVVar11 = (Variant*)local_40;
                     pVVar10 = pVVar11;
                     do {
                        pVVar1 = pVVar10 + -0x18;
                        pVVar10 = pVVar10 + -0x18;
                        if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                           Variant::_clear_internal();
                        }

                     }
 while ( pVVar10 != (Variant*)local_88 );
                     if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
                     local_b0 = 0;
                     if (local_e8 != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_b0, (CowData*)&local_e8);
                     }

                     local_b8 = 0;
                     if (local_f0 != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_f0);
                     }

                     StringName::StringName((StringName*)&local_c0, "rename_animation_library", false);
                     pSVar3 = *(StringName**)( this + 0xe20 );
                     Variant::Variant((Variant*)local_88, (String*)&local_b8);
                     Variant::Variant(local_70, (String*)&local_b0);
                     local_50 = (undefined1[16])0x0;
                     local_58 = 0;
                     local_a8 = (Variant*)local_88;
                     pVStack_a0 = local_70;
                     EditorUndoRedoManager::add_undo_methodp(this_00, pSVar3, (Variant**)&local_c0, (int)&local_a8);
                     do {
                        pVVar10 = pVVar11 + -0x18;
                        pVVar11 = pVVar11 + -0x18;
                        if (Variant::needs_deinit[*(int*)pVVar10] != '\0') {
                           Variant::_clear_internal();
                        }

                     }
 while ( pVVar11 != (Variant*)local_88 );
                     if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
                     pAVar2 = *(AnimationMixer**)( this + 0xe20 );
                     StringName::StringName((StringName*)&local_b0, "_update_editor", false);
                     EditorUndoRedoManager::add_do_method<AnimationMixer*>((EditorUndoRedoManager*)this_00, (Object*)this, (StringName*)&local_b0, pAVar2);
                     if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                        StringName::unref();
                     }

                     pAVar2 = *(AnimationMixer**)( this + 0xe20 );
                     StringName::StringName((StringName*)&local_b0, "_update_editor", false);
                     EditorUndoRedoManager::add_undo_method<AnimationMixer*>((EditorUndoRedoManager*)this_00, (Object*)this, (StringName*)&local_b0, pAVar2);
                     if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                        StringName::unref();
                     }

                     this[0xe28] = (AnimationLibraryEditor)0x1;
                     EditorUndoRedoManager::commit_action(SUB81(this_00, 0));
                     this[0xe28] = (AnimationLibraryEditor)0x0;
                     Variant::Variant((Variant*)local_88, (String*)&local_f0);
                     TreeItem::set_metadata((int)uVar6, (Variant*)0x0);
                     if (Variant::needs_deinit[local_88[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     cVar4 = String::operator ==((String*)&local_f0, "");
                     if (cVar4 == '\0') {
                        local_b0 = 0;
                        String::parse_latin1((String*)&local_b0, "");
                        TreeItem::set_suffix(uVar6, 0, (CowData<char32_t>*)&local_b0);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
                     }
 else {
                        local_b8 = 0;
                        String::parse_latin1((String*)&local_b8, "");
                        local_c0 = 0;
                        String::parse_latin1((String*)&local_c0, "[Global]");
                        TTR((String*)&local_b0, (String*)&local_c0);
                        TreeItem::set_suffix(uVar6, 0, (CowData<char32_t>*)&local_b0);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                     }

                     goto LAB_0010afce;
                  }

               }
 else {
                  TreeItem::get_parent();
                  TreeItem::get_metadata(iVar9);
                  Variant::operator_cast_to_StringName((Variant*)&local_e0);
                  if (Variant::needs_deinit[local_88[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  AnimationMixer::get_animation_library((StringName*)&local_d8);
                  pSVar3 = local_d8;
                  if (local_d8 != (StringName*)0x0) {
                     StringName::StringName((StringName*)&local_b0, (String*)&local_f0, false);
                     cVar4 = AnimationLibrary::has_animation(pSVar3);
                     if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                        StringName::unref();
                     }

                     if (cVar4 == '\0') {
                        local_b8 = 0;
                        if (local_f0 != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_f0);
                        }

                        local_c8 = 0;
                        String::parse_latin1((String*)&local_c8, "");
                        local_d0 = 0;
                        String::parse_latin1((String*)&local_d0, "Rename Animation: %s");
                        TTR((String*)&local_c0, (String*)&local_d0);
                        vformat<String>((CowData<char32_t>*)&local_b0, (CowData<char32_t>*)&local_c0, (CowData<char32_t>*)&local_b8);
                        EditorUndoRedoManager::create_action(this_00, (CowData<char32_t>*)&local_b0, 0, 0, 0);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                        local_b0 = 0;
                        if (local_f0 != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_b0, (CowData*)&local_f0);
                        }

                        local_b8 = 0;
                        if (local_e8 != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_e8);
                        }

                        StringName::StringName((StringName*)&local_c0, "rename_animation", false);
                        pSVar3 = local_d8;
                        Variant::Variant((Variant*)local_88, (String*)&local_b8);
                        Variant::Variant(local_70, (String*)&local_b0);
                        local_50 = (undefined1[16])0x0;
                        local_58 = 0;
                        local_a8 = (Variant*)local_88;
                        pVStack_a0 = local_70;
                        EditorUndoRedoManager::add_do_methodp(this_00, pSVar3, (Variant**)&local_c0, (int)&local_a8);
                        pVVar11 = (Variant*)local_40;
                        pVVar10 = pVVar11;
                        do {
                           pVVar1 = pVVar10 + -0x18;
                           pVVar10 = pVVar10 + -0x18;
                           if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                              Variant::_clear_internal();
                           }

                        }
 while ( pVVar10 != (Variant*)local_88 );
                        if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
                           StringName::unref();
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
                        local_b0 = 0;
                        if (local_e8 != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_b0, (CowData*)&local_e8);
                        }

                        local_b8 = 0;
                        if (local_f0 != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_f0);
                        }

                        StringName::StringName((StringName*)&local_c0, "rename_animation", false);
                        Variant::Variant((Variant*)local_88, (String*)&local_b8);
                        Variant::Variant(local_70, (String*)&local_b0);
                        local_50 = (undefined1[16])0x0;
                        local_58 = 0;
                        local_a8 = (Variant*)local_88;
                        pVStack_a0 = local_70;
                        EditorUndoRedoManager::add_undo_methodp(this_00, local_d8, (Variant**)&local_c0, (int)&local_a8);
                        do {
                           pVVar10 = pVVar11 + -0x18;
                           pVVar11 = pVVar11 + -0x18;
                           if (Variant::needs_deinit[*(int*)pVVar10] != '\0') {
                              Variant::_clear_internal();
                           }

                        }
 while ( pVVar11 != (Variant*)local_88 );
                        if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
                           StringName::unref();
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
                        pAVar2 = *(AnimationMixer**)( this + 0xe20 );
                        StringName::StringName((StringName*)&local_b0, "_update_editor", false);
                        EditorUndoRedoManager::add_do_method<AnimationMixer*>((EditorUndoRedoManager*)this_00, (Object*)this, (StringName*)&local_b0, pAVar2);
                        if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                           StringName::unref();
                        }

                        pAVar2 = *(AnimationMixer**)( this + 0xe20 );
                        StringName::StringName((StringName*)&local_b0, "_update_editor", false);
                        EditorUndoRedoManager::add_undo_method<AnimationMixer*>((EditorUndoRedoManager*)this_00, (Object*)this, (StringName*)&local_b0, pAVar2);
                        if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                           StringName::unref();
                        }

                        this[0xe28] = (AnimationLibraryEditor)0x1;
                        EditorUndoRedoManager::commit_action(SUB81(this_00, 0));
                        this[0xe28] = (AnimationLibraryEditor)0x0;
                        Variant::Variant((Variant*)local_88, (String*)&local_f0);
                        TreeItem::set_metadata((int)uVar6, (Variant*)0x0);
                        if (Variant::needs_deinit[local_88[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                        Ref<AnimationLibrary>::unref((Ref<AnimationLibrary>*)&local_d8);
                        if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
                           StringName::unref();
                        }

                        goto LAB_0010afce;
                     }

                  }

                  Ref<AnimationLibrary>::unref((Ref<AnimationLibrary>*)&local_d8);
                  if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
                     StringName::unref();
                  }

               }

            }
 else {
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
            }

         }
 else {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         }

      }
 else {
         LAB_0010af88:CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      }

      local_b0 = 0;
      if (local_e8 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_b0, (CowData*)&local_e8);
      }

      TreeItem::set_text(uVar6, 0, (CowData<char32_t>*)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
      LAB_0010afce:_save_mixer_lib_folding((TreeItem*)this);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
      if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* Vector<unsigned long>::push_back(unsigned long) [clone .isra.0] */
   void Vector<unsigned_long>::push_back(Vector<unsigned_long> *this, ulong param_1) {
      int iVar1;
      long lVar2;
      long lVar3;
      if (*(long*)( this + 8 ) == 0) {
         lVar2 = 1;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
      }

      iVar1 = CowData<unsigned_long>::resize<false>((CowData<unsigned_long>*)( this + 8 ), lVar2);
      if (iVar1 == 0) {
         if (*(long*)( this + 8 ) == 0) {
            lVar3 = -1;
            lVar2 = 0;
         }
 else {
            lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
            lVar3 = lVar2 + -1;
            if (-1 < lVar3) {
               CowData<unsigned_long>::_copy_on_write((CowData<unsigned_long>*)( this + 8 ));
               *(ulong*)( *(long*)( this + 8 ) + lVar3 * 8 ) = param_1;
               return;
            }

         }

         _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
         return;
      }

      _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
      return;
   }

   /* AnimationLibraryEditor::_load_config_libs_folding(Vector<unsigned long>&, ConfigFile*, String) */
   void AnimationLibraryEditor::_load_config_libs_folding(AnimationLibraryEditor *this, Vector<unsigned_long> *param_1, String *param_2, Variant *param_4) {
      ulong uVar1;
      StringName *pSVar2;
      Object *pOVar3;
      char cVar4;
      ulong uVar5;
      long lVar6;
      long lVar7;
      String *pSVar8;
      long lVar9;
      String *pSVar10;
      long in_FS_OFFSET;
      String *local_f8;
      CowData<char32_t> *local_f0;
      long local_c8;
      undefined8 local_c0;
      String local_b8[8];
      Variant local_b0[8];
      undefined8 local_a8;
      long local_a0;
      undefined8 local_98;
      String *local_90;
      Object *local_88;
      long local_80;
      undefined8 local_78;
      undefined1 local_70[16];
      int local_58[6];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      Variant::Variant((Variant*)&local_78, 0);
      local_88 = (Object*)&_LC172;
      local_98 = 0;
      local_80 = 4;
      String::parse_latin1((StrRange*)&local_98);
      ConfigFile::get_value((String*)local_58, param_2, param_4);
      uVar5 = Variant::operator_cast_to_unsigned_long((Variant*)local_58);
      if (*(long*)( *(long*)( this + 0xe20 ) + 0x240 ) == 0) {
         _err_print_error("get_tree", "./scene/main/node.h", 0x1e5, "Parameter \"data.tree\" is null.", 0, 0);
      }

      lVar6 = SceneTree::get_edited_scene_root();
      uVar1 = *(ulong*)( lVar6 + 0x60 );
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      if (uVar5 == uVar1) {
         local_88 = (Object*)&_LC169;
         local_70 = (undefined1[16])0x0;
         local_78 = 0;
         local_a0 = 0;
         local_80 = 2;
         String::parse_latin1((StrRange*)&local_a0);
         ConfigFile::get_value((String*)local_58, param_2, param_4);
         Variant::operator_cast_to_String((Variant*)&local_98);
         String::split((char*)&local_88, SUB81((StrRange*)&local_98, 0), 0x1116e3);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         CowData<String>::_copy_on_write((CowData<String>*)&local_80);
         lVar9 = local_80;
         CowData<String>::_copy_on_write((CowData<String>*)&local_80);
         lVar6 = local_80;
         if (local_80 != 0) {
            lVar6 = local_80 + *(long*)( local_80 + -8 ) * 8;
         }

         for (; lVar9 != lVar6; lVar9 = lVar9 + 8) {
            lVar7 = String::to_int();
            Vector<unsigned_long>::push_back(param_1, lVar7 + 0x8000000000000000);
         }

         CowData<String>::_unref((CowData<String>*)&local_80);
      }
 else {
         Variant::Variant((Variant*)&local_78, "");
         local_88 = (Object*)0x1116db;
         local_a0 = 0;
         local_80 = 7;
         String::parse_latin1((StrRange*)&local_a0);
         ConfigFile::get_value((String*)local_58, param_2, param_4);
         Variant::operator_cast_to_String((Variant*)&local_88);
         String::split((char*)&local_98, SUB81((Variant*)&local_88, 0), 0x1116e3);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         CowData<String>::_copy_on_write((CowData<String>*)&local_90);
         pSVar10 = local_90;
         CowData<String>::_copy_on_write((CowData<String>*)&local_90);
         pSVar8 = local_90;
         if (local_90 != (String*)0x0) {
            pSVar8 = local_90 + *(long*)( local_90 + -8 ) * 8;
         }

         for (; pSVar10 != pSVar8; pSVar10 = pSVar10 + 8) {
            while (true) {
               pSVar2 = *(StringName**)( this + 0xe20 );
               StringName::StringName((StringName*)&local_88, pSVar10, false);
               cVar4 = AnimationMixer::has_animation_library(pSVar2);
               if (( StringName::configured != '\0' ) && ( local_88 != (Object*)0x0 )) {
                  StringName::unref();
               }

               if (cVar4 != '\0') break;
               local_c8 = 0;
               if (*(long*)pSVar10 == 0) {
                  Variant::Variant((Variant*)&local_78, "Can\'t find ");
                  local_c0 = 0;
               }
 else {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)pSVar10);
                  lVar6 = local_c8;
                  Variant::Variant((Variant*)&local_78, "Can\'t find ");
                  local_c0 = 0;
                  if (lVar6 != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_c0, (CowData*)&local_c8);
                  }

               }

               local_f0 = (CowData<char32_t>*)&local_c8;
               local_f8 = (String*)&local_c0;
               Variant::Variant((Variant*)local_58, local_f8);
               stringify_variants<char_const*>((Variant*)&local_a0, (char*)local_58);
               local_88 = (Object*)&_LC122;
               local_a8 = 0;
               local_80 = 1;
               String::parse_latin1((StrRange*)&local_a8);
               Variant::operator_cast_to_String(local_b0);
               String::operator +((String*)&local_88, (String*)local_b0);
               String::operator +(local_b8, (String*)&local_88);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_b0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               __print_line(local_b8);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_f8);
               if (Variant::needs_deinit[(int)local_78] != '\0') {
                  Variant::_clear_internal();
               }

               pSVar10 = pSVar10 + 8;
               CowData<char32_t>::_unref(local_f0);
               if (pSVar8 == pSVar10) goto LAB_0010c1aa;
            }
;
            StringName::StringName((StringName*)&local_a0, pSVar10, false);
            AnimationMixer::get_animation_library((StringName*)&local_88);
            Vector<unsigned_long>::push_back(param_1, *(ulong*)( local_88 + 0x60 ));
            if (( ( local_88 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar3 = local_88,cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
            Memory::free_static(pOVar3, false);
         }

         if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
            StringName::unref();
         }

      }

      LAB_0010c1aa:CowData<String>::_unref((CowData<String>*)&local_90);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* AnimationLibraryEditor::_load_mixer_libs_folding() */long AnimationLibraryEditor::_load_mixer_libs_folding(void) {
   ulong uVar1;
   String *pSVar2;
   char cVar3;
   int iVar4;
   ulong uVar5;
   long lVar6;
   undefined8 uVar7;
   AnimationLibraryEditor *in_RSI;
   long in_RDI;
   CowData *pCVar8;
   long in_FS_OFFSET;
   String *local_118;
   String local_110[8];
   long local_108;
   String local_100[8];
   long *local_f8;
   Variant local_f0[8];
   CowData<char32_t> local_e8[8];
   undefined8 local_e0;
   undefined8 local_d8;
   undefined8 local_d0;
   char *local_c8;
   undefined8 local_c0;
   int local_b8[8];
   undefined8 local_98;
   undefined1 local_90[16];
   undefined8 local_78;
   undefined1 local_70[16];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_118 = (String*)0x0;
   Ref<ConfigFile>::instantiate<>((Ref<ConfigFile>*)&local_118);
   EditorPaths::get_project_settings_dir();
   local_c8 = "lib_folding.cfg";
   local_d8 = 0;
   local_c0 = 0xf;
   String::parse_latin1((StrRange*)&local_d8);
   String::path_join(local_110);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   pSVar2 = local_118;
   iVar4 = ConfigFile::load(local_118);
   if (( iVar4 == 0 ) || ( iVar4 == 7 )) {
      Node::get_path();
      NodePath::operator_cast_to_String((NodePath*)&local_d8);
      if (*(long*)( *(long*)( in_RSI + 0xe20 ) + 0x240 ) == 0) {
         _err_print_error("get_tree", "./scene/main/node.h", 0x1e5, "Parameter \"data.tree\" is null.", 0, 0);
      }

      SceneTree::get_edited_scene_root();
      Node::get_scene_file_path();
      String::operator +((String*)&local_c8, (String*)local_e8);
      String::md5_text();
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      CowData<char32_t>::_unref(local_e8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
      NodePath::~NodePath((NodePath*)&local_e0);
      local_d0 = 0;
      cVar3 = ConfigFile::has_section(pSVar2);
      if (cVar3 == '\0') {
         uVar1 = *(ulong*)( *(long*)( in_RSI + 0xe20 ) + 0x60 );
         _get_mixer_signature();
         local_f8 = (long*)0x0;
         ConfigFile::get_sections((List*)pSVar2);
         if (( local_f8 != (long*)0x0 ) && ( pCVar8 = (CowData*)*local_f8 ),pCVar8 != (CowData*)0x0) {
            do {
               local_c8 = "mixer";
               local_50 = (undefined1[16])0x0;
               local_58 = 0;
               local_e0 = 0;
               local_c0 = 5;
               String::parse_latin1((StrRange*)&local_e0);
               ConfigFile::get_value((String*)local_b8, pSVar2, (Variant*)pCVar8);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
               if (Variant::needs_deinit[(int)local_58] != '\0') {
                  Variant::_clear_internal();
               }

               if (( local_b8[0] == 2 ) && ( uVar5 = Variant::operator_cast_to_unsigned_long((Variant*)local_b8) ),uVar5 == uVar1) {
                  LAB_0010c97d:local_c8 = (char*)0x0;
                  if (*(long*)pCVar8 != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, pCVar8);
                  }

                  _load_config_libs_folding(in_RSI, (StrRange*)&local_d8, pSVar2, (CowData<char32_t>*)&local_c8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
                  local_70 = (undefined1[16])0x0;
                  local_78 = 0;
                  local_c8 = (char*)0x0;
                  String::parse_latin1((String*)&local_c8, "folding");
                  ConfigFile::get_value((String*)&local_58, pSVar2, (Variant*)pCVar8);
                  Variant::operator_cast_to_String(local_f0);
                  if (Variant::needs_deinit[(int)local_58] != '\0') {
                     Variant::_clear_internal();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
                  if (Variant::needs_deinit[(int)local_78] != '\0') {
                     Variant::_clear_internal();
                  }

                  local_78 = 0;
                  local_70 = (undefined1[16])0x0;
                  local_c8 = (char*)0x0;
                  String::parse_latin1((String*)&local_c8, "id");
                  ConfigFile::get_value((String*)&local_58, pSVar2, (Variant*)pCVar8);
                  Variant::operator_cast_to_String((Variant*)local_e8);
                  if (Variant::needs_deinit[(int)local_58] != '\0') {
                     Variant::_clear_internal();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
                  if (Variant::needs_deinit[(int)local_78] != '\0') {
                     Variant::_clear_internal();
                  }

                  ConfigFile::erase_section(pSVar2);
                  if (*(long*)( *(long*)( in_RSI + 0xe20 ) + 0x240 ) == 0) {
                     _err_print_error("get_tree", "./scene/main/node.h", 0x1e5, "Parameter \"data.tree\" is null.", 0, 0);
                  }

                  lVar6 = SceneTree::get_edited_scene_root();
                  Variant::Variant((Variant*)&local_58, *(ulong*)( lVar6 + 0x60 ));
                  local_c8 = (char*)0x0;
                  String::parse_latin1((String*)&local_c8, "root");
                  ConfigFile::set_value(pSVar2, (String*)&local_108, (Variant*)&local_c8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
                  if (Variant::needs_deinit[(int)local_58] != '\0') {
                     Variant::_clear_internal();
                  }

                  Variant::Variant((Variant*)&local_58, *(ulong*)( *(long*)( in_RSI + 0xe20 ) + 0x60 ));
                  local_c8 = (char*)0x0;
                  String::parse_latin1((String*)&local_c8, "mixer");
                  ConfigFile::set_value(pSVar2, (String*)&local_108, (Variant*)&local_c8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
                  if (Variant::needs_deinit[(int)local_58] != '\0') {
                     Variant::_clear_internal();
                  }

                  _get_mixer_signature();
                  Variant::Variant((Variant*)&local_58, (String*)&local_e0);
                  local_c8 = (char*)0x0;
                  String::parse_latin1((String*)&local_c8, "mixer_signature");
                  ConfigFile::set_value(pSVar2, (String*)&local_108, (Variant*)&local_c8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
                  if (Variant::needs_deinit[(int)local_58] != '\0') {
                     Variant::_clear_internal();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
                  Variant::Variant((Variant*)&local_58, (String*)local_f0);
                  local_c8 = (char*)0x0;
                  String::parse_latin1((String*)&local_c8, "folding");
                  ConfigFile::set_value(pSVar2, (String*)&local_108, (Variant*)&local_c8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
                  if (Variant::needs_deinit[(int)local_58] != '\0') {
                     Variant::_clear_internal();
                  }

                  Variant::Variant((Variant*)&local_58, (String*)local_e8);
                  local_c8 = (char*)0x0;
                  String::parse_latin1((String*)&local_c8, "id");
                  ConfigFile::set_value(pSVar2, (String*)&local_108, (Variant*)&local_c8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
                  if (Variant::needs_deinit[(int)local_58] != '\0') {
                     Variant::_clear_internal();
                  }

                  iVar4 = ConfigFile::save(pSVar2);
                  if (iVar4 != 0) {
                     itos((long)&local_e0);
                     operator+((char *)&
                     local_c8,(String*)"Error saving lib_folding.cfg: ";
                     _err_print_error("_load_mixer_libs_folding", "editor/plugins/animation_library_editor.cpp", 0x392, (CowData<char32_t>*)&local_c8, 0, 0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
                  }

                  CowData<char32_t>::_unref(local_e8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_f0);
                  uVar7 = local_d0;
                  if (Variant::needs_deinit[local_b8[0]] != '\0') {
                     Variant::_clear_internal();
                     uVar7 = local_d0;
                  }

                  goto LAB_0010cd22;
               }

               Variant::Variant((Variant*)&local_58, local_100);
               local_90 = (undefined1[16])0x0;
               local_c8 = "mixer_signature";
               local_98 = 0;
               local_e0 = 0;
               local_c0 = 0xf;
               String::parse_latin1((StrRange*)&local_e0);
               ConfigFile::get_value((String*)&local_78, pSVar2, (Variant*)pCVar8);
               cVar3 = Variant::operator ==((Variant*)&local_78, (Variant*)&local_58);
               if (Variant::needs_deinit[(int)local_78] != '\0') {
                  Variant::_clear_internal();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
               if (Variant::needs_deinit[(int)local_98] != '\0') {
                  Variant::_clear_internal();
               }

               if (Variant::needs_deinit[(int)local_58] != '\0') {
                  Variant::_clear_internal();
               }

               if (cVar3 != '\0') goto LAB_0010c97d;
               if (Variant::needs_deinit[local_b8[0]] != '\0') {
                  Variant::_clear_internal();
               }

               pCVar8 = *(CowData**)( pCVar8 + 8 );
            }
 while ( pCVar8 != (CowData*)0x0 );
         }

         uVar7 = 0;
         LAB_0010cd22:List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_f8);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_100);
      }
 else {
         local_c8 = (char*)0x0;
         if (local_108 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_108);
         }

         _load_config_libs_folding(in_RSI, (StrRange*)&local_d8, pSVar2, (CowData<char32_t>*)&local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         uVar7 = local_d0;
      }

      *(undefined8*)( in_RDI + 8 ) = uVar7;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
      cVar3 = RefCounted::unreference();
   }
 else {
      itos((long)&local_d8);
      operator+((char *)&
      local_c8,(String*)"Error loading lib_folding.cfg: ";
      _err_print_error("_load_mixer_libs_folding", "editor/plugins/animation_library_editor.cpp", 0x36c, (CowData<char32_t>*)&local_c8, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
      *(undefined8*)( in_RDI + 8 ) = 0;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
      cVar3 = RefCounted::unreference();
   }

   if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler((Object*)pSVar2) ),cVar3 != '\0') {
      ( **(code**)( *(long*)pSVar2 + 0x140 ) )(pSVar2);
      Memory::free_static(pSVar2, false);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return in_RDI;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationLibraryEditor::update_tree() [clone .part.0] */void AnimationLibraryEditor::update_tree(void) {
   long *plVar1;
   Object *pOVar2;
   Object *pOVar3;
   ulong uVar4;
   List *pLVar5;
   char cVar6;
   int iVar7;
   int iVar8;
   int iVar9;
   undefined8 uVar10;
   long lVar11;
   undefined8 uVar12;
   int iVar13;
   uint uVar14;
   ulong *puVar15;
   ulong *puVar16;
   char *pcVar17;
   int iVar18;
   StringName *in_RDI;
   ulong *puVar19;
   long in_FS_OFFSET;
   bool bVar20;
   StringName *local_150;
   StringName *local_138;
   uint local_110;
   long *local_d8;
   List *local_d0;
   String local_c8[8];
   long *local_c0;
   Object *local_b8;
   long local_b0;
   long local_a8;
   Object *local_a0;
   long local_98;
   long local_90[2];
   ulong *local_80;
   Object *local_78;
   size_t local_70;
   undefined8 local_68[2];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if ((update_tree()::{lambda()
   #1
   ( iVar7 = __cxa_guard_acquire(&update_tree()::, {
         lambda()
         #1
         _scs_create((char *)&update_tree()::{lambda()
         #1
         __cxa_atexit(StringName::~StringName, &update_tree()::, {
               lambda()
               #1
               &__dso_handle;
               __cxa_guard_release(&update_tree()::{lambda()#1}::operator()()::sname);
  }
  local_68[0] = Window::get_theme_color
                          (in_RDI,(StringName *)&update_tree()::{lambda()
               #1
               iVar7 = Tree::create_item(*(TreeItem**)( in_RDI + 0xe18 ), 0);
               local_d8 = (long*)0x0;
               _load_mixer_libs_folding();
               AnimationMixer::get_animation_library_list(*(List**)( in_RDI + 0xe20 ));
               if (( local_d8 != (long*)0x0 ) && ( local_150 = (StringName*)*local_d8 ),local_150 != (StringName*)0x0) {
                  do {
      uVar10 = Tree::create_item(*(TreeItem **)(in_RDI + 0xe18),iVar7);
      lVar11 = *(long *)local_150;
      if (lVar11 == 0) {
        local_90[0] = 0;
      }
      else {
        pOVar3 = *(Object **)(lVar11 + 8);
        local_90[0] = 0;
        if (pOVar3 == (Object *)0x0) {
          if (*(long *)(lVar11 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)local_90,(CowData *)(lVar11 + 0x10));
          }
        }
        else {
          local_70 = strlen((char *)pOVar3);
          local_78 = pOVar3;
          String::parse_latin1((StrRange *)local_90);
        }
      }
      TreeItem::set_text(uVar10,0,(StrRange *)local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      local_90[0] = 0;
      local_78 = (Object *)&_LC0;
      local_70 = 0;
      if (*(long *)local_150 == 0) {
        String::parse_latin1((StrRange *)local_90);
        local_78 = (Object *)0x111751;
        local_98 = 0;
        local_70 = 8;
        String::parse_latin1((StrRange *)&local_98);
        TTR((String *)&local_78,(String *)&local_98);
        TreeItem::set_suffix(uVar10,0,(String *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      }
      else {
        String::parse_latin1((StrRange *)local_90);
        TreeItem::set_suffix(uVar10,0,(StrRange *)local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      }
      AnimationMixer::get_animation_library((StringName *)&local_d0);
      Resource::get_path();
      cVar6 = String::is_resource_file();
      local_90[0] = 0;
      iVar18 = (int)uVar10;
      iVar13 = (int)(StringName *)&local_a0;
      if (cVar6 == '\0') {
        local_70 = 0;
        local_78 = (Object *)&_LC0;
        String::parse_latin1((StrRange *)local_90);
        local_78 = (Object *)0x1117bf;
        local_98 = 0;
        local_70 = 10;
        String::parse_latin1((StrRange *)&local_98);
        TTR((String *)&local_78,(String *)&local_98);
        TreeItem::set_text(uVar10,1,(String *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
        TreeItem::set_tooltip_text(iVar18,(String *)0x1);
        iVar8 = String::find((char *)local_c8,0x111448);
        if (iVar8 == -1) {
LAB_0010e8ff:
          local_110 = 0;
        }
        else {
          String::substr(iVar13,(int)local_c8);
          ResourceLoader::get_resource_type((String *)&local_78);
          cVar6 = String::operator==((String *)&local_78,"PackedScene");
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          if (cVar6 == '\0') {
            local_90[0] = 0;
            String::parse_latin1((String *)local_90,".import");
            String::operator+((String *)&local_78,(String *)&local_a0);
            cVar6 = FileAccess::exists((String *)&local_78);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
            if (cVar6 != '\0') {
              local_90[0] = 0;
              String::parse_latin1((String *)local_90,"");
              pcVar17 = "[imported]";
              goto LAB_0010eb71;
            }
LAB_0010d2d4:
            local_110 = 0;
          }
          else {
            if (*(long *)(in_RDI + 0x240) == 0) {
              _err_print_error("get_tree","./scene/main/node.h",0x1e5,
                               "Parameter \"data.tree\" is null.",0,0);
            }
            lVar11 = SceneTree::get_edited_scene_root();
            if (lVar11 != 0) {
              if (*(long *)(in_RDI + 0x240) == 0) {
                _err_print_error("get_tree","./scene/main/node.h",0x1e5,
                                 "Parameter \"data.tree\" is null.",0,0);
              }
              SceneTree::get_edited_scene_root();
              Node::get_scene_file_path();
              cVar6 = String::operator!=((String *)&local_78,(String *)&local_a0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
              if (cVar6 == '\0') goto LAB_0010d2d4;
            }
            local_90[0] = 0;
            String::parse_latin1((String *)local_90,"");
            pcVar17 = "[foreign]";
LAB_0010eb71:
            local_98 = 0;
            String::parse_latin1((String *)&local_98,pcVar17);
            TTR((String *)&local_78,(String *)&local_98);
            TreeItem::set_text(uVar10,1,(String *)&local_78);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
            local_110 = 1;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        }
      }
      else {
        local_70 = 7;
        local_78 = (Object *)0x1117e0;
        String::parse_latin1((StrRange *)local_90);
        String::operator+((String *)&local_78,local_c8);
        cVar6 = FileAccess::exists((String *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
        if (cVar6 == '\0') {
          String::get_file();
          TreeItem::set_text(uVar10,1,(String *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          goto LAB_0010e8ff;
        }
        local_90[0] = 0;
        local_78 = (Object *)&_LC0;
        local_70 = 0;
        String::parse_latin1((StrRange *)local_90);
        local_78 = (Object *)0x1117e8;
        local_98 = 0;
        local_70 = 10;
        String::parse_latin1((StrRange *)&local_98);
        TTR((String *)&local_78,(String *)&local_98);
        TreeItem::set_text(uVar10,1,(String *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
        local_110 = 1;
      }
      TreeItem::set_editable(iVar18,false);
      Variant::Variant((Variant *)local_58,local_150);
      TreeItem::set_metadata(iVar18,(Variant *)0x0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      StringName::StringName((StringName *)local_90,"AnimationLibrary",false);
      Window::get_editor_theme_icon((StringName *)&local_78);
      TreeItem::set_icon(iVar18,(Ref *)0x0);
      if (((local_78 != (Object *)0x0) &&
          (cVar6 = RefCounted::unreference(), pOVar3 = local_78, cVar6 != '\0')) &&
         (cVar6 = predelete_handler(local_78), cVar6 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))();
        Memory::free_static(pOVar3,false);
      }
      if ((StringName::configured != '\0') && (local_90[0] != 0)) {
        StringName::unref();
      }
      local_90[0] = 0;
      local_78 = (Object *)&_LC0;
      local_70 = 0;
      String::parse_latin1((StrRange *)local_90);
      local_78 = (Object *)0x1117f3;
      local_98 = 0;
      local_70 = 0x19;
      String::parse_latin1((StrRange *)&local_98);
      TTR((String *)&local_78,(String *)&local_98);
      StringName::StringName((StringName *)&local_a8,"Add",false);
      Window::get_editor_theme_icon((StringName *)&local_a0);
      TreeItem::add_button(iVar18,(Ref *)0x0,iVar13,false,(String *)(ulong)local_110);
      if (((local_a0 != (Object *)0x0) &&
          (cVar6 = RefCounted::unreference(), pOVar3 = local_a0, cVar6 != '\0')) &&
         (cVar6 = predelete_handler(local_a0), cVar6 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))();
        Memory::free_static(pOVar3,false);
      }
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      local_78 = (Object *)&_LC0;
      local_90[0] = 0;
      local_70 = 0;
      String::parse_latin1((StrRange *)local_90);
      local_78 = (Object *)0x111ed8;
      local_98 = 0;
      local_70 = 0x2c;
      String::parse_latin1((StrRange *)&local_98);
      TTR((String *)&local_78,(String *)&local_98);
      StringName::StringName((StringName *)&local_a8,"Load",false);
      Window::get_editor_theme_icon((StringName *)&local_a0);
      TreeItem::add_button(iVar18,(Ref *)0x0,iVar13,true,(String *)(ulong)local_110);
      if (((local_a0 != (Object *)0x0) &&
          (cVar6 = RefCounted::unreference(), pOVar3 = local_a0, cVar6 != '\0')) &&
         (cVar6 = predelete_handler(local_a0), cVar6 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))();
        Memory::free_static(pOVar3,false);
      }
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      local_78 = (Object *)&_LC0;
      local_90[0] = 0;
      local_70 = 0;
      String::parse_latin1((StrRange *)local_90);
      local_78 = (Object *)0x111f08;
      local_98 = 0;
      local_70 = 0x2a;
      String::parse_latin1((StrRange *)&local_98);
      TTR((String *)&local_78,(String *)&local_98);
      StringName::StringName((StringName *)&local_a8,"ActionPaste",false);
      Window::get_editor_theme_icon((StringName *)&local_a0);
      TreeItem::add_button(iVar18,(Ref *)0x0,iVar13,true,(String *)(ulong)local_110);
      if (((local_a0 != (Object *)0x0) &&
          (cVar6 = RefCounted::unreference(), pOVar3 = local_a0, cVar6 != '\0')) &&
         (cVar6 = predelete_handler(local_a0), cVar6 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))();
        Memory::free_static(pOVar3,false);
      }
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      local_78 = (Object *)&_LC0;
      local_90[0] = 0;
      local_70 = 0;
      String::parse_latin1((StrRange *)local_90);
      local_78 = (Object *)0x111f38;
      local_98 = 0;
      local_70 = 0x2b;
      String::parse_latin1((StrRange *)&local_98);
      TTR((String *)&local_78,(String *)&local_98);
      StringName::StringName((StringName *)&local_a8,"Save",false);
      Window::get_editor_theme_icon((StringName *)&local_a0);
      TreeItem::add_button(iVar18,(Ref *)0x1,iVar13,true,(String *)0x0);
      if (((local_a0 != (Object *)0x0) &&
          (cVar6 = RefCounted::unreference(), pOVar3 = local_a0, cVar6 != '\0')) &&
         (cVar6 = predelete_handler(local_a0), cVar6 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))();
        Memory::free_static(pOVar3,false);
      }
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      local_78 = (Object *)&_LC0;
      local_90[0] = 0;
      local_70 = 0;
      String::parse_latin1((StrRange *)local_90);
      local_78 = (Object *)0x111819;
      local_98 = 0;
      local_70 = 0x19;
      String::parse_latin1((StrRange *)&local_98);
      TTR((String *)&local_78,(String *)&local_98);
      StringName::StringName((StringName *)&local_a8,"Remove",false);
      Window::get_editor_theme_icon((StringName *)&local_a0);
      TreeItem::add_button(iVar18,(Ref *)0x1,iVar13,true,(String *)0x0);
      if (((local_a0 != (Object *)0x0) &&
          (cVar6 = RefCounted::unreference(), pOVar3 = local_a0, cVar6 != '\0')) &&
         (cVar6 = predelete_handler(local_a0), cVar6 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))();
        Memory::free_static(pOVar3,false);
      }
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      TreeItem::set_custom_bg_color(iVar18,(Color *)0x0,SUB81(local_68,0));
      local_c0 = (long *)0x0;
      AnimationLibrary::get_animation_list(local_d0);
      if ((local_c0 != (long *)0x0) &&
         (local_138 = (StringName *)*local_c0, local_138 != (StringName *)0x0)) {
        do {
          uVar12 = Tree::create_item(*(TreeItem **)(in_RDI + 0xe18),iVar18);
          lVar11 = *(long *)local_138;
          if (lVar11 == 0) {
            local_90[0] = 0;
          }
          else {
            pOVar3 = *(Object **)(lVar11 + 8);
            local_90[0] = 0;
            if (pOVar3 == (Object *)0x0) {
              if (*(long *)(lVar11 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)local_90,(CowData *)(lVar11 + 0x10));
              }
            }
            else {
              local_70 = strlen((char *)pOVar3);
              local_78 = pOVar3;
              String::parse_latin1((StrRange *)local_90);
            }
          }
          TreeItem::set_text(uVar12,0,(StrRange *)local_90);
          lVar11 = local_90[0];
          if (local_90[0] != 0) {
            LOCK();
            plVar1 = (long *)(local_90[0] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_90[0] = 0;
              Memory::free_static((void *)(lVar11 + -0x10),false);
            }
          }
          iVar8 = (int)uVar12;
          TreeItem::set_editable(iVar8,false);
          Variant::Variant((Variant *)local_58,local_138);
          TreeItem::set_metadata(iVar8,(Variant *)0x0);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          StringName::StringName((StringName *)local_90,"Animation",false);
          Window::get_editor_theme_icon((StringName *)&local_78);
          TreeItem::set_icon(iVar8,(Ref *)0x0);
          if (((local_78 != (Object *)0x0) &&
              (cVar6 = RefCounted::unreference(), pOVar3 = local_78, cVar6 != '\0')) &&
             (cVar6 = predelete_handler(local_78), cVar6 != '\0')) {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
          if ((StringName::configured != '\0') && (local_90[0] != 0)) {
            StringName::unref();
          }
          local_90[0] = 0;
          local_78 = (Object *)&_LC0;
          local_70 = 0;
          String::parse_latin1((StrRange *)local_90);
          local_78 = (Object *)0x11183a;
          local_98 = 0;
          local_70 = 0x1c;
          String::parse_latin1((StrRange *)&local_98);
          TTR((String *)&local_78,(String *)&local_98);
          StringName::StringName((StringName *)&local_a8,"ActionCopy",false);
          Window::get_editor_theme_icon((StringName *)&local_a0);
          TreeItem::add_button(iVar8,(Ref *)0x0,iVar13,false,(String *)(ulong)local_110);
          if (((local_a0 != (Object *)0x0) &&
              (cVar6 = RefCounted::unreference(), pOVar3 = local_a0, cVar6 != '\0')) &&
             (cVar6 = predelete_handler(local_a0), cVar6 != '\0')) {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
          if ((StringName::configured != '\0') && (local_a8 != 0)) {
            StringName::unref();
          }
          pOVar3 = local_78;
          if (local_78 != (Object *)0x0) {
            LOCK();
            plVar1 = (long *)(local_78 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_78 = (Object *)0x0;
              Memory::free_static(pOVar3 + -0x10,false);
            }
          }
          lVar11 = local_98;
          if (local_98 != 0) {
            LOCK();
            plVar1 = (long *)(local_98 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_98 = 0;
              Memory::free_static((void *)(lVar11 + -0x10),false);
            }
          }
          lVar11 = local_90[0];
          if (local_90[0] != 0) {
            LOCK();
            plVar1 = (long *)(local_90[0] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_90[0] = 0;
              Memory::free_static((void *)(lVar11 + -0x10),false);
            }
          }
          AnimationLibrary::get_animation((StringName *)&local_b8);
          Resource::get_path();
          cVar6 = String::is_resource_file();
          local_90[0] = 0;
          if (cVar6 == '\0') {
            local_70 = 0;
            local_78 = (Object *)&_LC0;
            String::parse_latin1((StrRange *)local_90);
            local_78 = (Object *)0x1117bf;
            local_98 = 0;
            local_70 = 10;
            String::parse_latin1((StrRange *)&local_98);
            TTR((String *)&local_78,(String *)&local_98);
            TreeItem::set_text(uVar12,1,(String *)&local_78);
            pOVar3 = local_78;
            if (local_78 != (Object *)0x0) {
              LOCK();
              plVar1 = (long *)(local_78 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_78 = (Object *)0x0;
                Memory::free_static(pOVar3 + -0x10,false);
              }
            }
            lVar11 = local_98;
            if (local_98 != 0) {
              LOCK();
              plVar1 = (long *)(local_98 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_98 = 0;
                Memory::free_static((void *)(lVar11 + -0x10),false);
              }
            }
            lVar11 = local_90[0];
            if (local_90[0] != 0) {
              LOCK();
              plVar1 = (long *)(local_90[0] + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_90[0] = 0;
                Memory::free_static((void *)(lVar11 + -0x10),false);
              }
            }
            TreeItem::set_tooltip_text(iVar8,(String *)0x1);
            iVar9 = String::find((char *)&local_b0,0x111448);
            if (iVar9 != -1) {
              String::substr(iVar13,(int)(String *)&local_b0);
              ResourceLoader::get_resource_type((String *)&local_78);
              cVar6 = String::operator==((String *)&local_78,"PackedScene");
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
              if (cVar6 == '\0') {
                local_90[0] = 0;
                local_78 = (Object *)0x1117e0;
                local_70 = 7;
                String::parse_latin1((StrRange *)local_90);
                String::operator+((String *)&local_78,(String *)&local_a0);
                cVar6 = FileAccess::exists((String *)&local_78);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
                if (cVar6 != '\0') {
                  local_90[0] = 0;
                  local_78 = (Object *)&_LC0;
                  local_70 = 0;
                  String::parse_latin1((StrRange *)local_90);
                  local_78 = (Object *)0x1117e8;
                  local_70 = 10;
                  goto LAB_0010e88f;
                }
              }
              else {
                if (*(long *)(in_RDI + 0x240) == 0) {
                  _err_print_error("get_tree","./scene/main/node.h",0x1e5,
                                   "Parameter \"data.tree\" is null.",0,0);
                }
                lVar11 = SceneTree::get_edited_scene_root();
                if (lVar11 != 0) {
                  if (*(long *)(in_RDI + 0x240) == 0) {
                    _err_print_error("get_tree","./scene/main/node.h",0x1e5,
                                     "Parameter \"data.tree\" is null.",0,0);
                  }
                  SceneTree::get_edited_scene_root();
                  Node::get_scene_file_path();
                  cVar6 = String::operator!=((String *)&local_78,(String *)&local_a0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                  if (cVar6 == '\0') goto LAB_0010de73;
                }
                local_90[0] = 0;
                local_78 = (Object *)&_LC0;
                local_70 = 0;
                String::parse_latin1((StrRange *)local_90);
                local_78 = (Object *)0x1117d6;
                local_70 = 9;
LAB_0010e88f:
                local_98 = 0;
                String::parse_latin1((StrRange *)&local_98);
                TTR((String *)&local_78,(String *)&local_98);
                TreeItem::set_text(uVar12,1,(String *)&local_78);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
              }
LAB_0010de73:
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
            }
          }
          else {
            local_70 = 7;
            local_78 = (Object *)0x1117e0;
            String::parse_latin1((StrRange *)local_90);
            String::operator+((String *)&local_78,(String *)&local_b0);
            cVar6 = FileAccess::exists((String *)&local_78);
            pOVar3 = local_78;
            if (local_78 != (Object *)0x0) {
              LOCK();
              plVar1 = (long *)(local_78 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_78 = (Object *)0x0;
                Memory::free_static(pOVar3 + -0x10,false);
              }
            }
            lVar11 = local_90[0];
            if (local_90[0] != 0) {
              LOCK();
              plVar1 = (long *)(local_90[0] + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_90[0] = 0;
                Memory::free_static((void *)(lVar11 + -0x10),false);
              }
            }
            if (cVar6 == '\0') {
              String::get_file();
              TreeItem::set_text(uVar12,1,(String *)&local_78);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
            }
            else {
              local_90[0] = 0;
              local_78 = (Object *)&_LC0;
              local_70 = 0;
              String::parse_latin1((StrRange *)local_90);
              local_78 = (Object *)0x1117e8;
              local_98 = 0;
              local_70 = 10;
              String::parse_latin1((StrRange *)&local_98);
              TTR((String *)&local_78,(String *)&local_98);
              TreeItem::set_text(uVar12,1,(String *)&local_78);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
            }
          }
          local_90[0] = 0;
          local_78 = (Object *)&_LC0;
          local_70 = 0;
          String::parse_latin1((StrRange *)local_90);
          local_78 = (Object *)0x111f68;
          local_98 = 0;
          local_70 = 0x23;
          String::parse_latin1((StrRange *)&local_98);
          TTR((String *)&local_78,(String *)&local_98);
          StringName::StringName((StringName *)&local_a8,"Save",false);
          Window::get_editor_theme_icon((StringName *)&local_a0);
          TreeItem::add_button(iVar8,(Ref *)0x1,iVar13,true,(String *)(ulong)local_110);
          if (((local_a0 != (Object *)0x0) &&
              (cVar6 = RefCounted::unreference(), pOVar3 = local_a0, cVar6 != '\0')) &&
             (cVar6 = predelete_handler(local_a0), cVar6 != '\0')) {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
          if ((StringName::configured != '\0') && (local_a8 != 0)) {
            StringName::unref();
          }
          pOVar3 = local_78;
          if (local_78 != (Object *)0x0) {
            LOCK();
            plVar1 = (long *)(local_78 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_78 = (Object *)0x0;
              Memory::free_static(pOVar3 + -0x10,false);
            }
          }
          lVar11 = local_98;
          if (local_98 != 0) {
            LOCK();
            plVar1 = (long *)(local_98 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_98 = 0;
              Memory::free_static((void *)(lVar11 + -0x10),false);
            }
          }
          lVar11 = local_90[0];
          if (local_90[0] != 0) {
            LOCK();
            plVar1 = (long *)(local_90[0] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_90[0] = 0;
              Memory::free_static((void *)(lVar11 + -0x10),false);
            }
          }
          local_90[0] = 0;
          local_78 = (Object *)&_LC0;
          local_70 = 0;
          String::parse_latin1((StrRange *)local_90);
          local_78 = (Object *)0x111f90;
          local_98 = 0;
          local_70 = 0x1e;
          String::parse_latin1((StrRange *)&local_98);
          TTR((String *)&local_78,(String *)&local_98);
          StringName::StringName((StringName *)&local_a8,"Remove",false);
          Window::get_editor_theme_icon((StringName *)&local_a0);
          TreeItem::add_button(iVar8,(Ref *)0x1,iVar13,true,(String *)(ulong)local_110);
          if (((local_a0 != (Object *)0x0) &&
              (cVar6 = RefCounted::unreference(), pOVar3 = local_a0, cVar6 != '\0')) &&
             (cVar6 = predelete_handler(local_a0), cVar6 != '\0')) {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
          if ((StringName::configured != '\0') && (local_a8 != 0)) {
            StringName::unref();
          }
          pOVar3 = local_78;
          if (local_78 != (Object *)0x0) {
            LOCK();
            pOVar2 = local_78 + -0x10;
            *(long *)pOVar2 = *(long *)pOVar2 + -1;
            UNLOCK();
            if (*(long *)pOVar2 == 0) {
              local_78 = (Object *)0x0;
              Memory::free_static(pOVar3 + -0x10,false);
            }
          }
          lVar11 = local_98;
          if (local_98 != 0) {
            LOCK();
            plVar1 = (long *)(local_98 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_98 = 0;
              Memory::free_static((void *)(lVar11 + -0x10),false);
            }
          }
          lVar11 = local_90[0];
          if (local_90[0] != 0) {
            LOCK();
            plVar1 = (long *)(local_90[0] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_90[0] = 0;
              Memory::free_static((void *)(lVar11 + -0x10),false);
            }
          }
          CowData<unsigned_long>::_copy_on_write((CowData<unsigned_long> *)&local_80);
          puVar16 = local_80;
          CowData<unsigned_long>::_copy_on_write((CowData<unsigned_long> *)&local_80);
          lVar11 = local_b0;
          puVar19 = local_80;
          if (local_80 != (ulong *)0x0) {
            puVar19 = local_80 + local_80[-1];
          }
          for (; local_b0 = lVar11, puVar16 != puVar19; puVar16 = puVar16 + 1) {
            uVar14 = (uint)*puVar16 & 0xffffff;
            if (uVar14 < (uint)ObjectDB::slot_max) {
              while( true ) {
                uVar4 = (ulong)local_78 >> 8;
                local_78 = (Object *)(uVar4 << 8);
                LOCK();
                bVar20 = (char)ObjectDB::spin_lock == '\0';
                if (bVar20) {
                  ObjectDB::spin_lock._0_1_ = '\x01';
                }
                UNLOCK();
                if (bVar20) break;
                local_78 = (Object *)(uVar4 << 8);
                do {
                } while ((char)ObjectDB::spin_lock != '\0');
              }
              puVar15 = (ulong *)((ulong)uVar14 * 0x10 + ObjectDB::object_slots);
              if ((*puVar16 >> 0x18 & 0x7fffffffff) != (*puVar15 & 0x7fffffffff)) {
                ObjectDB::spin_lock._0_1_ = '\0';
                goto LAB_0010e391;
              }
              uVar4 = puVar15[1];
              ObjectDB::spin_lock._0_1_ = '\0';
              if (uVar4 == 0) goto LAB_0010e391;
              local_78 = (Object *)
                         __dynamic_cast(uVar4,&Object::typeinfo,&AnimationLibrary::typeinfo);
              if ((local_78 == (Object *)0x0) || (cVar6 = RefCounted::init_ref(), cVar6 == '\0')) {
                local_78 = (Object *)0x0;
              }
            }
            else {
              _err_print_error("get_instance","./core/object/object.h",0x418,
                               "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010e391:
              local_78 = (Object *)0x0;
            }
            AnimationMixer::get_animation_library_name((Ref *)local_90);
            if (((local_78 != (Object *)0x0) &&
                (cVar6 = RefCounted::unreference(), pOVar3 = local_78, cVar6 != '\0')) &&
               (cVar6 = predelete_handler(local_78), cVar6 != '\0')) {
              (**(code **)(*(long *)pOVar3 + 0x140))();
              Memory::free_static(pOVar3,false);
            }
            if (local_90[0] == *(long *)local_150) {
              TreeItem::set_collapsed_recursive(SUB81(uVar10,0));
            }
            if ((StringName::configured != '\0') && (local_90[0] != 0)) {
              StringName::unref();
            }
            lVar11 = local_b0;
          }
          if (lVar11 != 0) {
            LOCK();
            plVar1 = (long *)(lVar11 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_b0 = 0;
              Memory::free_static((void *)(lVar11 + -0x10),false);
            }
          }
          if (((local_b8 != (Object *)0x0) &&
              (cVar6 = RefCounted::unreference(), pOVar3 = local_b8, cVar6 != '\0')) &&
             (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
          local_138 = *(StringName **)(local_138 + 8);
        } while (local_138 != (StringName *)0x0);
      }
      List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
      if (((local_d0 != (List *)0x0) &&
          (cVar6 = RefCounted::unreference(), pLVar5 = local_d0, cVar6 != '\0')) &&
         (cVar6 = predelete_handler((Object *)local_d0), cVar6 != '\0')) {
        (**(code **)(*(long *)pLVar5 + 0x140))(pLVar5);
        Memory::free_static(pLVar5,false);
               }

               local_150 = *(StringName**)( local_150 + 8 );
            }
, while (local_150 != (StringName *);
      }
, if (local_80 != (ulong *) );
   {
      LOCK();
      puVar19 = local_80 + -2;
      *puVar19 = *puVar19 - 1;
      UNLOCK();
      if (*puVar19 == 0) {
         Memory::free_static(local_80 + -2, false);
      }

   }

   List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_d8);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* AnimationLibraryEditor::update_tree() */void AnimationLibraryEditor::update_tree(AnimationLibraryEditor *this) {
   if (this[0xe28] != (AnimationLibraryEditor)0x0) {
      return;
   }

   Tree::clear();
   if (*(long*)( this + 0xe20 ) != 0) {
      update_tree();
      return;
   }

   _err_print_error("update_tree", "editor/plugins/animation_library_editor.cpp", 0x2a2, "Parameter \"mixer\" is null.", 0, 0);
   return;
}
/* AnimationLibraryEditor::_file_popup_selected(int) */void AnimationLibraryEditor::_file_popup_selected(AnimationLibraryEditor *this, int param_1) {
   Variant *pVVar1;
   String *pSVar2;
   AnimationMixer *pAVar3;
   StringName *pSVar4;
   List *pLVar5;
   char cVar6;
   char cVar7;
   int iVar8;
   Object *pOVar9;
   Ref *pRVar10;
   EditorUndoRedoManager *pEVar11;
   long lVar12;
   Ref *pRVar13;
   Object *pOVar14;
   char *pcVar15;
   Variant *pVVar16;
   Variant *pVVar17;
   undefined8 uVar18;
   long in_FS_OFFSET;
   String *local_150;
   StringName *local_138;
   List *local_100;
   Ref *local_f8;
   long local_f0;
   long *local_e8;
   AnimationLibrary *local_e0;
   undefined8 local_d8;
   undefined8 local_d0;
   long *local_c8;
   Object *local_c0;
   Ref *local_b8;
   undefined8 local_b0;
   Variant *local_a8;
   Variant *pVStack_a0;
   undefined8 local_88[3];
   undefined8 local_70;
   undefined1 local_68[16];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   AnimationMixer::get_animation_library((StringName*)&local_100);
   local_f8 = (Ref*)0x0;
   if (*(long*)( this + 0xdb8 ) != 0) {
      AnimationLibrary::get_animation((StringName*)&local_b8);
      if (local_b8 != (Ref*)0x0) {
         local_f8 = local_b8;
         cVar6 = RefCounted::reference();
         if (cVar6 != '\0') {
            Ref<Animation>::unref((Ref<Animation>*)&local_b8);
            goto LAB_0010f018;
         }

         local_f8 = (Ref*)0x0;
      }

      Ref<Animation>::unref((Ref<Animation>*)&local_b8);
      _err_print_error("_file_popup_selected", "editor/plugins/animation_library_editor.cpp", 0x9e, "Condition \"anim.is_null()\" is true.", 0, 0);
      goto switchD_0010f02b_default;
   }

   LAB_0010f018:pRVar13 = local_f8;
   pOVar14 = EditorNode::singleton;
   switch (param_1) {
      case 0:
    Resource::get_path();
    cVar6 = String::is_resource_file();
    if (cVar6 == '\0') {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      goto switchD_0010f02b_caseD_1;
    }
    local_c0 = (Object *)0x0;
    String::parse_latin1((String *)&local_c0,".import");
    Resource::get_path();
    String::operator+((String *)&local_b8,(String *)&local_c8);
    cVar6 = FileAccess::exists((String *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    pOVar14 = EditorNode::singleton;
    if (cVar6 == '\0') {
      local_b8 = (Ref *)0x0;
      pRVar10 = local_b8;
      if (local_100 != (List *)0x0) {
        pRVar13 = (Ref *)__dynamic_cast(local_100,&Object::typeinfo,&Resource::typeinfo,0);
        pRVar10 = local_b8;
joined_r0x001108f4:
        local_b8 = pRVar13;
        if ((local_b8 != (Ref *)0x0) &&
           (cVar6 = RefCounted::reference(), pRVar10 = local_b8, cVar6 == '\0')) {
          local_b8 = (Ref *)0x0;
          pRVar10 = local_b8;
        }
      }
LAB_0011080e:
      local_b8 = pRVar10;
      EditorNode::save_resource((Ref *)pOVar14);
      Ref<Resource>::unref((Ref<Resource> *)&local_b8);
      break;
    }
    goto LAB_0010f2fa;
      case 1:
switchD_0010f02b_caseD_1:
LAB_0010f2fa:
    local_150 = (String *)&local_c8;
    Resource::get_path();
    cVar6 = String::is_resource_file();
    if (cVar6 == '\0') {
      iVar8 = String::find((char *)&local_d8,0x111448);
      if (iVar8 != -1) {
        String::substr((int)(CowData<char32_t> *)&local_d0,(int)(CowData<char32_t> *)&local_d8);
        if (*(long *)(this + 0x240) == 0) {
          _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null."
                           ,0,0);
        }
        lVar12 = SceneTree::get_edited_scene_root();
        if (lVar12 != 0) {
          if (*(long *)(this + 0x240) == 0) {
            _err_print_error("get_tree","./scene/main/node.h",0x1e5,
                             "Parameter \"data.tree\" is null.",0,0);
          }
          SceneTree::get_edited_scene_root();
          Node::get_scene_file_path();
          cVar6 = String::operator!=((String *)&local_b8,(String *)&local_d0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          if (cVar6 == '\0') {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
            goto LAB_0010f339;
          }
        }
        local_c0 = (Object *)0x0;
        uVar18 = *(undefined8 *)(this + 0xdd8);
        String::parse_latin1((String *)&local_c0,"");
        pcVar15 = 
        "This animation library can\'t be saved because it does not belong to the edited scene. Make it unique first."
        ;
LAB_001109be:
        local_150 = (String *)&local_c8;
        local_c8 = (long *)0x0;
        String::parse_latin1(local_150,pcVar15);
        TTR((String *)&local_b8,local_150);
        AcceptDialog::set_text(uVar18,(String *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_150);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        local_88[0] = 0;
        Window::popup_centered(*(Vector2i **)(this + 0xdd8));
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
LAB_00110492:
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        break;
      }
    }
    else {
      local_c0 = (Object *)0x0;
      String::parse_latin1((String *)&local_c0,".import");
      String::operator+((String *)&local_b8,(String *)&local_d8);
      cVar6 = FileAccess::exists((String *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      if (cVar6 != '\0') {
        local_c0 = (Object *)0x0;
        uVar18 = *(undefined8 *)(this + 0xdd8);
        String::parse_latin1((String *)&local_c0,"");
        pcVar15 = 
        "This animation library can\'t be saved because it was imported from another file. Make it unique first."
        ;
LAB_00110433:
        local_150 = (String *)&local_c8;
        local_c8 = (long *)0x0;
        String::parse_latin1(local_150,pcVar15);
        TTR((String *)&local_b8,local_150);
        AcceptDialog::set_text(uVar18,(String *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_150);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        local_88[0] = 0;
        Window::popup_centered(*(Vector2i **)(this + 0xdd8));
        goto LAB_00110492;
      }
    }
LAB_0010f339:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    EditorFileDialog::set_file_mode(*(undefined8 *)(this + 0xdf0),4);
    pSVar2 = *(String **)(this + 0xdf0);
    local_c0 = (Object *)0x0;
    String::parse_latin1((String *)&local_c0,"");
    local_c8 = (long *)0x0;
    String::parse_latin1(local_150,"Save Library");
    TTR((String *)&local_b8,local_150);
    Window::set_title(pSVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_150);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    Resource::get_path();
    cVar6 = String::is_resource_file();
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    if (cVar6 == '\0') {
      local_c0 = (Object *)0x0;
      pSVar2 = *(String **)(this + 0xdf0);
      String::parse_latin1((String *)&local_c0,".res");
      lVar12 = *(long *)(this + 0xdc0);
      if (lVar12 == 0) {
        local_c8 = (long *)0x0;
      }
      else {
        local_c8 = (long *)0x0;
        if (*(char **)(lVar12 + 8) == (char *)0x0) {
          if (*(long *)(lVar12 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)local_150,(CowData *)(lVar12 + 0x10));
          }
        }
        else {
          String::parse_latin1(local_150,*(char **)(lVar12 + 8));
        }
      }
      String::operator+((String *)&local_b8,local_150);
      EditorFileDialog::set_current_file(pSVar2);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_150);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    }
    else {
      pSVar2 = *(String **)(this + 0xdf0);
      Resource::get_path();
      EditorFileDialog::set_current_path(pSVar2);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    }
    EditorFileDialog::clear_filters();
    local_c8 = (long *)0x0;
    local_b8 = (Ref *)0x0;
    String::parse_latin1((String *)&local_b8,"AnimationLibrary");
    ResourceLoader::get_recognized_extensions_for_type((String *)&local_b8,(List *)local_150);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    if (local_c8 != (long *)0x0) {
      for (lVar12 = *local_c8; lVar12 != 0; lVar12 = *(long *)(lVar12 + 8)) {
        pSVar2 = *(String **)(this + 0xdf0);
        local_c0 = (Object *)0x0;
        local_b8 = (Ref *)&_LC0;
        local_b0 = 0;
        String::parse_latin1((StrRange *)&local_c0);
        operator+((char *)&local_b8,(String *)&_LC75);
        EditorFileDialog::add_filter(pSVar2,(String *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      }
    }
    Window::popup_centered_ratio(_LC74);
    *(undefined4 *)(this + 0xdb0) = 1;
    List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)local_150);
    break;
      case 2:
    StringName::StringName((StringName *)&local_f0,(StringName *)(this + 0xdc0));
    local_e8 = (long *)0x0;
    local_138 = (StringName *)operator_new(0x270,"");
    AnimationLibrary::AnimationLibrary((AnimationLibrary *)local_138);
    postinitialize_handler((Object *)local_138);
    local_e0 = (AnimationLibrary *)local_138;
    cVar6 = RefCounted::init_ref();
    if (cVar6 == '\0') {
      local_e0 = (AnimationLibrary *)0x0;
      local_138 = (StringName *)0x0;
    }
    AnimationLibrary::get_animation_list(local_100);
    if ((local_e8 != (long *)0x0) && (pRVar13 = (Ref *)*local_e8, pRVar13 != (Ref *)0x0)) {
      do {
        AnimationLibrary::get_animation((StringName *)&local_c0);
        pOVar14 = EditorNode::singleton;
        local_b8 = (Ref *)0x0;
        if (((local_c0 != (Object *)0x0) &&
            (pRVar10 = (Ref *)__dynamic_cast(local_c0,&Object::typeinfo,&Resource::typeinfo,0),
            pRVar10 != (Ref *)0x0)) &&
           (local_b8 = pRVar10, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
          local_b8 = (Ref *)0x0;
        }
        cVar6 = EditorNode::is_resource_read_only(pOVar14,(Ref<Resource> *)&local_b8,0);
        if (((local_b8 != (Ref *)0x0) &&
            (cVar7 = RefCounted::unreference(), pRVar10 = local_b8, cVar7 != '\0')) &&
           (cVar7 = predelete_handler((Object *)local_b8), cVar7 != '\0')) {
          (**(code **)(*(long *)pRVar10 + 0x140))(pRVar10);
          Memory::free_static(pRVar10,false);
        }
        if (cVar6 != '\0') {
          (**(code **)(*(long *)local_c0 + 0x198))((Ref<Resource> *)&local_b8,local_c0,0);
          pOVar14 = local_c0;
          if (local_b8 == (Ref *)0x0) {
            if (local_c0 != (Object *)0x0) {
              local_c0 = (Object *)0x0;
LAB_0010fdb5:
              cVar6 = RefCounted::unreference();
              if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar14), cVar6 != '\0')) {
                (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
                Memory::free_static(pOVar14,false);
              }
            }
          }
          else {
            pOVar9 = (Object *)__dynamic_cast(local_b8,&Object::typeinfo,&Animation::typeinfo,0);
            pOVar14 = local_c0;
            if (local_c0 != pOVar9) {
              local_c0 = pOVar9;
              if ((pOVar9 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
                local_c0 = (Object *)0x0;
              }
              if (pOVar14 != (Object *)0x0) goto LAB_0010fdb5;
            }
          }
          Ref<Resource>::unref((Ref<Resource> *)&local_b8);
        }
        AnimationLibrary::add_animation(local_138,pRVar13);
        Ref<Animation>::unref((Ref<Animation> *)&local_c0);
        pRVar13 = *(Ref **)(pRVar13 + 8);
      } while (pRVar13 != (Ref *)0x0);
    }
    pEVar11 = (EditorUndoRedoManager *)EditorUndoRedoManager::get_singleton();
    StringName::StringName((StringName *)&local_c0,(StringName *)&local_f0);
    local_d0 = 0;
    String::parse_latin1((String *)&local_d0,"");
    local_d8 = 0;
    String::parse_latin1((String *)&local_d8,"Make Animation Library Unique: %s");
    TTR((String *)&local_c8,(String *)&local_d8);
    vformat<StringName>((CowData<char32_t> *)&local_b8,(String *)&local_c8,(StringName *)&local_c0);
    EditorUndoRedoManager::create_action(pEVar11,(CowData<char32_t> *)&local_b8,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    if ((StringName::configured != '\0') && (local_c0 != (Object *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_b8,(StringName *)&local_f0);
    StringName::StringName((StringName *)&local_c0,"remove_animation_library",false);
    EditorUndoRedoManager::add_do_method<StringName>
              (pEVar11,*(undefined8 *)(this + 0xe20),(StringName *)&local_c0,
               (CowData<char32_t> *)&local_b8);
    if ((StringName::configured != '\0') &&
       (((local_c0 == (Object *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
        (local_b8 != (Ref *)0x0)))) {
      StringName::unref();
    }
    local_b8 = (Ref *)0x0;
    Ref<AnimationLibrary>::operator=((Ref<AnimationLibrary> *)&local_b8,(Ref *)local_138);
    StringName::StringName((StringName *)&local_c0,(StringName *)&local_f0);
    StringName::StringName((StringName *)&local_c8,"add_animation_library",false);
    pSVar4 = *(StringName **)(this + 0xe20);
    Variant::Variant((Variant *)local_88,(StringName *)&local_c0);
    Variant::Variant((Variant *)&local_70,(Object *)local_b8);
    local_50 = (undefined1  [16])0x0;
    local_58 = 0;
    iVar8 = (int)&local_a8;
    local_a8 = (Variant *)local_88;
    pVStack_a0 = (Variant *)&local_70;
    EditorUndoRedoManager::add_do_methodp((Object *)pEVar11,pSVar4,(Variant **)&local_c8,iVar8);
    pVVar17 = (Variant *)local_40;
    pVVar16 = pVVar17;
    do {
      pVVar1 = pVVar16 + -0x18;
      pVVar16 = pVVar16 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar16 != (Variant *)local_88);
    if (((StringName::configured != '\0') &&
        ((local_c8 == (long *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_c0 != (Object *)0x0)) {
      StringName::unref();
    }
    Ref<AnimationLibrary>::unref((Ref<AnimationLibrary> *)&local_b8);
    StringName::StringName((StringName *)&local_b8,(StringName *)&local_f0);
    StringName::StringName((StringName *)&local_c0,"remove_animation_library",false);
    pSVar4 = *(StringName **)(this + 0xe20);
    Variant::Variant((Variant *)local_88,(StringName *)&local_b8);
    local_70 = 0;
    local_68 = (undefined1  [16])0x0;
    local_a8 = (Variant *)local_88;
    EditorUndoRedoManager::add_undo_methodp((Object *)pEVar11,pSVar4,(Variant **)&local_c0,iVar8);
    if (Variant::needs_deinit[(int)local_70] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (((StringName::configured != '\0') &&
        ((local_c0 == (Object *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_b8 != (Ref *)0x0)) {
      StringName::unref();
    }
    local_b8 = (Ref *)0x0;
    Ref<AnimationLibrary>::operator=((Ref<AnimationLibrary> *)&local_b8,(Ref *)local_100);
    StringName::StringName((StringName *)&local_c0,(StringName *)&local_f0);
    StringName::StringName((StringName *)&local_c8,"add_animation_library",false);
    pSVar4 = *(StringName **)(this + 0xe20);
    Variant::Variant((Variant *)local_88,(StringName *)&local_c0);
    Variant::Variant((Variant *)&local_70,(Object *)local_b8);
    local_50 = (undefined1  [16])0x0;
    local_58 = 0;
    local_a8 = (Variant *)local_88;
    pVStack_a0 = (Variant *)&local_70;
    EditorUndoRedoManager::add_undo_methodp((Object *)pEVar11,pSVar4,(Variant **)&local_c8,iVar8);
    do {
      pVVar16 = pVVar17 + -0x18;
      pVVar17 = pVVar17 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar16] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar17 != (Variant *)local_88);
    if ((StringName::configured != '\0') &&
       (((local_c8 == (long *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
        (local_c0 != (Object *)0x0)))) {
      StringName::unref();
    }
    Ref<AnimationLibrary>::unref((Ref<AnimationLibrary> *)&local_b8);
    pAVar3 = *(AnimationMixer **)(this + 0xe20);
    StringName::StringName((StringName *)&local_b8,"_update_editor",false);
    EditorUndoRedoManager::add_do_method<AnimationMixer*>
              (pEVar11,(Object *)this,(StringName *)&local_b8,pAVar3);
    if ((StringName::configured != '\0') && (local_b8 != (Ref *)0x0)) {
      StringName::unref();
    }
    pAVar3 = *(AnimationMixer **)(this + 0xe20);
    StringName::StringName((StringName *)&local_b8,"_update_editor",false);
    EditorUndoRedoManager::add_undo_method<AnimationMixer*>
              (pEVar11,(Object *)this,(StringName *)&local_b8,pAVar3);
    if ((StringName::configured != '\0') && (local_b8 != (Ref *)0x0)) {
      StringName::unref();
    }
    EditorUndoRedoManager::commit_action(SUB81(pEVar11,0));
    update_tree(this);
    Ref<AnimationLibrary>::unref((Ref<AnimationLibrary> *)&local_e0);
    List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_e8);
    if ((StringName::configured != '\0') && (local_f0 != 0)) {
      StringName::unref();
    }
    break;
      case 3:
    local_b8 = (Ref *)0x0;
    String::parse_latin1((String *)&local_b8,"");
    EditorNode::push_item(pOVar14,(String *)local_100,SUB81((String *)&local_b8,0));
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    break;
      case 4:
    Resource::get_path();
    cVar6 = String::is_resource_file();
    if (cVar6 == '\0') {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      goto switchD_0010f02b_caseD_5;
    }
    local_c0 = (Object *)0x0;
    String::parse_latin1((String *)&local_c0,".import");
    Resource::get_path();
    String::operator+((String *)&local_b8,(String *)&local_c8);
    cVar6 = FileAccess::exists((String *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    pOVar14 = EditorNode::singleton;
    if (cVar6 == '\0') {
      local_b8 = (Ref *)0x0;
      pRVar10 = local_b8;
      if (pRVar13 != (Ref *)0x0) {
        pRVar13 = (Ref *)__dynamic_cast(pRVar13,&Object::typeinfo,&Resource::typeinfo,0);
        pRVar10 = local_b8;
        goto joined_r0x001108f4;
      }
      goto LAB_0011080e;
    }
    goto LAB_0010f07d;
      case 5:
switchD_0010f02b_caseD_5:
LAB_0010f07d:
    local_150 = (String *)&local_c8;
    Resource::get_path();
    cVar6 = String::is_resource_file();
    if (cVar6 != '\0') {
      local_c0 = (Object *)0x0;
      String::parse_latin1((String *)&local_c0,".import");
      String::operator+((String *)&local_b8,(String *)&local_d8);
      cVar6 = FileAccess::exists((String *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      if (cVar6 == '\0') goto LAB_0010f0bc;
      local_c0 = (Object *)0x0;
      uVar18 = *(undefined8 *)(this + 0xdd8);
      String::parse_latin1((String *)&local_c0,"");
      pcVar15 = 
      "This animation can\'t be saved because it was imported from another file. Make it unique first."
      ;
      goto LAB_00110433;
    }
    iVar8 = String::find((char *)&local_d8,0x111448);
    if (iVar8 == -1) {
LAB_0010f0bc:
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      EditorFileDialog::set_file_mode(*(undefined8 *)(this + 0xdf0),4);
      pSVar2 = *(String **)(this + 0xdf0);
      local_c0 = (Object *)0x0;
      String::parse_latin1((String *)&local_c0,"");
      local_c8 = (long *)0x0;
      String::parse_latin1(local_150,"Save Animation");
      TTR((String *)&local_b8,local_150);
      Window::set_title(pSVar2);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_150);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      Resource::get_path();
      cVar6 = String::is_resource_file();
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      if (cVar6 == '\0') {
        local_c0 = (Object *)0x0;
        pSVar2 = *(String **)(this + 0xdf0);
        String::parse_latin1((String *)&local_c0,".res");
        lVar12 = *(long *)(this + 0xdb8);
        if (lVar12 == 0) {
          local_c8 = (long *)0x0;
        }
        else {
          local_c8 = (long *)0x0;
          if (*(char **)(lVar12 + 8) == (char *)0x0) {
            if (*(long *)(lVar12 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_150,(CowData *)(lVar12 + 0x10));
            }
          }
          else {
            String::parse_latin1(local_150,*(char **)(lVar12 + 8));
          }
        }
        String::operator+((String *)&local_b8,local_150);
        EditorFileDialog::set_current_file(pSVar2);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_150);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      }
      else {
        pSVar2 = *(String **)(this + 0xdf0);
        Resource::get_path();
        EditorFileDialog::set_current_path(pSVar2);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      }
      EditorFileDialog::clear_filters();
      local_c8 = (long *)0x0;
      local_b8 = (Ref *)0x0;
      String::parse_latin1((String *)&local_b8,"Animation");
      ResourceLoader::get_recognized_extensions_for_type((String *)&local_b8,(List *)local_150);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      if (local_c8 != (long *)0x0) {
        for (lVar12 = *local_c8; lVar12 != 0; lVar12 = *(long *)(lVar12 + 8)) {
          pSVar2 = *(String **)(this + 0xdf0);
          local_c0 = (Object *)0x0;
          local_b8 = (Ref *)&_LC0;
          local_b0 = 0;
          String::parse_latin1((StrRange *)&local_c0);
          operator+((char *)&local_b8,(String *)&_LC75);
          EditorFileDialog::add_filter(pSVar2,(String *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        }
      }
      Window::popup_centered_ratio(_LC74);
      *(undefined4 *)(this + 0xdb0) = 3;
      List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)local_150);
      break;
    }
    String::substr((int)(CowData<char32_t> *)&local_d0,(int)(CowData<char32_t> *)&local_d8);
    if (*(long *)(this + 0x240) == 0) {
      _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0
                      );
    }
    lVar12 = SceneTree::get_edited_scene_root();
    if (lVar12 != 0) {
      if (*(long *)(this + 0x240) == 0) {
        _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0
                         ,0);
      }
      SceneTree::get_edited_scene_root();
      Node::get_scene_file_path();
      cVar6 = String::operator!=((String *)&local_b8,(String *)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      if (cVar6 == '\0') {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        goto LAB_0010f0bc;
      }
    }
    local_c0 = (Object *)0x0;
    uVar18 = *(undefined8 *)(this + 0xdd8);
    String::parse_latin1((String *)&local_c0,"");
    pcVar15 = 
    "This animation can\'t be saved because it does not belong to the edited scene. Make it unique first."
    ;
    goto LAB_001109be;
      case 6:
    StringName::StringName((StringName *)&local_e8,(StringName *)(this + 0xdb8));
    pRVar13 = local_f8;
    (**(code **)(*(long *)local_f8 + 0x198))((Ref<Resource> *)&local_b8,local_f8,0);
    local_e0 = (AnimationLibrary *)0x0;
    Ref<Animation>::operator=((Ref<Animation> *)&local_e0,local_b8);
    Ref<Resource>::unref((Ref<Resource> *)&local_b8);
    pEVar11 = (EditorUndoRedoManager *)EditorUndoRedoManager::get_singleton();
    StringName::StringName((StringName *)&local_c0,(StringName *)&local_e8);
    local_d0 = 0;
    String::parse_latin1((String *)&local_d0,"");
    local_d8 = 0;
    String::parse_latin1((String *)&local_d8,"Make Animation Unique: %s");
    TTR((String *)&local_c8,(String *)&local_d8);
    vformat<StringName>((Ref<Resource> *)&local_b8,(String *)&local_c8,(StringName *)&local_c0);
    EditorUndoRedoManager::create_action(pEVar11,(Ref<Resource> *)&local_b8,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    if ((StringName::configured != '\0') && (local_c0 != (Object *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_b8,(StringName *)&local_e8);
    StringName::StringName((StringName *)&local_c0,"remove_animation",false);
    EditorUndoRedoManager::add_do_method<StringName>
              (pEVar11,local_100,(StringName *)&local_c0,(Ref<Resource> *)&local_b8);
    if ((StringName::configured != '\0') &&
       (((local_c0 == (Object *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
        (local_b8 != (Ref *)0x0)))) {
      StringName::unref();
    }
    local_b8 = (Ref *)0x0;
    Ref<Animation>::operator=((Ref<Animation> *)&local_b8,(Ref *)local_e0);
    StringName::StringName((StringName *)&local_c0,(StringName *)&local_e8);
    StringName::StringName((StringName *)&local_c8,"add_animation",false);
    pLVar5 = local_100;
    Variant::Variant((Variant *)local_88,(StringName *)&local_c0);
    Variant::Variant((Variant *)&local_70,(Object *)local_b8);
    local_50 = (undefined1  [16])0x0;
    local_58 = 0;
    iVar8 = (int)&local_a8;
    local_a8 = (Variant *)local_88;
    pVStack_a0 = (Variant *)&local_70;
    EditorUndoRedoManager::add_do_methodp
              ((Object *)pEVar11,(StringName *)pLVar5,(Variant **)&local_c8,iVar8);
    pVVar17 = (Variant *)local_40;
    pVVar16 = pVVar17;
    do {
      pVVar1 = pVVar16 + -0x18;
      pVVar16 = pVVar16 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar16 != (Variant *)local_88);
    if (((StringName::configured != '\0') &&
        ((local_c8 == (long *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_c0 != (Object *)0x0)) {
      StringName::unref();
    }
    Ref<Animation>::unref((Ref<Animation> *)&local_b8);
    StringName::StringName((StringName *)&local_b8,(StringName *)&local_e8);
    StringName::StringName((StringName *)&local_c0,"remove_animation",false);
    pLVar5 = local_100;
    Variant::Variant((Variant *)local_88,(StringName *)&local_b8);
    local_70 = 0;
    local_68 = (undefined1  [16])0x0;
    local_a8 = (Variant *)local_88;
    EditorUndoRedoManager::add_undo_methodp
              ((Object *)pEVar11,(StringName *)pLVar5,(Variant **)&local_c0,iVar8);
    if (Variant::needs_deinit[(int)local_70] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (((StringName::configured != '\0') &&
        ((local_c0 == (Object *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_b8 != (Ref *)0x0)) {
      StringName::unref();
    }
    local_b8 = (Ref *)0x0;
    Ref<Animation>::operator=((Ref<Animation> *)&local_b8,pRVar13);
    StringName::StringName((StringName *)&local_c0,(StringName *)&local_e8);
    StringName::StringName((StringName *)&local_c8,"add_animation",false);
    Variant::Variant((Variant *)local_88,(StringName *)&local_c0);
    Variant::Variant((Variant *)&local_70,(Object *)local_b8);
    local_50 = (undefined1  [16])0x0;
    local_58 = 0;
    local_a8 = (Variant *)local_88;
    pVStack_a0 = (Variant *)&local_70;
    EditorUndoRedoManager::add_undo_methodp
              ((Object *)pEVar11,(StringName *)local_100,(Variant **)&local_c8,iVar8);
    do {
      pVVar16 = pVVar17 + -0x18;
      pVVar17 = pVVar17 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar16] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar17 != (Variant *)local_88);
    if ((StringName::configured != '\0') &&
       (((local_c8 == (long *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
        (local_c0 != (Object *)0x0)))) {
      StringName::unref();
    }
    Ref<Animation>::unref((Ref<Animation> *)&local_b8);
    pAVar3 = *(AnimationMixer **)(this + 0xe20);
    StringName::StringName((StringName *)&local_b8,"_update_editor",false);
    EditorUndoRedoManager::add_do_method<AnimationMixer*>
              (pEVar11,(Object *)this,(StringName *)&local_b8,pAVar3);
    if ((StringName::configured != '\0') && (local_b8 != (Ref *)0x0)) {
      StringName::unref();
    }
    pAVar3 = *(AnimationMixer **)(this + 0xe20);
    StringName::StringName((StringName *)&local_b8,"_update_editor",false);
    EditorUndoRedoManager::add_undo_method<AnimationMixer*>
              (pEVar11,(Object *)this,(StringName *)&local_b8,pAVar3);
    if ((StringName::configured != '\0') && (local_b8 != (Ref *)0x0)) {
      StringName::unref();
    }
    EditorUndoRedoManager::commit_action(SUB81(pEVar11,0));
    update_tree(this);
    Ref<Animation>::unref((Ref<Animation> *)&local_e0);
    if ((StringName::configured != '\0') && (local_e8 != (long *)0x0)) {
      StringName::unref();
    }
    break;
      case 7:
    local_b8 = (Ref *)0x0;
    String::parse_latin1((String *)&local_b8,"");
    EditorNode::push_item(pOVar14,(String *)local_f8,SUB81((String *)&local_b8,0));
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
   }

   switchD_0010f02b_default:Ref<Animation>::unref((Ref<Animation>*)&local_f8);
   Ref<AnimationLibrary>::unref((Ref<AnimationLibrary>*)&local_100);
   if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationLibraryEditor::show_dialog() */void AnimationLibraryEditor::show_dialog(AnimationLibraryEditor *this) {
   if (this[0xe28] == (AnimationLibraryEditor)0x0) {
      Tree::clear();
      if (*(long*)( this + 0xe20 ) == 0) {
         _err_print_error("update_tree", "editor/plugins/animation_library_editor.cpp", 0x2a2, "Parameter \"mixer\" is null.", 0, 0);
      }
 else {
         update_tree();
      }

   }

   Window::popup_centered_ratio(_LC212);
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
/* Object::_bind_compatibility_methods() */void Object::_bind_compatibility_methods(void) {
   return;
}
/* Object::_set(StringName const&, Variant const&) */undefined8 Object::_set(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Object::_get(StringName const&, Variant&) const */undefined8 Object::_get(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Object::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */void Object::_get_property_list(List *param_1) {
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
/* RefCounted::is_class_ptr(void*) const */uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
   return (uint)CONCAT71(0x11e1, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11e1, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}
/* RefCounted::_getv(StringName const&, Variant&) const */undefined8 RefCounted::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_setv(StringName const&, Variant const&) */undefined8 RefCounted::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_validate_propertyv(PropertyInfo&) const */void RefCounted::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* RefCounted::_property_can_revertv(StringName const&) const */undefined8 RefCounted::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */undefined8 RefCounted::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_notificationv(int, bool) */void RefCounted::_notificationv(int param_1, bool param_2) {
   return;
}
/* ConfigFile::is_class_ptr(void*) const */uint ConfigFile::is_class_ptr(ConfigFile *this, void *param_1) {
   return (uint)CONCAT71(0x11e1, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11e1, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11e1, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* ConfigFile::_getv(StringName const&, Variant&) const */undefined8 ConfigFile::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ConfigFile::_setv(StringName const&, Variant const&) */undefined8 ConfigFile::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ConfigFile::_validate_propertyv(PropertyInfo&) const */void ConfigFile::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* ConfigFile::_property_can_revertv(StringName const&) const */undefined8 ConfigFile::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* ConfigFile::_property_get_revertv(StringName const&, Variant&) const */undefined8 ConfigFile::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ConfigFile::_notificationv(int, bool) */void ConfigFile::_notificationv(int param_1, bool param_2) {
   return;
}
/* Control::_top_level_changed() */void Control::_top_level_changed(void) {
   return;
}
/* Viewport::is_size_2d_override_stretch_enabled() const */undefined8 Viewport::is_size_2d_override_stretch_enabled(void) {
   return 1;
}
/* Viewport::is_sub_viewport() const */undefined8 Viewport::is_sub_viewport(void) {
   return 0;
}
/* Window::_popup_adjust_rect() const */undefined1[16];Window::_popup_adjust_rect(void) {
   return ZEXT816(0);
}
/* AcceptDialog::ok_pressed() */void AcceptDialog::ok_pressed(void) {
   return;
}
/* AcceptDialog::cancel_pressed() */void AcceptDialog::cancel_pressed(void) {
   return;
}
/* AcceptDialog::custom_action(String const&) */void AcceptDialog::custom_action(String *param_1) {
   return;
}
/* AnimationLibraryEditor::is_class_ptr(void*) const */uint AnimationLibraryEditor::is_class_ptr(void *param_1) {
   undefined4 in_EDX;
   undefined4 *in_RSI;
   return (uint)CONCAT71(0x11e0, in_RSI == &AcceptDialog::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11e0, in_RSI == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11e0, in_RSI == &Window::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11e0, in_RSI == &Viewport::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11e1, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
}
/* AnimationLibraryEditor::_property_can_revertv(StringName const&) const */undefined8 AnimationLibraryEditor::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* AnimationLibraryEditor::_property_get_revertv(StringName const&, Variant&) const */undefined8 AnimationLibraryEditor::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* CallableCustomMethodPointer<AnimationLibraryEditor, void, int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationLibraryEditor,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationLibraryEditor,void,int> *this) {
   return;
}
/* CallableCustomMethodPointer<AnimationLibraryEditor, void,
   TreeItem*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationLibraryEditor,void,TreeItem*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationLibraryEditor,void,TreeItem*> *this) {
   return;
}
/* CallableCustomMethodPointer<AnimationLibraryEditor, void, TreeItem*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationLibraryEditor,void,TreeItem*,int,int,MouseButton>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationLibraryEditor,void,TreeItem*,int,int,MouseButton> *this) {
   return;
}
/* CallableCustomMethodPointer<AnimationLibraryEditor, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationLibraryEditor,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationLibraryEditor,void> *this) {
   return;
}
/* CallableCustomMethodPointer<AnimationLibraryEditor, void, Vector<String>
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationLibraryEditor,void,Vector<String>const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationLibraryEditor,void,Vector<String>const&> *this) {
   return;
}
/* CallableCustomMethodPointer<AnimationLibraryEditor, void, String
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationLibraryEditor,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationLibraryEditor,void,String_const&> *this) {
   return;
}
/* MethodBindT<Object*>::_gen_argument_type(int) const */byte MethodBindT<Object*>::_gen_argument_type(MethodBindT<Object*> *this, int param_1) {
   return -(param_1 == 0) & 0x18;
}
/* MethodBindT<Object*>::get_argument_meta(int) const */undefined8 MethodBindT<Object*>::get_argument_meta(int param_1) {
   return 0;
}
/* CallableCustomMethodPointer<AnimationLibraryEditor, void, int>::get_argument_count(bool&) const
    */undefined8 CallableCustomMethodPointer<AnimationLibraryEditor,void,int>::get_argument_count(CallableCustomMethodPointer<AnimationLibraryEditor,void,int> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<AnimationLibraryEditor, void, TreeItem*>::get_argument_count(bool&)
   const */undefined8 CallableCustomMethodPointer<AnimationLibraryEditor,void,TreeItem*>::get_argument_count(CallableCustomMethodPointer<AnimationLibraryEditor,void,TreeItem*> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<AnimationLibraryEditor, void, TreeItem*, int, int,
   MouseButton>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<AnimationLibraryEditor,void,TreeItem*,int,int,MouseButton>::get_argument_count(CallableCustomMethodPointer<AnimationLibraryEditor,void,TreeItem*,int,int,MouseButton> *this, bool *param_1) {
   *param_1 = true;
   return 4;
}
/* CallableCustomMethodPointer<AnimationLibraryEditor, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<AnimationLibraryEditor,void>::get_argument_count(CallableCustomMethodPointer<AnimationLibraryEditor,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* CallableCustomMethodPointer<AnimationLibraryEditor, void, Vector<String>
   const&>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<AnimationLibraryEditor,void,Vector<String>const&>::get_argument_count(CallableCustomMethodPointer<AnimationLibraryEditor,void,Vector<String>const&> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<AnimationLibraryEditor, void, String
   const&>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<AnimationLibraryEditor,void,String_const&>::get_argument_count(CallableCustomMethodPointer<AnimationLibraryEditor,void,String_const&> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* CallableCustomMethodPointer<AnimationLibraryEditor, void, Vector<String>
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationLibraryEditor,void,Vector<String>const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationLibraryEditor,void,Vector<String>const&> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<AnimationLibraryEditor, void, String
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationLibraryEditor,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationLibraryEditor,void,String_const&> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<AnimationLibraryEditor, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationLibraryEditor,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationLibraryEditor,void> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<AnimationLibraryEditor, void, TreeItem*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationLibraryEditor,void,TreeItem*,int,int,MouseButton>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationLibraryEditor,void,TreeItem*,int,int,MouseButton> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<AnimationLibraryEditor, void,
   TreeItem*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationLibraryEditor,void,TreeItem*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationLibraryEditor,void,TreeItem*> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<AnimationLibraryEditor, void, int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationLibraryEditor,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationLibraryEditor,void,int> *this) {
   operator_delete(this, 0x48);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_0011d008;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_0011d008;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* MethodBindT<Object*>::~MethodBindT() */void MethodBindT<Object*>::~MethodBindT(MethodBindT<Object*> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011df90;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Object*>::~MethodBindT() */void MethodBindT<Object*>::~MethodBindT(MethodBindT<Object*> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011df90;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */undefined8 HBoxContainer::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */undefined8 VBoxContainer::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* HBoxContainer::_property_can_revertv(StringName const&) const */undefined8 HBoxContainer::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_00123008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* VBoxContainer::_property_can_revertv(StringName const&) const */undefined8 VBoxContainer::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_00123008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* AnimationLibraryEditor::~AnimationLibraryEditor() */void AnimationLibraryEditor::~AnimationLibraryEditor(AnimationLibraryEditor *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_0011d9b8;
   if (bVar1) {
      if (*(long*)( this + 0xde8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0011127f;
      }

      if (*(long*)( this + 0xdc0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0011127f;
      }

      if (*(long*)( this + 0xdb8 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0011127f:AcceptDialog::~AcceptDialog((AcceptDialog*)this);
   return;
}
/* AnimationLibraryEditor::_getv(StringName const&, Variant&) const */undefined8 AnimationLibraryEditor::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__get_00123010 != Object::_get) {
      uVar1 = Window::_get(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* AnimationLibraryEditor::_setv(StringName const&, Variant const&) */undefined8 AnimationLibraryEditor::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__set_00123018 != Object::_set) {
      uVar1 = Window::_set(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* CowData<unsigned long>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<unsigned_long>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* AnimationLibraryEditor::_bind_methods() [clone .cold] */void AnimationLibraryEditor::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<String>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CallableCustomMethodPointer<AnimationLibraryEditor, void, int>::get_object() const */undefined8 CallableCustomMethodPointer<AnimationLibraryEditor,void,int>::get_object(CallableCustomMethodPointer<AnimationLibraryEditor,void,int> *this) {
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
         goto LAB_0011228d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0011228d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0011228d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<AnimationLibraryEditor, void>::get_object() const */undefined8 CallableCustomMethodPointer<AnimationLibraryEditor,void>::get_object(CallableCustomMethodPointer<AnimationLibraryEditor,void> *this) {
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
         goto LAB_0011238d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0011238d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0011238d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<AnimationLibraryEditor, void, TreeItem*, int, int,
   MouseButton>::get_object() const */undefined8 CallableCustomMethodPointer<AnimationLibraryEditor,void,TreeItem*,int,int,MouseButton>::get_object(CallableCustomMethodPointer<AnimationLibraryEditor,void,TreeItem*,int,int,MouseButton> *this) {
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
         goto LAB_0011248d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0011248d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0011248d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<AnimationLibraryEditor, void, String const&>::get_object() const */undefined8 CallableCustomMethodPointer<AnimationLibraryEditor,void,String_const&>::get_object(CallableCustomMethodPointer<AnimationLibraryEditor,void,String_const&> *this) {
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
         goto LAB_0011258d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0011258d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0011258d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<AnimationLibraryEditor, void, TreeItem*>::get_object() const */undefined8 CallableCustomMethodPointer<AnimationLibraryEditor,void,TreeItem*>::get_object(CallableCustomMethodPointer<AnimationLibraryEditor,void,TreeItem*> *this) {
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
         goto LAB_0011268d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0011268d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0011268d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<AnimationLibraryEditor, void, Vector<String> const&>::get_object()
   const */undefined8 CallableCustomMethodPointer<AnimationLibraryEditor,void,Vector<String>const&>::get_object(CallableCustomMethodPointer<AnimationLibraryEditor,void,Vector<String>const&> *this) {
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
         goto LAB_0011278d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0011278d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0011278d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* AnimationLibraryEditor::_validate_propertyv(PropertyInfo&) const */void AnimationLibraryEditor::_validate_propertyv(PropertyInfo *param_1) {
   Node::_validate_property(param_1);
   Viewport::_validate_property(param_1);
   if ((code*)PTR__validate_property_00123020 == Viewport::_validate_property) {
      return;
   }

   Window::_validate_property(param_1);
   return;
}
/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */void VBoxContainer::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_00123028 == Control::_validate_property) {
      return;
   }

   BoxContainer::_validate_property(param_1);
   return;
}
/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */void HBoxContainer::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_00123028 == Control::_validate_property) {
      return;
   }

   BoxContainer::_validate_property(param_1);
   return;
}
/* HBoxContainer::_setv(StringName const&, Variant const&) */undefined8 HBoxContainer::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_00123030 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* VBoxContainer::_setv(StringName const&, Variant const&) */undefined8 VBoxContainer::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_00123030 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x00112ad8) *//* HBoxContainer::_getv(StringName const&, Variant&) const */undefined8 HBoxContainer::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_00123038 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x00112b48) *//* VBoxContainer::_getv(StringName const&, Variant&) const */undefined8 VBoxContainer::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_00123038 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* HBoxContainer::is_class_ptr(void*) const */uint HBoxContainer::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x11e0, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11e0, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11e1, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11e1, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11e1, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* VBoxContainer::is_class_ptr(void*) const */uint VBoxContainer::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x11e0, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11e0, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11e1, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11e1, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11e1, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* AnimationLibraryEditor::~AnimationLibraryEditor() */void AnimationLibraryEditor::~AnimationLibraryEditor(AnimationLibraryEditor *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_0011d9b8;
   if (bVar1) {
      if (*(long*)( this + 0xde8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112caf;
      }

      if (*(long*)( this + 0xdc0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112caf;
      }

      if (*(long*)( this + 0xdb8 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00112caf:AcceptDialog::~AcceptDialog((AcceptDialog*)this);
   operator_delete(this, 0xe30);
   return;
}
/* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = Window::get_editor_theme_icon;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112d20;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00112d20:Control::~Control((Control*)this);
   return;
}
/* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = Window::get_editor_theme_icon;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112d80;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00112d80:Control::~Control((Control*)this);
   return;
}
/* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = Window::get_editor_theme_icon;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112de0;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00112de0:Control::~Control((Control*)this);
   operator_delete(this, 0xa10);
   return;
}
/* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = Window::get_editor_theme_icon;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112e50;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00112e50:Control::~Control((Control*)this);
   operator_delete(this, 0xa10);
   return;
}
/* AnimationLibraryEditor::_notificationv(int, bool) */void AnimationLibraryEditor::_notificationv(AnimationLibraryEditor *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if (param_1 == 0x20) {
         _notification(iVar1);
      }

      if ((code*)PTR__notification_00123040 != Window::_notification) {
         AcceptDialog::_notification(iVar1);
      }

      for (int i = 0; i < 3; i++) {
         Window::_notification(iVar1);
      }

      return;
   }

   for (int i = 0; i < 3; i++) {
      Node::_notification(iVar1);
   }

   if ((code*)PTR__notification_00123040 != Window::_notification) {
      AcceptDialog::_notification(iVar1);
   }

   if (param_1 != 0x20) {
      return;
   }

   _notification(iVar1);
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
/* ConfigFile::_get_class_namev() const */undefined8 *ConfigFile::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00113053:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00113053;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ConfigFile");
         goto LAB_001130be;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ConfigFile");
   LAB_001130be:return &_get_class_namev();
}
/* RefCounted::_get_class_namev() const */undefined8 *RefCounted::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00113133:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00113133;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_0011319e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_0011319e:return &_get_class_namev();
}
/* VBoxContainer::_get_class_namev() const */undefined8 *VBoxContainer::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00113223:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00113223;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VBoxContainer");
         goto LAB_0011328e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VBoxContainer");
   LAB_0011328e:return &_get_class_namev();
}
/* HBoxContainer::_get_class_namev() const */undefined8 *HBoxContainer::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00113313:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00113313;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HBoxContainer");
         goto LAB_0011337e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HBoxContainer");
   LAB_0011337e:return &_get_class_namev();
}
/* AnimationLibraryEditor::_get_class_namev() const */undefined8 *AnimationLibraryEditor::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00113403:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00113403;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AnimationLibraryEditor");
         goto LAB_0011346e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AnimationLibraryEditor");
   LAB_0011346e:return &_get_class_namev();
}
/* String::~String() */void String::~String(String *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* AnimationLibraryEditor::get_class() const */void AnimationLibraryEditor::get_class(void) {
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
/* HBoxContainer::get_class() const */void HBoxContainer::get_class(void) {
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
/* ConfigFile::get_class() const */void ConfigFile::get_class(void) {
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
/* RefCounted::get_class() const */void RefCounted::get_class(void) {
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
/* VBoxContainer::get_class() const */void VBoxContainer::get_class(void) {
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
/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar5 = String::operator ==(param_1, (String*)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (cVar5 != '\0') goto LAB_001139fb;
   }

   cVar5 = String::operator ==(param_1, "RefCounted");
   if (cVar5 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar5 = String::operator ==(param_1, (String*)&local_60);
         lVar4 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (cVar5 != '\0') goto LAB_001139fb;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar6 = String::operator ==(param_1, "Object");
         return uVar6;
      }

   }
 else {
      LAB_001139fb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ConfigFile::is_class(String const&) const */undefined8 ConfigFile::is_class(ConfigFile *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_00113b9f;
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

      LAB_00113b9f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00113c53;
   }

   cVar5 = String::operator ==(param_1, "ConfigFile");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00113c53:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

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
/* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)( this + 0x20 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x20 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x20 );
         *(undefined8*)( this + 0x20 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x10 ) != 0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 8 );
         *(undefined8*)( this + 8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* Node::is_class(String const&) const */undefined8 Node::is_class(Node *this, String *param_1) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar5 = String::operator ==(param_1, (String*)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (cVar5 != '\0') goto LAB_00113e9b;
   }

   cVar5 = String::operator ==(param_1, "Node");
   if (cVar5 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar5 = String::operator ==(param_1, (String*)&local_60);
         lVar4 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (cVar5 != '\0') goto LAB_00113e9b;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar6 = String::operator ==(param_1, "Object");
         return uVar6;
      }

   }
 else {
      LAB_00113e9b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Control::is_class(String const&) const */undefined8 Control::is_class(Control *this, String *param_1) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar5 = String::operator ==(param_1, (String*)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (cVar5 != '\0') goto LAB_001140db;
   }

   cVar5 = String::operator ==(param_1, "Control");
   if (cVar5 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar5 = String::operator ==(param_1, (String*)&local_60);
         lVar4 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (cVar5 != '\0') goto LAB_001140db;
      }

      cVar5 = String::operator ==(param_1, "CanvasItem");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = Node::is_class((Node*)this, param_1);
            return uVar6;
         }

         goto LAB_00114218;
      }

   }

   LAB_001140db:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00114218:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* BoxContainer::is_class(String const&) const */undefined8 BoxContainer::is_class(BoxContainer *this, String *param_1) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar5 = String::operator ==(param_1, (String*)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (cVar5 != '\0') goto LAB_0011433b;
   }

   cVar5 = String::operator ==(param_1, "BoxContainer");
   if (cVar5 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar5 = String::operator ==(param_1, (String*)&local_60);
         lVar4 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (cVar5 != '\0') goto LAB_0011433b;
      }

      cVar5 = String::operator ==(param_1, "Container");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = Control::is_class((Control*)this, param_1);
            return uVar6;
         }

         goto LAB_00114478;
      }

   }

   LAB_0011433b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00114478:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* VBoxContainer::is_class(String const&) const */undefined8 VBoxContainer::is_class(VBoxContainer *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_001144ef;
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

      LAB_001144ef:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_001145a3;
   }

   cVar5 = String::operator ==(param_1, "VBoxContainer");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = BoxContainer::is_class((BoxContainer*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_001145a3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HBoxContainer::is_class(String const&) const */undefined8 HBoxContainer::is_class(HBoxContainer *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_0011466f;
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

      LAB_0011466f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00114723;
   }

   cVar5 = String::operator ==(param_1, "HBoxContainer");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = BoxContainer::is_class((BoxContainer*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00114723:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x00114860) *//* BoxContainer::_notificationv(int, bool) */void BoxContainer::_notificationv(BoxContainer *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_00123048 != Container::_notification) {
         BoxContainer::_notification(iVar1);
      }

      for (int i = 0; i < 4; i++) {
         Container::_notification(iVar1);
      }

      return;
   }

   for (int i = 0; i < 4; i++) {
      Node::_notification(iVar1);
   }

   if ((code*)PTR__notification_00123048 == Container::_notification) {
      return;
   }

   BoxContainer::_notification(iVar1);
   return;
}
/* HBoxContainer::_notificationv(int, bool) */void HBoxContainer::_notificationv(HBoxContainer *this, int param_1, bool param_2) {
   if (param_2) {
      BoxContainer::_notificationv((BoxContainer*)this, param_1, true);
      return;
   }

   BoxContainer::_notificationv((BoxContainer*)this, param_1, false);
   return;
}
/* VBoxContainer::_notificationv(int, bool) */void VBoxContainer::_notificationv(VBoxContainer *this, int param_1, bool param_2) {
   if (param_2) {
      BoxContainer::_notificationv((BoxContainer*)this, param_1, true);
      return;
   }

   BoxContainer::_notificationv((BoxContainer*)this, param_1, false);
   return;
}
/* Window::is_class(String const&) const */undefined8 Window::is_class(Window *this, String *param_1) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar5 = String::operator ==(param_1, (String*)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (cVar5 != '\0') goto LAB_001149eb;
   }

   cVar5 = String::operator ==(param_1, "Window");
   if (cVar5 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar5 = String::operator ==(param_1, (String*)&local_60);
         lVar4 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (cVar5 != '\0') goto LAB_001149eb;
      }

      cVar5 = String::operator ==(param_1, "Viewport");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = Node::is_class((Node*)this, param_1);
            return uVar6;
         }

         goto LAB_00114b28;
      }

   }

   LAB_001149eb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00114b28:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* AnimationLibraryEditor::is_class(String const&) const */undefined8 AnimationLibraryEditor::is_class(AnimationLibraryEditor *this, String *param_1) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar5 = String::operator ==(param_1, (String*)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (cVar5 != '\0') goto LAB_00114c3b;
   }

   cVar5 = String::operator ==(param_1, "AnimationLibraryEditor");
   if (cVar5 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar5 = String::operator ==(param_1, (String*)&local_60);
         lVar4 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (cVar5 != '\0') goto LAB_00114c3b;
      }

      cVar5 = String::operator ==(param_1, "AcceptDialog");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = Window::is_class((Window*)this, param_1);
            return uVar6;
         }

         goto LAB_00114d78;
      }

   }

   LAB_00114c3b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00114d78:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

   return;
}
/* List<StringName, DefaultAllocator>::~List() */void List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   plVar4 = *(long**)this;
   if (plVar4 == (long*)0x0) {
      return;
   }

   do {
      plVar1 = (long*)*plVar4;
      if (plVar1 == (long*)0x0) {
         if ((int)plVar4[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if ((long*)plVar1[3] == plVar4) {
         lVar3 = plVar1[1];
         lVar2 = plVar1[2];
         *plVar4 = lVar3;
         if (plVar1 == (long*)plVar4[1]) {
            plVar4[1] = lVar2;
         }

         if (lVar2 != 0) {
            *(long*)( lVar2 + 8 ) = lVar3;
            lVar3 = plVar1[1];
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }

         if (( StringName::configured != '\0' ) && ( *plVar1 != 0 )) {
            StringName::unref();
         }

         Memory::free_static(plVar1, false);
         *(int*)( plVar4 + 2 ) = (int)plVar4[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar4 = *(long**)this;
   }
 while ( (int)plVar4[2] != 0 );
   Memory::free_static(plVar4, false);
   return;
}
/* Ref<Animation>::unref() */void Ref<Animation>::unref(Ref<Animation> *this) {
   Object *pOVar1;
   char cVar2;
   if (*(long*)this != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)this;
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            *(undefined8*)this = 0;
            return;
         }

      }

   }

   *(undefined8*)this = 0;
   return;
}
/* void EditorUndoRedoManager::add_undo_method<String>(Object*, StringName const&, String) */void EditorUndoRedoManager::add_undo_method<String>(EditorUndoRedoManager *this, StringName *param_1, Variant **param_2, String *param_4) {
   char cVar1;
   long in_FS_OFFSET;
   Variant *local_78[2];
   int local_68[6];
   undefined8 local_50;
   undefined1 local_48[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_68, param_4);
   local_50 = 0;
   local_48 = (undefined1[16])0x0;
   local_78[0] = (Variant*)local_68;
   EditorUndoRedoManager::add_undo_methodp((Object*)this, param_1, param_2, (int)local_78);
   if (Variant::needs_deinit[(int)local_50] == '\0') {
      cVar1 = Variant::needs_deinit[local_68[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_68[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void EditorUndoRedoManager::add_do_method<AnimationMixer*>(Object*, StringName const&,
   AnimationMixer*) */void EditorUndoRedoManager::add_do_method<AnimationMixer*>(EditorUndoRedoManager *this, Object *param_1, StringName *param_2, AnimationMixer *param_3) {
   char cVar1;
   long in_FS_OFFSET;
   Variant *local_78[2];
   int local_68[6];
   undefined8 local_50;
   undefined1 local_48[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_68, (Object*)param_3);
   local_50 = 0;
   local_48 = (undefined1[16])0x0;
   local_78[0] = (Variant*)local_68;
   EditorUndoRedoManager::add_do_methodp((Object*)this, (StringName*)param_1, (Variant**)param_2, (int)local_78);
   if (Variant::needs_deinit[(int)local_50] == '\0') {
      cVar1 = Variant::needs_deinit[local_68[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_68[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void EditorUndoRedoManager::add_undo_method<AnimationMixer*>(Object*, StringName const&,
   AnimationMixer*) */void EditorUndoRedoManager::add_undo_method<AnimationMixer*>(EditorUndoRedoManager *this, Object *param_1, StringName *param_2, AnimationMixer *param_3) {
   char cVar1;
   long in_FS_OFFSET;
   Variant *local_78[2];
   int local_68[6];
   undefined8 local_50;
   undefined1 local_48[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_68, (Object*)param_3);
   local_50 = 0;
   local_48 = (undefined1[16])0x0;
   local_78[0] = (Variant*)local_68;
   EditorUndoRedoManager::add_undo_methodp((Object*)this, (StringName*)param_1, (Variant**)param_2, (int)local_78);
   if (Variant::needs_deinit[(int)local_50] == '\0') {
      cVar1 = Variant::needs_deinit[local_68[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_68[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void EditorUndoRedoManager::add_do_method<StringName>(Object*, StringName const&, StringName) */void EditorUndoRedoManager::add_do_method<StringName>(EditorUndoRedoManager *this, StringName *param_1, Variant **param_2, StringName *param_4) {
   char cVar1;
   long in_FS_OFFSET;
   Variant *local_78[2];
   int local_68[6];
   undefined8 local_50;
   undefined1 local_48[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_68, param_4);
   local_50 = 0;
   local_48 = (undefined1[16])0x0;
   local_78[0] = (Variant*)local_68;
   EditorUndoRedoManager::add_do_methodp((Object*)this, param_1, param_2, (int)local_78);
   if (Variant::needs_deinit[(int)local_50] == '\0') {
      cVar1 = Variant::needs_deinit[local_68[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_68[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void Ref<ConfigFile>::instantiate<>() */void Ref<ConfigFile>::instantiate<>(Ref<ConfigFile> *this) {
   char cVar1;
   RefCounted *this_00;
   long lVar2;
   RefCounted *pRVar3;
   Object *pOVar4;
   Object *pOVar5;
   byte bVar6;
   bVar6 = 0;
   this_00 = (RefCounted*)operator_new(0x1b0, "");
   pRVar3 = this_00;
   for (lVar2 = 0x36; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined8*)pRVar3 = 0;
      pRVar3 = pRVar3 + (ulong)bVar6 * -0x10 + 8;
   }

   RefCounted::RefCounted(this_00);
   *(undefined***)this_00 = &PTR__initialize_classv_0011d168;
   *(undefined8*)( this_00 + 0x1a8 ) = 2;
   *(undefined1(*) [16])( this_00 + 0x188 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x198 ) = (undefined1[16])0x0;
   postinitialize_handler((Object*)this_00);
   cVar1 = RefCounted::init_ref();
   if (cVar1 == '\0') {
      pOVar5 = *(Object**)this;
      if (pOVar5 == (Object*)0x0) {
         return;
      }

      *(undefined8*)this = 0;
      cVar1 = RefCounted::unreference();
      if (cVar1 == '\0') {
         return;
      }

      this_00 = (RefCounted*)0x0;
      cVar1 = predelete_handler(pOVar5);
      if (cVar1 == '\0') {
         return;
      }

   }
 else {
      pOVar5 = *(Object**)this;
      pOVar4 = pOVar5;
      if (this_00 == (RefCounted*)pOVar5) goto LAB_001153c5;
      *(RefCounted**)this = this_00;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *(undefined8*)this = 0;
      }

      pOVar4 = (Object*)this_00;
      if (( ( pOVar5 == (Object*)0x0 ) || ( cVar1 = RefCounted::unreference() ),cVar1 == '\0' )) goto LAB_001153c5;
   }

   ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
   Memory::free_static(pOVar5, false);
   pOVar4 = (Object*)this_00;
   if (this_00 == (RefCounted*)0x0) {
      return;
   }

   LAB_001153c5:cVar1 = RefCounted::unreference();
   if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
      ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
      Memory::free_static(pOVar4, false);
      return;
   }

   return;
}
/* void List<StringName, DefaultAllocator>::sort_custom<StringName::AlphCompare>() */void List<StringName,DefaultAllocator>::sort_custom<StringName::AlphCompare>(List<StringName,DefaultAllocator> *this) {
   int iVar1;
   Element *pEVar2;
   long *plVar3;
   Element **ppEVar4;
   Element **ppEVar5;
   Element **ppEVar6;
   Element *pEVar7;
   if (*(long*)this == 0) {
      return;
   }

   iVar1 = *(int*)( *(long*)this + 0x10 );
   if (1 < iVar1) {
      pEVar7 = (Element*)(long)iVar1;
      ppEVar4 = (Element**)Memory::alloc_static((long)pEVar7 * 8, true);
      if (ppEVar4 == (Element**)0x0) {
         _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
      }
 else {
         ppEVar4[-1] = pEVar7;
      }

      if (*(long**)this != (long*)0x0) {
         ppEVar5 = ppEVar4;
         for (pEVar2 = (Element*)**(long**)this; pEVar2 != (Element*)0x0; pEVar2 = *(Element**)( pEVar2 + 8 )) {
            *ppEVar5 = pEVar2;
            ppEVar5 = ppEVar5 + 1;
         }

      }

      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::sort(ppEVar4, (long)pEVar7);
      plVar3 = *(long**)this;
      pEVar2 = *ppEVar4;
      *plVar3 = (long)pEVar2;
      *(undefined8*)( pEVar2 + 0x10 ) = 0;
      *(Element**)( *ppEVar4 + 8 ) = ppEVar4[1];
      pEVar2 = ppEVar4[(long)( pEVar7 + -1 )];
      plVar3[1] = (long)pEVar2;
      *(Element**)( pEVar2 + 0x10 ) = ppEVar4[(long)( pEVar7 + -2 )];
      *(undefined8*)( ppEVar4[(long)( pEVar7 + -1 )] + 8 ) = 0;
      if (iVar1 != 2) {
         ppEVar5 = ppEVar4;
         do {
            ppEVar6 = ppEVar5 + 1;
            *(Element**)( ppEVar5[1] + 0x10 ) = *ppEVar5;
            *(Element**)( *ppEVar6 + 8 ) = ppEVar5[2];
            ppEVar5 = ppEVar6;
         }
 while ( ppEVar4 + ( iVar1 - 2 ) != ppEVar6 );
      }

      Memory::free_static(ppEVar4, true);
      return;
   }

   return;
}
/* Callable create_custom_callable_function_pointer<AnimationLibraryEditor, String
   const&>(AnimationLibraryEditor*, char const*, void (AnimationLibraryEditor::*)(String const&)) */AnimationLibraryEditor *create_custom_callable_function_pointer<AnimationLibraryEditor,String_const&>(AnimationLibraryEditor *param_1, char *param_2, _func_void_String_ptr *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC0;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_0011dc30;
   uVar1 = *(undefined8*)( param_2 + 0x60 );
   *(char**)( this + 0x28 ) = param_2;
   *(undefined8*)( this + 0x30 ) = uVar1;
   *(undefined8*)( this + 0x38 ) = in_RCX;
   *(undefined8*)( this + 0x40 ) = in_R8;
   *(undefined8*)( this + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
   *(_func_void_String_ptr**)( this + 0x20 ) = param_3 + 1;
   Callable::Callable((Callable*)param_1, this);
   return param_1;
}
/* Callable create_custom_callable_function_pointer<AnimationLibraryEditor>(AnimationLibraryEditor*,
   char const*, void (AnimationLibraryEditor::*)()) */AnimationLibraryEditor *create_custom_callable_function_pointer<AnimationLibraryEditor>(AnimationLibraryEditor *param_1, char *param_2, _func_void *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC0;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_0011dd50;
   uVar1 = *(undefined8*)( param_2 + 0x60 );
   *(char**)( this + 0x28 ) = param_2;
   *(undefined8*)( this + 0x30 ) = uVar1;
   *(undefined8*)( this + 0x38 ) = in_RCX;
   *(undefined8*)( this + 0x40 ) = in_R8;
   *(undefined8*)( this + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
   *(_func_void**)( this + 0x20 ) = param_3 + 1;
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
/* ConfigFile::_initialize_classv() */void ConfigFile::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (RefCounted::initialize_class() == '\0') {
         Object::initialize_class();
         local_68 = 0;
         local_50 = 6;
         local_58 = "Object";
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "RefCounted";
         local_70 = 0;
         local_50 = 10;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         if ((code*)PTR__bind_methods_00123058 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
         }

         RefCounted::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "ConfigFile";
      local_70 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      if ((code*)PTR__bind_methods_00123050 != RefCounted::_bind_methods) {
         ConfigFile::_bind_methods();
      }

      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Removing unreachable block (ram,0x00115b98) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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
/* WARNING: Removing unreachable block (ram,0x00115e98) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
/* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   void *pvVar5;
   pvVar5 = *(void**)( this + 0x18 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( this + 0x3c ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x38 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x3c ) = 0;
            *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x20 ) + lVar4 ) != 0) {
                  pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                  *(int*)( *(long*)( this + 0x20 ) + lVar4 ) = 0;
                  if (Variant::needs_deinit[*(int*)( (long)pvVar5 + 0x48 )] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (*(long*)( (long)pvVar5 + 0x38 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x38 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x38 );
                        *(undefined8*)( (long)pvVar5 + 0x38 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar5 + 0x28 ) != 0 )) {
                     StringName::unref();
                  }

                  if (*(long*)( (long)pvVar5 + 0x20 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x20 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x20 );
                        *(undefined8*)( (long)pvVar5 + 0x20 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (*(long*)( (long)pvVar5 + 0x10 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x10 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x10 );
                        *(undefined8*)( (long)pvVar5 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar5, false);
                  pvVar5 = *(void**)( this + 0x18 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( lVar4 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x3c ) = 0;
            *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_001161c4;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_001161c4:CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* List<String, DefaultAllocator>::~List() */void List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this) {
   CowData<char32_t> *this_00;
   long lVar1;
   long lVar2;
   long *plVar3;
   plVar3 = *(long**)this;
   if (plVar3 == (long*)0x0) {
      return;
   }

   do {
      this_00 = (CowData<char32_t>*)*plVar3;
      if (this_00 == (CowData<char32_t>*)0x0) {
         if ((int)plVar3[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(long**)( this_00 + 0x18 ) == plVar3) {
         lVar2 = *(long*)( this_00 + 8 );
         lVar1 = *(long*)( this_00 + 0x10 );
         *plVar3 = lVar2;
         if (this_00 == (CowData<char32_t>*)plVar3[1]) {
            plVar3[1] = lVar1;
         }

         if (lVar1 != 0) {
            *(long*)( lVar1 + 8 ) = lVar2;
            lVar2 = *(long*)( this_00 + 8 );
         }

         if (lVar2 != 0) {
            *(long*)( lVar2 + 0x10 ) = lVar1;
         }

         CowData<char32_t>::_unref(this_00);
         Memory::free_static(this_00, false);
         *(int*)( plVar3 + 2 ) = (int)plVar3[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar3 = *(long**)this;
   }
 while ( (int)plVar3[2] != 0 );
   Memory::free_static(plVar3, false);
   return;
}
/* MethodBindT<Object*>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Object*>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_001165c1;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0011644d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined8*)( *(long*)param_3 + 0x10 ));
      return;
   }

   LAB_001165c1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<AnimationLibraryEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<AnimationLibraryEditor,void>::call(CallableCustomMethodPointer<AnimationLibraryEditor,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   uint uVar3;
   ulong *puVar4;
   code *UNRECOVERED_JUMPTABLE;
   ulong uVar5;
   long in_FS_OFFSET;
   bool bVar6;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar5 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar5 << 8 );
         LOCK();
         bVar6 = (char)ObjectDB::spin_lock == '\0';
         if (bVar6) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar6) break;
         local_48 = (char*)( uVar5 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      uVar5 = *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff;
      if (uVar5 != ( *puVar4 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_001167bf;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_001167bf;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00116798. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_00116881;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_001167bf:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC86, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00116881:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Object*>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Object*>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00116a69;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   plVar1 = *param_3;
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (plVar1 != (long*)0x0) {
      plVar1 = (long*)*plVar1;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x001168f1. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), plVar1);
      return;
   }

   LAB_00116a69:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Object*>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<Object*>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   Object *pOVar7;
   long *plVar8;
   Object *pOVar9;
   long lVar10;
   undefined4 in_register_00000014;
   long *plVar11;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar12;
   Variant *pVVar13;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar8 = (long*)plVar11[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar8 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC86, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00116c20;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (1 < in_R8D) {
      uVar6 = 3;
      LAB_00116c15:*in_R9 = uVar6;
      in_R9[2] = 1;
      goto LAB_00116c20;
   }

   pVVar13 = param_2[5];
   if (pVVar13 == (Variant*)0x0) {
      if (in_R8D != 1) goto LAB_00116c70;
      LAB_00116c60:pVVar13 = *(Variant**)param_4;
   }
 else {
      lVar2 = *(long*)( pVVar13 + -8 );
      if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
         LAB_00116c70:uVar6 = 4;
         goto LAB_00116c15;
      }

      if (in_R8D == 1) goto LAB_00116c60;
      lVar10 = (long)( (int)lVar2 + -1 );
      if (lVar2 <= lVar10) {
         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      pVVar13 = pVVar13 + lVar10 * 0x18;
   }

   *in_R9 = 0;
   if (( (ulong)pVVar12 & 1 ) != 0) {
      pVVar12 = *(Variant**)( pVVar12 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar13, 0x18);
   if (cVar5 == '\0') {
      LAB_00116be6:uVar4 = _LC92;
      *in_R9 = 2;
      *(undefined8*)( in_R9 + 1 ) = uVar4;
   }
 else {
      pOVar7 = Variant::operator_cast_to_Object_(pVVar13);
      pOVar9 = Variant::operator_cast_to_Object_(pVVar13);
      if (( pOVar9 == (Object*)0x0 ) && ( pOVar7 != (Object*)0x0 )) goto LAB_00116be6;
   }

   pOVar7 = Variant::operator_cast_to_Object_(pVVar13);
   ( *(code*)pVVar12 )((Variant*)( (long)plVar11 + (long)pVVar1 ), pOVar7);
   LAB_00116c20:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* CallableCustomMethodPointer<AnimationLibraryEditor, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<AnimationLibraryEditor,void,int>::call(CallableCustomMethodPointer<AnimationLibraryEditor,void,int> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   ulong uVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   uint uVar7;
   ulong *puVar8;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   bool bVar9;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar7 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar7 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar3 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar3 << 8 );
         LOCK();
         bVar9 = (char)ObjectDB::spin_lock == '\0';
         if (bVar9) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar9) break;
         local_48 = (char*)( uVar3 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar8 = (ulong*)( (ulong)uVar7 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar8 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_00117038;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar8[1] == 0) goto LAB_00117038;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 2) {
         if (param_2 != 0) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 2);
            uVar4 = _LC94;
            if (cVar5 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            iVar6 = Variant::operator_cast_to_int(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x00116fe7. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), iVar6);
               return;
            }

            goto LAB_001170fa;
         }

         *(undefined4*)param_4 = 4;
         *(undefined4*)( param_4 + 8 ) = 1;
      }
 else {
         *(undefined4*)param_4 = 3;
         *(undefined4*)( param_4 + 8 ) = 1;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_00117038:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC86, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001170fa:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<AnimationLibraryEditor, void, TreeItem*>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<AnimationLibraryEditor,void,TreeItem*>::call(CallableCustomMethodPointer<AnimationLibraryEditor,void,TreeItem*> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   Variant *this_00;
   ulong uVar3;
   undefined8 uVar4;
   char cVar5;
   Object *pOVar6;
   Object *pOVar7;
   long lVar8;
   uint uVar9;
   ulong *puVar10;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   bool bVar11;
   CowData<char32_t> local_70[8];
   CowData<char32_t> local_68[8];
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar9 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar9 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar3 = (ulong)local_58 >> 8;
         local_58 = (char*)( uVar3 << 8 );
         LOCK();
         bVar11 = (char)ObjectDB::spin_lock == '\0';
         if (bVar11) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar11) break;
         local_58 = (char*)( uVar3 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar10 = (ulong*)( (ulong)uVar9 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar10 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_00117335;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar10[1] == 0) goto LAB_00117335;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 2) {
         if (param_2 != 0) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 0x18);
            if (cVar5 == '\0') {
               LAB_00117240:uVar4 = _LC92;
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }
 else {
               this_00 = *param_1;
               pOVar6 = Variant::operator_cast_to_Object_(this_00);
               pOVar7 = Variant::operator_cast_to_Object_(this_00);
               if (( ( pOVar7 == (Object*)0x0 ) || ( lVar8 = __dynamic_cast(pOVar7, &Object::typeinfo, &TreeItem::typeinfo, 0) ),lVar8 == 0 )) goto LAB_00117240;
            }

            pOVar6 = Variant::operator_cast_to_Object_(*param_1);
            if (pOVar6 != (Object*)0x0) {
               pOVar6 = (Object*)__dynamic_cast(pOVar6, &Object::typeinfo, &TreeItem::typeinfo, 0);
            }

            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x001172a7. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), pOVar6);
               return;
            }

            goto LAB_001173f7;
         }

         *(undefined4*)param_4 = 4;
         *(undefined4*)( param_4 + 8 ) = 1;
      }
 else {
         *(undefined4*)param_4 = 3;
         *(undefined4*)( param_4 + 8 ) = 1;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_00117335:local_60 = 0;
      local_58 = "\', can\'t call method.";
      local_50 = 0x15;
      String::parse_latin1((StrRange*)&local_60);
      uitos((ulong)local_70);
      operator+((char *)
      local_68,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_58, (String*)local_68);
      _err_print_error(&_LC86, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_58, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref(local_68);
      CowData<char32_t>::_unref(local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001173f7:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<AnimationLibraryEditor, void, TreeItem*, int, int,
   MouseButton>::call(Variant const**, int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<AnimationLibraryEditor,void,TreeItem*,int,int,MouseButton>::call(CallableCustomMethodPointer<AnimationLibraryEditor,void,TreeItem*,int,int,MouseButton> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   Variant *this_00;
   undefined8 uVar3;
   char cVar4;
   int iVar5;
   int iVar6;
   ulong uVar7;
   Object *pOVar8;
   Object *pOVar9;
   long lVar10;
   uint uVar11;
   ulong *puVar12;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   bool bVar13;
   CowData<char32_t> local_70[8];
   CowData<char32_t> local_68[8];
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar11 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar11 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar7 = (ulong)local_58 >> 8;
         local_58 = (char*)( uVar7 << 8 );
         LOCK();
         bVar13 = (char)ObjectDB::spin_lock == '\0';
         if (bVar13) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar13) break;
         local_58 = (char*)( uVar7 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar12 = (ulong*)( (ulong)uVar11 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar12 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0011767d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar12[1] == 0) goto LAB_0011767d;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 5) {
         if (param_2 == 4) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar4 = Variant::can_convert_strict(*(undefined4*)param_1[3], 2);
            uVar3 = _LC95;
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }

            uVar7 = Variant::operator_cast_to_long(param_1[3]);
            cVar4 = Variant::can_convert_strict(*(undefined4*)param_1[2], 2);
            uVar3 = _LC96;
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }

            iVar5 = Variant::operator_cast_to_int(param_1[2]);
            cVar4 = Variant::can_convert_strict(*(undefined4*)param_1[1], 2);
            uVar3 = _LC97;
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }

            iVar6 = Variant::operator_cast_to_int(param_1[1]);
            cVar4 = Variant::can_convert_strict(*(undefined4*)*param_1, 0x18);
            if (cVar4 == '\0') {
               LAB_001175e6:uVar3 = _LC92;
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }
 else {
               this_00 = *param_1;
               pOVar8 = Variant::operator_cast_to_Object_(this_00);
               pOVar9 = Variant::operator_cast_to_Object_(this_00);
               if (( ( pOVar9 == (Object*)0x0 ) || ( lVar10 = __dynamic_cast(pOVar9, &Object::typeinfo, &TreeItem::typeinfo, 0) ),lVar10 == 0 )) goto LAB_001175e6;
            }

            pOVar8 = Variant::operator_cast_to_Object_(*param_1);
            if (pOVar8 != (Object*)0x0) {
               pOVar8 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &TreeItem::typeinfo, 0);
            }

            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x00117656. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), pOVar8, iVar6, iVar5, uVar7 & 0xffffffff);
               return;
            }

            goto LAB_00117793;
         }

         *(undefined4*)param_4 = 4;
         *(undefined4*)( param_4 + 8 ) = 4;
      }
 else {
         *(undefined4*)param_4 = 3;
         *(undefined4*)( param_4 + 8 ) = 4;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0011767d:local_60 = 0;
      local_58 = "\', can\'t call method.";
      local_50 = 0x15;
      String::parse_latin1((StrRange*)&local_60);
      uitos((ulong)local_70);
      operator+((char *)
      local_68,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_58, (String*)local_68);
      _err_print_error(&_LC86, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_58, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref(local_68);
      CowData<char32_t>::_unref(local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00117793:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<AnimationLibraryEditor, void, String const&>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<AnimationLibraryEditor,void,String_const&>::call(CallableCustomMethodPointer<AnimationLibraryEditor,void,String_const&> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   ulong uVar3;
   undefined8 uVar4;
   char cVar5;
   uint uVar6;
   ulong *puVar7;
   code *pcVar8;
   long in_FS_OFFSET;
   bool bVar9;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar6 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar3 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar3 << 8 );
         LOCK();
         bVar9 = (char)ObjectDB::spin_lock == '\0';
         if (bVar9) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar9) break;
         local_48 = (char*)( uVar3 << 8 );
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
            if ((uint)param_2 < 2) {
               if (param_2 == 0) {
                  *(undefined4*)param_4 = 4;
                  *(undefined4*)( param_4 + 8 ) = 1;
               }
 else {
                  *(undefined4*)param_4 = 0;
                  if (( (ulong)pcVar8 & 1 ) != 0) {
                     pcVar8 = *(code**)( pcVar8 + *(long*)( lVar1 + lVar2 ) + -1 );
                  }

                  cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 4);
                  uVar4 = _LC98;
                  if (cVar5 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar4;
                  }

                  Variant::operator_cast_to_String((Variant*)&local_48);
                  ( *pcVar8 )((long*)( lVar1 + lVar2 ), (Variant*)&local_48);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
               }

            }
 else {
               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 1;
            }

            goto LAB_0011786e;
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
   local_48 = "\', can\'t call method.";
   local_40 = 0x15;
   String::parse_latin1((StrRange*)&local_50);
   uitos((ulong)local_60);
   operator+((char *)
   local_58,(String*)"Invalid Object id \'";
   String::operator +((String*)&local_48, (String*)local_58);
   _err_print_error(&_LC86, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (Variant*)&local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref(local_58);
   CowData<char32_t>::_unref(local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   LAB_0011786e:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* RefCounted::_initialize_classv() */void RefCounted::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      Object::initialize_class();
      local_58 = 0;
      local_40 = 6;
      local_48 = "Object";
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "RefCounted";
      local_60 = 0;
      local_40 = 10;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if ((code*)PTR__bind_methods_00123060 != Object::_bind_methods) {
         RefCounted::_bind_methods();
      }

      initialize_class()::initialized =
      '\x01';
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Object*>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Object*>::_gen_argument_type_info(int param_1) {
   long lVar1;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar2;
   long in_FS_OFFSET;
   undefined8 local_78;
   long local_70;
   char *local_68;
   long local_60;
   long local_58;
   undefined4 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar2 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar2 = 0;
   puVar2[6] = 0;
   *(undefined8*)( puVar2 + 8 ) = 0;
   puVar2[10] = 6;
   *(undefined1(*) [16])( puVar2 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_78 = 0;
      local_68 = "Object";
      local_60 = 6;
      String::parse_latin1((StrRange*)&local_78);
      StringName::StringName((StringName*)&local_70, (String*)&local_78, false);
      local_68 = (char*)CONCAT44(local_68._4_4_, 0x18);
      local_60 = 0;
      StringName::StringName((StringName*)&local_58, (StringName*)&local_70);
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      *puVar2 = local_68._0_4_;
      if (*(long*)( puVar2 + 2 ) != local_60) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 2 ));
         lVar1 = local_60;
         local_60 = 0;
         *(long*)( puVar2 + 2 ) = lVar1;
      }

      if (*(long*)( puVar2 + 4 ) != local_58) {
         StringName::unref();
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( puVar2 + 4 ) = lVar1;
      }

      puVar2[6] = local_50;
      if (*(long*)( puVar2 + 8 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 8 ));
         lVar1 = local_48;
         local_48 = 0;
         *(long*)( puVar2 + 8 ) = lVar1;
      }

      puVar2[10] = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VBoxContainer::_initialize_classv() */void VBoxContainer::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (BoxContainer::initialize_class() == '\0') {
         if (Container::initialize_class() == '\0') {
            if (Control::initialize_class() == '\0') {
               if (CanvasItem::initialize_class() == '\0') {
                  if (Node::initialize_class() == '\0') {
                     Object::initialize_class();
                     local_60 = 0;
                     String::parse_latin1((String*)&local_60, "Object");
                     StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                     local_70 = 0;
                     String::parse_latin1((String*)&local_70, "Node");
                     StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
                     ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                     if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     if ((code*)PTR__bind_methods_00123058 != Node::_bind_methods) {
                        Node::_bind_methods();
                     }

                     Node::initialize_class()::initialized =
                     '\x01';
                  }

                  local_60 = 0;
                  String::parse_latin1((String*)&local_60, "Node");
                  StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                  local_70 = 0;
                  String::parse_latin1((String*)&local_70, "CanvasItem");
                  StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
                  ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                  if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  CanvasItem::_bind_methods();
                  if ((code*)PTR__bind_compatibility_methods_00123068 != Object::_bind_compatibility_methods) {
                     CanvasItem::_bind_compatibility_methods();
                  }

                  CanvasItem::initialize_class()::initialized =
                  '\x01';
               }

               local_58 = "CanvasItem";
               local_68 = 0;
               local_50 = 10;
               String::parse_latin1((StrRange*)&local_68);
               StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
               local_58 = "Control";
               local_70 = 0;
               local_50 = 7;
               String::parse_latin1((StrRange*)&local_70);
               StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               Control::_bind_methods();
               Control::initialize_class()::initialized =
               '\x01';
            }

            local_68 = 0;
            local_58 = "Control";
            local_50 = 7;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "Container";
            local_70 = 0;
            local_50 = 9;
            String::parse_latin1((StrRange*)&local_70);
            StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            Container::_bind_methods();
            Container::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "Container";
         local_68 = 0;
         local_50 = 9;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "BoxContainer";
         local_70 = 0;
         local_50 = 0xc;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         if ((code*)PTR__bind_methods_00123070 != Container::_bind_methods) {
            BoxContainer::_bind_methods();
         }

         BoxContainer::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "BoxContainer";
      local_68 = 0;
      local_50 = 0xc;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "VBoxContainer";
      local_70 = 0;
      local_50 = 0xd;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* HBoxContainer::_initialize_classv() */void HBoxContainer::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (BoxContainer::initialize_class() == '\0') {
         if (Container::initialize_class() == '\0') {
            if (Control::initialize_class() == '\0') {
               if (CanvasItem::initialize_class() == '\0') {
                  if (Node::initialize_class() == '\0') {
                     Object::initialize_class();
                     local_60 = 0;
                     String::parse_latin1((String*)&local_60, "Object");
                     StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                     local_70 = 0;
                     String::parse_latin1((String*)&local_70, "Node");
                     StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
                     ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                     if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     if ((code*)PTR__bind_methods_00123058 != Node::_bind_methods) {
                        Node::_bind_methods();
                     }

                     Node::initialize_class()::initialized =
                     '\x01';
                  }

                  local_60 = 0;
                  String::parse_latin1((String*)&local_60, "Node");
                  StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                  local_70 = 0;
                  String::parse_latin1((String*)&local_70, "CanvasItem");
                  StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
                  ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                  if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  CanvasItem::_bind_methods();
                  if ((code*)PTR__bind_compatibility_methods_00123068 != Object::_bind_compatibility_methods) {
                     CanvasItem::_bind_compatibility_methods();
                  }

                  CanvasItem::initialize_class()::initialized =
                  '\x01';
               }

               local_58 = "CanvasItem";
               local_68 = 0;
               local_50 = 10;
               String::parse_latin1((StrRange*)&local_68);
               StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
               local_58 = "Control";
               local_70 = 0;
               local_50 = 7;
               String::parse_latin1((StrRange*)&local_70);
               StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               Control::_bind_methods();
               Control::initialize_class()::initialized =
               '\x01';
            }

            local_68 = 0;
            local_58 = "Control";
            local_50 = 7;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "Container";
            local_70 = 0;
            local_50 = 9;
            String::parse_latin1((StrRange*)&local_70);
            StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            Container::_bind_methods();
            Container::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "Container";
         local_68 = 0;
         local_50 = 9;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "BoxContainer";
         local_70 = 0;
         local_50 = 0xc;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         if ((code*)PTR__bind_methods_00123070 != Container::_bind_methods) {
            BoxContainer::_bind_methods();
         }

         BoxContainer::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "BoxContainer";
      local_68 = 0;
      local_50 = 0xc;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "HBoxContainer";
      local_70 = 0;
      local_50 = 0xd;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   void *pvVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   plVar4 = *(long**)this;
   if (plVar4 == (long*)0x0) {
      return;
   }

   do {
      pvVar1 = (void*)*plVar4;
      if (pvVar1 == (void*)0x0) {
         if ((int)plVar4[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(long**)( (long)pvVar1 + 0x40 ) == plVar4) {
         lVar3 = *(long*)( (long)pvVar1 + 0x30 );
         lVar2 = *(long*)( (long)pvVar1 + 0x38 );
         *plVar4 = lVar3;
         if (pvVar1 == (void*)plVar4[1]) {
            plVar4[1] = lVar2;
         }

         if (lVar2 != 0) {
            *(long*)( lVar2 + 0x30 ) = lVar3;
            lVar3 = *(long*)( (long)pvVar1 + 0x30 );
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x38 ) = lVar2;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar1 + 0x20 ));
         if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar1 + 0x10 ) != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar1 + 8 ));
         Memory::free_static(pvVar1, false);
         *(int*)( plVar4 + 2 ) = (int)plVar4[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar4 = *(long**)this;
   }
 while ( (int)plVar4[2] != 0 );
   Memory::free_static(plVar4, false);
   return;
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
   local_78 = &_LC21;
   local_88 = 0;
   local_90 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC21;
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
      LAB_00118c3d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00118c3d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar5;
         local_68 = local_80;
         goto joined_r0x00118c5f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar5;
   joined_r0x00118c5f:if (lVar2 == 0) {
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
/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
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
   char *local_78;
   long local_70;
   long local_68;
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   pLVar5 = (List*)CONCAT71(in_register_00000031, param_2);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = "RefCounted";
   local_88 = 0;
   local_90 = 0;
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "RefCounted";
   local_98 = 0;
   local_70 = 10;
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
      LAB_00118fad:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00118fad;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar5;
         local_68 = local_80;
         goto joined_r0x00118fcf;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar5;
   joined_r0x00118fcf:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "RefCounted", false);
   ClassDB::get_property_list((StringName*)&local_78, pLVar5, true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Viewport::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Viewport::_get_property_listv(Viewport *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   CowData<char32_t> *local_b0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Node::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Viewport";
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Viewport";
   local_98 = 0;
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_00119301;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00119301:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Viewport", false);
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
/* ConfigFile::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void ConfigFile::_get_property_listv(ConfigFile *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   CowData<char32_t> *local_b0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "ConfigFile";
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "ConfigFile";
   local_98 = 0;
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_001195b1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_001195b1:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "ConfigFile", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Window::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Window::_get_property_listv(Window *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   CowData<char32_t> *local_b0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Viewport::_get_property_listv((Viewport*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Window";
   local_70 = 6;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Window";
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
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_00119861;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00119861:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Window", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if ((code*)PTR__get_property_list_00123078 != Object::_get_property_list) {
      Window::_get_property_list((List*)this);
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Viewport::_get_property_listv((Viewport*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AcceptDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void AcceptDialog::_get_property_listv(AcceptDialog *this, List *param_1, bool param_2) {
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
      Window::_get_property_listv((Window*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "AcceptDialog";
   local_70 = 0xc;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "AcceptDialog";
   local_98 = 0;
   local_70 = 0xc;
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
      LAB_00119b5d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00119b5d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00119b7f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00119b7f:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "AcceptDialog", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Window::_get_property_listv((Window*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationLibraryEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void AnimationLibraryEditor::_get_property_listv(AnimationLibraryEditor *this, List *param_1, bool param_2) {
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
      AcceptDialog::_get_property_listv((AcceptDialog*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "AnimationLibraryEditor";
   local_70 = 0x16;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "AnimationLibraryEditor";
   local_98 = 0;
   local_70 = 0x16;
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
      LAB_00119f3d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00119f3d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00119f5f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00119f5f:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "AnimationLibraryEditor", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         AcceptDialog::_get_property_listv((AcceptDialog*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void CanvasItem::_get_property_listv(CanvasItem *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   CowData<char32_t> *local_b0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Node::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "CanvasItem";
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "CanvasItem";
   local_98 = 0;
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_0011a2f1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0011a2f1:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "CanvasItem", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if ((code*)PTR__get_property_list_00123080 != Object::_get_property_list) {
      CanvasItem::_get_property_list((List*)this);
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
/* Control::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Control::_get_property_listv(Control *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   CowData<char32_t> *local_b0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      CanvasItem::_get_property_listv((CanvasItem*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Control";
   local_70 = 7;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Control";
   local_98 = 0;
   local_70 = 7;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_0011a5c1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0011a5c1:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Control", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if ((code*)PTR__get_property_list_00123088 != CanvasItem::_get_property_list) {
      Control::_get_property_list((List*)this);
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         CanvasItem::_get_property_listv((CanvasItem*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Container::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Container::_get_property_listv(Container *this, List *param_1, bool param_2) {
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
      Control::_get_property_listv((Control*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Container";
   local_70 = 9;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Container";
   local_98 = 0;
   local_70 = 9;
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
      LAB_0011a8bd:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0011a8bd;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0011a8df;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0011a8df:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "Container", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Control::_get_property_listv((Control*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* BoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void BoxContainer::_get_property_listv(BoxContainer *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   CowData<char32_t> *local_b0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Container::_get_property_listv((Container*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "BoxContainer";
   local_70 = 0xc;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "BoxContainer";
   local_98 = 0;
   local_70 = 0xc;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_0011ac71;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0011ac71:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "BoxContainer", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Container::_get_property_listv((Container*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void VBoxContainer::_get_property_listv(VBoxContainer *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   CowData<char32_t> *local_b0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      BoxContainer::_get_property_listv((BoxContainer*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "VBoxContainer";
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "VBoxContainer";
   local_98 = 0;
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_0011af21;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0011af21:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "VBoxContainer", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         BoxContainer::_get_property_listv((BoxContainer*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void HBoxContainer::_get_property_listv(HBoxContainer *this, List *param_1, bool param_2) {
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
      BoxContainer::_get_property_listv((BoxContainer*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "HBoxContainer";
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "HBoxContainer";
   local_98 = 0;
   local_70 = 0xd;
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
      LAB_0011b1fd:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0011b1fd;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0011b21f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0011b21f:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "HBoxContainer", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         BoxContainer::_get_property_listv((BoxContainer*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Ref<Resource>::unref() */void Ref<Resource>::unref(Ref<Resource> *this) {
   Object *pOVar1;
   char cVar2;
   if (*(long*)this != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)this;
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            *(undefined8*)this = 0;
            return;
         }

      }

   }

   *(undefined8*)this = 0;
   return;
}
/* Ref<AnimationLibrary>::unref() */void Ref<AnimationLibrary>::unref(Ref<AnimationLibrary> *this) {
   Object *pOVar1;
   char cVar2;
   if (*(long*)this != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)this;
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            *(undefined8*)this = 0;
            return;
         }

      }

   }

   *(undefined8*)this = 0;
   return;
}
/* CowData<String>::find(String const&, long) const */long CowData<String>::find(CowData<String> *this, String *param_1, long param_2) {
   char cVar1;
   long lVar2;
   long lVar3;
   if (param_2 < 0) {
      return -1;
   }

   lVar2 = *(long*)this;
   if (( lVar2 != 0 ) && ( lVar3 = lVar3 != 0 )) {
      while (param_2 < lVar3) {
         cVar1 = String::operator ==((String*)( lVar2 + param_2 * 8 ), param_1);
         if (cVar1 != '\0') {
            return param_2;
         }

         lVar2 = *(long*)this;
         param_2 = param_2 + 1;
         if (lVar2 == 0) {
            return -1;
         }

         lVar3 = *(long*)( lVar2 + -8 );
      }
;
   }

   return -1;
}
/* MethodBind* create_method_bind<AnimationLibraryEditor, Object*>(void
   (AnimationLibraryEditor::*)(Object*)) */MethodBind *create_method_bind<AnimationLibraryEditor,Object*>(_func_void_Object_ptr *param_1) {
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
   *(_func_void_Object_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011df90;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AnimationLibraryEditor";
   local_30 = 0x16;
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
/* AnimationLibraryEditor::_initialize_classv() */void AnimationLibraryEditor::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (AcceptDialog::initialize_class() == '\0') {
         if (Window::initialize_class() == '\0') {
            if (Viewport::initialize_class() == '\0') {
               if (Node::initialize_class() == '\0') {
                  Object::initialize_class();
                  local_60 = 0;
                  String::parse_latin1((String*)&local_60, "Object");
                  StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                  local_70 = 0;
                  String::parse_latin1((String*)&local_70, "Node");
                  StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
                  ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                  if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  if ((code*)PTR__bind_methods_00123058 != Node::_bind_methods) {
                     Node::_bind_methods();
                  }

                  Node::initialize_class()::initialized =
                  '\x01';
               }

               local_58 = "Node";
               local_68 = 0;
               local_50 = 4;
               String::parse_latin1((StrRange*)&local_68);
               StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
               local_58 = "Viewport";
               local_70 = 0;
               local_50 = 8;
               String::parse_latin1((StrRange*)&local_70);
               StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               Viewport::_bind_methods();
               Viewport::initialize_class()::initialized =
               '\x01';
            }

            local_68 = 0;
            local_58 = "Viewport";
            local_50 = 8;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "Window";
            local_70 = 0;
            local_50 = 6;
            String::parse_latin1((StrRange*)&local_70);
            StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            Window::_bind_methods();
            Window::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "Window";
         local_68 = 0;
         local_50 = 6;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "AcceptDialog";
         local_70 = 0;
         local_50 = 0xc;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         if ((code*)PTR__bind_methods_00123090 != Window::_bind_methods) {
            AcceptDialog::_bind_methods();
         }

         if ((code*)PTR__bind_compatibility_methods_00123098 != Object::_bind_compatibility_methods) {
            AcceptDialog::_bind_compatibility_methods();
         }

         AcceptDialog::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "AcceptDialog";
      local_68 = 0;
      local_50 = 0xc;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "AnimationLibraryEditor";
      local_70 = 0;
      local_50 = 0x16;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      _bind_methods();
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CowData<String>::_unref() */void CowData<String>::_unref(CowData<String> *this) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long *plVar6;
   long lVar7;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      plVar1 = *(long**)this;
      if (plVar1 != (long*)0x0) {
         lVar3 = plVar1[-1];
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar7 = 0;
            plVar6 = plVar1;
            do {
               if (*plVar6 != 0) {
                  LOCK();
                  plVar2 = (long*)( *plVar6 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = *plVar6;
                     *plVar6 = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar3 != lVar7 );
         }

         Memory::free_static(plVar1 + -2, false);
         return;
      }

      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* CallableCustomMethodPointer<AnimationLibraryEditor, void, Vector<String> const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<AnimationLibraryEditor,void,Vector<String>const&>::call(CallableCustomMethodPointer<AnimationLibraryEditor,void,Vector<String>const&> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   ulong uVar3;
   undefined8 uVar4;
   char cVar5;
   uint uVar6;
   ulong *puVar7;
   code *pcVar8;
   long in_FS_OFFSET;
   bool bVar9;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar6 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar3 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar3 << 8 );
         LOCK();
         bVar9 = (char)ObjectDB::spin_lock == '\0';
         if (bVar9) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar9) break;
         local_48 = (char*)( uVar3 << 8 );
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
            if ((uint)param_2 < 2) {
               if (param_2 == 0) {
                  *(undefined4*)param_4 = 4;
                  *(undefined4*)( param_4 + 8 ) = 1;
               }
 else {
                  *(undefined4*)param_4 = 0;
                  if (( (ulong)pcVar8 & 1 ) != 0) {
                     pcVar8 = *(code**)( pcVar8 + *(long*)( lVar1 + lVar2 ) + -1 );
                  }

                  cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 0x22);
                  uVar4 = _LC151;
                  if (cVar5 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar4;
                  }

                  Variant::operator_cast_to_Vector((Variant*)&local_48);
                  ( *pcVar8 )((long*)( lVar1 + lVar2 ), (Variant*)&local_48);
                  CowData<String>::_unref((CowData<String>*)local_40);
               }

            }
 else {
               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 1;
            }

            goto LAB_0011bdae;
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
   local_48 = "\', can\'t call method.";
   local_40[0] = 0x15;
   String::parse_latin1((StrRange*)&local_50);
   uitos((ulong)local_60);
   operator+((char *)
   local_58,(String*)"Invalid Object id \'";
   String::operator +((String*)&local_48, (String*)local_58);
   _err_print_error(&_LC86, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (Variant*)&local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref(local_58);
   CowData<char32_t>::_unref(local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   LAB_0011bdae:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CowData<String>::_realloc(long) */undefined8 CowData<String>::_realloc(CowData<String> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<String>::resize<false>(long) */undefined8 CowData<String>::resize<false>(CowData<String> *this, long param_1) {
   code *pcVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   long lVar4;
   long lVar5;
   ulong uVar6;
   undefined8 *puVar7;
   ulong uVar8;
   long lVar9;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar4 = 0;
      lVar5 = 0;
   }
 else {
      lVar4 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar4) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar5 = lVar4 * 8;
      if (lVar5 != 0) {
         uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
         uVar6 = uVar6 | uVar6 >> 2;
         uVar6 = uVar6 | uVar6 >> 4;
         uVar6 = uVar6 | uVar6 >> 8;
         uVar6 = uVar6 | uVar6 >> 0x10;
         lVar5 = ( uVar6 | uVar6 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_0011c2d0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar6 = param_1 * 8 - 1;
   uVar6 = uVar6 >> 1 | uVar6;
   uVar6 = uVar6 | uVar6 >> 2;
   uVar6 = uVar6 | uVar6 >> 4;
   uVar6 = uVar6 | uVar6 >> 8;
   uVar6 = uVar6 | uVar6 >> 0x10;
   uVar6 = uVar6 | uVar6 >> 0x20;
   lVar9 = uVar6 + 1;
   if (lVar9 == 0) goto LAB_0011c2d0;
   uVar8 = param_1;
   if (param_1 <= lVar4) {
      while (lVar4 = *(long*)this,lVar4 != 0) {
         if (*(ulong*)( lVar4 + -8 ) <= uVar8) {
            if (lVar9 != lVar5) {
               uVar3 = _realloc(this, lVar9);
               if ((int)uVar3 != 0) {
                  return uVar3;
               }

               lVar4 = *(long*)this;
               if (lVar4 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar1 = (code*)invalidInstructionException();
                  ( *pcVar1 )();
               }

            }

            *(long*)( lVar4 + -8 ) = param_1;
            return 0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( lVar4 + uVar8 * 8 ));
         uVar8 = uVar8 + 1;
      }
;
      goto LAB_0011c326;
   }

   if (lVar9 == lVar5) {
      LAB_0011c24b:puVar7 = *(undefined8**)this;
      if (puVar7 == (undefined8*)0x0) {
         LAB_0011c326:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      lVar4 = puVar7[-1];
      if (param_1 <= lVar4) goto LAB_0011c1bf;
   }
 else {
      if (lVar4 != 0) {
         uVar3 = _realloc(this, lVar9);
         if ((int)uVar3 != 0) {
            return uVar3;
         }

         goto LAB_0011c24b;
      }

      puVar2 = (undefined8*)Memory::alloc_static(uVar6 + 0x11, false);
      if (puVar2 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar7 = puVar2 + 2;
      *puVar2 = 1;
      puVar2[1] = 0;
      *(undefined8**)this = puVar7;
      lVar4 = 0;
   }

   memset(puVar7 + lVar4, 0, ( param_1 - lVar4 ) * 8);
   LAB_0011c1bf:puVar7[-1] = param_1;
   return 0;
}
/* String stringify_variants<char const*>(Variant const&, char const*) */Variant *stringify_variants<char_const*>(Variant *param_1, char *param_2) {
   long *plVar1;
   long lVar2;
   char *in_RDX;
   long in_FS_OFFSET;
   long local_80;
   undefined8 local_78;
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_58, in_RDX);
   stringify_variants((Variant*)&local_70);
   local_68 = &_LC122;
   local_78 = 0;
   local_60 = 1;
   String::parse_latin1((StrRange*)&local_78);
   Variant::operator_cast_to_String((Variant*)&local_80);
   String::operator +((String*)&local_68, (String*)&local_80);
   String::operator +((String*)param_1, (String*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
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

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
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
}
/* void memdelete<HashMapElement<String, HashMap<String, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, Variant> > > >
   >(HashMapElement<String, HashMap<String, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, Variant> > > >*)
    */void memdelete<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault < String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>(HashMapElement *param_1) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   void *pvVar5;
   pvVar5 = *(void**)( param_1 + 0x20 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( param_1 + 0x44 ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x40 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( param_1 + 0x44 ) = 0;
            *(undefined1(*) [16])( param_1 + 0x30 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( param_1 + 0x28 ) + lVar4 ) != 0) {
                  pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                  *(int*)( *(long*)( param_1 + 0x28 ) + lVar4 ) = 0;
                  if (Variant::needs_deinit[*(int*)( (long)pvVar5 + 0x18 )] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (*(long*)( (long)pvVar5 + 0x10 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x10 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x10 );
                        *(undefined8*)( (long)pvVar5 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar5, false);
                  pvVar5 = *(void**)( param_1 + 0x20 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( lVar4 != (ulong)uVar2 << 2 );
            *(undefined4*)( param_1 + 0x44 ) = 0;
            *(undefined1(*) [16])( param_1 + 0x30 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_0011c581;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( param_1 + 0x28 ), false);
   }

   LAB_0011c581:CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x10 ));
   Memory::free_static(param_1, false);
   return;
}
/* ConfigFile::~ConfigFile() */void ConfigFile::~ConfigFile(ConfigFile *this) {
   uint uVar1;
   long lVar2;
   void *pvVar3;
   *(undefined***)this = &PTR__initialize_classv_0011d168;
   pvVar3 = *(void**)( this + 0x188 );
   if (pvVar3 != (void*)0x0) {
      if (*(int*)( this + 0x1ac ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a8 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x1ac ) = 0;
            *(undefined1(*) [16])( this + 0x198 ) = (undefined1[16])0x0;
         }
 else {
            lVar2 = 0;
            do {
               if (*(int*)( *(long*)( this + 400 ) + lVar2 ) != 0) {
                  *(int*)( *(long*)( this + 400 ) + lVar2 ) = 0;
                  memdelete<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault < String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>> > ( *(HashMapElement**)( (long)pvVar3 + lVar2 * 2 ) );
                  pvVar3 = *(void**)( this + 0x188 );
                  *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
               }

               lVar2 = lVar2 + 4;
            }
 while ( lVar2 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0x1ac ) = 0;
            *(undefined1(*) [16])( this + 0x198 ) = (undefined1[16])0x0;
            if (pvVar3 == (void*)0x0) goto LAB_0011c691;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 400 ), false);
   }

   LAB_0011c691:*(undefined***)this = &PTR__initialize_classv_0011d008;
   Object::~Object((Object*)this);
   return;
}
/* ConfigFile::~ConfigFile() */void ConfigFile::~ConfigFile(ConfigFile *this) {
   uint uVar1;
   long lVar2;
   void *pvVar3;
   *(undefined***)this = &PTR__initialize_classv_0011d168;
   pvVar3 = *(void**)( this + 0x188 );
   if (pvVar3 != (void*)0x0) {
      if (*(int*)( this + 0x1ac ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a8 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x1ac ) = 0;
            *(undefined1(*) [16])( this + 0x198 ) = (undefined1[16])0x0;
         }
 else {
            lVar2 = 0;
            do {
               if (*(int*)( *(long*)( this + 400 ) + lVar2 ) != 0) {
                  *(int*)( *(long*)( this + 400 ) + lVar2 ) = 0;
                  memdelete<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault < String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>> > ( *(HashMapElement**)( (long)pvVar3 + lVar2 * 2 ) );
                  pvVar3 = *(void**)( this + 0x188 );
                  *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
               }

               lVar2 = lVar2 + 4;
            }
 while ( lVar2 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0x1ac ) = 0;
            *(undefined1(*) [16])( this + 0x198 ) = (undefined1[16])0x0;
            if (pvVar3 == (void*)0x0) goto LAB_0011c781;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 400 ), false);
   }

   LAB_0011c781:*(undefined***)this = &PTR__initialize_classv_0011d008;
   Object::~Object((Object*)this);
   operator_delete(this, 0x1b0);
   return;
}
/* CowData<unsigned long>::_realloc(long) */undefined8 CowData<unsigned_long>::_realloc(CowData<unsigned_long> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<unsigned long>::resize<false>(long) */undefined8 CowData<unsigned_long>::resize<false>(CowData<unsigned_long> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   long lVar8;
   long lVar9;
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
      lVar9 = 0;
      lVar3 = 0;
   }
 else {
      lVar9 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar9) {
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
      lVar3 = lVar9 * 8;
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
      LAB_0011ca60:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 8 - 1;
   uVar4 = uVar4 | uVar4 >> 1;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar8 = uVar4 + 1;
   if (lVar8 == 0) goto LAB_0011ca60;
   if (lVar9 < param_1) {
      if (lVar8 != lVar3) {
         if (lVar9 == 0) {
            puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
            if (puVar5 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               return 6;
            }

            puVar7 = puVar5 + 2;
            *puVar5 = 1;
            puVar5[1] = 0;
            *(undefined8**)this = puVar7;
            goto LAB_0011c971;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_0011c971:puVar7[-1] = param_1;
         return 0;
      }

   }
 else {
      if (( lVar8 != lVar3 ) && ( uVar6 = _realloc(this, lVar8) ),(int)uVar6 != 0) {
         return uVar6;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

   }

   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* AnimationLibraryEditor::set_animation_mixer(Object*) */void AnimationLibraryEditor::_GLOBAL__sub_I_set_animation_mixer(void) {
   if (Animation::PARAMETERS_BASE_PATH == '\0') {
      Animation::PARAMETERS_BASE_PATH = '\x01';
      Animation::PARAMETERS_BASE_PATH = 0;
      String::parse_latin1((String*)&Animation::PARAMETERS_BASE_PATH, "parameters/");
      __cxa_atexit(String::~String, &Animation::PARAMETERS_BASE_PATH, &__dso_handle);
   }

   if (AudioStreamRandomizer::base_property_helper == '\0') {
      AudioStreamRandomizer::base_property_helper = '\x01';
      AudioStreamRandomizer::base_property_helper._64_8_ = 0;
      AudioStreamRandomizer::base_property_helper._0_16_ = (undefined1[16])0x0;
      AudioStreamRandomizer::base_property_helper._24_16_ = (undefined1[16])0x0;
      AudioStreamRandomizer::base_property_helper._40_16_ = (undefined1[16])0x0;
      AudioStreamRandomizer::base_property_helper._56_8_ = 2;
      __cxa_atexit(PropertyListHelper::~PropertyListHelper, AudioStreamRandomizer::base_property_helper, &__dso_handle);
   }

   if (PopupMenu::base_property_helper == '\0') {
      PopupMenu::base_property_helper = '\x01';
      PopupMenu::base_property_helper._64_8_ = 0;
      PopupMenu::base_property_helper._0_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._24_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._40_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._56_8_ = 2;
      __cxa_atexit(PropertyListHelper::~PropertyListHelper, PopupMenu::base_property_helper, &__dso_handle);
   }

   if (EditorFileDialog::base_property_helper != '\0') {
      return;
   }

   EditorFileDialog::base_property_helper = 1;
   EditorFileDialog::base_property_helper._56_8_ = 2;
   EditorFileDialog::base_property_helper._64_8_ = 0;
   EditorFileDialog::base_property_helper._0_16_ = (undefined1[16])0x0;
   EditorFileDialog::base_property_helper._24_16_ = (undefined1[16])0x0;
   EditorFileDialog::base_property_helper._40_16_ = (undefined1[16])0x0;
   __cxa_atexit(PropertyListHelper::~PropertyListHelper, EditorFileDialog::base_property_helper, &__dso_handle);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<String, DefaultAllocator>::~List() */void List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<StringName, DefaultAllocator>::~List() */void List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* String::~String() */void String::~String(String *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* AnimationLibraryEditor::~AnimationLibraryEditor() */void AnimationLibraryEditor::~AnimationLibraryEditor(AnimationLibraryEditor *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Object*>::~MethodBindT() */void MethodBindT<Object*>::~MethodBindT(MethodBindT<Object*> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<AnimationLibraryEditor, void, String
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationLibraryEditor,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationLibraryEditor,void,String_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<AnimationLibraryEditor, void, Vector<String>
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationLibraryEditor,void,Vector<String>const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationLibraryEditor,void,Vector<String>const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<AnimationLibraryEditor, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationLibraryEditor,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationLibraryEditor,void> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<AnimationLibraryEditor, void, TreeItem*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationLibraryEditor,void,TreeItem*,int,int,MouseButton>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationLibraryEditor,void,TreeItem*,int,int,MouseButton> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<AnimationLibraryEditor, void,
   TreeItem*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationLibraryEditor,void,TreeItem*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationLibraryEditor,void,TreeItem*> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<AnimationLibraryEditor, void, int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationLibraryEditor,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationLibraryEditor,void,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ConfigFile::~ConfigFile() */void ConfigFile::~ConfigFile(ConfigFile *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

