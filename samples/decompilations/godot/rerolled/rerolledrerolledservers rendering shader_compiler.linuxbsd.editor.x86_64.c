/* f2sp0(float) */void f2sp0(float param_1) {
   long lVar1;
   int iVar2;
   String *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   rtos((double)param_1);
   iVar2 = String::find_char((wchar32)in_RDI, 0x2e);
   if (iVar2 == -1) {
      iVar2 = String::find_char((wchar32)in_RDI, 0x65);
      if (iVar2 == -1) {
         String::operator +=(in_RDI, ".0");
      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderCompiler::_get_global_shader_uniform_type(StringName const&) */void ShaderCompiler::_get_global_shader_uniform_type(StringName *param_1) {
   undefined4 uVar1;
   uVar1 = ( **(code**)( *RenderingServerGlobals::material_storage + 0x40 ) )(RenderingServerGlobals::material_storage, param_1);
   RenderingServer::global_shader_uniform_type_get_shader_datatype(uVar1);
   return;
}
/* StringName::TEMPNAMEPLACEHOLDERVALUE(StringName&&) [clone .part.0] */void StringName::operator =(StringName *this, StringName *param_1) {
   StringName::unref();
   *(undefined8*)this = *(undefined8*)param_1;
   *(undefined8*)param_1 = 0;
   return;
}
/* SortArray<StringName, StringName::AlphCompare, true>::adjust_heap(long, long, long, StringName,
   StringName*) const [clone .isra.0] */void SortArray<StringName,StringName::AlphCompare,true>::adjust_heap(long param_1, long param_2, long param_3, StringName *param_4, long param_5) {
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
   StringName *pSVar13;
   StringName *this;
   long lVar14;
   long in_FS_OFFSET;
   StringName *local_50;
   long local_48;
   long local_40;
   lVar11 = param_2 * 2 + 2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar14 = param_2;
   if (lVar11 < param_3) {
      do {
         lVar9 = lVar11 + -1;
         this(StringName * )(param_5 + ( lVar9 + param_1 ) * 8);
         pSVar13 = (StringName*)( param_5 + ( param_1 + lVar11 ) * 8 );
         lVar6 = *(long*)this;
         lVar5 = *(long*)pSVar13;
         if (lVar5 == 0) {
            if (lVar6 != 0) {
               pbVar10 = *(byte**)( lVar6 + 8 );
               uVar8 = 0;
               pbVar12 = &_LC1;
               LAB_0010020c:if (pbVar10 == (byte*)0x0) {
                  lVar5 = 0;
                  uVar3 = **(uint**)( lVar6 + 0x10 );
                  if (uVar3 != 0 || uVar8 != 0) {
                     do {
                        if (uVar8 == 0) goto LAB_001001c0;
                        if (uVar3 == 0) break;
                        if (uVar8 < uVar3) goto LAB_001001c0;
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
                  LAB_0010025e:if (bVar4 != 0) {
                     lVar6 = 1;
                     do {
                        if (uVar8 == 0) goto LAB_001001c0;
                        if (uVar3 == 0) break;
                        if (uVar8 < uVar3) goto LAB_001001c0;
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
                  pbVar10 = &_LC1;
                  uVar3 = 0;
                  goto LAB_0010025e;
               }

               uVar8 = 0;
               pbVar10 = &_LC1;
            }
 else {
               pbVar10 = *(byte**)( lVar6 + 8 );
               if (pbVar12 != (byte*)0x0) {
                  uVar8 = (uint)(char)*pbVar12;
                  goto LAB_0010020c;
               }

               if (pbVar10 == (byte*)0x0) {
                  lVar7 = 4;
                  uVar8 = **(uint**)( lVar6 + 0x10 );
                  uVar3 = **(uint**)( lVar5 + 0x10 );
                  if (uVar8 != 0 || uVar3 != 0) {
                     do {
                        if (uVar3 == 0) goto LAB_001001c0;
                        if (uVar8 == 0) break;
                        if (uVar3 < uVar8) goto LAB_001001c0;
                        if (uVar8 < uVar3) break;
                        uVar3 = *(uint*)( (long)*(uint**)( lVar5 + 0x10 ) + lVar7 );
                        uVar8 = *(uint*)( (long)*(uint**)( lVar6 + 0x10 ) + lVar7 );
                        lVar7 = lVar7 + 4;
                     }
 while ( uVar3 != 0 || uVar8 != 0 );
                  }

                  goto LAB_001001e8;
               }

               uVar8 = (uint)(char)*pbVar10;
            }

            lVar6 = 0;
            uVar3 = **(uint**)( lVar5 + 0x10 );
            if (uVar3 != 0 || uVar8 != 0) {
               do {
                  if (uVar3 == 0) goto LAB_001001c0;
                  if (uVar8 == 0) break;
                  if (uVar3 < uVar8) goto LAB_001001c0;
                  if (uVar8 < uVar3) break;
                  uVar3 = ( *(uint**)( lVar5 + 0x10 ) )[lVar6 + 1];
                  uVar8 = (uint)(char)pbVar10[lVar6 + 1];
                  lVar6 = lVar6 + 1;
               }
 while ( uVar3 != 0 || uVar8 != 0 );
            }

         }

         LAB_001001e8:lVar9 = lVar11;
         this =
         pSVar13;
         lVar11 = lVar11 + 1;
         LAB_001001c0:lVar11 = lVar11 * 2;
         StringName::operator =((StringName*)( param_5 + ( lVar14 + param_1 ) * 8 ), this);
         lVar14 = lVar9;
      }
 while ( lVar11 < param_3 );
      pSVar13 = this;
      if (lVar11 == param_3) goto LAB_00100628;
   }
 else {
      this(StringName * )(param_5 + ( param_2 + param_1 ) * 8);
      if (lVar11 != param_3) {
         StringName::StringName((StringName*)&local_48, param_4);
         goto LAB_00100402;
      }

      LAB_00100628:lVar9 = lVar11 + -1;
      pSVar13 = (StringName*)( param_5 + ( param_1 + lVar9 ) * 8 );
      StringName::operator =(this, pSVar13);
   }

   StringName::StringName((StringName*)&local_48, param_4);
   lVar11 = ( lVar9 + -1 ) - ( lVar9 + -1 >> 0x3f );
   this =
   pSVar13;
   while (param_2 < lVar9) {
      lVar14 = lVar11 >> 1;
      this(StringName * )(param_5 + ( param_1 + lVar14 ) * 8);
      lVar11 = *(long*)this;
      if (lVar11 == 0) {
         if (local_48 != 0) {
            pbVar10 = *(byte**)( local_48 + 8 );
            uVar3 = 0;
            uVar8 = 0;
            pbVar12 = &_LC1;
            if (pbVar10 != (byte*)0x0) goto LAB_001004c3;
            LAB_00100465:uVar8 = **(uint**)( local_48 + 0x10 );
            if (uVar8 != 0 || uVar3 != 0) {
               lVar11 = 0;
               while (uVar3 != 0) {
                  if (uVar8 == 0) goto LAB_001003f8;
                  if (uVar3 < uVar8) break;
                  if (uVar8 < uVar3) goto LAB_001003f8;
                  uVar3 = (uint)(char)pbVar12[lVar11 + 1];
                  uVar8 = ( *(uint**)( local_48 + 0x10 ) )[lVar11 + 1];
                  lVar11 = lVar11 + 1;
                  if (uVar3 == 0 && uVar8 == 0) goto LAB_001003f8;
               }
;
               ;;
               goto LAB_001003c0;
            }

         }

         LAB_001003f8 = (StringName*)( param_5 + ( lVar9 + param_1 ) * 8 );
         break;
      }

      pbVar12 = *(byte**)( lVar11 + 8 );
      if (local_48 == 0) {
         uVar8 = 0;
         pbVar10 = &_LC1;
         if (pbVar12 != (byte*)0x0) {
            bVar4 = *pbVar12;
            uVar8 = (uint)(char)bVar4;
            pbVar10 = &_LC1;
            uVar3 = 0;
            goto LAB_001004c9;
         }

         LAB_0010052a:uVar3 = **(uint**)( lVar11 + 0x10 );
         if (uVar3 == 0 && uVar8 == 0) goto LAB_001003f8;
         lVar6 = 0;
         while (uVar3 != 0) {
            if (uVar8 == 0) goto LAB_001003f8;
            if (uVar3 < uVar8) break;
            if (uVar8 < uVar3) goto LAB_001003f8;
            uVar3 = ( *(uint**)( lVar11 + 0x10 ) )[lVar6 + 1];
            uVar8 = (uint)(char)pbVar10[lVar6 + 1];
            lVar6 = lVar6 + 1;
            if (uVar3 == 0 && uVar8 == 0) goto LAB_001003f8;
         }
;
         ;;
      }
 else {
         pbVar10 = *(byte**)( local_48 + 8 );
         if (pbVar12 == (byte*)0x0) {
            if (pbVar10 != (byte*)0x0) {
               uVar8 = (uint)(char)*pbVar10;
               goto LAB_0010052a;
            }

            uVar8 = **(uint**)( local_48 + 0x10 );
            uVar3 = **(uint**)( lVar11 + 0x10 );
            if (uVar8 == 0 && uVar3 == 0) goto LAB_001003f8;
            lVar6 = 4;
            while (uVar3 != 0) {
               if (uVar8 == 0) goto LAB_001003f8;
               if (uVar3 < uVar8) break;
               if (uVar8 < uVar3) goto LAB_001003f8;
               uVar3 = *(uint*)( (long)*(uint**)( lVar11 + 0x10 ) + lVar6 );
               uVar8 = *(uint*)( (long)*(uint**)( local_48 + 0x10 ) + lVar6 );
               lVar6 = lVar6 + 4;
               if (uVar3 == 0 && uVar8 == 0) {
                  this(StringName * )(param_5 + ( param_1 + lVar9 ) * 8);
                  goto LAB_00100402;
               }

            }
;
            ;;
         }
 else {
            uVar3 = (uint)(char)*pbVar12;
            uVar8 = uVar3;
            if (pbVar10 == (byte*)0x0) goto LAB_00100465;
            LAB_001004c3:uVar3 = (uint)(char)*pbVar10;
            bVar4 = (byte)uVar8 | *pbVar10;
            LAB_001004c9:if (bVar4 == 0) goto LAB_001003f8;
            lVar11 = 1;
            while (uVar8 != 0) {
               if (uVar3 == 0) goto LAB_001003f8;
               if (uVar8 < uVar3) break;
               if (uVar3 < uVar8) goto LAB_001003f8;
               pbVar1 = pbVar12 + lVar11;
               uVar8 = (uint)(char)*pbVar1;
               pbVar2 = pbVar10 + lVar11;
               uVar3 = (uint)(char)*pbVar2;
               lVar11 = lVar11 + 1;
               if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_001003f8;
            }
;
            ;;
         }

      }

      LAB_001003c0:StringName::operator =((StringName*)( param_5 + ( lVar9 + param_1 ) * 8 ), this);
      lVar11 = ( lVar14 + -1 ) - ( lVar14 + -1 >> 0x3f );
      lVar9 = lVar14;
   }
;
   ;;
   LAB_00100402:local_50 = (StringName*)&local_48;
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
   StringName*) const [clone .isra.0] */void SortArray<StringName,StringName::AlphCompare,true>::unguarded_linear_insert(long param_1, StringName *param_2, long param_3) {
   byte *pbVar1;
   byte *pbVar2;
   StringName *pSVar3;
   byte bVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   uint uVar8;
   uint uVar9;
   byte *pbVar10;
   byte *pbVar11;
   pSVar3 = (StringName*)( param_3 + -8 + param_1 * 8 );
   lVar6 = *(long*)pSVar3;
   lVar5 = *(long*)param_2;
   do {
      if (lVar5 == 0) {
         if (lVar6 == 0) goto LAB_0010086b;
         pbVar10 = *(byte**)( lVar6 + 8 );
         uVar8 = 0;
         pbVar11 = &_LC1;
         LAB_00100771:if (pbVar10 == (byte*)0x0) {
            uVar9 = **(uint**)( lVar6 + 0x10 );
            if (uVar9 == 0 && uVar8 == 0) goto LAB_0010086b;
            lVar5 = 0;
            while (uVar8 != 0) {
               if (uVar9 == 0) goto LAB_0010086b;
               if (uVar8 < uVar9) break;
               if (uVar9 < uVar8) goto LAB_0010086b;
               uVar8 = (uint)(char)pbVar11[lVar5 + 1];
               uVar9 = ( *(uint**)( lVar6 + 0x10 ) )[lVar5 + 1];
               lVar5 = lVar5 + 1;
               if (uVar8 == 0 && uVar9 == 0) goto LAB_0010086b;
            }
;
            ;;
         }
 else {
            uVar9 = (uint)(char)*pbVar10;
            bVar4 = (byte)uVar8 | *pbVar10;
            LAB_001007ce:if (bVar4 == 0) goto LAB_0010086b;
            lVar6 = 1;
            while (uVar8 != 0) {
               if (uVar9 == 0) goto LAB_0010086b;
               if (uVar8 < uVar9) break;
               if (uVar9 < uVar8) goto LAB_0010086b;
               pbVar1 = pbVar11 + lVar6;
               uVar8 = (uint)(char)*pbVar1;
               pbVar2 = pbVar10 + lVar6;
               uVar9 = (uint)(char)*pbVar2;
               lVar6 = lVar6 + 1;
               if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_0010086b;
            }
;
            ;;
         }

      }
 else {
         pbVar11 = *(byte**)( lVar5 + 8 );
         if (lVar6 == 0) {
            if (pbVar11 != (byte*)0x0) {
               bVar4 = *pbVar11;
               uVar8 = (uint)(char)bVar4;
               pbVar10 = &_LC1;
               uVar9 = 0;
               goto LAB_001007ce;
            }

            uVar8 = 0;
            pbVar10 = &_LC1;
            LAB_001006e7:uVar9 = **(uint**)( lVar5 + 0x10 );
            if (uVar9 == 0 && uVar8 == 0) goto LAB_0010086b;
            lVar6 = 0;
            while (uVar9 != 0) {
               if (uVar8 == 0) goto LAB_0010086b;
               if (uVar9 < uVar8) break;
               if (uVar8 < uVar9) goto LAB_0010086b;
               uVar9 = ( *(uint**)( lVar5 + 0x10 ) )[lVar6 + 1];
               uVar8 = (uint)(char)pbVar10[lVar6 + 1];
               lVar6 = lVar6 + 1;
               if (uVar9 == 0 && uVar8 == 0) goto LAB_0010086b;
            }
;
            ;;
         }
 else {
            pbVar10 = *(byte**)( lVar6 + 8 );
            if (pbVar11 != (byte*)0x0) {
               uVar8 = (uint)(char)*pbVar11;
               goto LAB_00100771;
            }

            if (pbVar10 != (byte*)0x0) {
               uVar8 = (uint)(char)*pbVar10;
               goto LAB_001006e7;
            }

            uVar8 = **(uint**)( lVar6 + 0x10 );
            uVar9 = **(uint**)( lVar5 + 0x10 );
            if (uVar8 == 0 && uVar9 == 0) goto LAB_0010086b;
            lVar7 = 4;
            while (uVar9 != 0) {
               if (uVar8 == 0) goto LAB_0010086b;
               if (uVar9 < uVar8) break;
               if (uVar8 < uVar9) goto LAB_0010086b;
               uVar9 = *(uint*)( (long)*(uint**)( lVar5 + 0x10 ) + lVar7 );
               uVar8 = *(uint*)( (long)*(uint**)( lVar6 + 0x10 ) + lVar7 );
               lVar7 = lVar7 + 4;
               if (uVar9 == 0 && uVar8 == 0) goto LAB_0010086b;
            }
;
            ;;
         }

      }

      param_1 = param_1 + -1;
      if (param_1 == 0) {
         param_1 = 1;
         _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
         LAB_0010086b:StringName::operator =((StringName*)( param_3 + param_1 * 8 ), param_2);
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
   const [clone .isra.0] */void SortArray<StringName,StringName::AlphCompare,true>::linear_insert(long param_1, long param_2, StringName *param_3) {
   StringName *this;
   byte *pbVar1;
   byte *pbVar2;
   byte bVar3;
   long lVar4;
   long lVar5;
   uint uVar6;
   uint uVar7;
   StringName *this_00;
   byte *pbVar8;
   byte *pbVar9;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   this =
   param_3 + param_1 * 8;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_50, param_3 + param_2 * 8);
   if (local_50 == 0) {
      lVar4 = *(long*)this;
      if (lVar4 != 0) {
         pbVar8 = *(byte**)( lVar4 + 8 );
         uVar6 = 0;
         pbVar9 = &_LC1;
         LAB_00100a48:if (pbVar8 == (byte*)0x0) {
            uVar7 = **(uint**)( lVar4 + 0x10 );
            if (uVar6 != 0 || uVar7 != 0) {
               lVar5 = 0;
               do {
                  if (uVar6 == 0) goto LAB_001009a0;
                  if (uVar7 == 0) break;
                  if (uVar6 < uVar7) goto LAB_001009a0;
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
            LAB_00100af0:if (bVar3 != 0) {
               lVar4 = 1;
               do {
                  if (uVar6 == 0) goto LAB_001009a0;
                  if (uVar7 == 0) break;
                  if (uVar6 < uVar7) goto LAB_001009a0;
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
            pbVar8 = &_LC1;
            uVar7 = 0;
            goto LAB_00100af0;
         }

         uVar6 = 0;
         pbVar8 = &_LC1;
      }
 else {
         pbVar8 = *(byte**)( lVar4 + 8 );
         if (pbVar9 != (byte*)0x0) {
            uVar6 = (uint)(char)*pbVar9;
            goto LAB_00100a48;
         }

         if (pbVar8 == (byte*)0x0) {
            uVar6 = **(uint**)( lVar4 + 0x10 );
            uVar7 = **(uint**)( local_50 + 0x10 );
            if (uVar6 != 0 || uVar7 != 0) {
               lVar5 = 4;
               do {
                  if (uVar7 == 0) goto LAB_001009a0;
                  if (uVar6 == 0) break;
                  if (uVar7 < uVar6) goto LAB_001009a0;
                  if (uVar6 < uVar7) break;
                  uVar7 = *(uint*)( (long)*(uint**)( local_50 + 0x10 ) + lVar5 );
                  uVar6 = *(uint*)( (long)*(uint**)( lVar4 + 0x10 ) + lVar5 );
                  lVar5 = lVar5 + 4;
               }
 while ( uVar7 != 0 || uVar6 != 0 );
            }

            goto LAB_00100a98;
         }

         uVar6 = (uint)(char)*pbVar8;
      }

      uVar7 = **(uint**)( local_50 + 0x10 );
      if (uVar6 != 0 || uVar7 != 0) {
         lVar4 = 0;
         do {
            if (uVar7 == 0) goto LAB_001009a0;
            if (uVar6 == 0) break;
            if (uVar7 < uVar6) goto LAB_001009a0;
            if (uVar6 < uVar7) break;
            uVar7 = ( *(uint**)( local_50 + 0x10 ) )[lVar4 + 1];
            uVar6 = (uint)(char)pbVar8[lVar4 + 1];
            lVar4 = lVar4 + 1;
         }
 while ( uVar7 != 0 || uVar6 != 0 );
      }

   }

   LAB_00100a98:StringName::StringName((StringName*)&local_48, (StringName*)&local_50);
   unguarded_linear_insert(param_2, (StringName*)&local_48, param_3);
   if (StringName::configured == '\0') goto LAB_001009e6;
   if (local_48 != 0) {
      StringName::unref();
      goto LAB_001009d2;
   }

   goto LAB_001009d6;
   LAB_001009a0:this_00 = param_3 + param_2 * 8;
   if (param_1 < param_2) {
      do {
         param_2 = param_2 + -1;
         StringName::operator =(this_00, this_00 + -8);
         this_00 = this_00 + -8;
      }
 while ( param_1 != param_2 );
   }

   StringName::operator =(this, (StringName*)&local_50);
   LAB_001009d2:if (StringName::configured == '\0') goto LAB_001009e6;
   LAB_001009d6:if (local_50 != 0) {
      StringName::unref();
   }

   LAB_001009e6:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* SortArray<StringName, StringName::AlphCompare, true>::median_of_3(StringName const&, StringName
   const&, StringName const&) const [clone .isra.0] */StringName *SortArray<StringName,StringName::AlphCompare,true>::median_of_3(StringName *param_1, StringName *param_2, StringName *param_3) {
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
      pbVar15 = &_LC1;
      pbVar16 = &_LC1;
      if (lVar13 == 0) {
         LAB_001014d0:if (lVar9 != 0) {
            pbVar17 = *(byte**)( lVar9 + 8 );
            LAB_00100d9e:uVar5 = (uint)(char)*pbVar16;
            uVar4 = uVar5;
            goto LAB_00100da4;
         }

         uVar5 = (uint)(char)*pbVar16;
         uVar6 = 0;
         uVar12 = 0;
         pbVar17 = &_LC1;
         if (*pbVar16 == 0) goto LAB_00101099;
         LAB_00100ef2:lVar8 = 1;
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
         pbVar16 = &_LC1;
         LAB_00100d22:if (pbVar15 != (byte*)0x0) {
            uVar12 = (uint)(char)*pbVar15;
            bVar11 = *pbVar15 | (byte)uVar4;
            LAB_00100e10:if (bVar11 != 0) {
               lVar14 = 1;
               do {
                  if (uVar4 == 0) goto joined_r0x00100e58;
                  if (uVar12 == 0) break;
                  if (uVar4 < uVar12) goto joined_r0x00100e58;
                  if (uVar12 < uVar4) break;
                  pbVar17 = pbVar16 + lVar14;
                  uVar4 = (uint)(char)*pbVar17;
                  pbVar2 = pbVar15 + lVar14;
                  uVar12 = (uint)(char)*pbVar2;
                  lVar14 = lVar14 + 1;
               }
 while ( *pbVar17 != 0 || *pbVar2 != 0 );
               goto LAB_00100d88;
            }

            goto LAB_001014d0;
         }

         uVar12 = **(uint**)( lVar13 + 0x10 );
         if (uVar4 != 0 || uVar12 != 0) {
            lVar14 = 0;
            do {
               if (uVar4 == 0) goto joined_r0x00100e58;
               if (uVar12 == 0) break;
               if (uVar4 < uVar12) goto joined_r0x00100e58;
               if (uVar12 < uVar4) break;
               uVar4 = (uint)(char)pbVar16[lVar14 + 1];
               uVar12 = ( *(uint**)( lVar13 + 0x10 ) )[lVar14 + 1];
               lVar14 = lVar14 + 1;
            }
 while ( uVar4 != 0 || uVar12 != 0 );
            goto LAB_00100d88;
         }

         if (lVar9 == 0) goto LAB_001010f1;
         pbVar17 = *(byte**)( lVar9 + 8 );
         uVar5 = 0;
         LAB_00100da4:if (pbVar17 != (byte*)0x0) {
            uVar6 = (uint)(char)*pbVar17;
            bVar11 = (byte)uVar4 | *pbVar17;
            goto LAB_00100ee9;
         }

         puVar10 = *(uint**)( lVar9 + 0x10 );
         uVar4 = *puVar10;
         uVar6 = uVar4 | uVar5;
         if (uVar6 == 0) goto LAB_001013d6;
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

      LAB_00101080:if (pbVar15 == (byte*)0x0) {
         if (pbVar17 == (byte*)0x0) {
            puVar10 = *(uint**)( lVar9 + 0x10 );
            LAB_001013df:uVar4 = *puVar10;
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
            ;;
            return param_2;
         }

         uVar12 = (uint)(char)*pbVar17;
         LAB_00101266:uVar4 = **(uint**)( lVar13 + 0x10 );
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
         LAB_001012c8:uVar4 = (uint)(char)*pbVar15;
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
         ;;
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
            pbVar15 = &_LC1;
            goto LAB_00100e10;
         }

         uVar4 = 0;
         pbVar15 = &_LC1;
         LAB_00100c09:uVar12 = **(uint**)( lVar8 + 0x10 );
         if (uVar4 != 0 || uVar12 != 0) {
            lVar14 = 0;
            do {
               if (uVar12 == 0) goto joined_r0x00100e58;
               if (uVar4 == 0) break;
               if (uVar12 < uVar4) goto joined_r0x00100e58;
               if (uVar4 < uVar12) break;
               uVar12 = ( *(uint**)( lVar8 + 0x10 ) )[lVar14 + 1];
               uVar4 = (uint)(char)pbVar15[lVar14 + 1];
               lVar14 = lVar14 + 1;
            }
 while ( uVar12 != 0 || uVar4 != 0 );
         }

         LAB_00100d88:if (lVar9 != 0) {
            pbVar17 = *(byte**)( lVar9 + 8 );
            if (pbVar16 != (byte*)0x0) goto LAB_00100d9e;
            puVar7 = *(uint**)( lVar8 + 0x10 );
            uVar4 = *puVar7;
            LAB_00101188:if (pbVar17 != (byte*)0x0) {
               uVar12 = (uint)(char)*pbVar17;
               uVar6 = uVar4 | uVar12;
               goto LAB_00101443;
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
               goto LAB_00101080;
            }

            LAB_001013d6:if (pbVar15 != (byte*)0x0) goto LAB_001012c8;
            goto LAB_001013df;
         }

         if (pbVar16 == (byte*)0x0) {
            puVar7 = *(uint**)( lVar8 + 0x10 );
            goto LAB_001014a1;
         }

         LAB_001010f1:bVar11 = *pbVar16;
         uVar5 = (uint)(char)bVar11;
         uVar6 = 0;
         pbVar17 = &_LC1;
         LAB_00100ee9:uVar12 = uVar6;
         if (bVar11 != 0) goto LAB_00100ef2;
      }
 else {
         pbVar15 = *(byte**)( lVar13 + 8 );
         if (pbVar16 != (byte*)0x0) {
            uVar4 = (uint)(char)*pbVar16;
            goto LAB_00100d22;
         }

         if (pbVar15 != (byte*)0x0) {
            uVar4 = (uint)(char)*pbVar15;
            goto LAB_00100c09;
         }

         puVar7 = *(uint**)( lVar8 + 0x10 );
         uVar12 = **(uint**)( lVar13 + 0x10 );
         uVar4 = *puVar7;
         if (uVar12 != 0 || uVar4 != 0) {
            lVar14 = 4;
            do {
               if (uVar4 == 0) {
                  LAB_00100ff8:pbVar16 = (byte*)0x0;
                  goto joined_r0x00100e58;
               }

               if (uVar12 == 0) break;
               if (uVar4 < uVar12) goto LAB_00100ff8;
               if (uVar12 < uVar4) break;
               uVar4 = *(uint*)( (long)puVar7 + lVar14 );
               uVar12 = *(uint*)( (long)*(uint**)( lVar13 + 0x10 ) + lVar14 );
               lVar14 = lVar14 + 4;
            }
 while ( uVar4 != 0 || uVar12 != 0 );
            pbVar16 = (byte*)0x0;
            goto LAB_00100d88;
         }

         if (lVar9 != 0) {
            pbVar17 = *(byte**)( lVar9 + 8 );
            uVar4 = 0;
            goto LAB_00101188;
         }

         LAB_001014a1:uVar4 = *puVar7;
         uVar12 = 0;
         pbVar17 = &_LC1;
         uVar6 = uVar4;
         LAB_00101443:if (uVar6 != 0) {
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
            goto LAB_00101080;
         }

      }

      uVar5 = uVar12;
      if (pbVar15 == (byte*)0x0) goto LAB_00101266;
   }

   LAB_00101099:bVar11 = *pbVar15;
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
   ;;
   return param_2;
   joined_r0x00100e58:if (lVar9 == 0) {
      uVar4 = 0;
      uVar12 = 0;
      bVar11 = 0;
      pbVar17 = &_LC1;
      if (pbVar15 != (byte*)0x0) goto LAB_00100f47;
      LAB_00100e74:uVar6 = **(uint**)( lVar13 + 0x10 );
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
         goto LAB_00101010;
      }

      LAB_001014de:bVar11 = (byte)uVar12;
      if (pbVar16 == (byte*)0x0) goto LAB_001011fe;
   }
 else {
      pbVar17 = *(byte**)( lVar9 + 8 );
      if (pbVar15 == (byte*)0x0) {
         if (pbVar17 != (byte*)0x0) {
            uVar12 = (uint)(char)*pbVar17;
            goto LAB_00100e74;
         }

         puVar7 = *(uint**)( lVar9 + 0x10 );
         uVar4 = *puVar7;
         uVar6 = **(uint**)( lVar13 + 0x10 );
         uVar12 = uVar4 | uVar6;
         if (uVar12 == 0) goto LAB_00101379;
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
               goto LAB_00101010;
            }

            LAB_00101379:if (pbVar16 == (byte*)0x0) goto LAB_0010137e;
            goto LAB_00101326;
         }

         bVar11 = *pbVar17;
         uVar4 = (uint)(char)bVar11;
         LAB_00100f47:bVar3 = *pbVar15;
         uVar12 = ( uint )(bVar11 | bVar3);
         if (( bVar11 | bVar3 ) == 0) goto LAB_001014de;
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

      LAB_00101010:if (pbVar16 == (byte*)0x0) {
         if (pbVar17 == (byte*)0x0) {
            puVar7 = *(uint**)( lVar9 + 0x10 );
            LAB_0010137e:uVar4 = *puVar7;
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
            ;;
            return param_1;
         }

         uVar4 = (uint)(char)*pbVar17;
         LAB_001011fe:uVar12 = **(uint**)( lVar8 + 0x10 );
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
         ;;
         return param_1;
      }

      if (pbVar17 == (byte*)0x0) {
         puVar7 = *(uint**)( lVar9 + 0x10 );
         uVar12 = *puVar7;
         LAB_00101326:uVar4 = (uint)(char)*pbVar16;
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
         ;;
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
   ;;
   return param_1;
}
/* CowData<unsigned int>::_copy_on_write() [clone .isra.0] */void CowData<unsigned_int>::_copy_on_write(CowData<unsigned_int> *this) {
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
   joined_r0x0010169f:if (lVar3 == 0) {
      if (lVar10 == 0) goto LAB_001017c0;
      pbVar5 = *(byte**)( lVar10 + 8 );
      uVar6 = 0;
      pbVar13 = &_LC1;
      LAB_00101756:if (pbVar5 == (byte*)0x0) {
         uVar7 = **(uint**)( lVar10 + 0x10 );
         if (uVar7 != 0 || uVar6 != 0) {
            lVar3 = 0;
            do {
               if (uVar6 == 0) goto LAB_00101720;
               if (uVar7 == 0) break;
               if (uVar6 < uVar7) goto LAB_00101720;
               if (uVar7 < uVar6) break;
               uVar6 = (uint)(char)pbVar13[lVar3 + 1];
               uVar7 = ( *(uint**)( lVar10 + 0x10 ) )[lVar3 + 1];
               lVar3 = lVar3 + 1;
            }
 while ( uVar6 != 0 || uVar7 != 0 );
         }

         goto LAB_001017c0;
      }

      uVar7 = (uint)(char)*pbVar5;
      bVar12 = (byte)uVar6 | *pbVar5;
      LAB_00101a96:if (bVar12 != 0) {
         lVar3 = 1;
         do {
            if (uVar6 == 0) goto LAB_00101720;
            if (uVar7 == 0) break;
            if (uVar6 < uVar7) goto LAB_00101720;
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
            pbVar5 = &_LC1;
            goto LAB_00101a96;
         }

         uVar6 = 0;
         pbVar5 = &_LC1;
      }
 else {
         pbVar5 = *(byte**)( lVar10 + 8 );
         if (pbVar13 != (byte*)0x0) {
            uVar6 = (uint)(char)*pbVar13;
            goto LAB_00101756;
         }

         if (pbVar5 == (byte*)0x0) {
            uVar6 = **(uint**)( lVar10 + 0x10 );
            uVar7 = **(uint**)( lVar3 + 0x10 );
            if (uVar6 != 0 || uVar7 != 0) {
               lVar4 = 4;
               do {
                  if (uVar7 == 0) goto LAB_00101720;
                  if (uVar6 == 0) break;
                  if (uVar7 < uVar6) goto LAB_00101720;
                  if (uVar6 < uVar7) break;
                  uVar7 = *(uint*)( (long)*(uint**)( lVar3 + 0x10 ) + lVar4 );
                  uVar6 = *(uint*)( (long)*(uint**)( lVar10 + 0x10 ) + lVar4 );
                  lVar4 = lVar4 + 4;
               }
 while ( uVar7 != 0 || uVar6 != 0 );
            }

            goto LAB_001017c0;
         }

         uVar6 = (uint)(char)*pbVar5;
      }

      uVar7 = **(uint**)( lVar3 + 0x10 );
      if (uVar7 != 0 || uVar6 != 0) {
         lVar4 = 0;
         do {
            if (uVar7 == 0) goto LAB_00101720;
            if (uVar6 == 0) break;
            if (uVar7 < uVar6) goto LAB_00101720;
            if (uVar6 < uVar7) break;
            uVar7 = ( *(uint**)( lVar3 + 0x10 ) )[lVar4 + 1];
            uVar6 = (uint)(char)pbVar5[lVar4 + 1];
            lVar4 = lVar4 + 1;
         }
 while ( uVar7 != 0 || uVar6 != 0 );
      }

   }

   goto LAB_001017c0;
   LAB_00101720:if (param_2 + -1 == lVar9) {
      _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
      lVar10 = *param_3;
      LAB_001017c0:plVar11 = (long*)( param_4 + -8 + lVar8 * 8 );
      LAB_001017d0:lVar8 = lVar8 + -1;
      lVar3 = *plVar11;
      if (lVar10 != 0) {
         pbVar13 = *(byte**)( lVar10 + 8 );
         do {
            if (lVar3 == 0) {
               if (pbVar13 != (byte*)0x0) {
                  bVar12 = *pbVar13;
                  uVar7 = (uint)(char)bVar12;
                  pbVar5 = &_LC1;
                  uVar6 = 0;
                  goto LAB_0010197e;
               }

               uVar6 = 0;
               pbVar5 = &_LC1;
               LAB_0010189a:uVar7 = **(uint**)( lVar10 + 0x10 );
               if (uVar7 == 0 && uVar6 == 0) goto LAB_001019f8;
               lVar3 = 0;
               while (uVar7 != 0) {
                  if (uVar6 == 0) goto LAB_001019f8;
                  if (uVar7 < uVar6) break;
                  if (uVar6 < uVar7) goto LAB_001019f8;
                  uVar7 = ( *(uint**)( lVar10 + 0x10 ) )[lVar3 + 1];
                  uVar6 = (uint)(char)pbVar5[lVar3 + 1];
                  lVar3 = lVar3 + 1;
                  if (uVar7 == 0 && uVar6 == 0) goto LAB_001019f8;
               }
;
               ;;
            }
 else {
               pbVar5 = *(byte**)( lVar3 + 8 );
               if (pbVar13 != (byte*)0x0) goto LAB_001019c0;
               if (pbVar5 != (byte*)0x0) {
                  uVar6 = (uint)(char)*pbVar5;
                  goto LAB_0010189a;
               }

               uVar6 = **(uint**)( lVar3 + 0x10 );
               uVar7 = **(uint**)( lVar10 + 0x10 );
               if (uVar6 == 0 && uVar7 == 0) goto LAB_001019f8;
               lVar4 = 4;
               while (uVar7 != 0) {
                  if (uVar6 == 0) goto LAB_001019f8;
                  if (uVar7 < uVar6) break;
                  if (uVar6 < uVar7) goto LAB_001019f8;
                  uVar7 = *(uint*)( (long)*(uint**)( lVar10 + 0x10 ) + lVar4 );
                  uVar6 = *(uint*)( (long)*(uint**)( lVar3 + 0x10 ) + lVar4 );
                  lVar4 = lVar4 + 4;
                  if (uVar7 == 0 && uVar6 == 0) goto LAB_001019f8;
               }
;
               ;;
            }

            plVar14 = plVar11;
            if (param_1 == lVar8) goto LAB_001019d0;
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
         pbVar13 = &_LC1;
         goto LAB_00101909;
      }

      goto LAB_001019f8;
   }

   LAB_0010172e:lVar9 = lVar9 + 1;
   lVar3 = *(long*)( param_4 + lVar9 * 8 );
   goto joined_r0x0010169f;
   LAB_001019c0:bVar12 = *pbVar13;
   uVar7 = (uint)(char)bVar12;
   LAB_00101909:if (pbVar5 == (byte*)0x0) {
      uVar6 = **(uint**)( lVar3 + 0x10 );
      if (uVar6 == 0 && uVar7 == 0) goto LAB_001019f8;
      lVar4 = 0;
      while (plVar14 = plVar11,uVar7 != 0) {
         if (uVar6 == 0) goto LAB_001019f8;
         if (uVar7 < uVar6) break;
         if (uVar6 < uVar7) goto LAB_001019f8;
         uVar7 = (uint)(char)pbVar13[lVar4 + 1];
         uVar6 = ( *(uint**)( lVar3 + 0x10 ) )[lVar4 + 1];
         lVar4 = lVar4 + 1;
         if (uVar7 == 0 && uVar6 == 0) goto LAB_001019f8;
      }
;
      ;;
   }
 else {
      uVar6 = (uint)(char)*pbVar5;
      bVar12 = bVar12 | *pbVar5;
      LAB_0010197e:if (bVar12 == 0) goto LAB_001019f8;
      lVar3 = 1;
      while (plVar14 = plVar11,uVar7 != 0) {
         if (uVar6 == 0) goto LAB_001019f8;
         if (uVar7 < uVar6) break;
         if (uVar6 < uVar7) goto LAB_001019f8;
         pbVar1 = pbVar13 + lVar3;
         uVar7 = (uint)(char)*pbVar1;
         pbVar2 = pbVar5 + lVar3;
         uVar6 = (uint)(char)*pbVar2;
         lVar3 = lVar3 + 1;
         if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_001019f8;
      }
;
      ;;
   }

   plVar11 = plVar14 + -1;
   if (param_1 == lVar8) goto LAB_001019d0;
   goto LAB_001017d0;
   LAB_001019d0:plVar11 = plVar14;
   _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
   LAB_001019f8:if (lVar8 <= lVar9) {
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
   goto LAB_0010172e;
}
/* SortArray<StringName, StringName::AlphCompare, true>::partial_sort(long, long, long, StringName*)
   const [clone .isra.0] */void SortArray<StringName,StringName::AlphCompare,true>::partial_sort(long param_1, long param_2, long param_3, StringName *param_4) {
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
   StringName *pSVar13;
   long lVar14;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   lVar10 = param_3 - param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar10 < 2) {
      if (param_2 <= param_3) goto LAB_00101e7b;
      LAB_00101c66:lVar14 = param_3;
      LAB_00101ca0:lVar6 = *(long*)( param_4 + lVar14 * 8 );
      lVar5 = *(long*)( param_4 + param_1 * 8 );
      if (lVar6 == 0) {
         if (lVar5 != 0) {
            pbVar11 = *(byte**)( lVar5 + 8 );
            uVar8 = 0;
            pbVar12 = &_LC1;
            LAB_00101eb4:if (pbVar11 == (byte*)0x0) {
               uVar9 = **(uint**)( lVar5 + 0x10 );
               if (uVar9 != 0 || uVar8 != 0) {
                  lVar6 = 0;
                  do {
                     if (uVar8 == 0) goto LAB_00101d20;
                     if (uVar9 == 0) break;
                     if (uVar8 < uVar9) goto LAB_00101d20;
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
               LAB_00101f16:if (bVar4 != 0) {
                  lVar6 = 1;
                  do {
                     if (uVar8 == 0) goto LAB_00101d20;
                     if (uVar9 == 0) break;
                     if (uVar8 < uVar9) goto LAB_00101d20;
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
               pbVar11 = &_LC1;
               goto LAB_00101f16;
            }

            uVar8 = 0;
            pbVar11 = &_LC1;
         }
 else {
            pbVar11 = *(byte**)( lVar5 + 8 );
            if (pbVar12 != (byte*)0x0) {
               uVar8 = (uint)(char)*pbVar12;
               goto LAB_00101eb4;
            }

            if (pbVar11 == (byte*)0x0) {
               uVar8 = **(uint**)( lVar5 + 0x10 );
               uVar9 = **(uint**)( lVar6 + 0x10 );
               if (uVar8 != 0 || uVar9 != 0) {
                  lVar7 = 4;
                  do {
                     if (uVar9 == 0) goto LAB_00101d20;
                     if (uVar8 == 0) break;
                     if (uVar9 < uVar8) goto LAB_00101d20;
                     if (uVar8 < uVar9) break;
                     uVar9 = *(uint*)( (long)*(uint**)( lVar6 + 0x10 ) + lVar7 );
                     uVar8 = *(uint*)( (long)*(uint**)( lVar5 + 0x10 ) + lVar7 );
                     lVar7 = lVar7 + 4;
                  }
 while ( uVar9 != 0 || uVar8 != 0 );
               }

               goto LAB_00101da8;
            }

            uVar8 = (uint)(char)*pbVar11;
         }

         uVar9 = **(uint**)( lVar6 + 0x10 );
         if (uVar9 != 0 || uVar8 != 0) {
            lVar5 = 0;
            do {
               if (uVar9 == 0) goto LAB_00101d20;
               if (uVar8 == 0) break;
               if (uVar9 < uVar8) goto LAB_00101d20;
               if (uVar8 < uVar9) break;
               uVar9 = ( *(uint**)( lVar6 + 0x10 ) )[lVar5 + 1];
               uVar8 = (uint)(char)pbVar11[lVar5 + 1];
               lVar5 = lVar5 + 1;
            }
 while ( uVar9 != 0 || uVar8 != 0 );
         }

      }

      goto LAB_00101da8;
   }

   lVar14 = lVar10 + -2 >> 1;
   pSVar13 = param_4 + ( param_1 + lVar14 ) * 8;
   while (true) {
      StringName::StringName((StringName*)&local_48, pSVar13);
      adjust_heap(param_1, lVar14, lVar10, (StringName*)&local_48, param_4);
      if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
         StringName::unref();
      }

      pSVar13 = pSVar13 + -8;
      if (lVar14 == 0) break;
      lVar14 = lVar14 + -1;
   }
;
   ;;
   if (param_3 < param_2) goto LAB_00101c66;
   goto LAB_00101ddb;
   LAB_00101d20:StringName::StringName((StringName*)&local_50, param_4 + lVar14 * 8);
   StringName::operator =(param_4 + lVar14 * 8, param_4 + param_1 * 8);
   StringName::StringName((StringName*)&local_48, (StringName*)&local_50);
   adjust_heap(param_1, 0, lVar10, (StringName*)&local_48, param_4);
   if (( StringName::configured != '\0' ) && ( ( ( local_48 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_50 != 0 ) ) )) {
      StringName::unref();
   }

   LAB_00101da8:lVar14 = lVar14 + 1;
   if (param_2 <= lVar14) goto code_r0x00101db5;
   goto LAB_00101ca0;
   code_r0x00101db5:if (lVar10 < 2) goto LAB_00101e7b;
   LAB_00101ddb:pSVar13 = param_4 + param_3 * 8 + -8;
   lVar10 = ( param_3 + -1 ) - param_1;
   do {
      StringName::StringName((StringName*)&local_50, pSVar13);
      StringName::operator =(pSVar13, param_4 + param_1 * 8);
      StringName::StringName((StringName*)&local_48, (StringName*)&local_50);
      adjust_heap(param_1, 0, lVar10, (StringName*)&local_48, param_4);
      if (( ( StringName::configured != '\0' ) && ( ( local_48 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      pSVar13 = pSVar13 + -8;
      bVar3 = 1 < lVar10;
      lVar10 = lVar10 + -1;
   }
 while ( bVar3 );
   LAB_00101e7b:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CowData<ShaderLanguage::Scalar>::_ref(CowData<ShaderLanguage::Scalar> const&) [clone .part.0] */void CowData<ShaderLanguage::Scalar>::_ref(CowData<ShaderLanguage::Scalar> *this, CowData *param_1) {
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
/* CowData<char32_t>::TEMPNAMEPLACEHOLDERVALUE(CowData<char32_t>&&) [clone .part.0] */void CowData<char32_t>::operator =(CowData<char32_t> *this, CowData *param_1) {
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
      }
 else {
         *(undefined8*)this = 0;
      }

   }

   *(undefined8*)this = *(undefined8*)param_1;
   *(undefined8*)param_1 = 0;
   return;
}
/* SortArray<StringName, StringName::AlphCompare, true>::introsort(long, long, StringName*, long)
   const [clone .isra.0] */void SortArray<StringName,StringName::AlphCompare,true>::introsort(long param_1, long param_2, StringName *param_3, long param_4) {
   long lVar1;
   StringName *pSVar2;
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
      LAB_00102eda:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      if (param_4 != 0) {
         lVar12 = param_2 * 8;
         lVar3 = param_2;
         LAB_00102522:param_4 = param_4 + -1;
         pSVar2 = (StringName*)median_of_3(param_3 + param_1 * 8, param_3 + ( ( lVar1 >> 1 ) + param_1 ) * 8, param_3 + lVar12 + -8);
         StringName::StringName((StringName*)&local_48, pSVar2);
         param_2 = partitioner(param_1, lVar3, (StringName*)&local_48, param_3);
         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         lVar1 = lVar3 - param_2;
         if (0x10 < lVar1) {
            if (param_4 != 0) {
               lVar12 = param_4;
               lVar4 = lVar3;
               LAB_001025e1:do {
                  lVar12 = lVar12 + -1;
                  pSVar2 = (StringName*)median_of_3(param_3 + param_2 * 8, param_3 + ( ( lVar1 >> 1 ) + param_2 ) * 8, param_3 + lVar4 * 8 + -8);
                  StringName::StringName((StringName*)&local_48, pSVar2);
                  lVar3 = partitioner(param_2, lVar4, (StringName*)&local_48, param_3);
                  if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                     StringName::unref();
                  }

                  lVar1 = lVar4 - lVar3;
                  if (0x10 < lVar1) {
                     if (lVar12 != 0) {
                        lVar13 = lVar12;
                        local_138 = lVar4;
                        LAB_001026a2:do {
                           lVar13 = lVar13 + -1;
                           pSVar2 = (StringName*)median_of_3(param_3 + lVar3 * 8, param_3 + ( ( lVar1 >> 1 ) + lVar3 ) * 8, param_3 + local_138 * 8 + -8);
                           StringName::StringName((StringName*)&local_48, pSVar2);
                           lVar4 = partitioner(lVar3, local_138, (StringName*)&local_48, param_3);
                           if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                              StringName::unref();
                           }

                           lVar1 = local_138 - lVar4;
                           if (0x10 < lVar1) {
                              if (lVar13 != 0) {
                                 lVar11 = lVar13;
                                 LAB_0010275c:do {
                                    lVar11 = lVar11 + -1;
                                    lVar9 = local_138 * 8;
                                    pSVar2 = (StringName*)median_of_3(param_3 + lVar4 * 8, param_3 + ( ( lVar1 >> 1 ) + lVar4 ) * 8, param_3 + lVar9 + -8);
                                    StringName::StringName((StringName*)&local_48, pSVar2);
                                    lVar5 = partitioner(lVar4, local_138, (StringName*)&local_48, param_3);
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
                                             pSVar2 = (StringName*)median_of_3(param_3 + lVar5 * 8, param_3 + ( ( lVar1 >> 1 ) + lVar5 ) * 8, param_3 + lVar9 + -8);
                                             StringName::StringName((StringName*)&local_48, pSVar2);
                                             lVar6 = partitioner(lVar5, lVar7, (StringName*)&local_48, param_3);
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
                                                      pSVar2 = (StringName*)median_of_3(param_3 + lVar6 * 8, param_3 + ( ( lVar1 >> 1 ) + lVar6 ) * 8, param_3 + lVar9 + -8);
                                                      StringName::StringName((StringName*)&local_48, pSVar2);
                                                      lVar7 = partitioner(lVar6, lVar8, (StringName*)&local_48, param_3);
                                                      if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                                                         StringName::unref();
                                                      }

                                                      lVar1 = lVar8 - lVar7;
                                                      if (0x10 < lVar1) {
                                                         if (local_120 == 0) {
                                                            LAB_00102cae:partial_sort(lVar7, lVar8, lVar8, param_3);
                                                         }
 else {
                                                            lVar9 = lVar8;
                                                            local_138 = local_120;
                                                            do {
                                                               while (true) {
                                                                  local_138 = local_138 + -1;
                                                                  lVar14 = lVar9 * 8;
                                                                  pSVar2 = (StringName*)median_of_3(param_3 + lVar7 * 8, param_3 + ( ( lVar1 >> 1 ) + lVar7 ) * 8, param_3 + lVar14 + -8);
                                                                  StringName::StringName((StringName*)&local_48, pSVar2);
                                                                  lVar8 = partitioner(lVar7, lVar9, (StringName*)&local_48, param_3);
                                                                  if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                                                                     StringName::unref();
                                                                  }

                                                                  lVar1 = lVar9 - lVar8;
                                                                  if (0x10 < lVar1) break;
                                                                  LAB_00102c1e:lVar1 = lVar8 - lVar7;
                                                                  if (lVar1 < 0x11) {
                                                                     lVar1 = lVar7 - lVar6;
                                                                     if (lVar1 < 0x11) goto LAB_00102bd0;
                                                                     goto LAB_00102c79;
                                                                  }

                                                                  lVar9 = lVar8;
                                                                  if (local_138 == 0) goto LAB_00102cae;
                                                               }
;
                                                               ;;
                                                               if (local_138 == 0) {
                                                                  LAB_00102c0d:partial_sort(lVar8, lVar9, lVar9, param_3);
                                                                  goto LAB_00102c1e;
                                                               }

                                                               lVar10 = lVar9;
                                                               local_f8 = local_138;
                                                               while (true) {
                                                                  local_f8 = local_f8 + -1;
                                                                  pSVar2 = (StringName*)median_of_3(param_3 + lVar8 * 8, param_3 + ( ( lVar1 >> 1 ) + lVar8 ) * 8, param_3 + lVar14 + -8);
                                                                  StringName::StringName((StringName*)&local_48, pSVar2);
                                                                  lVar9 = partitioner(lVar8, lVar10, (StringName*)&local_48, param_3);
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
                                                                           pSVar2 = (StringName*)median_of_3(param_3 + lVar9 * 8, param_3 + ( ( lVar1 >> 1 ) + lVar9 ) * 8, param_3 + lVar15 * 8 + -8);
                                                                           StringName::StringName((StringName*)&local_48, pSVar2);
                                                                           lVar10 = partitioner(lVar9, lVar15, (StringName*)&local_48, param_3);
                                                                           if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                                                                              StringName::unref();
                                                                           }

                                                                           introsort(lVar10, lVar15, param_3, lVar14);
                                                                           lVar1 = lVar10 - lVar9;
                                                                           if (lVar1 < 0x11) {
                                                                              lVar1 = lVar9 - lVar8;
                                                                              if (lVar1 < 0x11) goto LAB_00102c1e;
                                                                              goto LAB_00102ba4;
                                                                           }

                                                                           lVar15 = lVar10;
                                                                        }
 while ( lVar14 != 0 );
                                                                     }

                                                                     partial_sort(lVar9, lVar10, lVar10, param_3);
                                                                  }

                                                                  lVar1 = lVar9 - lVar8;
                                                                  if (lVar1 < 0x11) break;
                                                                  if (local_f8 == 0) goto LAB_00102c0d;
                                                                  LAB_00102ba4:lVar14 = lVar9 * 8;
                                                                  lVar10 = lVar9;
                                                               }
;
                                                               ;;
                                                               lVar1 = lVar8 - lVar7;
                                                               lVar9 = lVar8;
                                                            }
 while ( 0x10 < lVar1 );
                                                         }

                                                      }

                                                      lVar1 = lVar7 - lVar6;
                                                      if (lVar1 < 0x11) {
                                                         lVar1 = lVar6 - lVar5;
                                                         if (lVar1 < 0x11) goto LAB_00102cf7;
                                                         goto LAB_00102bf1;
                                                      }

                                                      if (local_120 == 0) break;
                                                      LAB_00102c79:lVar9 = lVar7 * 8;
                                                      lVar8 = lVar7;
                                                   }
 while ( true );
                                                }

                                                partial_sort(lVar6, lVar7, lVar7, param_3);
                                             }

                                             LAB_00102bd0:lVar1 = lVar6 - lVar5;
                                             if (lVar1 < 0x11) {
                                                lVar1 = lVar5 - lVar4;
                                                local_138 = lVar5;
                                                if (lVar1 < 0x11) goto LAB_00102db0;
                                                goto LAB_0010275c;
                                             }

                                             if (local_100 == 0) break;
                                             LAB_00102bf1:lVar9 = lVar6 * 8;
                                             lVar7 = lVar6;
                                          }
 while ( true );
                                       }

                                       partial_sort(lVar5, lVar6, lVar6, param_3);
                                    }

                                    LAB_00102cf7:lVar1 = lVar5 - lVar4;
                                    if (lVar1 < 0x11) {
                                       lVar1 = lVar4 - lVar3;
                                       local_138 = lVar4;
                                       if (lVar1 < 0x11) goto LAB_00102e41;
                                       goto LAB_001026a2;
                                    }

                                    local_138 = lVar5;
                                 }
 while ( lVar11 != 0 );
                              }

                              partial_sort(lVar4, local_138, local_138, param_3);
                           }

                           LAB_00102db0:lVar1 = lVar4 - lVar3;
                           if (lVar1 < 0x11) {
                              lVar1 = lVar3 - param_2;
                              lVar4 = lVar3;
                              if (lVar1 < 0x11) goto LAB_00102ece;
                              goto LAB_001025e1;
                           }

                           local_138 = lVar4;
                        }
 while ( lVar13 != 0 );
                     }

                     partial_sort(lVar3, lVar4, lVar4, param_3);
                  }

                  LAB_00102e41:lVar1 = lVar3 - param_2;
                  if (lVar1 < 0x11) goto LAB_00102ece;
                  lVar4 = lVar3;
                  if (lVar12 == 0) break;
               }
 while ( true );
            }

            partial_sort(param_2, lVar3, lVar3, param_3);
         }

         lVar1 = param_2 - param_1;
         if (0x10 < lVar1) {
            if (param_4 != 0) goto LAB_00102ead;
            goto LAB_00102f0c;
         }

         goto LAB_00102eda;
      }

      LAB_00102f0c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         partial_sort(param_1, param_2, param_2, param_3);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_00102ece:lVar1 = param_2 - param_1;
   if (lVar1 < 0x11) goto LAB_00102eda;
   LAB_00102ead:lVar12 = param_2 * 8;
   lVar3 = param_2;
   goto LAB_00102522;
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
/* get_constant_text(ShaderLanguage::DataType, Vector<ShaderLanguage::Scalar> const&) */StrRange *get_constant_text(StrRange *param_1, undefined4 param_2, long param_3) {
   long *plVar1;
   char cVar2;
   float *pfVar3;
   code *pcVar4;
   long lVar5;
   char *pcVar6;
   long lVar7;
   long lVar8;
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   switch (param_2) {
      default:
    _err_print_error("get_constant_text","servers/rendering/shader_compiler.cpp",0x111,
                     "Method/function failed. Returning: String()",0,0);
    *(undefined8 *)param_1 = 0;
    goto LAB_00103ae8;
      case 1:
    pcVar6 = *(char **)(param_3 + 8);
    if (pcVar6 == (char *)0x0) {
LAB_00103ee0:
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(pcVar6 + -8);
      if (0 < lVar7) {
        cVar2 = *pcVar6;
        local_58 = "false";
        *(undefined8 *)param_1 = 0;
        local_50 = 5;
        if (cVar2 != '\0') {
          local_50 = 4;
          local_58 = "true";
        }
        String::parse_latin1(param_1);
        goto LAB_00103ae8;
      }
    }
    goto LAB_00103ee3;
      case 2:
      case 3:
      case 4:
    local_60 = 0;
    local_58 = (char *)&_LC28;
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_60);
    itos((long)&local_68);
      operator+((char *)&
      local_58,(String*)( (long)&_LC28 + 2 );
      String::operator +((String*)&local_70, (String*)&local_58);
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

      lVar5 = local_68;
      if (local_68 != 0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      lVar5 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      lVar5 = *(long*)( param_3 + 8 );
      for (lVar8 = 0; ( lVar5 != 0 && ( lVar8 < *(long*)( lVar5 + -8 ) ) ); lVar8 = lVar8 + 1) {
         if (lVar8 != 0) {
            String::operator +=((String*)&local_70, ",");
            lVar5 = *(long*)( param_3 + 8 );
         }

         if (lVar5 == 0) goto LAB_00103c10;
         lVar7 = *(long*)( lVar5 + -8 );
         if (lVar7 <= lVar8) goto LAB_00103c31;
         pcVar6 = "true";
         if (*(char*)( lVar5 + lVar8 * 4 ) == '\0') {
            pcVar6 = "false";
         }

         String::operator +=((String*)&local_70, pcVar6);
         lVar5 = *(long*)( param_3 + 8 );
      }

      break;
      case 5:
    if (*(long *)(param_3 + 8) == 0) goto LAB_00103ee0;
    lVar7 = *(long *)(*(long *)(param_3 + 8) + -8);
    if (0 < lVar7) {
      itos((long)param_1);
      goto LAB_00103ae8;
    }
    goto LAB_00103ee3;
      case 6:
      case 7:
      case 8:
    local_60 = 0;
    local_58 = (char *)&_LC28;
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_60);
    itos((long)&local_68);
      operator+((char *)&
      local_58,(String*)&_LC32;
      String::operator +((String*)&local_70, (String*)&local_58);
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

      lVar5 = local_68;
      if (local_68 != 0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      lVar5 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      lVar5 = *(long*)( param_3 + 8 );
      for (lVar8 = 0; ( lVar5 != 0 && ( lVar8 < *(long*)( lVar5 + -8 ) ) ); lVar8 = lVar8 + 1) {
         if (lVar8 != 0) {
            String::operator +=((String*)&local_70, ",");
            lVar5 = *(long*)( param_3 + 8 );
         }

         if (lVar5 == 0) goto LAB_00103c10;
         lVar7 = *(long*)( lVar5 + -8 );
         if (lVar7 <= lVar8) goto LAB_00103c31;
         itos((long)&local_58);
         String::operator +=((String*)&local_70, (String*)&local_58);
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

         lVar5 = *(long*)( param_3 + 8 );
      }

      break;
      case 9:
    local_60 = 0;
    local_50 = 1;
    local_58 = "u";
    String::parse_latin1((StrRange *)&local_60);
    if (*(long *)(param_3 + 8) == 0) goto LAB_00103ee0;
    lVar7 = *(long *)(*(long *)(param_3 + 8) + -8);
    if (0 < lVar7) {
      itos((long)&local_58);
      String::operator+((String *)param_1,(String *)&local_58);
      pcVar6 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar6 + -0x10,false);
        }
      }
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
      goto LAB_00103ae8;
    }
    goto LAB_00103ee3;
      case 10:
      case 0xb:
      case 0xc:
    local_60 = 0;
    local_50 = 1;
    local_58 = (char *)&_LC28;
    String::parse_latin1((StrRange *)&local_60);
    itos((long)&local_68);
      operator+((char *)&
      local_58,(String*)&_LC34;
      String::operator +((String*)&local_70, (String*)&local_58);
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

      lVar5 = local_68;
      if (local_68 != 0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      lVar5 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      lVar5 = *(long*)( param_3 + 8 );
      for (lVar8 = 0; ( lVar5 != 0 && ( lVar8 < *(long*)( lVar5 + -8 ) ) ); lVar8 = lVar8 + 1) {
         if (lVar8 != 0) {
            String::operator +=((String*)&local_70, ",");
         }

         local_60 = 0;
         local_58 = "u";
         local_50 = 1;
         String::parse_latin1((StrRange*)&local_60);
         if (*(long*)( param_3 + 8 ) == 0) {
            lVar7 = 0;
            goto LAB_00103c31;
         }

         lVar7 = *(long*)( *(long*)( param_3 + 8 ) + -8 );
         if (lVar7 <= lVar8) goto LAB_00103c31;
         itos((long)&local_68);
         String::operator +((String*)&local_58, (String*)&local_68);
         String::operator +=((String*)&local_70, (String*)&local_58);
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

         lVar5 = local_68;
         if (local_68 != 0) {
            LOCK();
            plVar1 = (long*)( local_68 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_68 = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }

         }

         lVar5 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }

         }

         lVar5 = *(long*)( param_3 + 8 );
      }

      break;
      case 0xd:
    pfVar3 = *(float **)(param_3 + 8);
    if (pfVar3 == (float *)0x0) goto LAB_00103ee0;
    lVar7 = *(long *)(pfVar3 + -2);
    if (0 < lVar7) {
      f2sp0(*pfVar3);
      goto LAB_00103ae8;
    }
LAB_00103ee3:
    lVar8 = 0;
LAB_00103c31:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar7,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
      case 0xe:
      case 0xf:
      case 0x10:
    local_60 = 0;
    local_58 = (char *)&_LC28;
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_60);
    itos((long)&local_68);
      operator+((char *)&
      local_58,(String*)&_LC35;
      String::operator +((String*)&local_70, (String*)&local_58);
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

      lVar5 = local_68;
      if (local_68 != 0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      lVar5 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      lVar5 = *(long*)( param_3 + 8 );
      for (lVar8 = 0; ( lVar5 != 0 && ( lVar8 < *(long*)( lVar5 + -8 ) ) ); lVar8 = lVar8 + 1) {
         if (lVar8 != 0) {
            String::operator +=((String*)&local_70, ",");
            lVar5 = *(long*)( param_3 + 8 );
         }

         if (lVar5 == 0) goto LAB_00103c10;
         lVar7 = *(long*)( lVar5 + -8 );
         if (lVar7 <= lVar8) goto LAB_00103c31;
         f2sp0(*(float*)( lVar5 + lVar8 * 4 ));
         String::operator +=((String*)&local_70, (String*)&local_58);
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

         lVar5 = *(long*)( param_3 + 8 );
      }

      break;
      case 0x11:
      case 0x12:
      case 0x13:
    local_60 = 0;
    local_58 = (char *)&_LC28;
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_60);
    itos((long)&local_68);
      operator+((char *)&
      local_58,(String*)&_LC36;
      String::operator +((String*)&local_70, (String*)&local_58);
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

      lVar5 = local_68;
      if (local_68 != 0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      lVar5 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      lVar5 = *(long*)( param_3 + 8 );
      for (lVar8 = 0; ( lVar5 != 0 && ( lVar8 < *(long*)( lVar5 + -8 ) ) ); lVar8 = lVar8 + 1) {
         if (lVar8 != 0) {
            String::operator +=((String*)&local_70, ",");
            lVar5 = *(long*)( param_3 + 8 );
         }

         if (lVar5 == 0) goto LAB_00103c10;
         lVar7 = *(long*)( lVar5 + -8 );
         if (lVar7 <= lVar8) goto LAB_00103c31;
         f2sp0(*(float*)( lVar5 + lVar8 * 4 ));
         String::operator +=((String*)&local_70, (String*)&local_58);
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

         lVar5 = *(long*)( param_3 + 8 );
      }

   }

   String::operator +=((String*)&local_70, (char*)( (long)&_LC28 + 7 ));
   *(undefined8*)param_1 = local_70;
   LAB_00103ae8:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_00103c10:lVar7 = 0;
   goto LAB_00103c31;
}
/* ShaderCompiler::_get_sampler_name(ShaderLanguage::TextureFilter, ShaderLanguage::TextureRepeat)
    */StrRange *ShaderCompiler::_get_sampler_name(StrRange *param_1, long param_2, int param_3, int param_4) {
   int iVar1;
   long in_FS_OFFSET;
   char *local_88[4];
   char *local_68;
   char *pcStack_60;
   char *local_58;
   char *pcStack_50;
   char *local_48;
   char *pcStack_40;
   char *local_38;
   char *pcStack_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 == 6 ) && ( param_3 = param_3 == 6 )) {
      _err_print_error("_get_sampler_name", "servers/rendering/shader_compiler.cpp", 0x117, "Condition \"actions.default_filter == ShaderLanguage::FILTER_DEFAULT\" is true. Returning: String()", 0, 0);
      *(undefined8*)param_1 = 0;
   }
 else if (( param_4 == 2 ) && ( param_4 = param_4 == 2 )) {
      _err_print_error("_get_sampler_name", "servers/rendering/shader_compiler.cpp", 0x11b, "Condition \"actions.default_repeat == ShaderLanguage::REPEAT_DEFAULT\" is true. Returning: String()", 0, 0);
      *(undefined8*)param_1 = 0;
   }
 else {
      *(undefined8*)param_1 = 0;
      local_88[0] = "SAMPLER_NEAREST_CLAMP";
      local_88[1] = "SAMPLER_LINEAR_CLAMP";
      local_88[2] = "SAMPLER_NEAREST_WITH_MIPMAPS_CLAMP";
      local_88[3] = "SAMPLER_LINEAR_WITH_MIPMAPS_CLAMP";
      local_68 = "SAMPLER_NEAREST_WITH_MIPMAPS_ANISOTROPIC_CLAMP";
      pcStack_60 = "SAMPLER_LINEAR_WITH_MIPMAPS_ANISOTROPIC_CLAMP";
      iVar1 = 0;
      if (param_4 == 1) {
         iVar1 = 6;
      }

      local_58 = "SAMPLER_NEAREST_REPEAT";
      pcStack_50 = "SAMPLER_LINEAR_REPEAT";
      local_48 = "SAMPLER_NEAREST_WITH_MIPMAPS_REPEAT";
      pcStack_40 = "SAMPLER_LINEAR_WITH_MIPMAPS_REPEAT";
      local_38 = "SAMPLER_NEAREST_WITH_MIPMAPS_ANISOTROPIC_REPEAT";
      pcStack_30 = "SAMPLER_LINEAR_WITH_MIPMAPS_ANISOTROPIC_REPEAT";
      if (local_88[param_3 + iVar1] != (char*)0x0) {
         strlen(local_88[param_3 + iVar1]);
      }

      String::parse_latin1(param_1);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* ShaderCompiler::ShaderCompiler() */void ShaderCompiler::ShaderCompiler(ShaderCompiler *this) {
   undefined8 uVar1;
   undefined8 uVar2;
   ShaderLanguage::ShaderLanguage((ShaderLanguage*)this);
   uVar1 = _LC55;
   *(undefined1(*) [16])( this + 0x308 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x348 ) = uVar1;
   *(undefined8*)( this + 0x370 ) = uVar1;
   *(undefined8*)( this + 0x398 ) = uVar1;
   *(undefined8*)( this + 0x3c0 ) = uVar1;
   *(undefined8*)( this + 1000 ) = uVar1;
   *(undefined8*)( this + 0x410 ) = uVar1;
   *(undefined8*)( this + 0x440 ) = uVar1;
   *(undefined8*)( this + 0x470 ) = uVar1;
   *(undefined8*)( this + 0x4a0 ) = uVar1;
   *(undefined1(*) [16])( this + 0x318 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x328 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x338 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x350 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x360 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x378 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x388 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x3a0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x3b0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x3c8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x3d8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x3f0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x400 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x420 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x430 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x450 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x460 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x480 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x490 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x4b0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x4c0 ) = (undefined1[16])0x0;
   uVar2 = _UNK_0011df68;
   uVar1 = _LC55;
   *(undefined8*)( this + 0x4e0 ) = 0;
   *(undefined8*)( this + 0x4f8 ) = 0;
   *(undefined4*)( this + 0x500 ) = 0;
   *(undefined2*)( this + 0x504 ) = 0;
   *(undefined8*)( this + 0x4d0 ) = uVar1;
   *(undefined8*)( this + 0x4d8 ) = uVar2;
   *(undefined1(*) [16])( this + 0x4e8 ) = (undefined1[16])0x0;
   return;
}
/* CowData<String>::_ref(CowData<String> const&) [clone .part.0] */void CowData<String>::_ref(CowData<String> *this, CowData *param_1) {
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
/* CowData<String>::_copy_on_write() [clone .isra.0] */void CowData<String>::_copy_on_write(CowData<String> *this) {
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
/* CowData<StringName>::_copy_on_write() [clone .isra.0] */void CowData<StringName>::_copy_on_write(CowData<StringName> *this) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   long lVar5;
   ulong uVar6;
   StringName *this_00;
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
      this_00 = (StringName*)( puVar4 + 2 );
      if (lVar2 != 0) {
         do {
            lVar1 = lVar5 * 8;
            lVar5 = lVar5 + 1;
            StringName::StringName(this_00, (StringName*)( *(long*)this + lVar1 ));
            this_00 = this_00 + 8;
         }
 while ( lVar2 != lVar5 );
      }

      _unref(this);
      *(StringName**)this = (StringName*)( puVar4 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* Vector<StringName>::push_back(StringName) [clone .isra.0] */void Vector<StringName>::push_back(Vector<StringName> *this, StringName *param_2) {
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<StringName>::resize<false>((CowData<StringName>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<StringName>::_copy_on_write((CowData<StringName>*)( this + 8 ));
            StringName::operator =((StringName*)( *(long*)( this + 8 ) + lVar3 * 8 ), param_2);
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* ShaderCompiler::_dump_function_deps(ShaderLanguage::ShaderNode const*, StringName const&,
   HashMap<StringName, String, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, String> > > const&, String&, HashSet<StringName,
   HashMapHasherDefault, HashMapComparatorDefault<StringName> >&) */void ShaderCompiler::_dump_function_deps(ShaderCompiler *this, ShaderNode *param_1, StringName *param_2, HashMap *param_3, String *param_4, HashSet *param_5) {
   uint uVar1;
   uint uVar2;
   long *plVar3;
   char *pcVar4;
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
   code *pcVar21;
   char *pcVar22;
   char *pcVar23;
   long *plVar24;
   long *plVar25;
   long lVar26;
   long lVar27;
   long lVar28;
   long lVar29;
   int iVar30;
   int iVar31;
   StringName *pSVar32;
   long lVar33;
   uint uVar34;
   ulong uVar35;
   uint uVar36;
   long lVar37;
   uint uVar38;
   ulong uVar39;
   long in_FS_OFFSET;
   bool bVar40;
   StringName *local_128;
   long local_120;
   StrRange *local_118;
   char *local_b8;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   Vector<StringName> local_68[8];
   StringName *local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   plVar3 = *(long**)( param_1 + 0x120 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar3 == (long*)0x0) {
      LAB_001068e8:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("_dump_function_deps", "servers/rendering/shader_compiler.cpp", 0x139, "Condition \"fidx == -1\" is true.", 0, 0);
         return;
      }

   }
 else {
      lVar37 = plVar3[-1];
      plVar24 = plVar3;
      lVar28 = 0;
      do {
         lVar29 = lVar28;
         if (lVar37 <= lVar29) goto LAB_001068e8;
         lVar26 = *plVar24;
         plVar24 = plVar24 + 9;
         lVar28 = lVar29 + 1;
      }
 while ( lVar26 != *(long*)param_2 );
      local_60 = (StringName*)0x0;
      lVar28 = (long)(int)lVar29;
      if (lVar37 <= lVar28) {
         LAB_00106950:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar28, lVar37, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar21 = (code*)invalidInstructionException();
         ( *pcVar21 )();
      }

      iVar30 = *(int*)( (long)plVar3 + lVar28 * 0x48 + 0x3c );
      if (iVar30 != 0) {
         pSVar32 = (StringName*)plVar3[lVar28 * 9 + 3];
         iVar31 = 1;
         while (true) {
            StringName::StringName((StringName*)&local_58, pSVar32);
            Vector<StringName>::push_back(local_68, (StringName*)&local_58);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            if (iVar30 <= iVar31) break;
            iVar31 = iVar31 + 1;
            pSVar32 = pSVar32 + 8;
         }
;
         ;;
         if (local_60 != (StringName*)0x0) {
            lVar37 = *(long*)( local_60 + -8 );
            if (lVar37 != 0) {
               CowData<StringName>::_copy_on_write((CowData<StringName>*)&local_60);
               local_128 = local_60;
               if (lVar37 == 1) {
                  SortArray<StringName,StringName::AlphCompare,true>::introsort(0, 1, local_60, 0);
               }
 else {
                  lVar29 = 0;
                  lVar28 = lVar37;
                  do {
                     lVar28 = lVar28 >> 1;
                     lVar29 = lVar29 + 1;
                  }
 while ( lVar28 != 1 );
                  SortArray<StringName,StringName::AlphCompare,true>::introsort(0, lVar37, local_60, lVar29 * 2);
                  if (lVar37 < 0x11) {
                     lVar28 = 1;
                     do {
                        lVar29 = lVar28 + 1;
                        SortArray<StringName,StringName::AlphCompare,true>::linear_insert(0, lVar28, local_128);
                        lVar28 = lVar29;
                     }
 while ( lVar37 != lVar29 );
                  }
 else {
                     lVar28 = 1;
                     do {
                        lVar29 = lVar28 + 1;
                        SortArray<StringName,StringName::AlphCompare,true>::linear_insert(0, lVar28, local_128);
                        lVar28 = lVar29;
                     }
 while ( lVar29 != 0x10 );
                     lVar28 = 0x10;
                     do {
                        StringName::StringName((StringName*)&local_58, local_128 + lVar28 * 8);
                        SortArray<StringName,StringName::AlphCompare,true>::unguarded_linear_insert(lVar28, (StringName*)&local_58, local_128);
                        if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                           StringName::unref();
                        }

                        lVar28 = lVar28 + 1;
                     }
 while ( lVar37 != lVar28 );
                  }

               }

               if (local_128 != (StringName*)0x0) {
                  local_120 = 0;
                  do {
                     if (*(long*)( local_128 + -8 ) <= local_120) break;
                     pSVar32 = local_128 + local_120 * 8;
                     lVar28 = local_120;
                     if (( *(long*)param_5 != 0 ) && ( *(int*)( param_5 + 0x24 ) != 0 )) {
                        uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_5 + 0x20 ) * 4 );
                        lVar37 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_5 + 0x20 ) * 8 );
                        if (*(long*)pSVar32 == 0) {
                           uVar36 = StringName::get_empty_hash();
                        }
 else {
                           uVar36 = *(uint*)( *(long*)pSVar32 + 0x20 );
                        }

                        uVar35 = CONCAT44(0, uVar1);
                        if (uVar36 == 0) {
                           uVar36 = 1;
                        }

                        auVar5._8_8_ = 0;
                        auVar5._0_8_ = (ulong)uVar36 * lVar37;
                        auVar13._8_8_ = 0;
                        auVar13._0_8_ = uVar35;
                        lVar29 = SUB168(auVar5 * auVar13, 8);
                        uVar34 = *(uint*)( *(long*)( param_5 + 0x18 ) + lVar29 * 4 );
                        iVar30 = SUB164(auVar5 * auVar13, 8);
                        if (uVar34 != 0) {
                           uVar38 = 0;
                           do {
                              if (( uVar36 == uVar34 ) && ( *(long*)( *(long*)param_5 + ( ulong ) * (uint*)( *(long*)( param_5 + 8 ) + lVar29 * 4 ) * 8 ) == *(long*)pSVar32 )) goto LAB_00106849;
                              uVar38 = uVar38 + 1;
                              auVar6._8_8_ = 0;
                              auVar6._0_8_ = ( ulong )(iVar30 + 1) * lVar37;
                              auVar14._8_8_ = 0;
                              auVar14._0_8_ = uVar35;
                              lVar29 = SUB168(auVar6 * auVar14, 8);
                              uVar34 = *(uint*)( *(long*)( param_5 + 0x18 ) + lVar29 * 4 );
                              iVar30 = SUB164(auVar6 * auVar14, 8);
                           }
 while ( ( uVar34 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar34 * lVar37,auVar15._8_8_ = 0,auVar15._0_8_ = uVar35,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar1 + iVar30 ) - SUB164(auVar7 * auVar15, 8)) * lVar37,auVar16._8_8_ = 0,auVar16._0_8_ = uVar35,uVar38 <= SUB164(auVar8 * auVar16, 8) );
                        }

                        lVar37 = *(long*)( local_128 + -8 );
                        if (lVar37 <= local_120) goto LAB_00106950;
                     }

                     _dump_function_deps(this, param_1, pSVar32, param_3, param_4, param_5);
                     plVar3 = *(long**)( param_1 + 0x120 );
                     if (plVar3 == (long*)0x0) {
                        LAB_00107789:_err_print_error("_dump_function_deps", "servers/rendering/shader_compiler.cpp", 0x152, "Parameter \"fnode\" is null.", 0, 0);
                        CowData<StringName>::_unref((CowData<StringName>*)&local_60);
                        goto LAB_00106880;
                     }

                     lVar29 = 0;
                     plVar24 = plVar3;
                     do {
                        plVar25 = plVar24;
                        if (plVar3[-1] <= lVar29) goto LAB_00107789;
                        lVar37 = *(long*)( local_128 + -8 );
                        if (lVar37 <= local_120) goto LAB_00106950;
                        lVar29 = lVar29 + 1;
                        plVar24 = plVar25 + 9;
                     }
 while ( *plVar25 != *(long*)pSVar32 );
                     lVar29 = plVar25[2];
                     if (lVar29 == 0) goto LAB_00107789;
                     String::operator +=(param_4, "\n");
                     local_b8 = (char*)0x0;
                     if (*(int*)( lVar29 + 0x28 ) == 0x20) {
                        lVar37 = *(long*)( lVar29 + 0x30 );
                        if (lVar37 == 0) {
                           local_70 = 0;
                        }
 else {
                           pcVar4 = *(char**)( lVar37 + 8 );
                           local_70 = 0;
                           if (pcVar4 == (char*)0x0) {
                              if (*(long*)( lVar37 + 0x10 ) != 0) {
                                 CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)( lVar37 + 0x10 ));
                              }

                           }
 else {
                              local_50 = strlen(pcVar4);
                              local_58 = pcVar4;
                              String::parse_latin1((StrRange*)&local_70);
                           }

                        }

                        _mkid((String*)&local_58);
                        pcVar22 = local_58;
                        pcVar4 = local_b8;
                        if (local_b8 == local_58) {
                           if (local_b8 != (char*)0x0) {
                              LOCK();
                              plVar3 = (long*)( local_b8 + -0x10 );
                              *plVar3 = *plVar3 + -1;
                              UNLOCK();
                              if (*plVar3 == 0) {
                                 local_58 = (char*)0x0;
                                 Memory::free_static(pcVar22 + -0x10, false);
                              }

                           }

                        }
 else {
                           if (local_b8 != (char*)0x0) {
                              LOCK();
                              plVar3 = (long*)( local_b8 + -0x10 );
                              *plVar3 = *plVar3 + -1;
                              UNLOCK();
                              if (*plVar3 == 0) {
                                 local_b8 = (char*)0x0;
                                 Memory::free_static(pcVar4 + -0x10, false);
                              }

                           }

                           local_b8 = local_58;
                        }

                        lVar37 = local_70;
                        pcVar23 = local_b8;
                        if (local_70 != 0) {
                           LOCK();
                           plVar3 = (long*)( local_70 + -0x10 );
                           *plVar3 = *plVar3 + -1;
                           UNLOCK();
                           if (*plVar3 == 0) {
                              local_70 = 0;
                              Memory::free_static((void*)( lVar37 + -0x10 ), false);
                              pcVar23 = local_b8;
                           }

                        }

                     }
 else {
                        _typestr((StringName*)&local_58);
                        pcVar22 = local_58;
                        pcVar4 = local_b8;
                        if (local_b8 == local_58) {
                           pcVar23 = local_b8;
                           if (local_b8 != (char*)0x0) {
                              LOCK();
                              plVar3 = (long*)( local_b8 + -0x10 );
                              *plVar3 = *plVar3 + -1;
                              UNLOCK();
                              if (*plVar3 == 0) {
                                 local_58 = (char*)0x0;
                                 Memory::free_static(pcVar22 + -0x10, false);
                                 pcVar23 = local_b8;
                              }

                           }

                        }
 else {
                           pcVar23 = local_58;
                           if (local_b8 != (char*)0x0) {
                              LOCK();
                              plVar3 = (long*)( local_b8 + -0x10 );
                              *plVar3 = *plVar3 + -1;
                              UNLOCK();
                              pcVar23 = local_58;
                              if (*plVar3 == 0) {
                                 local_b8 = (char*)0x0;
                                 Memory::free_static(pcVar4 + -0x10, false);
                                 pcVar23 = local_58;
                              }

                           }

                        }

                     }

                     local_b8 = pcVar23;
                     local_118 = (StrRange*)&local_70;
                     if (0 < *(int*)( lVar29 + 0x3c )) {
                        String::operator +=((String*)&local_b8, "[");
                        itos((long)&local_58);
                        String::operator +=((String*)&local_b8, (String*)&local_58);
                        pcVar4 = local_58;
                        if (local_58 != (char*)0x0) {
                           LOCK();
                           plVar3 = (long*)( local_58 + -0x10 );
                           *plVar3 = *plVar3 + -1;
                           UNLOCK();
                           if (*plVar3 == 0) {
                              local_58 = (char*)0x0;
                              Memory::free_static(pcVar4 + -0x10, false);
                           }

                        }

                        String::operator +=((String*)&local_b8, "]");
                     }

                     String::operator +=((String*)&local_b8, " ");
                     lVar37 = *(long*)( lVar29 + 0x20 );
                     if (lVar37 == 0) {
                        local_70 = 0;
                     }
 else {
                        pcVar4 = *(char**)( lVar37 + 8 );
                        local_70 = 0;
                        if (pcVar4 == (char*)0x0) {
                           plVar3 = (long*)( *(long*)( lVar37 + 0x10 ) + -0x10 );
                           if (*(long*)( lVar37 + 0x10 ) != 0) {
                              do {
                                 lVar28 = *plVar3;
                                 if (lVar28 == 0) goto LAB_00106bb3;
                                 LOCK();
                                 lVar26 = *plVar3;
                                 bVar40 = lVar28 == lVar26;
                                 if (bVar40) {
                                    *plVar3 = lVar28 + 1;
                                    lVar26 = lVar28;
                                 }

                                 UNLOCK();
                              }
 while ( !bVar40 );
                              if (lVar26 != -1) {
                                 local_70 = *(long*)( lVar37 + 0x10 );
                              }

                           }

                        }
 else {
                           local_50 = strlen(pcVar4);
                           local_58 = pcVar4;
                           String::parse_latin1(local_118);
                        }

                     }

                     LAB_00106bb3:_mkid((String*)&local_58);
                     String::operator +=((String*)&local_b8, (String*)&local_58);
                     pcVar4 = local_58;
                     if (local_58 != (char*)0x0) {
                        LOCK();
                        plVar3 = (long*)( local_58 + -0x10 );
                        *plVar3 = *plVar3 + -1;
                        UNLOCK();
                        if (*plVar3 == 0) {
                           local_58 = (char*)0x0;
                           Memory::free_static(pcVar4 + -0x10, false);
                        }

                     }

                     lVar37 = local_70;
                     if (local_70 != 0) {
                        LOCK();
                        plVar3 = (long*)( local_70 + -0x10 );
                        *plVar3 = *plVar3 + -1;
                        UNLOCK();
                        if (*plVar3 == 0) {
                           local_70 = 0;
                           Memory::free_static((void*)( lVar37 + -0x10 ), false);
                        }

                     }

                     lVar28 = 0;
                     String::operator +=((String*)&local_b8, (char*)&_LC28);
                     lVar26 = *(long*)( lVar29 + 0x48 );
                     if (( lVar26 != 0 ) && ( 0 < *(long*)( lVar26 + -8 ) )) {
                        LAB_00106c74:if (lVar28 != 0) {
                           String::operator +=((String*)&local_b8, ", ");
                           lVar26 = *(long*)( lVar29 + 0x48 );
                        }

                        if (lVar26 != 0) {
                           lVar37 = *(long*)( lVar26 + -8 );
                           if (lVar37 <= lVar28) goto LAB_00106950;
                           lVar33 = lVar28 * 0x80;
                           local_70 = 0;
                           if (*(char*)( lVar26 + 0x44 + lVar33 ) == '\0') {
                              local_50 = 0;
                              local_58 = "";
                              String::parse_latin1(local_118);
                           }
 else {
                              local_50 = 6;
                              local_58 = "const ";
                              String::parse_latin1(local_118);
                           }

                           String::operator +=((String*)&local_b8, (String*)local_118);
                           lVar37 = local_70;
                           if (local_70 != 0) {
                              LOCK();
                              plVar3 = (long*)( local_70 + -0x10 );
                              *plVar3 = *plVar3 + -1;
                              UNLOCK();
                              if (*plVar3 == 0) {
                                 local_70 = 0;
                                 Memory::free_static((void*)( lVar37 + -0x10 ), false);
                              }

                           }

                           lVar26 = *(long*)( lVar29 + 0x48 );
                           if (lVar26 == 0) goto LAB_001072b0;
                           lVar37 = *(long*)( lVar26 + -8 );
                           if (lVar37 <= lVar28) goto LAB_00106950;
                           lVar37 = *(long*)( lVar26 + lVar33 + 8 );
                           if (*(int*)( lVar26 + lVar33 + 0x10 ) == 0x20) {
                              if (lVar37 == 0) {
                                 local_78 = 0;
                              }
 else {
                                 pcVar4 = *(char**)( lVar37 + 8 );
                                 local_78 = 0;
                                 if (pcVar4 == (char*)0x0) {
                                    if (*(long*)( lVar37 + 0x10 ) != 0) {
                                       CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)( lVar37 + 0x10 ));
                                    }

                                 }
 else {
                                    local_50 = strlen(pcVar4);
                                    local_58 = pcVar4;
                                    String::parse_latin1((StrRange*)&local_78);
                                 }

                              }

                              _mkid((String*)local_118);
                              local_58 = " ";
                              local_88 = 0;
                              local_50 = 1;
                              String::parse_latin1((StrRange*)&local_88);
                              lVar26 = *(long*)( lVar29 + 0x48 );
                              if (lVar26 == 0) goto LAB_001072b0;
                              lVar37 = *(long*)( lVar26 + -8 );
                              if (lVar37 <= lVar28) goto LAB_00106950;
                              lVar37 = *(long*)( lVar26 + 0x18 + lVar33 );
                              if (lVar37 == 0) {
                                 local_a0 = 0;
                              }
 else {
                                 pcVar4 = *(char**)( lVar37 + 8 );
                                 local_a0 = 0;
                                 if (pcVar4 == (char*)0x0) {
                                    if (*(long*)( lVar37 + 0x10 ) != 0) {
                                       CowData<char32_t>::_ref((CowData<char32_t>*)&local_a0, (CowData*)( lVar37 + 0x10 ));
                                    }

                                 }
 else {
                                    local_50 = strlen(pcVar4);
                                    local_58 = pcVar4;
                                    String::parse_latin1((StrRange*)&local_a0);
                                 }

                              }

                              _mkid((String*)&local_98);
                              lVar26 = *(long*)( lVar29 + 0x48 );
                              if (lVar26 == 0) goto LAB_001072b0;
                              lVar37 = *(long*)( lVar26 + -8 );
                              if (lVar37 <= lVar28) goto LAB_00106950;
                              _qualstr((String*)&local_a8, *(undefined4*)( lVar26 + lVar33 ));
                              String::operator +((String*)&local_90, (String*)&local_a8);
                              String::operator +((String*)&local_80, (String*)&local_90);
                              String::operator +((String*)&local_58, (String*)&local_80);
                              String::operator +=((String*)&local_b8, (String*)&local_58);
                              pcVar4 = local_58;
                              if (local_58 != (char*)0x0) {
                                 LOCK();
                                 plVar3 = (long*)( local_58 + -0x10 );
                                 *plVar3 = *plVar3 + -1;
                                 UNLOCK();
                                 if (*plVar3 == 0) {
                                    local_58 = (char*)0x0;
                                    Memory::free_static(pcVar4 + -0x10, false);
                                 }

                              }

                              lVar37 = local_80;
                              if (local_80 != 0) {
                                 LOCK();
                                 plVar3 = (long*)( local_80 + -0x10 );
                                 *plVar3 = *plVar3 + -1;
                                 UNLOCK();
                                 if (*plVar3 == 0) {
                                    local_80 = 0;
                                    Memory::free_static((void*)( lVar37 + -0x10 ), false);
                                 }

                              }

                              lVar37 = local_90;
                              if (local_90 != 0) {
                                 LOCK();
                                 plVar3 = (long*)( local_90 + -0x10 );
                                 *plVar3 = *plVar3 + -1;
                                 UNLOCK();
                                 if (*plVar3 == 0) {
                                    local_90 = 0;
                                    Memory::free_static((void*)( lVar37 + -0x10 ), false);
                                 }

                              }

                              lVar37 = local_a8;
                              if (local_a8 != 0) {
                                 LOCK();
                                 plVar3 = (long*)( local_a8 + -0x10 );
                                 *plVar3 = *plVar3 + -1;
                                 UNLOCK();
                                 if (*plVar3 == 0) {
                                    local_a8 = 0;
                                    Memory::free_static((void*)( lVar37 + -0x10 ), false);
                                 }

                              }

                              lVar37 = local_98;
                              if (local_98 != 0) {
                                 LOCK();
                                 plVar3 = (long*)( local_98 + -0x10 );
                                 *plVar3 = *plVar3 + -1;
                                 UNLOCK();
                                 if (*plVar3 == 0) {
                                    local_98 = 0;
                                    Memory::free_static((void*)( lVar37 + -0x10 ), false);
                                 }

                              }

                              lVar37 = local_a0;
                              if (local_a0 != 0) {
                                 LOCK();
                                 plVar3 = (long*)( local_a0 + -0x10 );
                                 *plVar3 = *plVar3 + -1;
                                 UNLOCK();
                                 if (*plVar3 == 0) {
                                    local_a0 = 0;
                                    Memory::free_static((void*)( lVar37 + -0x10 ), false);
                                 }

                              }

                              LAB_0010702f:lVar37 = local_88;
                              if (local_88 != 0) {
                                 LOCK();
                                 plVar3 = (long*)( local_88 + -0x10 );
                                 *plVar3 = *plVar3 + -1;
                                 UNLOCK();
                                 if (*plVar3 == 0) {
                                    local_88 = 0;
                                    Memory::free_static((void*)( lVar37 + -0x10 ), false);
                                 }

                              }

                              lVar37 = local_70;
                              if (local_70 != 0) {
                                 LOCK();
                                 plVar3 = (long*)( local_70 + -0x10 );
                                 *plVar3 = *plVar3 + -1;
                                 UNLOCK();
                                 if (*plVar3 == 0) {
                                    local_70 = 0;
                                    Memory::free_static((void*)( lVar37 + -0x10 ), false);
                                 }

                              }

                              lVar37 = local_78;
                              if (local_78 != 0) {
                                 LOCK();
                                 plVar3 = (long*)( local_78 + -0x10 );
                                 *plVar3 = *plVar3 + -1;
                                 UNLOCK();
                                 if (*plVar3 == 0) {
                                    local_78 = 0;
                                    Memory::free_static((void*)( lVar37 + -0x10 ), false);
                                 }

                              }

                              lVar26 = *(long*)( lVar29 + 0x48 );
                              if (lVar26 == 0) goto LAB_001072b0;
                              lVar37 = *(long*)( lVar26 + -8 );
                              if (lVar37 <= lVar28) goto LAB_00106950;
                              if (0 < *(int*)( lVar26 + 0x48 + lVar33 )) {
                                 String::operator +=((String*)&local_b8, "[");
                                 if (*(long*)( lVar29 + 0x48 ) == 0) goto LAB_001072b0;
                                 lVar37 = *(long*)( *(long*)( lVar29 + 0x48 ) + -8 );
                                 if (lVar37 <= lVar28) goto LAB_00106950;
                                 itos((long)&local_58);
                                 String::operator +=((String*)&local_b8, (String*)&local_58);
                                 pcVar4 = local_58;
                                 if (local_58 != (char*)0x0) {
                                    LOCK();
                                    plVar3 = (long*)( local_58 + -0x10 );
                                    *plVar3 = *plVar3 + -1;
                                    UNLOCK();
                                    if (*plVar3 == 0) {
                                       local_58 = (char*)0x0;
                                       Memory::free_static(pcVar4 + -0x10, false);
                                    }

                                 }

                                 String::operator +=((String*)&local_b8, "]");
                                 lVar26 = *(long*)( lVar29 + 0x48 );
                                 if (lVar26 == 0) goto LAB_00107109;
                              }

                              lVar28 = lVar28 + 1;
                              if (*(long*)( lVar26 + -8 ) <= lVar28) goto LAB_00107109;
                              goto LAB_00106c74;
                           }

                           if (lVar37 == 0) {
                              LAB_0010784b:local_78 = 0;
                           }
 else {
                              pcVar4 = *(char**)( lVar37 + 8 );
                              local_78 = 0;
                              if (pcVar4 == (char*)0x0) {
                                 plVar3 = (long*)( *(long*)( lVar37 + 0x10 ) + -0x10 );
                                 if (*(long*)( lVar37 + 0x10 ) == 0) goto LAB_0010784b;
                                 do {
                                    lVar26 = *plVar3;
                                    if (lVar26 == 0) goto LAB_0010784b;
                                    LOCK();
                                    lVar27 = *plVar3;
                                    bVar40 = lVar26 == lVar27;
                                    if (bVar40) {
                                       *plVar3 = lVar26 + 1;
                                       lVar27 = lVar26;
                                    }

                                    UNLOCK();
                                 }
 while ( !bVar40 );
                                 if (lVar27 != -1) {
                                    local_78 = *(long*)( lVar37 + 0x10 );
                                 }

                              }
 else {
                                 local_50 = strlen(pcVar4);
                                 local_58 = pcVar4;
                                 String::parse_latin1((StrRange*)&local_78);
                              }

                           }

                           _mkid((String*)local_118);
                           local_58 = " ";
                           local_88 = 0;
                           local_50 = 1;
                           String::parse_latin1((StrRange*)&local_88);
                           lVar26 = *(long*)( lVar29 + 0x48 );
                           if (lVar26 == 0) goto LAB_001072b0;
                           lVar37 = *(long*)( lVar26 + -8 );
                           if (lVar37 <= lVar28) goto LAB_00106950;
                           _typestr(&local_98, *(undefined4*)( lVar26 + 0x10 + lVar33 ));
                           lVar26 = *(long*)( lVar29 + 0x48 );
                           if (lVar26 != 0) {
                              lVar37 = *(long*)( lVar26 + -8 );
                              if (lVar37 <= lVar28) goto LAB_00106950;
                              _prestr(&local_a8, *(undefined4*)( lVar26 + 0x20 + lVar33 ), 0);
                              lVar26 = *(long*)( lVar29 + 0x48 );
                              if (lVar26 != 0) {
                                 lVar37 = *(long*)( lVar26 + -8 );
                                 if (lVar28 < lVar37) {
                                    _qualstr((String*)&local_b0, *(undefined4*)( lVar26 + lVar33 ));
                                    String::operator +((String*)&local_a0, (String*)&local_b0);
                                    String::operator +((String*)&local_90, (String*)&local_a0);
                                    String::operator +((String*)&local_80, (String*)&local_90);
                                    String::operator +((String*)&local_58, (String*)&local_80);
                                    String::operator +=((String*)&local_b8, (String*)&local_58);
                                    pcVar4 = local_58;
                                    if (local_58 != (char*)0x0) {
                                       LOCK();
                                       plVar3 = (long*)( local_58 + -0x10 );
                                       *plVar3 = *plVar3 + -1;
                                       UNLOCK();
                                       if (*plVar3 == 0) {
                                          local_58 = (char*)0x0;
                                          Memory::free_static(pcVar4 + -0x10, false);
                                       }

                                    }

                                    lVar37 = local_80;
                                    if (local_80 != 0) {
                                       LOCK();
                                       plVar3 = (long*)( local_80 + -0x10 );
                                       *plVar3 = *plVar3 + -1;
                                       UNLOCK();
                                       if (*plVar3 == 0) {
                                          local_80 = 0;
                                          Memory::free_static((void*)( lVar37 + -0x10 ), false);
                                       }

                                    }

                                    lVar37 = local_90;
                                    if (local_90 != 0) {
                                       LOCK();
                                       plVar3 = (long*)( local_90 + -0x10 );
                                       *plVar3 = *plVar3 + -1;
                                       UNLOCK();
                                       if (*plVar3 == 0) {
                                          local_90 = 0;
                                          Memory::free_static((void*)( lVar37 + -0x10 ), false);
                                       }

                                    }

                                    lVar37 = local_a0;
                                    if (local_a0 != 0) {
                                       LOCK();
                                       plVar3 = (long*)( local_a0 + -0x10 );
                                       *plVar3 = *plVar3 + -1;
                                       UNLOCK();
                                       if (*plVar3 == 0) {
                                          local_a0 = 0;
                                          Memory::free_static((void*)( lVar37 + -0x10 ), false);
                                       }

                                    }

                                    lVar37 = local_b0;
                                    if (local_b0 != 0) {
                                       LOCK();
                                       plVar3 = (long*)( local_b0 + -0x10 );
                                       *plVar3 = *plVar3 + -1;
                                       UNLOCK();
                                       if (*plVar3 == 0) {
                                          local_b0 = 0;
                                          Memory::free_static((void*)( lVar37 + -0x10 ), false);
                                       }

                                    }

                                    lVar37 = local_a8;
                                    if (local_a8 != 0) {
                                       LOCK();
                                       plVar3 = (long*)( local_a8 + -0x10 );
                                       *plVar3 = *plVar3 + -1;
                                       UNLOCK();
                                       if (*plVar3 == 0) {
                                          local_a8 = 0;
                                          Memory::free_static((void*)( lVar37 + -0x10 ), false);
                                       }

                                    }

                                    lVar37 = local_98;
                                    if (local_98 != 0) {
                                       LOCK();
                                       plVar3 = (long*)( local_98 + -0x10 );
                                       *plVar3 = *plVar3 + -1;
                                       UNLOCK();
                                       if (*plVar3 == 0) {
                                          local_98 = 0;
                                          Memory::free_static((void*)( lVar37 + -0x10 ), false);
                                       }

                                    }

                                    goto LAB_0010702f;
                                 }

                                 goto LAB_00106950;
                              }

                           }

                        }

                        LAB_001072b0:lVar37 = 0;
                        goto LAB_00106950;
                     }

                     LAB_00107109:String::operator +=((String*)&local_b8, ")\n");
                     String::operator +=(param_4, (String*)&local_b8);
                     lVar37 = *(long*)( local_128 + -8 );
                     lVar28 = local_120;
                     if (lVar37 <= local_120) goto LAB_00106950;
                     if (( *(long*)( param_3 + 8 ) == 0 ) || ( *(int*)( param_3 + 0x2c ) == 0 )) {
                        LAB_001079bf:_err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
                        _err_flush_stdout();
                        /* WARNING: Does not return */
                        pcVar21 = (code*)invalidInstructionException();
                        ( *pcVar21 )();
                     }

                     uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_3 + 0x28 ) * 4 );
                     uVar35 = CONCAT44(0, uVar1);
                     lVar37 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_3 + 0x28 ) * 8 );
                     if (*(long*)pSVar32 == 0) {
                        uVar36 = StringName::get_empty_hash();
                     }
 else {
                        uVar36 = *(uint*)( *(long*)pSVar32 + 0x20 );
                     }

                     uVar34 = 1;
                     if (uVar36 != 0) {
                        uVar34 = uVar36;
                     }

                     auVar9._8_8_ = 0;
                     auVar9._0_8_ = (ulong)uVar34 * lVar37;
                     auVar17._8_8_ = 0;
                     auVar17._0_8_ = uVar35;
                     lVar28 = SUB168(auVar9 * auVar17, 8);
                     uVar38 = SUB164(auVar9 * auVar17, 8);
                     uVar36 = *(uint*)( *(long*)( param_3 + 0x10 ) + lVar28 * 4 );
                     uVar39 = (ulong)uVar36;
                     if (uVar36 == 0) goto LAB_001079bf;
                     uVar36 = 0;
                     while (( uVar34 != (uint)uVar39 || ( *(long*)( *(long*)( *(long*)( param_3 + 8 ) + lVar28 * 8 ) + 0x10 ) != *(long*)pSVar32 ) )) {
                        uVar36 = uVar36 + 1;
                        auVar10._8_8_ = 0;
                        auVar10._0_8_ = ( ulong )(uVar38 + 1) * lVar37;
                        auVar18._8_8_ = 0;
                        auVar18._0_8_ = uVar35;
                        lVar28 = SUB168(auVar10 * auVar18, 8);
                        uVar2 = *(uint*)( *(long*)( param_3 + 0x10 ) + lVar28 * 4 );
                        uVar39 = (ulong)uVar2;
                        uVar38 = SUB164(auVar10 * auVar18, 8);
                        if (( uVar2 == 0 ) || ( auVar11._8_8_ = 0 ),auVar11._0_8_ = uVar39 * lVar37,auVar19._8_8_ = 0,auVar19._0_8_ = uVar35,auVar12._8_8_ = 0,auVar12._0_8_ = ( ulong )(( uVar1 + uVar38 ) - SUB164(auVar11 * auVar19, 8)) * lVar37,auVar20._8_8_ = 0,auVar20._0_8_ = uVar35,SUB164(auVar12 * auVar20, 8) < uVar36) goto LAB_001079bf;
                     }
;
                     ;;
                     String::operator +=(param_4, (String*)( *(long*)( *(long*)( param_3 + 8 ) + (ulong)uVar38 * 8 ) + 0x18 ));
                     lVar37 = *(long*)( local_128 + -8 );
                     lVar28 = local_120;
                     if (lVar37 <= local_120) goto LAB_00106950;
                     HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert((StringName*)&local_58);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                     LAB_00106849:local_128 = local_60;
                     local_120 = local_120 + 1;
                  }
 while ( local_60 != (StringName*)0x0 );
               }

            }

         }

      }

      CowData<StringName>::_unref((CowData<StringName>*)&local_60);
      LAB_00106880:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Vector<String>::push_back(String) [clone .isra.0] */void Vector<String>::push_back(Vector<String> *this, CowData *param_2) {
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
/* Error CowData<int>::resize<false>(long) [clone .isra.0] */void CowData<int>::resize<false>(CowData<int> *this, long param_1) {
   long *plVar1;
   long lVar2;
   int iVar3;
   CowData<int> *pCVar4;
   ulong uVar5;
   undefined8 *puVar6;
   char *pcVar7;
   undefined8 *puVar8;
   undefined8 uVar9;
   CowData<int> *pCVar10;
   CowData<int> *pCVar11;
   long lVar12;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar2 = *(long*)this;
   if (lVar2 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      lVar12 = 0;
      pCVar4 = (CowData<int>*)0x0;
   }
 else {
      lVar12 = *(long*)( lVar2 + -8 );
      if (param_1 == lVar12) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
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

      _copy_on_write(this);
      pCVar4 = (CowData<int>*)( lVar12 * 4 );
      if (pCVar4 != (CowData<int>*)0x0) {
         uVar5 = ( ulong )(pCVar4 + -1) | ( ulong )(pCVar4 + -1) >> 1;
         uVar5 = uVar5 | uVar5 >> 2;
         uVar5 = uVar5 | uVar5 >> 4;
         uVar5 = uVar5 | uVar5 >> 8;
         uVar5 = uVar5 | uVar5 >> 0x10;
         pCVar4 = (CowData<int>*)( ( uVar5 | uVar5 >> 0x20 ) + 1 );
      }

   }

   if (param_1 * 4 != 0) {
      uVar5 = param_1 * 4 - 1;
      uVar5 = uVar5 | uVar5 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar11 = (CowData<int>*)( uVar5 | uVar5 >> 0x20 );
      pCVar10 = pCVar11 + 1;
      if (pCVar10 != (CowData<int>*)0x0) {
         if (param_1 <= lVar12) {
            if (( pCVar10 != pCVar4 ) && ( iVar3 = iVar3 != 0 )) {
               return;
            }

            if (*(long*)this != 0) {
               *(long*)( *(long*)this + -8 ) = param_1;
               return;
            }

            FUN_00113a9c();
            return;
         }

         if (pCVar10 != pCVar4) {
            if (lVar12 == 0) {
               puVar6 = (undefined8*)Memory::alloc_static(( ulong )(pCVar11 + 0x11), false);
               if (puVar6 != (undefined8*)0x0) {
                  puVar8 = puVar6 + 2;
                  *puVar6 = 1;
                  puVar6[1] = 0;
                  *(undefined8**)this = puVar8;
                  goto LAB_00107c51;
               }

               uVar9 = 0x171;
               pcVar7 = "Parameter \"mem_new\" is null.";
               goto LAB_00107d42;
            }

            pCVar11 = this;
            iVar3 = _realloc(this, (long)pCVar10);
            if (iVar3 != 0) {
               return;
            }

         }

         puVar8 = *(undefined8**)this;
         if (puVar8 == (undefined8*)0x0) {
            resize<false>((long)pCVar11);
            return;
         }

         LAB_00107c51:puVar8[-1] = param_1;
         return;
      }

   }

   uVar9 = 0x16a;
   pcVar7 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_00107d42:_err_print_error("resize", "./core/templates/cowdata.h", uVar9, pcVar7, 0, 0);
   return;
}
/* CowData<ShaderCompiler::GeneratedCode::Texture>::_copy_on_write() [clone .isra.0] */void CowData<ShaderCompiler::GeneratedCode::Texture>::_copy_on_write(CowData<ShaderCompiler::GeneratedCode::Texture> *this) {
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   StringName *this_00;
   ulong uVar4;
   StringName *pSVar5;
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
   uVar4 = 0x10;
   if (lVar1 * 0x28 != 0) {
      uVar4 = lVar1 * 0x28 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = ( uVar4 | uVar4 >> 0x20 ) + 0x11;
   }

   puVar3 = (undefined8*)Memory::alloc_static(uVar4, false);
   if (puVar3 != (undefined8*)0x0) {
      lVar6 = 0;
      *puVar3 = 1;
      puVar3[1] = lVar1;
      this_00 = (StringName*)( puVar3 + 2 );
      if (lVar1 != 0) {
         do {
            pSVar5 = this_00 + *(long*)this + ( -0x10 - (long)puVar3 );
            lVar6 = lVar6 + 1;
            StringName::StringName(this_00, pSVar5);
            *(undefined8*)( this_00 + 8 ) = *(undefined8*)( pSVar5 + 8 );
            this_00[0x10] = pSVar5[0x10];
            *(undefined8*)( this_00 + 0x14 ) = *(undefined8*)( pSVar5 + 0x14 );
            this_00[0x1c] = pSVar5[0x1c];
            *(undefined4*)( this_00 + 0x20 ) = *(undefined4*)( pSVar5 + 0x20 );
            this_00 = this_00 + 0x28;
         }
 while ( lVar1 != lVar6 );
      }

      _unref(this);
      *(StringName**)this = (StringName*)( puVar3 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<ShaderCompiler::GeneratedCode::Texture>::resize<false>(long) [clone .isra.0] */void CowData<ShaderCompiler::GeneratedCode::Texture>::resize<false>(CowData<ShaderCompiler::GeneratedCode::Texture> *this, long param_1) {
   code *pcVar1;
   int iVar2;
   long lVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   char *pcVar7;
   undefined8 uVar8;
   long lVar9;
   ulong uVar10;
   long lVar11;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      lVar3 = 0;
      lVar9 = 0;
   }
 else {
      lVar3 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar3) {
         return;
      }

      if (param_1 == 0) {
         _unref(this);
         return;
      }

      _copy_on_write(this);
      lVar9 = lVar3 * 0x28;
      if (lVar9 != 0) {
         uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
         uVar10 = uVar10 | uVar10 >> 2;
         uVar10 = uVar10 | uVar10 >> 4;
         uVar10 = uVar10 | uVar10 >> 8;
         uVar10 = uVar10 | uVar10 >> 0x10;
         lVar9 = ( uVar10 | uVar10 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x28 != 0) {
      uVar10 = param_1 * 0x28 - 1;
      uVar10 = uVar10 | uVar10 >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      uVar10 = uVar10 | uVar10 >> 0x20;
      lVar11 = uVar10 + 1;
      if (lVar11 != 0) {
         if (param_1 <= lVar3) {
            lVar3 = *(long*)this;
            uVar10 = param_1;
            if (lVar3 == 0) {
               CowData<ShaderCompiler::GeneratedCode::Texture> pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }

            for (; uVar10 < *(ulong*)( lVar3 + -8 ); uVar10 = uVar10 + 1) {
               while (( StringName::configured != '\0' && ( *(long*)( lVar3 + uVar10 * 0x28 ) != 0 ) )) {
                  StringName::unref();
                  lVar3 = *(long*)this;
                  uVar10 = uVar10 + 1;
                  if (lVar3 == 0) goto CowData<ShaderCompiler
                  ::GeneratedCode::Texture > _resize<false>;
                  if (*(ulong*)( lVar3 + -8 ) <= uVar10) goto LAB_00108032;
               }
;
               ;;
            }

            LAB_00108032:if (lVar11 != lVar9) {
               iVar2 = _realloc(this, lVar11);
               if (iVar2 != 0) {
                  return;
               }

               lVar3 = *(long*)this;
               if (lVar3 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar1 = (code*)invalidInstructionException();
                  ( *pcVar1 )();
               }

            }

            *(long*)( lVar3 + -8 ) = param_1;
            return;
         }

         if (lVar11 == lVar9) {
            LAB_00108143:puVar6 = *(undefined8**)this;
            if (puVar6 == (undefined8*)0x0) {
               FUN_00113ac8();
               return;
            }

            lVar3 = puVar6[-1];
            if (param_1 <= lVar3) goto LAB_0010811b;
         }
 else {
            if (lVar3 != 0) {
               iVar2 = _realloc(this, lVar11);
               if (iVar2 != 0) {
                  return;
               }

               goto LAB_00108143;
            }

            puVar4 = (undefined8*)Memory::alloc_static(uVar10 + 0x11, false);
            if (puVar4 == (undefined8*)0x0) {
               uVar8 = 0x171;
               pcVar7 = "Parameter \"mem_new\" is null.";
               goto LAB_001081b2;
            }

            puVar6 = puVar4 + 2;
            *puVar4 = 1;
            puVar4[1] = 0;
            *(undefined8**)this = puVar6;
            lVar3 = 0;
         }

         uVar8 = _LC129;
         puVar4 = puVar6 + lVar3 * 5;
         do {
            *puVar4 = 0;
            puVar5 = puVar4 + 5;
            puVar4[1] = 0;
            *(undefined1*)( puVar4 + 2 ) = 0;
            *(undefined8*)( (long)puVar4 + 0x14 ) = uVar8;
            *(undefined1*)( (long)puVar4 + 0x1c ) = 0;
            *(undefined4*)( puVar4 + 4 ) = 0;
            puVar4 = puVar5;
         }
 while ( puVar5 != puVar6 + param_1 * 5 );
         LAB_0010811b:puVar6[-1] = param_1;
         return;
      }

   }

   uVar8 = 0x16a;
   pcVar7 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_001081b2:_err_print_error("resize", "./core/templates/cowdata.h", uVar8, pcVar7, 0, 0);
   return;
}
/* ShaderCompiler::initialize(ShaderCompiler::DefaultIdentifierActions) */void ShaderCompiler::initialize(ShaderCompiler *this, HashMap *param_2) {
   String *pSVar1;
   long in_FS_OFFSET;
   undefined8 *local_68;
   long local_60;
   long local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator =((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)( this + 0x418 ), param_2);
   for (int i = 0; i < 3; i++) {
      HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator =((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)( this + ( 48 * i + 1096 ) ), param_2 + ( 48 * i + 48 ));
   }

   *(undefined8*)( this + 0x4d8 ) = *(undefined8*)( param_2 + 0xc0 );
   *(undefined8*)( this + 0x4e0 ) = *(undefined8*)( param_2 + 200 );
   for (int i = 0; i < 3; i++) {
      if (*(long*)( this + ( 8 * i + 1256 ) ) != *(long*)( param_2 + ( 8 * i + 208 ) )) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( this + ( 8 * i + 1256 ) ), (CowData*)( param_2 + ( 8 * i + 208 ) ));
      }

   }

   *(undefined4*)( this + 0x500 ) = *(undefined4*)( param_2 + 0xe8 );
   *(undefined2*)( this + 0x504 ) = *(undefined2*)( param_2 + 0xec );
   StringName::StringName((StringName*)local_58, "TIME", false);
   if (*(long*)( this + 800 ) == local_58[0]) {
      if (( StringName::configured != '\0' ) && ( local_58[0] != 0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      *(long*)( this + 800 ) = local_58[0];
   }

   local_68 = (undefined8*)0x0;
   ShaderLanguage::get_builtin_funcs((List*)&local_68);
   if (local_68 != (undefined8*)0x0) {
      for (pSVar1 = (String*)*local_68; pSVar1 != (String*)0x0; pSVar1 = *(String**)( pSVar1 + 8 )) {
         StringName::StringName((StringName*)&local_60, pSVar1, false);
         HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert((StringName*)local_58);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

      }

   }

   StringName::StringName((StringName*)&local_60, "texture", false);
   HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert((StringName*)local_58);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_60, "textureProj", false);
   HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert((StringName*)local_58);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_60, "textureLod", false);
   HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert((StringName*)local_58);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_60, "textureProjLod", false);
   HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert((StringName*)local_58);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_60, "textureGrad", false);
   HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert((StringName*)local_58);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_60, "textureProjGrad", false);
   HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert((StringName*)local_58);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_60, "textureGather", false);
   HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert((StringName*)local_58);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_60, "textureSize", false);
   HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert((StringName*)local_58);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_60, "textureQueryLod", false);
   HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert((StringName*)local_58);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_60, "textureQueryLevels", false);
   HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert((StringName*)local_58);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_60, "texelFetch", false);
   HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert((StringName*)local_58);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_68);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* ShaderCompiler::_dump_node_code(ShaderLanguage::Node const*, int, ShaderCompiler::GeneratedCode&,
   ShaderCompiler::IdentifierActions&, ShaderCompiler::DefaultIdentifierActions const&, bool, bool)
    */Node *ShaderCompiler::_dump_node_code(Node *param_1, int param_2, GeneratedCode *param_3, IdentifierActions *param_4, DefaultIdentifierActions *param_5, bool param_6, bool param_7) {
   HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>> *pHVar1;
   StringName *this;
   byte bVar2;
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
   undefined1 auVar35[16];
   undefined1 auVar36[16];
   undefined1 auVar37[16];
   undefined1 auVar38[16];
   undefined1 auVar39[16];
   undefined1 auVar40[16];
   undefined1 auVar41[16];
   undefined1 auVar42[16];
   undefined1 auVar43[16];
   undefined1 auVar44[16];
   undefined1 auVar45[16];
   undefined1 auVar46[16];
   undefined1 auVar47[16];
   undefined1 auVar48[16];
   undefined1 auVar49[16];
   undefined1 auVar50[16];
   undefined1 auVar51[16];
   undefined1 auVar52[16];
   undefined1 auVar53[16];
   undefined1 auVar54[16];
   undefined1 auVar55[16];
   undefined1 auVar56[16];
   undefined1 auVar57[16];
   undefined1 auVar58[16];
   undefined1 auVar59[16];
   undefined1 auVar60[16];
   undefined1 auVar61[16];
   undefined1 auVar62[16];
   undefined1 auVar63[16];
   undefined1 auVar64[16];
   undefined1 auVar65[16];
   undefined1 auVar66[16];
   undefined1 auVar67[16];
   undefined1 auVar68[16];
   undefined1 auVar69[16];
   undefined1 auVar70[16];
   undefined1 auVar71[16];
   undefined1 auVar72[16];
   undefined1 auVar73[16];
   undefined1 auVar74[16];
   undefined1 auVar75[16];
   undefined1 auVar76[16];
   undefined1 auVar77[16];
   undefined1 auVar78[16];
   undefined1 auVar79[16];
   undefined1 auVar80[16];
   undefined1 auVar81[16];
   undefined1 auVar82[16];
   undefined1 auVar83[16];
   undefined1 auVar84[16];
   undefined1 auVar85[16];
   undefined1 auVar86[16];
   undefined1 auVar87[16];
   undefined1 auVar88[16];
   undefined1 auVar89[16];
   undefined1 auVar90[16];
   undefined1 auVar91[16];
   undefined1 auVar92[16];
   undefined1 auVar93[16];
   undefined1 auVar94[16];
   undefined1 auVar95[16];
   undefined1 auVar96[16];
   undefined1 auVar97[16];
   undefined1 auVar98[16];
   undefined1 auVar99[16];
   undefined1 auVar100[16];
   undefined1 auVar101[16];
   undefined1 auVar102[16];
   undefined1 auVar103[16];
   undefined1 auVar104[16];
   undefined1 auVar105[16];
   undefined1 auVar106[16];
   undefined1 auVar107[16];
   undefined1 auVar108[16];
   undefined1 auVar109[16];
   undefined1 auVar110[16];
   undefined1 auVar111[16];
   undefined1 auVar112[16];
   undefined1 auVar113[16];
   undefined1 auVar114[16];
   undefined1 auVar115[16];
   undefined1 auVar116[16];
   undefined1 auVar117[16];
   undefined1 auVar118[16];
   undefined1 auVar119[16];
   undefined1 auVar120[16];
   undefined1 auVar121[16];
   undefined1 auVar122[16];
   undefined1 auVar123[16];
   undefined1 auVar124[16];
   undefined1 auVar125[16];
   undefined1 auVar126[16];
   undefined1 auVar127[16];
   undefined1 auVar128[16];
   undefined1 auVar129[16];
   undefined1 auVar130[16];
   undefined1 auVar131[16];
   undefined1 auVar132[16];
   undefined1 auVar133[16];
   undefined1 auVar134[16];
   undefined1 auVar135[16];
   undefined1 auVar136[16];
   undefined1 auVar137[16];
   undefined1 auVar138[16];
   undefined1 auVar139[16];
   undefined1 auVar140[16];
   undefined1 auVar141[16];
   undefined1 auVar142[16];
   undefined1 auVar143[16];
   undefined1 auVar144[16];
   undefined1 auVar145[16];
   undefined1 auVar146[16];
   code *pcVar147;
   byte bVar148;
   byte bVar149;
   byte bVar150;
   undefined8 uVar151;
   undefined8 uVar152;
   undefined1(*pauVar153)[16];
   byte bVar154;
   byte bVar155;
   char cVar156;
   char cVar157;
   byte bVar158;
   undefined1 uVar159;
   byte bVar160;
   int iVar161;
   uint uVar162;
   uint uVar163;
   int iVar164;
   undefined4 uVar165;
   CowData *pCVar166;
   undefined8 *puVar167;
   int *piVar168;
   long *plVar169;
   long *plVar170;
   ulong uVar171;
   String *pSVar172;
   size_t *psVar173;
   CowData<char32_t> *pCVar174;
   int iVar175;
   uint uVar176;
   int iVar177;
   int iVar178;
   long lVar179;
   long lVar180;
   long lVar181;
   GeneratedCode *pGVar182;
   char *pcVar183;
   char *pcVar184;
   HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *pHVar185;
   HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *pHVar186;
   StringName *pSVar187;
   HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this_00;
   uint uVar188;
   Node *this_01;
   undefined4 in_register_00000034;
   ShaderCompiler *this_02;
   Node *this_03;
   ulong uVar189;
   uint uVar190;
   uint uVar191;
   undefined7 in_register_00000089;
   HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>> *this_04;
   ulong uVar192;
   String *this_05;
   ulong uVar193;
   long lVar194;
   byte bVar195;
   long in_FS_OFFSET;
   bool bVar196;
   undefined7 in_stack_00000009;
   char in_stack_00000010;
   char in_stack_00000018;
   CowData<char32_t> *local_228;
   CowData<char32_t> *local_220;
   String *local_218;
   long *local_208;
   long local_200;
   byte local_1f8;
   StringName *local_1f0;
   char *local_190;
   undefined1(*local_188)[16];
   undefined8 local_180;
   Node local_178[8];
   char *local_170;
   char *local_168;
   long local_160;
   char *local_158;
   char *local_150;
   undefined8 local_148;
   ulong local_140;
   undefined8 local_138;
   long local_130;
   char *local_128;
   long local_120;
   char *local_118;
   long local_110;
   char *local_108;
   long local_100;
   char *local_f8;
   long local_f0;
   undefined8 local_e8;
   size_t local_e0;
   uint uStack_d8;
   undefined4 uStack_d4;
   undefined4 uStack_d0;
   uint uStack_cc;
   int iStack_c8;
   undefined4 uStack_c4;
   undefined8 local_c0;
   HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> local_b8[120];
   long local_40[2];
   this_04 = (HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>*)CONCAT71(in_register_00000089, param_6);
   this_02 = (ShaderCompiler*)CONCAT44(in_register_00000034, param_2);
   uVar188 = *(uint*)( param_3 + 0x10 );
   pHVar1 = (HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)CONCAT71(in_stack_00000009, param_7);
   iVar161 = (int)param_4;
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   local_190 = (char*)0x0;
   switch (uVar188) {
      case 0:
    lVar194 = *(long *)(param_3 + 0x110);
    if (lVar194 != 0) {
      local_228 = (CowData<char32_t> *)0x0;
LAB_0010891f:
      if ((long)local_228 < *(long *)(lVar194 + -8)) {
        lVar181 = (long)local_228 * 8;
        if ((*(long *)(pHVar1 + 0x38) != 0) && (*(int *)(pHVar1 + 0x5c) != 0)) {
          plVar170 = (long *)(lVar194 + lVar181);
          uVar163 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(pHVar1 + 0x58) * 4);
          lVar180 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(pHVar1 + 0x58) * 8);
          lVar179 = *plVar170;
          if (lVar179 == 0) {
            uVar162 = StringName::get_empty_hash();
            lVar194 = *(long *)(param_3 + 0x110);
          }
          else {
            uVar162 = *(uint *)(lVar179 + 0x20);
          }
          uVar193 = CONCAT44(0,uVar163);
          if (uVar162 == 0) {
            uVar162 = 1;
          }
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (ulong)uVar162 * lVar180;
          auVar76._8_8_ = 0;
          auVar76._0_8_ = uVar193;
          lVar179 = SUB168(auVar3 * auVar76,8);
          iVar164 = SUB164(auVar3 * auVar76,8);
          uVar190 = *(uint *)(*(long *)(pHVar1 + 0x40) + lVar179 * 4);
          uVar171 = (ulong)uVar190;
          uVar191 = uVar188;
          if (uVar190 != 0) {
            do {
              if (((uint)uVar171 == uVar162) &&
                 (*(long *)(*(long *)(*(long *)(pHVar1 + 0x38) + lVar179 * 8) + 0x10) == *plVar170))
              {
                if (lVar194 == 0) goto LAB_0010aae0;
                lVar180 = *(long *)(lVar194 + -8);
                if (lVar180 <= (long)local_228) goto LAB_0010ab03;
                if ((*(long *)(this_02 + 0x3a0) == 0) || (*(int *)(this_02 + 0x3c4) == 0))
                goto LAB_0010b410;
                plVar170 = (long *)(lVar194 + lVar181);
                uVar163 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this_02 + 0x3c0) * 4);
                lVar180 = *(long *)(hash_table_size_primes_inv +
                                   (ulong)*(uint *)(this_02 + 0x3c0) * 8);
                lVar179 = *plVar170;
                if (lVar179 == 0) {
                  uVar190 = StringName::get_empty_hash();
                  uVar162 = 1;
                  if (uVar190 != 0) {
                    uVar162 = uVar190;
                  }
                  lVar194 = *(long *)(param_3 + 0x110);
                  auVar71._8_8_ = 0;
                  auVar71._0_8_ = (ulong)uVar162 * lVar180;
                  uVar193 = SUB168(auVar71 * ZEXT416(uVar163),8);
                  lVar179 = *(long *)(this_02 + 0x3b8);
                  uVar191 = SUB164(auVar71 * ZEXT416(uVar163),8);
                  uVar190 = *(uint *)(lVar179 + uVar193 * 4);
                  if (uVar190 == 0) goto LAB_0010b3f0;
                }
                else {
                  uVar162 = *(uint *)(lVar179 + 0x20);
                  lVar179 = *(long *)(this_02 + 0x3b8);
                  if (uVar162 == 0) {
                    uVar162 = 1;
                  }
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = (ulong)uVar162 * lVar180;
                  uVar193 = SUB168(auVar7 * ZEXT416(uVar163),8);
                  uVar190 = *(uint *)(lVar179 + uVar193 * 4);
                  uVar191 = SUB164(auVar7 * ZEXT416(uVar163),8);
                  if (uVar190 == 0) goto LAB_0010b3f9;
                }
                uVar192 = (ulong)uVar191;
                uVar189 = (ulong)uVar190;
                uVar171 = CONCAT44(0,uVar163);
                uVar190 = uVar188;
                goto LAB_00108b78;
              }
              uVar191 = uVar191 + 1;
              auVar4._8_8_ = 0;
              auVar4._0_8_ = (ulong)(iVar164 + 1) * lVar180;
              auVar77._8_8_ = 0;
              auVar77._0_8_ = uVar193;
              lVar179 = SUB168(auVar4 * auVar77,8);
              uVar190 = *(uint *)(*(long *)(pHVar1 + 0x40) + lVar179 * 4);
              uVar171 = (ulong)uVar190;
              iVar164 = SUB164(auVar4 * auVar77,8);
            } while ((uVar190 != 0) &&
                    (auVar5._8_8_ = 0, auVar5._0_8_ = uVar171 * lVar180, auVar78._8_8_ = 0,
                    auVar78._0_8_ = uVar193, auVar6._8_8_ = 0,
                    auVar6._0_8_ = (ulong)((uVar163 + iVar164) - SUB164(auVar5 * auVar78,8)) *
                                   lVar180, auVar79._8_8_ = 0, auVar79._0_8_ = uVar193,
                    uVar191 <= SUB164(auVar6 * auVar79,8)));
          }
        }
        goto LAB_00108bb0;
      }
    }
LAB_00108e4a:
    lVar194 = *(long *)(param_3 + 0x140);
    if (lVar194 != 0) {
      local_228 = (CowData<char32_t> *)0x0;
      do {
        if (*(long *)(lVar194 + -8) <= (long)local_228) break;
        lVar194 = *(long *)(lVar194 + 8 + (long)local_228 * 0x10);
        local_108 = (char *)0x0;
        String::operator+=((String *)&local_108,"struct ");
        lVar181 = *(long *)(param_3 + 0x140);
        if (lVar181 == 0) {
          lVar180 = 0;
          goto LAB_0010ab03;
        }
        lVar180 = *(long *)(lVar181 + -8);
        if (lVar180 <= (long)local_228) goto LAB_0010ab03;
        lVar180 = *(long *)(lVar181 + (long)local_228 * 0x10);
        if (lVar180 == 0) {
LAB_0010db26:
          local_f8 = (char *)0x0;
        }
        else {
          pcVar184 = *(char **)(lVar180 + 8);
          local_f8 = (char *)0x0;
          if (pcVar184 == (char *)0x0) {
            if (*(long *)(lVar180 + 0x10) == 0) goto LAB_0010db26;
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)(lVar180 + 0x10));
          }
          else {
            local_e0 = strlen(pcVar184);
            local_e8 = pcVar184;
            String::parse_latin1((StrRange *)&local_f8);
          }
        }
        _mkid((String *)&local_e8);
        String::operator+=((String *)&local_108,(String *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
        String::operator+=((String *)&local_108," ");
        String::operator+=((String *)&local_108,"{\n");
        puVar167 = *(undefined8 **)(lVar194 + 0x18);
        if (puVar167 != (undefined8 *)0x0) {
          for (plVar170 = (long *)*puVar167; plVar170 != (long *)0x0; plVar170 = (long *)plVar170[1]
              ) {
            lVar194 = *plVar170;
            if (*(int *)(lVar194 + 0x2c) == 0x20) {
              lVar180 = *(long *)(lVar194 + 0x38);
              if (lVar180 == 0) {
                local_f8 = (char *)0x0;
              }
              else {
                pcVar184 = *(char **)(lVar180 + 8);
                local_f8 = (char *)0x0;
                if (pcVar184 == (char *)0x0) {
                  if (*(long *)(lVar180 + 0x10) != 0) {
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)&local_f8,(CowData *)(lVar180 + 0x10));
                  }
                }
                else {
                  local_e0 = strlen(pcVar184);
                  local_e8 = pcVar184;
                  String::parse_latin1((StrRange *)&local_f8);
                }
              }
              _mkid((String *)&local_e8);
              String::operator+=((String *)&local_108,(String *)&local_e8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
            }
            else {
              _prestr((String *)&local_e8,*(undefined4 *)(lVar194 + 0x28),0);
              String::operator+=((String *)&local_108,(String *)&local_e8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
              _typestr((String *)&local_e8,*(undefined4 *)(lVar194 + 0x2c));
              String::operator+=((String *)&local_108,(String *)&local_e8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
            }
            String::operator+=((String *)&local_108," ");
            lVar180 = *(long *)(lVar194 + 0x40);
            if (lVar180 == 0) {
              local_f8 = (char *)0x0;
            }
            else {
              pcVar184 = *(char **)(lVar180 + 8);
              local_f8 = (char *)0x0;
              if (pcVar184 == (char *)0x0) {
                if (*(long *)(lVar180 + 0x10) != 0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)&local_f8,(CowData *)(lVar180 + 0x10));
                }
              }
              else {
                local_e0 = strlen(pcVar184);
                local_e8 = pcVar184;
                String::parse_latin1((StrRange *)&local_f8);
              }
            }
            _mkid((String *)&local_e8);
            String::operator+=((String *)&local_108,(String *)&local_e8);
            pcVar184 = local_e8;
            if (local_e8 != (char *)0x0) {
              LOCK();
              plVar169 = (long *)(local_e8 + -0x10);
              *plVar169 = *plVar169 + -1;
              UNLOCK();
              if (*plVar169 == 0) {
                local_e8 = (char *)0x0;
                Memory::free_static(pcVar184 + -0x10,false);
              }
            }
            pcVar184 = local_f8;
            if (local_f8 != (char *)0x0) {
              LOCK();
              plVar169 = (long *)(local_f8 + -0x10);
              *plVar169 = *plVar169 + -1;
              UNLOCK();
              if (*plVar169 == 0) {
                local_f8 = (char *)0x0;
                Memory::free_static(pcVar184 + -0x10,false);
              }
            }
            if (0 < *(int *)(lVar194 + 0x30)) {
              String::operator+=((String *)&local_108,"[");
              itos((long)&local_e8);
              String::operator+=((String *)&local_108,(String *)&local_e8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
              String::operator+=((String *)&local_108,"]");
            }
            String::operator+=((String *)&local_108,";\n");
          }
        }
        local_228 = (CowData<char32_t> *)((long)local_228 + 1);
        String::operator+=((String *)&local_108,"}");
        String::operator+=((String *)&local_108,";\n");
        String::operator+=((String *)(param_5 + 0x40),(String *)&local_108);
        String::operator+=((String *)(param_5 + 0x48),(String *)&local_108);
        String::operator+=((String *)(param_5 + 0x50),(String *)&local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        lVar194 = *(long *)(param_3 + 0x140);
      } while (lVar194 != 0);
    }
    iVar178 = 0;
    iVar164 = 0;
    for (puVar167 = *(undefined8 **)(param_3 + 0x90); puVar167 != (undefined8 *)0x0;
        puVar167 = (undefined8 *)*puVar167) {
      cVar156 = ShaderLanguage::is_sampler_type(*(undefined4 *)(puVar167 + 5));
      if (cVar156 == '\0') {
        if (*(int *)(puVar167 + 9) != 1) {
          iVar178 = iVar178 + 1;
        }
      }
      else {
        iVar164 = (iVar164 + 1) - (uint)(*(int *)((long)puVar167 + 0x4c) - 0xfU < 3);
      }
    }
    uVar193 = (ulong)iVar178;
    CowData<ShaderCompiler::GeneratedCode::Texture>::resize<false>
              ((CowData<ShaderCompiler::GeneratedCode::Texture> *)(param_5 + 0x18),(long)iVar164);
    local_130 = 0;
    local_120 = 0;
    local_110 = 0;
    CowData<int>::resize<false>((CowData<int> *)&local_130,uVar193);
    CowData<int>::resize<false>((CowData<int> *)&local_120,uVar193);
    CowData<StringName>::resize<false>((CowData<StringName> *)&local_110,uVar193);
    local_100 = 0;
    for (puVar167 = *(undefined8 **)(param_3 + 0x90); puVar167 != (undefined8 *)0x0;
        puVar167 = (undefined8 *)*puVar167) {
      StringName::StringName((StringName *)&local_e8,(StringName *)(puVar167 + 2));
      Vector<StringName>::push_back((Vector<StringName> *)&local_108,(StringName *)&local_e8);
      if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
        StringName::unref();
      }
    }
    Vector<StringName>::sort_custom<StringName::AlphCompare,true>((Vector<StringName> *)&local_108);
    lVar194 = local_100;
    if (local_100 != 0) {
      for (lVar180 = 0; lVar180 < *(long *)(lVar194 + -8); lVar180 = lVar180 + 1) {
        pSVar187 = (StringName *)(lVar194 + lVar180 * 8);
        piVar168 = (int *)HashMap<StringName,ShaderLanguage::ShaderNode::Uniform,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Uniform>>>
                          ::operator[]((HashMap<StringName,ShaderLanguage::ShaderNode::Uniform,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Uniform>>>
                                        *)(param_3 + 0x78),pSVar187);
        local_170 = (char *)0x0;
        if (piVar168[0xc] == 1) {
          HashMap<StringName,ShaderLanguage::ShaderNode::Uniform,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Uniform>>>
          ::insert((StringName *)&local_e8,*(Uniform **)(this_04 + 0xf0),SUB81(pSVar187,0));
LAB_0010efa5:
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
        }
        else {
          if (piVar168[0xd] - 0xfU < 3) goto LAB_0010efa5;
          cVar156 = ShaderLanguage::is_sampler_type(piVar168[4]);
          if (cVar156 != '\0') {
            plVar170 = (long *)RenderingServer::get_singleton();
            cVar156 = (**(code **)(*plVar170 + 0x12c0))(plVar170);
            if (cVar156 == '\0') {
              local_f8 = (char *)0x0;
              String::parse_latin1((String *)&local_f8,") ");
              itos((long)&local_148);
              local_158 = (char *)0x0;
              String::parse_latin1((String *)&local_158,", binding = ");
              itos((long)&local_168);
              operator+((char *)&local_160,(String *)"layout(set = ");
              String::operator+((String *)&local_150,(String *)&local_160);
              String::operator+((String *)&local_140,(String *)&local_150);
              String::operator+((String *)&local_e8,(String *)&local_140);
              if (local_170 != local_e8) {
                CowData<char32_t>::operator=((CowData<char32_t> *)&local_170,(CowData *)&local_e8);
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
            }
            String::operator+=((String *)&local_170,"uniform ");
          }
          local_218 = (String *)&local_f8;
          local_228 = (CowData<char32_t> *)&local_140;
          cVar156 = ShaderLanguage::is_sampler_type(piVar168[4]);
          if ((cVar156 == '\0') && (piVar168[0xc] == 2)) {
            _typestr((CowData<char32_t> *)&local_e8,9);
            String::operator+=((String *)&local_170,(String *)&local_e8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
            bVar196 = true;
          }
          else {
            uVar159 = ShaderLanguage::is_float_type(piVar168[4]);
            _prestr((CowData<char32_t> *)&local_e8,piVar168[5],uVar159);
            String::operator+=((String *)&local_170,(String *)&local_e8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
            _typestr((CowData<char32_t> *)&local_e8,piVar168[4]);
            String::operator+=((String *)&local_170,(String *)&local_e8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
            bVar196 = false;
          }
          lVar181 = *(long *)(lVar194 + lVar180 * 8);
          if (lVar181 == 0) {
            local_140 = 0;
          }
          else {
            local_140 = 0;
            if (*(char **)(lVar181 + 8) == (char *)0x0) {
              if (*(long *)(lVar181 + 0x10) != 0) {
                CowData<char32_t>::_ref(local_228,(CowData *)(lVar181 + 0x10));
              }
            }
            else {
              String::parse_latin1((String *)local_228,*(char **)(lVar181 + 8));
            }
          }
          _mkid(local_218);
          operator+((char *)&local_e8,(String *)&_LC124);
          String::operator+=((String *)&local_170,(String *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_218);
          CowData<char32_t>::_unref(local_228);
          if (0 < piVar168[6]) {
            String::operator+=((String *)&local_170,"[");
            itos((long)&local_e8);
            String::operator+=((String *)&local_170,(String *)&local_e8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
            String::operator+=((String *)&local_170,"]");
          }
          String::operator+=((String *)&local_170,";\n");
          cVar156 = ShaderLanguage::is_sampler_type(piVar168[4]);
          if (cVar156 == '\0') {
            StringName::StringName((StringName *)&local_e8,(String *)&local_170,false);
            lVar179 = (long)*piVar168;
            lVar181 = local_110;
            if (lVar179 < 0) goto LAB_0010ff5b;
            if (local_110 == 0) goto LAB_0011010a;
            if (lVar179 < *(long *)(local_110 + -8)) {
              CowData<StringName>::_copy_on_write((CowData<StringName> *)&local_110);
              puVar167 = (undefined8 *)(local_110 + lVar179 * 8);
              if ((char *)*puVar167 == local_e8) {
                if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
                  StringName::unref();
                }
              }
              else {
                StringName::unref();
                *puVar167 = local_e8;
              }
              lVar181 = local_130;
              if (!bVar196) {
                if (piVar168[6] < 1) {
                  uVar165 = ShaderLanguage::get_datatype_size(piVar168[4]);
                  lVar179 = (long)*piVar168;
                  if (lVar179 < 0) goto LAB_001104a8;
                  if (lVar181 == 0) goto LAB_001104a0;
                  if (*(long *)(lVar181 + -8) <= lVar179) goto LAB_001104b0;
                  CowData<int>::_copy_on_write((CowData<int> *)&local_130);
                  *(undefined4 *)(local_130 + lVar179 * 4) = uVar165;
                  uVar188 = piVar168[4];
                  if (uVar188 < 0xf) {
                    if (uVar188 == 0) {
LAB_001103b7:
                      uVar165 = 0;
                    }
                    else {
                      uVar171 = 1L << ((byte)uVar188 & 0x3f);
                      if ((uVar171 & 0x1998) == 0) {
                        if ((uVar171 & 0x4444) == 0) {
                          uVar165 = 4;
                          if ((uVar171 & 0x2222) == 0) goto LAB_00110392;
                        }
                        else {
                          uVar165 = 8;
                        }
                      }
                      else {
LAB_001103ca:
                        uVar165 = 0x10;
                      }
                    }
                  }
                  else {
                    if (uVar188 != 0x21) {
                      if (uVar188 < 0x22) {
                        if (uVar188 != 0x20) goto LAB_001103ca;
                      }
                      else {
LAB_00110392:
                        _err_print_error("_get_datatype_alignment",
                                         "servers/rendering/shader_compiler.cpp",0x7b,
                                         "Method/function failed. Returning: 0");
                      }
                      goto LAB_001103b7;
                    }
                    _err_print_error("_get_datatype_alignment",
                                     "servers/rendering/shader_compiler.cpp",0x77,
                                     "Method/function failed. Returning: 0");
                    uVar165 = 0;
                  }
                  lVar179 = (long)*piVar168;
                  if (lVar179 < 0) {
                    if (local_120 != 0) goto LAB_0011036e;
                  }
                  else if (local_120 != 0) {
                    if (lVar179 < *(long *)(local_120 + -8)) {
                      CowData<int>::_copy_on_write((CowData<int> *)&local_120);
                      *(undefined4 *)(local_120 + lVar179 * 4) = uVar165;
                      goto LAB_0010ef35;
                    }
LAB_0011036e:
                    lVar194 = *(long *)(local_120 + -8);
                    goto LAB_0010ff89;
                  }
LAB_001104a0:
                  lVar194 = 0;
                }
                else {
                  iVar164 = ShaderLanguage::get_datatype_size(piVar168[4]);
                  iVar164 = iVar164 * piVar168[6];
                  iVar175 = piVar168[6] * 0x10;
                  iVar177 = iVar164 % iVar175;
                  if (iVar177 != 0) {
                    iVar164 = iVar164 + (iVar175 - iVar177);
                  }
                  lVar179 = (long)*piVar168;
                  if (lVar179 < 0) {
LAB_001104a8:
                    if (lVar181 == 0) goto LAB_001104a0;
                  }
                  else {
                    if (lVar181 == 0) goto LAB_001104a0;
                    if (lVar179 < *(long *)(lVar181 + -8)) {
                      CowData<int>::_copy_on_write((CowData<int> *)&local_130);
                      *(int *)(local_130 + lVar179 * 4) = iVar164;
                      lVar179 = (long)*piVar168;
                      lVar181 = local_120;
                      if (lVar179 < 0) goto LAB_0010ff5b;
                      if (local_120 == 0) goto LAB_0011010a;
                      if (lVar179 < *(long *)(local_120 + -8)) {
                        CowData<int>::_copy_on_write((CowData<int> *)&local_120);
                        *(undefined4 *)(local_120 + lVar179 * 4) = 0x10;
                        goto LAB_0010ef35;
                      }
                      goto LAB_0010ff67;
                    }
                  }
LAB_001104b0:
                  lVar194 = *(long *)(lVar181 + -8);
                }
                goto LAB_0010ff89;
              }
              uVar165 = ShaderLanguage::get_datatype_size(9);
              lVar179 = (long)*piVar168;
              if (lVar179 < 0) goto LAB_001104a8;
              if (lVar181 == 0) goto LAB_001104a0;
              if (*(long *)(lVar181 + -8) <= lVar179) goto LAB_001104b0;
              CowData<int>::_copy_on_write((CowData<int> *)&local_130);
              *(undefined4 *)(local_130 + lVar179 * 4) = uVar165;
              lVar179 = (long)*piVar168;
              lVar181 = local_120;
              if (lVar179 < 0) goto LAB_0010ff5b;
              if (local_120 == 0) goto LAB_0011010a;
              if (lVar179 < *(long *)(local_120 + -8)) {
                CowData<int>::_copy_on_write((CowData<int> *)&local_120);
                *(undefined4 *)(local_120 + lVar179 * 4) = 4;
                goto LAB_0010ef35;
              }
            }
LAB_0010ff67:
            lVar194 = *(long *)(lVar181 + -8);
LAB_0010ff89:
            _err_print_index_error
                      ("operator[]","./core/templates/vector.h",0x38,lVar179,lVar194,"p_index",
                       "((Vector<T> *)(this))->_cowdata.size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar147 = (code *)invalidInstructionException();
            (*pcVar147)();
          }
          String::operator+=((String *)(param_5 + 0x40),(String *)&local_170);
          String::operator+=((String *)(param_5 + 0x48),(String *)&local_170);
          String::operator+=((String *)(param_5 + 0x50),(String *)&local_170);
          local_e8 = (char *)0x0;
          local_e0 = 0;
          uStack_d8 = uStack_d8 & 0xffffff00;
          uStack_d4 = (undefined4)_LC129;
          uStack_d0 = (undefined4)((ulong)_LC129 >> 0x20);
          uStack_cc = uStack_cc & 0xffffff00;
          iStack_c8 = 0;
          StringName::operator=((StringName *)&local_e8,pSVar187);
          local_e0 = CONCAT44(piVar168[0xd],piVar168[4]);
          uStack_d8 = CONCAT31(uStack_d8._1_3_,(char)piVar168[0xe]);
          uStack_d4 = (undefined4)*(undefined8 *)(piVar168 + 0xf);
          uStack_d0 = (undefined4)((ulong)*(undefined8 *)(piVar168 + 0xf) >> 0x20);
          iStack_c8 = piVar168[6];
          uStack_cc = CONCAT31(uStack_cc._1_3_,piVar168[0xc] == 2);
          if (piVar168[0xc] == 2) {
            param_5[0x88] = 1;
          }
          lVar179 = (long)piVar168[2];
          lVar181 = *(long *)(param_5 + 0x18);
          if (lVar179 < 0) {
LAB_0010ff5b:
            if (lVar181 == 0) {
              lVar194 = 0;
              goto LAB_0010ff89;
            }
            goto LAB_0010ff67;
          }
          if (lVar181 == 0) {
LAB_0011010a:
            lVar194 = 0;
            goto LAB_0010ff89;
          }
          if (*(long *)(lVar181 + -8) <= lVar179) goto LAB_0010ff67;
          CowData<ShaderCompiler::GeneratedCode::Texture>::_copy_on_write
                    ((CowData<ShaderCompiler::GeneratedCode::Texture> *)(param_5 + 0x18));
          this = (StringName *)(*(long *)(param_5 + 0x18) + lVar179 * 0x28);
          StringName::operator=(this,(StringName *)&local_e8);
          bVar196 = StringName::configured != '\0';
          *(size_t *)(this + 8) = local_e0;
          this[0x10] = uStack_d8._0_1_;
          *(ulong *)(this + 0x14) = CONCAT44(uStack_d0,uStack_d4);
          this[0x1c] = uStack_cc._0_1_;
          *(int *)(this + 0x20) = iStack_c8;
          if ((bVar196) && (local_e8 != (char *)0x0)) {
            StringName::unref();
          }
LAB_0010ef35:
          HashMap<StringName,ShaderLanguage::ShaderNode::Uniform,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Uniform>>>
          ::insert((StringName *)&local_e8,*(Uniform **)(this_04 + 0xf0),SUB81(pSVar187,0));
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
        }
      }
    }
    lVar194 = local_110;
    if (0 < iVar178) {
      if (local_110 == 0) {
        lVar180 = 0;
        local_228 = (CowData<char32_t> *)0;
        goto LAB_0010ab03;
      }
      local_228 = (CowData<char32_t> *)0x0;
      do {
        lVar180 = *(long *)(lVar194 + -8);
        if (lVar180 <= (long)local_228) goto LAB_0010ab03;
        lVar180 = *(long *)(lVar194 + (long)local_228 * 8);
        if (lVar180 == 0) {
LAB_0010fab4:
          local_e8 = (char *)0x0;
        }
        else {
          local_e8 = (char *)0x0;
          if (*(char **)(lVar180 + 8) == (char *)0x0) {
            if (*(long *)(lVar180 + 0x10) == 0) goto LAB_0010fab4;
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)(lVar180 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_e8,*(char **)(lVar180 + 8));
          }
        }
        local_228 = (CowData<char32_t> *)((long)local_228 + 1);
        String::operator+=((String *)(param_5 + 0x38),(String *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      } while (local_228 != (CowData<char32_t> *)uVar193);
    }
    uVar188 = 0;
    for (uVar193 = 0;
        (lVar194 = local_130, local_130 != 0 && ((long)uVar193 < *(long *)(local_130 + -8)));
        uVar193 = uVar193 + 1) {
      if (local_120 == 0) goto LAB_0010def0;
      lVar180 = *(long *)(local_120 + -8);
      local_228 = (CowData<char32_t> *)uVar193;
      if (lVar180 <= (long)uVar193) goto LAB_0010ab03;
      iVar164 = *(int *)(local_120 + uVar193 * 4);
      iVar178 = (int)uVar188 % iVar164;
      if (iVar178 != 0) {
        uVar188 = uVar188 + (iVar164 - iVar178);
      }
      if (*(long *)(param_5 + 0x28) == 0) {
        lVar180 = 0;
      }
      else {
        lVar180 = *(long *)(*(long *)(param_5 + 0x28) + -8);
      }
      iVar164 = CowData<unsigned_int>::resize<false>
                          ((CowData<unsigned_int> *)(param_5 + 0x28),lVar180 + 1);
      if (iVar164 == 0) {
        if (*(long *)(param_5 + 0x28) == 0) {
          lVar181 = -1;
          lVar180 = 0;
        }
        else {
          lVar180 = *(long *)(*(long *)(param_5 + 0x28) + -8);
          lVar181 = lVar180 + -1;
          if (-1 < lVar181) {
            CowData<unsigned_int>::_copy_on_write((CowData<unsigned_int> *)(param_5 + 0x28));
            *(uint *)(*(long *)(param_5 + 0x28) + lVar181 * 4) = uVar188;
            goto LAB_001105aa;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar181,lVar180,"p_index","size()","",
                   false,false);
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0);
      }
LAB_001105aa:
      lVar180 = *(long *)(lVar194 + -8);
      if (lVar180 <= (long)uVar193) goto LAB_0010ab03;
      uVar188 = uVar188 + *(int *)(lVar194 + uVar193 * 4);
    }
    if ((uVar188 & 0xf) != 0) {
      uVar188 = (uVar188 & 0xfffffff0) + 0x10;
    }
    local_188 = (undefined1 (*) [16])0x0;
    *(uint *)(param_5 + 0x30) = uVar188;
    local_f0 = 0;
    for (puVar167 = *(undefined8 **)(param_3 + 0x60); puVar167 != (undefined8 *)0x0;
        puVar167 = (undefined8 *)*puVar167) {
      StringName::StringName((StringName *)&local_e8,(StringName *)(puVar167 + 2));
      Vector<StringName>::push_back((Vector<StringName> *)&local_f8,(StringName *)&local_e8);
      if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
        StringName::unref();
      }
    }
    Vector<StringName>::sort_custom<StringName::AlphCompare,true>((Vector<StringName> *)&local_f8);
    for (local_200 = 0;
        (pauVar153 = local_188, local_f0 != 0 && (local_200 < *(long *)(local_f0 + -8)));
        local_200 = local_200 + 1) {
      pSVar187 = (StringName *)(local_f0 + local_200 * 8);
      psVar173 = (size_t *)
                 HashMap<StringName,ShaderLanguage::ShaderNode::Varying,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Varying>>>
                 ::operator[]((HashMap<StringName,ShaderLanguage::ShaderNode::Varying,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Varying>>>
                               *)(param_3 + 0x48),pSVar187);
      if ((int)*psVar173 == 2) {
        StringName::StringName((StringName *)&local_140,pSVar187);
        StringName::StringName((StringName *)&local_e8,(StringName *)&local_140);
        local_e0 = *psVar173;
        uStack_d8 = (uint)psVar173[1];
        uStack_d4 = (undefined4)*(undefined8 *)((long)psVar173 + 0xc);
        uStack_d0 = (undefined4)((ulong)*(undefined8 *)((long)psVar173 + 0xc) >> 0x20);
        uStack_cc = (uint)*(undefined8 *)((long)psVar173 + 0x14);
        iStack_c8 = (int)((ulong)*(undefined8 *)((long)psVar173 + 0x14) >> 0x20);
        if (pauVar153 == (undefined1 (*) [16])0x0) {
          local_188 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined4 *)local_188[1] = 0;
          *local_188 = (undefined1  [16])0x0;
        }
        pSVar187 = (StringName *)operator_new(0x40,DefaultAllocator::alloc);
        uVar152 = _LC131;
        uVar151 = __LC72;
        *(undefined8 *)pSVar187 = 0;
        *(undefined4 *)(pSVar187 + 0x18) = 0;
        *(undefined8 *)(pSVar187 + 0x38) = 0;
        *(undefined8 *)(pSVar187 + 8) = uVar151;
        *(undefined8 *)(pSVar187 + 0x10) = uVar152;
        *(undefined1 (*) [16])(pSVar187 + 0x28) = (undefined1  [16])0x0;
        StringName::operator=(pSVar187,(StringName *)&local_e8);
        lVar194 = *(long *)(*local_188 + 8);
        *(size_t *)(pSVar187 + 8) = local_e0;
        *(ulong *)(pSVar187 + 0x10) = CONCAT44(uStack_d4,uStack_d8);
        *(undefined8 *)(pSVar187 + 0x28) = 0;
        *(long *)(pSVar187 + 0x30) = lVar194;
        *(undefined1 (**) [16])(pSVar187 + 0x38) = local_188;
        *(ulong *)(pSVar187 + 0x14) = CONCAT44(uStack_d0,uStack_d4);
        *(ulong *)(pSVar187 + 0x1c) = CONCAT44(iStack_c8,uStack_cc);
        if (lVar194 != 0) {
          *(StringName **)(lVar194 + 0x28) = pSVar187;
        }
        lVar194 = *(long *)*local_188;
        *(StringName **)(*local_188 + 8) = pSVar187;
        if (lVar194 == 0) {
          *(StringName **)*local_188 = pSVar187;
        }
        *(int *)local_188[1] = *(int *)local_188[1] + 1;
        Pair<StringName,ShaderLanguage::ShaderNode::Varying>::~Pair
                  ((Pair<StringName,ShaderLanguage::ShaderNode::Varying> *)&local_e8);
        if ((StringName::configured != '\0') && (local_140 != 0)) {
          StringName::unref();
        }
        HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                  ((StringName *)&local_e8);
      }
      else if (4 < *(int *)((long)psVar173 + 4)) {
        iVar164 = (int)psVar173[1];
        local_160 = 0;
        local_158 = (char *)0x0;
        if (((iVar164 == 1) || (iVar164 == 2)) || (iVar164 != 0)) {
          local_e8 = "";
          local_e0 = 0;
          String::parse_latin1((StrRange *)&local_158);
        }
        else {
          local_e0 = 5;
          local_e8 = "flat ";
          String::parse_latin1((StrRange *)&local_158);
        }
        uVar159 = ShaderLanguage::is_float_type(*(int *)((long)psVar173 + 4));
        _prestr((StringName *)&local_e8,*(int *)((long)psVar173 + 0xc),uVar159);
        String::operator+=((String *)&local_160,(String *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        _typestr((StringName *)&local_e8,*(int *)((long)psVar173 + 4));
        String::operator+=((String *)&local_160,(String *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        lVar194 = *(long *)pSVar187;
        if (lVar194 == 0) {
LAB_00110add:
          local_148 = 0;
        }
        else {
          local_148 = 0;
          if (*(char **)(lVar194 + 8) == (char *)0x0) {
            if (*(long *)(lVar194 + 0x10) == 0) goto LAB_00110add;
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_148,(CowData *)(lVar194 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_148,*(char **)(lVar194 + 8));
          }
        }
        _mkid((String *)&local_140);
        operator+((char *)&local_e8,(String *)&_LC124);
        String::operator+=((String *)&local_160,(String *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
        if (0 < (int)psVar173[2]) {
          String::operator+=((String *)&local_160,"[");
          itos((long)&local_e8);
          String::operator+=((String *)&local_160,(String *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          String::operator+=((String *)&local_160,"]");
        }
        String::operator+=((String *)&local_160,";\n");
        plVar170 = (long *)RenderingServer::get_singleton();
        cVar156 = (**(code **)(*plVar170 + 0x12c0))(plVar170);
        if (cVar156 == '\0') {
          local_140 = 0;
          String::parse_latin1((String *)&local_140,") ");
          itos((long)&local_150);
          operator+((char *)&local_148,(String *)"layout(location=");
          String::operator+((String *)&local_e8,(String *)&local_148);
          String::operator+=((String *)(param_5 + 0x40),(String *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
          local_140 = 0;
          String::parse_latin1((String *)&local_140,") ");
          itos((long)&local_150);
          operator+((char *)&local_148,(String *)"layout(location=");
          String::operator+((String *)&local_e8,(String *)&local_148);
          String::operator+=((String *)(param_5 + 0x48),(String *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
        }
        local_1f0 = (StringName *)(param_5 + 0x40);
        local_148 = 0;
        String::parse_latin1((String *)&local_148,"out ");
        String::operator+((String *)&local_140,(String *)&local_158);
        String::operator+((String *)&local_e8,(String *)&local_140);
        String::operator+=((String *)local_1f0,(String *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
        local_148 = 0;
        String::parse_latin1((String *)&local_148,"in ");
        String::operator+((String *)&local_140,(String *)&local_158);
        String::operator+((String *)&local_e8,(String *)&local_140);
        String::operator+=((String *)(param_5 + 0x48),(String *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
      }
    }
    if ((local_188 != (undefined1 (*) [16])0x0) && (0 < *(int *)local_188[1])) {
      local_180 = 0;
      String::parse_latin1((String *)&local_180,"\n\nstruct {\n");
      for (plVar170 = *(long **)*pauVar153; plVar170 != (long *)0x0; plVar170 = (long *)plVar170[5])
      {
        lVar194 = *plVar170;
        if (lVar194 == 0) {
LAB_00111331:
          local_148 = 0;
        }
        else {
          local_148 = 0;
          if (*(char **)(lVar194 + 8) == (char *)0x0) {
            if (*(long *)(lVar194 + 0x10) == 0) goto LAB_00111331;
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_148,(CowData *)(lVar194 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_148,*(char **)(lVar194 + 8));
          }
        }
        _mkid((String *)&local_140);
        local_158 = (char *)0x0;
        String::parse_latin1((String *)&local_158," ");
        _typestr((CowData<char32_t> *)&local_168,*(undefined4 *)((long)plVar170 + 0xc));
        _prestr((CowData<char32_t> *)local_178,*(undefined4 *)((long)plVar170 + 0x14),0);
        operator+((char *)&local_170,(String *)&_LC17);
        String::operator+((String *)&local_160,(String *)&local_170);
        String::operator+((String *)&local_150,(String *)&local_160);
        String::operator+((String *)&local_e8,(String *)&local_150);
        String::operator+=((String *)&local_180,(String *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_178);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
        if (0 < (int)plVar170[3]) {
          String::operator+=((String *)&local_180,"[");
          itos((long)&local_e8);
          String::operator+=((String *)&local_180,(String *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          String::operator+=((String *)&local_180,"]");
        }
        String::operator+=((String *)&local_180,";\n");
      }
      String::operator+=((String *)&local_180,"} frag_to_light;\n");
      String::operator+=((String *)(param_5 + 0x48),(String *)&local_180);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
    }
    for (local_228 = (CowData<char32_t> *)0x0;
        (uVar151 = _LC55, lVar194 = *(long *)(param_3 + 0x130), lVar194 != 0 &&
        ((long)local_228 < *(long *)(lVar194 + -8)));
        local_228 = (CowData<char32_t> *)((long)local_228 + 1)) {
      plVar170 = (long *)(lVar194 + (long)local_228 * 0x30);
      local_150 = (char *)0x0;
      _constr(SUB81((StringName *)&local_e8,0));
      String::operator+=((String *)&local_150,(String *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      uVar159 = ShaderLanguage::is_float_type((int)plVar170[1]);
      _prestr((StringName *)&local_e8,(int)plVar170[3],uVar159);
      String::operator+=((String *)&local_150,(String *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      if ((int)plVar170[1] == 0x20) {
        lVar194 = plVar170[2];
        if (lVar194 == 0) {
LAB_00111466:
          local_140 = 0;
        }
        else {
          local_140 = 0;
          if (*(char **)(lVar194 + 8) == (char *)0x0) {
            if (*(long *)(lVar194 + 0x10) == 0) goto LAB_00111466;
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_140,(CowData *)(lVar194 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_140,*(char **)(lVar194 + 8));
          }
        }
        _mkid((String *)&local_e8);
        String::operator+=((String *)&local_150,(String *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
      }
      else {
        _typestr((StringName *)&local_e8);
        String::operator+=((String *)&local_150,(String *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      }
      lVar194 = *plVar170;
      if (lVar194 == 0) {
LAB_00110eca:
        local_148 = 0;
      }
      else {
        local_148 = 0;
        if (*(char **)(lVar194 + 8) == (char *)0x0) {
          if (*(long *)(lVar194 + 0x10) == 0) goto LAB_00110eca;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_148,(CowData *)(lVar194 + 0x10));
        }
        else {
          String::parse_latin1((String *)&local_148,*(char **)(lVar194 + 8));
        }
      }
      _mkid((String *)&local_140);
      operator+((char *)&local_e8,(String *)&_LC124);
      String::operator+=((String *)&local_150,(String *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
      if (0 < (int)plVar170[5]) {
        String::operator+=((String *)&local_150,"[");
        itos((long)&local_e8);
        String::operator+=((String *)&local_150,(String *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        String::operator+=((String *)&local_150,"]");
      }
      String::operator+=((String *)&local_150,"=");
      _dump_node_code((Node *)&local_e8,param_2,(GeneratedCode *)plVar170[4],
                      (IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,param_7);
      String::operator+=((String *)&local_150,(String *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      String::operator+=((String *)&local_150,";\n");
      String::operator+=((String *)(param_5 + 0x40),(String *)&local_150);
      String::operator+=((String *)(param_5 + 0x48),(String *)&local_150);
      String::operator+=((String *)(param_5 + 0x50),(String *)&local_150);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
    }
    local_e0 = 0;
    uStack_d8 = 0;
    uStack_d4 = 0;
    local_c0 = _LC55;
    uStack_d0 = 0;
    uStack_cc = 0;
    iStack_c8 = 0;
    uStack_c4 = 0;
    for (lVar194 = 0;
        (lVar180 = *(long *)(param_3 + 0x120), lVar180 != 0 && (lVar194 < *(long *)(lVar180 + -8)));
        lVar194 = lVar194 + 1) {
      lVar180 = *(long *)(lVar180 + 0x10 + lVar194 * 0x48);
      *(long *)(this_02 + 0x310) = lVar180;
      StringName::operator=((StringName *)(this_02 + 0x318),(StringName *)(lVar180 + 0x18));
      _dump_node_code((Node *)&local_140,param_2,*(GeneratedCode **)(lVar180 + 0x50),
                      (IdentifierActions *)(ulong)(iVar161 + 1),param_5,param_6,param_7);
      pCVar174 = (CowData<char32_t> *)
                 HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                 ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                               *)&local_e8,(StringName *)(lVar180 + 0x18));
      if (*(ulong *)pCVar174 != local_140) {
        CowData<char32_t>::operator=(pCVar174,(CowData *)&local_140);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
      *(undefined8 *)(this_02 + 0x310) = 0;
    }
    this_00 = (HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *)
              local_40;
    pHVar185 = local_b8;
    do {
      *(undefined8 *)(pHVar185 + 0x20) = uVar151;
      pHVar186 = pHVar185 + 0x28;
      *(undefined1 (*) [16])pHVar185 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pHVar185 + 0x10) = (undefined1  [16])0x0;
      pHVar185 = pHVar186;
    } while (pHVar186 != this_00);
    for (lVar194 = 0; (lVar180 != 0 && (lVar194 < *(long *)(lVar180 + -8))); lVar194 = lVar194 + 1)
    {
      lVar180 = *(long *)(lVar180 + 0x10 + lVar194 * 0x48);
      *(long *)(this_02 + 0x310) = lVar180;
      pSVar187 = (StringName *)(lVar180 + 0x18);
      StringName::operator=((StringName *)(this_02 + 0x318),pSVar187);
      local_140 = local_140 & 0xffffffff00000000;
      cVar156 = HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>
                ::_lookup_pos(this_04,pSVar187,(uint *)&local_140);
      if (cVar156 != '\0') {
        piVar168 = (int *)HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>
                          ::operator[](this_04,pSVar187);
        _dump_function_deps(this_02,(ShaderNode *)param_3,pSVar187,(HashMap *)&local_e8,
                            (String *)(param_5 + (long)*piVar168 * 8 + 0x40),
                            (HashSet *)(local_b8 + (long)*piVar168 * 0x28));
        pCVar166 = (CowData *)
                   HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                   ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                                 *)&local_e8,pSVar187);
        lVar180 = *(long *)(lVar180 + 0x18);
        if (lVar180 == 0) {
          local_140 = 0;
        }
        else {
          local_140 = 0;
          if (*(char **)(lVar180 + 8) == (char *)0x0) {
            if (*(long *)(lVar180 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_140,(CowData *)(lVar180 + 0x10));
            }
          }
          else {
            String::parse_latin1((String *)&local_140,*(char **)(lVar180 + 8));
          }
        }
        pCVar174 = (CowData<char32_t> *)
                   HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                   ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                 *)(param_5 + 0x58),(String *)&local_140);
        if (*(long *)pCVar174 != *(long *)pCVar166) {
          CowData<char32_t>::_ref(pCVar174,pCVar166);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
      }
      *(undefined8 *)(this_02 + 0x310) = 0;
      lVar180 = *(long *)(param_3 + 0x120);
    }
    do {
      this_00 = this_00 + -0x28;
      HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::~HashSet
                (this_00);
    } while (this_00 != local_b8);
    HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
    ::~HashMap((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                *)&local_e8);
    CowData<StringName>::_unref((CowData<StringName> *)&local_f0);
    List<Pair<StringName,ShaderLanguage::ShaderNode::Varying>,DefaultAllocator>::~List
              ((List<Pair<StringName,ShaderLanguage::ShaderNode::Varying>,DefaultAllocator> *)
               &local_188);
    CowData<StringName>::_unref((CowData<StringName> *)&local_100);
    CowData<StringName>::_unref((CowData<StringName> *)&local_110);
    CowData<int>::_unref((CowData<int> *)&local_120);
    CowData<int>::_unref((CowData<int> *)&local_130);
    break;
      default:
switchD_0010872f_caseD_1:
    break;
      case 2:
    if (param_3[0x68] == (GeneratedCode)0x0) {
      local_f8 = (char *)0x0;
      local_e0 = 2;
      local_e8 = "{\n";
      String::parse_latin1((StrRange *)&local_f8);
      _mktab((int)(CowData<char32_t> *)&local_108);
      String::operator+((String *)&local_e8,(String *)&local_108);
      String::operator+=((String *)&local_190,(String *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      plVar170 = *(long **)(param_3 + 0x60);
      if (plVar170 != (long *)0x0) goto LAB_001091c1;
    }
    else {
      plVar170 = *(long **)(param_3 + 0x60);
      if (plVar170 == (long *)0x0) break;
LAB_001091c1:
      plVar170 = (long *)*plVar170;
      if (plVar170 != (long *)0x0) {
        iVar161 = 0;
        do {
          iVar161 = iVar161 + 1;
          _dump_node_code((Node *)&local_128,param_2,(GeneratedCode *)*plVar170,
                          (IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,param_7
                         );
          if ((*(int *)(*plVar170 + 0x10) == 7) || (param_3[0x68] != (GeneratedCode)0x0)) {
            String::operator+=((String *)&local_190,(String *)&local_128);
            if ((param_3[0x69] != (GeneratedCode)0x0) &&
               ((*(long *)(param_3 + 0x60) != 0 &&
                (iVar161 < *(int *)(*(long *)(param_3 + 0x60) + 0x10))))) {
              String::operator+=((String *)&local_190,",");
            }
          }
          else {
            local_f8 = (char *)0x0;
            local_e8 = ";\n";
            local_e0 = 2;
            String::parse_latin1((StrRange *)&local_f8);
            _mktab((int)(String *)&local_118);
            String::operator+((String *)&local_108,(String *)&local_118);
            String::operator+((String *)&local_e8,(String *)&local_108);
            String::operator+=((String *)&local_190,(String *)&local_e8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
          }
          pcVar184 = local_128;
          if (local_128 != (char *)0x0) {
            LOCK();
            plVar169 = (long *)(local_128 + -0x10);
            *plVar169 = *plVar169 + -1;
            UNLOCK();
            if (*plVar169 == 0) {
              local_128 = (char *)0x0;
              Memory::free_static(pcVar184 + -0x10,false);
            }
          }
          plVar170 = (long *)plVar170[1];
        } while (plVar170 != (long *)0x0);
      }
    }
    if (param_3[0x68] == (GeneratedCode)0x0) {
      pSVar172 = (String *)&local_e8;
      local_f8 = (char *)0x0;
      local_e0 = 2;
      local_e8 = "}\n";
      this_05 = (String *)&local_108;
      String::parse_latin1((StrRange *)&local_f8);
      _mktab((int)this_05);
      String::operator+(pSVar172,this_05);
      String::operator+=((String *)&local_190,pSVar172);
LAB_0010933a:
      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar172);
      CowData<char32_t>::_unref((CowData<char32_t> *)this_05);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    }
    break;
      case 3:
    if (param_3[0x31] == (GeneratedCode)0x0) {
      local_e8 = (char *)((ulong)local_e8._4_4_ << 0x20);
      cVar156 = HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>
                ::_lookup_pos(this_04,(StringName *)(this_02 + 0x318),(uint *)&local_e8);
      if ((cVar156 != '\0') &&
         (piVar168 = (int *)HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>
                            ::operator[](this_04,(StringName *)(this_02 + 0x318)), *piVar168 == 0))
      goto LAB_0010984f;
      if (in_stack_00000010 != '\0') {
        local_e8 = (char *)((ulong)local_e8._4_4_ << 0x20);
        in_stack_00000010 =
             HashMap<StringName,ShaderLanguage::ShaderNode::Varying,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Varying>>>
             ::_lookup_pos((HashMap<StringName,ShaderLanguage::ShaderNode::Varying,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Varying>>>
                            *)(*(long *)(this_02 + 0x308) + 0x48),(StringName *)(param_3 + 0x18),
                           (uint *)&local_e8);
        goto LAB_0010b5a5;
      }
      local_e8 = (char *)((ulong)local_e8._4_4_ << 0x20);
      in_stack_00000010 =
           HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
           _lookup_pos((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                        *)(this_02 + 0x3f0),(StringName *)(param_3 + 0x18),(uint *)&local_e8);
    }
    else {
LAB_0010984f:
      if (in_stack_00000010 != '\0') {
        in_stack_00000010 = '\0';
LAB_0010b5a5:
        local_e8 = (char *)((ulong)local_e8 & 0xffffffff00000000);
        cVar156 = HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                  ::_lookup_pos((HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                                 *)(this_04 + 0xc0),(StringName *)(param_3 + 0x18),(uint *)&local_e8
                               );
        if (cVar156 != '\0') {
          puVar167 = (undefined8 *)
                     HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                     ::operator[]((HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                                   *)(this_04 + 0xc0),(StringName *)(param_3 + 0x18));
          *(undefined1 *)*puVar167 = 1;
        }
      }
    }
    pSVar187 = (StringName *)(param_3 + 0x18);
    if ((*(long *)(pHVar1 + 0x68) != 0) && (*(int *)(pHVar1 + 0x8c) != 0)) {
      uVar188 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(pHVar1 + 0x88) * 4);
      lVar194 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(pHVar1 + 0x88) * 8);
      if (*(long *)(param_3 + 0x18) == 0) {
        uVar163 = StringName::get_empty_hash();
      }
      else {
        uVar163 = *(uint *)(*(long *)(param_3 + 0x18) + 0x20);
      }
      uVar193 = CONCAT44(0,uVar188);
      if (uVar163 == 0) {
        uVar163 = 1;
      }
      auVar19._8_8_ = 0;
      auVar19._0_8_ = (ulong)uVar163 * lVar194;
      auVar91._8_8_ = 0;
      auVar91._0_8_ = uVar193;
      lVar180 = SUB168(auVar19 * auVar91,8);
      uVar162 = *(uint *)(*(long *)(pHVar1 + 0x70) + lVar180 * 4);
      iVar161 = SUB164(auVar19 * auVar91,8);
      if (uVar162 != 0) {
        uVar190 = 0;
        while ((uVar163 != uVar162 ||
               (*(long *)(*(long *)(*(long *)(pHVar1 + 0x68) + lVar180 * 8) + 0x10) !=
                *(long *)(param_3 + 0x18)))) {
          uVar190 = uVar190 + 1;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = (ulong)(iVar161 + 1) * lVar194;
          auVar92._8_8_ = 0;
          auVar92._0_8_ = uVar193;
          lVar180 = SUB168(auVar20 * auVar92,8);
          uVar162 = *(uint *)(*(long *)(pHVar1 + 0x70) + lVar180 * 4);
          iVar161 = SUB164(auVar20 * auVar92,8);
          if ((uVar162 == 0) ||
             (auVar21._8_8_ = 0, auVar21._0_8_ = (ulong)uVar162 * lVar194, auVar93._8_8_ = 0,
             auVar93._0_8_ = uVar193, auVar22._8_8_ = 0,
             auVar22._0_8_ = (ulong)((uVar188 + iVar161) - SUB164(auVar21 * auVar93,8)) * lVar194,
             auVar94._8_8_ = 0, auVar94._0_8_ = uVar193, SUB164(auVar22 * auVar94,8) < uVar190))
          goto LAB_00109bc0;
        }
        local_e8 = (char *)((ulong)local_e8 & 0xffffffff00000000);
        cVar156 = HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
                  _lookup_pos((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                               *)(this_02 + 0x350),pSVar187,(uint *)&local_e8);
        if (cVar156 == '\0') {
          if ((*(long *)(pHVar1 + 0x68) == 0) || (*(int *)(pHVar1 + 0x8c) == 0)) goto LAB_0010cf08;
          uVar188 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(pHVar1 + 0x88) * 4);
          uVar193 = CONCAT44(0,uVar188);
          lVar194 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(pHVar1 + 0x88) * 8);
          if (*(long *)(param_3 + 0x18) == 0) {
            uVar163 = StringName::get_empty_hash();
          }
          else {
            uVar163 = *(uint *)(*(long *)(param_3 + 0x18) + 0x20);
          }
          uVar162 = 1;
          if (uVar163 != 0) {
            uVar162 = uVar163;
          }
          auVar23._8_8_ = 0;
          auVar23._0_8_ = (ulong)uVar162 * lVar194;
          auVar95._8_8_ = 0;
          auVar95._0_8_ = uVar193;
          lVar180 = SUB168(auVar23 * auVar95,8);
          uVar163 = *(uint *)(*(long *)(pHVar1 + 0x70) + lVar180 * 4);
          uVar190 = SUB164(auVar23 * auVar95,8);
          if (uVar163 == 0) goto LAB_0010cf08;
          uVar191 = 0;
          goto LAB_00109a79;
        }
      }
    }
LAB_00109bc0:
    if ((*(long *)(this_04 + 0x98) != 0) && (*(int *)(this_04 + 0xbc) != 0)) {
      uVar188 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this_04 + 0xb8) * 4);
      lVar194 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this_04 + 0xb8) * 8);
      if (*(long *)(param_3 + 0x18) == 0) {
        uVar163 = StringName::get_empty_hash();
      }
      else {
        uVar163 = *(uint *)(*(long *)(param_3 + 0x18) + 0x20);
      }
      uVar193 = CONCAT44(0,uVar188);
      if (uVar163 == 0) {
        uVar163 = 1;
      }
      auVar27._8_8_ = 0;
      auVar27._0_8_ = (ulong)uVar163 * lVar194;
      auVar99._8_8_ = 0;
      auVar99._0_8_ = uVar193;
      lVar180 = SUB168(auVar27 * auVar99,8);
      uVar162 = *(uint *)(*(long *)(this_04 + 0xa0) + lVar180 * 4);
      iVar161 = SUB164(auVar27 * auVar99,8);
      if (uVar162 != 0) {
        uVar190 = 0;
        while ((uVar162 != uVar163 ||
               (*(long *)(*(long *)(*(long *)(this_04 + 0x98) + lVar180 * 8) + 0x10) !=
                *(long *)(param_3 + 0x18)))) {
          uVar190 = uVar190 + 1;
          auVar28._8_8_ = 0;
          auVar28._0_8_ = (ulong)(iVar161 + 1) * lVar194;
          auVar100._8_8_ = 0;
          auVar100._0_8_ = uVar193;
          lVar180 = SUB168(auVar28 * auVar100,8);
          uVar162 = *(uint *)(*(long *)(this_04 + 0xa0) + lVar180 * 4);
          iVar161 = SUB164(auVar28 * auVar100,8);
          if ((uVar162 == 0) ||
             (auVar29._8_8_ = 0, auVar29._0_8_ = (ulong)uVar162 * lVar194, auVar101._8_8_ = 0,
             auVar101._0_8_ = uVar193, auVar30._8_8_ = 0,
             auVar30._0_8_ = (ulong)((uVar188 + iVar161) - SUB164(auVar29 * auVar101,8)) * lVar194,
             auVar102._8_8_ = 0, auVar102._0_8_ = uVar193, SUB164(auVar30 * auVar102,8) < uVar190))
          goto LAB_00109d20;
        }
        local_e8 = (char *)((ulong)local_e8 & 0xffffffff00000000);
        cVar156 = HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
                  _lookup_pos((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                               *)(this_02 + 0x378),pSVar187,(uint *)&local_e8);
        if (cVar156 == '\0') {
          puVar167 = (undefined8 *)
                     HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                     ::operator[]((HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                                   *)(this_04 + 0x90),pSVar187);
          *(undefined1 *)*puVar167 = 1;
          HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                    ((StringName *)&local_e8);
        }
      }
    }
LAB_00109d20:
    if ((*(long *)(pHVar1 + 8) != 0) && (*(int *)(pHVar1 + 0x2c) != 0)) {
      uVar188 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(pHVar1 + 0x28) * 4);
      lVar194 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(pHVar1 + 0x28) * 8);
      if (*(long *)(param_3 + 0x18) == 0) {
        uVar163 = StringName::get_empty_hash();
      }
      else {
        uVar163 = *(uint *)(*(long *)(param_3 + 0x18) + 0x20);
      }
      uVar193 = CONCAT44(0,uVar188);
      if (uVar163 == 0) {
        uVar163 = 1;
      }
      lVar180 = *(long *)(pHVar1 + 0x10);
      auVar31._8_8_ = 0;
      auVar31._0_8_ = (ulong)uVar163 * lVar194;
      auVar103._8_8_ = 0;
      auVar103._0_8_ = uVar193;
      lVar181 = SUB168(auVar31 * auVar103,8);
      uVar162 = *(uint *)(lVar180 + lVar181 * 4);
      iVar161 = SUB164(auVar31 * auVar103,8);
      if (uVar162 != 0) {
        uVar190 = 0;
        do {
          if ((uVar162 == uVar163) &&
             (lVar181 = *(long *)(*(long *)(*(long *)(pHVar1 + 8) + lVar181 * 8) + 0x10),
             lVar181 == *(long *)(param_3 + 0x18))) {
            if ((*(long *)(pHVar1 + 8) == 0) || (*(int *)(pHVar1 + 0x2c) == 0)) goto LAB_0010cf08;
            lVar194 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(pHVar1 + 0x28) * 8);
            uVar188 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(pHVar1 + 0x28) * 4);
            if (lVar181 == 0) {
              uVar163 = StringName::get_empty_hash();
              lVar180 = *(long *)(pHVar1 + 0x10);
            }
            else {
              uVar163 = *(uint *)(lVar181 + 0x20);
            }
            uVar193 = CONCAT44(0,uVar188);
            uVar162 = 1;
            if (uVar163 != 0) {
              uVar162 = uVar163;
            }
            auVar35._8_8_ = 0;
            auVar35._0_8_ = (ulong)uVar162 * lVar194;
            auVar107._8_8_ = 0;
            auVar107._0_8_ = uVar193;
            lVar181 = SUB168(auVar35 * auVar107,8);
            uVar163 = *(uint *)(lVar180 + lVar181 * 4);
            uVar190 = SUB164(auVar35 * auVar107,8);
            if (uVar163 == 0) goto LAB_0010cf08;
            uVar191 = 0;
            goto LAB_00109eeb;
          }
          uVar190 = uVar190 + 1;
          auVar32._8_8_ = 0;
          auVar32._0_8_ = (ulong)(iVar161 + 1) * lVar194;
          auVar104._8_8_ = 0;
          auVar104._0_8_ = uVar193;
          lVar181 = SUB168(auVar32 * auVar104,8);
          uVar162 = *(uint *)(lVar180 + lVar181 * 4);
          iVar161 = SUB164(auVar32 * auVar104,8);
        } while ((uVar162 != 0) &&
                (auVar33._8_8_ = 0, auVar33._0_8_ = (ulong)uVar162 * lVar194, auVar105._8_8_ = 0,
                auVar105._0_8_ = uVar193, auVar34._8_8_ = 0,
                auVar34._0_8_ =
                     (ulong)((uVar188 + iVar161) - SUB164(auVar33 * auVar105,8)) * lVar194,
                auVar106._8_8_ = 0, auVar106._0_8_ = uVar193,
                uVar190 <= SUB164(auVar34 * auVar106,8)));
      }
    }
    lVar194 = *(long *)(this_02 + 0x308);
    if ((*(long *)(lVar194 + 0x80) != 0) && (*(int *)(lVar194 + 0xa4) != 0)) {
      uVar188 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar194 + 0xa0) * 4);
      lVar180 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar194 + 0xa0) * 8);
      if (*(long *)(param_3 + 0x18) == 0) {
        uVar163 = StringName::get_empty_hash();
      }
      else {
        uVar163 = *(uint *)(*(long *)(param_3 + 0x18) + 0x20);
      }
      uVar193 = CONCAT44(0,uVar188);
      uVar162 = 1;
      if (uVar163 != 0) {
        uVar162 = uVar163;
      }
      auVar63._8_8_ = 0;
      auVar63._0_8_ = (ulong)uVar162 * lVar180;
      auVar135._8_8_ = 0;
      auVar135._0_8_ = uVar193;
      lVar181 = SUB168(auVar63 * auVar135,8);
      uVar163 = *(uint *)(*(long *)(lVar194 + 0x88) + lVar181 * 4);
      iVar161 = SUB164(auVar63 * auVar135,8);
      if (uVar163 != 0) {
        uVar190 = 0;
        do {
          if ((uVar162 == uVar163) &&
             (lVar181 = *(long *)(*(long *)(*(long *)(lVar194 + 0x80) + lVar181 * 8) + 0x10),
             lVar181 == *(long *)(param_3 + 0x18))) {
            lVar194 = *(long *)(this_02 + 0x308);
            if ((*(long *)(lVar194 + 0x80) == 0) || (*(int *)(lVar194 + 0xa4) == 0))
            goto LAB_0010cf08;
            uVar188 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar194 + 0xa0) * 4);
            uVar193 = CONCAT44(0,uVar188);
            lVar180 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar194 + 0xa0) * 8);
            if (lVar181 == 0) {
              uVar163 = StringName::get_empty_hash();
            }
            else {
              uVar163 = *(uint *)(lVar181 + 0x20);
            }
            if (uVar163 == 0) {
              uVar163 = 1;
            }
            auVar67._8_8_ = 0;
            auVar67._0_8_ = (ulong)uVar163 * lVar180;
            auVar139._8_8_ = 0;
            auVar139._0_8_ = uVar193;
            lVar181 = SUB168(auVar67 * auVar139,8);
            uVar162 = *(uint *)(*(long *)(lVar194 + 0x88) + lVar181 * 4);
            uVar190 = SUB164(auVar67 * auVar139,8);
            if (uVar162 == 0) goto LAB_0010cf08;
            uVar191 = 0;
            goto LAB_0010b232;
          }
          uVar190 = uVar190 + 1;
          auVar64._8_8_ = 0;
          auVar64._0_8_ = (ulong)(iVar161 + 1) * lVar180;
          auVar136._8_8_ = 0;
          auVar136._0_8_ = uVar193;
          lVar181 = SUB168(auVar64 * auVar136,8);
          uVar163 = *(uint *)(*(long *)(lVar194 + 0x88) + lVar181 * 4);
          iVar161 = SUB164(auVar64 * auVar136,8);
        } while ((uVar163 != 0) &&
                (auVar65._8_8_ = 0, auVar65._0_8_ = (ulong)uVar163 * lVar180, auVar137._8_8_ = 0,
                auVar137._0_8_ = uVar193, auVar66._8_8_ = 0,
                auVar66._0_8_ =
                     (ulong)((uVar188 + iVar161) - SUB164(auVar65 * auVar137,8)) * lVar180,
                auVar138._8_8_ = 0, auVar138._0_8_ = uVar193,
                uVar190 <= SUB164(auVar66 * auVar138,8)));
      }
    }
    if (in_stack_00000010 != '\0') {
      local_e0 = 0xe;
      local_e8 = "frag_to_light.";
      String::parse_latin1((StrRange *)&local_190);
    }
    lVar194 = *(long *)(param_3 + 0x18);
    if (lVar194 == 0) {
      local_f8 = (char *)0x0;
    }
    else {
      pcVar184 = *(char **)(lVar194 + 8);
      local_f8 = (char *)0x0;
      if (pcVar184 == (char *)0x0) {
        if (*(long *)(lVar194 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)(lVar194 + 0x10));
        }
      }
      else {
        local_e0 = strlen(pcVar184);
        local_e8 = pcVar184;
        String::parse_latin1((StrRange *)&local_f8);
      }
    }
    local_228 = (CowData<char32_t> *)&local_f8;
    _mkid((String *)&local_e8);
    String::operator+=((String *)&local_190,(String *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    CowData<char32_t>::_unref(local_228);
LAB_00109f25:
    if (*(long *)(param_3 + 0x18) == *(long *)(this_02 + 800)) {
LAB_0010a834:
      local_e8 = (char *)((ulong)local_e8 & 0xffffffff00000000);
      pSVar187 = (StringName *)(this_02 + 0x318);
      cVar156 = HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>
                ::_lookup_pos(this_04,pSVar187,(uint *)&local_e8);
      if ((cVar156 != '\0') &&
         (piVar168 = (int *)HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>
                            ::operator[](this_04,pSVar187), *piVar168 == 0)) {
        param_5[0x8a] = 1;
      }
      local_e8 = (char *)((ulong)local_e8 & 0xffffffff00000000);
      cVar156 = HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>
                ::_lookup_pos(this_04,pSVar187,(uint *)&local_e8);
      if ((cVar156 != '\0') &&
         (piVar168 = (int *)HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>
                            ::operator[](this_04,pSVar187), *piVar168 == 1)) {
        param_5[0x89] = 1;
      }
    }
    break;
      case 4:
    local_118 = (char *)0x0;
    _constr(SUB81((CowData<char32_t> *)&local_e8,0));
    String::operator+=((String *)&local_118,(String *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    if (*(int *)(param_3 + 0x18) == 0x20) {
      _mkid((String *)&local_e8);
      String::operator+=((String *)&local_118,(String *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    }
    else {
      _typestr((CowData<char32_t> *)&local_f8);
      _prestr((CowData<char32_t> *)&local_108,*(undefined4 *)(param_3 + 0x14),0);
      String::operator+((String *)&local_e8,(String *)&local_108);
      String::operator+=((String *)&local_118,(String *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    }
    uVar193 = 0;
    String::operator+=((String *)&local_118," ");
    lVar194 = *(long *)(param_3 + 0x38);
joined_r0x00109465:
    if (lVar194 != 0) {
      do {
        if (*(long *)(lVar194 + -8) <= (long)uVar193) break;
        lVar181 = uVar193 * 0x30;
        iVar161 = *(int *)(lVar194 + 8 + lVar181);
        if (uVar193 != 0) {
          String::operator+=((String *)&local_118,",");
          lVar194 = *(long *)(param_3 + 0x38);
        }
        local_228 = (CowData<char32_t> *)uVar193;
        if (lVar194 == 0) goto LAB_0010ab50;
        lVar180 = *(long *)(lVar194 + -8);
        if (lVar180 <= (long)uVar193) goto LAB_0010ab03;
        lVar194 = *(long *)(lVar194 + lVar181);
        if (lVar194 == 0) {
          local_f8 = (char *)0x0;
        }
        else {
          pcVar184 = *(char **)(lVar194 + 8);
          local_f8 = (char *)0x0;
          if (pcVar184 == (char *)0x0) {
            if (*(long *)(lVar194 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)(lVar194 + 0x10));
            }
          }
          else {
            local_e0 = strlen(pcVar184);
            local_e8 = pcVar184;
            String::parse_latin1((StrRange *)&local_f8);
          }
        }
        _mkid((String *)&local_e8);
        String::operator+=((String *)&local_118,(String *)&local_e8);
        pcVar184 = local_e8;
        if (local_e8 != (char *)0x0) {
          LOCK();
          plVar170 = (long *)(local_e8 + -0x10);
          *plVar170 = *plVar170 + -1;
          UNLOCK();
          if (*plVar170 == 0) {
            local_e8 = (char *)0x0;
            Memory::free_static(pcVar184 + -0x10,false);
          }
        }
        pcVar184 = local_f8;
        if (local_f8 != (char *)0x0) {
          LOCK();
          plVar170 = (long *)(local_f8 + -0x10);
          *plVar170 = *plVar170 + -1;
          UNLOCK();
          if (*plVar170 == 0) {
            local_f8 = (char *)0x0;
            Memory::free_static(pcVar184 + -0x10,false);
          }
        }
        if (iVar161 == 0) {
          lVar194 = *(long *)(param_3 + 0x38);
          if (lVar194 == 0) goto LAB_0010ab50;
          lVar180 = *(long *)(lVar194 + -8);
          if (lVar180 <= (long)uVar193) goto LAB_0010ab03;
LAB_00109595:
          if (*(long *)(lVar194 + 0x20 + lVar181) == 0) goto LAB_00109637;
          String::operator+=((String *)&local_118,"=");
          lVar194 = *(long *)(param_3 + 0x38);
          if (lVar194 == 0) goto LAB_0010ab50;
          lVar180 = *(long *)(lVar194 + -8);
          if (lVar180 <= (long)uVar193) goto LAB_0010ab03;
          puVar167 = *(undefined8 **)(lVar194 + 0x20 + lVar181);
          if (puVar167 == (undefined8 *)0x0) goto LAB_0010cfa0;
          lVar180 = puVar167[-1];
          if (lVar180 < 1) goto LAB_0010cfa3;
          _dump_node_code((Node *)&local_e8,param_2,(GeneratedCode *)*puVar167,
                          (IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,param_7
                         );
          String::operator+=((String *)&local_118,(String *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          lVar194 = *(long *)(param_3 + 0x38);
          goto LAB_00109637;
        }
        String::operator+=((String *)&local_118,"[");
        lVar194 = *(long *)(param_3 + 0x38);
        if (lVar194 == 0) goto LAB_0010ab50;
        lVar180 = *(long *)(lVar194 + -8);
        if (lVar180 <= (long)uVar193) goto LAB_0010ab03;
        pGVar182 = *(GeneratedCode **)(lVar194 + lVar181 + 0x10);
        if (pGVar182 == (GeneratedCode *)0x0) {
          itos((long)&local_e8);
        }
        else {
          _dump_node_code((Node *)&local_e8,param_2,pGVar182,
                          (IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,param_7
                         );
        }
        String::operator+=((String *)&local_118,(String *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        String::operator+=((String *)&local_118,"]");
        lVar194 = *(long *)(param_3 + 0x38);
        if (lVar194 == 0) goto LAB_0010ab50;
        lVar180 = *(long *)(lVar194 + -8);
        if (lVar180 <= (long)uVar193) goto LAB_0010ab03;
        if (*(char *)(lVar194 + lVar181 + 0x28) != '\0') goto LAB_00109595;
        lVar180 = *(long *)(lVar194 + lVar181 + 0x20);
        if ((lVar180 != 0) && (iVar161 = (int)*(undefined8 *)(lVar180 + -8), 0 < iVar161))
        goto LAB_0010e21a;
        uVar193 = uVar193 + 1;
      } while( true );
    }
    String::operator+=((String *)&local_190,(String *)&local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
    break;
      case 5:
    if (*(int *)(param_3 + 0x20) == 0) {
      get_constant_text(param_1,*(undefined4 *)(param_3 + 0x14),param_3 + 0x28);
LAB_0010d3c9:
      pcVar184 = local_190;
      if (local_190 != (char *)0x0) {
        LOCK();
        plVar170 = (long *)(local_190 + -0x10);
        *plVar170 = *plVar170 + -1;
        UNLOCK();
        if (*plVar170 == 0) {
          local_190 = (char *)0x0;
          Memory::free_static(pcVar184 + -0x10,false);
        }
      }
      goto LAB_0010a8d0;
    }
    if ((code *)**(undefined8 **)param_3 == ShaderLanguage::ConstantNode::get_datatype) {
      iVar161 = *(int *)(param_3 + 0x14);
    }
    else {
      iVar161 = (*(code *)**(undefined8 **)param_3)(param_3);
    }
    if (iVar161 == 0x20) {
      _mkid((String *)&local_e8);
    }
    else {
      _typestr((CowData<char32_t> *)&local_e8,*(undefined4 *)(param_3 + 0x14));
    }
    local_228 = (CowData<char32_t> *)0x0;
    String::operator+=((String *)&local_190,(String *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    String::operator+=((String *)&local_190,"[");
    itos((long)&local_e8);
    String::operator+=((String *)&local_190,(String *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    String::operator+=((String *)&local_190,"]");
    String::operator+=((String *)&local_190,(char *)&_LC28);
    if (0 < *(int *)(param_3 + 0x20)) {
      do {
        String::operator+=((String *)&local_190,"");
        while( true ) {
          lVar194 = *(long *)(param_3 + 0x40);
          if (lVar194 == 0) goto LAB_0010cfa0;
          lVar180 = *(long *)(lVar194 + -8);
          if (lVar180 < 1) goto LAB_0010cfa3;
          lVar194 = *(long *)(lVar194 + 0x20);
          if (lVar194 == 0) {
            lVar180 = 0;
            goto LAB_0010ab03;
          }
          lVar180 = *(long *)(lVar194 + -8);
          if (lVar180 <= (long)local_228) goto LAB_0010ab03;
          _dump_node_code((Node *)&local_e8,param_2,
                          *(GeneratedCode **)(lVar194 + (long)local_228 * 8),
                          (IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,param_7
                         );
          String::operator+=((String *)&local_190,(String *)&local_e8);
          pcVar184 = local_e8;
          if (local_e8 != (char *)0x0) {
            LOCK();
            plVar170 = (long *)(local_e8 + -0x10);
            *plVar170 = *plVar170 + -1;
            UNLOCK();
            if (*plVar170 == 0) {
              local_e8 = (char *)0x0;
              Memory::free_static(pcVar184 + -0x10,false);
            }
          }
          local_228 = (CowData<char32_t> *)((long)local_228 + 1);
          if (*(int *)(param_3 + 0x20) <= (int)local_228) goto LAB_001088c0;
          if (local_228 == (CowData<char32_t> *)0x0) break;
          String::operator+=((String *)&local_190,",");
        }
      } while( true );
    }
    goto LAB_001088c0;
      case 6:
    switch(*(undefined4 *)(param_3 + 0x20)) {
    case 8:
    case 9:
    case 0x1f:
    case 0x20:
    case 0x21:
      puVar167 = *(undefined8 **)(param_3 + 0x38);
      if (puVar167 != (undefined8 *)0x0) {
        lVar180 = puVar167[-1];
        if (lVar180 < 1) goto LAB_0010cfa3;
        this_01 = (Node *)&local_108;
        _dump_node_code(this_01,param_2,(GeneratedCode *)*puVar167,
                        (IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,param_7);
        iVar161 = *(int *)(param_3 + 0x20);
        if (iVar161 != 9) {
LAB_0010b885:
          local_228 = (CowData<char32_t> *)&local_f8;
          this_03 = (Node *)&local_e8;
          ShaderLanguage::get_operator_text(local_228,iVar161);
          String::operator+((String *)this_03,(String *)local_228);
          pcVar184 = local_190;
          if (local_190 != local_e8) {
            pcVar183 = local_e8;
            if (local_190 != (char *)0x0) {
              LOCK();
              plVar170 = (long *)(local_190 + -0x10);
              *plVar170 = *plVar170 + -1;
              UNLOCK();
              if (*plVar170 == 0) {
                local_190 = (char *)0x0;
                Memory::free_static(pcVar184 + -0x10,false);
                pcVar183 = local_e8;
              }
            }
            local_e8 = (char *)0x0;
            local_190 = pcVar183;
          }
          goto LAB_0010b913;
        }
        cVar156 = String::begins_with((char *)this_01);
        if (cVar156 == '\0') {
          iVar161 = *(int *)(param_3 + 0x20);
          goto LAB_0010b885;
        }
        if (local_190 != local_108) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_190,(CowData *)this_01);
        }
        goto LAB_0010b922;
      }
      break;
    default:
      if (in_stack_00000018 != '\0') {
        String::operator+=((String *)&local_190,(char *)&_LC28);
      }
      lVar194 = *(long *)(param_3 + 0x38);
      if (lVar194 == 0) {
LAB_0010db98:
        lVar180 = 0;
      }
      else {
        lVar180 = *(long *)(lVar194 + -8);
        if (1 < lVar180) {
          _dump_node_code((Node *)&local_f8,param_2,*(GeneratedCode **)(lVar194 + 8),
                          (IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,param_7
                         );
          local_e8 = &_LC124;
          local_118 = (char *)0x0;
          local_e0 = 1;
          String::parse_latin1((StrRange *)&local_118);
          ShaderLanguage::get_operator_text
                    ((CowData<char32_t> *)&local_138,*(undefined4 *)(param_3 + 0x20));
          local_e8 = " ";
          local_148 = 0;
          local_e0 = 1;
          String::parse_latin1((StrRange *)&local_148);
          puVar167 = *(undefined8 **)(param_3 + 0x38);
          if (puVar167 == (undefined8 *)0x0) break;
          lVar180 = puVar167[-1];
          if (lVar180 < 1) goto LAB_0010cfa3;
          _dump_node_code((Node *)&local_150,param_2,(GeneratedCode *)*puVar167,
                          (IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,param_7
                         );
          String::operator+((String *)&local_140,(String *)&local_150);
          String::operator+((String *)&local_128,(String *)&local_140);
          String::operator+((String *)&local_108,(String *)&local_128);
          String::operator+((String *)&local_e8,(String *)&local_108);
          String::operator+=((String *)&local_190,(String *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
          if (in_stack_00000018 != '\0') {
            String::operator+=((String *)&local_190,(char *)((long)&_LC28 + 7));
          }
          goto switchD_0010a1b0_default;
        }
      }
LAB_0010db9b:
      local_228 = (CowData<char32_t> *)1;
      goto LAB_0010ab03;
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
      lVar194 = *(long *)(param_3 + 0x38);
      if (lVar194 == 0) goto LAB_0010db98;
      lVar180 = *(long *)(lVar194 + -8);
      if (lVar180 < 2) goto LAB_0010db9b;
      _dump_node_code((Node *)&local_f8,param_2,*(GeneratedCode **)(lVar194 + 8),
                      (IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,param_7);
      ShaderLanguage::get_operator_text(&local_118,*(undefined4 *)(param_3 + 0x20));
      puVar167 = *(undefined8 **)(param_3 + 0x38);
      if (puVar167 != (undefined8 *)0x0) {
        lVar180 = puVar167[-1];
        if (0 < lVar180) {
          pSVar172 = (String *)&local_128;
          _dump_node_code((Node *)pSVar172,param_2,(GeneratedCode *)*puVar167,
                          (IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,param_7
                         );
          String::operator+((String *)&local_108,pSVar172);
          String::operator+((String *)&local_e8,(String *)&local_108);
          pcVar184 = local_190;
          if (local_190 != local_e8) {
            pcVar183 = local_e8;
            if (local_190 != (char *)0x0) {
              LOCK();
              plVar170 = (long *)(local_190 + -0x10);
              *plVar170 = *plVar170 + -1;
              UNLOCK();
              if (*plVar170 == 0) {
                local_190 = (char *)0x0;
                Memory::free_static(pcVar184 + -0x10,false);
                pcVar183 = local_e8;
              }
            }
            local_e8 = (char *)0x0;
            local_190 = pcVar183;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
          goto LAB_0010ad0d;
        }
        goto LAB_0010cfa3;
      }
      break;
    case 0x22:
      String::operator+=((String *)&local_190,(char *)&_LC28);
      puVar167 = *(undefined8 **)(param_3 + 0x38);
      if (puVar167 != (undefined8 *)0x0) {
        lVar180 = puVar167[-1];
        if (lVar180 < 1) goto LAB_0010cfa3;
        _dump_node_code((Node *)&local_e8,param_2,(GeneratedCode *)*puVar167,
                        (IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,param_7);
        String::operator+=((String *)&local_190,(String *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        String::operator+=((String *)&local_190,"?");
        lVar194 = *(long *)(param_3 + 0x38);
        if (lVar194 != 0) {
          lVar180 = *(long *)(lVar194 + -8);
          if (1 < lVar180) {
            _dump_node_code((Node *)&local_e8,param_2,*(GeneratedCode **)(lVar194 + 8),
                            (IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,
                            param_7);
            String::operator+=((String *)&local_190,(String *)&local_e8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
            String::operator+=((String *)&local_190,":");
            lVar194 = *(long *)(param_3 + 0x38);
            if (lVar194 == 0) {
LAB_0010f2e3:
              lVar180 = 0;
            }
            else {
              lVar180 = *(long *)(lVar194 + -8);
              if (2 < lVar180) {
                _dump_node_code((Node *)&local_e8,param_2,*(GeneratedCode **)(lVar194 + 0x10),
                                (IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,
                                param_7);
                String::operator+=((String *)&local_190,(String *)&local_e8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
                goto LAB_001088c0;
              }
            }
LAB_0010f2e6:
            local_228 = (CowData<char32_t> *)2;
            goto LAB_0010ab03;
          }
          goto LAB_0010db9b;
        }
        goto LAB_0010db98;
      }
      break;
    case 0x24:
    case 0x25:
      ShaderLanguage::get_operator_text(&local_f8);
      puVar167 = *(undefined8 **)(param_3 + 0x38);
      if (puVar167 != (undefined8 *)0x0) {
        lVar180 = puVar167[-1];
        if (lVar180 < 1) goto LAB_0010cfa3;
        _dump_node_code((Node *)&local_108,param_2,(GeneratedCode *)*puVar167,
                        (IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,param_7);
        String::operator+((String *)&local_e8,(String *)&local_108);
        pcVar184 = local_190;
        if (local_190 != local_e8) {
          pcVar183 = local_e8;
          if (local_190 != (char *)0x0) {
            LOCK();
            plVar170 = (long *)(local_190 + -0x10);
            *plVar170 = *plVar170 + -1;
            UNLOCK();
            if (*plVar170 == 0) {
              local_190 = (char *)0x0;
              Memory::free_static(pcVar184 + -0x10,false);
              pcVar183 = local_e8;
            }
          }
          local_e8 = (char *)0x0;
          local_190 = pcVar183;
        }
LAB_0010cc79:
        local_228 = (CowData<char32_t> *)&local_f8;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        CowData<char32_t>::_unref(local_228);
        goto switchD_0010a1b0_default;
      }
      break;
    case 0x26:
    case 0x27:
    case 0x28:
      plVar170 = *(long **)(param_3 + 0x38);
      if (plVar170 != (long *)0x0) {
        lVar180 = plVar170[-1];
        if (lVar180 < 1) goto LAB_0010cfa3;
        lVar194 = *plVar170;
        if (*(int *)(lVar194 + 0x10) != 3) {
          _err_print_error("_dump_node_code","servers/rendering/shader_compiler.cpp",0x472,
                           "Condition \"onode->arguments[0]->type != ShaderLanguage::Node::NODE_TYPE_VARIABLE\" is true. Returning: String()"
                           ,0,0);
          *(undefined8 *)param_1 = 0;
          goto LAB_0010d3c9;
        }
        local_e8 = (char *)((ulong)local_e8._4_4_ << 0x20);
        pSVar187 = (StringName *)(lVar194 + 0x18);
        cVar156 = HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
                  _lookup_pos((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                               *)(this_02 + 0x3c8),pSVar187,(uint *)&local_e8);
        local_208 = (long *)0x0;
        if ((cVar156 == '\0') &&
           (local_208 = *(long **)(*(long *)(this_02 + 0x308) + 0x120), local_208 != (long *)0x0)) {
          lVar180 = 0;
          plVar170 = local_208;
          do {
            plVar169 = plVar170;
            if (local_208[-1] <= lVar180) {
              local_208 = (long *)0x0;
              goto LAB_0010c836;
            }
            lVar180 = lVar180 + 1;
            plVar170 = plVar169 + 9;
          } while (*plVar169 != *(long *)(lVar194 + 0x18));
          local_208 = (long *)plVar169[2];
        }
LAB_0010c836:
        if (*(int *)(param_3 + 0x20) == 0x28) {
          lVar180 = *(long *)(lVar194 + 0x18);
          if (lVar180 == 0) {
LAB_0010f6cf:
            local_f8 = (char *)0x0;
          }
          else {
LAB_0010e391:
            local_f8 = (char *)0x0;
            if (*(char **)(lVar180 + 8) == (char *)0x0) {
              if (*(long *)(lVar180 + 0x10) == 0) goto LAB_0010f6cf;
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)(lVar180 + 0x10));
            }
            else {
              String::parse_latin1((String *)&local_f8,*(char **)(lVar180 + 8));
            }
          }
          local_228 = (CowData<char32_t> *)&local_f8;
          _mkid((String *)&local_e8);
          String::operator+=((String *)&local_190,(String *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          CowData<char32_t>::_unref(local_228);
LAB_0010c89e:
          local_1f8 = 0;
          local_200._0_1_ = '\0';
          bVar158 = 0;
        }
        else {
          if (*(int *)(param_3 + 0x20) == 0x27) {
            lVar180 = *(long *)(lVar194 + 0x18);
            if (lVar180 == 0) {
              local_e8 = (char *)0x0;
            }
            else {
              local_e8 = (char *)0x0;
              if (*(char **)(lVar180 + 8) == (char *)0x0) {
                if (*(long *)(lVar180 + 0x10) != 0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)&local_e8,(CowData *)(lVar180 + 0x10));
                }
              }
              else {
                String::parse_latin1((String *)&local_e8,*(char **)(lVar180 + 8));
              }
            }
            String::operator+=((String *)&local_190,(String *)&local_e8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
            goto LAB_0010c89e;
          }
          local_e8 = (char *)((ulong)local_e8 & 0xffffffff00000000);
          cVar157 = HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                    ::_lookup_pos((HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                                   *)(this_04 + 0x90),pSVar187,(uint *)&local_e8);
          if (cVar157 != '\0') {
            local_e8 = (char *)((ulong)local_e8 & 0xffffffff00000000);
            cVar157 = HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                      ::_lookup_pos((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                                     *)(this_02 + 0x378),pSVar187,(uint *)&local_e8);
            if (cVar157 == '\0') {
              puVar167 = (undefined8 *)
                         HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                         ::operator[]((HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                                       *)(this_04 + 0x90),pSVar187);
              *(undefined1 *)*puVar167 = 1;
              HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                        ((StringName *)&local_e8);
            }
          }
          if (cVar156 == '\0') {
            local_e8 = (char *)((ulong)local_e8 & 0xffffffff00000000);
            cVar157 = HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                      ::_lookup_pos(pHVar1,pSVar187,(uint *)&local_e8);
            if (cVar157 == '\0') {
              lVar180 = *(long *)(lVar194 + 0x20);
              if (lVar180 != 0) goto LAB_0010e391;
              goto LAB_0010f6cf;
            }
            pSVar172 = (String *)
                       HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                       ::operator[](pHVar1,pSVar187);
            String::operator+=((String *)&local_190,pSVar172);
            goto LAB_0010c89e;
          }
          lVar180 = *(long *)(lVar194 + 0x18);
          if (lVar180 == 0) {
            local_e8 = (char *)0x0;
          }
          else {
            local_e8 = (char *)0x0;
            if (*(char **)(lVar180 + 8) == (char *)0x0) {
              if (*(long *)(lVar180 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)(lVar180 + 0x10));
              }
            }
            else {
              String::parse_latin1((String *)&local_e8,*(char **)(lVar180 + 8));
            }
          }
          String::operator+=((String *)&local_190,(String *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          local_e8 = (char *)((ulong)local_e8 & 0xffffffff00000000);
          local_200._0_1_ =
               HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
               _lookup_pos((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                            *)(this_02 + 0x328),pSVar187,(uint *)&local_e8);
          local_1f8 = StringName::operator==(pSVar187,"textureSize");
          bVar158 = local_1f8;
          if ((local_1f8 == 0) &&
             (local_1f8 = StringName::operator==(pSVar187,"textureQueryLevels"), bVar158 = local_1f8
             , local_1f8 == 0)) {
            bVar158 = StringName::operator==(pSVar187,"textureQueryLod");
          }
        }
        String::operator+=((String *)&local_190,(char *)&_LC28);
        lVar180 = *(long *)(param_3 + 0x38);
        if (lVar180 == 0) goto LAB_001088c0;
        bVar149 = 0;
        uVar193 = 1;
        bVar150 = 0;
        bVar195 = 0;
        do {
          if (*(long *)(lVar180 + -8) <= (long)uVar193) break;
          if (uVar193 != 1) {
            String::operator+=((String *)&local_190,", ");
          }
          iVar161 = (int)uVar193;
          if (cVar156 == '\0') {
            if (local_208 != (long *)0x0) {
              local_228 = (CowData<char32_t> *)(uVar193 - 1);
              lVar181 = local_208[9];
              if (lVar181 == 0) {
                lVar180 = 0;
                goto LAB_0010ab03;
              }
              lVar180 = *(long *)(lVar181 + -8);
              if (lVar180 <= (long)local_228) goto LAB_0010ab03;
              if (*(int *)(lVar181 + -0x80 + uVar193 * 0x80) - 1U < 2) goto LAB_0010d7e7;
            }
          }
          else {
            lVar180 = *(long *)(lVar194 + 0x18);
            if (lVar180 == 0) {
              local_e8 = (char *)0x0;
            }
            else {
              local_e8 = (char *)0x0;
              if (*(char **)(lVar180 + 8) == (char *)0x0) {
                if (*(long *)(lVar180 + 0x10) != 0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)&local_e8,(CowData *)(lVar180 + 0x10));
                }
              }
              else {
                String::parse_latin1((String *)&local_e8,*(char **)(lVar180 + 8));
              }
            }
            cVar157 = ShaderLanguage::is_builtin_func_out_parameter
                                ((String *)&local_e8,iVar161 + -1);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
            if (cVar157 != '\0') {
LAB_0010d7e7:
              local_e8 = (char *)0x0;
              lVar181 = *(long *)(param_3 + 0x38);
              if (lVar181 == 0) goto LAB_0010def0;
              lVar180 = *(long *)(lVar181 + -8);
              local_228 = (CowData<char32_t> *)uVar193;
              if (lVar180 <= (long)uVar193) goto LAB_0010ab03;
              lVar180 = *(long *)(lVar181 + uVar193 * 8);
              iVar164 = *(int *)(lVar180 + 0x10);
              while (iVar164 != 3) {
                if (iVar164 != 8) goto LAB_0010c985;
                lVar180 = *(long *)(lVar180 + 0x48);
                iVar164 = *(int *)(lVar180 + 0x10);
              }
              StringName::operator=((StringName *)&local_e8,(StringName *)(lVar180 + 0x18));
              local_f8 = (char *)((ulong)local_f8 & 0xffffffff00000000);
              cVar157 = HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                        ::_lookup_pos((HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                                       *)(this_04 + 0xc0),(StringName *)&local_e8,(uint *)&local_f8)
              ;
              if (cVar157 != '\0') {
                puVar167 = (undefined8 *)
                           HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                           ::operator[]((HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                                         *)(this_04 + 0xc0),(StringName *)&local_e8);
                *(undefined1 *)*puVar167 = 1;
              }
              if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
                StringName::unref();
              }
            }
          }
          lVar181 = *(long *)(param_3 + 0x38);
LAB_0010c985:
          if (lVar181 == 0) goto LAB_0010def0;
          lVar180 = *(long *)(lVar181 + -8);
          local_228 = (CowData<char32_t> *)uVar193;
          if (lVar180 <= (long)uVar193) goto LAB_0010ab03;
          _dump_node_code((Node *)&local_168,param_2,*(GeneratedCode **)(lVar181 + uVar193 * 8),
                          (IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,param_7
                         );
          if ((iVar161 == 1) && ((char)local_200 != '\0')) {
            local_160 = 0;
            lVar181 = *(long *)(param_3 + 0x38);
            if (lVar181 == 0) goto LAB_0010db98;
            lVar180 = *(long *)(lVar181 + -8);
            if (lVar180 < 2) goto LAB_0010db9b;
            lVar180 = *(long *)(lVar181 + 8);
            if (*(int *)(lVar180 + 0x10) == 3) {
              StringName::operator=((StringName *)&local_160,(StringName *)(lVar180 + 0x18));
LAB_0010ca41:
              local_1f0 = (StringName *)&local_160;
              plVar170 = (long *)RenderingServer::get_singleton();
              cVar157 = (**(code **)(*plVar170 + 0x12c0))(plVar170);
              if (cVar157 != '\0') {
                if (this_02[0x505] != (ShaderCompiler)0x0) {
                  plVar170 = (long *)RenderingServer::get_singleton();
                  cVar157 = (**(code **)(*plVar170 + 0x12c0))(plVar170);
                  if (cVar157 != '\0') {
                    local_e8 = (char *)((ulong)local_e8 & 0xffffffff00000000);
                    bVar160 = HashMap<StringName,ShaderLanguage::ShaderNode::Uniform,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Uniform>>>
                              ::_lookup_pos((HashMap<StringName,ShaderLanguage::ShaderNode::Uniform,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Uniform>>>
                                             *)(*(long *)(this_02 + 0x308) + 0x78),local_1f0,
                                            (uint *)&local_e8);
                    if ((bVar160 == 0) ||
                       (lVar180 = HashMap<StringName,ShaderLanguage::ShaderNode::Uniform,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Uniform>>>
                                  ::operator[]((HashMap<StringName,ShaderLanguage::ShaderNode::Uniform,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Uniform>>>
                                                *)(*(long *)(this_02 + 0x308) + 0x78),local_1f0),
                       2 < *(int *)(lVar180 + 0x34) - 0xfU)) {
                      bVar160 = bVar149;
                    }
                    String::operator+=((String *)&local_190,(String *)&local_168);
                    goto LAB_0010ca8c;
                  }
                }
                goto LAB_0010ca7f;
              }
              pHVar1 = (HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                        *)(this_02 + 0x4a8);
              local_158 = (char *)0x0;
              local_e8 = (char *)((ulong)local_e8 & 0xffffffff00000000);
              cVar157 = HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                        ::_lookup_pos(pHVar1,local_1f0,(uint *)&local_e8);
              bVar148 = 0;
              bVar160 = bVar148;
              if (cVar157 == '\0') {
                local_e8 = (char *)((ulong)local_e8 & 0xffffffff00000000);
                bVar160 = HashMap<StringName,ShaderLanguage::ShaderNode::Uniform,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Uniform>>>
                          ::_lookup_pos((HashMap<StringName,ShaderLanguage::ShaderNode::Uniform,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Uniform>>>
                                         *)(*(long *)(this_02 + 0x308) + 0x78),local_1f0,
                                        (uint *)&local_e8);
                if (bVar160 == 0) {
                  lVar181 = *(long *)(this_02 + 0x310);
                  lVar180 = *(long *)(lVar181 + 0x48);
                  if (lVar180 != 0) {
                    local_228 = (CowData<char32_t> *)0x0;
                    do {
                      if (*(long *)(lVar180 + -8) <= (long)local_228) break;
                      lVar180 = lVar180 + (long)local_228 * 0x80;
                      if (*(long *)(lVar180 + 8) == local_160) {
                        if (*(char *)(lVar180 + 0x30) == '\0') {
                          bVar2 = *(byte *)(lVar180 + 0x24);
                          if (bVar2 != 0) {
                            iVar161 = *(int *)(lVar180 + 0x40);
                            bVar148 = 0;
                            bVar160 = bVar148;
                            bVar154 = bVar2;
                            if (((iVar161 != 0xf) &&
                                (bVar160 = bVar2, bVar154 = bVar195, iVar161 != 0x11)) &&
                               (bVar160 = bVar148, iVar161 == 0x10)) {
                              bVar150 = bVar2;
                            }
                            bVar195 = bVar154;
                            _get_sampler_name((String *)&local_e8,this_02,
                                              *(undefined4 *)(lVar180 + 0x28),
                                              *(undefined4 *)(lVar180 + 0x2c));
                            if (local_158 != local_e8) {
                              CowData<char32_t>::operator=
                                        ((CowData<char32_t> *)&local_158,(CowData *)&local_e8);
                            }
                            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
                            goto LAB_0010dffc;
                          }
                        }
                        else {
                          local_e8 = (char *)((ulong)local_e8 & 0xffffffff00000000);
                          cVar157 = HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                                    ::_lookup_pos(pHVar1,(StringName *)(lVar180 + 0x38),
                                                  (uint *)&local_e8);
                          if (cVar157 != '\0') {
                            lVar181 = *(long *)(*(long *)(this_02 + 0x310) + 0x48);
                            if (lVar181 == 0) {
                              lVar180 = 0;
                              goto LAB_0010ab03;
                            }
                            lVar180 = *(long *)(lVar181 + -8);
                            if (lVar180 <= (long)local_228) goto LAB_0010ab03;
                            pCVar166 = (CowData *)
                                       HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                                       ::operator[](pHVar1,(StringName *)
                                                           (lVar181 + 0x38 + (long)local_228 * 0x80)
                                                   );
                            if (local_158 != *(char **)pCVar166) {
                              CowData<char32_t>::_ref((CowData<char32_t> *)&local_158,pCVar166);
                            }
                            goto LAB_0010dffc;
                          }
                          _err_print_error("_dump_node_code","servers/rendering/shader_compiler.cpp"
                                           ,0x4fa,
                                           "Condition \"!actions.custom_samplers.has(function->arguments[j].tex_builtin)\" is true. Continuing."
                                           ,0,0);
                          lVar181 = *(long *)(this_02 + 0x310);
                        }
                      }
                      lVar180 = *(long *)(lVar181 + 0x48);
                      local_228 = (CowData<char32_t> *)((long)local_228 + 1);
                    } while (lVar180 != 0);
                  }
                  _get_sampler_name((String *)&local_e8,this_02,6,2);
                  if (local_158 != local_e8) {
                    CowData<char32_t>::operator=
                              ((CowData<char32_t> *)&local_158,(CowData *)&local_e8);
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
                  bVar160 = bVar148;
                }
                else {
                  lVar180 = HashMap<StringName,ShaderLanguage::ShaderNode::Uniform,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Uniform>>>
                            ::operator[]((HashMap<StringName,ShaderLanguage::ShaderNode::Uniform,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Uniform>>>
                                          *)(*(long *)(this_02 + 0x308) + 0x78),local_1f0);
                  iVar161 = *(int *)(lVar180 + 0x34);
                  bVar2 = 0;
                  bVar148 = bVar2;
                  bVar154 = bVar160;
                  bVar155 = bVar150;
                  if (((iVar161 != 0xf) && (bVar148 = bVar160, bVar154 = bVar195, iVar161 != 0x11))
                     && (bVar148 = bVar2, bVar155 = bVar160, iVar161 != 0x10)) {
                    bVar155 = bVar150;
                  }
                  bVar150 = bVar155;
                  bVar195 = bVar154;
                  _get_sampler_name((String *)&local_e8,this_02,*(undefined4 *)(lVar180 + 0x3c),
                                    *(undefined4 *)(lVar180 + 0x40));
                  if (local_158 != local_e8) {
                    CowData<char32_t>::operator=
                              ((CowData<char32_t> *)&local_158,(CowData *)&local_e8);
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
                  bVar160 = bVar148;
                }
              }
              else {
                pCVar166 = (CowData *)
                           HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                           ::operator[](pHVar1,local_1f0);
                if (local_158 != *(char **)pCVar166) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_158,pCVar166);
                }
              }
LAB_0010dffc:
              local_150 = (char *)0x0;
              String::parse_latin1((String *)&local_150,"");
              if ((this_02[0x505] == (ShaderCompiler)0x0) ||
                 (bVar160 = bVar160 | bVar195 | bVar150, bVar160 == 0)) {
                lVar181 = *(long *)(param_3 + 0x38);
                if (lVar181 == 0) {
                  lVar180 = 0;
                }
                else {
                  lVar180 = *(long *)(lVar181 + -8);
                  if (1 < lVar180) {
                    (**(code **)**(undefined8 **)(lVar181 + 8))();
                    ShaderLanguage::get_datatype_name((String *)&local_e8);
                    pcVar184 = local_150;
                    if (local_150 != local_e8) {
                      if (local_150 != (char *)0x0) {
                        LOCK();
                        plVar170 = (long *)(local_150 + -0x10);
                        *plVar170 = *plVar170 + -1;
                        UNLOCK();
                        if (*plVar170 == 0) {
                          local_150 = (char *)0x0;
                          Memory::free_static(pcVar184 + -0x10,false);
                        }
                      }
                      local_150 = local_e8;
                      local_e8 = (char *)0x0;
                    }
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
                    bVar160 = bVar149;
                    goto LAB_0010e069;
                  }
                }
                local_228 = (CowData<char32_t> *)1;
                goto LAB_0010ab03;
              }
              String::parse_latin1((String *)&local_150,"multiviewSampler");
LAB_0010e069:
              local_f8 = (char *)0x0;
              String::parse_latin1((String *)&local_f8,(char *)((long)&_LC28 + 7));
              local_128 = (char *)0x0;
              String::parse_latin1((String *)&local_128,", ");
              local_148 = 0;
              String::parse_latin1((String *)&local_148,(char *)&_LC28);
              String::operator+((String *)&local_140,(String *)&local_150);
              String::operator+((String *)&local_138,(String *)&local_140);
              String::operator+((String *)&local_118,(String *)&local_138);
              String::operator+((String *)&local_108,(String *)&local_118);
              String::operator+((String *)&local_e8,(String *)&local_108);
              String::operator+=((String *)&local_190,(String *)&local_e8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
            }
            else {
              if (*(int *)(lVar180 + 0x10) == 9) {
                StringName::operator=((StringName *)&local_160,(StringName *)(lVar180 + 0x20));
                goto LAB_0010ca41;
              }
LAB_0010ca7f:
              String::operator+=((String *)&local_190,(String *)&local_168);
              bVar160 = bVar149;
            }
LAB_0010ca8c:
            bVar149 = bVar160;
            if ((StringName::configured != '\0') && (local_160 != 0)) {
              StringName::unref();
            }
          }
          else {
            bVar160 = (local_1f8 ^ 1) & bVar149 & iVar161 == 2;
            if (bVar160 == 0) {
              String::operator+=((String *)&local_190,(String *)&local_168);
            }
            else {
              local_f8 = (char *)0x0;
              String::parse_latin1((String *)&local_f8,".xy)");
              operator+((char *)&local_108,(String *)"multiview_uv(");
              String::operator+((String *)&local_e8,(String *)&local_108);
              pcVar184 = local_168;
              if (local_168 != local_e8) {
                if (local_168 != (char *)0x0) {
                  LOCK();
                  plVar170 = (long *)(local_168 + -0x10);
                  *plVar170 = *plVar170 + -1;
                  UNLOCK();
                  if (*plVar170 == 0) {
                    local_168 = (char *)0x0;
                    Memory::free_static(pcVar184 + -0x10,false);
                  }
                }
                local_168 = local_e8;
                local_e8 = (char *)0x0;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
              String::operator+=((String *)&local_190,(String *)&local_168);
              bVar149 = bVar160;
            }
          }
          uVar193 = uVar193 + 1;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
          lVar180 = *(long *)(param_3 + 0x38);
        } while (lVar180 != 0);
        String::operator+=((String *)&local_190,(char *)((long)&_LC28 + 7));
        bVar195 = bVar195 & (bVar158 ^ 1);
        bVar158 = bVar158 ^ 1;
        if ((bVar195 != 0) && (bVar158 = bVar195, this_02[0x504] != (ShaderCompiler)0x0)) {
          local_f8 = (char *)0x0;
          String::parse_latin1((String *)&local_f8," * vec4(vec3(sc_luminance_multiplier()), 1.0))")
          ;
          operator+((char *)&local_108,(String *)&_LC28);
          String::operator+((String *)&local_e8,(String *)&local_108);
          if (local_190 != local_e8) {
            CowData<char32_t>::operator=((CowData<char32_t> *)&local_190,(CowData *)&local_e8);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
        }
        if ((bVar150 != 0) && (bVar158 != 0)) {
          local_f8 = (char *)0x0;
          String::parse_latin1((String *)&local_f8,(char *)((long)&_LC28 + 7));
          operator+((char *)&local_108,(String *)"normal_roughness_compatibility(");
          String::operator+((String *)&local_e8,(String *)&local_108);
          if (local_190 != local_e8) {
            CowData<char32_t>::operator=((CowData<char32_t> *)&local_190,(CowData *)&local_e8);
          }
          goto LAB_0010cc79;
        }
        goto switchD_0010a1b0_default;
      }
      break;
    case 0x29:
      puVar167 = *(undefined8 **)(param_3 + 0x38);
      if (puVar167 != (undefined8 *)0x0) {
        lVar180 = puVar167[-1];
        if (lVar180 < 1) goto LAB_0010cfa3;
        _dump_node_code((Node *)&local_e8,param_2,(GeneratedCode *)*puVar167,
                        (IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,param_7);
        String::operator+=((String *)&local_190,(String *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        String::operator+=((String *)&local_190,"[");
        lVar194 = *(long *)(param_3 + 0x38);
        if (lVar194 == 0) goto LAB_0010db98;
        lVar180 = *(long *)(lVar194 + -8);
        if (lVar180 < 2) goto LAB_0010db9b;
        _dump_node_code((Node *)&local_e8,param_2,*(GeneratedCode **)(lVar194 + 8),
                        (IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,param_7);
        String::operator+=((String *)&local_190,(String *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        String::operator+=((String *)&local_190,"]");
        goto switchD_0010a1b0_default;
      }
      break;
    case 0x2a:
      goto switchD_0010872f_caseD_1;
    }
LAB_0010cfa0:
    lVar180 = 0;
    goto LAB_0010cfa3;
      case 7:
    switch(*(undefined4 *)(param_3 + 0x14)) {
    case 0:
      local_f8 = (char *)0x0;
      local_e0 = 2;
      local_e8 = ")\n";
      String::parse_latin1((StrRange *)&local_f8);
      puVar167 = *(undefined8 **)(param_3 + 0x20);
      if (puVar167 == (undefined8 *)0x0) goto LAB_0010cfa0;
      lVar180 = puVar167[-1];
      if (0 < lVar180) {
        _dump_node_code((Node *)&local_118,param_2,(GeneratedCode *)*puVar167,
                        (IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,param_7);
        local_138 = 0;
        local_e8 = "if (";
        local_e0 = 4;
        String::parse_latin1((StrRange *)&local_138);
        _mktab((int)(String *)&local_140);
        String::operator+((String *)&local_128,(String *)&local_140);
        String::operator+((String *)&local_108,(String *)&local_128);
        String::operator+((String *)&local_e8,(String *)&local_108);
        String::operator+=((String *)&local_190,(String *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
        puVar167 = *(undefined8 **)(param_3 + 0x30);
        if (puVar167 == (undefined8 *)0x0) goto LAB_0010cfa0;
        lVar180 = puVar167[-1];
        if (0 < lVar180) {
          _dump_node_code((Node *)&local_e8,param_2,(GeneratedCode *)*puVar167,
                          (IdentifierActions *)(ulong)(iVar161 + 1),param_5,param_6,param_7);
          String::operator+=((String *)&local_190,(String *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          if ((*(long *)(param_3 + 0x30) != 0) && (*(long *)(*(long *)(param_3 + 0x30) + -8) == 2))
          {
            local_f8 = (char *)0x0;
            String::parse_latin1((String *)&local_f8,"else\n");
            _mktab((int)(String *)&local_108);
            String::operator+((String *)&local_e8,(String *)&local_108);
            String::operator+=((String *)&local_190,(String *)&local_e8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
            lVar194 = *(long *)(param_3 + 0x30);
            if (lVar194 == 0) goto LAB_0010db98;
            lVar180 = *(long *)(lVar194 + -8);
            if (lVar180 < 2) goto LAB_0010db9b;
            pGVar182 = *(GeneratedCode **)(lVar194 + 8);
            goto LAB_0010bd84;
          }
          break;
        }
      }
      goto LAB_0010cfa3;
    case 1:
      if ((*(long *)(param_3 + 0x20) == 0) || (*(long *)(*(long *)(param_3 + 0x20) + -8) == 0)) {
        String::parse_latin1((String *)&local_190,"return;");
      }
      else {
        local_f8 = (char *)0x0;
        String::parse_latin1((String *)&local_f8,";");
        puVar167 = *(undefined8 **)(param_3 + 0x20);
        if (puVar167 == (undefined8 *)0x0) goto LAB_0010cfa0;
        lVar180 = puVar167[-1];
        if (lVar180 < 1) goto LAB_0010cfa3;
        pSVar172 = (String *)&local_108;
        _dump_node_code((Node *)&local_118,param_2,(GeneratedCode *)*puVar167,
                        (IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,param_7);
        operator+((char *)pSVar172,(String *)"return ");
        String::operator+((String *)&local_e8,pSVar172);
        pcVar184 = local_190;
        if (local_190 != local_e8) {
          if (local_190 != (char *)0x0) {
            LOCK();
            plVar170 = (long *)(local_190 + -0x10);
            *plVar170 = *plVar170 + -1;
            UNLOCK();
            if (*plVar170 == 0) {
              local_190 = (char *)0x0;
              Memory::free_static(pcVar184 + -0x10,false);
            }
          }
          local_190 = local_e8;
          local_e8 = (char *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
LAB_0010ad0d:
        local_228 = (CowData<char32_t> *)&local_f8;
        CowData<char32_t>::_unref((CowData<char32_t> *)pSVar172);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
        CowData<char32_t>::_unref(local_228);
      }
      break;
    case 2:
      puVar167 = *(undefined8 **)(param_3 + 0x30);
      if (puVar167 == (undefined8 *)0x0) goto LAB_0010cfa0;
      lVar180 = puVar167[-1];
      if (lVar180 < 1) goto LAB_0010cfa3;
      this_01 = (Node *)&local_180;
      _dump_node_code(this_01,param_2,(GeneratedCode *)*puVar167,
                      (IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,param_7);
      lVar194 = *(long *)(param_3 + 0x30);
      if (lVar194 == 0) goto LAB_0010db98;
      lVar180 = *(long *)(lVar194 + -8);
      if (lVar180 < 2) goto LAB_0010db9b;
      local_228 = (CowData<char32_t> *)local_178;
      _dump_node_code((Node *)local_228,param_2,*(GeneratedCode **)(lVar194 + 8),
                      (IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,param_7);
      lVar194 = *(long *)(param_3 + 0x30);
      if (lVar194 == 0) goto LAB_0010f2e3;
      lVar180 = *(long *)(lVar194 + -8);
      if (lVar180 < 3) goto LAB_0010f2e6;
      this_03 = (Node *)&local_170;
      _dump_node_code(this_03,param_2,*(GeneratedCode **)(lVar194 + 0x10),
                      (IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,param_7);
      local_f8 = (char *)0x0;
      String::parse_latin1((String *)&local_f8,")\n");
      local_128 = (char *)0x0;
      String::parse_latin1((String *)&local_128,";");
      local_148 = 0;
      String::parse_latin1((String *)&local_148,";");
      local_160 = 0;
      String::parse_latin1((String *)&local_160,"for (");
      _mktab((int)(String *)&local_168);
      String::operator+((String *)&local_158,(String *)&local_168);
      String::operator+((String *)&local_150,(String *)&local_158);
      String::operator+((String *)&local_140,(String *)&local_150);
      String::operator+((String *)&local_138,(String *)&local_140);
      String::operator+((String *)&local_118,(String *)&local_138);
      String::operator+((String *)&local_108,(String *)&local_118);
      String::operator+((String *)&local_e8,(String *)&local_108);
      String::operator+=((String *)&local_190,(String *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      lVar194 = *(long *)(param_3 + 0x30);
      if (lVar194 == 0) {
        lVar180 = 0;
LAB_0011011f:
        local_228 = (CowData<char32_t> *)3;
        goto LAB_0010ab03;
      }
      lVar180 = *(long *)(lVar194 + -8);
      if (lVar180 < 4) goto LAB_0011011f;
      _dump_node_code((Node *)&local_e8,param_2,*(GeneratedCode **)(lVar194 + 0x18),
                      (IdentifierActions *)(ulong)(iVar161 + 1),param_5,param_6,param_7);
      String::operator+=((String *)&local_190,(String *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
LAB_0010b913:
      CowData<char32_t>::_unref((CowData<char32_t> *)this_03);
      CowData<char32_t>::_unref(local_228);
LAB_0010b922:
      CowData<char32_t>::_unref((CowData<char32_t> *)this_01);
      break;
    case 3:
      local_f8 = (char *)0x0;
      local_e0 = 2;
      local_e8 = ")\n";
      String::parse_latin1((StrRange *)&local_f8);
      puVar167 = *(undefined8 **)(param_3 + 0x20);
      if (puVar167 == (undefined8 *)0x0) goto LAB_0010cfa0;
      lVar180 = puVar167[-1];
      if (0 < lVar180) {
        _dump_node_code((Node *)&local_118,param_2,(GeneratedCode *)*puVar167,
                        (IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,param_7);
        local_e8 = "while (";
        local_e0 = 7;
LAB_0010bc7e:
        local_228 = (CowData<char32_t> *)&local_118;
        local_138 = 0;
        String::parse_latin1((StrRange *)&local_138);
        _mktab((int)(String *)&local_140);
        String::operator+((String *)&local_128,(String *)&local_140);
        String::operator+((String *)&local_108,(String *)&local_128);
        String::operator+((String *)&local_e8,(String *)&local_108);
        String::operator+=((String *)&local_190,(String *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        CowData<char32_t>::_unref(local_228);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
        puVar167 = *(undefined8 **)(param_3 + 0x30);
        if (puVar167 == (undefined8 *)0x0) goto LAB_0010cfa0;
        lVar180 = puVar167[-1];
        if (0 < lVar180) {
          pGVar182 = (GeneratedCode *)*puVar167;
          goto LAB_0010bd84;
        }
      }
      goto LAB_0010cfa3;
    case 4:
      local_f8 = (char *)0x0;
      local_e0 = 2;
      local_e8 = "do";
      String::parse_latin1((StrRange *)&local_f8);
      _mktab((int)(CowData<char32_t> *)&local_108);
      String::operator+((String *)&local_e8,(String *)&local_108);
      String::operator+=((String *)&local_190,(String *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      puVar167 = *(undefined8 **)(param_3 + 0x30);
      if (puVar167 == (undefined8 *)0x0) goto LAB_0010cfa0;
      lVar180 = puVar167[-1];
      if (lVar180 < 1) goto LAB_0010cfa3;
      _dump_node_code((Node *)&local_e8,param_2,(GeneratedCode *)*puVar167,
                      (IdentifierActions *)(ulong)(iVar161 + 1),param_5,param_6,param_7);
      String::operator+=((String *)&local_190,(String *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      local_e8 = ");";
      local_f8 = (char *)0x0;
      local_e0 = 2;
      String::parse_latin1((StrRange *)&local_f8);
      puVar167 = *(undefined8 **)(param_3 + 0x20);
      if (puVar167 == (undefined8 *)0x0) goto LAB_0010cfa0;
      lVar180 = puVar167[-1];
      if (lVar180 < 1) goto LAB_0010cfa3;
      this_05 = (String *)&local_118;
      _dump_node_code((Node *)this_05,param_2,(GeneratedCode *)*puVar167,
                      (IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,param_7);
      local_138 = 0;
      local_e8 = "while (";
      local_e0 = 7;
      pSVar172 = (String *)&local_138;
      String::parse_latin1((StrRange *)pSVar172);
      _mktab((int)(CowData<char32_t> *)&local_140);
      String::operator+((String *)&local_128,(String *)&local_140);
      String::operator+((String *)&local_108,(String *)&local_128);
      String::operator+((String *)&local_e8,(String *)&local_108);
      String::operator+=((String *)&local_190,(String *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
      goto LAB_0010933a;
    case 5:
      local_e0 = 6;
      local_e8 = "break;";
      String::parse_latin1((StrRange *)&local_190);
      break;
    case 6:
      local_f8 = (char *)0x0;
      local_e0 = 2;
      local_e8 = ")\n";
      String::parse_latin1((StrRange *)&local_f8);
      puVar167 = *(undefined8 **)(param_3 + 0x20);
      if (puVar167 == (undefined8 *)0x0) goto LAB_0010cfa0;
      lVar180 = puVar167[-1];
      if (0 < lVar180) {
        _dump_node_code((Node *)&local_118,param_2,(GeneratedCode *)*puVar167,
                        (IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,param_7);
        local_e8 = "switch (";
        local_e0 = 8;
        goto LAB_0010bc7e;
      }
      goto LAB_0010cfa3;
    case 7:
      local_f8 = (char *)0x0;
      local_e0 = 2;
      local_e8 = ":\n";
      String::parse_latin1((StrRange *)&local_f8);
      puVar167 = *(undefined8 **)(param_3 + 0x20);
      if (puVar167 == (undefined8 *)0x0) goto LAB_0010cfa0;
      lVar180 = puVar167[-1];
      if (0 < lVar180) {
        _dump_node_code((Node *)&local_118,param_2,(GeneratedCode *)*puVar167,
                        (IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,param_7);
        local_e8 = "case ";
        local_e0 = 5;
        goto LAB_0010bc7e;
      }
LAB_0010cfa3:
      local_228 = (CowData<char32_t> *)0;
LAB_0010ab03:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,(long)local_228,lVar180,"p_index","size()",
                 "",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar147 = (code *)invalidInstructionException();
      (*pcVar147)();
    case 8:
      local_f8 = (char *)0x0;
      local_e0 = 9;
      local_e8 = "default:\n";
      String::parse_latin1((StrRange *)&local_f8);
      _mktab((int)(CowData<char32_t> *)&local_108);
      String::operator+((String *)&local_e8,(String *)&local_108);
      String::operator+=((String *)&local_190,(String *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      puVar167 = *(undefined8 **)(param_3 + 0x30);
      if (puVar167 == (undefined8 *)0x0) goto LAB_0010cfa0;
      lVar180 = puVar167[-1];
      if (lVar180 < 1) goto LAB_0010cfa3;
      pGVar182 = (GeneratedCode *)*puVar167;
LAB_0010bd84:
      _dump_node_code((Node *)&local_e8,param_2,pGVar182,(IdentifierActions *)(ulong)(iVar161 + 1),
                      param_5,param_6,param_7);
      String::operator+=((String *)&local_190,(String *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      break;
    case 9:
      local_e0 = 9;
      local_e8 = "continue;";
      String::parse_latin1((StrRange *)&local_190);
      break;
    case 10:
      StringName::StringName((StringName *)&local_f8,"DISCARD",false);
      local_e8 = (char *)((ulong)local_e8 & 0xffffffff00000000);
      cVar156 = HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                ::_lookup_pos((HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                               *)(this_04 + 0x90),(StringName *)&local_f8,(uint *)&local_e8);
      if (cVar156 == '\0') {
        if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::StringName((StringName *)&local_e8,"DISCARD",false);
        local_108 = (char *)((ulong)local_108 & 0xffffffff00000000);
        cVar156 = HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
                  _lookup_pos((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                               *)(this_02 + 0x378),(StringName *)&local_e8,(uint *)&local_108);
        if (cVar156 == '\0') {
          if ((StringName::configured != '\0') &&
             (((local_e8 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
              (local_f8 != (char *)0x0)))) {
            StringName::unref();
          }
          StringName::StringName((StringName *)&local_e8,"DISCARD",false);
          puVar167 = (undefined8 *)
                     HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                     ::operator[]((HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                                   *)(this_04 + 0x90),(StringName *)&local_e8);
          *(undefined1 *)*puVar167 = 1;
          if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
            StringName::unref();
          }
          StringName::StringName((StringName *)&local_f8,"DISCARD",false);
          HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                    ((StringName *)&local_e8);
          if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
            StringName::unref();
          }
        }
        else if ((StringName::configured != '\0') &&
                (((local_e8 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0'))
                 && (local_f8 != (char *)0x0)))) {
          StringName::unref();
        }
      }
      local_e0 = 8;
      local_e8 = "discard;";
      String::parse_latin1((StrRange *)&local_190);
    }
    break;
      case 8:
    local_128 = (char *)0x0;
    lVar194 = *(long *)(param_3 + 0x40);
    if (*(int *)(param_3 + 0x14) == 0x20) {
      if (lVar194 == 0) {
LAB_0010dac4:
        local_f8 = (char *)0x0;
      }
      else {
        pcVar184 = *(char **)(lVar194 + 8);
        local_f8 = (char *)0x0;
        if (pcVar184 == (char *)0x0) {
          if (*(long *)(lVar194 + 0x10) == 0) goto LAB_0010dac4;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)(lVar194 + 0x10));
        }
        else {
          local_e0 = strlen(pcVar184);
          local_e8 = pcVar184;
          String::parse_latin1((StrRange *)&local_f8);
        }
      }
      local_228 = (CowData<char32_t> *)&local_f8;
      _mkid((String *)&local_e8);
      if (local_128 != local_e8) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
        local_128 = local_e8;
        local_e8 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref(local_228);
    }
    else {
      if (lVar194 == 0) {
LAB_0010b364:
        local_f8 = (char *)0x0;
      }
      else {
        pcVar184 = *(char **)(lVar194 + 8);
        local_f8 = (char *)0x0;
        if (pcVar184 == (char *)0x0) {
          if (*(long *)(lVar194 + 0x10) == 0) goto LAB_0010b364;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)(lVar194 + 0x10));
        }
        else {
          local_e0 = strlen(pcVar184);
          local_e8 = pcVar184;
          String::parse_latin1((StrRange *)&local_f8);
        }
        if (local_128 != local_f8) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
          local_128 = local_f8;
          local_f8 = (char *)0x0;
        }
      }
      local_228 = (CowData<char32_t> *)&local_f8;
      CowData<char32_t>::_unref(local_228);
    }
    local_228 = (CowData<char32_t> *)&local_f8;
    local_220 = (CowData<char32_t> *)&local_128;
    local_108 = (char *)0x0;
    local_e8 = ".";
    local_e0 = 1;
    String::parse_latin1((StrRange *)&local_108);
    _dump_node_code((Node *)&local_118,param_2,*(GeneratedCode **)(param_3 + 0x48),
                    (IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,param_7);
    String::operator+((String *)local_228,(String *)&local_118);
    String::operator+((String *)&local_e8,(String *)local_228);
    if (local_190 != local_e8) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
      local_190 = local_e8;
      local_e8 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    CowData<char32_t>::_unref(local_228);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
    if (*(long *)(param_3 + 0x50) == 0) {
      if (*(long *)(param_3 + 0x58) == 0) {
        if (*(long *)(param_3 + 0x60) == 0) goto LAB_0010a180;
        String::operator+=((String *)&local_190,".");
        pGVar182 = *(GeneratedCode **)(param_3 + 0x60);
      }
      else {
        String::operator+=((String *)&local_190,"=");
        pGVar182 = *(GeneratedCode **)(param_3 + 0x58);
      }
      _dump_node_code((Node *)&local_e8,param_2,pGVar182,
                      (IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,param_7);
      String::operator+=((String *)&local_190,(String *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    }
    else {
      String::operator+=((String *)&local_190,"[");
      _dump_node_code((Node *)&local_e8,param_2,*(GeneratedCode **)(param_3 + 0x50),
                      (IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,param_7);
      String::operator+=((String *)&local_190,(String *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      String::operator+=((String *)&local_190,"]");
    }
LAB_0010a180:
    CowData<char32_t>::_unref(local_220);
    break;
      case 9:
    if (param_3[0x48] == (GeneratedCode)0x0) {
      local_e8 = (char *)((ulong)local_e8._4_4_ << 0x20);
      cVar156 = HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>
                ::_lookup_pos(this_04,(StringName *)(this_02 + 0x318),(uint *)&local_e8);
      if ((cVar156 != '\0') &&
         (piVar168 = (int *)HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>
                            ::operator[](this_04,(StringName *)(this_02 + 0x318)), *piVar168 == 0))
      goto LAB_0010a1c7;
      if (*(long *)(param_3 + 0x38) != 0) {
        local_e8 = (char *)((ulong)local_e8 & 0xffffffff00000000);
        local_220._0_1_ =
             HashMap<StringName,ShaderLanguage::ShaderNode::Varying,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Varying>>>
             ::_lookup_pos((HashMap<StringName,ShaderLanguage::ShaderNode::Varying,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Varying>>>
                            *)(*(long *)(this_02 + 0x308) + 0x48),(StringName *)(param_3 + 0x20),
                           (uint *)&local_e8);
        if ((char)local_220 == '\0') goto LAB_0010d497;
        goto LAB_0010a1d5;
      }
LAB_0010d497:
      if (in_stack_00000010 != '\0') {
        local_e8 = (char *)((ulong)local_e8._4_4_ << 0x20);
        local_220._0_1_ =
             HashMap<StringName,ShaderLanguage::ShaderNode::Varying,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Varying>>>
             ::_lookup_pos((HashMap<StringName,ShaderLanguage::ShaderNode::Varying,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Varying>>>
                            *)(*(long *)(this_02 + 0x308) + 0x48),(StringName *)(param_3 + 0x20),
                           (uint *)&local_e8);
        goto LAB_0010d4cf;
      }
      local_e8 = (char *)((ulong)local_e8._4_4_ << 0x20);
      local_220._0_1_ =
           HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
           _lookup_pos((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                        *)(this_02 + 0x3f0),(StringName *)(param_3 + 0x20),(uint *)&local_e8);
    }
    else {
LAB_0010a1c7:
      local_220._0_1_ = '\0';
LAB_0010a1d5:
      if (in_stack_00000010 != '\0') {
LAB_0010d4cf:
        local_e8 = (char *)((ulong)local_e8 & 0xffffffff00000000);
        cVar156 = HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                  ::_lookup_pos((HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                                 *)(this_04 + 0xc0),(StringName *)(param_3 + 0x20),(uint *)&local_e8
                               );
        if (cVar156 != '\0') {
          puVar167 = (undefined8 *)
                     HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                     ::operator[]((HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                                   *)(this_04 + 0xc0),(StringName *)(param_3 + 0x20));
          *(undefined1 *)*puVar167 = 1;
        }
      }
    }
    pSVar187 = (StringName *)(param_3 + 0x20);
    if ((*(long *)(pHVar1 + 0x68) != 0) && (*(int *)(pHVar1 + 0x8c) != 0)) {
      uVar188 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(pHVar1 + 0x88) * 4);
      lVar194 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(pHVar1 + 0x88) * 8);
      if (*(long *)(param_3 + 0x20) == 0) {
        uVar163 = StringName::get_empty_hash();
      }
      else {
        uVar163 = *(uint *)(*(long *)(param_3 + 0x20) + 0x20);
      }
      uVar193 = CONCAT44(0,uVar188);
      if (uVar163 == 0) {
        uVar163 = 1;
      }
      auVar39._8_8_ = 0;
      auVar39._0_8_ = (ulong)uVar163 * lVar194;
      auVar111._8_8_ = 0;
      auVar111._0_8_ = uVar193;
      lVar180 = SUB168(auVar39 * auVar111,8);
      uVar162 = *(uint *)(*(long *)(pHVar1 + 0x70) + lVar180 * 4);
      iVar161 = SUB164(auVar39 * auVar111,8);
      if (uVar162 != 0) {
        uVar190 = 0;
        while ((uVar162 != uVar163 ||
               (*(long *)(*(long *)(*(long *)(pHVar1 + 0x68) + lVar180 * 8) + 0x10) !=
                *(long *)(param_3 + 0x20)))) {
          uVar190 = uVar190 + 1;
          auVar40._8_8_ = 0;
          auVar40._0_8_ = (ulong)(iVar161 + 1) * lVar194;
          auVar112._8_8_ = 0;
          auVar112._0_8_ = uVar193;
          lVar180 = SUB168(auVar40 * auVar112,8);
          uVar162 = *(uint *)(*(long *)(pHVar1 + 0x70) + lVar180 * 4);
          iVar161 = SUB164(auVar40 * auVar112,8);
          if ((uVar162 == 0) ||
             (auVar41._8_8_ = 0, auVar41._0_8_ = (ulong)uVar162 * lVar194, auVar113._8_8_ = 0,
             auVar113._0_8_ = uVar193, auVar42._8_8_ = 0,
             auVar42._0_8_ = (ulong)((uVar188 + iVar161) - SUB164(auVar41 * auVar113,8)) * lVar194,
             auVar114._8_8_ = 0, auVar114._0_8_ = uVar193, SUB164(auVar42 * auVar114,8) < uVar190))
          goto LAB_0010a440;
        }
        local_e8 = (char *)((ulong)local_e8 & 0xffffffff00000000);
        cVar156 = HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
                  _lookup_pos((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                               *)(this_02 + 0x350),pSVar187,(uint *)&local_e8);
        if (cVar156 == '\0') {
          pCVar166 = (CowData *)
                     HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                     ::operator[](pHVar1 + 0x60,pSVar187);
          local_108 = (char *)0x0;
          if (*(long *)pCVar166 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,pCVar166);
          }
          cVar156 = String::begins_with((char *)&local_108);
          if (cVar156 != '\0') {
            String::substr((int)(String *)&local_f8,(int)(CowData<char32_t> *)&local_108);
            StringName::StringName((StringName *)&local_e8,(String *)&local_f8,false);
            pCVar166 = (CowData *)
                       HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                       ::operator[](pHVar1 + 0x60,(StringName *)&local_e8);
            if (local_108 != *(char **)pCVar166) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,pCVar166);
            }
            if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
          }
          local_e8 = (char *)0x0;
          if (local_108 != (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_108);
          }
          Vector<String>::push_back((Vector<String> *)param_5,(StringName *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                    ((StringName *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        }
      }
    }
LAB_0010a440:
    if ((*(long *)(this_04 + 0x98) != 0) && (*(int *)(this_04 + 0xbc) != 0)) {
      uVar188 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this_04 + 0xb8) * 4);
      lVar194 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this_04 + 0xb8) * 8);
      if (*(long *)(param_3 + 0x20) == 0) {
        uVar163 = StringName::get_empty_hash();
      }
      else {
        uVar163 = *(uint *)(*(long *)(param_3 + 0x20) + 0x20);
      }
      uVar193 = CONCAT44(0,uVar188);
      if (uVar163 == 0) {
        uVar163 = 1;
      }
      auVar43._8_8_ = 0;
      auVar43._0_8_ = (ulong)uVar163 * lVar194;
      auVar115._8_8_ = 0;
      auVar115._0_8_ = uVar193;
      lVar180 = SUB168(auVar43 * auVar115,8);
      uVar162 = *(uint *)(*(long *)(this_04 + 0xa0) + lVar180 * 4);
      iVar161 = SUB164(auVar43 * auVar115,8);
      if (uVar162 != 0) {
        uVar190 = 0;
        while ((uVar162 != uVar163 ||
               (*(long *)(*(long *)(*(long *)(this_04 + 0x98) + lVar180 * 8) + 0x10) !=
                *(long *)(param_3 + 0x20)))) {
          uVar190 = uVar190 + 1;
          auVar44._8_8_ = 0;
          auVar44._0_8_ = (ulong)(iVar161 + 1) * lVar194;
          auVar116._8_8_ = 0;
          auVar116._0_8_ = uVar193;
          lVar180 = SUB168(auVar44 * auVar116,8);
          uVar162 = *(uint *)(*(long *)(this_04 + 0xa0) + lVar180 * 4);
          iVar161 = SUB164(auVar44 * auVar116,8);
          if ((uVar162 == 0) ||
             (auVar45._8_8_ = 0, auVar45._0_8_ = (ulong)uVar162 * lVar194, auVar117._8_8_ = 0,
             auVar117._0_8_ = uVar193, auVar46._8_8_ = 0,
             auVar46._0_8_ = (ulong)((uVar188 + iVar161) - SUB164(auVar45 * auVar117,8)) * lVar194,
             auVar118._8_8_ = 0, auVar118._0_8_ = uVar193, SUB164(auVar46 * auVar118,8) < uVar190))
          goto LAB_0010a5a0;
        }
        local_e8 = (char *)((ulong)local_e8 & 0xffffffff00000000);
        cVar156 = HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
                  _lookup_pos((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                               *)(this_02 + 0x378),pSVar187,(uint *)&local_e8);
        if (cVar156 == '\0') {
          puVar167 = (undefined8 *)
                     HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                     ::operator[]((HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>
                                   *)(this_04 + 0x90),pSVar187);
          *(undefined1 *)*puVar167 = 1;
          HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                    ((StringName *)&local_e8);
        }
      }
    }
LAB_0010a5a0:
    if ((*(long *)(pHVar1 + 8) != 0) && (*(int *)(pHVar1 + 0x2c) != 0)) {
      uVar188 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(pHVar1 + 0x28) * 4);
      lVar194 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(pHVar1 + 0x28) * 8);
      if (*(long *)(param_3 + 0x20) == 0) {
        uVar163 = StringName::get_empty_hash();
      }
      else {
        uVar163 = *(uint *)(*(long *)(param_3 + 0x20) + 0x20);
      }
      uVar193 = CONCAT44(0,uVar188);
      if (uVar163 == 0) {
        uVar163 = 1;
      }
      lVar180 = *(long *)(pHVar1 + 0x10);
      auVar47._8_8_ = 0;
      auVar47._0_8_ = (ulong)uVar163 * lVar194;
      auVar119._8_8_ = 0;
      auVar119._0_8_ = uVar193;
      lVar181 = SUB168(auVar47 * auVar119,8);
      uVar162 = *(uint *)(lVar180 + lVar181 * 4);
      iVar161 = SUB164(auVar47 * auVar119,8);
      if (uVar162 != 0) {
        uVar190 = 0;
        do {
          if ((uVar162 == uVar163) &&
             (lVar181 = *(long *)(*(long *)(*(long *)(pHVar1 + 8) + lVar181 * 8) + 0x10),
             lVar181 == *(long *)(param_3 + 0x20))) {
            if ((*(long *)(pHVar1 + 8) == 0) || (*(int *)(pHVar1 + 0x2c) == 0)) goto LAB_0010cf08;
            uVar188 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(pHVar1 + 0x28) * 4);
            lVar194 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(pHVar1 + 0x28) * 8);
            if (lVar181 == 0) {
              uVar163 = StringName::get_empty_hash();
              lVar180 = *(long *)(pHVar1 + 0x10);
            }
            else {
              uVar163 = *(uint *)(lVar181 + 0x20);
            }
            uVar193 = CONCAT44(0,uVar188);
            uVar162 = 1;
            if (uVar163 != 0) {
              uVar162 = uVar163;
            }
            auVar51._8_8_ = 0;
            auVar51._0_8_ = (ulong)uVar162 * lVar194;
            auVar123._8_8_ = 0;
            auVar123._0_8_ = uVar193;
            lVar181 = SUB168(auVar51 * auVar123,8);
            uVar163 = *(uint *)(lVar180 + lVar181 * 4);
            uVar190 = SUB164(auVar51 * auVar123,8);
            if (uVar163 == 0) goto LAB_0010cf08;
            uVar191 = 0;
            goto LAB_0010a76a;
          }
          uVar190 = uVar190 + 1;
          auVar48._8_8_ = 0;
          auVar48._0_8_ = (ulong)(iVar161 + 1) * lVar194;
          auVar120._8_8_ = 0;
          auVar120._0_8_ = uVar193;
          lVar181 = SUB168(auVar48 * auVar120,8);
          uVar162 = *(uint *)(lVar180 + lVar181 * 4);
          iVar161 = SUB164(auVar48 * auVar120,8);
        } while ((uVar162 != 0) &&
                (auVar49._8_8_ = 0, auVar49._0_8_ = (ulong)uVar162 * lVar194, auVar121._8_8_ = 0,
                auVar121._0_8_ = uVar193, auVar50._8_8_ = 0,
                auVar50._0_8_ =
                     (ulong)((uVar188 + iVar161) - SUB164(auVar49 * auVar121,8)) * lVar194,
                auVar122._8_8_ = 0, auVar122._0_8_ = uVar193,
                uVar190 <= SUB164(auVar50 * auVar122,8)));
      }
    }
    lVar194 = *(long *)(this_02 + 0x308);
    if ((*(long *)(lVar194 + 0x80) != 0) && (*(int *)(lVar194 + 0xa4) != 0)) {
      uVar188 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar194 + 0xa0) * 4);
      lVar180 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar194 + 0xa0) * 8);
      if (*(long *)(param_3 + 0x20) == 0) {
        uVar163 = StringName::get_empty_hash();
      }
      else {
        uVar163 = *(uint *)(*(long *)(param_3 + 0x20) + 0x20);
      }
      uVar193 = CONCAT44(0,uVar188);
      uVar162 = 1;
      if (uVar163 != 0) {
        uVar162 = uVar163;
      }
      auVar55._8_8_ = 0;
      auVar55._0_8_ = (ulong)uVar162 * lVar180;
      auVar127._8_8_ = 0;
      auVar127._0_8_ = uVar193;
      lVar181 = SUB168(auVar55 * auVar127,8);
      uVar163 = *(uint *)(*(long *)(lVar194 + 0x88) + lVar181 * 4);
      iVar161 = SUB164(auVar55 * auVar127,8);
      if (uVar163 != 0) {
        uVar190 = 0;
        do {
          if ((uVar163 == uVar162) &&
             (lVar181 = *(long *)(*(long *)(*(long *)(lVar194 + 0x80) + lVar181 * 8) + 0x10),
             lVar181 == *(long *)(param_3 + 0x20))) {
            lVar194 = *(long *)(this_02 + 0x308);
            if ((*(long *)(lVar194 + 0x80) == 0) || (*(int *)(lVar194 + 0xa4) == 0))
            goto LAB_0010cf08;
            uVar188 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar194 + 0xa0) * 4);
            uVar193 = CONCAT44(0,uVar188);
            lVar180 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar194 + 0xa0) * 8);
            if (lVar181 == 0) {
              uVar163 = StringName::get_empty_hash();
            }
            else {
              uVar163 = *(uint *)(lVar181 + 0x20);
            }
            if (uVar163 == 0) {
              uVar163 = 1;
            }
            auVar59._8_8_ = 0;
            auVar59._0_8_ = (ulong)uVar163 * lVar180;
            auVar131._8_8_ = 0;
            auVar131._0_8_ = uVar193;
            lVar181 = SUB168(auVar59 * auVar131,8);
            uVar162 = *(uint *)(*(long *)(lVar194 + 0x88) + lVar181 * 4);
            uVar190 = SUB164(auVar59 * auVar131,8);
            if (uVar162 == 0) goto LAB_0010cf08;
            uVar191 = 0;
            goto LAB_0010af1a;
          }
          uVar190 = uVar190 + 1;
          auVar56._8_8_ = 0;
          auVar56._0_8_ = (ulong)(iVar161 + 1) * lVar180;
          auVar128._8_8_ = 0;
          auVar128._0_8_ = uVar193;
          lVar181 = SUB168(auVar56 * auVar128,8);
          uVar163 = *(uint *)(*(long *)(lVar194 + 0x88) + lVar181 * 4);
          iVar161 = SUB164(auVar56 * auVar128,8);
        } while ((uVar163 != 0) &&
                (auVar57._8_8_ = 0, auVar57._0_8_ = (ulong)uVar163 * lVar180, auVar129._8_8_ = 0,
                auVar129._0_8_ = uVar193, auVar58._8_8_ = 0,
                auVar58._0_8_ =
                     (ulong)((uVar188 + iVar161) - SUB164(auVar57 * auVar129,8)) * lVar180,
                auVar130._8_8_ = 0, auVar130._0_8_ = uVar193,
                uVar190 <= SUB164(auVar58 * auVar130,8)));
      }
    }
    if ((char)local_220 != '\0') {
      local_e0 = 0xe;
      local_e8 = "frag_to_light.";
      String::parse_latin1((StrRange *)&local_190);
    }
    lVar194 = *(long *)(param_3 + 0x20);
    if (lVar194 == 0) {
      local_f8 = (char *)0x0;
    }
    else {
      pcVar184 = *(char **)(lVar194 + 8);
      local_f8 = (char *)0x0;
      if (pcVar184 == (char *)0x0) {
        if (*(long *)(lVar194 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)(lVar194 + 0x10));
        }
      }
      else {
        local_e0 = strlen(pcVar184);
        local_e8 = pcVar184;
        String::parse_latin1((StrRange *)&local_f8);
      }
    }
    local_228 = (CowData<char32_t> *)&local_f8;
    _mkid((String *)&local_e8);
    String::operator+=((String *)&local_190,(String *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    CowData<char32_t>::_unref(local_228);
LAB_0010a7a4:
    if (*(long *)(param_3 + 0x30) == 0) {
      if (*(long *)(param_3 + 0x28) == 0) {
        if (*(long *)(param_3 + 0x38) != 0) {
          String::operator+=((String *)&local_190,"=");
          pGVar182 = *(GeneratedCode **)(param_3 + 0x38);
          goto LAB_0010a7e3;
        }
      }
      else {
        String::operator+=((String *)&local_190,"[");
        _dump_node_code((Node *)&local_e8,param_2,*(GeneratedCode **)(param_3 + 0x28),
                        (IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,param_7);
        String::operator+=((String *)&local_190,(String *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        String::operator+=((String *)&local_190,"]");
      }
    }
    else {
      String::operator+=((String *)&local_190,".");
      pGVar182 = *(GeneratedCode **)(param_3 + 0x30);
LAB_0010a7e3:
      _dump_node_code((Node *)&local_e8,param_2,pGVar182,
                      (IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,param_7);
      String::operator+=((String *)&local_190,(String *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    }
    if (*(long *)(param_3 + 0x20) == *(long *)(this_02 + 800)) goto LAB_0010a834;
    break;
      case 10:
    if (*(long *)(param_3 + 0x28) == 0) {
      iVar161 = 0;
    }
    else {
      iVar161 = *(int *)(*(long *)(param_3 + 0x28) + -8);
    }
    if (*(int *)(param_3 + 0x14) == 0x20) {
      _mkid((String *)&local_e8);
    }
    else {
      _typestr((CowData<char32_t> *)&local_e8);
    }
    String::operator+=((String *)&local_190,(String *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    String::operator+=((String *)&local_190,"[");
    local_228 = (CowData<char32_t> *)0x0;
    itos((long)&local_e8);
    String::operator+=((String *)&local_190,(String *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    String::operator+=((String *)&local_190,"]");
    String::operator+=((String *)&local_190,(char *)&_LC28);
    if (0 < iVar161) {
      do {
        lVar194 = *(long *)(param_3 + 0x28);
        if (lVar194 == 0) {
          lVar180 = 0;
          goto LAB_0010ab03;
        }
        lVar180 = *(long *)(lVar194 + -8);
        if (lVar180 <= (long)local_228) goto LAB_0010ab03;
        _dump_node_code((Node *)&local_e8,param_2,*(GeneratedCode **)(lVar194 + (long)local_228 * 8)
                        ,(IdentifierActions *)((ulong)param_4 & 0xffffffff),param_5,param_6,param_7)
        ;
        String::operator+=((String *)&local_190,(String *)&local_e8);
        pcVar184 = local_e8;
        if (local_e8 != (char *)0x0) {
          LOCK();
          plVar170 = (long *)(local_e8 + -0x10);
          *plVar170 = *plVar170 + -1;
          UNLOCK();
          if (*plVar170 == 0) {
            local_e8 = (char *)0x0;
            Memory::free_static(pcVar184 + -0x10,false);
          }
        }
        if (iVar161 + -1 != (int)local_228) {
          String::operator+=((String *)&local_190,", ");
        }
        local_228 = (CowData<char32_t> *)((long)local_228 + 1);
      } while (local_228 != (CowData<char32_t> *)(long)iVar161);
    }
LAB_001088c0:
    String::operator+=((String *)&local_190,(char *)((long)&_LC28 + 7));
   }

   switchD_0010a1b0_default:*(char**)param_1 = local_190;
   LAB_0010a8d0:if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
   while (true) {
      uVar191 = uVar191 + 1;
      auVar52._8_8_ = 0;
      auVar52._0_8_ = ( ulong )(uVar190 + 1) * lVar194;
      auVar124._8_8_ = 0;
      auVar124._0_8_ = uVar193;
      lVar181 = SUB168(auVar52 * auVar124, 8);
      uVar163 = *(uint*)( lVar180 + lVar181 * 4 );
      uVar190 = SUB164(auVar52 * auVar124, 8);
      if (( uVar163 == 0 ) || ( auVar53._8_8_ = 0 ),auVar53._0_8_ = (ulong)uVar163 * lVar194,auVar125._8_8_ = 0,auVar125._0_8_ = uVar193,auVar54._8_8_ = 0,auVar54._0_8_ = ( ulong )(( uVar188 + uVar190 ) - SUB164(auVar53 * auVar125, 8)) * lVar194,auVar126._8_8_ = 0,auVar126._0_8_ = uVar193,SUB164(auVar54 * auVar126, 8) < uVar191) break;
      LAB_0010a76a:if (( uVar163 == uVar162 ) && ( *(long*)( *(long*)( *(long*)( pHVar1 + 8 ) + lVar181 * 8 ) + 0x10 ) == *(long*)( param_3 + 0x20 ) )) {
         lVar194 = *(long*)( *(long*)( pHVar1 + 8 ) + (ulong)uVar190 * 8 );
         if (local_190 != *(char**)( lVar194 + 0x18 )) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_190, (CowData*)( lVar194 + 0x18 ));
         }

         goto LAB_0010a7a4;
      }

   }
;
   ;;
   goto LAB_0010cf08;
   while (true) {
      uVar191 = uVar191 + 1;
      auVar60._8_8_ = 0;
      auVar60._0_8_ = ( ulong )(uVar190 + 1) * lVar180;
      auVar132._8_8_ = 0;
      auVar132._0_8_ = uVar193;
      lVar181 = SUB168(auVar60 * auVar132, 8);
      uVar162 = *(uint*)( *(long*)( lVar194 + 0x88 ) + lVar181 * 4 );
      uVar190 = SUB164(auVar60 * auVar132, 8);
      if (( uVar162 == 0 ) || ( auVar61._8_8_ = 0 ),auVar61._0_8_ = (ulong)uVar162 * lVar180,auVar133._8_8_ = 0,auVar133._0_8_ = uVar193,auVar62._8_8_ = 0,auVar62._0_8_ = ( ulong )(( uVar188 + uVar190 ) - SUB164(auVar61 * auVar133, 8)) * lVar180,auVar134._8_8_ = 0,auVar134._0_8_ = uVar193,SUB164(auVar62 * auVar134, 8) < uVar191) break;
      LAB_0010af1a:if (uVar162 == uVar163) {
         lVar181 = *(long*)( *(long*)( *(long*)( lVar194 + 0x80 ) + lVar181 * 8 ) + 0x10 );
         if (lVar181 == *(long*)( param_3 + 0x20 )) {
            lVar194 = *(long*)( *(long*)( lVar194 + 0x80 ) + (ulong)uVar190 * 8 );
            if (*(int*)( lVar194 + 0x18 ) < 0) {
               if (lVar181 == 0) {
                  local_f8 = (char*)0x0;
               }
 else {
                  local_f8 = (char*)0x0;
                  if (*(char**)( lVar181 + 8 ) == (char*)0x0) {
                     if (*(long*)( lVar181 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)( lVar181 + 0x10 ));
                     }

                  }
 else {
                     String::parse_latin1((String*)&local_f8, *(char**)( lVar181 + 8 ));
                  }

               }

               local_228 = (CowData<char32_t>*)&local_f8;
               _mkid((String*)&local_e8);
               pcVar184 = local_190;
               if (local_190 != local_e8) {
                  pcVar183 = local_e8;
                  if (local_190 != (char*)0x0) {
                     LOCK();
                     plVar170 = (long*)( local_190 + -0x10 );
                     *plVar170 = *plVar170 + -1;
                     UNLOCK();
                     if (*plVar170 == 0) {
                        local_190 = (char*)0x0;
                        Memory::free_static(pcVar184 + -0x10, false);
                        pcVar183 = local_e8;
                     }

                  }

                  local_e8 = (char*)0x0;
                  local_190 = pcVar183;
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               CowData<char32_t>::_unref(local_228);
               goto LAB_0010a7a4;
            }

            if (*(int*)( lVar194 + 0x48 ) == 2) {
               if (lVar181 == 0) {
                  LAB_0010fb2b:local_108 = (char*)0x0;
               }
 else if (*(char**)( lVar181 + 8 ) == (char*)0x0) {
                  local_108 = (char*)0x0;
                  if (*(long*)( lVar181 + 0x10 ) == 0) goto LAB_0010fb2b;
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_108, (CowData*)( lVar181 + 0x10 ));
               }
 else {
                  local_108 = (char*)0x0;
                  String::parse_latin1((String*)&local_108, *(char**)( lVar181 + 8 ));
               }

               _mkid((String*)&local_f8);
               String::operator +((String*)&local_e8, (String*)( this_02 + 0x4e8 ));
               pcVar184 = local_190;
               if (local_190 != local_e8) {
                  if (local_190 != (char*)0x0) {
                     LOCK();
                     plVar170 = (long*)( local_190 + -0x10 );
                     *plVar170 = *plVar170 + -1;
                     UNLOCK();
                     if (*plVar170 == 0) {
                        local_190 = (char*)0x0;
                        Memory::free_static(pcVar184 + -0x10, false);
                     }

                  }

                  local_190 = local_e8;
                  local_e8 = (char*)0x0;
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
               _get_global_shader_uniform_from_type_and_index((String*)&local_e8, pHVar1 + 0xd8, &local_190, *(undefined4*)( lVar194 + 0x28 ));
               pcVar184 = local_190;
               if (local_190 != local_e8) {
                  if (local_190 != (char*)0x0) {
                     LOCK();
                     plVar170 = (long*)( local_190 + -0x10 );
                     *plVar170 = *plVar170 + -1;
                     UNLOCK();
                     if (*plVar170 == 0) {
                        local_190 = (char*)0x0;
                        Memory::free_static(pcVar184 + -0x10, false);
                     }

                  }

                  local_190 = local_e8;
                  local_e8 = (char*)0x0;
               }

            }
 else {
               if (*(int*)( lVar194 + 0x48 ) != 1) {
                  if (lVar181 == 0) {
                     LAB_0010f346:local_108 = (char*)0x0;
                  }
 else {
                     local_108 = (char*)0x0;
                     if (*(char**)( lVar181 + 8 ) == (char*)0x0) {
                        if (*(long*)( lVar181 + 0x10 ) == 0) goto LAB_0010f346;
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_108, (CowData*)( lVar181 + 0x10 ));
                     }
 else {
                        String::parse_latin1((String*)&local_108, *(char**)( lVar181 + 8 ));
                     }

                  }

                  _mkid((String*)&local_f8);
                  String::operator +((String*)&local_e8, (String*)( this_02 + 0x4e8 ));
                  pcVar184 = local_190;
                  if (local_190 != local_e8) {
                     if (local_190 != (char*)0x0) {
                        LOCK();
                        plVar170 = (long*)( local_190 + -0x10 );
                        *plVar170 = *plVar170 + -1;
                        UNLOCK();
                        if (*plVar170 == 0) {
                           local_190 = (char*)0x0;
                           Memory::free_static(pcVar184 + -0x10, false);
                        }

                     }

                     local_190 = local_e8;
                     local_e8 = (char*)0x0;
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
                  goto LAB_0010a7a4;
               }

               local_f8 = (char*)0x0;
               String::parse_latin1((String*)&local_f8, "u)");
               itos((long)&local_118);
               local_138 = 0;
               String::parse_latin1((String*)&local_138, "+");
               operator+((char *)&
               local_140,(String*)&_LC28;
               String::operator +((String*)&local_128, (String*)&local_140);
               String::operator +((String*)&local_108, (String*)&local_128);
               String::operator +((String*)&local_e8, (String*)&local_108);
               if (local_190 != local_e8) {
                  CowData<char32_t>::operator =((CowData<char32_t>*)&local_190, (CowData*)&local_e8);
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
               _get_global_shader_uniform_from_type_and_index((String*)&local_e8, pHVar1 + 0xd8, (CowData<char32_t>*)&local_190, *(undefined4*)( lVar194 + 0x28 ));
               if (local_190 != local_e8) {
                  CowData<char32_t>::operator =((CowData<char32_t>*)&local_190, (CowData*)&local_e8);
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
            goto LAB_0010a7a4;
         }

      }

   }
;
   ;;
   goto LAB_0010cf08;
   LAB_0010e21a:String::operator +=((String*)&local_118, "=");
   if (*(int*)( param_3 + 0x18 ) == 0x20) {
      _mkid((String*)&local_e8);
   }
 else {
      _typestr((CowData<char32_t>*)&local_e8);
   }

   String::operator +=((String*)&local_118, (String*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   String::operator +=((String*)&local_118, "[");
   itos((long)&local_e8);
   String::operator +=((String*)&local_118, (String*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   String::operator +=((String*)&local_118, "]");
   String::operator +=((String*)&local_118, (char*)&_LC28);
   uVar171 = 0;
   while (true) {
      lVar194 = *(long*)( param_3 + 0x38 );
      if (lVar194 == 0) goto LAB_0010ab50;
      lVar180 = *(long*)( lVar194 + -8 );
      local_228 = (CowData<char32_t>*)uVar193;
      if (lVar180 <= (long)uVar193) goto LAB_0010ab03;
      lVar194 = *(long*)( lVar194 + 0x20 + lVar181 );
      local_228 = (CowData<char32_t>*)uVar171;
      if (lVar194 == 0) {
         lVar180 = 0;
         goto LAB_0010ab03;
      }

      lVar180 = *(long*)( lVar194 + -8 );
      if (lVar180 <= (long)uVar171) goto LAB_0010ab03;
      _dump_node_code((Node*)&local_e8, param_2, *(GeneratedCode**)( lVar194 + uVar171 * 8 ), (IdentifierActions*)( (ulong)param_4 & 0xffffffff ), param_5, param_6, param_7);
      String::operator +=((String*)&local_118, (String*)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      uVar189 = uVar171 + 1;
      if (uVar171 == iVar161 - 1) break;
      uVar171 = uVar189;
      if (uVar189 != 0) {
         String::operator +=((String*)&local_118, ",");
      }

   }
;
   ;;
   String::operator +=((String*)&local_118, (char*)( (long)&_LC28 + 7 ));
   lVar194 = *(long*)( param_3 + 0x38 );
   LAB_00109637:uVar193 = uVar193 + 1;
   goto joined_r0x00109465;
   LAB_0010ab50:lVar180 = 0;
   local_228 = (CowData<char32_t>*)uVar193;
   goto LAB_0010ab03;
   while (true) {
      uVar191 = uVar191 + 1;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = ( ulong )(uVar190 + 1) * lVar194;
      auVar96._8_8_ = 0;
      auVar96._0_8_ = uVar193;
      lVar180 = SUB168(auVar24 * auVar96, 8);
      uVar163 = *(uint*)( *(long*)( pHVar1 + 0x70 ) + lVar180 * 4 );
      uVar190 = SUB164(auVar24 * auVar96, 8);
      if (( uVar163 == 0 ) || ( auVar25._8_8_ = 0 ),auVar25._0_8_ = (ulong)uVar163 * lVar194,auVar97._8_8_ = 0,auVar97._0_8_ = uVar193,auVar26._8_8_ = 0,auVar26._0_8_ = ( ulong )(( uVar188 + uVar190 ) - SUB164(auVar25 * auVar97, 8)) * lVar194,auVar98._8_8_ = 0,auVar98._0_8_ = uVar193,SUB164(auVar26 * auVar98, 8) < uVar191) break;
      LAB_00109a79:if (( uVar163 == uVar162 ) && ( *(long*)( *(long*)( *(long*)( pHVar1 + 0x68 ) + lVar180 * 8 ) + 0x10 ) == *(long*)( param_3 + 0x18 ) )) {
         lVar194 = *(long*)( *(long*)( pHVar1 + 0x68 ) + (ulong)uVar190 * 8 );
         local_108 = (char*)0x0;
         if (*(long*)( lVar194 + 0x18 ) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_108, (CowData*)( lVar194 + 0x18 ));
         }

         cVar156 = String::begins_with((char*)&local_108);
         if (cVar156 != '\0') {
            String::substr((int)(String*)&local_f8, (int)(CowData<char32_t>*)&local_108);
            StringName::StringName((StringName*)&local_e8, (String*)&local_f8, false);
            pCVar166 = (CowData*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](pHVar1 + 0x60, (StringName*)&local_e8);
            if (local_108 != *(char**)pCVar166) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_108, pCVar166);
            }

            if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         }

         local_e8 = (char*)0x0;
         if (local_108 != (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_e8, (CowData*)&local_108);
         }

         Vector<String>::push_back((Vector<String>*)param_5, (StringName*)&local_e8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
         HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert((StringName*)&local_e8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         goto LAB_00109bc0;
      }

   }
;
   ;;
   goto LAB_0010cf08;
   while (true) {
      uVar191 = uVar191 + 1;
      auVar36._8_8_ = 0;
      auVar36._0_8_ = ( ulong )(uVar190 + 1) * lVar194;
      auVar108._8_8_ = 0;
      auVar108._0_8_ = uVar193;
      lVar181 = SUB168(auVar36 * auVar108, 8);
      uVar163 = *(uint*)( lVar180 + lVar181 * 4 );
      uVar190 = SUB164(auVar36 * auVar108, 8);
      if (( uVar163 == 0 ) || ( auVar37._8_8_ = 0 ),auVar37._0_8_ = (ulong)uVar163 * lVar194,auVar109._8_8_ = 0,auVar109._0_8_ = uVar193,auVar38._8_8_ = 0,auVar38._0_8_ = ( ulong )(( uVar188 + uVar190 ) - SUB164(auVar37 * auVar109, 8)) * lVar194,auVar110._8_8_ = 0,auVar110._0_8_ = uVar193,SUB164(auVar38 * auVar110, 8) < uVar191) break;
      LAB_00109eeb:if (( uVar163 == uVar162 ) && ( *(long*)( *(long*)( *(long*)( pHVar1 + 8 ) + lVar181 * 8 ) + 0x10 ) == *(long*)( param_3 + 0x18 ) )) {
         lVar194 = *(long*)( *(long*)( pHVar1 + 8 ) + (ulong)uVar190 * 8 );
         if (local_190 != *(char**)( lVar194 + 0x18 )) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_190, (CowData*)( lVar194 + 0x18 ));
         }

         goto LAB_00109f25;
      }

   }
;
   ;;
   goto LAB_0010cf08;
   while (true) {
      uVar190 = uVar190 + 1;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = ( ulong )((int)uVar192 + 1) * lVar180;
      auVar80._8_8_ = 0;
      auVar80._0_8_ = uVar171;
      uVar193 = SUB168(auVar8 * auVar80, 8);
      uVar191 = *(uint*)( lVar179 + uVar193 * 4 );
      uVar189 = (ulong)uVar191;
      uVar192 = uVar193 & 0xffffffff;
      if (( uVar191 == 0 ) || ( auVar9._8_8_ = 0 ),auVar9._0_8_ = uVar189 * lVar180,auVar81._8_8_ = 0,auVar81._0_8_ = uVar171,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( SUB164(auVar8 * auVar80, 8) + uVar163 ) - SUB164(auVar9 * auVar81, 8)) * lVar180,auVar82._8_8_ = 0,auVar82._0_8_ = uVar171,SUB164(auVar10 * auVar82, 8) < uVar190) break;
      LAB_00108b78:if (( uVar162 == (uint)uVar189 ) && ( *(long*)( *(long*)( this_02 + 0x3a0 ) + ( ulong ) * (uint*)( *(long*)( this_02 + 0x3a8 ) + uVar193 * 4 ) * 8 ) == *plVar170 )) goto LAB_00108bb0;
   }
;
   ;;
   LAB_0010b3f0:if (lVar194 != 0) {
      LAB_0010b3f9:lVar180 = *(long*)( lVar194 + -8 );
      if (lVar180 <= (long)local_228) goto LAB_0010ab03;
      LAB_0010b410:if (( *(long*)( pHVar1 + 0x38 ) == 0 ) || ( *(int*)( pHVar1 + 0x5c ) == 0 )) goto LAB_0010cf08;
      lVar180 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( pHVar1 + 0x58 ) * 8 );
      uVar163 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( pHVar1 + 0x58 ) * 4 );
      lVar179 = *(long*)( lVar194 + lVar181 );
      if (lVar179 == 0) {
         uVar162 = StringName::get_empty_hash();
      }
 else {
         uVar162 = *(uint*)( lVar179 + 0x20 );
      }

      uVar193 = CONCAT44(0, uVar163);
      if (uVar162 == 0) {
         uVar162 = 1;
      }

      auVar72._8_8_ = 0;
      auVar72._0_8_ = (ulong)uVar162 * lVar180;
      auVar143._8_8_ = 0;
      auVar143._0_8_ = uVar193;
      lVar179 = SUB168(auVar72 * auVar143, 8);
      uVar190 = *(uint*)( *(long*)( pHVar1 + 0x40 ) + lVar179 * 4 );
      uVar176 = SUB164(auVar72 * auVar143, 8);
      uVar191 = uVar188;
      if (uVar190 == 0) goto LAB_0010cf08;
      while (( uVar190 != uVar162 || ( *(long*)( *(long*)( *(long*)( pHVar1 + 0x38 ) + lVar179 * 8 ) + 0x10 ) != *(long*)( lVar194 + lVar181 ) ) )) {
         uVar191 = uVar191 + 1;
         auVar73._8_8_ = 0;
         auVar73._0_8_ = ( ulong )(uVar176 + 1) * lVar180;
         auVar144._8_8_ = 0;
         auVar144._0_8_ = uVar193;
         lVar179 = SUB168(auVar73 * auVar144, 8);
         uVar190 = *(uint*)( *(long*)( pHVar1 + 0x40 ) + lVar179 * 4 );
         uVar176 = SUB164(auVar73 * auVar144, 8);
         if (( uVar190 == 0 ) || ( auVar74._8_8_ = 0 ),auVar74._0_8_ = (ulong)uVar190 * lVar180,auVar145._8_8_ = 0,auVar145._0_8_ = uVar193,auVar75._8_8_ = 0,auVar75._0_8_ = ( ulong )(( uVar163 + uVar176 ) - SUB164(auVar74 * auVar145, 8)) * lVar180,auVar146._8_8_ = 0,auVar146._0_8_ = uVar193,SUB164(auVar75 * auVar146, 8) < uVar191) goto LAB_0010cf08;
      }
;
      ;;
      lVar194 = *(long*)( *(long*)( pHVar1 + 0x38 ) + (ulong)uVar176 * 8 );
      local_e8 = (char*)0x0;
      if (*(long*)( lVar194 + 0x18 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_e8, (CowData*)( lVar194 + 0x18 ));
      }

      Vector<String>::push_back((Vector<String>*)param_5, (CowData<char32_t>*)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      if (*(long*)( param_3 + 0x110 ) != 0) {
         lVar180 = *(long*)( *(long*)( param_3 + 0x110 ) + -8 );
         if (lVar180 <= (long)local_228) goto LAB_0010ab03;
         HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert((StringName*)&local_e8);
         lVar194 = *(long*)( param_3 + 0x110 );
         LAB_00108bb0:if (lVar194 != 0) {
            lVar180 = *(long*)( lVar194 + -8 );
            if (lVar180 <= (long)local_228) goto LAB_0010ab03;
            if (( *(long*)( this_04 + 0x68 ) != 0 ) && ( *(int*)( this_04 + 0x8c ) != 0 )) {
               plVar170 = (long*)( lVar194 + lVar181 );
               uVar163 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this_04 + 0x88 ) * 4 );
               lVar180 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this_04 + 0x88 ) * 8 );
               lVar179 = *plVar170;
               if (lVar179 == 0) {
                  uVar162 = StringName::get_empty_hash();
                  lVar194 = *(long*)( param_3 + 0x110 );
               }
 else {
                  uVar162 = *(uint*)( lVar179 + 0x20 );
               }

               uVar193 = CONCAT44(0, uVar163);
               if (uVar162 == 0) {
                  uVar162 = 1;
               }

               auVar11._8_8_ = 0;
               auVar11._0_8_ = (ulong)uVar162 * lVar180;
               auVar83._8_8_ = 0;
               auVar83._0_8_ = uVar193;
               lVar179 = SUB168(auVar11 * auVar83, 8);
               uVar190 = *(uint*)( *(long*)( this_04 + 0x70 ) + lVar179 * 4 );
               iVar164 = SUB164(auVar11 * auVar83, 8);
               uVar191 = uVar188;
               if (uVar190 != 0) {
                  while (( uVar162 != uVar190 || ( *(long*)( *(long*)( *(long*)( this_04 + 0x68 ) + lVar179 * 8 ) + 0x10 ) != *plVar170 ) )) {
                     uVar191 = uVar191 + 1;
                     auVar12._8_8_ = 0;
                     auVar12._0_8_ = ( ulong )(iVar164 + 1) * lVar180;
                     auVar84._8_8_ = 0;
                     auVar84._0_8_ = uVar193;
                     lVar179 = SUB168(auVar12 * auVar84, 8);
                     uVar190 = *(uint*)( *(long*)( this_04 + 0x70 ) + lVar179 * 4 );
                     iVar164 = SUB164(auVar12 * auVar84, 8);
                     if (( uVar190 == 0 ) || ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar190 * lVar180,auVar85._8_8_ = 0,auVar85._0_8_ = uVar193,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar163 + iVar164 ) - SUB164(auVar13 * auVar85, 8)) * lVar180,auVar86._8_8_ = 0,auVar86._0_8_ = uVar193,SUB164(auVar14 * auVar86, 8) < uVar191) goto LAB_00108cfa;
                  }
;
                  ;;
                  if (lVar194 == 0) goto LAB_0010aae0;
                  lVar180 = *(long*)( lVar194 + -8 );
                  if (lVar180 <= (long)local_228) goto LAB_0010ab03;
                  puVar167 = (undefined8*)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator []((HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>*)( this_04 + 0x60 ), (StringName*)( lVar194 + lVar181 ));
                  *(undefined1*)*puVar167 = 1;
                  lVar194 = *(long*)( param_3 + 0x110 );
               }

               LAB_00108cfa:if (lVar194 == 0) goto LAB_0010aae0;
               lVar180 = *(long*)( lVar194 + -8 );
               if (lVar180 <= (long)local_228) goto LAB_0010ab03;
            }

            if (( *(long*)( this_04 + 0x38 ) != 0 ) && ( *(int*)( this_04 + 0x5c ) != 0 )) {
               plVar170 = (long*)( lVar194 + lVar181 );
               uVar163 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this_04 + 0x58 ) * 4 );
               lVar180 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this_04 + 0x58 ) * 8 );
               lVar179 = *plVar170;
               if (lVar179 == 0) {
                  uVar162 = StringName::get_empty_hash();
                  lVar194 = *(long*)( param_3 + 0x110 );
               }
 else {
                  uVar162 = *(uint*)( lVar179 + 0x20 );
               }

               uVar193 = CONCAT44(0, uVar163);
               if (uVar162 == 0) {
                  uVar162 = 1;
               }

               auVar15._8_8_ = 0;
               auVar15._0_8_ = (ulong)uVar162 * lVar180;
               auVar87._8_8_ = 0;
               auVar87._0_8_ = uVar193;
               lVar179 = SUB168(auVar15 * auVar87, 8);
               uVar190 = *(uint*)( *(long*)( this_04 + 0x40 ) + lVar179 * 4 );
               iVar164 = SUB164(auVar15 * auVar87, 8);
               uVar191 = uVar188;
               if (uVar190 != 0) {
                  while (( uVar162 != uVar190 || ( *(long*)( *(long*)( *(long*)( this_04 + 0x38 ) + lVar179 * 8 ) + 0x10 ) != *plVar170 ) )) {
                     uVar191 = uVar191 + 1;
                     auVar16._8_8_ = 0;
                     auVar16._0_8_ = ( ulong )(iVar164 + 1) * lVar180;
                     auVar88._8_8_ = 0;
                     auVar88._0_8_ = uVar193;
                     lVar179 = SUB168(auVar16 * auVar88, 8);
                     uVar190 = *(uint*)( *(long*)( this_04 + 0x40 ) + lVar179 * 4 );
                     iVar164 = SUB164(auVar16 * auVar88, 8);
                     if (( uVar190 == 0 ) || ( auVar17._8_8_ = 0 ),auVar17._0_8_ = (ulong)uVar190 * lVar180,auVar89._8_8_ = 0,auVar89._0_8_ = uVar193,auVar18._8_8_ = 0,auVar18._0_8_ = ( ulong )(( uVar163 + iVar164 ) - SUB164(auVar17 * auVar89, 8)) * lVar180,auVar90._8_8_ = 0,auVar90._0_8_ = uVar193,SUB164(auVar18 * auVar90, 8) < uVar191) goto LAB_00108e3b;
                  }
;
                  ;;
                  if (lVar194 == 0) goto LAB_0010aae0;
                  lVar180 = *(long*)( lVar194 + -8 );
                  if (lVar180 <= (long)local_228) goto LAB_0010ab03;
                  puVar167 = (undefined8*)HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>::operator []((HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>*)( this_04 + 0x30 ), (StringName*)( lVar181 + lVar194 ));
                  *(undefined4*)*puVar167 = *(undefined4*)( puVar167 + 1 );
                  lVar194 = *(long*)( param_3 + 0x110 );
               }

            }

            LAB_00108e3b:local_228 = (CowData<char32_t>*)( (long)local_228 + 1 );
            if (lVar194 == 0) goto LAB_00108e4a;
            goto LAB_0010891f;
         }

      }

   }

   LAB_0010aae0:lVar180 = 0;
   goto LAB_0010ab03;
   LAB_0010def0:lVar180 = 0;
   local_228 = (CowData<char32_t>*)uVar193;
   goto LAB_0010ab03;
   while (true) {
      uVar191 = uVar191 + 1;
      auVar68._8_8_ = 0;
      auVar68._0_8_ = ( ulong )(uVar190 + 1) * lVar180;
      auVar140._8_8_ = 0;
      auVar140._0_8_ = uVar193;
      lVar181 = SUB168(auVar68 * auVar140, 8);
      uVar162 = *(uint*)( *(long*)( lVar194 + 0x88 ) + lVar181 * 4 );
      uVar190 = SUB164(auVar68 * auVar140, 8);
      if (( uVar162 == 0 ) || ( auVar69._8_8_ = 0 ),auVar69._0_8_ = (ulong)uVar162 * lVar180,auVar141._8_8_ = 0,auVar141._0_8_ = uVar193,auVar70._8_8_ = 0,auVar70._0_8_ = ( ulong )(( uVar188 + uVar190 ) - SUB164(auVar69 * auVar141, 8)) * lVar180,auVar142._8_8_ = 0,auVar142._0_8_ = uVar193,SUB164(auVar70 * auVar142, 8) < uVar191) break;
      LAB_0010b232:if (uVar162 == uVar163) {
         lVar181 = *(long*)( *(long*)( *(long*)( lVar194 + 0x80 ) + lVar181 * 8 ) + 0x10 );
         if (lVar181 == *(long*)( param_3 + 0x18 )) {
            lVar194 = *(long*)( *(long*)( lVar194 + 0x80 ) + (ulong)uVar190 * 8 );
            if (*(int*)( lVar194 + 0x18 ) < 0) {
               iVar161 = *(int*)( lVar194 + 0x4c );
               local_118 = (char*)0x0;
               if (iVar161 == 0xf) {
                  StringName::StringName((StringName*)&local_e8, "color_buffer", false);
                  if (local_118 != local_e8) {
                     StringName::operator =((StringName*)&local_118, (StringName*)&local_e8);
                  }

                  if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  if (1 < *(int*)( lVar194 + 0x54 )) {
                     param_5[0x8b] = 1;
                  }

                  param_5[0x8c] = 1;
               }
 else if (iVar161 == 0x10) {
                  StringName::StringName((StringName*)&local_e8, "normal_roughness_buffer", false);
                  if (local_118 != local_e8) {
                     StringName::operator =((StringName*)&local_118, (StringName*)&local_e8);
                  }

                  if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  param_5[0x8e] = 1;
               }
 else if (iVar161 == 0x11) {
                  StringName::StringName((StringName*)&local_e8, "depth_buffer", false);
                  if (local_118 != local_e8) {
                     StringName::operator =((StringName*)&local_118, (StringName*)&local_e8);
                  }

                  if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  param_5[0x8d] = 1;
               }
 else {
                  if (lVar181 == 0) {
                     LAB_0010fac9:local_108 = (char*)0x0;
                  }
 else {
                     local_108 = (char*)0x0;
                     if (*(char**)( lVar181 + 8 ) == (char*)0x0) {
                        if (*(long*)( lVar181 + 0x10 ) == 0) goto LAB_0010fac9;
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_108, (CowData*)( lVar181 + 0x10 ));
                     }
 else {
                        String::parse_latin1((String*)&local_108, *(char**)( lVar181 + 8 ));
                     }

                  }

                  _mkid((String*)&local_f8);
                  StringName::StringName((StringName*)&local_e8, (String*)&local_f8, false);
                  if (local_118 == local_e8) {
                     if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
                        StringName::unref();
                     }

                  }
 else {
                     StringName::unref();
                     local_118 = local_e8;
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
               }

               if (local_118 == (char*)0x0) {
                  LAB_0010f187:local_e8 = (char*)0x0;
                  if (local_190 != (char*)0x0) {
                     LAB_0010de59:pcVar183 = local_190;
                     LOCK();
                     plVar170 = (long*)( local_190 + -0x10 );
                     *plVar170 = *plVar170 + -1;
                     UNLOCK();
                     pcVar184 = local_e8;
                     if (*plVar170 == 0) {
                        local_190 = (char*)0x0;
                        Memory::free_static(pcVar183 + -0x10, false);
                        pcVar184 = local_e8;
                     }

                     goto LAB_0010de88;
                  }

               }
 else {
                  local_e8 = (char*)0x0;
                  if (*(char**)( local_118 + 8 ) == (char*)0x0) {
                     if (*(long*)( local_118 + 0x10 ) == 0) goto LAB_0010f187;
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_e8, (CowData*)( local_118 + 0x10 ));
                  }
 else {
                     String::parse_latin1((String*)&local_e8, *(char**)( local_118 + 8 ));
                  }

                  if (local_190 != local_e8) {
                     pcVar184 = local_e8;
                     if (local_190 != (char*)0x0) goto LAB_0010de59;
                     LAB_0010de88:local_e8 = (char*)0x0;
                     local_190 = pcVar184;
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
                  StringName::unref();
               }

            }
 else {
               if (*(int*)( lVar194 + 0x48 ) == 2) {
                  if (lVar181 == 0) {
                     LAB_0010fbc9:local_108 = (char*)0x0;
                  }
 else {
                     local_108 = (char*)0x0;
                     if (*(char**)( lVar181 + 8 ) == (char*)0x0) {
                        if (*(long*)( lVar181 + 0x10 ) == 0) goto LAB_0010fbc9;
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_108, (CowData*)( lVar181 + 0x10 ));
                     }
 else {
                        String::parse_latin1((String*)&local_108, *(char**)( lVar181 + 8 ));
                     }

                  }

                  _mkid((String*)&local_f8);
                  String::operator +((String*)&local_e8, (String*)( this_02 + 0x4e8 ));
                  pcVar184 = local_190;
                  if (local_190 != local_e8) {
                     if (local_190 != (char*)0x0) {
                        LOCK();
                        plVar170 = (long*)( local_190 + -0x10 );
                        *plVar170 = *plVar170 + -1;
                        UNLOCK();
                        if (*plVar170 == 0) {
                           local_190 = (char*)0x0;
                           Memory::free_static(pcVar184 + -0x10, false);
                        }

                     }

                     local_190 = local_e8;
                     local_e8 = (char*)0x0;
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
                  _get_global_shader_uniform_from_type_and_index((String*)&local_e8, pHVar1 + 0xd8, &local_190, *(undefined4*)( lVar194 + 0x28 ));
                  pcVar184 = local_190;
                  if (local_190 != local_e8) {
                     if (local_190 != (char*)0x0) {
                        LOCK();
                        plVar170 = (long*)( local_190 + -0x10 );
                        *plVar170 = *plVar170 + -1;
                        UNLOCK();
                        if (*plVar170 == 0) {
                           local_190 = (char*)0x0;
                           Memory::free_static(pcVar184 + -0x10, false);
                        }

                     }

                     local_190 = local_e8;
                     local_e8 = (char*)0x0;
                  }

               }
 else {
                  if (*(int*)( lVar194 + 0x48 ) != 1) {
                     if (lVar181 == 0) {
                        LAB_0010f41c:local_108 = (char*)0x0;
                     }
 else {
                        local_108 = (char*)0x0;
                        if (*(char**)( lVar181 + 8 ) == (char*)0x0) {
                           if (*(long*)( lVar181 + 0x10 ) == 0) goto LAB_0010f41c;
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_108, (CowData*)( lVar181 + 0x10 ));
                        }
 else {
                           String::parse_latin1((String*)&local_108, *(char**)( lVar181 + 8 ));
                        }

                     }

                     _mkid((String*)&local_f8);
                     String::operator +((String*)&local_e8, (String*)( this_02 + 0x4e8 ));
                     pcVar184 = local_190;
                     if (local_190 != local_e8) {
                        if (local_190 != (char*)0x0) {
                           LOCK();
                           plVar170 = (long*)( local_190 + -0x10 );
                           *plVar170 = *plVar170 + -1;
                           UNLOCK();
                           if (*plVar170 == 0) {
                              local_190 = (char*)0x0;
                              Memory::free_static(pcVar184 + -0x10, false);
                           }

                        }

                        local_190 = local_e8;
                        local_e8 = (char*)0x0;
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
                     goto LAB_00109f25;
                  }

                  local_f8 = (char*)0x0;
                  String::parse_latin1((String*)&local_f8, "u)");
                  itos((long)&local_118);
                  local_138 = 0;
                  String::parse_latin1((String*)&local_138, "+");
                  operator+((char *)&
                  local_140,(String*)&_LC28;
                  String::operator +((String*)&local_128, (String*)&local_140);
                  String::operator +((String*)&local_108, (String*)&local_128);
                  String::operator +((String*)&local_e8, (String*)&local_108);
                  if (local_190 != local_e8) {
                     CowData<char32_t>::operator =((CowData<char32_t>*)&local_190, (CowData*)&local_e8);
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
                  _get_global_shader_uniform_from_type_and_index((String*)&local_e8, pHVar1 + 0xd8, (CowData<char32_t>*)&local_190, *(undefined4*)( lVar194 + 0x28 ));
                  if (local_190 != local_e8) {
                     CowData<char32_t>::operator =((CowData<char32_t>*)&local_190, (CowData*)&local_e8);
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
            }

            goto LAB_00109f25;
         }

      }

   }
;
   ;;
   LAB_0010cf08:_err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar147 = (code*)invalidInstructionException();
   ( *pcVar147 )();
}
/* ShaderCompiler::compile(RenderingServer::ShaderMode, String const&,
   ShaderCompiler::IdentifierActions*, String const&, ShaderCompiler::GeneratedCode&) */int ShaderCompiler::compile(ShaderCompiler *this, undefined4 param_2, ShaderCompileInfo *param_3, bool param_4, String *param_5, DefaultIdentifierActions *param_6) {
   long *plVar1;
   CowData *pCVar2;
   void *pvVar3;
   code *pcVar4;
   ulong uVar5;
   char *pcVar6;
   char *pcVar7;
   char cVar8;
   uint uVar9;
   int iVar10;
   undefined4 uVar11;
   HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>> *pHVar12;
   long lVar14;
   HashSet *pHVar15;
   GeneratedCode *pGVar16;
   Vector<String> *pVVar17;
   undefined8 uVar18;
   undefined8 uVar19;
   undefined1 *puVar20;
   undefined1 *extraout_RDX;
   undefined1 *extraout_RDX_00;
   int iVar21;
   long *plVar22;
   long *plVar23;
   long lVar24;
   uint uVar25;
   int iVar26;
   long lVar27;
   undefined8 *puVar28;
   long lVar29;
   void *pvVar30;
   long in_FS_OFFSET;
   bool bVar31;
   undefined1 auVar32[16];
   undefined1 *puVar33;
   char *local_188;
   char *local_180;
   char *local_178;
   long local_170;
   long local_168;
   long local_160[2];
   long *local_150;
   long local_148;
   long local_140;
   char local_138[8];
   long local_130;
   char *local_128;
   undefined8 local_120;
   long local_118;
   undefined1 local_110[16];
   undefined1 local_100[16];
   undefined8 local_f0;
   HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>> local_e8[8];
   undefined1 local_e0[16];
   undefined1 local_d0[16];
   undefined8 local_c0;
   undefined1 local_b0[16];
   long local_a0;
   long lStack_98;
   HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>> local_90[16];
   undefined1 local_80[16];
   ulong local_70;
   code *local_68;
   undefined1 local_60;
   undefined4 local_5c;
   int local_58[6];
   long local_40;
   ulong uVar13;
   uVar5 = _LC55;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_c0 = _LC55;
   local_e0 = (undefined1[16])0x0;
   local_d0 = (undefined1[16])0x0;
   local_b0 = (undefined1[16])0x0;
   local_a0 = 0;
   lStack_98 = 0;
   StringName::StringName((StringName*)&local_118, "fragment", false);
   if (local_b0._8_8_ == local_118) {
      if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      local_b0._8_8_ = local_118;
   }

   StringName::StringName((StringName*)&local_118, "vertex", false);
   if (local_a0 == local_118) {
      if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      local_a0 = local_118;
   }

   StringName::StringName((StringName*)&local_118, "light", false);
   if (lStack_98 == local_118) {
      if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      lStack_98 = local_118;
   }

   local_70 = uVar5;
   local_68 = (code*)0x0;
   local_60 = 0;
   local_5c = 0;
   for (int i = 0; i < 16; i++) {
      local_90[i] = (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>)0;
   }

   local_80 = (undefined1[16])0x0;
   puVar33 = (undefined1*)0x11172f;
   auVar32 = ShaderTypes::get_functions(ShaderTypes::singleton, param_2);
   puVar20 = auVar32._8_8_;
   pHVar12 = auVar32._0_8_;
   if (pHVar12 != local_e8) {
      uVar9 = *(uint*)( hash_table_size_primes + ( local_c0 & 0xffffffff ) * 4 );
      uVar25 = (uint)local_c0;
      if (( local_c0._4_4_ != 0 ) && ( local_e0._0_8_ != 0 )) {
         if (uVar9 != 0) {
            lVar14 = 0;
            do {
               if (*(int*)( local_e0._8_8_ + lVar14 ) != 0) {
                  *(int*)( local_e0._8_8_ + lVar14 ) = 0;
                  pvVar30 = *(void**)( local_e0._0_8_ + lVar14 * 2 );
                  KeyValue<StringName,ShaderLanguage::FunctionInfo>::~KeyValue((KeyValue<StringName,ShaderLanguage::FunctionInfo>*)( (long)pvVar30 + 0x10 ));
                  puVar33 = (undefined1*)0x112d66;
                  Memory::free_static(pvVar30, false);
                  *(undefined8*)( local_e0._0_8_ + lVar14 * 2 ) = 0;
               }

               lVar14 = lVar14 + 4;
            }
 while ( (ulong)uVar9 * 4 - lVar14 != 0 );
            uVar9 = *(uint*)( hash_table_size_primes + ( local_c0 & 0xffffffff ) * 4 );
            uVar25 = (uint)local_c0;
         }

         local_c0 = local_c0 & 0xffffffff;
         local_d0 = (undefined1[16])0x0;
      }

      puVar20 = hash_table_size_primes;
      if (uVar9 < *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( pHVar12 + 0x28 ) * 4 )) {
         if (uVar25 != 0x1c) {
            uVar13 = (ulong)uVar25;
            do {
               uVar9 = (int)uVar13 + 1;
               uVar13 = (ulong)uVar9;
               if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( pHVar12 + 0x28 ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar13 * 4 )) {
                  if (uVar25 != uVar9) {
                     if (local_e0._0_8_ == 0) {
                        local_c0 = CONCAT44(local_c0._4_4_, uVar9);
                     }
 else {
                        HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>::_resize_and_rehash(local_e8, uVar9);
                        puVar20 = extraout_RDX_00;
                     }

                  }

                  goto LAB_001117d3;
               }

            }
 while ( uVar9 != 0x1c );
         }

         puVar20 = puVar33;
         _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
      }

      LAB_001117d3:if (*(long*)( pHVar12 + 8 ) != 0) {
         for (puVar28 = *(undefined8**)( pHVar12 + 0x18 ); puVar28 != (undefined8*)0x0; puVar28 = (undefined8*)*puVar28) {
            HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>::insert((StringName*)&local_118, (FunctionInfo*)local_e8, (bool)( (char)puVar28 + '\x10' ));
            puVar20 = extraout_RDX;
         }

      }

   }

   lVar14 = ShaderTypes::get_modes(ShaderTypes::singleton, param_2, puVar20);
   if (local_b0._0_8_ != *(long*)( lVar14 + 8 )) {
      CowData<ShaderLanguage::ModeInfo>::_unref((CowData<ShaderLanguage::ModeInfo>*)local_b0);
      if (*(long*)( lVar14 + 8 ) != 0) {
         plVar23 = (long*)( *(long*)( lVar14 + 8 ) + -0x10 );
         do {
            lVar27 = *plVar23;
            if (lVar27 == 0) goto LAB_00111871;
            LOCK();
            lVar29 = *plVar23;
            bVar31 = lVar27 == lVar29;
            if (bVar31) {
               *plVar23 = lVar27 + 1;
               lVar29 = lVar27;
            }

            UNLOCK();
         }
 while ( !bVar31 );
         if (lVar29 != -1) {
            local_b0._0_8_ = *(undefined8*)( lVar14 + 8 );
         }

      }

   }

   LAB_00111871:pHVar15 = (HashSet*)ShaderTypes::get_types();
   HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::operator =(local_90, pHVar15);
   local_68 = _get_global_shader_uniform_type;
   local_5c = *(undefined4*)( this + 0x500 );
   iVar10 = ShaderLanguage::compile((String*)this, param_3);
   if (iVar10 == 0) {
      if (( *(long*)( param_6 + 8 ) != 0 ) && ( *(long*)( *(long*)( param_6 + 8 ) + -8 ) != 0 )) {
         CowData<String>::_unref((CowData<String>*)( param_6 + 8 ));
      }

      if (( *(long*)( param_6 + 0x60 ) != 0 ) && ( *(int*)( param_6 + 0x84 ) != 0 )) {
         lVar14 = 0;
         uVar9 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_6 + 0x80 ) * 4 );
         if (uVar9 != 0) {
            do {
               if (*(int*)( *(long*)( param_6 + 0x68 ) + lVar14 ) != 0) {
                  *(int*)( *(long*)( param_6 + 0x68 ) + lVar14 ) = 0;
                  pvVar30 = *(void**)( *(long*)( param_6 + 0x60 ) + lVar14 * 2 );
                  if (*(long*)( (long)pvVar30 + 0x18 ) != 0) {
                     LOCK();
                     plVar23 = (long*)( *(long*)( (long)pvVar30 + 0x18 ) + -0x10 );
                     *plVar23 = *plVar23 + -1;
                     UNLOCK();
                     if (*plVar23 == 0) {
                        lVar27 = *(long*)( (long)pvVar30 + 0x18 );
                        *(undefined8*)( (long)pvVar30 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar27 + -0x10 ), false);
                     }

                  }

                  if (*(long*)( (long)pvVar30 + 0x10 ) != 0) {
                     LOCK();
                     plVar23 = (long*)( *(long*)( (long)pvVar30 + 0x10 ) + -0x10 );
                     *plVar23 = *plVar23 + -1;
                     UNLOCK();
                     if (*plVar23 == 0) {
                        lVar27 = *(long*)( (long)pvVar30 + 0x10 );
                        *(undefined8*)( (long)pvVar30 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar27 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar30, false);
                  *(undefined8*)( *(long*)( param_6 + 0x60 ) + lVar14 * 2 ) = 0;
               }

               lVar14 = lVar14 + 4;
            }
 while ( (ulong)uVar9 << 2 != lVar14 );
         }

         *(undefined4*)( param_6 + 0x84 ) = 0;
         *(undefined1(*) [16])( param_6 + 0x70 ) = (undefined1[16])0x0;
      }

      plVar23 = (long*)( param_6 + 0x40 );
      do {
         if (*plVar23 != 0) {
            LOCK();
            plVar22 = (long*)( *plVar23 + -0x10 );
            *plVar22 = *plVar22 + -1;
            UNLOCK();
            if (*plVar22 == 0) {
               lVar14 = *plVar23;
               *plVar23 = 0;
               Memory::free_static((void*)( lVar14 + -0x10 ), false);
            }

            *plVar23 = 0;
         }

         plVar23 = plVar23 + 1;
      }
 while ( (long*)( param_6 + 0x58 ) != plVar23 );
      *(undefined4*)( param_6 + 0x88 ) = 0;
      *(undefined2*)( param_6 + 0x8c ) = 0;
      lVar14 = *(long*)( this + 0x350 );
      param_6[0x8e] = 0;
      if (( lVar14 != 0 ) && ( *(int*)( this + 0x374 ) != 0 )) {
         if (( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x370 ) * 4 ) == 0 ) || ( memset(*(void**)( this + 0x368 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x370 ) * 4 ) * 4),*(int*)( this + 0x374 ) != 0 )) {
            lVar27 = 0;
            while (true) {
               if (( StringName::configured != '\0' ) && ( *(long*)( lVar14 + lVar27 * 8 ) != 0 )) {
                  StringName::unref();
               }

               lVar27 = lVar27 + 1;
               if (*(uint*)( this + 0x374 ) <= (uint)lVar27) break;
               lVar14 = *(long*)( this + 0x350 );
            }
;
            ;;
         }

         *(undefined4*)( this + 0x374 ) = 0;
      }

      lVar14 = *(long*)( this + 0x3a0 );
      if (( lVar14 != 0 ) && ( *(int*)( this + 0x3c4 ) != 0 )) {
         if (( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x3c0 ) * 4 ) == 0 ) || ( memset(*(void**)( this + 0x3b8 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x3c0 ) * 4 ) * 4),*(int*)( this + 0x3c4 ) != 0 )) {
            lVar27 = 0;
            while (true) {
               if (( StringName::configured != '\0' ) && ( *(long*)( lVar14 + lVar27 * 8 ) != 0 )) {
                  StringName::unref();
               }

               lVar27 = lVar27 + 1;
               if (*(uint*)( this + 0x3c4 ) <= (uint)lVar27) break;
               lVar14 = *(long*)( this + 0x3a0 );
            }
;
            ;;
         }

         *(undefined4*)( this + 0x3c4 ) = 0;
      }

      lVar14 = *(long*)( this + 0x378 );
      if (( lVar14 != 0 ) && ( *(int*)( this + 0x39c ) != 0 )) {
         if (( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x398 ) * 4 ) == 0 ) || ( memset(*(void**)( this + 0x390 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x398 ) * 4 ) * 4),*(int*)( this + 0x39c ) != 0 )) {
            lVar27 = 0;
            while (true) {
               if (( StringName::configured != '\0' ) && ( *(long*)( lVar14 + lVar27 * 8 ) != 0 )) {
                  StringName::unref();
               }

               lVar27 = lVar27 + 1;
               if (*(uint*)( this + 0x39c ) <= (uint)lVar27) break;
               lVar14 = *(long*)( this + 0x378 );
            }
;
            ;;
         }

         *(undefined4*)( this + 0x39c ) = 0;
      }

      lVar14 = *(long*)( this + 0x3f0 );
      if (( lVar14 != 0 ) && ( *(int*)( this + 0x414 ) != 0 )) {
         if (( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x410 ) * 4 ) == 0 ) || ( memset(*(void**)( this + 0x408 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x410 ) * 4 ) * 4),*(int*)( this + 0x414 ) != 0 )) {
            lVar27 = 0;
            while (true) {
               if (( StringName::configured != '\0' ) && ( *(long*)( lVar14 + lVar27 * 8 ) != 0 )) {
                  StringName::unref();
               }

               lVar27 = lVar27 + 1;
               if (*(uint*)( this + 0x414 ) <= (uint)lVar27) break;
               lVar14 = *(long*)( this + 0x3f0 );
            }
;
            ;;
         }

         *(undefined4*)( this + 0x414 ) = 0;
      }

      pGVar16 = (GeneratedCode*)ShaderLanguage::get_shader();
      *(GeneratedCode**)( this + 0x308 ) = pGVar16;
      *(undefined8*)( this + 0x310 ) = 0;
      _dump_node_code((Node*)&local_118, (int)this, pGVar16, (IdentifierActions*)0x1, param_6, param_4, (bool)( (char)this + '\x18' ));
      lVar14 = local_118;
      if (local_118 != 0) {
         LOCK();
         plVar23 = (long*)( local_118 + -0x10 );
         *plVar23 = *plVar23 + -1;
         UNLOCK();
         if (*plVar23 == 0) {
            local_118 = 0;
            Memory::free_static((void*)( lVar14 + -0x10 ), false);
         }

      }

      goto LAB_001126c0;
   }

   ShaderLanguage::get_include_positions();
   local_128 = "";
   local_110 = (undefined1[16])0x0;
   local_100 = (undefined1[16])0x0;
   local_188 = (char*)0x0;
   local_f0 = uVar5;
   local_130 = 0;
   local_148 = 0;
   local_120 = 0;
   String::parse_latin1((StrRange*)&local_148);
   lVar14 = HashMap<String,Vector<String>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<String>>>>::operator []((HashMap<String,Vector<String>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<String>>>>*)&local_118, (String*)&local_148);
   if (*(long*)( lVar14 + 8 ) != 0) {
      CowData<String>::_unref((CowData<String>*)( lVar14 + 8 ));
      *(undefined8*)( lVar14 + 8 ) = 0;
   }

   lVar14 = local_148;
   if (local_148 != 0) {
      LOCK();
      plVar23 = (long*)( local_148 + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         local_148 = 0;
         Memory::free_static((void*)( lVar14 + -0x10 ), false);
      }

   }

   CowData<String>::_unref((CowData<String>*)&local_130);
   local_140 = 0;
   String::split(local_138, SUB81(param_3, 0), 0x11331c);
   for (lVar14 = 0; ( local_130 != 0 && ( lVar14 < *(long*)( local_130 + -8 ) ) ); lVar14 = lVar14 + 1) {
      local_180 = (char*)0x0;
      plVar22 = (long*)( local_130 + lVar14 * 8 );
      lVar27 = *plVar22;
      plVar23 = (long*)( lVar27 + -0x10 );
      if (lVar27 != 0) {
         do {
            lVar27 = *plVar23;
            if (lVar27 == 0) goto LAB_00111e04;
            LOCK();
            lVar29 = *plVar23;
            bVar31 = lVar27 == lVar29;
            if (bVar31) {
               *plVar23 = lVar27 + 1;
               lVar29 = lVar27;
            }

            UNLOCK();
         }
 while ( !bVar31 );
         if (lVar29 != -1) {
            local_180 = (char*)*plVar22;
         }

      }

      LAB_00111e04:cVar8 = String::begins_with((char*)&local_180);
      if (cVar8 == '\0') {
         cVar8 = String::begins_with((char*)&local_180);
         lVar27 = local_140;
         if (cVar8 == '\0') {
            pVVar17 = (Vector<String>*)HashMap<String,Vector<String>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<String>>>>::operator []((HashMap<String,Vector<String>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<String>>>>*)&local_118, (String*)&local_188);
            local_128 = (char*)0x0;
            plVar23 = (long*)( local_180 + -0x10 );
            if (local_180 == (char*)0x0) {
               Vector<String>::push_back(pVVar17);
            }
 else {
               do {
                  lVar27 = *plVar23;
                  if (lVar27 == 0) goto LAB_00112836;
                  LOCK();
                  lVar29 = *plVar23;
                  bVar31 = lVar27 == lVar29;
                  if (bVar31) {
                     *plVar23 = lVar27 + 1;
                     lVar29 = lVar27;
                  }

                  UNLOCK();
               }
 while ( !bVar31 );
               if (lVar29 != -1) {
                  local_128 = local_180;
               }

               LAB_00112836:pcVar6 = local_128;
               Vector<String>::push_back(pVVar17);
               if (pcVar6 != (char*)0x0) {
                  LOCK();
                  plVar23 = (long*)( pcVar6 + -0x10 );
                  *plVar23 = *plVar23 + -1;
                  UNLOCK();
                  if (*plVar23 == 0) {
                     Memory::free_static(local_128 + -0x10, false);
                  }

               }

            }

         }
 else if (( local_140 != 0 ) && ( lVar29 = lVar29 != 0 )) {
            lVar24 = lVar29 + -1;
            if (lVar24 < 0) goto LAB_00112c29;
            pCVar2 = (CowData*)( local_140 + lVar24 * 8 );
            if (local_188 != *(char**)pCVar2) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_188, pCVar2);
               lVar24 = *(long*)( lVar27 + -8 ) + -1;
            }

            CowData<String>::resize<false>((CowData<String>*)&local_140, lVar24);
         }

      }
 else {
         String::replace_first((char*)&local_178, (char*)&local_180);
         local_160[0] = 0;
         local_128 = "\"";
         local_120 = 1;
         String::parse_latin1((StrRange*)local_160);
         operator+((char *)&
         local_168,(String*)"#include \"";
         String::operator +((String*)&local_128, (String*)&local_168);
         pcVar7 = local_128;
         pcVar6 = local_180;
         if (local_180 == local_128) {
            if (local_180 != (char*)0x0) {
               LOCK();
               plVar23 = (long*)( local_180 + -0x10 );
               *plVar23 = *plVar23 + -1;
               UNLOCK();
               if (*plVar23 == 0) {
                  local_128 = (char*)0x0;
                  Memory::free_static(pcVar7 + -0x10, false);
               }

            }

         }
 else {
            if (local_180 != (char*)0x0) {
               LOCK();
               plVar23 = (long*)( local_180 + -0x10 );
               *plVar23 = *plVar23 + -1;
               UNLOCK();
               if (*plVar23 == 0) {
                  local_180 = (char*)0x0;
                  Memory::free_static(pcVar6 + -0x10, false);
               }

            }

            local_180 = local_128;
         }

         lVar27 = local_168;
         if (local_168 != 0) {
            LOCK();
            plVar23 = (long*)( local_168 + -0x10 );
            *plVar23 = *plVar23 + -1;
            UNLOCK();
            if (*plVar23 == 0) {
               local_168 = 0;
               Memory::free_static((void*)( lVar27 + -0x10 ), false);
            }

         }

         lVar27 = local_160[0];
         if (local_160[0] != 0) {
            LOCK();
            plVar23 = (long*)( local_160[0] + -0x10 );
            *plVar23 = *plVar23 + -1;
            UNLOCK();
            if (*plVar23 == 0) {
               local_160[0] = 0;
               Memory::free_static((void*)( lVar27 + -0x10 ), false);
            }

         }

         pVVar17 = (Vector<String>*)HashMap<String,Vector<String>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<String>>>>::operator []((HashMap<String,Vector<String>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<String>>>>*)&local_118, (String*)&local_188);
         local_168 = 0;
         local_128 = "\"";
         local_120 = 1;
         String::parse_latin1((StrRange*)&local_168);
         operator+((char *)&
         local_170,(String*)"#include \"";
         String::operator +((String*)local_160, (String*)&local_170);
         local_128 = (char*)0x0;
         plVar23 = (long*)( local_160[0] + -0x10 );
         if (local_160[0] == 0) {
            Vector<String>::push_back(pVVar17);
         }
 else {
            do {
               lVar27 = *plVar23;
               if (lVar27 == 0) goto LAB_00111bd4;
               LOCK();
               lVar29 = *plVar23;
               bVar31 = lVar27 == lVar29;
               if (bVar31) {
                  *plVar23 = lVar27 + 1;
                  lVar29 = lVar27;
               }

               UNLOCK();
            }
 while ( !bVar31 );
            if (lVar29 != -1) {
               local_128 = (char*)local_160[0];
            }

            LAB_00111bd4:pcVar6 = local_128;
            Vector<String>::push_back(pVVar17);
            if (pcVar6 != (char*)0x0) {
               LOCK();
               plVar23 = (long*)( (long)pcVar6 + -0x10 );
               *plVar23 = *plVar23 + -1;
               UNLOCK();
               if (*plVar23 == 0) {
                  Memory::free_static((void*)( (long)local_128 + -0x10 ), false);
               }

            }

         }

         lVar27 = local_160[0];
         if (local_160[0] != 0) {
            LOCK();
            plVar23 = (long*)( local_160[0] + -0x10 );
            *plVar23 = *plVar23 + -1;
            UNLOCK();
            if (*plVar23 == 0) {
               local_160[0] = 0;
               Memory::free_static((void*)( lVar27 + -0x10 ), false);
            }

         }

         lVar27 = local_170;
         if (local_170 != 0) {
            LOCK();
            plVar23 = (long*)( local_170 + -0x10 );
            *plVar23 = *plVar23 + -1;
            UNLOCK();
            if (*plVar23 == 0) {
               local_170 = 0;
               Memory::free_static((void*)( lVar27 + -0x10 ), false);
            }

         }

         lVar27 = local_168;
         if (local_168 != 0) {
            LOCK();
            plVar23 = (long*)( local_168 + -0x10 );
            *plVar23 = *plVar23 + -1;
            UNLOCK();
            if (*plVar23 == 0) {
               local_168 = 0;
               Memory::free_static((void*)( lVar27 + -0x10 ), false);
            }

         }

         local_128 = (char*)0x0;
         plVar23 = (long*)( local_188 + -0x10 );
         if (local_188 == (char*)0x0) {
            Vector<String>::push_back((Vector<String>*)&local_148, (String*)&local_128);
         }
 else {
            do {
               lVar27 = *plVar23;
               if (lVar27 == 0) goto LAB_00111cce;
               LOCK();
               lVar29 = *plVar23;
               bVar31 = lVar27 == lVar29;
               if (bVar31) {
                  *plVar23 = lVar27 + 1;
                  lVar29 = lVar27;
               }

               UNLOCK();
            }
 while ( !bVar31 );
            if (lVar29 != -1) {
               local_128 = local_188;
            }

            LAB_00111cce:pcVar6 = local_128;
            Vector<String>::push_back((Vector<String>*)&local_148);
            if (pcVar6 != (char*)0x0) {
               LOCK();
               plVar23 = (long*)( pcVar6 + -0x10 );
               *plVar23 = *plVar23 + -1;
               UNLOCK();
               if (*plVar23 == 0) {
                  Memory::free_static(local_128 + -0x10, false);
               }

            }

         }

         if (local_188 != local_178) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_188, (CowData*)&local_178);
         }

         local_120 = 0;
         lVar27 = HashMap<String,Vector<String>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<String>>>>::operator []((HashMap<String,Vector<String>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<String>>>>*)&local_118, (String*)&local_178);
         if (*(long*)( lVar27 + 8 ) != 0) {
            CowData<String>::_unref((CowData<String>*)( lVar27 + 8 ));
            *(undefined8*)( lVar27 + 8 ) = 0;
         }

         CowData<String>::_unref((CowData<String>*)&local_120);
         pcVar6 = local_178;
         if (local_178 != (char*)0x0) {
            LOCK();
            plVar23 = (long*)( local_178 + -0x10 );
            *plVar23 = *plVar23 + -1;
            UNLOCK();
            if (*plVar23 == 0) {
               local_178 = (char*)0x0;
               Memory::free_static(pcVar6 + -0x10, false);
            }

         }

      }

      pcVar6 = local_180;
      if (local_180 != (char*)0x0) {
         LOCK();
         plVar23 = (long*)( local_180 + -0x10 );
         *plVar23 = *plVar23 + -1;
         UNLOCK();
         if (*plVar23 == 0) {
            local_180 = (char*)0x0;
            Memory::free_static(pcVar6 + -0x10, false);
         }

      }

   }

   for (puVar28 = (undefined8*)local_100._0_8_; puVar28 != (undefined8*)0x0; puVar28 = (undefined8*)*puVar28) {
      if (( puVar28[2] == 0 ) || ( *(uint*)( puVar28[2] + -8 ) < 2 )) {
         cVar8 = String::operator ==(param_5, "");
         if (cVar8 == '\0') {
            local_168 = 0;
            local_128 = "--";
            local_120 = 2;
            String::parse_latin1((StrRange*)&local_168);
            goto LAB_00111f28;
         }

         Variant::Variant((Variant*)local_58, _LC207);
         stringify_variants((Variant*)&local_128);
         __print_line((String*)&local_128);
         pcVar6 = local_128;
         if (local_128 != (char*)0x0) {
            LOCK();
            plVar23 = (long*)( local_128 + -0x10 );
            *plVar23 = *plVar23 + -1;
            UNLOCK();
            if (*plVar23 == 0) {
               local_128 = (char*)0x0;
               Memory::free_static(pcVar6 + -0x10, false);
            }

         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

      }
 else {
         local_168 = 0;
         local_128 = "--";
         local_120 = 2;
         String::parse_latin1((StrRange*)&local_168);
         LAB_00111f28:operator + ( (char*)&local_170,(String*)&_LC208 );
         String::operator +((String*)local_160, (String*)&local_170);
         Variant::Variant((Variant*)local_58, (String*)local_160);
         stringify_variants((Variant*)&local_128);
         __print_line((String*)&local_128);
         pcVar6 = local_128;
         if (local_128 != (char*)0x0) {
            LOCK();
            plVar23 = (long*)( local_128 + -0x10 );
            *plVar23 = *plVar23 + -1;
            UNLOCK();
            if (*plVar23 == 0) {
               local_128 = (char*)0x0;
               Memory::free_static(pcVar6 + -0x10, false);
            }

         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         lVar14 = local_160[0];
         if (local_160[0] != 0) {
            LOCK();
            plVar23 = (long*)( local_160[0] + -0x10 );
            *plVar23 = *plVar23 + -1;
            UNLOCK();
            if (*plVar23 == 0) {
               local_160[0] = 0;
               Memory::free_static((void*)( lVar14 + -0x10 ), false);
            }

         }

         lVar14 = local_170;
         if (local_170 != 0) {
            LOCK();
            plVar23 = (long*)( local_170 + -0x10 );
            *plVar23 = *plVar23 + -1;
            UNLOCK();
            if (*plVar23 == 0) {
               local_170 = 0;
               Memory::free_static((void*)( lVar14 + -0x10 ), false);
            }

         }

         lVar14 = local_168;
         if (local_168 != 0) {
            LOCK();
            plVar23 = (long*)( local_168 + -0x10 );
            *plVar23 = *plVar23 + -1;
            UNLOCK();
            if (*plVar23 == 0) {
               local_168 = 0;
               Memory::free_static((void*)( lVar14 + -0x10 ), false);
            }

         }

      }

      if (local_150 == (long*)0x0) {
         iVar21 = -1;
      }
 else {
         iVar21 = -1;
         for (lVar24 = 0; lVar24 < local_150[-1]; lVar24 = lVar24 + 1) {
            cVar8 = String::operator ==((String*)( local_150 + lVar24 * 2 ), (String*)( puVar28 + 2 ));
            if (cVar8 == '\0') {
               if (local_150 == (long*)0x0) break;
            }
 else {
               if (local_150 == (long*)0x0) {
                  lVar29 = 0;
                  goto LAB_00112c29;
               }

               lVar29 = local_150[-1];
               if (lVar29 <= lVar24) goto LAB_00112c29;
               iVar21 = (int)local_150[lVar24 * 2 + 1];
            }

         }

      }

      lVar14 = puVar28[4];
      lVar29 = 0;
      lVar27 = 0;
      while (( lVar14 != 0 && ( lVar27 < *(long*)( lVar14 + -8 ) ) )) {
         plVar22 = (long*)( lVar14 + lVar29 * 8 );
         local_168 = 0;
         lVar14 = *plVar22;
         plVar23 = (long*)( lVar14 + -0x10 );
         if (iVar21 + -1 == (int)lVar29) {
            if (lVar14 != 0) {
               do {
                  lVar14 = *plVar23;
                  if (lVar14 == 0) goto LAB_00112225;
                  LOCK();
                  lVar27 = *plVar23;
                  bVar31 = lVar14 == lVar27;
                  if (bVar31) {
                     *plVar23 = lVar14 + 1;
                     lVar27 = lVar14;
                  }

                  UNLOCK();
               }
 while ( !bVar31 );
               if (lVar27 != -1) {
                  local_168 = *plVar22;
               }

            }

            LAB_00112225:local_128 = "E%4d-> %s";
            local_120 = 9;
         }
 else {
            if (lVar14 != 0) {
               do {
                  lVar14 = *plVar23;
                  if (lVar14 == 0) goto LAB_00112086;
                  LOCK();
                  lVar27 = *plVar23;
                  bVar31 = lVar14 == lVar27;
                  if (bVar31) {
                     *plVar23 = lVar14 + 1;
                     lVar27 = lVar14;
                  }

                  UNLOCK();
               }
 while ( !bVar31 );
               if (lVar27 != -1) {
                  local_168 = *plVar22;
               }

            }

            LAB_00112086:local_128 = "%5d | %s";
            local_120 = 8;
         }

         local_170 = 0;
         iVar26 = (int)lVar29 + 1;
         String::parse_latin1((StrRange*)&local_170);
         vformat<int,String>((String*)local_160, (StrRange*)&local_170, iVar26, &local_168);
         Variant::Variant((Variant*)local_58, (String*)local_160);
         stringify_variants((Variant*)&local_128);
         __print_line((String*)&local_128);
         pcVar6 = local_128;
         if (local_128 != (char*)0x0) {
            LOCK();
            plVar23 = (long*)( local_128 + -0x10 );
            *plVar23 = *plVar23 + -1;
            UNLOCK();
            if (*plVar23 == 0) {
               local_128 = (char*)0x0;
               Memory::free_static(pcVar6 + -0x10, false);
            }

         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         lVar14 = local_160[0];
         if (local_160[0] != 0) {
            LOCK();
            plVar23 = (long*)( local_160[0] + -0x10 );
            *plVar23 = *plVar23 + -1;
            UNLOCK();
            if (*plVar23 == 0) {
               local_160[0] = 0;
               Memory::free_static((void*)( lVar14 + -0x10 ), false);
            }

         }

         lVar14 = local_170;
         if (local_170 != 0) {
            LOCK();
            plVar23 = (long*)( local_170 + -0x10 );
            *plVar23 = *plVar23 + -1;
            UNLOCK();
            if (*plVar23 == 0) {
               local_170 = 0;
               Memory::free_static((void*)( lVar14 + -0x10 ), false);
            }

         }

         lVar14 = local_168;
         if (local_168 != 0) {
            LOCK();
            plVar23 = (long*)( local_168 + -0x10 );
            *plVar23 = *plVar23 + -1;
            UNLOCK();
            if (*plVar23 == 0) {
               local_168 = 0;
               Memory::free_static((void*)( lVar14 + -0x10 ), false);
            }

         }

         lVar29 = lVar29 + 1;
         lVar14 = puVar28[4];
         lVar27 = (long)iVar26;
      }
;
      ;;
   }

   local_170 = 0;
   if (( local_150 == (long*)0x0 ) || ( local_150[-1] < 2 )) {
      if (*(long*)param_5 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_170, (CowData*)param_5);
      }

      uVar11 = ShaderLanguage::get_error_line();
   }
 else {
      lVar24 = local_150[-1] + -1;
      if (local_150[lVar24 * 2] != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_170, (CowData*)( local_150 + lVar24 * 2 ));
         if (local_150 == (long*)0x0) {
            lVar29 = 0;
            lVar24 = -1;
            LAB_00112c29:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar24, lVar29, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar29 = local_150[-1];
         lVar24 = lVar29 + -1;
         if (lVar24 < 0) goto LAB_00112c29;
      }

      uVar11 = (undefined4)local_150[lVar24 * 2 + 1];
   }

   ShaderLanguage::get_error_text();
   String::utf8();
   uVar18 = CharString::get_data();
   String::utf8();
   uVar19 = CharString::get_data();
   _err_print_error(0, uVar19, uVar11, uVar18, 0, 3);
   lVar14 = local_168;
   if (local_168 != 0) {
      LOCK();
      plVar23 = (long*)( local_168 + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         local_168 = 0;
         Memory::free_static((void*)( lVar14 + -0x10 ), false);
      }

   }

   pcVar6 = local_128;
   if (local_128 != (char*)0x0) {
      LOCK();
      plVar23 = (long*)( local_128 + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         local_128 = (char*)0x0;
         Memory::free_static(pcVar6 + -0x10, false);
      }

   }

   lVar14 = local_160[0];
   if (local_160[0] != 0) {
      LOCK();
      plVar23 = (long*)( local_160[0] + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         local_160[0] = 0;
         Memory::free_static((void*)( lVar14 + -0x10 ), false);
      }

   }

   lVar14 = local_170;
   if (local_170 != 0) {
      LOCK();
      plVar23 = (long*)( local_170 + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         local_170 = 0;
         Memory::free_static((void*)( lVar14 + -0x10 ), false);
      }

   }

   CowData<String>::_unref((CowData<String>*)&local_130);
   CowData<String>::_unref((CowData<String>*)&local_140);
   if ((void*)local_110._0_8_ != (void*)0x0) {
      pvVar30 = (void*)local_110._0_8_;
      if (( local_f0._4_4_ != 0 ) && ( uVar9 = *(uint*)( hash_table_size_primes + ( local_f0 & 0xffffffff ) * 4 ) ),uVar9 != 0) {
         lVar14 = 0;
         do {
            if (*(int*)( local_110._8_8_ + lVar14 ) != 0) {
               *(int*)( local_110._8_8_ + lVar14 ) = 0;
               puVar28 = (undefined8*)( (long)pvVar30 + lVar14 * 2 );
               pvVar3 = (void*)*puVar28;
               CowData<String>::_unref((CowData<String>*)( (long)pvVar3 + 0x20 ));
               if (*(long*)( (long)pvVar3 + 0x10 ) != 0) {
                  LOCK();
                  plVar23 = (long*)( *(long*)( (long)pvVar3 + 0x10 ) + -0x10 );
                  *plVar23 = *plVar23 + -1;
                  UNLOCK();
                  if (*plVar23 == 0) {
                     lVar27 = *(long*)( (long)pvVar3 + 0x10 );
                     *(undefined8*)( (long)pvVar3 + 0x10 ) = 0;
                     Memory::free_static((void*)( lVar27 + -0x10 ), false);
                  }

                  puVar28 = (undefined8*)( local_110._0_8_ + lVar14 * 2 );
                  pvVar30 = (void*)local_110._0_8_;
               }

               Memory::free_static(pvVar3, false);
               *puVar28 = 0;
            }

            lVar14 = lVar14 + 4;
         }
 while ( (ulong)uVar9 * 4 - lVar14 != 0 );
         local_f0 = local_f0 & 0xffffffff;
         local_100 = (undefined1[16])0x0;
         if (pvVar30 == (void*)0x0) goto LAB_00112b4d;
      }

      Memory::free_static(pvVar30, false);
      Memory::free_static((void*)local_110._8_8_, false);
   }

   LAB_00112b4d:pcVar6 = local_188;
   if (local_188 != (char*)0x0) {
      LOCK();
      plVar23 = (long*)( local_188 + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         local_188 = (char*)0x0;
         Memory::free_static(pcVar6 + -0x10, false);
      }

   }

   plVar23 = local_150;
   if (local_150 != (long*)0x0) {
      LOCK();
      plVar22 = local_150 + -2;
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (*plVar22 == 0) {
         if (local_150 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar14 = local_150[-1];
         lVar27 = 0;
         local_150 = (long*)0x0;
         plVar22 = plVar23;
         if (lVar14 != 0) {
            do {
               if (*plVar22 != 0) {
                  LOCK();
                  plVar1 = (long*)( *plVar22 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar29 = *plVar22;
                     *plVar22 = 0;
                     Memory::free_static((void*)( lVar29 + -0x10 ), false);
                  }

               }

               lVar27 = lVar27 + 1;
               plVar22 = plVar22 + 2;
            }
 while ( lVar14 != lVar27 );
         }

         Memory::free_static(plVar23 + -2, false);
      }

   }

   LAB_001126c0:ShaderLanguage::ShaderCompileInfo::~ShaderCompileInfo((ShaderCompileInfo*)local_e8);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar10;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* ShaderLanguage::ConstantNode::get_datatype() const */undefined4 ShaderLanguage::ConstantNode::get_datatype(ConstantNode *this) {
   return *(undefined4*)( this + 0x14 );
}
/* CowData<unsigned int>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<unsigned_int>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<int>::_copy_on_write(void) {
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
/* CowData<StringName>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<StringName>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<int>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<int>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_00113a9c(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<ShaderCompiler::GeneratedCode::Texture>::_copy_on_write() [clone .isra.0] [clone .cold]
    */void CowData<ShaderCompiler::GeneratedCode::Texture>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* Error CowData<ShaderCompiler::GeneratedCode::Texture>::resize<false>(long) [clone .isra.0] [clone
   .cold] */void CowData<ShaderCompiler::GeneratedCode::Texture>::resize<false>(long param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
void FUN_00113ac8(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* ShaderCompiler::_dump_node_code(ShaderLanguage::Node const*, int, ShaderCompiler::GeneratedCode&,
   ShaderCompiler::IdentifierActions&, ShaderCompiler::DefaultIdentifierActions const&, bool, bool)
   [clone .cold] */undefined8 *ShaderCompiler::_dump_node_code(Node *param_1, int param_2, GeneratedCode *param_3, IdentifierActions *param_4, DefaultIdentifierActions *param_5, bool param_6, bool param_7) {
   long in_FS_OFFSET;
   undefined8 *in_stack_00000038;
   long in_stack_00000228;
   *in_stack_00000038 = 0;
   if (in_stack_00000228 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return in_stack_00000038;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderCompiler::compile(RenderingServer::ShaderMode, String const&,
   ShaderCompiler::IdentifierActions*, String const&, ShaderCompiler::GeneratedCode&) [clone .cold]
    */void ShaderCompiler::compile(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
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
/* Pair<StringName, ShaderLanguage::ShaderNode::Varying>::~Pair() */void Pair<StringName,ShaderLanguage::ShaderNode::Varying>::~Pair(Pair<StringName,ShaderLanguage::ShaderNode::Varying> *this) {
   if (( StringName::configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }

   return;
}
/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName> >::~HashSet() */void HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::~HashSet(HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this) {
   long lVar1;
   void *pvVar2;
   pvVar2 = *(void**)this;
   if (pvVar2 == (void*)0x0) {
      return;
   }

   if (( *(int*)( this + 0x24 ) != 0 ) && ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 ) == 0 || ( memset(*(void**)( this + 0x18 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 ) << 2),*(int*)( this + 0x24 ) != 0 ) ) )) {
      lVar1 = 0;
      do {
         if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar2 + lVar1 * 8 ) != 0 )) {
            StringName::unref();
            pvVar2 = *(void**)this;
         }

         lVar1 = lVar1 + 1;
      }
 while ( (uint)lVar1 < *(uint*)( this + 0x24 ) );
      *(undefined4*)( this + 0x24 ) = 0;
      if (pvVar2 == (void*)0x0) {
         return;
      }

   }

   Memory::free_static(pvVar2, false);
   Memory::free_static(*(void**)( this + 0x10 ), false);
   Memory::free_static(*(void**)( this + 8 ), false);
   Memory::free_static(*(void**)( this + 0x18 ), false);
   return;
}
/* List<String, DefaultAllocator>::~List() */void List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   long *plVar5;
   plVar5 = *(long**)this;
   if (plVar5 == (long*)0x0) {
      return;
   }

   do {
      plVar2 = (long*)*plVar5;
      if (plVar2 == (long*)0x0) {
         if ((int)plVar5[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if ((long*)plVar2[3] == plVar5) {
         lVar4 = plVar2[1];
         lVar3 = plVar2[2];
         *plVar5 = lVar4;
         if (plVar2 == (long*)plVar5[1]) {
            plVar5[1] = lVar3;
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 8 ) = lVar4;
            lVar4 = plVar2[1];
         }

         if (lVar4 != 0) {
            *(long*)( lVar4 + 0x10 ) = lVar3;
         }

         if (*plVar2 != 0) {
            LOCK();
            plVar1 = (long*)( *plVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar4 = *plVar2;
               *plVar2 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         Memory::free_static(plVar2, false);
         *(int*)( plVar5 + 2 ) = (int)plVar5[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar5 = *(long**)this;
   }
 while ( (int)plVar5[2] != 0 );
   Memory::free_static(plVar5, false);
   return;
}
/* HashMap<StringName, String, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, String> > >::operator[](StringName const&) const
    */long HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>> *this, StringName *param_1) {
   uint uVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   code *pcVar11;
   uint uVar12;
   uint uVar13;
   long lVar14;
   uint uVar15;
   uint uVar16;
   ulong uVar17;
   if (( *(long*)( this + 8 ) != 0 ) && ( *(int*)( this + 0x2c ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar17 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar12 = StringName::get_empty_hash();
      }
 else {
         uVar12 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar12 == 0) {
         uVar12 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar12 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar17;
      lVar14 = SUB168(auVar3 * auVar7, 8);
      uVar15 = *(uint*)( *(long*)( this + 0x10 ) + lVar14 * 4 );
      uVar13 = SUB164(auVar3 * auVar7, 8);
      if (uVar15 != 0) {
         uVar16 = 0;
         do {
            if (( uVar12 == uVar15 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar14 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               return *(long*)( *(long*)( this + 8 ) + (ulong)uVar13 * 8 ) + 0x18;
            }

            uVar16 = uVar16 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar13 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar17;
            lVar14 = SUB168(auVar4 * auVar8, 8);
            uVar15 = *(uint*)( *(long*)( this + 0x10 ) + lVar14 * 4 );
            uVar13 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar15 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar15 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar17,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar13 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar17,uVar16 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   _err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar11 = (code*)invalidInstructionException();
   ( *pcVar11 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::insert(StringName const&) */StringName *HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(StringName *param_1) {
   void *pvVar1;
   void *pvVar2;
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
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   uint uVar27;
   uint uVar28;
   ulong uVar29;
   long lVar30;
   long lVar31;
   long lVar32;
   int iVar33;
   StringName *in_RDX;
   long lVar34;
   ulong uVar35;
   long lVar36;
   long *in_RSI;
   uint uVar37;
   ulong uVar38;
   undefined4 uVar39;
   uint uVar40;
   ulong uVar41;
   uint uVar42;
   uint *puVar43;
   int iVar44;
   uint local_88;
   long local_68;
   uVar27 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
   if (*in_RSI == 0) {
      uVar29 = (ulong)uVar27 * 4;
      lVar30 = Memory::alloc_static(uVar29, false);
      in_RSI[3] = lVar30;
      lVar30 = Memory::alloc_static((ulong)uVar27 * 8, false);
      *in_RSI = lVar30;
      lVar30 = Memory::alloc_static(uVar29, false);
      in_RSI[2] = lVar30;
      lVar30 = Memory::alloc_static(uVar29, false);
      in_RSI[1] = lVar30;
      if (uVar27 != 0) {
         memset((void*)in_RSI[3], 0, uVar29);
      }

      iVar44 = *(int*)( (long)in_RSI + 0x24 );
      if (*in_RSI != 0) goto LAB_001141dc;
   }
 else {
      iVar44 = *(int*)( (long)in_RSI + 0x24 );
      LAB_001141dc:if (iVar44 != 0) {
         uVar40 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
         uVar29 = CONCAT44(0, uVar40);
         lVar30 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
         if (*(long*)in_RDX == 0) {
            uVar28 = StringName::get_empty_hash();
            iVar44 = *(int*)( (long)in_RSI + 0x24 );
         }
 else {
            uVar28 = *(uint*)( *(long*)in_RDX + 0x20 );
         }

         if (uVar28 == 0) {
            uVar28 = 1;
         }

         uVar37 = 0;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = (ulong)uVar28 * lVar30;
         auVar15._8_8_ = 0;
         auVar15._0_8_ = uVar29;
         lVar34 = SUB168(auVar3 * auVar15, 8);
         iVar33 = SUB164(auVar3 * auVar15, 8);
         uVar42 = *(uint*)( in_RSI[3] + lVar34 * 4 );
         if (uVar42 != 0) {
            do {
               if (uVar28 == uVar42) {
                  lVar36 = *in_RSI;
                  uVar42 = *(uint*)( in_RSI[1] + lVar34 * 4 );
                  if (*(long*)( lVar36 + (ulong)uVar42 * 8 ) == *(long*)in_RDX) goto LAB_00114628;
               }

               uVar37 = uVar37 + 1;
               auVar4._8_8_ = 0;
               auVar4._0_8_ = ( ulong )(iVar33 + 1) * lVar30;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = uVar29;
               lVar34 = SUB168(auVar4 * auVar16, 8);
               uVar42 = *(uint*)( in_RSI[3] + lVar34 * 4 );
               iVar33 = SUB164(auVar4 * auVar16, 8);
            }
 while ( ( uVar42 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar42 * lVar30,auVar17._8_8_ = 0,auVar17._0_8_ = uVar29,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar40 + iVar33 ) - SUB164(auVar5 * auVar17, 8)) * lVar30,auVar18._8_8_ = 0,auVar18._0_8_ = uVar29,uVar37 <= SUB164(auVar6 * auVar18, 8) );
         }

      }

   }

   if ((float)( iVar44 + 1 ) <= (float)uVar27 * __LC66) {
      lVar30 = *(long*)in_RDX;
      if (lVar30 != 0) goto LAB_00114505;
      LAB_00114666:uVar27 = StringName::get_empty_hash();
   }
 else {
      if ((int)in_RSI[4] == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         uVar42 = 0xffffffff;
         iVar44 = *(int*)( (long)in_RSI + 0x24 );
         lVar36 = *in_RSI;
         goto LAB_00114628;
      }

      uVar27 = (int)in_RSI[4] + 1;
      uVar29 = (ulong)uVar27;
      if (uVar27 < 2) {
         uVar29 = 2;
      }

      uVar27 = *(uint*)( hash_table_size_primes + uVar29 * 4 );
      *(int*)( in_RSI + 4 ) = (int)uVar29;
      pvVar1 = (void*)in_RSI[3];
      uVar29 = (ulong)uVar27 * 4;
      pvVar2 = (void*)in_RSI[2];
      lVar30 = Memory::alloc_static(uVar29, false);
      in_RSI[3] = lVar30;
      lVar30 = Memory::realloc_static((void*)*in_RSI, (ulong)uVar27 * 8, false);
      *in_RSI = lVar30;
      lVar30 = Memory::alloc_static(uVar29, false);
      in_RSI[2] = lVar30;
      lVar30 = Memory::realloc_static((void*)in_RSI[1], uVar29, false);
      in_RSI[1] = lVar30;
      if (uVar27 != 0) {
         memset((void*)in_RSI[3], 0, uVar29);
      }

      if (*(int*)( (long)in_RSI + 0x24 ) != 0) {
         uVar29 = 0;
         lVar34 = in_RSI[3];
         lVar36 = in_RSI[2];
         do {
            uVar41 = uVar29 & 0xffffffff;
            uVar39 = (undefined4)uVar29;
            uVar42 = 0;
            uVar27 = *(uint*)( (long)pvVar1 + ( ulong ) * (uint*)( (long)pvVar2 + uVar29 * 4 ) * 4 );
            uVar35 = (ulong)uVar27;
            uVar40 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
            uVar38 = CONCAT44(0, uVar40);
            lVar31 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar35 * lVar31;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar38;
            lVar32 = SUB168(auVar7 * auVar19, 8) * 4;
            iVar44 = SUB164(auVar7 * auVar19, 8);
            puVar43 = (uint*)( lVar34 + lVar32 );
            uVar28 = *puVar43;
            if (uVar28 == 0) {
               lVar31 = uVar29 * 4;
            }
 else {
               do {
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = (ulong)uVar28 * lVar31;
                  auVar20._8_8_ = 0;
                  auVar20._0_8_ = uVar38;
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = ( ulong )(( uVar40 + iVar44 ) - SUB164(auVar8 * auVar20, 8)) * lVar31;
                  auVar21._8_8_ = 0;
                  auVar21._0_8_ = uVar38;
                  local_88 = SUB164(auVar9 * auVar21, 8);
                  if (local_88 < uVar42) {
                     *(int*)( lVar36 + uVar41 * 4 ) = iVar44;
                     uVar27 = *puVar43;
                     *puVar43 = (uint)uVar35;
                     uVar28 = *(uint*)( lVar32 + lVar30 );
                     uVar35 = (ulong)uVar27;
                     *(uint*)( lVar32 + lVar30 ) = (uint)uVar41;
                     uVar41 = (ulong)uVar28;
                     uVar42 = local_88;
                  }

                  uVar39 = (undefined4)uVar41;
                  uVar27 = (uint)uVar35;
                  uVar42 = uVar42 + 1;
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = ( ulong )(iVar44 + 1) * lVar31;
                  auVar22._8_8_ = 0;
                  auVar22._0_8_ = uVar38;
                  lVar32 = SUB168(auVar10 * auVar22, 8) * 4;
                  iVar44 = SUB164(auVar10 * auVar22, 8);
                  puVar43 = (uint*)( lVar34 + lVar32 );
                  uVar28 = *puVar43;
               }
 while ( uVar28 != 0 );
               lVar31 = uVar41 << 2;
            }

            *puVar43 = uVar27;
            uVar29 = uVar29 + 1;
            *(int*)( lVar36 + lVar31 ) = iVar44;
            *(undefined4*)( lVar30 + lVar32 ) = uVar39;
         }
 while ( (uint)uVar29 < *(uint*)( (long)in_RSI + 0x24 ) );
      }

      Memory::free_static(pvVar1, false);
      Memory::free_static(pvVar2, false);
      lVar30 = *(long*)in_RDX;
      if (lVar30 == 0) goto LAB_00114666;
      LAB_00114505:uVar27 = *(uint*)( lVar30 + 0x20 );
   }

   if (uVar27 == 0) {
      uVar27 = 1;
   }

   uVar29 = (ulong)uVar27;
   StringName::StringName((StringName*)( *in_RSI + ( ulong ) * (uint*)( (long)in_RSI + 0x24 ) * 8 ), in_RDX);
   uVar40 = *(uint*)( (long)in_RSI + 0x24 );
   lVar34 = in_RSI[3];
   uVar28 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
   uVar35 = CONCAT44(0, uVar28);
   lVar36 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
   auVar11._8_8_ = 0;
   auVar11._0_8_ = uVar29 * lVar36;
   auVar23._8_8_ = 0;
   auVar23._0_8_ = uVar35;
   lVar30 = SUB168(auVar11 * auVar23, 8) * 4;
   iVar44 = SUB164(auVar11 * auVar23, 8);
   puVar43 = (uint*)( lVar34 + lVar30 );
   uVar42 = *puVar43;
   if (uVar42 == 0) {
      local_68 = in_RSI[2];
      lVar32 = in_RSI[1];
   }
 else {
      uVar37 = 0;
      local_68 = in_RSI[2];
      lVar32 = in_RSI[1];
      do {
         auVar12._8_8_ = 0;
         auVar12._0_8_ = (ulong)uVar42 * lVar36;
         auVar24._8_8_ = 0;
         auVar24._0_8_ = uVar35;
         auVar13._8_8_ = 0;
         auVar13._0_8_ = ( ulong )(( uVar28 + iVar44 ) - SUB164(auVar12 * auVar24, 8)) * lVar36;
         auVar25._8_8_ = 0;
         auVar25._0_8_ = uVar35;
         local_88 = SUB164(auVar13 * auVar25, 8);
         if (local_88 < uVar37) {
            *(int*)( local_68 + (ulong)uVar40 * 4 ) = iVar44;
            uVar27 = *puVar43;
            *puVar43 = (uint)uVar29;
            uVar42 = *(uint*)( lVar30 + lVar32 );
            uVar29 = (ulong)uVar27;
            *(uint*)( lVar30 + lVar32 ) = uVar40;
            uVar40 = uVar42;
            uVar37 = local_88;
         }

         uVar27 = (uint)uVar29;
         uVar37 = uVar37 + 1;
         auVar14._8_8_ = 0;
         auVar14._0_8_ = ( ulong )(iVar44 + 1) * lVar36;
         auVar26._8_8_ = 0;
         auVar26._0_8_ = uVar35;
         lVar30 = SUB168(auVar14 * auVar26, 8) * 4;
         iVar44 = SUB164(auVar14 * auVar26, 8);
         puVar43 = (uint*)( lVar34 + lVar30 );
         uVar42 = *puVar43;
      }
 while ( uVar42 != 0 );
   }

   *puVar43 = uVar27;
   *(int*)( local_68 + (ulong)uVar40 * 4 ) = iVar44;
   *(uint*)( lVar32 + lVar30 ) = uVar40;
   uVar42 = *(uint*)( (long)in_RSI + 0x24 );
   lVar36 = *in_RSI;
   iVar44 = uVar42 + 1;
   *(int*)( (long)in_RSI + 0x24 ) = iVar44;
   LAB_00114628:*(uint*)( param_1 + 0xc ) = uVar42;
   *(long*)param_1 = lVar36;
   *(int*)( param_1 + 8 ) = iVar44;
   return param_1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, bool*, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, bool*> > >::operator[](StringName const&) */undefined8 * __thiscallHashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator [](HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>> * this, StringName * param_1) * puVar1 ;undefined8 * puVar2void * pvVar3void * __sundefined8 * puVar4undefined1auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16] * __s_00undefined8 * puVar42long * pvVar44ulong * puVar55long = *(long*)( this + 8 ) ;local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar40 = CONCAT44(0, uVar38);if (lVar43 == 0) {
   LAB_00114e48:uVar45 = uVar40 * 4;
   uVar50 = uVar40 * 8;
   uVar41 = Memory::alloc_static(uVar45, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   pvVar44 = (void*)Memory::alloc_static(uVar50, false);
   *(void**)( this + 8 ) = pvVar44;
   if ((int)uVar40 != 0) {
      pvVar3 = *(void**)( this + 0x10 );
      if (( pvVar3 < (void*)( (long)pvVar44 + uVar50 ) ) && ( pvVar44 < (void*)( (long)pvVar3 + uVar45 ) )) {
         uVar45 = 0;
         do {
            *(undefined4*)( (long)pvVar3 + uVar45 * 4 ) = 0;
            *(undefined8*)( (long)pvVar44 + uVar45 * 8 ) = 0;
            uVar45 = uVar45 + 1;
         }
 while ( uVar40 != uVar45 );
         goto LAB_00114cf8;
      }

      memset(pvVar3, 0, uVar45);
      memset(pvVar44, 0, uVar50);
      iVar46 = *(int*)( this + 0x2c );
      LAB_00114cfc:if (iVar46 != 0) {
         LAB_00114d04:uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         uVar45 = CONCAT44(0, uVar38);
         lVar43 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar39 = StringName::get_empty_hash();
         }
 else {
            uVar39 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         if (uVar39 == 0) {
            uVar39 = 1;
         }

         uVar54 = 0;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = (ulong)uVar39 * lVar43;
         auVar33._8_8_ = 0;
         auVar33._0_8_ = uVar45;
         lVar49 = SUB168(auVar17 * auVar33, 8);
         uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar49 * 4 );
         uVar53 = SUB164(auVar17 * auVar33, 8);
         if (uVar52 != 0) {
            do {
               if (( uVar39 == uVar52 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar49 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                  puVar42 = *(undefined8**)( *(long*)( this + 8 ) + (ulong)uVar53 * 8 );
                  puVar42[3] = 0;
                  goto LAB_001148fc;
               }

               uVar54 = uVar54 + 1;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = ( ulong )(uVar53 + 1) * lVar43;
               auVar34._8_8_ = 0;
               auVar34._0_8_ = uVar45;
               lVar49 = SUB168(auVar18 * auVar34, 8);
               uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar49 * 4 );
               uVar53 = SUB164(auVar18 * auVar34, 8);
            }
 while ( ( uVar52 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar52 * lVar43,auVar35._8_8_ = 0,auVar35._0_8_ = uVar45,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( uVar38 + uVar53 ) - SUB164(auVar19 * auVar35, 8)) * lVar43,auVar36._8_8_ = 0,auVar36._0_8_ = uVar45,uVar54 <= SUB164(auVar20 * auVar36, 8) );
         }

         iVar46 = *(int*)( this + 0x2c );
      }

      goto LAB_00114933;
   }

   iVar46 = *(int*)( this + 0x2c );
   if (pvVar44 == (void*)0x0) goto LAB_00114933;
   if (iVar46 != 0) goto LAB_00114d04;
   LAB_00114959:uVar38 = *(uint*)( this + 0x28 );
   if (uVar38 == 0x1c) {
      puVar42 = (undefined8*)0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_001148fc;
   }

   uVar40 = ( ulong )(uVar38 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar39 = *(uint*)( hash_table_size_primes + (ulong)uVar38 * 4 );
   if (uVar38 + 1 < 2) {
      uVar40 = 2;
   }

   uVar38 = *(uint*)( hash_table_size_primes + uVar40 * 4 );
   uVar50 = (ulong)uVar38;
   *(int*)( this + 0x28 ) = (int)uVar40;
   pvVar44 = *(void**)( this + 8 );
   uVar40 = uVar50 * 4;
   uVar45 = uVar50 * 8;
   pvVar3 = *(void**)( this + 0x10 );
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   __s_00 = (void*)Memory::alloc_static(uVar45, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar38 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar45 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar40 != uVar50 );
      }
 else {
         memset(__s, 0, uVar40);
         memset(__s_00, 0, uVar45);
      }

   }

   if (uVar39 != 0) {
      uVar40 = 0;
      do {
         uVar38 = *(uint*)( (long)pvVar3 + uVar40 * 4 );
         if (uVar38 != 0) {
            lVar43 = *(long*)( this + 0x10 );
            uVar54 = 0;
            uVar52 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar45 = CONCAT44(0, uVar52);
            lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar38 * lVar49;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar45;
            lVar47 = SUB168(auVar9 * auVar25, 8);
            puVar1 = (uint*)( lVar43 + lVar47 * 4 );
            iVar46 = SUB164(auVar9 * auVar25, 8);
            uVar53 = *puVar1;
            uVar41 = *(undefined8*)( (long)pvVar44 + uVar40 * 8 );
            while (uVar53 != 0) {
               auVar10._8_8_ = 0;
               auVar10._0_8_ = (ulong)uVar53 * lVar49;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar45;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = ( ulong )(( uVar52 + iVar46 ) - SUB164(auVar10 * auVar26, 8)) * lVar49;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar45;
               uVar37 = SUB164(auVar11 * auVar27, 8);
               uVar51 = uVar41;
               if (uVar37 < uVar54) {
                  *puVar1 = uVar38;
                  puVar42 = (undefined8*)( (long)__s_00 + lVar47 * 8 );
                  uVar51 = *puVar42;
                  *puVar42 = uVar41;
                  uVar38 = uVar53;
                  uVar54 = uVar37;
               }

               uVar54 = uVar54 + 1;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(iVar46 + 1) * lVar49;
               auVar28._8_8_ = 0;
               auVar28._0_8_ = uVar45;
               lVar47 = SUB168(auVar12 * auVar28, 8);
               puVar1 = (uint*)( lVar43 + lVar47 * 4 );
               iVar46 = SUB164(auVar12 * auVar28, 8);
               uVar41 = uVar51;
               uVar53 = *puVar1;
            }
;
            ;;
            *(undefined8*)( (long)__s_00 + lVar47 * 8 ) = uVar41;
            *puVar1 = uVar38;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar40 = uVar40 + 1;
      }
 while ( uVar39 != uVar40 );
      Memory::free_static(pvVar44, false);
      Memory::free_static(pvVar3, false);
   }

}
 else {
   iVar46 = *(int*)( this + 0x2c );
   if (iVar46 != 0) {
      lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar39 = StringName::get_empty_hash();
         lVar43 = *(long*)( this + 8 );
      }
 else {
         uVar39 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar39 == 0) {
         uVar39 = 1;
      }

      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar49;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar40;
      lVar47 = SUB168(auVar5 * auVar21, 8);
      uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar47 * 4 );
      uVar53 = SUB164(auVar5 * auVar21, 8);
      if (uVar52 != 0) {
         uVar54 = 0;
         do {
            if (( uVar39 == uVar52 ) && ( *(long*)( *(long*)( lVar43 + lVar47 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               puVar42 = *(undefined8**)( lVar43 + (ulong)uVar53 * 8 );
               goto LAB_001148fc;
            }

            uVar54 = uVar54 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ulong )(uVar53 + 1) * lVar49;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar40;
            lVar47 = SUB168(auVar6 * auVar22, 8);
            uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar47 * 4 );
            uVar53 = SUB164(auVar6 * auVar22, 8);
         }
 while ( ( uVar52 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar52 * lVar49,auVar23._8_8_ = 0,auVar23._0_8_ = uVar40,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar53 + uVar38 ) - SUB164(auVar7 * auVar23, 8)) * lVar49,auVar24._8_8_ = 0,auVar24._0_8_ = uVar40,uVar54 <= SUB164(auVar8 * auVar24, 8) );
      }

      uVar40 = ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar43 == 0) goto LAB_00114e48;
      LAB_00114cf8:iVar46 = *(int*)( this + 0x2c );
      goto LAB_00114cfc;
   }

   LAB_00114933:if ((float)uVar40 * __LC66 < (float)( iVar46 + 1 )) goto LAB_00114959;
}
StringName::StringName((StringName*)&local_58, param_1);local_50 = 0;puVar42 = (undefined8*)operator_new(0x20, "");*puVar42 = 0;puVar42[1] = 0;StringName::StringName((StringName*)( puVar42 + 2 ), (StringName*)&local_58);bVar56 = StringName::configured != '\0';puVar42[3] = local_50;if (( bVar56 ) && ( local_58 != 0 )) {
   StringName::unref();
}
puVar4 = *(undefined8**)( this + 0x20 );if (puVar4 == (undefined8*)0x0) {
   lVar43 = *(long*)param_1;
   *(undefined8**)( this + 0x18 ) = puVar42;
   *(undefined8**)( this + 0x20 ) = puVar42;
   if (lVar43 == 0) goto LAB_00114e0d;
   LAB_00114be7:uVar38 = *(uint*)( lVar43 + 0x20 );
}
 else {
   *puVar4 = puVar42;
   puVar42[1] = puVar4;
   lVar43 = *(long*)param_1;
   *(undefined8**)( this + 0x20 ) = puVar42;
   if (lVar43 != 0) goto LAB_00114be7;
   LAB_00114e0d:uVar38 = StringName::get_empty_hash();
}
if (uVar38 == 0) {
   uVar38 = 1;
}
uVar40 = (ulong)uVar38;lVar43 = *(long*)( this + 0x10 );uVar53 = 0;lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar45 = CONCAT44(0, uVar39);auVar13._8_8_ = 0;auVar13._0_8_ = uVar40 * lVar49;auVar29._8_8_ = 0;auVar29._0_8_ = uVar45;lVar48 = SUB168(auVar13 * auVar29, 8);lVar47 = *(long*)( this + 8 );puVar1 = (uint*)( lVar43 + lVar48 * 4 );iVar46 = SUB164(auVar13 * auVar29, 8);uVar52 = *puVar1;puVar4 = puVar42;while (uVar52 != 0) {
   auVar14._8_8_ = 0;
   auVar14._0_8_ = (ulong)uVar52 * lVar49;
   auVar30._8_8_ = 0;
   auVar30._0_8_ = uVar45;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(( uVar39 + iVar46 ) - SUB164(auVar14 * auVar30, 8)) * lVar49;
   auVar31._8_8_ = 0;
   auVar31._0_8_ = uVar45;
   uVar38 = SUB164(auVar15 * auVar31, 8);
   puVar55 = puVar4;
   if (uVar38 < uVar53) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar52;
      puVar2 = (undefined8*)( lVar47 + lVar48 * 8 );
      puVar55 = (undefined8*)*puVar2;
      *puVar2 = puVar4;
      uVar53 = uVar38;
   }

   uVar38 = (uint)uVar40;
   uVar53 = uVar53 + 1;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(iVar46 + 1) * lVar49;
   auVar32._8_8_ = 0;
   auVar32._0_8_ = uVar45;
   lVar48 = SUB168(auVar16 * auVar32, 8);
   puVar1 = (uint*)( lVar43 + lVar48 * 4 );
   iVar46 = SUB164(auVar16 * auVar32, 8);
   puVar4 = puVar55;
   uVar52 = *puVar1;
}
;;*(undefined8**)( lVar47 + lVar48 * 8 ) = puVar4;*puVar1 = uVar38;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_001148fc:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return puVar42 + 3;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, Pair<int*, int>, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Pair<int*, int> > > >::operator[](StringName
   const&) */undefined8 * __thiscallHashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>>::operator [](HashMap<StringName,Pair<int*,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int*,int>>>> * this, StringName * param_1) * puVar1 ;undefined8 * puVar2void * pvVar3void * __sundefined8 * puVar4undefined1auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16] * __s_00undefined8 * puVar42long * pvVar44ulong * puVar55long = *(long*)( this + 8 ) ;local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar40 = CONCAT44(0, uVar38);if (lVar43 == 0) {
   LAB_001155c8:uVar45 = uVar40 * 4;
   uVar50 = uVar40 * 8;
   uVar41 = Memory::alloc_static(uVar45, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   pvVar44 = (void*)Memory::alloc_static(uVar50, false);
   *(void**)( this + 8 ) = pvVar44;
   if ((int)uVar40 != 0) {
      pvVar3 = *(void**)( this + 0x10 );
      if (( pvVar3 < (void*)( (long)pvVar44 + uVar50 ) ) && ( pvVar44 < (void*)( (long)pvVar3 + uVar45 ) )) {
         uVar45 = 0;
         do {
            *(undefined4*)( (long)pvVar3 + uVar45 * 4 ) = 0;
            *(undefined8*)( (long)pvVar44 + uVar45 * 8 ) = 0;
            uVar45 = uVar45 + 1;
         }
 while ( uVar40 != uVar45 );
         goto LAB_00115478;
      }

      memset(pvVar3, 0, uVar45);
      memset(pvVar44, 0, uVar50);
      iVar46 = *(int*)( this + 0x2c );
      LAB_0011547c:if (iVar46 != 0) {
         LAB_00115484:uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         uVar45 = CONCAT44(0, uVar38);
         lVar43 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar39 = StringName::get_empty_hash();
         }
 else {
            uVar39 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         if (uVar39 == 0) {
            uVar39 = 1;
         }

         uVar54 = 0;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = (ulong)uVar39 * lVar43;
         auVar33._8_8_ = 0;
         auVar33._0_8_ = uVar45;
         lVar49 = SUB168(auVar17 * auVar33, 8);
         uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar49 * 4 );
         uVar53 = SUB164(auVar17 * auVar33, 8);
         if (uVar52 != 0) {
            do {
               if (( uVar39 == uVar52 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar49 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                  puVar42 = *(undefined8**)( *(long*)( this + 8 ) + (ulong)uVar53 * 8 );
                  puVar42[3] = 0;
                  *(undefined4*)( puVar42 + 4 ) = 0;
                  goto LAB_0011506c;
               }

               uVar54 = uVar54 + 1;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = ( ulong )(uVar53 + 1) * lVar43;
               auVar34._8_8_ = 0;
               auVar34._0_8_ = uVar45;
               lVar49 = SUB168(auVar18 * auVar34, 8);
               uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar49 * 4 );
               uVar53 = SUB164(auVar18 * auVar34, 8);
            }
 while ( ( uVar52 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar52 * lVar43,auVar35._8_8_ = 0,auVar35._0_8_ = uVar45,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( uVar38 + uVar53 ) - SUB164(auVar19 * auVar35, 8)) * lVar43,auVar36._8_8_ = 0,auVar36._0_8_ = uVar45,uVar54 <= SUB164(auVar20 * auVar36, 8) );
         }

         iVar46 = *(int*)( this + 0x2c );
      }

      goto LAB_001150a3;
   }

   iVar46 = *(int*)( this + 0x2c );
   if (pvVar44 == (void*)0x0) goto LAB_001150a3;
   if (iVar46 != 0) goto LAB_00115484;
   LAB_001150c9:uVar38 = *(uint*)( this + 0x28 );
   if (uVar38 == 0x1c) {
      puVar42 = (undefined8*)0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_0011506c;
   }

   uVar40 = ( ulong )(uVar38 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar39 = *(uint*)( hash_table_size_primes + (ulong)uVar38 * 4 );
   if (uVar38 + 1 < 2) {
      uVar40 = 2;
   }

   uVar38 = *(uint*)( hash_table_size_primes + uVar40 * 4 );
   uVar50 = (ulong)uVar38;
   *(int*)( this + 0x28 ) = (int)uVar40;
   pvVar44 = *(void**)( this + 8 );
   uVar40 = uVar50 * 4;
   uVar45 = uVar50 * 8;
   pvVar3 = *(void**)( this + 0x10 );
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   __s_00 = (void*)Memory::alloc_static(uVar45, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar38 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar45 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar40 != uVar50 );
      }
 else {
         memset(__s, 0, uVar40);
         memset(__s_00, 0, uVar45);
      }

   }

   if (uVar39 != 0) {
      uVar40 = 0;
      do {
         uVar38 = *(uint*)( (long)pvVar3 + uVar40 * 4 );
         if (uVar38 != 0) {
            lVar43 = *(long*)( this + 0x10 );
            uVar54 = 0;
            uVar52 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar45 = CONCAT44(0, uVar52);
            lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar38 * lVar49;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar45;
            lVar47 = SUB168(auVar9 * auVar25, 8);
            puVar1 = (uint*)( lVar43 + lVar47 * 4 );
            iVar46 = SUB164(auVar9 * auVar25, 8);
            uVar53 = *puVar1;
            uVar41 = *(undefined8*)( (long)pvVar44 + uVar40 * 8 );
            while (uVar53 != 0) {
               auVar10._8_8_ = 0;
               auVar10._0_8_ = (ulong)uVar53 * lVar49;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar45;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = ( ulong )(( uVar52 + iVar46 ) - SUB164(auVar10 * auVar26, 8)) * lVar49;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar45;
               uVar37 = SUB164(auVar11 * auVar27, 8);
               uVar51 = uVar41;
               if (uVar37 < uVar54) {
                  *puVar1 = uVar38;
                  puVar42 = (undefined8*)( (long)__s_00 + lVar47 * 8 );
                  uVar51 = *puVar42;
                  *puVar42 = uVar41;
                  uVar38 = uVar53;
                  uVar54 = uVar37;
               }

               uVar54 = uVar54 + 1;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(iVar46 + 1) * lVar49;
               auVar28._8_8_ = 0;
               auVar28._0_8_ = uVar45;
               lVar47 = SUB168(auVar12 * auVar28, 8);
               puVar1 = (uint*)( lVar43 + lVar47 * 4 );
               iVar46 = SUB164(auVar12 * auVar28, 8);
               uVar41 = uVar51;
               uVar53 = *puVar1;
            }
;
            ;;
            *(undefined8*)( (long)__s_00 + lVar47 * 8 ) = uVar41;
            *puVar1 = uVar38;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar40 = uVar40 + 1;
      }
 while ( uVar39 != uVar40 );
      Memory::free_static(pvVar44, false);
      Memory::free_static(pvVar3, false);
   }

}
 else {
   iVar46 = *(int*)( this + 0x2c );
   if (iVar46 != 0) {
      lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar39 = StringName::get_empty_hash();
         lVar43 = *(long*)( this + 8 );
      }
 else {
         uVar39 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar39 == 0) {
         uVar39 = 1;
      }

      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar49;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar40;
      lVar47 = SUB168(auVar5 * auVar21, 8);
      uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar47 * 4 );
      uVar53 = SUB164(auVar5 * auVar21, 8);
      if (uVar52 != 0) {
         uVar54 = 0;
         do {
            if (( uVar39 == uVar52 ) && ( *(long*)( *(long*)( lVar43 + lVar47 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               puVar42 = *(undefined8**)( lVar43 + (ulong)uVar53 * 8 );
               goto LAB_0011506c;
            }

            uVar54 = uVar54 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ulong )(uVar53 + 1) * lVar49;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar40;
            lVar47 = SUB168(auVar6 * auVar22, 8);
            uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar47 * 4 );
            uVar53 = SUB164(auVar6 * auVar22, 8);
         }
 while ( ( uVar52 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar52 * lVar49,auVar23._8_8_ = 0,auVar23._0_8_ = uVar40,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar53 + uVar38 ) - SUB164(auVar7 * auVar23, 8)) * lVar49,auVar24._8_8_ = 0,auVar24._0_8_ = uVar40,uVar54 <= SUB164(auVar8 * auVar24, 8) );
      }

      uVar40 = ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar43 == 0) goto LAB_001155c8;
      LAB_00115478:iVar46 = *(int*)( this + 0x2c );
      goto LAB_0011547c;
   }

   LAB_001150a3:if ((float)uVar40 * __LC66 < (float)( iVar46 + 1 )) goto LAB_001150c9;
}
StringName::StringName((StringName*)&local_58, param_1);local_50 = 0;uStack_48 = 0;puVar42 = (undefined8*)operator_new(0x28, "");*puVar42 = 0;puVar42[1] = 0;StringName::StringName((StringName*)( puVar42 + 2 ), (StringName*)&local_58);bVar56 = StringName::configured != '\0';puVar42[3] = local_50;puVar42[4] = CONCAT44(uStack_44, uStack_48);if (( bVar56 ) && ( local_58 != 0 )) {
   StringName::unref();
}
puVar4 = *(undefined8**)( this + 0x20 );if (puVar4 == (undefined8*)0x0) {
   lVar43 = *(long*)param_1;
   *(undefined8**)( this + 0x18 ) = puVar42;
   *(undefined8**)( this + 0x20 ) = puVar42;
   if (lVar43 == 0) goto LAB_0011558d;
   LAB_00115360:uVar38 = *(uint*)( lVar43 + 0x20 );
}
 else {
   *puVar4 = puVar42;
   puVar42[1] = puVar4;
   lVar43 = *(long*)param_1;
   *(undefined8**)( this + 0x20 ) = puVar42;
   if (lVar43 != 0) goto LAB_00115360;
   LAB_0011558d:uVar38 = StringName::get_empty_hash();
}
if (uVar38 == 0) {
   uVar38 = 1;
}
uVar40 = (ulong)uVar38;lVar43 = *(long*)( this + 0x10 );uVar53 = 0;lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar45 = CONCAT44(0, uVar39);auVar13._8_8_ = 0;auVar13._0_8_ = uVar40 * lVar49;auVar29._8_8_ = 0;auVar29._0_8_ = uVar45;lVar48 = SUB168(auVar13 * auVar29, 8);lVar47 = *(long*)( this + 8 );puVar1 = (uint*)( lVar43 + lVar48 * 4 );iVar46 = SUB164(auVar13 * auVar29, 8);uVar52 = *puVar1;puVar4 = puVar42;while (uVar52 != 0) {
   auVar14._8_8_ = 0;
   auVar14._0_8_ = (ulong)uVar52 * lVar49;
   auVar30._8_8_ = 0;
   auVar30._0_8_ = uVar45;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(( uVar39 + iVar46 ) - SUB164(auVar14 * auVar30, 8)) * lVar49;
   auVar31._8_8_ = 0;
   auVar31._0_8_ = uVar45;
   uVar38 = SUB164(auVar15 * auVar31, 8);
   puVar55 = puVar4;
   if (uVar38 < uVar53) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar52;
      puVar2 = (undefined8*)( lVar47 + lVar48 * 8 );
      puVar55 = (undefined8*)*puVar2;
      *puVar2 = puVar4;
      uVar53 = uVar38;
   }

   uVar38 = (uint)uVar40;
   uVar53 = uVar53 + 1;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(iVar46 + 1) * lVar49;
   auVar32._8_8_ = 0;
   auVar32._0_8_ = uVar45;
   lVar48 = SUB168(auVar16 * auVar32, 8);
   puVar1 = (uint*)( lVar43 + lVar48 * 4 );
   iVar46 = SUB164(auVar16 * auVar32, 8);
   puVar4 = puVar55;
   uVar52 = *puVar1;
}
;;*(undefined8**)( lVar47 + lVar48 * 8 ) = puVar4;*puVar1 = uVar38;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0011506c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return puVar42 + 3;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* List<Pair<StringName, ShaderLanguage::ShaderNode::Varying>, DefaultAllocator>::~List() */void List<Pair<StringName,ShaderLanguage::ShaderNode::Varying>,DefaultAllocator>::~List(List<Pair<StringName,ShaderLanguage::ShaderNode::Varying>,DefaultAllocator> *this) {
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

      if ((long*)plVar1[7] == plVar4) {
         lVar3 = plVar1[5];
         lVar2 = plVar1[6];
         *plVar4 = lVar3;
         if (plVar1 == (long*)plVar4[1]) {
            plVar4[1] = lVar2;
         }

         if (lVar2 != 0) {
            *(long*)( lVar2 + 0x28 ) = lVar3;
            lVar3 = plVar1[5];
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x30 ) = lVar2;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, ShaderLanguage::ShaderNode::Varying, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::ShaderNode::Varying> > >::operator[](StringName const&) */undefined8 * __thiscallHashMap<StringName,ShaderLanguage::ShaderNode::Varying,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Varying>>>::operator [](HashMap<StringName,ShaderLanguage::ShaderNode::Varying,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Varying>>> * this, StringName * param_1) * puVar1 ;undefined8 * puVar2void * pvVar3void * __sundefined8 * puVar4undefined1auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16] * __s_00undefined8 * puVar42long * pvVar44ulong * puVar55long = *(long*)( this + 8 ) ;local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar40 = CONCAT44(0, uVar38);if (lVar43 == 0) {
   LAB_00115ea0:uVar45 = uVar40 * 4;
   uVar50 = uVar40 * 8;
   uVar41 = Memory::alloc_static(uVar45, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   pvVar44 = (void*)Memory::alloc_static(uVar50, false);
   *(void**)( this + 8 ) = pvVar44;
   if ((int)uVar40 != 0) {
      pvVar3 = *(void**)( this + 0x10 );
      if (( pvVar3 < (void*)( (long)pvVar44 + uVar50 ) ) && ( pvVar44 < (void*)( (long)pvVar3 + uVar45 ) )) {
         uVar45 = 0;
         do {
            *(undefined4*)( (long)pvVar3 + uVar45 * 4 ) = 0;
            *(undefined8*)( (long)pvVar44 + uVar45 * 8 ) = 0;
            uVar45 = uVar45 + 1;
         }
 while ( uVar40 != uVar45 );
         goto LAB_00115d38;
      }

      memset(pvVar3, 0, uVar45);
      memset(pvVar44, 0, uVar50);
      iVar46 = *(int*)( this + 0x2c );
      LAB_00115d3c:if (iVar46 != 0) {
         LAB_00115d44:uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         uVar45 = CONCAT44(0, uVar38);
         lVar43 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar39 = StringName::get_empty_hash();
         }
 else {
            uVar39 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         uVar51 = _LC131;
         uVar41 = __LC72;
         if (uVar39 == 0) {
            uVar39 = 1;
         }

         uVar54 = 0;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = (ulong)uVar39 * lVar43;
         auVar33._8_8_ = 0;
         auVar33._0_8_ = uVar45;
         lVar49 = SUB168(auVar17 * auVar33, 8);
         uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar49 * 4 );
         uVar53 = SUB164(auVar17 * auVar33, 8);
         if (uVar52 != 0) {
            do {
               if (( uVar39 == uVar52 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar49 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                  puVar42 = *(undefined8**)( *(long*)( this + 8 ) + (ulong)uVar53 * 8 );
                  *(undefined4*)( puVar42 + 5 ) = 0;
                  *(undefined4*)( (long)puVar42 + 0x2c ) = 0;
                  *(undefined4*)( puVar42 + 6 ) = 0;
                  puVar42[3] = uVar41;
                  puVar42[4] = uVar51;
                  goto LAB_00115904;
               }

               uVar54 = uVar54 + 1;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = ( ulong )(uVar53 + 1) * lVar43;
               auVar34._8_8_ = 0;
               auVar34._0_8_ = uVar45;
               lVar49 = SUB168(auVar18 * auVar34, 8);
               uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar49 * 4 );
               uVar53 = SUB164(auVar18 * auVar34, 8);
            }
 while ( ( uVar52 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar52 * lVar43,auVar35._8_8_ = 0,auVar35._0_8_ = uVar45,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( uVar38 + uVar53 ) - SUB164(auVar19 * auVar35, 8)) * lVar43,auVar36._8_8_ = 0,auVar36._0_8_ = uVar45,uVar54 <= SUB164(auVar20 * auVar36, 8) );
         }

         iVar46 = *(int*)( this + 0x2c );
      }

      goto LAB_0011593b;
   }

   iVar46 = *(int*)( this + 0x2c );
   if (pvVar44 == (void*)0x0) goto LAB_0011593b;
   if (iVar46 != 0) goto LAB_00115d44;
   LAB_00115961:uVar38 = *(uint*)( this + 0x28 );
   if (uVar38 == 0x1c) {
      puVar42 = (undefined8*)0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_00115904;
   }

   uVar40 = ( ulong )(uVar38 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar39 = *(uint*)( hash_table_size_primes + (ulong)uVar38 * 4 );
   if (uVar38 + 1 < 2) {
      uVar40 = 2;
   }

   uVar38 = *(uint*)( hash_table_size_primes + uVar40 * 4 );
   uVar50 = (ulong)uVar38;
   *(int*)( this + 0x28 ) = (int)uVar40;
   pvVar44 = *(void**)( this + 8 );
   uVar40 = uVar50 * 4;
   uVar45 = uVar50 * 8;
   pvVar3 = *(void**)( this + 0x10 );
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   __s_00 = (void*)Memory::alloc_static(uVar45, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar38 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar45 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar40 != uVar50 );
      }
 else {
         memset(__s, 0, uVar40);
         memset(__s_00, 0, uVar45);
      }

   }

   if (uVar39 != 0) {
      uVar40 = 0;
      do {
         uVar38 = *(uint*)( (long)pvVar3 + uVar40 * 4 );
         if (uVar38 != 0) {
            lVar43 = *(long*)( this + 0x10 );
            uVar54 = 0;
            uVar52 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar45 = CONCAT44(0, uVar52);
            lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar38 * lVar49;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar45;
            lVar47 = SUB168(auVar9 * auVar25, 8);
            puVar1 = (uint*)( lVar43 + lVar47 * 4 );
            iVar46 = SUB164(auVar9 * auVar25, 8);
            uVar53 = *puVar1;
            uVar41 = *(undefined8*)( (long)pvVar44 + uVar40 * 8 );
            while (uVar53 != 0) {
               auVar10._8_8_ = 0;
               auVar10._0_8_ = (ulong)uVar53 * lVar49;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar45;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = ( ulong )(( uVar52 + iVar46 ) - SUB164(auVar10 * auVar26, 8)) * lVar49;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar45;
               uVar37 = SUB164(auVar11 * auVar27, 8);
               uVar51 = uVar41;
               if (uVar37 < uVar54) {
                  *puVar1 = uVar38;
                  puVar42 = (undefined8*)( (long)__s_00 + lVar47 * 8 );
                  uVar51 = *puVar42;
                  *puVar42 = uVar41;
                  uVar38 = uVar53;
                  uVar54 = uVar37;
               }

               uVar54 = uVar54 + 1;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(iVar46 + 1) * lVar49;
               auVar28._8_8_ = 0;
               auVar28._0_8_ = uVar45;
               lVar47 = SUB168(auVar12 * auVar28, 8);
               puVar1 = (uint*)( lVar43 + lVar47 * 4 );
               iVar46 = SUB164(auVar12 * auVar28, 8);
               uVar41 = uVar51;
               uVar53 = *puVar1;
            }
;
            ;;
            *(undefined8*)( (long)__s_00 + lVar47 * 8 ) = uVar41;
            *puVar1 = uVar38;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar40 = uVar40 + 1;
      }
 while ( uVar39 != uVar40 );
      Memory::free_static(pvVar44, false);
      Memory::free_static(pvVar3, false);
   }

}
 else {
   iVar46 = *(int*)( this + 0x2c );
   if (iVar46 != 0) {
      lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar39 = StringName::get_empty_hash();
         lVar43 = *(long*)( this + 8 );
      }
 else {
         uVar39 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar39 == 0) {
         uVar39 = 1;
      }

      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar49;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar40;
      lVar47 = SUB168(auVar5 * auVar21, 8);
      uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar47 * 4 );
      uVar53 = SUB164(auVar5 * auVar21, 8);
      if (uVar52 != 0) {
         uVar54 = 0;
         do {
            if (( uVar39 == uVar52 ) && ( *(long*)( *(long*)( lVar43 + lVar47 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               puVar42 = *(undefined8**)( lVar43 + (ulong)uVar53 * 8 );
               goto LAB_00115904;
            }

            uVar54 = uVar54 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ulong )(uVar53 + 1) * lVar49;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar40;
            lVar47 = SUB168(auVar6 * auVar22, 8);
            uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar47 * 4 );
            uVar53 = SUB164(auVar6 * auVar22, 8);
         }
 while ( ( uVar52 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar52 * lVar49,auVar23._8_8_ = 0,auVar23._0_8_ = uVar40,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar53 + uVar38 ) - SUB164(auVar7 * auVar23, 8)) * lVar49,auVar24._8_8_ = 0,auVar24._0_8_ = uVar40,uVar54 <= SUB164(auVar8 * auVar24, 8) );
      }

      uVar40 = ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar43 == 0) goto LAB_00115ea0;
      LAB_00115d38:iVar46 = *(int*)( this + 0x2c );
      goto LAB_00115d3c;
   }

   LAB_0011593b:if ((float)uVar40 * __LC66 < (float)( iVar46 + 1 )) goto LAB_00115961;
}
StringName::StringName((StringName*)&local_68, param_1);local_50 = 0;local_60 = __LC72;uStack_58 = (undefined4)_LC131;uStack_54 = ( undefined4 )((ulong)_LC131 >> 0x20);local_4c = 0;local_48 = 0;puVar42 = (undefined8*)operator_new(0x38, "");*puVar42 = 0;puVar42[1] = 0;StringName::StringName((StringName*)( puVar42 + 2 ), (StringName*)&local_68);bVar56 = StringName::configured != '\0';puVar42[3] = local_60;puVar42[4] = CONCAT44(uStack_54, uStack_58);*(ulong*)( (long)puVar42 + 0x24 ) = CONCAT44(local_50, uStack_54);*(ulong*)( (long)puVar42 + 0x2c ) = CONCAT44(local_48, local_4c);if (( bVar56 ) && ( local_68 != 0 )) {
   StringName::unref();
}
puVar4 = *(undefined8**)( this + 0x20 );if (puVar4 == (undefined8*)0x0) {
   lVar43 = *(long*)param_1;
   *(undefined8**)( this + 0x18 ) = puVar42;
   *(undefined8**)( this + 0x20 ) = puVar42;
   if (lVar43 == 0) goto LAB_00115e65;
   LAB_00115c21:uVar38 = *(uint*)( lVar43 + 0x20 );
}
 else {
   *puVar4 = puVar42;
   puVar42[1] = puVar4;
   lVar43 = *(long*)param_1;
   *(undefined8**)( this + 0x20 ) = puVar42;
   if (lVar43 != 0) goto LAB_00115c21;
   LAB_00115e65:uVar38 = StringName::get_empty_hash();
}
if (uVar38 == 0) {
   uVar38 = 1;
}
uVar40 = (ulong)uVar38;lVar43 = *(long*)( this + 0x10 );uVar53 = 0;lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar45 = CONCAT44(0, uVar39);auVar13._8_8_ = 0;auVar13._0_8_ = uVar40 * lVar49;auVar29._8_8_ = 0;auVar29._0_8_ = uVar45;lVar48 = SUB168(auVar13 * auVar29, 8);lVar47 = *(long*)( this + 8 );puVar1 = (uint*)( lVar43 + lVar48 * 4 );iVar46 = SUB164(auVar13 * auVar29, 8);uVar52 = *puVar1;puVar4 = puVar42;while (uVar52 != 0) {
   auVar14._8_8_ = 0;
   auVar14._0_8_ = (ulong)uVar52 * lVar49;
   auVar30._8_8_ = 0;
   auVar30._0_8_ = uVar45;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(( uVar39 + iVar46 ) - SUB164(auVar14 * auVar30, 8)) * lVar49;
   auVar31._8_8_ = 0;
   auVar31._0_8_ = uVar45;
   uVar38 = SUB164(auVar15 * auVar31, 8);
   puVar55 = puVar4;
   if (uVar38 < uVar53) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar52;
      puVar2 = (undefined8*)( lVar47 + lVar48 * 8 );
      puVar55 = (undefined8*)*puVar2;
      *puVar2 = puVar4;
      uVar53 = uVar38;
   }

   uVar38 = (uint)uVar40;
   uVar53 = uVar53 + 1;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(iVar46 + 1) * lVar49;
   auVar32._8_8_ = 0;
   auVar32._0_8_ = uVar45;
   lVar48 = SUB168(auVar16 * auVar32, 8);
   puVar1 = (uint*)( lVar43 + lVar48 * 4 );
   iVar46 = SUB164(auVar16 * auVar32, 8);
   puVar4 = puVar55;
   uVar52 = *puVar1;
}
;;*(undefined8**)( lVar47 + lVar48 * 8 ) = puVar4;*puVar1 = uVar38;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_00115904:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return puVar42 + 3;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* HashMap<StringName, String, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, String> > >::~HashMap() */void HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::~HashMap(HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>> *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   void *pvVar5;
   pvVar5 = *(void**)( this + 8 );
   if (pvVar5 == (void*)0x0) {
      return;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (uVar2 == 0) {
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
      }
 else {
         lVar4 = 0;
         do {
            if (*(int*)( *(long*)( this + 0x10 ) + lVar4 ) != 0) {
               pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
               *(int*)( *(long*)( this + 0x10 ) + lVar4 ) = 0;
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
               pvVar5 = *(void**)( this + 8 );
               *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
            }

            lVar4 = lVar4 + 4;
         }
 while ( lVar4 != (ulong)uVar2 << 2 );
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
         if (pvVar5 == (void*)0x0) {
            return;
         }

      }

   }

   Memory::free_static(pvVar5, false);
   Memory::free_static(*(void**)( this + 0x10 ), false);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, ShaderCompiler::Stage, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderCompiler::Stage> > >::operator[](StringName const&) */undefined8 * __thiscallHashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>::operator [](HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>> * this, StringName * param_1) * puVar1 ;undefined8 * puVar2void * pvVar3void * __sundefined8 * puVar4undefined1auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16] * __s_00undefined8 * puVar42long * pvVar44ulong * puVar55long = *(long*)( this + 8 ) ;local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar40 = CONCAT44(0, uVar38);if (lVar43 == 0) {
   LAB_00116738:uVar45 = uVar40 * 4;
   uVar50 = uVar40 * 8;
   uVar41 = Memory::alloc_static(uVar45, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   pvVar44 = (void*)Memory::alloc_static(uVar50, false);
   *(void**)( this + 8 ) = pvVar44;
   if ((int)uVar40 != 0) {
      pvVar3 = *(void**)( this + 0x10 );
      if (( pvVar3 < (void*)( (long)pvVar44 + uVar50 ) ) && ( pvVar44 < (void*)( (long)pvVar3 + uVar45 ) )) {
         uVar45 = 0;
         do {
            *(undefined4*)( (long)pvVar3 + uVar45 * 4 ) = 0;
            *(undefined8*)( (long)pvVar44 + uVar45 * 8 ) = 0;
            uVar45 = uVar45 + 1;
         }
 while ( uVar40 != uVar45 );
         goto LAB_001165e8;
      }

      memset(pvVar3, 0, uVar45);
      memset(pvVar44, 0, uVar50);
      iVar46 = *(int*)( this + 0x2c );
      LAB_001165ec:if (iVar46 != 0) {
         LAB_001165f4:uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         uVar45 = CONCAT44(0, uVar38);
         lVar43 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar39 = StringName::get_empty_hash();
         }
 else {
            uVar39 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         if (uVar39 == 0) {
            uVar39 = 1;
         }

         uVar54 = 0;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = (ulong)uVar39 * lVar43;
         auVar33._8_8_ = 0;
         auVar33._0_8_ = uVar45;
         lVar49 = SUB168(auVar17 * auVar33, 8);
         uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar49 * 4 );
         uVar53 = SUB164(auVar17 * auVar33, 8);
         if (uVar52 != 0) {
            do {
               if (( uVar39 == uVar52 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar49 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                  puVar42 = *(undefined8**)( *(long*)( this + 8 ) + (ulong)uVar53 * 8 );
                  *(undefined4*)( puVar42 + 3 ) = 0;
                  goto LAB_001161ec;
               }

               uVar54 = uVar54 + 1;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = ( ulong )(uVar53 + 1) * lVar43;
               auVar34._8_8_ = 0;
               auVar34._0_8_ = uVar45;
               lVar49 = SUB168(auVar18 * auVar34, 8);
               uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar49 * 4 );
               uVar53 = SUB164(auVar18 * auVar34, 8);
            }
 while ( ( uVar52 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar52 * lVar43,auVar35._8_8_ = 0,auVar35._0_8_ = uVar45,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( uVar38 + uVar53 ) - SUB164(auVar19 * auVar35, 8)) * lVar43,auVar36._8_8_ = 0,auVar36._0_8_ = uVar45,uVar54 <= SUB164(auVar20 * auVar36, 8) );
         }

         iVar46 = *(int*)( this + 0x2c );
      }

      goto LAB_00116223;
   }

   iVar46 = *(int*)( this + 0x2c );
   if (pvVar44 == (void*)0x0) goto LAB_00116223;
   if (iVar46 != 0) goto LAB_001165f4;
   LAB_00116249:uVar38 = *(uint*)( this + 0x28 );
   if (uVar38 == 0x1c) {
      puVar42 = (undefined8*)0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_001161ec;
   }

   uVar40 = ( ulong )(uVar38 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar39 = *(uint*)( hash_table_size_primes + (ulong)uVar38 * 4 );
   if (uVar38 + 1 < 2) {
      uVar40 = 2;
   }

   uVar38 = *(uint*)( hash_table_size_primes + uVar40 * 4 );
   uVar50 = (ulong)uVar38;
   *(int*)( this + 0x28 ) = (int)uVar40;
   pvVar44 = *(void**)( this + 8 );
   uVar40 = uVar50 * 4;
   uVar45 = uVar50 * 8;
   pvVar3 = *(void**)( this + 0x10 );
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   __s_00 = (void*)Memory::alloc_static(uVar45, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar38 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar45 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar40 != uVar50 );
      }
 else {
         memset(__s, 0, uVar40);
         memset(__s_00, 0, uVar45);
      }

   }

   if (uVar39 != 0) {
      uVar40 = 0;
      do {
         uVar38 = *(uint*)( (long)pvVar3 + uVar40 * 4 );
         if (uVar38 != 0) {
            lVar43 = *(long*)( this + 0x10 );
            uVar54 = 0;
            uVar52 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar45 = CONCAT44(0, uVar52);
            lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar38 * lVar49;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar45;
            lVar47 = SUB168(auVar9 * auVar25, 8);
            puVar1 = (uint*)( lVar43 + lVar47 * 4 );
            iVar46 = SUB164(auVar9 * auVar25, 8);
            uVar53 = *puVar1;
            uVar41 = *(undefined8*)( (long)pvVar44 + uVar40 * 8 );
            while (uVar53 != 0) {
               auVar10._8_8_ = 0;
               auVar10._0_8_ = (ulong)uVar53 * lVar49;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar45;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = ( ulong )(( uVar52 + iVar46 ) - SUB164(auVar10 * auVar26, 8)) * lVar49;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar45;
               uVar37 = SUB164(auVar11 * auVar27, 8);
               uVar51 = uVar41;
               if (uVar37 < uVar54) {
                  *puVar1 = uVar38;
                  puVar42 = (undefined8*)( (long)__s_00 + lVar47 * 8 );
                  uVar51 = *puVar42;
                  *puVar42 = uVar41;
                  uVar38 = uVar53;
                  uVar54 = uVar37;
               }

               uVar54 = uVar54 + 1;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(iVar46 + 1) * lVar49;
               auVar28._8_8_ = 0;
               auVar28._0_8_ = uVar45;
               lVar47 = SUB168(auVar12 * auVar28, 8);
               puVar1 = (uint*)( lVar43 + lVar47 * 4 );
               iVar46 = SUB164(auVar12 * auVar28, 8);
               uVar41 = uVar51;
               uVar53 = *puVar1;
            }
;
            ;;
            *(undefined8*)( (long)__s_00 + lVar47 * 8 ) = uVar41;
            *puVar1 = uVar38;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar40 = uVar40 + 1;
      }
 while ( uVar39 != uVar40 );
      Memory::free_static(pvVar44, false);
      Memory::free_static(pvVar3, false);
   }

}
 else {
   iVar46 = *(int*)( this + 0x2c );
   if (iVar46 != 0) {
      lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar39 = StringName::get_empty_hash();
         lVar43 = *(long*)( this + 8 );
      }
 else {
         uVar39 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar39 == 0) {
         uVar39 = 1;
      }

      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar49;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar40;
      lVar47 = SUB168(auVar5 * auVar21, 8);
      uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar47 * 4 );
      uVar53 = SUB164(auVar5 * auVar21, 8);
      if (uVar52 != 0) {
         uVar54 = 0;
         do {
            if (( uVar39 == uVar52 ) && ( *(long*)( *(long*)( lVar43 + lVar47 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               puVar42 = *(undefined8**)( lVar43 + (ulong)uVar53 * 8 );
               goto LAB_001161ec;
            }

            uVar54 = uVar54 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ulong )(uVar53 + 1) * lVar49;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar40;
            lVar47 = SUB168(auVar6 * auVar22, 8);
            uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar47 * 4 );
            uVar53 = SUB164(auVar6 * auVar22, 8);
         }
 while ( ( uVar52 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar52 * lVar49,auVar23._8_8_ = 0,auVar23._0_8_ = uVar40,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar53 + uVar38 ) - SUB164(auVar7 * auVar23, 8)) * lVar49,auVar24._8_8_ = 0,auVar24._0_8_ = uVar40,uVar54 <= SUB164(auVar8 * auVar24, 8) );
      }

      uVar40 = ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar43 == 0) goto LAB_00116738;
      LAB_001165e8:iVar46 = *(int*)( this + 0x2c );
      goto LAB_001165ec;
   }

   LAB_00116223:if ((float)uVar40 * __LC66 < (float)( iVar46 + 1 )) goto LAB_00116249;
}
StringName::StringName((StringName*)&local_58, param_1);local_50 = 0;puVar42 = (undefined8*)operator_new(0x20, "");*puVar42 = 0;puVar42[1] = 0;StringName::StringName((StringName*)( puVar42 + 2 ), (StringName*)&local_58);bVar56 = StringName::configured != '\0';*(undefined4*)( puVar42 + 3 ) = local_50;if (( bVar56 ) && ( local_58 != 0 )) {
   StringName::unref();
}
puVar4 = *(undefined8**)( this + 0x20 );if (puVar4 == (undefined8*)0x0) {
   lVar43 = *(long*)param_1;
   *(undefined8**)( this + 0x18 ) = puVar42;
   *(undefined8**)( this + 0x20 ) = puVar42;
   if (lVar43 == 0) goto LAB_001166fd;
   LAB_001164d4:uVar38 = *(uint*)( lVar43 + 0x20 );
}
 else {
   *puVar4 = puVar42;
   puVar42[1] = puVar4;
   lVar43 = *(long*)param_1;
   *(undefined8**)( this + 0x20 ) = puVar42;
   if (lVar43 != 0) goto LAB_001164d4;
   LAB_001166fd:uVar38 = StringName::get_empty_hash();
}
if (uVar38 == 0) {
   uVar38 = 1;
}
uVar40 = (ulong)uVar38;lVar43 = *(long*)( this + 0x10 );uVar53 = 0;lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar45 = CONCAT44(0, uVar39);auVar13._8_8_ = 0;auVar13._0_8_ = uVar40 * lVar49;auVar29._8_8_ = 0;auVar29._0_8_ = uVar45;lVar48 = SUB168(auVar13 * auVar29, 8);lVar47 = *(long*)( this + 8 );puVar1 = (uint*)( lVar43 + lVar48 * 4 );iVar46 = SUB164(auVar13 * auVar29, 8);uVar52 = *puVar1;puVar4 = puVar42;while (uVar52 != 0) {
   auVar14._8_8_ = 0;
   auVar14._0_8_ = (ulong)uVar52 * lVar49;
   auVar30._8_8_ = 0;
   auVar30._0_8_ = uVar45;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(( uVar39 + iVar46 ) - SUB164(auVar14 * auVar30, 8)) * lVar49;
   auVar31._8_8_ = 0;
   auVar31._0_8_ = uVar45;
   uVar38 = SUB164(auVar15 * auVar31, 8);
   puVar55 = puVar4;
   if (uVar38 < uVar53) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar52;
      puVar2 = (undefined8*)( lVar47 + lVar48 * 8 );
      puVar55 = (undefined8*)*puVar2;
      *puVar2 = puVar4;
      uVar53 = uVar38;
   }

   uVar38 = (uint)uVar40;
   uVar53 = uVar53 + 1;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(iVar46 + 1) * lVar49;
   auVar32._8_8_ = 0;
   auVar32._0_8_ = uVar45;
   lVar48 = SUB168(auVar16 * auVar32, 8);
   puVar1 = (uint*)( lVar43 + lVar48 * 4 );
   iVar46 = SUB164(auVar16 * auVar32, 8);
   puVar4 = puVar55;
   uVar52 = *puVar1;
}
;;*(undefined8**)( lVar47 + lVar48 * 8 ) = puVar4;*puVar1 = uVar38;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_001161ec:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return puVar42 + 3;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::operator[](String const&) */undefined1 * __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::operator[](HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
             *this,String *param_1){
   long *plVar1;
   void *pvVar2;
   void *__s;
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
   char cVar35;
   uint uVar36;
   uint uVar37;
   ulong uVar38;
   undefined8 uVar39;
   void *__s_00;
   undefined8 *puVar40;
   void *pvVar41;
   int iVar42;
   long lVar43;
   long lVar44;
   ulong uVar45;
   uint *puVar46;
   undefined8 uVar47;
   long lVar48;
   uint uVar49;
   uint uVar50;
   ulong uVar51;
   long lVar52;
   long lVar53;
   uint uVar54;
   uint uVar55;
   undefined1(*pauVar56)[16];
   undefined1(*pauVar57)[16];
   long in_FS_OFFSET;
   undefined1(*local_a0)[16];
   long local_70;
   undefined1 local_68[16];
   long local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   if (*(long*)( this + 8 ) == 0) {
      LAB_00116f04:local_70 = 0;
      uVar45 = (ulong)uVar55;
      uVar38 = uVar45 * 4;
      uVar51 = uVar45 * 8;
      uVar39 = Memory::alloc_static(uVar38, false);
      *(undefined8*)( this + 0x10 ) = uVar39;
      pvVar41 = (void*)Memory::alloc_static(uVar51, false);
      *(void**)( this + 8 ) = pvVar41;
      if (uVar55 != 0) {
         pvVar2 = *(void**)( this + 0x10 );
         if (( pvVar2 < (void*)( (long)pvVar41 + uVar51 ) ) && ( pvVar41 < (void*)( (long)pvVar2 + uVar38 ) )) {
            uVar38 = 0;
            do {
               *(undefined4*)( (long)pvVar2 + uVar38 * 4 ) = 0;
               *(undefined8*)( (long)pvVar41 + uVar38 * 8 ) = 0;
               uVar38 = uVar38 + 1;
            }
 while ( uVar45 != uVar38 );
         }
 else {
            memset(pvVar2, 0, uVar38);
            memset(pvVar41, 0, uVar51);
         }

         LAB_00116de4:iVar42 = *(int*)( this + 0x2c );
         if (iVar42 != 0) {
            LAB_00116df0:uVar36 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            lVar48 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            uVar50 = String::hash();
            uVar38 = CONCAT44(0, uVar36);
            lVar53 = *(long*)( this + 0x10 );
            uVar37 = 1;
            if (uVar50 != 0) {
               uVar37 = uVar50;
            }

            uVar54 = 0;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)uVar37 * lVar48;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar38;
            lVar43 = SUB168(auVar15 * auVar31, 8);
            uVar50 = *(uint*)( lVar53 + lVar43 * 4 );
            uVar49 = SUB164(auVar15 * auVar31, 8);
            if (uVar50 != 0) {
               do {
                  if (uVar50 == uVar37) {
                     cVar35 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar43 * 8 ) + 0x10 ), param_1);
                     if (cVar35 != '\0') {
                        local_a0 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar49 * 8 );
                        if (*(long*)( local_a0[1] + 8 ) != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)( local_a0[1] + 8 ), (CowData*)&local_70);
                           local_a0 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar49 * 8 );
                        }

                        goto LAB_00116cb0;
                     }

                     lVar53 = *(long*)( this + 0x10 );
                  }

                  uVar54 = uVar54 + 1;
                  auVar16._8_8_ = 0;
                  auVar16._0_8_ = ( ulong )(uVar49 + 1) * lVar48;
                  auVar32._8_8_ = 0;
                  auVar32._0_8_ = uVar38;
                  lVar43 = SUB168(auVar16 * auVar32, 8);
                  uVar50 = *(uint*)( lVar53 + lVar43 * 4 );
                  uVar49 = SUB164(auVar16 * auVar32, 8);
               }
 while ( ( uVar50 != 0 ) && ( auVar17._8_8_ = 0 ),auVar17._0_8_ = (ulong)uVar50 * lVar48,auVar33._8_8_ = 0,auVar33._0_8_ = uVar38,auVar18._8_8_ = 0,auVar18._0_8_ = ( ulong )(( uVar36 + uVar49 ) - SUB164(auVar17 * auVar33, 8)) * lVar48,auVar34._8_8_ = 0,auVar34._0_8_ = uVar38,uVar54 <= SUB164(auVar18 * auVar34, 8) );
            }

            iVar42 = *(int*)( this + 0x2c );
         }

         uVar45 = (ulong)uVar55;
         goto LAB_001168b0;
      }

      iVar42 = *(int*)( this + 0x2c );
      if (pvVar41 == (void*)0x0) goto LAB_001168b0;
      if (*(int*)( this + 0x2c ) != 0) goto LAB_00116df0;
      LAB_001168d6:uVar55 = *(uint*)( this + 0x28 );
      if (uVar55 == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         local_a0 = (undefined1(*) [16])0x0;
         goto LAB_00116cb0;
      }

      uVar38 = ( ulong )(uVar55 + 1);
      *(undefined4*)( this + 0x2c ) = 0;
      uVar36 = *(uint*)( hash_table_size_primes + (ulong)uVar55 * 4 );
      if (uVar55 + 1 < 2) {
         uVar38 = 2;
      }

      uVar55 = *(uint*)( hash_table_size_primes + uVar38 * 4 );
      uVar45 = (ulong)uVar55;
      *(int*)( this + 0x28 ) = (int)uVar38;
      pvVar41 = *(void**)( this + 8 );
      uVar38 = uVar45 * 4;
      uVar51 = uVar45 * 8;
      pvVar2 = *(void**)( this + 0x10 );
      uVar39 = Memory::alloc_static(uVar38, false);
      *(undefined8*)( this + 0x10 ) = uVar39;
      __s_00 = (void*)Memory::alloc_static(uVar51, false);
      *(void**)( this + 8 ) = __s_00;
      if (uVar55 != 0) {
         __s = *(void**)( this + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar51 ) ) && ( __s_00 < (void*)( (long)__s + uVar38 ) )) {
            uVar38 = 0;
            do {
               *(undefined4*)( (long)__s + uVar38 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar38 * 8 ) = 0;
               uVar38 = uVar38 + 1;
            }
 while ( uVar38 != uVar45 );
         }
 else {
            memset(__s, 0, uVar38);
            memset(__s_00, 0, uVar51);
         }

      }

      if (uVar36 != 0) {
         uVar38 = 0;
         do {
            uVar55 = *(uint*)( (long)pvVar2 + uVar38 * 4 );
            if (uVar55 != 0) {
               lVar48 = *(long*)( this + 0x10 );
               uVar49 = 0;
               uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
               uVar51 = CONCAT44(0, uVar37);
               lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               auVar3._8_8_ = 0;
               auVar3._0_8_ = (ulong)uVar55 * lVar53;
               auVar19._8_8_ = 0;
               auVar19._0_8_ = uVar51;
               lVar43 = SUB168(auVar3 * auVar19, 8);
               puVar46 = (uint*)( lVar48 + lVar43 * 4 );
               iVar42 = SUB164(auVar3 * auVar19, 8);
               uVar50 = *puVar46;
               uVar39 = *(undefined8*)( (long)pvVar41 + uVar38 * 8 );
               while (uVar50 != 0) {
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = (ulong)uVar50 * lVar53;
                  auVar20._8_8_ = 0;
                  auVar20._0_8_ = uVar51;
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = ( ulong )(( iVar42 + uVar37 ) - SUB164(auVar4 * auVar20, 8)) * lVar53;
                  auVar21._8_8_ = 0;
                  auVar21._0_8_ = uVar51;
                  uVar54 = SUB164(auVar5 * auVar21, 8);
                  uVar47 = uVar39;
                  if (uVar54 < uVar49) {
                     *puVar46 = uVar55;
                     puVar40 = (undefined8*)( (long)__s_00 + lVar43 * 8 );
                     uVar47 = *puVar40;
                     *puVar40 = uVar39;
                     uVar55 = uVar50;
                     uVar49 = uVar54;
                  }

                  uVar49 = uVar49 + 1;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = ( ulong )(iVar42 + 1) * lVar53;
                  auVar22._8_8_ = 0;
                  auVar22._0_8_ = uVar51;
                  lVar43 = SUB168(auVar6 * auVar22, 8);
                  puVar46 = (uint*)( lVar48 + lVar43 * 4 );
                  iVar42 = SUB164(auVar6 * auVar22, 8);
                  uVar39 = uVar47;
                  uVar50 = *puVar46;
               }
;
               ;;
               *(undefined8*)( (long)__s_00 + lVar43 * 8 ) = uVar39;
               *puVar46 = uVar55;
               *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
            }

            uVar38 = uVar38 + 1;
         }
 while ( uVar36 != uVar38 );
         Memory::free_static(pvVar41, false);
         Memory::free_static(pvVar2, false);
      }

   }
 else {
      if (*(int*)( this + 0x2c ) != 0) {
         uVar38 = CONCAT44(0, uVar55);
         lVar48 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         uVar37 = String::hash();
         lVar53 = *(long*)( this + 0x10 );
         uVar36 = 1;
         if (uVar37 != 0) {
            uVar36 = uVar37;
         }

         auVar11._8_8_ = 0;
         auVar11._0_8_ = (ulong)uVar36 * lVar48;
         auVar27._8_8_ = 0;
         auVar27._0_8_ = uVar38;
         lVar43 = SUB168(auVar11 * auVar27, 8);
         uVar37 = *(uint*)( lVar53 + lVar43 * 4 );
         uVar50 = SUB164(auVar11 * auVar27, 8);
         if (uVar37 == 0) {
            lVar52 = *(long*)( this + 8 );
         }
 else {
            lVar52 = *(long*)( this + 8 );
            uVar49 = 0;
            do {
               if (uVar36 == uVar37) {
                  cVar35 = String::operator ==((String*)( *(long*)( lVar52 + lVar43 * 8 ) + 0x10 ), param_1);
                  if (cVar35 != '\0') {
                     local_a0 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar50 * 8 );
                     goto LAB_00116cb0;
                  }

                  lVar53 = *(long*)( this + 0x10 );
                  lVar52 = *(long*)( this + 8 );
               }

               uVar49 = uVar49 + 1;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(uVar50 + 1) * lVar48;
               auVar28._8_8_ = 0;
               auVar28._0_8_ = uVar38;
               lVar43 = SUB168(auVar12 * auVar28, 8);
               uVar37 = *(uint*)( lVar53 + lVar43 * 4 );
               uVar50 = SUB164(auVar12 * auVar28, 8);
            }
 while ( ( uVar37 != 0 ) && ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar37 * lVar48,auVar29._8_8_ = 0,auVar29._0_8_ = uVar38,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar50 + uVar55 ) - SUB164(auVar13 * auVar29, 8)) * lVar48,auVar30._8_8_ = 0,auVar30._0_8_ = uVar38,uVar49 <= SUB164(auVar14 * auVar30, 8) );
         }

         local_70 = 0;
         uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         if (lVar52 == 0) goto LAB_00116f04;
         goto LAB_00116de4;
      }

      local_70 = 0;
      uVar45 = (ulong)uVar55;
      iVar42 = 0;
      LAB_001168b0:if ((float)uVar45 * __LC66 < (float)( iVar42 + 1 )) goto LAB_001168d6;
   }

   local_58[0] = 0;
   local_68 = (undefined1[16])0x0;
   if (*(long*)param_1 == 0) {
      local_a0 = (undefined1(*) [16])operator_new(0x20, "");
      *(undefined8*)local_a0[1] = 0;
      *local_a0 = (undefined1[16])0x0;
      LAB_00116fb5:lVar48 = 0;
      *(undefined8*)( local_a0[1] + 8 ) = 0;
      puVar40 = *(undefined8**)( this + 0x20 );
      if (puVar40 != (undefined8*)0x0) goto LAB_00116b7a;
      LAB_00116fd1:*(undefined1(**) [16])( this + 0x18 ) = local_a0;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_58, (CowData*)param_1);
      lVar48 = local_58[0];
      uVar39 = local_68._0_8_;
      uVar47 = local_68._8_8_;
      local_58[1] = 0;
      local_a0 = (undefined1(*) [16])operator_new(0x20, "");
      *(undefined8*)local_a0[1] = 0;
      *(undefined8*)*local_a0 = uVar39;
      *(undefined8*)( *local_a0 + 8 ) = uVar47;
      if (lVar48 == 0) goto LAB_00116fb5;
      CowData<char32_t>::_ref((CowData<char32_t>*)( local_a0 + 1 ), (CowData*)local_58);
      *(undefined8*)( local_a0[1] + 8 ) = 0;
      LOCK();
      plVar1 = (long*)( lVar48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_58[0] + -0x10 ), false);
      }

      puVar40 = *(undefined8**)( this + 0x20 );
      lVar48 = local_70;
      if (puVar40 == (undefined8*)0x0) goto LAB_00116fd1;
      LAB_00116b7a:*puVar40 = local_a0;
      *(undefined8**)( *local_a0 + 8 ) = puVar40;
   }

   *(undefined1(**) [16])( this + 0x20 ) = local_a0;
   uVar36 = String::hash();
   lVar53 = *(long*)( this + 0x10 );
   uVar55 = 1;
   if (uVar36 != 0) {
      uVar55 = uVar36;
   }

   uVar36 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   uVar38 = CONCAT44(0, uVar36);
   lVar43 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   auVar7._8_8_ = 0;
   auVar7._0_8_ = (ulong)uVar55 * lVar43;
   auVar23._8_8_ = 0;
   auVar23._0_8_ = uVar38;
   lVar44 = SUB168(auVar7 * auVar23, 8);
   lVar52 = *(long*)( this + 8 );
   puVar46 = (uint*)( lVar53 + lVar44 * 4 );
   iVar42 = SUB164(auVar7 * auVar23, 8);
   uVar37 = *puVar46;
   pauVar57 = local_a0;
   if (uVar37 != 0) {
      uVar50 = 0;
      pauVar56 = local_a0;
      do {
         auVar8._8_8_ = 0;
         auVar8._0_8_ = (ulong)uVar37 * lVar43;
         auVar24._8_8_ = 0;
         auVar24._0_8_ = uVar38;
         auVar9._8_8_ = 0;
         auVar9._0_8_ = ( ulong )(( uVar36 + iVar42 ) - SUB164(auVar8 * auVar24, 8)) * lVar43;
         auVar25._8_8_ = 0;
         auVar25._0_8_ = uVar38;
         uVar49 = SUB164(auVar9 * auVar25, 8);
         pauVar57 = pauVar56;
         if (uVar49 < uVar50) {
            *puVar46 = uVar55;
            puVar40 = (undefined8*)( lVar52 + lVar44 * 8 );
            pauVar57 = (undefined1(*) [16])*puVar40;
            *puVar40 = pauVar56;
            uVar50 = uVar49;
            uVar55 = uVar37;
         }

         uVar50 = uVar50 + 1;
         auVar10._8_8_ = 0;
         auVar10._0_8_ = ( ulong )(iVar42 + 1) * lVar43;
         auVar26._8_8_ = 0;
         auVar26._0_8_ = uVar38;
         lVar44 = SUB168(auVar10 * auVar26, 8);
         puVar46 = (uint*)( lVar53 + lVar44 * 4 );
         iVar42 = SUB164(auVar10 * auVar26, 8);
         uVar37 = *puVar46;
         pauVar56 = pauVar57;
      }
 while ( uVar37 != 0 );
   }

   *(undefined1(**) [16])( lVar52 + lVar44 * 8 ) = pauVar57;
   *puVar46 = uVar55;
   *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
   if (lVar48 != 0) {
      LOCK();
      plVar1 = (long*)( lVar48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_70 + -0x10 ), false);
      }

   }

   LAB_00116cb0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_a0[1] + 8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HashMap<StringName, ShaderLanguage::ShaderNode::Uniform, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::ShaderNode::Uniform> > >::operator[](StringName const&) const */long HashMap<StringName,ShaderLanguage::ShaderNode::Uniform,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Uniform>>>::operator [](HashMap<StringName,ShaderLanguage::ShaderNode::Uniform,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Uniform>>> *this, StringName *param_1) {
   uint uVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   code *pcVar11;
   uint uVar12;
   uint uVar13;
   long lVar14;
   uint uVar15;
   uint uVar16;
   ulong uVar17;
   if (( *(long*)( this + 8 ) != 0 ) && ( *(int*)( this + 0x2c ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar17 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar12 = StringName::get_empty_hash();
      }
 else {
         uVar12 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar12 == 0) {
         uVar12 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar12 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar17;
      lVar14 = SUB168(auVar3 * auVar7, 8);
      uVar15 = *(uint*)( *(long*)( this + 0x10 ) + lVar14 * 4 );
      uVar13 = SUB164(auVar3 * auVar7, 8);
      if (uVar15 != 0) {
         uVar16 = 0;
         do {
            if (( uVar12 == uVar15 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar14 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               return *(long*)( *(long*)( this + 8 ) + (ulong)uVar13 * 8 ) + 0x18;
            }

            uVar16 = uVar16 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar13 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar17;
            lVar14 = SUB168(auVar4 * auVar8, 8);
            uVar15 = *(uint*)( *(long*)( this + 0x10 ) + lVar14 * 4 );
            uVar13 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar15 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar15 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar17,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar13 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar17,uVar16 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   _err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar11 = (code*)invalidInstructionException();
   ( *pcVar11 )();
}
/* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::TEMPNAMEPLACEHOLDERVALUE(HashSet<String, HashMapHasherDefault,
   HashMapComparatorDefault<String> > const&) */void HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::operator =(HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>> *this, HashSet *param_1) {
   long *plVar1;
   long *plVar2;
   ulong uVar3;
   uint uVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   undefined8 uVar8;
   ulong uVar9;
   long lVar10;
   CowData *pCVar11;
   CowData<char32_t> *this_00;
   void *pvVar12;
   if (this == (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>*)param_1) {
      return;
   }

   pvVar12 = *(void**)this;
   if (pvVar12 == (void*)0x0) goto LAB_001172a5;
   if (*(int*)( this + 0x24 ) != 0) {
      if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 ) != 0) {
         memset(*(void**)( this + 0x18 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 ) << 2);
         if (*(int*)( this + 0x24 ) == 0) goto LAB_001173b0;
      }

      lVar10 = 0;
      do {
         plVar2 = (long*)( (long)pvVar12 + lVar10 * 8 );
         if (*plVar2 != 0) {
            LOCK();
            plVar1 = (long*)( *plVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar5 = *plVar2;
               *plVar2 = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }

            pvVar12 = *(void**)this;
         }

         lVar10 = lVar10 + 1;
      }
 while ( (uint)lVar10 < *(uint*)( this + 0x24 ) );
      *(undefined4*)( this + 0x24 ) = 0;
      if (pvVar12 == (void*)0x0) goto LAB_001172a5;
   }

   LAB_001173b0:Memory::free_static(pvVar12, false);
   Memory::free_static(*(void**)( this + 0x10 ), false);
   Memory::free_static(*(void**)( this + 8 ), false);
   Memory::free_static(*(void**)( this + 0x18 ), false);
   *(undefined1(*) [16])this = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
   LAB_001172a5:uVar3 = *(ulong*)( param_1 + 0x20 );
   *(ulong*)( this + 0x20 ) = uVar3;
   if ((int)( uVar3 >> 0x20 ) != 0) {
      uVar4 = *(uint*)( hash_table_size_primes + ( uVar3 & 0xffffffff ) * 4 );
      uVar3 = (ulong)uVar4 * 4;
      uVar8 = Memory::alloc_static(uVar3, false);
      lVar10 = 0;
      *(undefined8*)( this + 0x18 ) = uVar8;
      uVar8 = Memory::alloc_static((ulong)uVar4 * 8, false);
      *(undefined8*)this = uVar8;
      uVar8 = Memory::alloc_static(uVar3, false);
      *(undefined8*)( this + 0x10 ) = uVar8;
      uVar8 = Memory::alloc_static(uVar3, false);
      *(undefined8*)( this + 8 ) = uVar8;
      if (*(int*)( this + 0x24 ) != 0) {
         do {
            this_00 = (CowData<char32_t>*)( *(long*)this + lVar10 * 8 );
            pCVar11 = (CowData*)( lVar10 * 8 + *(long*)param_1 );
            *(undefined8*)this_00 = 0;
            if (*(long*)pCVar11 != 0) {
               CowData<char32_t>::_ref(this_00, pCVar11);
            }

            *(undefined4*)( *(long*)( this + 0x10 ) + lVar10 * 4 ) = *(undefined4*)( *(long*)( param_1 + 0x10 ) + lVar10 * 4 );
            lVar10 = lVar10 + 1;
         }
 while ( (uint)lVar10 < *(uint*)( this + 0x24 ) );
      }

      if (uVar4 != 0) {
         lVar10 = *(long*)( param_1 + 0x18 );
         lVar5 = *(long*)( this + 0x18 );
         uVar9 = 0;
         lVar6 = *(long*)( param_1 + 8 );
         lVar7 = *(long*)( this + 8 );
         do {
            *(undefined4*)( lVar5 + uVar9 ) = *(undefined4*)( lVar10 + uVar9 );
            *(undefined4*)( lVar7 + uVar9 ) = *(undefined4*)( lVar6 + uVar9 );
            uVar9 = uVar9 + 4;
         }
 while ( uVar9 != uVar3 );
         return;
      }

   }

   return;
}
/* WARNING: Removing unreachable block (ram,0x001175c0) *//* WARNING: Removing unreachable block (ram,0x001176f0) *//* WARNING: Removing unreachable block (ram,0x00117869) *//* WARNING: Removing unreachable block (ram,0x001176fc) *//* WARNING: Removing unreachable block (ram,0x00117706) *//* WARNING: Removing unreachable block (ram,0x0011784b) *//* WARNING: Removing unreachable block (ram,0x00117712) *//* WARNING: Removing unreachable block (ram,0x0011771c) *//* WARNING: Removing unreachable block (ram,0x0011782d) *//* WARNING: Removing unreachable block (ram,0x00117728) *//* WARNING: Removing unreachable block (ram,0x00117732) *//* WARNING: Removing unreachable block (ram,0x0011780f) *//* WARNING: Removing unreachable block (ram,0x0011773e) *//* WARNING: Removing unreachable block (ram,0x00117748) *//* WARNING: Removing unreachable block (ram,0x001177f1) *//* WARNING: Removing unreachable block (ram,0x00117754) *//* WARNING: Removing unreachable block (ram,0x0011775e) *//* WARNING: Removing unreachable block (ram,0x001177d3) *//* WARNING: Removing unreachable block (ram,0x00117766) *//* WARNING: Removing unreachable block (ram,0x00117770) *//* WARNING: Removing unreachable block (ram,0x001177b8) *//* WARNING: Removing unreachable block (ram,0x00117778) *//* WARNING: Removing unreachable block (ram,0x0011778e) *//* WARNING: Removing unreachable block (ram,0x0011779a) *//* String vformat<int, String>(String const&, int const, String const) */undefined8 *vformat<int,String>(undefined8 *param_1, bool *param_2, int param_3, String *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
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
   Variant::Variant(local_88, param_3);
   Variant::Variant(local_70, param_4);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, param_2);
   *param_1 = local_d0[0];
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
/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_lookup_pos(StringName const&, unsigned int&) const */undefined8 HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_lookup_pos(HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this, StringName *param_1, uint *param_2) {
   uint uVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   uint uVar11;
   int iVar12;
   long lVar13;
   ulong uVar14;
   uint uVar15;
   uint uVar16;
   if (*(long*)this == 0) {
      return 0;
   }

   if (*(int*)( this + 0x24 ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x20 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar11 = StringName::get_empty_hash();
      }
 else {
         uVar11 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      uVar14 = CONCAT44(0, uVar1);
      if (uVar11 == 0) {
         uVar11 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar14;
      lVar13 = SUB168(auVar3 * auVar7, 8);
      uVar16 = *(uint*)( *(long*)( this + 0x18 ) + lVar13 * 4 );
      iVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar16 != 0) {
         uVar15 = 0;
         do {
            if (( uVar11 == uVar16 ) && ( uVar16 = *(uint*)( *(long*)( this + 8 ) + lVar13 * 4 ) * (long*)( *(long*)this + (ulong)uVar16 * 8 ) == *(long*)param_1 )) {
               *param_2 = uVar16;
               return 1;
            }

            uVar15 = uVar15 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar14;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar16 = *(uint*)( *(long*)( this + 0x18 ) + lVar13 * 4 );
            iVar12 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar16 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar16 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar14,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar14,uVar15 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
}
/* HashMap<StringName, String, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, String> > >::_lookup_pos(StringName const&,
   unsigned int&) const */undefined8 HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::_lookup_pos(HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>> *this, StringName *param_1, uint *param_2) {
   uint uVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   uint uVar11;
   uint uVar12;
   long lVar13;
   uint uVar14;
   ulong uVar15;
   uint uVar16;
   if (*(long*)( this + 8 ) == 0) {
      return 0;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar11 = StringName::get_empty_hash();
      }
 else {
         uVar11 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      uVar15 = CONCAT44(0, uVar1);
      if (uVar11 == 0) {
         uVar11 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      lVar13 = SUB168(auVar3 * auVar7, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
      uVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar14 != 0) {
         uVar16 = 0;
         do {
            if (( uVar11 == uVar14 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               *param_2 = uVar12;
               return 1;
            }

            uVar16 = uVar16 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar15;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
            uVar12 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar15,uVar16 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
}
/* HashMap<StringName, bool*, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, bool*> > >::_lookup_pos(StringName const&,
   unsigned int&) const */undefined8 HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::_lookup_pos(HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>> *this, StringName *param_1, uint *param_2) {
   uint uVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   uint uVar11;
   uint uVar12;
   long lVar13;
   uint uVar14;
   ulong uVar15;
   uint uVar16;
   if (*(long*)( this + 8 ) == 0) {
      return 0;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar11 = StringName::get_empty_hash();
      }
 else {
         uVar11 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      uVar15 = CONCAT44(0, uVar1);
      if (uVar11 == 0) {
         uVar11 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      lVar13 = SUB168(auVar3 * auVar7, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
      uVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar14 != 0) {
         uVar16 = 0;
         do {
            if (( uVar11 == uVar14 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               *param_2 = uVar12;
               return 1;
            }

            uVar16 = uVar16 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar15;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
            uVar12 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar15,uVar16 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
}
/* HashMap<StringName, ShaderLanguage::ShaderNode::Uniform, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::ShaderNode::Uniform> > >::_lookup_pos(StringName const&, unsigned int&) const */undefined8 HashMap<StringName,ShaderLanguage::ShaderNode::Uniform,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Uniform>>>::_lookup_pos(HashMap<StringName,ShaderLanguage::ShaderNode::Uniform,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Uniform>>> *this, StringName *param_1, uint *param_2) {
   uint uVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   uint uVar11;
   uint uVar12;
   long lVar13;
   uint uVar14;
   ulong uVar15;
   uint uVar16;
   if (*(long*)( this + 8 ) == 0) {
      return 0;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar11 = StringName::get_empty_hash();
      }
 else {
         uVar11 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      uVar15 = CONCAT44(0, uVar1);
      if (uVar11 == 0) {
         uVar11 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      lVar13 = SUB168(auVar3 * auVar7, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
      uVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar14 != 0) {
         uVar16 = 0;
         do {
            if (( uVar11 == uVar14 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               *param_2 = uVar12;
               return 1;
            }

            uVar16 = uVar16 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar15;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
            uVar12 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar15,uVar16 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
}
/* HashMap<StringName, ShaderLanguage::ShaderNode::Varying, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::ShaderNode::Varying> > >::_lookup_pos(StringName const&, unsigned int&) const */undefined8 HashMap<StringName,ShaderLanguage::ShaderNode::Varying,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Varying>>>::_lookup_pos(HashMap<StringName,ShaderLanguage::ShaderNode::Varying,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Varying>>> *this, StringName *param_1, uint *param_2) {
   uint uVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   uint uVar11;
   uint uVar12;
   long lVar13;
   uint uVar14;
   ulong uVar15;
   uint uVar16;
   if (*(long*)( this + 8 ) == 0) {
      return 0;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar11 = StringName::get_empty_hash();
      }
 else {
         uVar11 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      uVar15 = CONCAT44(0, uVar1);
      if (uVar11 == 0) {
         uVar11 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      lVar13 = SUB168(auVar3 * auVar7, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
      uVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar14 != 0) {
         uVar16 = 0;
         do {
            if (( uVar11 == uVar14 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               *param_2 = uVar12;
               return 1;
            }

            uVar16 = uVar16 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar15;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
            uVar12 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar15,uVar16 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
}
/* HashMap<StringName, ShaderCompiler::Stage, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderCompiler::Stage> > >::_lookup_pos(StringName const&, unsigned int&) const */undefined8 HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>::_lookup_pos(HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>> *this, StringName *param_1, uint *param_2) {
   uint uVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   uint uVar11;
   uint uVar12;
   long lVar13;
   uint uVar14;
   ulong uVar15;
   uint uVar16;
   if (*(long*)( this + 8 ) == 0) {
      return 0;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar11 = StringName::get_empty_hash();
      }
 else {
         uVar11 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      uVar15 = CONCAT44(0, uVar1);
      if (uVar11 == 0) {
         uVar11 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      lVar13 = SUB168(auVar3 * auVar7, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
      uVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar14 != 0) {
         uVar16 = 0;
         do {
            if (( uVar11 == uVar14 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               *param_2 = uVar12;
               return 1;
            }

            uVar16 = uVar16 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar15;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
            uVar12 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar15,uVar16 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
}
/* CowData<int>::_unref() */void CowData<int>::_unref(CowData<int> *this) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, Vector<String>, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Vector<String> > > >::operator[](String const&) */undefined1 * __thiscallHashMap<String,Vector<String>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<String>>>>::operator [](HashMap<String,Vector<String>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<String>>>> * this, String * param_1) * plVar1 ;uint * puVar2void * pvVar3void * __slonglVar4undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16] * pauVar37)[16];char __s_00undefined1 = (*pauVar43)[16];undefined8 * puVar44void * pvVar45int * pauVar57)[16];long in_FS_OFFSETundefined8 local_70undefined1local_68[16]long local_58[2]undefined8 local_48longlocal_40uVar56 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 )local_40 = *(long*)( in_FS_OFFSET + 0x28 );if (*(long*)( this + 8 ) == 0) {
   LAB_001187df:local_70 = 0;
   uVar49 = (ulong)uVar56;
   uVar41 = uVar49 * 4;
   uVar53 = uVar49 * 8;
   uVar42 = Memory::alloc_static(uVar41, false);
   *(undefined8*)( this + 0x10 ) = uVar42;
   pvVar45 = (void*)Memory::alloc_static(uVar53, false);
   *(void**)( this + 8 ) = pvVar45;
   if (uVar56 != 0) {
      pvVar3 = *(void**)( this + 0x10 );
      if (( pvVar3 < (void*)( (long)pvVar45 + uVar53 ) ) && ( pvVar45 < (void*)( (long)pvVar3 + uVar41 ) )) {
         uVar41 = 0;
         do {
            *(undefined4*)( (long)pvVar3 + uVar41 * 4 ) = 0;
            *(undefined8*)( (long)pvVar45 + uVar41 * 8 ) = 0;
            uVar41 = uVar41 + 1;
         }
 while ( uVar49 != uVar41 );
      }
 else {
         memset(pvVar3, 0, uVar41);
         memset(pvVar45, 0, uVar53);
      }

      LAB_00118695:iVar46 = *(int*)( this + 0x2c );
      if (iVar46 != 0) {
         LAB_001186a5:uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         uVar52 = String::hash();
         uVar41 = CONCAT44(0, uVar39);
         lVar54 = *(long*)( this + 0x10 );
         uVar40 = 1;
         if (uVar52 != 0) {
            uVar40 = uVar52;
         }

         uVar55 = 0;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = (ulong)uVar40 * lVar4;
         auVar33._8_8_ = 0;
         auVar33._0_8_ = uVar41;
         lVar47 = SUB168(auVar17 * auVar33, 8);
         uVar52 = *(uint*)( lVar54 + lVar47 * 4 );
         uVar51 = SUB164(auVar17 * auVar33, 8);
         if (uVar52 != 0) {
            do {
               if (uVar40 == uVar52) {
                  cVar38 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar47 * 8 ) + 0x10 ), param_1);
                  if (cVar38 != '\0') {
                     pauVar43 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar51 * 8 );
                     if (*(long*)pauVar43[2] != 0) {
                        CowData<String>::_ref((CowData<String>*)( pauVar43 + 2 ), (CowData*)&local_70);
                        pauVar43 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar51 * 8 );
                     }

                     goto LAB_00118543;
                  }

                  lVar54 = *(long*)( this + 0x10 );
               }

               uVar55 = uVar55 + 1;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = ( ulong )(uVar51 + 1) * lVar4;
               auVar34._8_8_ = 0;
               auVar34._0_8_ = uVar41;
               lVar47 = SUB168(auVar18 * auVar34, 8);
               uVar52 = *(uint*)( lVar54 + lVar47 * 4 );
               uVar51 = SUB164(auVar18 * auVar34, 8);
            }
 while ( ( uVar52 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar52 * lVar4,auVar35._8_8_ = 0,auVar35._0_8_ = uVar41,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( uVar39 + uVar51 ) - SUB164(auVar19 * auVar35, 8)) * lVar4,auVar36._8_8_ = 0,auVar36._0_8_ = uVar41,uVar55 <= SUB164(auVar20 * auVar36, 8) );
         }

         iVar46 = *(int*)( this + 0x2c );
      }

      uVar49 = (ulong)uVar56;
      goto LAB_00118157;
   }

   iVar46 = *(int*)( this + 0x2c );
   if (pvVar45 == (void*)0x0) goto LAB_00118157;
   if (*(int*)( this + 0x2c ) != 0) goto LAB_001186a5;
   LAB_0011817d:uVar56 = *(uint*)( this + 0x28 );
   if (uVar56 == 0x1c) {
      pauVar43 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_00118543;
   }

   uVar41 = ( ulong )(uVar56 + 1);
   uVar39 = *(uint*)( hash_table_size_primes + (ulong)uVar56 * 4 );
   *(undefined4*)( this + 0x2c ) = 0;
   if (uVar56 + 1 < 2) {
      uVar41 = 2;
   }

   uVar56 = *(uint*)( hash_table_size_primes + uVar41 * 4 );
   *(int*)( this + 0x28 ) = (int)uVar41;
   pvVar45 = *(void**)( this + 8 );
   uVar49 = (ulong)uVar56;
   uVar41 = uVar49 * 4;
   pvVar3 = *(void**)( this + 0x10 );
   uVar53 = uVar49 * 8;
   uVar42 = Memory::alloc_static(uVar41, false);
   *(undefined8*)( this + 0x10 ) = uVar42;
   __s_00 = (void*)Memory::alloc_static(uVar53, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar56 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar53 ) ) && ( __s_00 < (void*)( (long)__s + uVar41 ) )) {
         uVar41 = 0;
         do {
            *(undefined4*)( (long)__s + uVar41 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar41 * 8 ) = 0;
            uVar41 = uVar41 + 1;
         }
 while ( uVar41 != uVar49 );
      }
 else {
         memset(__s, 0, uVar41);
         memset(__s_00, 0, uVar53);
      }

   }

   uVar41 = 0;
   if (uVar39 != 0) {
      do {
         uVar56 = *(uint*)( (long)pvVar3 + uVar41 * 4 );
         if (uVar56 != 0) {
            uVar51 = 0;
            lVar4 = *(long*)( this + 0x10 );
            uVar40 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar53 = CONCAT44(0, uVar40);
            lVar54 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar56 * lVar54;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar53;
            lVar47 = SUB168(auVar5 * auVar21, 8);
            puVar2 = (uint*)( lVar4 + lVar47 * 4 );
            iVar46 = SUB164(auVar5 * auVar21, 8);
            uVar52 = *puVar2;
            uVar42 = *(undefined8*)( (long)pvVar45 + uVar41 * 8 );
            while (uVar52 != 0) {
               auVar6._8_8_ = 0;
               auVar6._0_8_ = (ulong)uVar52 * lVar54;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = uVar53;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(( uVar40 + iVar46 ) - SUB164(auVar6 * auVar22, 8)) * lVar54;
               auVar23._8_8_ = 0;
               auVar23._0_8_ = uVar53;
               uVar55 = SUB164(auVar7 * auVar23, 8);
               uVar50 = uVar42;
               if (uVar55 < uVar51) {
                  *puVar2 = uVar56;
                  puVar44 = (undefined8*)( (long)__s_00 + lVar47 * 8 );
                  uVar50 = *puVar44;
                  *puVar44 = uVar42;
                  uVar56 = uVar52;
                  uVar51 = uVar55;
               }

               uVar51 = uVar51 + 1;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = ( ulong )(iVar46 + 1) * lVar54;
               auVar24._8_8_ = 0;
               auVar24._0_8_ = uVar53;
               lVar47 = SUB168(auVar8 * auVar24, 8);
               puVar2 = (uint*)( lVar4 + lVar47 * 4 );
               iVar46 = SUB164(auVar8 * auVar24, 8);
               uVar42 = uVar50;
               uVar52 = *puVar2;
            }
;
            ;;
            *(undefined8*)( (long)__s_00 + lVar47 * 8 ) = uVar42;
            *puVar2 = uVar56;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar41 = uVar41 + 1;
      }
 while ( uVar39 != uVar41 );
      Memory::free_static(pvVar45, false);
      Memory::free_static(pvVar3, false);
   }

}
 else {
   if (*(int*)( this + 0x2c ) != 0) {
      uVar41 = CONCAT44(0, uVar56);
      lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar40 = String::hash();
      uVar39 = 1;
      if (uVar40 != 0) {
         uVar39 = uVar40;
      }

      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar39 * lVar4;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar41;
      lVar47 = SUB168(auVar13 * auVar29, 8);
      lVar54 = *(long*)( this + 0x10 );
      uVar52 = SUB164(auVar13 * auVar29, 8);
      uVar40 = *(uint*)( lVar54 + lVar47 * 4 );
      if (uVar40 == 0) {
         lVar48 = *(long*)( this + 8 );
      }
 else {
         uVar51 = 0;
         lVar48 = *(long*)( this + 8 );
         do {
            if (uVar39 == uVar40) {
               cVar38 = String::operator ==((String*)( *(long*)( lVar48 + lVar47 * 8 ) + 0x10 ), param_1);
               if (cVar38 != '\0') {
                  pauVar43 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar52 * 8 );
                  goto LAB_0011854f;
               }

               lVar54 = *(long*)( this + 0x10 );
               lVar48 = *(long*)( this + 8 );
            }

            uVar51 = uVar51 + 1;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = ( ulong )(uVar52 + 1) * lVar4;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar41;
            lVar47 = SUB168(auVar14 * auVar30, 8);
            uVar40 = *(uint*)( lVar54 + lVar47 * 4 );
            uVar52 = SUB164(auVar14 * auVar30, 8);
         }
 while ( ( uVar40 != 0 ) && ( auVar15._8_8_ = 0 ),auVar15._0_8_ = (ulong)uVar40 * lVar4,auVar31._8_8_ = 0,auVar31._0_8_ = uVar41,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar52 + uVar56 ) - SUB164(auVar15 * auVar31, 8)) * lVar4,auVar32._8_8_ = 0,auVar32._0_8_ = uVar41,uVar51 <= SUB164(auVar16 * auVar32, 8) );
      }

      local_70 = 0;
      uVar56 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar48 == 0) goto LAB_001187df;
      goto LAB_00118695;
   }

   local_70 = 0;
   uVar49 = (ulong)uVar56;
   iVar46 = 0;
   LAB_00118157:if ((float)uVar49 * __LC66 < (float)( iVar46 + 1 )) goto LAB_0011817d;
}
local_58[0] = 0;local_68 = (undefined1[16])0x0;if (*(long*)param_1 == 0) {
   local_48 = 0;
   pauVar43 = (undefined1(*) [16])operator_new(0x28, "");
   *(undefined8*)pauVar43[1] = 0;
   *pauVar43 = (undefined1[16])0x0;
}
 else {
   CowData<char32_t>::_ref((CowData<char32_t>*)local_58, (CowData*)param_1);
   lVar4 = local_58[0];
   uVar42 = local_68._0_8_;
   uVar50 = local_68._8_8_;
   local_48 = 0;
   pauVar43 = (undefined1(*) [16])operator_new(0x28, "");
   *(undefined8*)pauVar43[1] = 0;
   *(undefined8*)*pauVar43 = uVar42;
   *(undefined8*)( *pauVar43 + 8 ) = uVar50;
   if (lVar4 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( pauVar43 + 1 ), (CowData*)local_58);
   }

}
*(undefined8*)pauVar43[2] = 0;CowData<String>::_unref((CowData<String>*)&local_48);if (local_58[0] == 0) {
   LAB_00118428:puVar44 = *(undefined8**)( this + 0x20 );
   if (puVar44 != (undefined8*)0x0) goto LAB_0011843a;
   LAB_001187ca:*(undefined1(**) [16])( this + 0x18 ) = pauVar43;
}
 else {
   LOCK();
   plVar1 = (long*)( local_58[0] + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 != 0) goto LAB_00118428;
   Memory::free_static((void*)( local_58[0] + -0x10 ), false);
   puVar44 = *(undefined8**)( this + 0x20 );
   if (puVar44 == (undefined8*)0x0) goto LAB_001187ca;
   LAB_0011843a:*puVar44 = pauVar43;
   *(undefined8**)( *pauVar43 + 8 ) = puVar44;
}
*(undefined1(**) [16])( this + 0x20 ) = pauVar43;uVar39 = String::hash();lVar4 = *(long*)( this + 0x10 );uVar56 = 1;if (uVar39 != 0) {
   uVar56 = uVar39;
}
uVar52 = 0;uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar41 = CONCAT44(0, uVar39);lVar54 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );auVar9._8_8_ = 0;auVar9._0_8_ = (ulong)uVar56 * lVar54;auVar25._8_8_ = 0;auVar25._0_8_ = uVar41;lVar48 = SUB168(auVar9 * auVar25, 8);lVar47 = *(long*)( this + 8 );puVar2 = (uint*)( lVar4 + lVar48 * 4 );iVar46 = SUB164(auVar9 * auVar25, 8);uVar40 = *puVar2;pauVar37 = pauVar43;while (uVar40 != 0) {
   auVar10._8_8_ = 0;
   auVar10._0_8_ = (ulong)uVar40 * lVar54;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = uVar41;
   auVar11._8_8_ = 0;
   auVar11._0_8_ = ( ulong )(( uVar39 + iVar46 ) - SUB164(auVar10 * auVar26, 8)) * lVar54;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar41;
   uVar51 = SUB164(auVar11 * auVar27, 8);
   pauVar57 = pauVar37;
   if (uVar51 < uVar52) {
      *puVar2 = uVar56;
      puVar44 = (undefined8*)( lVar47 + lVar48 * 8 );
      pauVar57 = (undefined1(*) [16])*puVar44;
      *puVar44 = pauVar37;
      uVar52 = uVar51;
      uVar56 = uVar40;
   }

   uVar52 = uVar52 + 1;
   auVar12._8_8_ = 0;
   auVar12._0_8_ = ( ulong )(iVar46 + 1) * lVar54;
   auVar28._8_8_ = 0;
   auVar28._0_8_ = uVar41;
   lVar48 = SUB168(auVar12 * auVar28, 8);
   puVar2 = (uint*)( lVar4 + lVar48 * 4 );
   iVar46 = SUB164(auVar12 * auVar28, 8);
   pauVar37 = pauVar57;
   uVar40 = *puVar2;
}
;;*(undefined1(**) [16])( lVar47 + lVar48 * 8 ) = pauVar37;*puVar2 = uVar56;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_00118543:CowData<String>::_unref((CowData<String>*)&local_70);LAB_0011854f:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return pauVar43[1] + 8;}/* CowData<StringName>::_unref() */void CowData<StringName>::_unref(CowData<StringName> *this) {
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
/* void Vector<StringName>::sort_custom<StringName::AlphCompare, true>() */void Vector<StringName>::sort_custom<StringName::AlphCompare,true>(Vector<StringName> *this) {
   long lVar1;
   StringName *pSVar2;
   StringName *pSVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 8 ) != 0 ) && ( lVar1 = lVar1 != 0 )) {
      CowData<StringName>::_copy_on_write((CowData<StringName>*)( this + 8 ));
      pSVar2 = *(StringName**)( this + 8 );
      if (lVar1 != 1) {
         lVar6 = 0;
         lVar4 = lVar1;
         do {
            lVar4 = lVar4 >> 1;
            lVar6 = lVar6 + 1;
         }
 while ( lVar4 != 1 );
         lVar6 = lVar6 * 2;
         lVar4 = 1;
         lVar5 = lVar1;
         if (lVar1 < 0x11) {
            do {
               lVar6 = lVar4 + 1;
               SortArray<StringName,StringName::AlphCompare,true>::linear_insert(0, lVar4, pSVar2);
               lVar4 = lVar6;
            }
 while ( lVar1 != lVar6 );
         }
 else {
            do {
               lVar6 = lVar6 + -1;
               pSVar3 = (StringName*)SortArray<StringName,StringName::AlphCompare,true>::median_of_3(pSVar2, pSVar2 + ( lVar5 >> 1 ) * 8, pSVar2 + lVar5 * 8 + -8);
               StringName::StringName((StringName*)&local_48, pSVar3);
               lVar4 = SortArray<StringName,StringName::AlphCompare,true>::partitioner(0, lVar5, (StringName*)&local_48, pSVar2);
               if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                  StringName::unref();
               }

               SortArray<StringName,StringName::AlphCompare,true>::introsort(lVar4, lVar5, pSVar2, lVar6);
               lVar5 = 1;
               if (lVar4 < 0x11) goto LAB_00118b50;
               lVar5 = lVar4;
            }
 while ( lVar6 != 0 );
            SortArray<StringName,StringName::AlphCompare,true>::partial_sort(0, lVar4, lVar4, pSVar2);
            lVar5 = 1;
            LAB_00118b50:do {
               lVar6 = lVar5 + 1;
               SortArray<StringName,StringName::AlphCompare,true>::linear_insert(0, lVar5, pSVar2);
               lVar5 = lVar6;
            }
 while ( lVar6 != 0x10 );
            lVar6 = 0x10;
            do {
               StringName::StringName((StringName*)&local_48, pSVar2 + lVar6 * 8);
               SortArray<StringName,StringName::AlphCompare,true>::unguarded_linear_insert(lVar6, (StringName*)&local_48, pSVar2);
               if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                  StringName::unref();
               }

               lVar6 = lVar6 + 1;
            }
 while ( lVar1 != lVar6 );
         }

      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

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
      LAB_00118f90:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar8 == 0) goto LAB_00118f90;
   if (param_1 <= lVar4) {
      lVar4 = *(long*)this;
      uVar6 = param_1;
      while (lVar4 != 0) {
         if (*(ulong*)( lVar4 + -8 ) <= uVar6) {
            LAB_00118e6a:if (lVar8 != lVar5) {
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
            if (*(ulong*)( lVar4 + -8 ) <= uVar6) goto LAB_00118e6a;
         }
;
         ;;
         StringName::unref();
         uVar6 = uVar6 + 1;
         lVar4 = *(long*)this;
      }
;
      ;;
      goto LAB_00118e37;
   }

   if (lVar8 == lVar5) {
      LAB_00118f0b:puVar7 = *(undefined8**)this;
      if (puVar7 == (undefined8*)0x0) {
         LAB_00118e37:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      lVar4 = puVar7[-1];
      if (param_1 <= lVar4) goto LAB_00118eeb;
   }
 else {
      if (lVar4 != 0) {
         uVar2 = _realloc(this, lVar8);
         if ((int)uVar2 != 0) {
            return uVar2;
         }

         goto LAB_00118f0b;
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
   LAB_00118eeb:puVar7[-1] = param_1;
   return 0;
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
      LAB_001192d0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar10 == 0) goto LAB_001192d0;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_001191a9:if (lVar10 != lVar7) {
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
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_001191a9;
         }
;
         ;;
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
      ;;
      goto LAB_00119326;
   }

   if (lVar10 == lVar7) {
      LAB_0011924f:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_00119326:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_0011923a;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_0011924f;
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
   LAB_0011923a:puVar9[-1] = param_1;
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
/* CowData<ShaderCompiler::GeneratedCode::Texture>::_unref() */void CowData<ShaderCompiler::GeneratedCode::Texture>::_unref(CowData<ShaderCompiler::GeneratedCode::Texture> *this) {
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
               plVar4 = plVar4 + 5;
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
/* CowData<ShaderCompiler::GeneratedCode::Texture>::_realloc(long) */undefined8 CowData<ShaderCompiler::GeneratedCode::Texture>::_realloc(CowData<ShaderCompiler::GeneratedCode::Texture> *this, long param_1) {
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
/* HashMap<StringName, ShaderLanguage::ShaderNode::Uniform, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::ShaderNode::Uniform> > >::_resize_and_rehash(unsigned int) */void HashMap<StringName,ShaderLanguage::ShaderNode::Uniform,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Uniform>>>::_resize_and_rehash(HashMap<StringName,ShaderLanguage::ShaderNode::Uniform,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Uniform>>> *this, uint param_1) {
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
            ;;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, ShaderLanguage::ShaderNode::Uniform, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::ShaderNode::Uniform> > >::operator[](StringName const&) */undefined8 * __thiscallHashMap<StringName,ShaderLanguage::ShaderNode::Uniform,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Uniform>>>::operator [](HashMap<StringName,ShaderLanguage::ShaderNode::Uniform,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Uniform>>> * this, StringName * param_1) * plVar1 ;uint * puVar2undefined8 * puVar3void * __sundefined1auVar4[16]undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16] * puVar34undefined8 * __s_00long * puVar41uint * local_160longlocal_130[3]undefined4 local_118undefined4 uStack_114undefined4 local_110undefined4 uStack_10cundefined8 local_100undefined8 local_f8undefined1 local_f0[16]undefined1 local_d8[16]long local_c8undefined1 local_c0[16]undefined8 local_b0undefined4 local_a8long local_98undefined8 local_90undefined1 local_88undefined8 local_84undefined8 local_7cundefined4 local_74long local_68undefined4 local_60undefined1 local_58[16] = *(long*)( this + 8 ) ;local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar33 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar46 = CONCAT44(0, uVar33);if (( lVar36 != 0 ) && ( *(int*)( this + 0x2c ) != 0 )) {
   lVar39 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   if (*(long*)param_1 == 0) {
      uVar31 = StringName::get_empty_hash();
      lVar36 = *(long*)( this + 8 );
   }
 else {
      uVar31 = *(uint*)( *(long*)param_1 + 0x20 );
   }

   if (uVar31 == 0) {
      uVar31 = 1;
   }

   auVar4._8_8_ = 0;
   auVar4._0_8_ = (ulong)uVar31 * lVar39;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = uVar46;
   lVar38 = SUB168(auVar4 * auVar16, 8);
   uVar32 = *(uint*)( *(long*)( this + 0x10 ) + lVar38 * 4 );
   uVar42 = SUB164(auVar4 * auVar16, 8);
   if (uVar32 != 0) {
      uVar44 = 0;
      do {
         if (( uVar32 == uVar31 ) && ( *(long*)( *(long*)( lVar36 + lVar38 * 8 ) + 0x10 ) == *(long*)param_1 )) {
            local_160 = (undefined8*)( *(long*)( lVar36 + (ulong)uVar42 * 8 ) + 0x18 );
            goto LAB_00119800;
         }

         uVar44 = uVar44 + 1;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = ( ulong )(uVar42 + 1) * lVar39;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = uVar46;
         lVar38 = SUB168(auVar5 * auVar17, 8);
         uVar32 = *(uint*)( *(long*)( this + 0x10 ) + lVar38 * 4 );
         uVar42 = SUB164(auVar5 * auVar17, 8);
      }
 while ( ( uVar32 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar32 * lVar39,auVar18._8_8_ = 0,auVar18._0_8_ = uVar46,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar42 + uVar33 ) - SUB164(auVar6 * auVar18, 8)) * lVar39,auVar19._8_8_ = 0,auVar19._0_8_ = uVar46,uVar44 <= SUB164(auVar7 * auVar19, 8) );
   }

}
uVar30 = _LC131;local_130[2] = 0x600000000;local_110 = 0x3f800000;uStack_10c = 0x3a83126f;uVar33 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );local_130[0] = 0;local_130[1] = 0;local_118 = 2;uStack_114 = 0;local_100 = 0;local_f8 = 0;local_f0 = (undefined1[16])0x0;if (lVar36 == 0) {
   uVar29 = (ulong)uVar33;
   uVar46 = uVar29 * 4;
   uVar43 = uVar29 * 8;
   uVar35 = Memory::alloc_static(uVar46, false);
   *(undefined8*)( this + 0x10 ) = uVar35;
   __s_00 = (void*)Memory::alloc_static(uVar43, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar33 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar43 ) ) && ( __s_00 < (void*)( (long)__s + uVar46 ) )) {
         uVar46 = 0;
         do {
            *(undefined4*)( (long)__s + uVar46 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar46 * 8 ) = 0;
            uVar46 = uVar46 + 1;
         }
 while ( uVar29 != uVar46 );
      }
 else {
         memset(__s, 0, uVar46);
         memset(__s_00, 0, uVar43);
      }

      goto LAB_001198c3;
   }

   iVar37 = *(int*)( this + 0x2c );
   if (__s_00 == (void*)0x0) goto LAB_00119aa1;
   if (*(int*)( this + 0x2c ) != 0) goto LAB_001198d0;
   LAB_00119ac3:if (*(int*)( this + 0x28 ) == 0x1c) {
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      lVar36 = 0;
      LAB_00119a53:local_160 = (undefined8*)( lVar36 + 0x18 );
      goto LAB_00119a5c;
   }

   _resize_and_rehash(this, *(int*)( this + 0x28 ) + 1);
}
 else {
   LAB_001198c3:iVar37 = *(int*)( this + 0x2c );
   if (iVar37 != 0) {
      LAB_001198d0:uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar46 = CONCAT44(0, uVar31);
      lVar36 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar32 = StringName::get_empty_hash();
      }
 else {
         uVar32 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar32 == 0) {
         uVar32 = 1;
      }

      uVar45 = 0;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar32 * lVar36;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar46;
      lVar39 = SUB168(auVar8 * auVar20, 8);
      uVar42 = *(uint*)( *(long*)( this + 0x10 ) + lVar39 * 4 );
      uVar44 = SUB164(auVar8 * auVar20, 8);
      if (uVar42 != 0) {
         do {
            if (( uVar42 == uVar32 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar39 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               lVar36 = *(long*)( *(long*)( this + 8 ) + (ulong)uVar44 * 8 );
               *(undefined8*)( lVar36 + 0x28 ) = uVar30;
               *(undefined4*)( lVar36 + 0x30 ) = 0;
               *(undefined1(*) [16])( lVar36 + 0x18 ) = (undefined1[16])0x0;
               if (*(long*)( lVar36 + 0x40 ) != 0) {
                  CowData<ShaderLanguage::Scalar>::_ref((CowData<ShaderLanguage::Scalar>*)( lVar36 + 0x40 ), (CowData*)local_130);
               }

               uVar30 = _LC129;
               *(undefined1*)( lVar36 + 0x50 ) = 0;
               *(undefined8*)( lVar36 + 0x48 ) = 0;
               *(undefined8*)( lVar36 + 0x54 ) = uVar30;
               *(ulong*)( lVar36 + 0x5c ) = CONCAT44(local_110, uStack_114);
               *(undefined4*)( lVar36 + 100 ) = uStack_10c;
               if (*(long*)( lVar36 + 0x70 ) != 0) {
                  CowData<String>::_ref((CowData<String>*)( lVar36 + 0x70 ), (CowData*)&local_100);
               }

               *(undefined4*)( lVar36 + 0x78 ) = 0;
               if (*(long*)( lVar36 + 0x80 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( lVar36 + 0x80 ), (CowData*)local_f0);
               }

               if (*(long*)( lVar36 + 0x88 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( lVar36 + 0x88 ), (CowData*)( local_f0 + 8 ));
               }

               lVar36 = *(long*)( *(long*)( this + 8 ) + (ulong)uVar44 * 8 );
               goto LAB_00119a53;
            }

            uVar45 = uVar45 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = ( ulong )(uVar44 + 1) * lVar36;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar46;
            lVar39 = SUB168(auVar9 * auVar21, 8);
            uVar42 = *(uint*)( *(long*)( this + 0x10 ) + lVar39 * 4 );
            uVar44 = SUB164(auVar9 * auVar21, 8);
         }
 while ( ( uVar42 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar42 * lVar36,auVar22._8_8_ = 0,auVar22._0_8_ = uVar46,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( uVar31 + uVar44 ) - SUB164(auVar10 * auVar22, 8)) * lVar36,auVar23._8_8_ = 0,auVar23._0_8_ = uVar46,uVar45 <= SUB164(auVar11 * auVar23, 8) );
      }

      iVar37 = *(int*)( this + 0x2c );
   }

   LAB_00119aa1:if ((float)uVar33 * __LC66 < (float)( iVar37 + 1 )) goto LAB_00119ac3;
}
local_d8 = (undefined1[16])0x0;StringName::StringName((StringName*)&local_c8, param_1);local_c0 = (undefined1[16])0x0;local_84 = _LC129;local_7c = CONCAT44(local_110, uStack_114);local_58 = (undefined1[16])0x0;local_b0 = uVar30;local_a8 = 0;local_98 = 0;local_90 = 0;local_88 = 0;local_74 = uStack_10c;local_68 = 0;local_60 = 0;puVar34 = (undefined8*)operator_new(0x90, "");*puVar34 = local_d8._0_8_;puVar34[1] = local_d8._8_8_;StringName::StringName((StringName*)( puVar34 + 2 ), (StringName*)&local_c8);local_160 = puVar34 + 3;puVar34[8] = 0;puVar34[3] = local_c0._0_8_;puVar34[4] = local_c0._8_8_;puVar34[5] = local_b0;*(undefined4*)( puVar34 + 6 ) = local_a8;if (local_98 != 0) {
   CowData<ShaderLanguage::Scalar>::_ref((CowData<ShaderLanguage::Scalar>*)( puVar34 + 8 ), (CowData*)&local_98);
}
puVar34[0xe] = 0;puVar34[9] = local_90;*(undefined1*)( puVar34 + 10 ) = local_88;*(undefined8*)( (long)puVar34 + 0x54 ) = local_84;*(undefined8*)( (long)puVar34 + 0x5c ) = local_7c;*(undefined4*)( (long)puVar34 + 100 ) = local_74;if (local_68 != 0) {
   CowData<String>::_ref((CowData<String>*)( puVar34 + 0xe ), (CowData*)&local_68);
}
puVar34[0x10] = 0;*(undefined4*)( puVar34 + 0xf ) = local_60;if (local_58._0_8_ != 0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)( puVar34 + 0x10 ), (CowData*)local_58);
}
puVar34[0x11] = 0;if (local_58._8_8_ != 0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)( puVar34 + 0x11 ), (CowData*)( local_58 + 8 ));
   uVar30 = local_58._8_8_;
   if (local_58._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_58._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58._8_8_ = 0;
         Memory::free_static((void*)( uVar30 + -0x10 ), false);
      }

   }

}
uVar30 = local_58._0_8_;if (local_58._0_8_ != 0) {
   LOCK();
   plVar1 = (long*)( local_58._0_8_ + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      auVar28._8_8_ = 0;
      auVar28._0_8_ = local_58._8_8_;
      local_58 = auVar28 << 0x40;
      Memory::free_static((void*)( uVar30 + -0x10 ), false);
   }

}
CowData<String>::_unref((CowData<String>*)&local_68);lVar36 = local_98;if (local_98 != 0) {
   LOCK();
   plVar1 = (long*)( local_98 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void*)( lVar36 + -0x10 ), false);
   }

}
if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
   StringName::unref();
}
puVar41 = *(undefined8**)( this + 0x20 );if (puVar41 == (undefined8*)0x0) {
   lVar36 = *(long*)param_1;
   *(undefined8**)( this + 0x18 ) = puVar34;
   *(undefined8**)( this + 0x20 ) = puVar34;
   if (lVar36 == 0) goto LAB_00119f5e;
   LAB_00119d53:uVar33 = *(uint*)( lVar36 + 0x20 );
}
 else {
   *puVar41 = puVar34;
   puVar34[1] = puVar41;
   lVar36 = *(long*)param_1;
   *(undefined8**)( this + 0x20 ) = puVar34;
   if (lVar36 != 0) goto LAB_00119d53;
   LAB_00119f5e:uVar33 = StringName::get_empty_hash();
}
lVar36 = *(long*)( this + 0x10 );if (uVar33 == 0) {
   uVar33 = 1;
}
uVar46 = (ulong)uVar33;uVar42 = 0;lVar39 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar43 = CONCAT44(0, uVar31);auVar12._8_8_ = 0;auVar12._0_8_ = uVar46 * lVar39;auVar24._8_8_ = 0;auVar24._0_8_ = uVar43;lVar40 = SUB168(auVar12 * auVar24, 8);lVar38 = *(long*)( this + 8 );puVar2 = (uint*)( lVar36 + lVar40 * 4 );iVar37 = SUB164(auVar12 * auVar24, 8);uVar32 = *puVar2;while (uVar32 != 0) {
   auVar13._8_8_ = 0;
   auVar13._0_8_ = (ulong)uVar32 * lVar39;
   auVar25._8_8_ = 0;
   auVar25._0_8_ = uVar43;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = ( ulong )(( iVar37 + uVar31 ) - SUB164(auVar13 * auVar25, 8)) * lVar39;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = uVar43;
   uVar33 = SUB164(auVar14 * auVar26, 8);
   puVar41 = puVar34;
   if (uVar33 < uVar42) {
      *puVar2 = (uint)uVar46;
      uVar46 = (ulong)uVar32;
      puVar3 = (undefined8*)( lVar38 + lVar40 * 8 );
      puVar41 = (undefined8*)*puVar3;
      *puVar3 = puVar34;
      uVar42 = uVar33;
   }

   uVar33 = (uint)uVar46;
   uVar42 = uVar42 + 1;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(iVar37 + 1) * lVar39;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar43;
   lVar40 = SUB168(auVar15 * auVar27, 8);
   puVar2 = (uint*)( lVar36 + lVar40 * 4 );
   iVar37 = SUB164(auVar15 * auVar27, 8);
   puVar34 = puVar41;
   uVar32 = *puVar2;
}
;;*(undefined8**)( lVar38 + lVar40 * 8 ) = puVar34;*puVar2 = uVar33;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;if (local_f0._8_8_ != 0) {
   LOCK();
   plVar1 = (long*)( local_f0._8_8_ + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      Memory::free_static((void*)( local_f0._8_8_ + -0x10 ), false);
   }

}
if (local_f0._0_8_ != 0) {
   LOCK();
   plVar1 = (long*)( local_f0._0_8_ + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      Memory::free_static((void*)( local_f0._0_8_ + -0x10 ), false);
   }

}
LAB_00119a5c:CowData<String>::_unref((CowData<String>*)&local_100);if (local_130[0] != 0) {
   LOCK();
   plVar1 = (long*)( local_130[0] + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      Memory::free_static((void*)( local_130[0] + -0x10 ), false);
   }

}
LAB_00119800:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return local_160;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, ShaderLanguage::ShaderNode::Uniform, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::ShaderNode::Uniform> > >::insert(StringName const&,
   ShaderLanguage::ShaderNode::Uniform const&, bool) */StringName *
HashMap<StringName,ShaderLanguage::ShaderNode::Uniform,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Uniform>>>
::insert(StringName *param_1,Uniform *param_2,bool param_3){
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
   long *plVar25;
   long lVar26;
   undefined8 uVar27;
   void *__s_00;
   long *in_RCX;
   uint uVar28;
   int iVar29;
   undefined7 in_register_00000011;
   StringName *pSVar30;
   long lVar31;
   long lVar32;
   char in_R8B;
   uint uVar33;
   ulong uVar34;
   uint uVar35;
   ulong uVar36;
   long *plVar37;
   long in_FS_OFFSET;
   long local_c8;
   long local_c0;
   long lStack_b8;
   long local_b0;
   undefined4 local_a8;
   long local_98;
   long local_90;
   undefined1 local_88;
   undefined8 local_84;
   undefined8 local_7c;
   undefined4 local_74;
   long local_68;
   undefined4 local_60;
   long local_58;
   long local_50[2];
   long local_40;
   pSVar30 = (StringName*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar23 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   if (*(long*)( param_2 + 8 ) == 0) {
      uVar22 = (ulong)uVar23;
      uVar36 = uVar22 * 4;
      uVar34 = uVar22 * 8;
      uVar27 = Memory::alloc_static(uVar36, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar27;
      __s_00 = (void*)Memory::alloc_static(uVar34, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar23 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar34 ) ) && ( __s_00 < (void*)( (long)__s + uVar36 ) )) {
            uVar36 = 0;
            do {
               *(undefined4*)( (long)__s + uVar36 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar36 * 8 ) = 0;
               uVar36 = uVar36 + 1;
            }
 while ( uVar22 != uVar36 );
         }
 else {
            memset(__s, 0, uVar36);
            memset(__s_00, 0, uVar34);
         }

         goto LAB_0011a0c6;
      }

      iVar29 = *(int*)( param_2 + 0x2c );
      if (__s_00 == (void*)0x0) goto LAB_0011a268;
      if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_0011a0d2;
      LAB_0011a28a:if (*(int*)( param_2 + 0x28 ) == 0x1c) {
         plVar25 = (long*)0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_0011a63e;
      }

      _resize_and_rehash((HashMap<StringName,ShaderLanguage::ShaderNode::Uniform,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Uniform>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
   }
 else {
      LAB_0011a0c6:iVar29 = *(int*)( param_2 + 0x2c );
      if (iVar29 != 0) {
         LAB_0011a0d2:uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
         uVar36 = CONCAT44(0, uVar3);
         lVar26 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         if (*(long*)pSVar30 == 0) {
            uVar24 = StringName::get_empty_hash();
         }
 else {
            uVar24 = *(uint*)( *(long*)pSVar30 + 0x20 );
         }

         if (uVar24 == 0) {
            uVar24 = 1;
         }

         uVar35 = 0;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = (ulong)uVar24 * lVar26;
         auVar14._8_8_ = 0;
         auVar14._0_8_ = uVar36;
         lVar31 = SUB168(auVar6 * auVar14, 8);
         uVar33 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar31 * 4 );
         uVar28 = SUB164(auVar6 * auVar14, 8);
         if (uVar33 != 0) {
            do {
               if (( uVar24 == uVar33 ) && ( *(long*)( *(long*)( *(long*)( param_2 + 8 ) + lVar31 * 8 ) + 0x10 ) == *(long*)pSVar30 )) {
                  lVar31 = in_RCX[1];
                  lVar26 = *(long*)( *(long*)( param_2 + 8 ) + (ulong)uVar28 * 8 );
                  *(long*)( lVar26 + 0x18 ) = *in_RCX;
                  *(long*)( lVar26 + 0x20 ) = lVar31;
                  *(long*)( lVar26 + 0x28 ) = in_RCX[2];
                  *(int*)( lVar26 + 0x30 ) = (int)in_RCX[3];
                  if (*(long*)( lVar26 + 0x40 ) != in_RCX[5]) {
                     CowData<ShaderLanguage::Scalar>::_ref((CowData<ShaderLanguage::Scalar>*)( lVar26 + 0x40 ), (CowData*)( in_RCX + 5 ));
                  }

                  *(long*)( lVar26 + 0x48 ) = in_RCX[6];
                  *(char*)( lVar26 + 0x50 ) = (char)in_RCX[7];
                  *(undefined8*)( lVar26 + 0x54 ) = *(undefined8*)( (long)in_RCX + 0x3c );
                  lVar31 = 0;
                  do {
                     *(undefined4*)( lVar26 + 0x5c + lVar31 ) = *(undefined4*)( (long)in_RCX + lVar31 + 0x44 );
                     lVar31 = lVar31 + 4;
                  }
 while ( lVar31 != 0xc );
                  if (*(long*)( lVar26 + 0x70 ) != in_RCX[0xb]) {
                     CowData<String>::_ref((CowData<String>*)( lVar26 + 0x70 ), (CowData*)( in_RCX + 0xb ));
                  }

                  *(int*)( lVar26 + 0x78 ) = (int)in_RCX[0xc];
                  if (*(long*)( lVar26 + 0x80 ) != in_RCX[0xd]) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( lVar26 + 0x80 ), (CowData*)( in_RCX + 0xd ));
                  }

                  if (*(long*)( lVar26 + 0x88 ) != in_RCX[0xe]) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( lVar26 + 0x88 ), (CowData*)( in_RCX + 0xe ));
                  }

                  plVar25 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar28 * 8 );
                  goto LAB_0011a63e;
               }

               uVar35 = uVar35 + 1;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(uVar28 + 1) * lVar26;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = uVar36;
               lVar31 = SUB168(auVar7 * auVar15, 8);
               uVar33 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar31 * 4 );
               uVar28 = SUB164(auVar7 * auVar15, 8);
            }
 while ( ( uVar33 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar33 * lVar26,auVar16._8_8_ = 0,auVar16._0_8_ = uVar36,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar3 + uVar28 ) - SUB164(auVar8 * auVar16, 8)) * lVar26,auVar17._8_8_ = 0,auVar17._0_8_ = uVar36,uVar35 <= SUB164(auVar9 * auVar17, 8) );
         }

         iVar29 = *(int*)( param_2 + 0x2c );
      }

      LAB_0011a268:if ((float)uVar23 * __LC66 < (float)( iVar29 + 1 )) goto LAB_0011a28a;
   }

   StringName::StringName((StringName*)&local_c8, pSVar30);
   local_b0 = in_RCX[2];
   local_c0 = *in_RCX;
   lStack_b8 = in_RCX[1];
   local_98 = 0;
   local_a8 = (undefined4)in_RCX[3];
   if (in_RCX[5] != 0) {
      CowData<ShaderLanguage::Scalar>::_ref((CowData<ShaderLanguage::Scalar>*)&local_98, (CowData*)( in_RCX + 5 ));
   }

   local_90 = in_RCX[6];
   local_68 = 0;
   local_88 = (undefined1)in_RCX[7];
   local_84 = *(undefined8*)( (long)in_RCX + 0x3c );
   local_7c = *(undefined8*)( (long)in_RCX + 0x44 );
   local_74 = *(undefined4*)( (long)in_RCX + 0x4c );
   if (in_RCX[0xb] != 0) {
      CowData<String>::_ref((CowData<String>*)&local_68, (CowData*)( in_RCX + 0xb ));
   }

   local_60 = (undefined4)in_RCX[0xc];
   local_58 = 0;
   if (in_RCX[0xd] != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( in_RCX + 0xd ));
   }

   local_50[0] = 0;
   if (in_RCX[0xe] != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_50, (CowData*)( in_RCX + 0xe ));
   }

   plVar25 = (long*)operator_new(0x90, "");
   *plVar25 = 0;
   plVar25[1] = 0;
   StringName::StringName((StringName*)( plVar25 + 2 ), (StringName*)&local_c8);
   plVar25[8] = 0;
   plVar25[5] = local_b0;
   plVar25[3] = local_c0;
   plVar25[4] = lStack_b8;
   *(undefined4*)( plVar25 + 6 ) = local_a8;
   if (local_98 != 0) {
      CowData<ShaderLanguage::Scalar>::_ref((CowData<ShaderLanguage::Scalar>*)( plVar25 + 8 ), (CowData*)&local_98);
   }

   plVar25[0xe] = 0;
   plVar25[9] = local_90;
   *(undefined1*)( plVar25 + 10 ) = local_88;
   *(undefined8*)( (long)plVar25 + 0x54 ) = local_84;
   *(undefined8*)( (long)plVar25 + 0x5c ) = local_7c;
   *(undefined4*)( (long)plVar25 + 100 ) = local_74;
   if (local_68 != 0) {
      CowData<String>::_ref((CowData<String>*)( plVar25 + 0xe ), (CowData*)&local_68);
   }

   plVar25[0x10] = 0;
   *(undefined4*)( plVar25 + 0xf ) = local_60;
   if (local_58 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( plVar25 + 0x10 ), (CowData*)&local_58);
   }

   plVar25[0x11] = 0;
   if (( local_50[0] != 0 ) && ( CowData<char32_t>::_ref((CowData<char32_t>*)( plVar25 + 0x11 ), (CowData*)local_50),lVar26 = local_50[0],local_50[0] != 0 )) {
      LOCK();
      plVar1 = (long*)( local_50[0] + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50[0] = 0;
         Memory::free_static((void*)( lVar26 + -0x10 ), false);
      }

   }

   lVar26 = local_58;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar26 + -0x10 ), false);
      }

   }

   CowData<String>::_unref((CowData<String>*)&local_68);
   lVar26 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar26 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
      StringName::unref();
   }

   puVar4 = *(undefined8**)( param_2 + 0x20 );
   if (puVar4 == (undefined8*)0x0) {
      *(long**)( param_2 + 0x18 ) = plVar25;
      *(long**)( param_2 + 0x20 ) = plVar25;
      LAB_0011a541:lVar26 = *(long*)pSVar30;
      if (lVar26 != 0) goto LAB_0011a54e;
      LAB_0011a694:uVar23 = StringName::get_empty_hash();
   }
 else {
      if (in_R8B == '\0') {
         *puVar4 = plVar25;
         plVar25[1] = (long)puVar4;
         *(long**)( param_2 + 0x20 ) = plVar25;
         goto LAB_0011a541;
      }

      lVar26 = *(long*)( param_2 + 0x18 );
      *(long**)( lVar26 + 8 ) = plVar25;
      *plVar25 = lVar26;
      lVar26 = *(long*)pSVar30;
      *(long**)( param_2 + 0x18 ) = plVar25;
      if (lVar26 == 0) goto LAB_0011a694;
      LAB_0011a54e:uVar23 = *(uint*)( lVar26 + 0x20 );
   }

   lVar26 = *(long*)( param_2 + 0x10 );
   if (uVar23 == 0) {
      uVar23 = 1;
   }

   uVar36 = (ulong)uVar23;
   uVar33 = 0;
   lVar31 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar34 = CONCAT44(0, uVar3);
   auVar10._8_8_ = 0;
   auVar10._0_8_ = uVar36 * lVar31;
   auVar18._8_8_ = 0;
   auVar18._0_8_ = uVar34;
   lVar32 = SUB168(auVar10 * auVar18, 8);
   lVar5 = *(long*)( param_2 + 8 );
   puVar2 = (uint*)( lVar26 + lVar32 * 4 );
   iVar29 = SUB164(auVar10 * auVar18, 8);
   uVar24 = *puVar2;
   plVar1 = plVar25;
   while (uVar24 != 0) {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar24 * lVar31;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar34;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(( iVar29 + uVar3 ) - SUB164(auVar11 * auVar19, 8)) * lVar31;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar34;
      uVar23 = SUB164(auVar12 * auVar20, 8);
      plVar37 = plVar1;
      if (uVar23 < uVar33) {
         *puVar2 = (uint)uVar36;
         uVar36 = (ulong)uVar24;
         puVar4 = (undefined8*)( lVar5 + lVar32 * 8 );
         plVar37 = (long*)*puVar4;
         *puVar4 = plVar1;
         uVar33 = uVar23;
      }

      uVar23 = (uint)uVar36;
      uVar33 = uVar33 + 1;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = ( ulong )(iVar29 + 1) * lVar31;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar34;
      lVar32 = SUB168(auVar13 * auVar21, 8);
      puVar2 = (uint*)( lVar26 + lVar32 * 4 );
      iVar29 = SUB164(auVar13 * auVar21, 8);
      plVar1 = plVar37;
      uVar24 = *puVar2;
   }
;
   ;;
   *(long**)( lVar5 + lVar32 * 8 ) = plVar1;
   *puVar2 = uVar23;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_0011a63e:*(long**)param_1 = plVar25;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HashMap<StringName, String, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, String> > >::_resize_and_rehash(unsigned int) */void HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::_resize_and_rehash(HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>> *this, uint param_1) {
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
            ;;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, String, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, String> > >::operator[](StringName const&) */CowData<char32_t> * __thiscallHashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>> * this, StringName * param_1) * plVar1 ;uint * puVar2undefined8 * puVar3ulong * __sundefined1auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16] * puVar31undefined8 * __s_00ulong * puVar39uintuVar40uint uVar41uint uVar42ulong uVar43long in_FS_OFFSETuint local_a8CowData<char32_t> * local_88longlocal_70undefined1 local_68[16]long local_58long local_50[2] = *(long*)( this + 8 ) ;local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar29 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar43 = CONCAT44(0, uVar29);if (lVar34 == 0) {
   LAB_0011afb8:local_70 = 0;
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
         }
 while ( uVar43 != uVar33 );
      }
 else {
         memset(__s, 0, uVar33);
         memset(__s_00, 0, __n);
      }

      LAB_0011abd1:iVar35 = *(int*)( this + 0x2c );
      if (iVar35 != 0) {
         LAB_0011abdd:uVar29 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         uVar33 = CONCAT44(0, uVar29);
         lVar34 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar30 = StringName::get_empty_hash();
         }
 else {
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
                     CowData<char32_t>::_ref((CowData<char32_t>*)( lVar34 + 0x18 ), (CowData*)&local_70);
                     lVar34 = *(long*)( *(long*)( this + 8 ) + (ulong)uVar41 * 8 );
                  }

                  goto LAB_0011ab78;
               }

               uVar42 = uVar42 + 1;
               auVar10._8_8_ = 0;
               auVar10._0_8_ = ( ulong )(uVar41 + 1) * lVar34;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = uVar33;
               lVar37 = SUB168(auVar10 * auVar22, 8);
               uVar40 = *(uint*)( *(long*)( this + 0x10 ) + lVar37 * 4 );
               uVar41 = SUB164(auVar10 * auVar22, 8);
            }
 while ( ( uVar40 != 0 ) && ( auVar11._8_8_ = 0 ),auVar11._0_8_ = (ulong)uVar40 * lVar34,auVar23._8_8_ = 0,auVar23._0_8_ = uVar33,auVar12._8_8_ = 0,auVar12._0_8_ = ( ulong )(( uVar29 + uVar41 ) - SUB164(auVar11 * auVar23, 8)) * lVar34,auVar24._8_8_ = 0,auVar24._0_8_ = uVar33,uVar42 <= SUB164(auVar12 * auVar24, 8) );
         }

         iVar35 = *(int*)( this + 0x2c );
      }

      goto LAB_0011acdc;
   }

   iVar35 = *(int*)( this + 0x2c );
   if (__s_00 == (void*)0x0) goto LAB_0011acdc;
   if (*(int*)( this + 0x2c ) != 0) goto LAB_0011abdd;
   LAB_0011acfe:if (*(int*)( this + 0x28 ) == 0x1c) {
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      lVar34 = 0;
      LAB_0011ab78:local_88 = (CowData<char32_t>*)( lVar34 + 0x18 );
      goto LAB_0011ab81;
   }

   _resize_and_rehash(this, *(int*)( this + 0x28 ) + 1);
}
 else {
   if (*(int*)( this + 0x2c ) != 0) {
      lVar37 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar30 = StringName::get_empty_hash();
         lVar34 = *(long*)( this + 8 );
      }
 else {
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
               goto LAB_0011ab78;
            }

            uVar42 = uVar42 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ulong )(uVar41 + 1) * lVar37;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar43;
            lVar36 = SUB168(auVar6 * auVar18, 8);
            uVar40 = *(uint*)( *(long*)( this + 0x10 ) + lVar36 * 4 );
            uVar41 = SUB164(auVar6 * auVar18, 8);
         }
 while ( ( uVar40 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar40 * lVar37,auVar19._8_8_ = 0,auVar19._0_8_ = uVar43,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar41 + uVar29 ) - SUB164(auVar7 * auVar19, 8)) * lVar37,auVar20._8_8_ = 0,auVar20._0_8_ = uVar43,uVar42 <= SUB164(auVar8 * auVar20, 8) );
      }

      local_70 = 0;
      uVar43 = ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar34 == 0) goto LAB_0011afb8;
      goto LAB_0011abd1;
   }

   local_70 = 0;
   iVar35 = 0;
   LAB_0011acdc:if ((float)uVar43 * __LC66 < (float)( iVar35 + 1 )) goto LAB_0011acfe;
}
local_68 = (undefined1[16])0x0;StringName::StringName((StringName*)&local_58, param_1);local_50[0] = 0;puVar31 = (undefined8*)operator_new(0x20, "");*puVar31 = local_68._0_8_;puVar31[1] = local_68._8_8_;StringName::StringName((StringName*)( puVar31 + 2 ), (StringName*)&local_58);puVar31[3] = 0;local_88 = (CowData<char32_t>*)( puVar31 + 3 );if (( local_50[0] == 0 ) || ( CowData<char32_t>::_ref(local_88, (CowData*)local_50),lVar34 = local_50[0],local_50[0] == 0 )) {
   lVar37 = 0;
}
 else {
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

}
if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
   StringName::unref();
}
puVar39 = *(undefined8**)( this + 0x20 );if (puVar39 == (undefined8*)0x0) {
   lVar34 = *(long*)param_1;
   *(undefined8**)( this + 0x18 ) = puVar31;
   *(undefined8**)( this + 0x20 ) = puVar31;
   if (lVar34 == 0) goto LAB_0011af85;
   LAB_0011adf2:uVar29 = *(uint*)( lVar34 + 0x20 );
}
 else {
   *puVar39 = puVar31;
   puVar31[1] = puVar39;
   lVar34 = *(long*)param_1;
   *(undefined8**)( this + 0x20 ) = puVar31;
   if (lVar34 != 0) goto LAB_0011adf2;
   LAB_0011af85:uVar29 = StringName::get_empty_hash();
}
lVar34 = *(long*)( this + 0x10 );if (uVar29 == 0) {
   uVar29 = 1;
}
uVar43 = (ulong)uVar29;uVar41 = 0;lVar36 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar33 = CONCAT44(0, uVar30);auVar13._8_8_ = 0;auVar13._0_8_ = uVar43 * lVar36;auVar25._8_8_ = 0;auVar25._0_8_ = uVar33;lVar38 = SUB168(auVar13 * auVar25, 8);lVar4 = *(long*)( this + 8 );puVar2 = (uint*)( lVar34 + lVar38 * 4 );iVar35 = SUB164(auVar13 * auVar25, 8);uVar40 = *puVar2;while (uVar40 != 0) {
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
}
;;*(undefined8**)( lVar4 + lVar38 * 8 ) = puVar31;*puVar2 = uVar29;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;if (lVar37 != 0) {
   LOCK();
   plVar1 = (long*)( lVar37 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      Memory::free_static((void*)( local_70 + -0x10 ), false);
   }

}
LAB_0011ab81:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return local_88;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, String, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, String> > >::insert(StringName const&, String
   const&, bool) */StringName *
HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
::insert(StringName *param_1,String *param_2,bool param_3){
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
   StringName *pSVar29;
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
   pSVar29 = (StringName*)CONCAT71(in_register_00000011, param_3);
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

         goto LAB_0011b102;
      }

      iVar28 = *(int*)( param_2 + 0x2c );
      if (__s_00 == (void*)0x0) goto LAB_0011b219;
      if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_0011b10e;
      LAB_0011b23b:if (*(int*)( param_2 + 0x28 ) == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         local_80 = (long*)0x0;
         goto LAB_0011b40b;
      }

      _resize_and_rehash((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
   }
 else {
      LAB_0011b102:iVar28 = *(int*)( param_2 + 0x2c );
      if (iVar28 != 0) {
         LAB_0011b10e:uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
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
                     CowData<char32_t>::_ref((CowData<char32_t>*)( local_80 + 3 ), in_RCX);
                     local_80 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar27 * 8 );
                  }

                  goto LAB_0011b40b;
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

      LAB_0011b219:if ((float)uVar23 * __LC66 < (float)( iVar28 + 1 )) goto LAB_0011b23b;
   }

   StringName::StringName((StringName*)&local_58, pSVar29);
   local_50[0] = 0;
   if (*(long*)in_RCX != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_50, in_RCX);
   }

   local_80 = (long*)operator_new(0x20, "");
   *local_80 = 0;
   local_80[1] = 0;
   StringName::StringName((StringName*)( local_80 + 2 ), (StringName*)&local_58);
   local_80[3] = 0;
   if (( local_50[0] != 0 ) && ( CowData<char32_t>::_ref((CowData<char32_t>*)( local_80 + 3 ), (CowData*)local_50),lVar25 = local_50[0],local_50[0] != 0 )) {
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
      LAB_0011b32c:lVar25 = *(long*)pSVar29;
      if (lVar25 != 0) goto LAB_0011b339;
      LAB_0011b461:uVar23 = StringName::get_empty_hash();
   }
 else {
      if (in_R8B == '\0') {
         *puVar4 = local_80;
         local_80[1] = (long)puVar4;
         *(long**)( param_2 + 0x20 ) = local_80;
         goto LAB_0011b32c;
      }

      lVar25 = *(long*)( param_2 + 0x18 );
      *(long**)( lVar25 + 8 ) = local_80;
      *local_80 = lVar25;
      lVar25 = *(long*)pSVar29;
      *(long**)( param_2 + 0x18 ) = local_80;
      if (lVar25 == 0) goto LAB_0011b461;
      LAB_0011b339:uVar23 = *(uint*)( lVar25 + 0x20 );
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
   ;;
   *(long**)( lVar5 + lVar31 * 8 ) = plVar1;
   *puVar2 = uVar23;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_0011b40b:*(long**)param_1 = local_80;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HashMap<StringName, String, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, String> >
   >::TEMPNAMEPLACEHOLDERVALUE(HashMap<StringName, String, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName, String> >
   > const&) */void HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator =(HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>> *this, HashMap *param_1) {
   void *pvVar1;
   long lVar2;
   uint uVar3;
   uint uVar5;
   long *plVar6;
   long lVar7;
   long in_FS_OFFSET;
   StringName local_48[8];
   long local_40;
   ulong uVar4;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this != (HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)param_1) {
      uVar5 = *(uint*)( this + 0x28 );
      uVar3 = *(uint*)( hash_table_size_primes + (ulong)uVar5 * 4 );
      if (( *(int*)( this + 0x2c ) != 0 ) && ( *(long*)( this + 8 ) != 0 )) {
         if (uVar3 != 0) {
            lVar7 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x10 ) + lVar7 ) != 0) {
                  *(int*)( *(long*)( this + 0x10 ) + lVar7 ) = 0;
                  pvVar1 = *(void**)( *(long*)( this + 8 ) + lVar7 * 2 );
                  if (*(long*)( (long)pvVar1 + 0x18 ) != 0) {
                     LOCK();
                     plVar6 = (long*)( *(long*)( (long)pvVar1 + 0x18 ) + -0x10 );
                     *plVar6 = *plVar6 + -1;
                     UNLOCK();
                     if (*plVar6 == 0) {
                        lVar2 = *(long*)( (long)pvVar1 + 0x18 );
                        *(undefined8*)( (long)pvVar1 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar2 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar1 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar1, false);
                  *(undefined8*)( *(long*)( this + 8 ) + lVar7 * 2 ) = 0;
               }

               lVar7 = lVar7 + 4;
            }
 while ( lVar7 != (ulong)uVar3 << 2 );
            uVar5 = *(uint*)( this + 0x28 );
            uVar3 = *(uint*)( hash_table_size_primes + (ulong)uVar5 * 4 );
         }

         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
      }

      if (uVar3 < *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x28 ) * 4 )) {
         if (uVar5 != 0x1c) {
            uVar4 = (ulong)uVar5;
            do {
               uVar3 = (int)uVar4 + 1;
               uVar4 = (ulong)uVar3;
               if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x28 ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar4 * 4 )) {
                  if (uVar3 != uVar5) {
                     if (*(long*)( this + 8 ) == 0) {
                        *(uint*)( this + 0x28 ) = uVar3;
                     }
 else {
                        _resize_and_rehash(this, uVar3);
                     }

                  }

                  goto LAB_0011b6c9;
               }

            }
 while ( uVar3 != 0x1c );
         }

         _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
      }

      LAB_0011b6c9:if (( *(long*)( param_1 + 8 ) != 0 ) && ( plVar6 = *(long**)( param_1 + 0x18 ) ),plVar6 != (long*)0x0) {
         do {
            insert(local_48, (String*)this, (bool)( (char)plVar6 + '\x10' ));
            plVar6 = (long*)*plVar6;
         }
 while ( plVar6 != (long*)0x0 );
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<ShaderLanguage::ModeInfo>::_unref() */void CowData<ShaderLanguage::ModeInfo>::_unref(CowData<ShaderLanguage::ModeInfo> *this) {
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
               CowData<StringName>::_unref((CowData<StringName>*)( plVar4 + 2 ));
               if (( StringName::configured != '\0' ) && ( *plVar4 != 0 )) {
                  StringName::unref();
               }

               lVar5 = lVar5 + 1;
               plVar4 = plVar4 + 3;
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
/* HashMap<StringName, ShaderLanguage::FunctionInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::FunctionInfo> > >::_resize_and_rehash(unsigned int) */void HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>::_resize_and_rehash(HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>> *this, uint param_1) {
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
            ;;
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
/* CowData<unsigned int>::_realloc(long) */undefined8 CowData<unsigned_int>::_realloc(CowData<unsigned_int> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<unsigned int>::resize<false>(long) */undefined8 CowData<unsigned_int>::resize<false>(CowData<unsigned_int> *this, long param_1) {
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
      LAB_0011bda0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar8 == 0) goto LAB_0011bda0;
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
            goto LAB_0011bcb1;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_0011bcb1:puVar7[-1] = param_1;
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
/* HashMap<StringName, ShaderLanguage::BuiltInInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::BuiltInInfo> > >::_resize_and_rehash(unsigned int) */void HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>::_resize_and_rehash(HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>> *this, uint param_1) {
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
            ;;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, ShaderLanguage::BuiltInInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::BuiltInInfo> > >::insert(StringName const&, ShaderLanguage::BuiltInInfo const&,
   bool) */StringName *
HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
::insert(StringName *param_1,BuiltInInfo *param_2,bool param_3){
   uint *puVar1;
   uint uVar2;
   undefined8 *puVar3;
   long lVar4;
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
   ulong uVar21;
   long *plVar22;
   uint uVar23;
   uint uVar24;
   long *plVar25;
   long lVar26;
   undefined8 uVar27;
   void *__s_00;
   long *in_RCX;
   uint uVar28;
   int iVar29;
   undefined7 in_register_00000011;
   StringName *pSVar30;
   long lVar31;
   long lVar32;
   char in_R8B;
   uint uVar33;
   ulong uVar34;
   uint uVar35;
   ulong uVar36;
   long *plVar37;
   long in_FS_OFFSET;
   bool bVar38;
   long local_58;
   long local_50;
   long local_40;
   pSVar30 = (StringName*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar23 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   if (*(long*)( param_2 + 8 ) == 0) {
      uVar21 = (ulong)uVar23;
      uVar36 = uVar21 * 4;
      uVar34 = uVar21 * 8;
      uVar27 = Memory::alloc_static(uVar36, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar27;
      __s_00 = (void*)Memory::alloc_static(uVar34, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar23 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar34 ) ) && ( __s_00 < (void*)( (long)__s + uVar36 ) )) {
            uVar36 = 0;
            do {
               *(undefined4*)( (long)__s + uVar36 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar36 * 8 ) = 0;
               uVar36 = uVar36 + 1;
            }
 while ( uVar21 != uVar36 );
         }
 else {
            memset(__s, 0, uVar36);
            memset(__s_00, 0, uVar34);
         }

         goto LAB_0011c090;
      }

      iVar29 = *(int*)( param_2 + 0x2c );
      if (__s_00 == (void*)0x0) goto LAB_0011c1b0;
      if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_0011c09c;
      LAB_0011c1d2:if (*(int*)( param_2 + 0x28 ) == 0x1c) {
         plVar25 = (long*)0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_0011c171;
      }

      _resize_and_rehash((HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
   }
 else {
      LAB_0011c090:iVar29 = *(int*)( param_2 + 0x2c );
      if (iVar29 != 0) {
         LAB_0011c09c:uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
         uVar36 = CONCAT44(0, uVar2);
         lVar26 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         if (*(long*)pSVar30 == 0) {
            uVar24 = StringName::get_empty_hash();
         }
 else {
            uVar24 = *(uint*)( *(long*)pSVar30 + 0x20 );
         }

         if (uVar24 == 0) {
            uVar24 = 1;
         }

         uVar35 = 0;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = (ulong)uVar24 * lVar26;
         auVar13._8_8_ = 0;
         auVar13._0_8_ = uVar36;
         lVar31 = SUB168(auVar5 * auVar13, 8);
         uVar33 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar31 * 4 );
         uVar28 = SUB164(auVar5 * auVar13, 8);
         if (uVar33 != 0) {
            do {
               if (( uVar24 == uVar33 ) && ( *(long*)( *(long*)( *(long*)( param_2 + 8 ) + lVar31 * 8 ) + 0x10 ) == *(long*)pSVar30 )) {
                  plVar25 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar28 * 8 );
                  *(int*)( plVar25 + 3 ) = (int)*in_RCX;
                  *(undefined1*)( (long)plVar25 + 0x1c ) = *(undefined1*)( (long)in_RCX + 4 );
                  goto LAB_0011c171;
               }

               uVar35 = uVar35 + 1;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( ulong )(uVar28 + 1) * lVar26;
               auVar14._8_8_ = 0;
               auVar14._0_8_ = uVar36;
               lVar31 = SUB168(auVar6 * auVar14, 8);
               uVar33 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar31 * 4 );
               uVar28 = SUB164(auVar6 * auVar14, 8);
            }
 while ( ( uVar33 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar33 * lVar26,auVar15._8_8_ = 0,auVar15._0_8_ = uVar36,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar2 + uVar28 ) - SUB164(auVar7 * auVar15, 8)) * lVar26,auVar16._8_8_ = 0,auVar16._0_8_ = uVar36,uVar35 <= SUB164(auVar8 * auVar16, 8) );
         }

         iVar29 = *(int*)( param_2 + 0x2c );
      }

      LAB_0011c1b0:if ((float)uVar23 * __LC66 < (float)( iVar29 + 1 )) goto LAB_0011c1d2;
   }

   StringName::StringName((StringName*)&local_58, pSVar30);
   local_50 = *in_RCX;
   plVar25 = (long*)operator_new(0x20, "");
   *plVar25 = 0;
   plVar25[1] = 0;
   StringName::StringName((StringName*)( plVar25 + 2 ), (StringName*)&local_58);
   bVar38 = StringName::configured != '\0';
   plVar25[3] = local_50;
   if (( bVar38 ) && ( local_58 != 0 )) {
      StringName::unref();
   }

   puVar3 = *(undefined8**)( param_2 + 0x20 );
   if (puVar3 == (undefined8*)0x0) {
      *(long**)( param_2 + 0x18 ) = plVar25;
      *(long**)( param_2 + 0x20 ) = plVar25;
      LAB_0011c27e:lVar26 = *(long*)pSVar30;
      if (lVar26 != 0) goto LAB_0011c28b;
      LAB_0011c398:uVar23 = StringName::get_empty_hash();
   }
 else {
      if (in_R8B != '\0') {
         lVar26 = *(long*)( param_2 + 0x18 );
         *(long**)( lVar26 + 8 ) = plVar25;
         *plVar25 = lVar26;
         *(long**)( param_2 + 0x18 ) = plVar25;
         goto LAB_0011c27e;
      }

      *puVar3 = plVar25;
      plVar25[1] = (long)puVar3;
      lVar26 = *(long*)pSVar30;
      *(long**)( param_2 + 0x20 ) = plVar25;
      if (lVar26 == 0) goto LAB_0011c398;
      LAB_0011c28b:uVar23 = *(uint*)( lVar26 + 0x20 );
   }

   lVar26 = *(long*)( param_2 + 0x10 );
   if (uVar23 == 0) {
      uVar23 = 1;
   }

   uVar36 = (ulong)uVar23;
   uVar33 = 0;
   lVar31 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar34 = CONCAT44(0, uVar2);
   auVar9._8_8_ = 0;
   auVar9._0_8_ = uVar36 * lVar31;
   auVar17._8_8_ = 0;
   auVar17._0_8_ = uVar34;
   lVar32 = SUB168(auVar9 * auVar17, 8);
   lVar4 = *(long*)( param_2 + 8 );
   puVar1 = (uint*)( lVar26 + lVar32 * 4 );
   iVar29 = SUB164(auVar9 * auVar17, 8);
   uVar24 = *puVar1;
   plVar22 = plVar25;
   while (uVar24 != 0) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar24 * lVar31;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar34;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = ( ulong )(( uVar2 + iVar29 ) - SUB164(auVar10 * auVar18, 8)) * lVar31;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar34;
      uVar23 = SUB164(auVar11 * auVar19, 8);
      plVar37 = plVar22;
      if (uVar23 < uVar33) {
         *puVar1 = (uint)uVar36;
         uVar36 = (ulong)uVar24;
         puVar3 = (undefined8*)( lVar4 + lVar32 * 8 );
         plVar37 = (long*)*puVar3;
         *puVar3 = plVar22;
         uVar33 = uVar23;
      }

      uVar23 = (uint)uVar36;
      uVar33 = uVar33 + 1;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(iVar29 + 1) * lVar31;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar34;
      lVar32 = SUB168(auVar12 * auVar20, 8);
      puVar1 = (uint*)( lVar26 + lVar32 * 4 );
      iVar29 = SUB164(auVar12 * auVar20, 8);
      plVar22 = plVar37;
      uVar24 = *puVar1;
   }
;
   ;;
   *(long**)( lVar4 + lVar32 * 8 ) = plVar22;
   *puVar1 = uVar23;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_0011c171:*(long**)param_1 = plVar25;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HashMap<StringName, ShaderLanguage::StageFunctionInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::StageFunctionInfo> > >::_resize_and_rehash(unsigned int) */void HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>::_resize_and_rehash(HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>> *this, uint param_1) {
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
            ;;
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
/* CowData<ShaderLanguage::StageFunctionInfo::Argument>::_unref() */void CowData<ShaderLanguage::StageFunctionInfo::Argument>::_unref(CowData<ShaderLanguage::StageFunctionInfo::Argument> *this) {
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
               plVar4 = plVar4 + 2;
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
/* CowData<ShaderLanguage::StageFunctionInfo::Argument>::_ref(CowData<ShaderLanguage::StageFunctionInfo::Argument>
   const&) [clone .part.0] */void CowData<ShaderLanguage::StageFunctionInfo::Argument>::_ref(CowData<ShaderLanguage::StageFunctionInfo::Argument> *this, CowData *param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, ShaderLanguage::StageFunctionInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::StageFunctionInfo> > >::insert(StringName const&,
   ShaderLanguage::StageFunctionInfo const&, bool) */StringName *
HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
::insert(StringName *param_1,StageFunctionInfo *param_2,bool param_3){
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
   long *plVar25;
   long lVar26;
   undefined8 uVar27;
   void *__s_00;
   long in_RCX;
   uint uVar28;
   int iVar29;
   undefined7 in_register_00000011;
   StringName *pSVar30;
   long lVar31;
   long lVar32;
   char in_R8B;
   uint uVar33;
   ulong uVar34;
   uint uVar35;
   ulong uVar36;
   long *plVar37;
   long in_FS_OFFSET;
   long local_68[2];
   long local_58;
   undefined4 local_50;
   long local_48;
   long local_40;
   pSVar30 = (StringName*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar23 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   if (*(long*)( param_2 + 8 ) == 0) {
      uVar22 = (ulong)uVar23;
      uVar36 = uVar22 * 4;
      uVar34 = uVar22 * 8;
      uVar27 = Memory::alloc_static(uVar36, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar27;
      __s_00 = (void*)Memory::alloc_static(uVar34, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar23 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar34 ) ) && ( __s_00 < (void*)( (long)__s + uVar36 ) )) {
            uVar36 = 0;
            do {
               *(undefined4*)( (long)__s + uVar36 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar36 * 8 ) = 0;
               uVar36 = uVar36 + 1;
            }
 while ( uVar22 != uVar36 );
         }
 else {
            memset(__s, 0, uVar36);
            memset(__s_00, 0, uVar34);
         }

         goto LAB_0011c850;
      }

      iVar29 = *(int*)( param_2 + 0x2c );
      if (__s_00 == (void*)0x0) goto LAB_0011c978;
      if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_0011c85c;
      LAB_0011c99a:if (*(int*)( param_2 + 0x28 ) == 0x1c) {
         plVar25 = (long*)0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_0011cbd6;
      }

      _resize_and_rehash((HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
   }
 else {
      LAB_0011c850:iVar29 = *(int*)( param_2 + 0x2c );
      if (iVar29 != 0) {
         LAB_0011c85c:uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
         uVar36 = CONCAT44(0, uVar3);
         lVar26 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         if (*(long*)pSVar30 == 0) {
            uVar24 = StringName::get_empty_hash();
         }
 else {
            uVar24 = *(uint*)( *(long*)pSVar30 + 0x20 );
         }

         if (uVar24 == 0) {
            uVar24 = 1;
         }

         uVar35 = 0;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = (ulong)uVar24 * lVar26;
         auVar14._8_8_ = 0;
         auVar14._0_8_ = uVar36;
         lVar31 = SUB168(auVar6 * auVar14, 8);
         uVar33 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar31 * 4 );
         uVar28 = SUB164(auVar6 * auVar14, 8);
         if (uVar33 != 0) {
            do {
               if (( uVar33 == uVar24 ) && ( *(long*)( *(long*)( *(long*)( param_2 + 8 ) + lVar31 * 8 ) + 0x10 ) == *(long*)pSVar30 )) {
                  lVar26 = *(long*)( *(long*)( param_2 + 8 ) + (ulong)uVar28 * 8 );
                  if (*(long*)( lVar26 + 0x20 ) != *(long*)( in_RCX + 8 )) {
                     CowData<ShaderLanguage::StageFunctionInfo::Argument>::_ref((CowData<ShaderLanguage::StageFunctionInfo::Argument>*)( lVar26 + 0x20 ), (CowData*)( in_RCX + 8 ));
                  }

                  *(undefined4*)( lVar26 + 0x28 ) = *(undefined4*)( in_RCX + 0x10 );
                  if (*(long*)( lVar26 + 0x30 ) != *(long*)( in_RCX + 0x18 )) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( lVar26 + 0x30 ), (CowData*)( in_RCX + 0x18 ));
                  }

                  plVar25 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar28 * 8 );
                  goto LAB_0011cbd6;
               }

               uVar35 = uVar35 + 1;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(uVar28 + 1) * lVar26;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = uVar36;
               lVar31 = SUB168(auVar7 * auVar15, 8);
               uVar33 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar31 * 4 );
               uVar28 = SUB164(auVar7 * auVar15, 8);
            }
 while ( ( uVar33 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar33 * lVar26,auVar16._8_8_ = 0,auVar16._0_8_ = uVar36,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar3 + uVar28 ) - SUB164(auVar8 * auVar16, 8)) * lVar26,auVar17._8_8_ = 0,auVar17._0_8_ = uVar36,uVar35 <= SUB164(auVar9 * auVar17, 8) );
         }

         iVar29 = *(int*)( param_2 + 0x2c );
      }

      LAB_0011c978:if ((float)uVar23 * __LC66 < (float)( iVar29 + 1 )) goto LAB_0011c99a;
   }

   StringName::StringName((StringName*)local_68, pSVar30);
   local_58 = 0;
   if (*(long*)( in_RCX + 8 ) != 0) {
      CowData<ShaderLanguage::StageFunctionInfo::Argument>::_ref((CowData<ShaderLanguage::StageFunctionInfo::Argument>*)&local_58, (CowData*)( in_RCX + 8 ));
   }

   local_50 = *(undefined4*)( in_RCX + 0x10 );
   local_48 = 0;
   if (*(long*)( in_RCX + 0x18 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)( in_RCX + 0x18 ));
   }

   plVar25 = (long*)operator_new(0x38, "");
   *plVar25 = 0;
   plVar25[1] = 0;
   StringName::StringName((StringName*)( plVar25 + 2 ), (StringName*)local_68);
   plVar25[4] = 0;
   if (local_58 != 0) {
      CowData<ShaderLanguage::StageFunctionInfo::Argument>::_ref((CowData<ShaderLanguage::StageFunctionInfo::Argument>*)( plVar25 + 4 ), (CowData*)&local_58);
   }

   plVar25[6] = 0;
   *(undefined4*)( plVar25 + 5 ) = local_50;
   if (( local_48 != 0 ) && ( CowData<char32_t>::_ref((CowData<char32_t>*)( plVar25 + 6 ), (CowData*)&local_48),lVar26 = local_48,local_48 != 0 )) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar26 + -0x10 ), false);
      }

   }

   CowData<ShaderLanguage::StageFunctionInfo::Argument>::_unref((CowData<ShaderLanguage::StageFunctionInfo::Argument>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68[0] != 0 )) {
      StringName::unref();
   }

   puVar4 = *(undefined8**)( param_2 + 0x20 );
   if (puVar4 == (undefined8*)0x0) {
      *(long**)( param_2 + 0x18 ) = plVar25;
      *(long**)( param_2 + 0x20 ) = plVar25;
      LAB_0011cadb:lVar26 = *(long*)pSVar30;
      if (lVar26 != 0) goto LAB_0011cae8;
      LAB_0011cc2c:uVar23 = StringName::get_empty_hash();
   }
 else {
      if (in_R8B == '\0') {
         *puVar4 = plVar25;
         plVar25[1] = (long)puVar4;
         *(long**)( param_2 + 0x20 ) = plVar25;
         goto LAB_0011cadb;
      }

      lVar26 = *(long*)( param_2 + 0x18 );
      *(long**)( lVar26 + 8 ) = plVar25;
      *plVar25 = lVar26;
      lVar26 = *(long*)pSVar30;
      *(long**)( param_2 + 0x18 ) = plVar25;
      if (lVar26 == 0) goto LAB_0011cc2c;
      LAB_0011cae8:uVar23 = *(uint*)( lVar26 + 0x20 );
   }

   lVar26 = *(long*)( param_2 + 0x10 );
   if (uVar23 == 0) {
      uVar23 = 1;
   }

   uVar36 = (ulong)uVar23;
   uVar33 = 0;
   lVar31 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar34 = CONCAT44(0, uVar3);
   auVar10._8_8_ = 0;
   auVar10._0_8_ = uVar36 * lVar31;
   auVar18._8_8_ = 0;
   auVar18._0_8_ = uVar34;
   lVar32 = SUB168(auVar10 * auVar18, 8);
   lVar5 = *(long*)( param_2 + 8 );
   puVar2 = (uint*)( lVar26 + lVar32 * 4 );
   iVar29 = SUB164(auVar10 * auVar18, 8);
   uVar24 = *puVar2;
   plVar1 = plVar25;
   while (uVar24 != 0) {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar24 * lVar31;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar34;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(( uVar3 + iVar29 ) - SUB164(auVar11 * auVar19, 8)) * lVar31;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar34;
      uVar23 = SUB164(auVar12 * auVar20, 8);
      plVar37 = plVar1;
      if (uVar23 < uVar33) {
         *puVar2 = (uint)uVar36;
         uVar36 = (ulong)uVar24;
         puVar4 = (undefined8*)( lVar5 + lVar32 * 8 );
         plVar37 = (long*)*puVar4;
         *puVar4 = plVar1;
         uVar33 = uVar23;
      }

      uVar23 = (uint)uVar36;
      uVar33 = uVar33 + 1;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = ( ulong )(iVar29 + 1) * lVar31;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar34;
      lVar32 = SUB168(auVar13 * auVar21, 8);
      puVar2 = (uint*)( lVar26 + lVar32 * 4 );
      iVar29 = SUB164(auVar13 * auVar21, 8);
      plVar1 = plVar37;
      uVar24 = *puVar2;
   }
;
   ;;
   *(long**)( lVar5 + lVar32 * 8 ) = plVar1;
   *puVar2 = uVar23;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_0011cbd6:*(long**)param_1 = plVar25;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* KeyValue<StringName, ShaderLanguage::FunctionInfo>::~KeyValue() */void KeyValue<StringName,ShaderLanguage::FunctionInfo>::~KeyValue(KeyValue<StringName,ShaderLanguage::FunctionInfo> *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   void *pvVar5;
   bool bVar6;
   pvVar5 = *(void**)( this + 0x40 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( this + 100 ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x60 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 100 ) = 0;
            *(undefined1(*) [16])( this + 0x50 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x48 ) + lVar4 ) != 0) {
                  pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                  *(int*)( *(long*)( this + 0x48 ) + lVar4 ) = 0;
                  if (*(long*)( (long)pvVar5 + 0x30 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x30 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x30 );
                        *(undefined8*)( (long)pvVar5 + 0x30 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  CowData<ShaderLanguage::StageFunctionInfo::Argument>::_unref((CowData<ShaderLanguage::StageFunctionInfo::Argument>*)( (long)pvVar5 + 0x20 ));
                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar5 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar5, false);
                  pvVar5 = *(void**)( this + 0x40 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( (ulong)uVar2 << 2 != lVar4 );
            *(undefined4*)( this + 100 ) = 0;
            *(undefined1(*) [16])( this + 0x50 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_0011ce77;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x48 ), false);
   }

   LAB_0011ce77:pvVar5 = *(void**)( this + 0x10 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( this + 0x34 ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x30 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x34 ) = 0;
            *(undefined1(*) [16])( this + 0x20 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x18 ) + lVar4 ) != 0) {
                  bVar6 = StringName::configured != '\0';
                  *(int*)( *(long*)( this + 0x18 ) + lVar4 ) = 0;
                  pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                  if (( bVar6 ) && ( *(long*)( (long)pvVar5 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar5, false);
                  pvVar5 = *(void**)( this + 0x10 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( lVar4 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x34 ) = 0;
            *(undefined1(*) [16])( this + 0x20 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_0011cf1a;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x18 ), false);
   }

   LAB_0011cf1a:if (( StringName::configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }

   return;
}
/* ShaderLanguage::ShaderCompileInfo::~ShaderCompileInfo() */void ShaderLanguage::ShaderCompileInfo::~ShaderCompileInfo(ShaderCompileInfo *this) {
   long *plVar1;
   long *plVar2;
   uint uVar3;
   long lVar4;
   long lVar5;
   void *pvVar6;
   pvVar6 = *(void**)( this + 0x58 );
   if (pvVar6 != (void*)0x0) {
      if (( *(int*)( this + 0x7c ) != 0 ) && ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x78 ) * 4 ) == 0 || ( memset(*(void**)( this + 0x70 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x78 ) * 4 ) << 2),*(int*)( this + 0x7c ) != 0 ) ) )) {
         lVar5 = 0;
         do {
            plVar2 = (long*)( (long)pvVar6 + lVar5 * 8 );
            if (*plVar2 != 0) {
               LOCK();
               plVar1 = (long*)( *plVar2 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar4 = *plVar2;
                  *plVar2 = 0;
                  Memory::free_static((void*)( lVar4 + -0x10 ), false);
               }

               pvVar6 = *(void**)( this + 0x58 );
            }

            lVar5 = lVar5 + 1;
         }
 while ( (uint)lVar5 < *(uint*)( this + 0x7c ) );
         *(undefined4*)( this + 0x7c ) = 0;
         if (pvVar6 == (void*)0x0) goto LAB_0011d056;
      }

      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0x68 ), false);
      Memory::free_static(*(void**)( this + 0x60 ), false);
      Memory::free_static(*(void**)( this + 0x70 ), false);
   }

   LAB_0011d056:if (( ( ( StringName::configured != '\0' ) && ( ( *(long*)( this + 0x50 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( *(long*)( this + 0x48 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( *(long*)( this + 0x40 ) != 0 )) {
      StringName::unref();
   }

   CowData<ShaderLanguage::ModeInfo>::_unref((CowData<ShaderLanguage::ModeInfo>*)( this + 0x38 ));
   pvVar6 = *(void**)( this + 8 );
   if (pvVar6 == (void*)0x0) {
      return;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (uVar3 == 0) {
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
      }
 else {
         lVar5 = 0;
         do {
            if (*(int*)( *(long*)( this + 0x10 ) + lVar5 ) != 0) {
               pvVar6 = *(void**)( (long)pvVar6 + lVar5 * 2 );
               *(int*)( *(long*)( this + 0x10 ) + lVar5 ) = 0;
               KeyValue<StringName,ShaderLanguage::FunctionInfo>::~KeyValue((KeyValue<StringName,ShaderLanguage::FunctionInfo>*)( (long)pvVar6 + 0x10 ));
               Memory::free_static(pvVar6, false);
               pvVar6 = *(void**)( this + 8 );
               *(undefined8*)( (long)pvVar6 + lVar5 * 2 ) = 0;
            }

            lVar5 = lVar5 + 4;
         }
 while ( lVar5 != (ulong)uVar3 << 2 );
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
         if (pvVar6 == (void*)0x0) {
            return;
         }

      }

   }

   Memory::free_static(pvVar6, false);
   Memory::free_static(*(void**)( this + 0x10 ), false);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, ShaderLanguage::FunctionInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::FunctionInfo> > >::insert(StringName const&, ShaderLanguage::FunctionInfo const&,
   bool) */StringName *
HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
::insert(StringName *param_1,FunctionInfo *param_2,bool param_3){
   HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>> *this;
   HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>> *this_00;
   uint *puVar1;
   ulong __n;
   undefined8 *puVar2;
   long lVar3;
   void *__s;
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
   uint uVar20;
   uint uVar21;
   ulong uVar22;
   long *plVar23;
   long lVar24;
   undefined8 uVar25;
   void *pvVar26;
   ulong uVar27;
   int *piVar28;
   HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>> *in_RCX;
   int iVar29;
   undefined7 in_register_00000011;
   StringName *pSVar30;
   long lVar31;
   long lVar32;
   uint uVar33;
   char in_R8B;
   uint uVar34;
   uint uVar35;
   long *plVar36;
   long *plVar37;
   long in_FS_OFFSET;
   StringName local_d0[8];
   undefined1 local_c8[16];
   StringName local_b8[8];
   BuiltInInfo local_b0[8];
   undefined1 local_a8[16];
   undefined1 local_98[16];
   undefined8 local_88;
   StageFunctionInfo local_80[8];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined8 local_58;
   undefined2 local_50;
   long local_40;
   pSVar30 = (StringName*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar21 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar22 = (ulong)uVar21;
   if (*(long*)( param_2 + 8 ) == 0) {
      uVar27 = uVar22 * 4;
      __n = uVar22 * 8;
      uVar25 = Memory::alloc_static(uVar27, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar25;
      pvVar26 = (void*)Memory::alloc_static(__n, false);
      *(void**)( param_2 + 8 ) = pvVar26;
      if (uVar21 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)pvVar26 + __n ) ) && ( pvVar26 < (void*)( (long)__s + uVar27 ) )) {
            uVar27 = 0;
            do {
               *(undefined4*)( (long)__s + uVar27 * 4 ) = 0;
               *(undefined8*)( (long)pvVar26 + uVar27 * 8 ) = 0;
               uVar27 = uVar27 + 1;
            }
 while ( uVar22 != uVar27 );
         }
 else {
            memset(__s, 0, uVar27);
            memset(pvVar26, 0, __n);
         }

         goto LAB_0011d1fb;
      }

      iVar29 = *(int*)( param_2 + 0x2c );
      if (pvVar26 == (void*)0x0) goto LAB_0011d49b;
      if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_0011d20b;
      LAB_0011d4bd:if (*(int*)( param_2 + 0x28 ) == 0x1c) {
         plVar23 = (long*)0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_0011d967;
      }

      _resize_and_rehash((HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
   }
 else {
      LAB_0011d1fb:iVar29 = *(int*)( param_2 + 0x2c );
      if (iVar29 != 0) {
         LAB_0011d20b:uVar21 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
         uVar27 = CONCAT44(0, uVar21);
         lVar24 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         if (*(long*)pSVar30 == 0) {
            uVar20 = StringName::get_empty_hash();
         }
 else {
            uVar20 = *(uint*)( *(long*)pSVar30 + 0x20 );
         }

         if (uVar20 == 0) {
            uVar20 = 1;
         }

         uVar35 = 0;
         auVar4._8_8_ = 0;
         auVar4._0_8_ = (ulong)uVar20 * lVar24;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = uVar27;
         lVar31 = SUB168(auVar4 * auVar12, 8);
         uVar34 = SUB164(auVar4 * auVar12, 8);
         uVar33 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar31 * 4 );
         if (uVar33 != 0) {
            do {
               if (( uVar33 == uVar20 ) && ( *(long*)( *(long*)( *(long*)( param_2 + 8 ) + lVar31 * 8 ) + 0x10 ) == *(long*)pSVar30 )) {
                  lVar24 = *(long*)( *(long*)( param_2 + 8 ) + (ulong)uVar34 * 8 );
                  this(HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>> * )(lVar24 + 0x18);
                  if (in_RCX != this) {
                     uVar21 = *(uint*)( lVar24 + 0x40 );
                     uVar20 = *(uint*)( hash_table_size_primes + (ulong)uVar21 * 4 );
                     if (( *(int*)( lVar24 + 0x44 ) != 0 ) && ( *(long*)( lVar24 + 0x20 ) != 0 )) {
                        if (uVar20 != 0) {
                           lVar31 = 0;
                           do {
                              piVar28 = (int*)( *(long*)( lVar24 + 0x28 ) + lVar31 );
                              if (*piVar28 != 0) {
                                 *piVar28 = 0;
                                 pvVar26 = *(void**)( *(long*)( lVar24 + 0x20 ) + lVar31 * 2 );
                                 if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar26 + 0x10 ) != 0 )) {
                                    StringName::unref();
                                 }

                                 Memory::free_static(pvVar26, false);
                                 *(undefined8*)( *(long*)( lVar24 + 0x20 ) + lVar31 * 2 ) = 0;
                              }

                              lVar31 = lVar31 + 4;
                           }
 while ( (ulong)uVar20 * 4 - lVar31 != 0 );
                           uVar21 = *(uint*)( lVar24 + 0x40 );
                           uVar20 = *(uint*)( hash_table_size_primes + (ulong)uVar21 * 4 );
                        }

                        *(undefined4*)( lVar24 + 0x44 ) = 0;
                        *(undefined1(*) [16])( lVar24 + 0x30 ) = (undefined1[16])0x0;
                     }

                     if (uVar20 < *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RCX + 0x28 ) * 4 )) {
                        if (uVar21 != 0x1c) {
                           uVar22 = (ulong)uVar21;
                           do {
                              uVar20 = (int)uVar22 + 1;
                              uVar22 = (ulong)uVar20;
                              if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RCX + 0x28 ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar22 * 4 )) {
                                 if (uVar20 != uVar21) {
                                    if (*(long*)( lVar24 + 0x20 ) == 0) {
                                       *(uint*)( lVar24 + 0x40 ) = uVar20;
                                    }
 else {
                                       HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>::_resize_and_rehash(this, uVar20);
                                    }

                                 }

                                 goto LAB_0011d373;
                              }

                           }
 while ( uVar20 != 0x1c );
                        }

                        _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
                     }

                     LAB_0011d373:if (( *(long*)( in_RCX + 8 ) != 0 ) && ( plVar23 = *(long**)( in_RCX + 0x18 ) ),plVar23 != (long*)0x0) {
                        do {
                           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>::insert((StringName*)local_c8, (BuiltInInfo*)this, (bool)( (char)plVar23 + '\x10' ));
                           plVar23 = (long*)*plVar23;
                        }
 while ( plVar23 != (long*)0x0 );
                     }

                  }

                  this_00 = (HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>*)( lVar24 + 0x48 );
                  if (this_00 != (HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>*)( in_RCX + 0x30 )) {
                     uVar21 = *(uint*)( lVar24 + 0x70 );
                     uVar20 = *(uint*)( hash_table_size_primes + (ulong)uVar21 * 4 );
                     if (( *(int*)( lVar24 + 0x74 ) != 0 ) && ( *(long*)( lVar24 + 0x50 ) != 0 )) {
                        if (uVar20 != 0) {
                           lVar31 = 0;
                           do {
                              piVar28 = (int*)( *(long*)( lVar24 + 0x58 ) + lVar31 );
                              if (*piVar28 != 0) {
                                 *piVar28 = 0;
                                 pvVar26 = *(void**)( *(long*)( lVar24 + 0x50 ) + lVar31 * 2 );
                                 if (*(long*)( (long)pvVar26 + 0x30 ) != 0) {
                                    LOCK();
                                    plVar23 = (long*)( *(long*)( (long)pvVar26 + 0x30 ) + -0x10 );
                                    *plVar23 = *plVar23 + -1;
                                    UNLOCK();
                                    if (*plVar23 == 0) {
                                       lVar3 = *(long*)( (long)pvVar26 + 0x30 );
                                       *(undefined8*)( (long)pvVar26 + 0x30 ) = 0;
                                       Memory::free_static((void*)( lVar3 + -0x10 ), false);
                                    }

                                 }

                                 CowData<ShaderLanguage::StageFunctionInfo::Argument>::_unref((CowData<ShaderLanguage::StageFunctionInfo::Argument>*)( (long)pvVar26 + 0x20 ));
                                 if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar26 + 0x10 ) != 0 )) {
                                    StringName::unref();
                                 }

                                 Memory::free_static(pvVar26, false);
                                 *(undefined8*)( *(long*)( lVar24 + 0x50 ) + lVar31 * 2 ) = 0;
                              }

                              lVar31 = lVar31 + 4;
                           }
 while ( lVar31 != (ulong)uVar20 * 4 );
                           uVar21 = *(uint*)( lVar24 + 0x70 );
                           uVar20 = *(uint*)( hash_table_size_primes + (ulong)uVar21 * 4 );
                        }

                        *(undefined4*)( lVar24 + 0x74 ) = 0;
                        *(undefined1(*) [16])( lVar24 + 0x60 ) = (undefined1[16])0x0;
                     }

                     if (uVar20 < *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RCX + 0x58 ) * 4 )) {
                        if (uVar21 != 0x1c) {
                           uVar22 = (ulong)uVar21;
                           do {
                              uVar20 = (int)uVar22 + 1;
                              uVar22 = (ulong)uVar20;
                              if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RCX + 0x58 ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar22 * 4 )) {
                                 if (uVar20 != uVar21) {
                                    if (*(long*)( lVar24 + 0x50 ) == 0) {
                                       *(uint*)( lVar24 + 0x70 ) = uVar20;
                                    }
 else {
                                       HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>::_resize_and_rehash(this_00, uVar20);
                                    }

                                 }

                                 goto LAB_0011d432;
                              }

                           }
 while ( uVar20 != 0x1c );
                        }

                        _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
                     }

                     LAB_0011d432:if (( *(long*)( in_RCX + 0x38 ) != 0 ) && ( plVar23 = *(long**)( in_RCX + 0x48 ) ),plVar23 != (long*)0x0) {
                        do {
                           HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>::insert((StringName*)local_c8, (StageFunctionInfo*)this_00, (bool)( (char)plVar23 + '\x10' ));
                           plVar23 = (long*)*plVar23;
                        }
 while ( plVar23 != (long*)0x0 );
                     }

                  }

                  lVar31 = *(long*)( param_2 + 8 );
                  *(undefined2*)( lVar24 + 0x78 ) = *(undefined2*)( in_RCX + 0x60 );
                  plVar23 = *(long**)( lVar31 + (ulong)uVar34 * 8 );
                  goto LAB_0011d967;
               }

               uVar35 = uVar35 + 1;
               auVar5._8_8_ = 0;
               auVar5._0_8_ = ( ulong )(uVar34 + 1) * lVar24;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = uVar27;
               lVar31 = SUB168(auVar5 * auVar13, 8);
               uVar33 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar31 * 4 );
               uVar34 = SUB164(auVar5 * auVar13, 8);
            }
 while ( ( uVar33 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar33 * lVar24,auVar14._8_8_ = 0,auVar14._0_8_ = uVar27,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar21 + uVar34 ) - SUB164(auVar6 * auVar14, 8)) * lVar24,auVar15._8_8_ = 0,auVar15._0_8_ = uVar27,uVar35 <= SUB164(auVar7 * auVar15, 8) );
         }

         iVar29 = *(int*)( param_2 + 0x2c );
      }

      LAB_0011d49b:if ((float)uVar22 * __LC66 < (float)( iVar29 + 1 )) goto LAB_0011d4bd;
   }

   local_c8 = (undefined1[16])0x0;
   StringName::StringName(local_b8, pSVar30);
   local_88 = 0;
   local_a8 = (undefined1[16])0x0;
   local_98 = (undefined1[16])0x0;
   uVar22 = 1;
   if (5 < *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RCX + 0x28 ) * 4 )) {
      do {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RCX + 0x28 ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar22 * 4 )) {
            local_88 = uVar22 & 0xffffffff;
            iVar29 = *(int*)( in_RCX + 0x2c );
            goto joined_r0x0011da51;
         }

         uVar22 = uVar22 + 1;
      }
 while ( uVar22 != 0x1d );
      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   }

   iVar29 = *(int*)( in_RCX + 0x2c );
   joined_r0x0011da51:if (( iVar29 != 0 ) && ( plVar23 = *(long**)( in_RCX + 0x18 ) ),plVar23 != (long*)0x0) {
      do {
         HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>::insert(local_d0, local_b0, (bool)( (char)plVar23 + '\x10' ));
         plVar23 = (long*)*plVar23;
      }
 while ( plVar23 != (long*)0x0 );
   }

   local_58 = 0;
   local_78 = (undefined1[16])0x0;
   local_68 = (undefined1[16])0x0;
   uVar22 = 1;
   if (5 < *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RCX + 0x58 ) * 4 )) {
      do {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RCX + 0x58 ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar22 * 4 )) {
            local_58 = uVar22 & 0xffffffff;
            iVar29 = *(int*)( in_RCX + 0x5c );
            goto joined_r0x0011d9eb;
         }

         uVar22 = uVar22 + 1;
      }
 while ( uVar22 != 0x1d );
      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   }

   iVar29 = *(int*)( in_RCX + 0x5c );
   joined_r0x0011d9eb:if (( iVar29 != 0 ) && ( plVar23 = *(long**)( in_RCX + 0x48 ) ),plVar23 != (long*)0x0) {
      do {
         HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>::insert(local_d0, local_80, (bool)( (char)plVar23 + '\x10' ));
         plVar23 = (long*)*plVar23;
      }
 while ( plVar23 != (long*)0x0 );
   }

   local_50 = *(undefined2*)( in_RCX + 0x60 );
   plVar23 = (long*)operator_new(0x80, "");
   *plVar23 = local_c8._0_8_;
   plVar23[1] = local_c8._8_8_;
   StringName::StringName((StringName*)( plVar23 + 2 ), local_b8);
   plVar23[8] = 0;
   *(undefined1(*) [16])( plVar23 + 4 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( plVar23 + 6 ) = (undefined1[16])0x0;
   lVar24 = 1;
   if (5 < *(uint*)( hash_table_size_primes + ( local_88 & 0xffffffff ) * 4 )) {
      do {
         if (*(uint*)( hash_table_size_primes + ( local_88 & 0xffffffff ) * 4 ) <= *(uint*)( hash_table_size_primes + lVar24 * 4 )) {
            *(int*)( plVar23 + 8 ) = (int)lVar24;
            goto joined_r0x0011da0c;
         }

         lVar24 = lVar24 + 1;
      }
 while ( lVar24 != 0x1d );
      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   }

   joined_r0x0011da0c:if (( local_88._4_4_ != 0 ) && ( (long*)local_98._0_8_ != (long*)0x0 )) {
      plVar37 = (long*)local_98._0_8_;
      do {
         HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>::insert(local_d0, (BuiltInInfo*)( plVar23 + 3 ), (bool)( (char)plVar37 + '\x10' ));
         plVar37 = (long*)*plVar37;
      }
 while ( plVar37 != (long*)0x0 );
   }

   plVar23[0xe] = 0;
   *(undefined1(*) [16])( plVar23 + 10 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( plVar23 + 0xc ) = (undefined1[16])0x0;
   lVar24 = 1;
   if (5 < *(uint*)( hash_table_size_primes + ( local_58 & 0xffffffff ) * 4 )) {
      do {
         if (*(uint*)( hash_table_size_primes + ( local_58 & 0xffffffff ) * 4 ) <= *(uint*)( hash_table_size_primes + lVar24 * 4 )) {
            *(int*)( plVar23 + 0xe ) = (int)lVar24;
            goto joined_r0x0011da2c;
         }

         lVar24 = lVar24 + 1;
      }
 while ( lVar24 != 0x1d );
      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   }

   joined_r0x0011da2c:if (( local_58._4_4_ != 0 ) && ( (long*)local_68._0_8_ != (long*)0x0 )) {
      plVar37 = (long*)local_68._0_8_;
      do {
         HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>::insert(local_d0, (StageFunctionInfo*)( plVar23 + 9 ), (bool)( (char)plVar37 + '\x10' ));
         plVar37 = (long*)*plVar37;
      }
 while ( plVar37 != (long*)0x0 );
   }

   *(undefined2*)( plVar23 + 0xf ) = local_50;
   KeyValue<StringName,ShaderLanguage::FunctionInfo>::~KeyValue((KeyValue<StringName,ShaderLanguage::FunctionInfo>*)local_b8);
   puVar2 = *(undefined8**)( param_2 + 0x20 );
   if (puVar2 == (undefined8*)0x0) {
      *(long**)( param_2 + 0x18 ) = plVar23;
      *(long**)( param_2 + 0x20 ) = plVar23;
      LAB_0011d867:lVar24 = *(long*)pSVar30;
      if (lVar24 != 0) goto LAB_0011d878;
      LAB_0011d9c5:uVar21 = StringName::get_empty_hash();
   }
 else {
      if (in_R8B == '\0') {
         *puVar2 = plVar23;
         plVar23[1] = (long)puVar2;
         *(long**)( param_2 + 0x20 ) = plVar23;
         goto LAB_0011d867;
      }

      lVar24 = *(long*)( param_2 + 0x18 );
      *(long**)( lVar24 + 8 ) = plVar23;
      *plVar23 = lVar24;
      *(long**)( param_2 + 0x18 ) = plVar23;
      lVar24 = *(long*)pSVar30;
      if (lVar24 == 0) goto LAB_0011d9c5;
      LAB_0011d878:uVar21 = *(uint*)( lVar24 + 0x20 );
   }

   if (uVar21 == 0) {
      uVar21 = 1;
   }

   uVar22 = (ulong)uVar21;
   uVar34 = 0;
   lVar24 = *(long*)( param_2 + 0x10 );
   lVar31 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   uVar20 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar27 = CONCAT44(0, uVar20);
   auVar8._8_8_ = 0;
   auVar8._0_8_ = uVar22 * lVar31;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = uVar27;
   lVar32 = SUB168(auVar8 * auVar16, 8);
   lVar3 = *(long*)( param_2 + 8 );
   puVar1 = (uint*)( lVar24 + lVar32 * 4 );
   iVar29 = SUB164(auVar8 * auVar16, 8);
   uVar33 = *puVar1;
   plVar37 = plVar23;
   while (uVar33 != 0) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar33 * lVar31;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar27;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = ( ulong )(( iVar29 + uVar20 ) - SUB164(auVar9 * auVar17, 8)) * lVar31;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar27;
      uVar21 = SUB164(auVar10 * auVar18, 8);
      plVar36 = plVar37;
      if (uVar21 < uVar34) {
         *puVar1 = (uint)uVar22;
         uVar22 = (ulong)uVar33;
         puVar2 = (undefined8*)( lVar3 + lVar32 * 8 );
         plVar36 = (long*)*puVar2;
         *puVar2 = plVar37;
         uVar34 = uVar21;
      }

      uVar21 = (uint)uVar22;
      uVar34 = uVar34 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = ( ulong )(iVar29 + 1) * lVar31;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar27;
      lVar32 = SUB168(auVar11 * auVar19, 8);
      puVar1 = (uint*)( lVar24 + lVar32 * 4 );
      iVar29 = SUB164(auVar11 * auVar19, 8);
      plVar37 = plVar36;
      uVar33 = *puVar1;
   }
;
   ;;
   *(long**)( lVar3 + lVar32 * 8 ) = plVar37;
   *puVar1 = uVar21;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_0011d967:*(long**)param_1 = plVar23;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Control flow encountered bad instruction data *//* HashMap<StringName, String, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, String> > >::~HashMap() */void HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::~HashMap(HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<Pair<StringName, ShaderLanguage::ShaderNode::Varying>, DefaultAllocator>::~List() */void List<Pair<StringName,ShaderLanguage::ShaderNode::Varying>,DefaultAllocator>::~List(List<Pair<StringName,ShaderLanguage::ShaderNode::Varying>,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<String, DefaultAllocator>::~List() */void List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName> >::~HashSet() */void HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::~HashSet(HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* Pair<StringName, ShaderLanguage::ShaderNode::Varying>::~Pair() */void Pair<StringName,ShaderLanguage::ShaderNode::Varying>::~Pair(Pair<StringName,ShaderLanguage::ShaderNode::Varying> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ShaderLanguage::ShaderCompileInfo::~ShaderCompileInfo() */void ShaderLanguage::ShaderCompileInfo::~ShaderCompileInfo(ShaderCompileInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* KeyValue<StringName, ShaderLanguage::FunctionInfo>::~KeyValue() */void KeyValue<StringName,ShaderLanguage::FunctionInfo>::~KeyValue(KeyValue<StringName,ShaderLanguage::FunctionInfo> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

