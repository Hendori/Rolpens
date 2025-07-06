/* SortArray<StringName, StringName::AlphCompare, true>::adjust_heap(long, long, long, StringName,
   StringName*) const [clone .isra.0] */void SortArray<StringName,StringName::AlphCompare,true>::adjust_heap(long param_1, long param_2, long param_3, StringName_conflict *param_4, long param_5) {
   byte *pbVar1;
   byte *pbVar2;
   uint uVar3;
   byte bVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   uint uVar8;
   long lVar9;
   byte *pbVar10;
   long lVar11;
   byte *pbVar12;
   StringName_conflict *pSVar13;
   StringName_conflict *this;
   long lVar14;
   long in_FS_OFFSET;
   StringName_conflict *local_50;
   long local_48;
   long local_40;
   lVar11 = param_2 * 2 + 2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar14 = param_2;
   if (lVar11 < param_3) {
      do {
         lVar9 = lVar11 + -1;
         this(StringName_conflict * )(param_5 + ( lVar9 + param_1 ) * 8);
         pSVar13 = (StringName_conflict*)( param_5 + ( param_1 + lVar11 ) * 8 );
         lVar6 = *(long*)this;
         lVar5 = *(long*)pSVar13;
         if (lVar5 == 0) {
            if (lVar6 != 0) {
               pbVar10 = *(byte**)( lVar6 + 8 );
               uVar8 = 0;
               pbVar12 = &_LC0;
               LAB_0010012c:if (pbVar10 == (byte*)0x0) {
                  lVar5 = 0;
                  uVar3 = **(uint**)( lVar6 + 0x10 );
                  if (uVar3 != 0 || uVar8 != 0) {
                     do {
                        if (uVar8 == 0) goto LAB_001000e0;
                        if (uVar3 == 0) break;
                        if (uVar8 < uVar3) goto LAB_001000e0;
                        if (uVar3 < uVar8) break;
                        uVar8 = (uint)(char)pbVar12[lVar5 + 1];
                        uVar3 = ( *(uint**)( lVar6 + 0x10 ) )[lVar5 + 1];
                        lVar5 = lVar5 + 1;
                     } while ( uVar8 != 0 || uVar3 != 0 );
                  }
               } else {
                  uVar3 = (uint)(char)*pbVar10;
                  bVar4 = (byte)uVar8 | *pbVar10;
                  LAB_0010017e:if (bVar4 != 0) {
                     lVar6 = 1;
                     do {
                        if (uVar8 == 0) goto LAB_001000e0;
                        if (uVar3 == 0) break;
                        if (uVar8 < uVar3) goto LAB_001000e0;
                        if (uVar3 < uVar8) break;
                        pbVar1 = pbVar12 + lVar6;
                        uVar8 = (uint)(char)*pbVar1;
                        pbVar2 = pbVar10 + lVar6;
                        uVar3 = (uint)(char)*pbVar2;
                        lVar6 = lVar6 + 1;
                     } while ( *pbVar1 != 0 || *pbVar2 != 0 );
                  }
               }
            }
         } else {
            pbVar12 = *(byte**)( lVar5 + 8 );
            if (lVar6 == 0) {
               if (pbVar12 != (byte*)0x0) {
                  bVar4 = *pbVar12;
                  uVar8 = (uint)(char)bVar4;
                  pbVar10 = &_LC0;
                  uVar3 = 0;
                  goto LAB_0010017e;
               }
               uVar8 = 0;
               pbVar10 = &_LC0;
            } else {
               pbVar10 = *(byte**)( lVar6 + 8 );
               if (pbVar12 != (byte*)0x0) {
                  uVar8 = (uint)(char)*pbVar12;
                  goto LAB_0010012c;
               }
               if (pbVar10 == (byte*)0x0) {
                  lVar7 = 4;
                  uVar8 = **(uint**)( lVar6 + 0x10 );
                  uVar3 = **(uint**)( lVar5 + 0x10 );
                  if (uVar8 != 0 || uVar3 != 0) {
                     do {
                        if (uVar3 == 0) goto LAB_001000e0;
                        if (uVar8 == 0) break;
                        if (uVar3 < uVar8) goto LAB_001000e0;
                        if (uVar8 < uVar3) break;
                        uVar3 = *(uint*)( (long)*(uint**)( lVar5 + 0x10 ) + lVar7 );
                        uVar8 = *(uint*)( (long)*(uint**)( lVar6 + 0x10 ) + lVar7 );
                        lVar7 = lVar7 + 4;
                     } while ( uVar3 != 0 || uVar8 != 0 );
                  }
                  goto LAB_00100108;
               }
               uVar8 = (uint)(char)*pbVar10;
            }
            lVar6 = 0;
            uVar3 = **(uint**)( lVar5 + 0x10 );
            if (uVar3 != 0 || uVar8 != 0) {
               do {
                  if (uVar3 == 0) goto LAB_001000e0;
                  if (uVar8 == 0) break;
                  if (uVar3 < uVar8) goto LAB_001000e0;
                  if (uVar8 < uVar3) break;
                  uVar3 = ( *(uint**)( lVar5 + 0x10 ) )[lVar6 + 1];
                  uVar8 = (uint)(char)pbVar10[lVar6 + 1];
                  lVar6 = lVar6 + 1;
               } while ( uVar3 != 0 || uVar8 != 0 );
            }
         }
         LAB_00100108:lVar9 = lVar11;
         this =
         pSVar13;
         lVar11 = lVar11 + 1;
         LAB_001000e0:lVar11 = lVar11 * 2;
         StringName::operator =((StringName_conflict*)( param_5 + ( lVar14 + param_1 ) * 8 ), this);
         lVar14 = lVar9;
      } while ( lVar11 < param_3 );
      pSVar13 = this;
      if (lVar11 == param_3) goto LAB_00100548;
   } else {
      this(StringName_conflict * )(param_5 + ( param_2 + param_1 ) * 8);
      if (lVar11 != param_3) {
         StringName::StringName((StringName_conflict*)&local_48, param_4);
         goto LAB_00100322;
      }
      LAB_00100548:lVar9 = lVar11 + -1;
      pSVar13 = (StringName_conflict*)( param_5 + ( param_1 + lVar9 ) * 8 );
      StringName::operator =(this, pSVar13);
   }
   StringName::StringName((StringName_conflict*)&local_48, param_4);
   lVar11 = ( lVar9 + -1 ) - ( lVar9 + -1 >> 0x3f );
   this =
   pSVar13;
   while (param_2 < lVar9) {
      lVar14 = lVar11 >> 1;
      this(StringName_conflict * )(param_5 + ( param_1 + lVar14 ) * 8);
      lVar11 = *(long*)this;
      if (lVar11 == 0) {
         if (local_48 != 0) {
            pbVar10 = *(byte**)( local_48 + 8 );
            uVar3 = 0;
            uVar8 = 0;
            pbVar12 = &_LC0;
            if (pbVar10 != (byte*)0x0) goto LAB_001003e3;
            LAB_00100385:uVar8 = **(uint**)( local_48 + 0x10 );
            if (uVar8 != 0 || uVar3 != 0) {
               lVar11 = 0;
               while (uVar3 != 0) {
                  if (uVar8 == 0) goto LAB_00100318;
                  if (uVar3 < uVar8) break;
                  if (uVar8 < uVar3) goto LAB_00100318;
                  uVar3 = (uint)(char)pbVar12[lVar11 + 1];
                  uVar8 = ( *(uint**)( local_48 + 0x10 ) )[lVar11 + 1];
                  lVar11 = lVar11 + 1;
                  if (uVar3 == 0 && uVar8 == 0) goto LAB_00100318;
               };
               goto LAB_001002e0;
            }
         }
         LAB_00100318 = (StringName_conflict*)( param_5 + ( lVar9 + param_1 ) * 8 );
         break;
      }
      pbVar12 = *(byte**)( lVar11 + 8 );
      if (local_48 == 0) {
         uVar8 = 0;
         pbVar10 = &_LC0;
         if (pbVar12 != (byte*)0x0) {
            bVar4 = *pbVar12;
            uVar8 = (uint)(char)bVar4;
            pbVar10 = &_LC0;
            uVar3 = 0;
            goto LAB_001003e9;
         }
         LAB_0010044a:uVar3 = **(uint**)( lVar11 + 0x10 );
         if (uVar3 == 0 && uVar8 == 0) goto LAB_00100318;
         lVar6 = 0;
         while (uVar3 != 0) {
            if (uVar8 == 0) goto LAB_00100318;
            if (uVar3 < uVar8) break;
            if (uVar8 < uVar3) goto LAB_00100318;
            uVar3 = ( *(uint**)( lVar11 + 0x10 ) )[lVar6 + 1];
            uVar8 = (uint)(char)pbVar10[lVar6 + 1];
            lVar6 = lVar6 + 1;
            if (uVar3 == 0 && uVar8 == 0) goto LAB_00100318;
         };
      } else {
         pbVar10 = *(byte**)( local_48 + 8 );
         if (pbVar12 == (byte*)0x0) {
            if (pbVar10 != (byte*)0x0) {
               uVar8 = (uint)(char)*pbVar10;
               goto LAB_0010044a;
            }
            uVar8 = **(uint**)( local_48 + 0x10 );
            uVar3 = **(uint**)( lVar11 + 0x10 );
            if (uVar8 == 0 && uVar3 == 0) goto LAB_00100318;
            lVar6 = 4;
            while (uVar3 != 0) {
               if (uVar8 == 0) goto LAB_00100318;
               if (uVar3 < uVar8) break;
               if (uVar8 < uVar3) goto LAB_00100318;
               uVar3 = *(uint*)( (long)*(uint**)( lVar11 + 0x10 ) + lVar6 );
               uVar8 = *(uint*)( (long)*(uint**)( local_48 + 0x10 ) + lVar6 );
               lVar6 = lVar6 + 4;
               if (uVar3 == 0 && uVar8 == 0) {
                  this(StringName_conflict * )(param_5 + ( param_1 + lVar9 ) * 8);
                  goto LAB_00100322;
               }
            };
         } else {
            uVar3 = (uint)(char)*pbVar12;
            uVar8 = uVar3;
            if (pbVar10 == (byte*)0x0) goto LAB_00100385;
            LAB_001003e3:uVar3 = (uint)(char)*pbVar10;
            bVar4 = (byte)uVar8 | *pbVar10;
            LAB_001003e9:if (bVar4 == 0) goto LAB_00100318;
            lVar11 = 1;
            while (uVar8 != 0) {
               if (uVar3 == 0) goto LAB_00100318;
               if (uVar8 < uVar3) break;
               if (uVar3 < uVar8) goto LAB_00100318;
               pbVar1 = pbVar12 + lVar11;
               uVar8 = (uint)(char)*pbVar1;
               pbVar2 = pbVar10 + lVar11;
               uVar3 = (uint)(char)*pbVar2;
               lVar11 = lVar11 + 1;
               if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_00100318;
            };
         }
      }
      LAB_001002e0:StringName::operator =((StringName_conflict*)( param_5 + ( lVar9 + param_1 ) * 8 ), this);
      lVar11 = ( lVar14 + -1 ) - ( lVar14 + -1 >> 0x3f );
      lVar9 = lVar14;
   };
   LAB_00100322:local_50 = (StringName_conflict*)&local_48;
   StringName::operator =(this, local_50);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* SortArray<StringName, StringName::AlphCompare, true>::unguarded_linear_insert(long, StringName,
   StringName*) const [clone .isra.0] */void SortArray<StringName,StringName::AlphCompare,true>::unguarded_linear_insert(long param_1, StringName_conflict *param_2, long param_3) {
   byte *pbVar1;
   byte *pbVar2;
   StringName_conflict *pSVar3;
   byte bVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   uint uVar8;
   uint uVar9;
   byte *pbVar10;
   byte *pbVar11;
   pSVar3 = (StringName_conflict*)( param_3 + -8 + param_1 * 8 );
   lVar6 = *(long*)pSVar3;
   lVar5 = *(long*)param_2;
   do {
      if (lVar5 == 0) {
         if (lVar6 == 0) goto LAB_0010078b;
         pbVar10 = *(byte**)( lVar6 + 8 );
         uVar8 = 0;
         pbVar11 = &_LC0;
         LAB_00100691:if (pbVar10 == (byte*)0x0) {
            uVar9 = **(uint**)( lVar6 + 0x10 );
            if (uVar9 == 0 && uVar8 == 0) goto LAB_0010078b;
            lVar5 = 0;
            while (uVar8 != 0) {
               if (uVar9 == 0) goto LAB_0010078b;
               if (uVar8 < uVar9) break;
               if (uVar9 < uVar8) goto LAB_0010078b;
               uVar8 = (uint)(char)pbVar11[lVar5 + 1];
               uVar9 = ( *(uint**)( lVar6 + 0x10 ) )[lVar5 + 1];
               lVar5 = lVar5 + 1;
               if (uVar8 == 0 && uVar9 == 0) goto LAB_0010078b;
            };
         } else {
            uVar9 = (uint)(char)*pbVar10;
            bVar4 = (byte)uVar8 | *pbVar10;
            LAB_001006ee:if (bVar4 == 0) goto LAB_0010078b;
            lVar6 = 1;
            while (uVar8 != 0) {
               if (uVar9 == 0) goto LAB_0010078b;
               if (uVar8 < uVar9) break;
               if (uVar9 < uVar8) goto LAB_0010078b;
               pbVar1 = pbVar11 + lVar6;
               uVar8 = (uint)(char)*pbVar1;
               pbVar2 = pbVar10 + lVar6;
               uVar9 = (uint)(char)*pbVar2;
               lVar6 = lVar6 + 1;
               if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_0010078b;
            };
         }
      } else {
         pbVar11 = *(byte**)( lVar5 + 8 );
         if (lVar6 == 0) {
            if (pbVar11 != (byte*)0x0) {
               bVar4 = *pbVar11;
               uVar8 = (uint)(char)bVar4;
               pbVar10 = &_LC0;
               uVar9 = 0;
               goto LAB_001006ee;
            }
            uVar8 = 0;
            pbVar10 = &_LC0;
            LAB_00100607:uVar9 = **(uint**)( lVar5 + 0x10 );
            if (uVar9 == 0 && uVar8 == 0) goto LAB_0010078b;
            lVar6 = 0;
            while (uVar9 != 0) {
               if (uVar8 == 0) goto LAB_0010078b;
               if (uVar9 < uVar8) break;
               if (uVar8 < uVar9) goto LAB_0010078b;
               uVar9 = ( *(uint**)( lVar5 + 0x10 ) )[lVar6 + 1];
               uVar8 = (uint)(char)pbVar10[lVar6 + 1];
               lVar6 = lVar6 + 1;
               if (uVar9 == 0 && uVar8 == 0) goto LAB_0010078b;
            };
         } else {
            pbVar10 = *(byte**)( lVar6 + 8 );
            if (pbVar11 != (byte*)0x0) {
               uVar8 = (uint)(char)*pbVar11;
               goto LAB_00100691;
            }
            if (pbVar10 != (byte*)0x0) {
               uVar8 = (uint)(char)*pbVar10;
               goto LAB_00100607;
            }
            uVar8 = **(uint**)( lVar6 + 0x10 );
            uVar9 = **(uint**)( lVar5 + 0x10 );
            if (uVar8 == 0 && uVar9 == 0) goto LAB_0010078b;
            lVar7 = 4;
            while (uVar9 != 0) {
               if (uVar8 == 0) goto LAB_0010078b;
               if (uVar9 < uVar8) break;
               if (uVar8 < uVar9) goto LAB_0010078b;
               uVar9 = *(uint*)( (long)*(uint**)( lVar5 + 0x10 ) + lVar7 );
               uVar8 = *(uint*)( (long)*(uint**)( lVar6 + 0x10 ) + lVar7 );
               lVar7 = lVar7 + 4;
               if (uVar9 == 0 && uVar8 == 0) goto LAB_0010078b;
            };
         }
      }
      param_1 = param_1 + -1;
      if (param_1 == 0) {
         param_1 = 1;
         _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
         LAB_0010078b:StringName::operator =((StringName_conflict*)( param_3 + param_1 * 8 ), param_2);
         return;
      }
      StringName::operator =(pSVar3 + 8, pSVar3);
      lVar5 = *(long*)param_2;
      lVar6 = *(long*)( pSVar3 + -8 );
      pSVar3 = pSVar3 + -8;
   } while ( true );
}/* SortArray<StringName, StringName::AlphCompare, true>::linear_insert(long, long, StringName*)
   const [clone .isra.0] */void SortArray<StringName,StringName::AlphCompare,true>::linear_insert(long param_1, long param_2, StringName_conflict *param_3) {
   StringName_conflict *this;
   byte *pbVar1;
   byte *pbVar2;
   byte bVar3;
   long lVar4;
   long lVar5;
   uint uVar6;
   uint uVar7;
   StringName_conflict *this_00;
   byte *pbVar8;
   byte *pbVar9;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   this =
   param_3 + param_1 * 8;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName_conflict*)&local_50, param_3 + param_2 * 8);
   if (local_50 == 0) {
      lVar4 = *(long*)this;
      if (lVar4 != 0) {
         pbVar8 = *(byte**)( lVar4 + 8 );
         uVar6 = 0;
         pbVar9 = &_LC0;
         LAB_00100968:if (pbVar8 == (byte*)0x0) {
            uVar7 = **(uint**)( lVar4 + 0x10 );
            if (uVar6 != 0 || uVar7 != 0) {
               lVar5 = 0;
               do {
                  if (uVar6 == 0) goto LAB_001008c0;
                  if (uVar7 == 0) break;
                  if (uVar6 < uVar7) goto LAB_001008c0;
                  if (uVar7 < uVar6) break;
                  uVar6 = (uint)(char)pbVar9[lVar5 + 1];
                  uVar7 = ( *(uint**)( lVar4 + 0x10 ) )[lVar5 + 1];
                  lVar5 = lVar5 + 1;
               } while ( uVar6 != 0 || uVar7 != 0 );
            }
         } else {
            uVar7 = (uint)(char)*pbVar8;
            bVar3 = *pbVar8 | (byte)uVar6;
            LAB_00100a10:if (bVar3 != 0) {
               lVar4 = 1;
               do {
                  if (uVar6 == 0) goto LAB_001008c0;
                  if (uVar7 == 0) break;
                  if (uVar6 < uVar7) goto LAB_001008c0;
                  if (uVar7 < uVar6) break;
                  pbVar1 = pbVar9 + lVar4;
                  uVar6 = (uint)(char)*pbVar1;
                  pbVar2 = pbVar8 + lVar4;
                  uVar7 = (uint)(char)*pbVar2;
                  lVar4 = lVar4 + 1;
               } while ( *pbVar1 != 0 || *pbVar2 != 0 );
            }
         }
      }
   } else {
      lVar4 = *(long*)this;
      pbVar9 = *(byte**)( local_50 + 8 );
      if (lVar4 == 0) {
         if (pbVar9 != (byte*)0x0) {
            bVar3 = *pbVar9;
            uVar6 = (uint)(char)bVar3;
            pbVar8 = &_LC0;
            uVar7 = 0;
            goto LAB_00100a10;
         }
         uVar6 = 0;
         pbVar8 = &_LC0;
      } else {
         pbVar8 = *(byte**)( lVar4 + 8 );
         if (pbVar9 != (byte*)0x0) {
            uVar6 = (uint)(char)*pbVar9;
            goto LAB_00100968;
         }
         if (pbVar8 == (byte*)0x0) {
            uVar6 = **(uint**)( lVar4 + 0x10 );
            uVar7 = **(uint**)( local_50 + 0x10 );
            if (uVar6 != 0 || uVar7 != 0) {
               lVar5 = 4;
               do {
                  if (uVar7 == 0) goto LAB_001008c0;
                  if (uVar6 == 0) break;
                  if (uVar7 < uVar6) goto LAB_001008c0;
                  if (uVar6 < uVar7) break;
                  uVar7 = *(uint*)( (long)*(uint**)( local_50 + 0x10 ) + lVar5 );
                  uVar6 = *(uint*)( (long)*(uint**)( lVar4 + 0x10 ) + lVar5 );
                  lVar5 = lVar5 + 4;
               } while ( uVar7 != 0 || uVar6 != 0 );
            }
            goto LAB_001009b8;
         }
         uVar6 = (uint)(char)*pbVar8;
      }
      uVar7 = **(uint**)( local_50 + 0x10 );
      if (uVar6 != 0 || uVar7 != 0) {
         lVar4 = 0;
         do {
            if (uVar7 == 0) goto LAB_001008c0;
            if (uVar6 == 0) break;
            if (uVar7 < uVar6) goto LAB_001008c0;
            if (uVar6 < uVar7) break;
            uVar7 = ( *(uint**)( local_50 + 0x10 ) )[lVar4 + 1];
            uVar6 = (uint)(char)pbVar8[lVar4 + 1];
            lVar4 = lVar4 + 1;
         } while ( uVar7 != 0 || uVar6 != 0 );
      }
   }
   LAB_001009b8:StringName::StringName((StringName_conflict*)&local_48, (StringName_conflict*)&local_50);
   unguarded_linear_insert(param_2, (StringName_conflict*)&local_48, param_3);
   if (StringName::configured == '\0') goto LAB_00100906;
   if (local_48 != 0) {
      StringName::unref();
      goto LAB_001008f2;
   }
   goto LAB_001008f6;
   LAB_001008c0:this_00 = param_3 + param_2 * 8;
   if (param_1 < param_2) {
      do {
         param_2 = param_2 + -1;
         StringName::operator =(this_00, this_00 + -8);
         this_00 = this_00 + -8;
      } while ( param_1 != param_2 );
   }
   StringName::operator =(this, (StringName_conflict*)&local_50);
   LAB_001008f2:if (StringName::configured == '\0') goto LAB_00100906;
   LAB_001008f6:if (local_50 != 0) {
      StringName::unref();
   }
   LAB_00100906:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* SortArray<StringName, StringName::AlphCompare, true>::median_of_3(StringName const&, StringName
   const&, StringName const&) const [clone .isra.0] */StringName_conflict *SortArray<StringName,StringName::AlphCompare,true>::median_of_3(StringName_conflict *param_1, StringName_conflict *param_2, StringName_conflict *param_3) {
   byte *pbVar1;
   byte *pbVar2;
   byte bVar3;
   uint uVar4;
   uint uVar5;
   uint uVar6;
   uint *puVar7;
   long lVar8;
   long lVar9;
   uint *puVar10;
   byte bVar11;
   uint uVar12;
   long lVar13;
   long lVar14;
   byte *pbVar15;
   byte *pbVar16;
   byte *pbVar17;
   lVar8 = *(long*)param_1;
   lVar9 = *(long*)param_3;
   lVar13 = *(long*)param_2;
   if (lVar8 == 0) {
      pbVar15 = &_LC0;
      pbVar16 = &_LC0;
      if (lVar13 == 0) {
         LAB_001013f0:if (lVar9 != 0) {
            pbVar17 = *(byte**)( lVar9 + 8 );
            LAB_00100cbe:uVar5 = (uint)(char)*pbVar16;
            uVar4 = uVar5;
            goto LAB_00100cc4;
         }
         uVar5 = (uint)(char)*pbVar16;
         uVar6 = 0;
         uVar12 = 0;
         pbVar17 = &_LC0;
         if (*pbVar16 == 0) goto LAB_00100fb9;
         LAB_00100e12:lVar8 = 1;
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
         } while ( *pbVar2 != 0 || *pbVar1 != 0 );
      } else {
         pbVar15 = *(byte**)( lVar13 + 8 );
         uVar4 = 0;
         pbVar16 = &_LC0;
         LAB_00100c42:if (pbVar15 != (byte*)0x0) {
            uVar12 = (uint)(char)*pbVar15;
            bVar11 = *pbVar15 | (byte)uVar4;
            LAB_00100d30:if (bVar11 != 0) {
               lVar14 = 1;
               do {
                  if (uVar4 == 0) goto joined_r0x00100d78;
                  if (uVar12 == 0) break;
                  if (uVar4 < uVar12) goto joined_r0x00100d78;
                  if (uVar12 < uVar4) break;
                  pbVar17 = pbVar16 + lVar14;
                  uVar4 = (uint)(char)*pbVar17;
                  pbVar2 = pbVar15 + lVar14;
                  uVar12 = (uint)(char)*pbVar2;
                  lVar14 = lVar14 + 1;
               } while ( *pbVar17 != 0 || *pbVar2 != 0 );
               goto LAB_00100ca8;
            }
            goto LAB_001013f0;
         }
         uVar12 = **(uint**)( lVar13 + 0x10 );
         if (uVar4 != 0 || uVar12 != 0) {
            lVar14 = 0;
            do {
               if (uVar4 == 0) goto joined_r0x00100d78;
               if (uVar12 == 0) break;
               if (uVar4 < uVar12) goto joined_r0x00100d78;
               if (uVar12 < uVar4) break;
               uVar4 = (uint)(char)pbVar16[lVar14 + 1];
               uVar12 = ( *(uint**)( lVar13 + 0x10 ) )[lVar14 + 1];
               lVar14 = lVar14 + 1;
            } while ( uVar4 != 0 || uVar12 != 0 );
            goto LAB_00100ca8;
         }
         if (lVar9 == 0) goto LAB_00101011;
         pbVar17 = *(byte**)( lVar9 + 8 );
         uVar5 = 0;
         LAB_00100cc4:if (pbVar17 != (byte*)0x0) {
            uVar6 = (uint)(char)*pbVar17;
            bVar11 = (byte)uVar4 | *pbVar17;
            goto LAB_00100e09;
         }
         puVar10 = *(uint**)( lVar9 + 0x10 );
         uVar4 = *puVar10;
         uVar6 = uVar4 | uVar5;
         if (uVar6 == 0) goto LAB_001012f6;
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
         } while ( uVar5 != 0 || uVar4 != 0 );
      }
      LAB_00100fa0:if (pbVar15 == (byte*)0x0) {
         if (pbVar17 == (byte*)0x0) {
            puVar10 = *(uint**)( lVar9 + 0x10 );
            LAB_001012ff:uVar4 = *puVar10;
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
            };
            return param_2;
         }
         uVar12 = (uint)(char)*pbVar17;
         LAB_00101186:uVar4 = **(uint**)( lVar13 + 0x10 );
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
            } while ( uVar4 != 0 || uVar12 != 0 );
         }
         return param_2;
      }
      if (pbVar17 == (byte*)0x0) {
         puVar10 = *(uint**)( lVar9 + 0x10 );
         uVar6 = *puVar10;
         LAB_001011e8:uVar4 = (uint)(char)*pbVar15;
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
         };
         return param_2;
      }
      uVar12 = (uint)(char)*pbVar17;
      uVar5 = uVar12;
   } else {
      pbVar16 = *(byte**)( lVar8 + 8 );
      if (lVar13 == 0) {
         if (pbVar16 != (byte*)0x0) {
            bVar11 = *pbVar16;
            uVar4 = (uint)(char)bVar11;
            uVar12 = 0;
            pbVar15 = &_LC0;
            goto LAB_00100d30;
         }
         uVar4 = 0;
         pbVar15 = &_LC0;
         LAB_00100b29:uVar12 = **(uint**)( lVar8 + 0x10 );
         if (uVar4 != 0 || uVar12 != 0) {
            lVar14 = 0;
            do {
               if (uVar12 == 0) goto joined_r0x00100d78;
               if (uVar4 == 0) break;
               if (uVar12 < uVar4) goto joined_r0x00100d78;
               if (uVar4 < uVar12) break;
               uVar12 = ( *(uint**)( lVar8 + 0x10 ) )[lVar14 + 1];
               uVar4 = (uint)(char)pbVar15[lVar14 + 1];
               lVar14 = lVar14 + 1;
            } while ( uVar12 != 0 || uVar4 != 0 );
         }
         LAB_00100ca8:if (lVar9 != 0) {
            pbVar17 = *(byte**)( lVar9 + 8 );
            if (pbVar16 != (byte*)0x0) goto LAB_00100cbe;
            puVar7 = *(uint**)( lVar8 + 0x10 );
            uVar4 = *puVar7;
            LAB_001010a8:if (pbVar17 != (byte*)0x0) {
               uVar12 = (uint)(char)*pbVar17;
               uVar6 = uVar4 | uVar12;
               goto LAB_00101363;
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
               } while ( uVar4 != 0 || uVar12 != 0 );
               goto LAB_00100fa0;
            }
            LAB_001012f6:if (pbVar15 != (byte*)0x0) goto LAB_001011e8;
            goto LAB_001012ff;
         }
         if (pbVar16 == (byte*)0x0) {
            puVar7 = *(uint**)( lVar8 + 0x10 );
            goto LAB_001013c1;
         }
         LAB_00101011:bVar11 = *pbVar16;
         uVar5 = (uint)(char)bVar11;
         uVar6 = 0;
         pbVar17 = &_LC0;
         LAB_00100e09:uVar12 = uVar6;
         if (bVar11 != 0) goto LAB_00100e12;
      } else {
         pbVar15 = *(byte**)( lVar13 + 8 );
         if (pbVar16 != (byte*)0x0) {
            uVar4 = (uint)(char)*pbVar16;
            goto LAB_00100c42;
         }
         if (pbVar15 != (byte*)0x0) {
            uVar4 = (uint)(char)*pbVar15;
            goto LAB_00100b29;
         }
         puVar7 = *(uint**)( lVar8 + 0x10 );
         uVar12 = **(uint**)( lVar13 + 0x10 );
         uVar4 = *puVar7;
         if (uVar12 != 0 || uVar4 != 0) {
            lVar14 = 4;
            do {
               if (uVar4 == 0) {
                  LAB_00100f18:pbVar16 = (byte*)0x0;
                  goto joined_r0x00100d78;
               }
               if (uVar12 == 0) break;
               if (uVar4 < uVar12) goto LAB_00100f18;
               if (uVar12 < uVar4) break;
               uVar4 = *(uint*)( (long)puVar7 + lVar14 );
               uVar12 = *(uint*)( (long)*(uint**)( lVar13 + 0x10 ) + lVar14 );
               lVar14 = lVar14 + 4;
            } while ( uVar4 != 0 || uVar12 != 0 );
            pbVar16 = (byte*)0x0;
            goto LAB_00100ca8;
         }
         if (lVar9 != 0) {
            pbVar17 = *(byte**)( lVar9 + 8 );
            uVar4 = 0;
            goto LAB_001010a8;
         }
         LAB_001013c1:uVar4 = *puVar7;
         uVar12 = 0;
         pbVar17 = &_LC0;
         uVar6 = uVar4;
         LAB_00101363:if (uVar6 != 0) {
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
            } while ( uVar4 != 0 || uVar12 != 0 );
            goto LAB_00100fa0;
         }
      }
      uVar5 = uVar12;
      if (pbVar15 == (byte*)0x0) goto LAB_00101186;
   }
   LAB_00100fb9:bVar11 = *pbVar15;
   if (bVar11 == 0 && (char)uVar5 == '\0') {
      return param_2;
   }
   lVar8 = 1;
   while (true) {
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
   };
   return param_2;
   joined_r0x00100d78:if (lVar9 == 0) {
      uVar4 = 0;
      uVar12 = 0;
      bVar11 = 0;
      pbVar17 = &_LC0;
      if (pbVar15 != (byte*)0x0) goto LAB_00100e67;
      LAB_00100d94:uVar6 = **(uint**)( lVar13 + 0x10 );
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
         } while ( uVar6 != 0 || uVar12 != 0 );
         goto LAB_00100f30;
      }
      LAB_001013fe:bVar11 = (byte)uVar12;
      if (pbVar16 == (byte*)0x0) goto LAB_0010111e;
   } else {
      pbVar17 = *(byte**)( lVar9 + 8 );
      if (pbVar15 == (byte*)0x0) {
         if (pbVar17 != (byte*)0x0) {
            uVar12 = (uint)(char)*pbVar17;
            goto LAB_00100d94;
         }
         puVar7 = *(uint**)( lVar9 + 0x10 );
         uVar4 = *puVar7;
         uVar6 = **(uint**)( lVar13 + 0x10 );
         uVar12 = uVar4 | uVar6;
         if (uVar12 == 0) goto LAB_00101299;
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
         } while ( uVar6 != 0 || uVar4 != 0 );
      } else {
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
               } while ( uVar6 != 0 || uVar4 != 0 );
               goto LAB_00100f30;
            }
            LAB_00101299:if (pbVar16 == (byte*)0x0) goto LAB_0010129e;
            goto LAB_00101246;
         }
         bVar11 = *pbVar17;
         uVar4 = (uint)(char)bVar11;
         LAB_00100e67:bVar3 = *pbVar15;
         uVar12 = ( uint )(bVar11 | bVar3);
         if (( bVar11 | bVar3 ) == 0) goto LAB_001013fe;
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
         } while ( bVar3 != 0 || *pbVar2 != 0 );
      }
      LAB_00100f30:if (pbVar16 == (byte*)0x0) {
         if (pbVar17 == (byte*)0x0) {
            puVar7 = *(uint**)( lVar9 + 0x10 );
            LAB_0010129e:uVar4 = *puVar7;
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
            };
            return param_1;
         }
         uVar4 = (uint)(char)*pbVar17;
         LAB_0010111e:uVar12 = **(uint**)( lVar8 + 0x10 );
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
         };
         return param_1;
      }
      if (pbVar17 == (byte*)0x0) {
         puVar7 = *(uint**)( lVar9 + 0x10 );
         uVar12 = *puVar7;
         LAB_00101246:uVar4 = (uint)(char)*pbVar16;
         if (uVar4 == 0 && uVar12 == 0) {
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
         };
         return param_1;
      }
      bVar11 = *pbVar17;
      uVar4 = (uint)(char)bVar11;
   }
   bVar3 = *pbVar16;
   if (bVar3 == 0 && bVar11 == 0) {
      return param_1;
   }
   lVar8 = 1;
   while (true) {
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
   };
   return param_1;
}/* CowData<unsigned int>::_copy_on_write() [clone .isra.0] */void CowData<unsigned_int>::_copy_on_write(CowData<unsigned_int> *this) {
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
   __n = lVar2 * 4;
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
}/* CowData<bool>::_copy_on_write() [clone .isra.0] */void CowData<bool>::_copy_on_write(CowData<bool> *this) {
   long *plVar1;
   size_t __n;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }
   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }
   __n = *(size_t*)( *(long*)this + -8 );
   uVar5 = 0x10;
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
      puVar4[1] = __n;
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
}/* CowData<long>::_copy_on_write() [clone .isra.0] */void CowData<long>::_copy_on_write(CowData<long> *this) {
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
}/* SortArray<StringName, StringName::AlphCompare, true>::partitioner(long, long, StringName,
   StringName*) const [clone .isra.0] */long SortArray<StringName,StringName::AlphCompare,true>::partitioner(long param_1, long param_2, long *param_3, long param_4) {
   byte *pbVar1;
   byte *pbVar2;
   long lVar3;
   long lVar4;
   byte *pbVar5;
   uint uVar6;
   uint uVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   long *plVar11;
   byte bVar12;
   byte *pbVar13;
   long *plVar14;
   lVar10 = *param_3;
   lVar3 = *(long*)( param_4 + param_1 * 8 );
   lVar9 = param_1;
   lVar8 = param_2;
   joined_r0x001017df:if (lVar3 == 0) {
      if (lVar10 == 0) goto LAB_00101900;
      pbVar5 = *(byte**)( lVar10 + 8 );
      uVar6 = 0;
      pbVar13 = &_LC0;
      LAB_00101896:if (pbVar5 == (byte*)0x0) {
         uVar7 = **(uint**)( lVar10 + 0x10 );
         if (uVar7 != 0 || uVar6 != 0) {
            lVar3 = 0;
            do {
               if (uVar6 == 0) goto LAB_00101860;
               if (uVar7 == 0) break;
               if (uVar6 < uVar7) goto LAB_00101860;
               if (uVar7 < uVar6) break;
               uVar6 = (uint)(char)pbVar13[lVar3 + 1];
               uVar7 = ( *(uint**)( lVar10 + 0x10 ) )[lVar3 + 1];
               lVar3 = lVar3 + 1;
            } while ( uVar6 != 0 || uVar7 != 0 );
         }
         goto LAB_00101900;
      }
      uVar7 = (uint)(char)*pbVar5;
      bVar12 = (byte)uVar6 | *pbVar5;
      LAB_00101bd6:if (bVar12 != 0) {
         lVar3 = 1;
         do {
            if (uVar6 == 0) goto LAB_00101860;
            if (uVar7 == 0) break;
            if (uVar6 < uVar7) goto LAB_00101860;
            if (uVar7 < uVar6) break;
            pbVar1 = pbVar13 + lVar3;
            uVar6 = (uint)(char)*pbVar1;
            pbVar2 = pbVar5 + lVar3;
            uVar7 = (uint)(char)*pbVar2;
            lVar3 = lVar3 + 1;
         } while ( *pbVar1 != 0 || *pbVar2 != 0 );
      }
   } else {
      pbVar13 = *(byte**)( lVar3 + 8 );
      if (lVar10 == 0) {
         if (pbVar13 != (byte*)0x0) {
            bVar12 = *pbVar13;
            uVar6 = (uint)(char)bVar12;
            uVar7 = 0;
            pbVar5 = &_LC0;
            goto LAB_00101bd6;
         }
         uVar6 = 0;
         pbVar5 = &_LC0;
      } else {
         pbVar5 = *(byte**)( lVar10 + 8 );
         if (pbVar13 != (byte*)0x0) {
            uVar6 = (uint)(char)*pbVar13;
            goto LAB_00101896;
         }
         if (pbVar5 == (byte*)0x0) {
            uVar6 = **(uint**)( lVar10 + 0x10 );
            uVar7 = **(uint**)( lVar3 + 0x10 );
            if (uVar6 != 0 || uVar7 != 0) {
               lVar4 = 4;
               do {
                  if (uVar7 == 0) goto LAB_00101860;
                  if (uVar6 == 0) break;
                  if (uVar7 < uVar6) goto LAB_00101860;
                  if (uVar6 < uVar7) break;
                  uVar7 = *(uint*)( (long)*(uint**)( lVar3 + 0x10 ) + lVar4 );
                  uVar6 = *(uint*)( (long)*(uint**)( lVar10 + 0x10 ) + lVar4 );
                  lVar4 = lVar4 + 4;
               } while ( uVar7 != 0 || uVar6 != 0 );
            }
            goto LAB_00101900;
         }
         uVar6 = (uint)(char)*pbVar5;
      }
      uVar7 = **(uint**)( lVar3 + 0x10 );
      if (uVar7 != 0 || uVar6 != 0) {
         lVar4 = 0;
         do {
            if (uVar7 == 0) goto LAB_00101860;
            if (uVar6 == 0) break;
            if (uVar7 < uVar6) goto LAB_00101860;
            if (uVar6 < uVar7) break;
            uVar7 = ( *(uint**)( lVar3 + 0x10 ) )[lVar4 + 1];
            uVar6 = (uint)(char)pbVar5[lVar4 + 1];
            lVar4 = lVar4 + 1;
         } while ( uVar7 != 0 || uVar6 != 0 );
      }
   }
   goto LAB_00101900;
   LAB_00101860:if (param_2 + -1 == lVar9) {
      _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
      lVar10 = *param_3;
      LAB_00101900:plVar11 = (long*)( param_4 + -8 + lVar8 * 8 );
      LAB_00101910:lVar8 = lVar8 + -1;
      lVar3 = *plVar11;
      if (lVar10 != 0) {
         pbVar13 = *(byte**)( lVar10 + 8 );
         do {
            if (lVar3 == 0) {
               if (pbVar13 != (byte*)0x0) {
                  bVar12 = *pbVar13;
                  uVar7 = (uint)(char)bVar12;
                  pbVar5 = &_LC0;
                  uVar6 = 0;
                  goto LAB_00101abe;
               }
               uVar6 = 0;
               pbVar5 = &_LC0;
               LAB_001019da:uVar7 = **(uint**)( lVar10 + 0x10 );
               if (uVar7 == 0 && uVar6 == 0) goto LAB_00101b38;
               lVar3 = 0;
               while (uVar7 != 0) {
                  if (uVar6 == 0) goto LAB_00101b38;
                  if (uVar7 < uVar6) break;
                  if (uVar6 < uVar7) goto LAB_00101b38;
                  uVar7 = ( *(uint**)( lVar10 + 0x10 ) )[lVar3 + 1];
                  uVar6 = (uint)(char)pbVar5[lVar3 + 1];
                  lVar3 = lVar3 + 1;
                  if (uVar7 == 0 && uVar6 == 0) goto LAB_00101b38;
               };
            } else {
               pbVar5 = *(byte**)( lVar3 + 8 );
               if (pbVar13 != (byte*)0x0) goto LAB_00101b00;
               if (pbVar5 != (byte*)0x0) {
                  uVar6 = (uint)(char)*pbVar5;
                  goto LAB_001019da;
               }
               uVar6 = **(uint**)( lVar3 + 0x10 );
               uVar7 = **(uint**)( lVar10 + 0x10 );
               if (uVar6 == 0 && uVar7 == 0) goto LAB_00101b38;
               lVar4 = 4;
               while (uVar7 != 0) {
                  if (uVar6 == 0) goto LAB_00101b38;
                  if (uVar7 < uVar6) break;
                  if (uVar6 < uVar7) goto LAB_00101b38;
                  uVar7 = *(uint*)( (long)*(uint**)( lVar10 + 0x10 ) + lVar4 );
                  uVar6 = *(uint*)( (long)*(uint**)( lVar3 + 0x10 ) + lVar4 );
                  lVar4 = lVar4 + 4;
                  if (uVar7 == 0 && uVar6 == 0) goto LAB_00101b38;
               };
            }
            plVar14 = plVar11;
            if (param_1 == lVar8) goto LAB_00101b10;
            lVar3 = plVar11[-1];
            lVar8 = lVar8 + -1;
            plVar11 = plVar11 + -1;
         } while ( true );
      }
      if (lVar3 != 0) {
         pbVar5 = *(byte**)( lVar3 + 8 );
         uVar7 = 0;
         bVar12 = 0;
         pbVar13 = &_LC0;
         goto LAB_00101a49;
      }
      goto LAB_00101b38;
   }
   LAB_0010186e:lVar9 = lVar9 + 1;
   lVar3 = *(long*)( param_4 + lVar9 * 8 );
   goto joined_r0x001017df;
   LAB_00101b00:bVar12 = *pbVar13;
   uVar7 = (uint)(char)bVar12;
   LAB_00101a49:if (pbVar5 == (byte*)0x0) {
      uVar6 = **(uint**)( lVar3 + 0x10 );
      if (uVar6 == 0 && uVar7 == 0) goto LAB_00101b38;
      lVar4 = 0;
      while (plVar14 = plVar11,uVar7 != 0) {
         if (uVar6 == 0) goto LAB_00101b38;
         if (uVar7 < uVar6) break;
         if (uVar6 < uVar7) goto LAB_00101b38;
         uVar7 = (uint)(char)pbVar13[lVar4 + 1];
         uVar6 = ( *(uint**)( lVar3 + 0x10 ) )[lVar4 + 1];
         lVar4 = lVar4 + 1;
         if (uVar7 == 0 && uVar6 == 0) goto LAB_00101b38;
      };
   } else {
      uVar6 = (uint)(char)*pbVar5;
      bVar12 = bVar12 | *pbVar5;
      LAB_00101abe:if (bVar12 == 0) goto LAB_00101b38;
      lVar3 = 1;
      while (plVar14 = plVar11,uVar7 != 0) {
         if (uVar6 == 0) goto LAB_00101b38;
         if (uVar7 < uVar6) break;
         if (uVar6 < uVar7) goto LAB_00101b38;
         pbVar1 = pbVar13 + lVar3;
         uVar7 = (uint)(char)*pbVar1;
         pbVar2 = pbVar5 + lVar3;
         uVar6 = (uint)(char)*pbVar2;
         lVar3 = lVar3 + 1;
         if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_00101b38;
      };
   }
   plVar11 = plVar14 + -1;
   if (param_1 == lVar8) goto LAB_00101b10;
   goto LAB_00101910;
   LAB_00101b10:plVar11 = plVar14;
   _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
   LAB_00101b38:if (lVar8 <= lVar9) {
      return lVar9;
   }
   lVar3 = *(long*)( param_4 + lVar9 * 8 );
   *(undefined8*)( param_4 + lVar9 * 8 ) = 0;
   if (*plVar11 != 0) {
      StringName::unref();
      *(long*)( param_4 + lVar9 * 8 ) = *plVar11;
      *plVar11 = 0;
   }
   if (lVar3 != 0) {
      StringName::unref();
      *plVar11 = lVar3;
   }
   lVar10 = *param_3;
   goto LAB_0010186e;
}/* SortArray<StringName, StringName::AlphCompare, true>::partial_sort(long, long, long, StringName*)
   const [clone .isra.0] */void SortArray<StringName,StringName::AlphCompare,true>::partial_sort(long param_1, long param_2, long param_3, StringName_conflict *param_4) {
   byte *pbVar1;
   byte *pbVar2;
   bool bVar3;
   byte bVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   uint uVar8;
   uint uVar9;
   long lVar10;
   byte *pbVar11;
   byte *pbVar12;
   StringName_conflict *pSVar13;
   long lVar14;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   lVar10 = param_3 - param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar10 < 2) {
      if (param_2 <= param_3) goto LAB_00101fbb;
      LAB_00101da6:lVar14 = param_3;
      LAB_00101de0:lVar6 = *(long*)( param_4 + lVar14 * 8 );
      lVar5 = *(long*)( param_4 + param_1 * 8 );
      if (lVar6 == 0) {
         if (lVar5 != 0) {
            pbVar11 = *(byte**)( lVar5 + 8 );
            uVar8 = 0;
            pbVar12 = &_LC0;
            LAB_00101ff4:if (pbVar11 == (byte*)0x0) {
               uVar9 = **(uint**)( lVar5 + 0x10 );
               if (uVar9 != 0 || uVar8 != 0) {
                  lVar6 = 0;
                  do {
                     if (uVar8 == 0) goto LAB_00101e60;
                     if (uVar9 == 0) break;
                     if (uVar8 < uVar9) goto LAB_00101e60;
                     if (uVar9 < uVar8) break;
                     uVar8 = (uint)(char)pbVar12[lVar6 + 1];
                     uVar9 = ( *(uint**)( lVar5 + 0x10 ) )[lVar6 + 1];
                     lVar6 = lVar6 + 1;
                  } while ( uVar8 != 0 || uVar9 != 0 );
               }
            } else {
               uVar9 = (uint)(char)*pbVar11;
               bVar4 = (byte)uVar8 | *pbVar11;
               LAB_00102056:if (bVar4 != 0) {
                  lVar6 = 1;
                  do {
                     if (uVar8 == 0) goto LAB_00101e60;
                     if (uVar9 == 0) break;
                     if (uVar8 < uVar9) goto LAB_00101e60;
                     if (uVar9 < uVar8) break;
                     pbVar1 = pbVar12 + lVar6;
                     uVar8 = (uint)(char)*pbVar1;
                     pbVar2 = pbVar11 + lVar6;
                     uVar9 = (uint)(char)*pbVar2;
                     lVar6 = lVar6 + 1;
                  } while ( *pbVar1 != 0 || *pbVar2 != 0 );
               }
            }
         }
      } else {
         pbVar12 = *(byte**)( lVar6 + 8 );
         if (lVar5 == 0) {
            if (pbVar12 != (byte*)0x0) {
               bVar4 = *pbVar12;
               uVar8 = (uint)(char)bVar4;
               uVar9 = 0;
               pbVar11 = &_LC0;
               goto LAB_00102056;
            }
            uVar8 = 0;
            pbVar11 = &_LC0;
         } else {
            pbVar11 = *(byte**)( lVar5 + 8 );
            if (pbVar12 != (byte*)0x0) {
               uVar8 = (uint)(char)*pbVar12;
               goto LAB_00101ff4;
            }
            if (pbVar11 == (byte*)0x0) {
               uVar8 = **(uint**)( lVar5 + 0x10 );
               uVar9 = **(uint**)( lVar6 + 0x10 );
               if (uVar8 != 0 || uVar9 != 0) {
                  lVar7 = 4;
                  do {
                     if (uVar9 == 0) goto LAB_00101e60;
                     if (uVar8 == 0) break;
                     if (uVar9 < uVar8) goto LAB_00101e60;
                     if (uVar8 < uVar9) break;
                     uVar9 = *(uint*)( (long)*(uint**)( lVar6 + 0x10 ) + lVar7 );
                     uVar8 = *(uint*)( (long)*(uint**)( lVar5 + 0x10 ) + lVar7 );
                     lVar7 = lVar7 + 4;
                  } while ( uVar9 != 0 || uVar8 != 0 );
               }
               goto LAB_00101ee8;
            }
            uVar8 = (uint)(char)*pbVar11;
         }
         uVar9 = **(uint**)( lVar6 + 0x10 );
         if (uVar9 != 0 || uVar8 != 0) {
            lVar5 = 0;
            do {
               if (uVar9 == 0) goto LAB_00101e60;
               if (uVar8 == 0) break;
               if (uVar9 < uVar8) goto LAB_00101e60;
               if (uVar8 < uVar9) break;
               uVar9 = ( *(uint**)( lVar6 + 0x10 ) )[lVar5 + 1];
               uVar8 = (uint)(char)pbVar11[lVar5 + 1];
               lVar5 = lVar5 + 1;
            } while ( uVar9 != 0 || uVar8 != 0 );
         }
      }
      goto LAB_00101ee8;
   }
   lVar14 = lVar10 + -2 >> 1;
   pSVar13 = param_4 + ( param_1 + lVar14 ) * 8;
   while (true) {
      StringName::StringName((StringName_conflict*)&local_48, pSVar13);
      adjust_heap(param_1, lVar14, lVar10, (StringName_conflict*)&local_48, param_4);
      if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
         StringName::unref();
      }
      pSVar13 = pSVar13 + -8;
      if (lVar14 == 0) break;
      lVar14 = lVar14 + -1;
   };
   if (param_3 < param_2) goto LAB_00101da6;
   goto LAB_00101f1b;
   LAB_00101e60:StringName::StringName((StringName_conflict*)&local_50, param_4 + lVar14 * 8);
   StringName::operator =(param_4 + lVar14 * 8, param_4 + param_1 * 8);
   StringName::StringName((StringName_conflict*)&local_48, (StringName_conflict*)&local_50);
   adjust_heap(param_1, 0, lVar10, (StringName_conflict*)&local_48, param_4);
   if (( StringName::configured != '\0' ) && ( ( ( local_48 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_50 != 0 ) ) )) {
      StringName::unref();
   }
   LAB_00101ee8:lVar14 = lVar14 + 1;
   if (param_2 <= lVar14) goto code_r0x00101ef5;
   goto LAB_00101de0;
   code_r0x00101ef5:if (lVar10 < 2) goto LAB_00101fbb;
   LAB_00101f1b:pSVar13 = param_4 + param_3 * 8 + -8;
   lVar10 = ( param_3 + -1 ) - param_1;
   do {
      StringName::StringName((StringName_conflict*)&local_50, pSVar13);
      StringName::operator =(pSVar13, param_4 + param_1 * 8);
      StringName::StringName((StringName_conflict*)&local_48, (StringName_conflict*)&local_50);
      adjust_heap(param_1, 0, lVar10, (StringName_conflict*)&local_48, param_4);
      if (( ( StringName::configured != '\0' ) && ( ( local_48 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_50 != 0 )) {
         StringName::unref();
      }
      pSVar13 = pSVar13 + -8;
      bVar3 = 1 < lVar10;
      lVar10 = lVar10 + -1;
   } while ( bVar3 );
   LAB_00101fbb:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* SortArray<StringName, StringName::AlphCompare, true>::introsort(long, long, StringName*, long)
   const [clone .isra.0] */void SortArray<StringName,StringName::AlphCompare,true>::introsort(long param_1, long param_2, StringName_conflict *param_3, long param_4) {
   long lVar1;
   StringName_conflict *pSVar2;
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
   long in_FS_OFFSET;
   long local_138;
   long local_120;
   long local_100;
   long local_f8;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar1 = param_2 - param_1;
   if (lVar1 < 0x11) {
      LAB_00102b8a:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
   } else {
      if (param_4 != 0) {
         lVar12 = param_2 * 8;
         lVar3 = param_2;
         LAB_001021d2:param_4 = param_4 + -1;
         pSVar2 = (StringName_conflict*)median_of_3(param_3 + param_1 * 8, param_3 + ( ( lVar1 >> 1 ) + param_1 ) * 8, param_3 + lVar12 + -8);
         StringName::StringName((StringName_conflict*)&local_48, pSVar2);
         param_2 = partitioner(param_1, lVar3, (StringName_conflict*)&local_48, param_3);
         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }
         lVar1 = lVar3 - param_2;
         if (0x10 < lVar1) {
            if (param_4 != 0) {
               lVar12 = param_4;
               lVar4 = lVar3;
               LAB_00102291:do {
                  lVar12 = lVar12 + -1;
                  pSVar2 = (StringName_conflict*)median_of_3(param_3 + param_2 * 8, param_3 + ( ( lVar1 >> 1 ) + param_2 ) * 8, param_3 + lVar4 * 8 + -8);
                  StringName::StringName((StringName_conflict*)&local_48, pSVar2);
                  lVar3 = partitioner(param_2, lVar4, (StringName_conflict*)&local_48, param_3);
                  if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                     StringName::unref();
                  }
                  lVar1 = lVar4 - lVar3;
                  if (0x10 < lVar1) {
                     if (lVar12 != 0) {
                        lVar13 = lVar12;
                        local_138 = lVar4;
                        LAB_00102352:do {
                           lVar13 = lVar13 + -1;
                           pSVar2 = (StringName_conflict*)median_of_3(param_3 + lVar3 * 8, param_3 + ( ( lVar1 >> 1 ) + lVar3 ) * 8, param_3 + local_138 * 8 + -8);
                           StringName::StringName((StringName_conflict*)&local_48, pSVar2);
                           lVar4 = partitioner(lVar3, local_138, (StringName_conflict*)&local_48, param_3);
                           if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                              StringName::unref();
                           }
                           lVar1 = local_138 - lVar4;
                           if (0x10 < lVar1) {
                              if (lVar13 != 0) {
                                 lVar11 = lVar13;
                                 LAB_0010240c:do {
                                    lVar11 = lVar11 + -1;
                                    lVar9 = local_138 * 8;
                                    pSVar2 = (StringName_conflict*)median_of_3(param_3 + lVar4 * 8, param_3 + ( ( lVar1 >> 1 ) + lVar4 ) * 8, param_3 + lVar9 + -8);
                                    StringName::StringName((StringName_conflict*)&local_48, pSVar2);
                                    lVar5 = partitioner(lVar4, local_138, (StringName_conflict*)&local_48, param_3);
                                    if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                                       StringName::unref();
                                    }
                                    lVar1 = local_138 - lVar5;
                                    if (0x10 < lVar1) {
                                       lVar6 = local_138;
                                       if (lVar11 != 0) {
                                          lVar7 = local_138;
                                          local_100 = lVar11;
                                          do {
                                             local_100 = local_100 + -1;
                                             pSVar2 = (StringName_conflict*)median_of_3(param_3 + lVar5 * 8, param_3 + ( ( lVar1 >> 1 ) + lVar5 ) * 8, param_3 + lVar9 + -8);
                                             StringName::StringName((StringName_conflict*)&local_48, pSVar2);
                                             lVar6 = partitioner(lVar5, lVar7, (StringName_conflict*)&local_48, param_3);
                                             if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                                                StringName::unref();
                                             }
                                             lVar1 = lVar7 - lVar6;
                                             if (0x10 < lVar1) {
                                                if (local_100 != 0) {
                                                   lVar8 = lVar7;
                                                   local_120 = local_100;
                                                   do {
                                                      local_120 = local_120 + -1;
                                                      pSVar2 = (StringName_conflict*)median_of_3(param_3 + lVar6 * 8, param_3 + ( ( lVar1 >> 1 ) + lVar6 ) * 8, param_3 + lVar9 + -8);
                                                      StringName::StringName((StringName_conflict*)&local_48, pSVar2);
                                                      lVar7 = partitioner(lVar6, lVar8, (StringName_conflict*)&local_48, param_3);
                                                      if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                                                         StringName::unref();
                                                      }
                                                      lVar1 = lVar8 - lVar7;
                                                      if (0x10 < lVar1) {
                                                         if (local_120 == 0) {
                                                            LAB_0010295e:partial_sort(lVar7, lVar8, lVar8, param_3);
                                                         } else {
                                                            lVar9 = lVar8;
                                                            local_138 = local_120;
                                                            do {
                                                               while (true) {
                                                                  local_138 = local_138 + -1;
                                                                  lVar14 = lVar9 * 8;
                                                                  pSVar2 = (StringName_conflict*)median_of_3(param_3 + lVar7 * 8, param_3 + ( ( lVar1 >> 1 ) + lVar7 ) * 8, param_3 + lVar14 + -8);
                                                                  StringName::StringName((StringName_conflict*)&local_48, pSVar2);
                                                                  lVar8 = partitioner(lVar7, lVar9, (StringName_conflict*)&local_48, param_3);
                                                                  if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                                                                     StringName::unref();
                                                                  }
                                                                  lVar1 = lVar9 - lVar8;
                                                                  if (0x10 < lVar1) break;
                                                                  LAB_001028ce:lVar1 = lVar8 - lVar7;
                                                                  if (lVar1 < 0x11) {
                                                                     lVar1 = lVar7 - lVar6;
                                                                     if (lVar1 < 0x11) goto LAB_00102880;
                                                                     goto LAB_00102929;
                                                                  }
                                                                  lVar9 = lVar8;
                                                                  if (local_138 == 0) goto LAB_0010295e;
                                                               };
                                                               if (local_138 == 0) {
                                                                  LAB_001028bd:partial_sort(lVar8, lVar9, lVar9, param_3);
                                                                  goto LAB_001028ce;
                                                               }
                                                               lVar10 = lVar9;
                                                               local_f8 = local_138;
                                                               while (true) {
                                                                  local_f8 = local_f8 + -1;
                                                                  pSVar2 = (StringName_conflict*)median_of_3(param_3 + lVar8 * 8, param_3 + ( ( lVar1 >> 1 ) + lVar8 ) * 8, param_3 + lVar14 + -8);
                                                                  StringName::StringName((StringName_conflict*)&local_48, pSVar2);
                                                                  lVar9 = partitioner(lVar8, lVar10, (StringName_conflict*)&local_48, param_3);
                                                                  if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                                                                     StringName::unref();
                                                                  }
                                                                  lVar1 = lVar10 - lVar9;
                                                                  if (0x10 < lVar1) {
                                                                     if (local_f8 != 0) {
                                                                        lVar14 = local_f8;
                                                                        lVar15 = lVar10;
                                                                        do {
                                                                           lVar14 = lVar14 + -1;
                                                                           pSVar2 = (StringName_conflict*)median_of_3(param_3 + lVar9 * 8, param_3 + ( ( lVar1 >> 1 ) + lVar9 ) * 8, param_3 + lVar15 * 8 + -8);
                                                                           StringName::StringName((StringName_conflict*)&local_48, pSVar2);
                                                                           lVar10 = partitioner(lVar9, lVar15, (StringName_conflict*)&local_48, param_3);
                                                                           if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                                                                              StringName::unref();
                                                                           }
                                                                           introsort(lVar10, lVar15, param_3, lVar14);
                                                                           lVar1 = lVar10 - lVar9;
                                                                           if (lVar1 < 0x11) {
                                                                              lVar1 = lVar9 - lVar8;
                                                                              if (lVar1 < 0x11) goto LAB_001028ce;
                                                                              goto LAB_00102854;
                                                                           }
                                                                           lVar15 = lVar10;
                                                                        } while ( lVar14 != 0 );
                                                                     }
                                                                     partial_sort(lVar9, lVar10, lVar10, param_3);
                                                                  }
                                                                  lVar1 = lVar9 - lVar8;
                                                                  if (lVar1 < 0x11) break;
                                                                  if (local_f8 == 0) goto LAB_001028bd;
                                                                  LAB_00102854:lVar14 = lVar9 * 8;
                                                                  lVar10 = lVar9;
                                                               };
                                                               lVar1 = lVar8 - lVar7;
                                                               lVar9 = lVar8;
                                                            } while ( 0x10 < lVar1 );
                                                         }
                                                      }
                                                      lVar1 = lVar7 - lVar6;
                                                      if (lVar1 < 0x11) {
                                                         lVar1 = lVar6 - lVar5;
                                                         if (lVar1 < 0x11) goto LAB_001029a7;
                                                         goto LAB_001028a1;
                                                      }
                                                      if (local_120 == 0) break;
                                                      LAB_00102929:lVar9 = lVar7 * 8;
                                                      lVar8 = lVar7;
                                                   } while ( true );
                                                }
                                                partial_sort(lVar6, lVar7, lVar7, param_3);
                                             }
                                             LAB_00102880:lVar1 = lVar6 - lVar5;
                                             if (lVar1 < 0x11) {
                                                lVar1 = lVar5 - lVar4;
                                                local_138 = lVar5;
                                                if (lVar1 < 0x11) goto LAB_00102a60;
                                                goto LAB_0010240c;
                                             }
                                             if (local_100 == 0) break;
                                             LAB_001028a1:lVar9 = lVar6 * 8;
                                             lVar7 = lVar6;
                                          } while ( true );
                                       }
                                       partial_sort(lVar5, lVar6, lVar6, param_3);
                                    }
                                    LAB_001029a7:lVar1 = lVar5 - lVar4;
                                    if (lVar1 < 0x11) {
                                       lVar1 = lVar4 - lVar3;
                                       local_138 = lVar4;
                                       if (lVar1 < 0x11) goto LAB_00102af1;
                                       goto LAB_00102352;
                                    }
                                    local_138 = lVar5;
                                 } while ( lVar11 != 0 );
                              }
                              partial_sort(lVar4, local_138, local_138, param_3);
                           }
                           LAB_00102a60:lVar1 = lVar4 - lVar3;
                           if (lVar1 < 0x11) {
                              lVar1 = lVar3 - param_2;
                              lVar4 = lVar3;
                              if (lVar1 < 0x11) goto LAB_00102b7e;
                              goto LAB_00102291;
                           }
                           local_138 = lVar4;
                        } while ( lVar13 != 0 );
                     }
                     partial_sort(lVar3, lVar4, lVar4, param_3);
                  }
                  LAB_00102af1:lVar1 = lVar3 - param_2;
                  if (lVar1 < 0x11) goto LAB_00102b7e;
                  lVar4 = lVar3;
                  if (lVar12 == 0) break;
               } while ( true );
            }
            partial_sort(param_2, lVar3, lVar3, param_3);
         }
         lVar1 = param_2 - param_1;
         if (0x10 < lVar1) {
            if (param_4 != 0) goto LAB_00102b5d;
            goto LAB_00102bbc;
         }
         goto LAB_00102b8a;
      }
      LAB_00102bbc:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         partial_sort(param_1, param_2, param_2, param_3);
         return;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_00102b7e:lVar1 = param_2 - param_1;
   if (lVar1 < 0x11) goto LAB_00102b8a;
   LAB_00102b5d:lVar12 = param_2 * 8;
   lVar3 = param_2;
   goto LAB_001021d2;
}/* CowData<unsigned char>::_ref(CowData<unsigned char> const&) [clone .part.0] */void CowData<unsigned_char>::_ref(CowData<unsigned_char> *this, CowData *param_1) {
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
}/* CowData<char>::_ref(CowData<char> const&) [clone .part.0] */void CowData<char>::_ref(CowData<char> *this, CowData *param_1) {
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
}/* CowData<RID>::_copy_on_write() [clone .isra.0] */void CowData<RID>::_copy_on_write(CowData<RID> *this) {
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
}/* ShaderRD::_build_variant_code(StringBuilder&, unsigned int, ShaderRD::Version const*,
   ShaderRD::StageTemplate const&) */void ShaderRD::_build_variant_code(ShaderRD *this, StringBuilder *param_1, uint param_2, Version *param_3, StageTemplate *param_4) {
   long *plVar1;
   undefined4 *puVar2;
   uint uVar3;
   undefined8 *puVar4;
   char *pcVar5;
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
   code *pcVar22;
   uint uVar23;
   long lVar24;
   int iVar25;
   long lVar26;
   long lVar27;
   uint uVar28;
   ulong uVar29;
   uint uVar30;
   long in_FS_OFFSET;
   bool bVar31;
   undefined4 *local_d0;
   long local_80;
   long local_78;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_d0 = *(undefined4**)( param_4 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar2 = local_d0 + ( ulong ) * (uint*)param_4 * 6;
   if (puVar2 != local_d0) {
      do {
         switch (*local_d0) {
            case 0:
        StringBuilder::append((char *)param_1);
        CharString::get_data();
        StringBuilder::append((char *)param_1);
        if (*(long *)(this + 0x18) == 0) {
          lVar24 = 0;
LAB_00103804:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,(ulong)param_2,lVar24,"p_index",
                     "size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar22 = (code *)invalidInstructionException();
          (*pcVar22)();
        }
        lVar24 = *(long *)(*(long *)(this + 0x18) + -8);
        if (lVar24 <= (long)(ulong)param_2) goto LAB_00103804;
        CharString::get_data();
        StringBuilder::append((char *)param_1);
        lVar24 = *(long *)(param_3 + 0x58);
        for (lVar27 = 0; (lVar24 != 0 && (lVar27 < *(long *)(lVar24 + -8))); lVar27 = lVar27 + 1) {
          CharString::get_data();
          StringBuilder::append((char *)param_1);
          lVar24 = *(long *)(param_3 + 0x58);
        }
        StringBuilder::append((char *)param_1);
        if ((*(long *)param_3 != 0) && (*(int *)(*(long *)param_3 + -8) != 0)) {
          StringBuilder::append((char *)param_1);
        }
        for (puVar4 = *(undefined8 **)(param_3 + 0x38); puVar4 != (undefined8 *)0x0;
            puVar4 = (undefined8 *)*puVar4) {
          local_60 = 0;
          local_58 = "_CODE_USED\n";
          local_50 = 0xb;
          String::parse_latin1((StrRange *)&local_60);
          lVar24 = puVar4[2];
          if (lVar24 == 0) {
            local_70 = 0;
          }
          else {
            pcVar5 = *(char **)(lVar24 + 8);
            local_70 = 0;
            if (pcVar5 == (char *)0x0) {
              plVar1 = (long *)(*(long *)(lVar24 + 0x10) + -0x10);
              if (*(long *)(lVar24 + 0x10) != 0) {
                do {
                  lVar27 = *plVar1;
                  if (lVar27 == 0) goto LAB_0010334b;
                  LOCK();
                  lVar26 = *plVar1;
                  bVar31 = lVar27 == lVar26;
                  if (bVar31) {
                    *plVar1 = lVar27 + 1;
                    lVar26 = lVar27;
                  }
                  UNLOCK();
                } while (!bVar31);
                if (lVar26 != -1) {
                  local_70 = *(long *)(lVar24 + 0x10);
                }
              }
            }
            else {
              local_50 = strlen(pcVar5);
              local_58 = pcVar5;
              String::parse_latin1((StrRange *)&local_70);
            }
          }
LAB_0010334b:
          local_78 = 0;
          local_58 = "#define ";
          local_50 = 8;
          String::parse_latin1((StrRange *)&local_78);
          String::operator+((String *)&local_68,(String *)&local_78);
          String::operator+((String *)&local_58,(String *)&local_68);
          StringBuilder::append((String *)param_1);
          pcVar5 = local_58;
          if (local_58 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_58 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_58 = (char *)0x0;
              Memory::free_static(pcVar5 + -0x10,false);
            }
          }
          lVar24 = local_68;
          if (local_68 != 0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = 0;
              Memory::free_static((void *)(lVar24 + -0x10),false);
            }
          }
          lVar24 = local_78;
          if (local_78 != 0) {
            LOCK();
            plVar1 = (long *)(local_78 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_78 = 0;
              Memory::free_static((void *)(lVar24 + -0x10),false);
            }
          }
          lVar24 = local_70;
          if (local_70 != 0) {
            LOCK();
            plVar1 = (long *)(local_70 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_70 = 0;
              Memory::free_static((void *)(lVar24 + -0x10),false);
            }
          }
          lVar24 = local_60;
          if (local_60 != 0) {
            LOCK();
            plVar1 = (long *)(local_60 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_60 = 0;
              Memory::free_static((void *)(lVar24 + -0x10),false);
            }
          }
        }
        local_60 = 0;
        local_58 = "\n";
        local_50 = 1;
        String::parse_latin1((StrRange *)&local_60);
        lVar24 = OS::get_singleton();
        local_78 = 0;
        plVar1 = (long *)(*(long *)(lVar24 + 0x60) + -0x10);
        if (*(long *)(lVar24 + 0x60) != 0) {
          do {
            lVar27 = *plVar1;
            if (lVar27 == 0) goto LAB_00103619;
            LOCK();
            lVar26 = *plVar1;
            bVar31 = lVar27 == lVar26;
            if (bVar31) {
              *plVar1 = lVar27 + 1;
              lVar26 = lVar27;
            }
            UNLOCK();
          } while (!bVar31);
          if (lVar26 != -1) {
            local_78 = *(long *)(lVar24 + 0x60);
          }
        }
LAB_00103619:
        String::to_upper();
        local_58 = "#define RENDER_DRIVER_";
        local_80 = 0;
        local_50 = 0x16;
        String::parse_latin1((StrRange *)&local_80);
        String::operator+((String *)&local_68,(String *)&local_80);
        String::operator+((String *)&local_58,(String *)&local_68);
        StringBuilder::append((String *)param_1);
        pcVar5 = local_58;
        if (local_58 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_58 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_58 = (char *)0x0;
            Memory::free_static(pcVar5 + -0x10,false);
          }
        }
        lVar24 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar24 + -0x10),false);
          }
        }
        lVar24 = local_80;
        if (local_80 != 0) {
          LOCK();
          plVar1 = (long *)(local_80 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_80 = 0;
            Memory::free_static((void *)(lVar24 + -0x10),false);
          }
        }
        lVar24 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar24 + -0x10),false);
          }
        }
        lVar24 = local_78;
        if (local_78 != 0) {
          LOCK();
          plVar1 = (long *)(local_78 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_78 = 0;
            Memory::free_static((void *)(lVar24 + -0x10),false);
          }
        }
        lVar24 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar1 = (long *)(local_60 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar24 + -0x10),false);
          }
        }
        StringBuilder::append((char *)param_1);
        StringBuilder::append((char *)param_1);
        break;
            for (int i = 0; i < 4; i++) {
               case 1:
        CharString::get_data();
        StringBuilder::append((char *)param_1);
        break;
            }
            case 5:
        if ((*(long *)(param_3 + 0x28) != 0) && (*(int *)(param_3 + 0x4c) != 0)) {
          uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_3 + 0x48) * 4);
          lVar24 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_3 + 0x48) * 8);
          if (*(long *)(local_d0 + 2) == 0) {
            uVar23 = StringName::get_empty_hash();
          }
          else {
            uVar23 = *(uint *)(*(long *)(local_d0 + 2) + 0x20);
          }
          uVar29 = CONCAT44(0,uVar3);
          lVar27 = *(long *)(param_3 + 0x30);
          if (uVar23 == 0) {
            uVar23 = 1;
          }
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)uVar23 * lVar24;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar29;
          lVar26 = SUB168(auVar6 * auVar14,8);
          uVar28 = *(uint *)(lVar27 + lVar26 * 4);
          iVar25 = SUB164(auVar6 * auVar14,8);
          if (uVar28 != 0) {
            uVar30 = 0;
            while ((uVar23 != uVar28 ||
                   (lVar26 = *(long *)(*(long *)(*(long *)(param_3 + 0x28) + lVar26 * 8) + 0x10),
                   lVar26 != *(long *)(local_d0 + 2)))) {
              uVar30 = uVar30 + 1;
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)(iVar25 + 1) * lVar24;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = uVar29;
              lVar26 = SUB168(auVar7 * auVar15,8);
              uVar28 = *(uint *)(lVar27 + lVar26 * 4);
              iVar25 = SUB164(auVar7 * auVar15,8);
              if ((uVar28 == 0) ||
                 (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar28 * lVar24, auVar16._8_8_ = 0,
                 auVar16._0_8_ = uVar29, auVar9._8_8_ = 0,
                 auVar9._0_8_ = (ulong)((uVar3 + iVar25) - SUB164(auVar8 * auVar16,8)) * lVar24,
                 auVar17._8_8_ = 0, auVar17._0_8_ = uVar29, SUB164(auVar9 * auVar17,8) < uVar30))
              goto switchD_00102fae_default;
            }
            if ((*(long *)(param_3 + 0x28) == 0) || (*(int *)(param_3 + 0x4c) == 0))
            goto LAB_001037b8;
            uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_3 + 0x48) * 4);
            lVar24 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_3 + 0x48) * 8);
            if (lVar26 == 0) {
              uVar23 = StringName::get_empty_hash();
              lVar27 = *(long *)(param_3 + 0x30);
            }
            else {
              uVar23 = *(uint *)(lVar26 + 0x20);
            }
            uVar29 = CONCAT44(0,uVar3);
            if (uVar23 == 0) {
              uVar23 = 1;
            }
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar23 * lVar24;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar29;
            lVar26 = SUB168(auVar10 * auVar18,8);
            uVar28 = *(uint *)(lVar27 + lVar26 * 4);
            iVar25 = SUB164(auVar10 * auVar18,8);
            if (uVar28 == 0) goto LAB_001037b8;
            uVar30 = 0;
            while ((uVar23 != uVar28 ||
                   (*(long *)(*(long *)(*(long *)(param_3 + 0x28) + lVar26 * 8) + 0x10) !=
                    *(long *)(local_d0 + 2)))) {
              uVar30 = uVar30 + 1;
              auVar11._8_8_ = 0;
              auVar11._0_8_ = (ulong)(iVar25 + 1) * lVar24;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = uVar29;
              lVar26 = SUB168(auVar11 * auVar19,8);
              uVar28 = *(uint *)(lVar27 + lVar26 * 4);
              iVar25 = SUB164(auVar11 * auVar19,8);
              if ((uVar28 == 0) ||
                 (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar28 * lVar24, auVar20._8_8_ = 0,
                 auVar20._0_8_ = uVar29, auVar13._8_8_ = 0,
                 auVar13._0_8_ = (ulong)((uVar3 + iVar25) - SUB164(auVar12 * auVar20,8)) * lVar24,
                 auVar21._8_8_ = 0, auVar21._0_8_ = uVar29, SUB164(auVar13 * auVar21,8) < uVar30)) {
LAB_001037b8:
                _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                                 "FATAL: Condition \"!exists\" is true.",0,0);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar22 = (code *)invalidInstructionException();
                (*pcVar22)();
              }
            }
            CharString::get_data();
            StringBuilder::append((char *)param_1);
          }
        }
        break;
            case 6:
        CharString::get_data();
        StringBuilder::append((char *)param_1);
         }
         switchD_00102fae_default:local_d0 = local_d0 + 6;
      } while ( puVar2 != local_d0 );
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ShaderRD::set_variant_enabled(int, bool) */void ShaderRD::set_variant_enabled(ShaderRD *this, int param_1, bool param_2) {
   long lVar1;
   long lVar2;
   if (*(int*)( this + 0xd8 ) != 0) {
      _err_print_error("set_variant_enabled", "servers/rendering/renderer_rd/shader_rd.cpp", 0x2cd, "Condition \"version_owner.get_rid_count() > 0\" is true.", 0, 0);
      return;
   }
   lVar2 = (long)param_1;
   lVar1 = *(long*)( this + 0x28 );
   if (param_1 < 0) {
      if (lVar1 != 0) {
         lVar1 = *(long*)( lVar1 + -8 );
         goto LAB_001038c9;
      }
   } else if (lVar1 != 0) {
      lVar1 = *(long*)( lVar1 + -8 );
      if (lVar2 < lVar1) {
         CowData<bool>::_copy_on_write((CowData<bool>*)( this + 0x28 ));
         *(bool*)( *(long*)( this + 0x28 ) + lVar2 ) = param_2;
         return;
      }
      goto LAB_001038c9;
   }
   lVar1 = 0;
   LAB_001038c9:_err_print_index_error("set_variant_enabled", "servers/rendering/renderer_rd/shader_rd.cpp", 0x2ce, lVar2, lVar1, "p_variant", "variants_enabled.size()", "", false, false);
   return;
}/* ShaderRD::is_variant_enabled(int) const */undefined1 ShaderRD::is_variant_enabled(ShaderRD *this, int param_1) {
   long lVar1;
   long lVar2;
   long lVar3;
   lVar1 = *(long*)( this + 0x28 );
   lVar2 = (long)param_1;
   if (param_1 < 0) {
      if (lVar1 != 0) {
         lVar3 = *(long*)( lVar1 + -8 );
         goto LAB_00103971;
      }
   } else if (lVar1 != 0) {
      lVar3 = *(long*)( lVar1 + -8 );
      if (lVar2 < lVar3) {
         return *(undefined1*)( lVar1 + lVar2 );
      }
      goto LAB_00103971;
   }
   lVar3 = 0;
   LAB_00103971:_err_print_index_error("is_variant_enabled", "servers/rendering/renderer_rd/shader_rd.cpp", 0x2d3, lVar2, lVar3, "p_variant", "variants_enabled.size()", "", false, false);
   return 0;
}/* ShaderRD::is_group_enabled(int) const */undefined1 ShaderRD::is_group_enabled(ShaderRD *this, int param_1) {
   long lVar1;
   code *pcVar2;
   long lVar3;
   long lVar4;
   lVar3 = (long)param_1;
   lVar1 = *(long*)( this + 0x78 );
   if (lVar3 < 0) {
      if (lVar1 != 0) {
         lVar4 = *(long*)( lVar1 + -8 );
         goto LAB_001039f1;
      }
   } else if (lVar1 != 0) {
      lVar4 = *(long*)( lVar1 + -8 );
      if (lVar3 < lVar4) {
         return *(undefined1*)( lVar1 + lVar3 );
      }
      goto LAB_001039f1;
   }
   lVar4 = 0;
   LAB_001039f1:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar3, lVar4, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* ShaderRD::ShaderRD() */void ShaderRD::ShaderRD(ShaderRD *this) {
   long *plVar1;
   char *pcVar2;
   long lVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   char *pcVar6;
   char cVar7;
   ShaderRD *pSVar8;
   ShaderRD *pSVar9;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( this + 0xa0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xf8 ) = (undefined1[16])0x0;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 16*i + 8 ) ) = 0;
   }
   *(undefined***)this = &PTR__ShaderRD_00114838;
   *(undefined***)( this + 0xb8 ) = &PTR__RID_Alloc_00114818;
   *(undefined8*)( this + 0x68 ) = 2;
   *(undefined8*)( this + 0x78 ) = 0;
   *(undefined8*)( this + 0x88 ) = 0;
   *(undefined8*)( this + 0xb0 ) = 0;
   *(undefined4*)( this + 0xa0 ) = 1;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 192 ) ) = 0;
   }
   *(undefined4*)( this + 0xf8 ) = 1;
   *(undefined1(*) [16])( this + 0x48 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x58 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x90 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xe8 ) = (undefined1[16])0x0;
   uVar5 = _UNK_00114a48;
   uVar4 = __LC32;
   this[0x110] = (ShaderRD)0x0;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 8*i + 296 ) ) = 0;
   }
   this[0x140] = (ShaderRD)0x0;
   *(undefined8*)( this + 0xd0 ) = uVar4;
   *(undefined8*)( this + 0xd8 ) = uVar5;
   *(undefined1(*) [16])( this + 0x118 ) = (undefined1[16])0x0;
   pSVar8 = this + 0x148;
   do {
      *(undefined8*)pSVar8 = 0;
      pSVar9 = pSVar8 + 0x10;
      *(undefined8*)( pSVar8 + 8 ) = 0;
      pSVar8 = pSVar9;
   } while ( this + 0x178 != pSVar9 );
   RenderingDevice::get_singleton();
   RenderingDevice::get_device_vendor_name();
   cVar7 = String::operator ==((String*)&local_38, "NVIDIA");
   pcVar2 = local_38;
   if (local_38 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_38 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_38 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar2 + -0x10 ), false);
      }
   }
   local_40 = 0;
   local_38 = "\n#define NATIVE_LOCAL_GROUP_SIZE 64\n#define NATIVE_LOCAL_SIZE_2D_X 8\n#define NATIVE_LOCAL_SIZE_2D_Y 8\n";
   if (cVar7 != '\0') {
      local_38 = "\n#define NATIVE_LOCAL_GROUP_SIZE 32\n#define NATIVE_LOCAL_SIZE_2D_X 8\n#define NATIVE_LOCAL_SIZE_2D_Y 4\n";
   }
   local_30 = 0x66;
   String::parse_latin1((StrRange*)&local_40);
   String::ascii(SUB81((String*)&local_38, 0));
   pcVar6 = local_38;
   pcVar2 = *(char**)( this + 0x120 );
   if (pcVar2 == local_38) {
      if (pcVar2 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( pcVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_38 = (char*)0x0;
            Memory::free_static(pcVar6 + -0x10, false);
         }
      }
   } else {
      if (pcVar2 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( pcVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( this + 0x120 );
            *(undefined8*)( this + 0x120 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }
      }
      *(char**)( this + 0x120 ) = local_38;
   }
   lVar3 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* ShaderRD::set_shader_cache_dir(String const&) */void ShaderRD::set_shader_cache_dir(String *param_1) {
   if (shader_cache_dir != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&shader_cache_dir, (CowData*)param_1);
      return;
   }
   return;
}/* ShaderRD::set_shader_cache_save_compressed(bool) */void ShaderRD::set_shader_cache_save_compressed(bool param_1) {
   shader_cache_save_compressed = param_1;
   return;
}/* ShaderRD::set_shader_cache_save_compressed_zstd(bool) */void ShaderRD::set_shader_cache_save_compressed_zstd(bool param_1) {
   shader_cache_save_compressed_zstd = param_1;
   return;
}/* ShaderRD::set_shader_cache_save_debug(bool) */void ShaderRD::set_shader_cache_save_debug(bool param_1) {
   shader_cache_save_debug = param_1;
   return;
}/* ShaderRD::_initialize_cache() */void ShaderRD::_initialize_cache(ShaderRD *this) {
   long *plVar1;
   CowData<char32_t> *this_00;
   long *plVar2;
   uint uVar3;
   code *pcVar4;
   Object *pOVar5;
   char *pcVar6;
   char cVar7;
   int iVar8;
   long lVar9;
   ulong uVar10;
   ulong uVar11;
   long lVar12;
   long *plVar13;
   long in_FS_OFFSET;
   bool bVar14;
   Object *local_f0;
   String local_e8[8];
   undefined8 local_e0;
   String local_d8[8];
   CowData<char32_t> local_d0[8];
   String local_c8[8];
   long local_c0;
   long local_b8;
   long local_b0;
   char *local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_68;
   int local_58[6];
   long local_40;
   plVar13 = *(long**)( this + 0x58 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar13 != (long*)0x0) {
      do {
         local_98 = 0;
         local_90 = 0;
         local_88 = 0;
         local_80 = 0;
         local_78 = 0;
         local_70 = 0;
         local_68 = 0;
         StringBuilder::append((char*)&local_98);
         StringBuilder::append((String*)&local_98);
         StringBuilder::append((char*)&local_98);
         CharString::get_data();
         StringBuilder::append((char*)&local_98);
         StringBuilder::append((char*)&local_98);
         itos((long)&local_a8);
         StringBuilder::append((String*)&local_98);
         pcVar6 = local_a8;
         if (local_a8 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_a8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a8 = (char*)0x0;
               Memory::free_static(pcVar6 + -0x10, false);
            }
         }
         if ((int)plVar13[3] != 0) {
            uVar10 = 0;
            do {
               local_b0 = 0;
               local_a8 = "]";
               local_a0 = 1;
               String::parse_latin1((StrRange*)&local_b0);
               uVar3 = *(uint*)( plVar13 + 3 );
               if (uVar3 <= (uint)uVar10) {
                  LAB_00104500:uVar11 = (ulong)uVar3;
                  uVar10 = uVar10 & 0xffffffff;
                  iVar8 = 0xae;
                  goto LAB_00104522;
               }
               itos((long)&local_c0);
               operator+((char *)&
               local_b8,(String*)"[variant_defines:";
               String::operator +((String*)&local_a8, (String*)&local_b8);
               StringBuilder::append((String*)&local_98);
               pcVar6 = local_a8;
               if (local_a8 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_a8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_a8 = (char*)0x0;
                     Memory::free_static(pcVar6 + -0x10, false);
                  }
               }
               lVar12 = local_b8;
               if (local_b8 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_b8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_b8 = 0;
                     Memory::free_static((void*)( lVar12 + -0x10 ), false);
                  }
               }
               lVar12 = local_c0;
               if (local_c0 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_c0 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_c0 = 0;
                     Memory::free_static((void*)( lVar12 + -0x10 ), false);
                  }
               }
               lVar12 = local_b0;
               if (local_b0 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_b0 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_b0 = 0;
                     Memory::free_static((void*)( lVar12 + -0x10 ), false);
                  }
               }
               uVar3 = *(uint*)( plVar13 + 3 );
               if (uVar3 <= (uint)uVar10) goto LAB_00104500;
               lVar9 = (long)*(int*)( plVar13[4] + uVar10 * 4 );
               lVar12 = *(long*)( this + 0x18 );
               if (lVar9 < 0) {
                  if (lVar12 != 0) {
                     LAB_0010456d:lVar12 = *(long*)( lVar12 + -8 );
                     goto LAB_00104571;
                  }
                  LAB_001045b0:lVar12 = 0;
                  LAB_00104571:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar12, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar4 = (code*)invalidInstructionException();
                  ( *pcVar4 )();
               }
               if (lVar12 == 0) goto LAB_001045b0;
               if (*(long*)( lVar12 + -8 ) <= lVar9) goto LAB_0010456d;
               uVar10 = uVar10 + 1;
               CharString::get_data();
               StringBuilder::append((char*)&local_98);
            } while ( (uint)uVar10 < *(uint*)( plVar13 + 3 ) );
         }
         StringBuilder::as_string();
         String::sha256_text();
         uVar10 = ( ulong ) * (uint*)( plVar13 + 2 );
         uVar11 = ( ulong ) * (uint*)( this + 0x130 );
         if (*(uint*)( this + 0x130 ) <= *(uint*)( plVar13 + 2 )) goto LAB_0010465e;
         this_00 = (CowData<char32_t>*)( *(long*)( this + 0x138 ) + uVar10 * 8 );
         if (*(char**)this_00 != local_a8) {
            CowData<char32_t>::_unref(this_00);
            *(char**)this_00 = local_a8;
            local_a8 = (char*)0x0;
         }
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
         DirAccess::open((String*)&local_f0, (Error*)&shader_cache_dir);
         if (local_f0 == (Object*)0x0) {
            _err_print_error("_initialize_cache", "servers/rendering/renderer_rd/shader_rd.cpp", 0x32a, "Condition \"d.is_null()\" is true.", 0, 0);
            LAB_001046da:if (( ( local_f0 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)local_f0 + 0x140 ))(local_f0);
            Memory::free_static(local_f0, false);
         }
         StringBuilder::~StringBuilder((StringBuilder*)&local_98);
         break;
      } while ( !bVar14 );
      if (lVar9 != -1) {
         local_a8 = *(char**)( this + 0x118 );
      }
   }
   LAB_0010419a:iVar8 = ( *pcVar4 )(local_f0, (String*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   pOVar5 = local_f0;
   if (iVar8 != 0) {
      pcVar4 = *(code**)( *(long*)local_f0 + 0x1b8 );
      local_a8 = (char*)0x0;
      if (*(long*)( this + 0x118 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( this + 0x118 ));
      }
      iVar8 = ( *pcVar4 )(pOVar5, (String*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      pOVar5 = local_f0;
      if (iVar8 != 0) {
         _err_print_error("_initialize_cache", "servers/rendering/renderer_rd/shader_rd.cpp", 0x32d, "Condition \"err != OK\" is true.", 0, 0);
         goto LAB_001046da;
      }
      pcVar4 = *(code**)( *(long*)local_f0 + 0x1a8 );
      local_a8 = (char*)0x0;
      if (*(long*)( this + 0x118 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( this + 0x118 ));
      }
      ( *pcVar4 )(pOVar5, (String*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   }
   uVar11 = ( ulong ) * (uint*)( this + 0x130 );
   pcVar4 = *(code**)( *(long*)local_f0 + 0x1a8 );
   uVar10 = ( ulong ) * (uint*)( plVar13 + 2 );
   if (*(uint*)( this + 0x130 ) <= *(uint*)( plVar13 + 2 )) goto LAB_0010465e;
   local_a8 = (char*)0x0;
   plVar2 = (long*)( *(long*)( this + 0x138 ) + uVar10 * 8 );
   lVar12 = *plVar2;
   plVar1 = (long*)( lVar12 + -0x10 );
   if (lVar12 != 0) {
      do {
         lVar12 = *plVar1;
         if (lVar12 == 0) goto LAB_00104225;
         LOCK();
         lVar9 = *plVar1;
         bVar14 = lVar12 == lVar9;
         if (bVar14) {
            *plVar1 = lVar12 + 1;
            lVar9 = lVar12;
         }
         UNLOCK();
      } while ( !bVar14 );
      if (lVar9 != -1) {
         local_a8 = (char*)*plVar2;
      }
   }
   LAB_00104225:iVar8 = ( *pcVar4 )();
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (iVar8 != 0) {
      uVar11 = ( ulong ) * (uint*)( this + 0x130 );
      pcVar4 = *(code**)( *(long*)local_f0 + 0x1b8 );
      uVar10 = ( ulong ) * (uint*)( plVar13 + 2 );
      if (*(uint*)( this + 0x130 ) <= *(uint*)( plVar13 + 2 )) goto LAB_0010465e;
      local_a8 = (char*)0x0;
      plVar2 = (long*)( *(long*)( this + 0x138 ) + uVar10 * 8 );
      lVar12 = *plVar2;
      plVar1 = (long*)( lVar12 + -0x10 );
      if (lVar12 != 0) {
         do {
            lVar12 = *plVar1;
            if (lVar12 == 0) goto LAB_001042b0;
            LOCK();
            lVar9 = *plVar1;
            bVar14 = lVar12 == lVar9;
            if (bVar14) {
               *plVar1 = lVar12 + 1;
               lVar9 = lVar12;
            }
            UNLOCK();
         } while ( !bVar14 );
         if (lVar9 != -1) {
            local_a8 = (char*)*plVar2;
         }
      }
      LAB_001042b0:iVar8 = ( *pcVar4 )();
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      if (iVar8 != 0) {
         _err_print_error("_initialize_cache", "servers/rendering/renderer_rd/shader_rd.cpp", 0x337, "Condition \"err != OK\" is true.", 0, 0);
         goto LAB_001046da;
      }
   }
   this[0x140] = (ShaderRD)0x1;
   cVar7 = is_print_verbose_enabled();
   if (cVar7 != '\0') {
      uVar10 = ( ulong ) * (uint*)( plVar13 + 2 );
      uVar11 = ( ulong ) * (uint*)( this + 0x130 );
      if (*(uint*)( this + 0x130 ) <= *(uint*)( plVar13 + 2 )) {
         LAB_0010465e:iVar8 = 0xb2;
         LAB_00104522:_err_print_index_error("operator[]", "./core/templates/local_vector.h", iVar8, uVar10, uVar11, "p_index", "count", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar4 = (code*)invalidInstructionException();
         ( *pcVar4 )();
      }
      local_c0 = 0;
      local_a0 = 10;
      local_a8 = ") SHA256: ";
      String::parse_latin1((StrRange*)&local_c0);
      itos((long)local_d0);
      local_e0 = 0;
      local_a8 = "\' (group ";
      local_a0 = 9;
      String::parse_latin1((StrRange*)&local_e0);
      operator+((char *)
      local_e8,(String*)"Shader \'";
      String::operator +(local_d8, local_e8);
      String::operator +(local_c8, local_d8);
      String::operator +((String*)&local_b8, local_c8);
      String::operator +((String*)&local_b0, (String*)&local_b8);
      Variant::Variant((Variant*)local_58, (String*)&local_b0);
      stringify_variants((Variant*)&local_a8);
      __print_line((String*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_d8);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_e8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
      CowData<char32_t>::_unref(local_d0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   }
   if (( ( local_f0 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),pOVar5 = local_f0,cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);
   Memory::free_static(pOVar5, false);
}StringBuilder::~StringBuilder((StringBuilder*)&local_98);plVar13 = (long*)*plVar13;}while (plVar13 != (long*)0x0) ;;;}if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}return;}/* CowData<String>::_copy_on_write() [clone .isra.0] */void CowData<String>::_copy_on_write(CowData<String> *this) {
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
         } while ( lVar2 != lVar6 );
      }
      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar5 + 2 );
      return;
   }
   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}/* ShaderRD::_add_stage(char const*, ShaderRD::StageType) */void ShaderRD::_add_stage(ShaderRD *this, int *param_1, int param_3) {
   long *plVar1;
   String *pSVar2;
   undefined4 *puVar3;
   CowData *pCVar4;
   undefined8 uVar5;
   code *pcVar6;
   int *piVar7;
   char cVar8;
   int iVar9;
   ulong uVar10;
   void *pvVar11;
   uint uVar12;
   ulong uVar13;
   ulong uVar14;
   wchar32 wVar15;
   long lVar16;
   CowData<char32_t> *pCVar17;
   ulong uVar18;
   long in_FS_OFFSET;
   ulong local_178;
   long local_120;
   undefined8 local_118;
   undefined8 local_110;
   char local_108[8];
   long local_100;
   undefined4 local_f8;
   undefined1 local_f0[16];
   undefined4 local_d8[2];
   undefined1 local_d0[24];
   int *local_b8;
   long local_b0;
   long local_a8[2];
   undefined4 local_98;
   undefined4 uStack_94;
   long local_90;
   long local_88[2];
   long local_78;
   undefined1 local_70[24];
   int *local_58;
   size_t local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_78 = 0;
   if (param_1 != (int*)0x0) {
      local_50 = strlen((char*)param_1);
   }
   local_58 = param_1;
   String::parse_latin1((StrRange*)&local_78);
   String::split(local_108, SUB81((StrRange*)&local_78, 0), 0x10e7a8);
   lVar16 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar16 + -0x10 ), false);
      }
   }
   local_120 = 0;
   if (( local_100 == 0 ) || ( local_178 = *(ulong*)( local_100 + -8 ) & 0xffffffff ),(int)*(ulong*)( local_100 + -8 ) < 1) goto LAB_00105209;
   uVar18 = 0;
   LAB_00104b35:uVar10 = uVar18;
   if (local_100 == 0) {
      lVar16 = 0;
      LAB_00104e81:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar10, lVar16, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar6 = (code*)invalidInstructionException();
      ( *pcVar6 )();
   }
   lVar16 = *(long*)( local_100 + -8 );
   if (lVar16 <= (long)uVar18) goto LAB_00104e81;
   pSVar2 = (String*)( local_100 + uVar18 * 8 );
   local_f0 = (undefined1[16])0x0;
   cVar8 = String::begins_with((char*)pSVar2);
   if (cVar8 != '\0') {
      local_f8 = 0;
      goto LAB_00104b7d;
   }
   cVar8 = String::begins_with((char*)pSVar2);
   if (cVar8 == '\0') {
      cVar8 = String::begins_with((char*)pSVar2);
      if (cVar8 == '\0') {
         cVar8 = String::begins_with((char*)pSVar2);
         if (cVar8 != '\0') {
            local_58 = (int*)0x10e900;
            local_f8 = 5;
            local_118 = 0;
            local_110 = 0;
            local_50 = 5;
            String::parse_latin1((StrRange*)&local_110);
            String::replace_first((String*)local_d8, pSVar2);
            String::replace((char*)&local_b8, (char*)local_d8);
            String::strip_edges(SUB81((CowData<char32_t>*)&local_98, 0), SUB81((CowData<char32_t>*)&local_b8, 0));
            String::to_upper();
            StringName::StringName((StringName_conflict*)&local_58, (String*)&local_78, false);
            if ((int*)local_f0._0_8_ == local_58) {
               if (( StringName::configured != '\0' ) && ( local_58 != (int*)0x0 )) {
                  StringName::unref();
               }
            } else {
               StringName::unref();
               local_f0._0_8_ = local_58;
            }
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_d8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
            goto LAB_00104b7d;
         }
         cVar8 = String::begins_with((char*)pSVar2);
         if (cVar8 == '\0') {
            local_78 = 0;
            local_58 = (int*)&_LC12;
            local_50 = 1;
            String::parse_latin1((StrRange*)&local_78);
            String::operator +((String*)&local_58, pSVar2);
            String::operator +=((String*)&local_120, (String*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         } else {
            String::replace((char*)&local_58, (char*)pSVar2);
            String::strip_edges(SUB81((CowData<char32_t>*)&local_b8, 0), SUB81((CowData<char32_t>*)&local_58, 0));
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            if (( local_b8 == (int*)0x0 ) || ( lVar16 = lVar16 == 0 )) goto LAB_00104fd4;
            if (lVar16 < 1) {
               uVar10 = 0;
               goto LAB_00104e81;
            }
            if (*local_b8 == 0x22) {
               wVar15 = (wchar32)(CowData<char32_t>*)&local_b8;
               iVar9 = String::find_char(wVar15, 0x22);
               if (iVar9 < 0) goto LAB_00104fd4;
               String::substr((int)(CowData<char32_t>*)&local_58, wVar15);
               if (local_b8 != local_58) {
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                  local_b8 = local_58;
                  local_58 = (int*)0x0;
               }
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               ShaderIncludeDB::get_built_in_include_file((String*)&local_98);
               if (( CONCAT44(uStack_94, local_98) == 0 ) || ( *(uint*)( CONCAT44(uStack_94, local_98) + -8 ) < 2 )) {
                  local_78 = 0;
                  local_58 = (int*)&_LC12;
                  local_50 = 1;
                  String::parse_latin1((StrRange*)&local_78);
                  String::operator +((String*)&local_58, pSVar2);
                  String::operator +=((String*)&local_120, (String*)&local_58);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               } else {
                  String::split((char*)&local_58, SUB81((String*)&local_98, 0), 0x10e7a8);
                  if (( local_50 != 0 ) && ( uVar12 = *(int*)( local_50 - 8 ) - 1 ),-1 < (int)uVar12) {
                     uVar13 = ( ulong )((int)uVar18 + 1);
                     uVar10 = (ulong)uVar12;
                     do {
                        if (local_50 == 0) {
                           lVar16 = 0;
                           goto LAB_00104e81;
                        }
                        lVar16 = *(long*)( local_50 - 8 );
                        if (lVar16 <= (long)uVar10) goto LAB_00104e81;
                        local_78 = 0;
                        pCVar4 = (CowData*)( local_50 + uVar10 * 8 );
                        if (*(long*)pCVar4 != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, pCVar4);
                        }
                        if (local_100 == 0) {
                           lVar16 = 1;
                           LAB_0010585f:_err_print_index_error("insert", "./core/templates/cowdata.h", 0xf0, uVar13, lVar16, "p_pos", "new_size", "", false, false);
                        } else {
                           uVar14 = *(ulong*)( local_100 + -8 );
                           lVar16 = uVar14 + 1;
                           if (lVar16 <= (long)uVar13) goto LAB_0010585f;
                           iVar9 = CowData<String>::resize<false>((CowData<String>*)&local_100, lVar16);
                           if (iVar9 == 0) {
                              CowData<String>::_copy_on_write((CowData<String>*)&local_100);
                              lVar16 = local_100;
                              pCVar17 = (CowData<char32_t>*)( local_100 + uVar14 * 8 );
                              if ((long)uVar13 < (long)uVar14) {
                                 do {
                                    if (*(long*)pCVar17 != *(long*)( pCVar17 + -8 )) {
                                       CowData<char32_t>::_unref(pCVar17);
                                       uVar5 = *(undefined8*)( pCVar17 + -8 );
                                       *(undefined8*)( pCVar17 + -8 ) = 0;
                                       *(undefined8*)pCVar17 = uVar5;
                                    }
                                    uVar14 = uVar14 - 1;
                                    pCVar17 = pCVar17 + -8;
                                 } while ( uVar13 != uVar14 );
                              }
                              pCVar17 = (CowData<char32_t>*)( lVar16 + uVar13 * 8 );
                              if (*(long*)pCVar17 != local_78) {
                                 CowData<char32_t>::_ref(pCVar17, (CowData*)&local_78);
                              }
                           } else {
                              _err_print_error("insert", "./core/templates/cowdata.h", 0xf2, "Condition \"err\" is true. Returning: err", 0, 0);
                           }
                        }
                        uVar10 = uVar10 - 1;
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
                     } while ( -1 < (int)uVar10 );
                  }
                  if (local_100 == 0) {
                     uVar12 = 0;
                  } else {
                     uVar12 = ( uint ) * (undefined8*)( local_100 + -8 );
                  }
                  local_178 = (ulong)uVar12;
                  CowData<String>::_unref((CowData<String>*)&local_50);
               }
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
            } else {
               LAB_00104fd4:local_78 = 0;
               local_58 = (int*)&_LC12;
               local_50 = 1;
               String::parse_latin1((StrRange*)&local_78);
               String::operator +((String*)&local_58, pSVar2);
               String::operator +=((String*)&local_120, (String*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
            }
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
         }
         goto LAB_00104ac9;
      }
      local_f8 = 1;
      LAB_00104b7d:if (local_120 == 0) goto LAB_001049b8;
      LAB_00104b8b:if (1 < *(uint*)( local_120 + -8 )) {
         local_d8[0] = 6;
         local_d0._0_16_ = (undefined1[16])0x0;
         String::utf8();
         piVar7 = local_58;
         uVar5 = local_d0._8_8_;
         if ((int*)local_d0._8_8_ == local_58) {
            if ((int*)local_d0._8_8_ != (int*)0x0) {
               LOCK();
               plVar1 = (long*)( local_d0._8_8_ + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_58 = (int*)0x0;
                  Memory::free_static(piVar7 + -4, false);
               }
            }
         } else {
            if ((int*)local_d0._8_8_ != (int*)0x0) {
               LOCK();
               plVar1 = (long*)( local_d0._8_8_ + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_d0._8_8_ = 0;
                  Memory::free_static((int*)( uVar5 + -0x10 ), false);
               }
            }
            local_d0._8_8_ = local_58;
         }
         local_b8 = (int*)CONCAT44(local_b8._4_4_, local_d8[0]);
         StringName::StringName((StringName_conflict*)&local_b0, (StringName_conflict*)local_d0);
         local_a8[0] = 0;
         if (local_d0._8_8_ != 0) {
            CowData<char>::_ref((CowData<char>*)local_a8, (CowData*)( local_d0 + 8 ));
         }
         uVar12 = *(uint*)( this + (long)param_3 * 0x10 + 0x148 );
         pvVar11 = *(void**)( this + (long)param_3 * 0x10 + 0x150 );
         if (uVar12 == *(uint*)( this + (long)param_3 * 0x10 + 0x14c )) {
            uVar10 = ( ulong )(uVar12 * 2);
            if (uVar12 * 2 == 0) {
               uVar10 = 1;
            }
            *(int*)( this + (long)param_3 * 0x10 + 0x14c ) = (int)uVar10;
            pvVar11 = (void*)Memory::realloc_static(pvVar11, uVar10 * 0x18, false);
            *(void**)( this + (long)param_3 * 0x10 + 0x150 ) = pvVar11;
            if (pvVar11 == (void*)0x0) goto LAB_00105250;
            uVar12 = *(uint*)( this + (long)param_3 * 0x10 + 0x148 );
         }
         *(uint*)( this + (long)param_3 * 0x10 + 0x148 ) = uVar12 + 1;
         puVar3 = (undefined4*)( (long)pvVar11 + (ulong)uVar12 * 0x18 );
         *puVar3 = local_b8._0_4_;
         StringName::StringName((StringName_conflict*)( puVar3 + 2 ), (StringName_conflict*)&local_b0);
         *(undefined8*)( puVar3 + 4 ) = 0;
         if (( local_a8[0] != 0 ) && ( CowData<char>::_ref((CowData<char>*)( puVar3 + 4 ), (CowData*)local_a8),lVar16 = local_a8[0],local_a8[0] != 0 )) {
            LOCK();
            plVar1 = (long*)( local_a8[0] + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a8[0] = 0;
               Memory::free_static((void*)( lVar16 + -0x10 ), false);
            }
         }
         if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
            StringName::unref();
         }
         lVar16 = local_120;
         if (local_120 != 0) {
            LOCK();
            plVar1 = (long*)( local_120 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_120 = 0;
               Memory::free_static((void*)( lVar16 + -0x10 ), false);
            }
            local_120 = 0;
         }
         uVar5 = local_d0._8_8_;
         if (local_d0._8_8_ != 0) {
            LOCK();
            plVar1 = (long*)( local_d0._8_8_ + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_d0._8_8_ = 0;
               Memory::free_static((void*)( uVar5 + -0x10 ), false);
            }
         }
         if (( StringName::configured != '\0' ) && ( local_d0._0_8_ != 0 )) {
            StringName::unref();
         }
      }
   } else {
      if (param_3 == 1) {
         local_f8 = 3;
         goto LAB_00104b7d;
      }
      if (param_3 == 2) {
         local_f8 = 4;
         goto LAB_00104b7d;
      }
      if (param_3 != 0) goto LAB_00104b7d;
      local_f8 = 2;
      if (local_120 != 0) goto LAB_00104b8b;
   }
   LAB_001049b8:local_98 = local_f8;
   StringName::StringName((StringName_conflict*)&local_90, (StringName_conflict*)local_f0);
   local_88[0] = 0;
   if (local_f0._8_8_ != 0) {
      CowData<char>::_ref((CowData<char>*)local_88, (CowData*)( local_f0 + 8 ));
   }
   uVar12 = *(uint*)( this + (long)param_3 * 0x10 + 0x148 );
   pvVar11 = *(void**)( this + (long)param_3 * 0x10 + 0x150 );
   if (uVar12 == *(uint*)( this + (long)param_3 * 0x10 + 0x14c )) {
      uVar10 = ( ulong )(uVar12 * 2);
      if (uVar12 * 2 == 0) {
         uVar10 = 1;
      }
      *(int*)( this + (long)param_3 * 0x10 + 0x14c ) = (int)uVar10;
      pvVar11 = (void*)Memory::realloc_static(pvVar11, uVar10 * 0x18, false);
      *(void**)( this + (long)param_3 * 0x10 + 0x150 ) = pvVar11;
      if (pvVar11 == (void*)0x0) goto LAB_00105250;
      uVar12 = *(uint*)( this + (long)param_3 * 0x10 + 0x148 );
   }
   *(uint*)( this + (long)param_3 * 0x10 + 0x148 ) = uVar12 + 1;
   puVar3 = (undefined4*)( (long)pvVar11 + (ulong)uVar12 * 0x18 );
   *puVar3 = local_98;
   StringName::StringName((StringName_conflict*)( puVar3 + 2 ), (StringName_conflict*)&local_90);
   *(undefined8*)( puVar3 + 4 ) = 0;
   if (( local_88[0] != 0 ) && ( CowData<char>::_ref((CowData<char>*)( puVar3 + 4 ), (CowData*)local_88),lVar16 = local_88[0],local_88[0] != 0 )) {
      LOCK();
      plVar1 = (long*)( local_88[0] + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88[0] = 0;
         Memory::free_static((void*)( lVar16 + -0x10 ), false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_90 != 0 )) {
      StringName::unref();
   }
   LAB_00104ac9:uVar5 = local_f0._8_8_;
   if (local_f0._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_f0._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_f0._8_8_ = 0;
         Memory::free_static((void*)( uVar5 + -0x10 ), false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_f0._0_8_ != 0 )) {
      StringName::unref();
   }
   uVar18 = uVar18 + 1;
   if ((int)local_178 <= (int)uVar18) goto LAB_001051f0;
   goto LAB_00104b35;
   LAB_001051f0:if (( local_120 != 0 ) && ( 1 < *(uint*)( local_120 + -8 ) )) {
      local_78 = CONCAT44(local_78._4_4_, 6);
      local_70._0_16_ = (undefined1[16])0x0;
      String::utf8();
      if ((int*)local_70._8_8_ != local_58) {
         CowData<char>::_unref((CowData<char>*)( local_70 + 8 ));
         piVar7 = local_58;
         local_58 = (int*)0x0;
         local_70._8_8_ = piVar7;
      }
      CowData<char>::_unref((CowData<char>*)&local_58);
      local_58 = (int*)CONCAT44(local_58._4_4_, (undefined4)local_78);
      StringName::StringName((StringName_conflict*)&local_50, (StringName_conflict*)local_70);
      local_48 = 0;
      if (local_70._8_8_ != 0) {
         CowData<char>::_ref((CowData<char>*)&local_48, (CowData*)( local_70 + 8 ));
      }
      uVar12 = *(uint*)( this + (long)param_3 * 0x10 + 0x148 );
      pvVar11 = *(void**)( this + (long)param_3 * 0x10 + 0x150 );
      if (uVar12 == *(uint*)( this + (long)param_3 * 0x10 + 0x14c )) {
         uVar18 = ( ulong )(uVar12 * 2);
         if (uVar12 * 2 == 0) {
            uVar18 = 1;
         }
         *(int*)( this + (long)param_3 * 0x10 + 0x14c ) = (int)uVar18;
         pvVar11 = (void*)Memory::realloc_static(pvVar11, uVar18 * 0x18, false);
         *(void**)( this + (long)param_3 * 0x10 + 0x150 ) = pvVar11;
         if (pvVar11 == (void*)0x0) {
            LAB_00105250:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar6 = (code*)invalidInstructionException();
            ( *pcVar6 )();
         }
         uVar12 = *(uint*)( this + (long)param_3 * 0x10 + 0x148 );
      }
      *(uint*)( this + (long)param_3 * 0x10 + 0x148 ) = uVar12 + 1;
      puVar3 = (undefined4*)( (long)pvVar11 + (ulong)uVar12 * 0x18 );
      *puVar3 = local_58._0_4_;
      StringName::StringName((StringName_conflict*)( puVar3 + 2 ), (StringName_conflict*)&local_50);
      *(undefined8*)( puVar3 + 4 ) = 0;
      if (local_48 != 0) {
         CowData<char>::_ref((CowData<char>*)( puVar3 + 4 ), (CowData*)&local_48);
      }
      CowData<char>::_unref((CowData<char>*)&local_48);
      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }
      local_58 = (int*)0x0;
      if (local_120 != 0) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
         local_120 = 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char>::_unref((CowData<char>*)( local_70 + 8 ));
      if (( StringName::configured != '\0' ) && ( local_70._0_8_ != 0 )) {
         StringName::unref();
      }
   }
   LAB_00105209:CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   CowData<String>::_unref((CowData<String>*)&local_100);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* ShaderRD::setup(char const*, char const*, char const*, char const*) */void ShaderRD::setup(ShaderRD *this, char *param_1, char *param_2, char *param_3, char *param_4) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_88;
   long local_80;
   char *local_78;
   size_t local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   lVar2 = local_80;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   if (param_4 != (char*)0x0) {
      local_70 = strlen(param_4);
   }
   local_78 = param_4;
   String::parse_latin1((StrRange*)( this + 0x118 ));
   if (param_3 == (char*)0x0) {
      this[0x110] = (ShaderRD)0x0;
      if (param_1 != (char*)0x0) {
         _add_stage(this, param_1, 0);
      }
      if (param_2 != (char*)0x0) {
         _add_stage(this, param_2, 1);
      }
   } else {
      _add_stage(this, param_3, 2);
      this[0x110] = (ShaderRD)0x1;
   }
   local_78 = (char*)0x0;
   local_70 = 0;
   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   local_50 = 0;
   local_48 = 0;
   for (int i = 0; i < 5; i++) {
      StringBuilder::append((char*)&local_78);
   }
   RenderingDevice::get_singleton();
   RenderingDevice::shader_get_spirv_cache_key();
   StringBuilder::append((String*)&local_78);
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
   lVar2 = local_80;
   StringBuilder::append((char*)&local_78);
   RenderingDevice::get_singleton();
   RenderingDevice::shader_get_binary_cache_key();
   StringBuilder::append((String*)&local_78);
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
   for (int i = 0; i < 6; i++) {
      StringBuilder::append((char*)&local_78);
   }
   StringBuilder::as_string();
   String::sha256_text();
   lVar2 = *(long*)( this + 0x128 );
   if (lVar2 == local_80) {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_80 + -0x10 ), false);
         }
      }
   } else {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( this + 0x128 );
            *(undefined8*)( this + 0x128 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }
      }
      *(long*)( this + 0x128 ) = local_80;
   }
   if (local_88 != 0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_88 + -0x10 ), false);
      }
   }
   StringBuilder::~StringBuilder((StringBuilder*)&local_78);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* CowData<StringName>::_copy_on_write() [clone .isra.0] */void CowData<StringName>::_copy_on_write(CowData<StringName> *this) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   long lVar5;
   ulong uVar6;
   StringName_conflict *this_00;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }
   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }
   lVar2 = *(long*)( *(long*)this + -8 );
   uVar6 = 0x10;
   if (lVar2 * 8 != 0) {
      uVar6 = lVar2 * 8 - 1;
      uVar6 = uVar6 | uVar6 >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      uVar6 = ( uVar6 | uVar6 >> 0x20 ) + 0x11;
   }
   puVar4 = (undefined8*)Memory::alloc_static(uVar6, false);
   if (puVar4 != (undefined8*)0x0) {
      lVar5 = 0;
      *puVar4 = 1;
      puVar4[1] = lVar2;
      this_00 = (StringName_conflict*)( puVar4 + 2 );
      if (lVar2 != 0) {
         do {
            lVar1 = lVar5 * 8;
            lVar5 = lVar5 + 1;
            StringName::StringName(this_00, (StringName_conflict*)( *(long*)this + lVar1 ));
            this_00 = this_00 + 8;
         } while ( lVar2 != lVar5 );
      }
      _unref(this);
      *(StringName_conflict**)this = (StringName_conflict*)( puVar4 + 2 );
      return;
   }
   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}/* CowData<Vector<unsigned char> >::_copy_on_write() [clone .isra.0] */void CowData<Vector<unsigned_char>>::_copy_on_write(CowData<Vector<unsigned_char>> *this) {
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   long lVar4;
   ulong uVar5;
   CowData<unsigned_char> *this_00;
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
   this_00 = (CowData<unsigned_char>*)( puVar3 + 3 );
   lVar6 = 0;
   *puVar3 = 1;
   puVar3[1] = lVar1;
   if (lVar1 != 0) {
      do {
         lVar4 = lVar6 * 0x10 + *(long*)this;
         *(undefined8*)this_00 = 0;
         if (*(long*)( lVar4 + 8 ) != 0) {
            CowData<unsigned_char>::_ref(this_00, (CowData*)( lVar4 + 8 ));
         }
         lVar6 = lVar6 + 1;
         this_00 = this_00 + 0x10;
      } while ( lVar1 != lVar6 );
   }
   _unref(this);
   *(undefined8**)this = puVar3 + 2;
   return;
}/* Error CowData<Vector<unsigned char> >::resize<false>(long) [clone .isra.0] */void CowData<Vector<unsigned_char>>::resize<false>(CowData<Vector<unsigned_char>> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   char *pcVar6;
   undefined8 *puVar7;
   undefined8 uVar8;
   long lVar9;
   ulong uVar10;
   char *pcVar11;
   ulong uVar12;
   long lVar13;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }
   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return;
      }
      _copy_on_write(this);
      lVar13 = 0;
      lVar9 = 0;
   } else {
      lVar13 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar13) {
         return;
      }
      if (param_1 == 0) {
         _unref(this);
         return;
      }
      _copy_on_write(this);
      lVar9 = lVar13 * 0x10;
      if (lVar9 != 0) {
         uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
         uVar10 = uVar10 | uVar10 >> 2;
         uVar10 = uVar10 | uVar10 >> 4;
         uVar10 = uVar10 | uVar10 >> 8;
         uVar10 = uVar10 | uVar10 >> 0x10;
         lVar9 = ( uVar10 | uVar10 >> 0x20 ) + 1;
      }
   }
   if (param_1 * 0x10 != 0) {
      uVar10 = param_1 * 0x10 - 1;
      uVar10 = uVar10 | uVar10 >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      uVar10 = uVar10 | uVar10 >> 0x20;
      if (uVar10 != 0xffffffffffffffff) {
         if (param_1 <= lVar13) {
            puVar7 = *(undefined8**)this;
            uVar12 = param_1;
            while (true) {
               if (puVar7 == (undefined8*)0x0) {
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }
               if ((ulong)puVar7[-1] <= uVar12) break;
               while (puVar7[uVar12 * 2 + 1] == 0) {
                  uVar12 = uVar12 + 1;
                  if ((ulong)puVar7[-1] <= uVar12) goto LAB_00105fb2;
               };
               LOCK();
               plVar1 = (long*)( puVar7[uVar12 * 2 + 1] + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar13 = puVar7[uVar12 * 2 + 1];
                  puVar7[uVar12 * 2 + 1] = 0;
                  Memory::free_static((void*)( lVar13 + -0x10 ), false);
               }
               puVar7 = *(undefined8**)this;
               uVar12 = uVar12 + 1;
            };
            LAB_00105fb2:if (uVar10 + 1 == lVar9) {
               LAB_00105fbb:puVar7[-1] = param_1;
               return;
            }
            puVar4 = (undefined8*)Memory::realloc_static(puVar7 + -2, uVar10 + 0x11, false);
            if (puVar4 != (undefined8*)0x0) {
               puVar7 = puVar4 + 2;
               *puVar4 = 1;
               *(undefined8**)this = puVar7;
               goto LAB_00105fbb;
            }
            LAB_00106183:pcVar6 = "Parameter \"mem_new\" is null.";
            uVar8 = 0x1a9;
            pcVar11 = "_realloc";
            goto LAB_00106170;
         }
         if (uVar10 + 1 == lVar9) {
            puVar7 = *(undefined8**)this;
            if (puVar7 == (undefined8*)0x0) {
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }
            lVar13 = puVar7[-1];
            LAB_001060d0:if (param_1 <= lVar13) goto LAB_00106079;
         } else {
            if (lVar13 != 0) {
               puVar4 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar10 + 0x11, false);
               if (puVar4 == (undefined8*)0x0) goto LAB_00106183;
               puVar7 = puVar4 + 2;
               *puVar4 = 1;
               *(undefined8**)this = puVar7;
               lVar13 = puVar4[1];
               goto LAB_001060d0;
            }
            puVar4 = (undefined8*)Memory::alloc_static(uVar10 + 0x11, false);
            if (puVar4 == (undefined8*)0x0) {
               pcVar6 = "Parameter \"mem_new\" is null.";
               uVar8 = 0x171;
               pcVar11 = "resize";
               goto LAB_00106170;
            }
            puVar7 = puVar4 + 2;
            *puVar4 = 1;
            puVar4[1] = 0;
            *(undefined8**)this = puVar7;
            lVar13 = 0;
         }
         puVar5 = puVar7 + param_1 * 2;
         puVar4 = puVar7 + lVar13 * 2;
         if (( (int)puVar5 - (int)puVar4 & 0x10U ) != 0) {
            puVar4[1] = 0;
            puVar4 = puVar4 + 2;
            if (puVar4 == puVar5) goto LAB_00106079;
         }
         do {
            puVar4[1] = 0;
            puVar3 = puVar4 + 4;
            puVar4[3] = 0;
            puVar4 = puVar3;
         } while ( puVar3 != puVar5 );
         LAB_00106079:puVar7[-1] = param_1;
         return;
      }
   }
   pcVar6 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   uVar8 = 0x16a;
   pcVar11 = "resize";
   LAB_00106170:_err_print_error(pcVar11, "./core/templates/cowdata.h", uVar8, pcVar6, 0, 0);
   return;
}/* CowData<CharString>::_copy_on_write() [clone .isra.0] */void CowData<CharString>::_copy_on_write(CowData<CharString> *this) {
   CowData *pCVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   undefined8 *puVar5;
   long lVar6;
   ulong uVar7;
   CowData<char> *this_00;
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
      this_00 = (CowData<char>*)( puVar5 + 2 );
      if (lVar2 != 0) {
         do {
            lVar3 = *(long*)this;
            *(undefined8*)this_00 = 0;
            pCVar1 = (CowData*)( lVar3 + lVar6 * 8 );
            if (*(long*)pCVar1 != 0) {
               CowData<char>::_ref(this_00, pCVar1);
            }
            lVar6 = lVar6 + 1;
            this_00 = this_00 + 8;
         } while ( lVar2 != lVar6 );
      }
      _unref(this);
      *(CowData<char>**)this = (CowData<char>*)( puVar5 + 2 );
      return;
   }
   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}/* ShaderRD::_allocate_placeholders(ShaderRD::Version*, int) */void ShaderRD::_allocate_placeholders(ShaderRD *this, Version *param_1, int param_2) {
   HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>> *this_00;
   long lVar1;
   code *pcVar2;
   int iVar3;
   int *piVar4;
   uint *puVar5;
   undefined8 uVar6;
   ulong uVar7;
   uint uVar8;
   char *pcVar9;
   ulong uVar10;
   char *pcVar11;
   int local_3c[3];
   local_3c[0] = param_2;
   if (*(long*)( param_1 + 0x88 ) == 0) {
      _err_print_error("_allocate_placeholders", "servers/rendering/renderer_rd/shader_rd.cpp", 0x20d, "Condition \"p_version->variants.is_empty()\" is true.", 0, 0);
      return;
   }
   this_00 = (HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>*)( this + 0x40 );
   uVar8 = 0;
   piVar4 = (int*)HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>::operator [](this_00, local_3c);
   if (*piVar4 != 0) {
      do {
         puVar5 = (uint*)HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>::operator [](this_00, local_3c);
         uVar10 = ( ulong ) * puVar5;
         if (*puVar5 <= uVar8) {
            uVar7 = (ulong)uVar8;
            iVar3 = 0xb2;
            pcVar9 = "./core/templates/local_vector.h";
            pcVar11 = "count";
            goto LAB_0010641b;
         }
         uVar7 = ( ulong ) * (int*)( *(long*)( puVar5 + 2 ) + (ulong)uVar8 * 4 );
         RenderingDevice::get_singleton();
         uVar6 = RenderingDevice::shader_create_placeholder();
         iVar3 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x90 ));
         if (iVar3 != 0) {
            /* WARNING: Subroutine does not return */
            std::__throw_system_error(iVar3);
         }
         lVar1 = *(long*)( param_1 + 0x88 );
         if ((long)uVar7 < 0) {
            if (lVar1 == 0) goto LAB_00106468;
            LAB_001063ed:uVar10 = *(ulong*)( lVar1 + -8 );
            LAB_001063f1:iVar3 = 0x38;
            pcVar9 = "./core/templates/vector.h";
            pcVar11 = "((Vector<T> *)(this))->_cowdata.size()";
            LAB_0010641b:_err_print_index_error("operator[]", pcVar9, iVar3, uVar7, uVar10, "p_index", pcVar11, "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }
         if (lVar1 == 0) {
            LAB_00106468:uVar10 = 0;
            goto LAB_001063f1;
         }
         if (*(long*)( lVar1 + -8 ) <= (long)uVar7) goto LAB_001063ed;
         uVar8 = uVar8 + 1;
         CowData<RID>::_copy_on_write((CowData<RID>*)( param_1 + 0x88 ));
         *(undefined8*)( *(long*)( param_1 + 0x88 ) + uVar7 * 8 ) = uVar6;
         pthread_mutex_unlock((pthread_mutex_t*)( this + 0x90 ));
         puVar5 = (uint*)HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>::operator [](this_00, local_3c);
      } while ( uVar8 < *puVar5 );
   }
   return;
}/* CowData<RenderingDeviceCommons::ShaderStageSPIRVData>::_copy_on_write() [clone .isra.0] */void CowData<RenderingDeviceCommons::ShaderStageSPIRVData>::_copy_on_write(CowData<RenderingDeviceCommons::ShaderStageSPIRVData> *this) {
   undefined4 uVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   undefined8 *puVar5;
   undefined4 *puVar6;
   ulong uVar7;
   undefined8 *puVar8;
   long lVar9;
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
   if (lVar2 * 0x18 != 0) {
      uVar7 = lVar2 * 0x18 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
   }
   puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
   if (puVar5 != (undefined8*)0x0) {
      lVar9 = 0;
      *puVar5 = 1;
      puVar5[1] = lVar2;
      puVar8 = puVar5 + 2;
      if (lVar2 != 0) {
         do {
            puVar6 = (undefined4*)( (long)puVar8 + *(long*)this + ( -0x10 - (long)puVar5 ) );
            uVar1 = *puVar6;
            puVar8[2] = 0;
            lVar3 = *(long*)( puVar6 + 4 );
            *(undefined4*)puVar8 = uVar1;
            if (lVar3 != 0) {
               CowData<unsigned_char>::_ref((CowData<unsigned_char>*)( puVar8 + 2 ), (CowData*)( puVar6 + 4 ));
            }
            lVar9 = lVar9 + 1;
            puVar8 = puVar8 + 3;
         } while ( lVar2 != lVar9 );
      }
      _unref(this);
      *(undefined8**)this = puVar5 + 2;
      return;
   }
   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}/* Vector<RenderingDeviceCommons::ShaderStageSPIRVData>::push_back(RenderingDeviceCommons::ShaderStageSPIRVData)
   [clone .isra.0] */void Vector<RenderingDeviceCommons::ShaderStageSPIRVData>::push_back(Vector<RenderingDeviceCommons::ShaderStageSPIRVData> *this, undefined4 *param_2) {
   undefined4 *puVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   if (*(long*)( this + 8 ) == 0) {
      lVar3 = 1;
   } else {
      lVar3 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }
   iVar2 = CowData<RenderingDeviceCommons::ShaderStageSPIRVData>::resize<false>((CowData<RenderingDeviceCommons::ShaderStageSPIRVData>*)( this + 8 ), lVar3);
   if (iVar2 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar4 = -1;
         lVar3 = 0;
      } else {
         lVar3 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar4 = lVar3 + -1;
         if (-1 < lVar4) {
            CowData<RenderingDeviceCommons::ShaderStageSPIRVData>::_copy_on_write((CowData<RenderingDeviceCommons::ShaderStageSPIRVData>*)( this + 8 ));
            puVar1 = (undefined4*)( *(long*)( this + 8 ) + lVar4 * 0x18 );
            *puVar1 = *param_2;
            if (*(long*)( puVar1 + 4 ) == *(long*)( param_2 + 4 )) {
               return;
            }
            CowData<unsigned_char>::_ref((CowData<unsigned_char>*)( puVar1 + 4 ), (CowData*)( param_2 + 4 ));
            return;
         }
      }
      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar4, lVar3, "p_index", "size()", "", false, false);
      return;
   }
   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}/* ShaderRD::_compile_variant(unsigned int, ShaderRD::CompileData) */void ShaderRD::_compile_variant(ShaderRD *param_1, uint param_2, Version *param_3, undefined8 param_4) {
   uint uVar1;
   code *pcVar2;
   int iVar3;
   uint *puVar4;
   undefined8 uVar5;
   String *pSVar6;
   size_t sVar7;
   long lVar8;
   long lVar9;
   ulong uVar10;
   long *plVar11;
   long lVar12;
   char *pcVar13;
   ulong uVar14;
   int iVar15;
   char cVar16;
   long in_FS_OFFSET;
   bool bVar17;
   char *pcVar18;
   CowData<char32_t> *local_160;
   CowData<char32_t> *local_158;
   char local_148;
   undefined8 local_130[2];
   long local_120;
   ulong local_118;
   undefined8 local_110;
   long local_108;
   long local_100;
   long local_f8;
   CowData<char32_t> local_f0[8];
   String local_e8[8];
   long local_e0;
   long local_d8;
   long local_d0;
   Vector<RenderingDeviceCommons::ShaderStageSPIRVData> local_c8[8];
   undefined8 local_c0;
   ulong local_b8[2];
   long local_a8[2];
   ulong local_98;
   long local_90;
   long local_88[2];
   char *local_78;
   size_t local_70[8];
   local_70[6] = *(long*)( in_FS_OFFSET + 0x28 );
   local_130[0] = param_4;
   puVar4 = (uint*)HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>::operator []((HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>*)( param_1 + 0x40 ), (int*)local_130);
   uVar14 = ( ulong ) * puVar4;
   if (*puVar4 <= param_2) {
      uVar10 = (ulong)param_2;
      iVar15 = 0xb2;
      pcVar13 = "./core/templates/local_vector.h";
      pcVar18 = "count";
      goto LAB_001072e1;
   }
   uVar1 = *(uint*)( *(long*)( puVar4 + 2 ) + (ulong)param_2 * 4 );
   uVar10 = (ulong)uVar1;
   lVar12 = *(long*)( param_1 + 0x28 );
   if (lVar12 == 0) {
      LAB_00107270:lVar9 = 0;
      LAB_00107273:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar10, lVar9, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }
   lVar9 = *(long*)( lVar12 + -8 );
   if (lVar9 <= (long)uVar10) goto LAB_00107273;
   cVar16 = *(char*)( lVar12 + uVar10 );
   if (cVar16 == '\0') goto LAB_00106c0a;
   local_c0 = 0;
   local_120 = 0;
   local_118 = 0;
   local_148 = cVar16;
   if (param_1[0x110] == (ShaderRD)0x0) {
      local_78 = (char*)0x0;
      for (int i = 0; i < 6; i++) {
         local_70[i] = 0;
      }
      _build_variant_code(param_1, (StringBuilder*)&local_78, uVar1, param_3, (StageTemplate*)( param_1 + 0x148 ));
      StringBuilder::as_string();
      if (local_118 != local_98) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         local_118 = local_98;
         local_98 = 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      local_b8[0] = CONCAT44(local_b8[0]._4_4_, 5);
      local_a8[0] = 0;
      uVar5 = RenderingDevice::get_singleton();
      RenderingDevice::shader_compile_spirv_from_source((CowData<char32_t>*)&local_98, uVar5, 0, (CowData<char32_t>*)&local_118, 0, &local_120, 1);
      if (local_90 == 0) {
         LAB_00107300:StringBuilder::~StringBuilder((StringBuilder*)&local_78);
         if (param_1[0x110] != (ShaderRD)0x0) {
            local_148 = '\0';
            goto LAB_001067f7;
         }
         LAB_00106dcc:iVar15 = 0;
         goto LAB_00106dcf;
      }
      CowData<unsigned_char>::_unref((CowData<unsigned_char>*)local_a8);
      lVar12 = local_90;
      local_a8[0] = local_90;
      if (local_90 == 0) goto LAB_00107300;
      local_148 = '\0';
      if (*(long*)( local_90 + -8 ) == 0) {
         LAB_00106d91:LOCK();
         plVar11 = (long*)( lVar12 + -0x10 );
         *plVar11 = *plVar11 + -1;
         UNLOCK();
         if (*plVar11 == 0) {
            Memory::free_static((void*)( local_a8[0] + -0x10 ), false);
         }
         StringBuilder::~StringBuilder((StringBuilder*)&local_78);
         if (param_1[0x110] != (ShaderRD)0x0) goto LAB_001067f7;
         if (local_148 != '\0') goto LAB_001073c0;
         goto LAB_00106dcc;
      }
      local_b8[0] = local_b8[0] & 0xffffffff00000000;
      plVar11 = (long*)( local_90 + -0x10 );
      local_98 = local_98 & 0xffffffff00000000;
      local_88[0] = 0;
      do {
         lVar9 = *plVar11;
         if (lVar9 == 0) goto LAB_0010737b;
         LOCK();
         lVar8 = *plVar11;
         bVar17 = lVar9 == lVar8;
         if (bVar17) {
            *plVar11 = lVar9 + 1;
            lVar8 = lVar9;
         }
         UNLOCK();
      } while ( !bVar17 );
      if (lVar8 != -1) {
         local_88[0] = local_90;
      }
      LAB_0010737b:Vector<RenderingDeviceCommons::ShaderStageSPIRVData>::push_back(local_c8);
      CowData<unsigned_char>::_unref((CowData<unsigned_char>*)local_88);
      local_148 = cVar16;
      if (lVar12 != 0) goto LAB_00106d91;
      StringBuilder::~StringBuilder((StringBuilder*)&local_78);
      if (param_1[0x110] != (ShaderRD)0x0) goto LAB_001067f7;
      LAB_001073c0:local_78 = (char*)0x0;
      for (int i = 0; i < 6; i++) {
         local_70[i] = 0;
      }
      _build_variant_code(param_1, (StringBuilder*)&local_78, uVar1, param_3, (StageTemplate*)( param_1 + 0x158 ));
      StringBuilder::as_string();
      if (local_118 != local_98) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         local_118 = local_98;
         local_98 = 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      local_b8[0] = CONCAT44(local_b8[0]._4_4_, 5);
      local_a8[0] = 0;
      uVar5 = RenderingDevice::get_singleton();
      RenderingDevice::shader_compile_spirv_from_source((CowData<char32_t>*)&local_98, uVar5, 1, (CowData<char32_t>*)&local_118, 0, &local_120, 1);
      if (local_90 == 0) {
         CowData<unsigned_char>::_unref((CowData<unsigned_char>*)&local_90);
         LAB_00107510:cVar16 = '\0';
      } else {
         CowData<unsigned_char>::_unref((CowData<unsigned_char>*)local_a8);
         lVar12 = local_90;
         local_90 = 0;
         local_a8[0] = lVar12;
         CowData<unsigned_char>::_unref((CowData<unsigned_char>*)&local_90);
         if (( lVar12 == 0 ) || ( *(long*)( lVar12 + -8 ) == 0 )) goto LAB_00107510;
         local_b8[0] = CONCAT44(local_b8[0]._4_4_, 1);
         plVar11 = (long*)( lVar12 + -0x10 );
         local_98 = CONCAT44(local_98._4_4_, 1);
         local_88[0] = 0;
         do {
            lVar12 = *plVar11;
            if (lVar12 == 0) goto LAB_001076cf;
            LOCK();
            lVar9 = *plVar11;
            bVar17 = lVar12 == lVar9;
            if (bVar17) {
               *plVar11 = lVar12 + 1;
               lVar9 = lVar12;
            }
            UNLOCK();
         } while ( !bVar17 );
         if (lVar9 != -1) {
            local_88[0] = local_a8[0];
         }
         LAB_001076cf:Vector<RenderingDeviceCommons::ShaderStageSPIRVData>::push_back(local_c8, (CowData<char32_t>*)&local_98);
         CowData<unsigned_char>::_unref((CowData<unsigned_char>*)local_88);
      }
      CowData<unsigned_char>::_unref((CowData<unsigned_char>*)local_a8);
      StringBuilder::~StringBuilder((StringBuilder*)&local_78);
      local_148 = cVar16;
      if (param_1[0x110] != (ShaderRD)0x0) goto LAB_001067f7;
      iVar15 = 1;
      LAB_00106952:local_158 = (CowData<char32_t>*)&local_120;
      local_160 = (CowData<char32_t>*)&local_118;
      if (cVar16 == '\0') goto LAB_00106dcf;
      pSVar6 = (String*)RenderingDevice::get_singleton();
      itos((long)local_b8);
      local_78 = ":";
      local_d8 = 0;
      local_70[0] = 1;
      String::parse_latin1((StrRange*)&local_d8);
      String::operator +((String*)&local_d0, (String*)( param_1 + 0x118 ));
      String::operator +((String*)&local_98, (String*)&local_d0);
      RenderingDevice::shader_compile_binary_from_spirv((Vector*)&local_78, pSVar6);
      uVar14 = local_98;
      if (local_98 != 0) {
         LOCK();
         plVar11 = (long*)( local_98 - 0x10 );
         *plVar11 = *plVar11 + -1;
         UNLOCK();
         if (*plVar11 == 0) {
            local_98 = 0;
            Memory::free_static((void*)( uVar14 - 0x10 ), false);
         }
      }
      lVar12 = local_d0;
      if (local_d0 != 0) {
         LOCK();
         plVar11 = (long*)( local_d0 + -0x10 );
         *plVar11 = *plVar11 + -1;
         UNLOCK();
         if (*plVar11 == 0) {
            local_d0 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      lVar12 = local_d8;
      if (local_d8 != 0) {
         LOCK();
         plVar11 = (long*)( local_d8 + -0x10 );
         *plVar11 = *plVar11 + -1;
         UNLOCK();
         if (*plVar11 == 0) {
            local_d8 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      uVar14 = local_b8[0];
      if (local_b8[0] != 0) {
         LOCK();
         plVar11 = (long*)( local_b8[0] - 0x10 );
         *plVar11 = *plVar11 + -1;
         UNLOCK();
         if (*plVar11 == 0) {
            local_b8[0] = 0;
            Memory::free_static((void*)( uVar14 - 0x10 ), false);
         }
      }
      if (local_70[0] != 0) {
         iVar3 = pthread_mutex_lock((pthread_mutex_t*)( param_1 + 0x90 ));
         if (iVar3 != 0) goto LAB_0010771f;
         uVar5 = RenderingDevice::get_singleton();
         lVar12 = *(long*)( param_3 + 0x88 );
         if (lVar12 == 0) goto LAB_00107270;
         lVar9 = *(long*)( lVar12 + -8 );
         if (lVar9 <= (long)uVar10) goto LAB_00107273;
         uVar5 = RenderingDevice::shader_create_from_bytecode_with_samplers(uVar5, (Vector*)&local_78, *(undefined8*)( lVar12 + uVar10 * 8 ), param_1 + 0x80);
         if (*(long*)( param_3 + 0x88 ) == 0) {
            LAB_001075f0:uVar14 = 0;
         } else {
            uVar14 = *(ulong*)( *(long*)( param_3 + 0x88 ) + -8 );
            if ((long)uVar10 < (long)uVar14) {
               CowData<RID>::_copy_on_write((CowData<RID>*)( param_3 + 0x88 ));
               *(undefined8*)( *(long*)( param_3 + 0x88 ) + uVar10 * 8 ) = uVar5;
               if (*(long*)( param_3 + 0x78 ) == 0) goto LAB_001075f0;
               uVar14 = *(ulong*)( *(long*)( param_3 + 0x78 ) + -8 );
               if ((long)uVar10 < (long)uVar14) {
                  CowData<Vector<unsigned_char>>::_copy_on_write((CowData<Vector<unsigned_char>>*)( param_3 + 0x78 ));
                  lVar12 = uVar10 * 0x10 + *(long*)( param_3 + 0x78 );
                  if (*(long*)( lVar12 + 8 ) != local_70[0]) {
                     CowData<unsigned_char>::_ref((CowData<unsigned_char>*)( lVar12 + 8 ), (CowData*)local_70);
                  }
                  pthread_mutex_unlock((pthread_mutex_t*)( param_1 + 0x90 ));
                  sVar7 = local_70[0];
                  if (local_70[0] != 0) {
                     LOCK();
                     plVar11 = (long*)( local_70[0] + -0x10 );
                     *plVar11 = *plVar11 + -1;
                     UNLOCK();
                     if (*plVar11 == 0) {
                        local_70[0] = 0;
                        Memory::free_static((void*)( sVar7 + -0x10 ), false);
                     }
                  }
                  CowData<char32_t>::_unref(local_160);
                  CowData<char32_t>::_unref(local_158);
                  CowData<RenderingDeviceCommons::ShaderStageSPIRVData>::_unref((CowData<RenderingDeviceCommons::ShaderStageSPIRVData>*)&local_c0);
                  goto LAB_00106c0a;
               }
            }
         }
         iVar15 = 0x38;
         pcVar13 = "./core/templates/vector.h";
         pcVar18 = "((Vector<T> *)(this))->_cowdata.size()";
         LAB_001072e1:_err_print_index_error("operator[]", pcVar13, iVar15, uVar10, uVar14, "p_index", pcVar18, "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }
      _err_print_error("_compile_variant", "servers/rendering/renderer_rd/shader_rd.cpp", 0x158, "Condition \"shader_data.is_empty()\" is true.", 0, 0);
      CowData<unsigned_char>::_unref((CowData<unsigned_char>*)local_70);
   } else {
      LAB_001067f7:local_158 = (CowData<char32_t>*)&local_120;
      local_160 = (CowData<char32_t>*)&local_118;
      local_78 = (char*)0x0;
      for (int i = 0; i < 6; i++) {
         local_70[i] = 0;
      }
      _build_variant_code(param_1, (StringBuilder*)&local_78, uVar1, param_3, (StageTemplate*)( param_1 + 0x168 ));
      StringBuilder::as_string();
      if (local_118 != local_98) {
         CowData<char32_t>::_unref(local_160);
         local_118 = local_98;
         local_98 = 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      local_b8[0] = CONCAT44(local_b8[0]._4_4_, 5);
      local_a8[0] = 0;
      uVar5 = RenderingDevice::get_singleton();
      RenderingDevice::shader_compile_spirv_from_source((CowData<char32_t>*)&local_98, uVar5, 4, local_160, 0, local_158, 1);
      if (local_90 != 0) {
         CowData<unsigned_char>::_unref((CowData<unsigned_char>*)local_a8);
         lVar12 = local_90;
         local_a8[0] = local_90;
         if (local_90 != 0) {
            if (*(long*)( local_90 + -8 ) == 0) {
               local_148 = '\0';
               LAB_00106929:LOCK();
               plVar11 = (long*)( lVar12 + -0x10 );
               *plVar11 = *plVar11 + -1;
               UNLOCK();
               if (*plVar11 == 0) {
                  Memory::free_static((void*)( local_a8[0] + -0x10 ), false);
               }
            } else {
               local_b8[0] = CONCAT44(local_b8[0]._4_4_, 4);
               plVar11 = (long*)( local_90 + -0x10 );
               local_98 = CONCAT44(local_98._4_4_, 4);
               local_88[0] = 0;
               do {
                  lVar9 = *plVar11;
                  if (lVar9 == 0) goto LAB_0010758f;
                  LOCK();
                  lVar8 = *plVar11;
                  bVar17 = lVar9 == lVar8;
                  if (bVar17) {
                     *plVar11 = lVar9 + 1;
                     lVar8 = lVar9;
                  }
                  UNLOCK();
               } while ( !bVar17 );
               if (lVar8 != -1) {
                  local_88[0] = local_90;
               }
               LAB_0010758f:Vector<RenderingDeviceCommons::ShaderStageSPIRVData>::push_back(local_c8);
               CowData<unsigned_char>::_unref((CowData<unsigned_char>*)local_88);
               if (lVar12 != 0) goto LAB_00106929;
            }
            iVar15 = 4;
            StringBuilder::~StringBuilder((StringBuilder*)&local_78);
            cVar16 = local_148;
            goto LAB_00106952;
         }
      }
      iVar15 = 4;
      StringBuilder::~StringBuilder((StringBuilder*)&local_78);
      LAB_00106dcf:local_158 = (CowData<char32_t>*)&local_120;
      iVar3 = pthread_mutex_lock((pthread_mutex_t*)( param_1 + 0x90 ));
      if (iVar3 != 0) {
         LAB_0010771f:/* WARNING: Subroutine does not return */std::__throw_system_error(iVar3);
      }
      local_98 = 0;
      local_78 = ").";
      local_70[0] = 2;
      String::parse_latin1((StrRange*)&local_98);
      if (*(long*)( param_1 + 0x18 ) == 0) goto LAB_00107270;
      lVar9 = *(long*)( *(long*)( param_1 + 0x18 ) + -8 );
      if (lVar9 <= (long)uVar10) goto LAB_00107273;
      pcVar13 = (char*)CharString::get_data();
      local_d0 = 0;
      sVar7 = 0;
      if (pcVar13 != (char*)0x0) {
         sVar7 = strlen(pcVar13);
      }
      local_78 = pcVar13;
      local_70[0] = sVar7;
      String::parse_latin1((StrRange*)&local_d0);
      local_78 = " (";
      local_e0 = 0;
      local_70[0] = 2;
      String::parse_latin1((StrRange*)&local_e0);
      itos((long)local_f0);
      local_78 = " shader, variant #";
      local_100 = 0;
      local_70[0] = 0x12;
      String::parse_latin1((StrRange*)&local_100);
      local_70[0] = 8;
      local_110 = 0;
      local_78 = "Compute ";
      if (iVar15 != 4) {
         local_70[0] = 6;
         local_78 = "Vertex";
         if (iVar15 != 0) {
            local_70[0] = 8;
            local_78 = "Fragment";
         }
      }
      String::parse_latin1((StrRange*)&local_110);
      operator+((char *)&
      local_108,(String*)"Error compiling ";
      String::operator +((String*)&local_f8, (String*)&local_108);
      String::operator +(local_e8, (String*)&local_f8);
      String::operator +((String*)&local_d8, local_e8);
      String::operator +((String*)local_b8, (String*)&local_d8);
      String::operator +((String*)&local_78, (String*)local_b8);
      _err_print_error("_compile_variant", "servers/rendering/renderer_rd/shader_rd.cpp", 0x14d, (String*)&local_78, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      uVar14 = local_b8[0];
      if (local_b8[0] != 0) {
         LOCK();
         plVar11 = (long*)( local_b8[0] - 0x10 );
         *plVar11 = *plVar11 + -1;
         UNLOCK();
         if (*plVar11 == 0) {
            local_b8[0] = 0;
            Memory::free_static((void*)( uVar14 - 0x10 ), false);
         }
      }
      lVar12 = local_d8;
      if (local_d8 != 0) {
         LOCK();
         plVar11 = (long*)( local_d8 + -0x10 );
         *plVar11 = *plVar11 + -1;
         UNLOCK();
         if (*plVar11 == 0) {
            local_d8 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)local_e8);
      lVar12 = local_f8;
      if (local_f8 != 0) {
         LOCK();
         plVar11 = (long*)( local_f8 + -0x10 );
         *plVar11 = *plVar11 + -1;
         UNLOCK();
         if (*plVar11 == 0) {
            local_f8 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      lVar12 = local_108;
      if (local_108 != 0) {
         LOCK();
         plVar11 = (long*)( local_108 + -0x10 );
         *plVar11 = *plVar11 + -1;
         UNLOCK();
         if (*plVar11 == 0) {
            local_108 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
      lVar12 = local_100;
      if (local_100 != 0) {
         LOCK();
         plVar11 = (long*)( local_100 + -0x10 );
         *plVar11 = *plVar11 + -1;
         UNLOCK();
         if (*plVar11 == 0) {
            local_100 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      CowData<char32_t>::_unref(local_f0);
      lVar12 = local_e0;
      if (local_e0 != 0) {
         LOCK();
         plVar11 = (long*)( local_e0 + -0x10 );
         *plVar11 = *plVar11 + -1;
         UNLOCK();
         if (*plVar11 == 0) {
            local_e0 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      _err_print_error("_compile_variant", "servers/rendering/renderer_rd/shader_rd.cpp", 0x14e, local_158, 0, 0);
      String::get_with_code_lines();
      operator+((char *)&
      local_78,(String*)"code:\n";
      _err_print_error("_compile_variant", "servers/rendering/renderer_rd/shader_rd.cpp", 0x151, (String*)&local_78, 0, 0);
      pcVar13 = local_78;
      if (local_78 != (char*)0x0) {
         LOCK();
         plVar11 = (long*)( local_78 + -0x10 );
         *plVar11 = *plVar11 + -1;
         UNLOCK();
         if (*plVar11 == 0) {
            local_78 = (char*)0x0;
            Memory::free_static(pcVar13 + -0x10, false);
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      pthread_mutex_unlock((pthread_mutex_t*)( param_1 + 0x90 ));
   }
   uVar14 = local_118;
   if (local_118 != 0) {
      LOCK();
      plVar11 = (long*)( local_118 - 0x10 );
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
         local_118 = 0;
         Memory::free_static((void*)( uVar14 - 0x10 ), false);
      }
   }
   lVar12 = local_120;
   if (local_120 != 0) {
      LOCK();
      plVar11 = (long*)( local_120 + -0x10 );
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
         local_120 = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
      }
   }
   CowData<RenderingDeviceCommons::ShaderStageSPIRVData>::_unref((CowData<RenderingDeviceCommons::ShaderStageSPIRVData>*)&local_c0);
   LAB_00106c0a:if (local_70[6] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* ShaderRD::_version_get_sha1(ShaderRD::Version*) const */Version *ShaderRD::_version_get_sha1(Version *param_1) {
   char *pcVar1;
   code *pcVar2;
   int iVar3;
   StringName_conflict *pSVar4;
   long lVar5;
   long lVar6;
   long in_RDX;
   StringName_conflict *pSVar7;
   long lVar8;
   long *plVar9;
   long lVar10;
   long lVar11;
   long in_FS_OFFSET;
   bool bVar12;
   long local_b8;
   long local_b0;
   long local_a8;
   long local_a0[2];
   StringName_conflict *local_90;
   char *local_88;
   size_t local_80;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = 0;
   local_70 = 0;
   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   local_50 = 0;
   local_48 = 0;
   for (int i = 0; i < 4; i++) {
      StringBuilder::append((char*)&local_78);
      CharString::get_data();
      StringBuilder::append((char*)&local_78);
   }
   plVar9 = *(long**)( in_RDX + 0x38 );
   local_90 = (StringName_conflict*)0x0;
   if (plVar9 != (long*)0x0) {
      pSVar7 = (StringName_conflict*)0x0;
      do {
         StringName::StringName((StringName_conflict*)&local_88, (StringName_conflict*)( plVar9 + 2 ));
         if (pSVar7 == (StringName_conflict*)0x0) {
            lVar8 = 1;
         } else {
            lVar8 = *(long*)( pSVar7 + -8 ) + 1;
         }
         iVar3 = CowData<StringName>::resize<false>((CowData<StringName>*)&local_90, lVar8);
         pSVar7 = local_90;
         if (iVar3 == 0) {
            if (local_90 == (StringName_conflict*)0x0) {
               lVar10 = -1;
               lVar8 = 0;
            } else {
               lVar8 = *(long*)( local_90 + -8 );
               lVar10 = lVar8 + -1;
               if (-1 < lVar10) {
                  CowData<StringName>::_copy_on_write((CowData<StringName>*)&local_90);
                  pSVar7 = local_90;
                  StringName::operator =(local_90 + lVar10 * 8, (StringName_conflict*)&local_88);
                  goto LAB_001078ce;
               }
            }
            _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar10, lVar8, "p_index", "size()", "", false, false);
         } else {
            _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
            pSVar7 = local_90;
         }
         LAB_001078ce:if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
            StringName::unref();
         }
         plVar9 = (long*)*plVar9;
      } while ( plVar9 != (long*)0x0 );
      if (( pSVar7 != (StringName_conflict*)0x0 ) && ( lVar8 = lVar8 != 0 )) {
         CowData<StringName>::_copy_on_write((CowData<StringName>*)&local_90);
         pSVar7 = local_90;
         if (lVar8 != 1) {
            lVar10 = 0;
            lVar11 = lVar8;
            do {
               lVar11 = lVar11 >> 1;
               lVar10 = lVar10 + 1;
            } while ( lVar11 != 1 );
            lVar10 = lVar10 * 2;
            lVar11 = lVar8;
            lVar5 = 1;
            if (lVar8 < 0x11) {
               do {
                  lVar10 = lVar5 + 1;
                  SortArray<StringName,StringName::AlphCompare,true>::linear_insert(0, lVar5, pSVar7);
                  lVar5 = lVar10;
               } while ( lVar8 != lVar10 );
            } else {
               do {
                  lVar10 = lVar10 + -1;
                  pSVar4 = (StringName_conflict*)SortArray<StringName,StringName::AlphCompare,true>::median_of_3(pSVar7, pSVar7 + ( lVar11 >> 1 ) * 8, pSVar7 + lVar11 * 8 + -8);
                  StringName::StringName((StringName_conflict*)&local_88, pSVar4);
                  lVar5 = SortArray<StringName,StringName::AlphCompare,true>::partitioner(0, lVar11, (StringName_conflict*)&local_88, pSVar7);
                  if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
                     StringName::unref();
                  }
                  SortArray<StringName,StringName::AlphCompare,true>::introsort(lVar5, lVar11, pSVar7, lVar10);
                  lVar11 = 1;
                  if (lVar5 < 0x11) goto LAB_00107c40;
                  lVar11 = lVar5;
               } while ( lVar10 != 0 );
               SortArray<StringName,StringName::AlphCompare,true>::partial_sort(0, lVar5, lVar5, pSVar7);
               lVar11 = 1;
               LAB_00107c40:do {
                  lVar10 = lVar11 + 1;
                  SortArray<StringName,StringName::AlphCompare,true>::linear_insert(0, lVar11, pSVar7);
                  lVar11 = lVar10;
               } while ( lVar10 != 0x10 );
               lVar10 = 0x10;
               do {
                  StringName::StringName((StringName_conflict*)&local_88, pSVar7 + lVar10 * 8);
                  SortArray<StringName,StringName::AlphCompare,true>::unguarded_linear_insert(lVar10, (StringName_conflict*)&local_88, pSVar7);
                  if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
                     StringName::unref();
                  }
                  lVar10 = lVar10 + 1;
               } while ( lVar8 != lVar10 );
            }
         }
         if (pSVar7 != (StringName_conflict*)0x0) {
            lVar8 = 0;
            do {
               if (*(long*)( pSVar7 + -8 ) <= lVar8) break;
               local_a0[0] = 0;
               local_88 = "]";
               local_80 = 1;
               String::parse_latin1((StrRange*)local_a0);
               lVar10 = *(long*)( pSVar7 + -8 );
               if (lVar10 <= lVar8) goto LAB_00107ab8;
               lVar11 = lVar8 * 8;
               lVar10 = *(long*)( pSVar7 + lVar11 );
               if (lVar10 == 0) {
                  local_b0 = 0;
               } else {
                  pcVar1 = *(char**)( lVar10 + 8 );
                  local_b0 = 0;
                  if (pcVar1 == (char*)0x0) {
                     plVar9 = (long*)( *(long*)( lVar10 + 0x10 ) + -0x10 );
                     if (*(long*)( lVar10 + 0x10 ) != 0) {
                        do {
                           lVar5 = *plVar9;
                           if (lVar5 == 0) goto LAB_00107d4e;
                           LOCK();
                           lVar6 = *plVar9;
                           bVar12 = lVar5 == lVar6;
                           if (bVar12) {
                              *plVar9 = lVar5 + 1;
                              lVar6 = lVar5;
                           }
                           UNLOCK();
                        } while ( !bVar12 );
                        if (lVar6 != -1) {
                           local_b0 = *(long*)( lVar10 + 0x10 );
                        }
                     }
                  } else {
                     local_80 = strlen(pcVar1);
                     local_88 = pcVar1;
                     String::parse_latin1((StrRange*)&local_b0);
                  }
               }
               LAB_00107d4e:local_b8 = 0;
               local_88 = "[code:";
               local_80 = 6;
               String::parse_latin1((StrRange*)&local_b8);
               String::operator +((String*)&local_a8, (String*)&local_b8);
               String::operator +((String*)&local_88, (String*)&local_a8);
               StringBuilder::append((String*)&local_78);
               pcVar1 = local_88;
               if (local_88 != (char*)0x0) {
                  LOCK();
                  plVar9 = (long*)( local_88 + -0x10 );
                  *plVar9 = *plVar9 + -1;
                  UNLOCK();
                  if (*plVar9 == 0) {
                     local_88 = (char*)0x0;
                     Memory::free_static(pcVar1 + -0x10, false);
                  }
               }
               lVar10 = local_a8;
               if (local_a8 != 0) {
                  LOCK();
                  plVar9 = (long*)( local_a8 + -0x10 );
                  *plVar9 = *plVar9 + -1;
                  UNLOCK();
                  if (*plVar9 == 0) {
                     local_a8 = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }
               }
               lVar10 = local_b8;
               if (local_b8 != 0) {
                  LOCK();
                  plVar9 = (long*)( local_b8 + -0x10 );
                  *plVar9 = *plVar9 + -1;
                  UNLOCK();
                  if (*plVar9 == 0) {
                     local_b8 = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }
               }
               lVar10 = local_b0;
               if (local_b0 != 0) {
                  LOCK();
                  plVar9 = (long*)( local_b0 + -0x10 );
                  *plVar9 = *plVar9 + -1;
                  UNLOCK();
                  if (*plVar9 == 0) {
                     local_b0 = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }
               }
               lVar10 = local_a0[0];
               if (local_a0[0] != 0) {
                  LOCK();
                  plVar9 = (long*)( local_a0[0] + -0x10 );
                  *plVar9 = *plVar9 + -1;
                  UNLOCK();
                  if (*plVar9 == 0) {
                     local_a0[0] = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }
               }
               lVar10 = *(long*)( pSVar7 + -8 );
               if (lVar10 <= lVar8) goto LAB_00107ab8;
               lVar8 = lVar8 + 1;
               HashMap<StringName,CharString,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,CharString>>>::operator []((HashMap<StringName,CharString,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,CharString>>>*)( in_RDX + 0x20 ), pSVar7 + lVar11);
               CharString::get_data();
               StringBuilder::append((char*)&local_78);
               pSVar7 = local_90;
            } while ( local_90 != (StringName_conflict*)0x0 );
         }
      }
   }
   lVar10 = *(long*)( in_RDX + 0x58 );
   if (lVar10 != 0) {
      lVar8 = 0;
      do {
         if (*(long*)( lVar10 + -8 ) <= lVar8) break;
         local_88 = "]";
         local_a0[0] = 0;
         local_80 = 1;
         String::parse_latin1((StrRange*)local_a0);
         itos((long)&local_b0);
         operator+((char *)&
         local_a8,(String*)"[custom_defines:";
         String::operator +((String*)&local_88, (String*)&local_a8);
         StringBuilder::append((String*)&local_78);
         pcVar1 = local_88;
         if (local_88 != (char*)0x0) {
            LOCK();
            plVar9 = (long*)( local_88 + -0x10 );
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (*plVar9 == 0) {
               local_88 = (char*)0x0;
               Memory::free_static(pcVar1 + -0x10, false);
            }
         }
         lVar10 = local_a8;
         if (local_a8 != 0) {
            LOCK();
            plVar9 = (long*)( local_a8 + -0x10 );
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (*plVar9 == 0) {
               local_a8 = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
            }
         }
         lVar10 = local_b0;
         if (local_b0 != 0) {
            LOCK();
            plVar9 = (long*)( local_b0 + -0x10 );
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (*plVar9 == 0) {
               local_b0 = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
            }
         }
         lVar10 = local_a0[0];
         if (local_a0[0] != 0) {
            LOCK();
            plVar9 = (long*)( local_a0[0] + -0x10 );
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (*plVar9 == 0) {
               local_a0[0] = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
            }
         }
         if (*(long*)( in_RDX + 0x58 ) == 0) {
            lVar10 = 0;
            LAB_00107ab8:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar10, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }
         lVar10 = *(long*)( *(long*)( in_RDX + 0x58 ) + -8 );
         if (lVar10 <= lVar8) goto LAB_00107ab8;
         lVar8 = lVar8 + 1;
         CharString::get_data();
         StringBuilder::append((char*)&local_78);
         lVar10 = *(long*)( in_RDX + 0x58 );
      } while ( lVar10 != 0 );
   }
   StringBuilder::as_string();
   String::sha1_text();
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<StringName>::_unref((CowData<StringName>*)&local_90);
   StringBuilder::~StringBuilder((StringBuilder*)&local_78);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* ShaderRD::_get_cache_file_path(ShaderRD::Version*, int) */Version *ShaderRD::_get_cache_file_path(Version *param_1, int param_2) {
   long *plVar1;
   uint uVar2;
   code *pcVar3;
   long lVar4;
   char *pcVar5;
   uint in_ECX;
   undefined4 in_register_00000034;
   long in_FS_OFFSET;
   long local_a0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _version_get_sha1((Version*)&local_a0);
   RenderingDevice::get_singleton();
   RenderingDevice::get_device_api_name();
   String::validate_filename();
   String::to_lower();
   pcVar5 = local_58;
   if (local_58 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar5 + -0x10 ), false);
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
   local_60 = 0;
   local_58 = ".cache";
   local_50 = 6;
   String::parse_latin1((StrRange*)&local_60);
   local_78 = 0;
   local_58 = ".";
   local_50 = 1;
   String::parse_latin1((StrRange*)&local_78);
   String::path_join((String*)&local_90);
   uVar2 = *(uint*)( CONCAT44(in_register_00000034, param_2) + 0x130 );
   if (in_ECX < uVar2) {
      String::path_join((String*)&local_88);
      String::path_join((String*)&local_80);
      String::operator +((String*)&local_70, (String*)&local_80);
      String::operator +((String*)&local_68, (String*)&local_70);
      String::operator +((String*)&local_58, (String*)&local_68);
      lVar4 = local_68;
      if (local_68 != 0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = 0;
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
      lVar4 = local_80;
      if (local_80 != 0) {
         LOCK();
         plVar1 = (long*)( local_80 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_80 = 0;
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
      lVar4 = local_78;
      if (local_78 != 0) {
         LOCK();
         plVar1 = (long*)( local_78 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_78 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
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
      *(undefined8*)param_1 = 0;
      if (local_58 != (undefined*)0x0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)param_1, (CowData*)&local_58);
         pcVar5 = local_58;
         if (local_58 != (undefined*)0x0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = (undefined*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }
         }
      }
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
      lVar4 = local_a0;
      if (local_a0 != 0) {
         LOCK();
         plVar1 = (long*)( local_a0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a0 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }
      }
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)in_ECX, (ulong)uVar2, "p_index", "count", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar3 = (code*)invalidInstructionException();
   ( *pcVar3 )();
}/* ShaderRD::_load_from_cache(ShaderRD::Version*, int) */undefined8 ShaderRD::_load_from_cache(ShaderRD *this, Version *param_1, int param_2) {
   long *plVar1;
   HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>> *this_00;
   pthread_mutex_t *__mutex;
   size_t __n;
   long lVar2;
   long lVar3;
   ulong *puVar4;
   char cVar5;
   int iVar6;
   uint uVar7;
   uint uVar8;
   uint uVar9;
   uint *puVar10;
   ulong *puVar11;
   undefined8 *puVar12;
   undefined8 uVar13;
   char *pcVar14;
   ulong uVar15;
   ulong uVar16;
   code *pcVar17;
   Object *pOVar18;
   ulong uVar19;
   long lVar20;
   ulong *puVar21;
   ulong uVar22;
   long in_FS_OFFSET;
   char *pcVar23;
   int local_7c[3];
   long local_70;
   Object *local_68;
   long local_60;
   undefined *local_58;
   ulong *local_50;
   char local_45[5];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_7c[0] = param_2;
   _get_cache_file_path((Version*)&local_70, (int)this);
   FileAccess::open((String*)&local_68, (int)(Version*)&local_70, (Error*)0x1);
   if (local_68 == (Object*)0x0) {
      uVar13 = 0;
      goto LAB_00108871;
   }
   for (int i = 0; i < 4; i++) {
      local_45[i] = '\0';
   }
   local_45[4] = 0;
   ( **(code**)( *(long*)local_68 + 0x220 ) )(local_68, local_45, 4);
   local_58 = &_LC116;
   local_60 = 0;
   local_50 = (ulong*)0x4;
   String::parse_latin1((StrRange*)&local_60);
   cVar5 = operator != ( local_45,(String*)&local_60 );
   lVar20 = local_60;
   if (local_60 != 0) {
      LOCK();
      plVar1 = (long*)( local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar20 + -0x10 ), false);
      }
   }
   if (cVar5 == '\0') {
      iVar6 = ( **(code**)( *(long*)local_68 + 0x1f0 ) )();
      if (iVar6 != 3) goto LAB_00108858;
      uVar7 = ( **(code**)( *(long*)local_68 + 0x1f0 ) )();
      this_00 = (HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>*)( this + 0x40 );
      puVar10 = (uint*)HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>::operator [](this_00, local_7c);
      if (uVar7 != *puVar10) {
         _err_print_error("_load_from_cache", "servers/rendering/renderer_rd/shader_rd.cpp", 0x1cf, "Condition \"variant_count != (uint32_t)group_to_variant_map[p_group].size()\" is true. Returning: false", 0, 0);
         goto LAB_00108858;
      }
      if (uVar7 != 0) {
         uVar22 = 0;
         LAB_001085b5:puVar10 = (uint*)HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>::operator [](this_00, local_7c);
         uVar16 = ( ulong ) * puVar10;
         if (*puVar10 <= (uint)uVar22) {
            iVar6 = 0xb2;
            pcVar14 = "./core/templates/local_vector.h";
            pcVar23 = "count";
            goto LAB_0010898a;
         }
         iVar6 = *(int*)( *(long*)( puVar10 + 2 ) + uVar22 * 4 );
         uVar19 = (ulong)iVar6;
         uVar8 = ( **(code**)( *(long*)local_68 + 0x1f0 ) )();
         uVar16 = (ulong)uVar8;
         lVar20 = *(long*)( this + 0x28 );
         if (uVar8 != 0) {
            if (iVar6 < 0) {
               LAB_001088d0:if (lVar20 == 0) goto LAB_00108920;
            } else {
               if (lVar20 == 0) {
                  LAB_00108920:lVar20 = 0;
                  goto LAB_001088f7;
               }
               if ((long)uVar19 < *(long*)( lVar20 + -8 )) {
                  if (*(char*)( lVar20 + uVar19 ) == '\0') goto LAB_00108728;
                  local_50 = (ulong*)0x0;
                  uVar15 = uVar16 - 1 | uVar16 - 1 >> 1;
                  uVar15 = uVar15 | uVar15 >> 2;
                  uVar15 = uVar15 | uVar15 >> 4;
                  uVar15 = uVar15 | uVar15 >> 8;
                  puVar11 = (ulong*)Memory::alloc_static(( uVar15 | uVar15 >> 0x10 ) + 0x11, false);
                  pOVar18 = local_68;
                  if (puVar11 == (ulong*)0x0) {
                     puVar21 = (ulong*)0x0;
                     _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                     pcVar17 = *(code**)( *(long*)local_68 + 0x220 );
                     pOVar18 = local_68;
                     puVar4 = local_50;
                  } else {
                     puVar21 = puVar11 + 2;
                     *puVar11 = 1;
                     puVar11[1] = uVar16;
                     pcVar17 = *(code**)( *(long*)local_68 + 0x220 );
                     puVar4 = puVar21;
                     if (1 < *puVar11) {
                        local_50 = puVar21;
                        if (puVar21 == (ulong*)0x0) {
                           /* WARNING: Does not return */
                           pcVar17 = (code*)invalidInstructionException();
                           ( *pcVar17 )();
                        }
                        __n = puVar11[1];
                        uVar15 = 0x10;
                        if (__n != 0) {
                           uVar15 = __n - 1 | __n - 1 >> 1;
                           uVar15 = uVar15 | uVar15 >> 2;
                           uVar15 = uVar15 | uVar15 >> 4;
                           uVar15 = uVar15 | uVar15 >> 8;
                           uVar15 = uVar15 | uVar15 >> 0x10;
                           uVar15 = ( uVar15 | uVar15 >> 0x20 ) + 0x11;
                        }
                        puVar12 = (undefined8*)Memory::alloc_static(uVar15, false);
                        puVar11 = local_50;
                        if (puVar12 == (undefined8*)0x0) {
                           _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
                           puVar4 = local_50;
                        } else {
                           puVar21 = puVar12 + 2;
                           *puVar12 = 1;
                           puVar12[1] = __n;
                           memcpy(puVar21, local_50, __n);
                           LOCK();
                           puVar11 = puVar11 + -2;
                           *puVar11 = *puVar11 - 1;
                           UNLOCK();
                           puVar4 = puVar21;
                           if (*puVar11 == 0) {
                              Memory::free_static(local_50 + -2, false);
                           }
                        }
                     }
                  }
                  local_50 = puVar4;
                  uVar9 = ( *pcVar17 )(pOVar18, puVar21, uVar16);
                  if (uVar8 != uVar9) {
                     _err_print_error("_load_from_cache", "servers/rendering/renderer_rd/shader_rd.cpp", 0x1dd, "Condition \"br != variant_size\" is true. Returning: false", 0, 0);
                     CowData<unsigned_char>::_unref((CowData<unsigned_char>*)&local_50);
                     goto LAB_00108858;
                  }
                  if (*(long*)( param_1 + 0x78 ) == 0) {
                     uVar16 = 0;
                     goto LAB_00108b89;
                  }
                  uVar16 = *(ulong*)( *(long*)( param_1 + 0x78 ) + -8 );
                  if ((long)uVar16 <= (long)uVar19) goto LAB_00108b89;
                  CowData<Vector<unsigned_char>>::_copy_on_write((CowData<Vector<unsigned_char>>*)( param_1 + 0x78 ));
                  lVar20 = uVar19 * 0x10 + *(long*)( param_1 + 0x78 );
                  if (*(ulong**)( lVar20 + 8 ) != puVar21) {
                     CowData<unsigned_char>::_ref((CowData<unsigned_char>*)( lVar20 + 8 ), (CowData*)&local_50);
                  }
                  if (puVar21 != (ulong*)0x0) {
                     LOCK();
                     puVar21 = puVar21 + -2;
                     *puVar21 = *puVar21 - 1;
                     UNLOCK();
                     if (*puVar21 == 0) {
                        Memory::free_static(local_50 + -2, false);
                     }
                  }
                  goto LAB_00108728;
               }
            }
            LAB_001088d5:lVar20 = *(long*)( lVar20 + -8 );
            goto LAB_001088f7;
         }
         if ((long)uVar19 < 0) goto LAB_001088d0;
         if (lVar20 == 0) goto LAB_00108920;
         if (*(long*)( lVar20 + -8 ) <= (long)uVar19) goto LAB_001088d5;
         if (*(char*)( lVar20 + uVar19 ) != '\0') {
            _err_print_error("_load_from_cache", "servers/rendering/renderer_rd/shader_rd.cpp", 0x1d4, "Condition \"variant_size == 0 && variants_enabled[variant_id]\" is true. Returning: false", 0, 0);
            goto LAB_00108858;
         }
         LAB_00108728:uVar22 = uVar22 + 1;
         if (uVar22 == uVar7) goto code_r0x0010873a;
         goto LAB_001085b5;
      }
      LAB_001087f6:param_1[0x90] = (Version)0x1;
      uVar13 = 1;
   } else {
      _err_print_error("_load_from_cache", "servers/rendering/renderer_rd/shader_rd.cpp", 0x1c6, "Condition \"header != String(shader_file_header)\" is true. Returning: false", 0, 0);
      LAB_00108858:uVar13 = 0;
   }
   if (( ( local_68 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)local_68 + 0x140 ))(local_68);
   Memory::free_static(local_68, false);
}LAB_00108871:lVar20 = local_70;if (local_70 != 0) {
   LOCK();
   plVar1 = (long*)( local_70 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void*)( lVar20 + -0x10 ), false);
   }
}if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}return uVar13;code_r0x0010873a:uVar22 = 0;__mutex = (pthread_mutex_t*)( this + 0x90 );LAB_00108744:uVar8 = (uint)uVar22;puVar10 = (uint*)HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>::operator [](this_00, local_7c);uVar16 = ( ulong ) * puVar10;if (*puVar10 <= uVar8) {
   iVar6 = 0xb2;
   pcVar14 = "./core/templates/local_vector.h";
   pcVar23 = "count";
   goto LAB_0010898a;
}uVar19 = ( ulong ) * (int*)( *(long*)( puVar10 + 2 ) + uVar22 * 4 );lVar20 = *(long*)( this + 0x28 );if ((long)uVar19 < 0) {
   if (lVar20 == 0) {
      lVar20 = 0;
   } else {
      LAB_00108cc0:lVar20 = *(long*)( lVar20 + -8 );
   }
   goto LAB_001088f7;
}if (lVar20 != 0) {
   if (*(long*)( lVar20 + -8 ) <= (long)uVar19) goto LAB_00108cc0;
   if (*(char*)( lVar20 + uVar19 ) == '\0') {
      iVar6 = pthread_mutex_lock(__mutex);
      if (iVar6 != 0) goto LAB_00108e75;
      if (*(long*)( param_1 + 0x88 ) != 0) {
         uVar16 = *(ulong*)( *(long*)( param_1 + 0x88 ) + -8 );
         if ((long)uVar16 <= (long)uVar19) goto LAB_00108b89;
         CowData<RID>::_copy_on_write((CowData<RID>*)( param_1 + 0x88 ));
         *(undefined8*)( *(long*)( param_1 + 0x88 ) + uVar19 * 8 ) = 0;
         pthread_mutex_unlock(__mutex);
         LAB_001087e4:uVar22 = uVar22 + 1;
         if (uVar22 == uVar7) goto LAB_001087f6;
         goto LAB_00108744;
      }
      LAB_00108d0c:uVar16 = 0;
      LAB_00108b89:uVar22 = uVar19;
      pcVar23 = "((Vector<T> *)(this))->_cowdata.size()";
      iVar6 = 0x38;
      pcVar14 = "./core/templates/vector.h";
      LAB_0010898a:_err_print_index_error("operator[]", pcVar14, iVar6, uVar22, uVar16, "p_index", pcVar23, "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar17 = (code*)invalidInstructionException();
      ( *pcVar17 )();
   }
   iVar6 = pthread_mutex_lock(__mutex);
   if (iVar6 != 0) {
      LAB_00108e75:/* WARNING: Subroutine does not return */std::__throw_system_error(iVar6);
   }
   uVar13 = RenderingDevice::get_singleton();
   lVar2 = *(long*)( param_1 + 0x88 );
   if (lVar2 == 0) goto LAB_00108c5c;
   lVar20 = *(long*)( lVar2 + -8 );
   if (lVar20 <= (long)uVar19) goto LAB_001088f7;
   lVar3 = *(long*)( param_1 + 0x78 );
   if (lVar3 != 0) {
      lVar20 = *(long*)( lVar3 + -8 );
      if (lVar20 <= (long)uVar19) goto LAB_001088f7;
      lVar20 = RenderingDevice::shader_create_from_bytecode_with_samplers(uVar13, uVar19 * 0x10 + lVar3, *(undefined8*)( lVar2 + uVar19 * 8 ), this + 0x80);
      if (lVar20 != 0) {
         if (*(long*)( param_1 + 0x88 ) == 0) goto LAB_00108d0c;
         uVar16 = *(ulong*)( *(long*)( param_1 + 0x88 ) + -8 );
         if ((long)uVar19 < (long)uVar16) {
            CowData<RID>::_copy_on_write((CowData<RID>*)( param_1 + 0x88 ));
            *(long*)( *(long*)( param_1 + 0x88 ) + uVar19 * 8 ) = lVar20;
            pthread_mutex_unlock(__mutex);
            goto LAB_001087e4;
         }
         goto LAB_00108b89;
      }
      uVar22 = 0;
      goto LAB_00108d86;
   }
}LAB_00108c5c:lVar20 = 0;goto LAB_001088f7;LAB_00108d86:if (uVar8 <= (uint)uVar22) goto LAB_00108e43;puVar10 = (uint*)HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>::operator [](this_00, local_7c);uVar16 = ( ulong ) * puVar10;if (*puVar10 <= (uint)uVar22) {
   iVar6 = 0xb2;
   pcVar14 = "./core/templates/local_vector.h";
   pcVar23 = "count";
   goto LAB_0010898a;
}uVar19 = ( ulong ) * (int*)( *(long*)( puVar10 + 2 ) + uVar22 * 4 );uVar13 = RenderingDevice::get_singleton();lVar20 = *(long*)( param_1 + 0x88 );if ((long)uVar19 < 0) {
   if (lVar20 == 0) {
      LAB_00108e0f:lVar20 = 0;
   } else {
      LAB_00108de8:lVar20 = *(long*)( lVar20 + -8 );
   }
   LAB_001088f7:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar19, lVar20, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar17 = (code*)invalidInstructionException();
   ( *pcVar17 )();
}if (lVar20 == 0) goto LAB_00108e0f;uVar22 = uVar22 + 1;if (*(long*)( lVar20 + -8 ) <= (long)uVar19) goto LAB_00108de8;RenderingDevice::free(uVar13, *(undefined8*)( lVar20 + uVar19 * 8 ));goto LAB_00108d86;LAB_00108e43:_err_print_error("_load_from_cache", "servers/rendering/renderer_rd/shader_rd.cpp", 0x1f1, "Condition \"shader.is_null()\" is true. Returning: false", 0, 0);pthread_mutex_unlock(__mutex);goto LAB_00108858;}/* ShaderRD::_compile_version_start(ShaderRD::Version*, int) */void ShaderRD::_compile_version_start(ShaderRD *this, Version *param_1, int param_2) {
   long *plVar1;
   char *__s;
   code *pcVar2;
   char cVar3;
   int iVar4;
   Callable *pCVar5;
   int *piVar6;
   undefined8 *puVar7;
   undefined8 uVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   long in_FS_OFFSET;
   bool bVar12;
   int local_6c[3];
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   lVar10 = (long)param_2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar11 = *(long*)( this + 0x78 );
   local_6c[0] = param_2;
   if (lVar10 < 0) {
      if (lVar11 != 0) {
         lVar9 = *(long*)( lVar11 + -8 );
         goto LAB_001090cd;
      }
   } else if (lVar11 != 0) {
      lVar9 = *(long*)( lVar11 + -8 );
      if (lVar9 <= lVar10) goto LAB_001090cd;
      if (( *(char*)( lVar11 + lVar10 ) == '\0' ) || ( ( param_1[0x91] = (Version)0x0 ),this[0x140] != (ShaderRD)0x0 && ( cVar3 = _load_from_cache(this, param_1, param_2) ),cVar3 != '\0' )) goto LAB_0010905b;
      if ((_compile_version_start(ShaderRD::Version*,int)::{lambda()
      #1
      && (iVar4 = __cxa_guard_acquire(&_compile_version_start(ShaderRD::Version*,int)::{lambda()#1}
                                        ::operator()()::sname), iVar4 != 0)) {
      _scs_create((char *)&_compile_version_start(ShaderRD::Version*,int)::{lambda()#1}::
                           operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_compile_version_start(ShaderRD::Version*,int)::{lambda()#1}::operator()()::
                    sname,&__dso_handle)
      ;;
      __cxa_guard_release (&_compile_version_start(ShaderRD::Version*,int)::{lambda()#1}::
                           operator()()::sname);
   }
   pCVar5 = (Callable*)WorkerThreadPool::get_named_pool((StringName_conflict*)&_compile_version_start(ShaderRD::Version * ::sname));
   if ((_compile_version_start(ShaderRD::Version*,int)::{lambda()
   #2
   && (iVar4 = __cxa_guard_acquire(&_compile_version_start(ShaderRD::Version*,int)::{lambda()#2}
                                        ::operator()()::sname), iVar4 != 0)) {
      _scs_create((char *)&_compile_version_start(ShaderRD::Version*,int)::{lambda()#2}::
                           operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_compile_version_start(ShaderRD::Version*,int)::{lambda()#2}::operator()()::
                    sname,&__dso_handle)
   ;;
   __cxa_guard_release (&_compile_version_start(ShaderRD::Version*,int)::{lambda()#2}::
                           operator()()::sname);
}lVar11 = _compile_version_start(ShaderRD::Version*,int)::{lambda()#2if (_compile_version_start(ShaderRD::Version*,int)::{lambda()#2LAB_001091c9:local_60 = 0;}
    else{
   __s = *(char**)( _compile_version_start(ShaderRD::Version*,int)::{lambda()#2}::operator()() );
   local_60 = 0;
   if (__s == (char*)0x0) {
      plVar1 = (long*)( *(long*)( _compile_version_start(ShaderRD::Version*,int)::{lambda()#2}::
                                    operator()() ) + -0x10 );
      if (*(long*)( _compile_version_start(ShaderRD::Version*,int)::{lambda()#2}::operator()() ) != 0) {
         do {
            lVar10 = *plVar1;
            if (lVar10 == 0) goto LAB_001091c9;
            LOCK();
            lVar9 = *plVar1;
            bVar12 = lVar10 == lVar9;
            if (bVar12) {
               *plVar1 = lVar10 + 1;
               lVar9 = lVar10;
            }
            UNLOCK();
         } while ( !bVar12 );
         if (lVar9 != -1) {
            local_60 = *(long*)( lVar11 + 0x10 );
            goto LAB_00108f6e;
         }
      }
      goto LAB_001091c9;
   }
   local_50 = strlen(__s);
   local_58 = __s;
   String::parse_latin1((StrRange*)&local_60);
}LAB_00108f6e:piVar6 = (int*)HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>::operator []((HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>*)( this + 0x40 ), local_6c);iVar4 = *piVar6;puVar7 = (undefined8*)operator_new(0x30, "");*puVar7 = &PTR_callback_00114858;puVar7[1] = this;puVar7[2] = _compile_variant;puVar7[3] = 0;puVar7[4] = param_1;*(int*)( puVar7 + 5 ) = param_2;local_58 = (char*)0x0;local_50 = 0;uVar8 = WorkerThreadPool::_add_group_task(pCVar5, (_func_void_void_ptr_uint*)&local_58, (void*)0x0, (BaseTemplateUserdata*)0x0, (int)puVar7, iVar4, true, (String*)0x1);Callable::~Callable((Callable*)&local_58);lVar11 = local_60;if (local_60 != 0) {
   LOCK();
   plVar1 = (long*)( local_60 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void*)( lVar11 + -0x10 ), false);
   }
}lVar10 = (long)local_6c[0];lVar11 = *(long*)( param_1 + 0x68 );if (lVar10 < 0) {
   if (lVar11 != 0) {
      lVar11 = *(long*)( lVar11 + -8 );
      goto LAB_00109229;
   }
} else if (lVar11 != 0) {
   lVar11 = *(long*)( lVar11 + -8 );
   if (lVar10 < lVar11) {
      CowData<long>::_copy_on_write((CowData<long>*)( param_1 + 0x68 ));
      *(undefined8*)( *(long*)( param_1 + 0x68 ) + lVar10 * 8 ) = uVar8;
      LAB_0010905b:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return;
   }
   goto LAB_00109229;
}lVar11 = 0;LAB_00109229:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar10, lVar11, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);_err_flush_stdout();/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();( *pcVar2 )();}lVar9 = 0;LAB_001090cd:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar9, "p_index", "size()", "", false, true);_err_flush_stdout();/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();( *pcVar2 )();}/* ShaderRD::enable_group(int) */void ShaderRD::enable_group(ShaderRD *this, int param_1) {
   undefined1(*pauVar1)[16];
   int iVar2;
   uint uVar3;
   ulong uVar4;
   void *pvVar5;
   ulong *puVar6;
   long lVar7;
   undefined1(*pauVar8)[16];
   Version *pVVar9;
   long lVar10;
   long lVar11;
   ulong uVar12;
   lVar11 = (long)param_1;
   lVar7 = *(long*)( this + 0x78 );
   if (param_1 < 0) {
      if (lVar7 != 0) {
         lVar10 = *(long*)( lVar7 + -8 );
         goto LAB_0010956d;
      }
   } else if (lVar7 != 0) {
      lVar10 = *(long*)( lVar7 + -8 );
      if (lVar11 < lVar10) {
         if (*(char*)( lVar7 + lVar11 ) == '\0') {
            CowData<bool>::_copy_on_write((CowData<bool>*)( this + 0x78 ));
            iVar2 = *(int*)( this + 0xd4 );
            *(undefined1*)( *(long*)( this + 0x78 ) + lVar11 ) = 1;
            if (iVar2 != 0) {
               uVar12 = 0;
               pauVar8 = (undefined1(*) [16])0x0;
               do {
                  uVar3 = *(uint*)( ( uVar12 % ( ulong ) * (uint*)( this + 0xd0 ) ) * 0xa0 + *(long*)( *(long*)( this + 0xc0 ) + ( uVar12 / *(uint*)( this + 0xd0 ) ) * 8 ) + 0x98 );
                  if (uVar3 != 0xffffffff) {
                     if (pauVar8 == (undefined1(*) [16])0x0) {
                        pauVar8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                        *(undefined4*)pauVar8[1] = 0;
                        *pauVar8 = (undefined1[16])0x0;
                     }
                     puVar6 = (ulong*)operator_new(0x20, DefaultAllocator::alloc);
                     uVar4 = *(ulong*)( *pauVar8 + 8 );
                     puVar6[1] = 0;
                     *puVar6 = (ulong)uVar3 << 0x20 | uVar12;
                     puVar6[2] = uVar4;
                     puVar6[3] = (ulong)pauVar8;
                     if (uVar4 != 0) {
                        *(ulong**)( uVar4 + 8 ) = puVar6;
                     }
                     lVar7 = *(long*)*pauVar8;
                     *(ulong**)( *pauVar8 + 8 ) = puVar6;
                     if (lVar7 == 0) {
                        *(ulong**)*pauVar8 = puVar6;
                     }
                     *(int*)pauVar8[1] = *(int*)pauVar8[1] + 1;
                  }
                  uVar12 = uVar12 + 1;
               } while ( uVar12 < *(uint*)( this + 0xd4 ) );
               if (pauVar8 != (undefined1(*) [16])0x0) {
                  for (puVar6 = *(ulong**)*pauVar8; puVar6 != (ulong*)0x0; puVar6 = (ulong*)puVar6[1]) {
                     uVar12 = *puVar6;
                     if (( uVar12 == 0 ) || ( *(uint*)( this + 0xd4 ) <= (uint)uVar12 )) {
                        LAB_00109425:pVVar9 = (Version*)0x0;
                     } else {
                        pVVar9 = (Version*)( ( ( uVar12 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xd0 ) ) * 0xa0 + *(long*)( *(long*)( this + 0xc0 ) + ( ( uVar12 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xd0 ) ) * 8 ) );
                        if (*(int*)( pVVar9 + 0x98 ) != (int)( uVar12 >> 0x20 )) {
                           if (0x7ffffffe < *(int*)( pVVar9 + 0x98 ) + 0x80000000U) goto LAB_00109425;
                           _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                           pVVar9 = (Version*)0x0;
                        }
                     }
                     _compile_version_start(this, pVVar9, param_1);
                  }
                  if (pauVar8 != (undefined1(*) [16])0x0) {
                     do {
                        while (true) {
                           pvVar5 = *(void**)*pauVar8;
                           if (pvVar5 == (void*)0x0) {
                              if (*(int*)pauVar8[1] != 0) {
                                 _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                                 return;
                              }
                              goto LAB_00109488;
                           }
                           if (pauVar8 != *(undefined1(**) [16])( (long)pvVar5 + 0x18 )) break;
                           lVar7 = *(long*)( (long)pvVar5 + 8 );
                           lVar11 = *(long*)( (long)pvVar5 + 0x10 );
                           *(long*)*pauVar8 = lVar7;
                           if (pvVar5 == *(void**)( *pauVar8 + 8 )) {
                              *(long*)( *pauVar8 + 8 ) = lVar11;
                           }
                           if (lVar11 != 0) {
                              *(long*)( lVar11 + 8 ) = lVar7;
                              lVar7 = *(long*)( (long)pvVar5 + 8 );
                           }
                           if (lVar7 != 0) {
                              *(long*)( lVar7 + 0x10 ) = lVar11;
                           }
                           Memory::free_static(pvVar5, false);
                           pauVar1 = pauVar8 + 1;
                           *(int*)*pauVar1 = *(int*)*pauVar1 + -1;
                           if (*(int*)*pauVar1 == 0) goto LAB_00109488;
                        };
                        _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                     } while ( *(int*)pauVar8[1] != 0 );
                     LAB_00109488:Memory::free_static(pauVar8, false);
                     return;
                  }
               }
            }
         }
         return;
      }
      goto LAB_0010956d;
   }
   lVar10 = 0;
   LAB_0010956d:_err_print_index_error("enable_group", "servers/rendering/renderer_rd/shader_rd.cpp", 0x2d8, lVar11, lVar10, "p_group", "group_enabled.size()", "", false, false);
   return;
}/* ShaderRD::_save_to_cache(ShaderRD::Version*, int) */void ShaderRD::_save_to_cache(ShaderRD *this, Version *param_1, int param_2) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   code *pcVar4;
   char cVar5;
   uint *puVar6;
   undefined8 uVar7;
   ulong uVar8;
   undefined4 uVar9;
   long lVar10;
   long lVar11;
   long in_FS_OFFSET;
   int local_5c[3];
   long local_50;
   Object *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_5c[0] = param_2;
   if (this[0x140] == (ShaderRD)0x0) {
      _err_print_error("_save_to_cache", "servers/rendering/renderer_rd/shader_rd.cpp", 0x1fd, "Condition \"!shader_cache_dir_valid\" is true.", 0, 0);
   } else {
      _get_cache_file_path((Version*)&local_50, (int)this);
      FileAccess::open((String*)&local_48, (int)(Version*)&local_50, (Error*)0x2);
      if (local_48 == (Object*)0x0) {
         _err_print_error("_save_to_cache", "servers/rendering/renderer_rd/shader_rd.cpp", 0x200, "Condition \"f.is_null()\" is true.", 0, 0);
         if (local_48 != (Object*)0x0) {
            cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') {
               cVar5 = predelete_handler(local_48);
               if (cVar5 != '\0') {
                  ( **(code**)( *(long*)local_48 + 0x140 ) )(local_48);
                  Memory::free_static(local_48, false);
               }
            }
         }
         lVar10 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar1 = (long*)( local_50 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
            }
         }
      } else {
         uVar8 = 0;
         ( **(code**)( *(long*)local_48 + 0x2d0 ) )(local_48, &_LC116, 4);
         ( **(code**)( *(long*)local_48 + 0x278 ) )(local_48, 3);
         puVar6 = (uint*)HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>::operator []((HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>*)( this + 0x40 ), local_5c);
         uVar2 = *puVar6;
         ( **(code**)( *(long*)local_48 + 0x278 ) )();
         if (uVar2 != 0) {
            do {
               puVar6 = (uint*)HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>::operator []((HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>*)( this + 0x40 ), local_5c);
               if (*puVar6 <= (uint)uVar8) {
                  _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar8, ( ulong ) * puVar6, "p_index", "count", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar4 = (code*)invalidInstructionException();
                  ( *pcVar4 )();
               }
               lVar11 = (long)*(int*)( *(long*)( puVar6 + 2 ) + uVar8 * 4 );
               lVar10 = *(long*)( param_1 + 0x78 );
               if (lVar11 < 0) {
                  if (lVar10 != 0) {
                     LAB_001097e5:lVar10 = *(long*)( lVar10 + -8 );
                     goto LAB_001097e9;
                  }
                  LAB_00109830:lVar10 = 0;
                  LAB_001097e9:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar11, lVar10, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar4 = (code*)invalidInstructionException();
                  ( *pcVar4 )();
               }
               if (lVar10 == 0) goto LAB_00109830;
               if (*(long*)( lVar10 + -8 ) <= lVar11) goto LAB_001097e5;
               lVar10 = *(long*)( lVar10 + 8 + lVar11 * 0x10 );
               if (lVar10 == 0) {
                  uVar9 = 0;
               } else {
                  uVar9 = *(undefined4*)( lVar10 + -8 );
               }
               ( **(code**)( *(long*)local_48 + 0x278 ) )(local_48, uVar9);
               lVar3 = *(long*)( param_1 + 0x78 );
               if (lVar3 == 0) goto LAB_00109830;
               lVar10 = *(long*)( lVar3 + -8 );
               if (lVar10 <= lVar11) goto LAB_001097e9;
               lVar10 = *(long*)( lVar3 + 8 + lVar11 * 0x10 );
               if (lVar10 == 0) {
                  uVar7 = 0;
               } else {
                  uVar7 = *(undefined8*)( lVar10 + -8 );
               }
               ( **(code**)( *(long*)local_48 + 0x2d0 ) )(local_48, lVar10, uVar7);
               uVar8 = uVar8 + 1;
            } while ( uVar8 != uVar2 );
         }
         if (local_48 != (Object*)0x0) {
            cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') {
               cVar5 = predelete_handler(local_48);
               if (cVar5 != '\0') {
                  ( **(code**)( *(long*)local_48 + 0x140 ) )(local_48);
                  Memory::free_static(local_48, false);
               }
            }
         }
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      }
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ShaderRD::_compile_version_end(ShaderRD::Version*, int) */void ShaderRD::_compile_version_end(ShaderRD *this, Version *param_1, int param_2) {
   HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>> *this_00;
   long *plVar1;
   code *pcVar2;
   int iVar3;
   long lVar4;
   int *piVar5;
   uint *puVar6;
   long lVar7;
   undefined8 uVar8;
   long lVar9;
   long lVar10;
   char *pcVar11;
   ulong uVar12;
   long lVar13;
   uint uVar14;
   ulong uVar15;
   long in_FS_OFFSET;
   char *pcVar16;
   int local_4c[3];
   long local_40;
   lVar9 = (long)param_2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar4 = *(long*)( param_1 + 0x68 );
   local_4c[0] = param_2;
   if (lVar4 == 0) {
      if (lVar9 < 0) {
         LAB_00109b69:lVar13 = 0;
         LAB_00109b87:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar13, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }
      goto LAB_00109a0f;
   }
   lVar13 = *(long*)( lVar4 + -8 );
   if (lVar13 <= lVar9) goto LAB_00109a0f;
   if (lVar9 < 0) goto LAB_00109b87;
   if (*(long*)( lVar4 + lVar9 * 8 ) == 0) goto LAB_00109a0f;
   if ((_compile_version_end(ShaderRD::Version*,int)::{lambda()
   #1
   ( iVar3 = __cxa_guard_acquire(&_compile_version_end(ShaderRD::Version * ::operator ()(), ::sname), iVar3 != 0) );
   {
      _scs_create((char*)&_compile_version_end(ShaderRD::Version * ::sname, true));
      __cxa_atexit(StringName::~StringName, &_compile_version_end(ShaderRD::Version * ::sname, &__dso_handle));
      __cxa_guard_release(&_compile_version_end(ShaderRD::Version*,int)::{lambda()
      #1
      sname;
   }
   lVar4 = WorkerThreadPool::get_named_pool((StringName_conflict*)&_compile_version_end(ShaderRD::Version * ::sname));
   WorkerThreadPool::wait_for_group_task_completion(lVar4);
   iVar3 = local_4c[0];
   uVar15 = (ulong)local_4c[0];
   lVar4 = *(long*)( param_1 + 0x68 );
   if ((long)uVar15 < 0) {
      if (lVar4 != 0) {
         uVar12 = *(ulong*)( lVar4 + -8 );
         goto LAB_00109c71;
      }
   } else if (lVar4 != 0) {
      uVar12 = *(ulong*)( lVar4 + -8 );
      if ((long)uVar15 < (long)uVar12) {
         this_00 = (HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>*)( this + 0x40 );
         CowData<long>::_copy_on_write((CowData<long>*)( param_1 + 0x68 ));
         *(undefined8*)( *(long*)( param_1 + 0x68 ) + uVar15 * 8 ) = 0;
         uVar14 = 0;
         piVar5 = (int*)HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>::operator [](this_00, local_4c);
         if (*piVar5 != 0) {
            do {
               puVar6 = (uint*)HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>::operator [](this_00, local_4c);
               uVar12 = ( ulong ) * puVar6;
               if (*puVar6 <= uVar14) {
                  uVar15 = (ulong)uVar14;
                  iVar3 = 0xb2;
                  pcVar11 = "./core/templates/local_vector.h";
                  pcVar16 = "count";
                  goto LAB_00109c4a;
               }
               lVar4 = *(long*)( this + 0x28 );
               lVar9 = (long)*(int*)( *(long*)( puVar6 + 2 ) + (ulong)uVar14 * 4 );
               if (lVar9 < 0) {
                  if (lVar4 == 0) goto LAB_00109b69;
                  LAB_00109c11:lVar13 = *(long*)( lVar4 + -8 );
                  goto LAB_00109b87;
               }
               if (lVar4 == 0) goto LAB_00109b69;
               if (*(long*)( lVar4 + -8 ) <= lVar9) goto LAB_00109c11;
               if (*(char*)( lVar4 + lVar9 ) != '\0') {
                  lVar4 = *(long*)( param_1 + 0x88 );
                  if (lVar4 == 0) goto LAB_00109b69;
                  lVar13 = *(long*)( lVar4 + -8 );
                  if (lVar13 <= lVar9) goto LAB_00109b87;
                  if (*(long*)( lVar4 + lVar9 * 8 ) == 0) {
                     lVar10 = *(long*)( this + 0x18 );
                     lVar9 = 0;
                     if (lVar10 == 0) goto LAB_00109d46;
                     goto LAB_00109cb2;
                  }
               }
               uVar14 = uVar14 + 1;
               puVar6 = (uint*)HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>::operator [](this_00, local_4c);
            } while ( uVar14 < *puVar6 );
         }
         if (this[0x140] != (ShaderRD)0x0) {
            _save_to_cache(this, param_1, iVar3);
         }
         param_1[0x90] = (Version)0x1;
         goto LAB_00109a0f;
      }
      goto LAB_00109c71;
   }
   uVar12 = 0;
   LAB_00109c71:iVar3 = 0x38;
   pcVar11 = "./core/templates/vector.h";
   pcVar16 = "((Vector<T> *)(this))->_cowdata.size()";
   LAB_00109c4a:_err_print_index_error("operator[]", pcVar11, iVar3, uVar15, uVar12, "p_index", pcVar16, "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
   LAB_00109cb2:if (*(long*)( lVar10 + -8 ) <= lVar9) goto LAB_00109d3f;
   lVar4 = *(long*)( this + 0x28 );
   if (lVar4 == 0) goto LAB_00109b69;
   lVar13 = *(long*)( lVar4 + -8 );
   if (lVar13 <= lVar9) goto LAB_00109b87;
   if (*(char*)( lVar4 + lVar9 ) == '\0') {
      LAB_00109d32:lVar9 = lVar9 + 1;
      if (lVar10 == 0) goto LAB_00109d3f;
      goto LAB_00109cb2;
   }
   lVar4 = *(long*)( this + 0x78 );
   lVar7 = (long)*(int*)( lVar10 + lVar9 * 0x18 );
   if (lVar7 < 0) {
      if (lVar4 != 0) {
         LAB_00109d77:lVar13 = *(long*)( lVar4 + -8 );
         lVar9 = lVar7;
         goto LAB_00109b87;
      }
   } else if (lVar4 != 0) {
      if (*(long*)( lVar4 + -8 ) <= lVar7) goto LAB_00109d77;
      if (*(char*)( lVar4 + lVar7 ) == '\0') goto LAB_00109d32;
      lVar4 = *(long*)( param_1 + 0x88 );
      if (lVar4 == 0) goto LAB_00109b69;
      lVar13 = *(long*)( lVar4 + -8 );
      if (lVar13 <= lVar9) goto LAB_00109b87;
      if (*(long*)( lVar4 + lVar9 * 8 ) != 0) {
         uVar8 = RenderingDevice::get_singleton();
         if (*(long*)( param_1 + 0x88 ) == 0) goto LAB_00109b69;
         lVar13 = *(long*)( *(long*)( param_1 + 0x88 ) + -8 );
         if (lVar13 <= lVar9) goto LAB_00109b87;
         RenderingDevice::free(uVar8);
         lVar10 = *(long*)( this + 0x18 );
      }
      goto LAB_00109d32;
   }
   lVar13 = 0;
   lVar9 = lVar7;
   goto LAB_00109b87;
   LAB_00109d3f:lVar4 = *(long*)( param_1 + 0x88 );
   LAB_00109d46:if (( lVar4 != 0 ) && ( *(long*)( lVar4 + -8 ) != 0 )) {
      LOCK();
      plVar1 = (long*)( lVar4 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar4 = *(long*)( param_1 + 0x88 );
         *(undefined8*)( param_1 + 0x88 ) = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      } else {
         *(undefined8*)( param_1 + 0x88 ) = 0;
      }
   }
   CowData<Vector<unsigned_char>>::resize<false>((CowData<Vector<unsigned_char>>*)( param_1 + 0x78 ), 0);
   LAB_00109a0f:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* ShaderRD::_compile_ensure_finished(ShaderRD::Version*) */void ShaderRD::_compile_ensure_finished(ShaderRD *this, Version *param_1) {
   long lVar1;
   long lVar2;
   lVar1 = *(long*)( this + 0x78 );
   if (lVar1 == 0) {
      return;
   }
   lVar2 = 0;
   do {
      if (*(long*)( lVar1 + -8 ) <= lVar2) {
         return;
      }
      _compile_version_end(this, param_1, (int)lVar2);
      lVar1 = *(long*)( this + 0x78 );
      lVar2 = lVar2 + 1;
   } while ( lVar1 != 0 );
   return;
}/* ShaderRD::_clear_version(ShaderRD::Version*) */void ShaderRD::_clear_version(ShaderRD *this, Version *param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   undefined8 uVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   lVar3 = *(long*)( this + 0x78 );
   for (lVar5 = 0; ( lVar3 != 0 && ( lVar5 < *(long*)( lVar3 + -8 ) ) ); lVar5 = lVar5 + 1) {
      _compile_version_end(this, param_1, (int)lVar5);
      lVar3 = *(long*)( this + 0x78 );
   }
   lVar3 = *(long*)( param_1 + 0x88 );
   if (lVar3 == 0) {
      return;
   }
   lVar5 = *(long*)( this + 0x18 );
   if (lVar5 != 0) {
      lVar6 = 0;
      LAB_00109ee9:do {
         if (*(long*)( lVar5 + -8 ) <= lVar6) break;
         if (lVar3 == 0) {
            LAB_00109fa0:lVar7 = 0;
            LAB_00109fa3:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar7, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }
         lVar7 = *(long*)( lVar3 + -8 );
         if (lVar7 <= lVar6) goto LAB_00109fa3;
         if (*(long*)( lVar3 + lVar6 * 8 ) != 0) {
            uVar4 = RenderingDevice::get_singleton();
            if (*(long*)( param_1 + 0x88 ) == 0) goto LAB_00109fa0;
            lVar7 = *(long*)( *(long*)( param_1 + 0x88 ) + -8 );
            if (lVar7 <= lVar6) goto LAB_00109fa3;
            lVar6 = lVar6 + 1;
            RenderingDevice::free(uVar4);
            lVar5 = *(long*)( this + 0x18 );
            lVar3 = *(long*)( param_1 + 0x88 );
            if (lVar5 == 0) break;
            goto LAB_00109ee9;
         }
         lVar6 = lVar6 + 1;
      } while ( lVar5 != 0 );
      if (lVar3 == 0) goto LAB_00109f74;
   }
   if (*(long*)( lVar3 + -8 ) != 0) {
      LOCK();
      plVar1 = (long*)( lVar3 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( param_1 + 0x88 );
         *(undefined8*)( param_1 + 0x88 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      } else {
         *(undefined8*)( param_1 + 0x88 ) = 0;
      }
   }
   LAB_00109f74:if (( *(long*)( param_1 + 0x78 ) != 0 ) && ( *(long*)( *(long*)( param_1 + 0x78 ) + -8 ) != 0 )) {
      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>>*)( param_1 + 0x78 ));
      return;
   }
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* ShaderRD::_initialize_version(ShaderRD::Version*) */void ShaderRD::_initialize_version(ShaderRD *this, Version *param_1) {
   long *plVar1;
   CowData<RID> *this_00;
   code *pcVar2;
   int iVar3;
   long lVar4;
   ulong uVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   _clear_version(this, param_1);
   lVar4 = *(long*)( this + 0x18 );
   *(undefined2*)( param_1 + 0x90 ) = 0;
   if (lVar4 == 0) {
      lVar4 = *(long*)( param_1 + 0x88 );
      if (( lVar4 != 0 ) && ( *(long*)( lVar4 + -8 ) != 0 )) {
         LAB_0010a1bb:LOCK();
         plVar1 = (long*)( lVar4 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar4 = *(long*)( param_1 + 0x88 );
            *(undefined8*)( param_1 + 0x88 ) = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         } else {
            *(undefined8*)( param_1 + 0x88 ) = 0;
         }
         goto LAB_0010a1d8;
      }
      LAB_0010a4ba:lVar8 = 0;
   } else {
      lVar8 = *(long*)( lVar4 + -8 );
      this_00 = (CowData<RID>*)( param_1 + 0x88 );
      if (lVar8 < 0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
         LAB_0010a1d8:if (*(long*)( this + 0x18 ) == 0) goto LAB_0010a4ba;
         lVar8 = *(long*)( *(long*)( this + 0x18 ) + -8 );
      } else {
         lVar4 = *(long*)( param_1 + 0x88 );
         if (lVar4 == 0) {
            if (lVar8 != 0) {
               lVar10 = 0;
               CowData<RID>::_copy_on_write(this_00);
               lVar4 = 0;
               goto LAB_0010a0de;
            }
         } else {
            lVar10 = *(long*)( lVar4 + -8 );
            if (lVar8 != lVar10) {
               if (lVar8 == 0) goto LAB_0010a1bb;
               CowData<RID>::_copy_on_write(this_00);
               lVar4 = lVar10 * 8;
               if (lVar4 != 0) {
                  uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
                  uVar5 = uVar5 | uVar5 >> 2;
                  uVar5 = uVar5 | uVar5 >> 4;
                  uVar5 = uVar5 | uVar5 >> 8;
                  uVar5 = uVar5 | uVar5 >> 0x10;
                  lVar4 = ( uVar5 | uVar5 >> 0x20 ) + 1;
               }
               LAB_0010a0de:if (lVar8 * 8 != 0) {
                  uVar5 = lVar8 * 8 - 1;
                  uVar5 = uVar5 | uVar5 >> 1;
                  uVar5 = uVar5 | uVar5 >> 2;
                  uVar5 = uVar5 | uVar5 >> 4;
                  uVar5 = uVar5 | uVar5 >> 8;
                  uVar5 = uVar5 | uVar5 >> 0x10;
                  uVar5 = uVar5 | uVar5 >> 0x20;
                  lVar9 = uVar5 + 1;
                  if (lVar9 != 0) {
                     if (lVar8 <= lVar10) {
                        if (( lVar9 == lVar4 ) || ( iVar3 = iVar3 == 0 )) {
                           if (*(long*)( param_1 + 0x88 ) == 0) {
                              FUN_0010f41a();
                              return;
                           }
                           *(long*)( *(long*)( param_1 + 0x88 ) + -8 ) = lVar8;
                        }
                        goto LAB_0010a1d8;
                     }
                     if (lVar9 == lVar4) {
                        LAB_0010a431:puVar7 = *(undefined8**)( param_1 + 0x88 );
                        if (puVar7 == (undefined8*)0x0) {
                           FUN_0010f432();
                           return;
                        }
                        lVar4 = puVar7[-1];
                        LAB_0010a180:if (lVar4 < lVar8) {
                           memset(puVar7 + lVar4, 0, ( lVar8 - lVar4 ) * 8);
                        }
                        puVar7[-1] = lVar8;
                     } else if (lVar10 == 0) {
                        puVar6 = (undefined8*)Memory::alloc_static(uVar5 + 0x11, false);
                        if (puVar6 != (undefined8*)0x0) {
                           puVar7 = puVar6 + 2;
                           *puVar6 = 1;
                           puVar6[1] = 0;
                           *(undefined8**)( param_1 + 0x88 ) = puVar7;
                           lVar4 = 0;
                           goto LAB_0010a180;
                        }
                        _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                     } else {
                        iVar3 = CowData<RID>::_realloc(this_00, lVar9);
                        if (iVar3 == 0) goto LAB_0010a431;
                     }
                     goto LAB_0010a1d8;
                  }
               }
               _err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
               goto LAB_0010a1d8;
            }
         }
      }
   }
   CowData<Vector<unsigned_char>>::resize<false>((CowData<Vector<unsigned_char>>*)( param_1 + 0x78 ), lVar8);
   if (*(long*)( this + 0x78 ) == 0) {
      lVar4 = *(long*)( param_1 + 0x68 );
      if (( lVar4 == 0 ) || ( *(long*)( lVar4 + -8 ) == 0 )) goto LAB_0010a330;
      LAB_0010a3c4:LOCK();
      plVar1 = (long*)( lVar4 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar4 = *(long*)( param_1 + 0x68 );
         *(undefined8*)( param_1 + 0x68 ) = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      } else {
         *(undefined8*)( param_1 + 0x68 ) = 0;
      }
      goto LAB_0010a330;
   }
   lVar8 = *(long*)( *(long*)( this + 0x78 ) + -8 );
   if (lVar8 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      goto LAB_0010a330;
   }
   lVar4 = *(long*)( param_1 + 0x68 );
   if (lVar4 == 0) {
      if (lVar8 == 0) goto LAB_0010a330;
      lVar10 = 0;
      CowData<long>::_copy_on_write((CowData<long>*)( param_1 + 0x68 ));
      lVar4 = 0;
   } else {
      lVar10 = *(long*)( lVar4 + -8 );
      if (lVar8 == lVar10) goto LAB_0010a330;
      if (lVar8 == 0) goto LAB_0010a3c4;
      CowData<long>::_copy_on_write((CowData<long>*)( param_1 + 0x68 ));
      lVar4 = lVar10 * 8;
      if (lVar4 != 0) {
         uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
         uVar5 = uVar5 | uVar5 >> 2;
         uVar5 = uVar5 | uVar5 >> 4;
         uVar5 = uVar5 | uVar5 >> 8;
         uVar5 = uVar5 | uVar5 >> 0x10;
         lVar4 = ( uVar5 | uVar5 >> 0x20 ) + 1;
      }
   }
   if (lVar8 * 8 != 0) {
      uVar5 = lVar8 * 8 - 1;
      uVar5 = uVar5 | uVar5 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = uVar5 | uVar5 >> 0x20;
      if (uVar5 != 0xffffffffffffffff) {
         if (lVar10 < lVar8) {
            if (uVar5 + 1 == lVar4) {
               puVar7 = *(undefined8**)( param_1 + 0x68 );
               if (puVar7 == (undefined8*)0x0) {
                  FUN_0010f426();
                  return;
               }
            } else {
               if (lVar10 == 0) {
                  puVar7 = (undefined8*)Memory::alloc_static(uVar5 + 0x11, false);
                  if (puVar7 == (undefined8*)0x0) {
                     _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                     goto LAB_0010a330;
                  }
                  *puVar7 = 1;
                  puVar7[1] = 0;
               } else {
                  puVar7 = (undefined8*)Memory::realloc_static((void*)( *(long*)( param_1 + 0x68 ) + -0x10 ), uVar5 + 0x11, false);
                  if (puVar7 == (undefined8*)0x0) goto LAB_0010a5c2;
                  *puVar7 = 1;
               }
               puVar7 = puVar7 + 2;
               *(undefined8**)( param_1 + 0x68 ) = puVar7;
            }
            puVar7[-1] = lVar8;
         } else {
            puVar7 = *(undefined8**)( param_1 + 0x68 );
            if (uVar5 + 1 == lVar4) {
               if (puVar7 == (undefined8*)0x0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }
            } else {
               puVar6 = (undefined8*)Memory::realloc_static(puVar7 + -2, uVar5 + 0x11, false);
               if (puVar6 == (undefined8*)0x0) {
                  LAB_0010a5c2:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
                  goto LAB_0010a330;
               }
               puVar7 = puVar6 + 2;
               *puVar6 = 1;
               *(undefined8**)( param_1 + 0x68 ) = puVar7;
            }
            puVar7[-1] = lVar8;
         }
         goto LAB_0010a330;
      }
   }
   _err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
   LAB_0010a330:CowData<long>::_copy_on_write((CowData<long>*)( param_1 + 0x68 ));
   lVar4 = *(long*)( param_1 + 0x68 );
   if (( lVar4 != 0 ) && ( lVar8 = 0 ),0 < *(long*)( lVar4 + -8 )) {
      do {
         *(undefined8*)( lVar4 + lVar8 * 8 ) = 0;
         lVar8 = lVar8 + 1;
      } while ( lVar8 < *(long*)( lVar4 + -8 ) );
   }
   return;
}/* ShaderRD::version_free(RID) */undefined8 ShaderRD::version_free(ShaderRD *this, ulong param_2) {
   long lVar1;
   ulong uVar2;
   uint uVar3;
   uint uVar4;
   Version *pVVar5;
   uint uVar6;
   long lVar7;
   uVar4 = (uint)param_2;
   if (*(uint*)( this + 0xd4 ) <= uVar4) {
      return 0;
   }
   if (param_2 >> 0x20 == 0x7fffffff) {
      return 0;
   }
   pVVar5 = (Version*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xd0 ) ) * 0xa0 + *(long*)( *(long*)( this + 0xc0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xd0 ) ) * 8 ) );
   uVar3 = *(uint*)( pVVar5 + 0x98 );
   uVar6 = ( uint )(param_2 >> 0x20);
   if (uVar6 != ( uVar3 & 0x7fffffff )) {
      return 0;
   }
   if (param_2 != 0) {
      if (uVar6 == uVar3) goto LAB_0010a6d2;
      if (uVar3 + 0x80000000 < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   pVVar5 = (Version*)0x0;
   LAB_0010a6d2:_clear_version(this, pVVar5);
   if (uVar4 < *(uint*)( this + 0xd4 )) {
      uVar2 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xd0 );
      lVar7 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xd0 ) ) * 0xa0;
      pVVar5 = (Version*)( *(long*)( *(long*)( this + 0xc0 ) + uVar2 * 8 ) + lVar7 );
      uVar3 = *(uint*)( pVVar5 + 0x98 );
      if ((int)uVar3 < 0) {
         _err_print_error(&_LC143, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0, 0);
      } else if (uVar6 == uVar3) {
         Version::~Version(pVVar5);
         lVar1 = *(long*)( this + 200 );
         *(undefined4*)( *(long*)( *(long*)( this + 0xc0 ) + uVar2 * 8 ) + 0x98 + lVar7 ) = 0xffffffff;
         uVar3 = *(int*)( this + 0xd8 ) - 1;
         *(uint*)( this + 0xd8 ) = uVar3;
         *(uint*)( *(long*)( lVar1 + ( (ulong)uVar3 / ( ulong ) * (uint*)( this + 0xd0 ) ) * 8 ) + ( (ulong)uVar3 % ( ulong ) * (uint*)( this + 0xd0 ) ) * 4 ) = uVar4;
      } else {
         _err_print_error(&_LC143, "./core/templates/rid_owner.h", 0x171, "Method/function failed.", 0, 0);
      }
   } else {
      _err_print_error(&_LC143, "./core/templates/rid_owner.h", 0x161, "Method/function failed.", 0, 0);
   }
   return 1;
}/* ShaderRD::version_is_valid(RID) */Version ShaderRD::version_is_valid(ShaderRD *this, ulong param_2) {
   long lVar1;
   long lVar2;
   Version *pVVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xd4 ) )) {
      pVVar3 = (Version*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xd0 ) ) * 0xa0 + *(long*)( *(long*)( this + 0xc0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xd0 ) ) * 8 ) );
      if (*(int*)( pVVar3 + 0x98 ) == (int)( param_2 >> 0x20 )) {
         if (pVVar3[0x91] == (Version)0x0) {
            lVar1 = *(long*)( this + 0x78 );
            LAB_0010a8c2:if (lVar1 != 0) {
               lVar2 = 0;
               do {
                  if (*(long*)( lVar1 + -8 ) <= lVar2) break;
                  _compile_version_end(this, pVVar3, (int)lVar2);
                  lVar1 = *(long*)( this + 0x78 );
                  lVar2 = lVar2 + 1;
               } while ( lVar1 != 0 );
            }
         } else {
            _initialize_version(this, pVVar3);
            lVar1 = *(long*)( this + 0x78 );
            if (lVar1 != 0) {
               lVar2 = 0;
               do {
                  if (*(long*)( lVar1 + -8 ) <= lVar2) goto LAB_0010a8c2;
                  if (*(char*)( lVar1 + lVar2 ) == '\0') {
                     _allocate_placeholders(this, pVVar3, (int)lVar2);
                  } else {
                     _compile_version_start(this, pVVar3, (int)lVar2);
                  }
                  lVar1 = *(long*)( this + 0x78 );
                  lVar2 = lVar2 + 1;
               } while ( lVar1 != 0 );
            }
         }
         return pVVar3[0x90];
      }
      if (*(int*)( pVVar3 + 0x98 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   _err_print_error("version_is_valid", "servers/rendering/renderer_rd/shader_rd.cpp", 0x2ae, "Parameter \"version\" is null.", 0, 0);
   return (Version)0x0;
}/* Vector<CharString>::push_back(CharString) [clone .isra.0] */void Vector<CharString>::push_back(Vector<CharString> *this, CowData *param_2) {
   CowData<char> *this_00;
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   } else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }
   iVar1 = CowData<CharString>::resize<false>((CowData<CharString>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      } else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<CharString>::_copy_on_write((CowData<CharString>*)( this + 8 ));
            this_00 = (CowData<char>*)( *(long*)( this + 8 ) + lVar3 * 8 );
            if (*(long*)this_00 == *(long*)param_2) {
               return;
            }
            CowData<char>::_ref(this_00, param_2);
            return;
         }
      }
      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }
   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}/* ShaderRD::version_set_compute_code(RID, HashMap<String, String, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, String> > >
   const&, String const&, String const&, Vector<String> const&) */void ShaderRD::version_set_compute_code(ShaderRD *this, ulong param_2, long param_3, undefined8 param_4, undefined8 param_5, long param_6) {
   long *plVar1;
   uint uVar2;
   void *pvVar3;
   undefined8 *puVar4;
   long *plVar5;
   char *pcVar6;
   undefined8 uVar7;
   Version *pVVar8;
   long lVar9;
   long lVar10;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0x110] == (ShaderRD)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = 0x28a;
         pcVar6 = "Condition \"!is_compute\" is true.";
         goto LAB_0010b046;
      }
   } else {
      if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xd4 ) )) {
         pVVar8 = (Version*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xd0 ) ) * 0xa0 + *(long*)( *(long*)( this + 0xc0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xd0 ) ) * 8 ) );
         if (*(int*)( pVVar8 + 0x98 ) == (int)( param_2 >> 0x20 )) {
            lVar10 = *(long*)( this + 0x78 );
            for (lVar9 = 0; ( lVar10 != 0 && ( lVar9 < *(long*)( lVar10 + -8 ) ) ); lVar9 = lVar9 + 1) {
               _compile_version_end(this, pVVar8, (int)lVar9);
               lVar10 = *(long*)( this + 0x78 );
            }
            String::utf8();
            lVar9 = local_48;
            lVar10 = *(long*)( pVVar8 + 0x10 );
            if (lVar10 == local_48) {
               if (lVar10 != 0) {
                  LOCK();
                  plVar5 = (long*)( lVar10 + -0x10 );
                  *plVar5 = *plVar5 + -1;
                  UNLOCK();
                  if (*plVar5 == 0) {
                     local_48 = 0;
                     Memory::free_static((void*)( lVar9 + -0x10 ), false);
                  }
               }
            } else {
               if (lVar10 != 0) {
                  LOCK();
                  plVar5 = (long*)( lVar10 + -0x10 );
                  *plVar5 = *plVar5 + -1;
                  UNLOCK();
                  if (*plVar5 == 0) {
                     lVar10 = *(long*)( pVVar8 + 0x10 );
                     *(undefined8*)( pVVar8 + 0x10 ) = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }
               }
               *(long*)( pVVar8 + 0x10 ) = local_48;
            }
            String::utf8();
            lVar9 = local_48;
            lVar10 = *(long*)pVVar8;
            if (lVar10 == local_48) {
               if (lVar10 != 0) {
                  LOCK();
                  plVar5 = (long*)( lVar10 + -0x10 );
                  *plVar5 = *plVar5 + -1;
                  UNLOCK();
                  if (*plVar5 == 0) {
                     local_48 = 0;
                     Memory::free_static((void*)( lVar9 + -0x10 ), false);
                  }
               }
            } else {
               if (lVar10 != 0) {
                  LOCK();
                  plVar5 = (long*)( lVar10 + -0x10 );
                  *plVar5 = *plVar5 + -1;
                  UNLOCK();
                  if (*plVar5 == 0) {
                     lVar10 = *(long*)pVVar8;
                     *(undefined8*)pVVar8 = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  } else {
                     *(undefined8*)pVVar8 = 0;
                  }
               }
               *(long*)pVVar8 = local_48;
            }
            if (( *(long*)( pVVar8 + 0x28 ) != 0 ) && ( *(int*)( pVVar8 + 0x4c ) != 0 )) {
               lVar10 = 0;
               uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( pVVar8 + 0x48 ) * 4 );
               if (uVar2 != 0) {
                  do {
                     if (*(int*)( *(long*)( pVVar8 + 0x30 ) + lVar10 ) != 0) {
                        *(int*)( *(long*)( pVVar8 + 0x30 ) + lVar10 ) = 0;
                        pvVar3 = *(void**)( *(long*)( pVVar8 + 0x28 ) + lVar10 * 2 );
                        if (*(long*)( (long)pvVar3 + 0x18 ) != 0) {
                           LOCK();
                           plVar5 = (long*)( *(long*)( (long)pvVar3 + 0x18 ) + -0x10 );
                           *plVar5 = *plVar5 + -1;
                           UNLOCK();
                           if (*plVar5 == 0) {
                              lVar9 = *(long*)( (long)pvVar3 + 0x18 );
                              *(undefined8*)( (long)pvVar3 + 0x18 ) = 0;
                              Memory::free_static((void*)( lVar9 + -0x10 ), false);
                           }
                        }
                        if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                           StringName::unref();
                        }
                        Memory::free_static(pvVar3, false);
                        *(undefined8*)( *(long*)( pVVar8 + 0x28 ) + lVar10 * 2 ) = 0;
                     }
                     lVar10 = lVar10 + 4;
                  } while ( lVar10 != (ulong)uVar2 << 2 );
               }
               *(undefined4*)( pVVar8 + 0x4c ) = 0;
               *(undefined1(*) [16])( pVVar8 + 0x38 ) = (undefined1[16])0x0;
            }
            for (puVar4 = *(undefined8**)( param_3 + 0x18 ); puVar4 != (undefined8*)0x0; puVar4 = (undefined8*)*puVar4) {
               String::utf8();
               String::to_upper();
               StringName::StringName((StringName_conflict*)&local_50, (String*)&local_58, false);
               plVar5 = (long*)HashMap<StringName,CharString,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,CharString>>>::operator []((HashMap<StringName,CharString,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,CharString>>>*)( pVVar8 + 0x20 ), (StringName_conflict*)&local_50);
               lVar10 = *plVar5;
               if (lVar10 != local_48) {
                  if (lVar10 != 0) {
                     LOCK();
                     plVar1 = (long*)( lVar10 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar10 = *plVar5;
                        *plVar5 = 0;
                        Memory::free_static((void*)( lVar10 + -0x10 ), false);
                     } else {
                        *plVar5 = 0;
                     }
                  }
                  *plVar5 = local_48;
                  local_48 = 0;
               }
               if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
                  StringName::unref();
               }
               lVar10 = local_58;
               if (local_58 != 0) {
                  LOCK();
                  plVar5 = (long*)( local_58 + -0x10 );
                  *plVar5 = *plVar5 + -1;
                  UNLOCK();
                  if (*plVar5 == 0) {
                     local_58 = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }
               }
               lVar10 = local_48;
               if (local_48 != 0) {
                  LOCK();
                  plVar5 = (long*)( local_48 + -0x10 );
                  *plVar5 = *plVar5 + -1;
                  UNLOCK();
                  if (*plVar5 == 0) {
                     local_48 = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }
               }
            }
            if (( *(long*)( pVVar8 + 0x58 ) != 0 ) && ( *(long*)( *(long*)( pVVar8 + 0x58 ) + -8 ) != 0 )) {
               CowData<CharString>::_unref((CowData<CharString>*)( pVVar8 + 0x58 ));
            }
            lVar10 = *(long*)( param_6 + 8 );
            for (lVar9 = 0; ( lVar10 != 0 && ( lVar9 < *(long*)( lVar10 + -8 ) ) ); lVar9 = lVar9 + 1) {
               String::utf8();
               Vector<CharString>::push_back((Vector<CharString>*)( pVVar8 + 0x50 ));
               lVar10 = local_48;
               if (local_48 != 0) {
                  LOCK();
                  plVar5 = (long*)( local_48 + -0x10 );
                  *plVar5 = *plVar5 + -1;
                  UNLOCK();
                  if (*plVar5 == 0) {
                     local_48 = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }
               }
               lVar10 = *(long*)( param_6 + 8 );
            }
            pVVar8[0x91] = (Version)0x1;
            if (pVVar8[0x92] != (Version)0x0) {
               lVar9 = 0;
               _initialize_version(this, pVVar8);
               lVar10 = *(long*)( this + 0x78 );
               while (lVar10 != 0) {
                  while (true) {
                     if (*(long*)( lVar10 + -8 ) <= lVar9) goto LAB_0010afba;
                     if (*(char*)( lVar10 + lVar9 ) != '\0') break;
                     _allocate_placeholders(this, pVVar8, (int)lVar9);
                     lVar10 = *(long*)( this + 0x78 );
                     lVar9 = lVar9 + 1;
                     if (lVar10 == 0) goto LAB_0010afba;
                  };
                  _compile_version_start(this, pVVar8, (int)lVar9);
                  lVar9 = lVar9 + 1;
                  lVar10 = *(long*)( this + 0x78 );
               };
               LAB_0010afba:pVVar8[0x92] = (Version)0x0;
            }
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }
            goto LAB_0010b0cf;
         }
         if (*(int*)( pVVar8 + 0x98 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }
      }
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = 0x28d;
         pcVar6 = "Parameter \"version\" is null.";
         LAB_0010b046:_err_print_error("version_set_compute_code", "servers/rendering/renderer_rd/shader_rd.cpp", uVar7, pcVar6, 0, 0);
         return;
      }
   }
   LAB_0010b0cf:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* ShaderRD::version_set_code(RID, HashMap<String, String, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, String> > >
   const&, String const&, String const&, String const&, Vector<String> const&) */void ShaderRD::version_set_code(ShaderRD *param_1, ulong param_2, long param_3) {
   long *plVar1;
   uint uVar2;
   void *pvVar3;
   undefined8 *puVar4;
   long *plVar5;
   char *pcVar6;
   undefined8 uVar7;
   Version *pVVar8;
   long lVar9;
   long lVar10;
   long in_FS_OFFSET;
   long in_stack_00000008;
   long local_58;
   long local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1[0x110] == (ShaderRD)0x0) {
      if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( param_1 + 0xd4 ) )) {
         pVVar8 = (Version*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0xd0 ) ) * 0xa0 + *(long*)( *(long*)( param_1 + 0xc0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0xd0 ) ) * 8 ) );
         if (*(int*)( pVVar8 + 0x98 ) == (int)( param_2 >> 0x20 )) {
            lVar10 = *(long*)( param_1 + 0x78 );
            for (lVar9 = 0; ( lVar10 != 0 && ( lVar9 < *(long*)( lVar10 + -8 ) ) ); lVar9 = lVar9 + 1) {
               _compile_version_end(param_1, pVVar8, (int)lVar9);
               lVar10 = *(long*)( param_1 + 0x78 );
            }
            String::utf8();
            lVar9 = local_48;
            lVar10 = *(long*)( pVVar8 + 8 );
            if (lVar10 == local_48) {
               if (lVar10 != 0) {
                  LOCK();
                  plVar5 = (long*)( lVar10 + -0x10 );
                  *plVar5 = *plVar5 + -1;
                  UNLOCK();
                  if (*plVar5 == 0) {
                     local_48 = 0;
                     Memory::free_static((void*)( lVar9 + -0x10 ), false);
                  }
               }
            } else {
               if (lVar10 != 0) {
                  LOCK();
                  plVar5 = (long*)( lVar10 + -0x10 );
                  *plVar5 = *plVar5 + -1;
                  UNLOCK();
                  if (*plVar5 == 0) {
                     lVar10 = *(long*)( pVVar8 + 8 );
                     *(undefined8*)( pVVar8 + 8 ) = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }
               }
               *(long*)( pVVar8 + 8 ) = local_48;
            }
            String::utf8();
            lVar9 = local_48;
            lVar10 = *(long*)( pVVar8 + 0x18 );
            if (lVar10 == local_48) {
               if (lVar10 != 0) {
                  LOCK();
                  plVar5 = (long*)( lVar10 + -0x10 );
                  *plVar5 = *plVar5 + -1;
                  UNLOCK();
                  if (*plVar5 == 0) {
                     local_48 = 0;
                     Memory::free_static((void*)( lVar9 + -0x10 ), false);
                  }
               }
            } else {
               if (lVar10 != 0) {
                  LOCK();
                  plVar5 = (long*)( lVar10 + -0x10 );
                  *plVar5 = *plVar5 + -1;
                  UNLOCK();
                  if (*plVar5 == 0) {
                     lVar10 = *(long*)( pVVar8 + 0x18 );
                     *(undefined8*)( pVVar8 + 0x18 ) = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }
               }
               *(long*)( pVVar8 + 0x18 ) = local_48;
            }
            String::utf8();
            lVar9 = local_48;
            lVar10 = *(long*)pVVar8;
            if (lVar10 == local_48) {
               if (lVar10 != 0) {
                  LOCK();
                  plVar5 = (long*)( lVar10 + -0x10 );
                  *plVar5 = *plVar5 + -1;
                  UNLOCK();
                  if (*plVar5 == 0) {
                     local_48 = 0;
                     Memory::free_static((void*)( lVar9 + -0x10 ), false);
                  }
               }
            } else {
               if (lVar10 != 0) {
                  LOCK();
                  plVar5 = (long*)( lVar10 + -0x10 );
                  *plVar5 = *plVar5 + -1;
                  UNLOCK();
                  if (*plVar5 == 0) {
                     lVar10 = *(long*)pVVar8;
                     *(undefined8*)pVVar8 = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  } else {
                     *(undefined8*)pVVar8 = 0;
                  }
               }
               *(long*)pVVar8 = local_48;
            }
            if (( *(long*)( pVVar8 + 0x28 ) != 0 ) && ( *(int*)( pVVar8 + 0x4c ) != 0 )) {
               lVar10 = 0;
               uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( pVVar8 + 0x48 ) * 4 );
               if (uVar2 != 0) {
                  do {
                     if (*(int*)( *(long*)( pVVar8 + 0x30 ) + lVar10 ) != 0) {
                        *(int*)( *(long*)( pVVar8 + 0x30 ) + lVar10 ) = 0;
                        pvVar3 = *(void**)( *(long*)( pVVar8 + 0x28 ) + lVar10 * 2 );
                        if (*(long*)( (long)pvVar3 + 0x18 ) != 0) {
                           LOCK();
                           plVar5 = (long*)( *(long*)( (long)pvVar3 + 0x18 ) + -0x10 );
                           *plVar5 = *plVar5 + -1;
                           UNLOCK();
                           if (*plVar5 == 0) {
                              lVar9 = *(long*)( (long)pvVar3 + 0x18 );
                              *(undefined8*)( (long)pvVar3 + 0x18 ) = 0;
                              Memory::free_static((void*)( lVar9 + -0x10 ), false);
                           }
                        }
                        if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                           StringName::unref();
                        }
                        Memory::free_static(pvVar3, false);
                        *(undefined8*)( *(long*)( pVVar8 + 0x28 ) + lVar10 * 2 ) = 0;
                     }
                     lVar10 = lVar10 + 4;
                  } while ( lVar10 != (ulong)uVar2 << 2 );
               }
               *(undefined4*)( pVVar8 + 0x4c ) = 0;
               *(undefined1(*) [16])( pVVar8 + 0x38 ) = (undefined1[16])0x0;
            }
            for (puVar4 = *(undefined8**)( param_3 + 0x18 ); puVar4 != (undefined8*)0x0; puVar4 = (undefined8*)*puVar4) {
               String::utf8();
               String::to_upper();
               StringName::StringName((StringName_conflict*)&local_50, (String*)&local_58, false);
               plVar5 = (long*)HashMap<StringName,CharString,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,CharString>>>::operator []((HashMap<StringName,CharString,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,CharString>>>*)( pVVar8 + 0x20 ), (StringName_conflict*)&local_50);
               lVar10 = *plVar5;
               if (lVar10 != local_48) {
                  if (lVar10 != 0) {
                     LOCK();
                     plVar1 = (long*)( lVar10 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar10 = *plVar5;
                        *plVar5 = 0;
                        Memory::free_static((void*)( lVar10 + -0x10 ), false);
                     } else {
                        *plVar5 = 0;
                     }
                  }
                  *plVar5 = local_48;
                  local_48 = 0;
               }
               if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
                  StringName::unref();
               }
               lVar10 = local_58;
               if (local_58 != 0) {
                  LOCK();
                  plVar5 = (long*)( local_58 + -0x10 );
                  *plVar5 = *plVar5 + -1;
                  UNLOCK();
                  if (*plVar5 == 0) {
                     local_58 = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }
               }
               lVar10 = local_48;
               if (local_48 != 0) {
                  LOCK();
                  plVar5 = (long*)( local_48 + -0x10 );
                  *plVar5 = *plVar5 + -1;
                  UNLOCK();
                  if (*plVar5 == 0) {
                     local_48 = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }
               }
            }
            if (( *(long*)( pVVar8 + 0x58 ) != 0 ) && ( *(long*)( *(long*)( pVVar8 + 0x58 ) + -8 ) != 0 )) {
               CowData<CharString>::_unref((CowData<CharString>*)( pVVar8 + 0x58 ));
            }
            lVar10 = *(long*)( in_stack_00000008 + 8 );
            for (lVar9 = 0; ( lVar10 != 0 && ( lVar9 < *(long*)( lVar10 + -8 ) ) ); lVar9 = lVar9 + 1) {
               String::utf8();
               Vector<CharString>::push_back((Vector<CharString>*)( pVVar8 + 0x50 ));
               lVar10 = local_48;
               if (local_48 != 0) {
                  LOCK();
                  plVar5 = (long*)( local_48 + -0x10 );
                  *plVar5 = *plVar5 + -1;
                  UNLOCK();
                  if (*plVar5 == 0) {
                     local_48 = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }
               }
               lVar10 = *(long*)( in_stack_00000008 + 8 );
            }
            pVVar8[0x91] = (Version)0x1;
            if (pVVar8[0x92] != (Version)0x0) {
               lVar9 = 0;
               _initialize_version(param_1, pVVar8);
               lVar10 = *(long*)( param_1 + 0x78 );
               while (lVar10 != 0) {
                  while (true) {
                     if (*(long*)( lVar10 + -8 ) <= lVar9) goto LAB_0010b642;
                     if (*(char*)( lVar10 + lVar9 ) != '\0') break;
                     _allocate_placeholders(param_1, pVVar8, (int)lVar9);
                     lVar10 = *(long*)( param_1 + 0x78 );
                     lVar9 = lVar9 + 1;
                     if (lVar10 == 0) goto LAB_0010b642;
                  };
                  _compile_version_start(param_1, pVVar8, (int)lVar9);
                  lVar9 = lVar9 + 1;
                  lVar10 = *(long*)( param_1 + 0x78 );
               };
               LAB_0010b642:pVVar8[0x92] = (Version)0x0;
            }
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }
            goto LAB_0010b76f;
         }
         if (*(int*)( pVVar8 + 0x98 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }
      }
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = 0x26a;
         pcVar6 = "Parameter \"version\" is null.";
         LAB_0010b6e6:_err_print_error("version_set_code", "servers/rendering/renderer_rd/shader_rd.cpp", uVar7, pcVar6, 0, 0);
         return;
      }
   } else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar7 = 0x267;
      pcVar6 = "Condition \"is_compute\" is true.";
      goto LAB_0010b6e6;
   }
   LAB_0010b76f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* ShaderRD::~ShaderRD() */void ShaderRD::~ShaderRD(ShaderRD *this) {
   long *plVar1;
   long *plVar2;
   undefined1(*pauVar3)[16];
   uint uVar4;
   ulong uVar5;
   long lVar6;
   char *pcVar7;
   int iVar8;
   ulong *puVar9;
   void *pvVar10;
   undefined1(*pauVar11)[16];
   long lVar12;
   ulong uVar13;
   ShaderRD *pSVar14;
   long in_FS_OFFSET;
   long local_80;
   long local_78;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__ShaderRD_00114838;
   if (*(int*)( this + 0xd4 ) != 0) {
      pauVar11 = (undefined1(*) [16])0x0;
      uVar13 = 0;
      do {
         uVar4 = *(uint*)( ( uVar13 % ( ulong ) * (uint*)( this + 0xd0 ) ) * 0xa0 + *(long*)( *(long*)( this + 0xc0 ) + ( uVar13 / *(uint*)( this + 0xd0 ) ) * 8 ) + 0x98 );
         if (uVar4 != 0xffffffff) {
            if (pauVar11 == (undefined1(*) [16])0x0) {
               pauVar11 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined4*)pauVar11[1] = 0;
               *pauVar11 = (undefined1[16])0x0;
            }
            puVar9 = (ulong*)operator_new(0x20, DefaultAllocator::alloc);
            uVar5 = *(ulong*)( *pauVar11 + 8 );
            puVar9[1] = 0;
            *puVar9 = (ulong)uVar4 << 0x20 | uVar13;
            puVar9[2] = uVar5;
            puVar9[3] = (ulong)pauVar11;
            if (uVar5 != 0) {
               *(ulong**)( uVar5 + 8 ) = puVar9;
            }
            lVar12 = *(long*)*pauVar11;
            *(ulong**)( *pauVar11 + 8 ) = puVar9;
            if (lVar12 == 0) {
               *(ulong**)*pauVar11 = puVar9;
            }
            *(int*)pauVar11[1] = *(int*)pauVar11[1] + 1;
         }
         uVar13 = uVar13 + 1;
      } while ( uVar13 < *(uint*)( this + 0xd4 ) );
      if (pauVar11 != (undefined1(*) [16])0x0) {
         if (*(int*)pauVar11[1] == 0) {
            LAB_0010bb5d:if (pauVar11 != (undefined1(*) [16])0x0) {
               do {
                  while (true) {
                     pvVar10 = *(void**)*pauVar11;
                     if (pvVar10 == (void*)0x0) {
                        if (*(int*)pauVar11[1] != 0) {
                           _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                           goto LAB_0010b897;
                        }
                        goto LAB_0010b88d;
                     }
                     if (pauVar11 != *(undefined1(**) [16])( (long)pvVar10 + 0x18 )) break;
                     lVar12 = *(long*)( (long)pvVar10 + 8 );
                     lVar6 = *(long*)( (long)pvVar10 + 0x10 );
                     *(long*)*pauVar11 = lVar12;
                     if (pvVar10 == *(void**)( *pauVar11 + 8 )) {
                        *(long*)( *pauVar11 + 8 ) = lVar6;
                     }
                     if (lVar6 != 0) {
                        *(long*)( lVar6 + 8 ) = lVar12;
                        lVar12 = *(long*)( (long)pvVar10 + 8 );
                     }
                     if (lVar12 != 0) {
                        *(long*)( lVar12 + 0x10 ) = lVar6;
                     }
                     Memory::free_static(pvVar10, false);
                     pauVar3 = pauVar11 + 1;
                     *(int*)*pauVar3 = *(int*)*pauVar3 + -1;
                     if (*(int*)*pauVar3 == 0) {
                        Memory::free_static(pauVar11, false);
                        goto LAB_0010b897;
                     }
                  };
                  _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
               } while ( *(int*)pauVar11[1] != 0 );
               LAB_0010b88d:Memory::free_static(pauVar11, false);
            }
         } else {
            local_60 = 0;
            local_58 = " were never freed";
            local_50 = 0x11;
            String::parse_latin1((StrRange*)&local_60);
            local_58 = " shaders of type ";
            local_68 = 0;
            local_50 = 0x11;
            String::parse_latin1((StrRange*)&local_68);
            itos((long)&local_58);
            String::operator +((String*)&local_70, (String*)&local_58);
            String::operator +((String*)&local_78, (String*)&local_70);
            String::operator +((String*)&local_80, (String*)&local_78);
            _err_print_error("~ShaderRD", "servers/rendering/renderer_rd/shader_rd.cpp", 0x382, (String*)&local_80, 0, 0);
            lVar12 = local_80;
            if (local_80 != 0) {
               LOCK();
               plVar1 = (long*)( local_80 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_80 = 0;
                  Memory::free_static((void*)( lVar12 + -0x10 ), false);
               }
            }
            lVar12 = local_78;
            if (local_78 != 0) {
               LOCK();
               plVar1 = (long*)( local_78 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_78 = 0;
                  Memory::free_static((void*)( lVar12 + -0x10 ), false);
               }
            }
            lVar12 = local_70;
            if (local_70 != 0) {
               LOCK();
               plVar1 = (long*)( local_70 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_70 = 0;
                  Memory::free_static((void*)( lVar12 + -0x10 ), false);
               }
            }
            pcVar7 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_58 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar7 + -0x10, false);
               }
            }
            lVar12 = local_68;
            if (local_68 != 0) {
               LOCK();
               plVar1 = (long*)( local_68 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_68 = 0;
                  Memory::free_static((void*)( lVar12 + -0x10 ), false);
               }
            }
            lVar12 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar1 = (long*)( local_60 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar12 + -0x10 ), false);
               }
            }
            if (pauVar11 != (undefined1(*) [16])0x0) {
               do {
                  do {
                     if (*(int*)pauVar11[1] == 0) goto LAB_0010bb5d;
                     version_free(this);
                     pvVar10 = *(void**)*pauVar11;
                  } while ( pvVar10 == (void*)0x0 );
                  if (*(undefined1(**) [16])( (long)pvVar10 + 0x18 ) == pauVar11) {
                     lVar12 = *(long*)( (long)pvVar10 + 8 );
                     lVar6 = *(long*)( (long)pvVar10 + 0x10 );
                     *(long*)*pauVar11 = lVar12;
                     if (pvVar10 == *(void**)( *pauVar11 + 8 )) {
                        *(long*)( *pauVar11 + 8 ) = lVar6;
                     }
                     if (lVar6 != 0) {
                        *(long*)( lVar6 + 8 ) = lVar12;
                        lVar12 = *(long*)( (long)pvVar10 + 8 );
                     }
                     if (lVar12 != 0) {
                        *(long*)( lVar12 + 0x10 ) = lVar6;
                     }
                     Memory::free_static(pvVar10, false);
                     iVar8 = *(int*)pauVar11[1] + -1;
                     *(int*)pauVar11[1] = iVar8;
                  } else {
                     _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                     iVar8 = *(int*)pauVar11[1];
                  }
               } while ( iVar8 != 0 );
               goto LAB_0010b88d;
            }
         }
      }
   }
   LAB_0010b897:pSVar14 = this + 0x168;
   do {
      pvVar10 = *(void**)( pSVar14 + 8 );
      if (pvVar10 != (void*)0x0) {
         if (*(uint*)pSVar14 != 0) {
            lVar12 = 0;
            while (true) {
               lVar6 = *(long*)( (long)pvVar10 + lVar12 * 0x18 + 0x10 );
               if (lVar6 != 0) {
                  LOCK();
                  plVar1 = (long*)( lVar6 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar6 = *(long*)( (long)pvVar10 + lVar12 * 0x18 + 0x10 );
                     *(undefined8*)( (long)pvVar10 + lVar12 * 0x18 + 0x10 ) = 0;
                     Memory::free_static((void*)( lVar6 + -0x10 ), false);
                  }
               }
               if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar10 + lVar12 * 0x18 + 8 ) != 0 )) {
                  StringName::unref();
               }
               lVar12 = lVar12 + 1;
               if (*(uint*)pSVar14 <= (uint)lVar12) break;
               pvVar10 = *(void**)( pSVar14 + 8 );
            };
            pvVar10 = *(void**)( pSVar14 + 8 );
            *(uint*)pSVar14 = 0;
            if (pvVar10 == (void*)0x0) goto LAB_0010b938;
         }
         Memory::free_static(pvVar10, false);
      }
      LAB_0010b938:pSVar14 = pSVar14 + -0x10;
   } while ( pSVar14 != this + 0x138 );
   pvVar10 = *(void**)( this + 0x138 );
   if (pvVar10 != (void*)0x0) {
      if (*(int*)( this + 0x130 ) != 0) {
         lVar12 = 0;
         do {
            plVar1 = (long*)( (long)pvVar10 + lVar12 * 8 );
            if (*plVar1 != 0) {
               LOCK();
               plVar2 = (long*)( *plVar1 + -0x10 );
               *plVar2 = *plVar2 + -1;
               UNLOCK();
               if (*plVar2 == 0) {
                  lVar6 = *plVar1;
                  *plVar1 = 0;
                  Memory::free_static((void*)( lVar6 + -0x10 ), false);
               }
               pvVar10 = *(void**)( this + 0x138 );
            }
            lVar12 = lVar12 + 1;
         } while ( (uint)lVar12 < *(uint*)( this + 0x130 ) );
         *(undefined4*)( this + 0x130 ) = 0;
         if (pvVar10 == (void*)0x0) goto LAB_0010b9b7;
      }
      Memory::free_static(pvVar10, false);
   }
   LAB_0010b9b7:if (*(long*)( this + 0x128 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x128 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar12 = *(long*)( this + 0x128 );
         *(undefined8*)( this + 0x128 ) = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
      }
   }
   if (*(long*)( this + 0x120 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x120 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar12 = *(long*)( this + 0x120 );
         *(undefined8*)( this + 0x120 ) = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
      }
   }
   if (*(long*)( this + 0x118 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x118 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar12 = *(long*)( this + 0x118 );
         *(undefined8*)( this + 0x118 ) = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
      }
   }
   RID_Alloc<ShaderRD::Version,false>::~RID_Alloc((RID_Alloc<ShaderRD::Version,false>*)( this + 0xb8 ));
   CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform>*)( this + 0x88 ));
   if (*(long*)( this + 0x78 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x78 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar12 = *(long*)( this + 0x78 );
         *(undefined8*)( this + 0x78 ) = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
      }
   }
   pvVar10 = *(void**)( this + 0x48 );
   if (pvVar10 != (void*)0x0) {
      if (*(int*)( this + 0x6c ) != 0) {
         uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x68 ) * 4 );
         if (uVar4 == 0) {
            *(undefined4*)( this + 0x6c ) = 0;
            *(undefined1(*) [16])( this + 0x58 ) = (undefined1[16])0x0;
         } else {
            lVar12 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x50 ) + lVar12 ) != 0) {
                  pvVar10 = *(void**)( (long)pvVar10 + lVar12 * 2 );
                  *(int*)( *(long*)( this + 0x50 ) + lVar12 ) = 0;
                  if (*(void**)( (long)pvVar10 + 0x20 ) != (void*)0x0) {
                     if (*(int*)( (long)pvVar10 + 0x18 ) != 0) {
                        *(undefined4*)( (long)pvVar10 + 0x18 ) = 0;
                     }
                     Memory::free_static(*(void**)( (long)pvVar10 + 0x20 ), false);
                  }
                  Memory::free_static(pvVar10, false);
                  pvVar10 = *(void**)( this + 0x48 );
                  *(undefined8*)( (long)pvVar10 + lVar12 * 2 ) = 0;
               }
               lVar12 = lVar12 + 4;
            } while ( (ulong)uVar4 << 2 != lVar12 );
            *(undefined4*)( this + 0x6c ) = 0;
            *(undefined1(*) [16])( this + 0x58 ) = (undefined1[16])0x0;
            if (pvVar10 == (void*)0x0) goto LAB_0010bad6;
         }
      }
      Memory::free_static(pvVar10, false);
      Memory::free_static(*(void**)( this + 0x50 ), false);
   }
   LAB_0010bad6:if (*(long*)( this + 0x38 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x38 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar12 = *(long*)( this + 0x38 );
         *(undefined8*)( this + 0x38 ) = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
      }
   }
   if (*(long*)( this + 0x28 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x28 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar12 = *(long*)( this + 0x28 );
         *(undefined8*)( this + 0x28 ) = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
      }
   }
   CowData<ShaderRD::VariantDefine>::_unref((CowData<ShaderRD::VariantDefine>*)( this + 0x18 ));
   if (*(long*)( this + 8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar12 = *(long*)( this + 8 );
         *(undefined8*)( this + 8 ) = 0;
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
            return;
         }
         goto LAB_0010c068;
      }
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_0010c068:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* ShaderRD::~ShaderRD() */void ShaderRD::~ShaderRD(ShaderRD *this) {
   ~ShaderRD(this)
   ;;
   operator_delete(this, 0x178);
   return;
}/* CowData<ShaderRD::VariantDefine>::_copy_on_write() [clone .isra.0] */void CowData<ShaderRD::VariantDefine>::_copy_on_write(CowData<ShaderRD::VariantDefine> *this) {
   undefined4 uVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   ulong uVar7;
   undefined4 *puVar8;
   long lVar9;
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
   if (lVar2 * 0x18 != 0) {
      uVar7 = lVar2 * 0x18 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
   }
   puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
   if (puVar5 != (undefined8*)0x0) {
      lVar9 = 0;
      *puVar5 = 1;
      puVar5[1] = lVar2;
      puVar6 = puVar5 + 2;
      if (lVar2 != 0) {
         do {
            puVar8 = (undefined4*)( (long)puVar6 + *(long*)this + ( -0x10 - (long)puVar5 ) );
            uVar1 = *puVar8;
            puVar6[1] = 0;
            lVar3 = *(long*)( puVar8 + 2 );
            *(undefined4*)puVar6 = uVar1;
            if (lVar3 != 0) {
               CowData<char>::_ref((CowData<char>*)( puVar6 + 1 ), (CowData*)( puVar8 + 2 ));
            }
            lVar9 = lVar9 + 1;
            *(undefined1*)( puVar6 + 2 ) = *(undefined1*)( puVar8 + 4 );
            puVar6 = puVar6 + 3;
         } while ( lVar2 != lVar9 );
      }
      _unref(this);
      *(undefined8**)this = puVar5 + 2;
      return;
   }
   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}/* Vector<ShaderRD::VariantDefine>::push_back(ShaderRD::VariantDefine) [clone .isra.0] */void Vector<ShaderRD::VariantDefine>::push_back(Vector<ShaderRD::VariantDefine> *this, undefined4 *param_2) {
   undefined4 *puVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   if (*(long*)( this + 8 ) == 0) {
      lVar3 = 1;
   } else {
      lVar3 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }
   iVar2 = CowData<ShaderRD::VariantDefine>::resize<false>((CowData<ShaderRD::VariantDefine>*)( this + 8 ), lVar3);
   if (iVar2 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar4 = -1;
         lVar3 = 0;
      } else {
         lVar3 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar4 = lVar3 + -1;
         if (-1 < lVar4) {
            CowData<ShaderRD::VariantDefine>::_copy_on_write((CowData<ShaderRD::VariantDefine>*)( this + 8 ));
            puVar1 = (undefined4*)( *(long*)( this + 8 ) + lVar4 * 0x18 );
            *puVar1 = *param_2;
            if (*(long*)( puVar1 + 2 ) != *(long*)( param_2 + 2 )) {
               CowData<char>::_ref((CowData<char>*)( puVar1 + 2 ), (CowData*)( param_2 + 2 ));
            }
            *(undefined1*)( puVar1 + 4 ) = *(undefined1*)( param_2 + 4 );
            return;
         }
      }
      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar4, lVar3, "p_index", "size()", "", false, false);
      return;
   }
   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}/* Vector<unsigned int>::push_back(unsigned int) [clone .isra.0] */void Vector<unsigned_int>::push_back(Vector<unsigned_int> *this, uint param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   } else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }
   iVar1 = CowData<unsigned_int>::resize<false>((CowData<unsigned_int>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      } else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<unsigned_int>::_copy_on_write((CowData<unsigned_int>*)( this + 8 ));
            *(uint*)( *(long*)( this + 8 ) + lVar3 * 4 ) = param_1;
            return;
         }
      }
      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }
   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}/* Vector<bool>::push_back(bool) [clone .isra.0] */void Vector<bool>::push_back(Vector<bool> *this, bool param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar3 = 1;
   } else {
      lVar3 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }
   iVar1 = CowData<bool>::resize<false>((CowData<bool>*)( this + 8 ), lVar3);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar2 = -1;
         lVar3 = 0;
      } else {
         lVar3 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar2 = lVar3 + -1;
         if (-1 < lVar2) {
            CowData<bool>::_copy_on_write((CowData<bool>*)( this + 8 ));
            *(bool*)( *(long*)( this + 8 ) + -1 + lVar3 ) = param_1;
            return;
         }
      }
      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar2, lVar3, "p_index", "size()", "", false, false);
      return;
   }
   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}/* ShaderRD::initialize(Vector<String> const&, String const&, Vector<RenderingDevice::Uniform>
   const&) */void ShaderRD::initialize(ShaderRD *this, Vector *param_1, String *param_2, Vector *param_3) {
   long *plVar1;
   uint uVar2;
   code *pcVar3;
   ulong uVar4;
   uint *puVar5;
   long lVar6;
   char *pcVar7;
   ulong uVar8;
   undefined8 uVar9;
   long lVar10;
   undefined8 *puVar11;
   long in_FS_OFFSET;
   bool bVar12;
   undefined1 auVar13[16];
   LocalVector *this_00;
   long *plVar14;
   undefined4 local_64;
   long local_60;
   ulong local_58;
   long local_50;
   undefined1 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x88 ) != *(long*)( param_3 + 8 )) {
      CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform>*)( this + 0x88 ));
      if (*(long*)( param_3 + 8 ) != 0) {
         plVar14 = (long*)( *(long*)( param_3 + 8 ) + -0x10 );
         do {
            lVar6 = *plVar14;
            if (lVar6 == 0) goto LAB_0010c596;
            LOCK();
            lVar10 = *plVar14;
            bVar12 = lVar6 == lVar10;
            if (bVar12) {
               *plVar14 = lVar6 + 1;
               lVar10 = lVar6;
            }
            UNLOCK();
         } while ( !bVar12 );
         if (lVar10 != -1) {
            *(undefined8*)( this + 0x88 ) = *(undefined8*)( param_3 + 8 );
         }
      }
   }
   LAB_0010c596:if (( *(long*)( this + 0x18 ) != 0 ) && ( *(long*)( *(long*)( this + 0x18 ) + -8 ) != 0 )) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar9 = 0x302;
         pcVar7 = "Condition \"variant_defines.size()\" is true.";
         LAB_0010c91b:_err_print_error("initialize", "servers/rendering/renderer_rd/shader_rd.cpp", uVar9, pcVar7, 0, 0);
         return;
      }
      goto LAB_0010c998;
   }
   if (*(long*)( param_1 + 8 ) == 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar9 = 0x303;
         pcVar7 = "Condition \"p_variant_defines.is_empty()\" is true.";
         goto LAB_0010c91b;
      }
      goto LAB_0010c998;
   }
   String::utf8();
   uVar4 = local_58;
   uVar8 = *(ulong*)( this + 8 );
   if (uVar8 == local_58) {
      if (uVar8 != 0) {
         LOCK();
         plVar14 = (long*)( uVar8 - 0x10 );
         *plVar14 = *plVar14 + -1;
         UNLOCK();
         if (*plVar14 == 0) {
            local_58 = 0;
            Memory::free_static((void*)( uVar4 - 0x10 ), false);
         }
      }
   } else {
      if (uVar8 != 0) {
         LOCK();
         plVar14 = (long*)( uVar8 - 0x10 );
         *plVar14 = *plVar14 + -1;
         UNLOCK();
         if (*plVar14 == 0) {
            lVar6 = *(long*)( this + 8 );
            *(undefined8*)( this + 8 ) = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }
      }
      *(ulong*)( this + 8 ) = local_58;
   }
   plVar14 = &local_60;
   this_00 = (LocalVector*)( this + 0x40 );
   local_58 = 0;
   local_50 = 0;
   local_64 = 0;
   HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>::insert((int*)plVar14, this_00, SUB81(&local_64, 0));
   Vector<bool>::push_back((Vector<bool>*)( this + 0x70 ), true);
   lVar6 = *(long*)( param_1 + 8 );
   for (lVar10 = 0; ( lVar6 != 0 && ( lVar10 < *(long*)( lVar6 + -8 ) ) ); lVar10 = lVar10 + 1) {
      local_58 = 0;
      local_50 = 0;
      local_48 = 1;
      String::utf8();
      lVar6 = local_60;
      if (local_60 == 0) {
         Vector<ShaderRD::VariantDefine>::push_back((Vector<ShaderRD::VariantDefine>*)( this + 0x10 ), &local_58);
      } else {
         local_50 = local_60;
         Vector<ShaderRD::VariantDefine>::push_back((Vector<ShaderRD::VariantDefine>*)( this + 0x10 ));
         LOCK();
         plVar1 = (long*)( lVar6 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_50 + -0x10 ), false);
         }
      }
      Vector<bool>::push_back((Vector<bool>*)( this + 0x20 ), true);
      Vector<unsigned_int>::push_back((Vector<unsigned_int>*)( this + 0x30 ), 0);
      local_58 = local_58 & 0xffffffff00000000;
      puVar5 = (uint*)HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>::operator []((HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>*)this_00, (int*)&local_58);
      uVar2 = *puVar5;
      if (uVar2 == puVar5[1]) {
         uVar8 = ( ulong )(uVar2 * 2);
         if (uVar2 * 2 == 0) {
            uVar8 = 1;
         }
         puVar5[1] = (uint)uVar8;
         lVar6 = Memory::realloc_static(*(void**)( puVar5 + 2 ), uVar8 * 4, false);
         *(long*)( puVar5 + 2 ) = lVar6;
         if (lVar6 == 0) {
            _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         uVar2 = *puVar5;
      } else {
         lVar6 = *(long*)( puVar5 + 2 );
      }
      *puVar5 = uVar2 + 1;
      *(int*)( lVar6 + (ulong)uVar2 * 4 ) = (int)lVar10;
      lVar6 = *(long*)( param_1 + 8 );
   }
   if (( shader_cache_dir == 0 ) || ( *(uint*)( shader_cache_dir + -8 ) < 2 )) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      goto LAB_0010c998;
   }
   if (*(uint*)( this + 0x130 ) < 2) {
      if (*(uint*)( this + 0x130 ) == 0) {
         puVar11 = *(undefined8**)( this + 0x138 );
         if (*(int*)( this + 0x134 ) == 0) {
            *(undefined4*)( this + 0x134 ) = 1;
            auVar13 = Memory::realloc_static(puVar11, 8, false);
            puVar11 = auVar13._0_8_;
            *(undefined8**)( this + 0x138 ) = puVar11;
            if (puVar11 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0, auVar13._8_8_, this_00, plVar14);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }
            if (*(int*)( this + 0x130 ) != 0) goto LAB_0010c813;
         }
         *puVar11 = 0;
         goto LAB_0010c813;
      }
   } else {
      lVar6 = 0;
      do {
         lVar6 = lVar6 + 1;
         plVar14 = (long*)( *(long*)( this + 0x138 ) + lVar6 * 8 );
         if (*plVar14 != 0) {
            LOCK();
            plVar1 = (long*)( *plVar14 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar10 = *plVar14;
               *plVar14 = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
            }
         }
      } while ( (int)lVar6 + 1U < *(uint*)( this + 0x130 ) );
      LAB_0010c813:*(undefined4*)( this + 0x130 ) = 1;
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _initialize_cache(this);
      return;
   }
   LAB_0010c998:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* ShaderRD::initialize(Vector<ShaderRD::VariantDefine> const&, String const&) */void ShaderRD::initialize(Vector *param_1, String *param_2) {
   long *plVar1;
   undefined4 *puVar2;
   int *piVar3;
   long lVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   code *pcVar12;
   uint uVar13;
   int iVar14;
   long lVar15;
   ulong uVar16;
   String *pSVar17;
   int *piVar18;
   undefined8 *puVar19;
   undefined8 *puVar20;
   char *pcVar21;
   long lVar22;
   ulong uVar23;
   undefined8 uVar24;
   long *plVar25;
   uint uVar26;
   long lVar27;
   uint uVar28;
   CowData<bool> *this;
   uint *puVar29;
   String *pSVar30;
   CowData<bool> *pCVar31;
   Vector *__s;
   ulong uVar32;
   uint uVar33;
   long in_FS_OFFSET;
   bool bVar34;
   undefined1 auVar35[16];
   uint local_9c;
   int local_60[2];
   long local_58;
   long local_50;
   undefined1 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( param_1 + 0x18 ) != 0 ) && ( *(long*)( *(long*)( param_1 + 0x18 ) + -8 ) != 0 )) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar24 = 0x341;
         pcVar21 = "Condition \"variant_defines.size()\" is true.";
         LAB_0010ceb7:_err_print_error("initialize", "servers/rendering/renderer_rd/shader_rd.cpp", uVar24, pcVar21, 0, 0);
         return;
      }
      goto LAB_0010d2e7;
   }
   if (*(long*)( param_2 + 8 ) == 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar24 = 0x342;
         pcVar21 = "Condition \"p_variant_defines.is_empty()\" is true.";
         goto LAB_0010ceb7;
      }
      goto LAB_0010d2e7;
   }
   String::utf8();
   lVar15 = local_58;
   lVar22 = *(long*)( param_1 + 8 );
   if (lVar22 == local_58) {
      if (lVar22 != 0) {
         LOCK();
         plVar25 = (long*)( lVar22 + -0x10 );
         *plVar25 = *plVar25 + -1;
         UNLOCK();
         if (*plVar25 == 0) {
            local_58 = 0;
            Memory::free_static((void*)( lVar15 + -0x10 ), false);
         }
      }
   } else {
      if (lVar22 != 0) {
         LOCK();
         plVar25 = (long*)( lVar22 + -0x10 );
         *plVar25 = *plVar25 + -1;
         UNLOCK();
         if (*plVar25 == 0) {
            lVar22 = *(long*)( param_1 + 8 );
            *(undefined8*)( param_1 + 8 ) = 0;
            Memory::free_static((void*)( lVar22 + -0x10 ), false);
         }
      }
      *(long*)( param_1 + 8 ) = local_58;
   }
   lVar22 = *(long*)( param_2 + 8 );
   if (lVar22 == 0) {
      if (*(long*)( param_1 + 0x78 ) == 0) {
         local_9c = 0;
         uVar23 = 0;
         uVar26 = 1;
         lVar22 = 1;
         LAB_0010d20b:CowData<bool>::_copy_on_write((CowData<bool>*)( param_1 + 0x78 ));
         LAB_0010d227:lVar15 = 0;
         LAB_0010d22a:puVar20 = (undefined8*)Memory::alloc_static(uVar23 + 0x11, false);
         if (puVar20 == (undefined8*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         } else {
            puVar19 = puVar20 + 2;
            *puVar20 = 1;
            puVar20[1] = 0;
            *(undefined8**)( param_1 + 0x78 ) = puVar19;
            lVar27 = 0;
            LAB_0010d1c4:__s = (Vector*)( (long)puVar19 + lVar15 );
            pSVar30 = (String*)0x0;
            memset(__s, 0, lVar22 - lVar27);
            lVar15 = *(long*)( param_1 + 0x78 );
            if (lVar15 == 0) {
               initialize(__s, pSVar30);
               return;
            }
            LAB_0010d000:*(long*)( lVar15 + -8 ) = lVar22;
         }
      } else {
         lVar15 = *(long*)( *(long*)( param_1 + 0x78 ) + -8 );
         if (lVar15 != 1) {
            local_9c = 0;
            pSVar30 = (String*)0x1;
            uVar23 = 0;
            lVar22 = 1;
            uVar26 = 1;
            LAB_0010cf5d:this(CowData<bool> * )(param_1 + 0x78);
            pCVar31 = this;
            CowData<bool>::_copy_on_write(this);
            if (lVar15 == 0) goto LAB_0010d227;
            uVar16 = lVar15 - 1U | lVar15 - 1U >> 1;
            uVar16 = uVar16 | uVar16 >> 2;
            uVar16 = uVar16 | uVar16 >> 4;
            uVar16 = uVar16 | uVar16 >> 8;
            uVar16 = uVar16 | uVar16 >> 0x10;
            pSVar17 = (String*)( ( uVar16 | uVar16 >> 0x20 ) + 1 );
            if (lVar15 < lVar22) {
               lVar27 = lVar15;
               if (pSVar17 == pSVar30) {
                  puVar19 = *(undefined8**)( param_1 + 0x78 );
               } else {
                  if (lVar15 == 0) goto LAB_0010d22a;
                  iVar14 = CowData<bool>::_realloc(this, (long)pSVar30);
                  if (iVar14 != 0) goto LAB_0010d004;
                  puVar19 = *(undefined8**)( param_1 + 0x78 );
               }
               goto LAB_0010d1c4;
            }
            if (( pSVar17 != pSVar30 ) && ( iVar14 = CowData<bool>::_realloc(this, (long)pSVar30) ),pCVar31 = this,iVar14 != 0) goto LAB_0010d004;
            lVar15 = *(long*)( param_1 + 0x78 );
            if (lVar15 == 0) {
               initialize((Vector*)pCVar31, pSVar30);
               return;
            }
            goto LAB_0010d000;
         }
         local_9c = 0;
         uVar26 = 1;
      }
   } else {
      lVar15 = *(long*)( lVar22 + -8 );
      local_9c = 0;
      for (lVar27 = 0; lVar27 < lVar15; lVar27 = lVar27 + 1) {
         lVar4 = lVar27 * 0x18;
         puVar2 = (undefined4*)( lVar22 + lVar4 );
         local_50 = 0;
         local_58 = CONCAT44(local_58._4_4_, *puVar2);
         plVar25 = (long*)( *(long*)( puVar2 + 2 ) + -0x10 );
         if (*(long*)( puVar2 + 2 ) == 0) {
            local_48 = *(undefined1*)( puVar2 + 4 );
            Vector<ShaderRD::VariantDefine>::push_back((Vector<ShaderRD::VariantDefine>*)( param_1 + 0x10 ), &local_58);
         } else {
            do {
               lVar22 = *plVar25;
               if (lVar22 == 0) goto LAB_0010cafa;
               LOCK();
               lVar15 = *plVar25;
               bVar34 = lVar22 == lVar15;
               if (bVar34) {
                  *plVar25 = lVar22 + 1;
                  lVar15 = lVar22;
               }
               UNLOCK();
            } while ( !bVar34 );
            if (lVar15 != -1) {
               local_50 = *(long*)( puVar2 + 2 );
            }
            LAB_0010cafa:lVar22 = local_50;
            local_48 = *(undefined1*)( puVar2 + 4 );
            Vector<ShaderRD::VariantDefine>::push_back((Vector<ShaderRD::VariantDefine>*)( param_1 + 0x10 ));
            if (lVar22 != 0) {
               LOCK();
               plVar25 = (long*)( lVar22 + -0x10 );
               *plVar25 = *plVar25 + -1;
               UNLOCK();
               if (*plVar25 == 0) {
                  Memory::free_static((void*)( local_50 + -0x10 ), false);
               }
            }
         }
         Vector<bool>::push_back((Vector<bool>*)( param_1 + 0x20 ), true);
         lVar22 = *(long*)( param_2 + 8 );
         if (lVar22 == 0) {
            LAB_0010cda0:lVar15 = 0;
            LAB_0010cda6:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar27, lVar15, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar12 = (code*)invalidInstructionException();
            ( *pcVar12 )();
         }
         lVar15 = *(long*)( lVar22 + -8 );
         if (lVar15 <= lVar27) goto LAB_0010cda6;
         Vector<unsigned_int>::push_back((Vector<unsigned_int>*)( param_1 + 0x30 ), *(uint*)( lVar22 + lVar27 * 0x18 ));
         lVar22 = *(long*)( param_2 + 8 );
         if (lVar22 == 0) goto LAB_0010cda0;
         lVar15 = *(long*)( lVar22 + -8 );
         if (lVar15 <= lVar27) goto LAB_0010cda6;
         puVar29 = (uint*)( lVar4 + lVar22 );
         uVar26 = *puVar29;
         if (( *(long*)( param_1 + 0x48 ) != 0 ) && ( *(int*)( param_1 + 0x6c ) != 0 )) {
            uVar23 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 0x68 ) * 8 );
            uVar13 = ( uVar26 >> 0x10 ^ uVar26 ) * -0x7a143595;
            uVar13 = ( uVar13 ^ uVar13 >> 0xd ) * -0x3d4d51cb;
            uVar28 = uVar13 ^ uVar13 >> 0x10;
            if (uVar13 == uVar13 >> 0x10) {
               uVar28 = 1;
               uVar16 = uVar23;
            } else {
               uVar16 = uVar28 * uVar23;
            }
            uVar32 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x68 ) * 4 ));
            auVar35._8_8_ = 0;
            auVar35._0_8_ = uVar32;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar16;
            lVar22 = SUB168(auVar35 * auVar8, 8);
            uVar13 = *(uint*)( *(long*)( param_1 + 0x50 ) + lVar22 * 4 );
            iVar14 = SUB164(auVar35 * auVar8, 8);
            if (uVar13 != 0) {
               uVar33 = 0;
               do {
                  if (( uVar13 == uVar28 ) && ( uVar26 == *(uint*)( *(long*)( *(long*)( param_1 + 0x48 ) + lVar22 * 8 ) + 0x10 ) )) goto LAB_0010cd12;
                  uVar33 = uVar33 + 1;
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = ( iVar14 + 1 ) * uVar23;
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = uVar32;
                  lVar22 = SUB168(auVar5 * auVar9, 8);
                  uVar13 = *(uint*)( *(long*)( param_1 + 0x50 ) + lVar22 * 4 );
                  iVar14 = SUB164(auVar5 * auVar9, 8);
               } while ( ( uVar13 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = uVar13 * uVar23,auVar10._8_8_ = 0,auVar10._0_8_ = uVar32,auVar7._8_8_ = 0,auVar7._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x68 ) * 4 ) + iVar14 ) - SUB164(auVar6 * auVar10, 8) ) * uVar23,auVar11._8_8_ = 0,auVar11._0_8_ = uVar32,uVar33 <= SUB164(auVar7 * auVar11, 8) );
            }
         }
         local_58 = 0;
         local_50 = 0;
         HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>::insert(local_60, (LocalVector*)( param_1 + 0x40 ), SUB81(puVar29, 0));
         lVar22 = *(long*)( param_2 + 8 );
         if (lVar22 == 0) goto LAB_0010cda0;
         lVar15 = *(long*)( lVar22 + -8 );
         if (lVar15 <= lVar27) goto LAB_0010cda6;
         puVar29 = (uint*)( lVar4 + lVar22 );
         LAB_0010cd12:puVar29 = (uint*)HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>::operator []((HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>*)( param_1 + 0x40 ), (int*)puVar29);
         uVar26 = *puVar29;
         if (uVar26 == puVar29[1]) {
            uVar23 = ( ulong )(uVar26 * 2);
            if (uVar26 * 2 == 0) {
               uVar23 = 1;
            }
            puVar29[1] = (uint)uVar23;
            lVar22 = Memory::realloc_static(*(void**)( puVar29 + 2 ), uVar23 * 4, false);
            *(long*)( puVar29 + 2 ) = lVar22;
            if (lVar22 == 0) {
               _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar12 = (code*)invalidInstructionException();
               ( *pcVar12 )();
            }
            uVar26 = *puVar29;
         } else {
            lVar22 = *(long*)( puVar29 + 2 );
         }
         *puVar29 = uVar26 + 1;
         *(int*)( lVar22 + (ulong)uVar26 * 4 ) = (int)lVar27;
         lVar22 = *(long*)( param_2 + 8 );
         if (lVar22 == 0) goto LAB_0010cda0;
         lVar15 = *(long*)( lVar22 + -8 );
         if (lVar15 <= lVar27) goto LAB_0010cda6;
         uVar26 = *(uint*)( lVar22 + lVar27 * 0x18 );
         if ((int)uVar26 <= (int)local_9c) {
            uVar26 = local_9c;
         }
         local_9c = uVar26;
      }
      uVar26 = local_9c + 1;
      lVar22 = (long)(int)uVar26;
      if ((int)uVar26 < 0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      } else {
         lVar27 = *(long*)( param_1 + 0x78 );
         if (lVar27 == 0) {
            if (uVar26 != 0) {
               uVar23 = lVar22 - 1U >> 1 | lVar22 - 1U;
               uVar23 = uVar23 >> 2 | uVar23;
               uVar23 = uVar23 >> 4 | uVar23;
               uVar23 = uVar23 >> 8 | uVar23;
               uVar23 = uVar23 >> 0x10 | uVar23;
               goto LAB_0010d20b;
            }
            LAB_0010d334:uVar26 = 0;
         } else {
            lVar15 = *(long*)( lVar27 + -8 );
            if (lVar22 != lVar15) {
               if (uVar26 != 0) {
                  uVar23 = lVar22 - 1U >> 1 | lVar22 - 1U;
                  uVar23 = uVar23 >> 2 | uVar23;
                  uVar23 = uVar23 >> 4 | uVar23;
                  uVar23 = uVar23 >> 8 | uVar23;
                  uVar23 = uVar23 >> 0x10 | uVar23;
                  pSVar30 = (String*)( uVar23 + 1 );
                  goto LAB_0010cf5d;
               }
               LOCK();
               plVar25 = (long*)( lVar27 + -0x10 );
               *plVar25 = *plVar25 + -1;
               UNLOCK();
               if (*plVar25 != 0) {
                  *(undefined8*)( param_1 + 0x78 ) = 0;
                  goto LAB_0010d334;
               }
               lVar22 = *(long*)( param_1 + 0x78 );
               *(undefined8*)( param_1 + 0x78 ) = 0;
               uVar26 = 0;
               Memory::free_static((void*)( lVar22 + -0x10 ), false);
            }
         }
      }
   }
   LAB_0010d004:CowData<bool>::_copy_on_write((CowData<bool>*)( param_1 + 0x78 ));
   piVar18 = *(int**)( param_2 + 8 );
   lVar22 = *(long*)( param_1 + 0x78 );
   if (( piVar18 != (int*)0x0 ) && ( 0 < *(long*)( piVar18 + -2 ) )) {
      piVar3 = piVar18 + *(long*)( piVar18 + -2 ) * 6;
      do {
         if ((char)piVar18[4] != '\0') {
            *(undefined1*)( lVar22 + *piVar18 ) = 1;
         }
         piVar18 = piVar18 + 6;
      } while ( piVar3 != piVar18 );
   }
   if (( shader_cache_dir == 0 ) || ( *(uint*)( shader_cache_dir + -8 ) < 2 )) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      goto LAB_0010d2e7;
   }
   uVar13 = *(uint*)( param_1 + 0x130 );
   if (uVar26 < uVar13) {
      lVar22 = (ulong)uVar26 << 3;
      uVar13 = uVar26;
      do {
         plVar25 = (long*)( *(long*)( param_1 + 0x138 ) + lVar22 );
         if (*plVar25 != 0) {
            LOCK();
            plVar1 = (long*)( *plVar25 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar15 = *plVar25;
               *plVar25 = 0;
               Memory::free_static((void*)( lVar15 + -0x10 ), false);
            }
         }
         uVar13 = uVar13 + 1;
         lVar22 = lVar22 + 8;
      } while ( uVar13 < *(uint*)( param_1 + 0x130 ) );
      LAB_0010d121:*(uint*)( param_1 + 0x130 ) = uVar26;
   } else if (uVar13 < uVar26) {
      if (*(uint*)( param_1 + 0x134 ) < uVar26) {
         local_9c = local_9c >> 1 | local_9c;
         local_9c = local_9c | local_9c >> 2;
         local_9c = local_9c | local_9c >> 4;
         local_9c = local_9c >> 8 | local_9c;
         uVar13 = ( local_9c >> 0x10 | local_9c ) + 1;
         *(uint*)( param_1 + 0x134 ) = uVar13;
         auVar35 = Memory::realloc_static(*(void**)( param_1 + 0x138 ), (ulong)uVar13 * 8, false);
         *(long*)( param_1 + 0x138 ) = auVar35._0_8_;
         if (auVar35._0_8_ == 0) {
            _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0, auVar35._8_8_);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar12 = (code*)invalidInstructionException();
            ( *pcVar12 )();
         }
         uVar13 = *(uint*)( param_1 + 0x130 );
         if (uVar26 <= uVar13) goto LAB_0010d121;
      }
      memset((void*)( *(long*)( param_1 + 0x138 ) + (ulong)uVar13 * 8 ), 0, ( ulong )(( uVar26 - 1 ) - uVar13) * 8 + 8);
      goto LAB_0010d121;
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _initialize_cache((ShaderRD*)param_1);
      return;
   }
   LAB_0010d2e7:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* CowData<RenderingServer::ShaderNativeSourceCode::Version>::_copy_on_write() [clone .isra.0] */void CowData<RenderingServer::ShaderNativeSourceCode::Version>::_copy_on_write(CowData<RenderingServer::ShaderNativeSourceCode::Version> *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   undefined8 *puVar5;
   long lVar6;
   CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage> *this_00;
   ulong uVar7;
   long lVar8;
   long lVar9;
   bool bVar10;
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
   if (lVar2 * 0x10 != 0) {
      uVar7 = lVar2 * 0x10 - 1;
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
   this_00 = (CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage>*)( puVar5 + 3 );
   lVar9 = 0;
   *puVar5 = 1;
   puVar5[1] = lVar2;
   if (lVar2 != 0) {
      do {
         lVar8 = lVar9 * 0x10 + *(long*)this;
         *(undefined8*)this_00 = 0;
         if (*(long*)( lVar8 + 8 ) != 0) {
            CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage>::_unref(this_00);
            if (*(long*)( lVar8 + 8 ) != 0) {
               plVar1 = (long*)( *(long*)( lVar8 + 8 ) + -0x10 );
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_0010d57a;
                  LOCK();
                  lVar6 = *plVar1;
                  bVar10 = lVar3 == lVar6;
                  if (bVar10) {
                     *plVar1 = lVar3 + 1;
                     lVar6 = lVar3;
                  }
                  UNLOCK();
               } while ( !bVar10 );
               if (lVar6 != -1) {
                  *(undefined8*)this_00 = *(undefined8*)( lVar8 + 8 );
               }
            }
         }
         LAB_0010d57a:lVar9 = lVar9 + 1;
         this_00 = this_00 + 0x10;
      } while ( lVar2 != lVar9 );
   }
   _unref(this);
   *(undefined8**)this = puVar5 + 2;
   return;
}/* CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage>::_copy_on_write() [clone
   .isra.0] */void CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage>::_copy_on_write(CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage> *this) {
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   CowData *pCVar4;
   ulong uVar5;
   CowData<char32_t> *this_00;
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
   if (puVar3 != (undefined8*)0x0) {
      lVar6 = 0;
      *puVar3 = 1;
      puVar3[1] = lVar1;
      this_00 = (CowData<char32_t>*)( puVar3 + 2 );
      if (lVar1 != 0) {
         do {
            pCVar4 = (CowData*)( lVar6 * 0x10 + *(long*)this );
            *(undefined8*)this_00 = 0;
            if (*(long*)pCVar4 != 0) {
               CowData<char32_t>::_ref(this_00, pCVar4);
            }
            *(undefined8*)( this_00 + 8 ) = 0;
            if (*(long*)( pCVar4 + 8 ) != 0) {
               CowData<char32_t>::_ref(this_00 + 8, pCVar4 + 8);
            }
            lVar6 = lVar6 + 1;
            this_00 = this_00 + 0x10;
         } while ( lVar1 != lVar6 );
      }
      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar3 + 2 );
      return;
   }
   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}/* Vector<RenderingServer::ShaderNativeSourceCode::Version::Stage>::push_back(RenderingServer::ShaderNativeSourceCode::Version::Stage)
   [clone .isra.0] */void Vector<RenderingServer::ShaderNativeSourceCode::Version::Stage>::push_back(Vector<RenderingServer::ShaderNativeSourceCode::Version::Stage> *this, CowData *param_2) {
   int iVar1;
   long lVar2;
   CowData<char32_t> *this_00;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar3 = 1;
   } else {
      lVar3 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }
   iVar1 = CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage>::resize<false>((CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage>*)( this + 8 ), lVar3);
   if (iVar1 != 0) {
      _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
      return;
   }
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = -1;
      lVar3 = 0;
   } else {
      lVar3 = *(long*)( *(long*)( this + 8 ) + -8 );
      lVar2 = lVar3 + -1;
      if (-1 < lVar2) {
         CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage>::_copy_on_write((CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage>*)( this + 8 ));
         this_00 = (CowData<char32_t>*)( lVar2 * 0x10 + *(long*)( this + 8 ) );
         if (*(long*)this_00 != *(long*)param_2) {
            CowData<char32_t>::_ref(this_00, param_2);
         }
         if (*(long*)( this_00 + 8 ) == *(long*)( param_2 + 8 )) {
            return;
         }
         CowData<char32_t>::_ref(this_00 + 8, param_2 + 8);
         return;
      }
   }
   _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar2, lVar3, "p_index", "size()", "", false, false);
   return;
}/* ShaderRD::version_get_native_source_code(RID) */long ShaderRD::version_get_native_source_code(long param_1, ShaderRD *param_2, ulong param_3) {
   CowData<RenderingServer::ShaderNativeSourceCode::Version> *this;
   long *plVar1;
   code *pcVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined8 uVar6;
   char *pcVar7;
   ulong uVar8;
   undefined8 *puVar9;
   Vector<RenderingServer::ShaderNativeSourceCode::Version::Stage> *pVVar10;
   undefined8 *puVar11;
   Version *pVVar12;
   undefined8 *puVar13;
   long lVar14;
   uint uVar15;
   long lVar16;
   long in_FS_OFFSET;
   StrRange *local_d0;
   undefined1 local_98[16];
   char *local_88;
   long local_80;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 == 0 ) || ( *(uint*)( param_2 + 0xd4 ) <= (uint)param_3 )) {
      LAB_0010e0a0:*(undefined8*)( param_1 + 8 ) = 0;
   } else {
      pVVar12 = (Version*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0xd0 ) ) * 0xa0 + *(long*)( *(long*)( param_2 + 0xc0 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0xd0 ) ) * 8 ) );
      if (*(int*)( pVVar12 + 0x98 ) == (int)( param_3 >> 0x20 )) {
         lVar16 = *(long*)( param_2 + 0x18 );
         *(undefined8*)( param_1 + 8 ) = 0;
         if (lVar16 == 0) goto LAB_0010e0d0;
         lVar16 = *(long*)( lVar16 + -8 );
         this(CowData<RenderingServer::ShaderNativeSourceCode::Version> * )(param_1 + 8);
         if (lVar16 < 0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
            puVar13 = *(undefined8**)( param_1 + 8 );
            goto LAB_0010e269;
         }
         if (lVar16 == 0) goto LAB_0010e0d0;
         CowData<RenderingServer::ShaderNativeSourceCode::Version>::_copy_on_write(this);
         if (( lVar16 * 0x10 == 0 ) || ( uVar8 = lVar16 * 0x10 - 1 ),uVar8 = uVar8 | uVar8 >> 1,uVar8 = uVar8 | uVar8 >> 2,uVar8 = uVar8 | uVar8 >> 4,uVar8 = uVar8 | uVar8 >> 8,uVar8 = uVar8 | uVar8 >> 0x10,uVar8 = uVar8 | uVar8 >> 0x20,uVar8 == 0xffffffffffffffff) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
            puVar13 = *(undefined8**)( param_1 + 8 );
            LAB_0010e269:if (puVar13 == (undefined8*)0x0) goto LAB_0010e0d0;
         } else {
            puVar9 = (undefined8*)Memory::alloc_static(uVar8 + 0x11, false);
            if (puVar9 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               puVar13 = *(undefined8**)( param_1 + 8 );
               goto LAB_0010e269;
            }
            puVar13 = puVar9 + 2;
            *puVar9 = 1;
            *(undefined8**)( param_1 + 8 ) = puVar13;
            puVar11 = puVar13;
            if (( (int)( puVar9 + lVar16 * 2 + 2 ) - (int)puVar13 & 0x10U ) == 0) goto LAB_0010d9c8;
            puVar9[3] = 0;
            puVar11 = puVar9;
            while (puVar11 = puVar11 + 4,puVar9 + lVar16 * 2 + 2 != puVar11) {
               LAB_0010d9c8:puVar11[1] = 0;
               puVar11[3] = 0;
            };
            puVar9[1] = lVar16;
         }
         lVar16 = 0;
         do {
            if ((long)puVar13[-1] <= lVar16) break;
            uVar15 = (uint)lVar16;
            if (param_2[0x110] != (ShaderRD)0x0) goto LAB_0010da14;
            local_78 = 0;
            local_70 = 0;
            local_68 = 0;
            local_60 = 0;
            local_58 = 0;
            local_50 = 0;
            local_48 = 0;
            _build_variant_code(param_2, (StringBuilder*)&local_78, uVar15, pVVar12, (StageTemplate*)( param_2 + 0x148 ));
            local_88 = _LC162;
            local_98 = (undefined1[16])0x0;
            local_80 = 6;
            String::parse_latin1((StrRange*)local_98);
            StringBuilder::as_string();
            pcVar7 = local_88;
            uVar6 = local_98._8_8_;
            if ((char*)local_98._8_8_ == local_88) {
               if ((char*)local_98._8_8_ == (char*)0x0) goto LAB_0010dd2b;
               LOCK();
               plVar1 = (long*)( local_98._8_8_ + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 != 0) goto LAB_0010dd2b;
               local_88 = (char*)0x0;
               Memory::free_static(pcVar7 + -0x10, false);
               lVar14 = *(long*)( param_1 + 8 );
               if (lVar14 != 0) goto LAB_0010dd38;
               LAB_0010e140:lVar14 = 0;
               LAB_0010e143:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar16, lVar14, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }
            if ((char*)local_98._8_8_ != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_98._8_8_ + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_98._8_8_ = 0;
                  Memory::free_static((char*)( uVar6 + -0x10 ), false);
               }
            }
            local_98._8_8_ = local_88;
            LAB_0010dd2b:lVar14 = *(long*)( param_1 + 8 );
            if (lVar14 == 0) goto LAB_0010e140;
            LAB_0010dd38:local_d0 = (StrRange*)local_98;
            lVar14 = *(long*)( lVar14 + -8 );
            if (lVar14 <= lVar16) goto LAB_0010e143;
            CowData<RenderingServer::ShaderNativeSourceCode::Version>::_copy_on_write(this);
            local_88 = (char*)0x0;
            pVVar10 = (Vector<RenderingServer::ShaderNativeSourceCode::Version::Stage>*)( lVar16 * 0x10 + *(long*)( param_1 + 8 ) );
            if (local_98._0_8_ != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, (CowData*)local_d0);
            }
            local_80 = 0;
            if (local_98._8_8_ == 0) {
               Vector<RenderingServer::ShaderNativeSourceCode::Version::Stage>::push_back(pVVar10);
            } else {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)( local_98 + 8 ));
               lVar14 = local_80;
               Vector<RenderingServer::ShaderNativeSourceCode::Version::Stage>::push_back(pVVar10);
               if (lVar14 != 0) {
                  LOCK();
                  plVar1 = (long*)( lVar14 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static((void*)( local_80 + -0x10 ), false);
                  }
               }
            }
            if (local_88 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( (long)local_88 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static((void*)( (long)local_88 + -0x10 ), false);
               }
            }
            uVar6 = local_98._8_8_;
            if (local_98._8_8_ != 0) {
               LOCK();
               plVar1 = (long*)( local_98._8_8_ + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_98._8_8_ = 0;
                  Memory::free_static((void*)( uVar6 + -0x10 ), false);
               }
            }
            uVar6 = local_98._0_8_;
            if (local_98._0_8_ != 0) {
               LOCK();
               plVar1 = (long*)( local_98._0_8_ + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = local_98._8_8_;
                  local_98 = auVar4 << 0x40;
                  Memory::free_static((void*)( uVar6 + -0x10 ), false);
               }
            }
            StringBuilder::~StringBuilder((StringBuilder*)&local_78);
            if (param_2[0x110] == (ShaderRD)0x0) {
               local_78 = 0;
               local_70 = 0;
               local_68 = 0;
               local_60 = 0;
               local_58 = 0;
               local_50 = 0;
               local_48 = 0;
               _build_variant_code(param_2, (StringBuilder*)&local_78, uVar15, pVVar12, (StageTemplate*)( param_2 + 0x158 ));
               local_98 = (undefined1[16])0x0;
               local_88 = "fragment";
               local_80 = 8;
               String::parse_latin1(local_d0);
               StringBuilder::as_string();
               pcVar7 = local_88;
               uVar6 = local_98._8_8_;
               if ((char*)local_98._8_8_ == local_88) {
                  if ((char*)local_98._8_8_ != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_98._8_8_ + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_88 = (char*)0x0;
                        Memory::free_static(pcVar7 + -0x10, false);
                     }
                  }
               } else {
                  if ((char*)local_98._8_8_ != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_98._8_8_ + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_98._8_8_ = 0;
                        Memory::free_static((char*)( uVar6 + -0x10 ), false);
                     }
                  }
                  local_98._8_8_ = local_88;
               }
               if (*(long*)( param_1 + 8 ) == 0) goto LAB_0010e140;
               lVar14 = *(long*)( *(long*)( param_1 + 8 ) + -8 );
               if (lVar14 <= lVar16) goto LAB_0010e143;
               CowData<RenderingServer::ShaderNativeSourceCode::Version>::_copy_on_write(this);
               pVVar10 = (Vector<RenderingServer::ShaderNativeSourceCode::Version::Stage>*)( lVar16 * 0x10 + *(long*)( param_1 + 8 ) );
               local_88 = (char*)0x0;
               if (local_98._0_8_ != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, (CowData*)local_d0);
               }
               local_80 = 0;
               if (local_98._8_8_ == 0) {
                  Vector<RenderingServer::ShaderNativeSourceCode::Version::Stage>::push_back(pVVar10);
               } else {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)( local_98 + 8 ));
                  lVar14 = local_80;
                  Vector<RenderingServer::ShaderNativeSourceCode::Version::Stage>::push_back(pVVar10);
                  if (lVar14 != 0) {
                     LOCK();
                     plVar1 = (long*)( lVar14 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        Memory::free_static((void*)( local_80 + -0x10 ), false);
                     }
                  }
               }
               if (local_88 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( (long)local_88 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static((void*)( (long)local_88 + -0x10 ), false);
                  }
               }
               uVar6 = local_98._8_8_;
               if (local_98._8_8_ != 0) {
                  LOCK();
                  plVar1 = (long*)( local_98._8_8_ + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_98._8_8_ = 0;
                     Memory::free_static((void*)( uVar6 + -0x10 ), false);
                  }
               }
               uVar6 = local_98._0_8_;
               if (local_98._0_8_ != 0) {
                  LOCK();
                  plVar1 = (long*)( local_98._0_8_ + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     auVar5._8_8_ = 0;
                     auVar5._0_8_ = local_98._8_8_;
                     local_98 = auVar5 << 0x40;
                     Memory::free_static((void*)( uVar6 + -0x10 ), false);
                  }
               }
               StringBuilder::~StringBuilder((StringBuilder*)&local_78);
               if (param_2[0x110] != (ShaderRD)0x0) goto LAB_0010da14;
            } else {
               LAB_0010da14:local_d0 = (StrRange*)local_98;
               local_78 = 0;
               local_70 = 0;
               local_68 = 0;
               local_60 = 0;
               local_58 = 0;
               local_50 = 0;
               local_48 = 0;
               _build_variant_code(param_2, (StringBuilder*)&local_78, uVar15, pVVar12, (StageTemplate*)( param_2 + 0x168 ));
               local_98 = (undefined1[16])0x0;
               local_88 = "compute";
               local_80 = 7;
               String::parse_latin1(local_d0);
               StringBuilder::as_string();
               pcVar7 = local_88;
               uVar6 = local_98._8_8_;
               if ((char*)local_98._8_8_ == local_88) {
                  if ((char*)local_98._8_8_ != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_98._8_8_ + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_88 = (char*)0x0;
                        Memory::free_static(pcVar7 + -0x10, false);
                     }
                  }
               } else {
                  if ((char*)local_98._8_8_ != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_98._8_8_ + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_98._8_8_ = 0;
                        Memory::free_static((char*)( uVar6 + -0x10 ), false);
                     }
                  }
                  local_98._8_8_ = local_88;
               }
               if (*(long*)( param_1 + 8 ) == 0) goto LAB_0010e140;
               lVar14 = *(long*)( *(long*)( param_1 + 8 ) + -8 );
               if (lVar14 <= lVar16) goto LAB_0010e143;
               CowData<RenderingServer::ShaderNativeSourceCode::Version>::_copy_on_write(this);
               pVVar10 = (Vector<RenderingServer::ShaderNativeSourceCode::Version::Stage>*)( lVar16 * 0x10 + *(long*)( param_1 + 8 ) );
               local_88 = (char*)0x0;
               if (local_98._0_8_ != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, (CowData*)local_d0);
               }
               local_80 = 0;
               if (local_98._8_8_ == 0) {
                  Vector<RenderingServer::ShaderNativeSourceCode::Version::Stage>::push_back(pVVar10);
               } else {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)( local_98 + 8 ));
                  lVar14 = local_80;
                  Vector<RenderingServer::ShaderNativeSourceCode::Version::Stage>::push_back(pVVar10);
                  if (lVar14 != 0) {
                     LOCK();
                     plVar1 = (long*)( lVar14 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        Memory::free_static((void*)( local_80 + -0x10 ), false);
                     }
                  }
               }
               if (local_88 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( (long)local_88 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static((void*)( (long)local_88 + -0x10 ), false);
                  }
               }
               uVar6 = local_98._8_8_;
               if (local_98._8_8_ != 0) {
                  LOCK();
                  plVar1 = (long*)( local_98._8_8_ + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_98._8_8_ = 0;
                     Memory::free_static((void*)( uVar6 + -0x10 ), false);
                  }
               }
               uVar6 = local_98._0_8_;
               if (local_98._0_8_ != 0) {
                  LOCK();
                  plVar1 = (long*)( local_98._0_8_ + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     auVar3._8_8_ = 0;
                     auVar3._0_8_ = local_98._8_8_;
                     local_98 = auVar3 << 0x40;
                     Memory::free_static((void*)( uVar6 + -0x10 ), false);
                  }
               }
               StringBuilder::~StringBuilder((StringBuilder*)&local_78);
            }
            puVar13 = *(undefined8**)( param_1 + 8 );
            lVar16 = lVar16 + 1;
         } while ( puVar13 != (undefined8*)0x0 );
         goto LAB_0010e0d0;
      }
      if (0x7ffffffe < *(int*)( pVVar12 + 0x98 ) + 0x80000000U) goto LAB_0010e0a0;
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      *(undefined8*)( param_1 + 8 ) = 0;
   }
   _err_print_error("version_get_native_source_code", "servers/rendering/renderer_rd/shader_rd.cpp", 0x165, "Parameter \"version\" is null.", 0, 0);
   LAB_0010e0d0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ShaderRD::version_create() */undefined8 ShaderRD::version_create(ShaderRD *this) {
   long *plVar1;
   uint uVar2;
   void *pvVar3;
   long lVar4;
   long lVar5;
   undefined8 uVar6;
   long lVar7;
   void *pvVar8;
   undefined8 *puVar9;
   long in_FS_OFFSET;
   undefined1 local_d8[16];
   undefined1 local_c8[16];
   undefined1 local_b0[16];
   undefined1 local_a0[16];
   undefined8 local_90;
   undefined8 local_80[2];
   long local_70;
   undefined8 local_60[2];
   undefined8 local_50;
   undefined2 local_48;
   undefined1 local_46;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0x6c ) == 0) {
      uVar6 = 0;
      _err_print_error("version_create", "servers/rendering/renderer_rd/shader_rd.cpp", 0xab, "Condition \"group_to_variant_map.is_empty()\" is true. Returning: RID()", 0, 0);
      goto LAB_0010e54c;
   }
   local_90 = 2;
   local_48 = 0x100;
   local_d8 = (undefined1[16])0x0;
   local_c8 = (undefined1[16])0x0;
   local_b0 = (undefined1[16])0x0;
   local_a0 = (undefined1[16])0x0;
   local_80[0] = 0;
   local_70 = 0;
   local_60[0] = 0;
   local_50 = 0;
   local_46 = 1;
   uVar6 = RID_Alloc<ShaderRD::Version,false>::make_rid((RID_Alloc<ShaderRD::Version,false>*)( this + 0xb8 ), (Version*)local_d8);
   CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>>*)local_60);
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_70 + -0x10 ), false);
      }
   }
   CowData<CharString>::_unref((CowData<CharString>*)local_80);
   if ((void*)local_b0._0_8_ != (void*)0x0) {
      pvVar8 = (void*)local_b0._0_8_;
      if (( local_90._4_4_ != 0 ) && ( uVar2 = *(uint*)( hash_table_size_primes + ( local_90 & 0xffffffff ) * 4 ) ),uVar2 != 0) {
         lVar7 = 0;
         do {
            if (*(int*)( local_b0._8_8_ + lVar7 ) != 0) {
               lVar5 = lVar7 * 2;
               *(int*)( local_b0._8_8_ + lVar7 ) = 0;
               puVar9 = (undefined8*)( (long)pvVar8 + lVar5 );
               pvVar3 = (void*)*puVar9;
               if (*(long*)( (long)pvVar3 + 0x18 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( (long)pvVar3 + 0x18 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( (long)pvVar3 + 0x18 );
                     *(undefined8*)( (long)pvVar3 + 0x18 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                     puVar9 = (undefined8*)( local_b0._0_8_ + lVar5 );
                     pvVar8 = (void*)local_b0._0_8_;
                  } else {
                     puVar9 = (undefined8*)( local_b0._0_8_ + lVar5 );
                     pvVar8 = (void*)local_b0._0_8_;
                  }
               }
               if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                  StringName::unref();
               }
               Memory::free_static(pvVar3, false);
               *puVar9 = 0;
            }
            lVar7 = lVar7 + 4;
         } while ( lVar7 != (ulong)uVar2 << 2 );
         local_90 = local_90 & 0xffffffff;
         local_a0 = (undefined1[16])0x0;
         if (pvVar8 == (void*)0x0) goto LAB_0010e4fc;
      }
      Memory::free_static(pvVar8, false);
      Memory::free_static((void*)local_b0._8_8_, false);
   }
   LAB_0010e4fc:if (local_c8._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_c8._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_c8._8_8_ + -0x10 ), false);
      }
   }
   if (local_c8._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_c8._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_c8._0_8_ + -0x10 ), false);
      }
   }
   if (local_d8._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_d8._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_d8._8_8_ + -0x10 ), false);
      }
   }
   if (local_d8._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_d8._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_d8._0_8_ + -0x10 ), false);
      }
   }
   LAB_0010e54c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}/* StringName::~StringName() */void StringName::~StringName(StringName_conflict *this) {
   if (( configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }
   return;
}/* WorkerThreadPool::BaseTemplateUserdata::callback() */void WorkerThreadPool::BaseTemplateUserdata::callback(void) {
   return;
}/* WorkerThreadPool::GroupUserData<ShaderRD, void (ShaderRD::*)(unsigned int,
   ShaderRD::CompileData), ShaderRD::CompileData>::~GroupUserData() */void WorkerThreadPool::GroupUserData<ShaderRD,void(ShaderRD::*)(unsigned_int, ShaderRD::CompileData),ShaderRD::CompileData>::~GroupUserData(GroupUserData<ShaderRD,void(ShaderRD::*)(unsigned_int, ShaderRD::CompileData),ShaderRD::CompileData> *this) {
   return;
}/* WorkerThreadPool::GroupUserData<ShaderRD, void (ShaderRD::*)(unsigned int,
   ShaderRD::CompileData), ShaderRD::CompileData>::callback_indexed(unsigned int) */void WorkerThreadPool::GroupUserData<ShaderRD,void(ShaderRD::*)(unsigned_int, ShaderRD::CompileData),ShaderRD::CompileData>::callback_indexed(GroupUserData<ShaderRD,void(ShaderRD::*)(unsigned_int, ShaderRD::CompileData),ShaderRD::CompileData> *this, uint param_1) {
   code *UNRECOVERED_JUMPTABLE;
   UNRECOVERED_JUMPTABLE = *(code**)( this + 0x10 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( *(long*)( this + 0x18 ) + *(long*)( this + 8 ) ) + -1 );
   }
   /* WARNING: Could not recover jumptable at 0x0010e6ff. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *UNRECOVERED_JUMPTABLE )((long*)( *(long*)( this + 0x18 ) + *(long*)( this + 8 ) ), param_1, *(undefined8*)( this + 0x20 ), *(undefined8*)( this + 0x28 ), UNRECOVERED_JUMPTABLE);
   return;
}/* WorkerThreadPool::GroupUserData<ShaderRD, void (ShaderRD::*)(unsigned int,
   ShaderRD::CompileData), ShaderRD::CompileData>::~GroupUserData() */void WorkerThreadPool::GroupUserData<ShaderRD,void(ShaderRD::*)(unsigned_int, ShaderRD::CompileData),ShaderRD::CompileData>::~GroupUserData(GroupUserData<ShaderRD,void(ShaderRD::*)(unsigned_int, ShaderRD::CompileData),ShaderRD::CompileData> *this) {
   operator_delete(this, 0x30);
   return;
}/* CowData<unsigned int>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<unsigned_int>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<bool>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<bool>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<long>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<long>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<RID>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<RID>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<String>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<StringName>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<StringName>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<Vector<unsigned char> >::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Vector<unsigned_char>>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* Error CowData<Vector<unsigned char> >::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<Vector<unsigned_char>>::resize<false>(long param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<CharString>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<CharString>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<RenderingDeviceCommons::ShaderStageSPIRVData>::_copy_on_write() [clone .isra.0] [clone
   .cold] */void CowData<RenderingDeviceCommons::ShaderStageSPIRVData>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* ShaderRD::_load_from_cache(ShaderRD::Version*, int) [clone .cold] */void ShaderRD::_load_from_cache(Version *param_1, int param_2) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* ShaderRD::_initialize_version(ShaderRD::Version*) [clone .cold] */void ShaderRD::_initialize_version(Version *param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_0010f41a(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_0010f426(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}void FUN_0010f432(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<ShaderRD::VariantDefine>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<ShaderRD::VariantDefine>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* ShaderRD::initialize(Vector<ShaderRD::VariantDefine> const&, String const&) [clone .cold] */void ShaderRD::initialize(Vector *param_1, String *param_2) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<RenderingServer::ShaderNativeSourceCode::Version>::_copy_on_write() [clone .isra.0]
   [clone .cold] */void CowData<RenderingServer::ShaderNativeSourceCode::Version>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage>::_copy_on_write() [clone
   .isra.0] [clone .cold] */void CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* String::~String() */void String::~String(String *this) {
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
}/* StringBuilder::~StringBuilder() */void StringBuilder::~StringBuilder(StringBuilder *this) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   void *pvVar5;
   if (*(void**)( this + 0x30 ) != (void*)0x0) {
      if (*(int*)( this + 0x28 ) != 0) {
         *(undefined4*)( this + 0x28 ) = 0;
      }
      Memory::free_static(*(void**)( this + 0x30 ), false);
   }
   if (*(void**)( this + 0x20 ) != (void*)0x0) {
      if (*(int*)( this + 0x18 ) != 0) {
         *(undefined4*)( this + 0x18 ) = 0;
      }
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }
   pvVar5 = *(void**)( this + 0x10 );
   if (pvVar5 == (void*)0x0) {
      return;
   }
   if (*(int*)( this + 8 ) != 0) {
      lVar4 = 0;
      do {
         plVar2 = (long*)( (long)pvVar5 + lVar4 * 8 );
         if (*plVar2 != 0) {
            LOCK();
            plVar1 = (long*)( *plVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar3 = *plVar2;
               *plVar2 = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }
            pvVar5 = *(void**)( this + 0x10 );
         }
         lVar4 = lVar4 + 1;
      } while ( (uint)lVar4 < *(uint*)( this + 8 ) );
      *(undefined4*)( this + 8 ) = 0;
      if (pvVar5 == (void*)0x0) {
         return;
      }
   }
   Memory::free_static(pvVar5, false);
   return;
}/* CowData<char>::_unref() */void CowData<char>::_unref(CowData<char> *this) {
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
}/* WARNING: Removing unreachable block (ram,0x0010f7e0) *//* WARNING: Removing unreachable block (ram,0x0010f910) *//* WARNING: Removing unreachable block (ram,0x0010fa89) *//* WARNING: Removing unreachable block (ram,0x0010f91c) *//* WARNING: Removing unreachable block (ram,0x0010f926) *//* WARNING: Removing unreachable block (ram,0x0010fa6b) *//* WARNING: Removing unreachable block (ram,0x0010f932) *//* WARNING: Removing unreachable block (ram,0x0010f93c) *//* WARNING: Removing unreachable block (ram,0x0010fa4d) *//* WARNING: Removing unreachable block (ram,0x0010f948) *//* WARNING: Removing unreachable block (ram,0x0010f952) *//* WARNING: Removing unreachable block (ram,0x0010fa2f) *//* WARNING: Removing unreachable block (ram,0x0010f95e) *//* WARNING: Removing unreachable block (ram,0x0010f968) *//* WARNING: Removing unreachable block (ram,0x0010fa11) *//* WARNING: Removing unreachable block (ram,0x0010f974) *//* WARNING: Removing unreachable block (ram,0x0010f97e) *//* WARNING: Removing unreachable block (ram,0x0010f9f3) *//* WARNING: Removing unreachable block (ram,0x0010f986) *//* WARNING: Removing unreachable block (ram,0x0010f990) *//* WARNING: Removing unreachable block (ram,0x0010f9d8) *//* WARNING: Removing unreachable block (ram,0x0010f998) *//* WARNING: Removing unreachable block (ram,0x0010f9ae) *//* WARNING: Removing unreachable block (ram,0x0010f9ba) *//* String vformat<unsigned int, char const*>(String const&, unsigned int const, char const* const)
    */String *vformat<unsigned_int,char_const*>(String *param_1, uint param_2, char *param_3) {
   Variant *pVVar1;
   Variant *pVVar2;
   char *in_RCX;
   undefined4 in_register_00000034;
   int iVar3;
   long in_FS_OFFSET;
   Array local_d8[8];
   undefined8 local_d0[9];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_88, (uint)param_3);
   Variant::Variant(local_70, in_RCX);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, (bool*)CONCAT44(in_register_00000034, param_2));
   *(undefined8*)param_1 = local_d0[0];
   pVVar2 = (Variant*)local_40;
   Array::~Array(local_d8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }
   } while ( pVVar2 != local_88 );
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* CowData<unsigned char>::_unref() */void CowData<unsigned_char>::_unref(CowData<unsigned_char> *this) {
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
}/* CowData<String>::_unref() */void CowData<String>::_unref(CowData<String> *this) {
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
            } while ( lVar3 != lVar7 );
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
}/* Error CowData<String>::resize<false>(long) */undefined8 CowData<String>::resize<false>(CowData<String> *this, long param_1) {
   long *plVar1;
   long *plVar2;
   code *pcVar3;
   undefined8 *puVar4;
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
      lVar9 = 0;
      lVar5 = 0;
   } else {
      lVar9 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar9) {
         return 0;
      }
      if (param_1 == 0) {
         _unref(this);
         return 0;
      }
      _copy_on_write(this);
      lVar5 = lVar9 * 8;
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
      LAB_0010ff20:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }
   uVar6 = param_1 * 8 - 1;
   uVar6 = uVar6 >> 1 | uVar6;
   uVar6 = uVar6 | uVar6 >> 2;
   uVar6 = uVar6 | uVar6 >> 4;
   uVar6 = uVar6 | uVar6 >> 8;
   uVar6 = uVar6 | uVar6 >> 0x10;
   uVar6 = uVar6 | uVar6 >> 0x20;
   if (uVar6 == 0xffffffffffffffff) goto LAB_0010ff20;
   if (param_1 <= lVar9) {
      puVar7 = *(undefined8**)this;
      uVar8 = param_1;
      while (puVar7 != (undefined8*)0x0) {
         if ((ulong)puVar7[-1] <= uVar8) {
            LAB_0010fda9:if (uVar6 + 1 != lVar5) {
               puVar4 = (undefined8*)Memory::realloc_static(puVar7 + -2, uVar6 + 0x11, false);
               if (puVar4 == (undefined8*)0x0) goto LAB_0010ff4f;
               puVar7 = puVar4 + 2;
               *puVar4 = 1;
               *(undefined8**)this = puVar7;
            }
            puVar7[-1] = param_1;
            return 0;
         }
         while (true) {
            plVar2 = puVar7 + uVar8;
            if (*plVar2 != 0) break;
            uVar8 = uVar8 + 1;
            if ((ulong)puVar7[-1] <= uVar8) goto LAB_0010fda9;
         };
         LOCK();
         plVar1 = (long*)( *plVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar9 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void*)( lVar9 + -0x10 ), false);
         }
         uVar8 = uVar8 + 1;
         puVar7 = *(undefined8**)this;
      };
      LAB_0010ff9d:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }
   if (uVar6 + 1 == lVar5) {
      puVar7 = *(undefined8**)this;
      if (puVar7 == (undefined8*)0x0) goto LAB_0010ff9d;
      lVar9 = puVar7[-1];
      LAB_0010fe80:if (param_1 <= lVar9) goto LAB_0010fe35;
   } else {
      if (lVar9 != 0) {
         puVar4 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar6 + 0x11, false);
         if (puVar4 == (undefined8*)0x0) {
            LAB_0010ff4f:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
            return 6;
         }
         puVar7 = puVar4 + 2;
         *puVar4 = 1;
         *(undefined8**)this = puVar7;
         lVar9 = puVar4[1];
         goto LAB_0010fe80;
      }
      puVar4 = (undefined8*)Memory::alloc_static(uVar6 + 0x11, false);
      if (puVar4 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }
      puVar7 = puVar4 + 2;
      *puVar4 = 1;
      puVar4[1] = 0;
      *(undefined8**)this = puVar7;
      lVar9 = 0;
   }
   memset(puVar7 + lVar9, 0, ( param_1 - lVar9 ) * 8);
   LAB_0010fe35:puVar7[-1] = param_1;
   return 0;
}/* CowData<StringName>::_unref() */void CowData<StringName>::_unref(CowData<StringName> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   long *plVar4;
   long lVar5;
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
         lVar2 = plVar1[-1];
         *(undefined8*)this = 0;
         if (lVar2 != 0) {
            lVar5 = 0;
            plVar4 = plVar1;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar4 != 0 )) {
                  StringName::unref();
               }
               lVar5 = lVar5 + 1;
               plVar4 = plVar4 + 1;
            } while ( lVar2 != lVar5 );
         }
         Memory::free_static(plVar1 + -2, false);
         return;
      }
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }
   *(undefined8*)this = 0;
   return;
}/* Error CowData<StringName>::resize<false>(long) */undefined8 CowData<StringName>::resize<false>(CowData<StringName> *this, long param_1) {
   code *pcVar1;
   undefined8 *puVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   ulong uVar6;
   long lVar7;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }
   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }
      _copy_on_write(this);
      lVar7 = 0;
      lVar3 = 0;
   } else {
      lVar7 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar7) {
         return 0;
      }
      if (param_1 == 0) {
         _unref(this);
         return 0;
      }
      _copy_on_write(this);
      lVar3 = lVar7 * 8;
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
      LAB_00110300:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }
   uVar4 = param_1 * 8 - 1;
   uVar4 = uVar4 >> 1 | uVar4;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   if (uVar4 == 0xffffffffffffffff) goto LAB_00110300;
   if (param_1 <= lVar7) {
      puVar5 = *(undefined8**)this;
      uVar6 = param_1;
      while (puVar5 != (undefined8*)0x0) {
         if ((ulong)puVar5[-1] <= uVar6) {
            LAB_001101aa:if (uVar4 + 1 != lVar3) {
               puVar2 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar4 + 0x11, false);
               if (puVar2 == (undefined8*)0x0) goto LAB_0011032f;
               puVar5 = puVar2 + 2;
               *puVar2 = 1;
               *(undefined8**)this = puVar5;
            }
            puVar5[-1] = param_1;
            return 0;
         }
         while (( StringName::configured == '\0' || ( puVar5[uVar6] == 0 ) )) {
            uVar6 = uVar6 + 1;
            if ((ulong)puVar5[-1] <= uVar6) goto LAB_001101aa;
         };
         uVar6 = uVar6 + 1;
         StringName::unref();
         puVar5 = *(undefined8**)this;
      };
      LAB_0011017a:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }
   if (uVar4 + 1 == lVar3) {
      puVar5 = *(undefined8**)this;
      if (puVar5 == (undefined8*)0x0) goto LAB_0011017a;
      lVar7 = puVar5[-1];
      LAB_00110260:if (param_1 <= lVar7) goto LAB_0011020d;
   } else {
      if (lVar7 != 0) {
         puVar2 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar4 + 0x11, false);
         if (puVar2 == (undefined8*)0x0) {
            LAB_0011032f:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
            return 6;
         }
         puVar5 = puVar2 + 2;
         *puVar2 = 1;
         *(undefined8**)this = puVar5;
         lVar7 = puVar2[1];
         goto LAB_00110260;
      }
      puVar2 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
      if (puVar2 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }
      puVar5 = puVar2 + 2;
      *puVar2 = 1;
      puVar2[1] = 0;
      *(undefined8**)this = puVar5;
      lVar7 = 0;
   }
   memset(puVar5 + lVar7, 0, ( param_1 - lVar7 ) * 8);
   LAB_0011020d:puVar5[-1] = param_1;
   return 0;
}/* CowData<RID>::_realloc(long) */undefined8 CowData<RID>::_realloc(CowData<RID> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }
   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}/* CowData<Vector<unsigned char> >::_unref() */void CowData<Vector<unsigned_char>>::_unref(CowData<Vector<unsigned_char>> *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long lVar6;
   long lVar7;
   if (*(long*)this == 0) {
      return;
   }
   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      lVar2 = *(long*)this;
      if (lVar2 != 0) {
         lVar3 = *(long*)( lVar2 + -8 );
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar7 = 0;
            lVar6 = lVar2;
            do {
               if (*(long*)( lVar6 + 8 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 8 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( lVar6 + 8 );
                     *(undefined8*)( lVar6 + 8 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }
               }
               lVar7 = lVar7 + 1;
               lVar6 = lVar6 + 0x10;
            } while ( lVar3 != lVar7 );
         }
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }
      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }
   *(undefined8*)this = 0;
   return;
}/* CowData<RenderingDevice::Uniform>::_unref() */void CowData<RenderingDevice::Uniform>::_unref(CowData<RenderingDevice::Uniform> *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long lVar6;
   long lVar7;
   if (*(long*)this == 0) {
      return;
   }
   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      lVar2 = *(long*)this;
      if (lVar2 != 0) {
         lVar3 = *(long*)( lVar2 + -8 );
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar7 = 0;
            lVar6 = lVar2;
            do {
               if (*(long*)( lVar6 + 0x20 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 0x20 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( lVar6 + 0x20 );
                     *(undefined8*)( lVar6 + 0x20 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }
               }
               lVar7 = lVar7 + 1;
               lVar6 = lVar6 + 0x28;
            } while ( lVar3 != lVar7 );
         }
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }
      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }
   *(undefined8*)this = 0;
   return;
}/* CowData<CharString>::_unref() */void CowData<CharString>::_unref(CowData<CharString> *this) {
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
            } while ( lVar3 != lVar7 );
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
}/* ShaderRD::Version::~Version() */void ShaderRD::Version::~Version(Version *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   void *pvVar5;
   if (*(long*)( this + 0x88 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x88 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar4 = *(long*)( this + 0x88 );
         *(undefined8*)( this + 0x88 ) = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }
   }
   CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>>*)( this + 0x78 ));
   if (*(long*)( this + 0x68 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x68 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar4 = *(long*)( this + 0x68 );
         *(undefined8*)( this + 0x68 ) = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }
   }
   CowData<CharString>::_unref((CowData<CharString>*)( this + 0x58 ));
   pvVar5 = *(void**)( this + 0x28 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( this + 0x4c ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x48 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x4c ) = 0;
            *(undefined1(*) [16])( this + 0x38 ) = (undefined1[16])0x0;
         } else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x30 ) + lVar4 ) != 0) {
                  pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                  *(int*)( *(long*)( this + 0x30 ) + lVar4 ) = 0;
                  if (*(long*)( (long)pvVar5 + 0x18 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x18 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x18 );
                        *(undefined8*)( (long)pvVar5 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }
                  }
                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar5 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }
                  Memory::free_static(pvVar5, false);
                  pvVar5 = *(void**)( this + 0x28 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }
               lVar4 = lVar4 + 4;
            } while ( lVar4 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x4c ) = 0;
            *(undefined1(*) [16])( this + 0x38 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_00110741;
         }
      }
      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x30 ), false);
   }
   LAB_00110741:if (*(long*)( this + 0x18 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x18 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar4 = *(long*)( this + 0x18 );
         *(undefined8*)( this + 0x18 ) = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }
   }
   if (*(long*)( this + 0x10 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x10 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar4 = *(long*)( this + 0x10 );
         *(undefined8*)( this + 0x10 ) = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }
   }
   if (*(long*)( this + 8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar4 = *(long*)( this + 8 );
         *(undefined8*)( this + 8 ) = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }
   }
   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar4 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
         return;
      }
   }
   return;
}/* RID_Alloc<ShaderRD::Version, false>::~RID_Alloc() */void RID_Alloc<ShaderRD::Version,false>::~RID_Alloc(RID_Alloc<ShaderRD::Version,false> *this) {
   long *plVar1;
   uint uVar2;
   int iVar3;
   long lVar4;
   char *pcVar5;
   ulong uVar6;
   long *plVar7;
   ulong uVar8;
   void *pvVar9;
   undefined8 *puVar10;
   ulong uVar11;
   long lVar12;
   long in_FS_OFFSET;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   uVar2 = *(uint*)( this + 0x20 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_00114818;
   if (uVar2 == 0) {
      uVar6 = ( ulong ) * (uint*)( this + 0x1c );
      uVar8 = ( ulong ) * (uint*)( this + 0x18 );
      puVar10 = *(undefined8**)( this + 8 );
      LAB_00110bfa:if ((uint)uVar6 < (uint)uVar8) goto LAB_00110c3b;
      lVar12 = 0;
      while (true) {
         Memory::free_static((void*)puVar10[lVar12], false);
         lVar4 = lVar12 * 8;
         lVar12 = lVar12 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar4 ), false);
         if (( uint )(uVar6 / uVar8) <= (uint)lVar12) break;
         puVar10 = *(undefined8**)( this + 8 );
      };
   } else {
      local_60 = 0;
      local_50 = 0x3b;
      local_58 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_60);
      vformat<unsigned_int,char_const*>((String*)&local_58, (uint)(StrRange*)&local_60, (char*)(ulong)uVar2);
      print_error((String*)&local_58);
      pcVar5 = local_58;
      if (local_58 == (char*)0x0) {
         LAB_0011098b:if (local_60 == 0) goto LAB_001109a1;
         LAB_00110995:lVar12 = local_60;
         LOCK();
         plVar7 = (long*)( local_60 + -0x10 );
         *plVar7 = *plVar7 + -1;
         UNLOCK();
         if (*plVar7 != 0) goto LAB_001109a1;
         local_60 = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
         iVar3 = *(int*)( this + 0x1c );
         uVar2 = *(uint*)( this + 0x18 );
         puVar10 = *(undefined8**)( this + 8 );
      } else {
         LOCK();
         plVar7 = (long*)( local_58 + -0x10 );
         *plVar7 = *plVar7 + -1;
         UNLOCK();
         if (*plVar7 != 0) goto LAB_0011098b;
         local_58 = (char*)0x0;
         Memory::free_static(pcVar5 + -0x10, false);
         if (local_60 != 0) goto LAB_00110995;
         LAB_001109a1:iVar3 = *(int*)( this + 0x1c );
         uVar2 = *(uint*)( this + 0x18 );
         puVar10 = *(undefined8**)( this + 8 );
      }
      if (iVar3 != 0) {
         uVar8 = (ulong)uVar2;
         uVar11 = 0;
         do {
            plVar7 = (long*)( ( uVar11 % uVar8 ) * 0xa0 + puVar10[uVar11 / uVar8] );
            if (-1 < (int)plVar7[0x13]) {
               if (plVar7[0x11] != 0) {
                  LOCK();
                  plVar1 = (long*)( plVar7[0x11] + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar12 = plVar7[0x11];
                     plVar7[0x11] = 0;
                     Memory::free_static((void*)( lVar12 + -0x10 ), false);
                  }
               }
               CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>>*)( plVar7 + 0xf ));
               if (plVar7[0xd] != 0) {
                  LOCK();
                  plVar1 = (long*)( plVar7[0xd] + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar12 = plVar7[0xd];
                     plVar7[0xd] = 0;
                     Memory::free_static((void*)( lVar12 + -0x10 ), false);
                  }
               }
               CowData<CharString>::_unref((CowData<CharString>*)( plVar7 + 0xb ));
               pvVar9 = (void*)plVar7[5];
               if (pvVar9 != (void*)0x0) {
                  if (*(int*)( (long)plVar7 + 0x4c ) != 0) {
                     uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( plVar7 + 9 ) * 4 );
                     if (uVar2 == 0) {
                        *(undefined4*)( (long)plVar7 + 0x4c ) = 0;
                        *(undefined1(*) [16])( plVar7 + 7 ) = (undefined1[16])0x0;
                     } else {
                        lVar12 = 0;
                        do {
                           if (*(int*)( plVar7[6] + lVar12 ) != 0) {
                              *(int*)( plVar7[6] + lVar12 ) = 0;
                              pvVar9 = *(void**)( (long)pvVar9 + lVar12 * 2 );
                              if (*(long*)( (long)pvVar9 + 0x18 ) != 0) {
                                 LOCK();
                                 plVar1 = (long*)( *(long*)( (long)pvVar9 + 0x18 ) + -0x10 );
                                 *plVar1 = *plVar1 + -1;
                                 UNLOCK();
                                 if (*plVar1 == 0) {
                                    lVar4 = *(long*)( (long)pvVar9 + 0x18 );
                                    *(undefined8*)( (long)pvVar9 + 0x18 ) = 0;
                                    Memory::free_static((void*)( lVar4 + -0x10 ), false);
                                 }
                              }
                              if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar9 + 0x10 ) != 0 )) {
                                 StringName::unref();
                              }
                              Memory::free_static(pvVar9, false);
                              pvVar9 = (void*)plVar7[5];
                              *(undefined8*)( (long)pvVar9 + lVar12 * 2 ) = 0;
                           }
                           lVar12 = lVar12 + 4;
                        } while ( (ulong)uVar2 << 2 != lVar12 );
                        *(undefined4*)( (long)plVar7 + 0x4c ) = 0;
                        *(undefined1(*) [16])( plVar7 + 7 ) = (undefined1[16])0x0;
                        if (pvVar9 == (void*)0x0) goto LAB_00110b33;
                     }
                  }
                  Memory::free_static(pvVar9, false);
                  Memory::free_static((void*)plVar7[6], false);
               }
               LAB_00110b33:if (plVar7[3] != 0) {
                  LOCK();
                  plVar1 = (long*)( plVar7[3] + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar12 = plVar7[3];
                     plVar7[3] = 0;
                     Memory::free_static((void*)( lVar12 + -0x10 ), false);
                  }
               }
               if (plVar7[2] != 0) {
                  LOCK();
                  plVar1 = (long*)( plVar7[2] + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar12 = plVar7[2];
                     plVar7[2] = 0;
                     Memory::free_static((void*)( lVar12 + -0x10 ), false);
                  }
               }
               if (plVar7[1] != 0) {
                  LOCK();
                  plVar1 = (long*)( plVar7[1] + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar12 = plVar7[1];
                     plVar7[1] = 0;
                     Memory::free_static((void*)( lVar12 + -0x10 ), false);
                  }
               }
               if (*plVar7 != 0) {
                  LOCK();
                  plVar1 = (long*)( *plVar7 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar12 = *plVar7;
                     *plVar7 = 0;
                     Memory::free_static((void*)( lVar12 + -0x10 ), false);
                  }
               }
               uVar8 = ( ulong ) * (uint*)( this + 0x18 );
               puVar10 = *(undefined8**)( this + 8 );
            }
            uVar6 = ( ulong ) * (uint*)( this + 0x1c );
            uVar11 = uVar11 + 1;
         } while ( uVar11 < uVar6 );
         goto LAB_00110bfa;
      }
      if (uVar2 != 0) goto LAB_00110c3b;
      Memory::free_static((void*)*puVar10, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }
   puVar10 = *(undefined8**)( this + 8 );
   LAB_00110c3b:if (puVar10 == (undefined8*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
   } else {
      Memory::free_static(puVar10, false);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(*(void**)( this + 0x10 ), false);
         return;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RID_Alloc<ShaderRD::Version, false>::~RID_Alloc() */void RID_Alloc<ShaderRD::Version,false>::~RID_Alloc(RID_Alloc<ShaderRD::Version,false> *this) {
   ~RID_Alloc(this)
   ;;
   operator_delete(this, 0x58);
   return;
}/* HashMap<int, LocalVector<int, unsigned int, false, false>, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int, LocalVector<int,
   unsigned int, false, false> > > >::_resize_and_rehash(unsigned int) */void HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>::_resize_and_rehash(HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>> *this, uint param_1) {
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
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
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
   *(undefined4*)( this + 0x2c ) = 0;
   uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   if (param_1 < 2) {
      param_1 = 2;
   }
   *(uint*)( this + 0x28 ) = param_1;
   uVar21 = *(uint*)( hash_table_size_primes + (ulong)param_1 * 4 );
   uVar22 = (ulong)uVar21;
   pvVar6 = *(void**)( this + 8 );
   pvVar7 = *(void**)( this + 0x10 );
   uVar26 = uVar22 * 4;
   uVar25 = uVar22 * 8;
   uVar18 = Memory::alloc_static(uVar26, false);
   *(undefined8*)( this + 0x10 ) = uVar18;
   __s_00 = (void*)Memory::alloc_static(uVar25, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar21 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar25 ) ) && ( __s_00 < (void*)( (long)__s + uVar26 ) )) {
         uVar26 = 0;
         do {
            *(undefined4*)( (long)__s + uVar26 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar26 * 8 ) = 0;
            uVar26 = uVar26 + 1;
         } while ( uVar22 != uVar26 );
      } else {
         memset(__s, 0, uVar26);
         memset(__s_00, 0, uVar25);
      }
   }
   if (uVar3 != 0) {
      uVar26 = 0;
      do {
         uVar21 = *(uint*)( (long)pvVar7 + uVar26 * 4 );
         if (uVar21 != 0) {
            uVar24 = 0;
            lVar8 = *(long*)( this + 0x10 );
            uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar25 = CONCAT44(0, uVar4);
            lVar9 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar21 * lVar9;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar25;
            lVar20 = SUB168(auVar10 * auVar14, 8);
            puVar1 = (uint*)( lVar8 + lVar20 * 4 );
            iVar19 = SUB164(auVar10 * auVar14, 8);
            uVar5 = *puVar1;
            uVar18 = *(undefined8*)( (long)pvVar6 + uVar26 * 8 );
            while (uVar5 != 0) {
               auVar11._8_8_ = 0;
               auVar11._0_8_ = (ulong)uVar5 * lVar9;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = uVar25;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(( uVar4 + iVar19 ) - SUB164(auVar11 * auVar15, 8)) * lVar9;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = uVar25;
               local_78 = SUB164(auVar12 * auVar16, 8);
               uVar23 = uVar18;
               if (local_78 < uVar24) {
                  *puVar1 = uVar21;
                  puVar2 = (undefined8*)( (long)__s_00 + lVar20 * 8 );
                  uVar23 = *puVar2;
                  *puVar2 = uVar18;
                  uVar21 = uVar5;
                  uVar24 = local_78;
               }
               uVar24 = uVar24 + 1;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(iVar19 + 1) * lVar9;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = uVar25;
               lVar20 = SUB168(auVar13 * auVar17, 8);
               puVar1 = (uint*)( lVar8 + lVar20 * 4 );
               iVar19 = SUB164(auVar13 * auVar17, 8);
               uVar18 = uVar23;
               uVar5 = *puVar1;
            };
            *(undefined8*)( (long)__s_00 + lVar20 * 8 ) = uVar18;
            *puVar1 = uVar21;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }
         uVar26 = uVar26 + 1;
      } while ( uVar26 != uVar3 );
      Memory::free_static(pvVar6, false);
      Memory::free_static(pvVar7, false);
      return;
   }
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<int, LocalVector<int, unsigned int, false, false>, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int, LocalVector<int,
   unsigned int, false, false> > > >::operator[](int const&) */undefined1[16];HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>::operator [](HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>
             *this,int*param_1)

{
  uint *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
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
  undefined1 auVar27[16](*, pauVar28)[16](*, pauVar32)[16](*, pauVar45)[16];
  undefined1 auVar46[16];
  undefined1 auVar47[16](ulong)(__s_00 = = (void*)0x0) {
   uVar38 = uVar41 * 4;
   uVar2 = uVar41 * 8;
   uVar33 = Memory::alloc_static(uVar38, false);
   *(undefined8*)( this + 0x10 ) = uVar33;
   __s_00 = (void*)Memory::alloc_static(uVar2, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar30 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar2 ) ) && ( __s_00 < (void*)( (long)__s + uVar38 ) )) {
         uVar38 = 0;
         do {
            *(undefined4*)( (long)__s + uVar38 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar38 * 8 ) = 0;
            uVar38 = uVar38 + 1;
         } while ( uVar41 != uVar38 );
         uVar31 = *param_1;
         iVar39 = *(int*)( this + 0x2c );
      } else {
         memset(__s, 0, uVar38);
         memset(__s_00, 0, uVar2);
         uVar31 = *param_1;
         iVar39 = *(int*)( this + 0x2c );
      }
      LAB_001114c5:if (iVar39 == 0) goto LAB_00111570;
      uVar38 = ( ulong ) * (uint*)( this + 0x28 );
      lVar42 = *(long*)( this + 0x10 );
      goto LAB_00111194;
   }
   uVar31 = *param_1;
   iVar39 = *(int*)( this + 0x2c );
   if (__s_00 != (void*)0x0) goto LAB_001114c5;
}else{iVar39 = *(int*)( this + 0x2c );if (iVar39 == 0) {
   LAB_00111570:iVar39 = 0;
} else {
   uVar2 = *(ulong*)( hash_table_size_primes_inv + uVar38 * 8 );
   uVar29 = ( uVar31 >> 0x10 ^ uVar31 ) * -0x7a143595;
   uVar29 = ( uVar29 ^ uVar29 >> 0xd ) * -0x3d4d51cb;
   uVar43 = uVar29 ^ uVar29 >> 0x10;
   if (uVar29 == uVar29 >> 0x10) {
      uVar43 = 1;
      uVar35 = uVar2;
   } else {
      uVar35 = uVar43 * uVar2;
   }
   auVar4._8_8_ = 0;
   auVar4._0_8_ = uVar41;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = uVar35;
   lVar36 = SUB168(auVar4 * auVar16, 8);
   lVar42 = *(long*)( this + 0x10 );
   uVar44 = SUB164(auVar4 * auVar16, 8);
   uVar29 = *(uint*)( lVar42 + lVar36 * 4 );
   if (uVar29 != 0) {
      uVar40 = 0;
      lVar37 = lVar36;
      do {
         if (( uVar43 == uVar29 ) && ( uVar31 == *(uint*)( *(long*)( (long)__s_00 + lVar36 * 8 ) + 0x10 ) )) {
            auVar46._0_8_ = *(long*)( (long)__s_00 + (ulong)uVar44 * 8 ) + 0x18;
            auVar46._8_8_ = lVar37;
            return auVar46;
         }
         uVar40 = uVar40 + 1;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = ( uVar44 + 1 ) * uVar2;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = uVar41;
         lVar36 = SUB168(auVar5 * auVar17, 8);
         uVar29 = *(uint*)( lVar42 + lVar36 * 4 );
         uVar44 = SUB164(auVar5 * auVar17, 8);
      } while ( ( uVar29 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = uVar29 * uVar2,auVar18._8_8_ = 0,auVar18._0_8_ = uVar41,auVar7._8_8_ = 0,auVar7._0_8_ = ( ( uVar30 + uVar44 ) - SUB164(auVar6 * auVar18, 8) ) * uVar2,auVar19._8_8_ = 0,auVar19._0_8_ = uVar41,lVar37 = SUB168(auVar7 * auVar19, 8),uVar40 <= SUB164(auVar7 * auVar19, 8) );
   }
   LAB_00111194:uVar35 = CONCAT44(0, *(uint*)( hash_table_size_primes + uVar38 * 4 ));
   uVar2 = *(ulong*)( hash_table_size_primes_inv + uVar38 * 8 );
   uVar30 = ( uVar31 >> 0x10 ^ uVar31 ) * -0x7a143595;
   uVar30 = ( uVar30 ^ uVar30 >> 0xd ) * -0x3d4d51cb;
   uVar29 = uVar30 ^ uVar30 >> 0x10;
   if (uVar30 == uVar30 >> 0x10) {
      uVar29 = 1;
      uVar34 = uVar2;
   } else {
      uVar34 = uVar29 * uVar2;
   }
   auVar8._8_8_ = 0;
   auVar8._0_8_ = uVar35;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = uVar34;
   lVar36 = SUB168(auVar8 * auVar20, 8);
   uVar30 = *(uint*)( lVar42 + lVar36 * 4 );
   uVar43 = SUB164(auVar8 * auVar20, 8);
   if (uVar30 != 0) {
      uVar44 = 0;
      lStack_78 = lVar36;
      do {
         if (( uVar29 == uVar30 ) && ( *(uint*)( *(long*)( (long)__s_00 + lVar36 * 8 ) + 0x10 ) == uVar31 )) {
            pauVar32 = *(undefined1(**) [16])( (long)__s_00 + (ulong)uVar43 * 8 );
            if (*(int*)( pauVar32[1] + 8 ) != 0) {
               *(undefined4*)( pauVar32[1] + 8 ) = 0;
            }
            goto LAB_0011141c;
         }
         uVar44 = uVar44 + 1;
         auVar9._8_8_ = 0;
         auVar9._0_8_ = ( uVar43 + 1 ) * uVar2;
         auVar21._8_8_ = 0;
         auVar21._0_8_ = uVar35;
         lVar36 = SUB168(auVar9 * auVar21, 8);
         uVar30 = *(uint*)( lVar42 + lVar36 * 4 );
         uVar43 = SUB164(auVar9 * auVar21, 8);
      } while ( ( uVar30 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = uVar30 * uVar2,auVar22._8_8_ = 0,auVar22._0_8_ = uVar35,auVar11._8_8_ = 0,auVar11._0_8_ = ( ( *(uint*)( hash_table_size_primes + uVar38 * 4 ) + uVar43 ) - SUB164(auVar10 * auVar22, 8) ) * uVar2,auVar23._8_8_ = 0,auVar23._0_8_ = uVar35,lStack_78 = SUB168(auVar11 * auVar23, 8),uVar44 <= SUB164(auVar11 * auVar23, 8) );
   }
}}if ((float)uVar41 * __LC88 < (float)( iVar39 + 1 )) {
   if (*(int*)( this + 0x28 ) == 0x1c) {
      pauVar32 = (undefined1(*) [16])0x0;
      lStack_78 = 0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0);
      goto LAB_0011141c;
   }
   _resize_and_rehash(this, *(int*)( this + 0x28 ) + 1);
}iVar39 = *param_1;pauVar32 = (undefined1(*) [16])operator_new(0x28, "");*(undefined8*)pauVar32[2] = 0;*(int*)pauVar32[1] = iVar39;*(undefined8*)( pauVar32[1] + 8 ) = 0;*pauVar32 = (undefined1[16])0x0;puVar3 = *(undefined8**)( this + 0x20 );if (puVar3 == (undefined8*)0x0) {
   *(undefined1(**) [16])( this + 0x18 ) = pauVar32;
} else {
   *puVar3 = pauVar32;
   *(undefined8**)( *pauVar32 + 8 ) = puVar3;
}*(undefined1(**) [16])( this + 0x20 ) = pauVar32;uVar31 = ( ( uint ) * param_1 >> 0x10 ^ *param_1 ) * -0x7a143595;uVar30 = ( uVar31 ^ uVar31 >> 0xd ) * -0x3d4d51cb;uVar31 = uVar30 ^ uVar30 >> 0x10;if (uVar30 == uVar30 >> 0x10) {
   uVar38 = 1;
   uVar31 = 1;
} else {
   uVar38 = (ulong)uVar31;
}uVar43 = 0;lVar42 = *(long*)( this + 0x10 );uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar41 = CONCAT44(0, uVar30);lVar36 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );auVar12._8_8_ = 0;auVar12._0_8_ = uVar38 * lVar36;auVar24._8_8_ = 0;auVar24._0_8_ = uVar41;lStack_78 = SUB168(auVar12 * auVar24, 8);lVar37 = *(long*)( this + 8 );puVar1 = (uint*)( lVar42 + lStack_78 * 4 );iVar39 = SUB164(auVar12 * auVar24, 8);uVar29 = *puVar1;pauVar28 = pauVar32;while (uVar29 != 0) {
   auVar13._8_8_ = 0;
   auVar13._0_8_ = (ulong)uVar29 * lVar36;
   auVar25._8_8_ = 0;
   auVar25._0_8_ = uVar41;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = ( ulong )(( uVar30 + iVar39 ) - SUB164(auVar13 * auVar25, 8)) * lVar36;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = uVar41;
   local_68 = SUB164(auVar14 * auVar26, 8);
   pauVar45 = pauVar28;
   if (local_68 < uVar43) {
      *puVar1 = uVar31;
      puVar3 = (undefined8*)( lVar37 + lStack_78 * 8 );
      pauVar45 = (undefined1(*) [16])*puVar3;
      *puVar3 = pauVar28;
      uVar31 = uVar29;
      uVar43 = local_68;
   }
   uVar43 = uVar43 + 1;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(iVar39 + 1) * lVar36;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar41;
   lStack_78 = SUB168(auVar15 * auVar27, 8);
   puVar1 = (uint*)( lVar42 + lStack_78 * 4 );
   iVar39 = SUB164(auVar15 * auVar27, 8);
   pauVar28 = pauVar45;
   uVar29 = *puVar1;
};*(undefined1(**) [16])( lVar37 + lStack_78 * 8 ) = pauVar28;*puVar1 = uVar31;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0011141c:auVar47._8_8_ = lStack_78;auVar47._0_8_ = pauVar32[1] + 8;return auVar47;}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<int, LocalVector<int, unsigned int, false, false>, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int, LocalVector<int,
   unsigned int, false, false> > > >::insert(int const&, LocalVector<int, unsigned int, false,
   false> const&, bool) */void HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>::insert(int *param_1, LocalVector *param_2, bool param_3) {
   undefined8 *puVar1;
   void *__s;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
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
   code *pcVar18;
   undefined1(*pauVar19)[16];
   uint uVar20;
   uint uVar21;
   uint uVar22;
   long lVar23;
   undefined1(*pauVar24)[16];
   undefined8 uVar25;
   void *pvVar26;
   long lVar27;
   uint *in_RCX;
   int iVar28;
   undefined7 in_register_00000011;
   uint *puVar29;
   ulong uVar30;
   long lVar31;
   long lVar32;
   ulong uVar33;
   char in_R8B;
   uint uVar34;
   ulong uVar35;
   uint uVar36;
   undefined1(*pauVar37)[16];
   uint local_68;
   puVar29 = (uint*)CONCAT71(in_register_00000011, param_3);
   pvVar26 = *(void**)( param_2 + 8 );
   uVar21 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   if (pvVar26 == (void*)0x0) {
      uVar30 = (ulong)uVar21;
      uVar33 = uVar30 * 4;
      uVar35 = uVar30 * 8;
      uVar25 = Memory::alloc_static(uVar33, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar25;
      pvVar26 = (void*)Memory::alloc_static(uVar35, false);
      *(void**)( param_2 + 8 ) = pvVar26;
      if (uVar21 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)pvVar26 + uVar35 ) ) && ( pvVar26 < (void*)( (long)__s + uVar33 ) )) {
            uVar33 = 0;
            do {
               *(undefined4*)( (long)__s + uVar33 * 4 ) = 0;
               *(undefined8*)( (long)pvVar26 + uVar33 * 8 ) = 0;
               uVar33 = uVar33 + 1;
            } while ( uVar30 != uVar33 );
            goto LAB_001115f4;
         }
         memset(__s, 0, uVar33);
         memset(pvVar26, 0, uVar35);
         iVar28 = *(int*)( param_2 + 0x2c );
         local_68 = *puVar29;
         goto LAB_00111602;
      }
      iVar28 = *(int*)( param_2 + 0x2c );
      local_68 = *puVar29;
      if (pvVar26 != (void*)0x0) goto LAB_00111602;
   } else {
      LAB_001115f4:iVar28 = *(int*)( param_2 + 0x2c );
      local_68 = *puVar29;
      LAB_00111602:if (iVar28 != 0) {
         uVar35 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 ));
         uVar33 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         uVar20 = ( local_68 >> 0x10 ^ local_68 ) * -0x7a143595;
         uVar20 = ( uVar20 ^ uVar20 >> 0xd ) * -0x3d4d51cb;
         uVar36 = uVar20 ^ uVar20 >> 0x10;
         if (uVar20 == uVar20 >> 0x10) {
            uVar36 = 1;
            uVar30 = uVar33;
         } else {
            uVar30 = uVar36 * uVar33;
         }
         auVar2._8_8_ = 0;
         auVar2._0_8_ = uVar35;
         auVar10._8_8_ = 0;
         auVar10._0_8_ = uVar30;
         lVar31 = SUB168(auVar2 * auVar10, 8);
         uVar20 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar31 * 4 );
         uVar30 = (ulong)uVar20;
         uVar34 = SUB164(auVar2 * auVar10, 8);
         if (uVar20 != 0) {
            uVar20 = 0;
            do {
               if (( (uint)uVar30 == uVar36 ) && ( *(uint*)( *(long*)( (long)pvVar26 + lVar31 * 8 ) + 0x10 ) == local_68 )) {
                  lVar31 = *(long*)( (long)pvVar26 + (ulong)uVar34 * 8 );
                  uVar21 = *in_RCX;
                  if (uVar21 < *(uint*)( lVar31 + 0x18 )) {
                     *(uint*)( lVar31 + 0x18 ) = uVar21;
                  } else if (*(uint*)( lVar31 + 0x18 ) < uVar21) {
                     if (*(uint*)( lVar31 + 0x1c ) < uVar21) {
                        uVar20 = uVar21 - 1 | uVar21 - 1 >> 1;
                        uVar20 = uVar20 | uVar20 >> 2;
                        uVar20 = uVar20 >> 4 | uVar20;
                        uVar20 = uVar20 | uVar20 >> 8;
                        uVar20 = ( uVar20 >> 0x10 | uVar20 ) + 1;
                        *(uint*)( lVar31 + 0x1c ) = uVar20;
                        lVar27 = Memory::realloc_static(*(void**)( lVar31 + 0x20 ), (ulong)uVar20 * 4, false);
                        *(long*)( lVar31 + 0x20 ) = lVar27;
                        if (lVar27 == 0) goto LAB_00111bf8;
                     }
                     *(uint*)( lVar31 + 0x18 ) = uVar21;
                     uVar21 = *in_RCX;
                  }
                  if (uVar21 != 0) {
                     lVar27 = *(long*)( in_RCX + 2 );
                     lVar31 = *(long*)( lVar31 + 0x20 );
                     lVar23 = 0;
                     do {
                        *(undefined4*)( lVar31 + lVar23 * 4 ) = *(undefined4*)( lVar27 + lVar23 * 4 );
                        lVar23 = lVar23 + 1;
                     } while ( (uint)lVar23 < *in_RCX );
                  }
                  pauVar24 = *(undefined1(**) [16])( *(long*)( param_2 + 8 ) + (ulong)uVar34 * 8 );
                  goto LAB_00111907;
               }
               uVar20 = uVar20 + 1;
               auVar3._8_8_ = 0;
               auVar3._0_8_ = ( uVar34 + 1 ) * uVar33;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = uVar35;
               lVar31 = SUB168(auVar3 * auVar11, 8);
               uVar22 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar31 * 4 );
               uVar30 = (ulong)uVar22;
               uVar34 = SUB164(auVar3 * auVar11, 8);
            } while ( ( uVar22 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = uVar30 * uVar33,auVar12._8_8_ = 0,auVar12._0_8_ = uVar35,auVar5._8_8_ = 0,auVar5._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 ) + uVar34 ) - SUB164(auVar4 * auVar12, 8) ) * uVar33,auVar13._8_8_ = 0,auVar13._0_8_ = uVar35,uVar20 <= SUB164(auVar5 * auVar13, 8) );
         }
      }
   }
   if ((float)uVar21 * __LC88 < (float)( iVar28 + 1 )) {
      if (*(int*)( param_2 + 0x28 ) == 0x1c) {
         pauVar24 = (undefined1(*) [16])0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_00111907;
      }
      _resize_and_rehash((HashMap<int,LocalVector<int,unsigned_int,false,false>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,LocalVector<int,unsigned_int,false,false>>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
   }
   uVar21 = *in_RCX;
   uVar20 = *puVar29;
   if (uVar21 == 0) {
      pauVar24 = (undefined1(*) [16])operator_new(0x28, "");
      *(uint*)pauVar24[1] = uVar20;
      *(undefined8*)( pauVar24[1] + 8 ) = 0;
      *(undefined8*)pauVar24[2] = 0;
      *pauVar24 = (undefined1[16])0x0;
   } else {
      uVar34 = uVar21 - 1;
      uVar36 = uVar34 >> 1 | uVar34;
      uVar36 = uVar36 | uVar36 >> 2;
      uVar36 = uVar36 | uVar36 >> 4;
      uVar36 = uVar36 | uVar36 >> 8;
      pvVar26 = (void*)Memory::realloc_static((void*)0x0, ( ulong )(( uVar36 | uVar36 >> 0x10 ) + 1) << 2, false);
      if (pvVar26 == (void*)0x0) {
         LAB_00111bf8:_err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar18 = (code*)invalidInstructionException();
         ( *pcVar18 )();
      }
      if (*in_RCX != 0) {
         lVar31 = *(long*)( in_RCX + 2 );
         lVar27 = 0;
         do {
            *(undefined4*)( (long)pvVar26 + lVar27 * 4 ) = *(undefined4*)( lVar31 + lVar27 * 4 );
            lVar27 = lVar27 + 1;
         } while ( (uint)lVar27 < *in_RCX );
      }
      pauVar24 = (undefined1(*) [16])operator_new(0x28, "");
      *(uint*)pauVar24[1] = uVar20;
      uVar34 = uVar34 >> 1 | uVar34;
      *(undefined8*)( pauVar24[1] + 8 ) = 0;
      *(undefined8*)pauVar24[2] = 0;
      *pauVar24 = (undefined1[16])0x0;
      uVar34 = uVar34 | uVar34 >> 2;
      uVar34 = uVar34 | uVar34 >> 4;
      uVar34 = uVar34 | uVar34 >> 8;
      uVar20 = ( uVar34 | uVar34 >> 0x10 ) + 1;
      *(uint*)( pauVar24[1] + 0xc ) = uVar20;
      lVar31 = Memory::realloc_static((void*)0x0, (ulong)uVar20 << 2, false);
      *(long*)pauVar24[2] = lVar31;
      if (lVar31 == 0) goto LAB_00111bf8;
      *(uint*)( pauVar24[1] + 8 ) = uVar21;
      lVar27 = 0;
      do {
         *(undefined4*)( lVar31 + lVar27 ) = *(undefined4*)( (long)pvVar26 + lVar27 );
         lVar27 = lVar27 + 4;
      } while ( lVar27 != (ulong)uVar21 << 2 );
      Memory::free_static(pvVar26, false);
   }
   puVar1 = *(undefined8**)( param_2 + 0x20 );
   if (puVar1 == (undefined8*)0x0) {
      *(undefined1(**) [16])( param_2 + 0x18 ) = pauVar24;
      *(undefined1(**) [16])( param_2 + 0x20 ) = pauVar24;
   } else if (in_R8B == '\0') {
      *puVar1 = pauVar24;
      *(undefined8**)( *pauVar24 + 8 ) = puVar1;
      *(undefined1(**) [16])( param_2 + 0x20 ) = pauVar24;
   } else {
      lVar31 = *(long*)( param_2 + 0x18 );
      *(undefined1(**) [16])( lVar31 + 8 ) = pauVar24;
      *(long*)*pauVar24 = lVar31;
      *(undefined1(**) [16])( param_2 + 0x18 ) = pauVar24;
   }
   uVar21 = ( *puVar29 >> 0x10 ^ *puVar29 ) * -0x7a143595;
   uVar20 = ( uVar21 ^ uVar21 >> 0xd ) * -0x3d4d51cb;
   uVar21 = uVar20 ^ uVar20 >> 0x10;
   if (uVar20 == uVar20 >> 0x10) {
      uVar33 = 1;
      uVar21 = 1;
   } else {
      uVar33 = (ulong)uVar21;
   }
   lVar31 = *(long*)( param_2 + 0x10 );
   uVar34 = 0;
   lVar27 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   uVar20 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar35 = CONCAT44(0, uVar20);
   auVar6._8_8_ = 0;
   auVar6._0_8_ = uVar33 * lVar27;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = uVar35;
   lVar32 = SUB168(auVar6 * auVar14, 8);
   lVar23 = *(long*)( param_2 + 8 );
   puVar29 = (uint*)( lVar31 + lVar32 * 4 );
   iVar28 = SUB164(auVar6 * auVar14, 8);
   uVar36 = *puVar29;
   pauVar19 = pauVar24;
   while (uVar36 != 0) {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar36 * lVar27;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar35;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = ( ulong )(( uVar20 + iVar28 ) - SUB164(auVar7 * auVar15, 8)) * lVar27;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar35;
      uVar22 = SUB164(auVar8 * auVar16, 8);
      pauVar37 = pauVar19;
      if (uVar22 < uVar34) {
         *puVar29 = uVar21;
         puVar1 = (undefined8*)( lVar23 + lVar32 * 8 );
         pauVar37 = (undefined1(*) [16])*puVar1;
         *puVar1 = pauVar19;
         uVar21 = uVar36;
         uVar34 = uVar22;
      }
      uVar34 = uVar34 + 1;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = ( ulong )(iVar28 + 1) * lVar27;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar35;
      lVar32 = SUB168(auVar9 * auVar17, 8);
      puVar29 = (uint*)( lVar31 + lVar32 * 4 );
      iVar28 = SUB164(auVar9 * auVar17, 8);
      pauVar19 = pauVar37;
      uVar36 = *puVar29;
   };
   *(undefined1(**) [16])( lVar23 + lVar32 * 8 ) = pauVar19;
   *puVar29 = uVar21;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_00111907:*(undefined1(**) [16])param_1 = pauVar24;
   return;
}/* CowData<RenderingDeviceCommons::ShaderStageSPIRVData>::_unref() */void CowData<RenderingDeviceCommons::ShaderStageSPIRVData>::_unref(CowData<RenderingDeviceCommons::ShaderStageSPIRVData> *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long lVar6;
   long lVar7;
   if (*(long*)this == 0) {
      return;
   }
   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      lVar2 = *(long*)this;
      if (lVar2 != 0) {
         lVar3 = *(long*)( lVar2 + -8 );
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar7 = 0;
            lVar6 = lVar2;
            do {
               if (*(long*)( lVar6 + 0x10 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 0x10 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( lVar6 + 0x10 );
                     *(undefined8*)( lVar6 + 0x10 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }
               }
               lVar7 = lVar7 + 1;
               lVar6 = lVar6 + 0x18;
            } while ( lVar3 != lVar7 );
         }
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }
      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }
   *(undefined8*)this = 0;
   return;
}/* Error CowData<RenderingDeviceCommons::ShaderStageSPIRVData>::resize<false>(long) */undefined8 CowData<RenderingDeviceCommons::ShaderStageSPIRVData>::resize<false>(CowData<RenderingDeviceCommons::ShaderStageSPIRVData> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   long lVar6;
   ulong uVar7;
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
      lVar9 = 0;
      lVar6 = 0;
   } else {
      lVar9 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar9) {
         return 0;
      }
      if (param_1 == 0) {
         _unref(this);
         return 0;
      }
      _copy_on_write(this);
      lVar6 = lVar9 * 0x18;
      if (lVar6 != 0) {
         uVar7 = lVar6 - 1U | lVar6 - 1U >> 1;
         uVar7 = uVar7 | uVar7 >> 2;
         uVar7 = uVar7 | uVar7 >> 4;
         uVar7 = uVar7 | uVar7 >> 8;
         uVar7 = uVar7 | uVar7 >> 0x10;
         lVar6 = ( uVar7 | uVar7 >> 0x20 ) + 1;
      }
   }
   if (param_1 * 0x18 == 0) {
      LAB_00111fe8:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }
   uVar7 = param_1 * 0x18 - 1;
   uVar7 = uVar7 >> 1 | uVar7;
   uVar7 = uVar7 | uVar7 >> 2;
   uVar7 = uVar7 | uVar7 >> 4;
   uVar7 = uVar7 | uVar7 >> 8;
   uVar7 = uVar7 | uVar7 >> 0x10;
   uVar7 = uVar7 | uVar7 >> 0x20;
   if (uVar7 == 0xffffffffffffffff) goto LAB_00111fe8;
   if (param_1 <= lVar9) {
      puVar5 = *(undefined8**)this;
      uVar8 = param_1;
      while (puVar5 != (undefined8*)0x0) {
         if ((ulong)puVar5[-1] <= uVar8) {
            LAB_00111e49:if (uVar7 + 1 != lVar6) {
               puVar4 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar7 + 0x11, false);
               if (puVar4 == (undefined8*)0x0) goto LAB_00112017;
               puVar5 = puVar4 + 2;
               *puVar4 = 1;
               *(undefined8**)this = puVar5;
            }
            puVar5[-1] = param_1;
            return 0;
         }
         while (puVar5[uVar8 * 3 + 2] == 0) {
            uVar8 = uVar8 + 1;
            if ((ulong)puVar5[-1] <= uVar8) goto LAB_00111e49;
         };
         LOCK();
         plVar1 = (long*)( puVar5[uVar8 * 3 + 2] + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar9 = puVar5[uVar8 * 3 + 2];
            puVar5[uVar8 * 3 + 2] = 0;
            Memory::free_static((void*)( lVar9 + -0x10 ), false);
         }
         uVar8 = uVar8 + 1;
         puVar5 = *(undefined8**)this;
      };
      LAB_00112065:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }
   if (uVar7 + 1 == lVar6) {
      puVar5 = *(undefined8**)this;
      if (puVar5 == (undefined8*)0x0) goto LAB_00112065;
      lVar9 = puVar5[-1];
      LAB_00111f40:if (param_1 <= lVar9) goto LAB_00111eef;
   } else {
      if (lVar9 != 0) {
         puVar4 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar7 + 0x11, false);
         if (puVar4 == (undefined8*)0x0) {
            LAB_00112017:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
            return 6;
         }
         puVar5 = puVar4 + 2;
         *puVar4 = 1;
         *(undefined8**)this = puVar5;
         lVar9 = puVar4[1];
         goto LAB_00111f40;
      }
      puVar4 = (undefined8*)Memory::alloc_static(uVar7 + 0x11, false);
      if (puVar4 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }
      puVar5 = puVar4 + 2;
      *puVar4 = 1;
      puVar4[1] = 0;
      *(undefined8**)this = puVar5;
      lVar9 = 0;
   }
   puVar4 = puVar5 + lVar9 * 3;
   do {
      *(undefined4*)puVar4 = 5;
      puVar3 = puVar4 + 3;
      puVar4[2] = 0;
      puVar4 = puVar3;
   } while ( puVar3 != puVar5 + param_1 * 3 );
   LAB_00111eef:puVar5[-1] = param_1;
   return 0;
}/* HashMap<StringName, CharString, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, CharString> > >::_resize_and_rehash(unsigned
   int) */void HashMap<StringName,CharString,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,CharString>>>::_resize_and_rehash(HashMap<StringName,CharString,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,CharString>>> *this, uint param_1) {
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
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
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
   *(undefined4*)( this + 0x2c ) = 0;
   uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   if (param_1 < 2) {
      param_1 = 2;
   }
   *(uint*)( this + 0x28 ) = param_1;
   uVar21 = *(uint*)( hash_table_size_primes + (ulong)param_1 * 4 );
   uVar22 = (ulong)uVar21;
   pvVar6 = *(void**)( this + 8 );
   pvVar7 = *(void**)( this + 0x10 );
   uVar26 = uVar22 * 4;
   uVar25 = uVar22 * 8;
   uVar18 = Memory::alloc_static(uVar26, false);
   *(undefined8*)( this + 0x10 ) = uVar18;
   __s_00 = (void*)Memory::alloc_static(uVar25, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar21 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar25 ) ) && ( __s_00 < (void*)( (long)__s + uVar26 ) )) {
         uVar26 = 0;
         do {
            *(undefined4*)( (long)__s + uVar26 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar26 * 8 ) = 0;
            uVar26 = uVar26 + 1;
         } while ( uVar22 != uVar26 );
      } else {
         memset(__s, 0, uVar26);
         memset(__s_00, 0, uVar25);
      }
   }
   if (uVar3 != 0) {
      uVar26 = 0;
      do {
         uVar21 = *(uint*)( (long)pvVar7 + uVar26 * 4 );
         if (uVar21 != 0) {
            uVar24 = 0;
            lVar8 = *(long*)( this + 0x10 );
            uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar25 = CONCAT44(0, uVar4);
            lVar9 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar21 * lVar9;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar25;
            lVar20 = SUB168(auVar10 * auVar14, 8);
            puVar1 = (uint*)( lVar8 + lVar20 * 4 );
            iVar19 = SUB164(auVar10 * auVar14, 8);
            uVar5 = *puVar1;
            uVar18 = *(undefined8*)( (long)pvVar6 + uVar26 * 8 );
            while (uVar5 != 0) {
               auVar11._8_8_ = 0;
               auVar11._0_8_ = (ulong)uVar5 * lVar9;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = uVar25;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(( uVar4 + iVar19 ) - SUB164(auVar11 * auVar15, 8)) * lVar9;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = uVar25;
               local_78 = SUB164(auVar12 * auVar16, 8);
               uVar23 = uVar18;
               if (local_78 < uVar24) {
                  *puVar1 = uVar21;
                  puVar2 = (undefined8*)( (long)__s_00 + lVar20 * 8 );
                  uVar23 = *puVar2;
                  *puVar2 = uVar18;
                  uVar21 = uVar5;
                  uVar24 = local_78;
               }
               uVar24 = uVar24 + 1;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(iVar19 + 1) * lVar9;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = uVar25;
               lVar20 = SUB168(auVar13 * auVar17, 8);
               puVar1 = (uint*)( lVar8 + lVar20 * 4 );
               iVar19 = SUB164(auVar13 * auVar17, 8);
               uVar18 = uVar23;
               uVar5 = *puVar1;
            };
            *(undefined8*)( (long)__s_00 + lVar20 * 8 ) = uVar18;
            *puVar1 = uVar21;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }
         uVar26 = uVar26 + 1;
      } while ( uVar26 != uVar3 );
      Memory::free_static(pvVar6, false);
      Memory::free_static(pvVar7, false);
      return;
   }
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, CharString, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, CharString> > >::operator[](StringName const&)
    */CowData<char> * __thiscallHashMap<StringName,CharString,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,CharString>>>::operator [](HashMap<StringName,CharString,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,CharString>>> * this, StringName_conflict * param_1) * plVar1 ;uint *puVar2undefined8 *puVar3ulong __nlong lVar4void *__sundefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]uint uVar29uint uVar30undefined8 *puVar31undefined8 uVar32void *__s_00ulong uVar33long lVar34int iVar35long lVar36long lVar37long lVar38undefined8 *puVar39uint uVar40uint uVar41uint uVar42ulong uVar43long in_FS_OFFSETuint local_a8CowData<char> *local_88long local_70undefined1 local_68[16]long local_58long local_50[2]long local_40lVar34 = *(long*)( this + 8 );local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar29 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar43 = CONCAT44(0, uVar29);if (lVar34 == 0) {
   LAB_001127e8:local_70 = 0;
   uVar33 = uVar43 * 4;
   __n = uVar43 * 8;
   uVar32 = Memory::alloc_static(uVar33, false);
   *(undefined8*)( this + 0x10 ) = uVar32;
   __s_00 = (void*)Memory::alloc_static(__n, false);
   *(void**)( this + 8 ) = __s_00;
   if ((int)uVar43 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + __n ) ) && ( __s_00 < (void*)( (long)__s + uVar33 ) )) {
         uVar33 = 0;
         do {
            *(undefined4*)( (long)__s + uVar33 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar33 * 8 ) = 0;
            uVar33 = uVar33 + 1;
         } while ( uVar43 != uVar33 );
      } else {
         memset(__s, 0, uVar33);
         memset(__s_00, 0, __n);
      }
      LAB_00112401:iVar35 = *(int*)( this + 0x2c );
      if (iVar35 != 0) {
         LAB_0011240d:uVar29 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         uVar33 = CONCAT44(0, uVar29);
         lVar34 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar30 = StringName::get_empty_hash();
         } else {
            uVar30 = *(uint*)( *(long*)param_1 + 0x20 );
         }
         if (uVar30 == 0) {
            uVar30 = 1;
         }
         uVar42 = 0;
         auVar9._8_8_ = 0;
         auVar9._0_8_ = (ulong)uVar30 * lVar34;
         auVar21._8_8_ = 0;
         auVar21._0_8_ = uVar33;
         lVar37 = SUB168(auVar9 * auVar21, 8);
         uVar40 = *(uint*)( *(long*)( this + 0x10 ) + lVar37 * 4 );
         uVar41 = SUB164(auVar9 * auVar21, 8);
         if (uVar40 != 0) {
            do {
               if (( uVar40 == uVar30 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar37 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                  lVar34 = *(long*)( *(long*)( this + 8 ) + (ulong)uVar41 * 8 );
                  if (*(long*)( lVar34 + 0x18 ) != 0) {
                     CowData<char>::_ref((CowData<char>*)( lVar34 + 0x18 ), (CowData*)&local_70);
                     lVar34 = *(long*)( *(long*)( this + 8 ) + (ulong)uVar41 * 8 );
                  }
                  goto LAB_001123a8;
               }
               uVar42 = uVar42 + 1;
               auVar10._8_8_ = 0;
               auVar10._0_8_ = ( ulong )(uVar41 + 1) * lVar34;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = uVar33;
               lVar37 = SUB168(auVar10 * auVar22, 8);
               uVar40 = *(uint*)( *(long*)( this + 0x10 ) + lVar37 * 4 );
               uVar41 = SUB164(auVar10 * auVar22, 8);
            } while ( ( uVar40 != 0 ) && ( auVar11._8_8_ = 0 ),auVar11._0_8_ = (ulong)uVar40 * lVar34,auVar23._8_8_ = 0,auVar23._0_8_ = uVar33,auVar12._8_8_ = 0,auVar12._0_8_ = ( ulong )(( uVar29 + uVar41 ) - SUB164(auVar11 * auVar23, 8)) * lVar34,auVar24._8_8_ = 0,auVar24._0_8_ = uVar33,uVar42 <= SUB164(auVar12 * auVar24, 8) );
         }
         iVar35 = *(int*)( this + 0x2c );
      }
      goto LAB_0011250c;
   }
   iVar35 = *(int*)( this + 0x2c );
   if (__s_00 == (void*)0x0) goto LAB_0011250c;
   if (*(int*)( this + 0x2c ) != 0) goto LAB_0011240d;
   LAB_0011252e:if (*(int*)( this + 0x28 ) == 0x1c) {
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      lVar34 = 0;
      LAB_001123a8:local_88 = (CowData<char>*)( lVar34 + 0x18 );
      goto LAB_001123b1;
   }
   _resize_and_rehash(this, *(int*)( this + 0x28 ) + 1);
} else {
   if (*(int*)( this + 0x2c ) != 0) {
      lVar37 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar30 = StringName::get_empty_hash();
         lVar34 = *(long*)( this + 8 );
      } else {
         uVar30 = *(uint*)( *(long*)param_1 + 0x20 );
      }
      if (uVar30 == 0) {
         uVar30 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar30 * lVar37;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar43;
      lVar36 = SUB168(auVar5 * auVar17, 8);
      uVar40 = *(uint*)( *(long*)( this + 0x10 ) + lVar36 * 4 );
      uVar41 = SUB164(auVar5 * auVar17, 8);
      if (uVar40 != 0) {
         uVar42 = 0;
         do {
            if (( uVar40 == uVar30 ) && ( *(long*)( *(long*)( lVar34 + lVar36 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               lVar34 = *(long*)( lVar34 + (ulong)uVar41 * 8 );
               goto LAB_001123a8;
            }
            uVar42 = uVar42 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ulong )(uVar41 + 1) * lVar37;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar43;
            lVar36 = SUB168(auVar6 * auVar18, 8);
            uVar40 = *(uint*)( *(long*)( this + 0x10 ) + lVar36 * 4 );
            uVar41 = SUB164(auVar6 * auVar18, 8);
         } while ( ( uVar40 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar40 * lVar37,auVar19._8_8_ = 0,auVar19._0_8_ = uVar43,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar41 + uVar29 ) - SUB164(auVar7 * auVar19, 8)) * lVar37,auVar20._8_8_ = 0,auVar20._0_8_ = uVar43,uVar42 <= SUB164(auVar8 * auVar20, 8) );
      }
      local_70 = 0;
      uVar43 = ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar34 == 0) goto LAB_001127e8;
      goto LAB_00112401;
   }
   local_70 = 0;
   iVar35 = 0;
   LAB_0011250c:if ((float)uVar43 * __LC88 < (float)( iVar35 + 1 )) goto LAB_0011252e;
}local_68 = (undefined1[16])0x0;StringName::StringName((StringName_conflict*)&local_58, param_1);local_50[0] = 0;puVar31 = (undefined8*)operator_new(0x20, "");*puVar31 = local_68._0_8_;puVar31[1] = local_68._8_8_;StringName::StringName((StringName_conflict*)( puVar31 + 2 ), (StringName_conflict*)&local_58);puVar31[3] = 0;local_88 = (CowData<char>*)( puVar31 + 3 );if (( local_50[0] == 0 ) || ( CowData<char>::_ref(local_88, (CowData*)local_50),lVar34 = local_50[0],local_50[0] == 0 )) {
   lVar37 = 0;
} else {
   LOCK();
   plVar1 = (long*)( local_50[0] + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   lVar37 = local_70;
   if (*plVar1 == 0) {
      local_50[0] = 0;
      Memory::free_static((void*)( lVar34 + -0x10 ), false);
      lVar37 = local_70;
   }
}if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
   StringName::unref();
}puVar39 = *(undefined8**)( this + 0x20 );if (puVar39 == (undefined8*)0x0) {
   lVar34 = *(long*)param_1;
   *(undefined8**)( this + 0x18 ) = puVar31;
   *(undefined8**)( this + 0x20 ) = puVar31;
   if (lVar34 == 0) goto LAB_001127b5;
   LAB_00112622:uVar29 = *(uint*)( lVar34 + 0x20 );
} else {
   *puVar39 = puVar31;
   puVar31[1] = puVar39;
   lVar34 = *(long*)param_1;
   *(undefined8**)( this + 0x20 ) = puVar31;
   if (lVar34 != 0) goto LAB_00112622;
   LAB_001127b5:uVar29 = StringName::get_empty_hash();
}lVar34 = *(long*)( this + 0x10 );if (uVar29 == 0) {
   uVar29 = 1;
}uVar43 = (ulong)uVar29;uVar41 = 0;lVar36 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar33 = CONCAT44(0, uVar30);auVar13._8_8_ = 0;auVar13._0_8_ = uVar43 * lVar36;auVar25._8_8_ = 0;auVar25._0_8_ = uVar33;lVar38 = SUB168(auVar13 * auVar25, 8);lVar4 = *(long*)( this + 8 );puVar2 = (uint*)( lVar34 + lVar38 * 4 );iVar35 = SUB164(auVar13 * auVar25, 8);uVar40 = *puVar2;while (uVar40 != 0) {
   auVar14._8_8_ = 0;
   auVar14._0_8_ = (ulong)uVar40 * lVar36;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = uVar33;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(( iVar35 + uVar30 ) - SUB164(auVar14 * auVar26, 8)) * lVar36;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar33;
   local_a8 = SUB164(auVar15 * auVar27, 8);
   puVar39 = puVar31;
   if (local_a8 < uVar41) {
      *puVar2 = (uint)uVar43;
      uVar43 = (ulong)uVar40;
      puVar3 = (undefined8*)( lVar4 + lVar38 * 8 );
      puVar39 = (undefined8*)*puVar3;
      *puVar3 = puVar31;
      uVar41 = local_a8;
   }
   uVar29 = (uint)uVar43;
   uVar41 = uVar41 + 1;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(iVar35 + 1) * lVar36;
   auVar28._8_8_ = 0;
   auVar28._0_8_ = uVar33;
   lVar38 = SUB168(auVar16 * auVar28, 8);
   puVar2 = (uint*)( lVar34 + lVar38 * 4 );
   iVar35 = SUB164(auVar16 * auVar28, 8);
   puVar31 = puVar39;
   uVar40 = *puVar2;
};*(undefined8**)( lVar4 + lVar38 * 8 ) = puVar31;*puVar2 = uVar29;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;if (lVar37 != 0) {
   LOCK();
   plVar1 = (long*)( lVar37 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      Memory::free_static((void*)( local_70 + -0x10 ), false);
   }
}LAB_001123b1:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return local_88;
}/* WARNING: Subroutine does not return */__stack_chk_fail();}/* Error CowData<CharString>::resize<false>(long) */undefined8 CowData<CharString>::resize<false>(CowData<CharString> *this, long param_1) {
   long *plVar1;
   long *plVar2;
   code *pcVar3;
   undefined8 *puVar4;
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
      lVar9 = 0;
      lVar5 = 0;
   } else {
      lVar9 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar9) {
         return 0;
      }
      if (param_1 == 0) {
         _unref(this);
         return 0;
      }
      _copy_on_write(this);
      lVar5 = lVar9 * 8;
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
      LAB_00112ba0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }
   uVar6 = param_1 * 8 - 1;
   uVar6 = uVar6 >> 1 | uVar6;
   uVar6 = uVar6 | uVar6 >> 2;
   uVar6 = uVar6 | uVar6 >> 4;
   uVar6 = uVar6 | uVar6 >> 8;
   uVar6 = uVar6 | uVar6 >> 0x10;
   uVar6 = uVar6 | uVar6 >> 0x20;
   if (uVar6 == 0xffffffffffffffff) goto LAB_00112ba0;
   if (param_1 <= lVar9) {
      puVar7 = *(undefined8**)this;
      uVar8 = param_1;
      while (puVar7 != (undefined8*)0x0) {
         if ((ulong)puVar7[-1] <= uVar8) {
            LAB_00112a29:if (uVar6 + 1 != lVar5) {
               puVar4 = (undefined8*)Memory::realloc_static(puVar7 + -2, uVar6 + 0x11, false);
               if (puVar4 == (undefined8*)0x0) goto LAB_00112bcf;
               puVar7 = puVar4 + 2;
               *puVar4 = 1;
               *(undefined8**)this = puVar7;
            }
            puVar7[-1] = param_1;
            return 0;
         }
         while (true) {
            plVar2 = puVar7 + uVar8;
            if (*plVar2 != 0) break;
            uVar8 = uVar8 + 1;
            if ((ulong)puVar7[-1] <= uVar8) goto LAB_00112a29;
         };
         LOCK();
         plVar1 = (long*)( *plVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar9 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void*)( lVar9 + -0x10 ), false);
         }
         uVar8 = uVar8 + 1;
         puVar7 = *(undefined8**)this;
      };
      LAB_00112c1d:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }
   if (uVar6 + 1 == lVar5) {
      puVar7 = *(undefined8**)this;
      if (puVar7 == (undefined8*)0x0) goto LAB_00112c1d;
      lVar9 = puVar7[-1];
      LAB_00112b00:if (param_1 <= lVar9) goto LAB_00112ab5;
   } else {
      if (lVar9 != 0) {
         puVar4 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar6 + 0x11, false);
         if (puVar4 == (undefined8*)0x0) {
            LAB_00112bcf:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
            return 6;
         }
         puVar7 = puVar4 + 2;
         *puVar4 = 1;
         *(undefined8**)this = puVar7;
         lVar9 = puVar4[1];
         goto LAB_00112b00;
      }
      puVar4 = (undefined8*)Memory::alloc_static(uVar6 + 0x11, false);
      if (puVar4 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }
      puVar7 = puVar4 + 2;
      *puVar4 = 1;
      puVar4[1] = 0;
      *(undefined8**)this = puVar7;
      lVar9 = 0;
   }
   memset(puVar7 + lVar9, 0, ( param_1 - lVar9 ) * 8);
   LAB_00112ab5:puVar7[-1] = param_1;
   return 0;
}/* CowData<ShaderRD::VariantDefine>::_unref() */void CowData<ShaderRD::VariantDefine>::_unref(CowData<ShaderRD::VariantDefine> *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long lVar6;
   long lVar7;
   if (*(long*)this == 0) {
      return;
   }
   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      lVar2 = *(long*)this;
      if (lVar2 != 0) {
         lVar3 = *(long*)( lVar2 + -8 );
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar7 = 0;
            lVar6 = lVar2;
            do {
               if (*(long*)( lVar6 + 8 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 8 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( lVar6 + 8 );
                     *(undefined8*)( lVar6 + 8 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }
               }
               lVar7 = lVar7 + 1;
               lVar6 = lVar6 + 0x18;
            } while ( lVar3 != lVar7 );
         }
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }
      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }
   *(undefined8*)this = 0;
   return;
}/* Error CowData<ShaderRD::VariantDefine>::resize<false>(long) */undefined8 CowData<ShaderRD::VariantDefine>::resize<false>(CowData<ShaderRD::VariantDefine> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   long lVar6;
   ulong uVar7;
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
      lVar9 = 0;
      lVar6 = 0;
   } else {
      lVar9 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar9) {
         return 0;
      }
      if (param_1 == 0) {
         _unref(this);
         return 0;
      }
      _copy_on_write(this);
      lVar6 = lVar9 * 0x18;
      if (lVar6 != 0) {
         uVar7 = lVar6 - 1U | lVar6 - 1U >> 1;
         uVar7 = uVar7 | uVar7 >> 2;
         uVar7 = uVar7 | uVar7 >> 4;
         uVar7 = uVar7 | uVar7 >> 8;
         uVar7 = uVar7 | uVar7 >> 0x10;
         lVar6 = ( uVar7 | uVar7 >> 0x20 ) + 1;
      }
   }
   if (param_1 * 0x18 == 0) {
      LAB_00112fe8:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }
   uVar7 = param_1 * 0x18 - 1;
   uVar7 = uVar7 >> 1 | uVar7;
   uVar7 = uVar7 | uVar7 >> 2;
   uVar7 = uVar7 | uVar7 >> 4;
   uVar7 = uVar7 | uVar7 >> 8;
   uVar7 = uVar7 | uVar7 >> 0x10;
   uVar7 = uVar7 | uVar7 >> 0x20;
   if (uVar7 == 0xffffffffffffffff) goto LAB_00112fe8;
   if (param_1 <= lVar9) {
      puVar5 = *(undefined8**)this;
      uVar8 = param_1;
      while (puVar5 != (undefined8*)0x0) {
         if ((ulong)puVar5[-1] <= uVar8) {
            LAB_00112e49:if (uVar7 + 1 != lVar6) {
               puVar4 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar7 + 0x11, false);
               if (puVar4 == (undefined8*)0x0) goto LAB_00113017;
               puVar5 = puVar4 + 2;
               *puVar4 = 1;
               *(undefined8**)this = puVar5;
            }
            puVar5[-1] = param_1;
            return 0;
         }
         while (puVar5[uVar8 * 3 + 1] == 0) {
            uVar8 = uVar8 + 1;
            if ((ulong)puVar5[-1] <= uVar8) goto LAB_00112e49;
         };
         LOCK();
         plVar1 = (long*)( puVar5[uVar8 * 3 + 1] + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar9 = puVar5[uVar8 * 3 + 1];
            puVar5[uVar8 * 3 + 1] = 0;
            Memory::free_static((void*)( lVar9 + -0x10 ), false);
         }
         uVar8 = uVar8 + 1;
         puVar5 = *(undefined8**)this;
      };
      LAB_00113065:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }
   if (uVar7 + 1 == lVar6) {
      puVar5 = *(undefined8**)this;
      if (puVar5 == (undefined8*)0x0) goto LAB_00113065;
      lVar9 = puVar5[-1];
      LAB_00112f40:if (param_1 <= lVar9) goto LAB_00112ef3;
   } else {
      if (lVar9 != 0) {
         puVar4 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar7 + 0x11, false);
         if (puVar4 == (undefined8*)0x0) {
            LAB_00113017:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
            return 6;
         }
         puVar5 = puVar4 + 2;
         *puVar4 = 1;
         *(undefined8**)this = puVar5;
         lVar9 = puVar4[1];
         goto LAB_00112f40;
      }
      puVar4 = (undefined8*)Memory::alloc_static(uVar7 + 0x11, false);
      if (puVar4 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }
      puVar5 = puVar4 + 2;
      *puVar4 = 1;
      puVar4[1] = 0;
      *(undefined8**)this = puVar5;
      lVar9 = 0;
   }
   puVar4 = puVar5 + lVar9 * 3;
   do {
      *(undefined4*)puVar4 = 0;
      puVar3 = puVar4 + 3;
      puVar4[1] = 0;
      *(undefined1*)( puVar4 + 2 ) = 1;
      puVar4 = puVar3;
   } while ( puVar3 != puVar5 + param_1 * 3 );
   LAB_00112ef3:puVar5[-1] = param_1;
   return 0;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<unsigned int>::resize<false>(long) */undefined8 CowData<unsigned_int>::resize<false>(CowData<unsigned_int> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   long lVar7;
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
      lVar7 = 0;
      lVar3 = 0;
   } else {
      lVar7 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar7) {
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
      lVar3 = lVar7 * 4;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }
   }
   if (param_1 * 4 != 0) {
      uVar4 = param_1 * 4 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = uVar4 | uVar4 >> 0x20;
      if (uVar4 != 0xffffffffffffffff) {
         if (lVar7 < param_1) {
            if (uVar4 + 1 == lVar3) {
               puVar5 = *(undefined8**)this;
               if (puVar5 == (undefined8*)0x0) goto LAB_00113209;
            } else {
               if (lVar7 == 0) {
                  puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) {
                     _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                     return 6;
                  }
                  *puVar5 = 1;
                  puVar5[1] = 0;
               } else {
                  puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) goto LAB_001132f0;
                  *puVar5 = 1;
               }
               puVar5 = puVar5 + 2;
               *(undefined8**)this = puVar5;
            }
            puVar5[-1] = param_1;
         } else {
            puVar5 = *(undefined8**)this;
            if (uVar4 + 1 == lVar3) {
               if (puVar5 == (undefined8*)0x0) {
                  LAB_00113209:_DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }
            } else {
               puVar6 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar4 + 0x11, false);
               if (puVar6 == (undefined8*)0x0) {
                  LAB_001132f0:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
                  return 6;
               }
               puVar5 = puVar6 + 2;
               *puVar6 = 1;
               *(undefined8**)this = puVar5;
            }
            puVar5[-1] = param_1;
         }
         return 0;
      }
   }
   _err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
   return 6;
}/* CowData<bool>::_realloc(long) */undefined8 CowData<bool>::_realloc(CowData<bool> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }
   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<bool>::resize<false>(long) */undefined8 CowData<bool>::resize<false>(CowData<bool> *this, long param_1) {
   long lVar1;
   long *plVar2;
   code *pcVar3;
   ulong uVar4;
   long lVar5;
   undefined8 *puVar6;
   undefined8 uVar7;
   undefined8 *puVar8;
   long lVar9;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }
   lVar5 = *(long*)this;
   if (lVar5 == 0) {
      if (param_1 == 0) {
         return 0;
      }
      _copy_on_write(this);
      LAB_0011357e:lVar9 = 0;
      lVar5 = 0;
   } else {
      lVar9 = *(long*)( lVar5 + -8 );
      if (param_1 == lVar9) {
         return 0;
      }
      if (param_1 == 0) {
         LOCK();
         plVar2 = (long*)( lVar5 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 != 0) {
            *(undefined8*)this = 0;
            return 0;
         }
         lVar5 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
         return 0;
      }
      _copy_on_write(this);
      if (lVar9 == 0) goto LAB_0011357e;
      uVar4 = lVar9 - 1U | lVar9 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar5 = ( uVar4 | uVar4 >> 0x20 ) + 1;
   }
   uVar4 = param_1 - 1U | param_1 - 1U >> 1;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar1 = uVar4 + 1;
   if (lVar9 < param_1) {
      if (lVar1 != lVar5) {
         if (lVar9 == 0) {
            puVar6 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
            if (puVar6 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               return 6;
            }
            puVar8 = puVar6 + 2;
            *puVar6 = 1;
            puVar6[1] = 0;
            *(undefined8**)this = puVar8;
            goto LAB_001134bc;
         }
         uVar7 = _realloc(this, lVar1);
         if ((int)uVar7 != 0) {
            return uVar7;
         }
      }
      puVar8 = *(undefined8**)this;
      if (puVar8 != (undefined8*)0x0) {
         LAB_001134bc:puVar8[-1] = param_1;
         return 0;
      }
   } else {
      if (( lVar1 != lVar5 ) && ( uVar7 = _realloc(this, lVar1) ),(int)uVar7 != 0) {
         return uVar7;
      }
      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }
   }
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar3 = (code*)invalidInstructionException();
   ( *pcVar3 )();
}/* CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage>::_unref() */void CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage>::_unref(CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage> *this) {
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
               if (plVar6[1] != 0) {
                  LOCK();
                  plVar2 = (long*)( plVar6[1] + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = plVar6[1];
                     plVar6[1] = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }
               }
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
               plVar6 = plVar6 + 2;
            } while ( lVar3 != lVar7 );
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
}/* CowData<RenderingServer::ShaderNativeSourceCode::Version>::_unref() */void CowData<RenderingServer::ShaderNativeSourceCode::Version>::_unref(CowData<RenderingServer::ShaderNativeSourceCode::Version> *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   long lVar5;
   CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage> *this_00;
   if (*(long*)this == 0) {
      return;
   }
   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      lVar2 = *(long*)this;
      if (lVar2 != 0) {
         lVar3 = *(long*)( lVar2 + -8 );
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar5 = 0;
            this_00 = (CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage>*)( lVar2 + 8 );
            do {
               lVar5 = lVar5 + 1;
               CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage>::_unref(this_00);
               this_00 = this_00 + 0x10;
            } while ( lVar3 != lVar5 );
         }
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }
   *(undefined8*)this = 0;
   return;
}/* Error CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage>::resize<false>(long) */undefined8 CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage>::resize<false>(CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage> *this, long param_1) {
   long *plVar1;
   long *plVar2;
   code *pcVar3;
   undefined8 *puVar4;
   undefined1(*pauVar5)[16];
   undefined1(*pauVar6)[16];
   undefined8 *puVar7;
   long lVar8;
   long lVar9;
   ulong uVar10;
   undefined1(*pauVar11)[16];
   ulong uVar12;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }
   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }
      _copy_on_write(this);
      lVar8 = 0;
      lVar9 = 0;
   } else {
      lVar8 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar8) {
         return 0;
      }
      if (param_1 == 0) {
         _unref(this);
         return 0;
      }
      _copy_on_write(this);
      lVar9 = lVar8 * 0x10;
      if (lVar9 != 0) {
         uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
         uVar10 = uVar10 | uVar10 >> 2;
         uVar10 = uVar10 | uVar10 >> 4;
         uVar10 = uVar10 | uVar10 >> 8;
         uVar10 = uVar10 | uVar10 >> 0x10;
         lVar9 = ( uVar10 | uVar10 >> 0x20 ) + 1;
      }
   }
   if (param_1 * 0x10 == 0) {
      LAB_00113a60:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }
   uVar10 = param_1 * 0x10 - 1;
   uVar10 = uVar10 >> 1 | uVar10;
   uVar10 = uVar10 | uVar10 >> 2;
   uVar10 = uVar10 | uVar10 >> 4;
   uVar10 = uVar10 | uVar10 >> 8;
   uVar10 = uVar10 | uVar10 >> 0x10;
   uVar10 = uVar10 | uVar10 >> 0x20;
   if (uVar10 == 0xffffffffffffffff) goto LAB_00113a60;
   uVar12 = param_1;
   if (param_1 <= lVar8) {
      while (puVar7 = *(undefined8**)this,puVar7 != (undefined8*)0x0) {
         if ((ulong)puVar7[-1] <= uVar12) {
            if (uVar10 + 1 != lVar9) {
               puVar4 = (undefined8*)Memory::realloc_static(puVar7 + -2, uVar10 + 0x11, false);
               if (puVar4 == (undefined8*)0x0) goto LAB_00113a8f;
               puVar7 = puVar4 + 2;
               *puVar4 = 1;
               *(undefined8**)this = puVar7;
            }
            puVar7[-1] = param_1;
            return 0;
         }
         plVar2 = puVar7 + uVar12 * 2;
         if (plVar2[1] != 0) {
            LOCK();
            plVar1 = (long*)( plVar2[1] + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar8 = plVar2[1];
               plVar2[1] = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
            }
         }
         if (*plVar2 != 0) {
            LOCK();
            plVar1 = (long*)( *plVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar8 = *plVar2;
               *plVar2 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
            }
         }
         uVar12 = uVar12 + 1;
      };
      LAB_00113add:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }
   if (uVar10 + 1 == lVar9) {
      puVar7 = *(undefined8**)this;
      if (puVar7 == (undefined8*)0x0) goto LAB_00113add;
      lVar8 = puVar7[-1];
      LAB_001139c1:if (param_1 <= lVar8) goto LAB_001138c8;
   } else {
      if (lVar8 != 0) {
         puVar4 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar10 + 0x11, false);
         if (puVar4 == (undefined8*)0x0) {
            LAB_00113a8f:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
            return 6;
         }
         puVar7 = puVar4 + 2;
         *puVar4 = 1;
         *(undefined8**)this = puVar7;
         lVar8 = puVar4[1];
         goto LAB_001139c1;
      }
      puVar4 = (undefined8*)Memory::alloc_static(uVar10 + 0x11, false);
      if (puVar4 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }
      puVar7 = puVar4 + 2;
      *puVar4 = 1;
      puVar4[1] = 0;
      *(undefined8**)this = puVar7;
      lVar8 = 0;
   }
   pauVar11 = (undefined1(*) [16])( puVar7 + param_1 * 2 );
   pauVar5 = (undefined1(*) [16])( puVar7 + lVar8 * 2 );
   if (( (int)pauVar11 - (int)pauVar5 & 0x10U ) != 0) {
      *pauVar5 = (undefined1[16])0x0;
      pauVar5 = pauVar5 + 1;
      if (pauVar11 == pauVar5) goto LAB_001138c8;
   }
   do {
      *pauVar5 = (undefined1[16])0x0;
      pauVar6 = pauVar5 + 2;
      pauVar5[1] = (undefined1[16])0x0;
      pauVar5 = pauVar6;
   } while ( pauVar11 != pauVar6 );
   LAB_001138c8:puVar7[-1] = param_1;
   return 0;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, CharString, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, CharString> > >::insert(StringName const&,
   CharString const&, bool) */StringName_conflict *
HashMap<StringName,CharString,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,CharString>>>
::insert(StringName_conflict *param_1,CharString *param_2,bool param_3){
   long *plVar1;
   uint *puVar2;
   uint uVar3;
   undefined8 *puVar4;
   long lVar5;
   void *__s;
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
   ulong uVar22;
   uint uVar23;
   uint uVar24;
   long lVar25;
   undefined8 uVar26;
   void *__s_00;
   CowData *in_RCX;
   uint uVar27;
   int iVar28;
   undefined7 in_register_00000011;
   StringName_conflict *pSVar29;
   long lVar30;
   long lVar31;
   ulong uVar32;
   char in_R8B;
   uint uVar33;
   ulong uVar34;
   uint uVar35;
   long *plVar36;
   long in_FS_OFFSET;
   long *local_80;
   long local_58;
   long local_50[2];
   long local_40;
   pSVar29 = (StringName_conflict*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar23 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   if (*(long*)( param_2 + 8 ) == 0) {
      uVar22 = (ulong)uVar23;
      uVar32 = uVar22 * 4;
      uVar34 = uVar22 * 8;
      uVar26 = Memory::alloc_static(uVar32, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar26;
      __s_00 = (void*)Memory::alloc_static(uVar34, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar23 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar34 ) ) && ( __s_00 < (void*)( (long)__s + uVar32 ) )) {
            uVar32 = 0;
            do {
               *(undefined4*)( (long)__s + uVar32 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar32 * 8 ) = 0;
               uVar32 = uVar32 + 1;
            } while ( uVar22 != uVar32 );
         } else {
            memset(__s, 0, uVar32);
            memset(__s_00, 0, uVar34);
         }
         goto LAB_00113b42;
      }
      iVar28 = *(int*)( param_2 + 0x2c );
      if (__s_00 == (void*)0x0) goto LAB_00113c59;
      if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_00113b4e;
      LAB_00113c7b:if (*(int*)( param_2 + 0x28 ) == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         local_80 = (long*)0x0;
         goto LAB_00113e4b;
      }
      _resize_and_rehash((HashMap<StringName,CharString,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,CharString>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
   } else {
      LAB_00113b42:iVar28 = *(int*)( param_2 + 0x2c );
      if (iVar28 != 0) {
         LAB_00113b4e:uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
         uVar32 = CONCAT44(0, uVar3);
         lVar25 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         if (*(long*)pSVar29 == 0) {
            uVar24 = StringName::get_empty_hash();
         } else {
            uVar24 = *(uint*)( *(long*)pSVar29 + 0x20 );
         }
         if (uVar24 == 0) {
            uVar24 = 1;
         }
         uVar35 = 0;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = (ulong)uVar24 * lVar25;
         auVar14._8_8_ = 0;
         auVar14._0_8_ = uVar32;
         lVar30 = SUB168(auVar6 * auVar14, 8);
         uVar33 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar30 * 4 );
         uVar27 = SUB164(auVar6 * auVar14, 8);
         if (uVar33 != 0) {
            do {
               if (( uVar33 == uVar24 ) && ( *(long*)( *(long*)( *(long*)( param_2 + 8 ) + lVar30 * 8 ) + 0x10 ) == *(long*)pSVar29 )) {
                  local_80 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar27 * 8 );
                  if (local_80[3] != *(long*)in_RCX) {
                     CowData<char>::_ref((CowData<char>*)( local_80 + 3 ), in_RCX);
                     local_80 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar27 * 8 );
                  }
                  goto LAB_00113e4b;
               }
               uVar35 = uVar35 + 1;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(uVar27 + 1) * lVar25;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = uVar32;
               lVar30 = SUB168(auVar7 * auVar15, 8);
               uVar33 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar30 * 4 );
               uVar27 = SUB164(auVar7 * auVar15, 8);
            } while ( ( uVar33 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar33 * lVar25,auVar16._8_8_ = 0,auVar16._0_8_ = uVar32,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar3 + uVar27 ) - SUB164(auVar8 * auVar16, 8)) * lVar25,auVar17._8_8_ = 0,auVar17._0_8_ = uVar32,uVar35 <= SUB164(auVar9 * auVar17, 8) );
         }
         iVar28 = *(int*)( param_2 + 0x2c );
      }
      LAB_00113c59:if ((float)uVar23 * __LC88 < (float)( iVar28 + 1 )) goto LAB_00113c7b;
   }
   StringName::StringName((StringName_conflict*)&local_58, pSVar29);
   local_50[0] = 0;
   if (*(long*)in_RCX != 0) {
      CowData<char>::_ref((CowData<char>*)local_50, in_RCX);
   }
   local_80 = (long*)operator_new(0x20, "");
   *local_80 = 0;
   local_80[1] = 0;
   StringName::StringName((StringName_conflict*)( local_80 + 2 ), (StringName_conflict*)&local_58);
   local_80[3] = 0;
   if (( local_50[0] != 0 ) && ( CowData<char>::_ref((CowData<char>*)( local_80 + 3 ), (CowData*)local_50),lVar25 = local_50[0],local_50[0] != 0 )) {
      LOCK();
      plVar1 = (long*)( local_50[0] + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50[0] = 0;
         Memory::free_static((void*)( lVar25 + -0x10 ), false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
      StringName::unref();
   }
   puVar4 = *(undefined8**)( param_2 + 0x20 );
   if (puVar4 == (undefined8*)0x0) {
      *(long**)( param_2 + 0x18 ) = local_80;
      *(long**)( param_2 + 0x20 ) = local_80;
      LAB_00113d6c:lVar25 = *(long*)pSVar29;
      if (lVar25 != 0) goto LAB_00113d79;
      LAB_00113ea1:uVar23 = StringName::get_empty_hash();
   } else {
      if (in_R8B == '\0') {
         *puVar4 = local_80;
         local_80[1] = (long)puVar4;
         *(long**)( param_2 + 0x20 ) = local_80;
         goto LAB_00113d6c;
      }
      lVar25 = *(long*)( param_2 + 0x18 );
      *(long**)( lVar25 + 8 ) = local_80;
      *local_80 = lVar25;
      lVar25 = *(long*)pSVar29;
      *(long**)( param_2 + 0x18 ) = local_80;
      if (lVar25 == 0) goto LAB_00113ea1;
      LAB_00113d79:uVar23 = *(uint*)( lVar25 + 0x20 );
   }
   lVar25 = *(long*)( param_2 + 0x10 );
   if (uVar23 == 0) {
      uVar23 = 1;
   }
   uVar32 = (ulong)uVar23;
   uVar33 = 0;
   lVar30 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar34 = CONCAT44(0, uVar3);
   auVar10._8_8_ = 0;
   auVar10._0_8_ = uVar32 * lVar30;
   auVar18._8_8_ = 0;
   auVar18._0_8_ = uVar34;
   lVar31 = SUB168(auVar10 * auVar18, 8);
   lVar5 = *(long*)( param_2 + 8 );
   puVar2 = (uint*)( lVar25 + lVar31 * 4 );
   iVar28 = SUB164(auVar10 * auVar18, 8);
   uVar24 = *puVar2;
   plVar1 = local_80;
   while (uVar24 != 0) {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar24 * lVar30;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar34;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(( iVar28 + uVar3 ) - SUB164(auVar11 * auVar19, 8)) * lVar30;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar34;
      uVar23 = SUB164(auVar12 * auVar20, 8);
      plVar36 = plVar1;
      if (uVar23 < uVar33) {
         *puVar2 = (uint)uVar32;
         uVar32 = (ulong)uVar24;
         puVar4 = (undefined8*)( lVar5 + lVar31 * 8 );
         plVar36 = (long*)*puVar4;
         *puVar4 = plVar1;
         uVar33 = uVar23;
      }
      uVar23 = (uint)uVar32;
      uVar33 = uVar33 + 1;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = ( ulong )(iVar28 + 1) * lVar30;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar34;
      lVar31 = SUB168(auVar13 * auVar21, 8);
      puVar2 = (uint*)( lVar25 + lVar31 * 4 );
      iVar28 = SUB164(auVar13 * auVar21, 8);
      plVar1 = plVar36;
      uVar24 = *puVar2;
   };
   *(long**)( lVar5 + lVar31 * 8 ) = plVar1;
   *puVar2 = uVar23;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_00113e4b:*(long**)param_1 = local_80;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ShaderRD::Version::Version(ShaderRD::Version const&) */void ShaderRD::Version::Version(Version *this, Version *param_1) {
   uint uVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   long in_FS_OFFSET;
   bool bVar5;
   StringName_conflict aSStack_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   if (*(long*)param_1 != 0) {
      CowData<char>::_ref((CowData<char>*)this, (CowData*)param_1);
   }
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 8*i + 8 ) ) = 0;
      if (*(long*)( param_1 + ( 8*i + 8 ) ) != 0) {
         CowData<char>::_ref((CowData<char>*)( this + ( 8*i + 8 ) ), (CowData*)( param_1 + ( 8*i + 8 ) ));
      }
   }
   uVar1 = *(uint*)( param_1 + 0x48 );
   *(undefined8*)( this + 0x48 ) = 0;
   *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
   uVar1 = *(uint*)( hash_table_size_primes + (ulong)uVar1 * 4 );
   *(undefined1(*) [16])( this + 0x38 ) = (undefined1[16])0x0;
   lVar2 = 1;
   if (5 < uVar1) {
      do {
         if (uVar1 <= *(uint*)( hash_table_size_primes + lVar2 * 4 )) {
            *(int*)( this + 0x48 ) = (int)lVar2;
            goto LAB_00114160;
         }
         lVar2 = lVar2 + 1;
      } while ( lVar2 != 0x1d );
      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   }
   LAB_00114160:if (( *(int*)( param_1 + 0x4c ) != 0 ) && ( plVar4 = *(long**)( param_1 + 0x38 ) ),plVar4 != (long*)0x0) {
      do {
         HashMap<StringName,CharString,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,CharString>>>::insert(aSStack_38, this + 0x20, (bool)( (char)plVar4 + '\x10' ));
         plVar4 = (long*)*plVar4;
      } while ( plVar4 != (long*)0x0 );
   }
   *(undefined8*)( this + 0x58 ) = 0;
   if (*(long*)( param_1 + 0x58 ) != 0) {
      CowData<CharString>::_unref((CowData<CharString>*)( this + 0x58 ));
      if (*(long*)( param_1 + 0x58 ) != 0) {
         plVar4 = (long*)( *(long*)( param_1 + 0x58 ) + -0x10 );
         do {
            lVar2 = *plVar4;
            if (lVar2 == 0) goto LAB_001141e7;
            LOCK();
            lVar3 = *plVar4;
            bVar5 = lVar2 == lVar3;
            if (bVar5) {
               *plVar4 = lVar2 + 1;
               lVar3 = lVar2;
            }
            UNLOCK();
         } while ( !bVar5 );
         if (lVar3 != -1) {
            *(undefined8*)( this + 0x58 ) = *(undefined8*)( param_1 + 0x58 );
         }
      }
   }
   LAB_001141e7:*(undefined8*)( this + 0x68 ) = 0;
   plVar4 = (long*)( *(long*)( param_1 + 0x68 ) + -0x10 );
   if (*(long*)( param_1 + 0x68 ) != 0) {
      do {
         lVar2 = *plVar4;
         if (lVar2 == 0) goto LAB_0011421f;
         LOCK();
         lVar3 = *plVar4;
         bVar5 = lVar2 == lVar3;
         if (bVar5) {
            *plVar4 = lVar2 + 1;
            lVar3 = lVar2;
         }
         UNLOCK();
      } while ( !bVar5 );
      if (lVar3 != -1) {
         *(undefined8*)( this + 0x68 ) = *(undefined8*)( param_1 + 0x68 );
      }
   }
   LAB_0011421f:*(undefined8*)( this + 0x78 ) = 0;
   if (*(long*)( param_1 + 0x78 ) != 0) {
      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>>*)( this + 0x78 ));
      if (*(long*)( param_1 + 0x78 ) != 0) {
         plVar4 = (long*)( *(long*)( param_1 + 0x78 ) + -0x10 );
         do {
            lVar2 = *plVar4;
            if (lVar2 == 0) goto LAB_00114268;
            LOCK();
            lVar3 = *plVar4;
            bVar5 = lVar2 == lVar3;
            if (bVar5) {
               *plVar4 = lVar2 + 1;
               lVar3 = lVar2;
            }
            UNLOCK();
         } while ( !bVar5 );
         if (lVar3 != -1) {
            *(undefined8*)( this + 0x78 ) = *(undefined8*)( param_1 + 0x78 );
         }
      }
   }
   LAB_00114268:*(undefined8*)( this + 0x88 ) = 0;
   plVar4 = (long*)( *(long*)( param_1 + 0x88 ) + -0x10 );
   if (*(long*)( param_1 + 0x88 ) != 0) {
      do {
         lVar2 = *plVar4;
         if (lVar2 == 0) goto LAB_001142ac;
         LOCK();
         lVar3 = *plVar4;
         bVar5 = lVar2 == lVar3;
         if (bVar5) {
            *plVar4 = lVar2 + 1;
            lVar3 = lVar2;
         }
         UNLOCK();
      } while ( !bVar5 );
      if (lVar3 != -1) {
         *(undefined8*)( this + 0x88 ) = *(undefined8*)( param_1 + 0x88 );
      }
   }
   LAB_001142ac:*(undefined2*)( this + 0x90 ) = *(undefined2*)( param_1 + 0x90 );
   this[0x92] = param_1[0x92];
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* RID_Alloc<ShaderRD::Version, false>::make_rid(ShaderRD::Version const&) */ulong RID_Alloc<ShaderRD::Version,false>::make_rid(RID_Alloc<ShaderRD::Version,false> *this, Version *param_1) {
   void *pvVar1;
   code *pcVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   uint uVar6;
   uint uVar7;
   uint uVar8;
   uint uVar9;
   undefined4 *puVar10;
   undefined8 uVar11;
   ulong uVar12;
   Version *this_00;
   char *pcVar13;
   long lVar14;
   ulong uVar15;
   uVar9 = *(uint*)( this + 0x20 );
   if (uVar9 == *(uint*)( this + 0x1c )) {
      if (uVar9 == 0) {
         lVar14 = 0;
         uVar15 = 8;
      } else {
         uVar15 = ( ulong )((int)( (ulong)uVar9 / ( ulong ) * (uint*)( this + 0x18 ) ) + 1) << 3;
         lVar14 = ( (ulong)uVar9 / ( ulong ) * (uint*)( this + 0x18 ) ) * 8;
      }
      lVar3 = Memory::realloc_static(*(void**)( this + 8 ), uVar15, false);
      *(long*)( this + 8 ) = lVar3;
      uVar11 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0xa0, false);
      pvVar1 = *(void**)( this + 0x10 );
      *(undefined8*)( lVar3 + lVar14 ) = uVar11;
      lVar4 = Memory::realloc_static(pvVar1, uVar15, false);
      *(long*)( this + 0x10 ) = lVar4;
      uVar11 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) << 2, false);
      uVar6 = *(uint*)( this + 0x18 );
      lVar3 = *(long*)( this + 0x10 );
      *(undefined8*)( lVar4 + lVar14 ) = uVar11;
      if (uVar6 != 0) {
         lVar4 = *(long*)( lVar3 + lVar14 );
         lVar5 = 0;
         puVar10 = (undefined4*)( *(long*)( *(long*)( this + 8 ) + lVar14 ) + 0x98 );
         do {
            *puVar10 = 0xffffffff;
            puVar10 = puVar10 + 0x28;
            *(int*)( lVar4 + lVar5 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar5;
            uVar6 = *(uint*)( this + 0x18 );
            lVar5 = lVar5 + 1;
         } while ( (uint)lVar5 < uVar6 );
      }
      *(uint*)( this + 0x1c ) = *(int*)( this + 0x1c ) + uVar6;
      uVar9 = *(uint*)( this + 0x20 );
   } else {
      lVar3 = *(long*)( this + 0x10 );
      uVar6 = *(uint*)( this + 0x18 );
   }
   uVar9 = *(uint*)( *(long*)( lVar3 + ( (ulong)uVar9 / (ulong)uVar6 ) * 8 ) + ( (ulong)uVar9 % (ulong)uVar6 ) * 4 );
   uVar15 = (ulong)uVar9;
   LOCK();
   UNLOCK();
   uVar7 = (int)RID_AllocBase::base_id + 1;
   uVar8 = uVar7 & 0x7fffffff;
   if (uVar8 != 0x7fffffff) {
      lVar14 = *(long*)( this + 8 );
      RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
      *(uint*)( ( uVar15 % (ulong)uVar6 ) * 0xa0 + *(long*)( lVar14 + ( uVar15 / uVar6 ) * 8 ) + 0x98 ) = uVar8 | 0x80000000;
      *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
      uVar12 = CONCAT44(uVar7, uVar9) & 0x7fffffffffffffff;
      if (( uVar12 != 0 ) && ( (uint)uVar12 < *(uint*)( this + 0x1c ) )) {
         this_00 = (Version*)( ( uVar15 % ( ulong ) * (uint*)( this + 0x18 ) ) * 0xa0 + *(long*)( lVar14 + ( uVar15 / *(uint*)( this + 0x18 ) ) * 8 ) );
         if ((int)*(uint*)( this_00 + 0x98 ) < 0) {
            uVar9 = ( uint )(uVar12 >> 0x20);
            if (uVar9 == ( *(uint*)( this_00 + 0x98 ) & 0x7fffffff )) {
               *(uint*)( this_00 + 0x98 ) = uVar9;
               ShaderRD::Version::Version(this_00, param_1);
               return uVar12;
            }
            pcVar13 = "Attempting to initialize the wrong RID";
            uVar11 = 0xfc;
         } else {
            pcVar13 = "Initializing already initialized RID";
            uVar11 = 0xf8;
         }
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", uVar11, "Method/function failed. Returning: nullptr", pcVar13, 0, 0);
      }
      _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
      return uVar12;
   }
   RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
   _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0xa9, "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.", "Overflow in RID validator", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}/* ShaderRD::_add_stage(char const*, ShaderRD::StageType) */void ShaderRD::_GLOBAL__sub_I__add_stage(void) {
   shader_cache_dir = 0;
   __cxa_atexit(String::~String, &shader_cache_dir, &__dso_handle);
   return;
}/* WARNING: Control flow encountered bad instruction data *//* ShaderRD::Version::Version(ShaderRD::Version const&) */void ShaderRD::Version::Version(Version *this, Version *param_1) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<ShaderRD::Version, false>::~RID_Alloc() */void RID_Alloc<ShaderRD::Version,false>::~RID_Alloc(RID_Alloc<ShaderRD::Version,false> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* ShaderRD::Version::~Version() */void ShaderRD::Version::~Version(Version *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* StringBuilder::~StringBuilder() */void StringBuilder::~StringBuilder(StringBuilder *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* String::~String() */void String::~String(String *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* WorkerThreadPool::GroupUserData<ShaderRD, void (ShaderRD::*)(unsigned int,
   ShaderRD::CompileData), ShaderRD::CompileData>::~GroupUserData() */void WorkerThreadPool::GroupUserData<ShaderRD,void(ShaderRD::*)(unsigned_int, ShaderRD::CompileData),ShaderRD::CompileData>::~GroupUserData(GroupUserData<ShaderRD,void(ShaderRD::*)(unsigned_int, ShaderRD::CompileData),ShaderRD::CompileData> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName_conflict *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
