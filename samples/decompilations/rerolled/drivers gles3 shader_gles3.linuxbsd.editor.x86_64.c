/* LocalVector<ShaderGLES3::TextureUniformData, unsigned int, false, false>::resize(unsigned int)
   [clone .part.0] */void LocalVector<ShaderGLES3::TextureUniformData,unsigned_int,false,false>::resize(uint param_1) {
   code *pcVar1;
   _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
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
               pbVar12 = &_LC4;
               LAB_0010016c:if (pbVar10 == (byte*)0x0) {
                  lVar5 = 0;
                  uVar3 = **(uint**)( lVar6 + 0x10 );
                  if (uVar3 != 0 || uVar8 != 0) {
                     do {
                        if (uVar8 == 0) goto LAB_00100120;
                        if (uVar3 == 0) break;
                        if (uVar8 < uVar3) goto LAB_00100120;
                        if (uVar3 < uVar8) break;
                        uVar8 = (uint)(char)pbVar12[lVar5 + 1];
                        uVar3 = ( *(uint**)( lVar6 + 0x10 ) )[lVar5 + 1];
                        lVar5 = lVar5 + 1;
                     }
 while ( uVar8 != 0 || uVar3 != 0 );
                  }

               }
 else {
                  uVar3 = (uint)(char)*pbVar10;
                  bVar4 = (byte)uVar8 | *pbVar10;
                  LAB_001001be:if (bVar4 != 0) {
                     lVar6 = 1;
                     do {
                        if (uVar8 == 0) goto LAB_00100120;
                        if (uVar3 == 0) break;
                        if (uVar8 < uVar3) goto LAB_00100120;
                        if (uVar3 < uVar8) break;
                        pbVar1 = pbVar12 + lVar6;
                        uVar8 = (uint)(char)*pbVar1;
                        pbVar2 = pbVar10 + lVar6;
                        uVar3 = (uint)(char)*pbVar2;
                        lVar6 = lVar6 + 1;
                     }
 while ( *pbVar1 != 0 || *pbVar2 != 0 );
                  }

               }

            }

         }
 else {
            pbVar12 = *(byte**)( lVar5 + 8 );
            if (lVar6 == 0) {
               if (pbVar12 != (byte*)0x0) {
                  bVar4 = *pbVar12;
                  uVar8 = (uint)(char)bVar4;
                  pbVar10 = &_LC4;
                  uVar3 = 0;
                  goto LAB_001001be;
               }

               uVar8 = 0;
               pbVar10 = &_LC4;
            }
 else {
               pbVar10 = *(byte**)( lVar6 + 8 );
               if (pbVar12 != (byte*)0x0) {
                  uVar8 = (uint)(char)*pbVar12;
                  goto LAB_0010016c;
               }

               if (pbVar10 == (byte*)0x0) {
                  lVar7 = 4;
                  uVar8 = **(uint**)( lVar6 + 0x10 );
                  uVar3 = **(uint**)( lVar5 + 0x10 );
                  if (uVar8 != 0 || uVar3 != 0) {
                     do {
                        if (uVar3 == 0) goto LAB_00100120;
                        if (uVar8 == 0) break;
                        if (uVar3 < uVar8) goto LAB_00100120;
                        if (uVar8 < uVar3) break;
                        uVar3 = *(uint*)( (long)*(uint**)( lVar5 + 0x10 ) + lVar7 );
                        uVar8 = *(uint*)( (long)*(uint**)( lVar6 + 0x10 ) + lVar7 );
                        lVar7 = lVar7 + 4;
                     }
 while ( uVar3 != 0 || uVar8 != 0 );
                  }

                  goto LAB_00100148;
               }

               uVar8 = (uint)(char)*pbVar10;
            }

            lVar6 = 0;
            uVar3 = **(uint**)( lVar5 + 0x10 );
            if (uVar3 != 0 || uVar8 != 0) {
               do {
                  if (uVar3 == 0) goto LAB_00100120;
                  if (uVar8 == 0) break;
                  if (uVar3 < uVar8) goto LAB_00100120;
                  if (uVar8 < uVar3) break;
                  uVar3 = ( *(uint**)( lVar5 + 0x10 ) )[lVar6 + 1];
                  uVar8 = (uint)(char)pbVar10[lVar6 + 1];
                  lVar6 = lVar6 + 1;
               }
 while ( uVar3 != 0 || uVar8 != 0 );
            }

         }

         LAB_00100148:lVar9 = lVar11;
         this =
         pSVar13;
         lVar11 = lVar11 + 1;
         LAB_00100120:lVar11 = lVar11 * 2;
         StringName::operator =((StringName_conflict*)( param_5 + ( lVar14 + param_1 ) * 8 ), this);
         lVar14 = lVar9;
      }
 while ( lVar11 < param_3 );
      pSVar13 = this;
      if (lVar11 == param_3) goto LAB_00100588;
   }
 else {
      this(StringName_conflict * )(param_5 + ( param_2 + param_1 ) * 8);
      if (lVar11 != param_3) {
         StringName::StringName((StringName_conflict*)&local_48, param_4);
         goto LAB_00100362;
      }

      LAB_00100588:lVar9 = lVar11 + -1;
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
            pbVar12 = &_LC4;
            if (pbVar10 != (byte*)0x0) goto LAB_00100423;
            LAB_001003c5:uVar8 = **(uint**)( local_48 + 0x10 );
            if (uVar8 != 0 || uVar3 != 0) {
               lVar11 = 0;
               while (uVar3 != 0) {
                  if (uVar8 == 0) goto LAB_00100358;
                  if (uVar3 < uVar8) break;
                  if (uVar8 < uVar3) goto LAB_00100358;
                  uVar3 = (uint)(char)pbVar12[lVar11 + 1];
                  uVar8 = ( *(uint**)( local_48 + 0x10 ) )[lVar11 + 1];
                  lVar11 = lVar11 + 1;
                  if (uVar3 == 0 && uVar8 == 0) goto LAB_00100358;
               }
;
               goto LAB_00100320;
            }

         }

         LAB_00100358 = (StringName_conflict*)( param_5 + ( lVar9 + param_1 ) * 8 );
         break;
      }

      pbVar12 = *(byte**)( lVar11 + 8 );
      if (local_48 == 0) {
         uVar8 = 0;
         pbVar10 = &_LC4;
         if (pbVar12 != (byte*)0x0) {
            bVar4 = *pbVar12;
            uVar8 = (uint)(char)bVar4;
            pbVar10 = &_LC4;
            uVar3 = 0;
            goto LAB_00100429;
         }

         LAB_0010048a:uVar3 = **(uint**)( lVar11 + 0x10 );
         if (uVar3 == 0 && uVar8 == 0) goto LAB_00100358;
         lVar6 = 0;
         while (uVar3 != 0) {
            if (uVar8 == 0) goto LAB_00100358;
            if (uVar3 < uVar8) break;
            if (uVar8 < uVar3) goto LAB_00100358;
            uVar3 = ( *(uint**)( lVar11 + 0x10 ) )[lVar6 + 1];
            uVar8 = (uint)(char)pbVar10[lVar6 + 1];
            lVar6 = lVar6 + 1;
            if (uVar3 == 0 && uVar8 == 0) goto LAB_00100358;
         }
;
      }
 else {
         pbVar10 = *(byte**)( local_48 + 8 );
         if (pbVar12 == (byte*)0x0) {
            if (pbVar10 != (byte*)0x0) {
               uVar8 = (uint)(char)*pbVar10;
               goto LAB_0010048a;
            }

            uVar8 = **(uint**)( local_48 + 0x10 );
            uVar3 = **(uint**)( lVar11 + 0x10 );
            if (uVar8 == 0 && uVar3 == 0) goto LAB_00100358;
            lVar6 = 4;
            while (uVar3 != 0) {
               if (uVar8 == 0) goto LAB_00100358;
               if (uVar3 < uVar8) break;
               if (uVar8 < uVar3) goto LAB_00100358;
               uVar3 = *(uint*)( (long)*(uint**)( lVar11 + 0x10 ) + lVar6 );
               uVar8 = *(uint*)( (long)*(uint**)( local_48 + 0x10 ) + lVar6 );
               lVar6 = lVar6 + 4;
               if (uVar3 == 0 && uVar8 == 0) {
                  this(StringName_conflict * )(param_5 + ( param_1 + lVar9 ) * 8);
                  goto LAB_00100362;
               }

            }
;
         }
 else {
            uVar3 = (uint)(char)*pbVar12;
            uVar8 = uVar3;
            if (pbVar10 == (byte*)0x0) goto LAB_001003c5;
            LAB_00100423:uVar3 = (uint)(char)*pbVar10;
            bVar4 = (byte)uVar8 | *pbVar10;
            LAB_00100429:if (bVar4 == 0) goto LAB_00100358;
            lVar11 = 1;
            while (uVar8 != 0) {
               if (uVar3 == 0) goto LAB_00100358;
               if (uVar8 < uVar3) break;
               if (uVar3 < uVar8) goto LAB_00100358;
               pbVar1 = pbVar12 + lVar11;
               uVar8 = (uint)(char)*pbVar1;
               pbVar2 = pbVar10 + lVar11;
               uVar3 = (uint)(char)*pbVar2;
               lVar11 = lVar11 + 1;
               if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_00100358;
            }
;
         }

      }

      LAB_00100320:StringName::operator =((StringName_conflict*)( param_5 + ( lVar9 + param_1 ) * 8 ), this);
      lVar11 = ( lVar14 + -1 ) - ( lVar14 + -1 >> 0x3f );
      lVar9 = lVar14;
   }
;
   LAB_00100362:local_50 = (StringName_conflict*)&local_48;
   StringName::operator =(this, local_50);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SortArray<StringName, StringName::AlphCompare, true>::unguarded_linear_insert(long, StringName,
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
         if (lVar6 == 0) goto LAB_001007cb;
         pbVar10 = *(byte**)( lVar6 + 8 );
         uVar8 = 0;
         pbVar11 = &_LC4;
         LAB_001006d1:if (pbVar10 == (byte*)0x0) {
            uVar9 = **(uint**)( lVar6 + 0x10 );
            if (uVar9 == 0 && uVar8 == 0) goto LAB_001007cb;
            lVar5 = 0;
            while (uVar8 != 0) {
               if (uVar9 == 0) goto LAB_001007cb;
               if (uVar8 < uVar9) break;
               if (uVar9 < uVar8) goto LAB_001007cb;
               uVar8 = (uint)(char)pbVar11[lVar5 + 1];
               uVar9 = ( *(uint**)( lVar6 + 0x10 ) )[lVar5 + 1];
               lVar5 = lVar5 + 1;
               if (uVar8 == 0 && uVar9 == 0) goto LAB_001007cb;
            }
;
         }
 else {
            uVar9 = (uint)(char)*pbVar10;
            bVar4 = (byte)uVar8 | *pbVar10;
            LAB_0010072e:if (bVar4 == 0) goto LAB_001007cb;
            lVar6 = 1;
            while (uVar8 != 0) {
               if (uVar9 == 0) goto LAB_001007cb;
               if (uVar8 < uVar9) break;
               if (uVar9 < uVar8) goto LAB_001007cb;
               pbVar1 = pbVar11 + lVar6;
               uVar8 = (uint)(char)*pbVar1;
               pbVar2 = pbVar10 + lVar6;
               uVar9 = (uint)(char)*pbVar2;
               lVar6 = lVar6 + 1;
               if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_001007cb;
            }
;
         }

      }
 else {
         pbVar11 = *(byte**)( lVar5 + 8 );
         if (lVar6 == 0) {
            if (pbVar11 != (byte*)0x0) {
               bVar4 = *pbVar11;
               uVar8 = (uint)(char)bVar4;
               pbVar10 = &_LC4;
               uVar9 = 0;
               goto LAB_0010072e;
            }

            uVar8 = 0;
            pbVar10 = &_LC4;
            LAB_00100647:uVar9 = **(uint**)( lVar5 + 0x10 );
            if (uVar9 == 0 && uVar8 == 0) goto LAB_001007cb;
            lVar6 = 0;
            while (uVar9 != 0) {
               if (uVar8 == 0) goto LAB_001007cb;
               if (uVar9 < uVar8) break;
               if (uVar8 < uVar9) goto LAB_001007cb;
               uVar9 = ( *(uint**)( lVar5 + 0x10 ) )[lVar6 + 1];
               uVar8 = (uint)(char)pbVar10[lVar6 + 1];
               lVar6 = lVar6 + 1;
               if (uVar9 == 0 && uVar8 == 0) goto LAB_001007cb;
            }
;
         }
 else {
            pbVar10 = *(byte**)( lVar6 + 8 );
            if (pbVar11 != (byte*)0x0) {
               uVar8 = (uint)(char)*pbVar11;
               goto LAB_001006d1;
            }

            if (pbVar10 != (byte*)0x0) {
               uVar8 = (uint)(char)*pbVar10;
               goto LAB_00100647;
            }

            uVar8 = **(uint**)( lVar6 + 0x10 );
            uVar9 = **(uint**)( lVar5 + 0x10 );
            if (uVar8 == 0 && uVar9 == 0) goto LAB_001007cb;
            lVar7 = 4;
            while (uVar9 != 0) {
               if (uVar8 == 0) goto LAB_001007cb;
               if (uVar9 < uVar8) break;
               if (uVar8 < uVar9) goto LAB_001007cb;
               uVar9 = *(uint*)( (long)*(uint**)( lVar5 + 0x10 ) + lVar7 );
               uVar8 = *(uint*)( (long)*(uint**)( lVar6 + 0x10 ) + lVar7 );
               lVar7 = lVar7 + 4;
               if (uVar9 == 0 && uVar8 == 0) goto LAB_001007cb;
            }
;
         }

      }

      param_1 = param_1 + -1;
      if (param_1 == 0) {
         param_1 = 1;
         _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
         LAB_001007cb:StringName::operator =((StringName_conflict*)( param_3 + param_1 * 8 ), param_2);
         return;
      }

      StringName::operator =(pSVar3 + 8, pSVar3);
      lVar5 = *(long*)param_2;
      lVar6 = *(long*)( pSVar3 + -8 );
      pSVar3 = pSVar3 + -8;
   }
 while ( true );
}
/* SortArray<StringName, StringName::AlphCompare, true>::linear_insert(long, long, StringName*)
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
         pbVar9 = &_LC4;
         LAB_001009a8:if (pbVar8 == (byte*)0x0) {
            uVar7 = **(uint**)( lVar4 + 0x10 );
            if (uVar6 != 0 || uVar7 != 0) {
               lVar5 = 0;
               do {
                  if (uVar6 == 0) goto LAB_00100900;
                  if (uVar7 == 0) break;
                  if (uVar6 < uVar7) goto LAB_00100900;
                  if (uVar7 < uVar6) break;
                  uVar6 = (uint)(char)pbVar9[lVar5 + 1];
                  uVar7 = ( *(uint**)( lVar4 + 0x10 ) )[lVar5 + 1];
                  lVar5 = lVar5 + 1;
               }
 while ( uVar6 != 0 || uVar7 != 0 );
            }

         }
 else {
            uVar7 = (uint)(char)*pbVar8;
            bVar3 = *pbVar8 | (byte)uVar6;
            LAB_00100a50:if (bVar3 != 0) {
               lVar4 = 1;
               do {
                  if (uVar6 == 0) goto LAB_00100900;
                  if (uVar7 == 0) break;
                  if (uVar6 < uVar7) goto LAB_00100900;
                  if (uVar7 < uVar6) break;
                  pbVar1 = pbVar9 + lVar4;
                  uVar6 = (uint)(char)*pbVar1;
                  pbVar2 = pbVar8 + lVar4;
                  uVar7 = (uint)(char)*pbVar2;
                  lVar4 = lVar4 + 1;
               }
 while ( *pbVar1 != 0 || *pbVar2 != 0 );
            }

         }

      }

   }
 else {
      lVar4 = *(long*)this;
      pbVar9 = *(byte**)( local_50 + 8 );
      if (lVar4 == 0) {
         if (pbVar9 != (byte*)0x0) {
            bVar3 = *pbVar9;
            uVar6 = (uint)(char)bVar3;
            pbVar8 = &_LC4;
            uVar7 = 0;
            goto LAB_00100a50;
         }

         uVar6 = 0;
         pbVar8 = &_LC4;
      }
 else {
         pbVar8 = *(byte**)( lVar4 + 8 );
         if (pbVar9 != (byte*)0x0) {
            uVar6 = (uint)(char)*pbVar9;
            goto LAB_001009a8;
         }

         if (pbVar8 == (byte*)0x0) {
            uVar6 = **(uint**)( lVar4 + 0x10 );
            uVar7 = **(uint**)( local_50 + 0x10 );
            if (uVar6 != 0 || uVar7 != 0) {
               lVar5 = 4;
               do {
                  if (uVar7 == 0) goto LAB_00100900;
                  if (uVar6 == 0) break;
                  if (uVar7 < uVar6) goto LAB_00100900;
                  if (uVar6 < uVar7) break;
                  uVar7 = *(uint*)( (long)*(uint**)( local_50 + 0x10 ) + lVar5 );
                  uVar6 = *(uint*)( (long)*(uint**)( lVar4 + 0x10 ) + lVar5 );
                  lVar5 = lVar5 + 4;
               }
 while ( uVar7 != 0 || uVar6 != 0 );
            }

            goto LAB_001009f8;
         }

         uVar6 = (uint)(char)*pbVar8;
      }

      uVar7 = **(uint**)( local_50 + 0x10 );
      if (uVar6 != 0 || uVar7 != 0) {
         lVar4 = 0;
         do {
            if (uVar7 == 0) goto LAB_00100900;
            if (uVar6 == 0) break;
            if (uVar7 < uVar6) goto LAB_00100900;
            if (uVar6 < uVar7) break;
            uVar7 = ( *(uint**)( local_50 + 0x10 ) )[lVar4 + 1];
            uVar6 = (uint)(char)pbVar8[lVar4 + 1];
            lVar4 = lVar4 + 1;
         }
 while ( uVar7 != 0 || uVar6 != 0 );
      }

   }

   LAB_001009f8:StringName::StringName((StringName_conflict*)&local_48, (StringName_conflict*)&local_50);
   unguarded_linear_insert(param_2, (StringName_conflict*)&local_48, param_3);
   if (StringName::configured == '\0') goto LAB_00100946;
   if (local_48 != 0) {
      StringName::unref();
      goto LAB_00100932;
   }

   goto LAB_00100936;
   LAB_00100900:this_00 = param_3 + param_2 * 8;
   if (param_1 < param_2) {
      do {
         param_2 = param_2 + -1;
         StringName::operator =(this_00, this_00 + -8);
         this_00 = this_00 + -8;
      }
 while ( param_1 != param_2 );
   }

   StringName::operator =(this, (StringName_conflict*)&local_50);
   LAB_00100932:if (StringName::configured == '\0') goto LAB_00100946;
   LAB_00100936:if (local_50 != 0) {
      StringName::unref();
   }

   LAB_00100946:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* SortArray<StringName, StringName::AlphCompare, true>::median_of_3(StringName const&, StringName
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
      pbVar15 = &_LC4;
      pbVar16 = &_LC4;
      if (lVar13 == 0) {
         LAB_00101430:if (lVar9 != 0) {
            pbVar17 = *(byte**)( lVar9 + 8 );
            LAB_00100cfe:uVar5 = (uint)(char)*pbVar16;
            uVar4 = uVar5;
            goto LAB_00100d04;
         }

         uVar5 = (uint)(char)*pbVar16;
         uVar6 = 0;
         uVar12 = 0;
         pbVar17 = &_LC4;
         if (*pbVar16 == 0) goto LAB_00100ff9;
         LAB_00100e52:lVar8 = 1;
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
         pbVar16 = &_LC4;
         LAB_00100c82:if (pbVar15 != (byte*)0x0) {
            uVar12 = (uint)(char)*pbVar15;
            bVar11 = *pbVar15 | (byte)uVar4;
            LAB_00100d70:if (bVar11 != 0) {
               lVar14 = 1;
               do {
                  if (uVar4 == 0) goto joined_r0x00100db8;
                  if (uVar12 == 0) break;
                  if (uVar4 < uVar12) goto joined_r0x00100db8;
                  if (uVar12 < uVar4) break;
                  pbVar17 = pbVar16 + lVar14;
                  uVar4 = (uint)(char)*pbVar17;
                  pbVar2 = pbVar15 + lVar14;
                  uVar12 = (uint)(char)*pbVar2;
                  lVar14 = lVar14 + 1;
               }
 while ( *pbVar17 != 0 || *pbVar2 != 0 );
               goto LAB_00100ce8;
            }

            goto LAB_00101430;
         }

         uVar12 = **(uint**)( lVar13 + 0x10 );
         if (uVar4 != 0 || uVar12 != 0) {
            lVar14 = 0;
            do {
               if (uVar4 == 0) goto joined_r0x00100db8;
               if (uVar12 == 0) break;
               if (uVar4 < uVar12) goto joined_r0x00100db8;
               if (uVar12 < uVar4) break;
               uVar4 = (uint)(char)pbVar16[lVar14 + 1];
               uVar12 = ( *(uint**)( lVar13 + 0x10 ) )[lVar14 + 1];
               lVar14 = lVar14 + 1;
            }
 while ( uVar4 != 0 || uVar12 != 0 );
            goto LAB_00100ce8;
         }

         if (lVar9 == 0) goto LAB_00101051;
         pbVar17 = *(byte**)( lVar9 + 8 );
         uVar5 = 0;
         LAB_00100d04:if (pbVar17 != (byte*)0x0) {
            uVar6 = (uint)(char)*pbVar17;
            bVar11 = (byte)uVar4 | *pbVar17;
            goto LAB_00100e49;
         }

         puVar10 = *(uint**)( lVar9 + 0x10 );
         uVar4 = *puVar10;
         uVar6 = uVar4 | uVar5;
         if (uVar6 == 0) goto LAB_00101336;
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

      LAB_00100fe0:if (pbVar15 == (byte*)0x0) {
         if (pbVar17 == (byte*)0x0) {
            puVar10 = *(uint**)( lVar9 + 0x10 );
            LAB_0010133f:uVar4 = *puVar10;
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
         LAB_001011c6:uVar4 = **(uint**)( lVar13 + 0x10 );
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
         LAB_00101228:uVar4 = (uint)(char)*pbVar15;
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
            pbVar15 = &_LC4;
            goto LAB_00100d70;
         }

         uVar4 = 0;
         pbVar15 = &_LC4;
         LAB_00100b69:uVar12 = **(uint**)( lVar8 + 0x10 );
         if (uVar4 != 0 || uVar12 != 0) {
            lVar14 = 0;
            do {
               if (uVar12 == 0) goto joined_r0x00100db8;
               if (uVar4 == 0) break;
               if (uVar12 < uVar4) goto joined_r0x00100db8;
               if (uVar4 < uVar12) break;
               uVar12 = ( *(uint**)( lVar8 + 0x10 ) )[lVar14 + 1];
               uVar4 = (uint)(char)pbVar15[lVar14 + 1];
               lVar14 = lVar14 + 1;
            }
 while ( uVar12 != 0 || uVar4 != 0 );
         }

         LAB_00100ce8:if (lVar9 != 0) {
            pbVar17 = *(byte**)( lVar9 + 8 );
            if (pbVar16 != (byte*)0x0) goto LAB_00100cfe;
            puVar7 = *(uint**)( lVar8 + 0x10 );
            uVar4 = *puVar7;
            LAB_001010e8:if (pbVar17 != (byte*)0x0) {
               uVar12 = (uint)(char)*pbVar17;
               uVar6 = uVar4 | uVar12;
               goto LAB_001013a3;
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
               goto LAB_00100fe0;
            }

            LAB_00101336:if (pbVar15 != (byte*)0x0) goto LAB_00101228;
            goto LAB_0010133f;
         }

         if (pbVar16 == (byte*)0x0) {
            puVar7 = *(uint**)( lVar8 + 0x10 );
            goto LAB_00101401;
         }

         LAB_00101051:bVar11 = *pbVar16;
         uVar5 = (uint)(char)bVar11;
         uVar6 = 0;
         pbVar17 = &_LC4;
         LAB_00100e49:uVar12 = uVar6;
         if (bVar11 != 0) goto LAB_00100e52;
      }
 else {
         pbVar15 = *(byte**)( lVar13 + 8 );
         if (pbVar16 != (byte*)0x0) {
            uVar4 = (uint)(char)*pbVar16;
            goto LAB_00100c82;
         }

         if (pbVar15 != (byte*)0x0) {
            uVar4 = (uint)(char)*pbVar15;
            goto LAB_00100b69;
         }

         puVar7 = *(uint**)( lVar8 + 0x10 );
         uVar12 = **(uint**)( lVar13 + 0x10 );
         uVar4 = *puVar7;
         if (uVar12 != 0 || uVar4 != 0) {
            lVar14 = 4;
            do {
               if (uVar4 == 0) {
                  LAB_00100f58:pbVar16 = (byte*)0x0;
                  goto joined_r0x00100db8;
               }

               if (uVar12 == 0) break;
               if (uVar4 < uVar12) goto LAB_00100f58;
               if (uVar12 < uVar4) break;
               uVar4 = *(uint*)( (long)puVar7 + lVar14 );
               uVar12 = *(uint*)( (long)*(uint**)( lVar13 + 0x10 ) + lVar14 );
               lVar14 = lVar14 + 4;
            }
 while ( uVar4 != 0 || uVar12 != 0 );
            pbVar16 = (byte*)0x0;
            goto LAB_00100ce8;
         }

         if (lVar9 != 0) {
            pbVar17 = *(byte**)( lVar9 + 8 );
            uVar4 = 0;
            goto LAB_001010e8;
         }

         LAB_00101401:uVar4 = *puVar7;
         uVar12 = 0;
         pbVar17 = &_LC4;
         uVar6 = uVar4;
         LAB_001013a3:if (uVar6 != 0) {
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
            goto LAB_00100fe0;
         }

      }

      uVar5 = uVar12;
      if (pbVar15 == (byte*)0x0) goto LAB_001011c6;
   }

   LAB_00100ff9:bVar11 = *pbVar15;
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

   }
;
   return param_2;
   joined_r0x00100db8:if (lVar9 == 0) {
      uVar4 = 0;
      uVar12 = 0;
      bVar11 = 0;
      pbVar17 = &_LC4;
      if (pbVar15 != (byte*)0x0) goto LAB_00100ea7;
      LAB_00100dd4:uVar6 = **(uint**)( lVar13 + 0x10 );
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
         goto LAB_00100f70;
      }

      LAB_0010143e:bVar11 = (byte)uVar12;
      if (pbVar16 == (byte*)0x0) goto LAB_0010115e;
   }
 else {
      pbVar17 = *(byte**)( lVar9 + 8 );
      if (pbVar15 == (byte*)0x0) {
         if (pbVar17 != (byte*)0x0) {
            uVar12 = (uint)(char)*pbVar17;
            goto LAB_00100dd4;
         }

         puVar7 = *(uint**)( lVar9 + 0x10 );
         uVar4 = *puVar7;
         uVar6 = **(uint**)( lVar13 + 0x10 );
         uVar12 = uVar4 | uVar6;
         if (uVar12 == 0) goto LAB_001012d9;
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
               goto LAB_00100f70;
            }

            LAB_001012d9:if (pbVar16 == (byte*)0x0) goto LAB_001012de;
            goto LAB_00101286;
         }

         bVar11 = *pbVar17;
         uVar4 = (uint)(char)bVar11;
         LAB_00100ea7:bVar3 = *pbVar15;
         uVar12 = ( uint )(bVar11 | bVar3);
         if (( bVar11 | bVar3 ) == 0) goto LAB_0010143e;
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

      LAB_00100f70:if (pbVar16 == (byte*)0x0) {
         if (pbVar17 == (byte*)0x0) {
            puVar7 = *(uint**)( lVar9 + 0x10 );
            LAB_001012de:uVar4 = *puVar7;
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
         LAB_0010115e:uVar12 = **(uint**)( lVar8 + 0x10 );
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
         LAB_00101286:uVar4 = (uint)(char)*pbVar16;
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

         }
;
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

   }
;
   return param_1;
}
/* CowData<int>::_copy_on_write() [clone .isra.0] */void CowData<int>::_copy_on_write(CowData<int> *this) {
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
}
/* SortArray<StringName, StringName::AlphCompare, true>::partitioner(long, long, StringName,
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
   joined_r0x001015ff:if (lVar3 == 0) {
      if (lVar10 == 0) goto LAB_00101720;
      pbVar5 = *(byte**)( lVar10 + 8 );
      uVar6 = 0;
      pbVar13 = &_LC4;
      LAB_001016b6:if (pbVar5 == (byte*)0x0) {
         uVar7 = **(uint**)( lVar10 + 0x10 );
         if (uVar7 != 0 || uVar6 != 0) {
            lVar3 = 0;
            do {
               if (uVar6 == 0) goto LAB_00101680;
               if (uVar7 == 0) break;
               if (uVar6 < uVar7) goto LAB_00101680;
               if (uVar7 < uVar6) break;
               uVar6 = (uint)(char)pbVar13[lVar3 + 1];
               uVar7 = ( *(uint**)( lVar10 + 0x10 ) )[lVar3 + 1];
               lVar3 = lVar3 + 1;
            }
 while ( uVar6 != 0 || uVar7 != 0 );
         }

         goto LAB_00101720;
      }

      uVar7 = (uint)(char)*pbVar5;
      bVar12 = (byte)uVar6 | *pbVar5;
      LAB_001019f6:if (bVar12 != 0) {
         lVar3 = 1;
         do {
            if (uVar6 == 0) goto LAB_00101680;
            if (uVar7 == 0) break;
            if (uVar6 < uVar7) goto LAB_00101680;
            if (uVar7 < uVar6) break;
            pbVar1 = pbVar13 + lVar3;
            uVar6 = (uint)(char)*pbVar1;
            pbVar2 = pbVar5 + lVar3;
            uVar7 = (uint)(char)*pbVar2;
            lVar3 = lVar3 + 1;
         }
 while ( *pbVar1 != 0 || *pbVar2 != 0 );
      }

   }
 else {
      pbVar13 = *(byte**)( lVar3 + 8 );
      if (lVar10 == 0) {
         if (pbVar13 != (byte*)0x0) {
            bVar12 = *pbVar13;
            uVar6 = (uint)(char)bVar12;
            uVar7 = 0;
            pbVar5 = &_LC4;
            goto LAB_001019f6;
         }

         uVar6 = 0;
         pbVar5 = &_LC4;
      }
 else {
         pbVar5 = *(byte**)( lVar10 + 8 );
         if (pbVar13 != (byte*)0x0) {
            uVar6 = (uint)(char)*pbVar13;
            goto LAB_001016b6;
         }

         if (pbVar5 == (byte*)0x0) {
            uVar6 = **(uint**)( lVar10 + 0x10 );
            uVar7 = **(uint**)( lVar3 + 0x10 );
            if (uVar6 != 0 || uVar7 != 0) {
               lVar4 = 4;
               do {
                  if (uVar7 == 0) goto LAB_00101680;
                  if (uVar6 == 0) break;
                  if (uVar7 < uVar6) goto LAB_00101680;
                  if (uVar6 < uVar7) break;
                  uVar7 = *(uint*)( (long)*(uint**)( lVar3 + 0x10 ) + lVar4 );
                  uVar6 = *(uint*)( (long)*(uint**)( lVar10 + 0x10 ) + lVar4 );
                  lVar4 = lVar4 + 4;
               }
 while ( uVar7 != 0 || uVar6 != 0 );
            }

            goto LAB_00101720;
         }

         uVar6 = (uint)(char)*pbVar5;
      }

      uVar7 = **(uint**)( lVar3 + 0x10 );
      if (uVar7 != 0 || uVar6 != 0) {
         lVar4 = 0;
         do {
            if (uVar7 == 0) goto LAB_00101680;
            if (uVar6 == 0) break;
            if (uVar7 < uVar6) goto LAB_00101680;
            if (uVar6 < uVar7) break;
            uVar7 = ( *(uint**)( lVar3 + 0x10 ) )[lVar4 + 1];
            uVar6 = (uint)(char)pbVar5[lVar4 + 1];
            lVar4 = lVar4 + 1;
         }
 while ( uVar7 != 0 || uVar6 != 0 );
      }

   }

   goto LAB_00101720;
   LAB_00101680:if (param_2 + -1 == lVar9) {
      _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
      lVar10 = *param_3;
      LAB_00101720:plVar11 = (long*)( param_4 + -8 + lVar8 * 8 );
      LAB_00101730:lVar8 = lVar8 + -1;
      lVar3 = *plVar11;
      if (lVar10 != 0) {
         pbVar13 = *(byte**)( lVar10 + 8 );
         do {
            if (lVar3 == 0) {
               if (pbVar13 != (byte*)0x0) {
                  bVar12 = *pbVar13;
                  uVar7 = (uint)(char)bVar12;
                  pbVar5 = &_LC4;
                  uVar6 = 0;
                  goto LAB_001018de;
               }

               uVar6 = 0;
               pbVar5 = &_LC4;
               LAB_001017fa:uVar7 = **(uint**)( lVar10 + 0x10 );
               if (uVar7 == 0 && uVar6 == 0) goto LAB_00101958;
               lVar3 = 0;
               while (uVar7 != 0) {
                  if (uVar6 == 0) goto LAB_00101958;
                  if (uVar7 < uVar6) break;
                  if (uVar6 < uVar7) goto LAB_00101958;
                  uVar7 = ( *(uint**)( lVar10 + 0x10 ) )[lVar3 + 1];
                  uVar6 = (uint)(char)pbVar5[lVar3 + 1];
                  lVar3 = lVar3 + 1;
                  if (uVar7 == 0 && uVar6 == 0) goto LAB_00101958;
               }
;
            }
 else {
               pbVar5 = *(byte**)( lVar3 + 8 );
               if (pbVar13 != (byte*)0x0) goto LAB_00101920;
               if (pbVar5 != (byte*)0x0) {
                  uVar6 = (uint)(char)*pbVar5;
                  goto LAB_001017fa;
               }

               uVar6 = **(uint**)( lVar3 + 0x10 );
               uVar7 = **(uint**)( lVar10 + 0x10 );
               if (uVar6 == 0 && uVar7 == 0) goto LAB_00101958;
               lVar4 = 4;
               while (uVar7 != 0) {
                  if (uVar6 == 0) goto LAB_00101958;
                  if (uVar7 < uVar6) break;
                  if (uVar6 < uVar7) goto LAB_00101958;
                  uVar7 = *(uint*)( (long)*(uint**)( lVar10 + 0x10 ) + lVar4 );
                  uVar6 = *(uint*)( (long)*(uint**)( lVar3 + 0x10 ) + lVar4 );
                  lVar4 = lVar4 + 4;
                  if (uVar7 == 0 && uVar6 == 0) goto LAB_00101958;
               }
;
            }

            plVar14 = plVar11;
            if (param_1 == lVar8) goto LAB_00101930;
            lVar3 = plVar11[-1];
            lVar8 = lVar8 + -1;
            plVar11 = plVar11 + -1;
         }
 while ( true );
      }

      if (lVar3 != 0) {
         pbVar5 = *(byte**)( lVar3 + 8 );
         uVar7 = 0;
         bVar12 = 0;
         pbVar13 = &_LC4;
         goto LAB_00101869;
      }

      goto LAB_00101958;
   }

   LAB_0010168e:lVar9 = lVar9 + 1;
   lVar3 = *(long*)( param_4 + lVar9 * 8 );
   goto joined_r0x001015ff;
   LAB_00101920:bVar12 = *pbVar13;
   uVar7 = (uint)(char)bVar12;
   LAB_00101869:if (pbVar5 == (byte*)0x0) {
      uVar6 = **(uint**)( lVar3 + 0x10 );
      if (uVar6 == 0 && uVar7 == 0) goto LAB_00101958;
      lVar4 = 0;
      while (plVar14 = plVar11,uVar7 != 0) {
         if (uVar6 == 0) goto LAB_00101958;
         if (uVar7 < uVar6) break;
         if (uVar6 < uVar7) goto LAB_00101958;
         uVar7 = (uint)(char)pbVar13[lVar4 + 1];
         uVar6 = ( *(uint**)( lVar3 + 0x10 ) )[lVar4 + 1];
         lVar4 = lVar4 + 1;
         if (uVar7 == 0 && uVar6 == 0) goto LAB_00101958;
      }
;
   }
 else {
      uVar6 = (uint)(char)*pbVar5;
      bVar12 = bVar12 | *pbVar5;
      LAB_001018de:if (bVar12 == 0) goto LAB_00101958;
      lVar3 = 1;
      while (plVar14 = plVar11,uVar7 != 0) {
         if (uVar6 == 0) goto LAB_00101958;
         if (uVar7 < uVar6) break;
         if (uVar6 < uVar7) goto LAB_00101958;
         pbVar1 = pbVar13 + lVar3;
         uVar7 = (uint)(char)*pbVar1;
         pbVar2 = pbVar5 + lVar3;
         uVar6 = (uint)(char)*pbVar2;
         lVar3 = lVar3 + 1;
         if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_00101958;
      }
;
   }

   plVar11 = plVar14 + -1;
   if (param_1 == lVar8) goto LAB_00101930;
   goto LAB_00101730;
   LAB_00101930:plVar11 = plVar14;
   _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
   LAB_00101958:if (lVar8 <= lVar9) {
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
   goto LAB_0010168e;
}
/* SortArray<StringName, StringName::AlphCompare, true>::partial_sort(long, long, long, StringName*)
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
      if (param_2 <= param_3) goto LAB_00101ddb;
      LAB_00101bc6:lVar14 = param_3;
      LAB_00101c00:lVar6 = *(long*)( param_4 + lVar14 * 8 );
      lVar5 = *(long*)( param_4 + param_1 * 8 );
      if (lVar6 == 0) {
         if (lVar5 != 0) {
            pbVar11 = *(byte**)( lVar5 + 8 );
            uVar8 = 0;
            pbVar12 = &_LC4;
            LAB_00101e14:if (pbVar11 == (byte*)0x0) {
               uVar9 = **(uint**)( lVar5 + 0x10 );
               if (uVar9 != 0 || uVar8 != 0) {
                  lVar6 = 0;
                  do {
                     if (uVar8 == 0) goto LAB_00101c80;
                     if (uVar9 == 0) break;
                     if (uVar8 < uVar9) goto LAB_00101c80;
                     if (uVar9 < uVar8) break;
                     uVar8 = (uint)(char)pbVar12[lVar6 + 1];
                     uVar9 = ( *(uint**)( lVar5 + 0x10 ) )[lVar6 + 1];
                     lVar6 = lVar6 + 1;
                  }
 while ( uVar8 != 0 || uVar9 != 0 );
               }

            }
 else {
               uVar9 = (uint)(char)*pbVar11;
               bVar4 = (byte)uVar8 | *pbVar11;
               LAB_00101e76:if (bVar4 != 0) {
                  lVar6 = 1;
                  do {
                     if (uVar8 == 0) goto LAB_00101c80;
                     if (uVar9 == 0) break;
                     if (uVar8 < uVar9) goto LAB_00101c80;
                     if (uVar9 < uVar8) break;
                     pbVar1 = pbVar12 + lVar6;
                     uVar8 = (uint)(char)*pbVar1;
                     pbVar2 = pbVar11 + lVar6;
                     uVar9 = (uint)(char)*pbVar2;
                     lVar6 = lVar6 + 1;
                  }
 while ( *pbVar1 != 0 || *pbVar2 != 0 );
               }

            }

         }

      }
 else {
         pbVar12 = *(byte**)( lVar6 + 8 );
         if (lVar5 == 0) {
            if (pbVar12 != (byte*)0x0) {
               bVar4 = *pbVar12;
               uVar8 = (uint)(char)bVar4;
               uVar9 = 0;
               pbVar11 = &_LC4;
               goto LAB_00101e76;
            }

            uVar8 = 0;
            pbVar11 = &_LC4;
         }
 else {
            pbVar11 = *(byte**)( lVar5 + 8 );
            if (pbVar12 != (byte*)0x0) {
               uVar8 = (uint)(char)*pbVar12;
               goto LAB_00101e14;
            }

            if (pbVar11 == (byte*)0x0) {
               uVar8 = **(uint**)( lVar5 + 0x10 );
               uVar9 = **(uint**)( lVar6 + 0x10 );
               if (uVar8 != 0 || uVar9 != 0) {
                  lVar7 = 4;
                  do {
                     if (uVar9 == 0) goto LAB_00101c80;
                     if (uVar8 == 0) break;
                     if (uVar9 < uVar8) goto LAB_00101c80;
                     if (uVar8 < uVar9) break;
                     uVar9 = *(uint*)( (long)*(uint**)( lVar6 + 0x10 ) + lVar7 );
                     uVar8 = *(uint*)( (long)*(uint**)( lVar5 + 0x10 ) + lVar7 );
                     lVar7 = lVar7 + 4;
                  }
 while ( uVar9 != 0 || uVar8 != 0 );
               }

               goto LAB_00101d08;
            }

            uVar8 = (uint)(char)*pbVar11;
         }

         uVar9 = **(uint**)( lVar6 + 0x10 );
         if (uVar9 != 0 || uVar8 != 0) {
            lVar5 = 0;
            do {
               if (uVar9 == 0) goto LAB_00101c80;
               if (uVar8 == 0) break;
               if (uVar9 < uVar8) goto LAB_00101c80;
               if (uVar8 < uVar9) break;
               uVar9 = ( *(uint**)( lVar6 + 0x10 ) )[lVar5 + 1];
               uVar8 = (uint)(char)pbVar11[lVar5 + 1];
               lVar5 = lVar5 + 1;
            }
 while ( uVar9 != 0 || uVar8 != 0 );
         }

      }

      goto LAB_00101d08;
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
   }
;
   if (param_3 < param_2) goto LAB_00101bc6;
   goto LAB_00101d3b;
   LAB_00101c80:StringName::StringName((StringName_conflict*)&local_50, param_4 + lVar14 * 8);
   StringName::operator =(param_4 + lVar14 * 8, param_4 + param_1 * 8);
   StringName::StringName((StringName_conflict*)&local_48, (StringName_conflict*)&local_50);
   adjust_heap(param_1, 0, lVar10, (StringName_conflict*)&local_48, param_4);
   if (( StringName::configured != '\0' ) && ( ( ( local_48 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_50 != 0 ) ) )) {
      StringName::unref();
   }

   LAB_00101d08:lVar14 = lVar14 + 1;
   if (param_2 <= lVar14) goto code_r0x00101d15;
   goto LAB_00101c00;
   code_r0x00101d15:if (lVar10 < 2) goto LAB_00101ddb;
   LAB_00101d3b:pSVar13 = param_4 + param_3 * 8 + -8;
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
   }
 while ( bVar3 );
   LAB_00101ddb:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CowData<char const*>::_copy_on_write() [clone .isra.0] */void CowData<char_const*>::_copy_on_write(CowData<char_const*> *this) {
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
/* SortArray<StringName, StringName::AlphCompare, true>::introsort(long, long, StringName*, long)
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
      LAB_00102aca:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      if (param_4 != 0) {
         lVar12 = param_2 * 8;
         lVar3 = param_2;
         LAB_00102112:param_4 = param_4 + -1;
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
               LAB_001021d1:do {
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
                        LAB_00102292:do {
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
                                 LAB_0010234c:do {
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
                                                            LAB_0010289e:partial_sort(lVar7, lVar8, lVar8, param_3);
                                                         }
 else {
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
                                                                  LAB_0010280e:lVar1 = lVar8 - lVar7;
                                                                  if (lVar1 < 0x11) {
                                                                     lVar1 = lVar7 - lVar6;
                                                                     if (lVar1 < 0x11) goto LAB_001027c0;
                                                                     goto LAB_00102869;
                                                                  }

                                                                  lVar9 = lVar8;
                                                                  if (local_138 == 0) goto LAB_0010289e;
                                                               }
;
                                                               if (local_138 == 0) {
                                                                  LAB_001027fd:partial_sort(lVar8, lVar9, lVar9, param_3);
                                                                  goto LAB_0010280e;
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
                                                                              if (lVar1 < 0x11) goto LAB_0010280e;
                                                                              goto LAB_00102794;
                                                                           }

                                                                           lVar15 = lVar10;
                                                                        }
 while ( lVar14 != 0 );
                                                                     }

                                                                     partial_sort(lVar9, lVar10, lVar10, param_3);
                                                                  }

                                                                  lVar1 = lVar9 - lVar8;
                                                                  if (lVar1 < 0x11) break;
                                                                  if (local_f8 == 0) goto LAB_001027fd;
                                                                  LAB_00102794:lVar14 = lVar9 * 8;
                                                                  lVar10 = lVar9;
                                                               }
;
                                                               lVar1 = lVar8 - lVar7;
                                                               lVar9 = lVar8;
                                                            }
 while ( 0x10 < lVar1 );
                                                         }

                                                      }

                                                      lVar1 = lVar7 - lVar6;
                                                      if (lVar1 < 0x11) {
                                                         lVar1 = lVar6 - lVar5;
                                                         if (lVar1 < 0x11) goto LAB_001028e7;
                                                         goto LAB_001027e1;
                                                      }

                                                      if (local_120 == 0) break;
                                                      LAB_00102869:lVar9 = lVar7 * 8;
                                                      lVar8 = lVar7;
                                                   }
 while ( true );
                                                }

                                                partial_sort(lVar6, lVar7, lVar7, param_3);
                                             }

                                             LAB_001027c0:lVar1 = lVar6 - lVar5;
                                             if (lVar1 < 0x11) {
                                                lVar1 = lVar5 - lVar4;
                                                local_138 = lVar5;
                                                if (lVar1 < 0x11) goto LAB_001029a0;
                                                goto LAB_0010234c;
                                             }

                                             if (local_100 == 0) break;
                                             LAB_001027e1:lVar9 = lVar6 * 8;
                                             lVar7 = lVar6;
                                          }
 while ( true );
                                       }

                                       partial_sort(lVar5, lVar6, lVar6, param_3);
                                    }

                                    LAB_001028e7:lVar1 = lVar5 - lVar4;
                                    if (lVar1 < 0x11) {
                                       lVar1 = lVar4 - lVar3;
                                       local_138 = lVar4;
                                       if (lVar1 < 0x11) goto LAB_00102a31;
                                       goto LAB_00102292;
                                    }

                                    local_138 = lVar5;
                                 }
 while ( lVar11 != 0 );
                              }

                              partial_sort(lVar4, local_138, local_138, param_3);
                           }

                           LAB_001029a0:lVar1 = lVar4 - lVar3;
                           if (lVar1 < 0x11) {
                              lVar1 = lVar3 - param_2;
                              lVar4 = lVar3;
                              if (lVar1 < 0x11) goto LAB_00102abe;
                              goto LAB_001021d1;
                           }

                           local_138 = lVar4;
                        }
 while ( lVar13 != 0 );
                     }

                     partial_sort(lVar3, lVar4, lVar4, param_3);
                  }

                  LAB_00102a31:lVar1 = lVar3 - param_2;
                  if (lVar1 < 0x11) goto LAB_00102abe;
                  lVar4 = lVar3;
                  if (lVar12 == 0) break;
               }
 while ( true );
            }

            partial_sort(param_2, lVar3, lVar3, param_3);
         }

         lVar1 = param_2 - param_1;
         if (0x10 < lVar1) {
            if (param_4 != 0) goto LAB_00102a9d;
            goto LAB_00102afc;
         }

         goto LAB_00102aca;
      }

      LAB_00102afc:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         partial_sort(param_1, param_2, param_2, param_3);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_00102abe:lVar1 = param_2 - param_1;
   if (lVar1 < 0x11) goto LAB_00102aca;
   LAB_00102a9d:lVar12 = param_2 * 8;
   lVar3 = param_2;
   goto LAB_00102112;
}
/* CowData<char>::_ref(CowData<char> const&) [clone .part.0] */void CowData<char>::_ref(CowData<char> *this, CowData *param_1) {
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
/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
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
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */void CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this) {
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
}
/* OAHashMap<unsigned long, ShaderGLES3::Version::Specialization, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned long> >::_insert_with_hash(unsigned int, unsigned long const&,
   ShaderGLES3::Version::Specialization const&) [clone .isra.0] */void OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::_insert_with_hash(uint param_1, ulong *param_2, Specialization *param_3) {
   long *plVar1;
   undefined4 *puVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined1 uVar5;
   char cVar6;
   undefined4 uVar7;
   ulong uVar8;
   ulong uVar9;
   ulong uVar10;
   char *pcVar11;
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
   code *pcVar28;
   undefined1 uVar29;
   int iVar30;
   undefined8 *puVar31;
   void *pvVar32;
   long lVar33;
   long lVar34;
   size_t sVar35;
   long lVar36;
   undefined8 *in_RCX;
   uint uVar37;
   uint uVar38;
   uint uVar39;
   int iVar40;
   long lVar41;
   long lVar42;
   undefined8 *puVar43;
   void *pvVar44;
   String *pSVar45;
   undefined4 in_register_0000003c;
   ulong *puVar46;
   undefined8 *puVar47;
   uint uVar48;
   ulong in_R9;
   uint *puVar49;
   long *plVar50;
   Specialization *pSVar51;
   void *unaff_R15;
   void *pvVar52;
   ulong uVar53;
   long in_FS_OFFSET;
   bool bVar54;
   undefined8 uVar55;
   undefined8 uVar56;
   long lStack_f0;
   long lStack_e8;
   long lStack_e0;
   long lStack_d8;
   char *pcStack_d0;
   size_t sStack_c8;
   long lStack_b8;
   undefined8 *puStack_a8;
   void *pvStack_a0;
   ulong *puStack_98;
   ulong uStack_90;
   Specialization *pSStack_88;
   void *pvStack_80;
   undefined8 local_70;
   long local_68;
   undefined8 *local_60;
   uint local_58;
   uint local_54;
   ulong local_50;
   undefined8 *local_48;
   ulong *local_40;
   puVar46 = (ulong*)CONCAT44(in_register_0000003c, param_1);
   uVar53 = (ulong)param_2 & 0xffffffff;
   uVar55 = *in_RCX;
   puVar43 = (undefined8*)( ( (ulong)param_2 & 0xffffffff ) % (ulong)(uint)puVar46[3] );
   local_68 = CONCAT44(local_68._4_4_, *(undefined4*)( in_RCX + 1 ));
   local_54 = *(uint*)( in_RCX + 2 );
   if (local_54 == 0) {
      uVar37 = 0;
      pvVar32 = (void*)0x0;
      puVar47 = puVar43;
   }
 else {
      lVar41 = 0;
      local_50 = CONCAT44(local_50._4_4_, (int)puVar43);
      uVar37 = local_54 - 1 | local_54 - 1 >> 1;
      uVar37 = uVar37 | uVar37 >> 2;
      uVar37 = uVar37 >> 4 | uVar37;
      uVar37 = uVar37 | uVar37 >> 8;
      local_58 = ( uVar37 | uVar37 >> 0x10 ) + 1;
      pSVar45 = (String*)( (ulong)local_58 << 2 );
      pvStack_80 = (void*)0x102e49;
      local_70 = uVar55;
      local_60 = in_RCX;
      pvVar32 = (void*)Memory::realloc_static((void*)0x0, (ulong)pSVar45, false);
      in_RCX = local_60;
      iVar40 = (int)local_50;
      if (pvVar32 == (void*)0x0) goto LAB_001032b5;
      puVar47 = (undefined8*)( local_50 & 0xffffffff );
      uVar55 = local_70;
      uVar37 = local_58;
      if (*(int*)( local_60 + 2 ) != 0) {
         lVar41 = local_60[3];
         lVar33 = 0;
         do {
            *(undefined4*)( (long)pvVar32 + lVar33 * 4 ) = *(undefined4*)( lVar41 + lVar33 * 4 );
            lVar33 = lVar33 + 1;
         }
 while ( (uint)lVar33 < *(uint*)( local_60 + 2 ) );
      }

   }

   iVar40 = *(int*)( in_RCX + 4 );
   local_50 = CONCAT44(uVar37, local_54);
   local_60 = (undefined8*)CONCAT44(local_60._4_4_, iVar40);
   if (iVar40 == 0) {
      unaff_R15 = (void*)0x0;
      uVar37 = 0;
   }
 else {
      lVar41 = 0;
      local_40 = (ulong*)CONCAT44(local_40._4_4_, (int)puVar47);
      uVar37 = iVar40 - 1U | iVar40 - 1U >> 1;
      uVar37 = uVar37 >> 2 | uVar37;
      uVar37 = uVar37 | uVar37 >> 4;
      uVar37 = uVar37 | uVar37 >> 8;
      local_58 = ( uVar37 >> 0x10 | uVar37 ) + 1;
      pSVar45 = (String*)( (ulong)local_58 << 2 );
      pvStack_80 = (void*)0x103261;
      local_70 = uVar55;
      local_48 = in_RCX;
      unaff_R15 = (void*)Memory::realloc_static((void*)0x0, (ulong)pSVar45, false);
      iVar40 = (int)puVar47;
      if (unaff_R15 == (void*)0x0) goto LAB_001032b5;
      puVar47 = (undefined8*)( (ulong)local_40 & 0xffffffff );
      in_RCX = local_48;
      uVar55 = local_70;
      uVar37 = local_58;
      if (*(int*)( local_48 + 4 ) != 0) {
         lVar41 = local_48[5];
         lVar33 = 0;
         do {
            *(undefined4*)( (long)unaff_R15 + lVar33 * 4 ) = *(undefined4*)( lVar41 + lVar33 * 4 );
            lVar33 = lVar33 + 1;
         }
 while ( (uint)lVar33 < *(uint*)( local_48 + 4 ) );
      }

   }

   lVar33 = (long)puVar47 * 4;
   local_58 = CONCAT31(local_58._1_3_, *(undefined1*)( in_RCX + 6 ));
   uVar56 = CONCAT44(uVar37, (int)local_60);
   local_70 = CONCAT71(local_70._1_7_, *(undefined1*)( (long)in_RCX + 0x31 ));
   uVar8 = puVar46[2];
   puVar49 = (uint*)( uVar8 + lVar33 );
   local_48 = (undefined8*)puVar46[1];
   uVar37 = *puVar49;
   uVar9 = *puVar46;
   if (uVar37 != 0) {
      in_RCX = (undefined8*)(ulong)(uint)puVar46[3];
      in_R9 = 0;
      pvVar44 = pvVar32;
      pSVar51 = param_3;
      pvVar52 = unaff_R15;
      do {
         uVar38 = ( uint )(( ulong )(uint)(( (int)puVar43 + (int)in_RCX ) - (int)( (ulong)uVar37 % (ulong)in_RCX )) % (ulong)in_RCX);
         pvVar32 = pvVar44;
         param_3 = pSVar51;
         unaff_R15 = pvVar52;
         uVar39 = (uint)in_R9;
         if (uVar38 < (uint)in_R9) {
            *puVar49 = (uint)uVar53;
            param_3 = (Specialization*)local_48[(long)puVar47];
            local_48[(long)puVar47] = pSVar51;
            puVar47 = (undefined8*)( uVar9 + (long)puVar47 * 0x38 );
            uVar29 = (undefined1)local_70;
            local_54 = *(uint*)( puVar47 + 2 );
            pvVar32 = (void*)puVar47[3];
            uVar10 = puVar47[2];
            puVar47[3] = pvVar44;
            uVar3 = *puVar47;
            uVar4 = puVar47[4];
            local_60 = (undefined8*)CONCAT44(local_60._4_4_, *(undefined4*)( puVar47 + 4 ));
            uVar5 = *(undefined1*)( puVar47 + 6 );
            uVar7 = *(undefined4*)( puVar47 + 1 );
            *(undefined1*)( puVar47 + 6 ) = (undefined1)local_58;
            *puVar47 = uVar55;
            uVar53 = (ulong)uVar37;
            local_58 = CONCAT31(local_58._1_3_, uVar5);
            puVar47[2] = local_50;
            local_70 = CONCAT71(local_70._1_7_, *(undefined1*)( (long)puVar47 + 0x31 ));
            *(undefined1*)( (long)puVar47 + 0x31 ) = uVar29;
            puVar47[4] = uVar56;
            unaff_R15 = (void*)puVar47[5];
            *(undefined4*)( puVar47 + 1 ) = (undefined4)local_68;
            puVar47[5] = pvVar52;
            in_RCX = (undefined8*)(ulong)(uint)puVar46[3];
            local_68 = CONCAT44(local_68._4_4_, uVar7);
            uVar39 = uVar38;
            uVar55 = uVar3;
            local_50 = uVar10;
            uVar56 = uVar4;
         }

         in_R9 = ( ulong )(uVar39 + 1);
         puVar43 = (undefined8*)( ( ulong )((int)puVar43 + 1) % (ulong)in_RCX );
         lVar33 = (long)puVar43 * 4;
         puVar49 = (uint*)( uVar8 + lVar33 );
         uVar37 = *puVar49;
         pvVar44 = pvVar32;
         puVar47 = puVar43;
         pSVar51 = param_3;
         pvVar52 = unaff_R15;
         local_40 = puVar46;
      }
 while ( uVar37 != 0 );
   }

   uVar37 = local_54;
   local_48[(long)puVar47] = param_3;
   puVar43 = (undefined8*)( uVar9 + (long)puVar47 * 0x38 );
   puVar43[2] = 0;
   *(undefined4*)( puVar43 + 1 ) = (undefined4)local_68;
   puVar43[3] = 0;
   *puVar43 = uVar55;
   local_50 = uVar9;
   if (local_54 != 0) {
      param_3 = (Specialization*)(ulong)local_54;
      lVar41 = 0;
      uVar39 = local_54 - 1 | local_54 - 1 >> 1;
      uVar39 = uVar39 | uVar39 >> 2;
      uVar39 = uVar39 | uVar39 >> 4;
      uVar39 = uVar39 >> 8 | uVar39;
      uVar39 = ( uVar39 | uVar39 >> 0x10 ) + 1;
      *(uint*)( (long)puVar43 + 0x14 ) = uVar39;
      pSVar45 = (String*)( (ulong)uVar39 * 4 );
      pvStack_80 = (void*)0x1030bb;
      local_68 = lVar33;
      lVar34 = Memory::realloc_static((void*)0x0, (ulong)pSVar45, false);
      iVar40 = (int)puVar47;
      puVar43[3] = lVar34;
      if (lVar34 == 0) goto LAB_001032b5;
      *(uint*)( puVar43 + 2 ) = uVar37;
      lVar41 = 0;
      do {
         in_RCX = (undefined8*)( ulong ) * (uint*)( (long)pvVar32 + lVar41 );
         *(uint*)( lVar34 + lVar41 ) = *(uint*)( (long)pvVar32 + lVar41 );
         lVar41 = lVar41 + 4;
         lVar33 = local_68;
      }
 while ( lVar41 != (ulong)uVar37 << 2 );
   }

   puVar31 = local_60;
   iVar40 = (int)puVar47;
   iVar30 = (int)local_60;
   puVar43[4] = 0;
   puVar43[5] = 0;
   if ((int)local_60 == 0) {
      *(undefined1*)( puVar43 + 6 ) = (undefined1)local_58;
      *(undefined1*)( (long)puVar43 + 0x31 ) = (undefined1)local_70;
      *(int*)( puVar46[2] + lVar33 ) = (int)uVar53;
      *(int*)( (long)puVar46 + 0x1c ) = *(int*)( (long)puVar46 + 0x1c ) + 1;
      if (unaff_R15 == (void*)0x0) goto joined_r0x001031f7;
   }
 else {
      param_3 = (Specialization*)( (ulong)local_60 & 0xffffffff );
      lVar41 = 0;
      uVar37 = (int)local_60 - 1U >> 1 | (int)local_60 - 1U;
      uVar37 = uVar37 >> 2 | uVar37;
      uVar37 = uVar37 | uVar37 >> 4;
      uVar37 = uVar37 | uVar37 >> 8;
      uVar37 = ( uVar37 | uVar37 >> 0x10 ) + 1;
      *(uint*)( (long)puVar43 + 0x24 ) = uVar37;
      pSVar45 = (String*)( (ulong)uVar37 * 4 );
      pvStack_80 = (void*)0x103153;
      local_68 = lVar33;
      lVar33 = Memory::realloc_static((void*)0x0, (ulong)pSVar45, false);
      puVar43[5] = lVar33;
      if (lVar33 == 0) {
         LAB_001032b5:pvStack_80 = (void*)0x1032ba;
         LocalVector<ShaderGLES3::TextureUniformData,unsigned_int,false,false>::resize((uint)lVar41);
         lStack_b8 = *(long*)( in_FS_OFFSET + 0x28 );
         puStack_a8 = puVar43;
         pvStack_a0 = pvVar32;
         puStack_98 = puVar46;
         uStack_90 = uVar53;
         pSStack_88 = param_3;
         pvStack_80 = unaff_R15;
         if ((char)RasterizerGLES3::gles_over_gl == '\0') {
            StringBuilder::append((char*)pSVar45);
            cVar6 = *(char*)( GLES3::Config::singleton + 0x8d );
         }
 else {
            StringBuilder::append((char*)pSVar45);
            StringBuilder::append((char*)pSVar45);
            cVar6 = *(char*)( GLES3::Config::singleton + 0x8d );
         }

         if (cVar6 != '\0') {
            StringBuilder::append((char*)pSVar45);
         }

         uVar53 = 0;
         if (0 < *(int*)( lVar41 + 0x104 )) {
            LAB_00103369:do {
               if (( in_R9 >> ( uVar53 & 0x3f ) & 1 ) != 0) {
                  lStack_d8 = 0;
                  sStack_c8 = 1;
                  pcStack_d0 = "\n";
                  String::parse_latin1((StrRange*)&lStack_d8);
                  pcVar11 = *(char**)( uVar53 * 0x10 + *(long*)( lVar41 + 0x108 ) );
                  sVar35 = 0;
                  lStack_e8 = 0;
                  if (pcVar11 != (char*)0x0) {
                     sVar35 = strlen(pcVar11);
                  }

                  pcStack_d0 = pcVar11;
                  sStack_c8 = sVar35;
                  String::parse_latin1((StrRange*)&lStack_e8);
                  operator+((char *)&
                  lStack_e0,(String*)"#define ";
                  String::operator +((String*)&pcStack_d0, (String*)&lStack_e0);
                  StringBuilder::append(pSVar45);
                  pcVar11 = pcStack_d0;
                  if (pcStack_d0 != (char*)0x0) {
                     LOCK();
                     plVar50 = (long*)( pcStack_d0 + -0x10 );
                     *plVar50 = *plVar50 + -1;
                     UNLOCK();
                     if (*plVar50 == 0) {
                        pcStack_d0 = (char*)0x0;
                        Memory::free_static(pcVar11 + -0x10, false);
                     }

                  }

                  lVar33 = lStack_e0;
                  if (lStack_e0 != 0) {
                     LOCK();
                     plVar50 = (long*)( lStack_e0 + -0x10 );
                     *plVar50 = *plVar50 + -1;
                     UNLOCK();
                     if (*plVar50 == 0) {
                        lStack_e0 = 0;
                        Memory::free_static((void*)( lVar33 + -0x10 ), false);
                     }

                  }

                  lVar33 = lStack_e8;
                  if (lStack_e8 != 0) {
                     LOCK();
                     plVar50 = (long*)( lStack_e8 + -0x10 );
                     *plVar50 = *plVar50 + -1;
                     UNLOCK();
                     if (*plVar50 == 0) {
                        lStack_e8 = 0;
                        Memory::free_static((void*)( lVar33 + -0x10 ), false);
                     }

                  }

                  lVar33 = lStack_d8;
                  if (lStack_d8 != 0) {
                     LOCK();
                     plVar50 = (long*)( lStack_d8 + -0x10 );
                     *plVar50 = *plVar50 + -1;
                     UNLOCK();
                     if (*plVar50 == 0) {
                        uVar53 = uVar53 + 1;
                        lStack_d8 = 0;
                        Memory::free_static((void*)( lVar33 + -0x10 ), false);
                        if (*(int*)( lVar41 + 0x104 ) <= (int)uVar53) break;
                        goto LAB_00103369;
                     }

                  }

               }

               uVar53 = uVar53 + 1;
            }
 while ( (int)uVar53 < *(int*)( lVar41 + 0x104 ) );
         }

         if (( in_RCX[2] != 0 ) && ( *(int*)( in_RCX[2] + -8 ) != 0 )) {
            StringBuilder::append((char*)pSVar45);
         }

         plVar50 = (long*)in_RCX[8];
         if (plVar50 != (long*)0x0) {
            do {
               lStack_d8 = 0;
               pcStack_d0 = "_CODE_USED\n";
               sStack_c8 = 0xb;
               String::parse_latin1((StrRange*)&lStack_d8);
               lVar33 = plVar50[2];
               if (lVar33 == 0) {
                  lStack_e8 = 0;
               }
 else {
                  pcVar11 = *(char**)( lVar33 + 8 );
                  lStack_e8 = 0;
                  if (pcVar11 == (char*)0x0) {
                     plVar1 = (long*)( *(long*)( lVar33 + 0x10 ) + -0x10 );
                     if (*(long*)( lVar33 + 0x10 ) != 0) {
                        do {
                           lVar34 = *plVar1;
                           if (lVar34 == 0) goto LAB_0010358d;
                           LOCK();
                           lVar36 = *plVar1;
                           bVar54 = lVar34 == lVar36;
                           if (bVar54) {
                              *plVar1 = lVar34 + 1;
                              lVar36 = lVar34;
                           }

                           UNLOCK();
                        }
 while ( !bVar54 );
                        if (lVar36 != -1) {
                           lStack_e8 = *(long*)( lVar33 + 0x10 );
                        }

                     }

                  }
 else {
                     sStack_c8 = strlen(pcVar11);
                     pcStack_d0 = pcVar11;
                     String::parse_latin1((StrRange*)&lStack_e8);
                  }

               }

               LAB_0010358d:lStack_f0 = 0;
               pcStack_d0 = "#define ";
               sStack_c8 = 8;
               String::parse_latin1((StrRange*)&lStack_f0);
               String::operator +((String*)&lStack_e0, (String*)&lStack_f0);
               String::operator +((String*)&pcStack_d0, (String*)&lStack_e0);
               StringBuilder::append(pSVar45);
               pcVar11 = pcStack_d0;
               if (pcStack_d0 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( pcStack_d0 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     pcStack_d0 = (char*)0x0;
                     Memory::free_static(pcVar11 + -0x10, false);
                  }

               }

               lVar33 = lStack_e0;
               if (lStack_e0 != 0) {
                  LOCK();
                  plVar1 = (long*)( lStack_e0 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lStack_e0 = 0;
                     Memory::free_static((void*)( lVar33 + -0x10 ), false);
                  }

               }

               lVar33 = lStack_f0;
               if (lStack_f0 != 0) {
                  LOCK();
                  plVar1 = (long*)( lStack_f0 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lStack_f0 = 0;
                     Memory::free_static((void*)( lVar33 + -0x10 ), false);
                  }

               }

               lVar33 = lStack_e8;
               if (lStack_e8 != 0) {
                  LOCK();
                  plVar1 = (long*)( lStack_e8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lStack_e8 = 0;
                     Memory::free_static((void*)( lVar33 + -0x10 ), false);
                  }

               }

               lVar33 = lStack_d8;
               if (lStack_d8 != 0) {
                  LOCK();
                  plVar1 = (long*)( lStack_d8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lStack_d8 = 0;
                     Memory::free_static((void*)( lVar33 + -0x10 ), false);
                  }

               }

               plVar50 = (long*)*plVar50;
            }
 while ( plVar50 != (long*)0x0 );
         }

         StringBuilder::append((char*)pSVar45);
         CharString::get_data();
         for (int i = 0; i < 3; i++) {
            StringBuilder::append((char*)pSVar45);
         }

         lVar33 = in_RCX[0xc];
         if (lVar33 != 0) {
            lVar34 = 0;
            do {
               if (*(long*)( lVar33 + -8 ) <= lVar34) break;
               lVar34 = lVar34 + 1;
               CharString::get_data();
               StringBuilder::append((char*)pSVar45);
               lVar33 = in_RCX[0xc];
            }
 while ( lVar33 != 0 );
         }

         StringBuilder::append((char*)pSVar45);
         if (*(char*)( GLES3::Config::singleton + 0x89 ) == '\0') {
            StringBuilder::append((char*)pSVar45);
         }
 else {
            StringBuilder::append((char*)pSVar45);
            StringBuilder::append((char*)pSVar45);
         }

         for (int i = 0; i < 6; i++) {
            StringBuilder::append((char*)pSVar45);
         }

         if (iVar40 == 0) {
            StringBuilder::append((char*)pSVar45);
         }

         for (int i = 0; i < 8; i++) {
            StringBuilder::append((char*)pSVar45);
         }

         if ((char)RasterizerGLES3::gles_over_gl == '\0') {
            for (int i = 0; i < 4; i++) {
               StringBuilder::append((char*)pSVar45);
            }

         }

         lVar33 = 0;
         lVar41 = lVar41 + (long)iVar40 * 0x10;
         if (*(int*)( lVar41 + 0xa8 ) == 0) {
            LAB_00103b70:if (lStack_b8 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         LAB_00103938:puVar2 = (undefined4*)( *(long*)( lVar41 + 0xb0 ) + lVar33 * 0x18 );
         switch (*puVar2) {
            case 0:
        CharString::get_data();
        StringBuilder::append((char *)pSVar45);
        break;
            case 1:
        CharString::get_data();
        StringBuilder::append((char *)pSVar45);
        break;
            case 2:
        CharString::get_data();
        StringBuilder::append((char *)pSVar45);
        break;
            case 3:
        if ((in_RCX[6] == 0) || (*(int *)((long)in_RCX + 0x54) == 0)) break;
        uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RCX + 10) * 4);
        lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RCX + 10) * 8);
        if (*(long *)(puVar2 + 2) == 0) {
          uVar39 = StringName::get_empty_hash();
        }
        else {
          uVar39 = *(uint *)(*(long *)(puVar2 + 2) + 0x20);
        }
        uVar53 = CONCAT44(0,uVar37);
        lVar36 = in_RCX[7];
        if (uVar39 == 0) {
          uVar39 = 1;
        }
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)uVar39 * lVar34;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar53;
        lVar42 = SUB168(auVar12 * auVar20,8);
        uVar38 = *(uint *)(lVar36 + lVar42 * 4);
        iVar40 = SUB164(auVar12 * auVar20,8);
        if (uVar38 == 0) break;
        uVar48 = 0;
        while ((uVar38 != uVar39 ||
               (lVar42 = *(long *)(*(long *)(in_RCX[6] + lVar42 * 8) + 0x10),
               lVar42 != *(long *)(puVar2 + 2)))) {
          uVar48 = uVar48 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar40 + 1) * lVar34;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar53;
          lVar42 = SUB168(auVar13 * auVar21,8);
          uVar38 = *(uint *)(lVar36 + lVar42 * 4);
          iVar40 = SUB164(auVar13 * auVar21,8);
          if ((uVar38 == 0) ||
             (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar38 * lVar34, auVar22._8_8_ = 0,
             auVar22._0_8_ = uVar53, auVar15._8_8_ = 0,
             auVar15._0_8_ = (ulong)((uVar37 + iVar40) - SUB164(auVar14 * auVar22,8)) * lVar34,
             auVar23._8_8_ = 0, auVar23._0_8_ = uVar53, SUB164(auVar15 * auVar23,8) < uVar48))
          goto switchD_00103960_default;
        }
        if ((in_RCX[6] == 0) || (*(int *)((long)in_RCX + 0x54) == 0)) goto LAB_00103c90;
        uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RCX + 10) * 4);
        lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RCX + 10) * 8);
        if (lVar42 == 0) {
          uVar39 = StringName::get_empty_hash();
          lVar36 = in_RCX[7];
        }
        else {
          uVar39 = *(uint *)(lVar42 + 0x20);
        }
        uVar53 = CONCAT44(0,uVar37);
        if (uVar39 == 0) {
          uVar39 = 1;
        }
        auVar16._8_8_ = 0;
        auVar16._0_8_ = (ulong)uVar39 * lVar34;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar53;
        lVar42 = SUB168(auVar16 * auVar24,8);
        uVar38 = *(uint *)(lVar36 + lVar42 * 4);
        iVar40 = SUB164(auVar16 * auVar24,8);
        if (uVar38 == 0) goto LAB_00103c90;
        uVar48 = 0;
        while ((uVar38 != uVar39 ||
               (*(long *)(*(long *)(in_RCX[6] + lVar42 * 8) + 0x10) != *(long *)(puVar2 + 2)))) {
          uVar48 = uVar48 + 1;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = (ulong)(iVar40 + 1) * lVar34;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar53;
          lVar42 = SUB168(auVar17 * auVar25,8);
          uVar38 = *(uint *)(lVar36 + lVar42 * 4);
          iVar40 = SUB164(auVar17 * auVar25,8);
          if ((uVar38 == 0) ||
             (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar38 * lVar34, auVar26._8_8_ = 0,
             auVar26._0_8_ = uVar53, auVar19._8_8_ = 0,
             auVar19._0_8_ = (ulong)((uVar37 + iVar40) - SUB164(auVar18 * auVar26,8)) * lVar34,
             auVar27._8_8_ = 0, auVar27._0_8_ = uVar53, SUB164(auVar19 * auVar27,8) < uVar48)) {
LAB_00103c90:
            _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                             "FATAL: Condition \"!exists\" is true.",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar28 = (code *)invalidInstructionException();
            (*pcVar28)();
          }
        }
        lVar33 = lVar33 + 1;
        CharString::get_data();
        StringBuilder::append((char *)pSVar45);
        if (*(uint *)(lVar41 + 0xa8) <= (uint)lVar33) goto LAB_00103b70;
        goto LAB_00103938;
            case 4:
        CharString::get_data();
        StringBuilder::append((char *)pSVar45);
         }

         switchD_00103960_default:lVar33 = lVar33 + 1;
         if (*(uint*)( lVar41 + 0xa8 ) <= (uint)lVar33) goto LAB_00103b70;
         goto LAB_00103938;
      }

      *(int*)( puVar43 + 4 ) = iVar30;
      lVar41 = 0;
      do {
         *(undefined4*)( lVar33 + lVar41 ) = *(undefined4*)( (long)unaff_R15 + lVar41 );
         lVar41 = lVar41 + 4;
      }
 while ( lVar41 != ( (ulong)puVar31 & 0xffffffff ) << 2 );
      *(undefined1*)( puVar43 + 6 ) = (undefined1)local_58;
      *(undefined1*)( (long)puVar43 + 0x31 ) = (undefined1)local_70;
      *(int*)( puVar46[2] + local_68 ) = (int)uVar53;
      *(int*)( (long)puVar46 + 0x1c ) = *(int*)( (long)puVar46 + 0x1c ) + 1;
   }

   pvStack_80 = (void*)0x1031b1;
   Memory::free_static(unaff_R15, false);
   joined_r0x001031f7:if (pvVar32 == (void*)0x0) {
      return;
   }

   Memory::free_static(pvVar32, false);
   return;
}
/* ShaderGLES3::_build_variant_code(StringBuilder&, unsigned int, ShaderGLES3::Version const*,
   ShaderGLES3::StageType, unsigned long) */void ShaderGLES3::_build_variant_code(ShaderGLES3 *this, String *param_1, undefined8 param_3_00, long param_3, int param_5, ulong param_6) {
   long *plVar1;
   undefined4 *puVar2;
   char cVar3;
   uint uVar4;
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
   size_t sVar24;
   long lVar25;
   int iVar26;
   long lVar27;
   long lVar28;
   uint uVar29;
   uint uVar30;
   long *plVar31;
   long lVar32;
   ulong uVar33;
   long in_FS_OFFSET;
   bool bVar34;
   long local_78;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if ((char)RasterizerGLES3::gles_over_gl == '\0') {
      StringBuilder::append((char*)param_1);
      cVar3 = *(char*)( GLES3::Config::singleton + 0x8d );
   }
 else {
      StringBuilder::append((char*)param_1);
      StringBuilder::append((char*)param_1);
      cVar3 = *(char*)( GLES3::Config::singleton + 0x8d );
   }

   if (cVar3 != '\0') {
      StringBuilder::append((char*)param_1);
   }

   uVar33 = 0;
   if (0 < *(int*)( this + 0x104 )) {
      LAB_00103369:do {
         if (( param_6 >> ( uVar33 & 0x3f ) & 1 ) != 0) {
            local_60 = 0;
            local_50 = 1;
            local_58 = "\n";
            String::parse_latin1((StrRange*)&local_60);
            pcVar5 = *(char**)( uVar33 * 0x10 + *(long*)( this + 0x108 ) );
            sVar24 = 0;
            local_70 = 0;
            if (pcVar5 != (char*)0x0) {
               sVar24 = strlen(pcVar5);
            }

            local_58 = pcVar5;
            local_50 = sVar24;
            String::parse_latin1((StrRange*)&local_70);
            operator+((char *)&
            local_68,(String*)"#define ";
            String::operator +((String*)&local_58, (String*)&local_68);
            StringBuilder::append(param_1);
            pcVar5 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar31 = (long*)( local_58 + -0x10 );
               *plVar31 = *plVar31 + -1;
               UNLOCK();
               if (*plVar31 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar5 + -0x10, false);
               }

            }

            lVar32 = local_68;
            if (local_68 != 0) {
               LOCK();
               plVar31 = (long*)( local_68 + -0x10 );
               *plVar31 = *plVar31 + -1;
               UNLOCK();
               if (*plVar31 == 0) {
                  local_68 = 0;
                  Memory::free_static((void*)( lVar32 + -0x10 ), false);
               }

            }

            lVar32 = local_70;
            if (local_70 != 0) {
               LOCK();
               plVar31 = (long*)( local_70 + -0x10 );
               *plVar31 = *plVar31 + -1;
               UNLOCK();
               if (*plVar31 == 0) {
                  local_70 = 0;
                  Memory::free_static((void*)( lVar32 + -0x10 ), false);
               }

            }

            lVar32 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar31 = (long*)( local_60 + -0x10 );
               *plVar31 = *plVar31 + -1;
               UNLOCK();
               if (*plVar31 == 0) {
                  uVar33 = uVar33 + 1;
                  local_60 = 0;
                  Memory::free_static((void*)( lVar32 + -0x10 ), false);
                  if (*(int*)( this + 0x104 ) <= (int)uVar33) break;
                  goto LAB_00103369;
               }

            }

         }

         uVar33 = uVar33 + 1;
      }
 while ( (int)uVar33 < *(int*)( this + 0x104 ) );
   }

   if (( *(long*)( param_3 + 0x10 ) != 0 ) && ( *(int*)( *(long*)( param_3 + 0x10 ) + -8 ) != 0 )) {
      StringBuilder::append((char*)param_1);
   }

   plVar31 = *(long**)( param_3 + 0x40 );
   if (plVar31 != (long*)0x0) {
      do {
         local_60 = 0;
         local_58 = "_CODE_USED\n";
         local_50 = 0xb;
         String::parse_latin1((StrRange*)&local_60);
         lVar32 = plVar31[2];
         if (lVar32 == 0) {
            local_70 = 0;
         }
 else {
            pcVar5 = *(char**)( lVar32 + 8 );
            local_70 = 0;
            if (pcVar5 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar32 + 0x10 ) + -0x10 );
               if (*(long*)( lVar32 + 0x10 ) != 0) {
                  do {
                     lVar28 = *plVar1;
                     if (lVar28 == 0) goto LAB_0010358d;
                     LOCK();
                     lVar25 = *plVar1;
                     bVar34 = lVar28 == lVar25;
                     if (bVar34) {
                        *plVar1 = lVar28 + 1;
                        lVar25 = lVar28;
                     }

                     UNLOCK();
                  }
 while ( !bVar34 );
                  if (lVar25 != -1) {
                     local_70 = *(long*)( lVar32 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(pcVar5);
               local_58 = pcVar5;
               String::parse_latin1((StrRange*)&local_70);
            }

         }

         LAB_0010358d:local_78 = 0;
         local_58 = "#define ";
         local_50 = 8;
         String::parse_latin1((StrRange*)&local_78);
         String::operator +((String*)&local_68, (String*)&local_78);
         String::operator +((String*)&local_58, (String*)&local_68);
         StringBuilder::append(param_1);
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

         lVar32 = local_68;
         if (local_68 != 0) {
            LOCK();
            plVar1 = (long*)( local_68 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_68 = 0;
               Memory::free_static((void*)( lVar32 + -0x10 ), false);
            }

         }

         lVar32 = local_78;
         if (local_78 != 0) {
            LOCK();
            plVar1 = (long*)( local_78 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_78 = 0;
               Memory::free_static((void*)( lVar32 + -0x10 ), false);
            }

         }

         lVar32 = local_70;
         if (local_70 != 0) {
            LOCK();
            plVar1 = (long*)( local_70 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_70 = 0;
               Memory::free_static((void*)( lVar32 + -0x10 ), false);
            }

         }

         lVar32 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar32 + -0x10 ), false);
            }

         }

         plVar31 = (long*)*plVar31;
      }
 while ( plVar31 != (long*)0x0 );
   }

   StringBuilder::append((char*)param_1);
   CharString::get_data();
   for (int i = 0; i < 3; i++) {
      StringBuilder::append((char*)param_1);
   }

   lVar32 = *(long*)( param_3 + 0x60 );
   if (lVar32 != 0) {
      lVar28 = 0;
      do {
         if (*(long*)( lVar32 + -8 ) <= lVar28) break;
         lVar28 = lVar28 + 1;
         CharString::get_data();
         StringBuilder::append((char*)param_1);
         lVar32 = *(long*)( param_3 + 0x60 );
      }
 while ( lVar32 != 0 );
   }

   StringBuilder::append((char*)param_1);
   if (*(char*)( GLES3::Config::singleton + 0x89 ) == '\0') {
      StringBuilder::append((char*)param_1);
   }
 else {
      StringBuilder::append((char*)param_1);
      StringBuilder::append((char*)param_1);
   }

   for (int i = 0; i < 6; i++) {
      StringBuilder::append((char*)param_1);
   }

   if (param_5 == 0) {
      StringBuilder::append((char*)param_1);
   }

   for (int i = 0; i < 8; i++) {
      StringBuilder::append((char*)param_1);
   }

   if ((char)RasterizerGLES3::gles_over_gl == '\0') {
      for (int i = 0; i < 4; i++) {
         StringBuilder::append((char*)param_1);
      }

   }

   lVar32 = 0;
   if (*(int*)( this + (long)param_5 * 0x10 + 0xa8 ) == 0) {
      LAB_00103b70:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   LAB_00103938:puVar2 = (undefined4*)( *(long*)( this + (long)param_5 * 0x10 + 0xb0 ) + lVar32 * 0x18 );
   switch (*puVar2) {
      case 0:
    CharString::get_data();
    StringBuilder::append((char *)param_1);
    break;
      case 1:
    CharString::get_data();
    StringBuilder::append((char *)param_1);
    break;
      case 2:
    CharString::get_data();
    StringBuilder::append((char *)param_1);
    break;
      case 3:
    if ((*(long *)(param_3 + 0x30) == 0) || (*(int *)(param_3 + 0x54) == 0)) break;
    uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_3 + 0x50) * 4);
    lVar28 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_3 + 0x50) * 8);
    if (*(long *)(puVar2 + 2) == 0) {
      uVar23 = StringName::get_empty_hash();
    }
    else {
      uVar23 = *(uint *)(*(long *)(puVar2 + 2) + 0x20);
    }
    uVar33 = CONCAT44(0,uVar4);
    lVar25 = *(long *)(param_3 + 0x38);
    if (uVar23 == 0) {
      uVar23 = 1;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (ulong)uVar23 * lVar28;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar33;
    lVar27 = SUB168(auVar6 * auVar14,8);
    uVar29 = *(uint *)(lVar25 + lVar27 * 4);
    iVar26 = SUB164(auVar6 * auVar14,8);
    if (uVar29 == 0) break;
    uVar30 = 0;
    while ((uVar29 != uVar23 ||
           (lVar27 = *(long *)(*(long *)(*(long *)(param_3 + 0x30) + lVar27 * 8) + 0x10),
           lVar27 != *(long *)(puVar2 + 2)))) {
      uVar30 = uVar30 + 1;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)(iVar26 + 1) * lVar28;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar33;
      lVar27 = SUB168(auVar7 * auVar15,8);
      uVar29 = *(uint *)(lVar25 + lVar27 * 4);
      iVar26 = SUB164(auVar7 * auVar15,8);
      if ((uVar29 == 0) ||
         (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar29 * lVar28, auVar16._8_8_ = 0,
         auVar16._0_8_ = uVar33, auVar9._8_8_ = 0,
         auVar9._0_8_ = (ulong)((uVar4 + iVar26) - SUB164(auVar8 * auVar16,8)) * lVar28,
         auVar17._8_8_ = 0, auVar17._0_8_ = uVar33, SUB164(auVar9 * auVar17,8) < uVar30))
      goto switchD_00103960_default;
    }
    if ((*(long *)(param_3 + 0x30) == 0) || (*(int *)(param_3 + 0x54) == 0)) goto LAB_00103c90;
    uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_3 + 0x50) * 4);
    lVar28 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_3 + 0x50) * 8);
    if (lVar27 == 0) {
      uVar23 = StringName::get_empty_hash();
      lVar25 = *(long *)(param_3 + 0x38);
    }
    else {
      uVar23 = *(uint *)(lVar27 + 0x20);
    }
    uVar33 = CONCAT44(0,uVar4);
    if (uVar23 == 0) {
      uVar23 = 1;
    }
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar23 * lVar28;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar33;
    lVar27 = SUB168(auVar10 * auVar18,8);
    uVar29 = *(uint *)(lVar25 + lVar27 * 4);
    iVar26 = SUB164(auVar10 * auVar18,8);
    if (uVar29 == 0) goto LAB_00103c90;
    uVar30 = 0;
    while ((uVar29 != uVar23 ||
           (*(long *)(*(long *)(*(long *)(param_3 + 0x30) + lVar27 * 8) + 0x10) !=
            *(long *)(puVar2 + 2)))) {
      uVar30 = uVar30 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)(iVar26 + 1) * lVar28;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar33;
      lVar27 = SUB168(auVar11 * auVar19,8);
      uVar29 = *(uint *)(lVar25 + lVar27 * 4);
      iVar26 = SUB164(auVar11 * auVar19,8);
      if ((uVar29 == 0) ||
         (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar29 * lVar28, auVar20._8_8_ = 0,
         auVar20._0_8_ = uVar33, auVar13._8_8_ = 0,
         auVar13._0_8_ = (ulong)((uVar4 + iVar26) - SUB164(auVar12 * auVar20,8)) * lVar28,
         auVar21._8_8_ = 0, auVar21._0_8_ = uVar33, SUB164(auVar13 * auVar21,8) < uVar30)) {
LAB_00103c90:
        _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                         "FATAL: Condition \"!exists\" is true.",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar22 = (code *)invalidInstructionException();
        (*pcVar22)();
      }
    }
    lVar32 = lVar32 + 1;
    CharString::get_data();
    StringBuilder::append((char *)param_1);
    if (*(uint *)(this + (long)param_5 * 0x10 + 0xa8) <= (uint)lVar32) goto LAB_00103b70;
    goto LAB_00103938;
      case 4:
    CharString::get_data();
    StringBuilder::append((char *)param_1);
   }

   switchD_00103960_default:lVar32 = lVar32 + 1;
   if (*(uint*)( this + (long)param_5 * 0x10 + 0xa8 ) <= (uint)lVar32) goto LAB_00103b70;
   goto LAB_00103938;
}
/* ShaderGLES3::version_is_valid(RID) */undefined8 ShaderGLES3::version_is_valid(ShaderGLES3 *this, ulong param_2) {
   int iVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x54 ) )) {
      iVar1 = *(int*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x50 ) ) * 0x80 + *(long*)( *(long*)( this + 0x40 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x50 ) ) * 8 ) + 0x78 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return 1;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         return 0;
      }

   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* ShaderGLES3::ShaderGLES3() */void ShaderGLES3::ShaderGLES3(ShaderGLES3 *this) {
   undefined8 uVar1;
   undefined8 uVar2;
   *(undefined***)this = &PTR___cxa_pure_virtual_0010fd08;
   *(undefined1(*) [16])( this + 0x20 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x78 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x68 ) = (undefined1[16])0x0;
   uVar1 = _UNK_0010fee8;
   uVar2 = __LC51;
   *(undefined8*)( this + 8 ) = 0;
   *(undefined8*)( this + 0x30 ) = 0;
   *(undefined4*)( this + 0x20 ) = 1;
   *(undefined***)( this + 0x38 ) = &PTR__RID_Alloc_0010fce8;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 64 ) ) = 0;
   }

   *(undefined4*)( this + 0x78 ) = 1;
   *(undefined8*)( this + 0x50 ) = uVar2;
   *(undefined8*)( this + 0x58 ) = uVar1;
   uVar2 = Memory::alloc_static(0xf08, false);
   *(undefined8*)( this + 0x40 ) = uVar2;
   uVar2 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x5c ) << 3, false);
   *(undefined8*)( this + 0x48 ) = uVar2;
   this[0xa0] = (ShaderGLES3)0x0;
   *(undefined4*)( this + 0xa4 ) = 0;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 8*i + 168 ) ) = 0;
   }

   *(undefined4*)( this + 0xd0 ) = 0;
   *(undefined8*)( this + 0xd8 ) = 0;
   *(undefined4*)( this + 0xe0 ) = 0;
   *(undefined4*)( this + 0xf0 ) = 0;
   for (int i = 0; i < 7; i++) {
      *(undefined8*)( this + ( 8*i + 248 ) ) = 0;
   }

   *(undefined1(*) [16])( this + 0x90 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xc0 ) = (undefined1[16])0x0;
   return;
}
/* ShaderGLES3::set_shader_cache_dir(String const&) */void ShaderGLES3::set_shader_cache_dir(String *param_1) {
   if (shader_cache_dir != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&shader_cache_dir, (CowData*)param_1);
      return;
   }

   return;
}
/* ShaderGLES3::set_shader_cache_save_compressed(bool) */void ShaderGLES3::set_shader_cache_save_compressed(bool param_1) {
   shader_cache_save_compressed = param_1;
   return;
}
/* ShaderGLES3::set_shader_cache_save_compressed_zstd(bool) */void ShaderGLES3::set_shader_cache_save_compressed_zstd(bool param_1) {
   shader_cache_save_compressed_zstd = param_1;
   return;
}
/* ShaderGLES3::set_shader_cache_save_debug(bool) */void ShaderGLES3::set_shader_cache_save_debug(bool param_1) {
   shader_cache_save_debug = param_1;
   return;
}
/* ShaderGLES3::initialize(String const&, int) */void ShaderGLES3::initialize(ShaderGLES3 *this, String *param_1, int param_2) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   char *pcVar4;
   char cVar5;
   int iVar6;
   long lVar7;
   long in_FS_OFFSET;
   bool bVar8;
   Object *local_d0;
   CowData<char32_t> local_c8[8];
   long local_c0;
   long local_b8;
   long local_b0;
   char *local_a8;
   undefined8 local_a0;
   long local_98[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   String::utf8();
   if (*(long*)( this + 8 ) != local_98[0]) {
      CowData<char>::_unref((CowData<char>*)( this + 8 ));
      lVar3 = local_98[0];
      local_98[0] = 0;
      *(long*)( this + 8 ) = lVar3;
   }

   CowData<char>::_unref((CowData<char>*)local_98);
   *(int*)( this + 0x124 ) = param_2;
   ( *(code*)**(undefined8**)this )(this);
   local_98[0] = 0;
   cVar5 = String::operator !=((String*)&shader_cache_dir, (String*)local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   if (cVar5 == '\0') {
      LAB_00104030:if (GLES3::Config::singleton == 0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            _err_print_error("initialize", "drivers/gles3/shader_gles3.cpp", 0x332, "Parameter \"config\" is null.", 0, 0);
            return;
         }

         goto LAB_00104739;
      }

      *(undefined4*)( this + 0xa4 ) = *(undefined4*)( GLES3::Config::singleton + 8 );
   }
 else {
      for (int i = 0; i < 7; i++) {
         local_98[i] = 0;
      }

      StringBuilder::append((char*)local_98);
      StringBuilder::append((String*)local_98);
      StringBuilder::append((char*)local_98);
      CharString::get_data();
      StringBuilder::append((char*)local_98);
      if (0 < *(int*)( this + 0x120 )) {
         iVar6 = 0;
         do {
            local_b0 = 0;
            local_a8 = "]";
            local_a0 = 1;
            String::parse_latin1((StrRange*)&local_b0);
            itos((long)&local_c0);
            operator+((char *)&
            local_b8,(String*)"[variant_defines:";
            String::operator +((String*)&local_a8, (String*)&local_b8);
            StringBuilder::append((String*)local_98);
            pcVar4 = local_a8;
            if (local_a8 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_a8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_a8 = (char*)0x0;
                  Memory::free_static(pcVar4 + -0x10, false);
               }

            }

            lVar3 = local_b8;
            if (local_b8 != 0) {
               LOCK();
               plVar1 = (long*)( local_b8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_b8 = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            lVar3 = local_c0;
            if (local_c0 != 0) {
               LOCK();
               plVar1 = (long*)( local_c0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_c0 = 0;
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

            iVar6 = iVar6 + 1;
            StringBuilder::append((char*)local_98);
         }
 while ( iVar6 < *(int*)( this + 0x120 ) );
      }

      StringBuilder::as_string();
      String::sha256_text();
      if (*(char**)( this + 0x98 ) != local_a8) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x98 ));
         pcVar4 = local_a8;
         local_a8 = (char*)0x0;
         *(char**)( this + 0x98 ) = pcVar4;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
      DirAccess::open((String*)&local_d0, (Error*)&shader_cache_dir);
      if (local_d0 != (Object*)0x0) {
         pcVar2 = *(code**)( *(long*)local_d0 + 0x1a8 );
         local_a8 = (char*)0x0;
         plVar1 = (long*)( *(long*)( this + 0x90 ) + -0x10 );
         if (*(long*)( this + 0x90 ) != 0) {
            do {
               lVar3 = *plVar1;
               if (lVar3 == 0) goto LAB_00104324;
               LOCK();
               lVar7 = *plVar1;
               bVar8 = lVar3 == lVar7;
               if (bVar8) {
                  *plVar1 = lVar3 + 1;
                  lVar7 = lVar3;
               }

               UNLOCK();
            }
 while ( !bVar8 );
            if (lVar7 != -1) {
               local_a8 = *(char**)( this + 0x90 );
            }

         }

         LAB_00104324:iVar6 = ( *pcVar2 )(local_d0, (CowData<char32_t>*)&local_a8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
         if (iVar6 != 0) {
            pcVar2 = *(code**)( *(long*)local_d0 + 0x1b8 );
            local_a8 = (char*)0x0;
            plVar1 = (long*)( *(long*)( this + 0x90 ) + -0x10 );
            if (*(long*)( this + 0x90 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_00104388;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar8 = lVar3 == lVar7;
                  if (bVar8) {
                     *plVar1 = lVar3 + 1;
                     lVar7 = lVar3;
                  }

                  UNLOCK();
               }
 while ( !bVar8 );
               if (lVar7 != -1) {
                  local_a8 = *(char**)( this + 0x90 );
               }

            }

            LAB_00104388:iVar6 = ( *pcVar2 )(local_d0, (CowData<char32_t>*)&local_a8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
            if (iVar6 != 0) {
               _err_print_error("initialize", "drivers/gles3/shader_gles3.cpp", 800, "Condition \"err != OK\" is true.", 0, 0);
               goto LAB_00104686;
            }

            pcVar2 = *(code**)( *(long*)local_d0 + 0x1a8 );
            local_a8 = (char*)0x0;
            plVar1 = (long*)( *(long*)( this + 0x90 ) + -0x10 );
            if (*(long*)( this + 0x90 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_001043ec;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar8 = lVar3 == lVar7;
                  if (bVar8) {
                     *plVar1 = lVar3 + 1;
                     lVar7 = lVar3;
                  }

                  UNLOCK();
               }
 while ( !bVar8 );
               if (lVar7 != -1) {
                  local_a8 = *(char**)( this + 0x90 );
               }

            }

            LAB_001043ec:( *pcVar2 )(local_d0, (CowData<char32_t>*)&local_a8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
         }

         pcVar2 = *(code**)( *(long*)local_d0 + 0x1a8 );
         local_a8 = (char*)0x0;
         plVar1 = (long*)( *(long*)( this + 0x98 ) + -0x10 );
         if (*(long*)( this + 0x98 ) != 0) {
            do {
               lVar3 = *plVar1;
               if (lVar3 == 0) goto LAB_00104446;
               LOCK();
               lVar7 = *plVar1;
               bVar8 = lVar3 == lVar7;
               if (bVar8) {
                  *plVar1 = lVar3 + 1;
                  lVar7 = lVar3;
               }

               UNLOCK();
            }
 while ( !bVar8 );
            if (lVar7 != -1) {
               local_a8 = *(char**)( this + 0x98 );
            }

         }

         LAB_00104446:iVar6 = ( *pcVar2 )();
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
         if (iVar6 != 0) {
            pcVar2 = *(code**)( *(long*)local_d0 + 0x1b8 );
            local_a8 = (char*)0x0;
            plVar1 = (long*)( *(long*)( this + 0x98 ) + -0x10 );
            if (*(long*)( this + 0x98 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_001044a6;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar8 = lVar3 == lVar7;
                  if (bVar8) {
                     *plVar1 = lVar3 + 1;
                     lVar7 = lVar3;
                  }

                  UNLOCK();
               }
 while ( !bVar8 );
               if (lVar7 != -1) {
                  local_a8 = *(char**)( this + 0x98 );
               }

            }

            LAB_001044a6:iVar6 = ( *pcVar2 )();
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
            if (iVar6 != 0) {
               _err_print_error("initialize", "drivers/gles3/shader_gles3.cpp", 0x32a, "Condition \"err != OK\" is true.", 0, 0);
               goto LAB_00104686;
            }

         }

         this[0xa0] = (ShaderGLES3)0x1;
         cVar5 = is_print_verbose_enabled();
         if (cVar5 != '\0') {
            local_c0 = 0;
            local_a8 = "\' SHA256: ";
            local_a0 = 10;
            String::parse_latin1((StrRange*)&local_c0);
            operator+((char *)
            local_c8,(String*)"Shader \'";
            String::operator +((String*)&local_b8, (String*)local_c8);
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
            CowData<char32_t>::_unref(local_c8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
         }

         if (( ( local_d0 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)local_d0 + 0x140 ))(local_d0);
         Memory::free_static(local_d0, false);
      }

      StringBuilder::~StringBuilder((StringBuilder*)local_98);
      goto LAB_00104030;
   }

   _err_print_error("initialize", "drivers/gles3/shader_gles3.cpp", 0x31d, "Condition \"d.is_null()\" is true.", 0, 0);
   LAB_00104686:if (( ( local_d0 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)local_d0 + 0x140 ))(local_d0);
   Memory::free_static(local_d0, false);
}
StringBuilder::~StringBuilder((StringBuilder*)local_98);}if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
LAB_00104739:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* ShaderGLES3::_clear_version(ShaderGLES3::Version*) [clone .part.0] */void ShaderGLES3::_clear_version(ShaderGLES3 *this, Version *param_1) {
   code *pcVar1;
   ulong uVar2;
   ulong uVar3;
   long *plVar4;
   int *piVar5;
   long lVar6;
   ulong uVar7;
   uint uVar8;
   if (*(int*)( this + 0x120 ) < 1) {
      LAB_0010484d:LocalVector<OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>,unsigned_int,false,false>::resize((LocalVector<OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>,unsigned_int,false,false>*)( param_1 + 0x68 ), 0);
      return;
   }

   uVar7 = ( ulong ) * (uint*)( param_1 + 0x68 );
   lVar6 = 0;
   LAB_0010476c:if ((uint)lVar6 < (uint)uVar7) {
      plVar4 = (long*)( *(long*)( param_1 + 0x70 ) + lVar6 * 0x20 );
      uVar2 = 0;
      do {
         uVar3 = uVar2;
         if (uVar3 == *(uint*)( plVar4 + 3 )) goto LAB_00104838;
         uVar2 = uVar3 + 1;
      }
 while ( *(int*)( plVar4[2] + uVar3 * 4 ) == 0 );
      uVar8 = (uint)uVar3;
      piVar5 = (int*)( *plVar4 + uVar3 * 0x38 );
      while (true) {
         uVar8 = uVar8 + 1;
         if (*piVar5 != 0) {
            ( *_glad_glDeleteShader )(piVar5[1]);
            ( *_glad_glDeleteShader )(piVar5[2]);
            ( *_glad_glDeleteProgram )(*piVar5);
            uVar7 = ( ulong ) * (uint*)( param_1 + 0x68 );
         }

         if ((uint)uVar7 <= (uint)lVar6) break;
         plVar4 = (long*)( *(long*)( param_1 + 0x70 ) + lVar6 * 0x20 );
         uVar2 = (ulong)uVar8;
         while (true) {
            if (*(uint*)( plVar4 + 3 ) <= uVar8) goto LAB_00104838;
            if (*(int*)( plVar4[2] + uVar2 * 4 ) != 0) break;
            uVar8 = ( uint )(uVar2 + 1);
            uVar2 = uVar2 + 1;
         }
;
         piVar5 = (int*)( *plVar4 + uVar2 * 0x38 );
      }
;
   }

   _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, lVar6, uVar7, "p_index", "count", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
   LAB_00104838:lVar6 = lVar6 + 1;
   if (*(int*)( this + 0x120 ) <= (int)lVar6) goto LAB_0010484d;
   goto LAB_0010476c;
}
/* ShaderGLES3::_clear_version(ShaderGLES3::Version*) */void ShaderGLES3::_clear_version(ShaderGLES3 *this, Version *param_1) {
   if (*(int*)( param_1 + 0x68 ) != 0) {
      _clear_version(this, param_1);
      return;
   }

   return;
}
/* ShaderGLES3::_add_stage(char const*, ShaderGLES3::StageType) */void ShaderGLES3::_add_stage(ShaderGLES3 *this, char *param_1, int param_3) {
   long *plVar1;
   undefined4 *puVar2;
   String *pSVar3;
   uint uVar4;
   code *pcVar5;
   long lVar6;
   undefined8 uVar7;
   char *pcVar8;
   char cVar9;
   ulong uVar10;
   void *pvVar11;
   long lVar12;
   long lVar13;
   long in_FS_OFFSET;
   long local_120;
   undefined8 local_118;
   undefined8 local_110;
   char local_108[8];
   long local_100;
   undefined4 local_f8;
   undefined1 local_f0[16];
   undefined4 local_d8[2];
   undefined1 local_d0[24];
   undefined4 local_b8[2];
   long local_b0;
   long local_a8[2];
   undefined4 local_98[2];
   long local_90;
   long local_88[2];
   undefined8 local_78;
   undefined1 local_70[24];
   char *local_58;
   size_t local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_78 = 0;
   if (param_1 != (char*)0x0) {
      local_50 = strlen(param_1);
   }

   lVar13 = 0;
   local_58 = param_1;
   String::parse_latin1((StrRange*)&local_78);
   String::split(local_108, SUB81((StrRange*)&local_78, 0), 0x10ac2b);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   local_120 = 0;
   if (local_100 != 0) {
      lVar12 = (long)param_3;
      do {
         if (*(long*)( local_100 + -8 ) <= lVar13) break;
         pSVar3 = (String*)( local_100 + lVar13 * 8 );
         local_f0 = (undefined1[16])0x0;
         cVar9 = String::begins_with((char*)pSVar3);
         if (cVar9 == '\0') {
            cVar9 = String::begins_with((char*)pSVar3);
            if (cVar9 != '\0') {
               local_f8 = 0;
               goto LAB_001049e1;
            }

            cVar9 = String::begins_with((char*)pSVar3);
            if (cVar9 != '\0') {
               local_58 = "#CODE";
               local_f8 = 3;
               local_118 = 0;
               local_110 = 0;
               local_50 = 5;
               String::parse_latin1((StrRange*)&local_110);
               String::replace_first((String*)local_d8, pSVar3);
               String::replace((char*)local_b8, (char*)local_d8);
               String::strip_edges(SUB81((CowData<char32_t>*)local_98, 0), SUB81((CowData<char32_t>*)local_b8, 0));
               String::to_upper();
               StringName::StringName((StringName_conflict*)&local_58, (String*)&local_78, false);
               if ((char*)local_f0._0_8_ == local_58) {
                  if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                     StringName::unref();
                  }

               }
 else {
                  StringName::unref();
                  local_f0._0_8_ = local_58;
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_d8);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
               goto LAB_001049e1;
            }

            local_78 = 0;
            local_58 = "\n";
            local_50 = 1;
            String::parse_latin1((StrRange*)&local_78);
            String::operator +((String*)&local_58, pSVar3);
            String::operator +=((String*)&local_120, (String*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         }
 else {
            if (param_3 == 0) {
               local_f8 = 1;
            }
 else if (param_3 == 1) {
               local_f8 = 2;
            }

            LAB_001049e1:local_58 = (char*)0x0;
            cVar9 = String::operator !=((String*)&local_120, (String*)&local_58);
            pcVar8 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_58 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar8 + -0x10, false);
               }

            }

            if (cVar9 != '\0') {
               local_d8[0] = 4;
               local_d0._0_16_ = (undefined1[16])0x0;
               String::utf8();
               pcVar8 = local_58;
               uVar7 = local_d0._8_8_;
               if ((char*)local_d0._8_8_ == local_58) {
                  if ((char*)local_d0._8_8_ != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_d0._8_8_ + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_58 = (char*)0x0;
                        Memory::free_static(pcVar8 + -0x10, false);
                     }

                  }

               }
 else {
                  if ((char*)local_d0._8_8_ != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_d0._8_8_ + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_d0._8_8_ = 0;
                        Memory::free_static((char*)( uVar7 + -0x10 ), false);
                     }

                  }

                  local_d0._8_8_ = local_58;
               }

               local_b8[0] = local_d8[0];
               StringName::StringName((StringName_conflict*)&local_b0, (StringName_conflict*)local_d0);
               local_a8[0] = 0;
               if (local_d0._8_8_ != 0) {
                  CowData<char>::_ref((CowData<char>*)local_a8, (CowData*)( local_d0 + 8 ));
               }

               uVar4 = *(uint*)( this + lVar12 * 0x10 + 0xa8 );
               pvVar11 = *(void**)( this + lVar12 * 0x10 + 0xb0 );
               if (uVar4 == *(uint*)( this + lVar12 * 0x10 + 0xac )) {
                  uVar10 = ( ulong )(uVar4 * 2);
                  if (uVar4 * 2 == 0) {
                     uVar10 = 1;
                  }

                  *(int*)( this + lVar12 * 0x10 + 0xac ) = (int)uVar10;
                  pvVar11 = (void*)Memory::realloc_static(pvVar11, uVar10 * 0x18, false);
                  *(void**)( this + lVar12 * 0x10 + 0xb0 ) = pvVar11;
                  if (pvVar11 == (void*)0x0) goto LAB_001053b8;
                  uVar4 = *(uint*)( this + lVar12 * 0x10 + 0xa8 );
               }

               *(uint*)( this + lVar12 * 0x10 + 0xa8 ) = uVar4 + 1;
               puVar2 = (undefined4*)( (long)pvVar11 + (ulong)uVar4 * 0x18 );
               *puVar2 = local_b8[0];
               StringName::StringName((StringName_conflict*)( puVar2 + 2 ), (StringName_conflict*)&local_b0);
               *(undefined8*)( puVar2 + 4 ) = 0;
               if (( local_a8[0] != 0 ) && ( CowData<char>::_ref((CowData<char>*)( puVar2 + 4 ), (CowData*)local_a8),lVar6 = local_a8[0],local_a8[0] != 0 )) {
                  LOCK();
                  plVar1 = (long*)( local_a8[0] + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_a8[0] = 0;
                     Memory::free_static((void*)( lVar6 + -0x10 ), false);
                  }

               }

               if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                  StringName::unref();
               }

               lVar6 = local_120;
               if (local_120 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_120 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_120 = 0;
                     Memory::free_static((void*)( lVar6 + -0x10 ), false);
                  }

                  local_120 = 0;
               }

               uVar7 = local_d0._8_8_;
               if (local_d0._8_8_ != 0) {
                  LOCK();
                  plVar1 = (long*)( local_d0._8_8_ + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_d0._8_8_ = 0;
                     Memory::free_static((void*)( uVar7 + -0x10 ), false);
                  }

               }

               if (( StringName::configured != '\0' ) && ( local_d0._0_8_ != 0 )) {
                  StringName::unref();
               }

            }

            local_98[0] = local_f8;
            StringName::StringName((StringName_conflict*)&local_90, (StringName_conflict*)local_f0);
            local_88[0] = 0;
            if (local_f0._8_8_ != 0) {
               CowData<char>::_ref((CowData<char>*)local_88, (CowData*)( local_f0 + 8 ));
            }

            uVar4 = *(uint*)( this + lVar12 * 0x10 + 0xa8 );
            pvVar11 = *(void**)( this + lVar12 * 0x10 + 0xb0 );
            if (uVar4 == *(uint*)( this + lVar12 * 0x10 + 0xac )) {
               uVar10 = ( ulong )(uVar4 * 2);
               if (uVar4 * 2 == 0) {
                  uVar10 = 1;
               }

               *(int*)( this + lVar12 * 0x10 + 0xac ) = (int)uVar10;
               pvVar11 = (void*)Memory::realloc_static(pvVar11, uVar10 * 0x18, false);
               *(void**)( this + lVar12 * 0x10 + 0xb0 ) = pvVar11;
               if (pvVar11 == (void*)0x0) goto LAB_001053b8;
               uVar4 = *(uint*)( this + lVar12 * 0x10 + 0xa8 );
            }

            *(uint*)( this + lVar12 * 0x10 + 0xa8 ) = uVar4 + 1;
            puVar2 = (undefined4*)( (long)pvVar11 + (ulong)uVar4 * 0x18 );
            *puVar2 = local_98[0];
            StringName::StringName((StringName_conflict*)( puVar2 + 2 ), (StringName_conflict*)&local_90);
            *(undefined8*)( puVar2 + 4 ) = 0;
            if (( local_88[0] != 0 ) && ( CowData<char>::_ref((CowData<char>*)( puVar2 + 4 ), (CowData*)local_88),lVar6 = local_88[0],local_88[0] != 0 )) {
               LOCK();
               plVar1 = (long*)( local_88[0] + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_88[0] = 0;
                  Memory::free_static((void*)( lVar6 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( local_90 != 0 )) {
               StringName::unref();
            }

         }

         local_58 = (char*)0x0;
         cVar9 = String::operator !=((String*)&local_120, (String*)&local_58);
         pcVar8 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar8 + -0x10, false);
            }

         }

         if (cVar9 != '\0') {
            local_78 = CONCAT44(local_78._4_4_, 4);
            local_70._0_16_ = (undefined1[16])0x0;
            String::utf8();
            pcVar8 = local_58;
            uVar7 = local_70._8_8_;
            if ((char*)local_70._8_8_ == local_58) {
               if ((char*)local_70._8_8_ != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_70._8_8_ + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_58 = (char*)0x0;
                     Memory::free_static(pcVar8 + -0x10, false);
                  }

               }

            }
 else {
               if ((char*)local_70._8_8_ != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_70._8_8_ + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_70._8_8_ = 0;
                     Memory::free_static((char*)( uVar7 + -0x10 ), false);
                  }

               }

               local_70._8_8_ = local_58;
            }

            local_58 = (char*)CONCAT44(local_58._4_4_, (undefined4)local_78);
            StringName::StringName((StringName_conflict*)&local_50, (StringName_conflict*)local_70);
            local_48 = 0;
            if (local_70._8_8_ != 0) {
               CowData<char>::_ref((CowData<char>*)&local_48, (CowData*)( local_70 + 8 ));
            }

            uVar4 = *(uint*)( this + lVar12 * 0x10 + 0xa8 );
            pvVar11 = *(void**)( this + lVar12 * 0x10 + 0xb0 );
            if (uVar4 == *(uint*)( this + lVar12 * 0x10 + 0xac )) {
               uVar10 = ( ulong )(uVar4 * 2);
               if (uVar4 * 2 == 0) {
                  uVar10 = 1;
               }

               *(int*)( this + lVar12 * 0x10 + 0xac ) = (int)uVar10;
               pvVar11 = (void*)Memory::realloc_static(pvVar11, uVar10 * 0x18, false);
               *(void**)( this + lVar12 * 0x10 + 0xb0 ) = pvVar11;
               if (pvVar11 == (void*)0x0) {
                  LAB_001053b8:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar5 = (code*)invalidInstructionException();
                  ( *pcVar5 )();
               }

               uVar4 = *(uint*)( this + lVar12 * 0x10 + 0xa8 );
            }

            *(uint*)( this + lVar12 * 0x10 + 0xa8 ) = uVar4 + 1;
            puVar2 = (undefined4*)( (long)pvVar11 + (ulong)uVar4 * 0x18 );
            *puVar2 = local_58._0_4_;
            StringName::StringName((StringName_conflict*)( puVar2 + 2 ), (StringName_conflict*)&local_50);
            *(undefined8*)( puVar2 + 4 ) = 0;
            if (( local_48 != 0 ) && ( CowData<char>::_ref((CowData<char>*)( puVar2 + 4 ), (CowData*)&local_48),lVar6 = local_48,local_48 != 0 )) {
               LOCK();
               plVar1 = (long*)( local_48 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_48 = 0;
                  Memory::free_static((void*)( lVar6 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
               StringName::unref();
            }

            lVar6 = local_120;
            if (local_120 != 0) {
               LOCK();
               plVar1 = (long*)( local_120 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_120 = 0;
                  Memory::free_static((void*)( lVar6 + -0x10 ), false);
               }

               local_120 = 0;
            }

            uVar7 = local_70._8_8_;
            if (local_70._8_8_ != 0) {
               LOCK();
               plVar1 = (long*)( local_70._8_8_ + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_70._8_8_ = 0;
                  Memory::free_static((void*)( uVar7 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( local_70._0_8_ != 0 )) {
               StringName::unref();
            }

         }

         uVar7 = local_f0._8_8_;
         if (local_f0._8_8_ != 0) {
            LOCK();
            plVar1 = (long*)( local_f0._8_8_ + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_f0._8_8_ = 0;
               Memory::free_static((void*)( uVar7 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_f0._0_8_ != 0 )) {
            StringName::unref();
         }

         lVar13 = lVar13 + 1;
      }
 while ( local_100 != 0 );
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   CowData<String>::_unref((CowData<String>*)&local_100);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* ShaderGLES3::_setup(char const*, char const*, char const*, int, char const**, int,
   ShaderGLES3::UBOPair const*, int, ShaderGLES3::Feedback const*, int, ShaderGLES3::TexUnitPair
   const*, int, ShaderGLES3::Specialization const*, int, char const**) */void ShaderGLES3::_setup(ShaderGLES3 *this, char *param_1, char *param_2, char *param_3, int param_4, char **param_5, int param_6, UBOPair *param_7, int param_8, Feedback *param_9, int param_10, TexUnitPair *param_11, int param_12, Specialization *param_13, int param_14, char **param_15) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long lVar4;
   int iVar5;
   Specialization *pSVar6;
   long in_FS_OFFSET;
   bool bVar7;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   char *local_88;
   undefined8 local_80;
   char *local_78;
   size_t local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   if (param_3 != (char*)0x0) {
      local_70 = strlen(param_3);
   }

   local_78 = param_3;
   String::parse_latin1((StrRange*)( this + 0x90 ));
   if (param_1 != (char*)0x0) {
      _add_stage(this, param_1, 0);
   }

   if (param_2 != (char*)0x0) {
      _add_stage(this, param_2, 1);
   }

   *(Specialization**)( this + 0x108 ) = param_13;
   *(int*)( this + 0x104 ) = param_12;
   *(char***)( this + 200 ) = param_5;
   *(undefined8*)( this + 0x110 ) = 0;
   *(int*)( this + 0xd0 ) = param_4;
   *(UBOPair**)( this + 0xd8 ) = param_7;
   *(int*)( this + 0xe0 ) = param_6;
   *(TexUnitPair**)( this + 0xf8 ) = param_11;
   *(int*)( this + 0x100 ) = param_10;
   if (0 < param_12) {
      pSVar6 = param_13 + 8;
      iVar5 = 0;
      do {
         if (*pSVar6 != (Specialization)0x0) {
            *(ulong*)( this + 0x110 ) = *(ulong*)( this + 0x110 ) | 1L << ( (byte)iVar5 & 0x3f );
         }

         iVar5 = iVar5 + 1;
         pSVar6 = pSVar6 + 0x10;
      }
 while ( param_12 != iVar5 );
   }

   local_78 = (char*)0x0;
   *(char***)( this + 0x118 ) = param_15;
   local_70 = 0;
   *(int*)( this + 0x120 ) = param_14;
   local_68 = 0;
   *(Feedback**)( this + 0xe8 ) = param_9;
   local_60 = 0;
   *(int*)( this + 0xf0 ) = param_8;
   local_58 = 0;
   local_50 = 0;
   local_48 = 0;
   for (int i = 0; i < 5; i++) {
      StringBuilder::append((char*)&local_78);
   }

   iVar5 = ( *_glad_glGetString )(0x1f00);
   String::utf8((char*)&local_a8, iVar5);
   if (( local_a8 == 0 ) || ( *(uint*)( local_a8 + -8 ) < 2 )) {
      local_90 = 0;
      local_80 = 7;
      local_88 = "unknown";
      String::parse_latin1((StrRange*)&local_90);
   }
 else {
      local_90 = 0;
      plVar1 = (long*)( local_a8 + -0x10 );
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_001056d7;
         LOCK();
         lVar4 = *plVar1;
         bVar7 = lVar2 == lVar4;
         if (bVar7) {
            *plVar1 = lVar2 + 1;
            lVar4 = lVar2;
         }

         UNLOCK();
      }
 while ( !bVar7 );
      if (lVar4 != -1) {
         local_90 = local_a8;
      }

   }

   LAB_001056d7:StringBuilder::append((String*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   iVar5 = ( *_glad_glGetString )(0x1f01);
   String::utf8((char*)&local_a0, iVar5);
   if (( local_a0 == 0 ) || ( *(uint*)( local_a0 + -8 ) < 2 )) {
      local_90 = 0;
      local_88 = "unknown";
      local_80 = 7;
      String::parse_latin1((StrRange*)&local_90);
   }
 else {
      local_90 = 0;
      plVar1 = (long*)( local_a0 + -0x10 );
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_0010574c;
         LOCK();
         lVar4 = *plVar1;
         bVar7 = lVar2 == lVar4;
         if (bVar7) {
            *plVar1 = lVar2 + 1;
            lVar4 = lVar2;
         }

         UNLOCK();
      }
 while ( !bVar7 );
      if (lVar4 != -1) {
         local_90 = local_a0;
      }

   }

   LAB_0010574c:StringBuilder::append((String*)&local_78);
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

   iVar5 = ( *_glad_glGetString )(0x1f02);
   String::utf8((char*)&local_98, iVar5);
   if (( local_98 == 0 ) || ( *(uint*)( local_98 + -8 ) < 2 )) {
      local_90 = 0;
      local_88 = "unknown";
      local_80 = 7;
      String::parse_latin1((StrRange*)&local_90);
   }
 else {
      local_90 = 0;
      plVar1 = (long*)( local_98 + -0x10 );
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_001057ca;
         LOCK();
         lVar4 = *plVar1;
         bVar7 = lVar2 == lVar4;
         if (bVar7) {
            *plVar1 = lVar2 + 1;
            lVar4 = lVar2;
         }

         UNLOCK();
      }
 while ( !bVar7 );
      if (lVar4 != -1) {
         local_90 = local_98;
      }

   }

   LAB_001057ca:StringBuilder::append((String*)&local_78);
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

   StringBuilder::as_string();
   String::sha256_text();
   if (*(char**)( this + 0x98 ) != local_88) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x98 ));
      pcVar3 = local_88;
      local_88 = (char*)0x0;
      *(char**)( this + 0x98 ) = pcVar3;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
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

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   StringBuilder::~StringBuilder((StringBuilder*)&local_78);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<StringName>::_copy_on_write() [clone .isra.0] */void CowData<StringName>::_copy_on_write(CowData<StringName> *this) {
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
         }
 while ( lVar2 != lVar5 );
      }

      _unref(this);
      *(StringName_conflict**)this = (StringName_conflict*)( puVar4 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* ShaderGLES3::_get_uniform_locations(ShaderGLES3::Version::Specialization&, ShaderGLES3::Version*)
    */void ShaderGLES3::_get_uniform_locations(ShaderGLES3 *this, Specialization *param_1, Version *param_2) {
   long *plVar1;
   int iVar2;
   char *pcVar3;
   code *pcVar4;
   undefined4 uVar5;
   int iVar6;
   int iVar7;
   size_t sVar8;
   long lVar9;
   uint uVar10;
   long lVar11;
   uint uVar12;
   void *pvVar13;
   int iVar14;
   long lVar15;
   long in_FS_OFFSET;
   bool bVar16;
   ulong local_c0;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   size_t local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ( *_glad_glUseProgram )(*(undefined4*)param_1);
   uVar12 = *(uint*)( this + 0xd0 );
   if (uVar12 < *(uint*)( param_1 + 0x10 )) {
      LAB_00105e31:*(uint*)( param_1 + 0x10 ) = uVar12;
      uVar12 = *(uint*)( this + 0xd0 );
   }
 else if (*(uint*)( param_1 + 0x10 ) < uVar12) {
      if (*(uint*)( param_1 + 0x14 ) < uVar12) {
         pvVar13 = *(void**)( param_1 + 0x18 );
         uVar10 = uVar12 - 1 | uVar12 - 1 >> 1;
         uVar10 = uVar10 | uVar10 >> 2;
         uVar10 = uVar10 >> 4 | uVar10;
         uVar10 = uVar10 | uVar10 >> 8;
         uVar10 = ( uVar10 | uVar10 >> 0x10 ) + 1;
         *(uint*)( param_1 + 0x14 ) = uVar10;
         lVar11 = Memory::realloc_static(pvVar13, (ulong)uVar10 * 4, false);
         *(long*)( param_1 + 0x18 ) = lVar11;
         if (lVar11 == 0) {
            LocalVector<ShaderGLES3::TextureUniformData,unsigned_int,false,false>::resize((uint)pvVar13);
            goto LAB_001063c7;
         }

      }

      goto LAB_00105e31;
   }

   local_c0 = 0;
   if (0 < (int)uVar12) {
      do {
         uVar5 = ( *_glad_glGetUniformLocation )(*(undefined4*)param_1, *(undefined8*)( *(long*)( this + 200 ) + local_c0 * 8 ));
         uVar12 = *(uint*)( param_1 + 0x10 );
         if (uVar12 <= (uint)local_c0) goto LAB_00105dff;
         *(undefined4*)( *(long*)( param_1 + 0x18 ) + local_c0 * 4 ) = uVar5;
         local_c0 = local_c0 + 1;
      }
 while ( (int)local_c0 < *(int*)( this + 0xd0 ) );
   }

   lVar11 = 0;
   if (0 < *(int*)( this + 0x100 )) {
      do {
         while (true) {
            iVar6 = ( *_glad_glGetUniformLocation )(*(undefined4*)param_1, *(undefined8*)( *(long*)( this + 0xf8 ) + lVar11 * 0x10 ));
            if (-1 < iVar6) break;
            LAB_00105e5a:lVar11 = lVar11 + 1;
            if (*(int*)( this + 0x100 ) <= (int)lVar11) goto LAB_00105eb8;
         }
;
         iVar14 = *(int*)( *(long*)( this + 0xf8 ) + 8 + lVar11 * 0x10 );
         if (-1 < iVar14) {
            ( *_glad_glUniform1i )();
            goto LAB_00105e5a;
         }

         lVar11 = lVar11 + 1;
         ( *_glad_glUniform1i )(iVar6, iVar14 + *(int*)( this + 0xa4 ));
      }
 while ( (int)lVar11 < *(int*)( this + 0x100 ) );
   }

   LAB_00105eb8:lVar11 = 0;
   if (0 < *(int*)( this + 0xe0 )) {
      do {
         iVar6 = ( *_glad_glGetUniformBlockIndex )(*(undefined4*)param_1, *(undefined8*)( *(long*)( this + 0xd8 ) + lVar11 * 0x10 ));
         if (-1 < iVar6) {
            ( *_glad_glUniformBlockBinding )(*(undefined4*)param_1, iVar6, *(undefined4*)( *(long*)( this + 0xd8 ) + 8 + lVar11 * 0x10 ));
         }

         lVar11 = lVar11 + 1;
      }
 while ( (int)lVar11 < *(int*)( this + 0xe0 ) );
   }

   if (*(int*)param_2 != 0) {
      iVar6 = 0;
      local_c0 = 0;
      do {
         lVar11 = *(long*)( *(long*)( param_2 + 8 ) + local_c0 * 0x10 );
         if (lVar11 == 0) {
            local_68 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar11 + 8 );
            local_68 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar11 + 0x10 ) + -0x10 );
               if (*(long*)( lVar11 + 0x10 ) != 0) {
                  do {
                     lVar15 = *plVar1;
                     if (lVar15 == 0) goto LAB_00105fb4;
                     LOCK();
                     lVar9 = *plVar1;
                     bVar16 = lVar15 == lVar9;
                     if (bVar16) {
                        *plVar1 = lVar15 + 1;
                        lVar9 = lVar15;
                     }

                     UNLOCK();
                  }
 while ( !bVar16 );
                  if (lVar9 != -1) {
                     local_68 = *(long*)( lVar11 + 0x10 );
                  }

               }

            }
 else {
               local_50[0] = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_68);
            }

         }

         LAB_00105fb4:String::replace((char*)&local_58, (char*)&local_68);
         operator+((char *)&
         local_60,(String*)&_LC91;
         pcVar3 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }

         }

         String::replace((char*)&local_70, (char*)&local_60);
         lVar11 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar11 + -0x10 ), false);
            }

         }

         lVar11 = local_68;
         if (local_68 != 0) {
            LOCK();
            plVar1 = (long*)( local_68 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_68 = 0;
               Memory::free_static((void*)( lVar11 + -0x10 ), false);
            }

         }

         pcVar4 = _glad_glGetUniformLocation;
         String::ascii(SUB81(&local_58, 0));
         CharString::get_data();
         uVar5 = ( *pcVar4 )(*(undefined4*)param_1);
         pcVar3 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }

         }

         local_50[0] = 0;
         uVar12 = *(uint*)param_2;
         if (uVar12 <= (uint)local_c0) {
            local_c0 = local_c0 & 0xffffffff;
            LAB_00105dff:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, local_c0, (ulong)uVar12, "p_index", "count", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         iVar14 = *(int*)( *(long*)( param_2 + 8 ) + 8 + local_c0 * 0x10 );
         if (iVar14 < 1) {
            LAB_0010635f:( *_glad_glUniform1iv )(uVar5, 0, 0);
         }
 else {
            iVar14 = iVar14 + iVar6;
            sVar8 = 0;
            do {
               iVar2 = *(int*)( this + 0x124 );
               if (sVar8 == 0) {
                  lVar11 = 1;
               }
 else {
                  lVar11 = *(long*)( sVar8 - 8 ) + 1;
               }

               iVar7 = CowData<int>::resize<false>((CowData<int>*)local_50, lVar11);
               sVar8 = local_50[0];
               if (iVar7 == 0) {
                  if (local_50[0] == 0) {
                     lVar15 = -1;
                     lVar11 = 0;
                  }
 else {
                     lVar11 = *(long*)( local_50[0] - 8 );
                     lVar15 = lVar11 + -1;
                     if (-1 < lVar15) {
                        CowData<int>::_copy_on_write((CowData<int>*)local_50);
                        *(int*)( local_50[0] + lVar15 * 4 ) = iVar2 + iVar6;
                        sVar8 = local_50[0];
                        goto LAB_0010617b;
                     }

                  }

                  _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar15, lVar11, "p_index", "size()", "", false, false);
               }
 else {
                  _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
                  sVar8 = local_50[0];
               }

               LAB_0010617b:iVar6 = iVar6 + 1;
            }
 while ( iVar14 != iVar6 );
            if (sVar8 == 0) goto LAB_0010635f;
            ( *_glad_glUniform1iv )(uVar5, *(undefined4*)( sVar8 - 8 ), sVar8);
            LOCK();
            plVar1 = (long*)( sVar8 - 0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_50[0] - 0x10 ), false);
            }

         }

         lVar11 = local_70;
         if (local_70 != 0) {
            LOCK();
            plVar1 = (long*)( local_70 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_70 = 0;
               Memory::free_static((void*)( lVar11 + -0x10 ), false);
            }

         }

         local_c0 = local_c0 + 1;
      }
 while ( (uint)local_c0 < *(uint*)param_2 );
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00106233. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *_glad_glUseProgram )(0);
      return;
   }

   LAB_001063c7:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* ShaderGLES3::version_free(RID) */undefined8 ShaderGLES3::version_free(ShaderGLES3 *this, ulong param_2) {
   pthread_mutex_t *__mutex;
   uint uVar1;
   long lVar2;
   ulong uVar3;
   code *pcVar4;
   int iVar5;
   uint uVar6;
   uint uVar7;
   Version *pVVar8;
   long lVar9;
   __mutex = (pthread_mutex_t*)( this + 0x68 );
   iVar5 = pthread_mutex_lock(__mutex);
   if (iVar5 == 0) {
      uVar7 = (uint)param_2;
      if (( ( *(uint*)( this + 0x54 ) <= uVar7 ) || ( param_2 >> 0x20 == 0x7fffffff ) ) || ( uVar6 = ( uint )(param_2 >> 0x20) ),uVar6 != ( *(uint*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x50 ) ) * 0x80 + *(long*)( *(long*)( this + 0x40 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x50 ) ) * 8 ) + 0x78 ) & 0x7fffffff )) {
         pthread_mutex_unlock(__mutex);
         return 0;
      }

      pthread_mutex_unlock(__mutex);
      if (( param_2 == 0 ) || ( *(uint*)( this + 0x54 ) <= uVar7 )) goto LAB_0010b772;
      pVVar8 = (Version*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x50 ) ) * 0x80 + *(long*)( *(long*)( this + 0x40 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x50 ) ) * 8 ) );
      uVar1 = *(uint*)( pVVar8 + 0x78 );
      if (uVar6 != uVar1) {
         if (uVar1 + 0x80000000 < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, pVVar8);
         }

         goto LAB_0010b772;
      }

      if (*(int*)( pVVar8 + 0x68 ) != 0) {
         _clear_version(this, pVVar8);
      }

      iVar5 = pthread_mutex_lock(__mutex);
      if (iVar5 == 0) {
         if (uVar7 < *(uint*)( this + 0x54 )) {
            uVar3 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x50 );
            lVar9 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x50 ) ) * 0x80;
            pVVar8 = (Version*)( *(long*)( *(long*)( this + 0x40 ) + uVar3 * 8 ) + lVar9 );
            uVar6 = *(uint*)( pVVar8 + 0x78 );
            if ((int)uVar6 < 0) {
               pthread_mutex_unlock(__mutex);
               _err_print_error(&_LC98, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0, 0);
            }
 else if (uVar6 == uVar1) {
               Version::~Version(pVVar8);
               lVar2 = *(long*)( this + 0x48 );
               *(undefined4*)( *(long*)( *(long*)( this + 0x40 ) + uVar3 * 8 ) + 0x78 + lVar9 ) = 0xffffffff;
               uVar6 = *(int*)( this + 0x58 ) - 1;
               *(uint*)( this + 0x58 ) = uVar6;
               *(uint*)( *(long*)( lVar2 + ( (ulong)uVar6 / ( ulong ) * (uint*)( this + 0x50 ) ) * 8 ) + ( (ulong)uVar6 % ( ulong ) * (uint*)( this + 0x50 ) ) * 4 ) = uVar7;
               pthread_mutex_unlock(__mutex);
            }
 else {
               pthread_mutex_unlock(__mutex);
               _err_print_error(&_LC98, "./core/templates/rid_owner.h", 0x171, "Method/function failed.", 0, 0);
            }

         }
 else {
            pthread_mutex_unlock(__mutex);
            _err_print_error(&_LC98, "./core/templates/rid_owner.h", 0x161, "Method/function failed.", 0, 0);
         }

         return 1;
      }

   }

   std::__throw_system_error(iVar5);
   LAB_0010b772:/* WARNING: Does not return */pcVar4 = (code*)invalidInstructionException();
   ( *pcVar4 )();
}
/* ShaderGLES3::~ShaderGLES3() */void ShaderGLES3::~ShaderGLES3(ShaderGLES3 *this) {
   pthread_mutex_t *__mutex;
   long *plVar1;
   CowData<char32_t> *this_00;
   undefined1(*pauVar2)[16];
   long lVar3;
   uint uVar4;
   int iVar5;
   ulong *puVar6;
   void *pvVar7;
   undefined1(*pauVar8)[16];
   undefined8 *puVar9;
   ulong uVar10;
   long lVar11;
   Version *this_01;
   ShaderGLES3 *this_02;
   ulong uVar12;
   CowData<char32_t> *pCVar13;
   long in_FS_OFFSET;
   String local_80[8];
   String local_78[8];
   String local_70[8];
   undefined8 local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR___cxa_pure_virtual_0010fd08;
   __mutex = (pthread_mutex_t*)( this + 0x68 );
   uVar4 = pthread_mutex_lock(__mutex);
   if (uVar4 != 0) {
      this_02 = (ShaderGLES3*)(ulong)uVar4;
      std::__throw_system_error(uVar4);
      ~ShaderGLES3(this_02)
      ;;
      operator_delete(this_02, 0x130);
      return;
   }

   pauVar8 = (undefined1(*) [16])0x0;
   uVar12 = 0;
   if (*(int*)( this + 0x54 ) == 0) {
      pthread_mutex_unlock(__mutex);
   }
 else {
      do {
         uVar4 = *(uint*)( ( uVar12 % ( ulong ) * (uint*)( this + 0x50 ) ) * 0x80 + *(long*)( *(long*)( this + 0x40 ) + ( uVar12 / *(uint*)( this + 0x50 ) ) * 8 ) + 0x78 );
         if (uVar4 != 0xffffffff) {
            if (pauVar8 == (undefined1(*) [16])0x0) {
               pauVar8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined4*)pauVar8[1] = 0;
               *pauVar8 = (undefined1[16])0x0;
            }

            puVar6 = (ulong*)operator_new(0x20, DefaultAllocator::alloc);
            uVar10 = *(ulong*)( *pauVar8 + 8 );
            puVar6[1] = 0;
            *puVar6 = (ulong)uVar4 << 0x20 | uVar12;
            puVar6[2] = uVar10;
            puVar6[3] = (ulong)pauVar8;
            if (uVar10 != 0) {
               *(ulong**)( uVar10 + 8 ) = puVar6;
            }

            lVar11 = *(long*)*pauVar8;
            *(ulong**)( *pauVar8 + 8 ) = puVar6;
            if (lVar11 == 0) {
               *(ulong**)*pauVar8 = puVar6;
            }

            *(int*)pauVar8[1] = *(int*)pauVar8[1] + 1;
         }

         uVar12 = uVar12 + 1;
      }
 while ( uVar12 < *(uint*)( this + 0x54 ) );
      pthread_mutex_unlock(__mutex);
      if (pauVar8 != (undefined1(*) [16])0x0) {
         if (*(int*)pauVar8[1] == 0) {
            LAB_00106704:if (pauVar8 == (undefined1(*) [16])0x0) goto LAB_00106766;
            do {
               while (true) {
                  pvVar7 = *(void**)*pauVar8;
                  if (pvVar7 == (void*)0x0) {
                     if (*(int*)pauVar8[1] != 0) {
                        _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                        goto LAB_00106766;
                     }

                     goto LAB_0010675c;
                  }

                  if (*(undefined1(**) [16])( (long)pvVar7 + 0x18 ) != pauVar8) break;
                  lVar11 = *(long*)( (long)pvVar7 + 8 );
                  lVar3 = *(long*)( (long)pvVar7 + 0x10 );
                  *(long*)*pauVar8 = lVar11;
                  if (pvVar7 == *(void**)( *pauVar8 + 8 )) {
                     *(long*)( *pauVar8 + 8 ) = lVar3;
                  }

                  if (lVar3 != 0) {
                     *(long*)( lVar3 + 8 ) = lVar11;
                     lVar11 = *(long*)( (long)pvVar7 + 8 );
                  }

                  if (lVar11 != 0) {
                     *(long*)( lVar11 + 0x10 ) = lVar3;
                  }

                  Memory::free_static(pvVar7, false);
                  pauVar2 = pauVar8 + 1;
                  *(int*)*pauVar2 = *(int*)*pauVar2 + -1;
                  if (*(int*)*pauVar2 == 0) goto LAB_0010675c;
               }
;
               _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
            }
 while ( *(int*)pauVar8[1] != 0 );
         }
 else {
            local_60 = 0;
            local_58 = " were never freed";
            local_50 = 0x11;
            String::parse_latin1((StrRange*)&local_60);
            local_58 = " shaders of type ";
            local_68 = 0;
            local_50 = 0x11;
            String::parse_latin1((StrRange*)&local_68);
            itos((long)&local_58);
            String::operator +(local_70, (String*)&local_58);
            String::operator +(local_78, local_70);
            String::operator +(local_80, local_78);
            _err_print_error("~ShaderGLES3", "drivers/gles3/shader_gles3.cpp", 0x34f, local_80, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_70);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            do {
               do {
                  if (*(int*)pauVar8[1] == 0) goto LAB_00106704;
                  version_free(this);
                  pvVar7 = *(void**)*pauVar8;
               }
 while ( pvVar7 == (void*)0x0 );
               if (*(undefined1(**) [16])( (long)pvVar7 + 0x18 ) == pauVar8) {
                  lVar11 = *(long*)( (long)pvVar7 + 8 );
                  lVar3 = *(long*)( (long)pvVar7 + 0x10 );
                  *(long*)*pauVar8 = lVar11;
                  if (pvVar7 == *(void**)( *pauVar8 + 8 )) {
                     *(long*)( *pauVar8 + 8 ) = lVar3;
                  }

                  if (lVar3 != 0) {
                     *(long*)( lVar3 + 8 ) = lVar11;
                     lVar11 = *(long*)( (long)pvVar7 + 8 );
                  }

                  if (lVar11 != 0) {
                     *(long*)( lVar11 + 0x10 ) = lVar3;
                  }

                  Memory::free_static(pvVar7, false);
                  iVar5 = *(int*)pauVar8[1] + -1;
                  *(int*)pauVar8[1] = iVar5;
               }
 else {
                  _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                  iVar5 = *(int*)pauVar8[1];
               }

            }
 while ( iVar5 != 0 );
         }

         LAB_0010675c:Memory::free_static(pauVar8, false);
      }

   }

   LAB_00106766:pCVar13 = (CowData<char32_t>*)( this + 0xb8 );
   this_00 = (CowData<char32_t>*)( this + 0x98 );
   do {
      while (pvVar7 = *(void**)( pCVar13 + 8 ),pvVar7 == (void*)0x0) {
         LAB_00106808:pCVar13 = pCVar13 + -0x10;
         if (this_00 == pCVar13) goto LAB_00106815;
      }
;
      if (*(int*)pCVar13 != 0) {
         lVar11 = 0;
         while (true) {
            lVar3 = *(long*)( (long)pvVar7 + lVar11 * 0x18 + 0x10 );
            if (lVar3 != 0) {
               LOCK();
               plVar1 = (long*)( lVar3 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( (long)pvVar7 + lVar11 * 0x18 + 0x10 );
                  *(undefined8*)( (long)pvVar7 + lVar11 * 0x18 + 0x10 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar7 + lVar11 * 0x18 + 8 ) != 0 )) {
               StringName::unref();
            }

            lVar11 = lVar11 + 1;
            if (*(uint*)pCVar13 <= (uint)lVar11) break;
            pvVar7 = *(void**)( pCVar13 + 8 );
         }
;
         pvVar7 = *(void**)( pCVar13 + 8 );
         *(undefined4*)pCVar13 = 0;
         if (pvVar7 == (void*)0x0) goto LAB_00106808;
      }

      pCVar13 = pCVar13 + -0x10;
      Memory::free_static(pvVar7, false);
   }
 while ( this_00 != pCVar13 );
   LAB_00106815:CowData<char32_t>::_unref(this_00);
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x90 ));
   *(undefined***)( this + 0x38 ) = &PTR__RID_Alloc_0010fce8;
   uVar4 = *(uint*)( this + 0x58 );
   if (uVar4 == 0) {
      uVar12 = ( ulong ) * (uint*)( this + 0x54 );
      uVar4 = *(uint*)( this + 0x50 );
      puVar9 = *(undefined8**)( this + 0x40 );
      LAB_001069a4:if ((uint)uVar12 < uVar4) goto LAB_001069ea;
      lVar11 = 0;
      while (true) {
         Memory::free_static((void*)puVar9[lVar11], false);
         lVar3 = lVar11 * 8;
         lVar11 = lVar11 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x48 ) + lVar3 ), false);
         if (( uint )(uVar12 / uVar4) <= (uint)lVar11) break;
         puVar9 = *(undefined8**)( this + 0x40 );
      }
;
   }
 else {
      local_60 = 0;
      local_50 = 0x3b;
      local_58 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_60);
      vformat<unsigned_int,char_const*>((String*)&local_58, (uint)(StrRange*)&local_60, (char*)(ulong)uVar4);
      print_error((String*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      puVar9 = *(undefined8**)( this + 0x40 );
      if (*(int*)( this + 0x54 ) != 0) {
         uVar4 = *(uint*)( this + 0x50 );
         uVar10 = 0;
         do {
            this_01 = (Version*)( puVar9[uVar10 / uVar4] + ( uVar10 % (ulong)uVar4 ) * 0x80 );
            if (-1 < *(int*)( this_01 + 0x78 )) {
               Version::~Version(this_01);
               uVar4 = *(uint*)( this + 0x50 );
               puVar9 = *(undefined8**)( this + 0x40 );
            }

            uVar12 = ( ulong ) * (uint*)( this + 0x54 );
            uVar10 = uVar10 + 1;
         }
 while ( uVar10 < uVar12 );
         goto LAB_001069a4;
      }

      if (*(int*)( this + 0x50 ) != 0) goto LAB_001069ea;
      Memory::free_static((void*)*puVar9, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x48 ), false);
   }

   puVar9 = *(undefined8**)( this + 0x40 );
   LAB_001069ea:if (puVar9 != (undefined8*)0x0) {
      Memory::free_static(puVar9, false);
      Memory::free_static(*(void**)( this + 0x48 ), false);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      CowData<char>::_unref((CowData<char>*)( this + 8 ));
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderGLES3::~ShaderGLES3() */void ShaderGLES3::~ShaderGLES3(ShaderGLES3 *this) {
   ~ShaderGLES3(this)
   ;;
   operator_delete(this, 0x130);
   return;
}
/* CowData<CharString>::_copy_on_write() [clone .isra.0] */void CowData<CharString>::_copy_on_write(CowData<CharString> *this) {
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
         }
 while ( lVar2 != lVar6 );
      }

      _unref(this);
      *(CowData<char>**)this = (CowData<char>*)( puVar5 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* ShaderGLES3::_version_get_sha1(ShaderGLES3::Version*) const */Version *ShaderGLES3::_version_get_sha1(Version *param_1) {
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
   for (int i = 0; i < 3; i++) {
      StringBuilder::append((char*)&local_78);
      CharString::get_data();
      StringBuilder::append((char*)&local_78);
   }

   plVar9 = *(long**)( in_RDX + 0x40 );
   local_90 = (StringName_conflict*)0x0;
   if (plVar9 != (long*)0x0) {
      pSVar7 = (StringName_conflict*)0x0;
      do {
         StringName::StringName((StringName_conflict*)&local_88, (StringName_conflict*)( plVar9 + 2 ));
         if (pSVar7 == (StringName_conflict*)0x0) {
            lVar8 = 1;
         }
 else {
            lVar8 = *(long*)( pSVar7 + -8 ) + 1;
         }

         iVar3 = CowData<StringName>::resize<false>((CowData<StringName>*)&local_90, lVar8);
         pSVar7 = local_90;
         if (iVar3 == 0) {
            if (local_90 == (StringName_conflict*)0x0) {
               lVar10 = -1;
               lVar8 = 0;
            }
 else {
               lVar8 = *(long*)( local_90 + -8 );
               lVar10 = lVar8 + -1;
               if (-1 < lVar10) {
                  CowData<StringName>::_copy_on_write((CowData<StringName>*)&local_90);
                  pSVar7 = local_90;
                  StringName::operator =(local_90 + lVar10 * 8, (StringName_conflict*)&local_88);
                  goto LAB_00106f5e;
               }

            }

            _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar10, lVar8, "p_index", "size()", "", false, false);
         }
 else {
            _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
            pSVar7 = local_90;
         }

         LAB_00106f5e:if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
            StringName::unref();
         }

         plVar9 = (long*)*plVar9;
      }
 while ( plVar9 != (long*)0x0 );
      if (( pSVar7 != (StringName_conflict*)0x0 ) && ( lVar8 = lVar8 != 0 )) {
         CowData<StringName>::_copy_on_write((CowData<StringName>*)&local_90);
         pSVar7 = local_90;
         if (lVar8 != 1) {
            lVar10 = 0;
            lVar11 = lVar8;
            do {
               lVar11 = lVar11 >> 1;
               lVar10 = lVar10 + 1;
            }
 while ( lVar11 != 1 );
            lVar10 = lVar10 * 2;
            lVar11 = lVar8;
            lVar5 = 1;
            if (lVar8 < 0x11) {
               do {
                  lVar10 = lVar5 + 1;
                  SortArray<StringName,StringName::AlphCompare,true>::linear_insert(0, lVar5, pSVar7);
                  lVar5 = lVar10;
               }
 while ( lVar8 != lVar10 );
            }
 else {
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
                  if (lVar5 < 0x11) goto LAB_00107250;
                  lVar11 = lVar5;
               }
 while ( lVar10 != 0 );
               SortArray<StringName,StringName::AlphCompare,true>::partial_sort(0, lVar5, lVar5, pSVar7);
               lVar11 = 1;
               LAB_00107250:do {
                  lVar10 = lVar11 + 1;
                  SortArray<StringName,StringName::AlphCompare,true>::linear_insert(0, lVar11, pSVar7);
                  lVar11 = lVar10;
               }
 while ( lVar10 != 0x10 );
               lVar10 = 0x10;
               do {
                  StringName::StringName((StringName_conflict*)&local_88, pSVar7 + lVar10 * 8);
                  SortArray<StringName,StringName::AlphCompare,true>::unguarded_linear_insert(lVar10, (StringName_conflict*)&local_88, pSVar7);
                  if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  lVar10 = lVar10 + 1;
               }
 while ( lVar8 != lVar10 );
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
               if (lVar10 <= lVar8) goto LAB_001070c0;
               lVar11 = lVar8 * 8;
               lVar10 = *(long*)( pSVar7 + lVar11 );
               if (lVar10 == 0) {
                  local_b0 = 0;
               }
 else {
                  pcVar1 = *(char**)( lVar10 + 8 );
                  local_b0 = 0;
                  if (pcVar1 == (char*)0x0) {
                     plVar9 = (long*)( *(long*)( lVar10 + 0x10 ) + -0x10 );
                     if (*(long*)( lVar10 + 0x10 ) != 0) {
                        do {
                           lVar5 = *plVar9;
                           if (lVar5 == 0) goto LAB_0010735e;
                           LOCK();
                           lVar6 = *plVar9;
                           bVar12 = lVar5 == lVar6;
                           if (bVar12) {
                              *plVar9 = lVar5 + 1;
                              lVar6 = lVar5;
                           }

                           UNLOCK();
                        }
 while ( !bVar12 );
                        if (lVar6 != -1) {
                           local_b0 = *(long*)( lVar10 + 0x10 );
                        }

                     }

                  }
 else {
                     local_80 = strlen(pcVar1);
                     local_88 = pcVar1;
                     String::parse_latin1((StrRange*)&local_b0);
                  }

               }

               LAB_0010735e:local_b8 = 0;
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
               if (lVar10 <= lVar8) goto LAB_001070c0;
               lVar8 = lVar8 + 1;
               HashMap<StringName,CharString,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,CharString>>>::operator []((HashMap<StringName,CharString,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,CharString>>>*)( in_RDX + 0x28 ), pSVar7 + lVar11);
               CharString::get_data();
               StringBuilder::append((char*)&local_78);
               pSVar7 = local_90;
            }
 while ( local_90 != (StringName_conflict*)0x0 );
         }

      }

   }

   lVar10 = *(long*)( in_RDX + 0x60 );
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
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
         if (*(long*)( in_RDX + 0x60 ) == 0) {
            lVar10 = 0;
            LAB_001070c0:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar10, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar10 = *(long*)( *(long*)( in_RDX + 0x60 ) + -8 );
         if (lVar10 <= lVar8) goto LAB_001070c0;
         lVar8 = lVar8 + 1;
         CharString::get_data();
         StringBuilder::append((char*)&local_78);
         lVar10 = *(long*)( in_RDX + 0x60 );
      }
 while ( lVar10 != 0 );
   }

   if ((char)RasterizerGLES3::gles_over_gl == '\0') {
      StringBuilder::append((char*)&local_78);
   }
 else {
      StringBuilder::append((char*)&local_78);
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
}
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */void CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this, long param_1) {
   CowData<unsigned_char> *pCVar1;
   long *plVar2;
   long lVar3;
   int iVar4;
   ulong uVar5;
   CowData<unsigned_char> *pCVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   CowData<unsigned_char> *pCVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      LAB_001077c6:lVar10 = 0;
      pCVar6 = (CowData<unsigned_char>*)0x0;
   }
 else {
      lVar10 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar10) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar2 = (long*)( lVar3 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 != 0) {
            *(undefined8*)this = 0;
            return;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }

      _copy_on_write(this);
      if (lVar10 == 0) goto LAB_001077c6;
      uVar5 = lVar10 - 1U | lVar10 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar6 = (CowData<unsigned_char>*)( ( uVar5 | uVar5 >> 0x20 ) + 1 );
   }

   uVar5 = param_1 - 1U | param_1 - 1U >> 1;
   uVar5 = uVar5 | uVar5 >> 2;
   uVar5 = uVar5 | uVar5 >> 4;
   uVar5 = uVar5 | uVar5 >> 8;
   uVar5 = uVar5 | uVar5 >> 0x10;
   pCVar9 = (CowData<unsigned_char>*)( uVar5 | uVar5 >> 0x20 );
   pCVar1 = pCVar9 + 1;
   if (param_1 <= lVar10) {
      if (( pCVar1 != pCVar6 ) && ( iVar4 = iVar4 != 0 )) {
         return;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return;
      }

      FUN_0010b7c2();
      return;
   }

   if (pCVar1 != pCVar6) {
      if (lVar10 == 0) {
         puVar7 = (undefined8*)Memory::alloc_static(( ulong )(pCVar9 + 0x11), false);
         if (puVar7 == (undefined8*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            return;
         }

         puVar8 = puVar7 + 2;
         *puVar7 = 1;
         puVar7[1] = 0;
         *(undefined8**)this = puVar8;
         goto LAB_0010771c;
      }

      pCVar9 = this;
      iVar4 = _realloc(this, (long)pCVar1);
      if (iVar4 != 0) {
         return;
      }

   }

   puVar8 = *(undefined8**)this;
   if (puVar8 == (undefined8*)0x0) {
      resize<false>((long)pCVar9);
      return;
   }

   LAB_0010771c:puVar8[-1] = param_1;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* ShaderGLES3::_save_to_cache(ShaderGLES3::Version*) */void ShaderGLES3::_save_to_cache(ShaderGLES3 *this, Version *param_1) {
   ulong uVar1;
   uint uVar2;
   code *pcVar3;
   Object *pOVar4;
   long lVar5;
   ulong uVar6;
   char cVar7;
   uint uVar8;
   long lVar9;
   long *plVar10;
   uint uVar11;
   int iVar12;
   ulong uVar13;
   undefined4 *puVar14;
   ulong uVar15;
   long lVar16;
   long in_FS_OFFSET;
   Version local_80[8];
   String local_78[8];
   int local_70[2];
   undefined4 local_68[2];
   Object *local_60;
   char *local_58;
   long local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0xa0] == (ShaderGLES3)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("_save_to_cache", "drivers/gles3/shader_gles3.cpp", 0x280, "Condition \"!shader_cache_dir_valid\" is true.", 0, 0);
         return;
      }

   }
 else {
      if (( (char)RasterizerGLES3::gles_over_gl == '\0' ) || ( _glad_glGetProgramBinary != (code*)0x0 )) {
         _version_get_sha1(local_80);
         local_58 = ".cache";
         local_60 = (Object*)0x0;
         local_50[0] = 6;
         String::parse_latin1((StrRange*)&local_60);
         String::path_join((String*)local_70);
         String::path_join((String*)local_68);
         String::path_join((String*)&local_58);
         String::operator +(local_78, (String*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         FileAccess::open((String*)&local_60, (int)local_78, (Error*)0x2);
         if (local_60 == (Object*)0x0) {
            _err_print_error("_save_to_cache", "drivers/gles3/shader_gles3.cpp", 0x28b, "Condition \"f.is_null()\" is true.", 0, 0);
         }
 else {
            ( **(code**)( *(long*)local_60 + 0x2d0 ) )(local_60, &_LC128, 4);
            ( **(code**)( *(long*)local_60 + 0x278 ) )(local_60, 3);
            ( **(code**)( *(long*)local_60 + 0x278 ) )();
            if (0 < *(int*)( this + 0x120 )) {
               uVar15 = ( ulong ) * (uint*)( param_1 + 0x68 );
               lVar9 = 0;
               LAB_001079c7:uVar8 = (uint)lVar9;
               if (uVar8 < (uint)uVar15) {
                  lVar16 = lVar9 * 0x20;
                  ( **(code**)( *(long*)local_60 + 0x278 ) )(local_60, *(undefined4*)( *(long*)( param_1 + 0x70 ) + 0x1c + lVar16 ));
                  uVar15 = ( ulong ) * (uint*)( param_1 + 0x68 );
                  if (uVar8 < *(uint*)( param_1 + 0x68 )) {
                     plVar10 = (long*)( *(long*)( param_1 + 0x70 ) + lVar16 );
                     uVar6 = 0;
                     do {
                        uVar13 = uVar6;
                        if (*(uint*)( plVar10 + 3 ) == uVar13) goto LAB_00107cba;
                        uVar6 = uVar13 + 1;
                     }
 while ( *(int*)( plVar10[2] + uVar13 * 4 ) == 0 );
                     iVar12 = (int)uVar13;
                     puVar14 = (undefined4*)( *plVar10 + uVar13 * 0x38 );
                     do {
                        uVar11 = iVar12 + 1;
                        ( **(code**)( *(long*)local_60 + 0x280 ) )();
                        if (puVar14 == (undefined4*)0x0) {
                           ( **(code**)( *(long*)local_60 + 0x278 ) )();
                           LAB_00107a76:uVar2 = *(uint*)( param_1 + 0x68 );
                        }
 else {
                           local_70[0] = 0;
                           ( *_glad_glGetProgramiv )(*puVar14, 0x8741, (String*)local_70);
                           if (local_70[0] == 0) {
                              ( **(code**)( *(long*)local_60 + 0x278 ) )();
                              goto LAB_00107a76;
                           }

                           local_50[0] = 0;
                           CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)local_50, (long)local_70[0]);
                           pcVar3 = _glad_glGetProgramBinary;
                           local_68[0] = 0;
                           CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)local_50);
                           lVar5 = local_50[0];
                           ( *pcVar3 )(*puVar14, local_70[0], 0, (String*)local_68, local_50[0]);
                           if (lVar5 == 0) {
                              if ((long)local_70[0] == 0) {
                                 ( **(code**)( *(long*)local_60 + 0x278 ) )();
                                 ( **(code**)( *(long*)local_60 + 0x278 ) )();
                                 ( **(code**)( *(long*)local_60 + 0x2d0 ) )(local_60, 0, 0);
                              }
 else {
                                 ( **(code**)( *(long*)local_60 + 0x278 ) )();
                              }

                              goto LAB_00107a76;
                           }

                           if ((long)local_70[0] != *(long*)( lVar5 + -8 )) {
                              ( **(code**)( *(long*)local_60 + 0x278 ) )();
                              LOCK();
                              plVar10 = (long*)( lVar5 + -0x10 );
                              *plVar10 = *plVar10 + -1;
                              UNLOCK();
                              if (*plVar10 == 0) goto LAB_00107bb6;
                              goto LAB_00107a76;
                           }

                           ( **(code**)( *(long*)local_60 + 0x278 ) )();
                           ( **(code**)( *(long*)local_60 + 0x278 ) )(local_60, local_68[0]);
                           ( **(code**)( *(long*)local_60 + 0x2d0 ) )(local_60, lVar5, *(undefined8*)( lVar5 + -8 ));
                           LOCK();
                           plVar10 = (long*)( lVar5 + -0x10 );
                           *plVar10 = *plVar10 + -1;
                           UNLOCK();
                           if (*plVar10 != 0) goto LAB_00107a76;
                           LAB_00107bb6:Memory::free_static((void*)( local_50[0] + -0x10 ), false);
                           uVar2 = *(uint*)( param_1 + 0x68 );
                        }

                        uVar15 = (ulong)uVar2;
                        if (uVar2 <= uVar8) break;
                        uVar13 = (ulong)uVar11;
                        plVar10 = (long*)( *(long*)( param_1 + 0x70 ) + lVar16 );
                        uVar6 = (ulong)uVar11;
                        while (true) {
                           if (*(uint*)( plVar10 + 3 ) <= uVar11) goto LAB_00107cba;
                           uVar1 = uVar6 + 1;
                           if (*(int*)( plVar10[2] + uVar6 * 4 ) != 0) break;
                           uVar11 = (uint)uVar1;
                           uVar13 = uVar1 & 0xffffffff;
                           uVar6 = uVar1;
                        }
;
                        iVar12 = (int)uVar13;
                        puVar14 = (undefined4*)( *plVar10 + uVar6 * 0x38 );
                     }
 while ( true );
                  }

               }

               _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, lVar9, uVar15, "p_index", "count", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

         }

         joined_r0x00107cd8:if (( ( local_60 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),pOVar4 = local_60,cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);
         Memory::free_static(pOVar4, false);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

}
/* WARNING: Subroutine does not return */__stack_chk_fail();LAB_00107cba:lVar9 = lVar9 + 1;if (*(int*)( this + 0x120 ) <= (int)lVar9) goto joined_r0x00107cd8;goto LAB_001079c7;}/* Vector<char const*>::push_back(char const*) [clone .isra.0] */void Vector<char_const*>::push_back(Vector<char_const*> *this, char *param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<char_const*>::resize<false>((CowData<char_const*>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<char_const*>::_copy_on_write((CowData<char_const*>*)( this + 8 ));
            *(char**)( *(long*)( this + 8 ) + lVar3 * 8 ) = param_1;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* ShaderGLES3::_load_from_cache(ShaderGLES3::Version*) */undefined8 ShaderGLES3::_load_from_cache(ShaderGLES3 *this, Version *param_1) {
   long *plVar1;
   OAHashMap *pOVar2;
   code *pcVar3;
   Object *pOVar4;
   long lVar5;
   char cVar6;
   int iVar7;
   int iVar8;
   uint uVar9;
   undefined4 uVar10;
   uint uVar11;
   undefined4 uVar12;
   Specialization *pSVar13;
   undefined8 *puVar14;
   undefined4 uVar15;
   ulong uVar16;
   long lVar17;
   long lVar18;
   ulong *puVar19;
   OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>> *pOVar20;
   void *pvVar21;
   int iVar22;
   undefined8 uVar23;
   long in_FS_OFFSET;
   byte bVar24;
   int local_104;
   Version local_f8[8];
   String local_f0[8];
   Object *local_e8;
   CowData<char32_t> local_e0[8];
   undefined8 local_d8;
   void *local_d0;
   undefined8 local_c8;
   long local_c0;
   int local_b8[2];
   long local_b0;
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 *local_98;
   undefined8 local_90;
   undefined1 local_88[16];
   undefined8 local_78;
   void *local_70;
   undefined8 local_68;
   void *local_60;
   undefined2 local_58;
   char local_45[5];
   long local_40;
   bVar24 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( (char)RasterizerGLES3::gles_over_gl != '\0' ) && ( _glad_glProgramBinary == (code*)0x0 )) {
      uVar23 = 0;
      goto LAB_001085b3;
   }

   _version_get_sha1(local_f8);
   local_a8 = 0;
   local_88._8_8_ = 6;
   local_88._0_8_ = ".cache";
   String::parse_latin1((StrRange*)&local_a8);
   String::path_join((String*)&local_c8);
   String::path_join((String*)local_b8);
   String::path_join((String*)local_88);
   String::operator +(local_f0, (String*)local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   FileAccess::open((String*)&local_e8, (int)local_f0, (Error*)0x1);
   if (local_e8 == (Object*)0x0) {
      uVar23 = 0;
   }
 else {
      for (int i = 0; i < 4; i++) {
         local_45[i] = '\0';
      }

      local_45[4] = 0;
      ( **(code**)( *(long*)local_e8 + 0x220 ) )(local_e8, local_45, 4);
      local_a8 = 0;
      local_88._8_8_ = 4;
      local_88._0_8_ = &_LC128;
      String::parse_latin1((StrRange*)&local_a8);
      cVar6 = operator != ( local_45,(String*)&local_a8 );
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      if (cVar6 == '\0') {
         iVar7 = ( **(code**)( *(long*)local_e8 + 0x1f0 ) )();
         if (iVar7 != 3) goto LAB_00108608;
         iVar7 = ( **(code**)( *(long*)local_e8 + 0x1f0 ) )();
         if (*(int*)( this + 0x120 ) != iVar7) {
            itos((long)&local_a8);
            local_c8 = 0;
            local_88._8_8_ = 5;
            local_88._0_8_ = " got ";
            String::parse_latin1((StrRange*)&local_c8);
            itos((long)local_e0);
            operator+((char *)&
            local_d8,(String*)"shader cache variant count mismatch, expected ";
            String::operator +((String*)local_b8, (String*)&local_d8);
            String::operator +((String*)local_88, (String*)local_b8);
            _err_print_error("_load_from_cache", "drivers/gles3/shader_gles3.cpp", 0x241, "Condition \"cache_variant_count != variant_count\" is true. Returning: false", (String*)local_88, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
            CowData<char32_t>::_unref(local_e0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
            goto LAB_00108608;
         }

         local_d8 = 0;
         local_d0 = (void*)0x0;
         if (iVar7 < 1) {
            uVar23 = 1;
            LocalVector<OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>,unsigned_int,false,false>::resize((LocalVector<OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>,unsigned_int,false,false>*)( param_1 + 0x68 ), 0);
         }
 else {
            local_104 = 0;
            do {
               iVar22 = 0;
               iVar8 = ( **(code**)( *(long*)local_e8 + 0x1f0 ) )();
               local_90 = _LC71;
               local_a0 = Memory::alloc_static(0x200, false);
               local_a8 = Memory::alloc_static(0xe00, false);
               local_98 = (undefined8*)Memory::alloc_static(0x100, false);
               *local_98 = 0;
               local_98[0x1f] = 0;
               puVar14 = (undefined8*)( ( ulong )(local_98 + 1) & 0xfffffffffffffff8 );
               for (uVar16 = ( ulong )(( (int)local_98 - (int)(undefined8*)( ( ulong )(local_98 + 1) & 0xfffffffffffffff8 ) ) + 0x100U >> 3); uVar16 != 0; uVar16 = uVar16 - 1) {
                  *puVar14 = 0;
                  puVar14 = puVar14 + (ulong)bVar24 * -2 + 1;
               }

               if (iVar8 != 0) {
                  do {
                     pSVar13 = (Specialization*)( **(code**)( *(long*)local_e8 + 0x1f8 ) )();
                     uVar9 = ( **(code**)( *(long*)local_e8 + 0x1f0 ) )();
                     if (uVar9 != 0) {
                        uVar10 = ( **(code**)( *(long*)local_e8 + 0x1f0 ) )();
                        local_c0 = 0;
                        CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_c0, (ulong)uVar9);
                        pOVar4 = local_e8;
                        pcVar3 = *(code**)( *(long*)local_e8 + 0x220 );
                        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_c0);
                        lVar18 = local_c0;
                        uVar11 = ( *pcVar3 )(pOVar4, local_c0, (ulong)uVar9);
                        if (uVar9 == uVar11) {
                           local_78 = 0;
                           local_70 = (void*)0x0;
                           local_68 = 0;
                           local_60 = (void*)0x0;
                           local_58 = 0;
                           local_88._4_8_ = 0;
                           uVar12 = ( *_glad_glCreateProgram )();
                           local_88._0_4_ = uVar12;
                           if (( *(int*)( this + 0xf0 ) == 0 ) || ( local_b0 = 0 * (int*)( this + 0xf0 ) < 1 )) {
                              LAB_0010838c:lVar17 = lVar18;
                              if (lVar18 == 0) goto LAB_001084f0;
                              LAB_0010839c:uVar15 = *(undefined4*)( lVar18 + -8 );
                           }
 else {
                              lVar17 = 0;
                              do {
                                 puVar14 = (undefined8*)( lVar17 * 0x10 + *(long*)( this + 0xe8 ) );
                                 uVar16 = puVar14[1];
                                 if (( uVar16 == 0 ) || ( ( (ulong)pSVar13 & uVar16 ) != 0 )) {
                                    Vector<char_const*>::push_back((Vector<char_const*>*)local_b8, (char*)*puVar14);
                                 }

                                 lVar5 = local_b0;
                                 lVar17 = lVar17 + 1;
                              }
 while ( (int)lVar17 < *(int*)( this + 0xf0 ) );
                              if (local_b0 == 0) goto LAB_0010838c;
                              ( *_glad_glTransformFeedbackVaryings )(uVar12, *(undefined4*)( local_b0 + -8 ), local_b0, 0x8c8c);
                              LOCK();
                              plVar1 = (long*)( lVar5 + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 Memory::free_static((void*)( local_b0 + -0x10 ), false);
                              }

                              lVar17 = local_c0;
                              if (lVar18 != 0) goto LAB_0010839c;
                              LAB_001084f0:uVar15 = 0;
                           }

                           ( *_glad_glProgramBinary )(uVar12, uVar10, lVar18, uVar15);
                           local_b8[0] = 0;
                           ( *_glad_glGetProgramiv )(uVar12, 0x8b82, (String*)local_b8);
                           if (local_b8[0] == 1) {
                              _get_uniform_locations(this, (Specialization*)local_88, param_1);
                              local_58 = CONCAT11(1, (undefined1)local_58);
                              if ((double)( local_90 & 0xffffffff ) * __LC96 < (double)( local_90._4_4_ + 1 )) {
                                 OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::_resize_and_rehash((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)&local_a8, (int)local_90 * 2);
                              }

                              uVar16 = (long)pSVar13 * 0x3ffff - 1;
                              uVar16 = ( uVar16 ^ uVar16 >> 0x1f ) * 0x15;
                              uVar16 = ( uVar16 ^ uVar16 >> 0xb ) * 0x41;
                              uVar16 = uVar16 >> 0x16 ^ uVar16;
                              puVar19 = (ulong*)( uVar16 & 0xffffffff );
                              if ((int)uVar16 == 0) {
                                 puVar19 = (ulong*)0x1;
                              }

                              OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::_insert_with_hash((uint)(StrRange*)&local_a8, puVar19, pSVar13);
                              if (local_60 != (void*)0x0) {
                                 Memory::free_static(local_60, false);
                              }

                              if (local_70 != (void*)0x0) {
                                 Memory::free_static(local_70, false);
                              }

                              if (lVar17 != 0) {
                                 LOCK();
                                 plVar1 = (long*)( lVar17 + -0x10 );
                                 *plVar1 = *plVar1 + -1;
                                 UNLOCK();
                                 if (*plVar1 == 0) {
                                    Memory::free_static((void*)( local_c0 + -0x10 ), false);
                                 }

                              }

                              goto LAB_0010827a;
                           }

                           if (_load_from_cache(ShaderGLES3::Version * ::first_print != '\0') {
                              _err_print_error("_load_from_cache", "drivers/gles3/shader_gles3.cpp", 0x26a, "Failed to load cached shader, recompiling.", 0, 1);
                              _load_from_cache(ShaderGLES3::Version*)::first_print =
                              '\0';
                           }

                           Version::Specialization::~Specialization((Specialization*)local_88);
                           lVar18 = lVar17;
                        }
 else {
                           _err_print_error("_load_from_cache", "drivers/gles3/shader_gles3.cpp", 0x253, "Condition \"br != variant_size\" is true. Returning: false", 0, 0);
                        }

                        uVar23 = 0;
                        if (lVar18 != 0) {
                           LOCK();
                           plVar1 = (long*)( lVar18 + -0x10 );
                           *plVar1 = *plVar1 + -1;
                           UNLOCK();
                           if (*plVar1 == 0) {
                              Memory::free_static((void*)( local_c0 + -0x10 ), false);
                           }

                        }

                        OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::~OAHashMap((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)&local_a8);
                        pvVar21 = local_d0;
                        goto LAB_00108560;
                     }

                     LAB_0010827a:iVar22 = iVar22 + 1;
                  }
 while ( iVar8 != iVar22 );
               }

               local_78 = 0;
               local_70 = (void*)0x0;
               local_88 = (undefined1[16])0x0;
               OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::operator =((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)local_88, (OAHashMap*)&local_a8);
               uVar16 = local_d8;
               iVar8 = (int)local_d8;
               if ((int)local_d8 == local_d8._4_4_) {
                  uVar9 = (int)local_d8 * 2;
                  if (uVar9 == 0) {
                     uVar9 = 1;
                  }

                  local_d8 = CONCAT44(uVar9, (int)local_d8);
                  local_d0 = (void*)Memory::realloc_static(local_d0, (ulong)uVar9 << 5, false);
                  if (local_d0 == (void*)0x0) {
                     _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar3 = (code*)invalidInstructionException();
                     ( *pcVar3 )();
                  }

               }

               pvVar21 = local_d0;
               uVar9 = iVar8 + 1;
               local_d8 = CONCAT44(local_d8._4_4_, uVar9);
               pOVar20 = (OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( (long)local_d0 + ( uVar16 & 0xffffffff ) * 0x20 );
               *(undefined8*)( pOVar20 + 0x10 ) = 0;
               *(undefined8*)( pOVar20 + 0x18 ) = 0;
               *(undefined1(*) [16])pOVar20 = (undefined1[16])0x0;
               OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::operator =(pOVar20, (OAHashMap*)local_88);
               OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::~OAHashMap((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)local_88);
               OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::~OAHashMap((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)&local_a8);
               local_104 = local_104 + 1;
            }
 while ( iVar7 != local_104 );
            LocalVector<OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>,unsigned_int,false,false>::resize((LocalVector<OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>,unsigned_int,false,false>*)( param_1 + 0x68 ), uVar9);
            if (uVar9 != 0) {
               lVar18 = 0;
               do {
                  pOVar2 = (OAHashMap*)( (long)pvVar21 + lVar18 );
                  pOVar20 = (OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( *(long*)( param_1 + 0x70 ) + lVar18 );
                  lVar18 = lVar18 + 0x20;
                  OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::operator =(pOVar20, pOVar2);
               }
 while ( (ulong)uVar9 << 5 != lVar18 );
            }

            uVar23 = 1;
            LAB_00108560:if (( pvVar21 != (void*)0x0 ) && ( LocalVector<OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>,unsigned_int,false,false>::resize((LocalVector<OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>,unsigned_int,false,false>*)&local_d8, 0),local_d0 != (void*)0x0 )) {
               Memory::free_static(local_d0, false);
            }

         }

      }
 else {
         _err_print_error("_load_from_cache", "drivers/gles3/shader_gles3.cpp", 0x239, "Condition \"header != String(shader_file_header)\" is true. Returning: false", 0, 0);
         LAB_00108608:uVar23 = 0;
      }

      if (( ( local_e8 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)local_e8 + 0x140 ))(local_e8);
      Memory::free_static(local_e8, false);
   }

}
CowData<char32_t>::_unref((CowData<char32_t>*)local_f0);CowData<char32_t>::_unref((CowData<char32_t>*)local_f8);LAB_001085b3:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return uVar23;}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* ShaderGLES3::_compile_specialization(ShaderGLES3::Version::Specialization&, unsigned int,
   ShaderGLES3::Version*, unsigned long) */void ShaderGLES3::_compile_specialization(ShaderGLES3 *this, Specialization *param_1, uint param_2, Version *param_3, ulong param_4) {
   long *plVar1;
   long lVar2;
   undefined4 uVar3;
   char *pcVar4;
   undefined8 *puVar5;
   undefined8 uVar6;
   ulong uVar7;
   long lVar8;
   long in_FS_OFFSET;
   int local_b0;
   int local_ac;
   CowData<char32_t> local_a8[8];
   ulong local_a0;
   ulong local_98;
   undefined8 local_90;
   char *local_88;
   undefined8 local_80;
   char *local_78;
   long local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( *_glad_glCreateProgram )();
   param_1[0x31] = (Specialization)0x0;
   *(undefined4*)param_1 = uVar3;
   local_78 = (char*)0x0;
   local_70 = 0;
   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   local_50 = 0;
   local_48 = 0;
   _build_variant_code(this, (StringBuilder*)&local_78, param_2, param_3, 0, param_4);
   uVar3 = ( *_glad_glCreateShader )(0x8b31);
   *(undefined4*)( param_1 + 4 ) = uVar3;
   StringBuilder::as_string();
   String::utf8();
   local_98 = local_a0;
   ( *_glad_glShaderSource )(*(undefined4*)( param_1 + 4 ), 1, &local_98, 0);
   ( *_glad_glCompileShader )(*(undefined4*)( param_1 + 4 ));
   ( *_glad_glGetShaderiv )(*(undefined4*)( param_1 + 4 ), 0x8b81, &local_b0);
   if (local_b0 == 0) {
      ( *_glad_glGetShaderiv )(*(undefined4*)( param_1 + 4 ), 0x8b84, &local_ac);
      if (local_ac < 0) {
         ( *_glad_glDeleteShader )(*(undefined4*)( param_1 + 4 ));
         ( *_glad_glDeleteProgram )(*(undefined4*)param_1);
         *(undefined4*)param_1 = 0;
         _err_print_error("_compile_specialization", "drivers/gles3/shader_gles3.cpp", 0x151, "No OpenGL vertex shader compiler log.", 0, 0);
      }
 else {
         if (local_ac == 0) {
            local_ac = 0x1000;
            uVar7 = 0x1001;
         }
 else {
            uVar7 = ( ulong )(local_ac + 1);
         }

         pcVar4 = (char*)Memory::alloc_static(uVar7, false);
         memset(pcVar4, 0, (long)( local_ac + 1 ));
         ( *_glad_glGetShaderInfoLog )(*(undefined4*)( param_1 + 4 ), local_ac, &local_ac, pcVar4);
         local_90 = 0;
         local_88 = ": Vertex shader compilation failed:\n";
         local_80 = 0x24;
         String::parse_latin1((StrRange*)&local_90);
         String::operator +((String*)&local_88, (String*)( this + 0x90 ));
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         String::operator +=((String*)&local_88, pcVar4);
         _display_error_with_code((String*)&local_88, (String*)local_a8);
         Memory::free_static(pcVar4, false);
         ( *_glad_glDeleteShader )(*(undefined4*)( param_1 + 4 ));
         ( *_glad_glDeleteProgram )(*(undefined4*)param_1);
         *(undefined4*)param_1 = 0;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      }

      uVar6 = 0x167;
   }
 else {
      CowData<char>::_unref((CowData<char>*)&local_a0);
      CowData<char32_t>::_unref(local_a8);
      StringBuilder::~StringBuilder((StringBuilder*)&local_78);
      local_78 = (char*)0x0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      _build_variant_code(this, (StringBuilder*)&local_78, param_2, param_3, 1, param_4);
      uVar3 = ( *_glad_glCreateShader )(0x8b30);
      *(undefined4*)( param_1 + 8 ) = uVar3;
      StringBuilder::as_string();
      String::utf8();
      local_98 = local_a0;
      ( *_glad_glShaderSource )(*(undefined4*)( param_1 + 8 ), 1, &local_98, 0);
      ( *_glad_glCompileShader )(*(undefined4*)( param_1 + 8 ));
      ( *_glad_glGetShaderiv )(*(undefined4*)( param_1 + 8 ), 0x8b81, &local_b0);
      if (local_b0 != 0) {
         CowData<char>::_unref((CowData<char>*)&local_a0);
         CowData<char32_t>::_unref(local_a8);
         StringBuilder::~StringBuilder((StringBuilder*)&local_78);
         ( *_glad_glAttachShader )(*(undefined4*)param_1, *(undefined4*)( param_1 + 8 ));
         ( *_glad_glAttachShader )(*(undefined4*)param_1, *(undefined4*)( param_1 + 4 ));
         if (*(int*)( this + 0xf0 ) != 0) {
            local_70 = 0;
            lVar8 = 0;
            if (0 < *(int*)( this + 0xf0 )) {
               do {
                  puVar5 = (undefined8*)( lVar8 * 0x10 + *(long*)( this + 0xe8 ) );
                  uVar7 = puVar5[1];
                  if (( uVar7 == 0 ) || ( ( uVar7 & param_4 ) != 0 )) {
                     Vector<char_const*>::push_back((Vector<char_const*>*)&local_78, (char*)*puVar5);
                  }

                  lVar2 = local_70;
                  lVar8 = lVar8 + 1;
               }
 while ( (int)lVar8 < *(int*)( this + 0xf0 ) );
               if (local_70 != 0) {
                  if (*(long*)( local_70 + -8 ) != 0) {
                     ( *_glad_glTransformFeedbackVaryings )(*(undefined4*)param_1, *(long*)( local_70 + -8 ), local_70, 0x8c8c);
                  }

                  LOCK();
                  plVar1 = (long*)( lVar2 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static((void*)( local_70 + -0x10 ), false);
                  }

               }

            }

         }

         ( *_glad_glLinkProgram )(*(undefined4*)param_1);
         ( *_glad_glGetProgramiv )(*(undefined4*)param_1, 0x8b82, &local_b0);
         if (local_b0 == 0) {
            ( *_glad_glGetProgramiv )(*(undefined4*)param_1, 0x8b84, &local_98);
            if ((int)local_98 < 0) {
               ( *_glad_glDeleteShader )(*(undefined4*)( param_1 + 8 ));
               ( *_glad_glDeleteShader )(*(undefined4*)( param_1 + 4 ));
               ( *_glad_glDeleteProgram )(*(undefined4*)param_1);
               *(undefined4*)param_1 = 0;
               _err_print_error("_compile_specialization", "drivers/gles3/shader_gles3.cpp", 0x1bb, "No OpenGL program link log. Something is wrong.", 0, 0);
               _err_print_error("_compile_specialization", "drivers/gles3/shader_gles3.cpp", 0x1bc, "Method/function failed.", 0, 0);
            }
 else {
               if ((int)local_98 == 0) {
                  local_98 = CONCAT44(local_98._4_4_, 0x1000);
                  uVar7 = 0x1001;
               }
 else {
                  uVar7 = ( ulong )((int)local_98 + 1);
               }

               pcVar4 = (char*)Memory::alloc_static(uVar7, false);
               pcVar4[(int)local_98] = '\0';
               ( *_glad_glGetProgramInfoLog )(*(undefined4*)param_1, local_98 & 0xffffffff, &local_98, pcVar4);
               local_78 = ": Program linking failed:\n";
               local_88 = (char*)0x0;
               local_70 = 0x1a;
               String::parse_latin1((StrRange*)&local_88);
               String::operator +((String*)&local_90, (String*)( this + 0x90 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
               String::operator +=((String*)&local_90, pcVar4);
               local_78 = (char*)0x0;
               _display_error_with_code((String*)&local_90, (String*)&local_78);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               Memory::free_static(pcVar4, false);
               ( *_glad_glDeleteShader )(*(undefined4*)( param_1 + 8 ));
               ( *_glad_glDeleteShader )(*(undefined4*)( param_1 + 4 ));
               ( *_glad_glDeleteProgram )(*(undefined4*)param_1);
               *(undefined4*)param_1 = 0;
               _err_print_error("_compile_specialization", "drivers/gles3/shader_gles3.cpp", 0x1d3, "Method/function failed.", 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
            }

         }
 else {
            _get_uniform_locations(this, param_1, param_3);
            param_1[0x31] = (Specialization)0x1;
         }

         goto LAB_00108c27;
      }

      ( *_glad_glGetShaderiv )(*(undefined4*)( param_1 + 8 ), 0x8b84, &local_ac);
      if (local_ac < 0) {
         ( *_glad_glDeleteShader )(*(undefined4*)( param_1 + 8 ));
         ( *_glad_glDeleteProgram )(*(undefined4*)param_1);
         *(undefined4*)param_1 = 0;
         _err_print_error("_compile_specialization", "drivers/gles3/shader_gles3.cpp", 0x181, "No OpenGL fragment shader compiler log.", 0, 0);
      }
 else {
         if (local_ac == 0) {
            local_ac = 0x1000;
            uVar7 = 0x1001;
         }
 else {
            uVar7 = ( ulong )(local_ac + 1);
         }

         pcVar4 = (char*)Memory::alloc_static(uVar7, false);
         memset(pcVar4, 0, (long)( local_ac + 1 ));
         ( *_glad_glGetShaderInfoLog )(*(undefined4*)( param_1 + 8 ), local_ac, &local_ac, pcVar4);
         local_90 = 0;
         local_88 = ": Fragment shader compilation failed:\n";
         local_80 = 0x26;
         String::parse_latin1((StrRange*)&local_90);
         String::operator +((String*)&local_88, (String*)( this + 0x90 ));
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         String::operator +=((String*)&local_88, pcVar4);
         _display_error_with_code((String*)&local_88, (String*)local_a8);
         Memory::free_static(pcVar4, false);
         ( *_glad_glDeleteShader )(*(undefined4*)( param_1 + 8 ));
         ( *_glad_glDeleteProgram )(*(undefined4*)param_1);
         *(undefined4*)param_1 = 0;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      }

      uVar6 = 0x197;
   }

   _err_print_error("_compile_specialization", "drivers/gles3/shader_gles3.cpp", uVar6, "Method/function failed.", 0, 0);
   CowData<char>::_unref((CowData<char>*)&local_a0);
   CowData<char32_t>::_unref(local_a8);
   StringBuilder::~StringBuilder((StringBuilder*)&local_78);
   LAB_00108c27:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* ShaderGLES3::_initialize_version(ShaderGLES3::Version*) */void ShaderGLES3::_initialize_version(ShaderGLES3 *this, Version *param_1) {
   int *piVar1;
   code *pcVar2;
   undefined8 uVar3;
   int *piVar4;
   char cVar5;
   uint uVar6;
   long lVar7;
   int iVar8;
   ulong uVar9;
   long lVar10;
   ulong *puVar11;
   undefined8 *puVar12;
   OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>> *pOVar13;
   int *piVar14;
   void *pvVar15;
   long in_FS_OFFSET;
   byte bVar16;
   ShaderGLES3 local_99;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 *local_88;
   undefined8 local_80;
   undefined1 local_78[16];
   int *local_68;
   void *local_60;
   undefined8 local_58;
   void *local_50;
   undefined2 local_48;
   long local_40;
   bVar16 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( param_1 + 0x68 ) != 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("_initialize_version", "drivers/gles3/shader_gles3.cpp", 0x2c7, "Condition \"p_version->variants.size() > 0\" is true.", 0, 0);
         return;
      }

      goto LAB_00109722;
   }

   local_99 = this[0xa0];
   if (local_99 == (ShaderGLES3)0x0) {
      LAB_001091ee:iVar8 = *(int*)( this + 0x120 );
      uVar6 = iVar8 - 1U | iVar8 - 1U >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 >> 8 | uVar6;
      uVar6 = ( uVar6 >> 0x10 | uVar6 ) + 1;
      if (*(uint*)( param_1 + 0x6c ) < uVar6) {
         *(uint*)( param_1 + 0x6c ) = uVar6;
         lVar10 = Memory::realloc_static(*(void**)( param_1 + 0x70 ), (ulong)uVar6 << 5, false);
         *(long*)( param_1 + 0x70 ) = lVar10;
         if (lVar10 == 0) {
            _err_print_error("reserve", "./core/templates/local_vector.h", 0x92, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         iVar8 = *(int*)( this + 0x120 );
      }

      if (0 < iVar8) {
         lVar10 = 0;
         do {
            local_80 = _LC71;
            local_90 = Memory::alloc_static(0x200, false);
            local_98 = Memory::alloc_static(0xe00, false);
            local_88 = (undefined8*)Memory::alloc_static(0x100, false);
            *local_88 = 0;
            local_88[0x1f] = 0;
            puVar12 = (undefined8*)( ( ulong )(local_88 + 1) & 0xfffffffffffffff8 );
            for (uVar9 = ( ulong )(( (int)local_88 - (int)(undefined8*)( ( ulong )(local_88 + 1) & 0xfffffffffffffff8 ) ) + 0x100U >> 3); uVar9 != 0; uVar9 = uVar9 - 1) {
               *puVar12 = 0;
               puVar12 = puVar12 + (ulong)bVar16 * -2 + 1;
            }

            local_78 = (undefined1[16])0x0;
            local_68 = (int*)0x0;
            local_60 = (void*)0x0;
            OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::operator =((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)local_78, (OAHashMap*)&local_98);
            uVar6 = *(uint*)( param_1 + 0x68 );
            if (uVar6 == *(uint*)( param_1 + 0x6c )) {
               uVar6 = uVar6 * 2;
               if (uVar6 == 0) {
                  uVar6 = 1;
               }

               *(uint*)( param_1 + 0x6c ) = uVar6;
               lVar7 = Memory::realloc_static(*(void**)( param_1 + 0x70 ), (ulong)uVar6 << 5, false);
               *(long*)( param_1 + 0x70 ) = lVar7;
               if (lVar7 == 0) {
                  _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

               uVar6 = *(uint*)( param_1 + 0x68 );
            }
 else {
               lVar7 = *(long*)( param_1 + 0x70 );
            }

            pOVar13 = (OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( lVar7 + (ulong)uVar6 * 0x20 );
            *(uint*)( param_1 + 0x68 ) = uVar6 + 1;
            *(undefined8*)( pOVar13 + 0x10 ) = 0;
            *(undefined8*)( pOVar13 + 0x18 ) = 0;
            *(undefined1(*) [16])pOVar13 = (undefined1[16])0x0;
            OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::operator =(pOVar13, (OAHashMap*)local_78);
            piVar4 = local_68;
            uVar3 = local_78._0_8_;
            if ((int)local_60 != 0) {
               piVar1 = local_68 + ( (ulong)local_60 & 0xffffffff );
               piVar14 = local_68;
               pvVar15 = (void*)local_78._0_8_;
               do {
                  if (*piVar14 != 0) {
                     if (*(void**)( (long)pvVar15 + 0x28 ) != (void*)0x0) {
                        if (*(int*)( (long)pvVar15 + 0x20 ) != 0) {
                           *(undefined4*)( (long)pvVar15 + 0x20 ) = 0;
                        }

                        Memory::free_static(*(void**)( (long)pvVar15 + 0x28 ), false);
                     }

                     if (*(void**)( (long)pvVar15 + 0x18 ) != (void*)0x0) {
                        if (*(int*)( (long)pvVar15 + 0x10 ) != 0) {
                           *(undefined4*)( (long)pvVar15 + 0x10 ) = 0;
                        }

                        Memory::free_static(*(void**)( (long)pvVar15 + 0x18 ), false);
                     }

                  }

                  piVar14 = piVar14 + 1;
                  pvVar15 = (void*)( (long)pvVar15 + 0x38 );
               }
 while ( piVar14 != piVar1 );
            }

            Memory::free_static((void*)local_78._8_8_, false);
            Memory::free_static((void*)uVar3, false);
            Memory::free_static(piVar4, false);
            local_48 = 0;
            local_78 = ZEXT816(0);
            local_68 = (int*)0x0;
            local_60 = (void*)0x0;
            local_58 = 0;
            local_50 = (void*)0x0;
            _compile_specialization(this, (Specialization*)local_78, (uint)lVar10, param_1, *(ulong*)( this + 0x110 ));
            if (*(uint*)( param_1 + 0x68 ) <= (uint)lVar10) {
               _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, lVar10, ( ulong ) * (uint*)( param_1 + 0x68 ), "p_index", "count", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            pOVar13 = (OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( lVar10 * 0x20 + *(long*)( param_1 + 0x70 ) );
            if ((double)*(uint*)( pOVar13 + 0x18 ) * __LC96 < (double)( *(int*)( pOVar13 + 0x1c ) + 1 )) {
               OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::_resize_and_rehash(pOVar13, *(uint*)( pOVar13 + 0x18 ) * 2);
            }

            uVar9 = (long)*(Specialization**)( this + 0x110 ) * 0x3ffff - 1;
            uVar9 = ( uVar9 ^ uVar9 >> 0x1f ) * 0x15;
            uVar9 = ( uVar9 ^ uVar9 >> 0xb ) * 0x41;
            uVar9 = uVar9 >> 0x16 ^ uVar9;
            puVar11 = (ulong*)( uVar9 & 0xffffffff );
            if ((int)uVar9 == 0) {
               puVar11 = (ulong*)0x1;
            }

            OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::_insert_with_hash((uint)pOVar13, puVar11, *(Specialization**)( this + 0x110 ));
            if (local_50 != (void*)0x0) {
               Memory::free_static(local_50, false);
            }

            if (local_60 != (void*)0x0) {
               Memory::free_static(local_60, false);
            }

            lVar10 = lVar10 + 1;
            OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::~OAHashMap((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)&local_98);
         }
 while ( (int)lVar10 < *(int*)( this + 0x120 ) );
      }

      if (local_99 != (ShaderGLES3)0x0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            _save_to_cache(this, param_1);
            return;
         }

         goto LAB_00109722;
      }

   }
 else {
      if (( 0 < *(int*)( this + 0xf0 ) ) && ( *(char*)( GLES3::Config::singleton + 0x8c ) != '\0' )) {
         local_99 = (ShaderGLES3)0x0;
         goto LAB_001091ee;
      }

      cVar5 = _load_from_cache(this, param_1);
      if (cVar5 == '\0') goto LAB_001091ee;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00109722:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CowData<RenderingServer::ShaderNativeSourceCode::Version>::_copy_on_write() [clone .isra.0] */void CowData<RenderingServer::ShaderNativeSourceCode::Version>::_copy_on_write(CowData<RenderingServer::ShaderNativeSourceCode::Version> *this) {
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
                  if (lVar3 == 0) goto LAB_0010983a;
                  LOCK();
                  lVar6 = *plVar1;
                  bVar10 = lVar3 == lVar6;
                  if (bVar10) {
                     *plVar1 = lVar3 + 1;
                     lVar6 = lVar3;
                  }

                  UNLOCK();
               }
 while ( !bVar10 );
               if (lVar6 != -1) {
                  *(undefined8*)this_00 = *(undefined8*)( lVar8 + 8 );
               }

            }

         }

         LAB_0010983a:lVar9 = lVar9 + 1;
         this_00 = this_00 + 0x10;
      }
 while ( lVar2 != lVar9 );
   }

   _unref(this);
   *(undefined8**)this = puVar5 + 2;
   return;
}
/* CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage>::_copy_on_write() [clone
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
         }
 while ( lVar1 != lVar6 );
      }

      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar3 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* Vector<RenderingServer::ShaderNativeSourceCode::Version::Stage>::push_back(RenderingServer::ShaderNativeSourceCode::Version::Stage)
   [clone .isra.0] */void Vector<RenderingServer::ShaderNativeSourceCode::Version::Stage>::push_back(Vector<RenderingServer::ShaderNativeSourceCode::Version::Stage> *this, CowData *param_2) {
   int iVar1;
   long lVar2;
   CowData<char32_t> *this_00;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar3 = 1;
   }
 else {
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
   }
 else {
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
}
/* ShaderGLES3::version_get_native_source_code(RID) */long ShaderGLES3::version_get_native_source_code(long param_1, ShaderGLES3 *param_2, ulong param_3) {
   CowData<RenderingServer::ShaderNativeSourceCode::Version> *this;
   long *plVar1;
   code *pcVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined8 uVar5;
   char *pcVar6;
   undefined8 *puVar7;
   Vector<RenderingServer::ShaderNativeSourceCode::Version::Stage> *pVVar8;
   undefined8 *puVar9;
   long lVar10;
   undefined8 *puVar11;
   long lVar12;
   ulong uVar13;
   long in_FS_OFFSET;
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
   if (( param_3 == 0 ) || ( *(uint*)( param_2 + 0x54 ) <= (uint)param_3 )) {
      LAB_0010a160:*(undefined8*)( param_1 + 8 ) = 0;
   }
 else {
      lVar10 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x50 ) ) * 0x80 + *(long*)( *(long*)( param_2 + 0x40 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x50 ) ) * 8 );
      if (*(int*)( lVar10 + 0x78 ) == (int)( param_3 >> 0x20 )) {
         lVar12 = (long)*(int*)( param_2 + 0x120 );
         this(CowData<RenderingServer::ShaderNativeSourceCode::Version> * )(param_1 + 8);
         *(undefined8*)( param_1 + 8 ) = 0;
         if (lVar12 < 0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
            puVar11 = *(undefined8**)( param_1 + 8 );
            LAB_0010a249:if (puVar11 == (undefined8*)0x0) goto LAB_0010a190;
         }
 else {
            if (lVar12 == 0) goto LAB_0010a190;
            CowData<RenderingServer::ShaderNativeSourceCode::Version>::_copy_on_write(this);
            uVar13 = lVar12 * 0x10 - 1;
            uVar13 = uVar13 | uVar13 >> 1;
            uVar13 = uVar13 | uVar13 >> 2;
            uVar13 = uVar13 | uVar13 >> 4;
            uVar13 = uVar13 | uVar13 >> 8;
            uVar13 = uVar13 | uVar13 >> 0x10;
            puVar7 = (undefined8*)Memory::alloc_static(( uVar13 | uVar13 >> 0x20 ) + 0x11, false);
            if (puVar7 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               puVar11 = *(undefined8**)( param_1 + 8 );
               goto LAB_0010a249;
            }

            puVar11 = puVar7 + 2;
            *puVar7 = 1;
            *(undefined8**)( param_1 + 8 ) = puVar11;
            puVar9 = puVar11;
            if (( (int)( puVar7 + lVar12 * 2 + 2 ) - (int)puVar11 & 0x10U ) == 0) goto LAB_00109c60;
            puVar7[3] = 0;
            puVar9 = puVar7;
            while (puVar9 = puVar9 + 4,puVar7 + lVar12 * 2 + 2 != puVar9) {
               LAB_00109c60:puVar9[1] = 0;
               puVar9[3] = 0;
            }
;
            puVar7[1] = lVar12;
         }

         uVar13 = 0;
         do {
            if ((long)puVar11[-1] <= (long)uVar13) break;
            local_78 = 0;
            local_70 = 0;
            local_68 = 0;
            local_60 = 0;
            local_58 = 0;
            local_50 = 0;
            local_48 = 0;
            _build_variant_code(param_2, (StringBuilder*)&local_78, uVar13 & 0xffffffff, lVar10, 0, *(undefined8*)( param_2 + 0x110 ));
            local_88 = "vertex";
            local_98 = (undefined1[16])0x0;
            local_80 = 6;
            String::parse_latin1((StrRange*)local_98);
            StringBuilder::as_string();
            pcVar6 = local_88;
            uVar5 = local_98._8_8_;
            if ((char*)local_98._8_8_ == local_88) {
               if ((char*)local_98._8_8_ == (char*)0x0) goto LAB_00109cc0;
               LOCK();
               plVar1 = (long*)( local_98._8_8_ + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 != 0) goto LAB_00109cc0;
               local_88 = (char*)0x0;
               Memory::free_static(pcVar6 + -0x10, false);
               lVar12 = *(long*)( param_1 + 8 );
               if (lVar12 != 0) goto LAB_00109ccd;
               LAB_0010a100:lVar12 = 0;
               LAB_0010a103:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, uVar13, lVar12, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
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
                  Memory::free_static((char*)( uVar5 + -0x10 ), false);
               }

            }

            local_98._8_8_ = local_88;
            LAB_00109cc0:lVar12 = *(long*)( param_1 + 8 );
            if (lVar12 == 0) goto LAB_0010a100;
            LAB_00109ccd:lVar12 = *(long*)( lVar12 + -8 );
            if (lVar12 <= (long)uVar13) goto LAB_0010a103;
            CowData<RenderingServer::ShaderNativeSourceCode::Version>::_copy_on_write(this);
            local_88 = (char*)0x0;
            pVVar8 = (Vector<RenderingServer::ShaderNativeSourceCode::Version::Stage>*)( *(long*)( param_1 + 8 ) + uVar13 * 0x10 );
            if (local_98._0_8_ != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, (CowData*)local_98);
            }

            local_80 = 0;
            if (local_98._8_8_ == 0) {
               Vector<RenderingServer::ShaderNativeSourceCode::Version::Stage>::push_back(pVVar8);
            }
 else {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)( local_98 + 8 ));
               lVar12 = local_80;
               Vector<RenderingServer::ShaderNativeSourceCode::Version::Stage>::push_back(pVVar8);
               if (lVar12 != 0) {
                  LOCK();
                  plVar1 = (long*)( lVar12 + -0x10 );
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

            uVar5 = local_98._8_8_;
            if (local_98._8_8_ != 0) {
               LOCK();
               plVar1 = (long*)( local_98._8_8_ + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_98._8_8_ = 0;
                  Memory::free_static((void*)( uVar5 + -0x10 ), false);
               }

            }

            uVar5 = local_98._0_8_;
            if (local_98._0_8_ != 0) {
               LOCK();
               plVar1 = (long*)( local_98._0_8_ + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  auVar3._8_8_ = 0;
                  auVar3._0_8_ = local_98._8_8_;
                  local_98 = auVar3 << 0x40;
                  Memory::free_static((void*)( uVar5 + -0x10 ), false);
               }

            }

            StringBuilder::~StringBuilder((StringBuilder*)&local_78);
            local_78 = 0;
            local_70 = 0;
            local_68 = 0;
            local_60 = 0;
            local_58 = 0;
            local_50 = 0;
            local_48 = 0;
            _build_variant_code(param_2, (StringBuilder*)&local_78, (int)uVar13, lVar10, 1, *(undefined8*)( param_2 + 0x110 ));
            local_98 = (undefined1[16])0x0;
            local_88 = "fragment";
            local_80 = 8;
            String::parse_latin1((StrRange*)local_98);
            StringBuilder::as_string();
            pcVar6 = local_88;
            uVar5 = local_98._8_8_;
            if ((char*)local_98._8_8_ == local_88) {
               if ((char*)local_98._8_8_ != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_98._8_8_ + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_88 = (char*)0x0;
                     Memory::free_static(pcVar6 + -0x10, false);
                  }

               }

            }
 else {
               if ((char*)local_98._8_8_ != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_98._8_8_ + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_98._8_8_ = 0;
                     Memory::free_static((char*)( uVar5 + -0x10 ), false);
                  }

               }

               local_98._8_8_ = local_88;
            }

            if (*(long*)( param_1 + 8 ) == 0) goto LAB_0010a100;
            lVar12 = *(long*)( *(long*)( param_1 + 8 ) + -8 );
            if (lVar12 <= (long)uVar13) goto LAB_0010a103;
            CowData<RenderingServer::ShaderNativeSourceCode::Version>::_copy_on_write(this);
            pVVar8 = (Vector<RenderingServer::ShaderNativeSourceCode::Version::Stage>*)( uVar13 * 0x10 + *(long*)( param_1 + 8 ) );
            local_88 = (char*)0x0;
            if (local_98._0_8_ != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, (CowData*)local_98);
            }

            local_80 = 0;
            if (local_98._8_8_ == 0) {
               Vector<RenderingServer::ShaderNativeSourceCode::Version::Stage>::push_back(pVVar8);
            }
 else {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)( local_98 + 8 ));
               lVar12 = local_80;
               Vector<RenderingServer::ShaderNativeSourceCode::Version::Stage>::push_back(pVVar8);
               if (lVar12 != 0) {
                  LOCK();
                  plVar1 = (long*)( lVar12 + -0x10 );
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

            uVar5 = local_98._8_8_;
            if (local_98._8_8_ != 0) {
               LOCK();
               plVar1 = (long*)( local_98._8_8_ + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_98._8_8_ = 0;
                  Memory::free_static((void*)( uVar5 + -0x10 ), false);
               }

            }

            uVar5 = local_98._0_8_;
            if (local_98._0_8_ != 0) {
               LOCK();
               plVar1 = (long*)( local_98._0_8_ + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = local_98._8_8_;
                  local_98 = auVar4 << 0x40;
                  Memory::free_static((void*)( uVar5 + -0x10 ), false);
               }

            }

            uVar13 = uVar13 + 1;
            StringBuilder::~StringBuilder((StringBuilder*)&local_78);
            puVar11 = *(undefined8**)( param_1 + 8 );
         }
 while ( puVar11 != (undefined8*)0x0 );
         goto LAB_0010a190;
      }

      if (0x7ffffffe < *(int*)( lVar10 + 0x78 ) + 0x80000000U) goto LAB_0010a160;
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      *(undefined8*)( param_1 + 8 ) = 0;
   }

   _err_print_error("version_get_native_source_code", "drivers/gles3/shader_gles3.cpp", 0x1de, "Parameter \"version\" is null.", 0, 0);
   LAB_0010a190:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderGLES3::version_set_code(RID, HashMap<String, String, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, String> > >
   const&, String const&, String const&, String const&, Vector<String> const&,
   LocalVector<ShaderGLES3::TextureUniformData, unsigned int, false, false> const&, bool) */void ShaderGLES3::version_set_code(ShaderGLES3 *param_1, ulong param_2, long param_3) {
   uint uVar1;
   long *plVar2;
   CowData<CharString> *this;
   CowData<char> *this_00;
   undefined8 *puVar3;
   int iVar4;
   long *plVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   uint uVar8;
   Version *pVVar9;
   void *pvVar10;
   StringName_conflict *this_01;
   uint uVar11;
   long lVar12;
   long lVar13;
   long lVar14;
   StringName_conflict *pSVar15;
   long in_FS_OFFSET;
   long in_stack_00000008;
   uint *in_stack_00000010;
   char in_stack_00000018;
   long local_58;
   long local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( param_1 + 0x54 ) )) {
      pVVar9 = (Version*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x50 ) ) * 0x80 + *(long*)( *(long*)( param_1 + 0x40 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x50 ) ) * 8 ) );
      if (*(int*)( pVVar9 + 0x78 ) == (int)( param_2 >> 0x20 )) {
         if (*(int*)( pVVar9 + 0x68 ) != 0) {
            _clear_version(param_1, pVVar9);
         }

         String::utf8();
         if (*(long*)( pVVar9 + 0x18 ) != local_48) {
            CowData<char>::_unref((CowData<char>*)( pVVar9 + 0x18 ));
            *(long*)( pVVar9 + 0x18 ) = local_48;
            local_48 = 0;
         }

         CowData<char>::_unref((CowData<char>*)&local_48);
         String::utf8();
         if (*(long*)( pVVar9 + 0x20 ) != local_48) {
            CowData<char>::_unref((CowData<char>*)( pVVar9 + 0x20 ));
            *(long*)( pVVar9 + 0x20 ) = local_48;
            local_48 = 0;
         }

         CowData<char>::_unref((CowData<char>*)&local_48);
         String::utf8();
         if (*(long*)( pVVar9 + 0x10 ) != local_48) {
            CowData<char>::_unref((CowData<char>*)( pVVar9 + 0x10 ));
            *(long*)( pVVar9 + 0x10 ) = local_48;
            local_48 = 0;
         }

         CowData<char>::_unref((CowData<char>*)&local_48);
         if (( *(long*)( pVVar9 + 0x30 ) != 0 ) && ( *(int*)( pVVar9 + 0x54 ) != 0 )) {
            lVar14 = 0;
            uVar8 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( pVVar9 + 0x50 ) * 4 );
            if (uVar8 != 0) {
               do {
                  if (*(int*)( *(long*)( pVVar9 + 0x38 ) + lVar14 ) != 0) {
                     *(int*)( *(long*)( pVVar9 + 0x38 ) + lVar14 ) = 0;
                     pvVar10 = *(void**)( *(long*)( pVVar9 + 0x30 ) + lVar14 * 2 );
                     if (*(long*)( (long)pvVar10 + 0x18 ) != 0) {
                        LOCK();
                        plVar5 = (long*)( *(long*)( (long)pvVar10 + 0x18 ) + -0x10 );
                        *plVar5 = *plVar5 + -1;
                        UNLOCK();
                        if (*plVar5 == 0) {
                           lVar12 = *(long*)( (long)pvVar10 + 0x18 );
                           *(undefined8*)( (long)pvVar10 + 0x18 ) = 0;
                           Memory::free_static((void*)( lVar12 + -0x10 ), false);
                        }

                     }

                     if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar10 + 0x10 ) != 0 )) {
                        StringName::unref();
                     }

                     Memory::free_static(pvVar10, false);
                     *(undefined8*)( *(long*)( pVVar9 + 0x30 ) + lVar14 * 2 ) = 0;
                  }

                  lVar14 = lVar14 + 4;
               }
 while ( (ulong)uVar8 * 4 - lVar14 != 0 );
            }

            *(undefined4*)( pVVar9 + 0x54 ) = 0;
            *(undefined1(*) [16])( pVVar9 + 0x40 ) = (undefined1[16])0x0;
         }

         uVar8 = *in_stack_00000010;
         uVar11 = *(uint*)pVVar9;
         if (uVar8 < uVar11) {
            lVar14 = (ulong)uVar8 << 4;
            uVar11 = uVar8;
            do {
               if (( StringName::configured != '\0' ) && ( *(long*)( *(long*)( pVVar9 + 8 ) + lVar14 ) != 0 )) {
                  StringName::unref();
               }

               uVar11 = uVar11 + 1;
               lVar14 = lVar14 + 0x10;
            }
 while ( uVar11 < *(uint*)pVVar9 );
            LAB_0010a550:*(uint*)pVVar9 = uVar8;
            uVar8 = *in_stack_00000010;
         }
 else if (uVar11 < uVar8) {
            uVar1 = uVar8 - 1;
            if (*(uint*)( pVVar9 + 4 ) < uVar8) {
               pvVar10 = *(void**)( pVVar9 + 8 );
               uVar11 = uVar1 >> 1 | uVar1;
               uVar11 = uVar11 | uVar11 >> 2;
               uVar11 = uVar11 | uVar11 >> 4;
               uVar11 = uVar11 >> 8 | uVar11;
               uVar11 = ( uVar11 >> 0x10 | uVar11 ) + 1;
               *(uint*)( pVVar9 + 4 ) = uVar11;
               lVar14 = Memory::realloc_static(pvVar10, (ulong)uVar11 << 4, false);
               *(long*)( pVVar9 + 8 ) = lVar14;
               if (lVar14 == 0) {
                  LocalVector<ShaderGLES3::TextureUniformData,unsigned_int,false,false>::resize((uint)pvVar10);
                  goto LAB_0010aa1d;
               }

               uVar11 = *(uint*)pVVar9;
               if (uVar8 <= uVar11) goto LAB_0010a550;
            }

            puVar3 = (undefined8*)( *(long*)( pVVar9 + 8 ) + 0x10 + ( ( ulong )(uVar1 - uVar11) + (ulong)uVar11 ) * 0x10 );
            puVar6 = (undefined8*)( (ulong)uVar11 * 0x10 + *(long*)( pVVar9 + 8 ) );
            if (( (int)puVar3 - (int)puVar6 & 0x10U ) != 0) {
               *puVar6 = 0;
               puVar6 = puVar6 + 2;
               if (puVar3 == puVar6) goto LAB_0010a550;
            }

            do {
               *puVar6 = 0;
               puVar7 = puVar6 + 4;
               puVar6[2] = 0;
               puVar6 = puVar7;
            }
 while ( puVar3 != puVar7 );
            goto LAB_0010a550;
         }

         lVar14 = 0;
         if (uVar8 != 0) {
            do {
               lVar12 = lVar14 + 1;
               pSVar15 = (StringName_conflict*)( *(long*)( in_stack_00000010 + 2 ) + lVar14 * 0x10 );
               this_01 = (StringName_conflict*)( lVar14 * 0x10 + *(long*)( pVVar9 + 8 ) );
               StringName::operator =(this_01, pSVar15);
               *(undefined4*)( this_01 + 8 ) = *(undefined4*)( pSVar15 + 8 );
               lVar14 = lVar12;
            }
 while ( (uint)lVar12 < *in_stack_00000010 );
         }

         for (puVar3 = *(undefined8**)( param_3 + 0x18 ); puVar3 != (undefined8*)0x0; puVar3 = (undefined8*)*puVar3) {
            String::utf8();
            String::to_upper();
            StringName::StringName((StringName_conflict*)&local_50, (String*)&local_58, false);
            plVar5 = (long*)HashMap<StringName,CharString,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,CharString>>>::operator []((HashMap<StringName,CharString,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,CharString>>>*)( pVVar9 + 0x28 ), (StringName_conflict*)&local_50);
            lVar14 = *plVar5;
            if (lVar14 != local_48) {
               if (lVar14 != 0) {
                  LOCK();
                  plVar2 = (long*)( lVar14 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar14 = *plVar5;
                     *plVar5 = 0;
                     Memory::free_static((void*)( lVar14 + -0x10 ), false);
                  }
 else {
                     *plVar5 = 0;
                  }

               }

               *plVar5 = local_48;
               local_48 = 0;
            }

            if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
               StringName::unref();
            }

            lVar14 = local_58;
            if (local_58 != 0) {
               LOCK();
               plVar5 = (long*)( local_58 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_58 = 0;
                  Memory::free_static((void*)( lVar14 + -0x10 ), false);
               }

            }

            lVar14 = local_48;
            if (local_48 != 0) {
               LOCK();
               plVar5 = (long*)( local_48 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_48 = 0;
                  Memory::free_static((void*)( lVar14 + -0x10 ), false);
               }

            }

         }

         this(CowData<CharString> * )(pVVar9 + 0x60);
         if (( *(long*)( pVVar9 + 0x60 ) != 0 ) && ( *(long*)( *(long*)( pVVar9 + 0x60 ) + -8 ) != 0 )) {
            CowData<CharString>::_unref(this);
         }

         lVar14 = *(long*)( in_stack_00000008 + 8 );
         for (lVar12 = 0; ( lVar14 != 0 && ( lVar12 < *(long*)( lVar14 + -8 ) ) ); lVar12 = lVar12 + 1) {
            String::utf8();
            if (*(long*)( pVVar9 + 0x60 ) == 0) {
               lVar14 = 1;
            }
 else {
               lVar14 = *(long*)( *(long*)( pVVar9 + 0x60 ) + -8 ) + 1;
            }

            iVar4 = CowData<CharString>::resize<false>(this, lVar14);
            if (iVar4 == 0) {
               if (*(long*)( pVVar9 + 0x60 ) == 0) {
                  lVar13 = -1;
                  lVar14 = 0;
               }
 else {
                  lVar14 = *(long*)( *(long*)( pVVar9 + 0x60 ) + -8 );
                  lVar13 = lVar14 + -1;
                  if (-1 < lVar13) {
                     CowData<CharString>::_copy_on_write(this);
                     this_00 = (CowData<char>*)( *(long*)( pVVar9 + 0x60 ) + lVar13 * 8 );
                     if (*(long*)this_00 != local_48) {
                        CowData<char>::_ref(this_00, (CowData*)&local_48);
                     }

                     goto LAB_0010a7c5;
                  }

               }

               _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar13, lVar14, "p_index", "size()", "", false, false);
            }
 else {
               _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
            }

            LAB_0010a7c5:lVar14 = local_48;
            if (local_48 != 0) {
               LOCK();
               plVar5 = (long*)( local_48 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_48 = 0;
                  Memory::free_static((void*)( lVar14 + -0x10 ), false);
               }

            }

            lVar14 = *(long*)( in_stack_00000008 + 8 );
         }

         if (in_stack_00000018 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            _initialize_version(param_1, pVVar9);
            return;
         }

         goto LAB_0010aa1d;
      }

      if (*(int*)( pVVar9 + 0x78 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("version_set_code", "drivers/gles3/shader_gles3.cpp", 0x2db, "Parameter \"version\" is null.", 0, 0);
      return;
   }

   LAB_0010aa1d:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* ShaderGLES3::version_create() */undefined8 ShaderGLES3::version_create(ShaderGLES3 *this) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   undefined8 local_98;
   undefined1 local_90[16];
   undefined1 local_80[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined8 local_48;
   undefined8 local_38;
   undefined8 local_30;
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0x120 ) == 0) {
      uVar1 = 0;
      _err_print_error("version_create", "drivers/gles3/shader_gles3.cpp", 0x9c, "Condition \"variant_count == 0\" is true. Returning: RID()", 0, 0);
   }
 else {
      local_98 = 0;
      local_90 = (undefined1[16])0x0;
      local_48 = 2;
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_80 = (undefined1[16])0x0;
      local_68 = (undefined1[16])0x0;
      local_58 = (undefined1[16])0x0;
      uVar1 = RID_Alloc<ShaderGLES3::Version,true>::make_rid((RID_Alloc<ShaderGLES3::Version,true>*)( this + 0x38 ), (Version*)&local_98);
      Version::~Version((Version*)&local_98);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<int>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<char const*>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<char_const*>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<StringName>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<StringName>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* ShaderGLES3::version_free(RID) [clone .cold] */void ShaderGLES3::version_free(undefined8 param_1, undefined8 param_2) {
   code *pcVar1;
   int unaff_R14D;
   if (unaff_R14D + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, param_2);
   }

   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<CharString>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<CharString>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_0010b7c2(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<RenderingServer::ShaderNativeSourceCode::Version>::_copy_on_write() [clone .isra.0]
   [clone .cold] */void CowData<RenderingServer::ShaderNativeSourceCode::Version>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage>::_copy_on_write() [clone
   .isra.0] [clone .cold] */void CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
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
/* ShaderGLES3::Version::Specialization::~Specialization() */void ShaderGLES3::Version::Specialization::~Specialization(Specialization *this) {
   if (*(void**)( this + 0x28 ) != (void*)0x0) {
      if (*(int*)( this + 0x20 ) != 0) {
         *(undefined4*)( this + 0x20 ) = 0;
      }

      Memory::free_static(*(void**)( this + 0x28 ), false);
   }

   if (*(void**)( this + 0x18 ) != (void*)0x0) {
      if (*(int*)( this + 0x10 ) != 0) {
         *(undefined4*)( this + 0x10 ) = 0;
      }

      Memory::free_static(*(void**)( this + 0x18 ), false);
      return;
   }

   return;
}
/* StringBuilder::~StringBuilder() */void StringBuilder::~StringBuilder(StringBuilder *this) {
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
      }
 while ( (uint)lVar4 < *(uint*)( this + 8 ) );
      *(undefined4*)( this + 8 ) = 0;
      if (pvVar5 == (void*)0x0) {
         return;
      }

   }

   Memory::free_static(pvVar5, false);
   return;
}
/* OAHashMap<unsigned long, ShaderGLES3::Version::Specialization, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned long> >::~OAHashMap() */void OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::~OAHashMap(OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>> *this) {
   long lVar1;
   long lVar2;
   if (*(int*)( this + 0x18 ) != 0) {
      lVar2 = 0;
      do {
         if (*(int*)( *(long*)( this + 0x10 ) + lVar2 * 4 ) != 0) {
            lVar1 = *(long*)this + lVar2 * 0x38;
            if (*(void**)( lVar1 + 0x28 ) != (void*)0x0) {
               if (*(int*)( lVar1 + 0x20 ) != 0) {
                  *(undefined4*)( lVar1 + 0x20 ) = 0;
               }

               Memory::free_static(*(void**)( lVar1 + 0x28 ), false);
            }

            if (*(void**)( lVar1 + 0x18 ) != (void*)0x0) {
               if (*(int*)( lVar1 + 0x10 ) != 0) {
                  *(undefined4*)( lVar1 + 0x10 ) = 0;
               }

               Memory::free_static(*(void**)( lVar1 + 0x18 ), false);
            }

         }

         lVar2 = lVar2 + 1;
      }
 while ( (uint)lVar2 < *(uint*)( this + 0x18 ) );
   }

   Memory::free_static(*(void**)( this + 8 ), false);
   Memory::free_static(*(void**)this, false);
   Memory::free_static(*(void**)( this + 0x10 ), false);
   return;
}
/* CowData<char>::_unref() */void CowData<char>::_unref(CowData<char> *this) {
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
/* WARNING: Removing unreachable block (ram,0x0010bc38) *//* WARNING: Removing unreachable block (ram,0x0010bdcd) *//* WARNING: Removing unreachable block (ram,0x0010bdd9) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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
}
/* LocalVector<OAHashMap<unsigned long, ShaderGLES3::Version::Specialization, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned long> >, unsigned int, false, false>::resize(unsigned int) */void LocalVector<OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>,unsigned_int,false,false>::resize(LocalVector<OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>,unsigned_int,false,false> *this, uint param_1) {
   uint uVar1;
   long lVar2;
   uint uVar3;
   code *pcVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   void *__s;
   long lVar7;
   undefined1(*pauVar8)[16];
   long *plVar9;
   long lVar10;
   uint uVar11;
   uVar11 = *(uint*)this;
   if (param_1 < uVar11) {
      lVar10 = (ulong)param_1 << 5;
      uVar11 = param_1;
      do {
         lVar7 = 0;
         plVar9 = (long*)( *(long*)( this + 8 ) + lVar10 );
         if ((int)plVar9[3] != 0) {
            do {
               if (*(int*)( plVar9[2] + lVar7 * 4 ) != 0) {
                  lVar2 = *plVar9 + lVar7 * 0x38;
                  if (*(void**)( lVar2 + 0x28 ) != (void*)0x0) {
                     if (*(int*)( lVar2 + 0x20 ) != 0) {
                        *(undefined4*)( lVar2 + 0x20 ) = 0;
                     }

                     Memory::free_static(*(void**)( lVar2 + 0x28 ), false);
                  }

                  if (*(void**)( lVar2 + 0x18 ) != (void*)0x0) {
                     if (*(int*)( lVar2 + 0x10 ) != 0) {
                        *(undefined4*)( lVar2 + 0x10 ) = 0;
                     }

                     Memory::free_static(*(void**)( lVar2 + 0x18 ), false);
                  }

               }

               lVar7 = lVar7 + 1;
            }
 while ( (uint)lVar7 < *(uint*)( plVar9 + 3 ) );
         }

         uVar11 = uVar11 + 1;
         lVar10 = lVar10 + 0x20;
         Memory::free_static((void*)plVar9[1], false);
         Memory::free_static((void*)*plVar9, false);
         Memory::free_static((void*)plVar9[2], false);
      }
 while ( uVar11 < *(uint*)this );
   }
 else {
      if (param_1 <= uVar11) {
         return;
      }

      uVar1 = param_1 - 1;
      if (*(uint*)( this + 4 ) < param_1) {
         uVar11 = uVar1 >> 1 | uVar1;
         uVar11 = uVar11 | uVar11 >> 2;
         uVar11 = uVar11 >> 4 | uVar11;
         uVar11 = uVar11 >> 8 | uVar11;
         uVar11 = ( uVar11 | uVar11 >> 0x10 ) + 1;
         *(uint*)( this + 4 ) = uVar11;
         lVar10 = Memory::realloc_static(*(void**)( this + 8 ), (ulong)uVar11 << 5, false);
         *(long*)( this + 8 ) = lVar10;
         if (lVar10 == 0) {
            _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         uVar11 = *(uint*)this;
         if (param_1 <= uVar11) goto LAB_0010bf12;
      }

      uVar5 = _LC71;
      lVar10 = (ulong)uVar11 << 5;
      do {
         pauVar8 = (undefined1(*) [16])( *(long*)( this + 8 ) + lVar10 );
         *(undefined8*)pauVar8[1] = 0;
         *(undefined8*)( pauVar8[1] + 8 ) = uVar5;
         *pauVar8 = (undefined1[16])0x0;
         uVar6 = Memory::alloc_static(0x200, false);
         *(undefined8*)( *pauVar8 + 8 ) = uVar6;
         uVar6 = Memory::alloc_static(( ulong ) * (uint*)( pauVar8[1] + 8 ) * 0x38, false);
         uVar3 = *(uint*)( pauVar8[1] + 8 );
         *(undefined8*)*pauVar8 = uVar6;
         __s = (void*)Memory::alloc_static((ulong)uVar3 << 2, false);
         uVar3 = *(uint*)( pauVar8[1] + 8 );
         *(void**)pauVar8[1] = __s;
         if (uVar3 != 0) {
            memset(__s, 0, (ulong)uVar3 << 2);
         }

         lVar10 = lVar10 + 0x20;
      }
 while ( ( (ulong)uVar11 + 1 + ( ulong )(uVar1 - uVar11) ) * 0x20 != lVar10 );
   }

   LAB_0010bf12:*(uint*)this = param_1;
   return;
}
/* WARNING: Removing unreachable block (ram,0x0010c1b0) *//* WARNING: Removing unreachable block (ram,0x0010c345) *//* WARNING: Removing unreachable block (ram,0x0010c351) *//* String vformat<unsigned int, char const*>(String const&, unsigned int const, char const* const)
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

   }
 while ( pVVar2 != local_88 );
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
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
/* CowData<StringName>::_unref() */void CowData<StringName>::_unref(CowData<StringName> *this) {
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
            }
 while ( lVar2 != lVar5 );
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
}
/* CowData<StringName>::_realloc(long) */undefined8 CowData<StringName>::_realloc(CowData<StringName> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<StringName>::resize<false>(long) */undefined8 CowData<StringName>::resize<false>(CowData<StringName> *this, long param_1) {
   code *pcVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   long lVar4;
   long lVar5;
   ulong uVar6;
   undefined8 *puVar7;
   long lVar8;
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
      LAB_0010c880:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar6 = param_1 * 8 - 1;
   uVar6 = uVar6 >> 1 | uVar6;
   uVar6 = uVar6 | uVar6 >> 2;
   uVar6 = uVar6 | uVar6 >> 4;
   uVar6 = uVar6 | uVar6 >> 8;
   uVar6 = uVar6 | uVar6 >> 0x10;
   uVar6 = uVar6 | uVar6 >> 0x20;
   lVar8 = uVar6 + 1;
   if (lVar8 == 0) goto LAB_0010c880;
   if (param_1 <= lVar4) {
      lVar4 = *(long*)this;
      uVar6 = param_1;
      while (lVar4 != 0) {
         if (*(ulong*)( lVar4 + -8 ) <= uVar6) {
            LAB_0010c75a:if (lVar8 != lVar5) {
               uVar2 = _realloc(this, lVar8);
               if ((int)uVar2 != 0) {
                  return uVar2;
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

         while (( StringName::configured == '\0' || ( *(long*)( lVar4 + uVar6 * 8 ) == 0 ) )) {
            uVar6 = uVar6 + 1;
            if (*(ulong*)( lVar4 + -8 ) <= uVar6) goto LAB_0010c75a;
         }
;
         StringName::unref();
         uVar6 = uVar6 + 1;
         lVar4 = *(long*)this;
      }
;
      goto LAB_0010c727;
   }

   if (lVar8 == lVar5) {
      LAB_0010c7fb:puVar7 = *(undefined8**)this;
      if (puVar7 == (undefined8*)0x0) {
         LAB_0010c727:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      lVar4 = puVar7[-1];
      if (param_1 <= lVar4) goto LAB_0010c7db;
   }
 else {
      if (lVar4 != 0) {
         uVar2 = _realloc(this, lVar8);
         if ((int)uVar2 != 0) {
            return uVar2;
         }

         goto LAB_0010c7fb;
      }

      puVar3 = (undefined8*)Memory::alloc_static(uVar6 + 0x11, false);
      if (puVar3 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar7 = puVar3 + 2;
      *puVar3 = 1;
      puVar3[1] = 0;
      *(undefined8**)this = puVar7;
      lVar4 = 0;
   }

   memset(puVar7 + lVar4, 0, ( param_1 - lVar4 ) * 8);
   LAB_0010c7db:puVar7[-1] = param_1;
   return 0;
}
/* CowData<int>::_realloc(long) */undefined8 CowData<int>::_realloc(CowData<int> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<int>::resize<false>(long) */undefined8 CowData<int>::resize<false>(CowData<int> *this, long param_1) {
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
      lVar3 = lVar9 * 4;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 4 == 0) {
      LAB_0010cb60:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 4 - 1;
   uVar4 = uVar4 | uVar4 >> 1;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar8 = uVar4 + 1;
   if (lVar8 == 0) goto LAB_0010cb60;
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
            goto LAB_0010ca71;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_0010ca71:puVar7[-1] = param_1;
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
/* OAHashMap<unsigned long, ShaderGLES3::Version::Specialization, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned long> >::_resize_and_rehash(unsigned int) */void OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::_resize_and_rehash(OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>> *this, uint param_1) {
   uint uVar1;
   undefined8 *puVar2;
   void *pvVar3;
   uint *puVar4;
   undefined8 uVar5;
   long lVar6;
   long lVar7;
   void *pvVar8;
   undefined8 *puVar9;
   uint *puVar10;
   uVar1 = *(uint*)( this + 0x18 );
   puVar2 = *(undefined8**)( this + 8 );
   if (param_1 == 0) {
      param_1 = 1;
   }

   pvVar3 = *(void**)this;
   *(undefined4*)( this + 0x1c ) = 0;
   *(uint*)( this + 0x18 ) = param_1;
   puVar4 = *(uint**)( this + 0x10 );
   uVar5 = Memory::alloc_static((ulong)param_1 * 8, false);
   *(undefined8*)( this + 8 ) = uVar5;
   uVar5 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0x38, false);
   *(undefined8*)this = uVar5;
   lVar6 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) << 2, false);
   *(long*)( this + 0x10 ) = lVar6;
   if (*(int*)( this + 0x18 ) != 0) {
      lVar7 = 0;
      do {
         *(undefined4*)( lVar6 + lVar7 * 4 ) = 0;
         lVar7 = lVar7 + 1;
      }
 while ( (uint)lVar7 < *(uint*)( this + 0x18 ) );
   }

   if (uVar1 != 0) {
      pvVar8 = pvVar3;
      puVar9 = puVar2;
      puVar10 = puVar4;
      do {
         if (*puVar10 != 0) {
            _insert_with_hash((uint)this, (ulong*)( ulong ) * puVar10, (Specialization*)*puVar9);
            if (*(void**)( (long)pvVar8 + 0x28 ) != (void*)0x0) {
               if (*(int*)( (long)pvVar8 + 0x20 ) != 0) {
                  *(undefined4*)( (long)pvVar8 + 0x20 ) = 0;
               }

               Memory::free_static(*(void**)( (long)pvVar8 + 0x28 ), false);
            }

            if (*(void**)( (long)pvVar8 + 0x18 ) != (void*)0x0) {
               if (*(int*)( (long)pvVar8 + 0x10 ) != 0) {
                  *(undefined4*)( (long)pvVar8 + 0x10 ) = 0;
               }

               Memory::free_static(*(void**)( (long)pvVar8 + 0x18 ), false);
            }

         }

         puVar9 = puVar9 + 1;
         puVar10 = puVar10 + 1;
         pvVar8 = (void*)( (long)pvVar8 + 0x38 );
      }
 while ( puVar9 != puVar2 + uVar1 );
      Memory::free_static(puVar2, false);
      Memory::free_static(pvVar3, false);
      Memory::free_static(puVar4, false);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OAHashMap<unsigned long, ShaderGLES3::Version::Specialization, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned long> >::TEMPNAMEPLACEHOLDERVALUE(OAHashMap<unsigned long,
   ShaderGLES3::Version::Specialization, HashMapHasherDefault, HashMapComparatorDefault<unsigned
   long> > const&) */void OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::operator =(OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>> *this, OAHashMap *param_1) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   int *piVar3;
   long lVar4;
   code *pcVar5;
   uint uVar6;
   ulong uVar7;
   ulong uVar8;
   long lVar9;
   long lVar10;
   ulong uVar11;
   uint uVar12;
   ulong *puVar13;
   long *plVar14;
   uint uVar15;
   Specialization *pSVar16;
   uint local_3c;
   if (*(int*)( this + 0x18 ) != 0) {
      lVar10 = 0;
      do {
         piVar3 = (int*)( *(long*)( this + 0x10 ) + lVar10 * 4 );
         if (*piVar3 != 0) {
            *piVar3 = 0;
            lVar4 = *(long*)this + lVar10 * 0x38;
            if (*(void**)( lVar4 + 0x28 ) != (void*)0x0) {
               if (*(int*)( lVar4 + 0x20 ) != 0) {
                  *(undefined4*)( lVar4 + 0x20 ) = 0;
               }

               Memory::free_static(*(void**)( lVar4 + 0x28 ), false);
            }

            if (*(void**)( lVar4 + 0x18 ) != (void*)0x0) {
               if (*(int*)( lVar4 + 0x10 ) != 0) {
                  *(undefined4*)( lVar4 + 0x10 ) = 0;
               }

               Memory::free_static(*(void**)( lVar4 + 0x18 ), false);
            }

         }

         lVar10 = lVar10 + 1;
      }
 while ( (uint)lVar10 < *(uint*)( this + 0x18 ) );
      *(undefined4*)( this + 0x1c ) = 0;
   }

   _resize_and_rehash(this, *(uint*)( param_1 + 0x18 ));
   uVar8 = 0;
   do {
      uVar7 = uVar8;
      if (uVar7 == *(uint*)( param_1 + 0x18 )) {
         return;
      }

      uVar8 = uVar7 + 1;
   }
 while ( *(int*)( *(long*)( param_1 + 0x10 ) + uVar7 * 4 ) == 0 );
   local_3c = (uint)uVar7;
   while (true) {
      local_3c = local_3c + 1;
      uVar15 = *(uint*)( this + 0x18 );
      uVar11 = (ulong)uVar15;
      plVar14 = (long*)( *(long*)( param_1 + 8 ) + uVar7 * 8 );
      pSVar16 = (Specialization*)*plVar14;
      puVar1 = (undefined8*)( *(long*)param_1 + uVar7 * 0x38 );
      uVar8 = (long)pSVar16 * 0x3ffff - 1;
      uVar8 = ( uVar8 ^ uVar8 >> 0x1f ) * 0x15;
      uVar8 = ( uVar8 ^ uVar8 >> 0xb ) * 0x41;
      uVar8 = uVar8 >> 0x16 ^ uVar8;
      puVar13 = (ulong*)( uVar8 & 0xffffffff );
      if ((int)uVar8 == 0) {
         puVar13 = (ulong*)0x1;
      }

      uVar8 = (ulong)puVar13 % uVar11;
      uVar6 = *(uint*)( *(long*)( this + 0x10 ) + uVar8 * 4 );
      if (uVar6 != 0) break;
      LAB_0010cf50:if ((double)uVar11 * __LC96 < (double)( *(int*)( this + 0x1c ) + 1 )) {
         _resize_and_rehash(this, uVar15 * 2);
         pSVar16 = (Specialization*)*plVar14;
         uVar8 = (long)pSVar16 * 0x3ffff - 1;
         uVar8 = ( uVar8 ^ uVar8 >> 0x1f ) * 0x15;
         uVar8 = ( uVar8 >> 0xb ^ uVar8 ) * 0x41;
         uVar8 = uVar8 >> 0x16 ^ uVar8;
         puVar13 = (ulong*)( uVar8 & 0xffffffff );
         if ((int)uVar8 == 0) {
            puVar13 = (ulong*)0x1;
         }

      }

      _insert_with_hash((uint)this, puVar13, pSVar16);
      LAB_0010cf00:uVar8 = (ulong)local_3c;
      do {
         uVar7 = uVar8;
         local_3c = (uint)uVar7;
         if (*(uint*)( param_1 + 0x18 ) <= local_3c) {
            return;
         }

         uVar8 = uVar7 + 1;
      }
 while ( *(int*)( *(long*)( param_1 + 0x10 ) + uVar7 * 4 ) == 0 );
   }
;
   uVar12 = 0;
   LAB_0010ce59:if (( (uint)puVar13 != uVar6 ) || ( pSVar16 != *(Specialization**)( *(long*)( this + 8 ) + uVar8 * 8 ) )) goto LAB_0010ce20;
   puVar2 = (undefined8*)( *(long*)this + uVar8 * 0x38 );
   *puVar2 = *puVar1;
   uVar15 = *(uint*)( puVar1 + 2 );
   *(undefined4*)( puVar2 + 1 ) = *(undefined4*)( puVar1 + 1 );
   if (uVar15 < *(uint*)( puVar2 + 2 )) {
      *(uint*)( puVar2 + 2 ) = uVar15;
   }
 else if (*(uint*)( puVar2 + 2 ) < uVar15) {
      if (*(uint*)( (long)puVar2 + 0x14 ) < uVar15) {
         uVar6 = uVar15 - 1 >> 1 | uVar15 - 1;
         uVar6 = uVar6 >> 2 | uVar6;
         uVar6 = uVar6 >> 4 | uVar6;
         uVar6 = uVar6 | uVar6 >> 8;
         uVar6 = ( uVar6 | uVar6 >> 0x10 ) + 1;
         *(uint*)( (long)puVar2 + 0x14 ) = uVar6;
         lVar10 = Memory::realloc_static((void*)puVar2[3], (ulong)uVar6 * 4, false);
         puVar2[3] = lVar10;
         if (lVar10 == 0) goto LAB_0010d10d;
      }

      *(uint*)( puVar2 + 2 ) = uVar15;
      uVar15 = *(uint*)( puVar1 + 2 );
   }

   if (uVar15 != 0) {
      lVar10 = puVar1[3];
      lVar4 = puVar2[3];
      lVar9 = 0;
      do {
         *(undefined4*)( lVar4 + lVar9 * 4 ) = *(undefined4*)( lVar10 + lVar9 * 4 );
         lVar9 = lVar9 + 1;
      }
 while ( (uint)lVar9 < *(uint*)( puVar1 + 2 ) );
   }

   uVar15 = *(uint*)( puVar1 + 4 );
   if (uVar15 < *(uint*)( puVar2 + 4 )) {
      *(uint*)( puVar2 + 4 ) = uVar15;
   }
 else if (*(uint*)( puVar2 + 4 ) < uVar15) {
      if (*(uint*)( (long)puVar2 + 0x24 ) < uVar15) {
         uVar6 = uVar15 - 1 | uVar15 - 1 >> 1;
         uVar6 = uVar6 | uVar6 >> 2;
         uVar6 = uVar6 | uVar6 >> 4;
         uVar6 = uVar6 >> 8 | uVar6;
         uVar6 = ( uVar6 >> 0x10 | uVar6 ) + 1;
         *(uint*)( (long)puVar2 + 0x24 ) = uVar6;
         lVar10 = Memory::realloc_static((void*)puVar2[5], (ulong)uVar6 * 4, false);
         puVar2[5] = lVar10;
         if (lVar10 == 0) {
            LAB_0010d10d:_err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar5 = (code*)invalidInstructionException();
            ( *pcVar5 )();
         }

      }

      *(uint*)( puVar2 + 4 ) = uVar15;
      uVar15 = *(uint*)( puVar1 + 4 );
   }

   if (uVar15 != 0) {
      lVar10 = puVar1[5];
      lVar4 = puVar2[5];
      lVar9 = 0;
      do {
         *(undefined4*)( lVar4 + lVar9 * 4 ) = *(undefined4*)( lVar10 + lVar9 * 4 );
         lVar9 = lVar9 + 1;
      }
 while ( (uint)lVar9 < *(uint*)( puVar1 + 4 ) );
   }

   *(undefined2*)( puVar2 + 6 ) = *(undefined2*)( puVar1 + 6 );
   goto LAB_0010cf00;
   LAB_0010ce20:uVar12 = uVar12 + 1;
   uVar8 = ( ulong )((int)uVar8 + 1) % uVar11;
   uVar6 = *(uint*)( *(long*)( this + 0x10 ) + uVar8 * 4 );
   if (( uVar6 == 0 ) || ( ( ( uVar15 + (int)uVar8 ) - uVar6 % uVar15 ) % uVar15 < uVar12 )) goto LAB_0010cf50;
   goto LAB_0010ce59;
}
/* CowData<CharString>::_unref() */void CowData<CharString>::_unref(CowData<CharString> *this) {
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
/* ShaderGLES3::Version::~Version() */void ShaderGLES3::Version::~Version(Version *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   void *pvVar4;
   long lVar5;
   if (*(long*)( this + 0x70 ) != 0) {
      LocalVector<OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>,unsigned_int,false,false>::resize((LocalVector<OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>,unsigned_int,false,false>*)( this + 0x68 ), 0);
      if (*(void**)( this + 0x70 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 0x70 ), false);
      }

   }

   CowData<CharString>::_unref((CowData<CharString>*)( this + 0x60 ));
   pvVar4 = *(void**)( this + 0x30 );
   if (pvVar4 != (void*)0x0) {
      if (*(int*)( this + 0x54 ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x50 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x54 ) = 0;
            *(undefined1(*) [16])( this + 0x40 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x38 ) + lVar5 ) != 0) {
                  pvVar4 = *(void**)( (long)pvVar4 + lVar5 * 2 );
                  *(int*)( *(long*)( this + 0x38 ) + lVar5 ) = 0;
                  if (*(long*)( (long)pvVar4 + 0x18 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar4 + 0x18 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar4 + 0x18 );
                        *(undefined8*)( (long)pvVar4 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar4 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar4, false);
                  pvVar4 = *(void**)( this + 0x30 );
                  *(undefined8*)( (long)pvVar4 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( lVar5 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x54 ) = 0;
            *(undefined1(*) [16])( this + 0x40 ) = (undefined1[16])0x0;
            if (pvVar4 == (void*)0x0) goto LAB_0010d35d;
         }

      }

      Memory::free_static(pvVar4, false);
      Memory::free_static(*(void**)( this + 0x38 ), false);
   }

   LAB_0010d35d:if (*(long*)( this + 0x20 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x20 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar5 = *(long*)( this + 0x20 );
         *(undefined8*)( this + 0x20 ) = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x18 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x18 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar5 = *(long*)( this + 0x18 );
         *(undefined8*)( this + 0x18 ) = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x10 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x10 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar5 = *(long*)( this + 0x10 );
         *(undefined8*)( this + 0x10 ) = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   pvVar4 = *(void**)( this + 8 );
   if (pvVar4 == (void*)0x0) {
      return;
   }

   if (*(int*)this != 0) {
      lVar5 = 0;
      do {
         if (( StringName::configured != '\0' ) && ( *(long*)( lVar5 * 0x10 + (long)pvVar4 ) != 0 )) {
            StringName::unref();
            pvVar4 = *(void**)( this + 8 );
         }

         lVar5 = lVar5 + 1;
      }
 while ( (uint)lVar5 < *(uint*)this );
      *(undefined4*)this = 0;
      if (pvVar4 == (void*)0x0) {
         return;
      }

   }

   Memory::free_static(pvVar4, false);
   return;
}
/* RID_Alloc<ShaderGLES3::Version, true>::~RID_Alloc() */void RID_Alloc<ShaderGLES3::Version,true>::~RID_Alloc(RID_Alloc<ShaderGLES3::Version,true> *this) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   ulong uVar4;
   undefined8 *puVar5;
   ulong uVar6;
   long lVar7;
   Version *this_00;
   uint uVar8;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_0010fce8;
   uVar8 = *(uint*)( this + 0x20 );
   if (uVar8 == 0) {
      uVar4 = ( ulong ) * (uint*)( this + 0x1c );
      uVar8 = *(uint*)( this + 0x18 );
      puVar5 = *(undefined8**)( this + 8 );
      LAB_0010d613:if ((uint)uVar4 < uVar8) goto LAB_0010d65b;
      lVar7 = 0;
      while (true) {
         Memory::free_static((void*)puVar5[lVar7], false);
         lVar2 = lVar7 * 8;
         lVar7 = lVar7 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         if (( uint )(uVar4 / uVar8) <= (uint)lVar7) break;
         puVar5 = *(undefined8**)( this + 8 );
      }
;
   }
 else {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar8);
      print_error((String*)&local_48);
      pcVar3 = local_48;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar3 + -0x10, false);
         }

      }

      lVar7 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

      uVar8 = *(uint*)( this + 0x18 );
      puVar5 = *(undefined8**)( this + 8 );
      if (*(int*)( this + 0x1c ) != 0) {
         uVar6 = 0;
         do {
            this_00 = (Version*)( puVar5[uVar6 / uVar8] + ( uVar6 % (ulong)uVar8 ) * 0x80 );
            if (-1 < *(int*)( this_00 + 0x78 )) {
               ShaderGLES3::Version::~Version(this_00);
               uVar8 = *(uint*)( this + 0x18 );
               puVar5 = *(undefined8**)( this + 8 );
            }

            uVar4 = ( ulong ) * (uint*)( this + 0x1c );
            uVar6 = uVar6 + 1;
         }
 while ( uVar6 < uVar4 );
         goto LAB_0010d613;
      }

      if (uVar8 != 0) goto LAB_0010d65b;
      Memory::free_static((void*)*puVar5, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar5 = *(undefined8**)( this + 8 );
   LAB_0010d65b:if (puVar5 == (undefined8*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      Memory::free_static(puVar5, false);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(*(void**)( this + 0x10 ), false);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<ShaderGLES3::Version, true>::~RID_Alloc() */void RID_Alloc<ShaderGLES3::Version,true>::~RID_Alloc(RID_Alloc<ShaderGLES3::Version,true> *this) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   ulong uVar4;
   undefined8 *puVar5;
   ulong uVar6;
   long lVar7;
   Version *this_00;
   uint uVar8;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_0010fce8;
   uVar8 = *(uint*)( this + 0x20 );
   if (uVar8 == 0) {
      uVar4 = ( ulong ) * (uint*)( this + 0x1c );
      uVar8 = *(uint*)( this + 0x18 );
      puVar5 = *(undefined8**)( this + 8 );
      LAB_0010d853:if ((uint)uVar4 < uVar8) goto LAB_0010d89b;
      lVar7 = 0;
      while (true) {
         Memory::free_static((void*)puVar5[lVar7], false);
         lVar2 = lVar7 * 8;
         lVar7 = lVar7 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         if (( uint )(uVar4 / uVar8) <= (uint)lVar7) break;
         puVar5 = *(undefined8**)( this + 8 );
      }
;
   }
 else {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar8);
      print_error((String*)&local_48);
      pcVar3 = local_48;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar3 + -0x10, false);
         }

      }

      lVar7 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

      uVar8 = *(uint*)( this + 0x18 );
      puVar5 = *(undefined8**)( this + 8 );
      if (*(int*)( this + 0x1c ) != 0) {
         uVar6 = 0;
         do {
            this_00 = (Version*)( puVar5[uVar6 / uVar8] + ( uVar6 % (ulong)uVar8 ) * 0x80 );
            if (-1 < *(int*)( this_00 + 0x78 )) {
               ShaderGLES3::Version::~Version(this_00);
               uVar8 = *(uint*)( this + 0x18 );
               puVar5 = *(undefined8**)( this + 8 );
            }

            uVar4 = ( ulong ) * (uint*)( this + 0x1c );
            uVar6 = uVar6 + 1;
         }
 while ( uVar6 < uVar4 );
         goto LAB_0010d853;
      }

      if (uVar8 != 0) goto LAB_0010d89b;
      Memory::free_static((void*)*puVar5, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar5 = *(undefined8**)( this + 8 );
   LAB_0010d89b:if (puVar5 != (undefined8*)0x0) {
      Memory::free_static(puVar5, false);
      Memory::free_static(*(void**)( this + 0x10 ), false);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      operator_delete(this, 0x58);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<RenderingServer::ShaderNativeSourceCode::Version>::_realloc(long) */undefined8 CowData<RenderingServer::ShaderNativeSourceCode::Version>::_realloc(CowData<RenderingServer::ShaderNativeSourceCode::Version> *this, long param_1) {
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
/* HashMap<StringName, CharString, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
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
         }
 while ( uVar22 != uVar26 );
      }
 else {
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
            }
;
            *(undefined8*)( (long)__s_00 + lVar20 * 8 ) = uVar18;
            *puVar1 = uVar21;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar26 = uVar26 + 1;
      }
 while ( uVar26 != uVar3 );
      Memory::free_static(pvVar6, false);
      Memory::free_static(pvVar7, false);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, CharString, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, CharString> > >::operator[](StringName const&)
    */undefined8 * __thiscallHashMap<StringName,CharString,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,CharString>>>::operator [](HashMap<StringName,CharString,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,CharString>>> * this, StringName_conflict * param_1) * puVar1 ;undefined8 *puVar2ulong __nvoid *__sundefined1 auVar3[16]undefined1 auVar4[16]undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]uint uVar27uint uVar28undefined8 *puVar29long lVar30undefined8 uVar31void *__s_00ulong uVar32int iVar33long lVar34long lVar35long lVar36ulong uVar37uint uVar38uint uVar39uint uVar40undefined8 *puVar41long in_FS_OFFSETuint local_98undefined8 *local_80undefined8 local_70undefined1 local_68[16]long local_58long local_50[2]long local_40lVar30 = *(long*)( this + 8 );local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar27 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar37 = CONCAT44(0, uVar27);if (lVar30 == 0) {
   LAB_0010e180:local_70 = 0;
   uVar32 = uVar37 * 4;
   __n = uVar37 * 8;
   uVar31 = Memory::alloc_static(uVar32, false);
   *(undefined8*)( this + 0x10 ) = uVar31;
   __s_00 = (void*)Memory::alloc_static(__n, false);
   *(void**)( this + 8 ) = __s_00;
   if ((int)uVar37 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + __n ) ) && ( __s_00 < (void*)( (long)__s + uVar32 ) )) {
         uVar32 = 0;
         do {
            *(undefined4*)( (long)__s + uVar32 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar32 * 8 ) = 0;
            uVar32 = uVar32 + 1;
         }
 while ( uVar37 != uVar32 );
      }
 else {
         memset(__s, 0, uVar32);
         memset(__s_00, 0, __n);
      }

      LAB_0010dde9:iVar33 = *(int*)( this + 0x2c );
      if (iVar33 != 0) {
         LAB_0010ddf5:uVar27 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         uVar32 = CONCAT44(0, uVar27);
         lVar30 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar28 = StringName::get_empty_hash();
         }
 else {
            uVar28 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         if (uVar28 == 0) {
            uVar28 = 1;
         }

         uVar40 = 0;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = (ulong)uVar28 * lVar30;
         auVar19._8_8_ = 0;
         auVar19._0_8_ = uVar32;
         lVar35 = SUB168(auVar7 * auVar19, 8);
         uVar38 = *(uint*)( *(long*)( this + 0x10 ) + lVar35 * 4 );
         uVar39 = SUB164(auVar7 * auVar19, 8);
         if (uVar38 != 0) {
            do {
               if (( uVar28 == uVar38 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar35 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                  lVar30 = *(long*)( *(long*)( this + 8 ) + (ulong)uVar39 * 8 );
                  if (*(long*)( lVar30 + 0x18 ) == 0) {
                     local_80 = (undefined8*)( lVar30 + 0x18 );
                  }
 else {
                     CowData<char>::_ref((CowData<char>*)( lVar30 + 0x18 ), (CowData*)&local_70);
                     local_80 = (undefined8*)( *(long*)( *(long*)( this + 8 ) + (ulong)uVar39 * 8 ) + 0x18 );
                  }

                  goto LAB_0010e0e4;
               }

               uVar40 = uVar40 + 1;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = ( ulong )(uVar39 + 1) * lVar30;
               auVar20._8_8_ = 0;
               auVar20._0_8_ = uVar32;
               lVar35 = SUB168(auVar8 * auVar20, 8);
               uVar38 = *(uint*)( *(long*)( this + 0x10 ) + lVar35 * 4 );
               uVar39 = SUB164(auVar8 * auVar20, 8);
            }
 while ( ( uVar38 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar38 * lVar30,auVar21._8_8_ = 0,auVar21._0_8_ = uVar32,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar27 + uVar39 ) - SUB164(auVar9 * auVar21, 8)) * lVar30,auVar22._8_8_ = 0,auVar22._0_8_ = uVar32,uVar40 <= SUB164(auVar10 * auVar22, 8) );
         }

         iVar33 = *(int*)( this + 0x2c );
      }

      goto LAB_0010df0c;
   }

   iVar33 = *(int*)( this + 0x2c );
   if (__s_00 == (void*)0x0) goto LAB_0010df0c;
   if (*(int*)( this + 0x2c ) != 0) goto LAB_0010ddf5;
   LAB_0010df2e:if (*(int*)( this + 0x28 ) == 0x1c) {
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      local_80 = (undefined8*)0x18;
      goto LAB_0010e0e4;
   }

   _resize_and_rehash(this, *(int*)( this + 0x28 ) + 1);
}
 else {
   if (*(int*)( this + 0x2c ) != 0) {
      lVar35 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar28 = StringName::get_empty_hash();
         lVar30 = *(long*)( this + 8 );
      }
 else {
         uVar28 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar28 == 0) {
         uVar28 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar28 * lVar35;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar37;
      lVar34 = SUB168(auVar3 * auVar15, 8);
      uVar38 = *(uint*)( *(long*)( this + 0x10 ) + lVar34 * 4 );
      uVar39 = SUB164(auVar3 * auVar15, 8);
      if (uVar38 != 0) {
         uVar40 = 0;
         do {
            if (( uVar38 == uVar28 ) && ( *(long*)( *(long*)( lVar30 + lVar34 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               local_80 = (undefined8*)( *(long*)( lVar30 + (ulong)uVar39 * 8 ) + 0x18 );
               goto LAB_0010dd9c;
            }

            uVar40 = uVar40 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar39 + 1) * lVar35;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar37;
            lVar34 = SUB168(auVar4 * auVar16, 8);
            uVar38 = *(uint*)( *(long*)( this + 0x10 ) + lVar34 * 4 );
            uVar39 = SUB164(auVar4 * auVar16, 8);
         }
 while ( ( uVar38 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar38 * lVar35,auVar17._8_8_ = 0,auVar17._0_8_ = uVar37,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar39 + uVar27 ) - SUB164(auVar5 * auVar17, 8)) * lVar35,auVar18._8_8_ = 0,auVar18._0_8_ = uVar37,uVar40 <= SUB164(auVar6 * auVar18, 8) );
      }

      local_70 = 0;
      uVar37 = ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar30 == 0) goto LAB_0010e180;
      goto LAB_0010dde9;
   }

   local_70 = 0;
   iVar33 = 0;
   LAB_0010df0c:if ((float)uVar37 * __LC111 < (float)( iVar33 + 1 )) goto LAB_0010df2e;
}
local_68 = (undefined1[16])0x0;StringName::StringName((StringName_conflict*)&local_58, param_1);local_50[0] = 0;puVar29 = (undefined8*)operator_new(0x20, "");*puVar29 = local_68._0_8_;puVar29[1] = local_68._8_8_;StringName::StringName((StringName_conflict*)( puVar29 + 2 ), (StringName_conflict*)&local_58);puVar29[3] = 0;if (local_50[0] != 0) {
   CowData<char>::_ref((CowData<char>*)( puVar29 + 3 ), (CowData*)local_50);
}
local_80 = puVar29 + 3;CowData<char>::_unref((CowData<char>*)local_50);if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
   StringName::unref();
}
puVar41 = *(undefined8**)( this + 0x20 );if (puVar41 == (undefined8*)0x0) {
   lVar30 = *(long*)param_1;
   *(undefined8**)( this + 0x18 ) = puVar29;
   *(undefined8**)( this + 0x20 ) = puVar29;
   if (lVar30 == 0) goto LAB_0010e155;
   LAB_0010e007:uVar27 = *(uint*)( lVar30 + 0x20 );
}
 else {
   *puVar41 = puVar29;
   puVar29[1] = puVar41;
   lVar30 = *(long*)param_1;
   *(undefined8**)( this + 0x20 ) = puVar29;
   if (lVar30 != 0) goto LAB_0010e007;
   LAB_0010e155:uVar27 = StringName::get_empty_hash();
}
lVar30 = *(long*)( this + 0x10 );if (uVar27 == 0) {
   uVar27 = 1;
}
uVar37 = (ulong)uVar27;uVar39 = 0;lVar35 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar28 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar32 = CONCAT44(0, uVar28);auVar11._8_8_ = 0;auVar11._0_8_ = uVar37 * lVar35;auVar23._8_8_ = 0;auVar23._0_8_ = uVar32;lVar36 = SUB168(auVar11 * auVar23, 8);lVar34 = *(long*)( this + 8 );puVar1 = (uint*)( lVar30 + lVar36 * 4 );iVar33 = SUB164(auVar11 * auVar23, 8);uVar38 = *puVar1;while (uVar38 != 0) {
   auVar12._8_8_ = 0;
   auVar12._0_8_ = (ulong)uVar38 * lVar35;
   auVar24._8_8_ = 0;
   auVar24._0_8_ = uVar32;
   auVar13._8_8_ = 0;
   auVar13._0_8_ = ( ulong )(( uVar28 + iVar33 ) - SUB164(auVar12 * auVar24, 8)) * lVar35;
   auVar25._8_8_ = 0;
   auVar25._0_8_ = uVar32;
   local_98 = SUB164(auVar13 * auVar25, 8);
   puVar41 = puVar29;
   if (local_98 < uVar39) {
      *puVar1 = (uint)uVar37;
      uVar37 = (ulong)uVar38;
      puVar2 = (undefined8*)( lVar34 + lVar36 * 8 );
      puVar41 = (undefined8*)*puVar2;
      *puVar2 = puVar29;
      uVar39 = local_98;
   }

   uVar27 = (uint)uVar37;
   uVar39 = uVar39 + 1;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = ( ulong )(iVar33 + 1) * lVar35;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = uVar32;
   lVar36 = SUB168(auVar14 * auVar26, 8);
   puVar1 = (uint*)( lVar30 + lVar36 * 4 );
   iVar33 = SUB164(auVar14 * auVar26, 8);
   puVar29 = puVar41;
   uVar38 = *puVar1;
}
;*(undefined8**)( lVar34 + lVar36 * 8 ) = puVar29;*puVar1 = uVar27;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0010e0e4:CowData<char>::_unref((CowData<char>*)&local_70);LAB_0010dd9c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return local_80;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* CowData<unsigned char>::_realloc(long) */undefined8 CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this, long param_1) {
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
/* CowData<char const*>::_realloc(long) */undefined8 CowData<char_const*>::_realloc(CowData<char_const*> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<char const*>::resize<false>(long) */undefined8 CowData<char_const*>::resize<false>(CowData<char_const*> *this, long param_1) {
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
      LAB_0010e580:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar8 == 0) goto LAB_0010e580;
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
            goto LAB_0010e491;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_0010e491:puVar7[-1] = param_1;
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
/* CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage>::_unref() */void CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage>::_unref(CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage> *this) {
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
/* CowData<RenderingServer::ShaderNativeSourceCode::Version>::_unref() */void CowData<RenderingServer::ShaderNativeSourceCode::Version>::_unref(CowData<RenderingServer::ShaderNativeSourceCode::Version> *this) {
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
            }
 while ( lVar3 != lVar5 );
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
}
/* CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage>::_realloc(long) */undefined8 CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage>::_realloc(CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage>::resize<false>(long) */undefined8 CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage>::resize<false>(CowData<RenderingServer::ShaderNativeSourceCode::Version::Stage> *this, long param_1) {
   long *plVar1;
   long *plVar2;
   code *pcVar3;
   undefined8 *puVar4;
   undefined1(*pauVar5)[16];
   undefined1(*pauVar6)[16];
   undefined8 uVar7;
   long lVar8;
   undefined8 *puVar9;
   long lVar10;
   ulong uVar11;
   long lVar12;
   undefined1(*pauVar13)[16];
   ulong uVar14;
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
      lVar10 = 0;
   }
 else {
      lVar8 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar8) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar10 = lVar8 * 0x10;
      if (lVar10 != 0) {
         uVar11 = lVar10 - 1U | lVar10 - 1U >> 1;
         uVar11 = uVar11 | uVar11 >> 2;
         uVar11 = uVar11 | uVar11 >> 4;
         uVar11 = uVar11 | uVar11 >> 8;
         uVar11 = uVar11 | uVar11 >> 0x10;
         lVar10 = ( uVar11 | uVar11 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x10 == 0) {
      LAB_0010eaa0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar11 = param_1 * 0x10 - 1;
   uVar11 = uVar11 >> 1 | uVar11;
   uVar11 = uVar11 | uVar11 >> 2;
   uVar11 = uVar11 | uVar11 >> 4;
   uVar11 = uVar11 | uVar11 >> 8;
   uVar11 = uVar11 | uVar11 >> 0x10;
   uVar11 = uVar11 | uVar11 >> 0x20;
   lVar12 = uVar11 + 1;
   if (lVar12 == 0) goto LAB_0010eaa0;
   uVar14 = param_1;
   if (param_1 <= lVar8) {
      while (lVar8 = *(long*)this,lVar8 != 0) {
         if (*(ulong*)( lVar8 + -8 ) <= uVar14) {
            if (lVar12 != lVar10) {
               uVar7 = _realloc(this, lVar12);
               if ((int)uVar7 != 0) {
                  return uVar7;
               }

               lVar8 = *(long*)this;
               if (lVar8 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

            }

            *(long*)( lVar8 + -8 ) = param_1;
            return 0;
         }

         plVar2 = (long*)( lVar8 + uVar14 * 0x10 );
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

         uVar14 = uVar14 + 1;
      }
;
      goto LAB_0010eaf6;
   }

   if (lVar12 == lVar10) {
      LAB_0010ea0b:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_0010eaf6:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar8 = puVar9[-1];
      if (param_1 <= lVar8) goto LAB_0010e930;
   }
 else {
      if (lVar8 != 0) {
         uVar7 = _realloc(this, lVar12);
         if ((int)uVar7 != 0) {
            return uVar7;
         }

         goto LAB_0010ea0b;
      }

      puVar4 = (undefined8*)Memory::alloc_static(uVar11 + 0x11, false);
      if (puVar4 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar9 = puVar4 + 2;
      *puVar4 = 1;
      puVar4[1] = 0;
      *(undefined8**)this = puVar9;
      lVar8 = 0;
   }

   pauVar13 = (undefined1(*) [16])( puVar9 + param_1 * 2 );
   pauVar5 = (undefined1(*) [16])( puVar9 + lVar8 * 2 );
   if (( (int)pauVar13 - (int)pauVar5 & 0x10U ) != 0) {
      *pauVar5 = (undefined1[16])0x0;
      pauVar5 = pauVar5 + 1;
      if (pauVar5 == pauVar13) goto LAB_0010e930;
   }

   do {
      *pauVar5 = (undefined1[16])0x0;
      pauVar6 = pauVar5 + 2;
      pauVar5[1] = (undefined1[16])0x0;
      pauVar5 = pauVar6;
   }
 while ( pauVar6 != pauVar13 );
   LAB_0010e930:puVar9[-1] = param_1;
   return 0;
}
/* CowData<CharString>::_realloc(long) */undefined8 CowData<CharString>::_realloc(CowData<CharString> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<CharString>::resize<false>(long) */undefined8 CowData<CharString>::resize<false>(CowData<CharString> *this, long param_1) {
   long *plVar1;
   long *plVar2;
   code *pcVar3;
   undefined8 uVar4;
   undefined8 *puVar5;
   long lVar6;
   long lVar7;
   ulong uVar8;
   undefined8 *puVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar6 = 0;
      lVar7 = 0;
   }
 else {
      lVar6 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar6) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar7 = lVar6 * 8;
      if (lVar7 != 0) {
         uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
         uVar8 = uVar8 | uVar8 >> 2;
         uVar8 = uVar8 | uVar8 >> 4;
         uVar8 = uVar8 | uVar8 >> 8;
         uVar8 = uVar8 | uVar8 >> 0x10;
         lVar7 = ( uVar8 | uVar8 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_0010ede0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar8 = param_1 * 8 - 1;
   uVar8 = uVar8 >> 1 | uVar8;
   uVar8 = uVar8 | uVar8 >> 2;
   uVar8 = uVar8 | uVar8 >> 4;
   uVar8 = uVar8 | uVar8 >> 8;
   uVar8 = uVar8 | uVar8 >> 0x10;
   uVar8 = uVar8 | uVar8 >> 0x20;
   lVar10 = uVar8 + 1;
   if (lVar10 == 0) goto LAB_0010ede0;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_0010ecb9:if (lVar10 != lVar7) {
               uVar4 = _realloc(this, lVar10);
               if ((int)uVar4 != 0) {
                  return uVar4;
               }

               lVar6 = *(long*)this;
               if (lVar6 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

            }

            *(long*)( lVar6 + -8 ) = param_1;
            return 0;
         }

         while (true) {
            plVar2 = (long*)( lVar6 + uVar8 * 8 );
            if (*plVar2 != 0) break;
            uVar8 = uVar8 + 1;
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_0010ecb9;
         }
;
         LOCK();
         plVar1 = (long*)( *plVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar6 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

         uVar8 = uVar8 + 1;
         lVar6 = *(long*)this;
      }
;
      goto LAB_0010ee36;
   }

   if (lVar10 == lVar7) {
      LAB_0010ed5f:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_0010ee36:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_0010ed4a;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_0010ed5f;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar8 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar9 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar9;
      lVar6 = 0;
   }

   memset(puVar9 + lVar6, 0, ( param_1 - lVar6 ) * 8);
   LAB_0010ed4a:puVar9[-1] = param_1;
   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, CharString, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
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
            }
 while ( uVar22 != uVar32 );
         }
 else {
            memset(__s, 0, uVar32);
            memset(__s_00, 0, uVar34);
         }

         goto LAB_0010ee92;
      }

      iVar28 = *(int*)( param_2 + 0x2c );
      if (__s_00 == (void*)0x0) goto LAB_0010efa9;
      if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_0010ee9e;
      LAB_0010efcb:if (*(int*)( param_2 + 0x28 ) == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         local_80 = (long*)0x0;
         goto LAB_0010f19b;
      }

      _resize_and_rehash((HashMap<StringName,CharString,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,CharString>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
   }
 else {
      LAB_0010ee92:iVar28 = *(int*)( param_2 + 0x2c );
      if (iVar28 != 0) {
         LAB_0010ee9e:uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
         uVar32 = CONCAT44(0, uVar3);
         lVar25 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         if (*(long*)pSVar29 == 0) {
            uVar24 = StringName::get_empty_hash();
         }
 else {
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

                  goto LAB_0010f19b;
               }

               uVar35 = uVar35 + 1;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(uVar27 + 1) * lVar25;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = uVar32;
               lVar30 = SUB168(auVar7 * auVar15, 8);
               uVar33 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar30 * 4 );
               uVar27 = SUB164(auVar7 * auVar15, 8);
            }
 while ( ( uVar33 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar33 * lVar25,auVar16._8_8_ = 0,auVar16._0_8_ = uVar32,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar3 + uVar27 ) - SUB164(auVar8 * auVar16, 8)) * lVar25,auVar17._8_8_ = 0,auVar17._0_8_ = uVar32,uVar35 <= SUB164(auVar9 * auVar17, 8) );
         }

         iVar28 = *(int*)( param_2 + 0x2c );
      }

      LAB_0010efa9:if ((float)uVar23 * __LC111 < (float)( iVar28 + 1 )) goto LAB_0010efcb;
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
      LAB_0010f0bc:lVar25 = *(long*)pSVar29;
      if (lVar25 != 0) goto LAB_0010f0c9;
      LAB_0010f1f1:uVar23 = StringName::get_empty_hash();
   }
 else {
      if (in_R8B == '\0') {
         *puVar4 = local_80;
         local_80[1] = (long)puVar4;
         *(long**)( param_2 + 0x20 ) = local_80;
         goto LAB_0010f0bc;
      }

      lVar25 = *(long*)( param_2 + 0x18 );
      *(long**)( lVar25 + 8 ) = local_80;
      *local_80 = lVar25;
      lVar25 = *(long*)pSVar29;
      *(long**)( param_2 + 0x18 ) = local_80;
      if (lVar25 == 0) goto LAB_0010f1f1;
      LAB_0010f0c9:uVar23 = *(uint*)( lVar25 + 0x20 );
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
   }
;
   *(long**)( lVar5 + lVar31 * 8 ) = plVar1;
   *puVar2 = uVar23;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_0010f19b:*(long**)param_1 = local_80;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<ShaderGLES3::Version, true>::initialize_rid(RID, ShaderGLES3::Version const&) */void RID_Alloc<ShaderGLES3::Version,true>::initialize_rid(RID_Alloc<ShaderGLES3::Version,true> *this, ulong param_2, uint *param_3) {
   uint uVar1;
   uint uVar2;
   long lVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   long *plVar7;
   long lVar8;
   StringName_conflict *this_00;
   uint uVar9;
   uint *puVar10;
   uint uVar11;
   StringName_conflict *pSVar12;
   long in_FS_OFFSET;
   bool bVar13;
   StringName_conflict aSStack_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1c ) )) {
      puVar10 = (uint*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x18 ) ) * 0x80 + *(long*)( *(long*)( this + 8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x18 ) ) * 8 ) );
      if ((int)puVar10[0x1e] < 0) {
         uVar2 = ( uint )(param_2 >> 0x20);
         if (uVar2 == ( puVar10[0x1e] & 0x7fffffff )) {
            uVar1 = *param_3;
            puVar10[0x1e] = uVar2;
            for (int i = 0; i < 4; i++) {
               puVar10[i] = 0;
            }

            if (uVar1 != 0) {
               uVar11 = uVar1 - 1;
               uVar9 = 0;
               uVar2 = uVar11 >> 1 | uVar11;
               uVar2 = uVar2 | uVar2 >> 2;
               uVar2 = uVar2 | uVar2 >> 4;
               uVar2 = uVar2 | uVar2 >> 8;
               uVar2 = ( uVar2 | uVar2 >> 0x10 ) + 1;
               puVar10[1] = uVar2;
               lVar3 = Memory::realloc_static((void*)0x0, (ulong)uVar2 << 4, false);
               *(long*)( puVar10 + 2 ) = lVar3;
               if (lVar3 == 0) {
                  LocalVector<ShaderGLES3::TextureUniformData,unsigned_int,false,false>::resize(uVar9);
                  goto LAB_0010f834;
               }

               uVar2 = *puVar10;
               if (uVar2 < uVar1) {
                  puVar5 = (undefined8*)( (ulong)uVar2 * 0x10 + lVar3 );
                  puVar4 = (undefined8*)( ( (ulong)uVar2 + 1 + ( ulong )(uVar11 - uVar2) ) * 0x10 + lVar3 );
                  if (( (int)puVar4 - (int)puVar5 & 0x10U ) != 0) {
                     *puVar5 = 0;
                     puVar5 = puVar5 + 2;
                     if (puVar4 == puVar5) goto LAB_0010f7e0;
                  }

                  do {
                     *puVar5 = 0;
                     puVar6 = puVar5 + 4;
                     puVar5[2] = 0;
                     puVar5 = puVar6;
                  }
 while ( puVar4 != puVar6 );
               }

               LAB_0010f7e0:*puVar10 = uVar1;
               if (*param_3 != 0) {
                  lVar8 = 0;
                  while (true) {
                     pSVar12 = (StringName_conflict*)( *(long*)( param_3 + 2 ) + lVar8 * 0x10 );
                     this_00 = (StringName_conflict*)( lVar8 * 0x10 + lVar3 );
                     StringName::operator =(this_00, pSVar12);
                     *(undefined4*)( this_00 + 8 ) = *(undefined4*)( pSVar12 + 8 );
                     if (*param_3 <= ( uint )(lVar8 + 1)) break;
                     lVar3 = *(long*)( puVar10 + 2 );
                     lVar8 = lVar8 + 1;
                  }
;
               }

            }

            for (int i = 0; i < 3; i++) {
               puVar10[( 2*i + 4 )] = 0;
               puVar10[( 2*i + 5 )] = 0;
               if (*(long*)( param_3 + ( 2*i + 4 ) ) != 0) {
                  CowData<char>::_ref((CowData<char>*)( puVar10 + ( 2*i + 4 ) ), (CowData*)( param_3 + ( 2*i + 4 ) ));
               }

            }

            uVar2 = param_3[0x14];
            puVar10[0x14] = 0;
            puVar10[0x15] = 0;
            *(undefined1(*) [16])( puVar10 + 0xc ) = (undefined1[16])0x0;
            uVar2 = *(uint*)( hash_table_size_primes + (ulong)uVar2 * 4 );
            *(undefined1(*) [16])( puVar10 + 0x10 ) = (undefined1[16])0x0;
            lVar3 = 1;
            if (5 < uVar2) {
               do {
                  if (uVar2 <= *(uint*)( hash_table_size_primes + lVar3 * 4 )) {
                     puVar10[0x14] = (uint)lVar3;
                     goto LAB_0010f580;
                  }

                  lVar3 = lVar3 + 1;
               }
 while ( lVar3 != 0x1d );
               _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
            }

            LAB_0010f580:if (( param_3[0x15] != 0 ) && ( plVar7 = *(long**)( param_3 + 0x10 ) ),plVar7 != (long*)0x0) {
               do {
                  HashMap<StringName,CharString,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,CharString>>>::insert(aSStack_38, (CharString*)( puVar10 + 10 ), (bool)( (char)plVar7 + '\x10' ));
                  plVar7 = (long*)*plVar7;
               }
 while ( plVar7 != (long*)0x0 );
            }

            puVar10[0x18] = 0;
            puVar10[0x19] = 0;
            if (*(long*)( param_3 + 0x18 ) != 0) {
               CowData<CharString>::_unref((CowData<CharString>*)( puVar10 + 0x18 ));
               if (*(long*)( param_3 + 0x18 ) != 0) {
                  plVar7 = (long*)( *(long*)( param_3 + 0x18 ) + -0x10 );
                  do {
                     lVar3 = *plVar7;
                     if (lVar3 == 0) goto LAB_0010f607;
                     LOCK();
                     lVar8 = *plVar7;
                     bVar13 = lVar3 == lVar8;
                     if (bVar13) {
                        *plVar7 = lVar3 + 1;
                        lVar8 = lVar3;
                     }

                     UNLOCK();
                  }
 while ( !bVar13 );
                  if (lVar8 != -1) {
                     *(undefined8*)( puVar10 + 0x18 ) = *(undefined8*)( param_3 + 0x18 );
                  }

               }

            }

            LAB_0010f607:puVar10[0x1a] = 0;
            puVar10[0x1b] = 0;
            uVar2 = param_3[0x1a];
            puVar10[0x1c] = 0;
            puVar10[0x1d] = 0;
            LocalVector<OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>,unsigned_int,false,false>::resize((LocalVector<OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>,unsigned_int,false,false>*)( puVar10 + 0x1a ), uVar2);
            lVar3 = 0;
            if (param_3[0x1a] != 0) {
               do {
                  lVar8 = lVar3 + 1;
                  OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::operator =((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( lVar3 * 0x20 + *(long*)( puVar10 + 0x1c ) ), (OAHashMap*)( *(long*)( param_3 + 0x1c ) + lVar3 * 0x20 ));
                  lVar3 = lVar8;
               }
 while ( (uint)lVar8 < param_3[0x1a] );
            }

            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            goto LAB_0010f834;
         }

         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0xfc, "Method/function failed. Returning: nullptr", "Attempting to initialize the wrong RID", 0, 0);
      }
 else {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0xf8, "Method/function failed. Returning: nullptr", "Initializing already initialized RID", 0, 0);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
      return;
   }

   LAB_0010f834:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<ShaderGLES3::Version, true>::make_rid(ShaderGLES3::Version const&) */ulong RID_Alloc<ShaderGLES3::Version,true>::make_rid(RID_Alloc<ShaderGLES3::Version,true> *this, Version *param_1) {
   pthread_mutex_t *__mutex;
   uint uVar1;
   long lVar2;
   long lVar3;
   char *__s;
   code *pcVar4;
   int iVar5;
   uint uVar6;
   undefined8 uVar7;
   long lVar8;
   uint uVar9;
   uint uVar10;
   ulong uVar11;
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined8 local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   __mutex = (pthread_mutex_t*)( this + 0x30 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar5 = pthread_mutex_lock(__mutex);
   if (iVar5 != 0) {
      std::__throw_system_error(iVar5);
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   uVar6 = *(uint*)( this + 0x20 );
   if (uVar6 == *(uint*)( this + 0x1c )) {
      if (uVar6 != 0) {
         uVar6 = uVar6 / *(uint*)( this + 0x18 );
      }

      if (*(uint*)( this + 0x24 ) == uVar6) {
         pthread_mutex_unlock(__mutex);
         __s = *(char**)( this + 0x28 );
         if (__s == (char*)0x0) {
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x85, "Method/function failed. Returning: RID()", "Element limit reached.", 0, 0);
         }
 else {
            local_60 = 0;
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
            local_50 = 0x2b;
            local_58 = "Element limit for RID of type \'%s\' reached.";
            local_68 = 0;
            String::parse_latin1((StrRange*)&local_68);
            vformat<String>((CowData<char32_t>*)&local_58, &local_68, (StrRange*)&local_60);
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x83, "Method/function failed. Returning: RID()", (CowData<char32_t>*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         }

         uVar11 = 0;
         goto LAB_0010fa6a;
      }

      lVar2 = *(long*)( this + 8 );
      uVar11 = (ulong)uVar6;
      uVar7 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) << 7, false);
      uVar6 = *(uint*)( this + 0x18 );
      lVar3 = *(long*)( this + 0x10 );
      *(undefined8*)( lVar2 + uVar11 * 8 ) = uVar7;
      uVar7 = Memory::alloc_static((ulong)uVar6 << 2, false);
      uVar6 = *(uint*)( this + 0x18 );
      *(undefined8*)( uVar11 * 8 + lVar3 ) = uVar7;
      if (uVar6 != 0) {
         lVar2 = *(long*)( *(long*)( this + 8 ) + uVar11 * 8 );
         lVar3 = *(long*)( *(long*)( this + 0x10 ) + uVar11 * 8 );
         lVar8 = 0;
         do {
            *(undefined4*)( lVar2 + 0x78 + lVar8 * 0x80 ) = 0xffffffff;
            *(int*)( lVar3 + lVar8 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar8;
            uVar6 = *(uint*)( this + 0x18 );
            lVar8 = lVar8 + 1;
         }
 while ( (uint)lVar8 < uVar6 );
      }

      *(uint*)( this + 0x1c ) = uVar6 + *(int*)( this + 0x1c );
      uVar6 = *(uint*)( this + 0x20 );
   }

   uVar1 = *(uint*)( this + 0x18 );
   uVar6 = *(uint*)( *(long*)( *(long*)( this + 0x10 ) + ( (ulong)uVar6 / (ulong)uVar1 ) * 8 ) + ( (ulong)uVar6 % (ulong)uVar1 ) * 4 );
   LOCK();
   UNLOCK();
   uVar9 = (int)RID_AllocBase::base_id + 1;
   uVar10 = uVar9 & 0x7fffffff;
   if (uVar10 == 0x7fffffff) {
      RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
      _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0xa9, "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.", "Overflow in RID validator", 0, 0);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   uVar11 = CONCAT44(uVar9, uVar6) & 0x7fffffffffffffff;
   RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
   *(uint*)( ( (ulong)uVar6 % (ulong)uVar1 ) * 0x80 + *(long*)( *(long*)( this + 8 ) + ( (ulong)uVar6 / (ulong)uVar1 ) * 8 ) + 0x78 ) = uVar10 | 0x80000000;
   *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
   pthread_mutex_unlock(__mutex);
   LAB_0010fa6a:initialize_rid(this, uVar11, param_1);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar11;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderGLES3::_add_stage(char const*, ShaderGLES3::StageType) */void ShaderGLES3::_GLOBAL__sub_I__add_stage(void) {
   shader_cache_dir = 0;
   __cxa_atexit(String::~String, &shader_cache_dir, &__dso_handle);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<ShaderGLES3::Version, true>::~RID_Alloc() */void RID_Alloc<ShaderGLES3::Version,true>::~RID_Alloc(RID_Alloc<ShaderGLES3::Version,true> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ShaderGLES3::Version::~Version() */void ShaderGLES3::Version::~Version(Version *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* OAHashMap<unsigned long, ShaderGLES3::Version::Specialization, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned long> >::~OAHashMap() */void OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::~OAHashMap(OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringBuilder::~StringBuilder() */void StringBuilder::~StringBuilder(StringBuilder *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ShaderGLES3::Version::Specialization::~Specialization() */void ShaderGLES3::Version::Specialization::~Specialization(Specialization *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* String::~String() */void String::~String(String *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

